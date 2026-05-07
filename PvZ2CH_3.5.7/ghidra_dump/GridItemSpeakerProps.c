// Class: GridItemSpeakerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSpeakerProps::StaticClassInit() */

void GridItemSpeakerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemSpeakerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03e32864,0x140,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSpeakerProps::StaticGetClass() */

long * GridItemSpeakerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSpeakerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSpeakerProps::GetClass() const */

long * GridItemSpeakerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSpeakerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSpeakerProps::GridItemSpeakerProps() */

void __thiscall GridItemSpeakerProps::GridItemSpeakerProps(GridItemSpeakerProps *this)

{
  GridItemBreakableTargetProps::GridItemBreakableTargetProps((GridItemBreakableTargetProps *)this);
  *(undefined4 *)(this + 0x138) = 100;
  *(undefined ***)this = &PTR_GetClass_06789450;
  return;
}


/* GridItemSpeakerProps::StaticNew() */

GridItemSpeakerProps * GridItemSpeakerProps::StaticNew(void)

{
  GridItemSpeakerProps *this;
  
  this = ::operator_new(0x140);
  GridItemSpeakerProps(this);
  return this;
}


/* GridItemSpeakerProps::~GridItemSpeakerProps() */

void __thiscall GridItemSpeakerProps::~GridItemSpeakerProps(GridItemSpeakerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06789450;
  GridItemBreakableTargetProps::~GridItemBreakableTargetProps((GridItemBreakableTargetProps *)this);
  return;
}


/* GridItemSpeakerProps::~GridItemSpeakerProps() */

void __thiscall GridItemSpeakerProps::~GridItemSpeakerProps(GridItemSpeakerProps *this)

{
  ~GridItemSpeakerProps(this);
  AK::FreeHook(this);
  return;
}

