// Class: GridItemMoleProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMoleProps::StaticClassInit() */

void GridItemMoleProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemMoleProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03b517a8,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMoleProps::StaticGetClass() */

long * GridItemMoleProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemMoleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMoleProps::GetClass() const */

long * GridItemMoleProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemMoleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMoleProps::GridItemMoleProps() */

void __thiscall GridItemMoleProps::GridItemMoleProps(GridItemMoleProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xd0) = 0x41200000;
  *(undefined ***)this = &PTR_GetClass_06732a90;
  *(undefined4 *)(this + 0xd4) = 0x41200000;
  return;
}


/* GridItemMoleProps::StaticNew() */

GridItemMoleProps * GridItemMoleProps::StaticNew(void)

{
  GridItemMoleProps *this;
  
  this = ::operator_new(0xd8);
  GridItemMoleProps(this);
  return this;
}


/* GridItemMoleProps::~GridItemMoleProps() */

void __thiscall GridItemMoleProps::~GridItemMoleProps(GridItemMoleProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06732a90;
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemMoleProps::~GridItemMoleProps() */

void __thiscall GridItemMoleProps::~GridItemMoleProps(GridItemMoleProps *this)

{
  ~GridItemMoleProps(this);
  AK::FreeHook(this);
  return;
}

