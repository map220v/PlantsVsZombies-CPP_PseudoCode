// Class: MiniGameChallengeModuleProperties


/* MiniGameChallengeModuleProperties::GetModuleClass() const */

long * MiniGameChallengeModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (MiniGameChallengeModule::sClass != (long *)0x0) {
    return MiniGameChallengeModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  MiniGameChallengeModule::sClass = plVar1;
  uVar2 = ChallengeModule::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGameChallengeModule",uVar2,MiniGameChallengeModule::StaticNew);
  MiniGameChallengeModule::StaticClassInit();
  return MiniGameChallengeModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameChallengeModuleProperties::StaticClassInit() */

void MiniGameChallengeModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGameChallengeModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03932144,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameChallengeModuleProperties::StaticGetClass() */

long * MiniGameChallengeModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MiniGameChallengeModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGameChallengeModuleProperties::GetClass() const */

long * MiniGameChallengeModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"MiniGameChallengeModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGameChallengeModuleProperties::MiniGameChallengeModuleProperties() */

void __thiscall
MiniGameChallengeModuleProperties::MiniGameChallengeModuleProperties
          (MiniGameChallengeModuleProperties *this)

{
  ChallengeModuleProperties::ChallengeModuleProperties((ChallengeModuleProperties *)this);
  this[0x70] = (MiniGameChallengeModuleProperties)0x0;
  *(undefined ***)this = &PTR_GetClass_066ca8c0;
  return;
}


/* MiniGameChallengeModuleProperties::StaticNew() */

MiniGameChallengeModuleProperties * MiniGameChallengeModuleProperties::StaticNew(void)

{
  MiniGameChallengeModuleProperties *this;
  
  this = ::operator_new(0x78);
  MiniGameChallengeModuleProperties(this);
  return this;
}


/* MiniGameChallengeModuleProperties::~MiniGameChallengeModuleProperties() */

void __thiscall
MiniGameChallengeModuleProperties::~MiniGameChallengeModuleProperties
          (MiniGameChallengeModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066ca8c0;
  ChallengeModuleProperties::~ChallengeModuleProperties((ChallengeModuleProperties *)this);
  return;
}


/* MiniGameChallengeModuleProperties::~MiniGameChallengeModuleProperties() */

void __thiscall
MiniGameChallengeModuleProperties::~MiniGameChallengeModuleProperties
          (MiniGameChallengeModuleProperties *this)

{
  ~MiniGameChallengeModuleProperties(this);
  AK::FreeHook(this);
  return;
}

