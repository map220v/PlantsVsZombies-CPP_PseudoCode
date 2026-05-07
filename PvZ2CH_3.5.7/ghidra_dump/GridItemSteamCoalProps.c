// Class: GridItemSteamCoalProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSteamCoalProps::StaticClassInit() */

void GridItemSteamCoalProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemSteamCoalProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03c38fa4,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSteamCoalProps::StaticGetClass() */

long * GridItemSteamCoalProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSteamCoalProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSteamCoalProps::GetClass() const */

long * GridItemSteamCoalProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSteamCoalProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSteamCoalProps::GridItemSteamCoalProps() */

void __thiscall GridItemSteamCoalProps::GridItemSteamCoalProps(GridItemSteamCoalProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xd0) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_0674fd00;
  return;
}


/* GridItemSteamCoalProps::StaticNew() */

GridItemSteamCoalProps * GridItemSteamCoalProps::StaticNew(void)

{
  GridItemSteamCoalProps *this;
  
  this = ::operator_new(0xd8);
  GridItemSteamCoalProps(this);
  return this;
}


/* GridItemSteamCoalProps::~GridItemSteamCoalProps() */

void __thiscall GridItemSteamCoalProps::~GridItemSteamCoalProps(GridItemSteamCoalProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0674fd00;
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemSteamCoalProps::~GridItemSteamCoalProps() */

void __thiscall GridItemSteamCoalProps::~GridItemSteamCoalProps(GridItemSteamCoalProps *this)

{
  ~GridItemSteamCoalProps(this);
  AK::FreeHook(this);
  return;
}

