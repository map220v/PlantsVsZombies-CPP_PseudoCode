// Class: LevelMutatorZombieLevelProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorZombieLevelProps::StaticClassInit() */

void LevelMutatorZombieLevelProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelMutatorZombieLevelProps");
    (*pcVar2)(plVar1,asStack_10,FUN_036a28b0,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelMutatorZombieLevelProps::StaticGetClass() */

long * LevelMutatorZombieLevelProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorZombieLevelProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelMutatorZombieLevelProps::GetClass() const */

long * LevelMutatorZombieLevelProps::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorZombieLevelProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelMutatorZombieLevelProps::GetModuleClass() const */

long * LevelMutatorZombieLevelProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelMutatorZombieLevelModule::sClass != (long *)0x0) {
    return LevelMutatorZombieLevelModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelMutatorZombieLevelModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelMutatorZombieLevelModule",uVar2,LevelMutatorZombieLevelModule::StaticNew);
  return LevelMutatorZombieLevelModule::sClass;
}


/* LevelMutatorZombieLevelProps::LevelMutatorZombieLevelProps() */

void __thiscall
LevelMutatorZombieLevelProps::LevelMutatorZombieLevelProps(LevelMutatorZombieLevelProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_0667fec0;
  return;
}


/* LevelMutatorZombieLevelProps::StaticNew() */

LevelMutatorZombieLevelProps * LevelMutatorZombieLevelProps::StaticNew(void)

{
  LevelMutatorZombieLevelProps *this;
  
  this = ::operator_new(0x48);
  LevelMutatorZombieLevelProps(this);
  return this;
}


/* LevelMutatorZombieLevelProps::~LevelMutatorZombieLevelProps() */

void __thiscall
LevelMutatorZombieLevelProps::~LevelMutatorZombieLevelProps(LevelMutatorZombieLevelProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0667fec0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* LevelMutatorZombieLevelProps::~LevelMutatorZombieLevelProps() */

void __thiscall
LevelMutatorZombieLevelProps::~LevelMutatorZombieLevelProps(LevelMutatorZombieLevelProps *this)

{
  ~LevelMutatorZombieLevelProps(this);
  AK::FreeHook(this);
  return;
}

