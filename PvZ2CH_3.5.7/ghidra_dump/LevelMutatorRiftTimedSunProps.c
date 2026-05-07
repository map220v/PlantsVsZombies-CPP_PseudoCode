// Class: LevelMutatorRiftTimedSunProps


/* LevelMutatorRiftTimedSunProps::GetModuleClass() const */

long * LevelMutatorRiftTimedSunProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelMutatorRiftTimedSunModule::sClass != (long *)0x0) {
    return LevelMutatorRiftTimedSunModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelMutatorRiftTimedSunModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelMutatorRiftTimedSunModule",uVar2,LevelMutatorRiftTimedSunModule::StaticNew)
  ;
  LevelMutatorRiftTimedSunModule::StaticClassInit();
  return LevelMutatorRiftTimedSunModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorRiftTimedSunProps::StaticClassInit() */

void LevelMutatorRiftTimedSunProps::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RiftTimedSunDropData");
    (*pcVar3)(plVar2,asStack_10,FUN_036a42d0,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LevelMutatorRiftTimedSunProps");
    (*pcVar3)(plVar2,asStack_10,FUN_036a51f0,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelMutatorRiftTimedSunProps::StaticGetClass() */

long * LevelMutatorRiftTimedSunProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorRiftTimedSunProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelMutatorRiftTimedSunProps::GetClass() const */

long * LevelMutatorRiftTimedSunProps::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorRiftTimedSunProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelMutatorRiftTimedSunProps::LevelMutatorRiftTimedSunProps() */

void __thiscall
LevelMutatorRiftTimedSunProps::LevelMutatorRiftTimedSunProps(LevelMutatorRiftTimedSunProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0667f310;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  return;
}


/* LevelMutatorRiftTimedSunProps::StaticNew() */

LevelMutatorRiftTimedSunProps * LevelMutatorRiftTimedSunProps::StaticNew(void)

{
  LevelMutatorRiftTimedSunProps *this;
  
  this = ::operator_new(0x70);
  LevelMutatorRiftTimedSunProps(this);
  return this;
}


/* LevelMutatorRiftTimedSunProps::~LevelMutatorRiftTimedSunProps() */

void __thiscall
LevelMutatorRiftTimedSunProps::~LevelMutatorRiftTimedSunProps(LevelMutatorRiftTimedSunProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0667f310;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x58));
  std::vector<RiftTimedSunDropData,std::allocator<RiftTimedSunDropData>>::~vector
            ((vector<RiftTimedSunDropData,std::allocator<RiftTimedSunDropData>> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* LevelMutatorRiftTimedSunProps::~LevelMutatorRiftTimedSunProps() */

void __thiscall
LevelMutatorRiftTimedSunProps::~LevelMutatorRiftTimedSunProps(LevelMutatorRiftTimedSunProps *this)

{
  ~LevelMutatorRiftTimedSunProps(this);
  AK::FreeHook(this);
  return;
}

