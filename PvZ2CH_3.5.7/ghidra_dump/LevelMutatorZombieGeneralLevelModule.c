// Class: LevelMutatorZombieGeneralLevelModule


/* LevelMutatorZombieGeneralLevelModule::StaticGetClass() */

long * LevelMutatorZombieGeneralLevelModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorZombieGeneralLevelModule",uVar2,StaticNew);
  return sClass;
}


/* LevelMutatorZombieGeneralLevelModule::LevelMutatorZombieGeneralLevelModule() */

void __thiscall
LevelMutatorZombieGeneralLevelModule::LevelMutatorZombieGeneralLevelModule
          (LevelMutatorZombieGeneralLevelModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_066800d0;
  return;
}


/* LevelMutatorZombieGeneralLevelModule::StaticNew() */

LevelMutatorZombieGeneralLevelModule * LevelMutatorZombieGeneralLevelModule::StaticNew(void)

{
  LevelMutatorZombieGeneralLevelModule *this;
  
  this = ::operator_new(0x18);
  LevelMutatorZombieGeneralLevelModule(this);
  return this;
}


/* LevelMutatorZombieGeneralLevelModule::~LevelMutatorZombieGeneralLevelModule() */

void __thiscall
LevelMutatorZombieGeneralLevelModule::~LevelMutatorZombieGeneralLevelModule
          (LevelMutatorZombieGeneralLevelModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066800d0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* LevelMutatorZombieGeneralLevelModule::~LevelMutatorZombieGeneralLevelModule() */

void __thiscall
LevelMutatorZombieGeneralLevelModule::~LevelMutatorZombieGeneralLevelModule
          (LevelMutatorZombieGeneralLevelModule *this)

{
  ~LevelMutatorZombieGeneralLevelModule(this);
  AK::FreeHook(this);
  return;
}

