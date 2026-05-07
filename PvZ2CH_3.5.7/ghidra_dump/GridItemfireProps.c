// Class: GridItemfireProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemfireProps::StaticClassInit() */

void GridItemfireProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemfireProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04e36790,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemfireProps::StaticGetClass() */

long * GridItemfireProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemfireProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemfireProps::GetClass() const */

long * GridItemfireProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemfireProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemfireProps::GridItemfireProps() */

void __thiscall GridItemfireProps::GridItemfireProps(GridItemfireProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xd0) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_069dca20;
  *(undefined4 *)(this + 0xd4) = 0x40400000;
  return;
}


/* GridItemfireProps::StaticNew() */

GridItemfireProps * GridItemfireProps::StaticNew(void)

{
  GridItemfireProps *this;
  
  this = ::operator_new(0xd8);
  GridItemfireProps(this);
  return this;
}


/* GridItemfireProps::~GridItemfireProps() */

void __thiscall GridItemfireProps::~GridItemfireProps(GridItemfireProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069dca20;
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemfireProps::~GridItemfireProps() */

void __thiscall GridItemfireProps::~GridItemfireProps(GridItemfireProps *this)

{
  ~GridItemfireProps(this);
  AK::FreeHook(this);
  return;
}

