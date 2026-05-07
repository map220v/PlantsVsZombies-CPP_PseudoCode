// Class: MinecartTutorialIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MinecartTutorialIntroProperties::StaticClassInit() */

void MinecartTutorialIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"MinecartTutorialIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03edce70,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MinecartTutorialIntroProperties::StaticGetClass() */

long * MinecartTutorialIntroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MinecartTutorialIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MinecartTutorialIntroProperties::GetClass() const */

long * MinecartTutorialIntroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"MinecartTutorialIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MinecartTutorialIntroProperties::GetModuleClass() const */

long * MinecartTutorialIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (MinecartTutorialIntro::sClass != (long *)0x0) {
    return MinecartTutorialIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  MinecartTutorialIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"MinecartTutorialIntro",uVar2,MinecartTutorialIntro::StaticNew);
  MinecartTutorialIntro::StaticClassInit();
  return MinecartTutorialIntro::sClass;
}


/* MinecartTutorialIntroProperties::MinecartTutorialIntroProperties() */

void __thiscall
MinecartTutorialIntroProperties::MinecartTutorialIntroProperties
          (MinecartTutorialIntroProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06792b90;
  return;
}


/* MinecartTutorialIntroProperties::StaticNew() */

MinecartTutorialIntroProperties * MinecartTutorialIntroProperties::StaticNew(void)

{
  MinecartTutorialIntroProperties *this;
  
  this = ::operator_new(0x78);
  MinecartTutorialIntroProperties(this);
  return this;
}


/* MinecartTutorialIntroProperties::~MinecartTutorialIntroProperties() */

void __thiscall
MinecartTutorialIntroProperties::~MinecartTutorialIntroProperties
          (MinecartTutorialIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06792b90;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* MinecartTutorialIntroProperties::~MinecartTutorialIntroProperties() */

void __thiscall
MinecartTutorialIntroProperties::~MinecartTutorialIntroProperties
          (MinecartTutorialIntroProperties *this)

{
  ~MinecartTutorialIntroProperties(this);
  AK::FreeHook(this);
  return;
}

