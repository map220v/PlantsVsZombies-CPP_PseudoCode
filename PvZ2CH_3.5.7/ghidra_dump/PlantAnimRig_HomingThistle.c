// Class: PlantAnimRig_HomingThistle


/* PlantAnimRig_HomingThistle::~PlantAnimRig_HomingThistle() */

void __thiscall
PlantAnimRig_HomingThistle::~PlantAnimRig_HomingThistle(PlantAnimRig_HomingThistle *this)

{
  *(undefined ***)this = &PTR_GetClass_06804150;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_HomingThistle_068043b8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_HomingThistle::~PlantAnimRig_HomingThistle() */

void __thiscall
PlantAnimRig_HomingThistle::~PlantAnimRig_HomingThistle(PlantAnimRig_HomingThistle *this)

{
  ~PlantAnimRig_HomingThistle(this + -0x10);
  return;
}


/* PlantAnimRig_HomingThistle::~PlantAnimRig_HomingThistle() */

void __thiscall
PlantAnimRig_HomingThistle::~PlantAnimRig_HomingThistle(PlantAnimRig_HomingThistle *this)

{
  ~PlantAnimRig_HomingThistle(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_HomingThistle::~PlantAnimRig_HomingThistle() */

void __thiscall
PlantAnimRig_HomingThistle::~PlantAnimRig_HomingThistle(PlantAnimRig_HomingThistle *this)

{
  ~PlantAnimRig_HomingThistle(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HomingThistle::StaticClassInit() */

void PlantAnimRig_HomingThistle::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_HomingThistle");
    (*pcVar2)(plVar1,asStack_10,FUN_041e49fc,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_HomingThistle::StaticGetClass() */

long * PlantAnimRig_HomingThistle::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_HomingThistle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_HomingThistle::GetClass() const */

long * PlantAnimRig_HomingThistle::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_HomingThistle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_HomingThistle::PlantAnimRig_HomingThistle() */

void __thiscall
PlantAnimRig_HomingThistle::PlantAnimRig_HomingThistle(PlantAnimRig_HomingThistle *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06804150;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_HomingThistle_068043b8;
  return;
}


/* PlantAnimRig_HomingThistle::StaticNew() */

PlantAnimRig_HomingThistle * PlantAnimRig_HomingThistle::StaticNew(void)

{
  PlantAnimRig_HomingThistle *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_HomingThistle(this);
  return this;
}

