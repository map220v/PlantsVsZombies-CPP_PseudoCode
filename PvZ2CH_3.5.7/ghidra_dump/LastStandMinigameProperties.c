// Class: LastStandMinigameProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LastStandMinigameProperties::StaticClassInit() */

void LastStandMinigameProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"LastStandMinigameProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03e60d48,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LastStandMinigameProperties::StaticGetClass() */

long * LastStandMinigameProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LastStandMinigameProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LastStandMinigameProperties::GetClass() const */

long * LastStandMinigameProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"LastStandMinigameProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LastStandMinigameProperties::GetModuleClass() const */

long * LastStandMinigameProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LastStandMinigameModule::sClass != (long *)0x0) {
    return LastStandMinigameModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LastStandMinigameModule::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"LastStandMinigameModule",uVar2,LastStandMinigameModule::StaticNew);
  LastStandMinigameModule::StaticClassInit();
  return LastStandMinigameModule::sClass;
}


/* LastStandMinigameProperties::LastStandMinigameProperties() */

void __thiscall
LastStandMinigameProperties::LastStandMinigameProperties(LastStandMinigameProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0678c920;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  return;
}


/* LastStandMinigameProperties::StaticNew() */

LastStandMinigameProperties * LastStandMinigameProperties::StaticNew(void)

{
  LastStandMinigameProperties *this;
  
  this = ::operator_new(0x98);
  LastStandMinigameProperties(this);
  return this;
}


/* LastStandMinigameProperties::~LastStandMinigameProperties() */

void __thiscall
LastStandMinigameProperties::~LastStandMinigameProperties(LastStandMinigameProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0678c920;
  std::vector<PlantTag,std::allocator<PlantTag>>::~vector
            ((vector<PlantTag,std::allocator<PlantTag>> *)(this + 0x80));
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* LastStandMinigameProperties::~LastStandMinigameProperties() */

void __thiscall
LastStandMinigameProperties::~LastStandMinigameProperties(LastStandMinigameProperties *this)

{
  ~LastStandMinigameProperties(this);
  AK::FreeHook(this);
  return;
}

