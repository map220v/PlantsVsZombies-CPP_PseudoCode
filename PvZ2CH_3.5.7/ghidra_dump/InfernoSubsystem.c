// Class: InfernoSubsystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoSubsystem::StaticClassInit() */

void InfernoSubsystem::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"InfernoSubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_03b110a0,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InfernoSubsystem::StaticGetClass() */

long * InfernoSubsystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"InfernoSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InfernoSubsystem::GetClass() const */

long * InfernoSubsystem::GetClass(void)

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
  (*pcVar3)(plVar1,"InfernoSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoSubsystem::moveZombieToCycloneLane(Zombie*, InfernoPFProjectile*) */

void __thiscall
InfernoSubsystem::moveZombieToCycloneLane
          (InfernoSubsystem *this,Zombie *param_1,InfernoPFProjectile *param_2)

{
  long extraout_x0;
  ZombieLaneChangingSubsystem *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  ZombieLaneChangingRecord aZStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps((Projectile *)param_2);
  nop();
  ZombieLaneChangingRecord::ZombieLaneChangingRecord(aZStack_30);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)aZStack_30,(RtWeakPtrBase *)aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  local_28 = SharkMinion::getRow((SharkMinion *)param_1);
  local_24 = FUN_03b0bf38(*(undefined4 *)(param_2 + 0xa8));
  local_14 = *(undefined4 *)(extraout_x0 + 0x244);
  local_18 = 4;
  local_10 = *(undefined4 *)(extraout_x0 + 0x248);
  this_00 = Board::GetGameSubSystem<ZombieLaneChangingSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  ZombieLaneChangingSubsystem::ForceLaneChange(this_00,aZStack_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aZStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InfernoSubsystem::InfernoSubsystem() */

void __thiscall InfernoSubsystem::InfernoSubsystem(InfernoSubsystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_0672c520;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x28));
  return;
}


/* InfernoSubsystem::StaticNew() */

InfernoSubsystem * InfernoSubsystem::StaticNew(void)

{
  InfernoSubsystem *this;
  
  this = ::operator_new(0x58);
  InfernoSubsystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoSubsystem::isCycloneRegistered(InfernoPFProjectile*) const */

void InfernoSubsystem::isCycloneRegistered(InfernoPFProjectile *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_03b0f74c(*(undefined8 *)(param_1 + 0x10));
  uVar3 = FUN_03b0f79c(*(undefined8 *)(param_1 + 0x18));
  ToolPacketData::GetProps();
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<InfernoPFProjectile>const*,std::vector<Sexy::RtWeakPtr<InfernoPFProjectile>,std::allocator<Sexy::RtWeakPtr<InfernoPFProjectile>>>>,Sexy::RtWeakPtr<GameObject>>
                       (uVar2,uVar3,aRStack_20);
  local_10 = FUN_03b0f79c(*(undefined8 *)(param_1 + 0x18));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* InfernoSubsystem::~InfernoSubsystem() */

void __thiscall InfernoSubsystem::~InfernoSubsystem(InfernoSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_0672c520;
  std::
  map<Zombie*,std::vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,std::vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>>>>>
  ::~map((map<Zombie*,std::vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,std::vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>>>>>
          *)(this + 0x28));
  std::
  vector<Sexy::RtWeakPtr<InfernoPFProjectile>,std::allocator<Sexy::RtWeakPtr<InfernoPFProjectile>>>
  ::~vector((vector<Sexy::RtWeakPtr<InfernoPFProjectile>,std::allocator<Sexy::RtWeakPtr<InfernoPFProjectile>>>
             *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* InfernoSubsystem::~InfernoSubsystem() */

void __thiscall InfernoSubsystem::~InfernoSubsystem(InfernoSubsystem *this)

{
  ~InfernoSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoSubsystem::clearDeadCyclones() */

void __thiscall InfernoSubsystem::clearDeadCyclones(InfernoSubsystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_28 = FUN_03b115e4(uVar1,uVar2);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_18,(__normal_iterator *)&local_28);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_20);
  std::
  vector<Sexy::RtWeakPtr<InfernoPFProjectile>,std::allocator<Sexy::RtWeakPtr<InfernoPFProjectile>>>
  ::erase((vector<Sexy::RtWeakPtr<InfernoPFProjectile>,std::allocator<Sexy::RtWeakPtr<InfernoPFProjectile>>>
           *)this_00,local_18,local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoSubsystem::RegisterCyclone(InfernoPFProjectile*) */

void InfernoSubsystem::RegisterCyclone(InfernoPFProjectile *param_1)

{
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isCycloneRegistered(param_1);
  if (cVar1 == '\0') {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    std::
    vector<Sexy::RtWeakPtr<InfernoPFProjectile>,std::allocator<Sexy::RtWeakPtr<InfernoPFProjectile>>>
    ::push_back((vector<Sexy::RtWeakPtr<InfernoPFProjectile>,std::allocator<Sexy::RtWeakPtr<InfernoPFProjectile>>>
                 *)(param_1 + 0x10),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoSubsystem::RegisterPull(InfernoPFProjectile*, std::vector<Zombie*, std::allocator<Zombie*>
   > const&) */

void __thiscall
InfernoSubsystem::RegisterPull(InfernoSubsystem *this,InfernoPFProjectile *param_1,vector *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>> *this_00;
  InfernoPFProjectile *local_28;
  Zombie *local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_18 = FUN_03b0f6ac(*(undefined8 *)param_2);
  local_10 = FUN_03b0f6fc(*(undefined8 *)(param_2 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    local_20 = (Zombie *)*puVar2;
    this_00 = (vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>> *)
              std::
              map<Zombie*,std::vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,std::vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>>>>>
              ::operator[]((map<Zombie*,std::vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,std::vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>>>>>
                            *)(this + 0x28),&local_20);
    std::vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>>::push_back
              (this_00,&local_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoSubsystem::pickAttractor(Zombie*, std::vector<InfernoPFProjectile*,
   std::allocator<InfernoPFProjectile*> >) const */

void __thiscall
InfernoSubsystem::pickAttractor(undefined8 param_1_00,SharkMinion *param_1,undefined8 *param_3)

{
  ulong uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  InfernoPFProjectile *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  local_30 = FUN_03b0f83c(*param_3);
  local_28 = FUN_03b0f88c(param_3[1]);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    local_38 = (InfernoPFProjectile *)*puVar6;
    cVar3 = (**(code **)(*(long *)local_38 + 0x1f0))(local_38,param_1);
    if (cVar3 != '\0') {
      std::vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>>::push_back
                ((vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>> *)&local_20,
                 &local_38);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  iVar4 = SharkMinion::getRow(param_1);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    lVar7 = *plVar9;
    iVar5 = FUN_03b0bf38(*(undefined4 *)(lVar7 + 0xa8));
    if (iVar4 == iVar5) goto LAB_03b140c8;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  lVar7 = FUN_03b0c034(local_20,local_18);
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    iVar4 = Sexy::Rand();
    uVar8 = FUN_03b0c034(local_20,local_18);
    uVar1 = 0;
    if (uVar8 != 0) {
      uVar1 = (ulong)(long)iVar4 / uVar8;
    }
    plVar9 = (long *)FUN_03b0c040(local_20,(long)iVar4 - uVar1 * uVar8);
    lVar7 = *plVar9;
  }
LAB_03b140c8:
  std::vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>>::~vector
            ((vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoSubsystem::Update() */

void __thiscall InfernoSubsystem::Update(InfernoSubsystem *this)

{
  map<Zombie*,std::vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,std::vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>>>>>
  *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  InfernoPFProjectile *pIVar5;
  SharkMinion *this_01;
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  this_00 = (map<Zombie*,std::vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,std::vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>>>>>
             *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  clearDeadCyclones(this);
  local_28 = std::
             map<Zombie*,std::vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,std::vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>>>>>
             ::begin(this_00);
  while( true ) {
    local_20[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)local_20);
    if (!bVar1) break;
    puVar4 = (undefined8 *)
             std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
    this_01 = (SharkMinion *)*puVar4;
    std::vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>>::vector
              ((vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>> *)local_20,
               (vector *)(puVar4 + 1));
    pIVar5 = (InfernoPFProjectile *)
             pickAttractor(this,this_01,
                           (vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>> *)
                           local_20);
    std::vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>>::~vector
              ((vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>> *)local_20);
    if (pIVar5 != (InfernoPFProjectile *)0x0) {
      iVar2 = FUN_03b0bf38(*(undefined4 *)(pIVar5 + 0xa8));
      iVar3 = SharkMinion::getRow(this_01);
      if (iVar2 != iVar3) {
        moveZombieToCycloneLane(this,(Zombie *)this_01,pIVar5);
      }
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
  }
  std::
  map<Zombie*,std::vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,std::vector<InfernoPFProjectile*,std::allocator<InfernoPFProjectile*>>>>>
  ::clear(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

