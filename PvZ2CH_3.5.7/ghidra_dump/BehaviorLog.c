// Class: BehaviorLog


/* BehaviorLog::getModeString() */

undefined8 __thiscall BehaviorLog::getModeString(BehaviorLog *this)

{
  undefined8 in_x8;
  
  FUN_04fa5ab4();
  return in_x8;
}


/* BehaviorLog::needRefreshSession() */

void BehaviorLog::needRefreshSession(void)

{
  FUN_04fa57a4(1);
  return;
}


/* BehaviorLog::resume() */

void BehaviorLog::resume(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  if ((ulong)(tVar1 - DAT_06ba7720) < 0x3c) {
    return;
  }
  needRefreshSession();
  return;
}


/* BehaviorLog::pause() */

void BehaviorLog::pause(void)

{
  DAT_06ba7720 = time((time_t *)0x0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BehaviorLog::sendLog(std::string const&, DValue const&) */

void BehaviorLog::sendLog(string *param_1,DValue *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  LogDBInfo *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_0547429c();
  ::DValue::getDescription();
  uVar2 = FUN_0547429c(asStack_10);
  Sexy::OutputDebugStrF((wchar_t *)"%s:%s\n",uVar1,uVar2);
  std::string::~string(asStack_10);
  this = (LogDBInfo *)LogDBInfo::getInstance();
  LogDBInfo::sendMsg(this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BehaviorLog::gameStart() */

void BehaviorLog::gameStart(void)

{
  long *plVar1;
  string asStack_30 [8];
  Log_GameStart aLStack_28 [16];
  DValue aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Log_GameStart::Log_GameStart(aLStack_28);
  ::DValue::DValue(aDStack_18);
  plVar1 = (long *)Log_GameStart::getBasicInfo(aLStack_28,aDStack_18);
  (**(code **)(*plVar1 + 8))(plVar1,aDStack_18);
  Log_GameStart::getTableName(aLStack_28);
  sendLog(asStack_30,aDStack_18);
  std::string::~string(asStack_30);
  ::DValue::~DValue(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BehaviorLog::funnel(std::string const&) */

void BehaviorLog::funnel(string *param_1)

{
  bool bVar1;
  string asStack_30 [8];
  Log_GameStart_Funnel aLStack_28 [16];
  DValue aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Log_GameStart_Funnel::Log_GameStart_Funnel(aLStack_28);
  bVar1 = std::operator==(param_1,"Login");
  if ((bVar1) || (bVar1 = std::operator==(param_1,"Login_Failed"), bVar1)) {
    PublicBasicInfo::setNeedUserID((PublicBasicInfo *)aLStack_28,true);
  }
  ::DValue::DValue(aDStack_18);
  Log_GameStart_Funnel::funnel(aLStack_28,param_1,aDStack_18);
  Log_GameStart_Funnel::getTableName(aLStack_28);
  sendLog(asStack_30,aDStack_18);
  std::string::~string(asStack_30);
  ::DValue::~DValue(aDStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BehaviorLog::gameEnd() */

void BehaviorLog::gameEnd(void)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"GameEnd");
  funnel(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BehaviorLog::gameRegister() */

void BehaviorLog::gameRegister(void)

{
  long *plVar1;
  string asStack_30 [8];
  Log_Register aLStack_28 [16];
  DValue aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Log_Register::Log_Register(aLStack_28);
  PublicBasicInfo::setNeedUserID((PublicBasicInfo *)aLStack_28,true);
  ::DValue::DValue(aDStack_18);
  plVar1 = (long *)Log_Register::getBasicInfo(aLStack_28,aDStack_18);
  (**(code **)(*plVar1 + 8))(plVar1,aDStack_18);
  Log_Register::getTableName(aLStack_28);
  sendLog(asStack_30,aDStack_18);
  std::string::~string(asStack_30);
  ::DValue::~DValue(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BehaviorLog::itemLogin(std::string const&) */

void BehaviorLog::itemLogin(string *param_1)

{
  long *plVar1;
  string asStack_30 [8];
  Log_Item_Login aLStack_28 [16];
  DValue aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Log_Item_Login::Log_Item_Login(aLStack_28);
  PublicBasicInfo::setNeedUserID((PublicBasicInfo *)aLStack_28,true);
  ::DValue::DValue(aDStack_18);
  plVar1 = (long *)Log_Ingame_Behavior::getBasicInfo((Log_Ingame_Behavior *)aLStack_28,aDStack_18);
  (**(code **)(*plVar1 + 0x20))(plVar1,param_1,aDStack_18);
  Log_Item_Login::getTableName(aLStack_28);
  sendLog(asStack_30,aDStack_18);
  std::string::~string(asStack_30);
  ::DValue::~DValue(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BehaviorLog::recharge(RechargeInfo const&, std::string const&) */

void BehaviorLog::recharge(RechargeInfo *param_1,string *param_2)

{
  long *plVar1;
  string asStack_30 [8];
  Log_Recharge aLStack_28 [16];
  DValue aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Log_Recharge::Log_Recharge(aLStack_28);
  PublicBasicInfo::setNeedUserID((PublicBasicInfo *)aLStack_28,true);
  ::DValue::DValue(aDStack_18);
  plVar1 = (long *)Log_Ingame_Behavior::getBasicInfo((Log_Ingame_Behavior *)aLStack_28,aDStack_18);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x20))(plVar1,param_1,aDStack_18);
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2,aDStack_18);
  Log_Recharge::getTableName(aLStack_28);
  sendLog(asStack_30,aDStack_18);
  std::string::~string(asStack_30);
  ::DValue::~DValue(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BehaviorLog::inGameBehavior(std::string const&, std::vector<std::string,
   std::allocator<std::string > > const&, std::string const&) */

void BehaviorLog::inGameBehavior(string *param_1,vector *param_2,string *param_3)

{
  long *plVar1;
  string asStack_30 [8];
  Log_Ingame_Behavior aLStack_28 [16];
  DValue aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Log_Ingame_Behavior::Log_Ingame_Behavior(aLStack_28);
  PublicBasicInfo::setNeedUserID((PublicBasicInfo *)aLStack_28,true);
  ::DValue::DValue(aDStack_18);
  plVar1 = (long *)Log_Ingame_Behavior::getBasicInfo(aLStack_28,aDStack_18);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x20))(plVar1,param_1,param_2,aDStack_18);
  (**(code **)(*plVar1 + 0x18))(plVar1,param_3,aDStack_18);
  Log_Ingame_Behavior::getTableName(aLStack_28);
  sendLog(asStack_30,aDStack_18);
  std::string::~string(asStack_30);
  ::DValue::~DValue(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BehaviorLog::itemPurchase(std::string const&, std::string const&, std::string const&) */

void BehaviorLog::itemPurchase(string *param_1,string *param_2,string *param_3)

{
  undefined1 auStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"Item_Purchase");
  FUN_05475d88(asStack_30,param_1);
  FUN_05475d88(asStack_28,param_2);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,asStack_30,2,auStack_40);
  inGameBehavior(asStack_38,(vector *)avStack_20,param_3);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BehaviorLog::itemPurchaseEx(std::string const&, std::string const&, std::string const&,
   std::string const&, std::string const&) */

void BehaviorLog::itemPurchaseEx
               (string *param_1,string *param_2,string *param_3,string *param_4,string *param_5)

{
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  vector<std::string,std::allocator<std::string>> avStack_40 [24];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_48,"Item_Purchase");
  FUN_05475d88(asStack_28,param_1);
  FUN_05475d88(asStack_20,param_2);
  FUN_05475d88(asStack_18,param_3);
  FUN_05475d88(asStack_10,param_4);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_40,asStack_28,4,auStack_50);
  inGameBehavior(asStack_48,(vector *)avStack_40,param_5);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_40);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_48);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BehaviorLog::missionStart(std::string const&, int, int) */

void BehaviorLog::missionStart(string *param_1,int param_2,int param_3)

{
  char *__s;
  undefined1 auStack_70 [16];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  DString aDStack_48 [16];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (DAT_06ba75f8 != '\0') {
    Sexy::OutputDebugStrF((wchar_t *)"missionStart s_missionRecordInfo.flag = true exsit error");
  }
  thunk_FUN_05475e00(&DAT_06ba7600,param_1);
  DAT_06ba75f8 = 1;
  DAT_06ba7608 = param_2;
  DAT_06ba760c = param_3;
  DString::DString(aDStack_48,param_3);
  FUN_04fa5ab4(asStack_60);
  std::string::string(asStack_58,"Mission_Start");
  FUN_05475d88(asStack_38,param_1);
  __s = (char *)DString::c_str(aDStack_48);
  std::string::string(asStack_30,__s);
  FUN_05475d88(asStack_28,asStack_60);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,asStack_38,3,auStack_70);
  std::string::string(asStack_50,"");
  inGameBehavior(asStack_58,(vector *)avStack_20,asStack_50);
  std::string::~string(asStack_50);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  DString::~DString(aDStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BehaviorLog::missionPurchase(std::string const&, std::string const&, std::string const&) */

void BehaviorLog::missionPurchase(string *param_1,string *param_2,string *param_3)

{
  bool bVar1;
  char *__s;
  undefined1 auStack_58 [8];
  string asStack_50 [8];
  DString aDStack_48 [16];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (DAT_06ba75f8 == '\0') {
    Sexy::OutputDebugStrF((wchar_t *)"missionPurchase s_missionRecordInfo.flag = false exsit error")
    ;
    bVar1 = std::operator!=((string *)&DAT_06ba7600,param_2);
    if (bVar1) goto LAB_04fa87dc;
  }
  else {
    bVar1 = std::operator!=((string *)&DAT_06ba7600,param_2);
    if (bVar1) goto LAB_04fa87dc;
  }
  DString::DString(aDStack_48,DAT_06ba760c);
  std::string::string(asStack_50,"Item_Purchase");
  FUN_05475d88(asStack_38,param_1);
  FUN_05475d88(asStack_30,param_2);
  __s = (char *)DString::c_str(aDStack_48);
  std::string::string(asStack_28,__s);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,asStack_38,3,auStack_58);
  inGameBehavior(asStack_50,(vector *)avStack_20,param_3);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_50);
  nop();
  DString::~DString(aDStack_48);
LAB_04fa87dc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BehaviorLog::missionPurchaseEx(std::string const&, std::string const&, std::string const&,
   std::string const&) */

void BehaviorLog::missionPurchaseEx(string *param_1,string *param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char *pcVar2;
  undefined1 auStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  vector<std::string,std::allocator<std::string>> avStack_40 [24];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (DAT_06ba75f8 == '\0') {
    Sexy::OutputDebugStrF((wchar_t *)"missionPurchase s_missionRecordInfo.flag = false exsit error")
    ;
    bVar1 = std::operator!=((string *)&DAT_06ba7600,param_2);
    if (bVar1) goto LAB_04fa898c;
  }
  else {
    bVar1 = std::operator!=((string *)&DAT_06ba7600,param_2);
    if (bVar1) goto LAB_04fa898c;
  }
  FUN_04fa5ab4(asStack_50);
  std::string::string(asStack_48,"Item_Purchase");
  FUN_05475d88(asStack_28,param_1);
  FUN_05475d88(asStack_20,param_2);
  pcVar2 = (char *)FUN_0547429c(asStack_50);
  std::string::string(asStack_18,pcVar2);
  pcVar2 = (char *)FUN_0547429c(param_3);
  std::string::string(asStack_10,pcVar2);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_40,asStack_28,4,auStack_58);
  inGameBehavior(asStack_48,(vector *)avStack_40,param_4);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_40);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  nop();
  nop();
  std::string::~string(asStack_48);
  nop();
  std::string::~string(asStack_50);
LAB_04fa898c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BehaviorLog::missionEnd(std::string const&, bool, std::string const&, std::string const&,
   std::string const&, std::string const&) */

void BehaviorLog::missionEnd
               (string *param_1,bool param_2,string *param_3,string *param_4,string *param_5,
               string *param_6)

{
  bool bVar1;
  char cVar2;
  GachaConfig *this;
  float *pfVar3;
  char *pcVar4;
  vector<std::string,std::allocator<std::string>> *__n;
  float fVar5;
  undefined1 auStack_a0 [16];
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  DString aDStack_70 [16];
  DString aDStack_60 [16];
  DString aDStack_50 [16];
  vector<std::string,std::allocator<std::string>> avStack_40 [24];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (DAT_06ba75f8 == '\0') {
    Sexy::OutputDebugStrF((wchar_t *)"missionEnd s_missionRecordInfo.flag = false exsit error");
    bVar1 = std::operator!=((string *)&DAT_06ba7600,param_1);
    if (bVar1) goto LAB_04fa8b8c;
  }
  else {
    bVar1 = std::operator!=((string *)&DAT_06ba7600,param_1);
    if (bVar1) goto LAB_04fa8b8c;
  }
  DAT_06ba75f8 = '\0';
  fVar5 = (float)PVZ_T();
  this = (GachaConfig *)LawnApp::GetMetricsCollector(gLawnApp);
  pfVar3 = (float *)GachaConfig::GetGachaPlantRewardList(this);
  DString::DString(aDStack_70,fVar5 - *pfVar3);
  DString::DString(aDStack_60,DAT_06ba760c);
  FUN_04fa5ab4(asStack_90);
  DString::DString(aDStack_50,(uint)param_2);
  __n = avStack_40;
  std::string::string(asStack_88,"");
  nop();
  if (param_2) {
    pcVar4 = "1";
  }
  else {
    pcVar4 = "0";
  }
  std::string::append(asStack_88,pcVar4,(size_t)__n);
  std::string::string(asStack_78,"Mission_Finish");
  FUN_05475d88(asStack_28,param_1);
  pcVar4 = (char *)DString::c_str(aDStack_70);
  std::string::string(asStack_20,pcVar4);
  FUN_05475d88(asStack_18,asStack_90);
  pcVar4 = (char *)DString::c_str(aDStack_50);
  std::string::string(asStack_10,pcVar4);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_40,asStack_28,4,asStack_80);
  inGameBehavior(asStack_78,(vector *)avStack_40,param_5);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_40);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  nop();
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_80,"Mission_Statistics");
  FUN_05475d88(asStack_28,param_1);
  pcVar4 = (char *)DString::c_str(aDStack_60);
  std::string::string(asStack_20,pcVar4);
  FUN_05475d88(asStack_18,param_3);
  FUN_05475d88(asStack_10,param_4);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_40,asStack_28,4,auStack_a0);
  std::string::string(asStack_78,"");
  inGameBehavior(asStack_80,(vector *)avStack_40,asStack_78);
  std::string::~string(asStack_78);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_40);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  nop();
  std::string::~string(asStack_80);
  nop();
  cVar2 = FUN_0547419c(param_6);
  if (cVar2 == '\0') {
    std::string::string(asStack_80,"Mission_Experience_Statistics");
    FUN_05475d88(asStack_28,param_1);
    FUN_05475d88(asStack_20,param_6);
    FUN_05475d88(asStack_18,asStack_90);
    FUN_05475d88(asStack_10,asStack_88);
    std::vector<std::string,std::allocator<std::string>>::vector(avStack_40,asStack_28,4,auStack_a0)
    ;
    std::string::string(asStack_78,"");
    inGameBehavior(asStack_80,(vector *)avStack_40,asStack_78);
    std::string::~string(asStack_78);
    nop();
    std::vector<std::string,std::allocator<std::string>>::~vector(avStack_40);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    std::string::~string(asStack_28);
    std::string::~string(asStack_80);
    nop();
  }
  std::string::~string(asStack_88);
  DString::~DString(aDStack_50);
  std::string::~string(asStack_90);
  DString::~DString(aDStack_60);
  DString::~DString(aDStack_70);
LAB_04fa8b8c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BehaviorLog::missionPay(std::string const&, std::string const&, std::string const&) */

void BehaviorLog::missionPay(string *param_1,string *param_2,string *param_3)

{
  undefined1 auStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"Mission_Pay");
  FUN_05475d88(asStack_30,param_1);
  FUN_05475d88(asStack_28,param_2);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,asStack_30,2,auStack_40);
  inGameBehavior(asStack_38,(vector *)avStack_20,param_3);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BehaviorLog::funnelStart(std::string const&) */

void BehaviorLog::funnelStart(string *param_1)

{
  string asStack_30 [8];
  Log_GameStart_Funnel aLStack_28 [16];
  DValue aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Log_GameStart_Funnel::Log_GameStart_Funnel(aLStack_28);
  ::DValue::DValue(aDStack_18);
  Log_GameStart_Funnel::funnelStart(aLStack_28,param_1,aDStack_18);
  Log_GameStart_Funnel::getTableName(aLStack_28);
  sendLog(asStack_30,aDStack_18);
  std::string::~string(asStack_30);
  ::DValue::~DValue(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BehaviorLog::funnelEnd(std::string const&) */

void BehaviorLog::funnelEnd(string *param_1)

{
  string asStack_30 [8];
  Log_GameStart_Funnel aLStack_28 [16];
  DValue aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Log_GameStart_Funnel::Log_GameStart_Funnel(aLStack_28);
  ::DValue::DValue(aDStack_18);
  Log_GameStart_Funnel::funnelEnd(aLStack_28,param_1,aDStack_18);
  Log_GameStart_Funnel::getTableName(aLStack_28);
  sendLog(asStack_30,aDStack_18);
  std::string::~string(asStack_30);
  ::DValue::~DValue(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BehaviorLog::funnelEnd(std::string const&, bool) */

void BehaviorLog::funnelEnd(string *param_1,bool param_2)

{
  string asStack_30 [8];
  Log_GameStart_Funnel aLStack_28 [16];
  DValue aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Log_GameStart_Funnel::Log_GameStart_Funnel(aLStack_28);
  ::DValue::DValue(aDStack_18);
  Log_GameStart_Funnel::funnelEnd(aLStack_28,param_1,aDStack_18,param_2);
  Log_GameStart_Funnel::getTableName(aLStack_28);
  sendLog(asStack_30,aDStack_18);
  std::string::~string(asStack_30);
  ::DValue::~DValue(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BehaviorLog::event(std::string const&, std::vector<std::string, std::allocator<std::string > >
   const&, std::string const&) */

void BehaviorLog::event(string *param_1,vector *param_2,string *param_3)

{
  undefined8 local_30;
  undefined8 local_28;
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,param_2);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_28,(__normal_iterator *)&local_30);
  std::vector<std::string,std::allocator<std::string>>::insert(avStack_20,local_28,param_1);
  std::string::string((string *)&local_28,"Event");
  inGameBehavior((string *)&local_28,(vector *)avStack_20,param_3);
  std::string::~string((string *)&local_28);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BehaviorLog::missionEvent(std::string const&, std::string const&, std::string const&, std::string
   const&) */

void BehaviorLog::missionEvent(string *param_1,string *param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char *__s;
  undefined1 auStack_50 [8];
  DString aDStack_48 [16];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (DAT_06ba75f8 == '\0') {
    Sexy::OutputDebugStrF((wchar_t *)"missionEvent s_missionRecordInfo.flag = false exsit error");
    bVar1 = std::operator!=((string *)&DAT_06ba7600,param_2);
    if (bVar1) goto LAB_04faa7a0;
  }
  else {
    bVar1 = std::operator!=((string *)&DAT_06ba7600,param_2);
    if (bVar1) goto LAB_04faa7a0;
  }
  DString::DString(aDStack_48,DAT_06ba760c);
  FUN_05475d88(asStack_38,param_2);
  __s = (char *)DString::c_str(aDStack_48);
  std::string::string(asStack_30,__s);
  FUN_05475d88(asStack_28,param_3);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,asStack_38,3,auStack_50);
  event(param_1,(vector *)avStack_20,param_4);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  nop();
  DString::~DString(aDStack_48);
LAB_04faa7a0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

