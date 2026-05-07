// Class: EffectAnimRig_LevelNode_Zomboss


/* EffectAnimRig_LevelNode_Zomboss::PlayLockedIdle() */

void __thiscall
EffectAnimRig_LevelNode_Zomboss::PlayLockedIdle(EffectAnimRig_LevelNode_Zomboss *this)

{
  EffectAnimRig_LevelNode::PlayLockedIdle((EffectAnimRig_LevelNode *)this);
  if ((*(long **)(this + 0x218) != (long *)0x0) &&
     (this[0x220] != (EffectAnimRig_LevelNode_Zomboss)0x0)) {
    (**(code **)(**(long **)(this + 0x218) + 0x118))();
  }
  return;
}


/* EffectAnimRig_LevelNode_Zomboss::PlayUnlockingAnimation() */

void __thiscall
EffectAnimRig_LevelNode_Zomboss::PlayUnlockingAnimation(EffectAnimRig_LevelNode_Zomboss *this)

{
  EffectAnimRig_LevelNode::PlayUnlockingAnimation((EffectAnimRig_LevelNode *)this);
  if ((*(long **)(this + 0x218) != (long *)0x0) &&
     (this[0x220] != (EffectAnimRig_LevelNode_Zomboss)0x0)) {
    (**(code **)(**(long **)(this + 0x218) + 0x120))();
  }
  return;
}


/* EffectAnimRig_LevelNode_Zomboss::PlayUnlockedAnimation() */

void __thiscall
EffectAnimRig_LevelNode_Zomboss::PlayUnlockedAnimation(EffectAnimRig_LevelNode_Zomboss *this)

{
  EffectAnimRig_LevelNode::PlayUnlockedAnimation((EffectAnimRig_LevelNode *)this);
  if ((*(long **)(this + 0x218) != (long *)0x0) &&
     (this[0x220] != (EffectAnimRig_LevelNode_Zomboss)0x0)) {
    (**(code **)(**(long **)(this + 0x218) + 0x128))();
  }
  return;
}


/* EffectAnimRig_LevelNode_Zomboss::PlayCompletedAnimation() */

void __thiscall
EffectAnimRig_LevelNode_Zomboss::PlayCompletedAnimation(EffectAnimRig_LevelNode_Zomboss *this)

{
  EffectAnimRig_LevelNode::PlayCompletedAnimation((EffectAnimRig_LevelNode *)this);
  if ((*(long **)(this + 0x218) != (long *)0x0) &&
     (this[0x220] != (EffectAnimRig_LevelNode_Zomboss)0x0)) {
    (**(code **)(**(long **)(this + 0x218) + 0x138))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_LevelNode_Zomboss::GetLockedIdleAnim() */

void __thiscall
EffectAnimRig_LevelNode_Zomboss::GetLockedIdleAnim(EffectAnimRig_LevelNode_Zomboss *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"inactive");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_LevelNode_Zomboss::GetUnlockingAnim() */

void __thiscall
EffectAnimRig_LevelNode_Zomboss::GetUnlockingAnim(EffectAnimRig_LevelNode_Zomboss *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"transition");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_LevelNode_Zomboss::GetUnlockedAnim() */

void __thiscall
EffectAnimRig_LevelNode_Zomboss::GetUnlockedAnim(EffectAnimRig_LevelNode_Zomboss *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"active");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* EffectAnimRig_LevelNode_Zomboss::PopAnimPlaySample(std::string const&, int, double, double) */

void EffectAnimRig_LevelNode_Zomboss::PopAnimPlaySample
               (string *param_1,int param_2,double param_3,double param_4)

{
  WorldMap *this;
  
  this = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  WorldMap::PlayZombossSound(this,(string *)(ulong)(uint)param_2);
  return;
}


/* non-virtual thunk to EffectAnimRig_LevelNode_Zomboss::PopAnimPlaySample(std::string const&, int,
   double, double) */

void __thiscall
EffectAnimRig_LevelNode_Zomboss::PopAnimPlaySample
          (EffectAnimRig_LevelNode_Zomboss *this,string *param_1,int param_2,double param_3,
          double param_4)

{
  PopAnimPlaySample((string *)(this + -0x10),(int)param_1,param_3,param_4);
  return;
}


/* EffectAnimRig_LevelNode_Zomboss::StaticGetClass() */

long * EffectAnimRig_LevelNode_Zomboss::StaticGetClass(void)

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
  uVar2 = EffectAnimRig_LevelNode::StaticGetClass();
  (*pcVar3)(plVar1,"EffectAnimRig_LevelNode_Zomboss",uVar2,StaticNew);
  return sClass;
}


/* EffectAnimRig_LevelNode_Zomboss::GetClass() const */

long * EffectAnimRig_LevelNode_Zomboss::GetClass(void)

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
  uVar2 = EffectAnimRig_LevelNode::StaticGetClass();
  (*pcVar3)(plVar1,"EffectAnimRig_LevelNode_Zomboss",uVar2,StaticNew);
  return sClass;
}


/* EffectAnimRig_LevelNode_Zomboss::~EffectAnimRig_LevelNode_Zomboss() */

void __thiscall
EffectAnimRig_LevelNode_Zomboss::~EffectAnimRig_LevelNode_Zomboss
          (EffectAnimRig_LevelNode_Zomboss *this)

{
  *(undefined ***)this = &PTR_GetClass_0675cda0;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_LevelNode_Zomboss_0675cf18;
  if (*(long **)(this + 0x218) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x218) + 0x18))();
    *(undefined8 *)(this + 0x218) = 0;
  }
  EffectAnimRig_LevelNode::~EffectAnimRig_LevelNode((EffectAnimRig_LevelNode *)this);
  return;
}


/* non-virtual thunk to EffectAnimRig_LevelNode_Zomboss::~EffectAnimRig_LevelNode_Zomboss() */

void __thiscall
EffectAnimRig_LevelNode_Zomboss::~EffectAnimRig_LevelNode_Zomboss
          (EffectAnimRig_LevelNode_Zomboss *this)

{
  ~EffectAnimRig_LevelNode_Zomboss(this + -0x10);
  return;
}


/* EffectAnimRig_LevelNode_Zomboss::~EffectAnimRig_LevelNode_Zomboss() */

void __thiscall
EffectAnimRig_LevelNode_Zomboss::~EffectAnimRig_LevelNode_Zomboss
          (EffectAnimRig_LevelNode_Zomboss *this)

{
  ~EffectAnimRig_LevelNode_Zomboss(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_LevelNode_Zomboss::~EffectAnimRig_LevelNode_Zomboss() */

void __thiscall
EffectAnimRig_LevelNode_Zomboss::~EffectAnimRig_LevelNode_Zomboss
          (EffectAnimRig_LevelNode_Zomboss *this)

{
  ~EffectAnimRig_LevelNode_Zomboss(this + -0x10);
  return;
}


/* EffectAnimRig_LevelNode_Zomboss::EffectAnimRig_LevelNode_Zomboss() */

void __thiscall
EffectAnimRig_LevelNode_Zomboss::EffectAnimRig_LevelNode_Zomboss
          (EffectAnimRig_LevelNode_Zomboss *this)

{
  EffectAnimRig_LevelNode::EffectAnimRig_LevelNode((EffectAnimRig_LevelNode *)this);
  *(undefined8 *)(this + 0x218) = 0;
  this[0x220] = (EffectAnimRig_LevelNode_Zomboss)0x0;
  *(undefined ***)this = &PTR_GetClass_0675cda0;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_LevelNode_Zomboss_0675cf18;
  return;
}


/* EffectAnimRig_LevelNode_Zomboss::StaticNew() */

EffectAnimRig_LevelNode_Zomboss * EffectAnimRig_LevelNode_Zomboss::StaticNew(void)

{
  EffectAnimRig_LevelNode_Zomboss *this;
  
  this = ::operator_new(0x228);
  EffectAnimRig_LevelNode_Zomboss(this);
  return this;
}


/* EffectAnimRig_LevelNode_Zomboss::SetOverlayNode(EffectAnimRig_LevelNode*) */

void __thiscall
EffectAnimRig_LevelNode_Zomboss::SetOverlayNode
          (EffectAnimRig_LevelNode_Zomboss *this,EffectAnimRig_LevelNode *param_1)

{
  *(EffectAnimRig_LevelNode **)(this + 0x218) = param_1;
  this[0x220] = (EffectAnimRig_LevelNode_Zomboss)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_LevelNode_Zomboss::PlayCompletingAnimation(Sexy::Delegate1<std::string const&>) */

void __thiscall
EffectAnimRig_LevelNode_Zomboss::PlayCompletingAnimation
          (EffectAnimRig_LevelNode_Zomboss *this,Delegate1 *param_2)

{
  code *pcVar1;
  long *plVar2;
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
  EffectAnimRig_LevelNode::PlayCompletingAnimation((EffectAnimRig_LevelNode *)this,aDStack_38);
  plVar2 = *(long **)(this + 0x218);
  if ((plVar2 != (long *)0x0) && (this[0x220] != (EffectAnimRig_LevelNode_Zomboss)0x0)) {
    pcVar1 = *(code **)(*plVar2 + 0x130);
    Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)aDStack_38);
    (*pcVar1)(plVar2,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_LevelNode_Zomboss::onUpdate() */

void __thiscall EffectAnimRig_LevelNode_Zomboss::onUpdate(EffectAnimRig_LevelNode_Zomboss *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  this_00 = *(PopAnimRig **)(this + 0x218);
  if (this_00 != (PopAnimRig *)0x0) {
    fVar1 = (float)PVZ_T();
    fVar2 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
    return;
  }
  return;
}

