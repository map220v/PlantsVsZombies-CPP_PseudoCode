// Class: PickupCollectableTutorialProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PickupCollectableTutorialProperties::StaticClassInit() */

void PickupCollectableTutorialProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PickupCollectableTutorialProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03f157f4,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PickupCollectableTutorialProperties::StaticGetClass() */

long * PickupCollectableTutorialProperties::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PickupCollectableTutorialProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PickupCollectableTutorialProperties::GetClass() const */

long * PickupCollectableTutorialProperties::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PickupCollectableTutorialProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PickupCollectableTutorialProperties::GetModuleClass() const */

long * PickupCollectableTutorialProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PickupCollectableTutorialModule::sClass != (long *)0x0) {
    return PickupCollectableTutorialModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PickupCollectableTutorialModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"PickupCollectableTutorialModule",uVar2,
            PickupCollectableTutorialModule::StaticNew);
  PickupCollectableTutorialModule::StaticClassInit();
  return PickupCollectableTutorialModule::sClass;
}


/* PickupCollectableTutorialProperties::PickupCollectableTutorialProperties() */

void __thiscall
PickupCollectableTutorialProperties::PickupCollectableTutorialProperties
          (PickupCollectableTutorialProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06796820;
  Set8BytesTo0(this + 0x40);
  Set8BytesTo0(this + 0x48);
  Set8BytesTo0(this + 0x50);
  *(undefined4 *)(this + 0x58) = 0xffffffff;
  return;
}


/* PickupCollectableTutorialProperties::StaticNew() */

PickupCollectableTutorialProperties * PickupCollectableTutorialProperties::StaticNew(void)

{
  PickupCollectableTutorialProperties *this;
  
  this = ::operator_new(0x60);
  PickupCollectableTutorialProperties(this);
  return this;
}


/* PickupCollectableTutorialProperties::~PickupCollectableTutorialProperties() */

void __thiscall
PickupCollectableTutorialProperties::~PickupCollectableTutorialProperties
          (PickupCollectableTutorialProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06796820;
  std::string::~string((string *)(this + 0x50));
  std::string::~string((string *)(this + 0x48));
  std::string::~string((string *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* PickupCollectableTutorialProperties::~PickupCollectableTutorialProperties() */

void __thiscall
PickupCollectableTutorialProperties::~PickupCollectableTutorialProperties
          (PickupCollectableTutorialProperties *this)

{
  ~PickupCollectableTutorialProperties(this);
  AK::FreeHook(this);
  return;
}

