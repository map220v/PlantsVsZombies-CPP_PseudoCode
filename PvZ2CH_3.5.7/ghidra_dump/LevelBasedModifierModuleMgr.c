// Class: LevelBasedModifierModuleMgr


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifierModuleMgr::GetTotalCollectionLevels() */

void __thiscall
LevelBasedModifierModuleMgr::GetTotalCollectionLevels(LevelBasedModifierModuleMgr *this)

{
  bool bVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar2;
  int *piVar3;
  int iVar4;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar4 = 0;
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 8));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
  if (bVar1) {
    do {
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      local_2c = 0;
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(lVar2 + 0x20));
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar2 + 0x20));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar1) {
        lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        piVar3 = eastl::max_alt<int>((int *)(lVar2 + 8),&local_2c);
        local_2c = *piVar3;
        __gnu_cxx::
        __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
        ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                      *)&local_18);
      }
      iVar4 = iVar4 + local_2c;
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_28);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
    } while (bVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifierModuleMgr::GetLevelModifierModuleCollection(int, int) */

void LevelBasedModifierModuleMgr::GetLevelModifierModuleCollection(int param_1,int param_2)

{
  ResourceInfo *pRVar1;
  ulong uVar2;
  PVZ2UnchartedModeUtils *this;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  long lVar4;
  RtWeakPtrBase *pRVar5;
  int in_w2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  ulong uVar6;
  undefined8 uVar7;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  uVar6 = (ulong)param_2;
  local_8 = ___stack_chk_guard;
  if (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) {
    this = (PVZ2UnchartedModeUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
    PVZ2UnchartedModeUtils::GetCurrentLevel(this);
    LevelUtils::LoadLevelDefinition((string *)this,SUB81(asStack_18,0));
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    std::string::~string(asStack_18);
  }
  else {
    pRVar1 = (ResourceInfo *)Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  }
  if (pRVar1 != (ResourceInfo *)0x0) {
    uVar7 = *(undefined8 *)(pRVar1 + 0x1c8);
    uVar2 = FUN_033fa314(uVar7,*(undefined8 *)(pRVar1 + 0x1d0));
    if (uVar6 < uVar2) {
      pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_033fa320(uVar7,uVar6);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
      uVar2 = FUN_033fa328(*(undefined8 *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0x20));
      if ((ulong)(long)in_w2 < uVar2) {
        pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)
                 FUN_033fa320(*(undefined8 *)(pRVar1 + 0x1c8),uVar6);
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
        pRVar5 = (RtWeakPtrBase *)FUN_033fa350(*(undefined8 *)(lVar4 + 0x18),(long)in_w2);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)in_x8,pRVar5);
        goto LAB_03400044;
      }
    }
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
LAB_03400044:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifierModuleMgr::GetLevelModifierModuleCollections(int) */

void __thiscall
LevelBasedModifierModuleMgr::GetLevelModifierModuleCollections
          (LevelBasedModifierModuleMgr *this,int param_1)

{
  ResourceInfo *pRVar1;
  ulong uVar2;
  undefined *puVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar4;
  PVZ2UnchartedModeUtils *this_01;
  undefined8 uVar5;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) {
    this_01 = (PVZ2UnchartedModeUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
    PVZ2UnchartedModeUtils::GetCurrentLevel(this_01);
    LevelUtils::LoadLevelDefinition((string *)this_01,SUB81(asStack_18,0));
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    std::string::~string(asStack_18);
  }
  else {
    pRVar1 = (ResourceInfo *)Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  }
  if (pRVar1 != (ResourceInfo *)0x0) {
    uVar5 = *(undefined8 *)(pRVar1 + 0x1c8);
    uVar2 = FUN_033fa314(uVar5,*(undefined8 *)(pRVar1 + 0x1d0));
    if ((ulong)(long)param_1 < uVar2) {
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_033fa320(uVar5);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      puVar3 = (undefined *)(lVar4 + 0x18);
      goto LAB_03400184;
    }
  }
  puVar3 = &DAT_06a9ee20;
LAB_03400184:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifierModuleMgr::GetDefaultLevelModifierModuleCollection(int) */

void LevelBasedModifierModuleMgr::GetDefaultLevelModifierModuleCollection(int param_1)

{
  ResourceInfo *pRVar1;
  ulong uVar2;
  PVZ2UnchartedModeUtils *this;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar3;
  int in_w1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  undefined8 uVar4;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) {
    this = (PVZ2UnchartedModeUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
    PVZ2UnchartedModeUtils::GetCurrentLevel(this);
    LevelUtils::LoadLevelDefinition((string *)this,SUB81(asStack_18,0));
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    std::string::~string(asStack_18);
  }
  else {
    pRVar1 = (ResourceInfo *)Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  }
  if (pRVar1 != (ResourceInfo *)0x0) {
    uVar4 = *(undefined8 *)(pRVar1 + 0x1c8);
    uVar2 = FUN_033fa314(uVar4,*(undefined8 *)(pRVar1 + 0x1d0));
    if ((ulong)(long)in_w1 < uVar2) {
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_033fa320(uVar4);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)in_x8,(RtWeakPtrBase *)(lVar3 + 0x10));
      goto LAB_03400284;
    }
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
LAB_03400284:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifierModuleMgr::LevelBasedModifierModuleMgr() */

void __thiscall
LevelBasedModifierModuleMgr::LevelBasedModifierModuleMgr(LevelBasedModifierModuleMgr *this)

{
  Sexy::LazySingleton<LevelBasedModifierModuleMgr>::LazySingleton
            ((LazySingleton<LevelBasedModifierModuleMgr> *)this);
  *(undefined ***)this = &PTR__LevelBasedModifierModuleMgr_0661f690;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifierModuleMgr::HasTargetCollection(std::string const&) */

void __thiscall
LevelBasedModifierModuleMgr::HasTargetCollection(LevelBasedModifierModuleMgr *this,string *param_1)

{
  undefined8 uVar1;
  RtId *pRVar2;
  long lVar3;
  wstring awStack_28 [8];
  RtId aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ToWString(param_1);
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,awStack_28);
  PVZDB::GetIdByAlias(aRStack_20,uVar1,0xa5,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  pRVar2 = (RtId *)Sexy::RtDb::GetDb();
  lVar3 = Sexy::RtDb::GetObjectForId(pRVar2);
  Sexy::RtId::~RtId(aRStack_20);
  FUN_05476c50(awStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3 != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifierModuleMgr::HasCollectionSelected(std::string const&) */

void __thiscall
LevelBasedModifierModuleMgr::HasCollectionSelected
          (LevelBasedModifierModuleMgr *this,string *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool *pbVar5;
  bool abStack_48 [8];
  wstring awStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  string asStack_30 [8];
  RtId aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  pbVar5 = abStack_48;
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
  Sexy::ToWString(param_1);
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName((RtName *)local_18,awStack_40);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_38,uVar3,0xa5,(RtName *)local_18);
  Sexy::RtName::~RtName((RtName *)local_18);
  Sexy::RtMixedPtrBase::GetId();
  uVar2 = Sexy::RtId::GetAliasNameIndex(aRStack_28);
  Sexy::RtName::RtName((RtName *)local_18,uVar2);
  uVar3 = Sexy::RtName::GetString();
  FUN_05478178((Sexy *)&local_20,uVar3);
  Sexy::WStringToString((Sexy *)&local_20,(wstring *)0x0,pbVar5);
  FUN_05476c50((Sexy *)&local_20);
  nop();
  Sexy::RtName::~RtName((RtName *)local_18);
  Sexy::RtId::~RtId(aRStack_28);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_20 = FUN_034012b4(uVar3,uVar4,asStack_30);
  local_18[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
  std::string::~string(asStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  FUN_05476c50(awStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* LevelBasedModifierModuleMgr::~LevelBasedModifierModuleMgr() */

void __thiscall
LevelBasedModifierModuleMgr::~LevelBasedModifierModuleMgr(LevelBasedModifierModuleMgr *this)

{
  *(undefined ***)this = &PTR__LevelBasedModifierModuleMgr_0661f690;
  std::vector<LevelBasedSelectInfo,std::allocator<LevelBasedSelectInfo>>::~vector
            ((vector<LevelBasedSelectInfo,std::allocator<LevelBasedSelectInfo>> *)(this + 8));
  Sexy::LazySingleton<LevelBasedModifierModuleMgr>::~LazySingleton
            ((LazySingleton<LevelBasedModifierModuleMgr> *)this);
  return;
}


/* LevelBasedModifierModuleMgr::~LevelBasedModifierModuleMgr() */

void __thiscall
LevelBasedModifierModuleMgr::~LevelBasedModifierModuleMgr(LevelBasedModifierModuleMgr *this)

{
  ~LevelBasedModifierModuleMgr(this);
  AK::FreeHook(this);
  return;
}


/* LevelBasedModifierModuleMgr::ClearSelectedCollections() */

void __thiscall
LevelBasedModifierModuleMgr::ClearSelectedCollections(LevelBasedModifierModuleMgr *this)

{
  std::vector<LevelBasedSelectInfo,std::allocator<LevelBasedSelectInfo>>::clear
            ((vector<LevelBasedSelectInfo,std::allocator<LevelBasedSelectInfo>> *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifierModuleMgr::RemoveLevelModifierModuleCollections(int, int) */

void LevelBasedModifierModuleMgr::RemoveLevelModifierModuleCollections(int param_1,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  RtWeakPtr aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetLevelModifierModuleCollection(param_1,param_2);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_30);
  if (bVar1) {
    this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)((ulong)(uint)param_1 + 8);
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this);
    local_28 = FUN_03401104(uVar2,uVar3,aRStack_30);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
    if (bVar1) {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_18,(__normal_iterator *)&local_28);
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_20);
      std::vector<LevelBasedSelectInfo,std::allocator<LevelBasedSelectInfo>>::erase
                ((vector<LevelBasedSelectInfo,std::allocator<LevelBasedSelectInfo>> *)this,local_18,
                 local_10);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifierModuleMgr::AddLevelModifierModuleCollections(int, int) */

void LevelBasedModifierModuleMgr::AddLevelModifierModuleCollections(int param_1,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  RtWeakPtr aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetLevelModifierModuleCollection(param_1,param_2);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if (bVar1) {
    this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)((ulong)(uint)param_1 + 8);
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this);
    local_20 = FUN_03400e28(uVar2,uVar3,aRStack_28);
    local_18[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this);
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
    if (bVar1) {
      ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::ProbabilityBucket::ProbabilityBucket
                ((ProbabilityBucket *)local_18,aRStack_28,param_2);
      std::vector<LevelBasedSelectInfo,std::allocator<LevelBasedSelectInfo>>::push_back
                ((vector<LevelBasedSelectInfo,std::allocator<LevelBasedSelectInfo>> *)this,
                 (LevelBasedSelectInfo *)local_18);
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)local_18);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifierModuleMgr::getMaxSelectedDifficulty() */

undefined4 __thiscall
LevelBasedModifierModuleMgr::getMaxSelectedDifficulty(LevelBasedModifierModuleMgr *this)

{
  vector<LevelBasedSelectInfo,std::allocator<LevelBasedSelectInfo>> *this_00;
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  
  this_00 = (vector<LevelBasedSelectInfo,std::allocator<LevelBasedSelectInfo>> *)(this + 8);
  cVar1 = std::vector<LevelBasedSelectInfo,std::allocator<LevelBasedSelectInfo>>::empty(this_00);
  uVar5 = 0;
  if (cVar1 == '\0') {
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)this_00);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this_00);
    FUN_0340479c(uVar2,uVar3);
    lVar4 = FUN_033fa748(*(undefined8 *)(this + 8));
    uVar5 = *(undefined4 *)(lVar4 + 8);
  }
  return uVar5;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifierModuleMgr::addCollectionModule(LevelBasedModifierInfo const&) */

void __thiscall
LevelBasedModifierModuleMgr::addCollectionModule
          (LevelBasedModifierModuleMgr *this,LevelBasedModifierInfo *param_1)

{
  bool bVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  LevelModuleManager *pLVar5;
  string asStack_38 [8];
  wstring awStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelBasedModifierModule::GetModuleClassName
            ((LevelBasedModifierModule *)asStack_18,*(undefined4 *)param_1);
  std::operator+(asStack_18,"Props");
  std::string::~string(asStack_18);
  if (0 < *(int *)(param_1 + 4)) {
    std::operator+(asStack_38,"_");
    DString::DString((DString *)asStack_18,*(int *)(param_1 + 4));
    pcVar2 = (char *)DString::c_str((DString *)asStack_18);
    std::operator+(asStack_28,pcVar2);
    FUN_05474278(asStack_38,asStack_20);
    std::string::~string(asStack_20);
    DString::~DString((DString *)asStack_18);
    std::string::~string(asStack_28);
  }
  Sexy::ToWString(asStack_38);
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName((RtName *)asStack_18,awStack_30);
  PVZDB::GetIdByAlias(asStack_28,uVar3,0xa6,asStack_18);
  Sexy::RtName::~RtName((RtName *)asStack_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_20,(RtWeakPtrBase *)asStack_28);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_20);
  if (bVar1) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
    *(undefined4 *)(lVar4 + 0x40) = *(undefined4 *)(param_1 + 4);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
    *(undefined4 *)(lVar4 + 0x44) = *(undefined4 *)(param_1 + 8);
    pLVar5 = (LevelModuleManager *)
             FUN_033fa26c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_18,(RtWeakPtrBase *)asStack_20);
    LevelModuleManager::AddModuleFromProperties(pLVar5,asStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
  Sexy::RtId::~RtId((RtId *)asStack_28);
  FUN_05476c50(awStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifierModuleMgr::syncDefaultCollections(int) */

void __thiscall
LevelBasedModifierModuleMgr::syncDefaultCollections(LevelBasedModifierModuleMgr *this,int param_1)

{
  bool bVar1;
  ResourceInfo *pRVar2;
  ulong uVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar4;
  PVZ2UnchartedModeUtils *this_01;
  LevelModifierModuleCollection *this_02;
  LevelBasedModifierInfo *pLVar5;
  undefined8 uVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  RtWeakPtr aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) {
    this_01 = (PVZ2UnchartedModeUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
    PVZ2UnchartedModeUtils::GetCurrentLevel(this_01);
    LevelUtils::LoadLevelDefinition((string *)this_01,SUB81((string *)&local_28,0));
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    std::string::~string((string *)&local_28);
  }
  else {
    pRVar2 = (ResourceInfo *)Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  }
  if (pRVar2 != (ResourceInfo *)0x0) {
    uVar6 = *(undefined8 *)(pRVar2 + 0x1c8);
    uVar3 = FUN_033fa314(uVar6,*(undefined8 *)(pRVar2 + 0x1d0));
    if ((ulong)(long)param_1 < uVar3) {
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_033fa320(uVar6);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)(lVar4 + 0x10));
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
      if (bVar1) {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
        this_02 = (LevelModifierModuleCollection *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        LevelModifierModuleCollection::GatherModuleInfos(this_02,(vector *)aRStack_20);
        local_30 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)aRStack_20);
        local_28 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aRStack_20);
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
              bVar1) {
          pLVar5 = (LevelBasedModifierInfo *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
          addCollectionModule(this,pLVar5);
          __gnu_cxx::
          __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
          ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                        *)&local_30);
        }
        std::vector<LevelBasedModifierInfo,std::allocator<LevelBasedModifierInfo>>::~vector
                  ((vector<LevelBasedModifierInfo,std::allocator<LevelBasedModifierInfo>> *)
                   aRStack_20);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifierModuleMgr::syncSelectedCollections() */

void __thiscall
LevelBasedModifierModuleMgr::syncSelectedCollections(LevelBasedModifierModuleMgr *this)

{
  bool bVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  LevelModifierModuleCollection *this_01;
  LevelBasedModifierInfo *pLVar2;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    this_01 = (LevelModifierModuleCollection *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    LevelModifierModuleCollection::GatherModuleInfos(this_01,(vector *)avStack_20);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_30);
  }
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    pLVar2 = (LevelBasedModifierInfo *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    addCollectionModule(this,pLVar2);
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_30);
  }
  std::vector<LevelBasedModifierInfo,std::allocator<LevelBasedModifierInfo>>::~vector
            ((vector<LevelBasedModifierInfo,std::allocator<LevelBasedModifierInfo>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifierModuleMgr::SyncCollections() */

void __thiscall LevelBasedModifierModuleMgr::SyncCollections(LevelBasedModifierModuleMgr *this)

{
  int iVar1;
  
  iVar1 = getMaxSelectedDifficulty(this);
  syncDefaultCollections(this,iVar1);
  syncSelectedCollections(this);
  return;
}

