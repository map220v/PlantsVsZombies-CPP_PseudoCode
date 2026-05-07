// Class: PlantAnimRig_EggplantNinja


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_EggplantNinja::getPlantFoodOnAnimName() */

void PlantAnimRig_EggplantNinja::getPlantFoodOnAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x220) == '\0') {
    __s = "plantfood";
  }
  else {
    __s = "plantfood2_1";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_EggplantNinja::getPlantFoodMainAnimName() */

void PlantAnimRig_EggplantNinja::getPlantFoodMainAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x220) == '\0') {
    __s = "plantfood2";
  }
  else {
    __s = "plantfood2_2";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_EggplantNinja::getPlantFoodOffAnimName() */

void PlantAnimRig_EggplantNinja::getPlantFoodOffAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x220) == '\0') {
    __s = "plantfood3";
  }
  else {
    __s = "plantfood2_3";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_EggplantNinja::~PlantAnimRig_EggplantNinja() */

void __thiscall
PlantAnimRig_EggplantNinja::~PlantAnimRig_EggplantNinja(PlantAnimRig_EggplantNinja *this)

{
  *(undefined ***)this = &PTR_GetClass_0674b610;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_EggplantNinja_0674b878;
  std::string::~string((string *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_EggplantNinja::~PlantAnimRig_EggplantNinja() */

void __thiscall
PlantAnimRig_EggplantNinja::~PlantAnimRig_EggplantNinja(PlantAnimRig_EggplantNinja *this)

{
  ~PlantAnimRig_EggplantNinja(this + -0x10);
  return;
}


/* PlantAnimRig_EggplantNinja::~PlantAnimRig_EggplantNinja() */

void __thiscall
PlantAnimRig_EggplantNinja::~PlantAnimRig_EggplantNinja(PlantAnimRig_EggplantNinja *this)

{
  ~PlantAnimRig_EggplantNinja(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_EggplantNinja::~PlantAnimRig_EggplantNinja() */

void __thiscall
PlantAnimRig_EggplantNinja::~PlantAnimRig_EggplantNinja(PlantAnimRig_EggplantNinja *this)

{
  ~PlantAnimRig_EggplantNinja(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_EggplantNinja::PlantAnimRig_EggplantNinja() */

void __thiscall
PlantAnimRig_EggplantNinja::PlantAnimRig_EggplantNinja(PlantAnimRig_EggplantNinja *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0674b610;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_EggplantNinja_0674b878;
  std::string::string((string *)(this + 0x3b8),"idle");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_EggplantNinja::StaticNew() */

PlantAnimRig_EggplantNinja * PlantAnimRig_EggplantNinja::StaticNew(void)

{
  PlantAnimRig_EggplantNinja *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_EggplantNinja(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_EggplantNinja::StaticClassInit() */

void PlantAnimRig_EggplantNinja::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_EggplantNinja");
    (*pcVar2)(plVar1,asStack_10,FUN_03c28fb8,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_EggplantNinja::StaticGetClass() */

long * PlantAnimRig_EggplantNinja::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_EggplantNinja",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_EggplantNinja::GetClass() const */

long * PlantAnimRig_EggplantNinja::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_EggplantNinja",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

