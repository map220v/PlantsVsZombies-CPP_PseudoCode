// Class: PlantAnimRig_Bromelblade


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Bromelblade::getPlantFoodMainAnimName() */

void PlantAnimRig_Bromelblade::getPlantFoodMainAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3b8) == '\0') {
    __s = "plantfood";
  }
  else {
    __s = "plantfood2";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Bromelblade::~PlantAnimRig_Bromelblade() */

void __thiscall PlantAnimRig_Bromelblade::~PlantAnimRig_Bromelblade(PlantAnimRig_Bromelblade *this)

{
  *(undefined ***)this = &PTR_GetClass_06820290;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Bromelblade_068204f8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Bromelblade::~PlantAnimRig_Bromelblade() */

void __thiscall PlantAnimRig_Bromelblade::~PlantAnimRig_Bromelblade(PlantAnimRig_Bromelblade *this)

{
  ~PlantAnimRig_Bromelblade(this + -0x10);
  return;
}


/* PlantAnimRig_Bromelblade::~PlantAnimRig_Bromelblade() */

void __thiscall PlantAnimRig_Bromelblade::~PlantAnimRig_Bromelblade(PlantAnimRig_Bromelblade *this)

{
  ~PlantAnimRig_Bromelblade(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Bromelblade::~PlantAnimRig_Bromelblade() */

void __thiscall PlantAnimRig_Bromelblade::~PlantAnimRig_Bromelblade(PlantAnimRig_Bromelblade *this)

{
  ~PlantAnimRig_Bromelblade(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Bromelblade::StaticClassInit() */

void PlantAnimRig_Bromelblade::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Bromelblade");
    (*pcVar2)(plVar1,asStack_10,FUN_0426ed7c,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Bromelblade::StaticGetClass() */

long * PlantAnimRig_Bromelblade::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Bromelblade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Bromelblade::GetClass() const */

long * PlantAnimRig_Bromelblade::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Bromelblade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Bromelblade::PlantAnimRig_Bromelblade() */

void __thiscall PlantAnimRig_Bromelblade::PlantAnimRig_Bromelblade(PlantAnimRig_Bromelblade *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_Bromelblade)0x0;
  *(undefined ***)this = &PTR_GetClass_06820290;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Bromelblade_068204f8;
  return;
}


/* PlantAnimRig_Bromelblade::StaticNew() */

PlantAnimRig_Bromelblade * PlantAnimRig_Bromelblade::StaticNew(void)

{
  PlantAnimRig_Bromelblade *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Bromelblade(this);
  return this;
}

