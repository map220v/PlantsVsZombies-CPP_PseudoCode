// Class: StarChallengeSaveBombsProps


/* StarChallengeSaveBombsProps::GetDescription() const */

void __thiscall StarChallengeSaveBombsProps::GetDescription(StarChallengeSaveBombsProps *this)

{
  TodStringTranslate(L"[STARCHALLENGE_RETAIN_BOMBS]");
  return;
}


/* StarChallengeSaveBombsProps::GetDescriptiveName() const */

void __thiscall StarChallengeSaveBombsProps::GetDescriptiveName(StarChallengeSaveBombsProps *this)

{
  TodStringTranslate(L"[STARCHALLENGE_RETAIN_BOMBS_NAME]");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeSaveBombsProps::StaticClassInit() */

void StarChallengeSaveBombsProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeSaveBombsProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0447a6b8,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeSaveBombsProps::StaticGetClass() */

long * StarChallengeSaveBombsProps::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeSaveBombsProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeSaveBombsProps::GetClass() const */

long * StarChallengeSaveBombsProps::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeSaveBombsProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeSaveBombsProps::GetModuleClass() const */

long * StarChallengeSaveBombsProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StarChallengeSaveBombs::sClass != (long *)0x0) {
    return StarChallengeSaveBombs::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StarChallengeSaveBombs::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeSaveBombs",uVar2,StarChallengeSaveBombs::StaticNew);
  StarChallengeSaveBombs::StaticClassInit();
  return StarChallengeSaveBombs::sClass;
}


/* StarChallengeSaveBombsProps::StarChallengeSaveBombsProps() */

void __thiscall
StarChallengeSaveBombsProps::StarChallengeSaveBombsProps(StarChallengeSaveBombsProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0684e400;
  return;
}


/* StarChallengeSaveBombsProps::StaticNew() */

StarChallengeSaveBombsProps * StarChallengeSaveBombsProps::StaticNew(void)

{
  StarChallengeSaveBombsProps *this;
  
  this = ::operator_new(0x40);
  StarChallengeSaveBombsProps(this);
  return this;
}


/* StarChallengeSaveBombsProps::~StarChallengeSaveBombsProps() */

void __thiscall
StarChallengeSaveBombsProps::~StarChallengeSaveBombsProps(StarChallengeSaveBombsProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0684e400;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* StarChallengeSaveBombsProps::~StarChallengeSaveBombsProps() */

void __thiscall
StarChallengeSaveBombsProps::~StarChallengeSaveBombsProps(StarChallengeSaveBombsProps *this)

{
  ~StarChallengeSaveBombsProps(this);
  AK::FreeHook(this);
  return;
}

