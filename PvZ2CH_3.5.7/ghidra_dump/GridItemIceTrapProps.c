// Class: GridItemIceTrapProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIceTrapProps::StaticClassInit() */

void GridItemIceTrapProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemIceTrapProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03fc9b00,0x150,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemIceTrapProps::StaticGetClass() */

long * GridItemIceTrapProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemIceTrapProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemIceTrapProps::GetClass() const */

long * GridItemIceTrapProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemIceTrapProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemIceTrapProps::GridItemIceTrapProps() */

void __thiscall GridItemIceTrapProps::GridItemIceTrapProps(GridItemIceTrapProps *this)

{
  GridItemBreakableTargetProps::GridItemBreakableTargetProps((GridItemBreakableTargetProps *)this);
  *(undefined4 *)(this + 0x148) = 0x3f800000;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined ***)this = &PTR_GetClass_067acd90;
  *(undefined4 *)(this + 0x14c) = 0;
  return;
}


/* GridItemIceTrapProps::StaticNew() */

GridItemIceTrapProps * GridItemIceTrapProps::StaticNew(void)

{
  GridItemIceTrapProps *this;
  
  this = ::operator_new(0x150);
  GridItemIceTrapProps(this);
  return this;
}


/* GridItemIceTrapProps::~GridItemIceTrapProps() */

void __thiscall GridItemIceTrapProps::~GridItemIceTrapProps(GridItemIceTrapProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067acd90;
  GridItemBreakableTargetProps::~GridItemBreakableTargetProps((GridItemBreakableTargetProps *)this);
  return;
}


/* GridItemIceTrapProps::~GridItemIceTrapProps() */

void __thiscall GridItemIceTrapProps::~GridItemIceTrapProps(GridItemIceTrapProps *this)

{
  ~GridItemIceTrapProps(this);
  AK::FreeHook(this);
  return;
}

