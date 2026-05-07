// Class: GridItemBallProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBallProps::StaticClassInit() */

void GridItemBallProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemBallProps");
    (*pcVar2)(plVar1,asStack_10,FUN_037392f4,0xe0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBallProps::StaticGetClass() */

long * GridItemBallProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemBallProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemBallProps::GetClass() const */

long * GridItemBallProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemBallProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemBallProps::GridItemBallProps() */

void __thiscall GridItemBallProps::GridItemBallProps(GridItemBallProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_066946e0;
  *(undefined4 *)(this + 0xdc) = 0;
  return;
}


/* GridItemBallProps::StaticNew() */

GridItemBallProps * GridItemBallProps::StaticNew(void)

{
  GridItemBallProps *this;
  
  this = ::operator_new(0xe0);
  GridItemBallProps(this);
  return this;
}


/* GridItemBallProps::~GridItemBallProps() */

void __thiscall GridItemBallProps::~GridItemBallProps(GridItemBallProps *this)

{
  *(undefined ***)this = &PTR_GetClass_066946e0;
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemBallProps::~GridItemBallProps() */

void __thiscall GridItemBallProps::~GridItemBallProps(GridItemBallProps *this)

{
  ~GridItemBallProps(this);
  AK::FreeHook(this);
  return;
}

