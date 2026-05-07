// Class: GridItemCoalTruckProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCoalTruckProps::StaticClassInit() */

void GridItemCoalTruckProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCoalTruckProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03c37770,0x108,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCoalTruckProps::StaticGetClass() */

long * GridItemCoalTruckProps::StaticGetClass(void)

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
  uVar2 = GridItemGravestonePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCoalTruckProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCoalTruckProps::GetClass() const */

long * GridItemCoalTruckProps::GetClass(void)

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
  uVar2 = GridItemGravestonePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCoalTruckProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCoalTruckProps::GridItemCoalTruckProps() */

void __thiscall GridItemCoalTruckProps::GridItemCoalTruckProps(GridItemCoalTruckProps *this)

{
  GridItemGravestonePropertySheet::GridItemGravestonePropertySheet
            ((GridItemGravestonePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0674f520;
  return;
}


/* GridItemCoalTruckProps::StaticNew() */

GridItemCoalTruckProps * GridItemCoalTruckProps::StaticNew(void)

{
  GridItemCoalTruckProps *this;
  
  this = ::operator_new(0x108);
  GridItemCoalTruckProps(this);
  return this;
}


/* GridItemCoalTruckProps::~GridItemCoalTruckProps() */

void __thiscall GridItemCoalTruckProps::~GridItemCoalTruckProps(GridItemCoalTruckProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0674f520;
  GridItemGravestonePropertySheet::~GridItemGravestonePropertySheet
            ((GridItemGravestonePropertySheet *)this);
  return;
}


/* GridItemCoalTruckProps::~GridItemCoalTruckProps() */

void __thiscall GridItemCoalTruckProps::~GridItemCoalTruckProps(GridItemCoalTruckProps *this)

{
  ~GridItemCoalTruckProps(this);
  AK::FreeHook(this);
  return;
}

