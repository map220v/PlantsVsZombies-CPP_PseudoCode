// Class: PlantAnimRig_Acorn


/* PlantAnimRig_Acorn::~PlantAnimRig_Acorn() */

void __thiscall PlantAnimRig_Acorn::~PlantAnimRig_Acorn(PlantAnimRig_Acorn *this)

{
  *(undefined ***)this = &PTR_GetClass_067d7f60;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Acorn_067d81c8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Acorn::~PlantAnimRig_Acorn() */

void __thiscall PlantAnimRig_Acorn::~PlantAnimRig_Acorn(PlantAnimRig_Acorn *this)

{
  ~PlantAnimRig_Acorn(this + -0x10);
  return;
}


/* PlantAnimRig_Acorn::~PlantAnimRig_Acorn() */

void __thiscall PlantAnimRig_Acorn::~PlantAnimRig_Acorn(PlantAnimRig_Acorn *this)

{
  ~PlantAnimRig_Acorn(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Acorn::~PlantAnimRig_Acorn() */

void __thiscall PlantAnimRig_Acorn::~PlantAnimRig_Acorn(PlantAnimRig_Acorn *this)

{
  ~PlantAnimRig_Acorn(this + -0x10);
  return;
}


/* PlantAnimRig_Acorn::PlantAnimRig_Acorn() */

void __thiscall PlantAnimRig_Acorn::PlantAnimRig_Acorn(PlantAnimRig_Acorn *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067d7f60;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Acorn_067d81c8;
  return;
}


/* PlantAnimRig_Acorn::StaticNew() */

PlantAnimRig_Acorn * PlantAnimRig_Acorn::StaticNew(void)

{
  PlantAnimRig_Acorn *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Acorn(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Acorn::StaticClassInit() */

void PlantAnimRig_Acorn::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Acorn");
    (*pcVar2)(plVar1,asStack_10,FUN_040c09c8,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Acorn::StaticGetClass() */

long * PlantAnimRig_Acorn::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Acorn",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Acorn::GetClass() const */

long * PlantAnimRig_Acorn::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Acorn",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Acorn::playPlantFoodMain() */

void __thiscall PlantAnimRig_Acorn::playPlantFoodMain(PlantAnimRig_Acorn *this)

{
  undefined1 uVar1;
  int iVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x220] == (PlantAnimRig_Acorn)0x0) {
    uVar1 = PlantAnimRig::playPlantFoodMain((PlantAnimRig *)this);
  }
  else {
    std::string::string(asStack_40,"plantfood_2");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    uVar1 = iVar2 != -1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

