// Class: GridItemEggProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEggProps::StaticClassInit() */

void GridItemEggProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemEggProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03e3b848,0x150,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemEggProps::StaticGetClass() */

long * GridItemEggProps::StaticGetClass(void)

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
  uVar2 = GridItemBreakableTargetProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemEggProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemEggProps::GetClass() const */

long * GridItemEggProps::GetClass(void)

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
  uVar2 = GridItemBreakableTargetProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemEggProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemEggProps::GridItemEggProps() */

void __thiscall GridItemEggProps::GridItemEggProps(GridItemEggProps *this)

{
  GridItemBreakableTargetProps::GridItemBreakableTargetProps((GridItemBreakableTargetProps *)this);
  *(undefined ***)this = &PTR_GetClass_0678a700;
  Set8BytesTo0(this + 0x138);
  *(undefined4 *)(this + 0x140) = 0x3f000000;
  *(undefined4 *)(this + 0x144) = 0x41200000;
  *(undefined4 *)(this + 0x148) = 0x3e800000;
  return;
}


/* GridItemEggProps::StaticNew() */

GridItemEggProps * GridItemEggProps::StaticNew(void)

{
  GridItemEggProps *this;
  
  this = ::operator_new(0x150);
  GridItemEggProps(this);
  return this;
}


/* GridItemEggProps::~GridItemEggProps() */

void __thiscall GridItemEggProps::~GridItemEggProps(GridItemEggProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0678a700;
  std::string::~string((string *)(this + 0x138));
  GridItemBreakableTargetProps::~GridItemBreakableTargetProps((GridItemBreakableTargetProps *)this);
  return;
}


/* GridItemEggProps::~GridItemEggProps() */

void __thiscall GridItemEggProps::~GridItemEggProps(GridItemEggProps *this)

{
  ~GridItemEggProps(this);
  AK::FreeHook(this);
  return;
}

