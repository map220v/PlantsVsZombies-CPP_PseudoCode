// Class: LevelMutatorZombieGeneralLevelProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorZombieGeneralLevelProps::StaticClassInit() */

void LevelMutatorZombieGeneralLevelProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelMutatorZombieGeneralLevelProps");
    (*pcVar2)(plVar1,asStack_10,FUN_036a2bc0,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelMutatorZombieGeneralLevelProps::StaticGetClass() */

long * LevelMutatorZombieGeneralLevelProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorZombieGeneralLevelProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelMutatorZombieGeneralLevelProps::GetClass() const */

long * LevelMutatorZombieGeneralLevelProps::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorZombieGeneralLevelProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelMutatorZombieGeneralLevelProps::GetModuleClass() const */

long * LevelMutatorZombieGeneralLevelProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelMutatorZombieGeneralLevelModule::sClass != (long *)0x0) {
    return LevelMutatorZombieGeneralLevelModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelMutatorZombieGeneralLevelModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelMutatorZombieGeneralLevelModule",uVar2,
            LevelMutatorZombieGeneralLevelModule::StaticNew);
  return LevelMutatorZombieGeneralLevelModule::sClass;
}


/* LevelMutatorZombieGeneralLevelProps::LevelMutatorZombieGeneralLevelProps() */

void __thiscall
LevelMutatorZombieGeneralLevelProps::LevelMutatorZombieGeneralLevelProps
          (LevelMutatorZombieGeneralLevelProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_06680020;
  return;
}


/* LevelMutatorZombieGeneralLevelProps::StaticNew() */

LevelMutatorZombieGeneralLevelProps * LevelMutatorZombieGeneralLevelProps::StaticNew(void)

{
  LevelMutatorZombieGeneralLevelProps *this;
  
  this = ::operator_new(0x48);
  LevelMutatorZombieGeneralLevelProps(this);
  return this;
}


/* LevelMutatorZombieGeneralLevelProps::~LevelMutatorZombieGeneralLevelProps() */

void __thiscall
LevelMutatorZombieGeneralLevelProps::~LevelMutatorZombieGeneralLevelProps
          (LevelMutatorZombieGeneralLevelProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06680020;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* LevelMutatorZombieGeneralLevelProps::~LevelMutatorZombieGeneralLevelProps() */

void __thiscall
LevelMutatorZombieGeneralLevelProps::~LevelMutatorZombieGeneralLevelProps
          (LevelMutatorZombieGeneralLevelProps *this)

{
  ~LevelMutatorZombieGeneralLevelProps(this);
  AK::FreeHook(this);
  return;
}

