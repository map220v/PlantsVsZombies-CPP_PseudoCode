// Class: ZombossBattleIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBattleIntroProperties::StaticClassInit() */

void ZombossBattleIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossBattleIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04757374,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossBattleIntroProperties::StaticGetClass() */

long * ZombossBattleIntroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossBattleIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossBattleIntroProperties::GetClass() const */

long * ZombossBattleIntroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossBattleIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossBattleIntroProperties::GetModuleClass() const */

long * ZombossBattleIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ZombossBattleIntro::sClass != (long *)0x0) {
    return ZombossBattleIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ZombossBattleIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossBattleIntro",uVar2,ZombossBattleIntro::StaticNew);
  ZombossBattleIntro::StaticClassInit();
  return ZombossBattleIntro::sClass;
}


/* ZombossBattleIntroProperties::ZombossBattleIntroProperties() */

void __thiscall
ZombossBattleIntroProperties::ZombossBattleIntroProperties(ZombossBattleIntroProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined4 *)(this + 0x78) = 3;
  this[0x7c] = (ZombossBattleIntroProperties)0x0;
  *(undefined ***)this = &PTR_GetClass_068cc720;
  return;
}


/* ZombossBattleIntroProperties::StaticNew() */

ZombossBattleIntroProperties * ZombossBattleIntroProperties::StaticNew(void)

{
  ZombossBattleIntroProperties *this;
  
  this = ::operator_new(0x80);
  ZombossBattleIntroProperties(this);
  return this;
}


/* ZombossBattleIntroProperties::~ZombossBattleIntroProperties() */

void __thiscall
ZombossBattleIntroProperties::~ZombossBattleIntroProperties(ZombossBattleIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_068cc720;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* ZombossBattleIntroProperties::~ZombossBattleIntroProperties() */

void __thiscall
ZombossBattleIntroProperties::~ZombossBattleIntroProperties(ZombossBattleIntroProperties *this)

{
  ~ZombossBattleIntroProperties(this);
  AK::FreeHook(this);
  return;
}

