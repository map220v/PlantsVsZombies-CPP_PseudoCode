// Class: StarChallengeSaveMowersProps


/* StarChallengeSaveMowersProps::GetDescription() const */

void __thiscall StarChallengeSaveMowersProps::GetDescription(StarChallengeSaveMowersProps *this)

{
  TodStringTranslate(L"[STARCHALLENGE_RETAIN_MOWERS]");
  return;
}


/* StarChallengeSaveMowersProps::GetDescriptiveName() const */

void __thiscall StarChallengeSaveMowersProps::GetDescriptiveName(StarChallengeSaveMowersProps *this)

{
  TodStringTranslate(L"[STARCHALLENGE_RETAIN_MOWERS_NAME]");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeSaveMowersProps::StaticClassInit() */

void StarChallengeSaveMowersProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeSaveMowersProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04479d00,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeSaveMowersProps::StaticGetClass() */

long * StarChallengeSaveMowersProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeSaveMowersProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeSaveMowersProps::GetClass() const */

long * StarChallengeSaveMowersProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeSaveMowersProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeSaveMowersProps::GetModuleClass() const */

long * StarChallengeSaveMowersProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StarChallengeSaveMowers::sClass != (long *)0x0) {
    return StarChallengeSaveMowers::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StarChallengeSaveMowers::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeSaveMowers",uVar2,StarChallengeSaveMowers::StaticNew);
  StarChallengeSaveMowers::StaticClassInit();
  return StarChallengeSaveMowers::sClass;
}


/* StarChallengeSaveMowersProps::StarChallengeSaveMowersProps() */

void __thiscall
StarChallengeSaveMowersProps::StarChallengeSaveMowersProps(StarChallengeSaveMowersProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0684e250;
  return;
}


/* StarChallengeSaveMowersProps::StaticNew() */

StarChallengeSaveMowersProps * StarChallengeSaveMowersProps::StaticNew(void)

{
  StarChallengeSaveMowersProps *this;
  
  this = ::operator_new(0x40);
  StarChallengeSaveMowersProps(this);
  return this;
}


/* StarChallengeSaveMowersProps::~StarChallengeSaveMowersProps() */

void __thiscall
StarChallengeSaveMowersProps::~StarChallengeSaveMowersProps(StarChallengeSaveMowersProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0684e250;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* StarChallengeSaveMowersProps::~StarChallengeSaveMowersProps() */

void __thiscall
StarChallengeSaveMowersProps::~StarChallengeSaveMowersProps(StarChallengeSaveMowersProps *this)

{
  ~StarChallengeSaveMowersProps(this);
  AK::FreeHook(this);
  return;
}

