// Class: PlantAnimRig_Stunion


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Stunion::getPlantFoodOnAnimName() */

void PlantAnimRig_Stunion::getPlantFoodOnAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3b8) == '\0') {
    __s = "plantfood_on";
  }
  else {
    __s = "plantfood_on1";
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
/* PlantAnimRig_Stunion::getPlantFoodMainAnimName() */

void PlantAnimRig_Stunion::getPlantFoodMainAnimName(void)

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
    __s = "plantfood1";
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
/* PlantAnimRig_Stunion::getAttackAnimationName() */

void PlantAnimRig_Stunion::getAttackAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3b8) == '\0') {
    __s = "attack";
  }
  else {
    __s = "attack1";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Stunion::~PlantAnimRig_Stunion() */

void __thiscall PlantAnimRig_Stunion::~PlantAnimRig_Stunion(PlantAnimRig_Stunion *this)

{
  *(undefined ***)this = &PTR_GetClass_067d5cd0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Stunion_067d5f38;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Stunion::~PlantAnimRig_Stunion() */

void __thiscall PlantAnimRig_Stunion::~PlantAnimRig_Stunion(PlantAnimRig_Stunion *this)

{
  ~PlantAnimRig_Stunion(this + -0x10);
  return;
}


/* PlantAnimRig_Stunion::~PlantAnimRig_Stunion() */

void __thiscall PlantAnimRig_Stunion::~PlantAnimRig_Stunion(PlantAnimRig_Stunion *this)

{
  ~PlantAnimRig_Stunion(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Stunion::~PlantAnimRig_Stunion() */

void __thiscall PlantAnimRig_Stunion::~PlantAnimRig_Stunion(PlantAnimRig_Stunion *this)

{
  ~PlantAnimRig_Stunion(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Stunion::StaticClassInit() */

void PlantAnimRig_Stunion::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Stunion");
    (*pcVar2)(plVar1,asStack_10,FUN_040b7b30,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Stunion::StaticGetClass() */

long * PlantAnimRig_Stunion::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Stunion",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Stunion::GetClass() const */

long * PlantAnimRig_Stunion::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Stunion",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Stunion::PlantAnimRig_Stunion() */

void __thiscall PlantAnimRig_Stunion::PlantAnimRig_Stunion(PlantAnimRig_Stunion *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_Stunion)0x0;
  *(undefined ***)this = &PTR_GetClass_067d5cd0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Stunion_067d5f38;
  return;
}


/* PlantAnimRig_Stunion::StaticNew() */

PlantAnimRig_Stunion * PlantAnimRig_Stunion::StaticNew(void)

{
  PlantAnimRig_Stunion *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Stunion(this);
  return this;
}

