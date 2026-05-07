// Class: PlantAnimRig_NarcissusShooter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_NarcissusShooter::getPlantFoodMainAnimName() */

void PlantAnimRig_NarcissusShooter::getPlantFoodMainAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x220) == '\0') {
    __s = "plantfood01";
  }
  else {
    __s = "plantfood02";
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
/* PlantAnimRig_NarcissusShooter::getIdleAnimationName() */

void PlantAnimRig_NarcissusShooter::getIdleAnimationName(void)

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
    __s = "water";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_NarcissusShooter::~PlantAnimRig_NarcissusShooter() */

void __thiscall
PlantAnimRig_NarcissusShooter::~PlantAnimRig_NarcissusShooter(PlantAnimRig_NarcissusShooter *this)

{
  *(undefined ***)this = &PTR_GetClass_06817dd0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_NarcissusShooter_06818038;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_NarcissusShooter::~PlantAnimRig_NarcissusShooter() */

void __thiscall
PlantAnimRig_NarcissusShooter::~PlantAnimRig_NarcissusShooter(PlantAnimRig_NarcissusShooter *this)

{
  ~PlantAnimRig_NarcissusShooter(this + -0x10);
  return;
}


/* PlantAnimRig_NarcissusShooter::~PlantAnimRig_NarcissusShooter() */

void __thiscall
PlantAnimRig_NarcissusShooter::~PlantAnimRig_NarcissusShooter(PlantAnimRig_NarcissusShooter *this)

{
  ~PlantAnimRig_NarcissusShooter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_NarcissusShooter::~PlantAnimRig_NarcissusShooter() */

void __thiscall
PlantAnimRig_NarcissusShooter::~PlantAnimRig_NarcissusShooter(PlantAnimRig_NarcissusShooter *this)

{
  ~PlantAnimRig_NarcissusShooter(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_NarcissusShooter::StaticClassInit() */

void PlantAnimRig_NarcissusShooter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_NarcissusShooter");
    (*pcVar2)(plVar1,asStack_10,FUN_0424da94,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_NarcissusShooter::StaticGetClass() */

long * PlantAnimRig_NarcissusShooter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_NarcissusShooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_NarcissusShooter::GetClass() const */

long * PlantAnimRig_NarcissusShooter::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_NarcissusShooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_NarcissusShooter::PlantAnimRig_NarcissusShooter() */

void __thiscall
PlantAnimRig_NarcissusShooter::PlantAnimRig_NarcissusShooter(PlantAnimRig_NarcissusShooter *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_NarcissusShooter)0x0;
  *(undefined ***)this = &PTR_GetClass_06817dd0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_NarcissusShooter_06818038;
  return;
}


/* PlantAnimRig_NarcissusShooter::StaticNew() */

PlantAnimRig_NarcissusShooter * PlantAnimRig_NarcissusShooter::StaticNew(void)

{
  PlantAnimRig_NarcissusShooter *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_NarcissusShooter(this);
  return this;
}


/* PlantAnimRig_NarcissusShooter::setIsInWater(bool) */

void __thiscall
PlantAnimRig_NarcissusShooter::setIsInWater(PlantAnimRig_NarcissusShooter *this,bool param_1)

{
  if (this[0x3b8] != (PlantAnimRig_NarcissusShooter)param_1) {
    this[0x3b8] = (PlantAnimRig_NarcissusShooter)param_1;
  }
  return;
}

