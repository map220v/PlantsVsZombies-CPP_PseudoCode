// Class: PlantAnimRig_AppleMortar


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_AppleMortar::getIdleAnimationName() */

void PlantAnimRig_AppleMortar::getIdleAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x224) == 5) {
    __s = "idle_Golden";
  }
  else {
    __s = "idle";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_AppleMortar::~PlantAnimRig_AppleMortar() */

void __thiscall PlantAnimRig_AppleMortar::~PlantAnimRig_AppleMortar(PlantAnimRig_AppleMortar *this)

{
  *(undefined ***)this = &PTR_GetClass_067fd080;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_AppleMortar_067fd2e8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_AppleMortar::~PlantAnimRig_AppleMortar() */

void __thiscall PlantAnimRig_AppleMortar::~PlantAnimRig_AppleMortar(PlantAnimRig_AppleMortar *this)

{
  ~PlantAnimRig_AppleMortar(this + -0x10);
  return;
}


/* PlantAnimRig_AppleMortar::~PlantAnimRig_AppleMortar() */

void __thiscall PlantAnimRig_AppleMortar::~PlantAnimRig_AppleMortar(PlantAnimRig_AppleMortar *this)

{
  ~PlantAnimRig_AppleMortar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_AppleMortar::~PlantAnimRig_AppleMortar() */

void __thiscall PlantAnimRig_AppleMortar::~PlantAnimRig_AppleMortar(PlantAnimRig_AppleMortar *this)

{
  ~PlantAnimRig_AppleMortar(this + -0x10);
  return;
}


/* PlantAnimRig_AppleMortar::PlantAnimRig_AppleMortar() */

void __thiscall PlantAnimRig_AppleMortar::PlantAnimRig_AppleMortar(PlantAnimRig_AppleMortar *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067fd080;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_AppleMortar_067fd2e8;
  return;
}


/* PlantAnimRig_AppleMortar::StaticNew() */

PlantAnimRig_AppleMortar * PlantAnimRig_AppleMortar::StaticNew(void)

{
  PlantAnimRig_AppleMortar *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_AppleMortar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_AppleMortar::StaticClassInit() */

void PlantAnimRig_AppleMortar::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_AppleMortar");
    (*pcVar2)(plVar1,asStack_10,FUN_04197018,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_AppleMortar::StaticGetClass() */

long * PlantAnimRig_AppleMortar::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_AppleMortar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_AppleMortar::GetClass() const */

long * PlantAnimRig_AppleMortar::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_AppleMortar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

