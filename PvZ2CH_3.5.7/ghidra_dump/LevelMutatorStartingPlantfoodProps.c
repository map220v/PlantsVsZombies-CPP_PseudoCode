// Class: LevelMutatorStartingPlantfoodProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorStartingPlantfoodProps::StaticClassInit() */

void LevelMutatorStartingPlantfoodProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelMutatorStartingPlantfoodProps");
    (*pcVar2)(plVar1,asStack_10,FUN_036a15d4,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelMutatorStartingPlantfoodProps::StaticGetClass() */

long * LevelMutatorStartingPlantfoodProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorStartingPlantfoodProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelMutatorStartingPlantfoodProps::GetClass() const */

long * LevelMutatorStartingPlantfoodProps::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorStartingPlantfoodProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelMutatorStartingPlantfoodProps::GetModuleClass() const */

long * LevelMutatorStartingPlantfoodProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelMutatorStartingPlantfoodModule::sClass != (long *)0x0) {
    return LevelMutatorStartingPlantfoodModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelMutatorStartingPlantfoodModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelMutatorStartingPlantfoodModule",uVar2,
            LevelMutatorStartingPlantfoodModule::StaticNew);
  return LevelMutatorStartingPlantfoodModule::sClass;
}


/* LevelMutatorStartingPlantfoodProps::LevelMutatorStartingPlantfoodProps() */

void __thiscall
LevelMutatorStartingPlantfoodProps::LevelMutatorStartingPlantfoodProps
          (LevelMutatorStartingPlantfoodProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_0667f520;
  return;
}


/* LevelMutatorStartingPlantfoodProps::StaticNew() */

LevelMutatorStartingPlantfoodProps * LevelMutatorStartingPlantfoodProps::StaticNew(void)

{
  LevelMutatorStartingPlantfoodProps *this;
  
  this = ::operator_new(0x48);
  LevelMutatorStartingPlantfoodProps(this);
  return this;
}


/* LevelMutatorStartingPlantfoodProps::~LevelMutatorStartingPlantfoodProps() */

void __thiscall
LevelMutatorStartingPlantfoodProps::~LevelMutatorStartingPlantfoodProps
          (LevelMutatorStartingPlantfoodProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0667f520;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* LevelMutatorStartingPlantfoodProps::~LevelMutatorStartingPlantfoodProps() */

void __thiscall
LevelMutatorStartingPlantfoodProps::~LevelMutatorStartingPlantfoodProps
          (LevelMutatorStartingPlantfoodProps *this)

{
  ~LevelMutatorStartingPlantfoodProps(this);
  AK::FreeHook(this);
  return;
}

