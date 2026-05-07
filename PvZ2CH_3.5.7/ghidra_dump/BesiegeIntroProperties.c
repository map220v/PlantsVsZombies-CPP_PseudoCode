// Class: BesiegeIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeIntroProperties::StaticClassInit() */

void BesiegeIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"BesiegeIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04790ea8,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BesiegeIntroProperties::StaticGetClass() */

long * BesiegeIntroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BesiegeIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BesiegeIntroProperties::GetClass() const */

long * BesiegeIntroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"BesiegeIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BesiegeIntroProperties::BesiegeIntroProperties() */

void __thiscall BesiegeIntroProperties::BesiegeIntroProperties(BesiegeIntroProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined4 *)(this + 0x78) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_068d97a0;
  return;
}


/* BesiegeIntroProperties::StaticNew() */

BesiegeIntroProperties * BesiegeIntroProperties::StaticNew(void)

{
  BesiegeIntroProperties *this;
  
  this = ::operator_new(0x80);
  BesiegeIntroProperties(this);
  return this;
}


/* BesiegeIntroProperties::~BesiegeIntroProperties() */

void __thiscall BesiegeIntroProperties::~BesiegeIntroProperties(BesiegeIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_068d97a0;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* BesiegeIntroProperties::~BesiegeIntroProperties() */

void __thiscall BesiegeIntroProperties::~BesiegeIntroProperties(BesiegeIntroProperties *this)

{
  ~BesiegeIntroProperties(this);
  AK::FreeHook(this);
  return;
}


/* BesiegeIntroProperties::GetModuleClass() const */

long * BesiegeIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (BesiegeIntro::sClass != (long *)0x0) {
    return BesiegeIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  BesiegeIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"BesiegeIntro",uVar2,BesiegeIntro::StaticNew);
  BesiegeIntro::StaticClassInit();
  return BesiegeIntro::sClass;
}

