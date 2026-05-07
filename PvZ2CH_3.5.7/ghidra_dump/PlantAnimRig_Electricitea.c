// Class: PlantAnimRig_Electricitea


/* PlantAnimRig_Electricitea::onPopAnimInitialized() */

void __thiscall PlantAnimRig_Electricitea::onPopAnimInitialized(PlantAnimRig_Electricitea *this)

{
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_Electricitea)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Electricitea::getAttackAnimationName() */

void PlantAnimRig_Electricitea::getAttackAnimationName(void)

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
    __s = "attack5";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Electricitea::~PlantAnimRig_Electricitea() */

void __thiscall
PlantAnimRig_Electricitea::~PlantAnimRig_Electricitea(PlantAnimRig_Electricitea *this)

{
  *(undefined ***)this = &PTR_GetClass_06828f60;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Electricitea_068291c8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Electricitea::~PlantAnimRig_Electricitea() */

void __thiscall
PlantAnimRig_Electricitea::~PlantAnimRig_Electricitea(PlantAnimRig_Electricitea *this)

{
  ~PlantAnimRig_Electricitea(this + -0x10);
  return;
}


/* PlantAnimRig_Electricitea::~PlantAnimRig_Electricitea() */

void __thiscall
PlantAnimRig_Electricitea::~PlantAnimRig_Electricitea(PlantAnimRig_Electricitea *this)

{
  ~PlantAnimRig_Electricitea(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Electricitea::~PlantAnimRig_Electricitea() */

void __thiscall
PlantAnimRig_Electricitea::~PlantAnimRig_Electricitea(PlantAnimRig_Electricitea *this)

{
  ~PlantAnimRig_Electricitea(this + -0x10);
  return;
}


/* PlantAnimRig_Electricitea::PlantAnimRig_Electricitea() */

void __thiscall
PlantAnimRig_Electricitea::PlantAnimRig_Electricitea(PlantAnimRig_Electricitea *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06828f60;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Electricitea_068291c8;
  return;
}


/* PlantAnimRig_Electricitea::StaticNew() */

PlantAnimRig_Electricitea * PlantAnimRig_Electricitea::StaticNew(void)

{
  PlantAnimRig_Electricitea *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Electricitea(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Electricitea::StaticClassInit() */

void PlantAnimRig_Electricitea::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Electricitea");
    (*pcVar2)(plVar1,asStack_10,FUN_0429e0a8,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Electricitea::StaticGetClass() */

long * PlantAnimRig_Electricitea::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Electricitea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Electricitea::GetClass() const */

long * PlantAnimRig_Electricitea::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Electricitea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

