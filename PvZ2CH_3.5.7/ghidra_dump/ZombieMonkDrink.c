// Class: ZombieMonkDrink


/* ZombieMonkDrink::CalcZombieAttackRect() */

void __thiscall ZombieMonkDrink::CalcZombieAttackRect(ZombieMonkDrink *this)

{
  Zombie::CalcZombieAttackRect();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkDrink::onEnterState_Recover(ZombieState) */

void ZombieMonkDrink::onEnterState_Recover(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onRecoverAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_MonkDrink::recover((ZombieAnimRig_MonkDrink *)pZVar1,aRStack_50);
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


/* ZombieMonkDrink::onApplyCondition(ZombieConditions) */

void ZombieMonkDrink::onApplyCondition(Zombie *param_1)

{
  char cVar1;
  
  if (((*(long *)(gLawnApp + 0x9f0) != 0) &&
      (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0xdc8) != '\0')) &&
     ((cVar1 = (**(code **)(*(long *)param_1 + 0x330))(), cVar1 != '\0' ||
      (cVar1 = Zombie::IsSuspended(param_1), cVar1 != '\0')))) {
    Zombie::dropAllProjectiles(param_1);
    return;
  }
  return;
}


/* ZombieMonkDrink::onCrazyAnimDone(StandaloneEffect*) */

void ZombieMonkDrink::onCrazyAnimDone(StandaloneEffect *param_1)

{
  char cVar1;
  
  cVar1 = Zombie::isInState((Zombie *)param_1,0x1f);
  if (cVar1 == '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)param_1,1,0);
  return;
}


/* ZombieMonkDrink::onRecoverAnimDone(StandaloneEffect*) */

void ZombieMonkDrink::onRecoverAnimDone(StandaloneEffect *param_1)

{
  char cVar1;
  
  cVar1 = Zombie::isInState((Zombie *)param_1,0x20);
  if (cVar1 == '\0') {
    return;
  }
  param_1[0x800] = (StandaloneEffect)0x0;
  Zombie::setZombieState((Zombie *)param_1,1,0);
  return;
}


/* ZombieMonkDrink::~ZombieMonkDrink() */

void __thiscall ZombieMonkDrink::~ZombieMonkDrink(ZombieMonkDrink *this)

{
  *(undefined ***)this = &PTR_GetClass_068c9380;
  *(undefined ***)(this + 0x10) = &PTR__ZombieMonkDrink_068c9de0;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieMonkDrink::~ZombieMonkDrink() */

void __thiscall ZombieMonkDrink::~ZombieMonkDrink(ZombieMonkDrink *this)

{
  ~ZombieMonkDrink(this + -0x10);
  return;
}


/* ZombieMonkDrink::~ZombieMonkDrink() */

void __thiscall ZombieMonkDrink::~ZombieMonkDrink(ZombieMonkDrink *this)

{
  ~ZombieMonkDrink(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieMonkDrink::~ZombieMonkDrink() */

void __thiscall ZombieMonkDrink::~ZombieMonkDrink(ZombieMonkDrink *this)

{
  ~ZombieMonkDrink(this + -0x10);
  return;
}


/* ZombieMonkDrink::ZombieMonkDrink() */

void __thiscall ZombieMonkDrink::ZombieMonkDrink(ZombieMonkDrink *this)

{
  Zombie::Zombie((Zombie *)this);
  this[0x800] = (ZombieMonkDrink)0x0;
  *(undefined ***)this = &PTR_GetClass_068c9380;
  *(undefined ***)(this + 0x10) = &PTR__ZombieMonkDrink_068c9de0;
  return;
}


/* ZombieMonkDrink::StaticNew() */

ZombieMonkDrink * ZombieMonkDrink::StaticNew(void)

{
  ZombieMonkDrink *this;
  
  this = ::operator_new(0x808);
  ZombieMonkDrink(this);
  return this;
}


/* ZombieMonkDrink::onAnimStopped(std::string const&) */

void __thiscall ZombieMonkDrink::onAnimStopped(ZombieMonkDrink *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = std::operator==(param_1,"plantfood");
  if ((bVar1) && (cVar2 = Zombie::isInState((Zombie *)this,0x21), cVar2 != '\0')) {
    (**(code **)(*(long *)this + 0x4b8))(this);
    Zombie::setZombieState((Zombie *)this,1,0);
    return;
  }
  return;
}


/* ZombieMonkDrink::CanTarget(BoardEntity*) */

ulong __thiscall ZombieMonkDrink::CanTarget(ZombieMonkDrink *this,BoardEntity *param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  Plant *extraout_x0;
  ulong uVar4;
  long *extraout_x0_00;
  
  uVar3 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)param_1);
  if (((uVar3 & 0xff) != 0) && (param_1 != (BoardEntity *)0x0)) {
    bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)param_1);
    if (bVar1) {
      nop();
      uVar4 = Zombie::canTargetPlant((Zombie *)this,extraout_x0);
      return uVar4;
    }
    bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
    if (bVar1) {
      nop();
      bVar2 = (**(code **)(*extraout_x0_00 + 0x218))();
      return (ulong)bVar2;
    }
    Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
  }
  return (ulong)(uVar3 & 0xff);
}


/* ZombieMonkDrink::onEatAnimContinued(std::string const&, std::string const&, int) */

void ZombieMonkDrink::onEatAnimContinued(string *param_1,string *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  RtObject *this;
  Plant *pPVar3;
  PlantSpringbean *pPVar4;
  
  bVar1 = std::operator==(param_2,"attack");
  if ((!bVar1) && (bVar1 = std::operator==(param_2,"crazy attack"), !bVar1)) {
    return;
  }
  this = (RtObject *)(**(code **)(*(long *)param_1 + 0x228))(param_1);
  if ((this == (RtObject *)0x0) || (cVar2 = Zombie::isInState((Zombie *)param_1,4), cVar2 != '\0'))
  {
    cVar2 = Zombie::isInState((Zombie *)param_1,7);
    if (cVar2 != '\0') {
      return;
    }
  }
  else {
    pPVar3 = Sexy::RtObject::Cast<Plant>(this);
    if (pPVar3 == (Plant *)0x0) {
      return;
    }
    bVar1 = Sexy::RtObject::IsA<PlantSpringbean>(*(RtObject **)(pPVar3 + 0xa8));
    if (!bVar1) {
      return;
    }
    pPVar4 = Sexy::RtObject::Cast<PlantSpringbean>(*(RtObject **)(pPVar3 + 0xa8));
    cVar2 = (**(code **)(*(long *)pPVar4 + 0x348))();
    if (cVar2 == '\0') {
      return;
    }
  }
  cVar2 = Zombie::IsSuspended((Zombie *)param_1);
  if (cVar2 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)param_1,1);
  return;
}


/* ZombieMonkDrink::onZombieInitialize() */

void __thiscall ZombieMonkDrink::onZombieInitialize(ZombieMonkDrink *this)

{
  ZombieHydraHeadAnimRig *this_00;
  
  this[0x800] = (ZombieMonkDrink)0x0;
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_MonkDrink::SetRedEyeLayers((ZombieAnimRig_MonkDrink *)this_00,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkDrink::PlayChargeAttackEffect() */

void __thiscall ZombieMonkDrink::PlayChargeAttackEffect(ZombieMonkDrink *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  float fVar5;
  undefined4 uVar6;
  string asStack_40 [8];
  float local_38 [4];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18 [2];
  undefined4 local_10;
  long local_8;
  
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3((Vec3 *)local_38,-100.0,-20.0,0.0);
  fVar5 = (float)Zombie::GetFacingMultiplier((Zombie *)this);
  local_38[0] = fVar5 * local_38[0];
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_28 = *puVar3;
  local_20 = *(undefined4 *)(puVar3 + 1);
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  iVar2 = Board::MakeRenderOrder(0x64960,uVar1,(int)(float)local_28);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_40,"POPANIM_EFFECTS_ZOMBIE_KONGFU_MONK_DRINK_TX");
  GetPAMByName(asStack_40);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  std::string::~string(asStack_40);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  local_18[0] = Sexy::SexyVector3::operator+((SexyVector3 *)&local_28,(SexyVector3 *)local_38);
  local_10 = uVar6;
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)local_18,iVar2);
  std::string::string((string *)local_18,"idle");
  Effect_PopAnim::PlaySingleAnimation(this_00,(RtWeakPtr *)local_18,0);
  std::string::~string((string *)local_18);
  nop();
  iVar2 = Zombie::GetFacing((Zombie *)this);
  if (iVar2 == 1) {
    fVar5 = (float)Sexy::SexyMath::DegToRad(180.0);
    Effect_PopAnim::SetOrientation(this_00,fVar5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMonkDrink::CalcChargeAttackRect() */

void ZombieMonkDrink::CalcChargeAttackRect(void)

{
  int iVar1;
  int iVar2;
  Zombie *in_x0;
  ZombieMonkDrinkProps *pZVar3;
  Insets *in_x8;
  float fVar4;
  float fVar5;
  float fVar6;
  
  pZVar3 = Zombie::GetProps<ZombieMonkDrinkProps>(in_x0);
  Sexy::Insets::Insets(in_x8,(Insets *)(pZVar3 + 0x224));
  fVar6 = *(float *)(in_x0 + 0x1c);
  fVar4 = (float)FUN_04749abc(*(undefined4 *)(in_x0 + 0x18),fVar6,*(undefined4 *)(in_x0 + 0x20));
  iVar1 = *(int *)(in_x8 + 8);
  iVar2 = *(int *)in_x8;
  fVar5 = (float)Zombie::GetFacingMultiplier(in_x0);
  *(int *)in_x8 = (int)((fVar4 - (float)(iVar1 / 2)) + (float)iVar2 * fVar5);
  *(int *)(in_x8 + 4) = (int)(((float)*(int *)(in_x8 + 4) + fVar6) - (float)*(int *)(in_x8 + 0xc));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkDrink::getHeadDropFraction() const */

float __thiscall ZombieMonkDrink::getHeadDropFraction(ZombieMonkDrink *this)

{
  ZombieMonkDrinkProps *pZVar1;
  float fVar2;
  
  pZVar1 = Zombie::GetProps<ZombieMonkDrinkProps>((Zombie *)this);
  fVar2 = (float)FUN_04749aac(*(undefined4 *)(this + 0x284));
  return (*(float *)(pZVar1 + 0x218) * _FUN_0474a4a4) / fVar2;
}


/* ZombieMonkDrink::getArmDropFraction() const */

float __thiscall ZombieMonkDrink::getArmDropFraction(ZombieMonkDrink *this)

{
  ZombieMonkDrinkProps *pZVar1;
  float fVar2;
  
  pZVar1 = Zombie::GetProps<ZombieMonkDrinkProps>((Zombie *)this);
  fVar2 = (float)FUN_04749aac(*(undefined4 *)(this + 0x284));
  return (*(float *)(pZVar1 + 0x218) * 0.21666665) / fVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkDrink::onEnterState_Eat(ZombieState) */

void ZombieMonkDrink::onEnterState_Eat(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onEatAnimContinued");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             aRStack_50,aRStack_60,asStack_58);
  ZombieAnimRig_MonkDrink::PlayAttackEat((ZombieAnimRig_MonkDrink *)pZVar1,aRStack_50);
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
/* ZombieMonkDrink::onEnterState_BecomeCrazy(ZombieState) */

void ZombieMonkDrink::onEnterState_BecomeCrazy(RealObject *param_1)

{
  long lVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"Play_Zomb_Kongfu_Drink_Drink");
  RealObject::PlayPositionalSound(param_1,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ZombieAnimRig_MonkDrink::SetRedEyeLayers((ZombieAnimRig_MonkDrink *)pZVar2,true);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onCrazyAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_MonkDrink::becomeCrazy((ZombieAnimRig_MonkDrink *)pZVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  lVar1 = ___stack_chk_guard;
  param_1[0x800] = (RealObject)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkDrink::onEnterState_ChargeAttack(ZombieState) */

void ZombieMonkDrink::onEnterState_ChargeAttack(Zombie *param_1)

{
  long *plVar1;
  code *pcVar2;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar2 = *(code **)(*plVar1 + 0x170);
  std::string::string(asStack_58,"plantfood");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  (*pcVar2)(plVar1,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  std::string::string(asStack_58,"Play_Zomb_PVP_Drunk_Skill");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkDrink::DamageTarget(BoardEntity*, float) */

void __thiscall
ZombieMonkDrink::DamageTarget(ZombieMonkDrink *this,BoardEntity *param_1,float param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BoardEntity *this_00;
  Plant *this_01;
  GridItem *pGVar4;
  EntityConditionTracker<Zombie,ZombieConditions> *this_02;
  float *pfVar5;
  undefined8 uVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  DamageInfo *pDVar10;
  Point aPStack_78 [8];
  float local_70;
  undefined4 local_6c;
  undefined4 local_68 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) {
    pGVar4 = (GridItem *)0x0;
    this_01 = (Plant *)0x0;
    this_00 = (BoardEntity *)0x0;
  }
  else {
    this_00 = (BoardEntity *)Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    this_01 = Sexy::RtObject::Cast<Plant>((RtObject *)param_1);
    pGVar4 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1);
  }
  fVar8 = (float)Zombie::GetExtraDPSmodifier((Zombie *)this);
  this_02 = (EntityConditionTracker<Zombie,ZombieConditions> *)
            Zombie::GetConditionTracker((Zombie *)this);
  fVar9 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDPSModifier(this_02);
  local_68[0] = 0;
  local_70 = fVar8 * fVar9 * param_2;
  pfVar5 = eastl::max_alt<float>(&local_70,(float *)local_68);
                    /* WARNING: Load size is inaccurate */
  pDVar10._0_4_ = *(DamageInfo **)pfVar5;
  if (pGVar4 == (GridItem *)0x0) {
    if (this_01 == (Plant *)0x0) {
      if (this_00 != (BoardEntity *)0x0) {
        pcVar7 = *(code **)(*(long *)this_00 + 0x110);
        iVar2 = BoardEntity::CalcColumnPosition(this_00);
        iVar3 = SharkMinion::getRow((SharkMinion *)this);
        Sexy::Point::Point(aPStack_78,iVar2,iVar3);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
        DamageInfo::DamageInfo
                  (pDVar10._0_4_,local_70,local_6c,(DamageInfo *)local_68,this,aPStack_78,0);
        (*pcVar7)(this_00,(DamageInfo *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
      }
    }
    else {
      cVar1 = Plant::IsInvincible(this_01,false);
      if (cVar1 == '\0') {
        pcVar7 = *(code **)(*(long *)this_01 + 0x110);
        Sexy::Point::Point(aPStack_78,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
        DamageInfo::DamageInfo
                  (pDVar10._0_4_,local_70,local_6c,(DamageInfo *)local_68,this,aPStack_78,0);
        (*pcVar7)(this_01,(DamageInfo *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
        if (*(float *)(this_01 + 0xd8) <= 0.0) {
          std::string::string((string *)local_68,"Play_Gulp");
          RealObject::PlayPositionalSound((RealObject *)this,(string *)local_68,0.0);
          std::string::~string((string *)local_68);
          nop();
        }
      }
    }
  }
  else {
    cVar1 = (**(code **)(*(long *)pGVar4 + 0x1f8))(pGVar4);
    if (cVar1 != '\0') {
      pcVar7 = *(code **)(*(long *)pGVar4 + 0x110);
      if (*(code **)(*(long *)this + 0x910) == Zombie::getEatingDamageType) {
        uVar6 = Zombie::getEatingDamageType();
      }
      else {
        uVar6 = (**(code **)(*(long *)this + 0x910))(this);
      }
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo
                (pDVar10._0_4_,local_70,local_6c,(DamageInfo *)local_68,uVar6,this,aPStack_78,0);
      (*pcVar7)(pGVar4,(DamageInfo *)local_68);
      DamageInfo::~DamageInfo((DamageInfo *)local_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkDrink::DamageTarget(Sexy::TRect<int> const&, int, float) */

void __thiscall
ZombieMonkDrink::DamageTarget(ZombieMonkDrink *this,TRect *param_1,int param_2,float param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar4 = operator|(1,4);
  uVar3 = operator|(uVar4,2);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_20,uVar3,param_1,param_2,param_2);
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
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    cVar2 = CanTarget(this,(BoardEntity *)*puVar5);
    if (cVar2 != '\0') {
      DamageTarget(this,(BoardEntity *)*puVar5,param_3);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkDrink::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieMonkDrink::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ZombieMonkDrinkProps *pZVar5;
  BoardEntity *pBVar6;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  long lVar7;
  float fVar8;
  TRect aTStack_18 [4];
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"use_action");
  if (bVar1) {
    std::string::string((string *)aTStack_18,"Play_Zomb_Kongfu_Drink_Roar");
    RealObject::PlayPositionalSound((RealObject *)param_1,(string *)aTStack_18,0.0);
    std::string::~string((string *)aTStack_18);
    nop();
  }
  else {
    bVar1 = std::operator==(param_4,"attack_action");
    if (bVar1) {
      cVar2 = Zombie::isInState((Zombie *)param_1,7);
      if (cVar2 == '\0') {
        pBVar6 = (BoardEntity *)(**(code **)(*(long *)param_1 + 0x228))(param_1);
        if ((pBVar6 == (BoardEntity *)0x0) ||
           (cVar2 = Zombie::isInState((Zombie *)param_1,4), cVar2 != '\0')) {
          cVar2 = Zombie::IsSuspended((Zombie *)param_1);
          if (cVar2 == '\0') {
            Zombie::setZombieState((Zombie *)param_1,1);
          }
        }
        else {
          this = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)param_1);
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
          DamageTarget((ZombieMonkDrink *)param_1,pBVar6,*(float *)(lVar7 + 0x24));
        }
      }
    }
    else {
      bVar1 = std::operator==(param_4,"charge_attack_damage1");
      if (((bVar1) || (bVar1 = std::operator==(param_4,"charge_attack_damage2"), bVar1)) ||
         (bVar1 = std::operator==(param_4,"charge_attack_damage3"), bVar1)) {
        CalcChargeAttackRect();
        bVar1 = std::operator==(param_4,"charge_attack_damage1");
        if (bVar1) {
          iVar3 = SharkMinion::getRow((SharkMinion *)param_1);
          iVar3 = iVar3 + -1;
          iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
          local_14 = local_14 - iVar4;
        }
        else {
          bVar1 = std::operator==(param_4,"charge_attack_damage2");
          if (bVar1) {
            iVar3 = SharkMinion::getRow((SharkMinion *)param_1);
          }
          else {
            bVar1 = std::operator==(param_4,"charge_attack_damage3");
            if (bVar1) {
              iVar3 = SharkMinion::getRow((SharkMinion *)param_1);
              iVar3 = iVar3 + 1;
              iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
              local_14 = local_14 + iVar4;
            }
            else {
              iVar3 = 0;
            }
          }
        }
        if (param_1[0x800] == (string)0x0) {
          pZVar5 = Zombie::GetProps<ZombieMonkDrinkProps>((Zombie *)param_1);
          fVar8 = *(float *)(pZVar5 + 0x21c);
        }
        else {
          pZVar5 = Zombie::GetProps<ZombieMonkDrinkProps>((Zombie *)param_1);
          fVar8 = *(float *)(pZVar5 + 0x220);
        }
        DamageTarget((ZombieMonkDrink *)param_1,aTStack_18,iVar3,fVar8);
      }
      else {
        bVar1 = std::operator==(param_4,"play_hit_effect");
        if (bVar1) {
          PlayChargeAttackEffect((ZombieMonkDrink *)param_1);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkDrink::StaticClassInit() */

void ZombieMonkDrink::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieMonkDrink");
      (*pcVar4)(plVar1,asStack_150,FUN_0474b2ac,0x808,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMonkDrink,void(ZombieMonkDrink::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieMonkDrink,void(ZombieMonkDrink::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMonkDrink,void(ZombieMonkDrink::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_MonkDrink_BecomeCrazy");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0474aef8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMonkDrink,void(ZombieMonkDrink::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieMonkDrink,void(ZombieMonkDrink::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMonkDrink,void(ZombieMonkDrink::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_MonkDrink_Recover");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0474aef8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMonkDrink,void(ZombieMonkDrink::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieMonkDrink,void(ZombieMonkDrink::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMonkDrink,void(ZombieMonkDrink::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_MonkDrink_ChargeAttack");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0474aef8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieMonkDrink::StaticGetClass() */

long * ZombieMonkDrink::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieMonkDrink",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMonkDrink::GetClass() const */

long * ZombieMonkDrink::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieMonkDrink",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkDrink::takeBodyDamage(DamageInfo const&) */

void __thiscall ZombieMonkDrink::takeBodyDamage(ZombieMonkDrink *this,DamageInfo *param_1)

{
  bool bVar1;
  ZombieMonkDrinkProps *pZVar2;
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68,param_1);
  if ((this[0x800] != (ZombieMonkDrink)0x0) &&
     (bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),2), !bVar1)) {
    pZVar2 = Zombie::GetProps<ZombieMonkDrinkProps>((Zombie *)this);
    local_60 = local_60 * *(float *)(pZVar2 + 0x214);
  }
  Zombie::takeBodyDamage((Zombie *)this,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMonkDrink::onEnterState_Walk(ZombieState) */

void ZombieMonkDrink::onEnterState_Walk(Zombie *param_1)

{
  ZombieAnimRig *this;
  ZombieMonkDrinkProps *pZVar1;
  
  Zombie::onEnterState_Walk();
  if (param_1[0x800] == (Zombie)0x0) {
    return;
  }
  this = (ZombieAnimRig *)Zombie::GetAnimRig(param_1);
  pZVar1 = Zombie::GetProps<ZombieMonkDrinkProps>(param_1);
  ZombieAnimRig::SetDesiredWalkVelocity(this,*(float *)(pZVar1 + 0x210));
  return;
}


/* ZombieMonkDrink::updateState_Walk() */

void __thiscall ZombieMonkDrink::updateState_Walk(ZombieMonkDrink *this)

{
  ZombieMonkDrinkProps *pZVar1;
  float fVar2;
  
  Zombie::updateState_Walk((Zombie *)this);
  if (this[0x800] == (ZombieMonkDrink)0x0) {
    fVar2 = (float)FUN_04749aa8(*(undefined4 *)(this + 0x280));
    pZVar1 = Zombie::GetProps<ZombieMonkDrinkProps>((Zombie *)this);
    if (fVar2 <= *(float *)(pZVar1 + 0x218)) {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      return;
    }
  }
  return;
}


/* ZombieMonkDrink::onExitState_Walk(ZombieState) */

void ZombieMonkDrink::onExitState_Walk(Zombie *param_1)

{
  ZombieAnimRig *this;
  ZombieMonkDrinkProps *pZVar1;
  
  ZombieGliding::onExitState_FlyingDown();
  this = (ZombieAnimRig *)Zombie::GetAnimRig(param_1);
  pZVar1 = Zombie::GetProps<ZombieMonkDrinkProps>(param_1);
  ZombieAnimRig::SetDesiredWalkVelocity(this,*(float *)(pZVar1 + 0x10));
  return;
}

