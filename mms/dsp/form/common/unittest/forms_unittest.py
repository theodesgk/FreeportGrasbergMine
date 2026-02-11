import argparse
import os
import re
import tempfile

from pathlib import Path
from sys import platform

CURRENT_ENV = ""
GENERATE_CSV = False
TEST_FILE_REGEX = r".*_tests.frm"
TEST_D6FILE_REGEX = r".*_d6_tests.frm"
EXPR_REGEX = r"\.expr (test_[A-Za-z0-9_]+)"

FORMS_RUNNER = Path("/mms/dsp/bin/FormsRunner.exe")
FORM_NAME = Path("testing.frm")
FORM_ENCRYPTOR = Path()
BASE_FORM = """..
.include csv
.def dict_test_file "Test File"
.def dict_test_name "Test Case"
.def dict_passed "Passed"
.def dict_failed "Failed"
.expr ResultColor(result) result = dict_passed ? BG_GREEN : WHITE + BG_RED
.input ># {{ResultColor($)}}
..
.def cmd, test_file, test_case, output, did_run, last_column
.total tests(nil).last_column
.expr run_bunch_tests loop(tests("name").(tests.did_run = 0)) ..(
\tEVAL(tests.cmd),
\ttests.dir_run := 1)
{0}..
.init (
\tfailed_tests := 0,
\tpassed_tests := 0,
\tshow_failed := 1,
\tloop(tests("name").*) tests.output = 0 ? passed_tests := passed_tests + 1 : failed_tests := failed_tests + 1),
\tARGV.1 = "csv" ? (
\t\tset_csv_path("{1}"),
\t\tset_total_len(last_column),
\t\texport_total_csv(tests),
\t\texit
\t)
)
.equ ID tests("name").*
.equ NA tests.test_file
.equ TC tests.test_case
.equ RE tests.output
.equ FAILED failed_tests
.equ PASSED passed_tests
.vbool RESULT{{tests.output = 0 ? dict_passed : dict_failed}}
.vbool SF{{BOOLFMT(show_failed, 3)}} SF ? show_failed := 1 : show_failed :=  0, refresh
.expr DTF dict_test_file
.expr DTN dict_test_name
.expr RES "Result"
.expr ACT "Actual Output"
.expr filterTests show_failed ? tests.output = 0 ? return(0) : return(1) : return(1)
.expr ResultsHeader (
  ("DTF", "DTN", "RES", "ACT")\
  [ `x>>%-36s>`x>>%-35s>`x>>%-6s>`x>>%-38s>`x>]
)
.expr ResultsFirstLine (
  (36, 35, 6, 38)\
  [ `l%*qw%*qw%*qw%*qk>]
)
.expr ResultsSeperatorLine (
  (36, 35, 6, 38)\
  [\^`t%*qn%*qn%*qn%*qu>]
)
.expr ResultsLine (
  ("NA", "TC", "RESULT", "RE")\
  [ `x>>%-36s>`x>>%-35s>`x>>%-6s#`x>>%-38s_`x>]
)
.expr ResultsLastLine (
  (36, 35, 6, 38)\
  [V`t%*qv%*qv%*qv%*qj>]
)
.expr ResultsMidLine (
  (35, 34, 5, 37)\
  [ `x> %* `x> %* `x> %* `x> %* `x>]
)
..
.lines 30
.ins
.form ResultsFirstLine
.form ResultsHeader
.form ResultsSeperatorLine
.window 20
.wild tests("name").(filterTests)
.form ResultsLine
.form ResultsMidLine
.form ResultsMidLine
.form ResultsMidLine
.form ResultsMidLine
.form ResultsMidLine
.form ResultsMidLine
.form ResultsMidLine
.form ResultsMidLine
.form ResultsMidLine
.form ResultsMidLine
.form ResultsMidLine
.form ResultsMidLine
.form ResultsMidLine
.form ResultsMidLine
.form ResultsMidLine
.form ResultsMidLine
.form ResultsMidLine
.form ResultsMidLine
.form ResultsMidLine
.form ResultsMidLine
.window
.form ResultsLastLine
..
  `SUMMARY_
.text `@ ^[[7;32;40m ^[[0m
  `Passed tests:@ > PASSED >                                                    < SF? Show only failed tests
.text `@ ^[[7;31m ^[[0m
  `Failed tests:@ > FAILED >

  *need to re-run python script to update results
"""

class TestFile():
    def __init__(self, filename, root_folder):
        self.filename = filename
        self.root = Path(root_folder)
        self.expr_set = set()

        TestFile.encryptor(self.root / filename, action="decrypt")

    def add_expression(self, expr):
        self.expr_set.add(expr)

    @classmethod
    def encryptor(cls, form, action="encrypt"):
        f_encryptor = FORM_ENCRYPTOR / "FormsEncryptor.exe"
        if action == "encrypt":
            cmd = f'{f_encryptor.resolve()} -e "{form}"'
        else:
            cmd = f'{f_encryptor.resolve()} "{form}"'
        os.system(cmd)


def get_testing_files(test_dir):
    """
    Given a directory, gets all forms files that match the testing nomenclature.

    Args:
        test_dir(str): directory to be analyzed

    Returns:
        A list of TestFile objects for each located file.
    """
    selected_files = []

    for root, dirs, files in os.walk(test_dir):
        for f in files:
            if re.match(TEST_FILE_REGEX, f):
                if CURRENT_ENV == "D5" and re.match(TEST_D6FILE_REGEX, f):
                    continue
                selected_files.append(TestFile(f, root))

    return selected_files

def parse_testing_files(selected_files):
    """
    Parse located files for the expressions that match the test pattern.
Args:
        selected_files(list<TestFile>): list of TestFile objects

    Returns:
        Same list with list of expressions updated
    """
    for test_file in selected_files:
        with open(test_file.root / test_file.filename, "r") as fd:
            for line in fd.readlines():
                match = re.match(EXPR_REGEX, line)
                test_file.add_expression(match.group(1)) if match is not None else None

    return selected_files

def generate_test_form(selected_files):
    """
    Generate FORMS code to execute the tests found. Creating a total to store
    test cases data and running tests for each file  at the time. The new form
    file is saved and run.

    Args:
        selected_files(list<TestFile>): list of TestFile objects
    """
    forms_content = ""

    for test_file in selected_files:
        relative_file = (test_file.root / test_file.filename)
        print(f"Adding file {relative_file.as_posix()} for testing...")
        TestFile.encryptor(test_file.root / test_file.filename)
        forms_content += f".include unittest/{relative_file.as_posix()}\n"
        forms_content += ".init \\\n"

        for expr in test_file.expr_set:
            print(f"\tTest {expr}...")
            forms_content += f'\ttests("create") := "{test_file.filename}.{expr}",\n'
            forms_content += f'\ttests.test_file := "{relative_file.as_posix()}",\n'
            forms_content += f'\ttests.test_case := "{expr}",\n'
            forms_content += f'\ttests.cmd := "tests.output := {expr}",\n'
            forms_content += f'\ttests.did_run := 0,\n'
        forms_content += '\trun_bunch_tests(),\n'
        forms_content += '\tnil\n'

    tmp = tempfile.mkstemp(suffix=".csv", text=True)[1]
    tmp = tmp.replace("\\", "\\\\") if CURRENT_ENV == "D6" else tmp  # needs to add more backslashes on windows
    # TODO: improve  forms running... D6
    with open(FORM_NAME, 'w') as fd:
        fd.write(BASE_FORM.format(forms_content, tmp))

    csv_param = " : csv" if GENERATE_CSV else ""
    if CURRENT_ENV == "D5":
        os.system(f"mms keypad form=unittest/{FORM_NAME}" + csv_param)
    else:
        TestFile.encryptor(FORM_NAME.resolve())
        os.system(f"{FORMS_RUNNER} unittest/{FORM_NAME}" + csv_param)

def init_env():
    """
    Initialize global variables and check for environment variables needed.
    """
    global CURRENT_ENV, FORM_ENCRYPTOR
    if platform.startswith("linux"):
        CURRENT_ENV = "D5"
    else:
        CURRENT_ENV = "D6"
        try:
            FORM_ENCRYPTOR = Path(os.environ['FENCRYPTOR_PATH'])
        except KeyError:
            print("Please, add your path to FENCRYPTOR_PATH system environment variable!")
            return False

    return True

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Parse and create FORMS unit and functional tests")
    parser.add_argument("--dir", help="Directory to look for FORMS test files")
    parser.add_argument("--csv", help="Create a CSV file at the end of testing", action="store_true")

    args = parser.parse_args()
    if args.csv:
        GENERATE_CSV = True
    if args.dir is not None:
        if not init_env():
            exit(1)
        testing_files = get_testing_files(args.dir.rstrip("/\\"))
        parse_testing_files(testing_files)

        generate_test_form(testing_files)
