// Class: DestroyGridItemsChallengeProps


/* DestroyGridItemsChallengeProps::GetDescriptiveName() const */

void __thiscall
DestroyGridItemsChallengeProps::GetDescriptiveName(DestroyGridItemsChallengeProps *this)

{
  TodStringTranslate(L"[CHALLENGE_DESTROY_GRID_ITEMS_OF_TYPE_NAME]");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DestroyGridItemsChallengeProps::GetDescription() const */

void DestroyGridItemsChallengeProps::GetDescription(void)

{
  long in_x0;
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",awStack_18,(ulong)*(uint *)(in_x0 + 0x40));
  Sexy::ToWString((string *)(in_x0 + 0x50));
  TodReplaceString(awStack_10,L"{GRID_ITEMS}",awStack_18);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DestroyGridItemsChallengeProps::StaticClassInit() */

void DestroyGridItemsChallengeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"DestroyGridItemsChallengeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03686640,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DestroyGridItemsChallengeProps::StaticGetClass() */

long * DestroyGridItemsChallengeProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DestroyGridItemsChallengeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DestroyGridItemsChallengeProps::GetClass() const */

long * DestroyGridItemsChallengeProps::GetClass(void)

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
  (*pcVar3)(plVar1,"DestroyGridItemsChallengeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DestroyGridItemsChallengeProps::GetModuleClass() const */

long * DestroyGridItemsChallengeProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (DestroyGridItemsChallenge::sClass != (long *)0x0) {
    return DestroyGridItemsChallenge::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  DestroyGridItemsChallenge::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"DestroyGridItemsChallenge",uVar2,DestroyGridItemsChallenge::StaticNew);
  DestroyGridItemsChallenge::StaticClassInit();
  return DestroyGridItemsChallenge::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DestroyGridItemsChallengeProps::DestroyGridItemsChallengeProps() */

void __thiscall
DestroyGridItemsChallengeProps::DestroyGridItemsChallengeProps(DestroyGridItemsChallengeProps *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_GetClass_0667b8c0;
  std::string::string((string *)(this + 0x48),"");
  nop();
  std::string::string((string *)(this + 0x50),"");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DestroyGridItemsChallengeProps::StaticNew() */

DestroyGridItemsChallengeProps * DestroyGridItemsChallengeProps::StaticNew(void)

{
  DestroyGridItemsChallengeProps *this;
  
  this = ::operator_new(0x58);
  DestroyGridItemsChallengeProps(this);
  return this;
}


/* DestroyGridItemsChallengeProps::~DestroyGridItemsChallengeProps() */

void __thiscall
DestroyGridItemsChallengeProps::~DestroyGridItemsChallengeProps
          (DestroyGridItemsChallengeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0667b8c0;
  std::string::~string((string *)(this + 0x50));
  std::string::~string((string *)(this + 0x48));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* DestroyGridItemsChallengeProps::~DestroyGridItemsChallengeProps() */

void __thiscall
DestroyGridItemsChallengeProps::~DestroyGridItemsChallengeProps
          (DestroyGridItemsChallengeProps *this)

{
  ~DestroyGridItemsChallengeProps(this);
  AK::FreeHook(this);
  return;
}

