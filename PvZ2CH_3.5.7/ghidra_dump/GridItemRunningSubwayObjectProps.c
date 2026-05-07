// Class: GridItemRunningSubwayObjectProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRunningSubwayObjectProps::StaticClassInit() */

void GridItemRunningSubwayObjectProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemRunningSubwayObjectProps");
    (*pcVar2)(plVar1,asStack_10,FUN_033eae18,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRunningSubwayObjectProps::StaticGetClass() */

long * GridItemRunningSubwayObjectProps::StaticGetClass(void)

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
  uVar2 = GridItemBreakableTargetProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRunningSubwayObjectProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRunningSubwayObjectProps::GetClass() const */

long * GridItemRunningSubwayObjectProps::GetClass(void)

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
  uVar2 = GridItemBreakableTargetProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRunningSubwayObjectProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRunningSubwayObjectProps::GridItemRunningSubwayObjectProps() */

void __thiscall
GridItemRunningSubwayObjectProps::GridItemRunningSubwayObjectProps
          (GridItemRunningSubwayObjectProps *this)

{
  GridItemBreakableTargetProps::GridItemBreakableTargetProps((GridItemBreakableTargetProps *)this);
  *(undefined ***)this = &PTR_GetClass_0661c390;
  return;
}


/* GridItemRunningSubwayObjectProps::StaticNew() */

GridItemRunningSubwayObjectProps * GridItemRunningSubwayObjectProps::StaticNew(void)

{
  GridItemRunningSubwayObjectProps *this;
  
  this = ::operator_new(0x138);
  GridItemRunningSubwayObjectProps(this);
  return this;
}


/* GridItemRunningSubwayObjectProps::~GridItemRunningSubwayObjectProps() */

void __thiscall
GridItemRunningSubwayObjectProps::~GridItemRunningSubwayObjectProps
          (GridItemRunningSubwayObjectProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0661c390;
  GridItemBreakableTargetProps::~GridItemBreakableTargetProps((GridItemBreakableTargetProps *)this);
  return;
}


/* GridItemRunningSubwayObjectProps::~GridItemRunningSubwayObjectProps() */

void __thiscall
GridItemRunningSubwayObjectProps::~GridItemRunningSubwayObjectProps
          (GridItemRunningSubwayObjectProps *this)

{
  ~GridItemRunningSubwayObjectProps(this);
  AK::FreeHook(this);
  return;
}

