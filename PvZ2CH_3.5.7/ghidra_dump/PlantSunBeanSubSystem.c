// Class: PlantSunBeanSubSystem


/* PlantSunBeanSubSystem::CanZombieSpewSun(Zombie*) const */

bool __thiscall PlantSunBeanSubSystem::CanZombieSpewSun(PlantSunBeanSubSystem *this,Zombie *param_1)

{
  return param_1 != (Zombie *)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunBeanSubSystem::StaticClassInit() */

void PlantSunBeanSubSystem::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SpewingZombieTracker");
    (*pcVar3)(plVar2,asStack_10,FUN_0420089c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieSupernova");
    (*pcVar3)(plVar2,asStack_10,FUN_04200584,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantSunBeanSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_04200c28,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSunBeanSubSystem::StaticGetClass() */

long * PlantSunBeanSubSystem::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"PlantSunBeanSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSunBeanSubSystem::GetClass() const */

long * PlantSunBeanSubSystem::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"PlantSunBeanSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSunBeanSubSystem::SetPropertySheet(Sexy::RtWeakPtr<SunBeanProps>) */

void __thiscall
PlantSunBeanSubSystem::SetPropertySheet(PlantSunBeanSubSystem *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x28),param_2);
  return;
}


/* PlantSunBeanSubSystem::getSunPerHitpoint() const */

undefined4 __thiscall PlantSunBeanSubSystem::getSunPerHitpoint(PlantSunBeanSubSystem *this)

{
  bool bVar1;
  long lVar2;
  undefined4 uVar3;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x28));
  uVar3 = 0x3f000000;
  if (bVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    uVar3 = *(undefined4 *)(lVar2 + 0x2c0);
  }
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunBeanSubSystem::GetSunAmountToSpew(float, float, bool) const */

void __thiscall
PlantSunBeanSubSystem::GetSunAmountToSpew
          (PlantSunBeanSubSystem *this,float param_1,float param_2,bool param_3)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar4 = (float)getSunPerHitpoint(this);
  iVar3 = (int)(fVar4 * param_2);
  local_10 = iVar3;
  if (param_3) {
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    local_10 = (int)((float)iVar3 * *(float *)(lVar1 + 0x2b8));
  }
  local_c = (int)param_1;
  piVar2 = eastl::min_alt<int>(&local_c,&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((float)*piVar2);
}


/* PlantSunBeanSubSystem::findTrackerForZombie(Zombie*) const */

ulong __thiscall
PlantSunBeanSubSystem::findTrackerForZombie(PlantSunBeanSubSystem *this,Zombie *param_1)

{
  RtWeakPtr *this_00;
  ResourceInfo *pRVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar3 = 0;
  do {
    uVar4 = *(undefined8 *)(this + 0x10);
    uVar5 = uVar3 & 0xffffffff;
    uVar2 = FUN_041ff628(uVar4,*(undefined8 *)(this + 0x18));
    if (uVar2 <= uVar3) {
      return 0xffffffff;
    }
    this_00 = (RtWeakPtr *)FUN_041ff650(uVar4,uVar3);
    uVar3 = uVar3 + 1;
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  } while (param_1 != (Zombie *)pRVar1);
  return uVar5;
}


/* PlantSunBeanSubSystem::PlantSunBeanSubSystem() */

void __thiscall PlantSunBeanSubSystem::PlantSunBeanSubSystem(PlantSunBeanSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_06808e60;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* PlantSunBeanSubSystem::StaticNew() */

PlantSunBeanSubSystem * PlantSunBeanSubSystem::StaticNew(void)

{
  PlantSunBeanSubSystem *this;
  
  this = ::operator_new(0x48);
  PlantSunBeanSubSystem(this);
  return this;
}


/* PlantSunBeanSubSystem::~PlantSunBeanSubSystem() */

void __thiscall PlantSunBeanSubSystem::~PlantSunBeanSubSystem(PlantSunBeanSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_06808e60;
  std::vector<ZombieSupernova,std::allocator<ZombieSupernova>>::~vector
            ((vector<ZombieSupernova,std::allocator<ZombieSupernova>> *)(this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  std::vector<SpewingZombieTracker,std::allocator<SpewingZombieTracker>>::~vector
            ((vector<SpewingZombieTracker,std::allocator<SpewingZombieTracker>> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* PlantSunBeanSubSystem::~PlantSunBeanSubSystem() */

void __thiscall PlantSunBeanSubSystem::~PlantSunBeanSubSystem(PlantSunBeanSubSystem *this)

{
  ~PlantSunBeanSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunBeanSubSystem::StopMakingZombieSpewSun(Zombie*) */

void PlantSunBeanSubSystem::StopMakingZombieSpewSun(Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(param_1 + 0x10);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
LAB_042015f4:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_00 = (RtWeakPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_00,(RtWeakPtrBase *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    if (cVar1 != '\0') {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<SpewingZombieTracker,std::allocator<SpewingZombieTracker>>::erase
                ((vector<SpewingZombieTracker,std::allocator<SpewingZombieTracker>> *)this,local_10)
      ;
      goto LAB_042015f4;
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunBeanSubSystem::StopMakingZombieSupernova(Zombie*) */

void PlantSunBeanSubSystem::StopMakingZombieSupernova(Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(param_1 + 0x30);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
LAB_042019b4:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtWeakPtrBase::operator==
                      ((RtWeakPtrBase *)(lVar3 + 0x18),(RtWeakPtrBase *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    if (cVar1 != '\0') {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<ZombieSupernova,std::allocator<ZombieSupernova>>::erase
                ((vector<ZombieSupernova,std::allocator<ZombieSupernova>> *)this,local_10);
      goto LAB_042019b4;
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunBeanSubSystem::CauseZombieSupernova(Zombie*, Sexy::RtWeakPtr<SunBeanProps>) */

void __thiscall
PlantSunBeanSubSystem::CauseZombieSupernova
          (PlantSunBeanSubSystem *this,Zombie *param_1,RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  RtWeakPtr<SpartanBambooMatrixSystem> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieSupernova::ZombieSupernova((ZombieSupernova *)&local_28);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(aRStack_10,(RtWeakPtrBase *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  local_1c = PVZ_T();
  local_28 = 0;
  local_18 = 0x3f800000;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  local_24 = *(undefined4 *)(lVar1 + 0x2b8);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  local_20 = *(undefined4 *)(lVar1 + 700);
  Zombie::ApplyCondition((Zombie *)0x3f800000,0,param_1,2,1);
  Zombie::SetIgnoresAllDamage(param_1,true);
  Zombie::SetIgnoresCollisions(param_1,true);
  std::vector<ZombieSupernova,std::allocator<ZombieSupernova>>::push_back
            ((vector<ZombieSupernova,std::allocator<ZombieSupernova>> *)(this + 0x30),
             (ZombieSupernova *)&local_28);
  ZombieSupernova::~ZombieSupernova((ZombieSupernova *)&local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunBeanSubSystem::MakeZombieSpewSun(Zombie*, Sexy::RtWeakPtr<SunBeanProps>, bool) */

void __thiscall
PlantSunBeanSubSystem::MakeZombieSpewSun
          (PlantSunBeanSubSystem *this,Zombie *param_1,RtWeakPtrBase *param_3,char param_4)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  SexyVector3 *pSVar4;
  long lVar5;
  float fVar6;
  Zombie *pZVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  SpewingZombieTracker aSStack_28 [8];
  float local_20;
  undefined4 local_1c;
  SexyVector3 aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = CanZombieSpewSun(this,param_1);
  if (cVar1 != '\0') {
    if (param_4 == '\0') {
      pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar3,"Play_Plant_DarkAges_SunBean_Transform");
      SpewingZombieTracker::SpewingZombieTracker(aSStack_28);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)aSStack_28,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      fVar6 = (float)FUN_041ff614(*(undefined4 *)(param_1 + 0x280));
      local_20 = (float)FUN_041ff618(*(undefined4 *)(param_1 + 0x2a8));
      local_20 = local_20 + fVar6;
      pSVar4 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)param_1);
      Sexy::SexyVector3::operator=(aSStack_18,pSVar4);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
      local_1c = *(undefined4 *)(lVar5 + 0x2c4);
      std::vector<SpewingZombieTracker,std::allocator<SpewingZombieTracker>>::push_back
                ((vector<SpewingZombieTracker,std::allocator<SpewingZombieTracker>> *)(this + 0x10),
                 aSStack_28);
      pZVar7._0_4_ = (Zombie *)PVZ_EOT();
      Zombie::ApplyCondition(pZVar7._0_4_,0,param_1,0x1b,1);
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aSStack_28);
    }
    else if ((((param_1 != (Zombie *)0x0) &&
              (bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1), !bVar2)) &&
             (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0')) &&
            ((cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 == '\0' &&
             (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1), !bVar2)))) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aSStack_28,param_3);
      CauseZombieSupernova(this,param_1,(RtWeakPtr<Sexy::SoundResource> *)aSStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunBeanSubSystem::SpewSun(float, Sexy::SexyVector3, bool) */

void PlantSunBeanSubSystem::SpewSun(float param_1,char param_2)

{
  undefined *this;
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  string *psVar7;
  int local_3c;
  int local_38;
  int iStack_34;
  string asStack_30 [8];
  Collectable *local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::SplitSun(*(Board **)(gLawnApp + 0x9f0),(int)param_1,false,&local_3c,&local_38,&iStack_34);
  if (param_2 != '\0') {
    local_3c = 0;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  if (0 < local_3c) {
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 1;
      psVar7 = *(string **)(gLawnApp + 0x9f0);
      std::string::string(asStack_30,"sun_small");
      local_28 = (Collectable *)
                 Board::AddCollectableWithDefaultMotion(psVar7,(SexyVector3 *)asStack_30);
      std::vector<Collectable*,std::allocator<Collectable*>>::push_back
                ((vector<Collectable*,std::allocator<Collectable*>> *)&local_20,&local_28);
      std::string::~string(asStack_30);
      nop();
    } while (iVar6 < local_3c);
  }
  if (0 < local_38) {
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 1;
      psVar7 = *(string **)(gLawnApp + 0x9f0);
      std::string::string(asStack_30,"sun");
      local_28 = (Collectable *)
                 Board::AddCollectableWithDefaultMotion(psVar7,(SexyVector3 *)asStack_30);
      std::vector<Collectable*,std::allocator<Collectable*>>::push_back
                ((vector<Collectable*,std::allocator<Collectable*>> *)&local_20,&local_28);
      std::string::~string(asStack_30);
      nop();
    } while (iVar6 < local_38);
  }
  iVar6 = 0;
  uVar5 = 0;
  while( true ) {
    uVar1 = local_20;
    uVar4 = FUN_041ff660(local_20,local_18);
    if (uVar4 <= uVar5) break;
    puVar3 = (undefined8 *)FUN_041ff66c(uVar1,uVar5);
    Collectable::StartExpirationTimerAfterMotion((Collectable *)*puVar3);
    FUN_041ff66c(local_20,uVar5);
    nop();
    iVar2 = CollectableCure::GetCureValue();
    this = gMessageRouter;
    iVar6 = iVar6 + iVar2;
    puVar3 = (undefined8 *)FUN_041ff66c(local_20,uVar5);
    MessageRouter::Broadcast<CollectableSun*,CollectableSun*>
              ((MessageRouter *)this,Message::SunProducedByPlant,(CollectableSun *)*puVar3);
    uVar5 = uVar5 + 1;
  }
  std::vector<Collectable*,std::allocator<Collectable*>>::~vector
            ((vector<Collectable*,std::allocator<Collectable*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((float)iVar6);
}


/* PlantSunBeanSubSystem::convertHitpointsToSun(float, float, Sexy::SexyVector3, float&, float&) */

void PlantSunBeanSubSystem::convertHitpointsToSun
               (float param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
               ,PlantSunBeanSubSystem *param_6,float *param_7,float *param_8)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  
  uVar4 = GetSunAmountToSpew(param_6,param_1,param_2,false);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(param_6 + 0x28));
  fVar2 = (float)SpewSun(uVar4,param_3,param_4,param_5,*(undefined1 *)(lVar1 + 0x2c8));
  fVar3 = (float)getSunPerHitpoint(param_6);
  *param_7 = fVar2 / fVar3;
  *param_8 = fVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunBeanSubSystem::Update() */

void __thiscall PlantSunBeanSubSystem::Update(PlantSunBeanSubSystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  SexyVector3 *pSVar5;
  RtWeakPtr *this_01;
  ResourceInfo *this_02;
  float *pfVar6;
  ZombieSupernova *this_03;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float local_38;
  float local_34;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  uVar8 = *(undefined8 *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_041ff628(uVar8,*(undefined8 *)(this + 0x18));
  uVar1 = iVar4 - 1;
  if (-1 < (int)uVar1) {
    lVar9 = (long)(int)uVar1 + -1;
    lVar2 = lVar9;
    lVar11 = (long)(int)uVar1;
    while( true ) {
      lVar10 = lVar2;
      this_01 = (RtWeakPtr *)FUN_041ff658(uVar8,lVar11);
      this_02 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
      if (this_02 == (ResourceInfo *)0x0) {
        local_20 = local_20 & 0xffffffff00000000;
        local_18 = local_18 & 0xffffffff00000000;
        pfVar6 = eastl::max_alt<float>((float *)&local_20,(float *)&local_18);
        fVar13 = *pfVar6;
        DVec3::DVec3((DVec3 *)&local_18);
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_18,(SexyVector3 *)(this_01 + 0x10));
        convertHitpointsToSun
                  (*(undefined4 *)(this_01 + 0xc),*(float *)(this_01 + 8) - fVar13,
                   (undefined4)local_18,local_18._4_4_,local_10,this,&local_38,&local_34);
        *(float *)(this_01 + 0xc) = *(float *)(this_01 + 0xc) - local_34;
        local_30 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x10));
        local_28 = __gnu_cxx::
                   __normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                   ::operator+((__normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                                *)&local_30,lVar11);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_20,(__normal_iterator *)&local_28);
        std::vector<SpewingZombieTracker,std::allocator<SpewingZombieTracker>>::erase
                  ((vector<SpewingZombieTracker,std::allocator<SpewingZombieTracker>> *)
                   (this + 0x10),local_20);
      }
      else {
        fVar13 = (float)FUN_041ff614(*(undefined4 *)(this_02 + 0x280));
        fVar12 = (float)FUN_041ff618(*(undefined4 *)(this_02 + 0x2a8));
        local_18 = local_18 & 0xffffffff00000000;
        local_20 = CONCAT44(local_20._4_4_,fVar12 + fVar13);
        pfVar6 = eastl::max_alt<float>((float *)&local_20,(float *)&local_18);
        fVar13 = *pfVar6;
        DVec3::DVec3((DVec3 *)&local_18);
        pSVar5 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)this_02);
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_18,pSVar5);
        convertHitpointsToSun
                  (*(undefined4 *)(this_01 + 0xc),*(float *)(this_01 + 8) - fVar13,
                   (undefined4)local_18,local_18._4_4_,local_10,this,&local_38,&local_34);
        *(float *)(this_01 + 0xc) = *(float *)(this_01 + 0xc) - local_34;
        *(float *)(this_01 + 8) = *(float *)(this_01 + 8) - local_38;
        Sexy::SexyVector3::operator=((SexyVector3 *)(this_01 + 0x10),(SexyVector3 *)&local_18);
      }
      if (lVar10 == lVar9 - (ulong)uVar1) break;
      uVar8 = *(undefined8 *)(this + 0x10);
      lVar2 = lVar10 + -1;
      lVar11 = lVar10;
    }
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x30);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
    while( true ) {
      if (!bVar3) {
        if (local_8 == ___stack_chk_guard) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      this_03 = (ZombieSupernova *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      ZombieSupernova::Update(this_03);
      piVar7 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      if (*piVar7 == 2) break;
      FUN_041fffa0((__normal_iterator *)&local_20);
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_18,(__normal_iterator *)&local_20);
    std::vector<ZombieSupernova,std::allocator<ZombieSupernova>>::erase
              ((vector<ZombieSupernova,std::allocator<ZombieSupernova>> *)this_00,local_18);
  } while( true );
}

