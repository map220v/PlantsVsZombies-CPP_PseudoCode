// Class: DangerRoomLevelIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomLevelIntroProperties::StaticClassInit() */

void DangerRoomLevelIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"DangerRoomLevelIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03c92504,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomLevelIntroProperties::StaticGetClass() */

long * DangerRoomLevelIntroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DangerRoomLevelIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomLevelIntroProperties::GetClass() const */

long * DangerRoomLevelIntroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"DangerRoomLevelIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomLevelIntroProperties::GetModuleClass() const */

long * DangerRoomLevelIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (DangerRoomLevelIntro::sClass != (long *)0x0) {
    return DangerRoomLevelIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  DangerRoomLevelIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomLevelIntro",uVar2,DangerRoomLevelIntro::StaticNew);
  DangerRoomLevelIntro::StaticClassInit();
  return DangerRoomLevelIntro::sClass;
}


/* DangerRoomLevelIntroProperties::DangerRoomLevelIntroProperties() */

void __thiscall
DangerRoomLevelIntroProperties::DangerRoomLevelIntroProperties(DangerRoomLevelIntroProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0675b680;
  return;
}


/* DangerRoomLevelIntroProperties::StaticNew() */

DangerRoomLevelIntroProperties * DangerRoomLevelIntroProperties::StaticNew(void)

{
  DangerRoomLevelIntroProperties *this;
  
  this = ::operator_new(0x78);
  DangerRoomLevelIntroProperties(this);
  return this;
}


/* DangerRoomLevelIntroProperties::~DangerRoomLevelIntroProperties() */

void __thiscall
DangerRoomLevelIntroProperties::~DangerRoomLevelIntroProperties
          (DangerRoomLevelIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0675b680;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* DangerRoomLevelIntroProperties::~DangerRoomLevelIntroProperties() */

void __thiscall
DangerRoomLevelIntroProperties::~DangerRoomLevelIntroProperties
          (DangerRoomLevelIntroProperties *this)

{
  ~DangerRoomLevelIntroProperties(this);
  AK::FreeHook(this);
  return;
}

