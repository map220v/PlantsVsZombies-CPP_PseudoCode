// Class: LevelMutatorZombieLevelModule


/* LevelMutatorZombieLevelModule::StaticGetClass() */

long * LevelMutatorZombieLevelModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorZombieLevelModule",uVar2,StaticNew);
  return sClass;
}


/* LevelMutatorZombieLevelModule::LevelMutatorZombieLevelModule() */

void __thiscall
LevelMutatorZombieLevelModule::LevelMutatorZombieLevelModule(LevelMutatorZombieLevelModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0667ff70;
  return;
}


/* LevelMutatorZombieLevelModule::StaticNew() */

LevelMutatorZombieLevelModule * LevelMutatorZombieLevelModule::StaticNew(void)

{
  LevelMutatorZombieLevelModule *this;
  
  this = ::operator_new(0x18);
  LevelMutatorZombieLevelModule(this);
  return this;
}


/* LevelMutatorZombieLevelModule::~LevelMutatorZombieLevelModule() */

void __thiscall
LevelMutatorZombieLevelModule::~LevelMutatorZombieLevelModule(LevelMutatorZombieLevelModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0667ff70;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* LevelMutatorZombieLevelModule::~LevelMutatorZombieLevelModule() */

void __thiscall
LevelMutatorZombieLevelModule::~LevelMutatorZombieLevelModule(LevelMutatorZombieLevelModule *this)

{
  ~LevelMutatorZombieLevelModule(this);
  AK::FreeHook(this);
  return;
}

