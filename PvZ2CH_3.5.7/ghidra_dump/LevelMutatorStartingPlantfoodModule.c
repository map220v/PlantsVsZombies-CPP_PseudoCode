// Class: LevelMutatorStartingPlantfoodModule


/* LevelMutatorStartingPlantfoodModule::StaticGetClass() */

long * LevelMutatorStartingPlantfoodModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorStartingPlantfoodModule",uVar2,StaticNew);
  return sClass;
}


/* LevelMutatorStartingPlantfoodModule::LevelMutatorStartingPlantfoodModule() */

void __thiscall
LevelMutatorStartingPlantfoodModule::LevelMutatorStartingPlantfoodModule
          (LevelMutatorStartingPlantfoodModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0667f5d0;
  return;
}


/* LevelMutatorStartingPlantfoodModule::StaticNew() */

LevelMutatorStartingPlantfoodModule * LevelMutatorStartingPlantfoodModule::StaticNew(void)

{
  LevelMutatorStartingPlantfoodModule *this;
  
  this = ::operator_new(0x18);
  LevelMutatorStartingPlantfoodModule(this);
  return this;
}


/* LevelMutatorStartingPlantfoodModule::~LevelMutatorStartingPlantfoodModule() */

void __thiscall
LevelMutatorStartingPlantfoodModule::~LevelMutatorStartingPlantfoodModule
          (LevelMutatorStartingPlantfoodModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0667f5d0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* LevelMutatorStartingPlantfoodModule::~LevelMutatorStartingPlantfoodModule() */

void __thiscall
LevelMutatorStartingPlantfoodModule::~LevelMutatorStartingPlantfoodModule
          (LevelMutatorStartingPlantfoodModule *this)

{
  ~LevelMutatorStartingPlantfoodModule(this);
  AK::FreeHook(this);
  return;
}


/* LevelMutatorStartingPlantfoodModule::postInitialize() */

void __thiscall
LevelMutatorStartingPlantfoodModule::postInitialize(LevelMutatorStartingPlantfoodModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (0 < *(int *)(pRVar1 + 0x40)) {
    Board::SetPlantfoodCount(*(Board **)(gLawnApp + 0x9f0),*(int *)(pRVar1 + 0x40));
    return;
  }
  return;
}

