// Class: GridItemOilProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemOilProps::StaticClassInit() */

void GridItemOilProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemOilProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04cf0880,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemOilProps::StaticGetClass() */

long * GridItemOilProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemOilProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemOilProps::GetClass() const */

long * GridItemOilProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemOilProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemOilProps::GridItemOilProps() */

void __thiscall GridItemOilProps::GridItemOilProps(GridItemOilProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xd0) = 0x3f000000;
  *(undefined ***)this = &PTR_GetClass_069a4060;
  return;
}


/* GridItemOilProps::StaticNew() */

GridItemOilProps * GridItemOilProps::StaticNew(void)

{
  GridItemOilProps *this;
  
  this = ::operator_new(0xd8);
  GridItemOilProps(this);
  return this;
}


/* GridItemOilProps::~GridItemOilProps() */

void __thiscall GridItemOilProps::~GridItemOilProps(GridItemOilProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069a4060;
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemOilProps::~GridItemOilProps() */

void __thiscall GridItemOilProps::~GridItemOilProps(GridItemOilProps *this)

{
  ~GridItemOilProps(this);
  AK::FreeHook(this);
  return;
}

