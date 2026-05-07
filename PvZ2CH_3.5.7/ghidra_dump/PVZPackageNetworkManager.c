// Class: PVZPackageNetworkManager


/* PVZPackageNetworkManager::NetworkRequestsCompleted() */

bool __thiscall PVZPackageNetworkManager::NetworkRequestsCompleted(PVZPackageNetworkManager *this)

{
  long lVar1;
  
  lVar1 = FUN_043cfebc(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  return *(int *)(this + 0x50) == lVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZPackageNetworkManager::CleanPackageCache() */

void __thiscall PVZPackageNetworkManager::CleanPackageCache(PVZPackageNetworkManager *this)

{
  char cVar1;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = NetworkRequestsCompleted(this);
  if (cVar1 != '\0') {
    GetFolder(asStack_10,3);
    std::operator+(asStack_10,"packages/ProjectileTypes.json");
    std::string::~string(asStack_10);
    Sexy::SexyAppBase::EraseFile(Sexy::gSexyAppBase);
    GetFolder(asStack_18,3);
    std::operator+(asStack_18,"packages/PropertySheets.json");
    FUN_05474278(asStack_20,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    Sexy::SexyAppBase::EraseFile(Sexy::gSexyAppBase);
    GetFolder(asStack_18,3);
    std::operator+(asStack_18,"packages/DropItemGroups.json");
    FUN_05474278(asStack_20,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    Sexy::SexyAppBase::EraseFile(Sexy::gSexyAppBase);
    GetFolder(asStack_18,3);
    std::operator+(asStack_18,"packages/DropItems.json");
    FUN_05474278(asStack_20,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    Sexy::SexyAppBase::EraseFile(Sexy::gSexyAppBase);
    GetFolder(asStack_18,3);
    std::operator+(asStack_18,"packages/PresentTypes.json");
    FUN_05474278(asStack_20,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    Sexy::SexyAppBase::EraseFile(Sexy::gSexyAppBase);
    GetFolder(asStack_18,3);
    std::operator+(asStack_18,"packages/PlantTypes.json");
    FUN_05474278(asStack_20,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    Sexy::SexyAppBase::EraseFile(Sexy::gSexyAppBase);
    GetFolder(asStack_18,3);
    std::operator+(asStack_18,"packages/ZombieTypes.json");
    FUN_05474278(asStack_20,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    Sexy::SexyAppBase::EraseFile(Sexy::gSexyAppBase);
    GetFolder(asStack_18,3);
    std::operator+(asStack_18,"packages/BoardGridMaps.json");
    FUN_05474278(asStack_20,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    Sexy::SexyAppBase::EraseFile(Sexy::gSexyAppBase);
    GetFolder(asStack_18,3);
    std::operator+(asStack_18,"packages/LevelMutatorTables.json");
    FUN_05474278(asStack_20,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    Sexy::SexyAppBase::EraseFile(Sexy::gSexyAppBase);
    std::string::~string(asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZPackageNetworkManager::Watch(std::string const&, PVZDB::TableIndex, bool, bool) */

void __thiscall
PVZPackageNetworkManager::Watch
          (PVZPackageNetworkManager *this,undefined8 param_1,undefined4 param_3,undefined1 param_4,
          undefined1 param_5)

{
  undefined4 uVar1;
  PakFileDesc aPStack_18 [8];
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PakFileDesc::PakFileDesc(aPStack_18);
  thunk_FUN_05475e00(aPStack_18,param_1);
  local_10 = param_3;
  local_c = param_4;
  local_b = param_5;
  std::vector<WatchInfo,std::allocator<WatchInfo>>::push_back
            ((vector<WatchInfo,std::allocator<WatchInfo>> *)(this + 8),(WatchInfo *)aPStack_18);
  uVar1 = FUN_043cfebc(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  *(undefined4 *)(this + 0x50) = uVar1;
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aPStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZPackageNetworkManager::getLocalPathForTable(PVZDB::TableIndex) */

void PVZPackageNetworkManager::getLocalPathForTable(string *param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  uVar4 = *(undefined8 *)(param_2 + 8);
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_043cfebc(uVar4,*(undefined8 *)(param_2 + 0x10));
  lVar3 = 0;
  do {
    if (lVar3 == lVar1) {
      std::string::string(param_1,"");
      nop();
      goto LAB_043d09ec;
    }
    lVar2 = FUN_043cfec8(uVar4,lVar3);
    lVar3 = lVar3 + 1;
  } while (*(int *)(lVar2 + 8) != param_3);
  GetFolder(asStack_20,3);
  std::operator+(asStack_20,"packages/");
  if (*(char *)(lVar2 + 0xc) == '\0') {
    FUN_05475d88(asStack_10,lVar2);
  }
  else {
    FUN_043d08b8(asStack_10,lVar2);
  }
  std::operator+(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
LAB_043d09ec:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZPackageNetworkManager::ApplyChanges() */

void __thiscall PVZPackageNetworkManager::ApplyChanges(PVZPackageNetworkManager *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  ulong uVar4;
  undefined4 *puVar5;
  string *psVar6;
  PVZDB *pPVar7;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  int *piVar8;
  ObjectTypeDirectory<PlantType> *pOVar9;
  ObjectTypeDirectory<PresentType> *pOVar10;
  ObjectTypeDirectory<ZombieType> *pOVar11;
  RtId *pRVar12;
  RtObject *this_02;
  GamePropertySheet *pGVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  RtId aRStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  uVar14 = 0;
  local_8 = ___stack_chk_guard;
  do {
    uVar15 = *(undefined8 *)(this + 0x20);
    uVar16 = *(undefined8 *)(this + 0x28);
    uVar4 = FUN_043cfed0(uVar15,uVar16);
    if (uVar4 <= uVar14) {
      for (uVar14 = 0; uVar14 < uVar4; uVar14 = uVar14 + 1) {
        piVar8 = (int *)FUN_043cfedc(uVar15,uVar14);
        iVar1 = *piVar8;
        if (iVar1 == 9) {
          pOVar11 = (ObjectTypeDirectory<ZombieType> *)
                    Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
          ObjectTypeDirectory<ZombieType>::Clear(pOVar11);
          pOVar11 = (ObjectTypeDirectory<ZombieType> *)
                    Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
          ObjectTypeDirectory<ZombieType>::Init(pOVar11,9);
          uVar15 = *(undefined8 *)(this + 0x20);
          uVar16 = *(undefined8 *)(this + 0x28);
        }
        else if (iVar1 < 10) {
          if (iVar1 == 6) {
            pOVar9 = (ObjectTypeDirectory<PlantType> *)
                     Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
            ObjectTypeDirectory<PlantType>::Clear(pOVar9);
            pOVar9 = (ObjectTypeDirectory<PlantType> *)
                     Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
            ObjectTypeDirectory<PlantType>::Init(pOVar9,6);
            uVar15 = *(undefined8 *)(this + 0x20);
            uVar16 = *(undefined8 *)(this + 0x28);
          }
        }
        else if (iVar1 == 0x11) {
          pOVar10 = (ObjectTypeDirectory<PresentType> *)
                    Sexy::LazySingleton<ObjectTypeDirectory<PresentType>>::GetInstancePtr();
          ObjectTypeDirectory<PresentType>::Clear(pOVar10);
          pOVar10 = (ObjectTypeDirectory<PresentType> *)
                    Sexy::LazySingleton<ObjectTypeDirectory<PresentType>>::GetInstancePtr();
          ObjectTypeDirectory<PresentType>::Init(pOVar10,0x11);
          uVar15 = *(undefined8 *)(this + 0x20);
          uVar16 = *(undefined8 *)(this + 0x28);
        }
        else if (iVar1 == 0x3e) {
          this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
          PlayerInfo::forceRefreshYetiCount(this_01);
          uVar15 = *(undefined8 *)(this + 0x20);
          uVar16 = *(undefined8 *)(this + 0x28);
        }
        uVar4 = FUN_043cfed0(uVar15,uVar16);
      }
      uVar15 = Sexy::LazySingleton<PVZDB>::GetInstance();
      Sexy::RtName::RtName((RtName *)asStack_18,L"DefaultGameProps");
      PVZDB::GetIdByAlias(aRStack_20,uVar15,5,asStack_18);
      Sexy::RtName::~RtName((RtName *)asStack_18);
      pRVar12 = (RtId *)Sexy::RtDb::GetDb();
      this_02 = (RtObject *)Sexy::RtDb::GetObjectForId(pRVar12);
      pGVar13 = Sexy::RtObject::Cast<GamePropertySheet>(this_02);
      pOVar9 = (ObjectTypeDirectory<PlantType> *)
               Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::SortTypes(pOVar9,(vector *)(pGVar13 + 0x10));
      std::vector<PVZDB::TableIndex,std::allocator<PVZDB::TableIndex>>::clear
                ((vector<PVZDB::TableIndex,std::allocator<PVZDB::TableIndex>> *)(this + 0x20));
      std::vector<std::string,std::allocator<std::string>>::clear
                ((vector<std::string,std::allocator<std::string>> *)(this + 0x38));
      *(undefined4 *)(this + 0x50) = 0;
      std::vector<WatchInfo,std::allocator<WatchInfo>>::clear
                ((vector<WatchInfo,std::allocator<WatchInfo>> *)(this + 8));
      Sexy::RtId::~RtId(aRStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar5 = (undefined4 *)FUN_043cfedc(uVar15,uVar14);
    getLocalPathForTable(asStack_18,this,*puVar5);
    psVar6 = (string *)FUN_043cfee4(*(undefined8 *)(this + 0x38),uVar14);
    bVar2 = std::operator!=(psVar6,"");
    if (bVar2) {
      pPVar7 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
      puVar5 = (undefined4 *)FUN_043cfedc(*(undefined8 *)(this + 0x20),uVar14);
      uVar15 = FUN_043cfee4(*(undefined8 *)(this + 0x38),uVar14);
      cVar3 = PVZDB::LoadPackageForTableFromJson(pPVar7,*puVar5,uVar15,0);
      if (cVar3 == '\0') goto LAB_043d0ae8;
      Sexy::SexyAppBase::EraseFile(Sexy::gSexyAppBase);
      pPVar7 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
      puVar5 = (undefined4 *)FUN_043cfedc(*(undefined8 *)(this + 0x20),uVar14);
      PVZDB::SavePackageForTableToFile(pPVar7,*puVar5,asStack_18,1,0);
    }
    else {
LAB_043d0ae8:
      cVar3 = Sexy::SexyAppBase::FileExists(gLawnApp,asStack_18);
      if (cVar3 != '\0') {
        pPVar7 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
        puVar5 = (undefined4 *)FUN_043cfedc(*(undefined8 *)(this + 0x20),uVar14);
        PVZDB::LoadPackageForTableFromFile(pPVar7,*puVar5,asStack_18,1,0);
      }
    }
    uVar14 = uVar14 + 1;
    std::string::~string(asStack_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZPackageNetworkManager::onRequestFinished(int, std::string const&) */

void __thiscall
PVZPackageNetworkManager::onRequestFinished
          (PVZPackageNetworkManager *this,int param_1,string *param_2)

{
  char cVar1;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_c = param_1;
  std::vector<PVZDB::TableIndex,std::allocator<PVZDB::TableIndex>>::push_back
            ((vector<PVZDB::TableIndex,std::allocator<PVZDB::TableIndex>> *)(this + 0x20),
             (TableIndex *)&local_c);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38),param_2);
  *(int *)(this + 0x50) = *(int *)(this + 0x50) + 1;
  cVar1 = NetworkRequestsCompleted(this);
  if (cVar1 != '\0') {
    ApplyChanges(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZPackageNetworkManager::CheckForUpdates(int) */

void __thiscall
PVZPackageNetworkManager::CheckForUpdates(PVZPackageNetworkManager *this,int param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate2<int,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<PVZDB::TableIndex,std::allocator<PVZDB::TableIndex>>::clear
            ((vector<PVZDB::TableIndex,std::allocator<PVZDB::TableIndex>> *)(this + 0x20));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38));
  *(undefined4 *)(this + 0x50) = 0;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRequestFinished);
  Sexy::Delegate2<int,std::string_const&>::
  Delegate2<PVZPackageNetworkManager,void(PVZPackageNetworkManager::*)(int,std::string_const&)>
            (aDStack_38,aCStack_50);
  FUN_043d1128(this + 8,aDStack_38,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZPackageNetworkManager::LoadPackageFile(bool) */

void __thiscall
PVZPackageNetworkManager::LoadPackageFile(PVZPackageNetworkManager *this,bool param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = NetworkRequestsCompleted(this);
  if (cVar1 != '\0') {
    std::vector<WatchInfo,std::allocator<WatchInfo>>::clear
              ((vector<WatchInfo,std::allocator<WatchInfo>> *)(this + 8));
    std::string::string(asStack_10,"ProjectileTypes.json");
    Watch(this,asStack_10,0xc,0,0);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"PropertySheets.json");
    Watch(this,asStack_10,5,0,0);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"DropItemGroups.json");
    Watch(this,asStack_10,0x3e,0,0);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"DropItems.json");
    Watch(this,asStack_10,0x3f,0,0);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"ChallengeDropItems.json");
    Watch(this,asStack_10,0x40,0,0);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"PresentTypes.json");
    Watch(this,asStack_10,0x11,0,0);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"PlantTypes.json");
    Watch(this,asStack_10,6,0,0);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"ZombieTypes.json");
    Watch(this,asStack_10,9,0,0);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"BoardGridMaps.json");
    Watch(this,asStack_10,0x7c,0,0);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"LevelMutatorTables.json");
    Watch(this,asStack_10,0x7f,0,0);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"LevelMutatorModules.json");
    Watch(this,asStack_10,0x7e,0,0);
    std::string::~string(asStack_10);
    nop();
    if (param_1) {
      uVar4 = 0;
      while( true ) {
        uVar5 = *(undefined8 *)(this + 8);
        uVar3 = FUN_043cfebc(uVar5,*(undefined8 *)(this + 0x10));
        if (uVar3 <= uVar4) break;
        lVar2 = FUN_043cfec8(uVar5,uVar4);
        std::vector<PVZDB::TableIndex,std::allocator<PVZDB::TableIndex>>::push_back
                  ((vector<PVZDB::TableIndex,std::allocator<PVZDB::TableIndex>> *)(this + 0x20),
                   (TableIndex *)(lVar2 + 8));
        std::string::string(asStack_10,"");
        std::vector<std::string,std::allocator<std::string>>::push_back
                  ((vector<std::string,std::allocator<std::string>> *)(this + 0x38),asStack_10);
        std::string::~string(asStack_10);
        nop();
        uVar4 = uVar4 + 1;
      }
      ApplyChanges(this);
    }
    else {
      CheckForUpdates(this,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZPackageNetworkManager::~PVZPackageNetworkManager() */

void __thiscall PVZPackageNetworkManager::~PVZPackageNetworkManager(PVZPackageNetworkManager *this)

{
  *(undefined ***)this = &PTR__PVZPackageNetworkManager_06846c80;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38));
  std::vector<PVZDB::TableIndex,std::allocator<PVZDB::TableIndex>>::~vector
            ((vector<PVZDB::TableIndex,std::allocator<PVZDB::TableIndex>> *)(this + 0x20));
  std::vector<WatchInfo,std::allocator<WatchInfo>>::~vector
            ((vector<WatchInfo,std::allocator<WatchInfo>> *)(this + 8));
  Sexy::LazySingleton<PVZPackageNetworkManager>::~LazySingleton
            ((LazySingleton<PVZPackageNetworkManager> *)this);
  return;
}


/* PVZPackageNetworkManager::~PVZPackageNetworkManager() */

void __thiscall PVZPackageNetworkManager::~PVZPackageNetworkManager(PVZPackageNetworkManager *this)

{
  ~PVZPackageNetworkManager(this);
  AK::FreeHook(this);
  return;
}


/* PVZPackageNetworkManager::PVZPackageNetworkManager() */

void __thiscall PVZPackageNetworkManager::PVZPackageNetworkManager(PVZPackageNetworkManager *this)

{
  Sexy::LazySingleton<PVZPackageNetworkManager>::LazySingleton
            ((LazySingleton<PVZPackageNetworkManager> *)this);
  *(undefined ***)this = &PTR__PVZPackageNetworkManager_06846c80;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  *(undefined4 *)(this + 0x50) = 0;
  std::vector<WatchInfo,std::allocator<WatchInfo>>::clear
            ((vector<WatchInfo,std::allocator<WatchInfo>> *)(this + 8));
  return;
}

