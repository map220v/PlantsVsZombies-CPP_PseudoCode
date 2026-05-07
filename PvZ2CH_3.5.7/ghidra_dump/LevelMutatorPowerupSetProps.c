// Class: LevelMutatorPowerupSetProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorPowerupSetProps::StaticClassInit() */

void LevelMutatorPowerupSetProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelMutatorPowerupSetProps");
    (*pcVar2)(plVar1,asStack_10,FUN_036a1bf4,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelMutatorPowerupSetProps::StaticGetClass() */

long * LevelMutatorPowerupSetProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorPowerupSetProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelMutatorPowerupSetProps::GetClass() const */

long * LevelMutatorPowerupSetProps::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorPowerupSetProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelMutatorPowerupSetProps::GetModuleClass() const */

long * LevelMutatorPowerupSetProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelMutatorPowerupSetModule::sClass != (long *)0x0) {
    return LevelMutatorPowerupSetModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelMutatorPowerupSetModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelMutatorPowerupSetModule",uVar2,LevelMutatorPowerupSetModule::StaticNew);
  return LevelMutatorPowerupSetModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorPowerupSetProps::GetDescription() const */

void LevelMutatorPowerupSetProps::GetDescription(void)

{
  char cVar1;
  long in_x0;
  long lVar2;
  undefined8 uVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)(in_x0 + 0x28));
  FUN_05476574();
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_28);
  if (cVar1 != '\0') {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::ToWString((string *)(lVar2 + 0x10));
    uVar3 = FUN_0547429c(in_x0 + 0x40);
    Sexy::StrFormat(L"%s",awStack_18,uVar3);
    TodReplaceString(awStack_20,L"{VALUE}",awStack_18);
    FUN_054766c8();
    FUN_05476c50(auStack_10);
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_20);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelMutatorPowerupSetProps::LevelMutatorPowerupSetProps() */

void __thiscall
LevelMutatorPowerupSetProps::LevelMutatorPowerupSetProps(LevelMutatorPowerupSetProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0667f7e0;
  Set8BytesTo0(this + 0x40);
  return;
}


/* LevelMutatorPowerupSetProps::StaticNew() */

LevelMutatorPowerupSetProps * LevelMutatorPowerupSetProps::StaticNew(void)

{
  LevelMutatorPowerupSetProps *this;
  
  this = ::operator_new(0x48);
  LevelMutatorPowerupSetProps(this);
  return this;
}


/* LevelMutatorPowerupSetProps::~LevelMutatorPowerupSetProps() */

void __thiscall
LevelMutatorPowerupSetProps::~LevelMutatorPowerupSetProps(LevelMutatorPowerupSetProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0667f7e0;
  std::string::~string((string *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* LevelMutatorPowerupSetProps::~LevelMutatorPowerupSetProps() */

void __thiscall
LevelMutatorPowerupSetProps::~LevelMutatorPowerupSetProps(LevelMutatorPowerupSetProps *this)

{
  ~LevelMutatorPowerupSetProps(this);
  AK::FreeHook(this);
  return;
}

