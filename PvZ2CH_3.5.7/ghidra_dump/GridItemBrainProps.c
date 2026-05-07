// Class: GridItemBrainProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBrainProps::StaticClassInit() */

void GridItemBrainProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemBrainProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03e13eb8,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBrainProps::StaticGetClass() */

long * GridItemBrainProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemBrainProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemBrainProps::GetClass() const */

long * GridItemBrainProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemBrainProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemBrainProps::GridItemBrainProps() */

void __thiscall GridItemBrainProps::GridItemBrainProps(GridItemBrainProps *this)

{
  GridItemPropertySheet::GridItemPropertySheet((GridItemPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06783c10;
  return;
}


/* GridItemBrainProps::StaticNew() */

GridItemBrainProps * GridItemBrainProps::StaticNew(void)

{
  GridItemBrainProps *this;
  
  this = ::operator_new(0x98);
  GridItemBrainProps(this);
  return this;
}


/* GridItemBrainProps::~GridItemBrainProps() */

void __thiscall GridItemBrainProps::~GridItemBrainProps(GridItemBrainProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06783c10;
  GridItemPropertySheet::~GridItemPropertySheet((GridItemPropertySheet *)this);
  return;
}


/* GridItemBrainProps::~GridItemBrainProps() */

void __thiscall GridItemBrainProps::~GridItemBrainProps(GridItemBrainProps *this)

{
  ~GridItemBrainProps(this);
  AK::FreeHook(this);
  return;
}

