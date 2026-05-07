// Class: GridItemIcyFenceProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIcyFenceProps::StaticClassInit() */

void GridItemIcyFenceProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemIcyFenceProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03d6917c,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemIcyFenceProps::StaticGetClass() */

long * GridItemIcyFenceProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemIcyFenceProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemIcyFenceProps::GetClass() const */

long * GridItemIcyFenceProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemIcyFenceProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemIcyFenceProps::GridItemIcyFenceProps() */

void __thiscall GridItemIcyFenceProps::GridItemIcyFenceProps(GridItemIcyFenceProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined ***)this = &PTR_GetClass_0676e200;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  return;
}


/* GridItemIcyFenceProps::StaticNew() */

GridItemIcyFenceProps * GridItemIcyFenceProps::StaticNew(void)

{
  GridItemIcyFenceProps *this;
  
  this = ::operator_new(0xd8);
  GridItemIcyFenceProps(this);
  return this;
}


/* GridItemIcyFenceProps::~GridItemIcyFenceProps() */

void __thiscall GridItemIcyFenceProps::~GridItemIcyFenceProps(GridItemIcyFenceProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0676e200;
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemIcyFenceProps::~GridItemIcyFenceProps() */

void __thiscall GridItemIcyFenceProps::~GridItemIcyFenceProps(GridItemIcyFenceProps *this)

{
  ~GridItemIcyFenceProps(this);
  AK::FreeHook(this);
  return;
}

