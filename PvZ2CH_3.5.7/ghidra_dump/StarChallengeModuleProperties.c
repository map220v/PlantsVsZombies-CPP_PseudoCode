// Class: StarChallengeModuleProperties


/* StarChallengeModuleProperties::GetModuleClass() const */

long * StarChallengeModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StarChallengeModule::sClass != (long *)0x0) {
    return StarChallengeModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StarChallengeModule::sClass = plVar1;
  uVar2 = BaseChallengeModule::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeModule",uVar2,StarChallengeModule::StaticNew);
  StarChallengeModule::StaticClassInit();
  return StarChallengeModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeModuleProperties::StaticClassInit() */

void StarChallengeModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_044757b4,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeModuleProperties::StaticGetClass() */

long * StarChallengeModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeModuleProperties::GetClass() const */

long * StarChallengeModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeModuleProperties::StarChallengeModuleProperties() */

void __thiscall
StarChallengeModuleProperties::StarChallengeModuleProperties(StarChallengeModuleProperties *this)

{
  BaseChallengeModuleProperties::BaseChallengeModuleProperties
            ((BaseChallengeModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0684ddd0;
  return;
}


/* StarChallengeModuleProperties::StaticNew() */

StarChallengeModuleProperties * StarChallengeModuleProperties::StaticNew(void)

{
  StarChallengeModuleProperties *this;
  
  this = ::operator_new(0x78);
  StarChallengeModuleProperties(this);
  return this;
}


/* StarChallengeModuleProperties::~StarChallengeModuleProperties() */

void __thiscall
StarChallengeModuleProperties::~StarChallengeModuleProperties(StarChallengeModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0684ddd0;
  BaseChallengeModuleProperties::~BaseChallengeModuleProperties
            ((BaseChallengeModuleProperties *)this);
  return;
}


/* StarChallengeModuleProperties::~StarChallengeModuleProperties() */

void __thiscall
StarChallengeModuleProperties::~StarChallengeModuleProperties(StarChallengeModuleProperties *this)

{
  ~StarChallengeModuleProperties(this);
  AK::FreeHook(this);
  return;
}

