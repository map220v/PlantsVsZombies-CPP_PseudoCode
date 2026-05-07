// Class: PowerTileIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileIntroProperties::StaticClassInit() */

void PowerTileIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PowerTileIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04303ff0,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerTileIntroProperties::StaticGetClass() */

long * PowerTileIntroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PowerTileIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerTileIntroProperties::GetClass() const */

long * PowerTileIntroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PowerTileIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerTileIntroProperties::GetModuleClass() const */

long * PowerTileIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PowerTileIntro::sClass != (long *)0x0) {
    return PowerTileIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PowerTileIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"PowerTileIntro",uVar2,PowerTileIntro::StaticNew);
  PowerTileIntro::StaticClassInit();
  return PowerTileIntro::sClass;
}


/* PowerTileIntroProperties::PowerTileIntroProperties() */

void __thiscall PowerTileIntroProperties::PowerTileIntroProperties(PowerTileIntroProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06831bc0;
  return;
}


/* PowerTileIntroProperties::StaticNew() */

PowerTileIntroProperties * PowerTileIntroProperties::StaticNew(void)

{
  PowerTileIntroProperties *this;
  
  this = ::operator_new(0x78);
  PowerTileIntroProperties(this);
  return this;
}


/* PowerTileIntroProperties::~PowerTileIntroProperties() */

void __thiscall PowerTileIntroProperties::~PowerTileIntroProperties(PowerTileIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06831bc0;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* PowerTileIntroProperties::~PowerTileIntroProperties() */

void __thiscall PowerTileIntroProperties::~PowerTileIntroProperties(PowerTileIntroProperties *this)

{
  ~PowerTileIntroProperties(this);
  AK::FreeHook(this);
  return;
}

