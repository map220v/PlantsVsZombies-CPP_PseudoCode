// Class: ArcadeModuleProperties


/* ArcadeModuleProperties::ArcadeModuleProperties() */

void __thiscall ArcadeModuleProperties::ArcadeModuleProperties(ArcadeModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_069171b0;
  return;
}


/* ArcadeModuleProperties::~ArcadeModuleProperties() */

void __thiscall ArcadeModuleProperties::~ArcadeModuleProperties(ArcadeModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_069171b0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* ArcadeModuleProperties::~ArcadeModuleProperties() */

void __thiscall ArcadeModuleProperties::~ArcadeModuleProperties(ArcadeModuleProperties *this)

{
  ~ArcadeModuleProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeModuleProperties::StaticClassInit() */

void ArcadeModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArcadeModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04970f28,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArcadeModuleProperties::StaticGetClass() */

long * ArcadeModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArcadeModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArcadeModuleProperties::GetClass() const */

long * ArcadeModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArcadeModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArcadeModuleProperties::GetModuleClass() const */

long * ArcadeModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ArcadeModule::sClass != (long *)0x0) {
    return ArcadeModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ArcadeModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"ArcadeModule",uVar2,ArcadeModule::StaticNew);
  ArcadeModule::StaticClassInit();
  return ArcadeModule::sClass;
}


/* ArcadeModuleProperties::StaticNew() */

ArcadeModuleProperties * ArcadeModuleProperties::StaticNew(void)

{
  ArcadeModuleProperties *this;
  
  this = ::operator_new(0x40);
  ArcadeModuleProperties(this);
  return this;
}

