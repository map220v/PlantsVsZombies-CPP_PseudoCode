// Class: WorldMap_ChristmasButton


/* WorldMap_ChristmasButton::~WorldMap_ChristmasButton() */

void __thiscall WorldMap_ChristmasButton::~WorldMap_ChristmasButton(WorldMap_ChristmasButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0685b620;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_ChristmasButton_0685b7d0;
  WorldMap_CommonButton::~WorldMap_CommonButton((WorldMap_CommonButton *)this);
  return;
}


/* non-virtual thunk to WorldMap_ChristmasButton::~WorldMap_ChristmasButton() */

void __thiscall WorldMap_ChristmasButton::~WorldMap_ChristmasButton(WorldMap_ChristmasButton *this)

{
  ~WorldMap_ChristmasButton(this + -0x10);
  return;
}


/* WorldMap_ChristmasButton::~WorldMap_ChristmasButton() */

void __thiscall WorldMap_ChristmasButton::~WorldMap_ChristmasButton(WorldMap_ChristmasButton *this)

{
  ~WorldMap_ChristmasButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_ChristmasButton::~WorldMap_ChristmasButton() */

void __thiscall WorldMap_ChristmasButton::~WorldMap_ChristmasButton(WorldMap_ChristmasButton *this)

{
  ~WorldMap_ChristmasButton(this + -0x10);
  return;
}


/* WorldMap_ChristmasButton::WorldMap_ChristmasButton() */

void __thiscall WorldMap_ChristmasButton::WorldMap_ChristmasButton(WorldMap_ChristmasButton *this)

{
  WorldMap_CommonButton::WorldMap_CommonButton((WorldMap_CommonButton *)this);
  *(undefined ***)this = &PTR_GetClass_0685b620;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_ChristmasButton_0685b7d0;
  return;
}


/* WorldMap_ChristmasButton::StaticNew() */

WorldMap_ChristmasButton * WorldMap_ChristmasButton::StaticNew(void)

{
  WorldMap_ChristmasButton *this;
  
  this = ::operator_new(0x168);
  WorldMap_ChristmasButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ChristmasButton::StaticClassInit() */

void WorldMap_ChristmasButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_ChristmasButton");
    (*pcVar2)(plVar1,asStack_10,FUN_045673ac,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_ChristmasButton::StaticGetClass() */

long * WorldMap_ChristmasButton::StaticGetClass(void)

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
  uVar2 = WorldMap_CommonButton::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_ChristmasButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_ChristmasButton::GetClass() const */

long * WorldMap_ChristmasButton::GetClass(void)

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
  uVar2 = WorldMap_CommonButton::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_ChristmasButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

