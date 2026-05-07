// Class: ProtectChristmasProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProtectChristmasProperties::StaticClassInit() */

void ProtectChristmasProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ProtectChristmasProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_044a7cbc,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ProtectChristmasProperties::StaticGetClass() */

long * ProtectChristmasProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ProtectChristmasProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ProtectChristmasProperties::GetClass() const */

long * ProtectChristmasProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ProtectChristmasProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ProtectChristmasProperties::GetModuleClass() const */

long * ProtectChristmasProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ProtectChristmasModule::sClass != (long *)0x0) {
    return ProtectChristmasModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ProtectChristmasModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"ProtectChristmasModule",uVar2,ProtectChristmasModule::StaticNew);
  ProtectChristmasModule::StaticClassInit();
  return ProtectChristmasModule::sClass;
}


/* ProtectChristmasProperties::ProtectChristmasProperties() */

void __thiscall
ProtectChristmasProperties::ProtectChristmasProperties(ProtectChristmasProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06852610;
  return;
}


/* ProtectChristmasProperties::StaticNew() */

ProtectChristmasProperties * ProtectChristmasProperties::StaticNew(void)

{
  ProtectChristmasProperties *this;
  
  this = ::operator_new(0x40);
  ProtectChristmasProperties(this);
  return this;
}


/* ProtectChristmasProperties::~ProtectChristmasProperties() */

void __thiscall
ProtectChristmasProperties::~ProtectChristmasProperties(ProtectChristmasProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06852610;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* ProtectChristmasProperties::~ProtectChristmasProperties() */

void __thiscall
ProtectChristmasProperties::~ProtectChristmasProperties(ProtectChristmasProperties *this)

{
  ~ProtectChristmasProperties(this);
  AK::FreeHook(this);
  return;
}

