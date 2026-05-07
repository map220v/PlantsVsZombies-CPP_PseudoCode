// Class: PlantAnimRig_Nekotail


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Nekotail::getPlantFoodOnAnimName() */

void PlantAnimRig_Nekotail::getPlantFoodOnAnimName(void)

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
/* PlantAnimRig_Nekotail::getPlantFoodMainAnimName() */

void PlantAnimRig_Nekotail::getPlantFoodMainAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x220) == '\0') {
    __s = "plantfood_loop";
  }
  else {
    __s = "plantfood02_loop";
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
/* PlantAnimRig_Nekotail::getPlantFoodOffAnimName() */

void PlantAnimRig_Nekotail::getPlantFoodOffAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x220) == '\0') {
    __s = "plantfood_end";
  }
  else {
    __s = "plantfood02_end";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Nekotail::~PlantAnimRig_Nekotail() */

void __thiscall PlantAnimRig_Nekotail::~PlantAnimRig_Nekotail(PlantAnimRig_Nekotail *this)

{
  *(undefined ***)this = &PTR_GetClass_067ed870;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Nekotail_067edad8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Nekotail::~PlantAnimRig_Nekotail() */

void __thiscall PlantAnimRig_Nekotail::~PlantAnimRig_Nekotail(PlantAnimRig_Nekotail *this)

{
  ~PlantAnimRig_Nekotail(this + -0x10);
  return;
}


/* PlantAnimRig_Nekotail::~PlantAnimRig_Nekotail() */

void __thiscall PlantAnimRig_Nekotail::~PlantAnimRig_Nekotail(PlantAnimRig_Nekotail *this)

{
  ~PlantAnimRig_Nekotail(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Nekotail::~PlantAnimRig_Nekotail() */

void __thiscall PlantAnimRig_Nekotail::~PlantAnimRig_Nekotail(PlantAnimRig_Nekotail *this)

{
  ~PlantAnimRig_Nekotail(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Nekotail::StaticClassInit() */

void PlantAnimRig_Nekotail::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Nekotail");
    (*pcVar2)(plVar1,asStack_10,FUN_0413c76c,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Nekotail::StaticGetClass() */

long * PlantAnimRig_Nekotail::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Nekotail",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Nekotail::GetClass() const */

long * PlantAnimRig_Nekotail::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Nekotail",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Nekotail::getAttackAnimationName() */

void PlantAnimRig_Nekotail::getAttackAnimationName(void)

{
  PlantAnimRig_HollyKnight *in_x0;
  undefined1 *__n;
  string *in_x8;
  undefined1 auStack_10 [8];
  long local_8;
  
  __n = auStack_10;
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"attack");
  nop();
  if (*(int *)(in_x0 + 0x3b8) == 2) {
    std::string::append(in_x8,"attack02",(size_t)__n);
  }
  else if (*(int *)(in_x0 + 0x3b8) == 3) {
    std::string::append(in_x8,"attack05",(size_t)__n);
  }
  PlantAnimRig_HollyKnight::SetNumDamageStates(in_x0,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Nekotail::PlantAnimRig_Nekotail() */

void __thiscall PlantAnimRig_Nekotail::PlantAnimRig_Nekotail(PlantAnimRig_Nekotail *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3b8) = 1;
  *(undefined ***)this = &PTR_GetClass_067ed870;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Nekotail_067edad8;
  PlantAnimRig_HollyKnight::SetNumDamageStates((PlantAnimRig_HollyKnight *)this,1);
  return;
}


/* PlantAnimRig_Nekotail::StaticNew() */

PlantAnimRig_Nekotail * PlantAnimRig_Nekotail::StaticNew(void)

{
  PlantAnimRig_Nekotail *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Nekotail(this);
  return this;
}

