// Class: SessionTableInserter


/* SessionTableInserter::~SessionTableInserter() */

void __thiscall SessionTableInserter::~SessionTableInserter(SessionTableInserter *this)

{
  *(undefined ***)this = &PTR__SessionTableInserter_06792610;
  MetricsRecordInserter::~MetricsRecordInserter((MetricsRecordInserter *)this);
  return;
}


/* SessionTableInserter::~SessionTableInserter() */

void __thiscall SessionTableInserter::~SessionTableInserter(SessionTableInserter *this)

{
  ~SessionTableInserter(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SessionTableInserter::SessionTableInserter(Sexy::MetricsManager*, std::string const&, std::string
   const&, std::string const&) */

void __thiscall
SessionTableInserter::SessionTableInserter
          (SessionTableInserter *this,MetricsManager *param_1,string *param_2,string *param_3,
          string *param_4)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  string *psVar4;
  string *psVar5;
  undefined8 uVar6;
  ProfileMgr *this_00;
  PlayerInfo *pPVar7;
  wchar16 *extraout_x1;
  wstring *extraout_x1_00;
  wchar16 *extraout_x1_01;
  string *this_01;
  LineBreakCategory *pLVar8;
  LineBreakCategory *pLVar9;
  long *plVar10;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this_01 = asStack_18;
  local_8 = ___stack_chk_guard;
  std::string::string(this_01,"SessionStart");
  std::string::string(asStack_10,"1.0");
  MetricsRecordInserter::MetricsRecordInserter
            ((MetricsRecordInserter *)this,param_1,this_01,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(this_01);
  nop();
  *(undefined ***)this = &PTR__SessionTableInserter_06792610;
  pLVar9 = (LineBreakCategory *)&Sexy::gSexyAppBase;
  plVar10 = *(long **)(Sexy::gSexyAppBase + 0x60);
  pLVar8 = Sexy::gSexyAppBase;
  std::string::string(asStack_10,"Environment");
  MetricsRecordInserter::Add((MetricsRecordInserter *)this,asStack_10,param_2);
  std::string::~string(asStack_10);
  nop();
  std::string::string(this_01,"OSVersion");
  pcVar3 = (char *)(**(code **)(*plVar10 + 0x28))(plVar10,0);
  std::string::string(asStack_10,pcVar3);
  MetricsRecordInserter::Add((MetricsRecordInserter *)this,this_01,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(this_01);
  nop();
  std::string::string(this_01,"HardwareVersion");
  pcVar3 = (char *)(**(code **)(*plVar10 + 0x28))(plVar10,1);
  std::string::string(asStack_10,pcVar3);
  MetricsRecordInserter::Add((MetricsRecordInserter *)this,this_01,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(this_01);
  nop();
  psVar4 = std::string::string(this_01,"SNSUserID");
  PublicBasicInfo::getPublicIP((PublicBasicInfo *)psVar4);
  MetricsRecordInserter::Add((MetricsRecordInserter *)this,this_01,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(this_01);
  nop();
  psVar4 = this_01;
  psVar5 = std::string::string(asStack_10,"Connected");
  bVar1 = (bool)EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                          ((wchar16 *)psVar5,extraout_x1,(LineBreakCategory *)psVar4,pLVar8,pLVar9);
  MetricsRecordInserter::Add((MetricsRecordInserter *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  psVar4 = std::string::string(this_01,"PvZPopCapID");
  PublicBasicInfo::getPCPID((PublicBasicInfo *)psVar4);
  MetricsRecordInserter::Add((MetricsRecordInserter *)this,this_01,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(this_01);
  nop();
  std::string::string(asStack_20,"PvZPopCapIDSubtype");
  ProfileUtils::Profile();
  PlayerInfo::AM_GetName();
  Sexy::SexyStringToUTF8String((Sexy *)asStack_10,extraout_x1_00);
  MetricsRecordInserter::Add((MetricsRecordInserter *)this,asStack_20,this_01);
  std::string::~string(this_01);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_10,"DeviceID");
  psVar4 = (string *)Sexy::MetricsManager::DeviceId(*(MetricsManager **)(this + 8));
  MetricsRecordInserter::Add((MetricsRecordInserter *)this,asStack_10,psVar4);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_20,"SessionID");
  uVar6 = Sexy::MetricsManager::DeviceId(*(MetricsManager **)(this + 8));
  FUN_05475ffc(asStack_10,uVar6,0,0x18);
  std::operator+(asStack_10,param_3);
  MetricsRecordInserter::Add((MetricsRecordInserter *)this,asStack_20,this_01);
  std::string::~string(this_01);
  std::string::~string(asStack_10);
  std::string::~string(asStack_20);
  nop();
  psVar4 = std::string::string(this_01,"Gender");
  PublicBasicInfo::getPublicIP((PublicBasicInfo *)psVar4);
  MetricsRecordInserter::Add((MetricsRecordInserter *)this,this_01,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(this_01);
  nop();
  psVar4 = std::string::string(asStack_10,"NumFBFriends");
  iVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    ((wchar16 *)psVar4,extraout_x1_01,(LineBreakCategory *)this_01,pLVar8,pLVar9);
  MetricsRecordInserter::Add((MetricsRecordInserter *)this,asStack_10,iVar2);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"TotalLevelsCompleted");
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = ProfileUtils::CompletedLevelCount(pPVar7);
  MetricsRecordInserter::Add((MetricsRecordInserter *)this,asStack_10,iVar2);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

