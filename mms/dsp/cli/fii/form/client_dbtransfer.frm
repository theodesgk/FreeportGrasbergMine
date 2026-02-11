.include db_lsize
.include minecare/db_mc
.include db_pos_data
.include powerview/db
.include hpgps/db_gpstool
.include db_jobcard
.include m2p/db_m2p
.include db_training
.include storeforward/db_prism
.init \
  db_mcconfig,
  db_mc,
  db_pos_data,
  define_records,
  define_database,
  db_gpstool,
  db_gpstoolshift,
  define_record
