FOR /R %%X IN (.) DO (
   ECHO %%X%
   CD   %%X%
   IF EXIST "links.cmd" CALL "links.cmd"
)

