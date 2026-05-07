// Class: StarChallengeProtectPlantByProtectorShieldProps


/* StarChallengeProtectPlantByProtectorShieldProps::GetDescriptiveName() const */

void __thiscall
StarChallengeProtectPlantByProtectorShieldProps::GetDescriptiveName
          (StarChallengeProtectPlantByProtectorShieldProps *this)

{
  TodStringTranslate(L"[STARCHALLENGE_PROTECT_PLANTS_BY_PROTECTER_SHIELD_NAME]");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeProtectPlantByProtectorShieldProps::GetDescription() const */

void StarChallengeProtectPlantByProtectorShieldProps::GetDescription(void)

{
  long in_x0;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",awStack_18,(ulong)*(uint *)(in_x0 + 0x40));
  FUN_05478178(awStack_10,L"[STARCHALLENGE_PROTECT_PLANTS_BY_PROTECTER_SHIELD_DESC]",auStack_20);
  TodReplaceString(awStack_10,L"{COUNT}",awStack_18);
  FUN_05476c50(awStack_10);
  nop();
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeProtectPlantByProtectorShieldProps::StaticClassInit() */

void StarChallengeProtectPlantByProtectorShieldProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeProtectPlantByProtectorShieldProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0448e41c,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeProtectPlantByProtectorShieldProps::StaticGetClass() */

long * StarChallengeProtectPlantByProtectorShieldProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeProtectPlantByProtectorShieldProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeProtectPlantByProtectorShieldProps::GetClass() const */

long * StarChallengeProtectPlantByProtectorShieldProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeProtectPlantByProtectorShieldProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeProtectPlantByProtectorShieldProps::GetModuleClass() const */

long * StarChallengeProtectPlantByProtectorShieldProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StarChallengeProtectPlantByProtectorShield::sClass != (long *)0x0) {
    return StarChallengeProtectPlantByProtectorShield::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StarChallengeProtectPlantByProtectorShield::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeProtectPlantByProtectorShield",uVar2,
            StarChallengeProtectPlantByProtectorShield::StaticNew);
  StarChallengeProtectPlantByProtectorShield::StaticClassInit();
  return StarChallengeProtectPlantByProtectorShield::sClass;
}


/* StarChallengeProtectPlantByProtectorShieldProps::StarChallengeProtectPlantByProtectorShieldProps()
    */

void __thiscall
StarChallengeProtectPlantByProtectorShieldProps::StarChallengeProtectPlantByProtectorShieldProps
          (StarChallengeProtectPlantByProtectorShieldProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_GetClass_06850820;
  return;
}


/* StarChallengeProtectPlantByProtectorShieldProps::StaticNew() */

StarChallengeProtectPlantByProtectorShieldProps *
StarChallengeProtectPlantByProtectorShieldProps::StaticNew(void)

{
  StarChallengeProtectPlantByProtectorShieldProps *this;
  
  this = ::operator_new(0x48);
  StarChallengeProtectPlantByProtectorShieldProps(this);
  return this;
}


/* StarChallengeProtectPlantByProtectorShieldProps::~StarChallengeProtectPlantByProtectorShieldProps()
    */

void __thiscall
StarChallengeProtectPlantByProtectorShieldProps::~StarChallengeProtectPlantByProtectorShieldProps
          (StarChallengeProtectPlantByProtectorShieldProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06850820;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* StarChallengeProtectPlantByProtectorShieldProps::~StarChallengeProtectPlantByProtectorShieldProps()
    */

void __thiscall
StarChallengeProtectPlantByProtectorShieldProps::~StarChallengeProtectPlantByProtectorShieldProps
          (StarChallengeProtectPlantByProtectorShieldProps *this)

{
  ~StarChallengeProtectPlantByProtectorShieldProps(this);
  AK::FreeHook(this);
  return;
}

