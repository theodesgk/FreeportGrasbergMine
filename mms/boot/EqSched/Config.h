#if #arch(goic) || #arch(goiccan) || #arch(cgc)
CP(EqSched/RsnLoc.cfg OPT,CFGDEVICE/RsnLoc.cfg)
#if #arch(pe)
CP(EqSched/RsnLoc.cfg OPT,CFGDEVICE/RsnLoc3_.cfg)
CP(EqSched/RsnLoc.cfg OPT,CFGDEVICE/RsnLoc4_.cfg)
CP(EqSched/RsnLoc.cfg OPT,CFGDEVICE/RsnLoc5_.cfg)
CP(EqSched/RsnLoc.cfg OPT,CFGDEVICE/RsnLoc6_.cfg)
CP(EqSched/RsnLoc.cfg OPT,CFGDEVICE/RsnLoc7_.cfg)
CP(EqSched/RsnLoc.cfg OPT,CFGDEVICE/RsnLoc8_.cfg)
CP(EqSched/RsnLoc.cfg OPT,CFGDEVICE/RsnLoc9_.cfg)
#else
ln CFGDEVICE/RsnLoc.cfg RsnLocL3_.cfg
ln CFGDEVICE/RsnLoc.cfg RsnLocL4_.cfg
ln CFGDEVICE/RsnLoc.cfg RsnLocL5_.cfg
ln CFGDEVICE/RsnLoc.cfg RsnLocL6_.cfg
ln CFGDEVICE/RsnLoc.cfg RsnLocL7_.cfg
ln CFGDEVICE/RsnLoc.cfg RsnLocL8_.cfg
ln CFGDEVICE/RsnLoc.cfg RsnLocL9_.cfg
#endif
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLoc2.cfg)
#if #arch(pe)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL3_2.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL4_2.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL5_2.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL6_2.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL7_2.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL8_2.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL9_2.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL3_3.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL4_3.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL5_3.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL6_3.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL7_3.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL8_3.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL9_3.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL3_4.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL4_4.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL5_4.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL6_4.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL7_4.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL8_4.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL9_4.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL3_5.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL4_5.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL5_5.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL6_5.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL7_5.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL8_5.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL9_5.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL3_6.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL4_6.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL5_6.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL6_6.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL7_6.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL8_6.cfg)
CP(EqSched/RsnLoc2.cfg OPT,CFGDEVICE/RsnLocL9_6.cfg)
#else
ln CFGDEVICE/RsnLoc2.cfg RsnLocL3_2.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL4_2.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL5_2.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL6_2.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL7_2.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL8_2.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL9_2.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL3_3.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL4_3.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL5_3.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL6_3.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL7_3.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL8_3.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL9_3.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL3_4.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL4_4.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL5_4.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL6_4.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL7_4.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL8_4.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL9_4.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL3_5.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL4_5.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL5_5.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL6_5.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL7_5.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL8_5.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL9_5.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL3_6.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL4_6.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL5_6.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL6_6.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL7_6.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL8_6.cfg
ln CFGDEVICE/RsnLoc2.cfg RsnLocL9_6.cfg
#endif

#ifdef PORTRAIT
CP(EqSched/w2.cfg _PORTRAIT_=yes OPT,CFGDEVICE/w2.cfg)
CP(EqSched/w2.l1.cfg _PORTRAIT_=yes OPT,CFGDEVICE/w2.l1.cfg)
CP(EqSched/w2.l2.cfg _PORTRAIT_=yes OPT,CFGDEVICE/w2.l2.cfg)
CP(EqSched/w2.l3.cfg _PORTRAIT_=yes OPT,CFGDEVICE/w2.l3.cfg)
CP(EqSched/w2.Text.cfg _PORTRAIT_=yes OPT,CFGDEVICE/w2.Text.cfg)
CP(EqSched/w2.Text2.cfg _PORTRAIT_=yes OPT,CFGDEVICE/w2.Text2.cfg)
CP(EqSched/w2.Update.cfg _PORTRAIT_=yes OPT,CFGDEVICE/w2.Update.cfg)
CP(EqSched/w2.Main.cfg _PORTRAIT_=yes OPT,CFGDEVICE/w2.Main.cfg)
CP(EqSched/w2.Clock.cfg _PORTRAIT_=yes OPT,CFGDEVICE/w2.Clock.cfg)
CP(EqSched/w2.Toggle.cfg _PORTRAIT_=yes OPT,CFGDEVICE/w2.Toggle.cfg)
CP(EqSched/wk.cfg _PORTRAIT_=yes OPT,CFGDEVICE/wk.cfg)
CP(EqSched/SchedDetail.cfg _PORTRAIT_=yes OPT,CFGDEVICE/SchedDetail.cfg)
#else
CP(EqSched/w2.cfg OPT,CFGDEVICE/w2.cfg)
CP(EqSched/w2.l1.cfg OPT,CFGDEVICE/w2.l1.cfg)
CP(EqSched/w2.l2.cfg OPT,CFGDEVICE/w2.l2.cfg)
CP(EqSched/w2.l3.cfg OPT,CFGDEVICE/w2.l3.cfg)
CP(EqSched/w2.Text.cfg OPT,CFGDEVICE/w2.Text.cfg)
CP(EqSched/w2.Text2.cfg OPT,CFGDEVICE/w2.Text2.cfg)
CP(EqSched/w2.Update.cfg OPT,CFGDEVICE/w2.Update.cfg)
CP(EqSched/w2.Main.cfg OPT,CFGDEVICE/w2.Main.cfg)
CP(EqSched/w2.Clock.cfg OPT,CFGDEVICE/w2.Clock.cfg)
CP(EqSched/w2.Toggle.cfg OPT,CFGDEVICE/w2.Toggle.cfg)
CP(EqSched/wk.cfg OPT,CFGDEVICE/wk.cfg)
CP(EqSched/SchedDetail.cfg OPT,CFGDEVICE/SchedDetail.cfg)
#endif
#else
#endif
