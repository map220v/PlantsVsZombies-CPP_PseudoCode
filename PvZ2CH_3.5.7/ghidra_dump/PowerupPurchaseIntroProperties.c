// Class: PowerupPurchaseIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupPurchaseIntroProperties::StaticClassInit() */

void PowerupPurchaseIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PowerupPurchaseIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0430b9b8,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupPurchaseIntroProperties::StaticGetClass() */

long * PowerupPurchaseIntroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PowerupPurchaseIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupPurchaseIntroProperties::GetClass() const */

long * PowerupPurchaseIntroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PowerupPurchaseIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupPurchaseIntroProperties::GetModuleClass() const */

long * PowerupPurchaseIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PowerupPurchaseIntro::sClass != (long *)0x0) {
    return PowerupPurchaseIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PowerupPurchaseIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupPurchaseIntro",uVar2,PowerupPurchaseIntro::StaticNew);
  PowerupPurchaseIntro::StaticClassInit();
  return PowerupPurchaseIntro::sClass;
}


/* PowerupPurchaseIntroProperties::PowerupPurchaseIntroProperties() */

void __thiscall
PowerupPurchaseIntroProperties::PowerupPurchaseIntroProperties(PowerupPurchaseIntroProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06832290;
  Set8BytesTo0(this + 0x78);
  return;
}


/* PowerupPurchaseIntroProperties::StaticNew() */

PowerupPurchaseIntroProperties * PowerupPurchaseIntroProperties::StaticNew(void)

{
  PowerupPurchaseIntroProperties *this;
  
  this = ::operator_new(0x80);
  PowerupPurchaseIntroProperties(this);
  return this;
}


/* PowerupPurchaseIntroProperties::~PowerupPurchaseIntroProperties() */

void __thiscall
PowerupPurchaseIntroProperties::~PowerupPurchaseIntroProperties
          (PowerupPurchaseIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06832290;
  std::string::~string((string *)(this + 0x78));
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* PowerupPurchaseIntroProperties::~PowerupPurchaseIntroProperties() */

void __thiscall
PowerupPurchaseIntroProperties::~PowerupPurchaseIntroProperties
          (PowerupPurchaseIntroProperties *this)

{
  ~PowerupPurchaseIntroProperties(this);
  AK::FreeHook(this);
  return;
}

