// Class: BaseChallengeModuleProperties


/* BaseChallengeModuleProperties::GetModuleClass() const */

long * BaseChallengeModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (BaseChallengeModule::sClass != (long *)0x0) {
    return BaseChallengeModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  BaseChallengeModule::sClass = plVar1;
  uVar2 = ChallengeModule::StaticGetClass();
  (*pcVar3)(plVar1,"BaseChallengeModule",uVar2,BaseChallengeModule::StaticNew);
  BaseChallengeModule::StaticClassInit();
  return BaseChallengeModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BaseChallengeModuleProperties::StaticClassInit() */

void BaseChallengeModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"BaseChallengeModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036a8cc4,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BaseChallengeModuleProperties::StaticGetClass() */

long * BaseChallengeModuleProperties::StaticGetClass(void)

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
  uVar2 = ChallengeModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"BaseChallengeModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BaseChallengeModuleProperties::GetClass() const */

long * BaseChallengeModuleProperties::GetClass(void)

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
  uVar2 = ChallengeModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"BaseChallengeModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BaseChallengeModuleProperties::BaseChallengeModuleProperties() */

void __thiscall
BaseChallengeModuleProperties::BaseChallengeModuleProperties(BaseChallengeModuleProperties *this)

{
  ChallengeModuleProperties::ChallengeModuleProperties((ChallengeModuleProperties *)this);
  this[0x70] = (BaseChallengeModuleProperties)0x0;
  *(undefined ***)this = &PTR_GetClass_06680610;
  return;
}


/* BaseChallengeModuleProperties::StaticNew() */

BaseChallengeModuleProperties * BaseChallengeModuleProperties::StaticNew(void)

{
  BaseChallengeModuleProperties *this;
  
  this = ::operator_new(0x78);
  BaseChallengeModuleProperties(this);
  return this;
}


/* BaseChallengeModuleProperties::~BaseChallengeModuleProperties() */

void __thiscall
BaseChallengeModuleProperties::~BaseChallengeModuleProperties(BaseChallengeModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06680610;
  ChallengeModuleProperties::~ChallengeModuleProperties((ChallengeModuleProperties *)this);
  return;
}


/* BaseChallengeModuleProperties::~BaseChallengeModuleProperties() */

void __thiscall
BaseChallengeModuleProperties::~BaseChallengeModuleProperties(BaseChallengeModuleProperties *this)

{
  ~BaseChallengeModuleProperties(this);
  AK::FreeHook(this);
  return;
}

