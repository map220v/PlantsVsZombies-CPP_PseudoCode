// Class: AirMissileGuideProperties


/* AirMissileGuideProperties::GetModuleClass() const */

long * AirMissileGuideProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (AirMissileGuide::sClass != (long *)0x0) {
    return AirMissileGuide::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  AirMissileGuide::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"AirMissileGuide",uVar2,AirMissileGuide::StaticNew);
  AirMissileGuide::StaticClassInit();
  return AirMissileGuide::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirMissileGuideProperties::StaticClassInit() */

void AirMissileGuideProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"AirMissileGuideProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0479eae8,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AirMissileGuideProperties::StaticGetClass() */

long * AirMissileGuideProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AirMissileGuideProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AirMissileGuideProperties::GetClass() const */

long * AirMissileGuideProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"AirMissileGuideProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AirMissileGuideProperties::AirMissileGuideProperties() */

void __thiscall
AirMissileGuideProperties::AirMissileGuideProperties(AirMissileGuideProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_068ddc60;
  return;
}


/* AirMissileGuideProperties::StaticNew() */

AirMissileGuideProperties * AirMissileGuideProperties::StaticNew(void)

{
  AirMissileGuideProperties *this;
  
  this = ::operator_new(0x40);
  AirMissileGuideProperties(this);
  return this;
}


/* AirMissileGuideProperties::~AirMissileGuideProperties() */

void __thiscall
AirMissileGuideProperties::~AirMissileGuideProperties(AirMissileGuideProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_068ddc60;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* AirMissileGuideProperties::~AirMissileGuideProperties() */

void __thiscall
AirMissileGuideProperties::~AirMissileGuideProperties(AirMissileGuideProperties *this)

{
  ~AirMissileGuideProperties(this);
  AK::FreeHook(this);
  return;
}

