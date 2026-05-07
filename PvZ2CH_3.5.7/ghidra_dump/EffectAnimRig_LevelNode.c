// Class: EffectAnimRig_LevelNode


/* EffectAnimRig_LevelNode::~EffectAnimRig_LevelNode() */

void __thiscall EffectAnimRig_LevelNode::~EffectAnimRig_LevelNode(EffectAnimRig_LevelNode *this)

{
  *(undefined ***)this = &PTR_GetClass_0675d650;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_LevelNode_0675d7c8;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to EffectAnimRig_LevelNode::~EffectAnimRig_LevelNode() */

void __thiscall EffectAnimRig_LevelNode::~EffectAnimRig_LevelNode(EffectAnimRig_LevelNode *this)

{
  ~EffectAnimRig_LevelNode(this + -0x10);
  return;
}


/* EffectAnimRig_LevelNode::~EffectAnimRig_LevelNode() */

void __thiscall EffectAnimRig_LevelNode::~EffectAnimRig_LevelNode(EffectAnimRig_LevelNode *this)

{
  ~EffectAnimRig_LevelNode(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_LevelNode::~EffectAnimRig_LevelNode() */

void __thiscall EffectAnimRig_LevelNode::~EffectAnimRig_LevelNode(EffectAnimRig_LevelNode *this)

{
  ~EffectAnimRig_LevelNode(this + -0x10);
  return;
}


/* EffectAnimRig_LevelNode::onPostPlayCalled() */

void __thiscall EffectAnimRig_LevelNode::onPostPlayCalled(EffectAnimRig_LevelNode *this)

{
  (**(code **)(*(long *)this + 0x80))(0x3f800000);
  return;
}


/* EffectAnimRig_LevelNode::onLockedIdleFinished(std::string const&) */

void EffectAnimRig_LevelNode::onLockedIdleFinished(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x118))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_LevelNode::GetLockedIdleAnim() */

void __thiscall EffectAnimRig_LevelNode::GetLockedIdleAnim(EffectAnimRig_LevelNode *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"locked_idle");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_LevelNode::GetUnlockingAnim() */

void __thiscall EffectAnimRig_LevelNode::GetUnlockingAnim(EffectAnimRig_LevelNode *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"locked_animation");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_LevelNode::GetUnlockedAnim() */

void __thiscall EffectAnimRig_LevelNode::GetUnlockedAnim(EffectAnimRig_LevelNode *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"unlocked");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_LevelNode::GetCompletingAnim() */

void __thiscall EffectAnimRig_LevelNode::GetCompletingAnim(EffectAnimRig_LevelNode *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"unlocked_animation");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_LevelNode::GetCompletedAnim() */

void __thiscall EffectAnimRig_LevelNode::GetCompletedAnim(EffectAnimRig_LevelNode *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"finished");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* EffectAnimRig_LevelNode::onUnlockingAnimFinished(std::string const&) */

void EffectAnimRig_LevelNode::onUnlockingAnimFinished(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x128))();
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  return;
}


/* EffectAnimRig_LevelNode::StaticGetClass() */

long * EffectAnimRig_LevelNode::StaticGetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"EffectAnimRig_LevelNode",uVar2,StaticNew);
  return sClass;
}


/* EffectAnimRig_LevelNode::GetClass() const */

long * EffectAnimRig_LevelNode::GetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"EffectAnimRig_LevelNode",uVar2,StaticNew);
  return sClass;
}


/* EffectAnimRig_LevelNode::EffectAnimRig_LevelNode() */

void __thiscall EffectAnimRig_LevelNode::EffectAnimRig_LevelNode(EffectAnimRig_LevelNode *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined4 *)(this + 0x210) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_0675d650;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_LevelNode_0675d7c8;
  return;
}


/* EffectAnimRig_LevelNode::StaticNew() */

EffectAnimRig_LevelNode * EffectAnimRig_LevelNode::StaticNew(void)

{
  EffectAnimRig_LevelNode *this;
  
  this = ::operator_new(0x218);
  EffectAnimRig_LevelNode(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_LevelNode::getEffectPostfix() */

void EffectAnimRig_LevelNode::getEffectPostfix(void)

{
  long lVar1;
  long in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x210) < 1) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    std::to_string<ActivityTypeID>((ActivityTypeID *)(in_x0 + 0x210));
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_LevelNode::PlayCompletingAnimation(Sexy::Delegate1<std::string const&>) */

void __thiscall
EffectAnimRig_LevelNode::PlayCompletingAnimation(EffectAnimRig_LevelNode *this,Delegate1 *param_2)

{
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x158))(asStack_48);
  getEffectPostfix();
  std::operator+(asStack_48,asStack_40);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_50,0,aDStack_38);
  std::string::~string(asStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_LevelNode::PlayCompletedAnimation() */

void __thiscall EffectAnimRig_LevelNode::PlayCompletedAnimation(EffectAnimRig_LevelNode *this)

{
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x160))(asStack_48);
  getEffectPostfix();
  std::operator+(asStack_48,asStack_40);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_50,0,aDStack_38);
  std::string::~string(asStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_LevelNode::PlayLockedIdle() */

void __thiscall EffectAnimRig_LevelNode::PlayLockedIdle(EffectAnimRig_LevelNode *this)

{
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x140))(asStack_58);
  getEffectPostfix();
  std::operator+(asStack_58,asStack_50);
  std::string::~string(asStack_50);
  std::string::~string(asStack_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLockedIdleFinished);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<EffectAnimRig_LevelNode,void(EffectAnimRig_LevelNode::*)(std::string_const&)>
            (aDStack_38,asStack_50);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_60,0,aDStack_38);
  std::string::~string(asStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_LevelNode::PlayUnlockingAnimation() */

void __thiscall EffectAnimRig_LevelNode::PlayUnlockingAnimation(EffectAnimRig_LevelNode *this)

{
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x148))(asStack_58);
  getEffectPostfix();
  std::operator+(asStack_58,asStack_50);
  std::string::~string(asStack_50);
  std::string::~string(asStack_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUnlockingAnimFinished);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<EffectAnimRig_LevelNode,void(EffectAnimRig_LevelNode::*)(std::string_const&)>
            (aDStack_38,asStack_50);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_60,0,aDStack_38);
  std::string::~string(asStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_LevelNode::PlayUnlockedAnimation() */

void __thiscall EffectAnimRig_LevelNode::PlayUnlockedAnimation(EffectAnimRig_LevelNode *this)

{
  code *pcVar1;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x150))(asStack_28);
  getEffectPostfix();
  std::operator+(asStack_28,asStack_20);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  pcVar1 = *(code **)(*(long *)this + 0x78);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
  (*pcVar1)(this,asStack_30,1,0,asStack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_20);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

