// Class: PVZ1NewWhackZombieMinigameProperties


/* PVZ1NewWhackZombieMinigameProperties::GetModuleClass() const */

long * PVZ1NewWhackZombieMinigameProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PVZ1WhackZombieModule::sClass != (long *)0x0) {
    return PVZ1WhackZombieModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PVZ1WhackZombieModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"PVZ1WhackZombieModule",uVar2,PVZ1WhackZombieModule::StaticNew);
  PVZ1WhackZombieModule::StaticClassInit();
  return PVZ1WhackZombieModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1NewWhackZombieMinigameProperties::StaticClassInit() */

void PVZ1NewWhackZombieMinigameProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1NewWhackZombieMinigameProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03fcde90,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1NewWhackZombieMinigameProperties::StaticGetClass() */

long * PVZ1NewWhackZombieMinigameProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1NewWhackZombieMinigameProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1NewWhackZombieMinigameProperties::GetClass() const */

long * PVZ1NewWhackZombieMinigameProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1NewWhackZombieMinigameProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1NewWhackZombieMinigameProperties::PVZ1NewWhackZombieMinigameProperties() */

void __thiscall
PVZ1NewWhackZombieMinigameProperties::PVZ1NewWhackZombieMinigameProperties
          (PVZ1NewWhackZombieMinigameProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_067aced0;
  return;
}


/* PVZ1NewWhackZombieMinigameProperties::StaticNew() */

PVZ1NewWhackZombieMinigameProperties * PVZ1NewWhackZombieMinigameProperties::StaticNew(void)

{
  PVZ1NewWhackZombieMinigameProperties *this;
  
  this = ::operator_new(0x60);
  PVZ1NewWhackZombieMinigameProperties(this);
  return this;
}


/* PVZ1NewWhackZombieMinigameProperties::~PVZ1NewWhackZombieMinigameProperties() */

void __thiscall
PVZ1NewWhackZombieMinigameProperties::~PVZ1NewWhackZombieMinigameProperties
          (PVZ1NewWhackZombieMinigameProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_067aced0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* PVZ1NewWhackZombieMinigameProperties::~PVZ1NewWhackZombieMinigameProperties() */

void __thiscall
PVZ1NewWhackZombieMinigameProperties::~PVZ1NewWhackZombieMinigameProperties
          (PVZ1NewWhackZombieMinigameProperties *this)

{
  ~PVZ1NewWhackZombieMinigameProperties(this);
  AK::FreeHook(this);
  return;
}

