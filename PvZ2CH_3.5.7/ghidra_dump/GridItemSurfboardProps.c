// Class: GridItemSurfboardProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSurfboardProps::StaticClassInit() */

void GridItemSurfboardProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemSurfboardProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046456b8,0x108,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSurfboardProps::StaticGetClass() */

long * GridItemSurfboardProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSurfboardProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSurfboardProps::GetClass() const */

long * GridItemSurfboardProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSurfboardProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSurfboardProps::GridItemSurfboardProps() */

void __thiscall GridItemSurfboardProps::GridItemSurfboardProps(GridItemSurfboardProps *this)

{
  GridItemGravestonePropertySheet::GridItemGravestonePropertySheet
            ((GridItemGravestonePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06885460;
  return;
}


/* GridItemSurfboardProps::StaticNew() */

GridItemSurfboardProps * GridItemSurfboardProps::StaticNew(void)

{
  GridItemSurfboardProps *this;
  
  this = ::operator_new(0x108);
  GridItemSurfboardProps(this);
  return this;
}


/* GridItemSurfboardProps::~GridItemSurfboardProps() */

void __thiscall GridItemSurfboardProps::~GridItemSurfboardProps(GridItemSurfboardProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06885460;
  GridItemGravestonePropertySheet::~GridItemGravestonePropertySheet
            ((GridItemGravestonePropertySheet *)this);
  return;
}


/* GridItemSurfboardProps::~GridItemSurfboardProps() */

void __thiscall GridItemSurfboardProps::~GridItemSurfboardProps(GridItemSurfboardProps *this)

{
  ~GridItemSurfboardProps(this);
  AK::FreeHook(this);
  return;
}

