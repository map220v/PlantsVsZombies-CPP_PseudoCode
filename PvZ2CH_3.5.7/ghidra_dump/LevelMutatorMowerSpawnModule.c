// Class: LevelMutatorMowerSpawnModule


/* LevelMutatorMowerSpawnModule::StaticGetClass() */

long * LevelMutatorMowerSpawnModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorMowerSpawnModule",uVar2,StaticNew);
  return sClass;
}


/* LevelMutatorMowerSpawnModule::LevelMutatorMowerSpawnModule() */

void __thiscall
LevelMutatorMowerSpawnModule::LevelMutatorMowerSpawnModule(LevelMutatorMowerSpawnModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0667fcb0;
  return;
}


/* LevelMutatorMowerSpawnModule::StaticNew() */

LevelMutatorMowerSpawnModule * LevelMutatorMowerSpawnModule::StaticNew(void)

{
  LevelMutatorMowerSpawnModule *this;
  
  this = ::operator_new(0x18);
  LevelMutatorMowerSpawnModule(this);
  return this;
}


/* LevelMutatorMowerSpawnModule::~LevelMutatorMowerSpawnModule() */

void __thiscall
LevelMutatorMowerSpawnModule::~LevelMutatorMowerSpawnModule(LevelMutatorMowerSpawnModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0667fcb0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* LevelMutatorMowerSpawnModule::~LevelMutatorMowerSpawnModule() */

void __thiscall
LevelMutatorMowerSpawnModule::~LevelMutatorMowerSpawnModule(LevelMutatorMowerSpawnModule *this)

{
  ~LevelMutatorMowerSpawnModule(this);
  AK::FreeHook(this);
  return;
}

