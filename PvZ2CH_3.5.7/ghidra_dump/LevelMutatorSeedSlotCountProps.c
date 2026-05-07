// Class: LevelMutatorSeedSlotCountProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorSeedSlotCountProps::StaticClassInit() */

void LevelMutatorSeedSlotCountProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelMutatorSeedSlotCountProps");
    (*pcVar2)(plVar1,asStack_10,FUN_036a18e4,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelMutatorSeedSlotCountProps::StaticGetClass() */

long * LevelMutatorSeedSlotCountProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorSeedSlotCountProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelMutatorSeedSlotCountProps::GetClass() const */

long * LevelMutatorSeedSlotCountProps::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorSeedSlotCountProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelMutatorSeedSlotCountProps::GetModuleClass() const */

long * LevelMutatorSeedSlotCountProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelMutatorSeedSlotCountModule::sClass != (long *)0x0) {
    return LevelMutatorSeedSlotCountModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelMutatorSeedSlotCountModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelMutatorSeedSlotCountModule",uVar2,
            LevelMutatorSeedSlotCountModule::StaticNew);
  return LevelMutatorSeedSlotCountModule::sClass;
}


/* LevelMutatorSeedSlotCountProps::LevelMutatorSeedSlotCountProps() */

void __thiscall
LevelMutatorSeedSlotCountProps::LevelMutatorSeedSlotCountProps(LevelMutatorSeedSlotCountProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_0667f680;
  return;
}


/* LevelMutatorSeedSlotCountProps::StaticNew() */

LevelMutatorSeedSlotCountProps * LevelMutatorSeedSlotCountProps::StaticNew(void)

{
  LevelMutatorSeedSlotCountProps *this;
  
  this = ::operator_new(0x48);
  LevelMutatorSeedSlotCountProps(this);
  return this;
}


/* LevelMutatorSeedSlotCountProps::~LevelMutatorSeedSlotCountProps() */

void __thiscall
LevelMutatorSeedSlotCountProps::~LevelMutatorSeedSlotCountProps
          (LevelMutatorSeedSlotCountProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0667f680;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* LevelMutatorSeedSlotCountProps::~LevelMutatorSeedSlotCountProps() */

void __thiscall
LevelMutatorSeedSlotCountProps::~LevelMutatorSeedSlotCountProps
          (LevelMutatorSeedSlotCountProps *this)

{
  ~LevelMutatorSeedSlotCountProps(this);
  AK::FreeHook(this);
  return;
}

