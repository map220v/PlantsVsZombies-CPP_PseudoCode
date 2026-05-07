// Class: StarChallengeBeatTheLevelProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeBeatTheLevelProps::GetDescription() const */

void StarChallengeBeatTheLevelProps::GetDescription(void)

{
  long in_x0;
  wstring awStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::UTF8StringToWString((Sexy *)(in_x0 + 0x40),___stack_chk_guard);
  TodStringTranslate(awStack_10);
  FUN_05476c50(awStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeBeatTheLevelProps::GetDescriptiveName() const */

void StarChallengeBeatTheLevelProps::GetDescriptiveName(void)

{
  long in_x0;
  wstring awStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::UTF8StringToWString((Sexy *)(in_x0 + 0x48),___stack_chk_guard);
  TodStringTranslate(awStack_10);
  FUN_05476c50(awStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeBeatTheLevelProps::StaticClassInit() */

void StarChallengeBeatTheLevelProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeBeatTheLevelProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04473ce4,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeBeatTheLevelProps::StaticGetClass() */

long * StarChallengeBeatTheLevelProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeBeatTheLevelProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeBeatTheLevelProps::GetClass() const */

long * StarChallengeBeatTheLevelProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeBeatTheLevelProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeBeatTheLevelProps::GetModuleClass() const */

long * StarChallengeBeatTheLevelProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StarChallengeBeatTheLevel::sClass != (long *)0x0) {
    return StarChallengeBeatTheLevel::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StarChallengeBeatTheLevel::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeBeatTheLevel",uVar2,StarChallengeBeatTheLevel::StaticNew);
  StarChallengeBeatTheLevel::StaticClassInit();
  return StarChallengeBeatTheLevel::sClass;
}


/* StarChallengeBeatTheLevelProps::StarChallengeBeatTheLevelProps() */

void __thiscall
StarChallengeBeatTheLevelProps::StarChallengeBeatTheLevelProps(StarChallengeBeatTheLevelProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0684d990;
  Set8BytesTo0(this + 0x40);
  Set8BytesTo0(this + 0x48);
  return;
}


/* StarChallengeBeatTheLevelProps::StaticNew() */

StarChallengeBeatTheLevelProps * StarChallengeBeatTheLevelProps::StaticNew(void)

{
  StarChallengeBeatTheLevelProps *this;
  
  this = ::operator_new(0x50);
  StarChallengeBeatTheLevelProps(this);
  return this;
}


/* StarChallengeBeatTheLevelProps::~StarChallengeBeatTheLevelProps() */

void __thiscall
StarChallengeBeatTheLevelProps::~StarChallengeBeatTheLevelProps
          (StarChallengeBeatTheLevelProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0684d990;
  std::string::~string((string *)(this + 0x48));
  std::string::~string((string *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* StarChallengeBeatTheLevelProps::~StarChallengeBeatTheLevelProps() */

void __thiscall
StarChallengeBeatTheLevelProps::~StarChallengeBeatTheLevelProps
          (StarChallengeBeatTheLevelProps *this)

{
  ~StarChallengeBeatTheLevelProps(this);
  AK::FreeHook(this);
  return;
}

