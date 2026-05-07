// Class: BeghouledIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledIntroProperties::StaticClassInit() */

void BeghouledIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"BeghouledIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03ba2ae4,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BeghouledIntroProperties::StaticGetClass() */

long * BeghouledIntroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BeghouledIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BeghouledIntroProperties::GetClass() const */

long * BeghouledIntroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"BeghouledIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BeghouledIntroProperties::GetModuleClass() const */

long * BeghouledIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (BeghouledIntro::sClass != (long *)0x0) {
    return BeghouledIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  BeghouledIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"BeghouledIntro",uVar2,BeghouledIntro::StaticNew);
  BeghouledIntro::StaticClassInit();
  return BeghouledIntro::sClass;
}


/* BeghouledIntroProperties::BeghouledIntroProperties() */

void __thiscall BeghouledIntroProperties::BeghouledIntroProperties(BeghouledIntroProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06737470;
  return;
}


/* BeghouledIntroProperties::StaticNew() */

BeghouledIntroProperties * BeghouledIntroProperties::StaticNew(void)

{
  BeghouledIntroProperties *this;
  
  this = ::operator_new(0x78);
  BeghouledIntroProperties(this);
  return this;
}


/* BeghouledIntroProperties::~BeghouledIntroProperties() */

void __thiscall BeghouledIntroProperties::~BeghouledIntroProperties(BeghouledIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06737470;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* BeghouledIntroProperties::~BeghouledIntroProperties() */

void __thiscall BeghouledIntroProperties::~BeghouledIntroProperties(BeghouledIntroProperties *this)

{
  ~BeghouledIntroProperties(this);
  AK::FreeHook(this);
  return;
}

