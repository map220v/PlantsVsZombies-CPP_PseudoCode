// Class: GridItemHeianBoxSunAnimRig


/* GridItemHeianBoxSunAnimRig::~GridItemHeianBoxSunAnimRig() */

void __thiscall
GridItemHeianBoxSunAnimRig::~GridItemHeianBoxSunAnimRig(GridItemHeianBoxSunAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_06766b20;
  *(undefined ***)(this + 0x10) = &PTR__GridItemHeianBoxSunAnimRig_06766c60;
  GridItemHeianBoxAnimRig::~GridItemHeianBoxAnimRig((GridItemHeianBoxAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemHeianBoxSunAnimRig::~GridItemHeianBoxSunAnimRig() */

void __thiscall
GridItemHeianBoxSunAnimRig::~GridItemHeianBoxSunAnimRig(GridItemHeianBoxSunAnimRig *this)

{
  ~GridItemHeianBoxSunAnimRig(this + -0x10);
  return;
}


/* GridItemHeianBoxSunAnimRig::~GridItemHeianBoxSunAnimRig() */

void __thiscall
GridItemHeianBoxSunAnimRig::~GridItemHeianBoxSunAnimRig(GridItemHeianBoxSunAnimRig *this)

{
  ~GridItemHeianBoxSunAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemHeianBoxSunAnimRig::~GridItemHeianBoxSunAnimRig() */

void __thiscall
GridItemHeianBoxSunAnimRig::~GridItemHeianBoxSunAnimRig(GridItemHeianBoxSunAnimRig *this)

{
  ~GridItemHeianBoxSunAnimRig(this + -0x10);
  return;
}


/* GridItemHeianBoxSunAnimRig::GridItemHeianBoxSunAnimRig() */

void __thiscall
GridItemHeianBoxSunAnimRig::GridItemHeianBoxSunAnimRig(GridItemHeianBoxSunAnimRig *this)

{
  GridItemHeianBoxAnimRig::GridItemHeianBoxAnimRig((GridItemHeianBoxAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06766b20;
  *(undefined ***)(this + 0x10) = &PTR__GridItemHeianBoxSunAnimRig_06766c60;
  return;
}


/* GridItemHeianBoxSunAnimRig::StaticNew() */

GridItemHeianBoxSunAnimRig * GridItemHeianBoxSunAnimRig::StaticNew(void)

{
  GridItemHeianBoxSunAnimRig *this;
  
  this = ::operator_new(0x210);
  GridItemHeianBoxSunAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxSunAnimRig::StaticClassInit() */

void GridItemHeianBoxSunAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemHeianBoxSunAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_03d28dcc,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHeianBoxSunAnimRig::StaticGetClass() */

long * GridItemHeianBoxSunAnimRig::StaticGetClass(void)

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
  uVar2 = GridItemHeianBoxAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHeianBoxSunAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHeianBoxSunAnimRig::GetClass() const */

long * GridItemHeianBoxSunAnimRig::GetClass(void)

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
  uVar2 = GridItemHeianBoxAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHeianBoxSunAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

