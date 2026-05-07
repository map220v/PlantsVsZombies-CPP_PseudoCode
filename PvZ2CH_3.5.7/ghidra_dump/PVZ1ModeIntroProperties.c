// Class: PVZ1ModeIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeIntroProperties::StaticClassInit() */

void PVZ1ModeIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1ModeIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03615f60,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeIntroProperties::StaticGetClass() */

long * PVZ1ModeIntroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1ModeIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1ModeIntroProperties::GetClass() const */

long * PVZ1ModeIntroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1ModeIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1ModeIntroProperties::PVZ1ModeIntroProperties() */

void __thiscall PVZ1ModeIntroProperties::PVZ1ModeIntroProperties(PVZ1ModeIntroProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined ***)this = &PTR_GetClass_06668ca0;
  return;
}


/* PVZ1ModeIntroProperties::StaticNew() */

PVZ1ModeIntroProperties * PVZ1ModeIntroProperties::StaticNew(void)

{
  PVZ1ModeIntroProperties *this;
  
  this = ::operator_new(0x80);
  PVZ1ModeIntroProperties(this);
  return this;
}


/* PVZ1ModeIntroProperties::~PVZ1ModeIntroProperties() */

void __thiscall PVZ1ModeIntroProperties::~PVZ1ModeIntroProperties(PVZ1ModeIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06668ca0;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* PVZ1ModeIntroProperties::~PVZ1ModeIntroProperties() */

void __thiscall PVZ1ModeIntroProperties::~PVZ1ModeIntroProperties(PVZ1ModeIntroProperties *this)

{
  ~PVZ1ModeIntroProperties(this);
  AK::FreeHook(this);
  return;
}


/* PVZ1ModeIntroProperties::GetModuleClass() const */

long * PVZ1ModeIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PVZ1ModeIntro::sClass != (long *)0x0) {
    return PVZ1ModeIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PVZ1ModeIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"PVZ1ModeIntro",uVar2,PVZ1ModeIntro::StaticNew);
  PVZ1ModeIntro::StaticClassInit();
  return PVZ1ModeIntro::sClass;
}

