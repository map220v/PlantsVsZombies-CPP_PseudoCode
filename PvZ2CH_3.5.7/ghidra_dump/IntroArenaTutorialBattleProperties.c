// Class: IntroArenaTutorialBattleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaTutorialBattleProperties::StaticClassInit() */

void IntroArenaTutorialBattleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"IntroArenaTutorialBattleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04b1b094,0xb0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroArenaTutorialBattleProperties::StaticGetClass() */

long * IntroArenaTutorialBattleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"IntroArenaTutorialBattleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntroArenaTutorialBattleProperties::GetClass() const */

long * IntroArenaTutorialBattleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"IntroArenaTutorialBattleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntroArenaTutorialBattleProperties::GetModuleClass() const */

long * IntroArenaTutorialBattleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (IntroArenaTutorialBattleModule::sClass != (long *)0x0) {
    return IntroArenaTutorialBattleModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  IntroArenaTutorialBattleModule::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"IntroArenaTutorialBattleModule",uVar2,IntroArenaTutorialBattleModule::StaticNew)
  ;
  IntroArenaTutorialBattleModule::StaticClassInit();
  return IntroArenaTutorialBattleModule::sClass;
}


/* IntroArenaTutorialBattleProperties::IntroArenaTutorialBattleProperties() */

void __thiscall
IntroArenaTutorialBattleProperties::IntroArenaTutorialBattleProperties
          (IntroArenaTutorialBattleProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06955060;
  Set8BytesTo0(this + 0x80);
  Set8BytesTo0(this + 0x88);
  *(undefined4 *)(this + 0xa0) = 9;
  *(undefined4 *)(this + 0xa8) = 500;
  *(undefined4 *)(this + 0x78) = 0x40c00000;
  *(undefined4 *)(this + 0x7c) = 0x40200000;
  *(undefined4 *)(this + 0x90) = 0x43b40000;
  *(undefined4 *)(this + 0x94) = 0x41c80000;
  *(undefined4 *)(this + 0x9c) = 0x3f000000;
  *(undefined4 *)(this + 0x98) = 0x42200000;
  *(undefined4 *)(this + 0xa4) = 0x41f00000;
  return;
}


/* IntroArenaTutorialBattleProperties::StaticNew() */

IntroArenaTutorialBattleProperties * IntroArenaTutorialBattleProperties::StaticNew(void)

{
  IntroArenaTutorialBattleProperties *this;
  
  this = ::operator_new(0xb0);
  IntroArenaTutorialBattleProperties(this);
  return this;
}


/* IntroArenaTutorialBattleProperties::~IntroArenaTutorialBattleProperties() */

void __thiscall
IntroArenaTutorialBattleProperties::~IntroArenaTutorialBattleProperties
          (IntroArenaTutorialBattleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06955060;
  std::string::~string((string *)(this + 0x88));
  std::string::~string((string *)(this + 0x80));
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* IntroArenaTutorialBattleProperties::~IntroArenaTutorialBattleProperties() */

void __thiscall
IntroArenaTutorialBattleProperties::~IntroArenaTutorialBattleProperties
          (IntroArenaTutorialBattleProperties *this)

{
  ~IntroArenaTutorialBattleProperties(this);
  AK::FreeHook(this);
  return;
}

