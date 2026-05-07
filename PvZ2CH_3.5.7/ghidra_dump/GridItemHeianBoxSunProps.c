// Class: GridItemHeianBoxSunProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxSunProps::StaticClassInit() */

void GridItemHeianBoxSunProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemHeianBoxSunProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03d2893c,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHeianBoxSunProps::StaticGetClass() */

long * GridItemHeianBoxSunProps::StaticGetClass(void)

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
  uVar2 = GridItemHeianBoxProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHeianBoxSunProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHeianBoxSunProps::GetClass() const */

long * GridItemHeianBoxSunProps::GetClass(void)

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
  uVar2 = GridItemHeianBoxProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHeianBoxSunProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHeianBoxSunProps::GridItemHeianBoxSunProps() */

void __thiscall GridItemHeianBoxSunProps::GridItemHeianBoxSunProps(GridItemHeianBoxSunProps *this)

{
  GridItemHeianBoxProps::GridItemHeianBoxProps((GridItemHeianBoxProps *)this);
  *(undefined4 *)(this + 0xd0) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_06766790;
  return;
}


/* GridItemHeianBoxSunProps::StaticNew() */

GridItemHeianBoxSunProps * GridItemHeianBoxSunProps::StaticNew(void)

{
  GridItemHeianBoxSunProps *this;
  
  this = ::operator_new(0xd8);
  GridItemHeianBoxSunProps(this);
  return this;
}


/* GridItemHeianBoxSunProps::~GridItemHeianBoxSunProps() */

void __thiscall GridItemHeianBoxSunProps::~GridItemHeianBoxSunProps(GridItemHeianBoxSunProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06766790;
  GridItemHeianBoxProps::~GridItemHeianBoxProps((GridItemHeianBoxProps *)this);
  return;
}


/* GridItemHeianBoxSunProps::~GridItemHeianBoxSunProps() */

void __thiscall GridItemHeianBoxSunProps::~GridItemHeianBoxSunProps(GridItemHeianBoxSunProps *this)

{
  ~GridItemHeianBoxSunProps(this);
  AK::FreeHook(this);
  return;
}

