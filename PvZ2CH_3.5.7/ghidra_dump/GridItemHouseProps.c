// Class: GridItemHouseProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHouseProps::StaticClassInit() */

void GridItemHouseProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemHouseProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03e1db40,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHouseProps::StaticGetClass() */

long * GridItemHouseProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemHouseProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHouseProps::GetClass() const */

long * GridItemHouseProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemHouseProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHouseProps::GridItemHouseProps() */

void __thiscall GridItemHouseProps::GridItemHouseProps(GridItemHouseProps *this)

{
  GridItemPropertySheet::GridItemPropertySheet((GridItemPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067855a0;
  return;
}


/* GridItemHouseProps::StaticNew() */

GridItemHouseProps * GridItemHouseProps::StaticNew(void)

{
  GridItemHouseProps *this;
  
  this = ::operator_new(0x98);
  GridItemHouseProps(this);
  return this;
}


/* GridItemHouseProps::~GridItemHouseProps() */

void __thiscall GridItemHouseProps::~GridItemHouseProps(GridItemHouseProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067855a0;
  GridItemPropertySheet::~GridItemPropertySheet((GridItemPropertySheet *)this);
  return;
}


/* GridItemHouseProps::~GridItemHouseProps() */

void __thiscall GridItemHouseProps::~GridItemHouseProps(GridItemHouseProps *this)

{
  ~GridItemHouseProps(this);
  AK::FreeHook(this);
  return;
}

