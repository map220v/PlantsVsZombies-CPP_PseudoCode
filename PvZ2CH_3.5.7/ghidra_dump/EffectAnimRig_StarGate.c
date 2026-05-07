// Class: EffectAnimRig_StarGate


/* EffectAnimRig_StarGate::~EffectAnimRig_StarGate() */

void __thiscall EffectAnimRig_StarGate::~EffectAnimRig_StarGate(EffectAnimRig_StarGate *this)

{
  *(undefined ***)this = &PTR_GetClass_0675e050;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_StarGate_0675e170;
  std::string::~string((string *)(this + 0x210));
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to EffectAnimRig_StarGate::~EffectAnimRig_StarGate() */

void __thiscall EffectAnimRig_StarGate::~EffectAnimRig_StarGate(EffectAnimRig_StarGate *this)

{
  ~EffectAnimRig_StarGate(this + -0x10);
  return;
}


/* EffectAnimRig_StarGate::~EffectAnimRig_StarGate() */

void __thiscall EffectAnimRig_StarGate::~EffectAnimRig_StarGate(EffectAnimRig_StarGate *this)

{
  ~EffectAnimRig_StarGate(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_StarGate::~EffectAnimRig_StarGate() */

void __thiscall EffectAnimRig_StarGate::~EffectAnimRig_StarGate(EffectAnimRig_StarGate *this)

{
  ~EffectAnimRig_StarGate(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_StarGate::StaticClassInit() */

void EffectAnimRig_StarGate::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectAnimRig_StarGate");
    (*pcVar2)(plVar1,asStack_10,FUN_03cbb7d0,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_StarGate::StaticGetClass() */

long * EffectAnimRig_StarGate::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_StarGate",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_StarGate::GetClass() const */

long * EffectAnimRig_StarGate::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_StarGate",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_StarGate::EffectAnimRig_StarGate() */

void __thiscall EffectAnimRig_StarGate::EffectAnimRig_StarGate(EffectAnimRig_StarGate *this)

{
  undefined **__n;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  __n = &PTR__EffectAnimRig_StarGate_0675e170;
  *(undefined ***)this = &PTR_GetClass_0675e050;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_StarGate_0675e170;
  Set8BytesTo0((string *)(this + 0x210));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x218),(DummyInit *)0x0);
  std::string::append((string *)(this + 0x210),"right",(size_t)__n);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x218),(Delegate2 *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_StarGate::StaticNew() */

EffectAnimRig_StarGate * EffectAnimRig_StarGate::StaticNew(void)

{
  EffectAnimRig_StarGate *this;
  
  this = ::operator_new(0x248);
  EffectAnimRig_StarGate(this);
  return this;
}


/* EffectAnimRig_StarGate::SetIsFlipped(bool) */

void __thiscall EffectAnimRig_StarGate::SetIsFlipped(EffectAnimRig_StarGate *this,bool param_1)

{
  size_t in_x2;
  
  if (!param_1) {
    std::string::append((string *)(this + 0x210),"right",in_x2);
    return;
  }
  std::string::append((string *)(this + 0x210),"left",in_x2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_StarGate::PlayUnlockingSequence(Sexy::Delegate0) */

void __thiscall
EffectAnimRig_StarGate::PlayUnlockingSequence(EffectAnimRig_StarGate *this,Delegate2 *param_2)

{
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x218),param_2);
  FUN_031f5e7c(asStack_58,"unlock_",this + 0x210);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUnlockingSequenceContinued);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<EffectAnimRig_StarGate,void(EffectAnimRig_StarGate::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_StarGate::PlayInteractableSequence(Sexy::Delegate0) */

void __thiscall
EffectAnimRig_StarGate::PlayInteractableSequence(EffectAnimRig_StarGate *this,Delegate2 *param_2)

{
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x218),param_2);
  FUN_031f5e7c(asStack_58,"activated_",this + 0x210);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onInteractableSequenceContinued);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<EffectAnimRig_StarGate,void(EffectAnimRig_StarGate::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_StarGate::PlayOpenIdle() */

void __thiscall EffectAnimRig_StarGate::PlayOpenIdle(EffectAnimRig_StarGate *this)

{
  code *pcVar1;
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_031f5e7c(asStack_28,"open_",this + 0x210);
  pcVar1 = *(code **)(*(long *)this + 0x78);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (*pcVar1)(this,asStack_28,1,0,avStack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_StarGate::onUnlockingSequenceContinued(std::string const&) */

void __thiscall
EffectAnimRig_StarGate::onUnlockingSequenceContinued(EffectAnimRig_StarGate *this,string *param_1)

{
  bool bVar1;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475ffc(asStack_50,param_1,0,6);
  bVar1 = std::operator==(asStack_50,"unlock");
  std::string::~string(asStack_50);
  if (bVar1) {
    FUN_031f5e7c(asStack_50,"open_",this + 0x210);
    std::operator+(asStack_50,"_start");
    std::string::~string(asStack_50);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onUnlockingSequenceContinued);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<EffectAnimRig_StarGate,void(EffectAnimRig_StarGate::*)(std::string_const&)>
              (aDStack_38,asStack_50);
    PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
  }
  else {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x218));
    PlayOpenIdle(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_StarGate::PlayUnavailableIdle() */

void __thiscall EffectAnimRig_StarGate::PlayUnavailableIdle(EffectAnimRig_StarGate *this)

{
  code *pcVar1;
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_031f5e7c(asStack_28,"inactive_",this + 0x210);
  pcVar1 = *(code **)(*(long *)this + 0x78);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (*pcVar1)(this,asStack_28,1,0,avStack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_StarGate::PlayLockedIdle() */

void __thiscall EffectAnimRig_StarGate::PlayLockedIdle(EffectAnimRig_StarGate *this)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = ProbabilitySet<std::string>::GetSize((ProbabilitySet<std::string> *)&DAT_06ad35e8);
  if (lVar1 == 0) {
    std::string::string(asStack_58,"locked_%s");
    nop();
    FUN_05475d88(asStack_50,asStack_58);
    ProbabilitySet<std::string>::AddItem
              ((ProbabilitySet<std::string> *)&DAT_06ad35e8,asStack_50,0x5a);
    std::string::~string(asStack_50);
    std::operator+(asStack_58,"_alt");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)&DAT_06ad35e8,asStack_50,5);
    std::string::~string(asStack_50);
    std::operator+(asStack_58,"_alt2");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)&DAT_06ad35e8,asStack_50,5);
    std::string::~string(asStack_50);
    std::string::~string(asStack_58);
  }
  ProbabilitySet<std::string>::PickItem();
  pcVar2 = (char *)FUN_0547429c(asStack_58);
  uVar3 = FUN_0547429c(this + 0x210);
  Sexy::StrFormat(pcVar2,asStack_50,uVar3);
  FUN_05474278(asStack_58,asStack_50);
  std::string::~string(asStack_50);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLockingSequenceContinued);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<EffectAnimRig_StarGate,void(EffectAnimRig_StarGate::*)(std::string_const&)>
            (aDStack_38,asStack_50);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_StarGate::onLockingSequenceContinued(std::string const&) */

void EffectAnimRig_StarGate::onLockingSequenceContinued(string *param_1)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  lVar1 = ProbabilitySet<std::string>::GetSize((ProbabilitySet<std::string> *)&DAT_06ad35e8);
  if (lVar1 == 0) {
    std::string::string(asStack_58,"locked_%s");
    nop();
    FUN_05475d88(asStack_50,asStack_58);
    ProbabilitySet<std::string>::AddItem
              ((ProbabilitySet<std::string> *)&DAT_06ad35e8,asStack_50,0x5a);
    std::string::~string(asStack_50);
    std::operator+(asStack_58,"_alt");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)&DAT_06ad35e8,asStack_50,5);
    std::string::~string(asStack_50);
    std::operator+(asStack_58,"_alt2");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)&DAT_06ad35e8,asStack_50,5);
    std::string::~string(asStack_50);
    std::string::~string(asStack_58);
  }
  ProbabilitySet<std::string>::PickItem();
  pcVar2 = (char *)FUN_0547429c(asStack_58);
  uVar3 = FUN_0547429c(param_1 + 0x210);
  Sexy::StrFormat(pcVar2,asStack_50,uVar3);
  FUN_05474278(asStack_58,asStack_50);
  std::string::~string(asStack_50);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onLockingSequenceContinued);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<EffectAnimRig_StarGate,void(EffectAnimRig_StarGate::*)(std::string_const&)>
            (aDStack_38,asStack_50);
  PopAnimRig::PlayAndStop((PopAnimRig *)param_1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* EffectAnimRig_StarGate::onInteractableSequenceContinued(std::string const&) */

void EffectAnimRig_StarGate::onInteractableSequenceContinued(string *param_1)

{
  Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(param_1 + 0x218));
  PlayLockedIdle((EffectAnimRig_StarGate *)param_1);
  return;
}

