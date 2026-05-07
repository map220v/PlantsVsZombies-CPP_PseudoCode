// Class: GridItemMazeStatueProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMazeStatueProps::StaticClassInit() */

void GridItemMazeStatueProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemMazeStatueProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03d1b344,0x140,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMazeStatueProps::StaticGetClass() */

long * GridItemMazeStatueProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemMazeStatueProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMazeStatueProps::GetClass() const */

long * GridItemMazeStatueProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemMazeStatueProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMazeStatueProps::GridItemMazeStatueProps() */

void __thiscall GridItemMazeStatueProps::GridItemMazeStatueProps(GridItemMazeStatueProps *this)

{
  GridItemBreakableTargetProps::GridItemBreakableTargetProps((GridItemBreakableTargetProps *)this);
  *(undefined ***)this = &PTR_GetClass_06764ea0;
  *(undefined4 *)(this + 0x138) = 0;
  return;
}


/* GridItemMazeStatueProps::StaticNew() */

GridItemMazeStatueProps * GridItemMazeStatueProps::StaticNew(void)

{
  GridItemMazeStatueProps *this;
  
  this = ::operator_new(0x140);
  GridItemMazeStatueProps(this);
  return this;
}


/* GridItemMazeStatueProps::~GridItemMazeStatueProps() */

void __thiscall GridItemMazeStatueProps::~GridItemMazeStatueProps(GridItemMazeStatueProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06764ea0;
  GridItemBreakableTargetProps::~GridItemBreakableTargetProps((GridItemBreakableTargetProps *)this);
  return;
}


/* GridItemMazeStatueProps::~GridItemMazeStatueProps() */

void __thiscall GridItemMazeStatueProps::~GridItemMazeStatueProps(GridItemMazeStatueProps *this)

{
  ~GridItemMazeStatueProps(this);
  AK::FreeHook(this);
  return;
}

