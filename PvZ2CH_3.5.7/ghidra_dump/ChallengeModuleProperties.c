// Class: ChallengeModuleProperties


/* ChallengeModuleProperties::ChallengeModuleProperties() */

void __thiscall
ChallengeModuleProperties::ChallengeModuleProperties(ChallengeModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06739270;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  return;
}


/* ChallengeModuleProperties::~ChallengeModuleProperties() */

void __thiscall
ChallengeModuleProperties::~ChallengeModuleProperties(ChallengeModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06739270;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x58));
  std::
  vector<std::vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>,std::allocator<std::vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>>>
  ::~vector((vector<std::vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>,std::allocator<std::vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>>>
             *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* ChallengeModuleProperties::~ChallengeModuleProperties() */

void __thiscall
ChallengeModuleProperties::~ChallengeModuleProperties(ChallengeModuleProperties *this)

{
  ~ChallengeModuleProperties(this);
  AK::FreeHook(this);
  return;
}


/* ChallengeModuleProperties::GetModuleClass() const */

long * ChallengeModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ChallengeModule::sClass != (long *)0x0) {
    return ChallengeModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ChallengeModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"ChallengeModule",uVar2,ChallengeModule::StaticNew);
  ChallengeModule::StaticClassInit();
  return ChallengeModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeModuleProperties::StaticClassInit() */

void ChallengeModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ChallengeModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03bc1d50,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengeModuleProperties::StaticGetClass() */

long * ChallengeModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ChallengeModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChallengeModuleProperties::GetClass() const */

long * ChallengeModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ChallengeModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChallengeModuleProperties::StaticNew() */

ChallengeModuleProperties * ChallengeModuleProperties::StaticNew(void)

{
  ChallengeModuleProperties *this;
  
  this = ::operator_new(0x70);
  ChallengeModuleProperties(this);
  return this;
}

