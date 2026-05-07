// Class: LocalProfileSaveData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LocalProfileSaveData::SetCanPostToFacebook(PlayerInfo const*, bool) */

void LocalProfileSaveData::SetCanPostToFacebook(PlayerInfo *param_1,bool param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x41);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (param_2) {
        lVar4 = FUN_042ea99c(param_1);
        *(undefined1 *)(lVar4 + 0x14) = 1;
        FUN_042eaa38();
      }
LAB_042eab64:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    iVar2 = FUN_042e9400(*(undefined4 *)(param_1 + 0x600));
    if (*(int *)(lVar4 + 0x10) == iVar2) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      *(bool *)(lVar4 + 0x14) = param_2;
      FUN_042eaa38();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_042eab64;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LocalProfileSaveData::CanPostToFacebook(PlayerInfo const*) */

void LocalProfileSaveData::CanPostToFacebook(PlayerInfo *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (PlayerInfo *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x41);
    while( true ) {
      uVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
      if (!(bool)uVar1) break;
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      iVar2 = FUN_042e9400(*(undefined4 *)(param_1 + 0x600));
      if (*(int *)(lVar4 + 0x10) == iVar2) {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        uVar1 = *(undefined1 *)(lVar4 + 0x14);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
        goto LAB_042eac80;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
LAB_042eac80:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LocalProfileSaveData::LoadLocalProfileSaveData() */

void LocalProfileSaveData::LoadLocalProfileSaveData(void)

{
  SexyAppBase *this;
  char cVar1;
  PVZDB *pPVar2;
  string asStack_10 [8];
  long local_8;
  
  this = gLawnApp;
  local_8 = ___stack_chk_guard;
  FUN_042e9ef4(asStack_10);
  cVar1 = Sexy::SexyAppBase::FileExists(this,asStack_10);
  std::string::~string(asStack_10);
  if (cVar1 != '\0') {
    pPVar2 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    FUN_042e9ef4(asStack_10);
    PVZDB::LoadPackageForTableFromFile(pPVar2,0x41,asStack_10,0,0);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LocalProfileSaveData::GetOrCreateLocalProfileData(PlayerInfo const*) */

void LocalProfileSaveData::GetOrCreateLocalProfileData(PlayerInfo *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ResourceInfo *pRVar5;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (PlayerInfo *)0x0) {
    if (((DAT_06af7d50 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06af7d50), iVar2 != 0)) {
      PlayerInfoLocalSaveData::PlayerInfoLocalSaveData((PlayerInfoLocalSaveData *)&DAT_06af7de8);
      __cxa_guard_release(&DAT_06af7d50);
      __cxa_atexit(PlayerInfoLocalSaveData::~PlayerInfoLocalSaveData,&DAT_06af7de8,&DAT_06a88000);
      pRVar5 = (ResourceInfo *)&DAT_06af7de8;
    }
    else {
      pRVar5 = (ResourceInfo *)&DAT_06af7de8;
    }
  }
  else {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x41);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      iVar2 = FUN_042e9400(*(undefined4 *)(param_1 + 0x600));
      if (*(int *)(lVar4 + 0x10) == iVar2) {
        pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
        if (pRVar5 != (ResourceInfo *)0x0) goto LAB_042eae4c;
        goto LAB_042eae38;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_042eae38:
    pRVar5 = (ResourceInfo *)FUN_042ea99c(param_1);
    FUN_042eaa38();
  }
LAB_042eae4c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pRVar5);
  }
  return;
}


/* LocalProfileSaveData::GetHasPurchasedExtraDRCard(PlayerInfo const*) */

undefined1 LocalProfileSaveData::GetHasPurchasedExtraDRCard(PlayerInfo *param_1)

{
  long lVar1;
  
  lVar1 = GetOrCreateLocalProfileData(param_1);
  return *(undefined1 *)(lVar1 + 0x1c);
}


/* LocalProfileSaveData::SetHasPurchasedExtraDRCard(PlayerInfo const*, bool) */

void LocalProfileSaveData::SetHasPurchasedExtraDRCard(PlayerInfo *param_1,bool param_2)

{
  long lVar1;
  
  lVar1 = GetOrCreateLocalProfileData(param_1);
  *(bool *)(lVar1 + 0x1c) = param_2;
  FUN_042eaa38();
  return;
}


/* LocalProfileSaveData::GetDangerRoomRandomSeed(PlayerInfo const*) */

undefined4 LocalProfileSaveData::GetDangerRoomRandomSeed(PlayerInfo *param_1)

{
  long lVar1;
  
  lVar1 = GetOrCreateLocalProfileData(param_1);
  return *(undefined4 *)(lVar1 + 0x18);
}


/* LocalProfileSaveData::SetDangerRoomRandomSeed(PlayerInfo const*, int) */

void LocalProfileSaveData::SetDangerRoomRandomSeed(PlayerInfo *param_1,int param_2)

{
  long lVar1;
  
  lVar1 = GetOrCreateLocalProfileData(param_1);
  *(int *)(lVar1 + 0x18) = param_2;
  return;
}


/* LocalProfileSaveData::GetDangerRoomRepickSeed(PlayerInfo const*) */

undefined4 LocalProfileSaveData::GetDangerRoomRepickSeed(PlayerInfo *param_1)

{
  long lVar1;
  
  lVar1 = GetOrCreateLocalProfileData(param_1);
  return *(undefined4 *)(lVar1 + 0x20);
}


/* LocalProfileSaveData::SetDangerRoomRepickSeed(PlayerInfo const*, int) */

void LocalProfileSaveData::SetDangerRoomRepickSeed(PlayerInfo *param_1,int param_2)

{
  long lVar1;
  
  lVar1 = GetOrCreateLocalProfileData(param_1);
  *(int *)(lVar1 + 0x20) = param_2;
  return;
}


/* LocalProfileSaveData::GetSeedChooserFavorites(PlayerInfo const*) */

long LocalProfileSaveData::GetSeedChooserFavorites(PlayerInfo *param_1)

{
  long lVar1;
  
  lVar1 = GetOrCreateLocalProfileData(param_1);
  return lVar1 + 0x40;
}


/* LocalProfileSaveData::GetDangerRoomSelectedList(PlayerInfo const*) */

long LocalProfileSaveData::GetDangerRoomSelectedList(PlayerInfo *param_1)

{
  long lVar1;
  
  lVar1 = GetOrCreateLocalProfileData(param_1);
  return lVar1 + 0x58;
}


/* LocalProfileSaveData::GetZombossUnlockedTime(PlayerInfo const*) */

undefined8 LocalProfileSaveData::GetZombossUnlockedTime(PlayerInfo *param_1)

{
  long lVar1;
  
  lVar1 = GetOrCreateLocalProfileData(param_1);
  return *(undefined8 *)(lVar1 + 0x70);
}


/* LocalProfileSaveData::SetZombossUnlockedTime(PlayerInfo const*, long) */

void LocalProfileSaveData::SetZombossUnlockedTime(PlayerInfo *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = GetOrCreateLocalProfileData(param_1);
  *(long *)(lVar1 + 0x70) = param_2;
  FUN_042eaa38();
  return;
}


/* LocalProfileSaveData::GetHasJustClearedRiftZomboss(PlayerInfo const*) */

undefined1 LocalProfileSaveData::GetHasJustClearedRiftZomboss(PlayerInfo *param_1)

{
  long lVar1;
  
  lVar1 = GetOrCreateLocalProfileData(param_1);
  return *(undefined1 *)(lVar1 + 0x78);
}


/* LocalProfileSaveData::SetHasJustClearedRiftZomboss(PlayerInfo const*, bool) */

void LocalProfileSaveData::SetHasJustClearedRiftZomboss(PlayerInfo *param_1,bool param_2)

{
  long lVar1;
  
  lVar1 = GetOrCreateLocalProfileData(param_1);
  *(bool *)(lVar1 + 0x78) = param_2;
  FUN_042eaa38();
  return;
}


/* LocalProfileSaveData::GetCurrentNewPVPCPULevel(PlayerInfo const*) */

undefined4 LocalProfileSaveData::GetCurrentNewPVPCPULevel(PlayerInfo *param_1)

{
  long lVar1;
  
  lVar1 = GetOrCreateLocalProfileData(param_1);
  return *(undefined4 *)(lVar1 + 0xa4);
}


/* LocalProfileSaveData::SetCurrentNewPVPCPULevel(PlayerInfo const*, int) */

void LocalProfileSaveData::SetCurrentNewPVPCPULevel(PlayerInfo *param_1,int param_2)

{
  long lVar1;
  
  lVar1 = GetOrCreateLocalProfileData(param_1);
  *(int *)(lVar1 + 0xa4) = param_2;
  FUN_042eaa38();
  return;
}


/* LocalProfileSaveData::UpdateDangerRoomTipsTime() */

void LocalProfileSaveData::UpdateDangerRoomTipsTime(void)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  long lVar3;
  undefined8 uVar4;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar3 = GetOrCreateLocalProfileData(pPVar2);
  cVar1 = TimeUtil::IsInThisWeek(*(long *)(lVar3 + 0x80));
  if (cVar1 != '\0') {
    return;
  }
  uVar4 = LawnApp::GetRealServerTime(gLawnApp);
  *(undefined8 *)(lVar3 + 0x80) = uVar4;
  FUN_042eaa38();
  return;
}


/* LocalProfileSaveData::GetPlantGeneAdditionVersion() */

undefined4 LocalProfileSaveData::GetPlantGeneAdditionVersion(void)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  long lVar2;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar2 = GetOrCreateLocalProfileData(pPVar1);
  return *(undefined4 *)(lVar2 + 0xa0);
}


/* LocalProfileSaveData::SetPlantGeneAdditionVersion(int) */

void LocalProfileSaveData::SetPlantGeneAdditionVersion(int param_1)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  long lVar2;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar2 = GetOrCreateLocalProfileData(pPVar1);
  *(int *)(lVar2 + 0xa0) = param_1;
  FUN_042eaa38();
  return;
}


/* LocalProfileSaveData::GetNetworkArtifactImprovedPropertySheet() */

long LocalProfileSaveData::GetNetworkArtifactImprovedPropertySheet(void)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  long lVar2;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar2 = GetOrCreateLocalProfileData(pPVar1);
  return lVar2 + 0xc0;
}


/* LocalProfileSaveData::GetHeroPlantArmorflameIntroStatus() */

undefined1 LocalProfileSaveData::GetHeroPlantArmorflameIntroStatus(void)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  long lVar2;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar2 = GetOrCreateLocalProfileData(pPVar1);
  return *(undefined1 *)(lVar2 + 0x108);
}


/* LocalProfileSaveData::SetHeroPlantArmorflameIntroStatus(bool) */

void LocalProfileSaveData::SetHeroPlantArmorflameIntroStatus(bool param_1)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  long lVar2;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar2 = GetOrCreateLocalProfileData(pPVar1);
  *(bool *)(lVar2 + 0x108) = param_1;
  FUN_042eaa38();
  return;
}


/* LocalProfileSaveData::GetPlantWarsTeamData() */

long LocalProfileSaveData::GetPlantWarsTeamData(void)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  long lVar2;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar2 = GetOrCreateLocalProfileData(pPVar1);
  return lVar2 + 0x110;
}


/* LocalProfileSaveData::GetFavoriteArtifactList() */

long LocalProfileSaveData::GetFavoriteArtifactList(void)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  long lVar2;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar2 = GetOrCreateLocalProfileData(pPVar1);
  return lVar2 + 0x128;
}


/* LocalProfileSaveData::CheckTransGenosisTips() */

void LocalProfileSaveData::CheckTransGenosisTips(void)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  long lVar2;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar2 = GetOrCreateLocalProfileData(pPVar1);
  TimeUtil::IsToday(*(long *)(lVar2 + 0x140));
  return;
}


/* LocalProfileSaveData::UpdateTransGenosisTipsTime() */

void LocalProfileSaveData::UpdateTransGenosisTipsTime(void)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  long lVar2;
  undefined8 uVar3;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar2 = GetOrCreateLocalProfileData(pPVar1);
  uVar3 = LawnApp::GetRealServerTime(gLawnApp);
  *(undefined8 *)(lVar2 + 0x140) = uVar3;
  FUN_042eaa38();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LocalProfileSaveData::IsSeedChooserFavorite(PlayerInfo const*, std::string const&) */

void LocalProfileSaveData::IsSeedChooserFavorite(PlayerInfo *param_1,string *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = GetOrCreateLocalProfileData(param_1);
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(lVar2 + 0x40);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar3,uVar4,param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LocalProfileSaveData::IsFavoriteArtifact(std::string const&) */

void LocalProfileSaveData::IsFavoriteArtifact(string *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  lVar3 = GetOrCreateLocalProfileData(pPVar2);
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(lVar3 + 0x128);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar4,uVar5,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LocalProfileSaveData::HasPlantPediaRewarded(int) */

void LocalProfileSaveData::HasPlantPediaRewarded(int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  lVar3 = GetOrCreateLocalProfileData(pPVar2);
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(lVar3 + 0x148);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this);
  local_18 = std::find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                       (uVar4,uVar5,local_24);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LocalProfileSaveData::GetPlantWarsLevelTeamData(int, int) */

void __thiscall
LocalProfileSaveData::GetPlantWarsLevelTeamData(LocalProfileSaveData *this,int param_1,int param_2)

{
  ProfileMgr *this_00;
  PlayerInfo *pPVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  PlantWarsLevelTeamData *pPVar5;
  PlantWarsLevelTeamData *in_x8;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 local_40 [14];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar7 = 0;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  lVar2 = GetOrCreateLocalProfileData(pPVar1);
  uVar9 = *(undefined8 *)(lVar2 + 0x110);
  lVar2 = FUN_042e94dc(uVar9,*(undefined8 *)(lVar2 + 0x118));
  if (lVar2 != 0) {
    do {
      piVar3 = (int *)FUN_042e9504(uVar9,lVar7);
      if (*piVar3 == (int)this) {
        uVar8 = *(undefined8 *)(piVar3 + 2);
        lVar4 = FUN_042e950c(uVar8,*(undefined8 *)(piVar3 + 4));
        for (lVar6 = 0; lVar6 != lVar4; lVar6 = lVar6 + 1) {
          pPVar5 = (PlantWarsLevelTeamData *)FUN_042e9548(uVar8,lVar6);
          if (*(int *)pPVar5 == param_1) {
            PlantWarsLevelTeamData::PlantWarsLevelTeamData(in_x8,pPVar5);
            goto LAB_042ecbf0;
          }
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != lVar2);
  }
  PlantWarsEndPlayParamData::PlantWarsEndPlayParamData((PlantWarsEndPlayParamData *)local_40);
  local_40[0] = 0xffffffff;
  PlantWarsLevelTeamData::PlantWarsLevelTeamData(in_x8,(PlantWarsLevelTeamData *)local_40);
  PlantWarsLevelTeamData::~PlantWarsLevelTeamData((PlantWarsLevelTeamData *)local_40);
LAB_042ecbf0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* LocalProfileSaveData::SaveDangerRoomSelectedList(PlayerInfo const*, std::vector<int,
   std::allocator<int> > const&) */

void LocalProfileSaveData::SaveDangerRoomSelectedList(PlayerInfo *param_1,vector *param_2)

{
  long lVar1;
  
  lVar1 = GetOrCreateLocalProfileData(param_1);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(lVar1 + 0x58),param_2);
  FUN_042eaa38();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LocalProfileSaveData::RemoveSeedChooserFavorite(PlayerInfo const*, std::string const&) */

void LocalProfileSaveData::RemoveSeedChooserFavorite(PlayerInfo *param_1,string *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = GetOrCreateLocalProfileData(param_1);
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(lVar2 + 0x40);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar3,uVar4,param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<std::string,std::allocator<std::string>>::erase
              ((vector<std::string,std::allocator<std::string>> *)this,local_10);
  }
  FUN_042eaa38();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LocalProfileSaveData::RemoveFavoriteArtifact(std::string const&) */

void LocalProfileSaveData::RemoveFavoriteArtifact(string *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  long lVar4;
  string *psVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  lVar4 = GetOrCreateLocalProfileData(pPVar3);
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(lVar4 + 0x128);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        FUN_042eaa38();
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar2 = std::operator==(psVar5,param_1);
      if (cVar2 == '\0') break;
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::vector<std::string,std::allocator<std::string>>::erase
                           ((vector<std::string,std::allocator<std::string>> *)this,local_10);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    FUN_042ea33c((__normal_iterator *)&local_18);
  } while( true );
}


/* LocalProfileSaveData::SetNetworkArtifactImprovedPropertySheet(Network_ArtifactImprovedPropertySheet
   const&) */

void LocalProfileSaveData::SetNetworkArtifactImprovedPropertySheet
               (Network_ArtifactImprovedPropertySheet *param_1)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  long lVar2;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar2 = GetOrCreateLocalProfileData(pPVar1);
  Network_ArtifactImprovedPropertySheet::operator=
            ((Network_ArtifactImprovedPropertySheet *)(lVar2 + 0xc0),param_1);
  FUN_042eaa38();
  return;
}


/* LocalProfileSaveData::AddSeedChooserFavorite(PlayerInfo const*, std::string const&) */

void LocalProfileSaveData::AddSeedChooserFavorite(PlayerInfo *param_1,string *param_2)

{
  long lVar1;
  
  lVar1 = GetOrCreateLocalProfileData(param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)(lVar1 + 0x40),param_2);
  FUN_042eaa38();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LocalProfileSaveData::AddFavoriteArtifact(std::string const&) */

void LocalProfileSaveData::AddFavoriteArtifact(string *param_1)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar2 = GetOrCreateLocalProfileData(pPVar1);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar2 + 0x128));
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<std::string,std::allocator<std::string>>::insert
            ((vector<std::string,std::allocator<std::string>> *)(lVar2 + 0x128),local_10,param_1);
  FUN_042eaa38();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LocalProfileSaveData::ObtainPlantPediaReward(int) */

void LocalProfileSaveData::ObtainPlantPediaReward(int param_1)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  long lVar2;
  int local_4;
  
  local_4 = param_1;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar2 = GetOrCreateLocalProfileData(pPVar1);
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(lVar2 + 0x148),&local_4);
  FUN_042eaa38();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LocalProfileSaveData::GetOrCreateArcadeLastPlayData(PlayerInfo const*, std::string const&) */

void LocalProfileSaveData::GetOrCreateArcadeLastPlayData(PlayerInfo *param_1,string *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 auStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = GetOrCreateLocalProfileData(param_1);
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(lVar3 + 0x28);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this);
  do {
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    if (!bVar1) {
      ArcadeLastPlayData::ArcadeLastPlayData((ArcadeLastPlayData *)&local_30);
      thunk_FUN_05475e00(auStack_28,param_2);
      std::vector<ArcadeLastPlayData,std::allocator<ArcadeLastPlayData>>::push_back
                ((vector<ArcadeLastPlayData,std::allocator<ArcadeLastPlayData>> *)this,
                 (ArcadeLastPlayData *)&local_30);
      uVar4 = std::
              vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
              ::back((vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
                      *)this);
      ArcadeLastPlayData::~ArcadeLastPlayData((ArcadeLastPlayData *)&local_30);
LAB_042ee090:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    iVar2 = FUN_054748a4(lVar3 + 8,param_2);
    if (iVar2 == 0) {
      uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      goto LAB_042ee090;
    }
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_38);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LocalProfileSaveData::SetPlantLv5SkillSwitch(PlayerInfo const*, std::string const&, bool) */

void LocalProfileSaveData::SetPlantLv5SkillSwitch(PlayerInfo *param_1,string *param_2,bool param_3)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = GetOrCreateLocalProfileData(param_1);
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(lVar2 + 0xa8);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this);
  local_20 = FUN_042ec7c8(uVar3,uVar4,param_2);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
  if (bVar1) {
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    *(bool *)(lVar2 + 8) = param_3;
  }
  else {
    Lv5Switch::Lv5Switch((Lv5Switch *)&local_18);
    thunk_FUN_05475e00((Lv5Switch *)&local_18,param_2);
    local_10 = param_3;
    std::vector<Lv5Switch,std::allocator<Lv5Switch>>::push_back
              ((vector<Lv5Switch,std::allocator<Lv5Switch>> *)this,(Lv5Switch *)&local_18);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_18);
  }
  FUN_042eaa38();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LocalProfileSaveData::GetPlantLv5SkillSwitch(PlayerInfo const*, std::string const&) */

void LocalProfileSaveData::GetPlantLv5SkillSwitch(PlayerInfo *param_1,string *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = GetOrCreateLocalProfileData(param_1);
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(lVar2 + 0xa8);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this);
  local_18 = FUN_042ec9d4(uVar3,uVar4,param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  uVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if ((bool)uVar1) {
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar1 = *(undefined1 *)(lVar2 + 8);
  }
  else {
    SetPlantLv5SkillSwitch(param_1,param_2,(bool)uVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LocalProfileSaveData::UpdatePlantWarsTeamData(int, int, std::vector<std::string,
   std::allocator<std::string > > const&, std::vector<std::string, std::allocator<std::string > >
   const&) */

void LocalProfileSaveData::UpdatePlantWarsTeamData
               (int param_1,int param_2,vector *param_3,vector *param_4)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int local_60 [2];
  vector<PlantWarsLevelTeamData,std::allocator<PlantWarsLevelTeamData>> avStack_58 [24];
  int local_40 [2];
  vector<std::string,std::allocator<std::string>> avStack_38 [24];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar2 = GetOrCreateLocalProfileData(pPVar1);
  uVar7 = *(undefined8 *)(lVar2 + 0x110);
  lVar3 = FUN_042e94dc(uVar7,*(undefined8 *)(lVar2 + 0x118));
  for (lVar6 = 0; lVar6 != lVar3; lVar6 = lVar6 + 1) {
    piVar4 = (int *)FUN_042e9504(uVar7,lVar6);
    if (*piVar4 == param_1) {
      uVar7 = *(undefined8 *)(piVar4 + 2);
      lVar3 = 0;
      lVar5 = FUN_042e950c(uVar7,*(undefined8 *)(piVar4 + 4));
      goto LAB_042ef0ac;
    }
  }
  PlantWarsEndPlayParamData::PlantWarsEndPlayParamData((PlantWarsEndPlayParamData *)local_40);
  local_40[0] = param_2;
  std::vector<std::string,std::allocator<std::string>>::operator=(avStack_38,param_3);
  std::vector<std::string,std::allocator<std::string>>::operator=(avStack_20,param_4);
  PlantWarsStarRewardData::PlantWarsStarRewardData((PlantWarsStarRewardData *)local_60);
  local_60[0] = param_1;
  std::vector<PlantWarsLevelTeamData,std::allocator<PlantWarsLevelTeamData>>::push_back
            (avStack_58,(PlantWarsLevelTeamData *)local_40);
  std::vector<PlantWarsWorldTeamData,std::allocator<PlantWarsWorldTeamData>>::push_back
            ((vector<PlantWarsWorldTeamData,std::allocator<PlantWarsWorldTeamData>> *)
             (lVar2 + 0x110),(PlantWarsWorldTeamData *)local_60);
  FUN_042eaa38();
  PlantWarsWorldTeamData::~PlantWarsWorldTeamData((PlantWarsWorldTeamData *)local_60);
  PlantWarsLevelTeamData::~PlantWarsLevelTeamData((PlantWarsLevelTeamData *)local_40);
LAB_042ef044:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_042ef0ac:
  if (lVar3 == lVar5) goto code_r0x042ef0b4;
  piVar4 = (int *)FUN_042e9548(uVar7,lVar3);
  if (*piVar4 == param_2) {
    std::vector<std::string,std::allocator<std::string>>::operator=
              ((vector<std::string,std::allocator<std::string>> *)(piVar4 + 2),param_3);
    lVar6 = FUN_042e9504(*(undefined8 *)(lVar2 + 0x110),lVar6);
    lVar6 = FUN_042e9548(*(undefined8 *)(lVar6 + 8),lVar3);
    std::vector<std::string,std::allocator<std::string>>::operator=
              ((vector<std::string,std::allocator<std::string>> *)(lVar6 + 0x20),param_4);
    FUN_042eaa38();
    goto LAB_042ef044;
  }
  lVar3 = lVar3 + 1;
  goto LAB_042ef0ac;
code_r0x042ef0b4:
  PlantWarsEndPlayParamData::PlantWarsEndPlayParamData((PlantWarsEndPlayParamData *)local_40);
  local_40[0] = param_2;
  std::vector<std::string,std::allocator<std::string>>::operator=(avStack_38,param_3);
  std::vector<std::string,std::allocator<std::string>>::operator=(avStack_20,param_4);
  lVar6 = FUN_042e9504(*(undefined8 *)(lVar2 + 0x110),lVar6);
  std::vector<PlantWarsLevelTeamData,std::allocator<PlantWarsLevelTeamData>>::push_back
            ((vector<PlantWarsLevelTeamData,std::allocator<PlantWarsLevelTeamData>> *)(lVar6 + 8),
             (PlantWarsLevelTeamData *)local_40);
  FUN_042eaa38();
  PlantWarsLevelTeamData::~PlantWarsLevelTeamData((PlantWarsLevelTeamData *)local_40);
  goto LAB_042ef044;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LocalProfileSaveData::CheckDangerRoomTips() */

void LocalProfileSaveData::CheckDangerRoomTips(void)

{
  byte bVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *pPVar3;
  long lVar4;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if ((local_70 == '\0') || (iVar2 = ActiveItem::GetLeftDays(aAStack_88), iVar2 < 0)) {
    bVar1 = 0;
  }
  else {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    lVar4 = GetOrCreateLocalProfileData(pPVar3);
    bVar1 = TimeUtil::IsInThisWeek(*(long *)(lVar4 + 0x80));
    bVar1 = bVar1 ^ 1;
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LocalProfileSaveData::CheckBattleZTips() */

void LocalProfileSaveData::CheckBattleZTips(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *pPVar4;
  long lVar5;
  bool bVar6;
  ActiveItem aAStack_130 [24];
  char local_118;
  NetworkDashboardInfo aNStack_b0 [40];
  long local_88;
  char local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  bVar6 = false;
  if (local_118 != '\0') {
    NetworkDashboardInfo::NetworkDashboardInfo(aNStack_b0);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_130,(RtObject *)aNStack_b0);
    if ((cVar2 != '\0') && (local_10 != '\0')) {
      this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
      lVar5 = GetOrCreateLocalProfileData(pPVar4);
      lVar5 = *(long *)(lVar5 + 0x88);
      bVar1 = lVar5 < local_88 + -0x93a80;
      bVar6 = bVar1 || local_88 < lVar5;
      if (bVar1 || local_88 < lVar5) {
        NetworkDashboardInfo::~NetworkDashboardInfo(aNStack_b0);
        goto LAB_042ef2c4;
      }
    }
    bVar6 = false;
    NetworkDashboardInfo::~NetworkDashboardInfo(aNStack_b0);
  }
LAB_042ef2c4:
  ActiveItem::~ActiveItem(aAStack_130);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar6);
}


/* LocalProfileSaveData::UpdateBattleZTipsTime() */

void LocalProfileSaveData::UpdateBattleZTipsTime(void)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  long lVar3;
  undefined8 uVar4;
  
  cVar1 = CheckBattleZTips();
  if (cVar1 == '\0') {
    return;
  }
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar3 = GetOrCreateLocalProfileData(pPVar2);
  uVar4 = LawnApp::GetRealServerTime(gLawnApp);
  *(undefined8 *)(lVar3 + 0x88) = uVar4;
  FUN_042eaa38();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LocalProfileSaveData::CheckPennyTips() */

void LocalProfileSaveData::CheckPennyTips(void)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *pPVar3;
  long lVar4;
  ActiveItem aAStack_1f8 [24];
  char local_1e0;
  NetworkMainEntryInfo aNStack_178 [52];
  int local_144;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = '\0';
  if (local_1e0 != '\0') {
    NetworkMainEntryInfo::NetworkMainEntryInfo(aNStack_178);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_1f8,(RtObject *)aNStack_178);
    if (cVar1 != '\0') {
      this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
      lVar4 = GetOrCreateLocalProfileData(pPVar3);
      if ((*(long *)(lVar4 + 0x90) < (long)(local_144 + -0x93a80)) ||
         ((long)local_144 < *(long *)(lVar4 + 0x90))) {
        NetworkMainEntryInfo::~NetworkMainEntryInfo(aNStack_178);
        goto LAB_042ef404;
      }
    }
    cVar1 = '\0';
    NetworkMainEntryInfo::~NetworkMainEntryInfo(aNStack_178);
  }
LAB_042ef404:
  ActiveItem::~ActiveItem(aAStack_1f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* LocalProfileSaveData::UpdatePennyTipsTime() */

void LocalProfileSaveData::UpdatePennyTipsTime(void)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  long lVar3;
  undefined8 uVar4;
  
  cVar1 = CheckPennyTips();
  if (cVar1 == '\0') {
    return;
  }
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar3 = GetOrCreateLocalProfileData(pPVar2);
  uVar4 = LawnApp::GetRealServerTime(gLawnApp);
  *(undefined8 *)(lVar3 + 0x90) = uVar4;
  FUN_042eaa38();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LocalProfileSaveData::CheckPVZ1Tips() */

void LocalProfileSaveData::CheckPVZ1Tips(void)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *pPVar3;
  long lVar4;
  ActiveItem aAStack_148 [24];
  char local_130;
  PVZ1ModeMainEntryData aPStack_c8 [124];
  int local_4c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = '\0';
  if (local_130 != '\0') {
    PVZ1ModeMainEntryData::PVZ1ModeMainEntryData(aPStack_c8);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_148,(RtObject *)aPStack_c8);
    if (cVar1 != '\0') {
      this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
      lVar4 = GetOrCreateLocalProfileData(pPVar3);
      if ((*(long *)(lVar4 + 0x98) < (long)(local_4c + -0x93a80)) ||
         ((long)local_4c < *(long *)(lVar4 + 0x98))) {
        PVZ1ModeMainEntryData::~PVZ1ModeMainEntryData(aPStack_c8);
        goto LAB_042ef534;
      }
    }
    cVar1 = '\0';
    PVZ1ModeMainEntryData::~PVZ1ModeMainEntryData(aPStack_c8);
  }
LAB_042ef534:
  ActiveItem::~ActiveItem(aAStack_148);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* LocalProfileSaveData::UpdatePVZ1TipsTime() */

void LocalProfileSaveData::UpdatePVZ1TipsTime(void)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  long lVar3;
  undefined8 uVar4;
  
  cVar1 = CheckPVZ1Tips();
  if (cVar1 == '\0') {
    return;
  }
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar3 = GetOrCreateLocalProfileData(pPVar2);
  uVar4 = LawnApp::GetRealServerTime(gLawnApp);
  *(undefined8 *)(lVar3 + 0x98) = uVar4;
  FUN_042eaa38();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LocalProfileSaveData::SetProfilePicture(PlayerInfo const*, Sexy::MemoryImage*) */

void LocalProfileSaveData::SetProfilePicture(PlayerInfo *param_1,MemoryImage *param_2)

{
  SexyAppBase *this;
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  RtId aRStack_40 [8];
  Iterator aIStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_38,uVar3,0x41);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_38);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_38);
      lVar4 = FUN_042ea99c(param_1);
      *(MemoryImage **)(lVar4 + 8) = param_2;
      FUN_042eaa38();
LAB_042f05bc:
      Sexy::Buffer::Buffer((Buffer *)aIStack_38);
      Sexy::Buffer::WriteInt32((Buffer *)aIStack_38,*(int *)(param_2 + 0x38));
      Sexy::Buffer::WriteInt32((Buffer *)aIStack_38,*(int *)(param_2 + 0x3c));
      Sexy::Buffer::WriteBytes
                ((Buffer *)aIStack_38,*(uchar **)(param_2 + 0x70),
                 ((ulong)(uint)(*(int *)(param_2 + 0x38) * *(int *)(param_2 + 0x3c)) & 0x3fffffff)
                 << 2);
      this = Sexy::gSexyAppBase;
      FUN_042e9f6c(aRStack_40,param_1);
      Sexy::SexyAppBase::WriteBufferToFile(this,(string *)aRStack_40,(Buffer *)aIStack_38);
      std::string::~string((string *)aRStack_40);
      MessageRouter::Post<PlayerInfo_const*,Sexy::MemoryImage*,PlayerInfo_const*,Sexy::MemoryImage*>
                ((MessageRouter *)gMessageRouter,Message::ProfileIconPictureTaken,param_1,param_2);
      Sexy::Buffer::~Buffer((Buffer *)aIStack_38);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_38);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_40);
    Sexy::RtId::~RtId(aRStack_40);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    iVar2 = FUN_042e9400(*(undefined4 *)(param_1 + 0x600));
    if (*(int *)(lVar4 + 0x10) == iVar2) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
      if (*(long **)(lVar4 + 8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar4 + 8) + 0x18))();
      }
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
      *(MemoryImage **)(lVar4 + 8) = param_2;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_38);
      goto LAB_042f05bc;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    Sexy::RtDbTable::Iterator::operator++(aIStack_38,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LocalProfileSaveData::GetProfilePicture(PlayerInfo const*) */

void LocalProfileSaveData::GetProfilePicture(PlayerInfo *param_1)

{
  SexyAppBase *this;
  string *psVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  MemoryImage *this_00;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  string asStack_60 [8];
  Iterator aIStack_58 [32];
  RtId aRStack_38 [8];
  undefined8 local_30;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  if (param_1 != (PlayerInfo *)0x0) {
    uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_58,uVar7,0x41);
    while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_58), bVar2) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_58);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_38);
      Sexy::RtId::~RtId(aRStack_38);
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      iVar4 = FUN_042e9400(*(undefined4 *)(param_1 + 0x600));
      if (*(int *)(lVar8 + 0x10) == iVar4) {
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
        this = gLawnApp;
        if (*(long *)(lVar8 + 8) == 0) {
          FUN_042e9f6c(aRStack_38,param_1);
          cVar3 = Sexy::SexyAppBase::FileExists(this,(string *)aRStack_38);
          std::string::~string((string *)aRStack_38);
          if (cVar3 != '\0') {
            Sexy::Buffer::Buffer((Buffer *)aRStack_38);
            psVar1 = Sexy::gSexyAppBase;
            FUN_042e9f6c(asStack_60,param_1);
            Sexy::SexyAppBase::ReadBufferFromFile(psVar1,(Buffer *)asStack_60,SUB81(aRStack_38,0));
            std::string::~string(asStack_60);
            uVar5 = Sexy::Buffer::ReadInt32((Buffer *)aRStack_38);
            uVar6 = Sexy::Buffer::ReadInt32((Buffer *)aRStack_38);
            this_00 = ::operator_new(0xf0);
            Sexy::MemoryImage::MemoryImage(this_00);
            (**(code **)(*(long *)this_00 + 0x130))(this_00,1,1);
            FUN_042e9ae0(this_00 + 0x18);
            iVar4 = local_14 + 7;
            if (-1 < local_14) {
              iVar4 = local_14;
            }
            uVar7 = FUN_042e94d4(local_30,(long)(iVar4 >> 3));
            (**(code **)(*(long *)this_00 + 0xc0))(this_00,uVar7,uVar5,uVar6,1);
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
            *(MemoryImage **)(lVar8 + 8) = this_00;
            Sexy::Buffer::~Buffer((Buffer *)aRStack_38);
          }
        }
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
        uVar7 = *(undefined8 *)(lVar8 + 8);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        Sexy::RtDbTable::Iterator::~Iterator(aIStack_58);
        goto LAB_042f0770;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      Sexy::RtDbTable::Iterator::operator++(aIStack_58,extraout_w1);
    }
    uVar7 = 0;
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_58);
  }
LAB_042f0770:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

