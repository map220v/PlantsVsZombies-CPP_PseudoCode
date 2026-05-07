// Class: EffectAnimRig_StarPlantFoodShine


/* EffectAnimRig_StarPlantFoodShine::~EffectAnimRig_StarPlantFoodShine() */

void __thiscall
EffectAnimRig_StarPlantFoodShine::~EffectAnimRig_StarPlantFoodShine
          (EffectAnimRig_StarPlantFoodShine *this)

{
  *(undefined ***)this = &PTR_GetClass_0675d0c0;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_StarPlantFoodShine_0675d1e0;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to EffectAnimRig_StarPlantFoodShine::~EffectAnimRig_StarPlantFoodShine() */

void __thiscall
EffectAnimRig_StarPlantFoodShine::~EffectAnimRig_StarPlantFoodShine
          (EffectAnimRig_StarPlantFoodShine *this)

{
  ~EffectAnimRig_StarPlantFoodShine(this + -0x10);
  return;
}


/* EffectAnimRig_StarPlantFoodShine::~EffectAnimRig_StarPlantFoodShine() */

void __thiscall
EffectAnimRig_StarPlantFoodShine::~EffectAnimRig_StarPlantFoodShine
          (EffectAnimRig_StarPlantFoodShine *this)

{
  ~EffectAnimRig_StarPlantFoodShine(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_StarPlantFoodShine::~EffectAnimRig_StarPlantFoodShine() */

void __thiscall
EffectAnimRig_StarPlantFoodShine::~EffectAnimRig_StarPlantFoodShine
          (EffectAnimRig_StarPlantFoodShine *this)

{
  ~EffectAnimRig_StarPlantFoodShine(this + -0x10);
  return;
}


/* EffectAnimRig_StarPlantFoodShine::EffectAnimRig_StarPlantFoodShine() */

void __thiscall
EffectAnimRig_StarPlantFoodShine::EffectAnimRig_StarPlantFoodShine
          (EffectAnimRig_StarPlantFoodShine *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0675d0c0;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_StarPlantFoodShine_0675d1e0;
  return;
}


/* EffectAnimRig_StarPlantFoodShine::StaticNew() */

EffectAnimRig_StarPlantFoodShine * EffectAnimRig_StarPlantFoodShine::StaticNew(void)

{
  EffectAnimRig_StarPlantFoodShine *this;
  
  this = ::operator_new(0x218);
  EffectAnimRig_StarPlantFoodShine(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_StarPlantFoodShine::StaticClassInit() */

void EffectAnimRig_StarPlantFoodShine::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectAnimRig_StarPlantFoodShine");
    (*pcVar2)(plVar1,asStack_10,FUN_03cb7514,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_StarPlantFoodShine::StaticGetClass() */

long * EffectAnimRig_StarPlantFoodShine::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_StarPlantFoodShine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_StarPlantFoodShine::GetClass() const */

long * EffectAnimRig_StarPlantFoodShine::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_StarPlantFoodShine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

