// Class: GridItemSliderTile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSliderTile::onGridItemInitialize() */

void __thiscall GridItemSliderTile::onGridItemInitialize(GridItemSliderTile *this)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  std::string::string(asStack_40,"idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSliderTile::CalcRenderOrder() const */

void __thiscall GridItemSliderTile::CalcRenderOrder(GridItemSliderTile *this)

{
  int iVar1;
  
  iVar1 = FUN_03e28d5c(*(undefined4 *)(this + 0x134));
  Board::MakeGroundRenderOrder(iVar1,1);
  return;
}


/* non-virtual thunk to GridItemSliderTile::CalcRenderOrder() const */

void __thiscall GridItemSliderTile::CalcRenderOrder(GridItemSliderTile *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSliderTile::StaticClassInit() */

void GridItemSliderTile::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemSliderTile");
    (*pcVar2)(plVar1,asStack_10,FUN_03e29538,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSliderTile::StaticGetClass() */

long * GridItemSliderTile::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSliderTile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSliderTile::GetClass() const */

long * GridItemSliderTile::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSliderTile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSliderTile::GetCantPlantReason() const */

undefined8 GridItemSliderTile::GetCantPlantReason(void)

{
  return 0x42;
}


/* GridItemSliderTile::isFastMovingNewPVPZombie(Zombie*) */

void __thiscall
GridItemSliderTile::isFastMovingNewPVPZombie(GridItemSliderTile *this,Zombie *param_1)

{
  bool bVar1;
  ZombieCavalry *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar2;
  
  nop();
  this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
  bVar1 = std::operator==((string *)(lVar2 + 8),"new_pvp_chicken");
  if ((!bVar1) && (this_00 != (ZombieCavalry *)0x0)) {
    ZombieCavalry::IsPawing(this_00);
    return;
  }
  return;
}


/* GridItemSliderTile::GridItemSliderTile() */

void __thiscall GridItemSliderTile::GridItemSliderTile(GridItemSliderTile *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_06787820;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSliderTile_06787ad8;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b0));
  return;
}


/* GridItemSliderTile::StaticNew() */

GridItemSliderTile * GridItemSliderTile::StaticNew(void)

{
  GridItemSliderTile *this;
  
  this = ::operator_new(0x1c8);
  GridItemSliderTile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSliderTile::setState(SliderState) */

void __thiscall GridItemSliderTile::setState(GridItemSliderTile *this,int param_2)

{
  GridItemSliderTileAnimRig *this_00;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1a8) == param_2) goto switchD_03e29a78_default;
  *(int *)(this + 0x1a8) = param_2;
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  switch(param_2) {
  case 0:
    GridItemAnimRig_BesiegeGuide::PlayIdle((GridItemAnimRig_BesiegeGuide *)this_00);
    break;
  case 1:
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)aRStack_58,"onAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,aRStack_58);
    GridItemEightiesArcadeCabinetAnimRig::PlayStartGame
              ((GridItemEightiesArcadeCabinetAnimRig *)this_00,aRStack_50);
    goto LAB_03e29ae4;
  case 2:
    GridItemSliderTileAnimRig::PlaySlideLoop(this_00);
    break;
  case 3:
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)aRStack_58,"onAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,aRStack_58);
    GridItemEightiesArcadeCabinetAnimRig::PlayEndGame
              ((GridItemEightiesArcadeCabinetAnimRig *)this_00,aRStack_50);
LAB_03e29ae4:
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string((string *)aRStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
switchD_03e29a78_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemSliderTile::showZombieSlide() */

void __thiscall GridItemSliderTile::showZombieSlide(GridItemSliderTile *this)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x1a8) != 3) && (*(int *)(this + 0x1a8) != 0)) {
    return;
  }
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1ac) = uVar1;
  setState(this,1);
  return;
}


/* GridItemSliderTile::onAnimDone(std::string const&) */

void GridItemSliderTile::onAnimDone(string *param_1)

{
  if (*(int *)(param_1 + 0x1a8) == 1) {
    setState((GridItemSliderTile *)param_1,2);
    return;
  }
  if (*(int *)(param_1 + 0x1a8) != 3) {
    return;
  }
  setState((GridItemSliderTile *)param_1,0);
  return;
}


/* GridItemSliderTile::updateState() */

void __thiscall GridItemSliderTile::updateState(GridItemSliderTile *this)

{
  float fVar1;
  float fVar2;
  
  if ((*(int *)(this + 0x1a8) == 2) &&
     (fVar1 = *(float *)(this + 0x1ac), fVar2 = (float)PVZ_T(), fVar2 <= fVar1 + 2.0)) {
    setState(this,3);
    return;
  }
  return;
}


/* GridItemSliderTile::~GridItemSliderTile() */

void __thiscall GridItemSliderTile::~GridItemSliderTile(GridItemSliderTile *this)

{
  *(undefined ***)this = &PTR_GetClass_06787820;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSliderTile_06787ad8;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1b0));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemSliderTile::~GridItemSliderTile() */

void __thiscall GridItemSliderTile::~GridItemSliderTile(GridItemSliderTile *this)

{
  ~GridItemSliderTile(this + -0x10);
  return;
}


/* GridItemSliderTile::~GridItemSliderTile() */

void __thiscall GridItemSliderTile::~GridItemSliderTile(GridItemSliderTile *this)

{
  ~GridItemSliderTile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemSliderTile::~GridItemSliderTile() */

void __thiscall GridItemSliderTile::~GridItemSliderTile(GridItemSliderTile *this)

{
  ~GridItemSliderTile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSliderTile::OnZombieLaneChangeEnded(Zombie*) */

void GridItemSliderTile::OnZombieLaneChangeEnded(Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *pRVar3;
  undefined8 local_20;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(param_1 + 0x1b0);
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
    if (!bVar2) {
LAB_03e29d88:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aRStack_18);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      goto LAB_03e29d88;
    }
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    cVar1 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)aRStack_18,pRVar3);
    if (cVar1 != '\0') {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_20);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this,
                 local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      goto LAB_03e29d88;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSliderTile::tryPushZombie(Zombie*, int) */

void __thiscall
GridItemSliderTile::tryPushZombie(GridItemSliderTile *this,Zombie *param_1,int param_2)

{
  char cVar1;
  ZombieLaneChangingSubsystem *pZVar2;
  ZombieLaneChangingSubsystem *pZVar4;
  undefined4 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 != (Zombie *)0x0) && (cVar1 = Zombie::IsFlying(param_1), cVar1 == '\0')) &&
     (cVar1 = Zombie::IsInSandStorm(param_1), cVar1 == '\0')) {
    if (*(code **)(*(long *)param_1 + 0x3c0) == Zombie::CanForceLaneChange) {
      cVar1 = Zombie::CanForceLaneChange();
    }
    else {
      cVar1 = (**(code **)(*(long *)param_1 + 0x3c0))(param_1);
    }
    if (cVar1 != '\0') {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                 (this + 0x1b0),(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      pZVar2 = Board::GetGameSubSystem<ZombieLaneChangingSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      cVar1 = isFastMovingNewPVPZombie(this,param_1);
      if (cVar1 == '\0') {
        pZVar4._0_4_ = (ZombieLaneChangingSubsystem *)0x3f800000;
      }
      else {
        pZVar4._0_4_ = (ZombieLaneChangingSubsystem *)0x3dcccccd;
      }
      cVar1 = isFastMovingNewPVPZombie(this,param_1);
      uVar3 = 0x40200000;
      if (cVar1 != '\0') {
        uVar3 = 0x3e99999a;
      }
      cVar1 = ZombieLaneChangingSubsystem::ForceLaneChange
                        (pZVar4._0_4_,uVar3,pZVar2,param_1,param_2,4);
      if (cVar1 != '\0') {
        showZombieSlide(this);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSliderTile::getSliderDirection() const */

undefined4 GridItemSliderTile::getSliderDirection(void)

{
  GridItemSliderTileProps *pGVar1;
  
  pGVar1 = GridItem::GetProps<GridItemSliderTileProps>();
  return *(undefined4 *)(pGVar1 + 0xd0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSliderTile::findTargets() */

void GridItemSliderTile::findTargets(void)

{
  char cVar1;
  bool bVar2;
  long in_x0;
  GridItemSliderTileProps *pGVar3;
  long lVar4;
  Zombie *this;
  ulong uVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  undefined4 local_40;
  undefined4 local_3c;
  BoardEntity *local_38;
  int local_30;
  int local_2c;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar7 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  BoardEntity::CalcGridPosition();
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,local_40,
             local_3c);
  pGVar3 = GridItem::GetProps<GridItemSliderTileProps>();
  Sexy::Insets::Insets((Insets *)&local_30,(Insets *)(pGVar3 + 0xd4));
  uVar6 = local_20;
  local_30 = (int)((float)local_30 + *(float *)(in_x0 + 0x18));
  local_2c = (int)((float)local_2c + *(float *)(in_x0 + 0x1c));
  lVar4 = FUN_03e28d90(local_20,local_18);
  if (lVar4 != 0) {
    do {
      FUN_03e28d9c(uVar6,uVar7);
      nop();
      fVar9 = *(float *)(this + 0x1c);
      fVar8 = (float)FUN_03e28da4(*(undefined4 *)(this + 0x18),fVar9,*(undefined4 *)(this + 0x20));
      cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)&local_30,(int)fVar8,(int)fVar9);
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*(long *)this + 0x328))(this);
        if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x388))(this), cVar1 != '\0'))
        {
          this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this);
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          bVar2 = std::operator!=((string *)(lVar4 + 8),"iceage_ski");
          if (bVar2) {
            lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
            bVar2 = std::operator!=((string *)(lVar4 + 8),"iceage_walrus");
            if (bVar2) {
              std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                        ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)in_x8,&local_38);
              goto LAB_03e2a570;
            }
          }
        }
        else {
          this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this);
        }
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        std::operator==((string *)(lVar4 + 8),"iceage_weasel");
      }
LAB_03e2a570:
      uVar6 = local_20;
      uVar7 = uVar7 + 1;
      uVar5 = FUN_03e28d90(local_20,local_18);
    } while (uVar7 < uVar5);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemSliderTile::registerForEvents() */

void __thiscall GridItemSliderTile::registerForEvents(GridItemSliderTile *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GridItem::registerForEvents((GridItem *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnZombieLaneChangeEnded);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<GridItemSliderTile,void(GridItemSliderTile::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieLaneChangeEnded,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSliderTile::onUpdate() */

void __thiscall GridItemSliderTile::onUpdate(GridItemSliderTile *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  Zombie *pZVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  updateState(this);
  findTargets();
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty(avStack_20);
  if (cVar1 == '\0') {
    iVar3 = FUN_03e28d5c(*(undefined4 *)(this + 0x134));
    iVar4 = getSliderDirection();
    if (iVar4 == 0) {
      iVar3 = iVar3 + -1;
    }
    else {
      iVar3 = iVar3 + 1;
    }
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x1b0);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar2)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48)
      ;
      pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      ToolPacketData::GetProps();
      local_30 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<GameObject>>
                           (uVar7,uVar8,aRStack_38);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      if ((pZVar6 != (Zombie *)0x0) && (bVar2)) {
        tryPushZombie(this,pZVar6,iVar3);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSliderTile::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemSliderTile::GatherPlantingRestrictions
          (GridItemSliderTile *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  local_c = GetCantPlantReason();
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

