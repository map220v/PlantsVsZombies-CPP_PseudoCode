// Class: TreasureYeti


/* TreasureYeti::IsSpawned() */

byte TreasureYeti::IsSpawned(void)

{
  bool bVar1;
  byte bVar2;
  ProfileMgr *this;
  NewPVPMgr *this_00;
  string *psVar3;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (NewPVPMgr *)ProfileMgr::GetCurrentProfile(this);
  psVar3 = (string *)NewPVPMgr::GetSunUpgradeInfos(this_00);
  bVar1 = std::operator!=(psVar3,"none");
  bVar2 = 0;
  if (bVar1) {
    NewPVPMgr::GetSunUpgradeInfos(this_00);
    bVar2 = FUN_0547419c();
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* TreasureYeti::YetiEscaped() */

void TreasureYeti::YetiEscaped(void)

{
  char cVar1;
  bool bVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  string *psVar3;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  cVar1 = PlayerInfo::IsYetiTutorialPlayed(this_00);
  if (cVar1 == '\0') {
    psVar3 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    bVar2 = std::operator==(psVar3,"egypt5");
    if (bVar2) {
      MessageRouter::Post((_func_void *)gMessageRouter);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TreasureYeti::RemoveFromMap() */

void TreasureYeti::RemoveFromMap(void)

{
  bool bVar1;
  char cVar2;
  ProfileMgr *this;
  NewPVPMgr *this_00;
  string *psVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (NewPVPMgr *)ProfileMgr::GetCurrentProfile(this);
  psVar3 = (string *)NewPVPMgr::GetSunUpgradeInfos(this_00);
  bVar1 = std::operator!=(psVar3,"none");
  if (bVar1) {
    NewPVPMgr::GetSunUpgradeInfos(this_00);
    cVar2 = FUN_0547419c();
    if ((cVar2 == '\0') &&
       (cVar2 = PlayerInfo::IsYetiTutorialPlayed((PlayerInfo *)this_00), cVar2 != '\0')) {
      std::string::string(asStack_10,"none");
      PlayerInfo::SetTreasureYetiLocation((string *)this_00);
      std::string::~string(asStack_10);
      nop();
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TreasureYeti::ScheduleNextYeti() */

void TreasureYeti::ScheduleNextYeti(void)

{
  int iVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  ResourceInfo *pRVar2;
  TimeMgr *this_01;
  long lVar3;
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  RtName aRStack_28 [16];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  Sexy::RtName::RtName(aRStack_28,L"TreasureYetiSchedule");
  Sexy::RtName::RtName(aRStack_18,L"PropertySheets");
  Sexy::RtId::RtId(aRStack_38,aRStack_28,aRStack_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  Sexy::RtId::~RtId(aRStack_38);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtName::~RtName(aRStack_28);
  this_01 = (TimeMgr *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  lVar3 = TimeMgr::GetDate(this_01);
  iVar1 = RandRangeInt(*(int *)(pRVar2 + 0x10),*(int *)(pRVar2 + 0x14));
  PlayerInfo::SetNextTreasureYetiTime(this_00,lVar3 + iVar1 * 0x3c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TreasureYeti::SpawnOnMap(bool) */

void TreasureYeti::SpawnOnMap(bool param_1)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long lVar2;
  TimeMgr *pTVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsSpawned();
  if (cVar1 == '\0') {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    lVar2 = PlayerInfo::GetLastTreasureYetiTime(this_00);
    if (lVar2 == -1) {
      pTVar3 = (TimeMgr *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
      lVar2 = TimeMgr::GetDate(pTVar3);
      PlayerInfo::SetLastTreasureYetiTime(this_00,lVar2);
      ScheduleNextYeti();
      std::string::string(asStack_10,"egypt5");
      PlayerInfo::SetTreasureYetiLocation((string *)this_00);
      std::string::~string(asStack_10);
      nop();
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
    else {
      pTVar3 = (TimeMgr *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
      lVar2 = TimeMgr::GetDate(pTVar3);
      PlayerInfo::SetLastTreasureYetiTime(this_00,lVar2);
      ScheduleNextYeti();
      if (param_1) {
        std::string::string(asStack_10,"egyptchallenge0_1");
        PlayerInfo::SetTreasureYetiLocation((string *)this_00);
        std::string::~string(asStack_10);
        nop();
      }
      else {
        FUN_046eb598();
      }
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

