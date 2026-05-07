// Class: LevelMutatorSeedSlotCountModule


/* LevelMutatorSeedSlotCountModule::StaticGetClass() */

long * LevelMutatorSeedSlotCountModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelMutatorSeedSlotCountModule",uVar2,StaticNew);
  return sClass;
}


/* LevelMutatorSeedSlotCountModule::LevelMutatorSeedSlotCountModule() */

void __thiscall
LevelMutatorSeedSlotCountModule::LevelMutatorSeedSlotCountModule
          (LevelMutatorSeedSlotCountModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0667f730;
  return;
}


/* LevelMutatorSeedSlotCountModule::StaticNew() */

LevelMutatorSeedSlotCountModule * LevelMutatorSeedSlotCountModule::StaticNew(void)

{
  LevelMutatorSeedSlotCountModule *this;
  
  this = ::operator_new(0x18);
  LevelMutatorSeedSlotCountModule(this);
  return this;
}


/* LevelMutatorSeedSlotCountModule::~LevelMutatorSeedSlotCountModule() */

void __thiscall
LevelMutatorSeedSlotCountModule::~LevelMutatorSeedSlotCountModule
          (LevelMutatorSeedSlotCountModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0667f730;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* LevelMutatorSeedSlotCountModule::~LevelMutatorSeedSlotCountModule() */

void __thiscall
LevelMutatorSeedSlotCountModule::~LevelMutatorSeedSlotCountModule
          (LevelMutatorSeedSlotCountModule *this)

{
  ~LevelMutatorSeedSlotCountModule(this);
  AK::FreeHook(this);
  return;
}

