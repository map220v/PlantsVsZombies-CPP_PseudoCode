// Class: MiniGamePerkMgr


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkMgr::GetCurrentPerkLevel(std::string) */

void __thiscall MiniGamePerkMgr::GetCurrentPerkLevel(MiniGamePerkMgr *this,string *param_2)

{
  char cVar1;
  bool bVar2;
  GridItemPoolEntry *pGVar3;
  long lVar4;
  undefined8 local_28;
  undefined8 local_20;
  GridItemPoolEntry aGStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 8));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
    if (!bVar2) {
      local_10 = 0xffffffff;
LAB_036bbfe4:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(local_10);
    }
    pGVar3 = (GridItemPoolEntry *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    GridItemPoolEntry::GridItemPoolEntry(aGStack_18,pGVar3);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aGStack_18);
    cVar1 = std::operator==((string *)(lVar4 + 0x10),param_2);
    if (cVar1 != '\0') {
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aGStack_18);
      goto LAB_036bbfe4;
    }
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aGStack_18);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_28);
  } while( true );
}


/* MiniGamePerkMgr::IsCurrentLevelPerksDisabled() */

byte MiniGamePerkMgr::IsCurrentLevelPerksDisabled(void)

{
  byte bVar1;
  
  bVar1 = MiniGameCollectionUtils::IsPlayingMiniGameCollectionLevel();
  return bVar1 ^ 1;
}


/* MiniGamePerkMgr::MiniGamePerkMgr() */

void __thiscall MiniGamePerkMgr::MiniGamePerkMgr(MiniGamePerkMgr *this)

{
  Sexy::LazySingleton<MiniGamePerkMgr>::LazySingleton((LazySingleton<MiniGamePerkMgr> *)this);
  *(undefined ***)this = &PTR__MiniGamePerkMgr_066b12f0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* MiniGamePerkMgr::GetCurrentLevelScore() */

void MiniGamePerkMgr::GetCurrentLevelScore(void)

{
  AndroidAsyncIOFile *this;
  
  this = (AndroidAsyncIOFile *)FUN_0389bfcc(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (AndroidAsyncIOFile *)0x0) {
    Sexy::AndroidAsyncIOFile::GetSize(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkMgr::AddMiniGamePerksModuleIfNeeded() */

void MiniGamePerkMgr::AddMiniGamePerksModuleIfNeeded(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  LevelModuleManager *pLVar4;
  RtId aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsCurrentLevelPerksDisabled();
  if (cVar1 == '\0') {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::RtName::RtName(aRStack_18,L"MiniGamePerksModuleProps");
    PVZDB::GetIdByAlias(aRStack_28,uVar3,0x14,aRStack_18);
    Sexy::RtName::~RtName(aRStack_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
    if (bVar2) {
      pLVar4 = (LevelModuleManager *)
               FUN_03896020(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_20);
      LevelModuleManager::AddModuleFromProperties(pLVar4,aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      Sexy::RtId::~RtId(aRStack_28);
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      Sexy::RtId::~RtId(aRStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkMgr::GetDescriptionForLevel(std::string const&, int) */

void MiniGamePerkMgr::GetDescriptionForLevel(string *param_1,int param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  int in_w2;
  RtWeakPtr aRStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574();
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::ToWString((string *)(ulong)(uint)param_2);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar2,0xad,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if (bVar1) {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    (**(code **)(*plVar3 + 0x80))(aRStack_18,plVar3,in_w2 + -1);
    FUN_054766c8();
    FUN_05476c50(aRStack_18);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkMgr::GetPerkName(std::string const&) */

void MiniGamePerkMgr::GetPerkName(string *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  string *in_x1;
  RtWeakPtr aRStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574();
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::ToWString(in_x1);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar2,0xad,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if (bVar1) {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    (**(code **)(*plVar3 + 0x88))(aRStack_18);
    FUN_054766c8();
    FUN_05476c50(aRStack_18);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerkMgr::createUnlockedPerkList() */

void __thiscall MiniGamePerkMgr::createUnlockedPerkList(MiniGamePerkMgr *this)

{
  std::vector<MiniGamePerkData,std::allocator<MiniGamePerkData>>::clear
            ((vector<MiniGamePerkData,std::allocator<MiniGamePerkData>> *)(this + 8));
  return;
}


/* MiniGamePerkMgr::~MiniGamePerkMgr() */

void __thiscall MiniGamePerkMgr::~MiniGamePerkMgr(MiniGamePerkMgr *this)

{
  *(undefined ***)this = &PTR__MiniGamePerkMgr_066b12f0;
  std::vector<MiniGamePerkData,std::allocator<MiniGamePerkData>>::clear
            ((vector<MiniGamePerkData,std::allocator<MiniGamePerkData>> *)(this + 8));
  std::vector<MiniGamePerkData,std::allocator<MiniGamePerkData>>::clear
            ((vector<MiniGamePerkData,std::allocator<MiniGamePerkData>> *)(this + 0x20));
  std::vector<MiniGamePerkData,std::allocator<MiniGamePerkData>>::~vector
            ((vector<MiniGamePerkData,std::allocator<MiniGamePerkData>> *)(this + 0x20));
  std::vector<MiniGamePerkData,std::allocator<MiniGamePerkData>>::~vector
            ((vector<MiniGamePerkData,std::allocator<MiniGamePerkData>> *)(this + 8));
  Sexy::LazySingleton<MiniGamePerkMgr>::~LazySingleton((LazySingleton<MiniGamePerkMgr> *)this);
  return;
}


/* MiniGamePerkMgr::~MiniGamePerkMgr() */

void __thiscall MiniGamePerkMgr::~MiniGamePerkMgr(MiniGamePerkMgr *this)

{
  ~MiniGamePerkMgr(this);
  AK::FreeHook(this);
  return;
}


/* MiniGamePerkMgr::GetUnlockedPerkList() */

vector<MiniGamePerkData,std::allocator<MiniGamePerkData>> *
MiniGamePerkMgr::GetUnlockedPerkList(void)

{
  long in_x0;
  vector<MiniGamePerkData,std::allocator<MiniGamePerkData>> *in_x8;
  
  std::vector<MiniGamePerkData,std::allocator<MiniGamePerkData>>::vector
            (in_x8,(vector *)(in_x0 + 8));
  return in_x8;
}


/* MiniGamePerkMgr::GetSelectedPerkList() */

vector<MiniGamePerkData,std::allocator<MiniGamePerkData>> *
MiniGamePerkMgr::GetSelectedPerkList(void)

{
  long in_x0;
  vector<MiniGamePerkData,std::allocator<MiniGamePerkData>> *in_x8;
  
  std::vector<MiniGamePerkData,std::allocator<MiniGamePerkData>>::vector
            (in_x8,(vector *)(in_x0 + 0x20));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkMgr::CreatePerkData(std::string, int) */

void MiniGamePerkMgr::CreatePerkData
               (GridItemPoolEntry *param_1,undefined8 param_2,string *param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  RtObject *this;
  MiniGamePerkItemProperties *pMVar5;
  RtWeakPtr aRStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::ToWString(param_3);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar4,0xad,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if (bVar2) {
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    pMVar5 = Sexy::RtObject::Cast<MiniGamePerkItemProperties>(this);
    if (((pMVar5 != (MiniGamePerkItemProperties *)0x0) &&
        (iVar1 = *(int *)(pMVar5 + 0x60),
        iVar3 = MiniGameCollectionUtils::GetMiniGameCollectionType(), iVar1 != iVar3)) &&
       (*(int *)(pMVar5 + 0x60) != -1)) {
      GridItemPoolEntry::GridItemPoolEntry(param_1,(GridItemPoolEntry *)&DAT_06ab65a8);
      goto LAB_038a0ce0;
    }
  }
  MiniGamePerkData::MiniGamePerkData((MiniGamePerkData *)aRStack_18);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)aRStack_18,aRStack_28);
  local_10 = param_4;
  GridItemPoolEntry::GridItemPoolEntry(param_1,(GridItemPoolEntry *)aRStack_18);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aRStack_18);
LAB_038a0ce0:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkMgr::addUnlockedPerk(std::string, int) */

void __thiscall
MiniGamePerkMgr::addUnlockedPerk(MiniGamePerkMgr *this,string *param_2,undefined4 param_3)

{
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  do {
    uVar5 = *(undefined8 *)(this + 8);
    uVar3 = FUN_0389685c(uVar5,*(undefined8 *)(this + 0x10));
    if (uVar3 <= uVar4) {
      FUN_05475d88(asStack_20,param_2);
      CreatePerkData(aRStack_18,this,asStack_20,param_3);
      std::string::~string(asStack_20);
      if (-1 < local_10) {
        std::vector<MiniGamePerkData,std::allocator<MiniGamePerkData>>::push_back
                  ((vector<MiniGamePerkData,std::allocator<MiniGamePerkData>> *)(this + 8),
                   (MiniGamePerkData *)aRStack_18);
      }
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_18);
      break;
    }
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03896868(uVar5,uVar4);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    cVar1 = std::operator==(param_2,(string *)(lVar2 + 0x10));
    uVar4 = uVar4 + 1;
  } while (cVar1 == '\0');
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkMgr::SyncPerkList(std::vector<NetMiniGamePerkData,
   std::allocator<NetMiniGamePerkData> > const&) */

void __thiscall MiniGamePerkMgr::SyncPerkList(MiniGamePerkMgr *this,vector *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 local_28;
  undefined8 local_20;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<MiniGamePerkData,std::allocator<MiniGamePerkData>>::clear
            ((vector<MiniGamePerkData,std::allocator<MiniGamePerkData>> *)(this + 8));
  local_28 = FUN_0389adc4(*(undefined8 *)param_1);
  local_20 = FUN_0389ae14(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    uVar2 = ClampInt(*(int *)(lVar4 + 4) + -1,0,4);
    iVar3 = MiniGamePerkMapper::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    FUN_05475d88(asStack_10,asStack_18);
    addUnlockedPerk(this,asStack_10,uVar2);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkMgr::GetMaxUseTimeAllowed(std::string const&, int) */

void MiniGamePerkMgr::GetMaxUseTimeAllowed(string *param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  RtObject *this;
  MiniGamePerkItemProperties *pMVar4;
  RtWeakPtr aRStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::ToWString((string *)(ulong)(uint)param_2);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar3,0xad,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if (bVar1) {
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    pMVar4 = Sexy::RtObject::Cast<MiniGamePerkItemProperties>(this);
    if (pMVar4 != (MiniGamePerkItemProperties *)0x0) {
      uVar2 = FUN_0389602c(*(undefined8 *)(pMVar4 + 0x48),*(undefined8 *)(pMVar4 + 0x50));
      goto LAB_038a0fb0;
    }
  }
  uVar2 = 0;
LAB_038a0fb0:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

