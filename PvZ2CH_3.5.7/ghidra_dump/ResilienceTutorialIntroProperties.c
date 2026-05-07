// Class: ResilienceTutorialIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResilienceTutorialIntroProperties::StaticClassInit() */

void ResilienceTutorialIntroProperties::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ResilienceEntity");
    (*pcVar3)(plVar2,asStack_10,FUN_04f63a8c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ResilienceTutorialIntroProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_04f66fec,0xb0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ResilienceTutorialIntroProperties::StaticGetClass() */

long * ResilienceTutorialIntroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ResilienceTutorialIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ResilienceTutorialIntroProperties::GetClass() const */

long * ResilienceTutorialIntroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ResilienceTutorialIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ResilienceTutorialIntroProperties::GetModuleClass() const */

long * ResilienceTutorialIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ResilienceTutorialIntro::sClass != (long *)0x0) {
    return ResilienceTutorialIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ResilienceTutorialIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"ResilienceTutorialIntro",uVar2,ResilienceTutorialIntro::StaticNew);
  ResilienceTutorialIntro::StaticClassInit();
  return ResilienceTutorialIntro::sClass;
}


/* ResilienceTutorialIntroProperties::ResilienceTutorialIntroProperties() */

void __thiscall
ResilienceTutorialIntroProperties::ResilienceTutorialIntroProperties
          (ResilienceTutorialIntroProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06a21420;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x90));
  Sexy::Point::Point((Point *)(this + 0xa8));
  return;
}


/* ResilienceTutorialIntroProperties::StaticNew() */

ResilienceTutorialIntroProperties * ResilienceTutorialIntroProperties::StaticNew(void)

{
  ResilienceTutorialIntroProperties *this;
  
  this = ::operator_new(0xb0);
  ResilienceTutorialIntroProperties(this);
  return this;
}


/* ResilienceTutorialIntroProperties::~ResilienceTutorialIntroProperties() */

void __thiscall
ResilienceTutorialIntroProperties::~ResilienceTutorialIntroProperties
          (ResilienceTutorialIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06a21420;
  std::vector<ResilienceEntity,std::allocator<ResilienceEntity>>::~vector
            ((vector<ResilienceEntity,std::allocator<ResilienceEntity>> *)(this + 0x90));
  std::vector<TutorialEntity,std::allocator<TutorialEntity>>::~vector
            ((vector<TutorialEntity,std::allocator<TutorialEntity>> *)(this + 0x78));
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* ResilienceTutorialIntroProperties::~ResilienceTutorialIntroProperties() */

void __thiscall
ResilienceTutorialIntroProperties::~ResilienceTutorialIntroProperties
          (ResilienceTutorialIntroProperties *this)

{
  ~ResilienceTutorialIntroProperties(this);
  AK::FreeHook(this);
  return;
}

