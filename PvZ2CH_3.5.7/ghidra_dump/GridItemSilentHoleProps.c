// Class: GridItemSilentHoleProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSilentHoleProps::StaticClassInit() */

void GridItemSilentHoleProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemSilentHoleProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04663fb4,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSilentHoleProps::StaticGetClass() */

long * GridItemSilentHoleProps::StaticGetClass(void)

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
  uVar2 = GridItemAnimationProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSilentHoleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSilentHoleProps::GetClass() const */

long * GridItemSilentHoleProps::GetClass(void)

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
  uVar2 = GridItemAnimationProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSilentHoleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSilentHoleProps::GridItemSilentHoleProps() */

void __thiscall GridItemSilentHoleProps::GridItemSilentHoleProps(GridItemSilentHoleProps *this)

{
  GridItemPropertySheet::GridItemPropertySheet((GridItemPropertySheet *)this);
  *(undefined4 *)(this + 0x98) = 0x41700000;
  *(undefined ***)this = &PTR_GetClass_06891d70;
  return;
}


/* GridItemSilentHoleProps::StaticNew() */

GridItemSilentHoleProps * GridItemSilentHoleProps::StaticNew(void)

{
  GridItemSilentHoleProps *this;
  
  this = ::operator_new(0xa0);
  GridItemSilentHoleProps(this);
  return this;
}


/* GridItemSilentHoleProps::~GridItemSilentHoleProps() */

void __thiscall GridItemSilentHoleProps::~GridItemSilentHoleProps(GridItemSilentHoleProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06891d70;
  GridItemPropertySheet::~GridItemPropertySheet((GridItemPropertySheet *)this);
  return;
}


/* GridItemSilentHoleProps::~GridItemSilentHoleProps() */

void __thiscall GridItemSilentHoleProps::~GridItemSilentHoleProps(GridItemSilentHoleProps *this)

{
  ~GridItemSilentHoleProps(this);
  AK::FreeHook(this);
  return;
}

