// Class: ProfileUtils


/* ProfileUtils::HasCompletedLevel(std::string const&, bool, PlayerInfo*) */

void ProfileUtils::HasCompletedLevel(string *param_1,bool param_2,PlayerInfo *param_3)

{
  if (!param_2) {
    PlayerInfo::GetLevelCompleted(param_3,param_1);
    return;
  }
  PlayerInfo::GetHardLevelCompleted(param_3,param_1);
  return;
}


/* ProfileUtils::PlayTimeSeconds(PlayerInfo*) */

long ProfileUtils::PlayTimeSeconds(PlayerInfo *param_1)

{
  long lVar1;
  int iVar2;
  time_t tVar3;
  
  tVar3 = time((time_t *)0x0);
  iVar2 = FUN_043455a0(*(undefined4 *)(param_1 + 0x600));
  lVar1 = tVar3 - iVar2;
  if (lVar1 < 0) {
    lVar1 = 0;
  }
  return lVar1;
}


/* ProfileUtils::TotalGamesPlayed(PlayerInfo*) */

int ProfileUtils::TotalGamesPlayed(PlayerInfo *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  SavedWorldMapEventData *this;
  WorldDataManager *this_00;
  string *psVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  
  puVar1 = (undefined8 *)PlayerInfo::GetSavedWorldMapEvents(param_1);
  uVar6 = *puVar1;
  uVar5 = 0;
  iVar7 = 0;
  uVar2 = FUN_043456c0(uVar6,puVar1[1]);
  if (uVar2 != 0) {
    do {
      this = (SavedWorldMapEventData *)FUN_043456cc(uVar6,uVar5);
      if (*(int *)(this + 4) == 3) {
        this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
        psVar3 = (string *)SavedWorldMapEventData::GetName(this);
        lVar4 = WorldDataManager::FindEventByLevelName(this_00,psVar3);
        uVar6 = *puVar1;
        if (lVar4 == 0) {
          uVar2 = FUN_043456c0(uVar6,puVar1[1]);
        }
        else {
          iVar7 = iVar7 + *(int *)(this + 0x10);
          uVar2 = FUN_043456c0(uVar6,puVar1[1]);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return iVar7;
}


/* ProfileUtils::CheckValidUserName(std::wstring const&, std::vector<std::wstring,
   std::allocator<std::wstring > > const&) */

undefined8 ProfileUtils::CheckValidUserName(wstring *param_1,vector *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  do {
    uVar4 = *(undefined8 *)param_2;
    uVar2 = FUN_043456d4(uVar4,*(undefined8 *)(param_2 + 8));
    if (uVar2 <= uVar3) {
      return 1;
    }
    uVar4 = FUN_043456e0(uVar4,uVar3);
    uVar3 = uVar3 + 1;
    lVar1 = FUN_054767d0(param_1,uVar4,0);
  } while (lVar1 == -1);
  return 0;
}


/* ProfileUtils::TotalGamesPlayedForWorld(std::string const&, PlayerInfo*) */

int ProfileUtils::TotalGamesPlayedForWorld(string *param_1,PlayerInfo *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  ulong uVar3;
  SavedWorldMapEventData *this;
  WorldDataManager *pWVar4;
  string *psVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  
  puVar2 = (undefined8 *)PlayerInfo::GetSavedWorldMapEvents(param_2);
  uVar8 = *puVar2;
  uVar7 = 0;
  iVar9 = 0;
  uVar3 = FUN_043456c0(uVar8,puVar2[1]);
  if (uVar3 != 0) {
    do {
      this = (SavedWorldMapEventData *)FUN_043456cc(uVar8,uVar7);
      if (*(int *)(this + 4) == 3) {
        pWVar4 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
        psVar5 = (string *)SavedWorldMapEventData::GetName(this);
        lVar6 = WorldDataManager::FindEventByLevelName(pWVar4,psVar5);
        if (lVar6 != 0) {
          pWVar4 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
          psVar5 = (string *)SavedWorldMapEventData::GetName(this);
          lVar6 = WorldDataManager::FindWorldDataByLevelName(pWVar4,psVar5);
          cVar1 = std::operator==((string *)(lVar6 + 0x38),param_1);
          if (cVar1 != '\0') {
            uVar8 = *puVar2;
            iVar9 = iVar9 + *(int *)(this + 0x10);
            uVar3 = FUN_043456c0(uVar8,puVar2[1]);
            goto LAB_04345f74;
          }
        }
        uVar8 = *puVar2;
        uVar3 = FUN_043456c0(uVar8,puVar2[1]);
      }
LAB_04345f74:
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  return iVar9;
}


/* ProfileUtils::TotalGamesPlayedForLevel(std::string const&, PlayerInfo*) */

int ProfileUtils::TotalGamesPlayedForLevel(string *param_1,PlayerInfo *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  ulong uVar3;
  SavedWorldMapEventData *this;
  WorldDataManager *this_00;
  string *psVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  
  puVar2 = (undefined8 *)PlayerInfo::GetSavedWorldMapEvents(param_2);
  uVar7 = *puVar2;
  uVar6 = 0;
  iVar8 = 0;
  uVar3 = FUN_043456c0(uVar7,puVar2[1]);
  if (uVar3 != 0) {
    do {
      this = (SavedWorldMapEventData *)FUN_043456cc(uVar7,uVar6);
      if (*(int *)(this + 4) == 3) {
        this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
        psVar4 = (string *)SavedWorldMapEventData::GetName(this);
        lVar5 = WorldDataManager::FindEventByLevelName(this_00,psVar4);
        if (lVar5 != 0) {
          psVar4 = (string *)SavedWorldMapEventData::GetName(this);
          cVar1 = std::operator==(psVar4,param_1);
          if (cVar1 != '\0') {
            uVar7 = *puVar2;
            iVar8 = iVar8 + *(int *)(this + 0x10);
            uVar3 = FUN_043456c0(uVar7,puVar2[1]);
            goto LAB_0434609c;
          }
        }
        uVar7 = *puVar2;
        uVar3 = FUN_043456c0(uVar7,puVar2[1]);
      }
LAB_0434609c:
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  return iVar8;
}


/* ProfileUtils::ResetPlayerInfo(PlayerInfo*) */

void ProfileUtils::ResetPlayerInfo(PlayerInfo *param_1)

{
  undefined4 uVar1;
  ProfileMgr *this;
  
  uVar1 = PlayerInfo::GetMapConversionState(param_1);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::InitializeProfile(this,param_1);
  PlayerInfo::SetMapConversionState(param_1,uVar1);
  return;
}


/* ProfileUtils::HasCompletedCurrentNormalLevel(PlayerInfo*) */

void ProfileUtils::HasCompletedCurrentNormalLevel(PlayerInfo *param_1)

{
  string *psVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  
  psVar1 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  HasCompletedLevel(psVar1,false,pPVar2);
  return;
}


/* ProfileUtils::HasCompletedCurrentLevel(PlayerInfo*) */

void ProfileUtils::HasCompletedCurrentLevel(PlayerInfo *param_1)

{
  bool bVar1;
  string *psVar2;
  ProfileMgr *this;
  PlayerInfo *pPVar3;
  Board *this_00;
  
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  psVar2 = (string *)Board::GetLevel(this_00);
  bVar1 = (bool)FUN_043455b0(this_00[0x118]);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  HasCompletedLevel(psVar2,bVar1,pPVar3);
  return;
}


/* ProfileUtils::Profile() */

void ProfileUtils::Profile(void)

{
  ProfileMgr *this;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this);
  return;
}


/* ProfileUtils::CalculateDangerRoomRandomSeed(DangerRoomInfo const*) */

long ProfileUtils::CalculateDangerRoomRandomSeed(DangerRoomInfo *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  PlayerInfo *pPVar5;
  IntroArenaTutorialBattleModule *this;
  string *psVar6;
  
  operator|(4,8);
  uVar3 = CalcRandomSeed();
  if (param_1 == (DangerRoomInfo *)0x0) {
    if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
       (lVar4 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0)), lVar4 != 0)) {
      pPVar5 = (PlayerInfo *)Profile();
      this = (IntroArenaTutorialBattleModule *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
      psVar6 = (string *)IntroArenaTutorialBattleModule::getMowerAudio(this);
      lVar4 = PlayerInfo::GetDangerRoomInfo(pPVar5,psVar6);
      iVar1 = *(int *)(lVar4 + 8);
      pPVar5 = (PlayerInfo *)Profile();
      iVar2 = LocalProfileSaveData::GetDangerRoomRandomSeed(pPVar5);
      return (long)iVar1 + (uVar3 & 0xffffffff) + (long)iVar2;
    }
    lVar4 = 0;
  }
  else {
    lVar4 = (long)*(int *)(param_1 + 8);
  }
  pPVar5 = (PlayerInfo *)Profile();
  iVar1 = LocalProfileSaveData::GetDangerRoomRandomSeed(pPVar5);
  return lVar4 + (uVar3 & 0xffffffff) + (long)iVar1;
}


/* ProfileUtils::HasUnlockedWorld(std::string const&, PlayerInfo*) */

bool ProfileUtils::HasUnlockedWorld(string *param_1,PlayerInfo *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long lVar4;
  string *psVar5;
  WorldDataManager *this_01;
  long lVar6;
  FilesystemSaveGameContext *this_02;
  long lVar7;
  undefined8 uVar8;
  
  lVar3 = LawnApp::GetWorldMapList(gLawnApp);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  uVar8 = *(undefined8 *)(lVar3 + 8);
  lVar4 = FUN_04345658(uVar8,*(undefined8 *)(lVar3 + 0x10));
  lVar6 = 0;
  do {
    lVar7 = lVar6;
    if (lVar7 == lVar4) {
      return false;
    }
    psVar5 = (string *)FUN_043456b0(uVar8,lVar7);
    cVar1 = std::operator==(psVar5,param_1);
    lVar6 = lVar7 + 1;
  } while (cVar1 == '\0');
  this_01 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  lVar6 = FUN_043456b0(*(undefined8 *)(lVar3 + 8),lVar7);
  this_02 = (FilesystemSaveGameContext *)
            WorldDataManager::FindEvent(this_01,(string *)(lVar6 + 0x10));
  psVar5 = (string *)Sexy::FilesystemSaveGameContext::GetBuffer(this_02);
  iVar2 = PlayerInfo::GetWorldMapEventStatus(this_00,psVar5);
  return 1 < iVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileUtils::CreateProfile(std::wstring const&, std::wstring&) */

void __thiscall ProfileUtils::CreateProfile(ProfileUtils *this,wstring *param_1,wstring *param_2)

{
  char cVar1;
  ProfileMgr *this_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  cVar1 = FUN_054765e8(this);
  if (cVar1 == '\0') {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::CreateProfile(this_00,(wstring *)this);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)in_x8,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  else {
    FUN_054772c4(param_1,L"[USERNAME_EMPTY]");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileUtils::CreateProfile(std::wstring const&, std::wstring&, std::vector<std::wstring,
   std::allocator<std::wstring > > const&) */

void __thiscall
ProfileUtils::CreateProfile(ProfileUtils *this,wstring *param_1,wstring *param_2,vector *param_3)

{
  char cVar1;
  bool bVar2;
  wstring *pwVar3;
  ProfileMgr *this_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  cVar1 = FUN_054765e8(this);
  if (cVar1 == '\0') {
    cVar1 = CheckValidUserName((wstring *)this,(vector *)param_2);
    if (cVar1 == '\0') {
      FUN_054772c4(param_1,L"[FILTER_WARNING]");
    }
    else {
      pwVar3 = (wstring *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      ProfileMgr::FindProfile(pwVar3);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if (bVar2) {
        FUN_054772c4(param_1,L"[NAME_CONFLICT]");
      }
      else {
        this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        ProfileMgr::CreateProfile(this_00,(wstring *)this);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)in_x8,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
      }
    }
  }
  else {
    FUN_054772c4(param_1,L"[USERNAME_EMPTY]");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ProfileUtils::GetCurrentProfileLastTutorialFunnelEventCompletionTime() */

ulong ProfileUtils::GetCurrentProfileLastTutorialFunnelEventCompletionTime(void)

{
  ProfileMgr *this;
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar1 = ProfileMgr::GetCurrentProfile(this);
  lVar1 = FUN_043455ac(*(undefined8 *)(lVar1 + 0x620));
  uVar2 = 0;
  if (lVar1 != -1) {
    lVar3 = Sexy::SexyTime((Sexy *)0x0);
    uVar2 = (ulong)(lVar3 - lVar1) / 1000;
  }
  return uVar2;
}


/* ProfileUtils::CalculateDangerRoomRepickSeed() */

long ProfileUtils::CalculateDangerRoomRepickSeed(void)

{
  int iVar1;
  ProfileMgr *this;
  GridItemDuskSeed *this_00;
  long lVar2;
  PlayerInfo *pPVar3;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (GridItemDuskSeed *)ProfileMgr::GetCurrentProfile(this);
  lVar2 = GridItemDuskSeed::getState(this_00);
  pPVar3 = (PlayerInfo *)Profile();
  iVar1 = LocalProfileSaveData::GetDangerRoomRepickSeed(pPVar3);
  return lVar2 + iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileUtils::DeleteAndRecreatePlayerInfo(PlayerInfo*) */

void ProfileUtils::DeleteAndRecreatePlayerInfo(PlayerInfo *param_1)

{
  undefined4 uVar1;
  wstring *pwVar2;
  ProfileMgr *this;
  PlayerInfo *pPVar3;
  wstring awStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = PlayerInfo::GetMapConversionState(param_1);
  PlayerInfo::AM_GetName();
  pwVar2 = (wstring *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::DeleteProfile(pwVar2);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::CreateProfile(this,awStack_18);
  pPVar3 = (PlayerInfo *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  PlayerInfo::SetMapConversionState(pPVar3,uVar1);
  pwVar2 = (wstring *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::SetCurrentProfile(pwVar2);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ProfileUtils::CompletedLevelCount(std::string const&, PlayerInfo*) */

void ProfileUtils::CompletedLevelCount(string *param_1,PlayerInfo *param_2)

{
  long lVar1;
  
  lVar1 = FUN_04345c2c();
  if (lVar1 != 0) {
    FUN_043468ec();
    return;
  }
  return;
}


/* ProfileUtils::CompletedNodeCount(std::string const&, PlayerInfo*) */

void ProfileUtils::CompletedNodeCount(string *param_1,PlayerInfo *param_2)

{
  long lVar1;
  
  lVar1 = FUN_04345c2c();
  if (lVar1 != 0) {
    FUN_0434697c();
    return;
  }
  return;
}


/* ProfileUtils::IsWorldUnlocked(std::string const&, PlayerInfo*) */

bool ProfileUtils::IsWorldUnlocked(string *param_1,PlayerInfo *param_2)

{
  char cVar1;
  int iVar2;
  WorldMapList *this;
  long lVar3;
  string *psVar4;
  long lVar5;
  undefined8 uVar6;
  
  this = (WorldMapList *)WorldMapUtils::GetWorldMapList();
  cVar1 = WorldMapList::IsWorldEnabled(this,param_1);
  if (cVar1 != '\0') {
    uVar6 = *(undefined8 *)(this + 8);
    lVar3 = FUN_04345658(uVar6,*(undefined8 *)(this + 0x10));
    lVar5 = 0;
    while (lVar5 != lVar3) {
      psVar4 = (string *)FUN_04345678(uVar6,lVar5);
      cVar1 = std::operator==(psVar4,param_1);
      lVar5 = lVar5 + 1;
      if (cVar1 != '\0') {
        iVar2 = CompletedNodeCount(param_1,param_2);
        return 0 < iVar2;
      }
    }
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileUtils::UnlockedWorldCount(PlayerInfo*) */

void ProfileUtils::UnlockedWorldCount(PlayerInfo *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  WorldMapList *this;
  long lVar6;
  ulong uVar7;
  ProfileMgr *this_00;
  PlayerInfo *pPVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  string asStack_10 [8];
  long local_8;
  
  uVar9 = 0;
  iVar11 = 0;
  local_8 = ___stack_chk_guard;
  this = (WorldMapList *)WorldMapUtils::GetWorldMapList();
  uVar10 = *(undefined8 *)(this + 8);
  lVar6 = FUN_04345658(uVar10,*(undefined8 *)(this + 0x10));
  if (lVar6 != 0) {
    do {
      uVar10 = FUN_04345678(uVar10,uVar9);
      FUN_05475d88(asStack_10,uVar10);
      lVar6 = FUN_04345678(*(undefined8 *)(this + 8),uVar9);
      cVar5 = *(char *)(lVar6 + 0xab);
      cVar1 = *(char *)(lVar6 + 0xac);
      cVar2 = *(char *)(lVar6 + 0xaa);
      cVar3 = WorldMapList::IsWorldEnabled(this,asStack_10);
      if (((cVar3 == '\0') ||
          (bVar4 = std::operator==("tutorial",asStack_10),
          cVar2 != '\0' || (cVar1 != '\0' || cVar5 != '\0'))) || (bVar4)) {
        std::string::~string(asStack_10);
      }
      else {
        this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar8 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
        cVar5 = IsWorldUnlocked(asStack_10,pPVar8);
        if (cVar5 != '\0') {
          iVar11 = iVar11 + 1;
        }
        std::string::~string(asStack_10);
      }
      uVar9 = uVar9 + 1;
      uVar10 = *(undefined8 *)(this + 8);
      uVar7 = FUN_04345658(uVar10,*(undefined8 *)(this + 0x10));
    } while (uVar9 < uVar7);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar11);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileUtils::IsLevelClearedInSecondUnlockedWorld(int) */

void ProfileUtils::IsLevelClearedInSecondUnlockedWorld(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  ProfileMgr *pPVar5;
  PlayerInfo *this;
  WorldMapList *this_00;
  ulong uVar6;
  PlayerInfo *pPVar7;
  undefined8 uVar8;
  ulong uVar9;
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  uVar9 = 0;
  this = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
  this_00 = (WorldMapList *)WorldMapUtils::GetWorldMapList();
  do {
    uVar8 = *(undefined8 *)(this_00 + 8);
    uVar6 = FUN_04345658(uVar8,*(undefined8 *)(this_00 + 0x10));
    if (uVar6 <= uVar9) {
      cVar1 = '\0';
LAB_04346dbc:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1);
    }
    uVar8 = FUN_04345678(uVar8,uVar9);
    FUN_05475d88(asStack_188,uVar8);
    cVar1 = WorldMapList::IsWorldEnabled(this_00,asStack_188);
    if (((cVar1 != '\0') && (bVar2 = std::operator==("tutorial",asStack_188), !bVar2)) &&
       (bVar2 = std::operator==("egypt",asStack_188), !bVar2)) {
      pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
      cVar1 = IsWorldUnlocked(asStack_188,pPVar7);
      if (cVar1 != '\0') {
        uVar3 = operator|(0x10,8);
        FUN_05462470(auStack_178,uVar3);
        std::string::string(asStack_180,"");
        FUN_05462980(auStack_178,asStack_180);
        std::string::~string(asStack_180);
        nop();
        FUN_0545ec84(auStack_168,asStack_188);
        FUN_0546065c(auStack_168,param_1);
        FUN_05462824(asStack_180,auStack_178);
        iVar4 = PlayerInfo::GetWorldMapEventStatus(this,asStack_180);
        if (2 < iVar4) {
          std::string::~string(asStack_180);
          FUN_054617bc(auStack_178);
          std::string::~string(asStack_188);
          goto LAB_04346dbc;
        }
        std::string::~string(asStack_180);
        FUN_054617bc(auStack_178);
      }
    }
    uVar9 = uVar9 + 1;
    std::string::~string(asStack_188);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileUtils::CompleteEvent(MapEventItem const&, bool, PlayerInfo*) */

void ProfileUtils::CompleteEvent(MapEventItem *param_1,bool param_2,PlayerInfo *param_3)

{
  int iVar1;
  undefined4 uVar2;
  string *psVar3;
  long lVar4;
  undefined8 uVar5;
  LevelUtils *this;
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04345570(*(undefined4 *)(param_1 + 0x14));
  if (iVar1 - 9U < 3) goto switchD_04346eec_default;
  psVar3 = (string *)
           Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)param_1);
  lVar4 = FUN_05474178();
  if (lVar4 == 0) {
    uVar5 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    PlayerInfo::SetWorldMapEventStatus(param_3,uVar5,uVar5,3,1);
    iVar1 = FUN_04345594(*(undefined4 *)(param_1 + 0x70));
    if (iVar1 == 0) goto LAB_04346e9c;
LAB_04346f58:
    PlayerInfo::SetActiveTutorial(param_3,iVar1);
    uVar2 = FUN_04345594(*(undefined4 *)(param_1 + 0x70));
    PlayerInfo::CompleteTutorial(param_3,uVar2);
    uVar5 = RechargeRewardConfig::getDefaultBanner((RechargeRewardConfig *)param_1);
    lVar4 = FUN_05474184();
    if (lVar4 != 0) goto LAB_04346f88;
LAB_04346eb0:
    uVar5 = PVPManager::GetSkillDatas((PVPManager *)param_1);
    lVar4 = FUN_05474184();
  }
  else {
    uVar5 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    PlayerInfo::SetWorldMapEventStatus(param_3,uVar5,psVar3,3,1);
    iVar1 = FUN_04345594(*(undefined4 *)(param_1 + 0x70));
    if (iVar1 != 0) goto LAB_04346f58;
LAB_04346e9c:
    uVar5 = RechargeRewardConfig::getDefaultBanner((RechargeRewardConfig *)param_1);
    lVar4 = FUN_05474184();
    if (lVar4 == 0) goto LAB_04346eb0;
LAB_04346f88:
    uVar5 = FUN_0547429c(uVar5);
    Sexy::StrFormat("nar_%s",asStack_10,uVar5);
    PlayerInfo::CompleteNarrationEvent(param_3,asStack_10);
    std::string::~string(asStack_10);
    uVar5 = PVPManager::GetSkillDatas((PVPManager *)param_1);
    lVar4 = FUN_05474184();
  }
  if (lVar4 != 0) {
    uVar5 = FUN_0547429c(uVar5);
    Sexy::StrFormat("nar_%s",asStack_10,uVar5);
    PlayerInfo::CompleteNarrationEvent(param_3,asStack_10);
    std::string::~string(asStack_10);
  }
  uVar2 = FUN_04345570(*(undefined4 *)(param_1 + 0x14));
  switch(uVar2) {
  case 1:
    PlayerInfo::IncrementWorldMapEventCompletionCount(param_3,psVar3);
    this = (LevelUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
    lVar4 = LevelUtils::GetLevelInfo(this,psVar3);
    if (*(int *)(lVar4 + 0xd4) == 3) {
      PlayerInfo::UnlockPlant(param_3,(string *)(lVar4 + 0xd8),false);
      PlayerInfo::AddPlantStartLevel(param_3,(string *)(lVar4 + 0xd8),0);
    }
    else if (*(int *)(lVar4 + 0xd4) == 4) {
      PlayerInfo::SetPowerupUnlockState(param_3,(string *)(lVar4 + 0xd8),true);
    }
    uVar8 = 0;
    while( true ) {
      uVar5 = *(undefined8 *)(lVar4 + 0x138);
      uVar7 = FUN_04345604(uVar5,*(undefined8 *)(lVar4 + 0x140));
      if (uVar7 <= uVar8) break;
      puVar6 = (undefined4 *)FUN_04345610(uVar5,uVar8);
      PlayerInfo::UnlockGameFeature(param_3,*puVar6);
      uVar8 = uVar8 + 1;
    }
    break;
  case 2:
  case 3:
    PlayerInfo::UnlockPlant(param_3,psVar3,false);
    PlayerInfo::AddPlantStartLevel(param_3,psVar3,0);
    break;
  case 4:
    FUN_05475d88(asStack_18,psVar3);
    GameFeatureType::GetGameFeatureTypeFromUnlockString((GameFeatureType *)asStack_10,asStack_18);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    PlayerInfo::UnlockGameFeature(param_3,*(undefined4 *)(lVar4 + 0x30));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    std::string::~string(asStack_18);
    break;
  case 5:
    PlayerInfo::SetPowerupUnlockState(param_3,psVar3,true);
  }
switchD_04346eec_default:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileUtils::CompletedLevelCount(PlayerInfo*) */

void ProfileUtils::CompletedLevelCount(PlayerInfo *param_1)

{
  bool bVar1;
  int iVar2;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  uchar *puVar3;
  long lVar4;
  int iVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar5 = 0;
  local_8 = ___stack_chk_guard;
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)PlayerInfo::GetEventCompletionList(param_1);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar3 = (uchar *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    lVar4 = WorldMapUtils::GetWorldDataById(*puVar3);
    if ((lVar4 != 0) && (bVar1 = std::operator!=((string *)(lVar4 + 0x38),"tutorial"), bVar1)) {
      iVar2 = FUN_043468ec(puVar3);
      iVar5 = iVar5 + iVar2;
    }
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileUtils::ChangeProfileName(std::wstring const&, std::wstring const&, std::wstring&,
   std::vector<std::wstring, std::allocator<std::wstring > > const&) */

void ProfileUtils::ChangeProfileName
               (wstring *param_1,wstring *param_2,wstring *param_3,vector *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  wstring *pwVar4;
  undefined8 uVar5;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_054765e8(param_2);
  if (cVar1 == '\0') {
    cVar1 = CheckValidUserName(param_2,param_4);
    if (cVar1 == '\0') {
      uVar5 = 1;
      FUN_054772c4(param_3,L"[FILTER_WARNING]");
    }
    else {
      uVar5 = 1;
      bVar2 = std::operator!=(param_1,param_2);
      if (bVar2) {
        pwVar4 = (wstring *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        ProfileMgr::FindProfile(pwVar4);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        if (bVar2) {
          uVar5 = 0;
          FUN_054772c4(param_3,L"[NAME_CONFLICT]");
        }
        else {
          pwVar4 = (wstring *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          iVar3 = ProfileMgr::RenameProfile(pwVar4,param_1);
          if (iVar3 != 1) {
            uVar5 = 0;
            FUN_054772c4(param_3,L"[NAME_CONFLICT]");
          }
        }
      }
    }
  }
  else {
    uVar5 = 0;
    FUN_054772c4(param_3,L"[USERNAME_EMPTY]");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileUtils::HasPassed50MBContentThreshold() */

void ProfileUtils::HasPassed50MBContentThreshold(void)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  ResourceInfo *pRVar4;
  int iVar5;
  int extraout_w1;
  int extraout_w1_00;
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x37);
  while( true ) {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) break;
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_38);
    iVar2 = UnlockedWorldCount((PlayerInfo *)pRVar4);
    iVar5 = extraout_w1;
    if (1 < iVar2) {
      std::string::string((string *)aRStack_30,"egypt");
      iVar2 = CompletedLevelCount((string *)aRStack_30,(PlayerInfo *)pRVar4);
      std::string::~string((string *)aRStack_30);
      nop();
      iVar5 = extraout_w1_00;
      if (0 < iVar2) break;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar5);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileUtils::IsPlantUnlocked(Sexy::RtWeakPtr<PlantType const>, PlayerInfo*) */

void ProfileUtils::IsPlantUnlocked
               (RtMixedPtrBase *param_1,PlayerInfo *param_2,undefined8 param_3,
               LineBreakCategory *param_4,LineBreakCategory *param_5)

{
  char cVar1;
  char cVar2;
  wchar16 *pwVar3;
  long lVar4;
  PlantType *this;
  LineBreakCategory *pLVar5;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_1);
  if (cVar1 != '\0') {
    pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar5 = aLStack_18;
    std::string::string(asStack_10,"FreePlanting");
    cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar3,(wchar16 *)asStack_10,pLVar5,param_4,param_5);
    std::string::~string(asStack_10);
    nop();
    if (cVar2 == '\0') {
      cVar2 = CustomLevelUtils::IsCustomLevel();
      if (cVar2 != '\0') {
        this = (PlantType *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
        cVar2 = PlantType::IsHeroPlant(this);
        if (cVar2 == '\0') goto LAB_04347714;
      }
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      cVar1 = PlayerInfo::GetIsPlantUnlocked(param_2,(string *)(lVar4 + 8));
    }
  }
LAB_04347714:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileUtils::CompleteMainSpineForWorld(std::string const&, PlayerInfo*) */

void ProfileUtils::CompleteMainSpineForWorld(string *param_1,PlayerInfo *param_2)

{
  char cVar1;
  FilesystemSaveGameContext *this;
  string *psVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  iVar8 = 0;
  local_8 = ___stack_chk_guard;
  this = (FilesystemSaveGameContext *)WorldMapUtils::FindLastPlayableEventInWorld(param_1);
  psVar2 = (string *)Sexy::FilesystemSaveGameContext::GetBuffer(this);
  cVar1 = PlayerInfo::GetLevelCompleted(param_2,psVar2);
  if (cVar1 == '\0') {
    uVar6 = 0;
    WorldMapUtils::UnlockStargateForWorld(param_1,true);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    WorldMapUtils::GetOrderedMainSpinePath(param_1,(vector *)&local_20);
    uVar7 = local_20;
    lVar3 = FUN_04345644(local_20,local_18);
    if (lVar3 != 0) {
      do {
        puVar4 = (undefined8 *)FUN_04345650(uVar7,uVar6);
        cVar1 = MapEventItem::IsEventComplete((MapEventItem *)*puVar4,param_2);
        if (cVar1 == '\0') {
          iVar8 = iVar8 + 1;
          puVar4 = (undefined8 *)FUN_04345650(local_20,uVar6);
          MapEventItem::CompleteEvent((MapEventItem *)*puVar4,param_2);
        }
        uVar7 = local_20;
        uVar6 = uVar6 + 1;
        uVar5 = FUN_04345644(local_20,local_18);
      } while (uVar6 < uVar5);
    }
    std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
              ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)&local_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar8);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileUtils::CompleteToEvent(std::string const&, bool, bool, PlayerInfo*) */

void ProfileUtils::CompleteToEvent(string *param_1,bool param_2,bool param_3,PlayerInfo *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  WorldMapList *this;
  WorldDataManager *this_00;
  MapEventItem *this_01;
  ProfileMgr *this_02;
  PlayerInfo *pPVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  string *psVar10;
  long lVar11;
  MapEventItem *pMVar12;
  ulong uVar13;
  undefined8 uVar14;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (WorldMapList *)WorldMapUtils::GetWorldMapList();
  this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  this_01 = (MapEventItem *)WorldDataManager::FindEventByName(this_00,param_1);
  if (this_01 == (MapEventItem *)0x0) {
    iVar4 = 0;
    goto LAB_04347a9c;
  }
  FUN_05475d88(asStack_28,*(long *)(this_01 + 0xe8) + 0x38);
  bVar1 = std::operator!=(asStack_28,"tutorial");
  if (bVar1) {
    std::string::string((string *)&local_20,"tutorial");
    iVar4 = CompleteMainSpineForWorld((string *)&local_20,param_4);
    std::string::~string((string *)&local_20);
    uVar9 = 0;
    nop();
    cVar2 = PlayerInfo::GetHasBeenConvertedToNewMap(param_4);
    if (cVar2 == '\0') {
      while( true ) {
        uVar14 = *(undefined8 *)(this + 8);
        uVar13 = FUN_04345658(uVar14,*(undefined8 *)(this + 0x10));
        if (uVar13 <= uVar9) break;
        psVar10 = (string *)FUN_04345678(uVar14,uVar9);
        bVar1 = std::operator==(psVar10,"tutorial");
        if (bVar1) {
LAB_04347c04:
          uVar9 = uVar9 + 1;
        }
        else {
          psVar10 = (string *)FUN_04345678(*(undefined8 *)(this + 8),uVar9);
          cVar2 = WorldMapList::IsWorldEnabled(this,psVar10);
          if (cVar2 == '\0') goto LAB_04347c04;
          psVar10 = (string *)FUN_04345678(*(undefined8 *)(this + 8),uVar9);
          cVar2 = std::operator==(psVar10,asStack_28);
          if (cVar2 != '\0') break;
          uVar9 = uVar9 + 1;
          iVar3 = CompleteMainSpineForWorld(psVar10,param_4);
          iVar4 = iVar4 + iVar3;
        }
      }
    }
  }
  else {
    iVar4 = 0;
  }
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  cVar2 = IsWorldUnlocked(asStack_28,pPVar5);
  if (cVar2 == '\0') {
    lVar6 = WorldMapList::GetMapListNodeByName(this,asStack_28);
    lVar11 = FUN_05474184((string *)(lVar6 + 8));
    if (lVar11 != 0) {
      pMVar12 = (MapEventItem *)WorldDataManager::FindEventByName(this_00,(string *)(lVar6 + 8));
      WorldMapUtils::UnlockStargate(pMVar12,true);
    }
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  WorldMapUtils::GetOrderedPathToEvent(this_01,(vector *)&local_20);
  uVar14 = local_20;
  if (param_3) {
    uVar9 = FUN_04345644(local_20,local_18);
    if (uVar9 != 0) goto LAB_043479e4;
  }
  else {
    lVar6 = FUN_04345644(local_20,local_18);
    uVar9 = lVar6 - 1;
    if (uVar9 != 0) {
LAB_043479e4:
      uVar13 = 0;
      puVar7 = (undefined8 *)FUN_04345650(uVar14,0);
      cVar2 = MapEventItem::IsEventComplete((MapEventItem *)*puVar7,param_4);
      while( true ) {
        if (cVar2 == '\0') {
          iVar4 = iVar4 + 1;
          puVar7 = (undefined8 *)FUN_04345650(local_20,uVar13);
          MapEventItem::CompleteEvent((MapEventItem *)*puVar7,param_4);
        }
        if (param_2) {
          plVar8 = (long *)FUN_04345650(local_20,uVar13);
          lVar6 = *plVar8;
          iVar3 = FUN_04345570(*(undefined4 *)(lVar6 + 0x14));
          if (iVar3 == 1) {
            lVar6 = FUN_0434559c(*(undefined8 *)(lVar6 + 0xe8));
            cVar2 = WorldMapUtils::WorldHasHardModule(*(uchar *)(lVar6 + 0x5c));
            if (cVar2 != '\0') {
              puVar7 = (undefined8 *)FUN_04345650(local_20,uVar13);
              psVar10 = (string *)
                        Sexy::FilesystemSaveGameContext::GetBuffer
                                  ((FilesystemSaveGameContext *)*puVar7);
              PlayerInfo::SetHardLevelCompleted(param_4,psVar10,true);
            }
          }
        }
        uVar13 = uVar13 + 1;
        if (uVar9 <= uVar13) break;
        puVar7 = (undefined8 *)FUN_04345650(local_20,uVar13);
        cVar2 = MapEventItem::IsEventComplete((MapEventItem *)*puVar7,param_4);
      }
      if (param_3) goto LAB_04347a8c;
    }
    cVar2 = MapEventItem::IsEventComplete(this_01,param_4);
    if (cVar2 == '\0') {
      PlayerInfo::SetWorldMapEventStatus(param_4,this_01 + 0x20,this_01 + 0x28,2,1);
    }
  }
LAB_04347a8c:
  std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
            ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)&local_20);
  std::string::~string(asStack_28);
LAB_04347a9c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar4);
  }
  return;
}


/* ProfileUtils::CompleteLevelsForWorld(std::string const&, bool, bool, PlayerInfo*) */

void ProfileUtils::CompleteLevelsForWorld
               (string *param_1,bool param_2,bool param_3,PlayerInfo *param_4)

{
  char cVar1;
  WorldMapList *this;
  long lVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  
  cVar1 = PlayerInfo::GetHasBeenConvertedToNewMap(param_4);
  if (cVar1 != '\0') {
    this = (WorldMapList *)WorldMapUtils::GetWorldMapList();
    lVar2 = WorldMapList::GetMapListNodeByName(this,param_1);
    if ((lVar2 != 0) && (lVar2 = WorldMapUtils::FindLastPlayableEventInWorld(param_1), lVar2 != 0))
    {
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      CompleteToEvent((string *)(lVar2 + 0x20),param_3,true,pPVar3);
      return;
    }
  }
  return;
}


/* ProfileUtils::CompleteAllLevels(bool, PlayerInfo*) */

void ProfileUtils::CompleteAllLevels(bool param_1,PlayerInfo *param_2)

{
  byte bVar1;
  int iVar2;
  WorldDataManager *this;
  long lVar3;
  int iVar4;
  
  this = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  iVar4 = 0;
  while( true ) {
    iVar2 = WorldDataManager::GetWorldDataCount(this);
    if (iVar2 <= iVar4) break;
    lVar3 = WorldDataManager::GetWorldDataByIdx(this,iVar4);
    bVar1 = PlayerInfo::GetHasBeenConvertedToNewMap(param_2);
    CompleteLevelsForWorld((string *)(lVar3 + 0x38),(bool)(bVar1 ^ 1),param_1,param_2);
    iVar4 = iVar4 + 1;
  }
  PlayerInfo::ResetStarTotal(param_2);
  return;
}


/* ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(FunnelEvent) */

void ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(int param_1)

{
  int iVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  Sexy *pSVar2;
  long lVar3;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  iVar1 = FUN_043455a4(this_00[0x5fc]);
  if (param_1 <= iVar1) {
    return;
  }
  MessageRouter::Post<unsigned_long,FunnelEvent>
            ((MessageRouter *)gMessageRouter,Message::TutorialFunnelEvent,param_1);
  if (param_1 != 0x20) {
    pSVar2 = (Sexy *)PlayerInfo::SetHighestTutorialEventReached(this_00,param_1);
    Sexy::SexyTime(pSVar2);
    lVar3 = FUN_0434573c();
    PlayerInfo::SetLastTutorialFunnelEventTime(this_00,lVar3);
    return;
  }
  pSVar2 = (Sexy *)PlayerInfo::SetHighestTutorialEventReached(this_00,0x21);
  Sexy::SexyTime(pSVar2);
  lVar3 = FUN_0434573c();
  PlayerInfo::SetLastTutorialFunnelEventTime(this_00,lVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileUtils::ChallengesUnlockedForStage(LevelDefinition const*, PlayerInfo*) */

void ProfileUtils::ChallengesUnlockedForStage(LevelDefinition *param_1,PlayerInfo *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  LevelUtils *pLVar6;
  string *psVar7;
  long lVar8;
  ulong uVar9;
  bool bVar10;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x68));
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20,(vector *)(lVar5 + 0x110))
  ;
  cVar3 = std::vector<std::string,std::allocator<std::string>>::empty
                    ((vector<std::string,std::allocator<std::string>> *)&local_20);
  uVar2 = local_20;
  if (cVar3 == '\0') {
    lVar5 = FUN_0434569c(local_20,local_18);
    if (lVar5 == 1) {
      local_20 = uVar2;
      uVar9 = 0;
LAB_04348140:
      psVar7 = (string *)FUN_043456a8(local_20,uVar9);
      iVar4 = PlayerInfo::GetWorldMapEventStatus(param_2,psVar7);
      bVar10 = 2 < iVar4;
      goto LAB_04348100;
    }
    uVar9 = 0;
    if (lVar5 != 1) {
      do {
        pLVar6 = (LevelUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
        uVar1 = uVar9 + 1;
        psVar7 = (string *)FUN_043456a8(local_20,uVar9);
        lVar5 = LevelUtils::GetLevelInfo(pLVar6,psVar7);
        pLVar6 = (LevelUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
        psVar7 = (string *)FUN_043456a8(local_20,uVar1);
        lVar8 = LevelUtils::GetLevelInfo(pLVar6,psVar7);
        if ((*(int *)(param_1 + 0x2c) <= *(int *)(lVar5 + 0x3c)) ||
           (uVar9 = uVar1, *(int *)(param_1 + 0x2c) <= *(int *)(lVar8 + 0x3c))) goto LAB_04348140;
        lVar5 = FUN_0434569c(local_20,local_18);
      } while (uVar1 < lVar5 - 1U);
    }
  }
  bVar10 = false;
LAB_04348100:
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar10);
  }
  return;
}


/* ProfileUtils::ChallengesUnlockedForCurrentStage(PlayerInfo*) */

void ProfileUtils::ChallengesUnlockedForCurrentStage(PlayerInfo *param_1)

{
  LevelDefinition *pLVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  
  pLVar1 = (LevelDefinition *)Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  ChallengesUnlockedForStage(pLVar1,pPVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileUtils::HasCompletedSecondWorldLevel(int, bool, PlayerInfo*) */

void ProfileUtils::HasCompletedSecondWorldLevel(int param_1,bool param_2,PlayerInfo *param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  string asStack_30 [8];
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  std::string::string(asStack_28,"beach");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"cowboy");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"dark");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"dino");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"eighties");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"future");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"heian");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"iceage");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"kongfu");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"lostcity");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"modern");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"pirate");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"renai");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"skycity");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"steam");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  if (param_2) {
    uVar4 = 0;
    while (uVar2 = FUN_0434569c(local_20,local_18), uVar4 < uVar2) {
      Sexy::StrFormat("%d",asStack_30,(ulong)(uint)param_1);
      uVar3 = FUN_043456a8(local_20,uVar4);
      FUN_031dcc6c(asStack_28,uVar3,asStack_30);
      cVar1 = PlayerInfo::GetHardLevelCompleted(param_3,asStack_28);
      if (cVar1 != '\0') goto LAB_04348930;
      std::string::~string(asStack_28);
      std::string::~string(asStack_30);
      uVar4 = uVar4 + 1;
    }
  }
  else {
    uVar4 = 0;
    while (uVar2 = FUN_0434569c(local_20,local_18), uVar4 < uVar2) {
      Sexy::StrFormat("%d",asStack_30,(ulong)(uint)param_1);
      uVar3 = FUN_043456a8(local_20,uVar4);
      FUN_031dcc6c(asStack_28,uVar3,asStack_30);
      cVar1 = PlayerInfo::GetLevelCompleted(param_3,asStack_28);
      if (cVar1 != '\0') goto LAB_04348930;
      std::string::~string(asStack_28);
      std::string::~string(asStack_30);
      uVar4 = uVar4 + 1;
    }
  }
  uVar3 = 0;
LAB_04348880:
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
LAB_04348930:
  uVar3 = 1;
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  goto LAB_04348880;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileUtils::CompleteToEventFloodFill(std::string const&, PlayerInfo*) */

void ProfileUtils::CompleteToEventFloodFill(string *param_1,PlayerInfo *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  WorldMapList *this;
  long lVar4;
  ulong uVar5;
  string *psVar6;
  WorldDataManager *this_00;
  int *piVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  long lVar8;
  ulong uVar9;
  MapEventItem *this_02;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  int local_f0;
  int local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d8 [48];
  queue<int,std::deque<int,std::allocator<int>>> aqStack_a8 [80];
  undefined8 local_58;
  undefined8 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (WorldMapList *)WorldMapUtils::GetWorldMapList();
  uVar11 = *(undefined8 *)(this + 0x10);
  uVar10 = *(undefined8 *)(this + 8);
  uVar12 = 0;
  bVar1 = false;
  lVar4 = FUN_04345658(uVar10,uVar11);
  if (lVar4 != 0) {
    do {
      if (!bVar1) {
        psVar6 = (string *)FUN_04345678(uVar10,uVar12);
        cVar2 = WorldMapList::IsWorldEnabled(this,psVar6);
        if (cVar2 != '\0') {
          this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
          lVar4 = WorldDataManager::GetWorldDataByWorldName(this_00,psVar6);
          cVar2 = FUN_0547419c(psVar6 + 8);
          if (cVar2 == '\0') {
            this_02 = (MapEventItem *)WorldDataManager::FindEventByName(this_00,psVar6 + 8);
            MapEventItem::CompleteEvent(this_02,param_2);
          }
          std::
          map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
          ::map(amStack_d8);
          std::deque<int,std::allocator<int>>::deque();
          std::queue<int,std::deque<int,std::allocator<int>>>::queue(aqStack_a8,(deque *)&local_58);
          std::deque<int,std::allocator<int>>::~deque((deque<int,std::allocator<int>> *)&local_58);
          iVar3 = FUN_04345e74(lVar4 + 0x20,psVar6 + 0x10);
          if (-1 < iVar3) {
            std::queue<int,std::deque<int,std::allocator<int>>>::push((int *)aqStack_a8);
            while (cVar2 = std::queue<int,std::deque<int,std::allocator<int>>>::empty(aqStack_a8),
                  cVar2 == '\0') {
              while( true ) {
                piVar7 = (int *)std::queue<int,std::deque<int,std::allocator<int>>>::front();
                local_f0 = *piVar7;
                std::queue<int,std::deque<int,std::allocator<int>>>::pop(aqStack_a8);
                std::set<int,std::less<int>,std::allocator<int>>::insert
                          ((set<int,std::less<int>,std::allocator<int>> *)amStack_d8,&local_f0);
                this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)FUN_04345688(*(undefined8 *)(lVar4 + 0x20),(long)local_f0);
                psVar6 = (string *)
                         std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_rightmost(this_01);
                cVar2 = std::operator==(psVar6,param_1);
                if (cVar2 == '\0') break;
                bVar1 = true;
                cVar2 = std::queue<int,std::deque<int,std::allocator<int>>>::empty(aqStack_a8);
                if (cVar2 != '\0') goto LAB_04348c80;
              }
              uVar5 = 0;
              MapEventItem::CompleteEvent((MapEventItem *)this_01,param_2);
              std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                        ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_58)
              ;
              FUN_0434894c(lVar4 + 0x20,local_f0,(deque<int,std::allocator<int>> *)&local_58);
              uVar10 = local_58;
              lVar8 = FUN_043455d8(local_58,local_50);
              if (lVar8 != 0) {
                do {
                  piVar7 = (int *)FUN_04345694(uVar10,uVar5);
                  local_ec = *piVar7;
                  local_e8 = std::set<int,std::less<int>,std::allocator<int>>::find
                                       ((set<int,std::less<int>,std::allocator<int>> *)amStack_d8,
                                        &local_ec);
                  local_e0 = std::
                             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)amStack_d8);
                  cVar2 = std::__exception_ptr::operator==
                                    ((exception_ptr *)&local_e8,(exception_ptr *)&local_e0);
                  if (cVar2 != '\0') {
                    std::queue<int,std::deque<int,std::allocator<int>>>::push((int *)aqStack_a8);
                  }
                  uVar10 = local_58;
                  uVar5 = uVar5 + 1;
                  uVar9 = FUN_043455d8(local_58,local_50);
                } while (uVar5 < uVar9);
              }
              std::vector<int,std::allocator<int>>::~vector
                        ((vector<int,std::allocator<int>> *)&local_58);
            }
          }
LAB_04348c80:
          std::queue<int,std::deque<int,std::allocator<int>>>::~queue(aqStack_a8);
          std::set<int,std::less<int>,std::allocator<int>>::~set
                    ((set<int,std::less<int>,std::allocator<int>> *)amStack_d8);
        }
        uVar10 = *(undefined8 *)(this + 8);
        uVar11 = *(undefined8 *)(this + 0x10);
      }
      uVar12 = uVar12 + 1;
      uVar5 = FUN_04345658(uVar10,uVar11);
    } while (uVar12 < uVar5);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileUtils::ConvertOldProfileToNewMap(PlayerInfo*) */

void ProfileUtils::ConvertOldProfileToNewMap(PlayerInfo *param_1)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  int *piVar9;
  uchar *puVar10;
  long lVar11;
  string *psVar12;
  undefined8 uVar13;
  WorldMapList *this;
  ProfileMgr *pPVar14;
  string *psVar15;
  WorldDataManager *pWVar16;
  MapEventItem *pMVar17;
  undefined4 *puVar18;
  FilesystemSaveGameContext *this_00;
  uint uVar19;
  uint uVar20;
  pair<std::string_const,Sexy::PILifeValueTable> *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  float fVar21;
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [8];
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  uint local_1c8 [2];
  undefined8 local_1c0;
  undefined8 local_1b8 [2];
  undefined8 local_1a8 [3];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_190 [48];
  undefined8 local_160 [6];
  ProfileConversionResults local_130 [48];
  vector<std::string,std::allocator<std::string>> avStack_100 [24];
  vector<std::string,std::allocator<std::string>> avStack_e8 [24];
  vector<ProfileConversionResults::LevelChange,std::allocator<ProfileConversionResults::LevelChange>>
  avStack_d0 [24];
  pair<std::string,unsigned_int> apStack_b8 [16];
  pair<std::string,unsigned_int> apStack_a8 [16];
  pair<std::string,unsigned_int> apStack_98 [16];
  pair<std::string,unsigned_int> apStack_88 [16];
  pair<std::string,unsigned_int> apStack_78 [16];
  pair<std::string,unsigned_int> apStack_68 [16];
  pair<std::string,unsigned_int> apStack_58 [16];
  pair<std::string,unsigned_int> apStack_48 [16];
  pair<std::string,unsigned_int> apStack_38 [16];
  pair<std::string,unsigned_int> apStack_28 [16];
  pair<std::string,unsigned_int> apStack_18 [16];
  long local_8;
  
  bVar4 = false;
  local_8 = ___stack_chk_guard;
  cVar3 = PlayerInfo::GetHasBeenConvertedToNewMap(param_1);
  if (cVar3 == '\0') {
    ProfileConversionResults::ProfileConversionResults(local_130);
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_190);
    puVar7 = (undefined8 *)PlayerInfo::GetSavedWorldMapEvents(param_1);
    local_1c0 = FUN_043473b8(*puVar7);
    local_1b8[0] = FUN_04347408(puVar7[1]);
    while( true ) {
      bVar4 = __gnu_cxx::operator!=((__normal_iterator *)&local_1c0,(__normal_iterator *)local_1b8);
      if (!bVar4) break;
      pbVar8 = (byte *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1c0);
      if (*(int *)(pbVar8 + 4) == 3) {
        bVar1 = *pbVar8;
        sVar2 = *(short *)(pbVar8 + 2);
        uVar20 = (uint)bVar1;
        if (bVar1 == 1) {
LAB_043498a4:
          local_160[0] = CONCAT44(local_160[0]._4_4_,uVar20);
          piVar9 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                          ::operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                        *)amStack_190,(int *)local_160);
          *piVar9 = *piVar9 + 1;
        }
        else {
          local_1c8[0] = (uint)bVar1;
          local_1a8[0] = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                         find((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                               *)amStack_190,(int *)local_1c8);
          local_160[0] = std::
                         map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)amStack_190);
          cVar3 = std::__exception_ptr::operator==
                            ((exception_ptr *)local_1a8,(exception_ptr *)local_160);
          if (cVar3 != '\0') {
            local_160[0] = CONCAT44(local_160[0]._4_4_,uVar20);
            puVar18 = (undefined4 *)
                      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                      operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                  *)amStack_190,(int *)local_160);
            *puVar18 = 0;
          }
          if (uVar20 == 2) {
            if (sVar2 == 10) goto LAB_043498a4;
          }
          else {
            uVar19 = *(uint *)(pbVar8 + 8);
            if (0 < (int)uVar19) {
              do {
                if ((uVar19 & 1) != 0) {
                  local_160[0] = CONCAT44(local_160[0]._4_4_,uVar20);
                  piVar9 = (int *)std::
                                  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                  ::operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                                *)amStack_190,(int *)local_160);
                  *piVar9 = *piVar9 + 1;
                }
                uVar19 = (int)uVar19 >> 1;
              } while (uVar19 != 0);
            }
          }
        }
      }
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_1c0);
    }
    local_1f8 = 5;
    std::pair<std::string,unsigned_int>::
    pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
              (apStack_b8,"tutorial",(MagicianActionStatus *)&local_1f8);
    local_1f4 = 1;
    std::pair<std::string,unsigned_int>::
    pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
              (apStack_a8,"egypt",(MagicianActionStatus *)&local_1f4);
    local_1f0 = CONCAT44(local_1f0._4_4_,0x26);
    std::pair<std::string,unsigned_int>::
    pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
              (apStack_98,"pirate",(MagicianActionStatus *)&local_1f0);
    local_1e8 = CONCAT44(local_1e8._4_4_,0x26);
    this_01 = (pair<std::string_const,Sexy::PILifeValueTable> *)&local_8;
    std::pair<std::string,unsigned_int>::
    pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
              (apStack_88,"cowboy",(MagicianActionStatus *)&local_1e8);
    local_1e0 = CONCAT44(local_1e0._4_4_,0x4d);
    std::pair<std::string,unsigned_int>::
    pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
              (apStack_78,"kongfu",(MagicianActionStatus *)&local_1e0);
    local_1d8 = CONCAT44(local_1d8._4_4_,0x4e);
    std::pair<std::string,unsigned_int>::
    pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
              (apStack_68,"future",(MagicianActionStatus *)&local_1d8);
    local_1d0 = CONCAT44(local_1d0._4_4_,0x4f);
    std::pair<std::string,unsigned_int>::
    pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
              (apStack_58,"dark",(MagicianActionStatus *)&local_1d0);
    local_1c8[0] = 0x57;
    std::pair<std::string,unsigned_int>::
    pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
              (apStack_48,"beach",(MagicianActionStatus *)local_1c8);
    local_1c0 = CONCAT44(local_1c0._4_4_,0x42);
    std::pair<std::string,unsigned_int>::
    pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
              (apStack_38,"iceage",(MagicianActionStatus *)&local_1c0);
    local_1b8[0] = CONCAT44(local_1b8[0]._4_4_,0x45);
    std::pair<std::string,unsigned_int>::
    pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
              (apStack_28,"skycity",(MagicianActionStatus *)local_1b8);
    local_1a8[0] = CONCAT44(local_1a8[0]._4_4_,0x39);
    std::pair<std::string,unsigned_int>::
    pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
              (apStack_18,"lostcity",(MagicianActionStatus *)local_1a8);
    std::
    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
    map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
         *)local_160,apStack_b8,0xb,auStack_208,auStack_200);
    do {
      this_01 = this_01 + -0x10;
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(this_01);
    } while (this_01 != (pair<std::string_const,Sexy::PILifeValueTable> *)apStack_b8);
    WorldMapUtils::GetWorldMapList();
    local_1f0 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                          ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                           amStack_190);
    local_1e8 = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)amStack_190);
    bVar5 = eastl::operator!=((rbtree_iterator *)&local_1f0,(rbtree_iterator *)&local_1e8);
    if (bVar5) {
      do {
        puVar10 = (uchar *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                     ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)
                                      &local_1f0);
        iVar6 = *(int *)(puVar10 + 4);
        lVar11 = WorldMapUtils::GetWorldDataById(*puVar10);
        if (lVar11 == 0) {
LAB_043495dc:
          std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                    ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_1f0);
        }
        else {
          psVar15 = (string *)(lVar11 + 0x38);
          local_1e0 = std::
                      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                      ::find((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                              *)local_160,psVar15);
          local_1a8[0] = std::
                         map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)local_160);
          bVar5 = eastl::operator!=((rbtree_iterator *)&local_1e0,(rbtree_iterator *)local_1a8);
          if ((!bVar5) ||
             (lVar11 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                 ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_1e0
                                 ), iVar6 < *(int *)(lVar11 + 8))) {
            this = (WorldMapList *)WorldMapUtils::GetWorldMapList();
            lVar11 = WorldMapList::GetMapListNodeByName(this,psVar15);
            cVar3 = FUN_0547419c((string *)(lVar11 + 8));
            if (cVar3 == '\0') {
              pWVar16 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
              pMVar17 = (MapEventItem *)
                        WorldDataManager::FindEventByName(pWVar16,(string *)(lVar11 + 8));
              WorldMapUtils::UnlockStargate(pMVar17,false);
            }
            goto LAB_043495dc;
          }
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_1a8);
          cVar3 = WorldMapUtils::GetOrderedMainSpinePath(psVar15,(vector *)local_1a8);
          if (cVar3 == '\0') {
            std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
                      ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)local_1a8)
            ;
            goto LAB_04349854;
          }
          local_1d8 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)local_1a8);
          local_1d0 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)local_1a8);
          while (bVar5 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_1d8,(__normal_iterator *)&local_1d0)
                , bVar5) {
            puVar7 = (undefined8 *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1d8);
            this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)*puVar7;
            iVar6 = FUN_04345570(*(undefined4 *)(this_02 + 0x14));
            if (iVar6 == 1) {
              bVar5 = std::operator!=(psVar15,"egypt");
              if ((!bVar5) || (iVar6 = FUN_04345598(*(undefined4 *)(this_02 + 0x78)), iVar6 != 3)) {
                uVar13 = std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_rightmost(this_02);
                FUN_05475d88((string *)local_1c8,uVar13);
                FUN_05475d88((move_iterator<SexyURL::KeyedValue*> *)&local_1c0,uVar13);
                ProfileConversionResults::LevelChange::LevelChange
                          ((LevelChange *)local_1b8,(string *)local_1c8,
                           (move_iterator<SexyURL::KeyedValue*> *)&local_1c0);
                std::
                vector<ProfileConversionResults::LevelChange,std::allocator<ProfileConversionResults::LevelChange>>
                ::push_back(avStack_d0,(LevelChange *)local_1b8);
                Sexy::PACommand::~PACommand((PACommand *)local_1b8);
                std::string::~string((string *)&local_1c0);
                std::string::~string((string *)local_1c8);
              }
            }
            else if (iVar6 == 4) {
              psVar12 = (string *)
                        std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_rightmost(this_02);
              std::vector<std::string,std::allocator<std::string>>::push_back(avStack_100,psVar12);
            }
            else if (iVar6 - 2U < 2) {
              psVar12 = (string *)
                        std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_rightmost(this_02);
              std::vector<std::string,std::allocator<std::string>>::push_back(avStack_e8,psVar12);
            }
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_1d8);
          }
          std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
                    ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)local_1a8);
          std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                    ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_1f0);
        }
        bVar5 = eastl::operator!=((rbtree_iterator *)&local_1f0,(rbtree_iterator *)&local_1e8);
      } while (bVar5);
    }
    pPVar14 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::SetLockdownForProfileConversion(pPVar14);
    local_1b8[0] = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_100);
    local_1a8[0] = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_100);
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_1b8,(__normal_iterator *)local_1a8), bVar4)
    {
      psVar15 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_1b8);
      pWVar16 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
      pMVar17 = (MapEventItem *)WorldDataManager::FindEventByName(pWVar16,psVar15);
      MapEventItem::GivePlayerReward(pMVar17,param_1);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_1b8);
    }
    local_1b8[0] = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_e8);
    local_1a8[0] = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_e8);
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_1b8,(__normal_iterator *)local_1a8), bVar4)
    {
      psVar15 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_1b8);
      pWVar16 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
      pMVar17 = (MapEventItem *)WorldDataManager::FindEventByName(pWVar16,psVar15);
      MapEventItem::GivePlayerReward(pMVar17,param_1);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_1b8);
    }
    local_1b8[0] = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_d0);
    local_1a8[0] = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_d0);
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_1b8,(__normal_iterator *)local_1a8), bVar4)
    {
      lVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_1b8);
      PlayerInfo::SetWorldMapEventStatusNoConsequences(param_1,lVar11 + 8,lVar11,3);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)local_1b8);
    }
    std::string::string((string *)local_1a8,"egypt1");
    cVar3 = PlayerInfo::GetLevelCompleted(param_1,(string *)local_1a8);
    std::string::~string((string *)local_1a8);
    nop();
    if (cVar3 == '\0') {
      PlayerInfo::ResetTutorialProgress(param_1,0);
    }
    else {
      PlayerInfo::SetActiveTutorial(param_1,0x11);
      PlayerInfo::CompleteTutorial(param_1,0x11);
    }
    PlayerInfo::ConvertOldTutorialToNewTutorial(param_1);
    PlayerInfo::ResetStarTotal(param_1);
    PlayerInfo::SetMapConversionState(param_1,1);
    Set8BytesTo0((LevelChange *)local_1b8);
    std::string::string((string *)local_1a8,"egypt1");
    cVar3 = PlayerInfo::GetLevelCompleted(param_1,(string *)local_1a8);
    std::string::~string((string *)local_1a8);
    nop();
    if (cVar3 != '\0') {
      std::string::string((string *)local_1a8,"egypt");
      nop();
      this_00 = (FilesystemSaveGameContext *)
                WorldMapUtils::GetLevelToCenterOnInWorld((string *)local_1a8);
      if (this_00 != (FilesystemSaveGameContext *)0x0) {
        uVar13 = Sexy::FilesystemSaveGameContext::GetBuffer(this_00);
        thunk_FUN_05475e00((LevelChange *)local_1b8,uVar13);
      }
      std::string::~string((string *)local_1a8);
    }
    std::string::string((string *)local_1a8,"egypt1");
    cVar3 = PlayerInfo::GetLevelCompleted(param_1,(string *)local_1a8);
    std::string::~string((string *)local_1a8);
    nop();
    if (cVar3 == '\0') {
      std::string::string((string *)local_1a8,"");
      PlayerInfo::SetLastWorldName((string *)param_1);
      std::string::~string((string *)local_1a8);
      nop();
      PlayerInfo::SetMapConversionState(param_1,2);
    }
    else {
      cVar3 = FUN_0547419c((LevelChange *)local_1b8);
      if (cVar3 == '\0') {
        PlayerInfo::SetCurrentLevel((string *)param_1);
        fVar21 = (float)PlayerInfo::GetLastWorldMapZoomLevel(param_1);
        PlayerInfo::SetWorldMapZoomData(param_1,fVar21,false);
      }
      else {
        fVar21 = (float)PlayerInfo::GetLastWorldMapZoomLevel(param_1);
        PlayerInfo::SetWorldMapZoomData(param_1,fVar21,true);
      }
    }
    TreasureYeti::RemoveFromMap();
    bVar4 = true;
    TreasureYeti::ScheduleNextYeti();
    pPVar14 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::RemoveLockdownForProfileConversion(pPVar14);
    local_130[0] = (ProfileConversionResults)0x1;
    PlayerInfo::SetProfileConversionResults(param_1,local_130);
    std::string::~string((string *)local_1b8);
LAB_04349854:
    std::
    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
    ~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)local_160);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_190);
    ProfileConversionResults::~ProfileConversionResults(local_130);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileUtils::GetChallengeStatusForCurrentLevelByChoose(std::string const&,
   std::vector<ProfileUtils::ChallengeStatusHolder,
   std::allocator<ProfileUtils::ChallengeStatusHolder> >&, std::vector<bool, std::allocator<bool> >,
   int) */

void ProfileUtils::GetChallengeStatusForCurrentLevelByChoose
               (string *param_1,
               vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
               *param_2,vector<bool,std::allocator<bool>> *param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  ProfileMgr *pPVar9;
  string *psVar10;
  PlayerInfo *pPVar11;
  LevelUtils *this;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  vector<std::wstring,std::allocator<std::wstring>> *this_00;
  LevelModuleManager *this_01;
  code *pcVar18;
  ulong uVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>::
  clear(param_2);
  pPVar9 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar2 = ProfileMgr::HasValidProfile(pPVar9);
  if (cVar2 == '\0') goto LAB_04349e78;
  if (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) {
    cVar2 = '\0';
  }
  else {
    psVar10 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    cVar2 = std::operator==(psVar10,param_1);
  }
  pPVar9 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar11 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar9);
  cVar3 = ChallengesUnlockedForCurrentStage(pPVar11);
  this = (LevelUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
  lVar12 = LevelUtils::GetLevelInfo(this,param_1);
  plVar13 = (long *)FUN_043474f8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (plVar13 == (long *)0x0) {
LAB_04349efc:
    bVar7 = false;
  }
  else {
    pcVar18 = *(code **)(*plVar13 + 0x20);
    uVar14 = StarChallengeModule::StaticGetClass();
    cVar4 = (*pcVar18)(plVar13,uVar14);
    if (cVar4 == '\0') goto LAB_04349efc;
    if ((cVar3 == '\0') && (*(char *)(lVar12 + 0x1f0) == '\0')) goto LAB_04349e78;
    bVar7 = true;
  }
  uVar19 = 0;
  std::
  vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>::
  resize(param_2,1);
  puVar15 = (undefined8 *)FUN_043456fc(*(undefined8 *)(lVar12 + 0x1f8),(long)param_4);
  lVar12 = FUN_04345708(*puVar15,puVar15[1]);
  if (lVar12 != 0) {
    do {
      uVar16 = std::vector<bool,std::allocator<bool>>::size(param_3);
      if (uVar19 < uVar16) {
        auVar21 = FUN_043458d0(*(undefined8 *)param_3,uVar19);
        local_18 = auVar21;
        bVar6 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_18);
        if (bVar6) {
          this_00 = (vector<std::wstring,std::allocator<std::wstring>> *)
                    FUN_04345714(*(undefined8 *)param_2,0);
          lVar12 = FUN_04345720(*puVar15,uVar19);
          std::vector<std::wstring,std::allocator<std::wstring>>::push_back
                    (this_00,(wstring *)(lVar12 + 0x10));
        }
      }
      uVar19 = uVar19 + 1;
      uVar16 = FUN_04345708(*puVar15,puVar15[1]);
    } while (uVar19 < uVar16);
  }
  lVar12 = FUN_04345714(*(undefined8 *)param_2,0);
  *(undefined1 *)(lVar12 + 0x82) = 0;
  if (cVar2 == '\0') goto LAB_04349e78;
  if (bVar7) {
    iVar8 = FUN_043455b4(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x87c));
    *(bool *)(lVar12 + 0x81) = iVar8 == param_4;
    if (iVar8 == param_4) goto LAB_04349dec;
    *(undefined1 *)(lVar12 + 0x80) = 0;
    bVar1 = 0;
    uVar5 = 0;
    lVar17 = lVar12;
  }
  else {
    *(undefined1 *)(lVar12 + 0x81) = 1;
LAB_04349dec:
    *(undefined1 *)(lVar12 + 0x80) = 1;
    uVar5 = Board::GetActiveChallengeAwardedThisPlaythrough(*(Board **)(gLawnApp + 0x9f0));
    lVar17 = FUN_04345714(*(undefined8 *)param_2,0);
    bVar1 = *(byte *)(lVar17 + 0x82);
  }
  *(undefined1 *)(lVar12 + 0x83) = uVar5;
  *(byte *)(lVar17 + 0x82) = bVar1 | *(byte *)(lVar17 + 0x83);
  if ((plVar13 != (long *)0x0) && (*(char *)(lVar17 + 0x81) != '\0')) {
    uVar19 = 0;
    lVar12 = FUN_04345708(*puVar15,puVar15[1]);
    if (lVar12 != 0) {
      do {
        uVar16 = std::vector<bool,std::allocator<bool>>::size(param_3);
        if (uVar19 < uVar16) {
          auVar21 = FUN_043458d0(*(undefined8 *)param_3,uVar19);
          local_18 = auVar21;
          bVar7 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_18);
          if (bVar7) {
            this_01 = (LevelModuleManager *)
                      FUN_043455b8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
            lVar12 = FUN_04345720(*puVar15,uVar19);
            lVar12 = LevelModuleManager::GetModuleByClass(this_01,*(RtClass **)(lVar12 + 8));
            lVar17 = FUN_04345714(*(undefined8 *)param_2,0);
            if (lVar12 == 0) {
              std::vector<bool,std::allocator<bool>>::push_back
                        ((vector<bool,std::allocator<bool>> *)(lVar17 + 0x18),false);
              lVar12 = FUN_04345714(*(undefined8 *)param_2,0);
              uVar20 = PVZ_EOT();
              local_18._0_4_ = uVar20;
              std::vector<float,std::allocator<float>>::push_back
                        ((vector<float,std::allocator<float>> *)(lVar12 + 0x40),(float *)local_18);
              lVar17 = FUN_04345714(*(undefined8 *)param_2,0);
              uVar5 = false;
            }
            else {
              cVar2 = FUN_043455bc(*(undefined4 *)(lVar12 + 0x1c));
              std::vector<bool,std::allocator<bool>>::push_back
                        ((vector<bool,std::allocator<bool>> *)(lVar17 + 0x18),cVar2 != '\0');
              lVar17 = FUN_04345714(*(undefined8 *)param_2,0);
              uVar20 = FUN_043455c8(*(undefined4 *)(lVar12 + 0x18));
              local_18._0_4_ = uVar20;
              std::vector<float,std::allocator<float>>::push_back
                        ((vector<float,std::allocator<float>> *)(lVar17 + 0x40),(float *)local_18);
              lVar17 = FUN_04345714(*(undefined8 *)param_2,0);
              uVar5 = FUN_043455cc(*(undefined4 *)(lVar12 + 0x1c));
            }
            std::vector<bool,std::allocator<bool>>::push_back
                      ((vector<bool,std::allocator<bool>> *)(lVar17 + 0x58),(bool)uVar5);
          }
        }
        uVar19 = uVar19 + 1;
        uVar16 = FUN_04345708(*puVar15,puVar15[1]);
      } while (uVar19 < uVar16);
    }
  }
LAB_04349e78:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileUtils::GetChallengeStatusForCurrentLevelByChoose(std::vector<ProfileUtils::ChallengeStatusHolder,
   std::allocator<ProfileUtils::ChallengeStatusHolder> >&, std::vector<bool, std::allocator<bool> >,
   int) */

void ProfileUtils::GetChallengeStatusForCurrentLevelByChoose
               (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *param_1,vector *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ChallengeStatusHolder *pCVar3;
  undefined8 local_38;
  undefined8 local_30 [5];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    uVar2 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    std::vector<bool,std::allocator<bool>>::vector
              ((vector<bool,std::allocator<bool>> *)local_30,param_2);
    GetChallengeStatusForCurrentLevelByChoose
              (uVar2,param_1,(vector<bool,std::allocator<bool>> *)local_30,param_3);
    std::vector<bool,std::allocator<bool>>::~vector((vector<bool,std::allocator<bool>> *)local_30);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(param_1);
    local_30[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(param_1);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)local_30), bVar1)
    {
      pCVar3 = (ChallengeStatusHolder *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      MessageRouter::
      Broadcast<ProfileUtils::ChallengeStatusHolder*,ProfileUtils::ChallengeStatusHolder*>
                ((MessageRouter *)gMessageRouter,Message::GatherExtraChallenges,pCVar3);
      std::move_iterator<ProfileUtils::ChallengeStatusHolder*>::operator++
                ((move_iterator<ProfileUtils::ChallengeStatusHolder*> *)&local_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileUtils::ConstructChallengeStatus(std::vector<ProfileUtils::ChallengeStatusHolder,
   std::allocator<ProfileUtils::ChallengeStatusHolder> >&, ChallengeModule*, bool) */

void ProfileUtils::ConstructChallengeStatus(vector *param_1,ChallengeModule *param_2,bool param_3)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  long extraout_x0;
  ulong uVar5;
  long lVar6;
  vector<std::wstring,std::allocator<std::wstring>> *this;
  wstring *pwVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  LevelModuleManager *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long *plVar12;
  RtClass *pRVar13;
  Board *this_02;
  int iVar14;
  ulong uVar15;
  float local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::GetPropsPtr((LevelModule *)param_2);
  uVar15 = 0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  uVar5 = FUN_04345740(*(undefined8 *)(extraout_x0 + 0x40),*(undefined8 *)(extraout_x0 + 0x48));
  std::
  vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>::
  resize((vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
          *)param_1,uVar5);
  iVar14 = 0;
  lVar6 = FUN_04345740(*(undefined8 *)(extraout_x0 + 0x40),*(undefined8 *)(extraout_x0 + 0x48));
  if (lVar6 != 0) {
    do {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      ChallengeModule::GetActiveChallengeDescriptions(param_2,(vector *)&local_20);
      uVar5 = 0;
      while( true ) {
        uVar10 = local_20;
        uVar8 = FUN_043456d4(local_20,local_18);
        if (uVar8 <= uVar5) break;
        this = (vector<std::wstring,std::allocator<std::wstring>> *)
               FUN_04345714(*(undefined8 *)param_1,uVar15);
        pwVar7 = (wstring *)FUN_04345754(uVar10,uVar5);
        std::vector<std::wstring,std::allocator<std::wstring>>::push_back(this,pwVar7);
        uVar5 = uVar5 + 1;
      }
      lVar6 = FUN_04345714(*(undefined8 *)param_1,uVar15);
      *(undefined1 *)(lVar6 + 0x82) = 0;
      if (param_3) {
        this_02 = *(Board **)(gLawnApp + 0x9f0);
        iVar4 = FUN_043455b4(*(undefined4 *)(this_02 + 0x87c));
        bVar1 = iVar4 == iVar14;
        *(byte *)(lVar6 + 0x81) = bVar1;
        if ((bool)bVar1) {
          *(undefined1 *)(lVar6 + 0x80) = 1;
          uVar2 = Board::GetActiveChallengeAwardedThisPlaythrough(this_02);
          lVar9 = FUN_04345714(*(undefined8 *)param_1,uVar15);
          bVar1 = *(byte *)(lVar9 + 0x82);
        }
        else {
          *(byte *)(lVar6 + 0x80) = bVar1;
          lVar9 = lVar6;
          uVar2 = bVar1;
        }
        *(undefined1 *)(lVar6 + 0x83) = uVar2;
        uVar10 = *(undefined8 *)(extraout_x0 + 0x40);
        *(byte *)(lVar9 + 0x82) = bVar1 | *(byte *)(lVar9 + 0x83);
        puVar11 = (undefined8 *)FUN_0434575c(uVar10,uVar15);
        if ((param_2 != (ChallengeModule *)0x0) && (*(char *)(lVar9 + 0x81) != '\0')) {
          uVar5 = 0;
          while( true ) {
            uVar10 = *puVar11;
            uVar8 = FUN_04345768(uVar10,puVar11[1]);
            if (uVar8 <= uVar5) break;
            this_00 = (LevelModuleManager *)
                      FUN_043455b8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
            this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04345774(uVar10,uVar5);
            plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
            pRVar13 = (RtClass *)(**(code **)(*plVar12 + 0x80))();
            lVar6 = LevelModuleManager::GetModuleByClass(this_00,pRVar13);
            lVar9 = FUN_04345714(*(undefined8 *)param_1,uVar15);
            if (lVar6 == 0) {
              std::vector<bool,std::allocator<bool>>::push_back
                        ((vector<bool,std::allocator<bool>> *)(lVar9 + 0x18),false);
              lVar6 = FUN_04345714(*(undefined8 *)param_1,uVar15);
              local_24 = (float)PVZ_EOT();
              std::vector<float,std::allocator<float>>::push_back
                        ((vector<float,std::allocator<float>> *)(lVar6 + 0x40),&local_24);
              lVar9 = FUN_04345714(*(undefined8 *)param_1,uVar15);
              uVar2 = false;
            }
            else {
              cVar3 = FUN_043455bc(*(undefined4 *)(lVar6 + 0x1c));
              std::vector<bool,std::allocator<bool>>::push_back
                        ((vector<bool,std::allocator<bool>> *)(lVar9 + 0x18),cVar3 != '\0');
              lVar9 = FUN_04345714(*(undefined8 *)param_1,uVar15);
              local_24 = (float)FUN_043455c8(*(undefined4 *)(lVar6 + 0x18));
              std::vector<float,std::allocator<float>>::push_back
                        ((vector<float,std::allocator<float>> *)(lVar9 + 0x40),&local_24);
              lVar9 = FUN_04345714(*(undefined8 *)param_1,uVar15);
              uVar2 = FUN_043455cc(*(undefined4 *)(lVar6 + 0x1c));
            }
            uVar5 = uVar5 + 1;
            std::vector<bool,std::allocator<bool>>::push_back
                      ((vector<bool,std::allocator<bool>> *)(lVar9 + 0x58),(bool)uVar2);
          }
        }
      }
      uVar15 = uVar15 + 1;
      std::vector<std::wstring,std::allocator<std::wstring>>::~vector
                ((vector<std::wstring,std::allocator<std::wstring>> *)&local_20);
      iVar14 = (int)uVar15;
      uVar5 = FUN_04345740(*(undefined8 *)(extraout_x0 + 0x40),*(undefined8 *)(extraout_x0 + 0x48));
    } while (uVar15 < uVar5);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ProfileUtils::GetBonusChallengeStatusForLevel(std::string const&,
   std::vector<ProfileUtils::ChallengeStatusHolder,
   std::allocator<ProfileUtils::ChallengeStatusHolder> >&) */

void ProfileUtils::GetBonusChallengeStatusForLevel(string *param_1,vector *param_2)

{
  char cVar1;
  undefined1 uVar2;
  ProfileMgr *this;
  string *psVar3;
  BonusChallengeModule *pBVar4;
  
  std::
  vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>::
  clear((vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
         *)param_2);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar1 = ProfileMgr::HasValidProfile(this);
  if (cVar1 != '\0') {
    if (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) {
      uVar2 = false;
    }
    else {
      psVar3 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
      uVar2 = std::operator==(psVar3,param_1);
    }
    pBVar4 = BoardHelpers::GetLevelModuleByClass<BonusChallengeModule>();
    if (pBVar4 != (BonusChallengeModule *)0x0) {
      ConstructChallengeStatus(param_2,(ChallengeModule *)pBVar4,(bool)uVar2);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileUtils::GetChallengeStatusForLevel(std::string const&,
   std::vector<ProfileUtils::ChallengeStatusHolder,
   std::allocator<ProfileUtils::ChallengeStatusHolder> >&, bool) */

void ProfileUtils::GetChallengeStatusForLevel(string *param_1,vector *param_2,bool param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  ProfileMgr *pPVar8;
  string *psVar9;
  PlayerInfo *pPVar10;
  StarChallengeModule *this;
  RtObject *this_00;
  StarChallengeModuleProperties *pSVar11;
  LevelUtils *this_01;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  vector<std::wstring,std::allocator<std::wstring>> *this_02;
  ulong uVar17;
  long lVar18;
  LevelModuleManager *this_03;
  long lVar19;
  byte bVar20;
  code *pcVar21;
  Board *this_04;
  ulong uVar22;
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>::
  clear((vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
         *)param_2);
  pPVar8 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar3 = ProfileMgr::HasValidProfile(pPVar8);
  if (cVar3 == '\0') goto LAB_0434a630;
  if (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) {
    uVar4 = false;
  }
  else {
    psVar9 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    uVar4 = std::operator==(psVar9,param_1);
  }
  pPVar8 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar10 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar8);
  cVar3 = ChallengesUnlockedForCurrentStage(pPVar10);
  if (param_3) {
    this = BoardHelpers::GetLevelModuleByClass<StarChallengeModule>();
    if (this != (StarChallengeModule *)0x0) {
      LevelModule::GetPropsPtr((LevelModule *)this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
      pSVar11 = Sexy::RtObject::Cast<StarChallengeModuleProperties>(this_00);
      if ((cVar3 != '\0') || (pSVar11[0x70] != (StarChallengeModuleProperties)0x0)) {
        ConstructChallengeStatus(param_2,(ChallengeModule *)this,(bool)uVar4);
      }
    }
    goto LAB_0434a630;
  }
  this_01 = (LevelUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
  lVar12 = LevelUtils::GetLevelInfo(this_01,param_1);
  plVar13 = (long *)FUN_043474f8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (plVar13 == (long *)0x0) {
LAB_0434a8bc:
    if (lVar12 == 0) goto LAB_0434a630;
    bVar1 = false;
  }
  else {
    pcVar21 = *(code **)(*plVar13 + 0x20);
    uVar14 = StarChallengeModule::StaticGetClass();
    cVar5 = (*pcVar21)(plVar13,uVar14);
    if (cVar5 == '\0') goto LAB_0434a8bc;
    if ((lVar12 == 0) || ((cVar3 == '\0' && (*(char *)(lVar12 + 0x1f0) == '\0'))))
    goto LAB_0434a630;
    bVar1 = true;
  }
  uVar22 = 0;
  uVar15 = FUN_043456e8(*(undefined8 *)(lVar12 + 0x1f8),*(undefined8 *)(lVar12 + 0x200));
  std::
  vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>::
  resize((vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
          *)param_2,uVar15);
  while( true ) {
    uVar14 = *(undefined8 *)(lVar12 + 0x1f8);
    uVar15 = FUN_043456e8(uVar14,*(undefined8 *)(lVar12 + 0x200));
    if (uVar15 <= uVar22) break;
    puVar16 = (undefined8 *)FUN_043456fc(uVar14,uVar22);
    uVar15 = 0;
    while( true ) {
      uVar14 = *puVar16;
      uVar17 = FUN_04345708(uVar14,puVar16[1]);
      if (uVar17 <= uVar15) break;
      this_02 = (vector<std::wstring,std::allocator<std::wstring>> *)
                FUN_04345714(*(undefined8 *)param_2,uVar22);
      lVar18 = FUN_04345720(uVar14,uVar15);
      std::vector<std::wstring,std::allocator<std::wstring>>::push_back
                (this_02,(wstring *)(lVar18 + 0x10));
      uVar15 = uVar15 + 1;
    }
    lVar18 = FUN_04345714(*(undefined8 *)param_2,uVar22);
    *(undefined1 *)(lVar18 + 0x82) = 0;
    if ((bool)uVar4 != false) {
      if (bVar1) {
        this_04 = *(Board **)(gLawnApp + 0x9f0);
        iVar7 = FUN_043455b4(*(undefined4 *)(this_04 + 0x87c));
        bVar2 = iVar7 == (int)uVar22;
        *(bool *)(lVar18 + 0x81) = bVar2;
        if (bVar2) goto LAB_0434a944;
        *(undefined1 *)(lVar18 + 0x80) = 0;
        bVar20 = 0;
        uVar6 = 0;
        lVar19 = lVar18;
      }
      else {
        *(undefined1 *)(lVar18 + 0x81) = 1;
        this_04 = *(Board **)(gLawnApp + 0x9f0);
LAB_0434a944:
        *(undefined1 *)(lVar18 + 0x80) = 1;
        uVar6 = Board::GetActiveChallengeAwardedThisPlaythrough(this_04);
        lVar19 = FUN_04345714(*(undefined8 *)param_2,uVar22);
        bVar20 = *(byte *)(lVar19 + 0x82);
      }
      *(undefined1 *)(lVar18 + 0x83) = uVar6;
      *(byte *)(lVar19 + 0x82) = bVar20 | *(byte *)(lVar19 + 0x83);
      if ((plVar13 != (long *)0x0) && (*(char *)(lVar19 + 0x81) != '\0')) {
        uVar15 = 0;
        while( true ) {
          uVar14 = *puVar16;
          uVar17 = FUN_04345708(uVar14,puVar16[1]);
          if (uVar17 <= uVar15) break;
          this_03 = (LevelModuleManager *)
                    FUN_043455b8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
          lVar18 = FUN_04345720(uVar14,uVar15);
          lVar18 = LevelModuleManager::GetModuleByClass(this_03,*(RtClass **)(lVar18 + 8));
          lVar19 = FUN_04345714(*(undefined8 *)param_2,uVar22);
          if (lVar18 == 0) {
            std::vector<bool,std::allocator<bool>>::push_back
                      ((vector<bool,std::allocator<bool>> *)(lVar19 + 0x18),false);
            lVar18 = FUN_04345714(*(undefined8 *)param_2,uVar22);
            local_10[0] = (float)PVZ_EOT();
            std::vector<float,std::allocator<float>>::push_back
                      ((vector<float,std::allocator<float>> *)(lVar18 + 0x40),local_10);
            lVar19 = FUN_04345714(*(undefined8 *)param_2,uVar22);
            uVar6 = false;
          }
          else {
            cVar3 = FUN_043455bc(*(undefined4 *)(lVar18 + 0x1c));
            std::vector<bool,std::allocator<bool>>::push_back
                      ((vector<bool,std::allocator<bool>> *)(lVar19 + 0x18),cVar3 != '\0');
            lVar19 = FUN_04345714(*(undefined8 *)param_2,uVar22);
            local_10[0] = (float)FUN_043455c8(*(undefined4 *)(lVar18 + 0x18));
            std::vector<float,std::allocator<float>>::push_back
                      ((vector<float,std::allocator<float>> *)(lVar19 + 0x40),local_10);
            lVar19 = FUN_04345714(*(undefined8 *)param_2,uVar22);
            uVar6 = FUN_043455cc(*(undefined4 *)(lVar18 + 0x1c));
          }
          uVar15 = uVar15 + 1;
          std::vector<bool,std::allocator<bool>>::push_back
                    ((vector<bool,std::allocator<bool>> *)(lVar19 + 0x58),(bool)uVar6);
        }
      }
    }
    uVar22 = uVar22 + 1;
  }
LAB_0434a630:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ProfileUtils::GetChallengeStatusForCurrentLevel(std::vector<ProfileUtils::ChallengeStatusHolder,
   std::allocator<ProfileUtils::ChallengeStatusHolder> >&) */

void ProfileUtils::GetChallengeStatusForCurrentLevel(vector *param_1)

{
  string *psVar1;
  
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    psVar1 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    GetChallengeStatusForLevel(psVar1,param_1,false);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileUtils::GetStarCountsForWorld(std::string const&, int&, int&) */

void ProfileUtils::GetStarCountsForWorld(string *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  WorldDataManager *this;
  ulong uVar5;
  FilesystemSaveGameContext *this_00;
  string *psVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *param_2 = 0;
  uVar12 = 0;
  *param_3 = 0;
  lVar3 = WorldMapUtils::GetWorldMapList();
  lVar4 = FUN_04345658(*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
  if (lVar4 != 0) {
    do {
      this = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
      lVar4 = WorldDataManager::FindWorldDataByIndexInMapList(this,(int)uVar12);
      if ((lVar4 != 0) && (cVar1 = std::operator==((string *)(lVar4 + 0x38),param_1), cVar1 != '\0')
         ) {
        uVar9 = *(undefined8 *)(lVar4 + 0x20);
        uVar11 = 0;
        uVar5 = FUN_04345618(uVar9,*(undefined8 *)(lVar4 + 0x28));
        if (uVar5 != 0) {
          do {
            this_00 = (FilesystemSaveGameContext *)FUN_04345638(uVar9,uVar11);
            iVar2 = FUN_04345570(*(undefined4 *)(this_00 + 0x14));
            if (iVar2 == 1) {
              lVar10 = 0;
              std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                        ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20)
              ;
              psVar6 = (string *)Sexy::FilesystemSaveGameContext::GetBuffer(this_00);
              GetChallengeStatusForLevel(psVar6,(vector *)&local_20,false);
              uVar9 = local_20;
              lVar7 = FUN_04345728(local_20,local_18);
              *param_2 = (int)lVar7 + *param_2;
              if (lVar7 != 0) {
                do {
                  lVar8 = FUN_04345714(uVar9,lVar10);
                  if (*(char *)(lVar8 + 0x82) != '\0') {
                    *param_3 = *param_3 + 1;
                  }
                  lVar10 = lVar10 + 1;
                } while (lVar10 != lVar7);
              }
              std::
              vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
              ::~vector((vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
                         *)&local_20);
              uVar9 = *(undefined8 *)(lVar4 + 0x20);
              uVar5 = FUN_04345618(uVar9,*(undefined8 *)(lVar4 + 0x28));
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar5);
        }
      }
      uVar12 = uVar12 + 1;
      uVar5 = FUN_04345658(*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
    } while (uVar12 < uVar5);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfileUtils::GetChallengeStatusForCurrentLevel(std::vector<ProfileUtils::ChallengeStatusHolder,
   std::allocator<ProfileUtils::ChallengeStatusHolder> >&,
   std::vector<ProfileUtils::ChallengeStatusHolder,
   std::allocator<ProfileUtils::ChallengeStatusHolder> >&, bool) */

void ProfileUtils::GetChallengeStatusForCurrentLevel(vector *param_1,vector *param_2,bool param_3)

{
  bool bVar1;
  string *psVar2;
  ChallengeStatusHolder *pCVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    psVar2 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    GetChallengeStatusForLevel(psVar2,param_1,param_3);
    psVar2 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    GetBonusChallengeStatusForLevel(psVar2,param_2);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)param_1);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      pCVar3 = (ChallengeStatusHolder *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      MessageRouter::
      Broadcast<ProfileUtils::ChallengeStatusHolder*,ProfileUtils::ChallengeStatusHolder*>
                ((MessageRouter *)gMessageRouter,Message::GatherExtraChallenges,pCVar3);
      std::move_iterator<ProfileUtils::ChallengeStatusHolder*>::operator++
                ((move_iterator<ProfileUtils::ChallengeStatusHolder*> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

