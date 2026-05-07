// Class: LevelMutatorRiftZombossPhasesProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorRiftZombossPhasesProps::StaticClassInit() */

void LevelMutatorRiftZombossPhasesProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelMutatorRiftZombossPhasesProps");
    (*pcVar2)(plVar1,asStack_10,FUN_036a31e0,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelMutatorRiftZombossPhasesProps::StaticGetClass() */

long * LevelMutatorRiftZombossPhasesProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorRiftZombossPhasesProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelMutatorRiftZombossPhasesProps::GetClass() const */

long * LevelMutatorRiftZombossPhasesProps::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorRiftZombossPhasesProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelMutatorRiftZombossPhasesProps::GetModuleClass() const */

long * LevelMutatorRiftZombossPhasesProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelMutatorRiftZombossPhasesModule::sClass != (long *)0x0) {
    return LevelMutatorRiftZombossPhasesModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelMutatorRiftZombossPhasesModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelMutatorRiftZombossPhasesModule",uVar2,
            LevelMutatorRiftZombossPhasesModule::StaticNew);
  return LevelMutatorRiftZombossPhasesModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorRiftZombossPhasesProps::GetDescription() const */

void LevelMutatorRiftZombossPhasesProps::GetDescription(void)

{
  char cVar1;
  long in_x0;
  long lVar2;
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
    Sexy::StrFormat(L"%d",awStack_18,(ulong)*(uint *)(in_x0 + 0x40));
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorRiftZombossPhasesProps::GetDescriptiveName() const */

void LevelMutatorRiftZombossPhasesProps::GetDescriptiveName(void)

{
  char cVar1;
  long in_x0;
  long lVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(in_x0 + 0x28));
  FUN_05476574(auStack_10);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18);
  if (cVar1 == '\0') {
    FUN_05476584();
  }
  else {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Sexy::ToWString((string *)(lVar2 + 0x18));
  }
  FUN_05476c50(auStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelMutatorRiftZombossPhasesProps::LevelMutatorRiftZombossPhasesProps() */

void __thiscall
LevelMutatorRiftZombossPhasesProps::LevelMutatorRiftZombossPhasesProps
          (LevelMutatorRiftZombossPhasesProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 3;
  *(undefined ***)this = &PTR_GetClass_066802e0;
  return;
}


/* LevelMutatorRiftZombossPhasesProps::StaticNew() */

LevelMutatorRiftZombossPhasesProps * LevelMutatorRiftZombossPhasesProps::StaticNew(void)

{
  LevelMutatorRiftZombossPhasesProps *this;
  
  this = ::operator_new(0x48);
  LevelMutatorRiftZombossPhasesProps(this);
  return this;
}


/* LevelMutatorRiftZombossPhasesProps::~LevelMutatorRiftZombossPhasesProps() */

void __thiscall
LevelMutatorRiftZombossPhasesProps::~LevelMutatorRiftZombossPhasesProps
          (LevelMutatorRiftZombossPhasesProps *this)

{
  *(undefined ***)this = &PTR_GetClass_066802e0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* LevelMutatorRiftZombossPhasesProps::~LevelMutatorRiftZombossPhasesProps() */

void __thiscall
LevelMutatorRiftZombossPhasesProps::~LevelMutatorRiftZombossPhasesProps
          (LevelMutatorRiftZombossPhasesProps *this)

{
  ~LevelMutatorRiftZombossPhasesProps(this);
  AK::FreeHook(this);
  return;
}

