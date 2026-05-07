// Class: GridItemBoardEntityConditionTargetProps


/* GridItemBoardEntityConditionTargetProps::GridItemBoardEntityConditionTargetProps() */

void __thiscall
GridItemBoardEntityConditionTargetProps::GridItemBoardEntityConditionTargetProps
          (GridItemBoardEntityConditionTargetProps *this)

{
  GridItemBreakableTargetProps::GridItemBreakableTargetProps((GridItemBreakableTargetProps *)this);
  *(undefined ***)this = &PTR_GetClass_06785bf0;
  return;
}


/* GridItemBoardEntityConditionTargetProps::~GridItemBoardEntityConditionTargetProps() */

void __thiscall
GridItemBoardEntityConditionTargetProps::~GridItemBoardEntityConditionTargetProps
          (GridItemBoardEntityConditionTargetProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06785bf0;
  GridItemBreakableTargetProps::~GridItemBreakableTargetProps((GridItemBreakableTargetProps *)this);
  return;
}


/* GridItemBoardEntityConditionTargetProps::~GridItemBoardEntityConditionTargetProps() */

void __thiscall
GridItemBoardEntityConditionTargetProps::~GridItemBoardEntityConditionTargetProps
          (GridItemBoardEntityConditionTargetProps *this)

{
  ~GridItemBoardEntityConditionTargetProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBoardEntityConditionTargetProps::StaticClassInit() */

void GridItemBoardEntityConditionTargetProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemBoardEntityConditionTargetProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03e20b98,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBoardEntityConditionTargetProps::StaticGetClass() */

long * GridItemBoardEntityConditionTargetProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemBoardEntityConditionTargetProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemBoardEntityConditionTargetProps::GetClass() const */

long * GridItemBoardEntityConditionTargetProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemBoardEntityConditionTargetProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemBoardEntityConditionTargetProps::StaticNew() */

GridItemBoardEntityConditionTargetProps * GridItemBoardEntityConditionTargetProps::StaticNew(void)

{
  GridItemBoardEntityConditionTargetProps *this;
  
  this = ::operator_new(0x138);
  GridItemBoardEntityConditionTargetProps(this);
  return this;
}

