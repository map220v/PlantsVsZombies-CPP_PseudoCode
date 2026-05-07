// Class: WorldMap_ActivityCenterButton


/* WorldMap_ActivityCenterButton::~WorldMap_ActivityCenterButton() */

void __thiscall
WorldMap_ActivityCenterButton::~WorldMap_ActivityCenterButton(WorldMap_ActivityCenterButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0685b800;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_ActivityCenterButton_0685b9b0;
  WorldMap_CommonButton::~WorldMap_CommonButton((WorldMap_CommonButton *)this);
  return;
}


/* non-virtual thunk to WorldMap_ActivityCenterButton::~WorldMap_ActivityCenterButton() */

void __thiscall
WorldMap_ActivityCenterButton::~WorldMap_ActivityCenterButton(WorldMap_ActivityCenterButton *this)

{
  ~WorldMap_ActivityCenterButton(this + -0x10);
  return;
}


/* WorldMap_ActivityCenterButton::~WorldMap_ActivityCenterButton() */

void __thiscall
WorldMap_ActivityCenterButton::~WorldMap_ActivityCenterButton(WorldMap_ActivityCenterButton *this)

{
  ~WorldMap_ActivityCenterButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_ActivityCenterButton::~WorldMap_ActivityCenterButton() */

void __thiscall
WorldMap_ActivityCenterButton::~WorldMap_ActivityCenterButton(WorldMap_ActivityCenterButton *this)

{
  ~WorldMap_ActivityCenterButton(this + -0x10);
  return;
}


/* WorldMap_ActivityCenterButton::DoPressButton() */

void WorldMap_ActivityCenterButton::DoPressButton(void)

{
  LawnApp::ShowActiveEntranceUI(gLawnApp,0);
  return;
}


/* WorldMap_ActivityCenterButton::WorldMap_ActivityCenterButton() */

void __thiscall
WorldMap_ActivityCenterButton::WorldMap_ActivityCenterButton(WorldMap_ActivityCenterButton *this)

{
  WorldMap_CommonButton::WorldMap_CommonButton((WorldMap_CommonButton *)this);
  *(undefined ***)this = &PTR_GetClass_0685b800;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_ActivityCenterButton_0685b9b0;
  return;
}


/* WorldMap_ActivityCenterButton::StaticNew() */

WorldMap_ActivityCenterButton * WorldMap_ActivityCenterButton::StaticNew(void)

{
  WorldMap_ActivityCenterButton *this;
  
  this = ::operator_new(0x168);
  WorldMap_ActivityCenterButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ActivityCenterButton::StaticClassInit() */

void WorldMap_ActivityCenterButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_ActivityCenterButton");
    (*pcVar2)(plVar1,asStack_10,FUN_04567624,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_ActivityCenterButton::StaticGetClass() */

long * WorldMap_ActivityCenterButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_ActivityCenterButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_ActivityCenterButton::GetClass() const */

long * WorldMap_ActivityCenterButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_ActivityCenterButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

