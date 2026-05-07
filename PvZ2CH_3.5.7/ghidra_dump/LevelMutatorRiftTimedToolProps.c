// Class: LevelMutatorRiftTimedToolProps


/* LevelMutatorRiftTimedToolProps::GetModuleClass() const */

long * LevelMutatorRiftTimedToolProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelMutatorRiftTimedToolModule::sClass != (long *)0x0) {
    return LevelMutatorRiftTimedToolModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelMutatorRiftTimedToolModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelMutatorRiftTimedToolModule",uVar2,
            LevelMutatorRiftTimedToolModule::StaticNew);
  LevelMutatorRiftTimedToolModule::StaticClassInit();
  return LevelMutatorRiftTimedToolModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorRiftTimedToolProps::StaticClassInit() */

void LevelMutatorRiftTimedToolProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelMutatorRiftTimedToolProps");
    (*pcVar2)(plVar1,asStack_10,FUN_036a4450,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelMutatorRiftTimedToolProps::StaticGetClass() */

long * LevelMutatorRiftTimedToolProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorRiftTimedToolProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelMutatorRiftTimedToolProps::GetClass() const */

long * LevelMutatorRiftTimedToolProps::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorRiftTimedToolProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorRiftTimedToolProps::GetDescription() const */

void LevelMutatorRiftTimedToolProps::GetDescription(void)

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
    Sexy::ToWString((string *)(lVar2 + 0x10));
  }
  FUN_05476c50(auStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelMutatorRiftTimedToolProps::LevelMutatorRiftTimedToolProps() */

void __thiscall
LevelMutatorRiftTimedToolProps::LevelMutatorRiftTimedToolProps(LevelMutatorRiftTimedToolProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0667f470;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* LevelMutatorRiftTimedToolProps::StaticNew() */

LevelMutatorRiftTimedToolProps * LevelMutatorRiftTimedToolProps::StaticNew(void)

{
  LevelMutatorRiftTimedToolProps *this;
  
  this = ::operator_new(0x58);
  LevelMutatorRiftTimedToolProps(this);
  return this;
}


/* LevelMutatorRiftTimedToolProps::~LevelMutatorRiftTimedToolProps() */

void __thiscall
LevelMutatorRiftTimedToolProps::~LevelMutatorRiftTimedToolProps
          (LevelMutatorRiftTimedToolProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0667f470;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* LevelMutatorRiftTimedToolProps::~LevelMutatorRiftTimedToolProps() */

void __thiscall
LevelMutatorRiftTimedToolProps::~LevelMutatorRiftTimedToolProps
          (LevelMutatorRiftTimedToolProps *this)

{
  ~LevelMutatorRiftTimedToolProps(this);
  AK::FreeHook(this);
  return;
}

