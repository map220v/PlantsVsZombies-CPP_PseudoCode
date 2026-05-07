// Class: ArenaPlantProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaPlantProperties::StaticClassInit() */

void ArenaPlantProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArenaPlantProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04b101cc,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaPlantProperties::StaticGetClass() */

long * ArenaPlantProperties::StaticGetClass(void)

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
  uVar2 = StandardLevelIntroProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ArenaPlantProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArenaPlantProperties::GetClass() const */

long * ArenaPlantProperties::GetClass(void)

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
  uVar2 = StandardLevelIntroProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ArenaPlantProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArenaPlantProperties::GetModuleClass() const */

long * ArenaPlantProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ArenaPlantModule::sClass != (long *)0x0) {
    return ArenaPlantModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ArenaPlantModule::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"ArenaPlantModule",uVar2,ArenaPlantModule::StaticNew);
  ArenaPlantModule::StaticClassInit();
  return ArenaPlantModule::sClass;
}


/* ArenaPlantProperties::ArenaPlantProperties() */

void __thiscall ArenaPlantProperties::ArenaPlantProperties(ArenaPlantProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06953de0;
  Set8BytesTo0(this + 0x88);
  Set8BytesTo0(this + 0x90);
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0x40200000;
  return;
}


/* ArenaPlantProperties::StaticNew() */

ArenaPlantProperties * ArenaPlantProperties::StaticNew(void)

{
  ArenaPlantProperties *this;
  
  this = ::operator_new(0x98);
  ArenaPlantProperties(this);
  return this;
}


/* ArenaPlantProperties::~ArenaPlantProperties() */

void __thiscall ArenaPlantProperties::~ArenaPlantProperties(ArenaPlantProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06953de0;
  std::string::~string((string *)(this + 0x90));
  std::string::~string((string *)(this + 0x88));
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* ArenaPlantProperties::~ArenaPlantProperties() */

void __thiscall ArenaPlantProperties::~ArenaPlantProperties(ArenaPlantProperties *this)

{
  ~ArenaPlantProperties(this);
  AK::FreeHook(this);
  return;
}

