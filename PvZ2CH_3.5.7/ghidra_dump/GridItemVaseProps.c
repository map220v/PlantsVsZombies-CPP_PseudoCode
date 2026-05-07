// Class: GridItemVaseProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVaseProps::StaticClassInit() */

void GridItemVaseProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemVaseProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0498ede0,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemVaseProps::StaticGetClass() */

long * GridItemVaseProps::StaticGetClass(void)

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
  uVar2 = GridItemPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemVaseProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemVaseProps::GetClass() const */

long * GridItemVaseProps::GetClass(void)

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
  uVar2 = GridItemPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemVaseProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemVaseProps::GridItemVaseProps() */

void __thiscall GridItemVaseProps::GridItemVaseProps(GridItemVaseProps *this)

{
  GridItemPropertySheet::GridItemPropertySheet((GridItemPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06918ef0;
  return;
}


/* GridItemVaseProps::StaticNew() */

GridItemVaseProps * GridItemVaseProps::StaticNew(void)

{
  GridItemVaseProps *this;
  
  this = ::operator_new(0x98);
  GridItemVaseProps(this);
  return this;
}


/* GridItemVaseProps::~GridItemVaseProps() */

void __thiscall GridItemVaseProps::~GridItemVaseProps(GridItemVaseProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06918ef0;
  GridItemPropertySheet::~GridItemPropertySheet((GridItemPropertySheet *)this);
  return;
}


/* GridItemVaseProps::~GridItemVaseProps() */

void __thiscall GridItemVaseProps::~GridItemVaseProps(GridItemVaseProps *this)

{
  ~GridItemVaseProps(this);
  AK::FreeHook(this);
  return;
}

