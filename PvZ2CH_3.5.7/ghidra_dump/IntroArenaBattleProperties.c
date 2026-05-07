// Class: IntroArenaBattleProperties


/* IntroArenaBattleProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
IntroArenaBattleProperties::GatherResourceRequirements
          (IntroArenaBattleProperties *this,set *param_1)

{
  Sexy::OutputDebugStrF((wchar_t *)"IntroArenaBattleProperties::GatherResourceRequirements");
  LevelModuleProperties::GatherResourceRequirements((LevelModuleProperties *)this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaBattleProperties::StaticClassInit() */

void IntroArenaBattleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"IntroArenaBattleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04b05e2c,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroArenaBattleProperties::StaticGetClass() */

long * IntroArenaBattleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"IntroArenaBattleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntroArenaBattleProperties::GetClass() const */

long * IntroArenaBattleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"IntroArenaBattleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntroArenaBattleProperties::GetModuleClass() const */

long * IntroArenaBattleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (IntroArenaBattle::sClass != (long *)0x0) {
    return IntroArenaBattle::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  IntroArenaBattle::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"IntroArenaBattle",uVar2,IntroArenaBattle::StaticNew);
  IntroArenaBattle::StaticClassInit();
  return IntroArenaBattle::sClass;
}


/* IntroArenaBattleProperties::IntroArenaBattleProperties() */

void __thiscall
IntroArenaBattleProperties::IntroArenaBattleProperties(IntroArenaBattleProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06953a90;
  return;
}


/* IntroArenaBattleProperties::StaticNew() */

IntroArenaBattleProperties * IntroArenaBattleProperties::StaticNew(void)

{
  IntroArenaBattleProperties *this;
  
  this = ::operator_new(0x78);
  IntroArenaBattleProperties(this);
  return this;
}


/* IntroArenaBattleProperties::~IntroArenaBattleProperties() */

void __thiscall
IntroArenaBattleProperties::~IntroArenaBattleProperties(IntroArenaBattleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06953a90;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* IntroArenaBattleProperties::~IntroArenaBattleProperties() */

void __thiscall
IntroArenaBattleProperties::~IntroArenaBattleProperties(IntroArenaBattleProperties *this)

{
  ~IntroArenaBattleProperties(this);
  AK::FreeHook(this);
  return;
}

