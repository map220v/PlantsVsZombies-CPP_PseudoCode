// Class: PlasmaCloudProjectile


/* PlasmaCloudProjectile::~PlasmaCloudProjectile() */

void __thiscall PlasmaCloudProjectile::~PlasmaCloudProjectile(PlasmaCloudProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067cc220;
  *(undefined ***)(this + 0x10) = &PTR__PlasmaCloudProjectile_067cc410;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PlasmaCloudProjectile::~PlasmaCloudProjectile() */

void __thiscall PlasmaCloudProjectile::~PlasmaCloudProjectile(PlasmaCloudProjectile *this)

{
  ~PlasmaCloudProjectile(this + -0x10);
  return;
}


/* PlasmaCloudProjectile::~PlasmaCloudProjectile() */

void __thiscall PlasmaCloudProjectile::~PlasmaCloudProjectile(PlasmaCloudProjectile *this)

{
  ~PlasmaCloudProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlasmaCloudProjectile::~PlasmaCloudProjectile() */

void __thiscall PlasmaCloudProjectile::~PlasmaCloudProjectile(PlasmaCloudProjectile *this)

{
  ~PlasmaCloudProjectile(this + -0x10);
  return;
}


/* PlasmaCloudProjectile::PlasmaCloudProjectile() */

void __thiscall PlasmaCloudProjectile::PlasmaCloudProjectile(PlasmaCloudProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067cc220;
  *(undefined ***)(this + 0x10) = &PTR__PlasmaCloudProjectile_067cc410;
  return;
}


/* PlasmaCloudProjectile::StaticNew() */

PlasmaCloudProjectile * PlasmaCloudProjectile::StaticNew(void)

{
  PlasmaCloudProjectile *this;
  
  this = ::operator_new(0x1b0);
  PlasmaCloudProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlasmaCloudProjectile::StaticClassInit() */

void PlasmaCloudProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlasmaCloudProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04087588,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlasmaCloudProjectile::StaticGetClass() */

long * PlasmaCloudProjectile::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"PlasmaCloudProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlasmaCloudProjectile::GetClass() const */

long * PlasmaCloudProjectile::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"PlasmaCloudProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlasmaCloudProjectile::onProjectileInitialized() */

void __thiscall PlasmaCloudProjectile::onProjectileInitialized(PlasmaCloudProjectile *this)

{
  undefined4 uVar1;
  long extraout_x0;
  
  Projectile::GetProps((Projectile *)this);
  nop();
  uVar1 = *(undefined4 *)(extraout_x0 + 0x1e4);
  *(undefined4 *)(this + 0x1a8) = *(undefined4 *)(extraout_x0 + 0x1e0);
  *(undefined4 *)(this + 0x1ac) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlasmaCloudProjectile::PlayCloundEffect(Sexy::SexyVector2 const&) */

void __thiscall
PlasmaCloudProjectile::PlayCloundEffect(PlasmaCloudProjectile *this,SexyVector2 *param_1)

{
  int iVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  RtWeakPtr aRStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"POPANIM_EFFECTS_CITRON_5HIT");
  GetPAMByName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Effect_PopAnim::SetCentered(this_00,true);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_20,*(float *)param_1,*(float *)(param_1 + 4),0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)asStack_20,-1);
  if (*(code **)(*(long *)this + 400) == Projectile::CalcRenderOrder) {
    iVar1 = Projectile::CalcRenderOrder((Projectile *)this);
  }
  else {
    iVar1 = (**(code **)(*(long *)this + 400))();
  }
  FUN_040866cc(this_00 + 0x1c,iVar1 + 1);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)asStack_20);
  std::string::string(asStack_28,"idle");
  AnimationSequence::AddSingleAnimation(asStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"idle2");
  AnimationSequence::AddLoopingAnimation(*(undefined4 *)(this + 0x1ac),asStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"idle3");
  AnimationSequence::AddSingleAnimation(asStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  Effect_PopAnim::PlayAnimationSequence(this_00,(AnimationSequence *)asStack_20);
  AnimationSequence::~AnimationSequence((AnimationSequence *)asStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlasmaCloudProjectile::handleImpact(BoardEntity*) */

void __thiscall
PlasmaCloudProjectile::handleImpact(PlasmaCloudProjectile *this,BoardEntity *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long extraout_x0;
  ContinuousDamageSystem *this_00;
  float fVar3;
  float local_18;
  float local_14;
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Projectile::handleImpact((Projectile *)this,param_1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,0.0,0.0);
  Sexy::FastCurve::SetOutRange
            (aFStack_10,local_18 + *(float *)(this + 0x18),
             (local_14 + *(float *)(this + 0x1c)) - *(float *)(this + 0x20));
  PlayCloundEffect(this,(SexyVector2 *)aFStack_10);
  Projectile::GetProps((Projectile *)this);
  nop();
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar3 = *(float *)(extraout_x0 + 0x60);
  this_00 = Board::GetGameSubSystem<ContinuousDamageSystem>(*(Board **)(gLawnApp + 0x9f0));
  ContinuousDamageSystem::AddItem
            (this_00,*(float *)(this + 0x1a8),*(float *)(this + 0x1ac),(SexyVector2 *)aFStack_10,
             (float)iVar2 * SQRT(fVar3));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

