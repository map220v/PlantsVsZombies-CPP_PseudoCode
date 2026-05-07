// Class: PVZ1KlotskiModuleMinigameProperties


/* PVZ1KlotskiModuleMinigameProperties::GetModuleClass() const */

long * PVZ1KlotskiModuleMinigameProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PVZ1KlotskiModule::sClass != (long *)0x0) {
    return PVZ1KlotskiModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PVZ1KlotskiModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"PVZ1KlotskiModule",uVar2,PVZ1KlotskiModule::StaticNew);
  PVZ1KlotskiModule::StaticClassInit();
  return PVZ1KlotskiModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1KlotskiModuleMinigameProperties::StaticClassInit() */

void PVZ1KlotskiModuleMinigameProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1KlotskiModuleMinigameProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03fd30f8,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1KlotskiModuleMinigameProperties::StaticGetClass() */

long * PVZ1KlotskiModuleMinigameProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1KlotskiModuleMinigameProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1KlotskiModuleMinigameProperties::GetClass() const */

long * PVZ1KlotskiModuleMinigameProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1KlotskiModuleMinigameProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1KlotskiModuleMinigameProperties::PVZ1KlotskiModuleMinigameProperties() */

void __thiscall
PVZ1KlotskiModuleMinigameProperties::PVZ1KlotskiModuleMinigameProperties
          (PVZ1KlotskiModuleMinigameProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_067ae0d0;
  return;
}


/* PVZ1KlotskiModuleMinigameProperties::StaticNew() */

PVZ1KlotskiModuleMinigameProperties * PVZ1KlotskiModuleMinigameProperties::StaticNew(void)

{
  PVZ1KlotskiModuleMinigameProperties *this;
  
  this = ::operator_new(0x48);
  PVZ1KlotskiModuleMinigameProperties(this);
  return this;
}


/* PVZ1KlotskiModuleMinigameProperties::~PVZ1KlotskiModuleMinigameProperties() */

void __thiscall
PVZ1KlotskiModuleMinigameProperties::~PVZ1KlotskiModuleMinigameProperties
          (PVZ1KlotskiModuleMinigameProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_067ae0d0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* PVZ1KlotskiModuleMinigameProperties::~PVZ1KlotskiModuleMinigameProperties() */

void __thiscall
PVZ1KlotskiModuleMinigameProperties::~PVZ1KlotskiModuleMinigameProperties
          (PVZ1KlotskiModuleMinigameProperties *this)

{
  ~PVZ1KlotskiModuleMinigameProperties(this);
  AK::FreeHook(this);
  return;
}

