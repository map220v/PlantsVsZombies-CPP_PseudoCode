// Class: PlantHocusCrocusSubSystem


/* PlantHocusCrocusSubSystem::warpZombieOut(ZombieWarpRecord*) */

void __thiscall
PlantHocusCrocusSubSystem::warpZombieOut(PlantHocusCrocusSubSystem *this,ZombieWarpRecord *param_1)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  Zombie *pZVar2;
  undefined8 uVar3;
  long *plVar4;
  
  this_00 = (RtMixedPtrBase *)(param_1 + 8);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x18) = 3;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 1;
  pZVar2 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Zombie::StartWarpOut(pZVar2,0.0);
  pZVar2 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Zombie::SetIsControlled(pZVar2,true);
  pZVar2 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Zombie::SetIgnoresAllDamage(pZVar2,true);
  uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  pZVar2 = (Zombie *)PVZ_EOT();
  Zombie::ApplyCondition(pZVar2,0,uVar3,0x3f,1);
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  (**(code **)(*plVar4 + 0x80))(plVar4,1);
  return;
}


/* PlantHocusCrocusSubSystem::reappearZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
PlantHocusCrocusSubSystem::reappearZombie(undefined8 param_1,RtMixedPtrBase *param_2)

{
  char cVar1;
  Zombie *pZVar2;
  long *plVar3;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    pZVar2 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Zombie::SetIgnoresAllDamage(pZVar2,false);
    pZVar2 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Zombie::EndCondition(pZVar2,0x55);
    pZVar2 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Zombie::EndCondition(pZVar2,0x3f);
    pZVar2 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Zombie::EndCondition(pZVar2,0x11);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    (**(code **)(*plVar3 + 0x80))(plVar3,0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHocusCrocusSubSystem::getZombiePostTeleportPosition(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
PlantHocusCrocusSubSystem::getZombiePostTeleportPosition(undefined8 param_1,RtMixedPtrBase *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  long lVar5;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar2 == '\0') {
    DVec3::DVec3((DVec3 *)&local_28);
    local_18 = local_28;
    local_10 = local_20;
  }
  else {
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    lVar5 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(this);
    uVar1 = *(undefined4 *)(lVar5 + 8);
    iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar3 = BoardTransforms::GridToBoardSpaceX(iVar3 + -1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    BoardEntity::CalcGridPosition();
    iVar4 = BoardTransforms::GridToBoardSpaceY(local_18._4_4_);
    local_18 = CONCAT44((float)iVar4,(float)iVar3);
    local_10 = uVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((undefined4)local_18,local_18._4_4_,local_10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHocusCrocusSubSystem::createTeleportEffectAtReappearance(ZombieWarpRecord*) */

void PlantHocusCrocusSubSystem::createTeleportEffectAtReappearance(ZombieWarpRecord *param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  int iVar2;
  Effect_PopAnim *this_00;
  PopAnim *pPVar3;
  long *plVar4;
  long in_x1;
  float in_s1;
  string asStack_30 [8];
  float local_28;
  float local_24;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  this = (RtMixedPtrBase *)(in_x1 + 8);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    *(undefined4 *)(in_x1 + 0x18) = 2;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)this);
    local_28 = (float)getZombiePostTeleportPosition((PlantHocusCrocusSubSystem *)param_1,aRStack_18)
    ;
    local_24 = in_s1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_30,"POPANIM_EFFECTS_HOCUSCROCUS_ATTACK");
    GetPAMByName(asStack_30);
    pPVar3 = (PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Effect_PopAnim::CreatePopAnimRig(this_00,pPVar3,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    std::string::~string(asStack_30);
    nop();
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,local_28,local_24 - 30.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    iVar2 = (**(code **)(*plVar4 + 200))();
    FUN_03b2566c(this_00 + 0x1c,iVar2 + -1);
    Effect_PopAnim::SetCentered(this_00,true);
    std::string::string((string *)aRStack_18,"FUMESHROOM_APPEAR");
    Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHocusCrocusSubSystem::PlantHocusCrocusSubSystem() */

void __thiscall
PlantHocusCrocusSubSystem::PlantHocusCrocusSubSystem(PlantHocusCrocusSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_0672e780;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* PlantHocusCrocusSubSystem::StaticNew() */

PlantHocusCrocusSubSystem * PlantHocusCrocusSubSystem::StaticNew(void)

{
  PlantHocusCrocusSubSystem *this;
  
  this = ::operator_new(0x28);
  PlantHocusCrocusSubSystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHocusCrocusSubSystem::warpZombieIn(ZombieWarpRecord*) */

void PlantHocusCrocusSubSystem::warpZombieIn(ZombieWarpRecord *param_1)

{
  undefined *this;
  char cVar1;
  bool bVar2;
  long *plVar3;
  Zombie *pZVar4;
  long in_x1;
  code *pcVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined4 local_18 [4];
  long local_8;
  
  *(undefined4 *)(in_x1 + 0x18) = 3;
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x1 + 8));
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)(in_x1 + 8));
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_28);
    if (bVar2) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)aRStack_28);
      reappearZombie((PlantHocusCrocusSubSystem *)param_1,(RtWeakPtr<Sexy::SoundResource> *)local_18
                    );
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      pcVar5 = *(code **)(*plVar3 + 0x78);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
      local_18[0] = getZombiePostTeleportPosition((PlantHocusCrocusSubSystem *)param_1,aRStack_20);
      (*pcVar5)(plVar3,(RtWeakPtr<Sexy::SoundResource> *)local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      this = gMessageRouter;
      pZVar4 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
      ;
      MessageRouter::Broadcast<Zombie*,Zombie*>
                ((MessageRouter *)this,Message::ZombieReaddedToBoard,pZVar4);
      pZVar4 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
      ;
      Zombie::StartWarpIn(pZVar4,_FUN_03b2790c);
      pZVar4 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
      ;
      Zombie::SetIsControlled(pZVar4,false);
      pZVar4 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
      ;
      Zombie::EndCondition(pZVar4,0x55);
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      cVar1 = (**(code **)(*plVar3 + 0x328))();
      if (cVar1 == '\0') {
        plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
        (**(code **)(*plVar3 + 0x260))();
      }
      pZVar4 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
      ;
      Zombie::SetIgnoresAllDamage(pZVar4,false);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHocusCrocusSubSystem::~PlantHocusCrocusSubSystem() */

void __thiscall
PlantHocusCrocusSubSystem::~PlantHocusCrocusSubSystem(PlantHocusCrocusSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_0672e780;
  std::vector<ZombieWarpRecord,std::allocator<ZombieWarpRecord>>::~vector
            ((vector<ZombieWarpRecord,std::allocator<ZombieWarpRecord>> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* PlantHocusCrocusSubSystem::~PlantHocusCrocusSubSystem() */

void __thiscall
PlantHocusCrocusSubSystem::~PlantHocusCrocusSubSystem(PlantHocusCrocusSubSystem *this)

{
  ~PlantHocusCrocusSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHocusCrocusSubSystem::RemoveWarpingZombie(Zombie*) */

void __thiscall
PlantHocusCrocusSubSystem::RemoveWarpingZombie(PlantHocusCrocusSubSystem *this,Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  ZombieWarpRecord *pZVar2;
  Zombie *pZVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_28);
    if (!bVar1) {
LAB_03b29b08:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pZVar2 = (ZombieWarpRecord *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    ZombieWarpRecord::ZombieWarpRecord((ZombieWarpRecord *)&local_28,pZVar2);
    pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    if (param_1 == pZVar3) {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_30,(__normal_iterator *)&local_38);
      std::vector<ZombieWarpRecord,std::allocator<ZombieWarpRecord>>::erase
                ((vector<ZombieWarpRecord,std::allocator<ZombieWarpRecord>> *)this_00,local_30);
      DragonBruitLauncherSubSystem::DragonBruitLauncherEntry::~DragonBruitLauncherEntry
                ((DragonBruitLauncherEntry *)&local_28);
      goto LAB_03b29b08;
    }
    DragonBruitLauncherSubSystem::DragonBruitLauncherEntry::~DragonBruitLauncherEntry
              ((DragonBruitLauncherEntry *)&local_28);
    FUN_03b270dc((exception_ptr *)&local_38);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHocusCrocusSubSystem::Update() */

void __thiscall PlantHocusCrocusSubSystem::Update(PlantHocusCrocusSubSystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  bool bVar2;
  char cVar3;
  ZombieWarpRecord *pZVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  bVar1 = false;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    pZVar4 = (ZombieWarpRecord *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(pZVar4 + 8));
    if (cVar3 == '\0') {
      *(undefined4 *)(pZVar4 + 0x18) = 3;
      bVar1 = true;
    }
    else {
      switch(*(undefined4 *)(pZVar4 + 0x18)) {
      case 0:
        fVar7 = (float)PVZ_T();
        if (*(float *)(pZVar4 + 0x10) + 0.1 < fVar7) {
          warpZombieOut(this,pZVar4);
        }
        break;
      case 1:
        fVar7 = (float)PVZ_T();
        if (*(float *)(pZVar4 + 0x14) + *(float *)(pZVar4 + 0x10) < fVar7) {
          createTeleportEffectAtReappearance((ZombieWarpRecord *)this);
        }
        break;
      case 2:
        fVar7 = (float)PVZ_T();
        if (*(float *)(pZVar4 + 0x10) + *(float *)(pZVar4 + 0x14) + 0.1 < fVar7) {
          warpZombieIn((ZombieWarpRecord *)this);
        }
        break;
      case 3:
        bVar1 = true;
      }
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  }
  if (bVar1) {
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_28 = FUN_03b27740(uVar5,uVar6);
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
    std::vector<ZombieWarpRecord,std::allocator<ZombieWarpRecord>>::erase
              ((vector<ZombieWarpRecord,std::allocator<ZombieWarpRecord>> *)this_00,local_18,
               local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHocusCrocusSubSystem::AddWarpingZombie(Plant*, Zombie*, float) */

void PlantHocusCrocusSubSystem::AddWarpingZombie(Plant *param_1,Zombie *param_2,float param_3)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  ZombieWarpRecord aZStack_28 [8];
  RtWeakPtr<SpartanBambooMatrixSystem> aRStack_20 [8];
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieWarpRecord::ZombieWarpRecord(aZStack_28);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)aZStack_28,(RtWeakPtrBase *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(aRStack_20,(RtWeakPtrBase *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  local_18 = PVZ_T();
  local_10 = 0;
  local_14 = param_3;
  std::vector<ZombieWarpRecord,std::allocator<ZombieWarpRecord>>::push_back
            ((vector<ZombieWarpRecord,std::allocator<ZombieWarpRecord>> *)(param_1 + 0x10),
             aZStack_28);
  DragonBruitLauncherSubSystem::DragonBruitLauncherEntry::~DragonBruitLauncherEntry
            ((DragonBruitLauncherEntry *)aZStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHocusCrocusSubSystem::StaticClassInit() */

void PlantHocusCrocusSubSystem::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"hit",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"gone",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"reappearing",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 3;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"done",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"ZombieWarpState");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"ZombieWarpRecord");
    (*pcVar3)(plVar2,avStack_20,FUN_03b27e74,0x20,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"PlantHocusCrocusSubSystem");
    (*pcVar3)(plVar2,avStack_20,FUN_03b2a8f0,0x28,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHocusCrocusSubSystem::StaticGetClass() */

long * PlantHocusCrocusSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantHocusCrocusSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHocusCrocusSubSystem::GetClass() const */

long * PlantHocusCrocusSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantHocusCrocusSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

