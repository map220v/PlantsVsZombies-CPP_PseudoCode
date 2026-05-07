// Class: ChristmasProtectIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasProtectIntroProperties::StaticClassInit() */

void ChristmasProtectIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ChristmasProtectIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03e59a8c,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChristmasProtectIntroProperties::StaticGetClass() */

long * ChristmasProtectIntroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ChristmasProtectIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChristmasProtectIntroProperties::GetClass() const */

long * ChristmasProtectIntroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ChristmasProtectIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChristmasProtectIntroProperties::ChristmasProtectIntroProperties() */

void __thiscall
ChristmasProtectIntroProperties::ChristmasProtectIntroProperties
          (ChristmasProtectIntroProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0678c420;
  Set8BytesTo0(this + 0x78);
  return;
}


/* ChristmasProtectIntroProperties::StaticNew() */

ChristmasProtectIntroProperties * ChristmasProtectIntroProperties::StaticNew(void)

{
  ChristmasProtectIntroProperties *this;
  
  this = ::operator_new(0x80);
  ChristmasProtectIntroProperties(this);
  return this;
}


/* ChristmasProtectIntroProperties::~ChristmasProtectIntroProperties() */

void __thiscall
ChristmasProtectIntroProperties::~ChristmasProtectIntroProperties
          (ChristmasProtectIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0678c420;
  std::string::~string((string *)(this + 0x78));
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* ChristmasProtectIntroProperties::~ChristmasProtectIntroProperties() */

void __thiscall
ChristmasProtectIntroProperties::~ChristmasProtectIntroProperties
          (ChristmasProtectIntroProperties *this)

{
  ~ChristmasProtectIntroProperties(this);
  AK::FreeHook(this);
  return;
}


/* ChristmasProtectIntroProperties::GetModuleClass() const */

long * ChristmasProtectIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ChristmasProtectIntro::sClass != (long *)0x0) {
    return ChristmasProtectIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ChristmasProtectIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"ChristmasProtectIntro",uVar2,ChristmasProtectIntro::StaticNew);
  ChristmasProtectIntro::StaticClassInit();
  return ChristmasProtectIntro::sClass;
}

