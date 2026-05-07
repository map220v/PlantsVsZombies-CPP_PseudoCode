// Class: GridItemSteamTrainProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSteamTrainProps::StaticClassInit() */

void GridItemSteamTrainProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemSteamTrainProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03c41ac0,0x150,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSteamTrainProps::StaticGetClass() */

long * GridItemSteamTrainProps::StaticGetClass(void)

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
  uVar2 = GridItemBoardEntityConditionTargetProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSteamTrainProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSteamTrainProps::GetClass() const */

long * GridItemSteamTrainProps::GetClass(void)

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
  uVar2 = GridItemBoardEntityConditionTargetProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSteamTrainProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSteamTrainProps::GridItemSteamTrainProps() */

void __thiscall GridItemSteamTrainProps::GridItemSteamTrainProps(GridItemSteamTrainProps *this)

{
  GridItemBoardEntityConditionTargetProps::GridItemBoardEntityConditionTargetProps
            ((GridItemBoardEntityConditionTargetProps *)this);
  this[0x148] = (GridItemSteamTrainProps)0x2;
  *(undefined ***)this = &PTR_GetClass_067527a0;
  *(undefined4 *)(this + 0x138) = 0x3f800000;
  *(undefined4 *)(this + 0x13c) = 0x3f800000;
  *(undefined4 *)(this + 0x144) = 0x3f800000;
  *(undefined4 *)(this + 0x140) = 0x3e4ccccd;
  return;
}


/* GridItemSteamTrainProps::StaticNew() */

GridItemSteamTrainProps * GridItemSteamTrainProps::StaticNew(void)

{
  GridItemSteamTrainProps *this;
  
  this = ::operator_new(0x150);
  GridItemSteamTrainProps(this);
  return this;
}


/* GridItemSteamTrainProps::~GridItemSteamTrainProps() */

void __thiscall GridItemSteamTrainProps::~GridItemSteamTrainProps(GridItemSteamTrainProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067527a0;
  GridItemBoardEntityConditionTargetProps::~GridItemBoardEntityConditionTargetProps
            ((GridItemBoardEntityConditionTargetProps *)this);
  return;
}


/* GridItemSteamTrainProps::~GridItemSteamTrainProps() */

void __thiscall GridItemSteamTrainProps::~GridItemSteamTrainProps(GridItemSteamTrainProps *this)

{
  ~GridItemSteamTrainProps(this);
  AK::FreeHook(this);
  return;
}

