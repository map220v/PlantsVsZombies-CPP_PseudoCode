// Class: GridItemOliveOilProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemOliveOilProps::StaticClassInit() */

void GridItemOliveOilProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemOliveOilProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0425d1f4,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemOliveOilProps::StaticGetClass() */

long * GridItemOliveOilProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemOliveOilProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemOliveOilProps::GetClass() const */

long * GridItemOliveOilProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemOliveOilProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemOliveOilProps::GridItemOliveOilProps() */

void __thiscall GridItemOliveOilProps::GridItemOliveOilProps(GridItemOliveOilProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xd4) = 0x40800000;
  *(undefined ***)this = &PTR_GetClass_0681cda0;
  *(undefined4 *)(this + 0xd0) = 0x42c80000;
  return;
}


/* GridItemOliveOilProps::StaticNew() */

GridItemOliveOilProps * GridItemOliveOilProps::StaticNew(void)

{
  GridItemOliveOilProps *this;
  
  this = ::operator_new(0xd8);
  GridItemOliveOilProps(this);
  return this;
}


/* GridItemOliveOilProps::~GridItemOliveOilProps() */

void __thiscall GridItemOliveOilProps::~GridItemOliveOilProps(GridItemOliveOilProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0681cda0;
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemOliveOilProps::~GridItemOliveOilProps() */

void __thiscall GridItemOliveOilProps::~GridItemOliveOilProps(GridItemOliveOilProps *this)

{
  ~GridItemOliveOilProps(this);
  AK::FreeHook(this);
  return;
}

