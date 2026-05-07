// Class: GridItemHeavyShieldProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeavyShieldProps::StaticClassInit() */

void GridItemHeavyShieldProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemHeavyShieldProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04ed28ec,0x108,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHeavyShieldProps::StaticGetClass() */

long * GridItemHeavyShieldProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemHeavyShieldProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHeavyShieldProps::GetClass() const */

long * GridItemHeavyShieldProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemHeavyShieldProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHeavyShieldProps::GridItemHeavyShieldProps() */

void __thiscall GridItemHeavyShieldProps::GridItemHeavyShieldProps(GridItemHeavyShieldProps *this)

{
  GridItemGravestonePropertySheet::GridItemGravestonePropertySheet
            ((GridItemGravestonePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069f8c00;
  return;
}


/* GridItemHeavyShieldProps::StaticNew() */

GridItemHeavyShieldProps * GridItemHeavyShieldProps::StaticNew(void)

{
  GridItemHeavyShieldProps *this;
  
  this = ::operator_new(0x108);
  GridItemHeavyShieldProps(this);
  return this;
}


/* GridItemHeavyShieldProps::~GridItemHeavyShieldProps() */

void __thiscall GridItemHeavyShieldProps::~GridItemHeavyShieldProps(GridItemHeavyShieldProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069f8c00;
  GridItemGravestonePropertySheet::~GridItemGravestonePropertySheet
            ((GridItemGravestonePropertySheet *)this);
  return;
}


/* GridItemHeavyShieldProps::~GridItemHeavyShieldProps() */

void __thiscall GridItemHeavyShieldProps::~GridItemHeavyShieldProps(GridItemHeavyShieldProps *this)

{
  ~GridItemHeavyShieldProps(this);
  AK::FreeHook(this);
  return;
}

