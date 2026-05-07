// Class: VolcanoSnowBattleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VolcanoSnowBattleProperties::StaticClassInit() */

void VolcanoSnowBattleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"VolcanoSnowBattleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04ba4a38,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VolcanoSnowBattleProperties::StaticGetClass() */

long * VolcanoSnowBattleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"VolcanoSnowBattleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VolcanoSnowBattleProperties::GetClass() const */

long * VolcanoSnowBattleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"VolcanoSnowBattleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VolcanoSnowBattleProperties::GetModuleClass() const */

long * VolcanoSnowBattleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (VolcanoSnowBattleModule::sClass != (long *)0x0) {
    return VolcanoSnowBattleModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  VolcanoSnowBattleModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"VolcanoSnowBattleModule",uVar2,VolcanoSnowBattleModule::StaticNew);
  VolcanoSnowBattleModule::StaticClassInit();
  return VolcanoSnowBattleModule::sClass;
}


/* VolcanoSnowBattleProperties::VolcanoSnowBattleProperties() */

void __thiscall
VolcanoSnowBattleProperties::VolcanoSnowBattleProperties(VolcanoSnowBattleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined ***)this = &PTR_GetClass_069759b0;
  return;
}


/* VolcanoSnowBattleProperties::StaticNew() */

VolcanoSnowBattleProperties * VolcanoSnowBattleProperties::StaticNew(void)

{
  VolcanoSnowBattleProperties *this;
  
  this = ::operator_new(0x48);
  VolcanoSnowBattleProperties(this);
  return this;
}


/* VolcanoSnowBattleProperties::~VolcanoSnowBattleProperties() */

void __thiscall
VolcanoSnowBattleProperties::~VolcanoSnowBattleProperties(VolcanoSnowBattleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_069759b0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* VolcanoSnowBattleProperties::~VolcanoSnowBattleProperties() */

void __thiscall
VolcanoSnowBattleProperties::~VolcanoSnowBattleProperties(VolcanoSnowBattleProperties *this)

{
  ~VolcanoSnowBattleProperties(this);
  AK::FreeHook(this);
  return;
}

