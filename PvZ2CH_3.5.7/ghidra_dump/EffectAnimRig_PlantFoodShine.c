// Class: EffectAnimRig_PlantFoodShine


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_PlantFoodShine::PlayPlantFoodShineStart() */

void __thiscall
EffectAnimRig_PlantFoodShine::PlayPlantFoodShineStart(EffectAnimRig_PlantFoodShine *this)

{
  long lVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"plantfood_on");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x210) = 1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_PlantFoodShine::PlayPlantFoodShineEnd() */

void __thiscall
EffectAnimRig_PlantFoodShine::PlayPlantFoodShineEnd(EffectAnimRig_PlantFoodShine *this)

{
  long lVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"plantfood_off");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x210) = 3;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_PlantFoodShine::playPlantFoodShineLoop() */

void __thiscall
EffectAnimRig_PlantFoodShine::playPlantFoodShineLoop(EffectAnimRig_PlantFoodShine *this)

{
  long lVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"plantfood");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x210) = 2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* EffectAnimRig_PlantFoodShine::onAnimStopped() */

void __thiscall EffectAnimRig_PlantFoodShine::onAnimStopped(EffectAnimRig_PlantFoodShine *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x210);
  if (iVar1 == 1) {
    playPlantFoodShineLoop(this);
    return;
  }
  if ((iVar1 != 0) && (iVar1 != 3)) {
    return;
  }
  *(undefined4 *)(this + 0x210) = 0;
  return;
}


/* EffectAnimRig_PlantFoodShine::~EffectAnimRig_PlantFoodShine() */

void __thiscall
EffectAnimRig_PlantFoodShine::~EffectAnimRig_PlantFoodShine(EffectAnimRig_PlantFoodShine *this)

{
  *(undefined ***)this = &PTR_GetClass_0675dc30;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_PlantFoodShine_0675dd50;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to EffectAnimRig_PlantFoodShine::~EffectAnimRig_PlantFoodShine() */

void __thiscall
EffectAnimRig_PlantFoodShine::~EffectAnimRig_PlantFoodShine(EffectAnimRig_PlantFoodShine *this)

{
  ~EffectAnimRig_PlantFoodShine(this + -0x10);
  return;
}


/* EffectAnimRig_PlantFoodShine::~EffectAnimRig_PlantFoodShine() */

void __thiscall
EffectAnimRig_PlantFoodShine::~EffectAnimRig_PlantFoodShine(EffectAnimRig_PlantFoodShine *this)

{
  ~EffectAnimRig_PlantFoodShine(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_PlantFoodShine::~EffectAnimRig_PlantFoodShine() */

void __thiscall
EffectAnimRig_PlantFoodShine::~EffectAnimRig_PlantFoodShine(EffectAnimRig_PlantFoodShine *this)

{
  ~EffectAnimRig_PlantFoodShine(this + -0x10);
  return;
}


/* EffectAnimRig_PlantFoodShine::EffectAnimRig_PlantFoodShine() */

void __thiscall
EffectAnimRig_PlantFoodShine::EffectAnimRig_PlantFoodShine(EffectAnimRig_PlantFoodShine *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0675dc30;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_PlantFoodShine_0675dd50;
  return;
}


/* EffectAnimRig_PlantFoodShine::StaticNew() */

EffectAnimRig_PlantFoodShine * EffectAnimRig_PlantFoodShine::StaticNew(void)

{
  EffectAnimRig_PlantFoodShine *this;
  
  this = ::operator_new(0x218);
  EffectAnimRig_PlantFoodShine(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_PlantFoodShine::StaticClassInit() */

void EffectAnimRig_PlantFoodShine::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectAnimRig_PlantFoodShine");
    (*pcVar2)(plVar1,asStack_10,FUN_03cbac14,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_PlantFoodShine::StaticGetClass() */

long * EffectAnimRig_PlantFoodShine::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_PlantFoodShine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_PlantFoodShine::GetClass() const */

long * EffectAnimRig_PlantFoodShine::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_PlantFoodShine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

