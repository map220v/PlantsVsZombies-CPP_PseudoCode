// Class: ZombieZombossMech_IceAge


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_IceAge::OnRocketHitGround(ZombossRocket*) */

void __thiscall
ZombieZombossMech_IceAge::OnRocketHitGround(ZombieZombossMech_IceAge *this,ZombossRocket *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  Plant *pPVar4;
  ZombieZombossMechProps *pZVar5;
  ZombieZombossMechProps *pZVar6;
  Board *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  piVar3 = (int *)NetworkCacheQueue::getItemFragmentCache((NetworkCacheQueue *)param_1);
  iVar1 = piVar3[1];
  iVar2 = *piVar3;
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  pPVar4 = (Plant *)Board::GetPlantAt(this_00,iVar2,iVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar4 != (Plant *)0x0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_10);
    Plant::TakeSmashAttack(pPVar4,asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  }
  pZVar5 = Zombie::GetProps<ZombieZombossMechProps>((Zombie *)this);
  pZVar6 = Zombie::GetProps<ZombieZombossMechProps>((Zombie *)this);
  ZombossRocket::CreateExplosionEffect
            (param_1,(string *)(pZVar5 + 0x220),(string *)(pZVar6 + 0x238));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_IceAge::CalcRenderOrder() const */

void ZombieZombossMech_IceAge::CalcRenderOrder(void)

{
  Board::MakeRenderOrder(0x635d8,4,0);
  return;
}


/* non-virtual thunk to ZombieZombossMech_IceAge::CalcRenderOrder() const */

void __thiscall ZombieZombossMech_IceAge::CalcRenderOrder(ZombieZombossMech_IceAge *this)

{
  CalcRenderOrder();
  return;
}


/* ZombieZombossMech_IceAge::~ZombieZombossMech_IceAge() */

void __thiscall ZombieZombossMech_IceAge::~ZombieZombossMech_IceAge(ZombieZombossMech_IceAge *this)

{
  *(undefined ***)this = &PTR_GetClass_068d2bb0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_IceAge_068d3770;
  ZombieZombossMech::~ZombieZombossMech((ZombieZombossMech *)this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_IceAge::~ZombieZombossMech_IceAge() */

void __thiscall ZombieZombossMech_IceAge::~ZombieZombossMech_IceAge(ZombieZombossMech_IceAge *this)

{
  ~ZombieZombossMech_IceAge(this + -0x10);
  return;
}


/* ZombieZombossMech_IceAge::~ZombieZombossMech_IceAge() */

void __thiscall ZombieZombossMech_IceAge::~ZombieZombossMech_IceAge(ZombieZombossMech_IceAge *this)

{
  ~ZombieZombossMech_IceAge(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_IceAge::~ZombieZombossMech_IceAge() */

void __thiscall ZombieZombossMech_IceAge::~ZombieZombossMech_IceAge(ZombieZombossMech_IceAge *this)

{
  ~ZombieZombossMech_IceAge(this + -0x10);
  return;
}


/* ZombieZombossMech_IceAge::ZombieZombossMech_IceAge() */

void __thiscall ZombieZombossMech_IceAge::ZombieZombossMech_IceAge(ZombieZombossMech_IceAge *this)

{
  ZombieZombossMech::ZombieZombossMech((ZombieZombossMech *)this);
  this[0x960] = (ZombieZombossMech_IceAge)0x0;
  *(undefined ***)this = &PTR_GetClass_068d2bb0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_IceAge_068d3770;
  return;
}


/* ZombieZombossMech_IceAge::StaticNew() */

ZombieZombossMech_IceAge * ZombieZombossMech_IceAge::StaticNew(void)

{
  ZombieZombossMech_IceAge *this;
  
  this = ::operator_new(0x968);
  ZombieZombossMech_IceAge(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_IceAge::StaticClassInit() */

void ZombieZombossMech_IceAge::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZombossMech_IceAge");
    (*pcVar2)(plVar1,asStack_10,FUN_0476acb8,0x968,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_IceAge::StaticGetClass() */

long * ZombieZombossMech_IceAge::StaticGetClass(void)

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
  uVar2 = ZombieZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMech_IceAge",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMech_IceAge::GetClass() const */

long * ZombieZombossMech_IceAge::GetClass(void)

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
  uVar2 = ZombieZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMech_IceAge",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_IceAge::ShowFogEffect() */

void __thiscall ZombieZombossMech_IceAge::ShowFogEffect(ZombieZombossMech_IceAge *this)

{
  int iVar1;
  int iVar2;
  AttachedEffect *pAVar3;
  int local_28;
  int local_24;
  string asStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = (**(code **)(*(long *)this + 0x170))();
  BoardEntity::CalcGridPosition();
  EATextSquish::Vec3::Vec3(aVStack_18,113.0,-80.0,0.0);
  iVar2 = Board::MakeRenderOrder(0x61e68,local_24 + -1,1 - local_28);
  pAVar3 = (AttachedEffect *)
           Zombie::AddAttachedEffect
                     ((Zombie *)this,"zomboss_crust_helm_2_explosion",
                      "POPANIM_EFFECTS_ZOMBOSS_GLACIER_FOGGING","animation",
                      (SexyVector3 *)aVStack_18,iVar2 - iVar1,false);
  std::string::string(asStack_20,"animation");
  AttachedEffect::PlayAnimAndDestroy(pAVar3,asStack_20,2);
  std::string::~string(asStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_IceAge::CalcGridFootprint() const */

void ZombieZombossMech_IceAge::CalcGridFootprint(void)

{
  long *in_x0;
  Insets *in_x8;
  int local_18;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((char)in_x0[300] == '\0') {
    BoardEntity::CalcGridFootprint();
  }
  else {
    BoardEntity::CalcGridPosition();
    (**(code **)(*in_x0 + 0xd0))(&local_10);
    Sexy::Insets::Insets(in_x8,local_18,0,local_10,local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_IceAge::GetIceCrustMaxHealth() */

int __thiscall ZombieZombossMech_IceAge::GetIceCrustMaxHealth(ZombieZombossMech_IceAge *this)

{
  int iVar1;
  ZombieZombossMechIceAgeProps *pZVar2;
  float fVar3;
  
  pZVar2 = Zombie::GetProps<ZombieZombossMechIceAgeProps>((Zombie *)this);
  iVar1 = *(int *)(pZVar2 + 0x2b0);
  fVar3 = (float)Zombie::GetExtraHitPointsmodifier((Zombie *)this);
  return (int)(fVar3 * (float)iVar1);
}


/* ZombieZombossMech_IceAge::AddCrust() */

void __thiscall ZombieZombossMech_IceAge::AddCrust(ZombieZombossMech_IceAge *this)

{
  int iVar1;
  EliminateModule *this_00;
  float fVar2;
  
  this_00 = (EliminateModule *)FUN_0476e034(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_00 != (EliminateModule *)0x0) {
    iVar1 = GetIceCrustMaxHealth(this);
    fVar2 = (float)EliminateModule::GetHitpointPercent(this_00);
    Zombie::setHelm((Zombie *)((float)iVar1 * fVar2),this,0xe);
    return;
  }
  iVar1 = GetIceCrustMaxHealth(this);
  Zombie::setHelm((Zombie *)(float)iVar1,this,0xe);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_IceAge::updateHelmEffect(Effect_PopAnim*) */

void __thiscall
ZombieZombossMech_IceAge::updateHelmEffect(ZombieZombossMech_IceAge *this,Effect_PopAnim *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  EntityConditionTracker<Creature,CreatureConditions> *pEVar4;
  PopAnimRig *pPVar5;
  int iVar6;
  ulong uVar7;
  float fVar8;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar4 = (EntityConditionTracker<Creature,CreatureConditions> *)
           Zombie::GetConditionTracker((Zombie *)this);
  cVar2 = EntityConditionTracker<Creature,CreatureConditions>::TestModifierFlag(pEVar4,0x10);
  if (cVar2 == '\0') {
    pPVar5 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)param_1);
    PopAnimRig::ClearMultiplicativeOverlayColor(pPVar5);
  }
  else {
    Zombie::GetConditionTracker((Zombie *)this);
    EntityConditionTracker<Creature,CreatureConditions>::GetDrawOverlayColor();
    pPVar5 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)param_1);
    PopAnimRig::SetMultiplicativeOverlayColor(pPVar5,aCStack_18);
  }
  uVar7 = 1;
  fVar8 = (float)FUN_0476a67c(*(undefined4 *)(this + 0x2a8));
  iVar3 = GetIceCrustMaxHealth(this);
  iVar3 = Zombie::calcDamageIndex((Zombie *)this,fVar8,(float)iVar3,6);
  do {
    pPVar5 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)param_1);
    Sexy::StrFormat("damage_0%d",(string *)aCStack_18,uVar7);
    iVar6 = (int)uVar7;
    uVar1 = iVar6 + 1;
    uVar7 = (ulong)uVar1;
    PopAnimRig::SetLayerVisibility(pPVar5,(string *)aCStack_18,iVar6 <= iVar3);
    std::string::~string((string *)aCStack_18);
  } while (uVar1 != 7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_IceAge::updateHelmEffects() */

void __thiscall ZombieZombossMech_IceAge::updateHelmEffects(ZombieZombossMech_IceAge *this)

{
  AttachedEffect *this_00;
  Effect_PopAnim *pEVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xb0) == 0xe) {
    std::string::string(asStack_10,"zomboss_crust_helm_2");
    this_00 = (AttachedEffect *)Zombie::GetAttachedEffect((Zombie *)this,asStack_10);
    pEVar1 = (Effect_PopAnim *)AttachedEffect::GetEffect(this_00);
    updateHelmEffect(this,pEVar1);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_IceAge::onTakeHelmDamage(DamageInfo const&) */

void __thiscall
ZombieZombossMech_IceAge::onTakeHelmDamage(ZombieZombossMech_IceAge *this,DamageInfo *param_1)

{
  updateHelmEffects(this);
  if (this[0x960] != (ZombieZombossMech_IceAge)0x0) {
    (**(code **)(*(long *)this + 0x9b0))(this,param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_IceAge::onEndCondition(ZombieConditions) */

void ZombieZombossMech_IceAge::onEndCondition(ZombieZombossMech_IceAge *param_1)

{
  AttachedEffect *this;
  Effect_PopAnim *pEVar1;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0xb0) == 0xe) {
    std::string::string(asStack_10,"zomboss_crust_helm_2");
    this = (AttachedEffect *)Zombie::GetAttachedEffect((Zombie *)param_1,asStack_10);
    pEVar1 = (Effect_PopAnim *)AttachedEffect::GetEffect(this);
    updateHelmEffect(param_1,pEVar1);
    std::string::~string(asStack_10);
    nop();
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_IceAge::onSetHelm() */

void __thiscall ZombieZombossMech_IceAge::onSetHelm(ZombieZombossMech_IceAge *this)

{
  int iVar1;
  int iVar2;
  AttachedEffect *this_00;
  Effect_PopAnim *this_01;
  ZombieHydraHeadAnimRig *pZVar3;
  int local_38;
  int local_34;
  string asStack_30 [16];
  PIInterpolator aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xb0) == 0xe) {
    BoardEntity::CalcGridPosition();
    iVar1 = (**(code **)(*(long *)this + 0x170))(this);
    Sexy::PIInterpolator::PIInterpolator(aPStack_20);
    std::string::string(asStack_30,"animation2");
    AnimationSequence::AddSingleAnimation(aPStack_20,asStack_30,0);
    std::string::~string(asStack_30);
    nop();
    std::string::string(asStack_30,"animation");
    PVZ_EOT();
    AnimationSequence::AddLoopingAnimation(aPStack_20,asStack_30,0);
    std::string::~string(asStack_30);
    nop();
    Zombie::RemoveAttachedEffect((Zombie *)this,"zomboss_crust_helm_2");
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_30,80.0,-114.0,0.0);
    iVar2 = Board::MakeRenderOrder(0x61e68,local_34 + -1,-local_38);
    this_00 = (AttachedEffect *)
              Zombie::AddAttachedEffect
                        ((Zombie *)this,"zomboss_crust_helm_2",
                         "POPANIM_EFFECTS_ZOMBOSS_GLACIER_MIDDLE","animation2",
                         (SexyVector3 *)asStack_30,iVar2 - iVar1,false);
    this_01 = (Effect_PopAnim *)AttachedEffect::GetEffect(this_00);
    Effect_PopAnim::PlayAnimationSequence(this_01,(AnimationSequence *)aPStack_20);
    updateHelmEffects(this);
    pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    FUN_0476a688(pZVar3 + 0x240,1);
    ShowFogEffect(this);
    Zombie::SetAnimIgnoreConditionColors((Zombie *)this,true);
    AnimationSequence::~AnimationSequence((AnimationSequence *)aPStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0476fc48 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieZombossMech_IceAge::onHelmDropped(HelmType, int) */

void ZombieZombossMech_IceAge::onHelmDropped(ZombieZombossMech *param_1)

{
  AttachedEffect *pAVar1;
  ZombieZombossMechIceAgeProps *pZVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"zomboss_crust_helm_2");
  pAVar1 = (AttachedEffect *)Zombie::GetAttachedEffect((Zombie *)param_1,asStack_18);
  std::string::string(asStack_10,"animation3");
  AttachedEffect::PlayAnimAndDestroy(pAVar1,asStack_10,2);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  FUN_0476a680(param_1 + 0x848);
  ZombieZombossMech::CounterAllUndroppedRockets(param_1);
  pZVar2 = Zombie::GetProps<ZombieZombossMechIceAgeProps>((Zombie *)param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)(pZVar2 + 0x2a0));
  ZombieWithActions::QueueAction<ZombossHelmLostActionHandler>
            ((ZombieWithActions *)pZVar2,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  Zombie::setZombieState((Zombie *)param_1,0x1f,0);
  pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  FUN_0476a688(pZVar3 + 0x240,0);
  Zombie::SetAnimIgnoreConditionColors((Zombie *)param_1,false);
  ShowFogEffect((ZombieZombossMech_IceAge *)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0476fe60 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieZombossMech_IceAge::StartCoverUp() */

void __thiscall ZombieZombossMech_IceAge::StartCoverUp(ZombieZombossMech_IceAge *this)

{
  ZombieZombossMechIceAgeProps *pZVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetProps<ZombieZombossMechIceAgeProps>((Zombie *)this);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(pZVar1 + 0x2a8));
  ZombieWithActions::QueueAction<ZombossCoverUpActionHandler>
            ((ZombieWithActions *)pZVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0476feec */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieZombossMech_IceAge::Retreat(ZombieState) */

void __thiscall ZombieZombossMech_IceAge::Retreat(ZombieZombossMech_IceAge *this,int param_2)

{
  ZombieWithActions *pZVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != 0x27) {
    pZVar1 = (ZombieWithActions *)ZombieZombossMech::getActiveStage((ZombieZombossMech *)this);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(pZVar1 + 0x20));
    ZombieWithActions::QueueAction<ZombossCoverUpActionHandler>(pZVar1,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,param_2);
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_IceAge::onPlaceOnBoard() */

void __thiscall ZombieZombossMech_IceAge::onPlaceOnBoard(ZombieZombossMech_IceAge *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int local_20;
  int local_1c;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieZombossMech::onPlaceOnBoard();
  BoardEntity::CalcGridPosition();
  iVar1 = (**(code **)(*(long *)this + 0x170))(this);
  Board::MakeRenderOrder(0x61e68,local_1c,-local_20);
  EATextSquish::Vec3::Vec3(aVStack_18,94.0,-228.0,0.0);
  iVar2 = Board::MakeRenderOrder(0x61e68,local_1c + -3,-local_20);
  Zombie::AddAttachedEffect
            ((Zombie *)this,"zomboss_crust_helm_1","POPANIM_EFFECTS_ZOMBOSS_GLACIER_TOP","animation"
             ,(SexyVector3 *)aVStack_18,iVar2 - iVar1,false);
  EATextSquish::Vec3::Vec3(aVStack_18,94.0,12.0,0.0);
  iVar2 = Board::MakeRenderOrder(0x61e68,local_1c + 1,-local_20);
  Zombie::AddAttachedEffect
            ((Zombie *)this,"zomboss_crust_helm_3","POPANIM_EFFECTS_ZOMBOSS_GLACIER_BOTTOM",
             "animation",(SexyVector3 *)aVStack_18,iVar2 - iVar1,false);
  this[0x960] = (ZombieZombossMech_IceAge)0x0;
  if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
     (lVar3 = FUN_0476e034(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)), lVar3 != 0)) {
    this[0x960] = (ZombieZombossMech_IceAge)0x1;
  }
  AddCrust(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_IceAge::onZombossExitFinal() */

void __thiscall ZombieZombossMech_IceAge::onZombossExitFinal(ZombieZombossMech_IceAge *this)

{
  Zombie::DetachAttachedEffect((Zombie *)this,"zomboss_crust_helm_1");
  Zombie::DetachAttachedEffect((Zombie *)this,"zomboss_crust_helm_3");
  ZombieZombossMech::onZombossExitFinal((ZombieZombossMech *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_IceAge::TakeDamage(DamageInfo const&) */

void __thiscall
ZombieZombossMech_IceAge::TakeDamage(ZombieZombossMech_IceAge *this,DamageInfo *param_1)

{
  undefined *puVar1;
  Plant *pPVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieZombossMech::TakeDamage((ZombieZombossMech *)this,param_1);
  if (((this[0x960] != (ZombieZombossMech_IceAge)0x0) && (*(RtObject **)param_1 != (RtObject *)0x0))
     && (pPVar2 = Sexy::RtObject::Cast<Plant>(*(RtObject **)param_1), puVar1 = gMessageRouter,
        pPVar2 != (Plant *)0x0)) {
    Plant::GetType();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    FUN_05475d88(asStack_10,lVar3 + 8);
    MessageRouter::Post<std::string_const&,std::string>
              ((MessageRouter *)puVar1,Message::zombossMechTakeDamage,asStack_10);
    std::string::~string(asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_IceAge::onApplyCondition(ZombieConditions) */

void __thiscall
ZombieZombossMech_IceAge::onApplyCondition(ZombieZombossMech_IceAge *this,int param_2)

{
  ZombieZombossMech::onApplyCondition();
  updateHelmEffects(this);
  if ((this[0x960] != (ZombieZombossMech_IceAge)0x0) && ((param_2 == 1 || (param_2 == 0)))) {
    Zombie::EndCondition((Zombie *)this,param_2);
    return;
  }
  return;
}


/* ZombieZombossMech_IceAge::startRandomAction() */

void __thiscall ZombieZombossMech_IceAge::startRandomAction(ZombieZombossMech_IceAge *this)

{
  int iVar1;
  
  iVar1 = FUN_0476a678(*(undefined4 *)(this + 0xb0));
  if (iVar1 != 0) {
    ZombieZombossMech::startRandomAction((ZombieZombossMech *)this);
    return;
  }
  StartCoverUp(this);
  return;
}

