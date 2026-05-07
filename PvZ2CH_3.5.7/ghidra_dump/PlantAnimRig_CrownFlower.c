// Class: PlantAnimRig_CrownFlower


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_CrownFlower::getIdleAnimationName() */

void PlantAnimRig_CrownFlower::getIdleAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3b8) == '\0') {
    __s = "idle";
  }
  else {
    __s = "idle_he";
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
/* PlantAnimRig_CrownFlower::getPlantFoodMainAnimName() */

void PlantAnimRig_CrownFlower::getPlantFoodMainAnimName(void)

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
    __s = "avatar";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_CrownFlower::~PlantAnimRig_CrownFlower() */

void __thiscall PlantAnimRig_CrownFlower::~PlantAnimRig_CrownFlower(PlantAnimRig_CrownFlower *this)

{
  *(undefined ***)this = &PTR_GetClass_06730710;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_CrownFlower_06730978;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_CrownFlower::~PlantAnimRig_CrownFlower() */

void __thiscall PlantAnimRig_CrownFlower::~PlantAnimRig_CrownFlower(PlantAnimRig_CrownFlower *this)

{
  ~PlantAnimRig_CrownFlower(this + -0x10);
  return;
}


/* PlantAnimRig_CrownFlower::~PlantAnimRig_CrownFlower() */

void __thiscall PlantAnimRig_CrownFlower::~PlantAnimRig_CrownFlower(PlantAnimRig_CrownFlower *this)

{
  ~PlantAnimRig_CrownFlower(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_CrownFlower::~PlantAnimRig_CrownFlower() */

void __thiscall PlantAnimRig_CrownFlower::~PlantAnimRig_CrownFlower(PlantAnimRig_CrownFlower *this)

{
  ~PlantAnimRig_CrownFlower(this + -0x10);
  return;
}


/* PlantAnimRig_CrownFlower::PlantAnimRig_CrownFlower() */

void __thiscall PlantAnimRig_CrownFlower::PlantAnimRig_CrownFlower(PlantAnimRig_CrownFlower *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_CrownFlower)0x0;
  *(undefined ***)this = &PTR_GetClass_06730710;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_CrownFlower_06730978;
  return;
}


/* PlantAnimRig_CrownFlower::StaticNew() */

PlantAnimRig_CrownFlower * PlantAnimRig_CrownFlower::StaticNew(void)

{
  PlantAnimRig_CrownFlower *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_CrownFlower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_CrownFlower::StaticClassInit() */

void PlantAnimRig_CrownFlower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_CrownFlower");
    (*pcVar2)(plVar1,asStack_10,FUN_03b3a844,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_CrownFlower::StaticGetClass() */

long * PlantAnimRig_CrownFlower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_CrownFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_CrownFlower::GetClass() const */

long * PlantAnimRig_CrownFlower::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_CrownFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

