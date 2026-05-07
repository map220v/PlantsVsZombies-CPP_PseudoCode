// Class: EffectAnimRig_WaterSplash


/* EffectAnimRig_WaterSplash::~EffectAnimRig_WaterSplash() */

void __thiscall
EffectAnimRig_WaterSplash::~EffectAnimRig_WaterSplash(EffectAnimRig_WaterSplash *this)

{
  *(undefined ***)this = &PTR_GetClass_0675e1b0;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_WaterSplash_0675e2d0;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to EffectAnimRig_WaterSplash::~EffectAnimRig_WaterSplash() */

void __thiscall
EffectAnimRig_WaterSplash::~EffectAnimRig_WaterSplash(EffectAnimRig_WaterSplash *this)

{
  ~EffectAnimRig_WaterSplash(this + -0x10);
  return;
}


/* EffectAnimRig_WaterSplash::~EffectAnimRig_WaterSplash() */

void __thiscall
EffectAnimRig_WaterSplash::~EffectAnimRig_WaterSplash(EffectAnimRig_WaterSplash *this)

{
  ~EffectAnimRig_WaterSplash(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_WaterSplash::~EffectAnimRig_WaterSplash() */

void __thiscall
EffectAnimRig_WaterSplash::~EffectAnimRig_WaterSplash(EffectAnimRig_WaterSplash *this)

{
  ~EffectAnimRig_WaterSplash(this + -0x10);
  return;
}


/* EffectAnimRig_WaterSplash::onPreDraw(Sexy::Graphics*) */

void __thiscall
EffectAnimRig_WaterSplash::onPreDraw(EffectAnimRig_WaterSplash *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar1 = FUN_03cbbff8(iVar1 * 5 + 200);
  iVar2 = FUN_03cbbff8(800);
  Sexy::Graphics::SetClipRect(param_1,iVar1,0,*(int *)(*(long *)(param_1 + 8) + 0x38),iVar2);
  return;
}


/* EffectAnimRig_WaterSplash::StaticGetClass() */

long * EffectAnimRig_WaterSplash::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_WaterSplash",uVar2,StaticNew);
  return sClass;
}


/* EffectAnimRig_WaterSplash::GetClass() const */

long * EffectAnimRig_WaterSplash::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_WaterSplash",uVar2,StaticNew);
  return sClass;
}


/* EffectAnimRig_WaterSplash::EffectAnimRig_WaterSplash() */

void __thiscall
EffectAnimRig_WaterSplash::EffectAnimRig_WaterSplash(EffectAnimRig_WaterSplash *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0675e1b0;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_WaterSplash_0675e2d0;
  return;
}


/* EffectAnimRig_WaterSplash::StaticNew() */

EffectAnimRig_WaterSplash * EffectAnimRig_WaterSplash::StaticNew(void)

{
  EffectAnimRig_WaterSplash *this;
  
  this = ::operator_new(0x210);
  EffectAnimRig_WaterSplash(this);
  return this;
}

