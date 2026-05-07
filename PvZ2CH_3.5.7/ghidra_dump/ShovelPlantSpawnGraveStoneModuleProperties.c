// Class: ShovelPlantSpawnGraveStoneModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShovelPlantSpawnGraveStoneModuleProperties::StaticClassInit() */

void ShovelPlantSpawnGraveStoneModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ShovelPlantSpawnGraveStoneModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04d8eda0,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShovelPlantSpawnGraveStoneModuleProperties::StaticGetClass() */

long * ShovelPlantSpawnGraveStoneModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ShovelPlantSpawnGraveStoneModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShovelPlantSpawnGraveStoneModuleProperties::GetClass() const */

long * ShovelPlantSpawnGraveStoneModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ShovelPlantSpawnGraveStoneModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShovelPlantSpawnGraveStoneModuleProperties::GetModuleClass() const */

long * ShovelPlantSpawnGraveStoneModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ShovelPlantSpawnGraveStoneModule::sClass != (long *)0x0) {
    return ShovelPlantSpawnGraveStoneModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ShovelPlantSpawnGraveStoneModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"ShovelPlantSpawnGraveStoneModule",uVar2,
            ShovelPlantSpawnGraveStoneModule::StaticNew);
  ShovelPlantSpawnGraveStoneModule::StaticClassInit();
  return ShovelPlantSpawnGraveStoneModule::sClass;
}


/* ShovelPlantSpawnGraveStoneModuleProperties::ShovelPlantSpawnGraveStoneModuleProperties() */

void __thiscall
ShovelPlantSpawnGraveStoneModuleProperties::ShovelPlantSpawnGraveStoneModuleProperties
          (ShovelPlantSpawnGraveStoneModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0x40a00000;
  *(undefined ***)this = &PTR_GetClass_069ba5e0;
  return;
}


/* ShovelPlantSpawnGraveStoneModuleProperties::StaticNew() */

ShovelPlantSpawnGraveStoneModuleProperties *
ShovelPlantSpawnGraveStoneModuleProperties::StaticNew(void)

{
  ShovelPlantSpawnGraveStoneModuleProperties *this;
  
  this = ::operator_new(0x48);
  ShovelPlantSpawnGraveStoneModuleProperties(this);
  return this;
}


/* ShovelPlantSpawnGraveStoneModuleProperties::~ShovelPlantSpawnGraveStoneModuleProperties() */

void __thiscall
ShovelPlantSpawnGraveStoneModuleProperties::~ShovelPlantSpawnGraveStoneModuleProperties
          (ShovelPlantSpawnGraveStoneModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_069ba5e0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* ShovelPlantSpawnGraveStoneModuleProperties::~ShovelPlantSpawnGraveStoneModuleProperties() */

void __thiscall
ShovelPlantSpawnGraveStoneModuleProperties::~ShovelPlantSpawnGraveStoneModuleProperties
          (ShovelPlantSpawnGraveStoneModuleProperties *this)

{
  ~ShovelPlantSpawnGraveStoneModuleProperties(this);
  AK::FreeHook(this);
  return;
}

