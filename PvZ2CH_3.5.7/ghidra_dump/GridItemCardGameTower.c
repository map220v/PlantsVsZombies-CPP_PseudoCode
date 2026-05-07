// Class: GridItemCardGameTower


/* GridItemCardGameTower::UpdateIdle() */

void __thiscall GridItemCardGameTower::UpdateIdle(GridItemCardGameTower *this)

{
  char cVar1;
  long lVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0x2a8))();
  if (cVar1 == '\0') {
    lVar2 = *(long *)(this + 0x1b0);
  }
  else {
    (**(code **)(*(long *)this + 0x2c0))(this,1);
    lVar2 = *(long *)(this + 0x1b0);
  }
  if (lVar2 != 0) {
    return;
  }
  (**(code **)(*(long *)this + 0x2c0))(this,2);
  return;
}


/* GridItemCardGameTower::UpdateAttack() */

void __thiscall GridItemCardGameTower::UpdateAttack(GridItemCardGameTower *this)

{
  char cVar1;
  long lVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0x2a8))();
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0x2c0))(this);
    lVar2 = *(long *)(this + 0x1b0);
  }
  else {
    (**(code **)(*(long *)this + 0x2d8))(this);
    lVar2 = *(long *)(this + 0x1b0);
  }
  if (lVar2 != 0) {
    return;
  }
  (**(code **)(*(long *)this + 0x2c0))(this,2);
  return;
}


/* GridItemCardGameTower::GetDamageAmount() */

float __thiscall GridItemCardGameTower::GetDamageAmount(GridItemCardGameTower *this)

{
  return (float)*(int *)(this + 0x50) * *(float *)(this + 0x1c8);
}


/* GridItemCardGameTower::~GridItemCardGameTower() */

void __thiscall GridItemCardGameTower::~GridItemCardGameTower(GridItemCardGameTower *this)

{
  *(undefined ***)this = &PTR_GetClass_069d7120;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCardGameTower_069d7450;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemCardGameTower::~GridItemCardGameTower() */

void __thiscall GridItemCardGameTower::~GridItemCardGameTower(GridItemCardGameTower *this)

{
  ~GridItemCardGameTower(this + -0x10);
  return;
}


/* GridItemCardGameTower::~GridItemCardGameTower() */

void __thiscall GridItemCardGameTower::~GridItemCardGameTower(GridItemCardGameTower *this)

{
  ~GridItemCardGameTower(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemCardGameTower::~GridItemCardGameTower() */

void __thiscall GridItemCardGameTower::~GridItemCardGameTower(GridItemCardGameTower *this)

{
  ~GridItemCardGameTower(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameTower::StaticClassInit() */

void GridItemCardGameTower::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCardGameTower");
    (*pcVar2)(plVar1,asStack_10,FUN_04e1aebc,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameTower::StaticGetClass() */

long * GridItemCardGameTower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCardGameTower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameTower::GetClass() const */

long * GridItemCardGameTower::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCardGameTower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameTower::SetParentZombie(GridItemCardGameZombie*) */

void __thiscall
GridItemCardGameTower::SetParentZombie(GridItemCardGameTower *this,GridItemCardGameZombie *param_1)

{
  *(GridItemCardGameZombie **)(this + 0x1b0) = param_1;
  return;
}


/* GridItemCardGameTower::StopDamageEffect() */

void __thiscall GridItemCardGameTower::StopDamageEffect(GridItemCardGameTower *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x1d8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x80))(plVar1,1);
  }
  return;
}


/* GridItemCardGameTower::SetState(CardGameTowerState) */

void __thiscall GridItemCardGameTower::SetState(GridItemCardGameTower *this,int param_2)

{
  if (*(int *)(this + 0x1a8) != param_2) {
    *(int *)(this + 0x1a8) = param_2;
    if (param_2 == 1) {
      (**(code **)(*(long *)this + 0x308))();
      return;
    }
    if (param_2 == 2) {
      (**(code **)(*(long *)this + 0x310))();
      return;
    }
    if (param_2 == 0) {
      StopDamageEffect(this);
      (**(code **)(*(long *)this + 0x300))(this);
      return;
    }
  }
  return;
}


/* GridItemCardGameTower::GridItemCardGameTower() */

void __thiscall GridItemCardGameTower::GridItemCardGameTower(GridItemCardGameTower *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_069d7120;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCardGameTower_069d7450;
  Sexy::Insets::Insets((Insets *)(this + 0x1b8));
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1a8) = 0xffffffff;
  return;
}


/* GridItemCardGameTower::StaticNew() */

GridItemCardGameTower * GridItemCardGameTower::StaticNew(void)

{
  GridItemCardGameTower *this;
  
  this = ::operator_new(0x1e0);
  GridItemCardGameTower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameTower::CheckAttack() */

void __thiscall GridItemCardGameTower::CheckAttack(GridItemCardGameTower *this)

{
  undefined4 uVar1;
  code *pcVar2;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x2b0))(aIStack_28);
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  pcVar2 = *(code **)(*(long *)this + 0x2b8);
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  (*pcVar2)(this,uVar1,aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameTower::CalcAttackRect() */

void GridItemCardGameTower::CalcAttackRect(void)

{
  char cVar1;
  GridItemAnimation *in_x0;
  Insets *in_x8;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  
  cVar1 = CardGameUtils::IsPlayingCardGame();
  fVar2 = 1.0;
  if (cVar1 != '\0') {
    fVar2 = (float)GridItemAnimation::GetScale(in_x0);
  }
  Sexy::Insets::Insets(in_x8,(Insets *)(in_x0 + 0x1b8));
  fVar5 = *(float *)(in_x0 + 0x1c);
  uVar3 = *(undefined4 *)(in_x0 + 0x18);
  uVar6 = *(undefined4 *)(in_x0 + 0x20);
  *(int *)(in_x8 + 0xc) = (int)(fVar2 * (float)*(int *)(in_x8 + 0xc));
  *(int *)(in_x8 + 8) = (int)(fVar2 * (float)*(int *)(in_x8 + 8));
  fVar4 = (float)FUN_04e1ab5c(uVar3,fVar5,uVar6);
  *(int *)(in_x8 + 4) =
       (int)((fVar5 - (float)*(int *)(in_x8 + 0xc)) + (float)*(int *)(in_x8 + 4) * fVar2);
  *(int *)in_x8 = (int)((fVar4 - (float)(*(int *)(in_x8 + 8) / 2)) + (float)*(int *)in_x8 * fVar2);
  return;
}


/* GridItemCardGameTower::DamageTarget(BoardEntity*) */

void __thiscall
GridItemCardGameTower::DamageTarget(GridItemCardGameTower *this,BoardEntity *param_1)

{
  bool bVar1;
  undefined8 extraout_x0;
  undefined8 extraout_x0_00;
  undefined8 extraout_x0_01;
  
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if (bVar1) {
      nop();
      (**(code **)(*(long *)this + 0x2e0))(this,extraout_x0);
      return;
    }
    bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
    if (bVar1) {
      nop();
      (**(code **)(*(long *)this + 0x2e8))(this,extraout_x0_01);
      return;
    }
    bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)param_1);
    if (bVar1) {
      nop();
      (**(code **)(*(long *)this + 0x2f0))(this,extraout_x0_00);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameTower::CreateDamageEffect(BoardEntity*) */

void __thiscall
GridItemCardGameTower::CreateDamageEffect(GridItemCardGameTower *this,BoardEntity *param_1)

{
  Insets *pIVar1;
  LightningBolt *pLVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  Vec3 aVStack_28 [16];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) && (*(long *)(this + 0x1d8) != 0)) {
    pIVar1 = (Insets *)(**(code **)(*(long *)this + 0x178))();
    Sexy::Insets::Insets((Insets *)&local_18,pIVar1);
    EATextSquish::Vec3::Vec3
              (aVStack_28,(float)local_18 + (float)local_10 * 0.5,
               (float)local_14 + (float)local_c * 0.33333334,0.0);
    BoardEntity::PlaceOnBoard(*(SexyVector3 **)(this + 0x1d8));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    pLVar2 = *(LightningBolt **)(this + 0x1d8);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
    LightningBolt::SetInitialTarget(pLVar2,aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    (**(code **)(**(long **)(this + 0x1d8) + 0x80))(*(long **)(this + 0x1d8),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameTower::InitDamageEffect() */

void __thiscall GridItemCardGameTower::InitDamageEffect(GridItemCardGameTower *this)

{
  LightningBolt *this_00;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x1d8) == 0) {
    this_00 = GameObject::Create<LightningBolt>();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    TwinsAssistPerson::SetOwner((TwinsAssistPerson *)this_00,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    std::string::string(asStack_20,"POPANIM_EFFECTS_CARD_GAME_TOWER_BOLT_DEFAULT");
    std::string::string((string *)aRStack_18,"POPANIM_EFFECTS_CARD_GAME_TOWER_BOLT_DEFAULT");
    std::string::string((string *)aRStack_10,"POPANIM_EFFECTS_CARD_GAME_TOWER_HIT");
    LightningBolt::SetPopAnim(this_00,asStack_20,(string *)aRStack_18,(string *)aRStack_10);
    std::string::~string((string *)aRStack_10);
    nop();
    std::string::~string((string *)aRStack_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    (**(code **)(*(long *)this_00 + 0x80))(this_00,1);
    FUN_04e1ab44(this_00 + 0x124);
    *(LightningBolt **)(this + 0x1d8) = this_00;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameTower::PlayIdleAnim() */

void GridItemCardGameTower::PlayIdleAnim(void)

{
  GridItemCardGameTowerProps *pGVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = GridItem::GetProps<GridItemCardGameTowerProps>();
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,pGVar1 + 0xd0,0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameTower::PlayAttackAnim() */

void GridItemCardGameTower::PlayAttackAnim(void)

{
  GridItemCardGameTowerProps *pGVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = GridItem::GetProps<GridItemCardGameTowerProps>();
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,pGVar1 + 0xd8,0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameTower::PlayEndAnim() */

void GridItemCardGameTower::PlayEndAnim(void)

{
  GridItemCardGameTowerProps *pGVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = GridItem::GetProps<GridItemCardGameTowerProps>();
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,pGVar1 + 0xe0,0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameTower::FindAttackTarget(int, Sexy::TRect<int>) */

void GridItemCardGameTower::FindAttackTarget(RealObject *param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  GridItemCardGameTowerProps *pGVar4;
  RealObject *extraout_x0;
  RealObject *extraout_x0_00;
  Plant *this;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  pGVar4 = GridItem::GetProps<GridItemCardGameTowerProps>();
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  uVar7 = *(undefined4 *)(pGVar4 + 0xfc);
  uVar5 = FUN_04e1ab5c(*(undefined4 *)(param_1 + 0x18),uVar6,*(undefined4 *)(param_1 + 0x20));
  local_28 = CONCAT44(uVar6,uVar5);
  EntityFinder::GetEntitiesTouchingCircle2D
            (uVar7,avStack_20,2,(__normal_iterator *)&local_28,0xffffffff,0xffffffff);
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
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    nop();
    cVar2 = RealObject::IsOnOpposingTeam(param_1,extraout_x0);
    if ((((cVar2 != '\0') &&
         (cVar3 = (**(code **)(*(long *)extraout_x0 + 0x328))(extraout_x0), cVar3 == '\0')) &&
        (cVar3 = Zombie::HasCondition(extraout_x0,0x65), cVar3 == '\0')) &&
       (((cVar3 = Zombie::HasCondition(extraout_x0,0x27), cVar3 == '\0' &&
         (cVar3 = Zombie::HasCondition(extraout_x0,0x25), cVar3 == '\0')) &&
        (cVar3 = Zombie::HasCondition(extraout_x0,0x2c), cVar3 == '\0')))) goto LAB_04e1bf28;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  uVar5 = FUN_04e1ab5c(*(undefined4 *)(param_1 + 0x18),uVar6,*(undefined4 *)(param_1 + 0x20));
  local_28 = CONCAT44(uVar6,uVar5);
  EntityFinder::GetEntitiesTouchingCircle2D
            (uVar7,avStack_20,4,(__normal_iterator *)&local_28,0xffffffff,0xffffffff);
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
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    nop();
    cVar2 = RealObject::IsOnOpposingTeam(param_1,extraout_x0_00);
    if ((cVar2 != '\0') &&
       (cVar2 = (**(code **)(*(long *)extraout_x0_00 + 0x218))(extraout_x0_00,param_1),
       cVar2 != '\0')) goto LAB_04e1bf28;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  uVar5 = FUN_04e1ab5c(*(undefined4 *)(param_1 + 0x18),uVar6,*(undefined4 *)(param_1 + 0x20));
  local_28 = CONCAT44(uVar6,uVar5);
  EntityFinder::GetEntitiesTouchingCircle2D
            (uVar7,avStack_20,1,(__normal_iterator *)&local_28,0xffffffff,0xffffffff);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
        cVar2 = '\0', bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    nop();
    cVar2 = RealObject::IsOnOpposingTeam(param_1,(RealObject *)this);
    if (((cVar2 != '\0') && (cVar2 = Plant::CanBeTargeted(this), cVar2 != '\0')) &&
       (cVar2 = Plant::CanBeTargetedBy((BoardEntity *)this), cVar2 != '\0')) break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
LAB_04e1bf28:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameTower::DamageZombie(Zombie*) */

void __thiscall GridItemCardGameTower::DamageZombie(GridItemCardGameTower *this,Zombie *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar4 = (float)(**(code **)(*(long *)this + 0x2f8))();
  fVar5 = (float)PVZ_Dt();
  pcVar3 = *(code **)(*(long *)param_1 + 0x110);
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
  iVar2 = SharkMinion::getRow((SharkMinion *)this);
  Sexy::Point::Point(aPStack_78,iVar1,iVar2);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)(fVar5 * fVar4),local_70,local_6c,aDStack_68,this,aPStack_78,0);
  (*pcVar3)(param_1,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameTower::DamageGridItem(GridItem*) */

void __thiscall GridItemCardGameTower::DamageGridItem(GridItemCardGameTower *this,GridItem *param_1)

{
  char cVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (GridItem *)0x0) &&
     (cVar1 = (**(code **)(*(long *)param_1 + 0x1f8))(param_1), cVar1 != '\0')) {
    fVar3 = (float)(**(code **)(*(long *)this + 0x2f8))(this);
    fVar4 = (float)PVZ_Dt();
    pcVar2 = *(code **)(*(long *)param_1 + 0x110);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)(fVar4 * fVar3),local_70,local_6c,aDStack_68,this,aPStack_78,0);
    (*pcVar2)(param_1,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameTower::DamagePlant(Plant*) */

void __thiscall GridItemCardGameTower::DamagePlant(GridItemCardGameTower *this,Plant *param_1)

{
  char cVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::IsInvincible(param_1,false);
  if (cVar1 == '\0') {
    fVar3 = (float)(**(code **)(*(long *)this + 0x2f8))(this);
    fVar4 = (float)PVZ_Dt();
    pcVar2 = *(code **)(*(long *)param_1 + 0x110);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)(fVar4 * fVar3),local_70,local_6c,aDStack_68,this,aPStack_78,0);
    (*pcVar2)(param_1,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameTower::Attack() */

void __thiscall GridItemCardGameTower::Attack(GridItemCardGameTower *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  GridItemCardGameTowerProps *pGVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  RealObject *extraout_x0;
  undefined8 *puVar7;
  RealObject *extraout_x0_00;
  Plant *this_00;
  BoardEntity *pBVar8;
  BoardEntity *pBVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 local_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  pBVar9 = (BoardEntity *)0x0;
  (**(code **)(*(long *)this + 0x2b0))(auStack_40,this);
  SharkMinion::getRow((SharkMinion *)this);
  pGVar4 = GridItem::GetProps<GridItemCardGameTowerProps>();
  uVar12 = *(undefined4 *)(pGVar4 + 0xfc);
  uVar5 = operator|(2,4);
  uVar3 = operator|(uVar5,1);
  uVar11 = *(undefined4 *)(this + 0x1c);
  uVar10 = FUN_04e1ab5c(*(undefined4 *)(this + 0x18),uVar11,*(undefined4 *)(this + 0x20));
  local_30 = CONCAT44(uVar11,uVar10);
  EntityFinder::GetEntitiesTouchingCircle2D
            (uVar12,avStack_20,uVar3,(__normal_iterator *)&local_30,0xffffffff,0xffffffff);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  BoardEntity::CalcGridPosition();
  EntityFinder::BoardEntitySorter_Closest::BoardEntitySorter_Closest
            ((BoardEntitySorter_Closest *)&local_30,
             (generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  std::
  sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_Closest>
            (uVar5,uVar6,(__normal_iterator *)&local_30);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_30), bVar1) {
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar7);
    if (bVar1) {
      nop();
      cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,extraout_x0);
      if (((((cVar2 != '\0') &&
            (cVar2 = (**(code **)(*(long *)extraout_x0 + 0x328))(extraout_x0), cVar2 == '\0')) &&
           (cVar2 = Zombie::HasCondition(extraout_x0,0x65), cVar2 == '\0')) &&
          ((cVar2 = Zombie::HasCondition(extraout_x0,0x27), cVar2 == '\0' &&
           (cVar2 = Zombie::HasCondition(extraout_x0,0x25), cVar2 == '\0')))) &&
         (cVar2 = Zombie::HasCondition(extraout_x0,0x2c), cVar2 == '\0')) {
        if (pBVar9 == (BoardEntity *)0x0) {
          pBVar8 = (BoardEntity *)*puVar7;
          pBVar9 = pBVar8;
        }
        else {
          pBVar8 = (BoardEntity *)*puVar7;
        }
        if (*(BoardEntity **)(this + 0x1d0) == pBVar8) goto joined_r0x04e1c740;
      }
    }
    else {
      bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)*puVar7);
      if (bVar1) {
        nop();
        cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,extraout_x0_00);
        if (cVar2 != '\0') {
          cVar2 = (**(code **)(*(long *)extraout_x0_00 + 0x218))(extraout_x0_00,this);
joined_r0x04e1c6b0:
          if (cVar2 != '\0') {
            if (pBVar9 == (BoardEntity *)0x0) {
              pBVar8 = (BoardEntity *)*puVar7;
              pBVar9 = pBVar8;
            }
            else {
              pBVar8 = (BoardEntity *)*puVar7;
            }
            if (*(BoardEntity **)(this + 0x1d0) == pBVar8) goto joined_r0x04e1c740;
          }
        }
      }
      else {
        bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)*puVar7);
        if (bVar1) {
          nop();
          cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)this_00);
          if ((cVar2 != '\0') && (cVar2 = Plant::CanBeTargeted(this_00), cVar2 != '\0')) {
            cVar2 = Plant::CanBeTargetedBy((BoardEntity *)this_00);
            goto joined_r0x04e1c6b0;
          }
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
  *(BoardEntity **)(this + 0x1d0) = pBVar9;
  pBVar8 = pBVar9;
  if (pBVar9 != (BoardEntity *)0x0) {
joined_r0x04e1c740:
    if (pBVar8 != (BoardEntity *)0x0) {
      DamageTarget(this,pBVar8);
      CreateDamageEffect(this,*(BoardEntity **)(this + 0x1d0));
      goto LAB_04e1c628;
    }
  }
  StopDamageEffect(this);
LAB_04e1c628:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameTower::onGridItemInitialize() */

void __thiscall GridItemCardGameTower::onGridItemInitialize(GridItemCardGameTower *this)

{
  undefined8 uVar1;
  undefined4 uVar2;
  TimeChallengeEndLevelUI *this_00;
  GridItemCardGameTowerProps *pGVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  FUN_04e1ab50(this + 0x24);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  this_00 = (TimeChallengeEndLevelUI *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x318);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<GridItemCardGameTower,void(GridItemCardGameTower::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aCStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  pGVar3 = GridItem::GetProps<GridItemCardGameTowerProps>();
  uVar2 = *(undefined4 *)(pGVar3 + 0xe8);
  uVar1 = *(undefined8 *)(pGVar3 + 0xf4);
  *(undefined8 *)(this + 0x1b8) = *(undefined8 *)(pGVar3 + 0xec);
  *(undefined8 *)(this + 0x1c0) = uVar1;
  *(undefined4 *)(this + 0x1c8) = uVar2;
  InitDamageEffect(this);
  (**(code **)(*(long *)this + 0x2c0))(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameTower::onUpdate() */

void __thiscall GridItemCardGameTower::onUpdate(GridItemCardGameTower *this)

{
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (*(int *)(this + 0x1a8) == 0) {
    (**(code **)(*(long *)this + 0x2c8))(this);
    return;
  }
  if (*(int *)(this + 0x1a8) != 1) {
    return;
  }
  (**(code **)(*(long *)this + 0x2d0))(this);
  return;
}

