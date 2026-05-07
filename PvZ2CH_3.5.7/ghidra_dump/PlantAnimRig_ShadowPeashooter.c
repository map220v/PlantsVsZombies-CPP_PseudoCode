// Class: PlantAnimRig_ShadowPeashooter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ShadowPeashooter::getAttackAnimationName() */

void PlantAnimRig_ShadowPeashooter::getAttackAnimationName(void)

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
    __s = "attack2";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_ShadowPeashooter::~PlantAnimRig_ShadowPeashooter() */

void __thiscall
PlantAnimRig_ShadowPeashooter::~PlantAnimRig_ShadowPeashooter(PlantAnimRig_ShadowPeashooter *this)

{
  *(undefined ***)this = &PTR_GetClass_0673a300;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ShadowPeashooter_0673a568;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ShadowPeashooter::~PlantAnimRig_ShadowPeashooter() */

void __thiscall
PlantAnimRig_ShadowPeashooter::~PlantAnimRig_ShadowPeashooter(PlantAnimRig_ShadowPeashooter *this)

{
  ~PlantAnimRig_ShadowPeashooter(this + -0x10);
  return;
}


/* PlantAnimRig_ShadowPeashooter::~PlantAnimRig_ShadowPeashooter() */

void __thiscall
PlantAnimRig_ShadowPeashooter::~PlantAnimRig_ShadowPeashooter(PlantAnimRig_ShadowPeashooter *this)

{
  ~PlantAnimRig_ShadowPeashooter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ShadowPeashooter::~PlantAnimRig_ShadowPeashooter() */

void __thiscall
PlantAnimRig_ShadowPeashooter::~PlantAnimRig_ShadowPeashooter(PlantAnimRig_ShadowPeashooter *this)

{
  ~PlantAnimRig_ShadowPeashooter(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ShadowPeashooter::StaticClassInit() */

void PlantAnimRig_ShadowPeashooter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_ShadowPeashooter");
    (*pcVar2)(plVar1,asStack_10,FUN_03bc5e80,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_ShadowPeashooter::StaticGetClass() */

long * PlantAnimRig_ShadowPeashooter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_ShadowPeashooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_ShadowPeashooter::GetClass() const */

long * PlantAnimRig_ShadowPeashooter::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_ShadowPeashooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_ShadowPeashooter::PlantAnimRig_ShadowPeashooter() */

void __thiscall
PlantAnimRig_ShadowPeashooter::PlantAnimRig_ShadowPeashooter(PlantAnimRig_ShadowPeashooter *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_ShadowPeashooter)0x0;
  *(undefined ***)this = &PTR_GetClass_0673a300;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ShadowPeashooter_0673a568;
  return;
}


/* PlantAnimRig_ShadowPeashooter::StaticNew() */

PlantAnimRig_ShadowPeashooter * PlantAnimRig_ShadowPeashooter::StaticNew(void)

{
  PlantAnimRig_ShadowPeashooter *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_ShadowPeashooter(this);
  return this;
}

