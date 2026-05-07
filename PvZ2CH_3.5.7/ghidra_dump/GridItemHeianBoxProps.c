// Class: GridItemHeianBoxProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxProps::StaticClassInit() */

void GridItemHeianBoxProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemHeianBoxProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03d281d4,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHeianBoxProps::StaticGetClass() */

long * GridItemHeianBoxProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemHeianBoxProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHeianBoxProps::GetClass() const */

long * GridItemHeianBoxProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemHeianBoxProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHeianBoxProps::GridItemHeianBoxProps() */

void __thiscall GridItemHeianBoxProps::GridItemHeianBoxProps(GridItemHeianBoxProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined ***)this = &PTR_GetClass_06766280;
  return;
}


/* GridItemHeianBoxProps::StaticNew() */

GridItemHeianBoxProps * GridItemHeianBoxProps::StaticNew(void)

{
  GridItemHeianBoxProps *this;
  
  this = ::operator_new(0xd0);
  GridItemHeianBoxProps(this);
  return this;
}


/* GridItemHeianBoxProps::~GridItemHeianBoxProps() */

void __thiscall GridItemHeianBoxProps::~GridItemHeianBoxProps(GridItemHeianBoxProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06766280;
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemHeianBoxProps::~GridItemHeianBoxProps() */

void __thiscall GridItemHeianBoxProps::~GridItemHeianBoxProps(GridItemHeianBoxProps *this)

{
  ~GridItemHeianBoxProps(this);
  AK::FreeHook(this);
  return;
}

