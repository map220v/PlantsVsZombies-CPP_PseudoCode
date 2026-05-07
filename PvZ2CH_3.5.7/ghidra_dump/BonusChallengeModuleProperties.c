// Class: BonusChallengeModuleProperties


/* BonusChallengeModuleProperties::GetModuleClass() const */

long * BonusChallengeModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (BonusChallengeModule::sClass != (long *)0x0) {
    return BonusChallengeModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  BonusChallengeModule::sClass = plVar1;
  uVar2 = BaseChallengeModule::StaticGetClass();
  (*pcVar3)(plVar1,"BonusChallengeModule",uVar2,BonusChallengeModule::StaticNew);
  BonusChallengeModule::StaticClassInit();
  return BonusChallengeModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BonusChallengeModuleProperties::StaticClassInit() */

void BonusChallengeModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"BonusChallengeModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036aa058,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BonusChallengeModuleProperties::StaticGetClass() */

long * BonusChallengeModuleProperties::StaticGetClass(void)

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
  uVar2 = BaseChallengeModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"BonusChallengeModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BonusChallengeModuleProperties::GetClass() const */

long * BonusChallengeModuleProperties::GetClass(void)

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
  uVar2 = BaseChallengeModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"BonusChallengeModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BonusChallengeModuleProperties::BonusChallengeModuleProperties() */

void __thiscall
BonusChallengeModuleProperties::BonusChallengeModuleProperties(BonusChallengeModuleProperties *this)

{
  BaseChallengeModuleProperties::BaseChallengeModuleProperties
            ((BaseChallengeModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066807a0;
  return;
}


/* BonusChallengeModuleProperties::StaticNew() */

BonusChallengeModuleProperties * BonusChallengeModuleProperties::StaticNew(void)

{
  BonusChallengeModuleProperties *this;
  
  this = ::operator_new(0x78);
  BonusChallengeModuleProperties(this);
  return this;
}


/* BonusChallengeModuleProperties::~BonusChallengeModuleProperties() */

void __thiscall
BonusChallengeModuleProperties::~BonusChallengeModuleProperties
          (BonusChallengeModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066807a0;
  BaseChallengeModuleProperties::~BaseChallengeModuleProperties
            ((BaseChallengeModuleProperties *)this);
  return;
}


/* BonusChallengeModuleProperties::~BonusChallengeModuleProperties() */

void __thiscall
BonusChallengeModuleProperties::~BonusChallengeModuleProperties
          (BonusChallengeModuleProperties *this)

{
  ~BonusChallengeModuleProperties(this);
  AK::FreeHook(this);
  return;
}

