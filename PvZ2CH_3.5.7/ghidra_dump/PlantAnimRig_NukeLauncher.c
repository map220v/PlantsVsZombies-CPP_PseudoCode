// Class: PlantAnimRig_NukeLauncher


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_NukeLauncher::getPlantFoodMainAnimName() */

void PlantAnimRig_NukeLauncher::getPlantFoodMainAnimName(void)

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
    __s = "plantfood_avatar";
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
/* PlantAnimRig_NukeLauncher::getAttackAnimationName() */

void PlantAnimRig_NukeLauncher::getAttackAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x224) == 5) {
    __s = "special_super";
  }
  else {
    __s = "special";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_NukeLauncher::~PlantAnimRig_NukeLauncher() */

void __thiscall
PlantAnimRig_NukeLauncher::~PlantAnimRig_NukeLauncher(PlantAnimRig_NukeLauncher *this)

{
  *(undefined ***)this = &PTR_GetClass_06815ea0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_NukeLauncher_06816108;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_NukeLauncher::~PlantAnimRig_NukeLauncher() */

void __thiscall
PlantAnimRig_NukeLauncher::~PlantAnimRig_NukeLauncher(PlantAnimRig_NukeLauncher *this)

{
  ~PlantAnimRig_NukeLauncher(this + -0x10);
  return;
}


/* PlantAnimRig_NukeLauncher::~PlantAnimRig_NukeLauncher() */

void __thiscall
PlantAnimRig_NukeLauncher::~PlantAnimRig_NukeLauncher(PlantAnimRig_NukeLauncher *this)

{
  ~PlantAnimRig_NukeLauncher(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_NukeLauncher::~PlantAnimRig_NukeLauncher() */

void __thiscall
PlantAnimRig_NukeLauncher::~PlantAnimRig_NukeLauncher(PlantAnimRig_NukeLauncher *this)

{
  ~PlantAnimRig_NukeLauncher(this + -0x10);
  return;
}


/* PlantAnimRig_NukeLauncher::PlantAnimRig_NukeLauncher() */

void __thiscall
PlantAnimRig_NukeLauncher::PlantAnimRig_NukeLauncher(PlantAnimRig_NukeLauncher *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06815ea0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_NukeLauncher_06816108;
  return;
}


/* PlantAnimRig_NukeLauncher::StaticNew() */

PlantAnimRig_NukeLauncher * PlantAnimRig_NukeLauncher::StaticNew(void)

{
  PlantAnimRig_NukeLauncher *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_NukeLauncher(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_NukeLauncher::StaticClassInit() */

void PlantAnimRig_NukeLauncher::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_NukeLauncher");
    (*pcVar2)(plVar1,asStack_10,FUN_04242834,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_NukeLauncher::StaticGetClass() */

long * PlantAnimRig_NukeLauncher::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_NukeLauncher",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_NukeLauncher::GetClass() const */

long * PlantAnimRig_NukeLauncher::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_NukeLauncher",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

