// Class: PlantAnimRig_Cypripedium


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Cypripedium::getIdleAnimationName() */

void PlantAnimRig_Cypripedium::getIdleAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3bc) == '\0') {
    __s = "idle1";
  }
  else {
    __s = "idle2";
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
/* PlantAnimRig_Cypripedium::getAttackAnimationName() */

void PlantAnimRig_Cypripedium::getAttackAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x3b8) == 2) {
    __s = "attack2";
  }
  else if (*(int *)(in_x0 + 0x3b8) == 5) {
    __s = "attack5";
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


/* PlantAnimRig_Cypripedium::~PlantAnimRig_Cypripedium() */

void __thiscall PlantAnimRig_Cypripedium::~PlantAnimRig_Cypripedium(PlantAnimRig_Cypripedium *this)

{
  *(undefined ***)this = &PTR_GetClass_06821650;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Cypripedium_068218b8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Cypripedium::~PlantAnimRig_Cypripedium() */

void __thiscall PlantAnimRig_Cypripedium::~PlantAnimRig_Cypripedium(PlantAnimRig_Cypripedium *this)

{
  ~PlantAnimRig_Cypripedium(this + -0x10);
  return;
}


/* PlantAnimRig_Cypripedium::~PlantAnimRig_Cypripedium() */

void __thiscall PlantAnimRig_Cypripedium::~PlantAnimRig_Cypripedium(PlantAnimRig_Cypripedium *this)

{
  ~PlantAnimRig_Cypripedium(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Cypripedium::~PlantAnimRig_Cypripedium() */

void __thiscall PlantAnimRig_Cypripedium::~PlantAnimRig_Cypripedium(PlantAnimRig_Cypripedium *this)

{
  ~PlantAnimRig_Cypripedium(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Cypripedium::StaticClassInit() */

void PlantAnimRig_Cypripedium::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Cypripedium");
    (*pcVar2)(plVar1,asStack_10,FUN_04273294,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Cypripedium::StaticGetClass() */

long * PlantAnimRig_Cypripedium::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Cypripedium",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Cypripedium::GetClass() const */

long * PlantAnimRig_Cypripedium::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Cypripedium",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Cypripedium::PlantAnimRig_Cypripedium() */

void __thiscall PlantAnimRig_Cypripedium::PlantAnimRig_Cypripedium(PlantAnimRig_Cypripedium *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3b8) = 1;
  this[0x3bc] = (PlantAnimRig_Cypripedium)0x0;
  *(undefined ***)this = &PTR_GetClass_06821650;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Cypripedium_068218b8;
  return;
}


/* PlantAnimRig_Cypripedium::StaticNew() */

PlantAnimRig_Cypripedium * PlantAnimRig_Cypripedium::StaticNew(void)

{
  PlantAnimRig_Cypripedium *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Cypripedium(this);
  return this;
}


/* PlantAnimRig_Cypripedium::SetIsLevel5(bool) */

void __thiscall PlantAnimRig_Cypripedium::SetIsLevel5(PlantAnimRig_Cypripedium *this,bool param_1)

{
  this[0x3bc] = (PlantAnimRig_Cypripedium)param_1;
  return;
}

