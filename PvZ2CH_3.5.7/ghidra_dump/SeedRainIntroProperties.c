// Class: SeedRainIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedRainIntroProperties::StaticClassInit() */

void SeedRainIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"SeedRainIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03e5120c,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedRainIntroProperties::StaticGetClass() */

long * SeedRainIntroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SeedRainIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedRainIntroProperties::GetClass() const */

long * SeedRainIntroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"SeedRainIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedRainIntroProperties::SeedRainIntroProperties() */

void __thiscall SeedRainIntroProperties::SeedRainIntroProperties(SeedRainIntroProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0678bca0;
  return;
}


/* SeedRainIntroProperties::StaticNew() */

SeedRainIntroProperties * SeedRainIntroProperties::StaticNew(void)

{
  SeedRainIntroProperties *this;
  
  this = ::operator_new(0x78);
  SeedRainIntroProperties(this);
  return this;
}


/* SeedRainIntroProperties::~SeedRainIntroProperties() */

void __thiscall SeedRainIntroProperties::~SeedRainIntroProperties(SeedRainIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0678bca0;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* SeedRainIntroProperties::~SeedRainIntroProperties() */

void __thiscall SeedRainIntroProperties::~SeedRainIntroProperties(SeedRainIntroProperties *this)

{
  ~SeedRainIntroProperties(this);
  AK::FreeHook(this);
  return;
}


/* SeedRainIntroProperties::GetModuleClass() const */

long * SeedRainIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SeedRainIntro::sClass != (long *)0x0) {
    return SeedRainIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SeedRainIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"SeedRainIntro",uVar2,SeedRainIntro::StaticNew);
  SeedRainIntro::StaticClassInit();
  return SeedRainIntro::sClass;
}

