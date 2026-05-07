// Class: GridItemSchoolBusProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBusProps::StaticClassInit() */

void GridItemSchoolBusProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemSchoolBusProps");
    (*pcVar2)(plVar1,asStack_10,FUN_033e1d08,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSchoolBusProps::StaticGetClass() */

long * GridItemSchoolBusProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSchoolBusProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSchoolBusProps::GetClass() const */

long * GridItemSchoolBusProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSchoolBusProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSchoolBusProps::GridItemSchoolBusProps() */

void __thiscall GridItemSchoolBusProps::GridItemSchoolBusProps(GridItemSchoolBusProps *this)

{
  GridItemBoardEntityConditionTargetProps::GridItemBoardEntityConditionTargetProps
            ((GridItemBoardEntityConditionTargetProps *)this);
  *(undefined ***)this = &PTR_GetClass_0661b5e0;
  return;
}


/* GridItemSchoolBusProps::StaticNew() */

GridItemSchoolBusProps * GridItemSchoolBusProps::StaticNew(void)

{
  GridItemSchoolBusProps *this;
  
  this = ::operator_new(0x138);
  GridItemSchoolBusProps(this);
  return this;
}


/* GridItemSchoolBusProps::~GridItemSchoolBusProps() */

void __thiscall GridItemSchoolBusProps::~GridItemSchoolBusProps(GridItemSchoolBusProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0661b5e0;
  GridItemBoardEntityConditionTargetProps::~GridItemBoardEntityConditionTargetProps
            ((GridItemBoardEntityConditionTargetProps *)this);
  return;
}


/* GridItemSchoolBusProps::~GridItemSchoolBusProps() */

void __thiscall GridItemSchoolBusProps::~GridItemSchoolBusProps(GridItemSchoolBusProps *this)

{
  ~GridItemSchoolBusProps(this);
  AK::FreeHook(this);
  return;
}

