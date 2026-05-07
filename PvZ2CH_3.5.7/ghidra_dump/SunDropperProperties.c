// Class: SunDropperProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunDropperProperties::StaticClassInit() */

void SunDropperProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"SunDropperProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_044a4ef0,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SunDropperProperties::StaticGetClass() */

long * SunDropperProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SunDropperProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SunDropperProperties::GetClass() const */

long * SunDropperProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"SunDropperProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SunDropperProperties::GetModuleClass() const */

long * SunDropperProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SunDropperModule::sClass != (long *)0x0) {
    return SunDropperModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SunDropperModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"SunDropperModule",uVar2,SunDropperModule::StaticNew);
  SunDropperModule::StaticClassInit();
  return SunDropperModule::sClass;
}


/* SunDropperProperties::SunDropperProperties() */

void __thiscall SunDropperProperties::SunDropperProperties(SunDropperProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06852140;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  return;
}


/* SunDropperProperties::StaticNew() */

SunDropperProperties * SunDropperProperties::StaticNew(void)

{
  SunDropperProperties *this;
  
  this = ::operator_new(0x58);
  SunDropperProperties(this);
  return this;
}


/* SunDropperProperties::~SunDropperProperties() */

void __thiscall SunDropperProperties::~SunDropperProperties(SunDropperProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06852140;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* SunDropperProperties::~SunDropperProperties() */

void __thiscall SunDropperProperties::~SunDropperProperties(SunDropperProperties *this)

{
  ~SunDropperProperties(this);
  AK::FreeHook(this);
  return;
}

