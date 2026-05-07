// Class: GridItemRunningSubwayCoinAnimRig


/* GridItemRunningSubwayCoinAnimRig::~GridItemRunningSubwayCoinAnimRig() */

void __thiscall
GridItemRunningSubwayCoinAnimRig::~GridItemRunningSubwayCoinAnimRig
          (GridItemRunningSubwayCoinAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_0661cc10;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRunningSubwayCoinAnimRig_0661cd38;
  GridItemRunningSubwayObjectAnimRig::~GridItemRunningSubwayObjectAnimRig
            ((GridItemRunningSubwayObjectAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemRunningSubwayCoinAnimRig::~GridItemRunningSubwayCoinAnimRig() */

void __thiscall
GridItemRunningSubwayCoinAnimRig::~GridItemRunningSubwayCoinAnimRig
          (GridItemRunningSubwayCoinAnimRig *this)

{
  ~GridItemRunningSubwayCoinAnimRig(this + -0x10);
  return;
}


/* GridItemRunningSubwayCoinAnimRig::~GridItemRunningSubwayCoinAnimRig() */

void __thiscall
GridItemRunningSubwayCoinAnimRig::~GridItemRunningSubwayCoinAnimRig
          (GridItemRunningSubwayCoinAnimRig *this)

{
  ~GridItemRunningSubwayCoinAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemRunningSubwayCoinAnimRig::~GridItemRunningSubwayCoinAnimRig() */

void __thiscall
GridItemRunningSubwayCoinAnimRig::~GridItemRunningSubwayCoinAnimRig
          (GridItemRunningSubwayCoinAnimRig *this)

{
  ~GridItemRunningSubwayCoinAnimRig(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRunningSubwayCoinAnimRig::StaticClassInit() */

void GridItemRunningSubwayCoinAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemRunningSubwayCoinAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_033eb724,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRunningSubwayCoinAnimRig::StaticGetClass() */

long * GridItemRunningSubwayCoinAnimRig::StaticGetClass(void)

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
  uVar2 = GridItemRunningSubwayObjectAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRunningSubwayCoinAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRunningSubwayCoinAnimRig::GetClass() const */

long * GridItemRunningSubwayCoinAnimRig::GetClass(void)

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
  uVar2 = GridItemRunningSubwayObjectAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRunningSubwayCoinAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRunningSubwayCoinAnimRig::GridItemRunningSubwayCoinAnimRig() */

void __thiscall
GridItemRunningSubwayCoinAnimRig::GridItemRunningSubwayCoinAnimRig
          (GridItemRunningSubwayCoinAnimRig *this)

{
  GridItemRunningSubwayObjectAnimRig::GridItemRunningSubwayObjectAnimRig
            ((GridItemRunningSubwayObjectAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0661cc10;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRunningSubwayCoinAnimRig_0661cd38;
  return;
}


/* GridItemRunningSubwayCoinAnimRig::StaticNew() */

GridItemRunningSubwayCoinAnimRig * GridItemRunningSubwayCoinAnimRig::StaticNew(void)

{
  GridItemRunningSubwayCoinAnimRig *this;
  
  this = ::operator_new(0x210);
  GridItemRunningSubwayCoinAnimRig(this);
  return this;
}

