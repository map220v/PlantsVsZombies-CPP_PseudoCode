// Class: DangerRoomHydraZombossBattleModuleProperties


/* DangerRoomHydraZombossBattleModuleProperties::GetModuleClass() const */

long * DangerRoomHydraZombossBattleModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (DangerRoomHydraZombossBattleModule::sClass != (long *)0x0) {
    return DangerRoomHydraZombossBattleModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  DangerRoomHydraZombossBattleModule::sClass = plVar1;
  uVar2 = ZombossBattleModule::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomHydraZombossBattleModule",uVar2,
            DangerRoomHydraZombossBattleModule::StaticNew);
  DangerRoomHydraZombossBattleModule::StaticClassInit();
  return DangerRoomHydraZombossBattleModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomHydraZombossBattleModuleProperties::StaticClassInit() */

void DangerRoomHydraZombossBattleModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"DangerRoomHydraZombossBattleModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04751024,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomHydraZombossBattleModuleProperties::StaticGetClass() */

long * DangerRoomHydraZombossBattleModuleProperties::StaticGetClass(void)

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
  uVar2 = ZombossBattleModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomHydraZombossBattleModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomHydraZombossBattleModuleProperties::GetClass() const */

long * DangerRoomHydraZombossBattleModuleProperties::GetClass(void)

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
  uVar2 = ZombossBattleModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomHydraZombossBattleModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomHydraZombossBattleModuleProperties::DangerRoomHydraZombossBattleModuleProperties() */

void __thiscall
DangerRoomHydraZombossBattleModuleProperties::DangerRoomHydraZombossBattleModuleProperties
          (DangerRoomHydraZombossBattleModuleProperties *this)

{
  ZombossBattleModuleProperties::ZombossBattleModuleProperties
            ((ZombossBattleModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_068cc4a0;
  return;
}


/* DangerRoomHydraZombossBattleModuleProperties::StaticNew() */

DangerRoomHydraZombossBattleModuleProperties *
DangerRoomHydraZombossBattleModuleProperties::StaticNew(void)

{
  DangerRoomHydraZombossBattleModuleProperties *this;
  
  this = ::operator_new(0x68);
  DangerRoomHydraZombossBattleModuleProperties(this);
  return this;
}


/* DangerRoomHydraZombossBattleModuleProperties::~DangerRoomHydraZombossBattleModuleProperties() */

void __thiscall
DangerRoomHydraZombossBattleModuleProperties::~DangerRoomHydraZombossBattleModuleProperties
          (DangerRoomHydraZombossBattleModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_068cc4a0;
  ZombossBattleModuleProperties::~ZombossBattleModuleProperties
            ((ZombossBattleModuleProperties *)this);
  return;
}


/* DangerRoomHydraZombossBattleModuleProperties::~DangerRoomHydraZombossBattleModuleProperties() */

void __thiscall
DangerRoomHydraZombossBattleModuleProperties::~DangerRoomHydraZombossBattleModuleProperties
          (DangerRoomHydraZombossBattleModuleProperties *this)

{
  ~DangerRoomHydraZombossBattleModuleProperties(this);
  AK::FreeHook(this);
  return;
}

