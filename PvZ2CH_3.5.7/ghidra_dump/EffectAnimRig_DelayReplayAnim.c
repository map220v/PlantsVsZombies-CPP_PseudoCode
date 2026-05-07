// Class: EffectAnimRig_DelayReplayAnim


/* EffectAnimRig_DelayReplayAnim::~EffectAnimRig_DelayReplayAnim() */

void __thiscall
EffectAnimRig_DelayReplayAnim::~EffectAnimRig_DelayReplayAnim(EffectAnimRig_DelayReplayAnim *this)

{
  *(undefined ***)this = &PTR_GetClass_0675d380;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_DelayReplayAnim_0675d4a0;
  std::string::~string((string *)(this + 0x220));
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to EffectAnimRig_DelayReplayAnim::~EffectAnimRig_DelayReplayAnim() */

void __thiscall
EffectAnimRig_DelayReplayAnim::~EffectAnimRig_DelayReplayAnim(EffectAnimRig_DelayReplayAnim *this)

{
  ~EffectAnimRig_DelayReplayAnim(this + -0x10);
  return;
}


/* EffectAnimRig_DelayReplayAnim::~EffectAnimRig_DelayReplayAnim() */

void __thiscall
EffectAnimRig_DelayReplayAnim::~EffectAnimRig_DelayReplayAnim(EffectAnimRig_DelayReplayAnim *this)

{
  ~EffectAnimRig_DelayReplayAnim(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_DelayReplayAnim::~EffectAnimRig_DelayReplayAnim() */

void __thiscall
EffectAnimRig_DelayReplayAnim::~EffectAnimRig_DelayReplayAnim(EffectAnimRig_DelayReplayAnim *this)

{
  ~EffectAnimRig_DelayReplayAnim(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_DelayReplayAnim::StaticClassInit() */

void EffectAnimRig_DelayReplayAnim::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectAnimRig_DelayReplayAnim");
    (*pcVar2)(plVar1,asStack_10,FUN_03cb81e8,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_DelayReplayAnim::StaticGetClass() */

long * EffectAnimRig_DelayReplayAnim::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_DelayReplayAnim",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_DelayReplayAnim::GetClass() const */

long * EffectAnimRig_DelayReplayAnim::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_DelayReplayAnim",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_DelayReplayAnim::EffectAnimRig_DelayReplayAnim() */

void __thiscall
EffectAnimRig_DelayReplayAnim::EffectAnimRig_DelayReplayAnim(EffectAnimRig_DelayReplayAnim *this)

{
  undefined **__n;
  undefined4 uVar1;
  
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  __n = &PTR_GetClass_0675d380;
  *(undefined ***)this = &PTR_GetClass_0675d380;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_DelayReplayAnim_0675d4a0;
  Set8BytesTo0((string *)(this + 0x220));
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x214) = 0;
  std::string::append((string *)(this + 0x220),"",(size_t)__n);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x218) = uVar1;
  return;
}


/* EffectAnimRig_DelayReplayAnim::StaticNew() */

EffectAnimRig_DelayReplayAnim * EffectAnimRig_DelayReplayAnim::StaticNew(void)

{
  EffectAnimRig_DelayReplayAnim *this;
  
  this = ::operator_new(0x228);
  EffectAnimRig_DelayReplayAnim(this);
  return this;
}


/* EffectAnimRig_DelayReplayAnim::onAnimationFinished(std::string const&) */

void EffectAnimRig_DelayReplayAnim::onAnimationFinished(string *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)PVZ_T();
  fVar3 = *(float *)(param_1 + 0x210);
  fVar2 = (float)Sexy::Rand(*(float *)(param_1 + 0x214) - fVar3);
  *(float *)(param_1 + 0x218) = fVar1 + fVar2 + fVar3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_DelayReplayAnim::PlayAnimation(std::string) */

void EffectAnimRig_DelayReplayAnim::PlayAnimation(ReceivedDataCallback *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(param_1 + 0x220);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,onAnimationFinished);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<EffectAnimRig_DelayReplayAnim,void(EffectAnimRig_DelayReplayAnim::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop((PopAnimRig *)param_1,param_1 + 0x220,2,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_DelayReplayAnim::onUpdate() */

void __thiscall EffectAnimRig_DelayReplayAnim::onUpdate(EffectAnimRig_DelayReplayAnim *this)

{
  float fVar1;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x218) <= fVar1) {
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0x218) = uVar2;
    FUN_05475d88(asStack_10,this + 0x220);
    PlayAnimation(this,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

