// Class: ZombieParkour


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParkour::getElectrocutePAMName() const */

void __thiscall ZombieParkour::getElectrocutePAMName(ZombieParkour *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBIE_BIG_SHOCK");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParkour::getAshPAMName() const */

void __thiscall ZombieParkour::getAshPAMName(ZombieParkour *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBIE_BIG_ASH");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieParkour::onExitState_Running(ZombieState) */

void ZombieParkour::onExitState_Running(Zombie *param_1)

{
  Zombie::SetIsUsingAnimTranslation(param_1,false);
  (**(code **)(*(long *)param_1 + 0x358))(0x3f800000,param_1);
  return;
}


/* ZombieParkour::onTackleAnimationStopped(std::string const&) */

void ZombieParkour::onTackleAnimationStopped(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
  }
  return;
}


/* ZombieParkour::onClimbAnimationStopped(std::string const&) */

void ZombieParkour::onClimbAnimationStopped(string *param_1)

{
  char cVar1;
  
  Zombie::SetIsParkourJumping((Zombie *)param_1,false);
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)param_1,0x1f);
  return;
}


/* ZombieParkour::~ZombieParkour() */

void __thiscall ZombieParkour::~ZombieParkour(ZombieParkour *this)

{
  *(undefined ***)this = &PTR_GetClass_06a1ba60;
  *(undefined ***)(this + 0x10) = &PTR__ZombieParkour_06a1c4d0;
  ZombieBasic::~ZombieBasic((ZombieBasic *)this);
  return;
}


/* non-virtual thunk to ZombieParkour::~ZombieParkour() */

void __thiscall ZombieParkour::~ZombieParkour(ZombieParkour *this)

{
  ~ZombieParkour(this + -0x10);
  return;
}


/* ZombieParkour::~ZombieParkour() */

void __thiscall ZombieParkour::~ZombieParkour(ZombieParkour *this)

{
  ~ZombieParkour(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieParkour::~ZombieParkour() */

void __thiscall ZombieParkour::~ZombieParkour(ZombieParkour *this)

{
  ~ZombieParkour(this + -0x10);
  return;
}


/* ZombieParkour::ZombieParkour() */

void __thiscall ZombieParkour::ZombieParkour(ZombieParkour *this)

{
  ZombieBasic::ZombieBasic((ZombieBasic *)this);
  *(undefined ***)this = &PTR_GetClass_06a1ba60;
  *(undefined ***)(this + 0x10) = &PTR__ZombieParkour_06a1c4d0;
  return;
}


/* ZombieParkour::StaticNew() */

ZombieParkour * ZombieParkour::StaticNew(void)

{
  ZombieParkour *this;
  
  this = ::operator_new(0x820);
  ZombieParkour(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParkour::updateState_Tackling() */

void __thiscall ZombieParkour::updateState_Tackling(ZombieParkour *this)

{
  char cVar1;
  PopAnimRig *pPVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  std::string::string(asStack_18,"yun");
  cVar1 = PopAnimRig::IsAnimStringActive(pPVar2,asStack_18);
  if (cVar1 == '\0') {
    pPVar2 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
    std::string::string(asStack_10,"yun02");
    cVar1 = PopAnimRig::IsAnimStringActive(pPVar2,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    if (cVar1 == '\0') goto LAB_04f47788;
  }
  else {
    std::string::~string(asStack_18);
    nop();
  }
  cVar1 = Zombie::HasCondition(this,2);
  if (cVar1 != '\0') {
    Zombie::EndCondition((Zombie *)this,2);
  }
LAB_04f47788:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParkour::isTallGrid(std::vector<GridItem*, std::allocator<GridItem*> > const&) */

void __thiscall ZombieParkour::isTallGrid(ZombieParkour *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_04f478ec(*(undefined8 *)param_1);
  local_10 = FUN_04f4793c(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
        cVar2 = '\0', bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar2 = RealObject::IsOnOpposingTeam(*puVar4,2);
    if ((cVar2 != '\0') &&
       (iVar3 = (**(code **)(*(long *)*puVar4 + 0x180))((long *)*puVar4), iVar3 == 3)) break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* ZombieParkour::CalcPositionInTime(float) */

float __thiscall ZombieParkour::CalcPositionInTime(ZombieParkour *this,float param_1)

{
  char cVar1;
  int iVar2;
  EntityConditionTracker<Creature,CreatureConditions> *this_00;
  float *pfVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_10;
  
  cVar1 = Zombie::isInState((Zombie *)this,1);
  if (((cVar1 == '\0') && (cVar1 = Zombie::isInState((Zombie *)this,0x1f), cVar1 == '\0')) &&
     (cVar1 = Zombie::isInState((Zombie *)this,4), cVar1 == '\0')) {
    puVar4 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_10 = (float)*puVar4;
    return local_10;
  }
  if (*(code **)(*(long *)this + 0x1d8) == Zombie::GetWalkSpeed) {
    fVar5 = (float)Zombie::GetWalkSpeed((Zombie *)this);
  }
  else {
    fVar5 = (float)(**(code **)(*(long *)this + 0x1d8))(this);
  }
  this_00 = (EntityConditionTracker<Creature,CreatureConditions> *)
            Zombie::GetConditionTracker((Zombie *)this);
  fVar6 = (float)EntityConditionTracker<Creature,CreatureConditions>::GetSpeedModifier(this_00);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar8 = *pfVar3;
  fVar7 = (float)Zombie::GetFacingMultiplier((Zombie *)this);
  return fVar8 - (float)iVar2 * fVar5 * fVar6 * param_1 * fVar7;
}


/* ZombieParkour::onZombieInitialize() */

void __thiscall ZombieParkour::onZombieInitialize(ZombieParkour *this)

{
  undefined4 uVar1;
  ZombieParkourProps *pZVar2;
  float fVar3;
  undefined4 uVar4;
  
  pZVar2 = Zombie::GetProps<ZombieParkourProps>((Zombie *)this);
  fVar3 = (float)PVZ_T();
  *(float *)(this + 0x80c) = fVar3 + *(float *)(pZVar2 + 0x218);
  uVar4 = PVZ_T();
  uVar1 = *(undefined4 *)(pZVar2 + 0x21c);
  this[0x818] = (ZombieParkour)0x0;
  *(undefined4 *)(this + 0x814) = uVar4;
  *(undefined4 *)(this + 0x810) = uVar1;
  return;
}


/* ZombieParkour::isBelowHealPercent() */

undefined8 __thiscall ZombieParkour::isBelowHealPercent(ZombieParkour *this)

{
  ZombieParkourProps *pZVar1;
  float fVar2;
  float fVar3;
  
  pZVar1 = Zombie::GetProps<ZombieParkourProps>((Zombie *)this);
  fVar2 = (float)FUN_04f46cdc(*(undefined4 *)(this + 0x280));
  fVar3 = (float)FUN_04f46ce0(*(undefined4 *)(this + 0x284));
  if (*(float *)(this + 0x810) <= 1.0 - fVar2 / fVar3) {
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0x814) < fVar2) {
      fVar2 = *(float *)(pZVar1 + 0x21c);
      *(float *)(this + 0x814) = *(float *)(pZVar1 + 0x224) + *(float *)(this + 0x814);
      *(float *)(this + 0x810) = *(float *)(this + 0x810) + fVar2;
      return 1;
    }
  }
  return 0;
}


/* ZombieParkour::isOverTimestamp() */

undefined8 __thiscall ZombieParkour::isOverTimestamp(ZombieParkour *this)

{
  ZombieParkourProps *pZVar1;
  float fVar2;
  float fVar3;
  
  pZVar1 = Zombie::GetProps<ZombieParkourProps>((Zombie *)this);
  fVar3 = *(float *)(this + 0x80c);
  fVar2 = (float)PVZ_T();
  if (fVar3 < fVar2) {
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0x814) < fVar2) {
      fVar2 = *(float *)(pZVar1 + 0x218);
      *(float *)(this + 0x814) = *(float *)(pZVar1 + 0x224) + *(float *)(this + 0x814);
      *(float *)(this + 0x80c) = *(float *)(this + 0x80c) + fVar2;
      return 1;
    }
  }
  return 0;
}


/* ZombieParkour::canLineBreak() */

undefined1 __thiscall ZombieParkour::canLineBreak(ZombieParkour *this)

{
  char cVar1;
  
  cVar1 = isOverTimestamp(this);
  if (cVar1 == '\0') {
    cVar1 = isBelowHealPercent(this);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}


/* ZombieParkour::onEnterState_Running(ZombieState) */

void ZombieParkour::onEnterState_Running(Zombie *param_1)

{
  ZombieParkourProps *pZVar1;
  ZombieHydraHeadAnimRig *this;
  
  pZVar1 = Zombie::GetProps<ZombieParkourProps>(param_1);
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_Parkour::PlayRunning((ZombieAnimRig_Parkour *)this);
  Zombie::SetIsUsingAnimTranslation(param_1,true);
  (**(code **)(*(long *)param_1 + 0x358))(*(undefined4 *)(pZVar1 + 0x214),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParkour::onEnterState_Climbing(ZombieState) */

void ZombieParkour::onEnterState_Climbing(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsParkourJumping(param_1,true);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onClimbAnimationStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Parkour::PlayClimbing((ZombieAnimRig_Parkour *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParkour::onEnterState_Tackling(ZombieState) */

void ZombieParkour::onEnterState_Tackling(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  char *__s;
  string asStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x818] == (Zombie)0x0) {
    __s = "jump04";
  }
  else {
    __s = "jump05";
  }
  std::string::string(asStack_78,__s);
  nop();
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  FUN_05475d88(asStack_68,asStack_78);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onTackleAnimationStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Bungee::PlayStopAnimation((ZombieAnimRig_Bungee *)pZVar1,asStack_68,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  std::string::~string(asStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParkour::findClimbTarget() */

void __thiscall ZombieParkour::findClimbTarget(ZombieParkour *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  PlantGroup *pPVar6;
  undefined8 *puVar7;
  GridItem *this_00;
  GridItem *pGVar8;
  undefined8 local_40;
  undefined8 local_38;
  int local_30 [2];
  int local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = SharkMinion::getRow((SharkMinion *)this);
  (**(code **)(*(long *)this + 0x3a0))(local_30,this);
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  local_30[0] = (int)((double)local_30[0] - (double)iVar4 * 0.7);
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  local_28 = (int)((double)local_28 + (double)iVar4 * 0.7);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  pPVar6 = (PlantGroup *)Zombie::GetForcedTarget((Zombie *)this);
  uVar5 = operator|(0x10,4);
  (**(code **)(*(long *)this + 0xd0))((__normal_iterator *)&local_38,this);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_20,uVar5,local_30,(iVar3 - local_38._4_4_) + 1)
  ;
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
  if (bVar1) {
    do {
      puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      this_00 = (GridItem *)Sexy::RtObject::Cast<PlantGroup>((RtObject *)*puVar7);
      pGVar8 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar7);
      if (((((this_00 != (GridItem *)0x0) &&
            (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)this_00),
            cVar2 != '\0')) &&
           (cVar2 = PlantGroup::CanBeTargetedBy((PlantGroup *)this_00,(BoardEntity *)this,false),
           cVar2 != '\0')) && ((pPVar6 == (PlantGroup *)this_00 || (pPVar6 == (PlantGroup *)0x0))))
         || ((pGVar8 != (GridItem *)0x0 &&
             (cVar2 = RealObject::IsOnOpposingTeam(pGVar8,2), this_00 = pGVar8, cVar2 != '\0'))))
      goto LAB_04f4833c;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    } while (bVar1);
  }
  this_00 = (GridItem *)0x0;
LAB_04f4833c:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* ZombieParkour::onPlaceOnBoard() */

void __thiscall ZombieParkour::onPlaceOnBoard(ZombieParkour *this)

{
  char cVar1;
  
  cVar1 = FUN_04f476f8(*(undefined4 *)(this + 0x70));
  if (cVar1 == '\0') {
    ZombieBasic::onZombieInitialize((ZombieBasic *)this);
  }
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  MessageRouter::Post<Zombie*,ZombieParkour*>
            ((MessageRouter *)gMessageRouter,Message::ZombieAddedToBoard,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParkour::goDown() */

void __thiscall ZombieParkour::goDown(ZombieParkour *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ZombieParkourProps *pZVar7;
  ZombieLaneChangingSubsystem *pZVar8;
  Point *pPVar9;
  Board *this_00;
  ZombieLaneChangingSubsystem *pZVar10;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar4 = SharkMinion::getRow((SharkMinion *)this);
  Board::GetGridItemsAt(this_00,iVar3,iVar4 + 1,(vector *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar2) {
      pPVar9 = *(Point **)(gLawnApp + 0x9f0);
      iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
      iVar4 = SharkMinion::getRow((SharkMinion *)this);
      Sexy::Point::Point((Point *)&local_28,iVar3,iVar4 + 1);
      lVar6 = Board::GetPlantGroupAt(pPVar9);
      if (lVar6 == 0) {
        bVar2 = true;
        pZVar7 = Zombie::GetProps<ZombieParkourProps>((Zombie *)this);
                    /* WARNING: Load size is inaccurate */
        pZVar10._0_4_ = *(ZombieLaneChangingSubsystem **)(pZVar7 + 0x220);
        pZVar8 = Board::GetGameSubSystem<ZombieLaneChangingSubsystem>(*(Board **)(gLawnApp + 0x9f0))
        ;
        iVar3 = SharkMinion::getRow((SharkMinion *)this);
        ZombieLaneChangingSubsystem::ForceLaneChange
                  (pZVar10._0_4_,(undefined4)pZVar10._0_4_,pZVar8,this,iVar3 + 1,4);
      }
LAB_04f48650:
      std::vector<GridItem*,std::allocator<GridItem*>>::~vector
                ((vector<GridItem*,std::allocator<GridItem*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar2);
    }
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    cVar1 = RealObject::IsOnOpposingTeam(*puVar5,2);
    if (cVar1 != '\0') {
      bVar2 = false;
      goto LAB_04f48650;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParkour::goUp() */

void __thiscall ZombieParkour::goUp(ZombieParkour *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ZombieParkourProps *pZVar7;
  ZombieLaneChangingSubsystem *pZVar8;
  Point *pPVar9;
  Board *this_00;
  ZombieLaneChangingSubsystem *pZVar10;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar4 = SharkMinion::getRow((SharkMinion *)this);
  Board::GetGridItemsAt(this_00,iVar3,iVar4 + -1,(vector *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar2) {
      pPVar9 = *(Point **)(gLawnApp + 0x9f0);
      iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
      iVar4 = SharkMinion::getRow((SharkMinion *)this);
      Sexy::Point::Point((Point *)&local_28,iVar3,iVar4 + -1);
      lVar6 = Board::GetPlantGroupAt(pPVar9);
      if (lVar6 == 0) {
        bVar2 = true;
        pZVar7 = Zombie::GetProps<ZombieParkourProps>((Zombie *)this);
                    /* WARNING: Load size is inaccurate */
        pZVar10._0_4_ = *(ZombieLaneChangingSubsystem **)(pZVar7 + 0x220);
        pZVar8 = Board::GetGameSubSystem<ZombieLaneChangingSubsystem>(*(Board **)(gLawnApp + 0x9f0))
        ;
        iVar3 = SharkMinion::getRow((SharkMinion *)this);
        ZombieLaneChangingSubsystem::ForceLaneChange
                  (pZVar10._0_4_,(undefined4)pZVar10._0_4_,pZVar8,this,iVar3 + -1,4);
      }
LAB_04f487f4:
      std::vector<GridItem*,std::allocator<GridItem*>>::~vector
                ((vector<GridItem*,std::allocator<GridItem*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar2);
    }
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    cVar1 = RealObject::IsOnOpposingTeam(*puVar5,2);
    if (cVar1 != '\0') {
      bVar2 = false;
      goto LAB_04f487f4;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  } while( true );
}


/* ZombieParkour::changeRow() */

void __thiscall ZombieParkour::changeRow(ZombieParkour *this)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = SharkMinion::getRow((SharkMinion *)this);
  if ((iVar1 != 0) &&
     ((iVar2 = BoardConstants::NUMBER_OF_ROWS(), iVar1 == iVar2 + -1 ||
      (fVar3 = (float)(**(code **)(*(long *)this + 0x308))(0x3f800000,this), 0.5 <= fVar3)))) {
    goUp(this);
    return;
  }
  goDown(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParkour::goBesideRow(int, int) */

void __thiscall ZombieParkour::goBesideRow(ZombieParkour *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar11;
  long *plVar12;
  Point *pPVar13;
  float fVar14;
  undefined8 local_30;
  undefined8 local_28;
  Point aPStack_20 [24];
  long local_8;
  
  iVar7 = param_1 + 1;
  local_8 = ___stack_chk_guard;
  pPVar13 = *(Point **)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_20,param_2,iVar7);
  lVar9 = Board::GetPlantGroupAt(pPVar13);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aPStack_20);
  Board::GetGridItemsAt(*(Board **)(gLawnApp + 0x9f0),param_2,iVar7,(vector *)aPStack_20);
  if (lVar9 == 0) {
    bVar1 = true;
  }
  else {
    puVar10 = (undefined8 *)PlantGroup::Plants();
    local_30 = FUN_04f47a64(*puVar10);
    local_28 = FUN_04f47ab4(puVar10[1]);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (bVar1) {
      do {
        pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
        iVar6 = (**(code **)(*plVar12 + 0x180))();
        if ((iVar6 == 3) ||
           (lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11),
           1.0 < *(float *)(lVar9 + 0xc4))) {
          bVar1 = false;
          goto LAB_04f48a08;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28)
        ;
      } while (bVar1);
    }
    bVar1 = true;
  }
LAB_04f48a08:
  iVar6 = param_2 + 1;
  cVar2 = isTallGrid(this,(vector *)aPStack_20);
  if (cVar2 != '\0') {
    bVar1 = false;
  }
  pPVar13 = *(Point **)(gLawnApp + 0x9f0);
  Sexy::Point::Point((Point *)&local_28,iVar6,iVar7);
  lVar9 = Board::GetPlantGroupAt(pPVar13);
  std::vector<GridItem*,std::allocator<GridItem*>>::clear
            ((vector<GridItem*,std::allocator<GridItem*>> *)aPStack_20);
  Board::GetGridItemsAt(*(Board **)(gLawnApp + 0x9f0),iVar6,iVar7,(vector *)aPStack_20);
  if (lVar9 != 0) {
    puVar10 = (undefined8 *)PlantGroup::Plants();
    local_30 = FUN_04f47a64(*puVar10);
    local_28 = FUN_04f47ab4(puVar10[1]);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar3)
    {
      pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
      iVar7 = (**(code **)(*plVar12 + 0x180))();
      if ((iVar7 == 3) ||
         (lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11), 1.0 < *(float *)(lVar9 + 0xc4))
         ) {
        bVar1 = false;
        break;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
  }
  iVar7 = param_1 + -1;
  cVar2 = isTallGrid(this,(vector *)aPStack_20);
  if (cVar2 != '\0') {
    bVar1 = false;
  }
  pPVar13 = *(Point **)(gLawnApp + 0x9f0);
  Sexy::Point::Point((Point *)&local_28,param_2,iVar7);
  lVar9 = Board::GetPlantGroupAt(pPVar13);
  std::vector<GridItem*,std::allocator<GridItem*>>::clear
            ((vector<GridItem*,std::allocator<GridItem*>> *)aPStack_20);
  Board::GetGridItemsAt(*(Board **)(gLawnApp + 0x9f0),param_2,iVar7,(vector *)aPStack_20);
  if (lVar9 != 0) {
    puVar10 = (undefined8 *)PlantGroup::Plants();
    local_30 = FUN_04f47a64(*puVar10);
    local_28 = FUN_04f47ab4(puVar10[1]);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (bVar3) {
      do {
        pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
        iVar8 = (**(code **)(*plVar12 + 0x180))();
        if ((iVar8 == 3) ||
           (lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11),
           1.0 < *(float *)(lVar9 + 0xc4))) {
          bVar3 = false;
          goto LAB_04f48bdc;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28)
        ;
      } while (bVar3);
    }
  }
  bVar3 = true;
LAB_04f48bdc:
  cVar2 = isTallGrid(this,(vector *)aPStack_20);
  if (cVar2 != '\0') {
    bVar3 = false;
  }
  pPVar13 = *(Point **)(gLawnApp + 0x9f0);
  Sexy::Point::Point((Point *)&local_28,iVar6,iVar7);
  lVar9 = Board::GetPlantGroupAt(pPVar13);
  std::vector<GridItem*,std::allocator<GridItem*>>::clear
            ((vector<GridItem*,std::allocator<GridItem*>> *)aPStack_20);
  Board::GetGridItemsAt(*(Board **)(gLawnApp + 0x9f0),iVar6,iVar7,(vector *)aPStack_20);
  if (lVar9 != 0) {
    puVar10 = (undefined8 *)PlantGroup::Plants();
    local_30 = FUN_04f47a64(*puVar10);
    local_28 = FUN_04f47ab4(puVar10[1]);
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar4)
    {
      pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
      iVar7 = (**(code **)(*plVar12 + 0x180))();
      if ((iVar7 == 3) ||
         (lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11), 1.0 < *(float *)(lVar9 + 0xc4))
         ) {
        bVar3 = false;
        break;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
  }
  cVar2 = isTallGrid(this,(vector *)aPStack_20);
  if (cVar2 != '\0') {
    bVar3 = false;
  }
  if (param_1 == 0) {
    if (bVar1) {
LAB_04f48da8:
      uVar5 = goDown(this);
      goto LAB_04f48ce8;
    }
  }
  else {
    iVar7 = BoardConstants::NUMBER_OF_ROWS();
    if (param_1 == iVar7 + -1) {
      if (bVar3) {
LAB_04f48e08:
        uVar5 = goUp(this);
        goto LAB_04f48ce8;
      }
    }
    else {
      if (bVar3 < bVar1) goto LAB_04f48da8;
      if (bVar1 < bVar3) goto LAB_04f48e08;
      if ((bVar3 ^ 1U) <= bVar1) {
        fVar14 = (float)(**(code **)(*(long *)this + 0x308))(0x3f800000,this);
        if (fVar14 < 0.5) {
          uVar5 = goDown(this);
        }
        else {
          uVar5 = goUp(this);
        }
        goto LAB_04f48ce8;
      }
    }
  }
  uVar5 = 0;
LAB_04f48ce8:
  std::vector<GridItem*,std::allocator<GridItem*>>::~vector
            ((vector<GridItem*,std::allocator<GridItem*>> *)aPStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParkour::updateState_Running() */

void __thiscall ZombieParkour::updateState_Running(ZombieParkour *this)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  RtObject *this_00;
  PlantGroup *this_01;
  GridItem *this_02;
  long lVar9;
  undefined8 *puVar10;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar11;
  long *plVar12;
  long lVar13;
  Point *pPVar14;
  bool bVar15;
  undefined8 local_30;
  undefined8 local_28;
  Point aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)findClimbTarget(this);
  if (this_00 == (RtObject *)0x0) {
    cVar3 = canLineBreak(this);
    if (cVar3 != '\0') {
      changeRow(this);
    }
    goto LAB_04f4900c;
  }
  this_01 = Sexy::RtObject::Cast<PlantGroup>(this_00);
  this_02 = Sexy::RtObject::Cast<GridItem>(this_00);
  if (this_01 == (PlantGroup *)0x0) {
    iVar6 = BoardEntity::CalcColumnPosition((BoardEntity *)this_02);
    iVar6 = iVar6 + -1;
    iVar7 = SharkMinion::getRow((SharkMinion *)this_02);
    bVar15 = false;
    pPVar14 = *(Point **)(gLawnApp + 0x9f0);
    Sexy::Point::Point(aPStack_20,iVar6,iVar7);
    lVar9 = Board::GetPlantGroupAt(pPVar14);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aPStack_20);
    Board::GetGridItemsAt(*(Board **)(gLawnApp + 0x9f0),iVar6,iVar7,(vector *)aPStack_20);
    bVar1 = false;
LAB_04f48f90:
    if (this_02 != (GridItem *)0x0) {
LAB_04f48f94:
      iVar8 = (**(code **)(*(long *)this_02 + 0x180))(this_02);
      if (iVar8 == 3) {
        bVar1 = true;
        std::vector<GridItem*,std::allocator<GridItem*>>::empty
                  ((vector<GridItem*,std::allocator<GridItem*>> *)aPStack_20);
        bVar2 = 1;
        goto LAB_04f490f8;
      }
      if (bVar1 < (lVar9 != 0)) {
        puVar10 = (undefined8 *)PlantGroup::Plants();
        local_30 = FUN_04f47a64(*puVar10);
        local_28 = FUN_04f47ab4(puVar10[1]);
        while (bVar5 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
              bVar5) {
          pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
          plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
          iVar8 = (**(code **)(*plVar12 + 0x180))();
          if ((iVar8 == 3) ||
             (lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11),
             1.0 < *(float *)(lVar9 + 0xc4))) {
            bVar15 = true;
            break;
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
        }
      }
      cVar3 = std::vector<GridItem*,std::allocator<GridItem*>>::empty
                        ((vector<GridItem*,std::allocator<GridItem*>> *)aPStack_20);
      if ((cVar3 != '\0') || (bVar1 != false)) goto LAB_04f4911c;
      bVar2 = isTallGrid(this,(vector *)aPStack_20);
      if (bVar2 == 0) {
        if (bVar15 != false) goto LAB_04f4912c;
        goto LAB_04f48ff4;
      }
      bVar4 = goBesideRow(this,iVar7,iVar6);
      if (bVar2 <= bVar4) goto LAB_04f49004;
LAB_04f49168:
      this[0x818] = (ZombieParkour)0x1;
      goto LAB_04f49170;
    }
LAB_04f4911c:
    if ((bVar1 ^ 1U) <= bVar15) {
LAB_04f4912c:
      bVar2 = bVar15 | bVar1;
      goto LAB_04f490f8;
    }
LAB_04f48ff4:
    Zombie::setZombieState((Zombie *)this,0x20,0);
  }
  else {
    iVar6 = BoardEntity::CalcColumnPosition((BoardEntity *)this_01);
    iVar6 = iVar6 + -1;
    iVar7 = SharkMinion::getRow((SharkMinion *)this_01);
    pPVar14 = *(Point **)(gLawnApp + 0x9f0);
    Sexy::Point::Point(aPStack_20,iVar6,iVar7);
    lVar9 = Board::GetPlantGroupAt(pPVar14);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aPStack_20);
    Board::GetGridItemsAt(*(Board **)(gLawnApp + 0x9f0),iVar6,iVar7,(vector *)aPStack_20);
    puVar10 = (undefined8 *)PlantGroup::Plants();
    local_30 = FUN_04f47a64(*puVar10);
    local_28 = FUN_04f47ab4(puVar10[1]);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (bVar1) {
      do {
        pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
        iVar8 = (**(code **)(*plVar12 + 0x180))();
        if ((iVar8 == 3) ||
           (lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11),
           1.0 < *(float *)(lVar13 + 0xc4))) {
          bVar1 = true;
          goto LAB_04f48f7c;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28)
        ;
      } while (bVar1);
    }
    if (lVar9 == 0) {
      bVar1 = false;
LAB_04f48f7c:
      bVar15 = false;
      bVar2 = isTallGrid(this,(vector *)aPStack_20);
    }
    else {
      puVar10 = (undefined8 *)PlantGroup::Plants();
      local_30 = FUN_04f47a64(*puVar10);
      local_28 = FUN_04f47ab4(puVar10[1]);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar1) {
        pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
        iVar8 = (**(code **)(*plVar12 + 0x180))();
        if ((iVar8 == 3) ||
           (lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11),
           1.0 < *(float *)(lVar13 + 0xc4))) {
          bVar15 = true;
          goto LAB_04f490dc;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      }
      bVar15 = false;
LAB_04f490dc:
      bVar1 = false;
      bVar2 = isTallGrid(this,(vector *)aPStack_20);
    }
    if (bVar2 == 0) goto LAB_04f48f90;
    bVar15 = true;
    if (this_02 != (GridItem *)0x0) goto LAB_04f48f94;
LAB_04f490f8:
    bVar4 = goBesideRow(this,iVar7,iVar6);
    if (bVar4 < bVar2) {
      if (bVar1 < bVar15) goto LAB_04f49168;
LAB_04f49170:
      Zombie::setZombieState((Zombie *)this,0x21,0);
    }
  }
LAB_04f49004:
  std::vector<GridItem*,std::allocator<GridItem*>>::~vector
            ((vector<GridItem*,std::allocator<GridItem*>> *)aPStack_20);
LAB_04f4900c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParkour::searchAndTackle() */

void __thiscall ZombieParkour::searchAndTackle(ZombieParkour *this)

{
  RtObject *this_00;
  PlantGroup *pPVar1;
  GridItem *pGVar2;
  ZombieParkourProps *pZVar3;
  ZombieParkour *local_68;
  float local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)findClimbTarget(this);
  if (this_00 != (RtObject *)0x0) {
    pPVar1 = Sexy::RtObject::Cast<PlantGroup>(this_00);
    pGVar2 = Sexy::RtObject::Cast<GridItem>(this_00);
    if ((pGVar2 != (GridItem *)0x0) || (pPVar1 != (PlantGroup *)0x0)) {
      DamageInfo::DamageInfo((DamageInfo *)&local_68);
      local_68 = this;
      pZVar3 = Zombie::GetProps<ZombieParkourProps>((Zombie *)this);
      local_58 = 0x200000;
      local_60 = (float)*(int *)(pZVar3 + 0x210);
      (**(code **)(*(long *)this_00 + 0x110))(this_00,(DamageInfo *)&local_68);
      DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParkour::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieParkour::onPopAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  ZombieTosserSubSystem *pZVar4;
  undefined8 local_60;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Zombie::getZombieStateSerialization((Zombie *)param_1);
  if (iVar2 == 0x20) {
    bVar1 = std::operator==(param_4,"jump02");
    if (bVar1) {
      puVar3 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)param_1);
      local_60 = *puVar3;
      local_58 = *(undefined4 *)(puVar3 + 1);
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      local_60 = CONCAT44(local_60._4_4_,(float)local_60 - (float)iVar2 * 2.8);
      pZVar4 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
      ZombieTosserSubSystem::LaunchZombie
                ((ZombieTosserSubSystem *)0x43020000,0x3f000000,pZVar4,param_1,&local_60,aRStack_50,
                 0);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      Zombie::SetIsFlying((Zombie *)param_1,false);
    }
    bVar1 = std::operator==(param_3,"jump03");
    if (bVar1) {
      Zombie::setZombieState((Zombie *)param_1,0x1f,0);
    }
  }
  else if (iVar2 == 0x21) {
    bVar1 = std::operator==(param_4,"jump05");
    if ((bVar1) && (param_1[0x818] != (string)0x0)) {
      param_1[0x818] = (string)0x0;
      puVar3 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)param_1);
      local_60 = *puVar3;
      local_58 = *(undefined4 *)(puVar3 + 1);
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      local_60 = CONCAT44(local_60._4_4_,(float)local_60 - (float)iVar2 * 1.8);
      pZVar4 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
      ZombieTosserSubSystem::LaunchZombie
                ((ZombieTosserSubSystem *)0x42a00000,0x3f000000,pZVar4,param_1,&local_60,aRStack_50,
                 0);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      Zombie::SetIsFlying((Zombie *)param_1,false);
    }
    bVar1 = std::operator==(param_4,"use_action");
    if (bVar1) {
      searchAndTackle((ZombieParkour *)param_1);
    }
  }
  else {
    Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParkour::StaticClassInit() */

void ZombieParkour::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieParkour");
      (*pcVar4)(plVar1,asStack_150,FUN_04f49eb4,0x820,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieParkour,void(ZombieParkour::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate0::Delegate0<ZombieParkour,void(ZombieParkour::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieParkour,void(ZombieParkour::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZMASZS_Running");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f49b00(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieParkour,void(ZombieParkour::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate0::Delegate0<ZombieParkour,void(ZombieParkour::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieParkour,void(ZombieParkour::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZMASZS_Climbing");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f49b00(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieParkour,void(ZombieParkour::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate0::Delegate0<ZombieParkour,void(ZombieParkour::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieParkour,void(ZombieParkour::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZMASZS_Tackling");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f49b00(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieParkour::StaticGetClass() */

long * ZombieParkour::StaticGetClass(void)

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
  uVar2 = ZombieBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieParkour",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieParkour::GetClass() const */

long * ZombieParkour::GetClass(void)

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
  uVar2 = ZombieBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieParkour",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

