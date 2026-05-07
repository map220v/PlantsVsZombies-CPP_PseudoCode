// Class: LevelMutatorSunDropperProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorSunDropperProps::StaticClassInit() */

void LevelMutatorSunDropperProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelMutatorSunDropperProps");
    (*pcVar2)(plVar1,asStack_10,FUN_036a2ed0,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelMutatorSunDropperProps::StaticGetClass() */

long * LevelMutatorSunDropperProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorSunDropperProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelMutatorSunDropperProps::GetClass() const */

long * LevelMutatorSunDropperProps::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorSunDropperProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelMutatorSunDropperProps::GetModuleClass() const */

long * LevelMutatorSunDropperProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelMutatorSunDropperModule::sClass != (long *)0x0) {
    return LevelMutatorSunDropperModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelMutatorSunDropperModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelMutatorSunDropperModule",uVar2,LevelMutatorSunDropperModule::StaticNew);
  return LevelMutatorSunDropperModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorSunDropperProps::GetDescription() const */

void LevelMutatorSunDropperProps::GetDescription(void)

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
    Sexy::StrFormat(L"%d",awStack_18,0);
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


/* LevelMutatorSunDropperProps::LevelMutatorSunDropperProps() */

void __thiscall
LevelMutatorSunDropperProps::LevelMutatorSunDropperProps(LevelMutatorSunDropperProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06680180;
  std::__exception_ptr::exception_ptr::exception_ptr
            ((exception_ptr *)(this + 0x40),(_func_void *)&PTR_GetClass_06680180);
  return;
}


/* LevelMutatorSunDropperProps::StaticNew() */

LevelMutatorSunDropperProps * LevelMutatorSunDropperProps::StaticNew(void)

{
  LevelMutatorSunDropperProps *this;
  
  this = ::operator_new(0x48);
  LevelMutatorSunDropperProps(this);
  return this;
}


/* LevelMutatorSunDropperProps::~LevelMutatorSunDropperProps() */

void __thiscall
LevelMutatorSunDropperProps::~LevelMutatorSunDropperProps(LevelMutatorSunDropperProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06680180;
  Sexy::RtId::~RtId((RtId *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* LevelMutatorSunDropperProps::~LevelMutatorSunDropperProps() */

void __thiscall
LevelMutatorSunDropperProps::~LevelMutatorSunDropperProps(LevelMutatorSunDropperProps *this)

{
  ~LevelMutatorSunDropperProps(this);
  AK::FreeHook(this);
  return;
}

