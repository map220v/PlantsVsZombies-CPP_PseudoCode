// Class: CollectableCure


/* CollectableCure::onUpdate() */

void __thiscall CollectableCure::onUpdate(CollectableCure *this)

{
  StateMachine<CollectableState>::UpdateState((StateMachine<CollectableState> *)(this + 200));
  (**(code **)(*(long *)this + 0x210))(this);
  (**(code **)(*(long *)this + 0x218))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableCure::GetCureValue() const */

void CollectableCure::GetCureValue(void)

{
  undefined4 uVar1;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TwinsAssistPerson::GetPopAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  uVar1 = *(undefined4 *)(extraout_x0 + 0x94);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableCure::StopCaptureEffect() */

void __thiscall CollectableCure::StopCaptureEffect(CollectableCure *this)

{
  char cVar1;
  Effect_PopAnim *extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Collectable::IsCollecting((Collectable *)this);
  if (cVar1 == '\0') {
    Collectable::SetNeverExpire((Collectable *)this,false);
    NewPVPHealthBar::FlashDamage((NewPVPHealthBar *)this);
  }
  DandelionBomb::getAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::string((string *)aRStack_10,"animation");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(extraout_x0,aRStack_10,0);
  std::string::~string((string *)aRStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableCure::StaticClassInit() */

void CollectableCure::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectableCure");
    (*pcVar2)(plVar1,asStack_10,FUN_03c6b6ac,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableCure::StaticGetClass() */

long * CollectableCure::StaticGetClass(void)

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
  uVar2 = Collectable::StaticGetClass();
  (*pcVar3)(plVar1,"CollectableCure",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableCure::GetClass() const */

long * CollectableCure::GetClass(void)

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
  uVar2 = Collectable::StaticGetClass();
  (*pcVar3)(plVar1,"CollectableCure",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableCure::~CollectableCure() */

void __thiscall CollectableCure::~CollectableCure(CollectableCure *this)

{
  *(undefined ***)this = &PTR_GetClass_06758320;
  *(undefined ***)(this + 0x10) = &PTR__CollectableCure_06758570;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1f0));
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableCure::~CollectableCure() */

void __thiscall CollectableCure::~CollectableCure(CollectableCure *this)

{
  ~CollectableCure(this + -0x10);
  return;
}


/* CollectableCure::~CollectableCure() */

void __thiscall CollectableCure::~CollectableCure(CollectableCure *this)

{
  ~CollectableCure(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableCure::~CollectableCure() */

void __thiscall CollectableCure::~CollectableCure(CollectableCure *this)

{
  ~CollectableCure(this + -0x10);
  return;
}


/* CollectableCure::CollectableCure() */

void __thiscall CollectableCure::CollectableCure(CollectableCure *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_06758320;
  *(undefined ***)(this + 0x10) = &PTR__CollectableCure_06758570;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1f0));
  return;
}


/* CollectableCure::StaticNew() */

CollectableCure * CollectableCure::StaticNew(void)

{
  CollectableCure *this;
  
  this = ::operator_new(0x1f8);
  CollectableCure(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableCure::onCollectableInitialize() */

void __thiscall CollectableCure::onCollectableInitialize(CollectableCure *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1f0),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableCure::StartCaptureEffect() */

void __thiscall CollectableCure::StartCaptureEffect(CollectableCure *this)

{
  Effect_PopAnim *this_00;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Collectable::SetMotionIdle((Collectable *)this);
  Collectable::SetNeverExpire((Collectable *)this,true);
  DandelionBomb::getAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
  std::string::string(asStack_28,"transition_red");
  AnimationSequence::AddSingleAnimation(aRStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"red");
  PVZ_EOT();
  AnimationSequence::AddLoopingAnimation(aRStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  Effect_PopAnim::PlayAnimationSequence(this_00,(AnimationSequence *)aRStack_20);
  AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableCure::onFinishMotion() */

void __thiscall CollectableCure::onFinishMotion(CollectableCure *this)

{
  char cVar1;
  undefined4 uVar2;
  long *plVar3;
  code *pcVar4;
  
  Collectable::onFinishMotion((Collectable *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1f0));
  if (cVar1 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1f0));
    pcVar4 = *(code **)(*plVar3 + 0x1e0);
    uVar2 = GetCureValue();
    (*pcVar4)(plVar3,uVar2,1);
  }
  return;
}

