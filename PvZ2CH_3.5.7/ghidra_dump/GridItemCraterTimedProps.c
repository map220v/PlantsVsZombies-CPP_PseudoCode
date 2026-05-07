// Class: GridItemCraterTimedProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCraterTimedProps::StaticClassInit() */

void GridItemCraterTimedProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCraterTimedProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04992a14,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCraterTimedProps::StaticGetClass() */

long * GridItemCraterTimedProps::StaticGetClass(void)

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
  uVar2 = GridItemCraterProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCraterTimedProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCraterTimedProps::GetClass() const */

long * GridItemCraterTimedProps::GetClass(void)

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
  uVar2 = GridItemCraterProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCraterTimedProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCraterTimedProps::GridItemCraterTimedProps() */

void __thiscall GridItemCraterTimedProps::GridItemCraterTimedProps(GridItemCraterTimedProps *this)

{
  GridItemCraterProps::GridItemCraterProps((GridItemCraterProps *)this);
  *(undefined ***)this = &PTR_GetClass_06919a20;
  return;
}


/* GridItemCraterTimedProps::StaticNew() */

GridItemCraterTimedProps * GridItemCraterTimedProps::StaticNew(void)

{
  GridItemCraterTimedProps *this;
  
  this = ::operator_new(0xd8);
  GridItemCraterTimedProps(this);
  return this;
}


/* GridItemCraterTimedProps::~GridItemCraterTimedProps() */

void __thiscall GridItemCraterTimedProps::~GridItemCraterTimedProps(GridItemCraterTimedProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06919a20;
  GridItemCraterProps::~GridItemCraterProps((GridItemCraterProps *)this);
  return;
}


/* GridItemCraterTimedProps::~GridItemCraterTimedProps() */

void __thiscall GridItemCraterTimedProps::~GridItemCraterTimedProps(GridItemCraterTimedProps *this)

{
  ~GridItemCraterTimedProps(this);
  AK::FreeHook(this);
  return;
}

