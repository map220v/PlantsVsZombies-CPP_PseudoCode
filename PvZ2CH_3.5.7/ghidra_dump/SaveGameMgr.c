// Class: SaveGameMgr


/* SaveGameMgr::~SaveGameMgr() */

void __thiscall SaveGameMgr::~SaveGameMgr(SaveGameMgr *this)

{
  *(undefined ***)this = &PTR__SaveGameMgr_066102a0;
  Sexy::LazySingleton<SaveGameMgr>::~LazySingleton((LazySingleton<SaveGameMgr> *)this);
  return;
}


/* SaveGameMgr::~SaveGameMgr() */

void __thiscall SaveGameMgr::~SaveGameMgr(SaveGameMgr *this)

{
  ~SaveGameMgr(this);
  AK::FreeHook(this);
  return;
}


/* SaveGameMgr::SaveGameMgr() */

void __thiscall SaveGameMgr::SaveGameMgr(SaveGameMgr *this)

{
  Sexy::LazySingleton<SaveGameMgr>::LazySingleton((LazySingleton<SaveGameMgr> *)this);
  *(undefined ***)this = &PTR__SaveGameMgr_066102a0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SaveGameMgr::getSaveLocationFor(std::string const&, bool) const */

void SaveGameMgr::getSaveLocationFor(string *param_1,bool param_2)

{
  char in_w2;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_30,"");
  nop();
  if (in_w2 == '\0') {
    GetFolder(asStack_10,3);
    FUN_05474278(asStack_30,asStack_10);
    std::string::~string(asStack_10);
  }
  else {
    GetFolder(asStack_28,3);
    std::operator+(asStack_28,'/');
    std::operator+(asStack_20,(string *)&DAT_06b06dd0);
    std::operator+(asStack_18,'/');
    FUN_05474278(asStack_30,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    std::string::~string(asStack_28);
  }
  FUN_031dcc6c(asStack_30,param_2);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SaveGameMgr::DoesSaveGameExist(bool) */

void SaveGameMgr::DoesSaveGameExist(bool param_1)

{
  undefined4 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getSaveLocationFor((string *)(ulong)param_1,true);
  uVar1 = Sexy::FileExists(asStack_10,(bool *)0x0);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SaveGameMgr::ClearSaveGame(bool) */

void SaveGameMgr::ClearSaveGame(bool param_1)

{
  string *psVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = DoesSaveGameExist(param_1);
  psVar1 = gLawnApp;
  if (cVar2 != '\0') {
    getSaveLocationFor((string *)(ulong)param_1,true);
    Sexy::SexyAppBase::EraseFile(psVar1);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SaveGameMgr::loadSaveGameHeader(SaveGameHeader&, bool) */

void SaveGameMgr::loadSaveGameHeader(SaveGameHeader *param_1,bool param_2)

{
  bool bVar1;
  PVZDB *pPVar2;
  undefined8 uVar3;
  RtId *pRVar4;
  RtObject *this;
  SaveGameHeader *extraout_x0;
  RtDbTable *pRVar5;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int iVar6;
  undefined8 uVar7;
  RtId aRStack_30 [8];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  pPVar2 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  getSaveLocationFor((string *)param_1,true);
  PVZDB::LoadPackageForTableFromFile(pPVar2,0,asStack_28,0,1);
  std::string::~string(asStack_28);
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(asStack_28,uVar3,0);
  while( true ) {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)asStack_28);
    if (!bVar1) break;
    pRVar4 = (RtId *)Sexy::RtDb::GetDb();
    Sexy::RtDbTable::Iterator::operator*((Iterator *)asStack_28);
    this = (RtObject *)Sexy::RtDb::GetObjectForId(pRVar4);
    Sexy::RtId::~RtId(aRStack_30);
    iVar6 = extraout_w1;
    if ((this != (RtObject *)0x0) &&
       (bVar1 = Sexy::RtObject::IsA<SaveGameHeader>(this), iVar6 = extraout_w1_00, bVar1)) {
      uVar7 = 1;
      nop();
      SaveGameHeader::operator=((SaveGameHeader *)(ulong)param_2,extraout_x0);
      iVar6 = extraout_w1_01;
    }
    Sexy::RtDbTable::Iterator::operator++((Iterator *)asStack_28,iVar6);
  }
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)asStack_28);
  pPVar2 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  pRVar5 = (RtDbTable *)PVZDB::GetTable(pPVar2,0);
  Sexy::RtDbTable::Reset(pRVar5,bVar1);
  pPVar2 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  pRVar5 = (RtDbTable *)PVZDB::GetTable(pPVar2,bVar1);
  Sexy::RtDbTable::Reset(pRVar5,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SaveGameMgr::saveSaveGameHeader(SaveGameHeader const&, bool) */

void SaveGameMgr::saveSaveGameHeader(SaveGameHeader *param_1,bool param_2)

{
  PVZDB *pPVar1;
  RtDbTable *this;
  SaveGameHeader *this_00;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  this = (RtDbTable *)PVZDB::GetTable(pPVar1,0);
  Sexy::RtDbTable::Reset(this,false);
  Sexy::RtDbTable::Reset(this,true);
  this_00 = ::operator_new(0x218);
  SaveGameHeader::SaveGameHeader(this_00);
  SaveGameHeader::operator=(this_00,(SaveGameHeader *)(ulong)param_2);
  Sexy::RtDbTable::AllocId(aRStack_10,this,this_00,0,1,0);
  Sexy::RtId::~RtId(aRStack_10);
  pPVar1 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  getSaveLocationFor((string *)param_1,true);
  PVZDB::SavePackageForTableToFile(pPVar1,0,aRStack_10,0,1);
  std::string::~string((string *)aRStack_10);
  Sexy::RtDbTable::Reset(this,false);
  Sexy::RtDbTable::Reset(this,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SaveGameMgr::generateHeaderForCurrentProfile() */

void __thiscall SaveGameMgr::generateHeaderForCurrentProfile(SaveGameMgr *this)

{
  char cVar1;
  SaveGameHeader SVar2;
  undefined4 uVar3;
  Version *pVVar4;
  ProfileMgr *pPVar5;
  undefined8 uVar6;
  long lVar7;
  PlayerInfo *this_00;
  SaveGameHeader *in_x8;
  Board *this_01;
  PVZVersion aPStack_f0 [232];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pVVar4 = (Version *)SaveGameHeader::SaveGameHeader(in_x8);
  Version::App(pVVar4);
  PVZVersion::operator=((PVZVersion *)(in_x8 + 0x40),aPStack_f0);
  pVVar4 = (Version *)PVZVersion::~PVZVersion(aPStack_f0);
  Version::LoadedRSB(pVVar4);
  PVZVersion::operator=((PVZVersion *)(in_x8 + 0x128),aPStack_f0);
  PVZVersion::~PVZVersion(aPStack_f0);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetAccountName();
  FUN_05474278(in_x8 + 0x30,aPStack_f0);
  std::string::~string((string *)aPStack_f0);
  in_x8[0x210] = (SaveGameHeader)0x1;
  pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar1 = ProfileMgr::HasValidProfile(pPVar5);
  if (cVar1 != '\0') {
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar7 = ProfileMgr::GetCurrentProfile(pPVar5);
    uVar3 = FUN_04411d84(*(undefined4 *)(lVar7 + 0x600));
    *(undefined4 *)(in_x8 + 0x38) = uVar3;
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
    uVar3 = PlayerInfo::GetVersion(this_00);
    *(undefined4 *)(in_x8 + 0x3c) = uVar3;
  }
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    uVar6 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    thunk_FUN_05475e00(in_x8 + 8,uVar6);
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    SVar2 = (SaveGameHeader)FUN_04411d90(this_01[0x118]);
    in_x8[0x10] = SVar2;
    Board::GetGameplayResourceGroups(this_01,(vector *)(in_x8 + 0x18));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SaveGameMgr::IsSaveGameValidForCurrentPlayerID(bool) */

void SaveGameMgr::IsSaveGameValidForCurrentPlayerID(bool param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  RtMixedPtrBase aRStack_440 [8];
  SaveGameHeader aSStack_438 [48];
  string asStack_408 [488];
  string asStack_220 [536];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = DoesSaveGameExist(param_1);
  uVar3 = 0;
  if (cVar1 == '\0') goto LAB_04413090;
  SaveGameHeader::SaveGameHeader(aSStack_438);
  cVar1 = loadSaveGameHeader((SaveGameHeader *)(ulong)param_1,SUB81(aSStack_438,0));
  if (cVar1 == '\0') {
LAB_044130e4:
    uVar3 = 0;
  }
  else {
    Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetAccountName();
    bVar2 = std::operator!=(asStack_220,asStack_408);
    std::string::~string(asStack_220);
    if (bVar2) goto LAB_044130e4;
    iVar4 = Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::FindProfileByIndex(iVar4);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_440);
    uVar3 = 0;
    if (cVar1 != '\0') {
      generateHeaderForCurrentProfile((SaveGameMgr *)(ulong)param_1);
      uVar3 = SaveGameHeader::VersionCheck((SaveGameHeader *)asStack_220,aSStack_438);
      SaveGameHeader::~SaveGameHeader((SaveGameHeader *)asStack_220);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_440);
  }
  SaveGameHeader::~SaveGameHeader(aSStack_438);
LAB_04413090:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SaveGameMgr::CanLoadGame(bool) */

void SaveGameMgr::CanLoadGame(bool param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  RtMixedPtrBase aRStack_440 [8];
  SaveGameHeader aSStack_438 [48];
  string asStack_408 [488];
  string asStack_220 [536];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar1 = DoesSaveGameExist(param_1);
  uVar3 = 0;
  if (cVar1 == '\0') goto LAB_04413090;
  SaveGameHeader::SaveGameHeader(aSStack_438);
  cVar1 = loadSaveGameHeader((SaveGameHeader *)(ulong)param_1,SUB81(aSStack_438,0));
  if (cVar1 == '\0') {
LAB_044130e4:
    uVar3 = 0;
  }
  else {
    Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetAccountName();
    bVar2 = std::operator!=(asStack_220,asStack_408);
    std::string::~string(asStack_220);
    if (bVar2) goto LAB_044130e4;
    iVar4 = Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::FindProfileByIndex(iVar4);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_440);
    uVar3 = 0;
    if (cVar1 != '\0') {
      generateHeaderForCurrentProfile((SaveGameMgr *)(ulong)param_1);
      uVar3 = SaveGameHeader::VersionCheck((SaveGameHeader *)asStack_220,aSStack_438);
      SaveGameHeader::~SaveGameHeader((SaveGameHeader *)asStack_220);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_440);
  }
  SaveGameHeader::~SaveGameHeader(aSStack_438);
LAB_04413090:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SaveGameMgr::TryLoadGame(bool) */

void SaveGameMgr::TryLoadGame(bool param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  wstring *pwVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_230 [8];
  undefined1 auStack_228 [8];
  SaveGameHeader aSStack_220 [8];
  undefined1 auStack_218 [8];
  undefined1 local_210;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsSaveGameValidForCurrentPlayerID(param_1);
  if (cVar1 != '\0') {
    SaveGameHeader::SaveGameHeader(aSStack_220);
    cVar2 = loadSaveGameHeader((SaveGameHeader *)(ulong)param_1,SUB81(aSStack_220,0));
    if (cVar2 == '\0') {
      cVar1 = '\0';
    }
    else {
      iVar3 = Sexy::LazySingleton<ProfileMgr>::GetInstance();
      ProfileMgr::FindProfileByIndex(iVar3);
      pwVar4 = (wstring *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_230);
      PlayerInfo::AM_GetName();
      ProfileMgr::SetCurrentProfile(pwVar4);
      FUN_05476c50(auStack_228);
      FUN_04411d88(gGameStateMgr + 0x1eb1,local_210);
      GameStateMgr::StartLevelFromSave(gGameStateMgr,auStack_218,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_230);
    }
    SaveGameHeader::~SaveGameHeader(aSStack_220);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SaveGameMgr::GetResourceGroupsRequiredForLoad(std::vector<std::string, std::allocator<std::string
   > >&, bool) */

void SaveGameMgr::GetResourceGroupsRequiredForLoad(vector *param_1,bool param_2)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_230;
  undefined8 local_228;
  SaveGameHeader aSStack_220 [24];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_208 [512];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsSaveGameValidForCurrentPlayerID(SUB81(param_1,0));
  if (cVar1 != '\0') {
    SaveGameHeader::SaveGameHeader(aSStack_220);
    cVar2 = loadSaveGameHeader((SaveGameHeader *)param_1,SUB81(aSStack_220,0));
    if (cVar2 == '\0') {
      cVar1 = '\0';
    }
    else {
      local_230 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(ulong)param_2);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_228,(__normal_iterator *)&local_230);
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(avStack_208);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(avStack_208);
      std::vector<std::string,std::allocator<std::string>>::
      insert<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,void>
                ((vector<std::string,std::allocator<std::string>> *)(ulong)param_2,local_228,uVar3,
                 uVar4);
    }
    SaveGameHeader::~SaveGameHeader(aSStack_220);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SaveGameMgr::TrySaveGame(bool) */

void __thiscall SaveGameMgr::TrySaveGame(SaveGameMgr *this,bool param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  SaveGameHeader aSStack_220 [536];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar1 = ProfileMgr::HasValidProfile(this_00);
  if ((cVar1 != '\0') && (iVar3 = GameStateMgr::GetState(gGameStateMgr), iVar3 == 5)) {
    if (*(long **)(gLawnApp + 0x9f0) != (long *)0x0) {
      cVar1 = (**(code **)(**(long **)(gLawnApp + 0x9f0) + 0x310))();
      if (cVar1 != '\0') {
        generateHeaderForCurrentProfile(this);
        cVar2 = saveSaveGameHeader((SaveGameHeader *)this,SUB81(aSStack_220,0));
        if (cVar2 == '\0') {
          cVar1 = '\0';
          ClearSaveGame(SUB81(this,0));
        }
        else {
          Board::SaveGameState(*(Board **)(gLawnApp + 0x9f0),param_1);
        }
        SaveGameHeader::~SaveGameHeader(aSStack_220);
        goto LAB_044133e8;
      }
    }
  }
  cVar1 = '\0';
LAB_044133e8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}

