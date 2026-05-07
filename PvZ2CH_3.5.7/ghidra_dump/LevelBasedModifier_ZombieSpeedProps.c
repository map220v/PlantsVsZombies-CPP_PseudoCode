// Class: LevelBasedModifier_ZombieSpeedProps


/* LevelBasedModifier_ZombieSpeedProps::GetModuleClass() const */

long * LevelBasedModifier_ZombieSpeedProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelBasedModifier_ZombieSpeedModule::sClass != (long *)0x0) {
    return LevelBasedModifier_ZombieSpeedModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelBasedModifier_ZombieSpeedModule::sClass = plVar1;
  uVar2 = LevelBasedModifierModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelBasedModifier_ZombieSpeedModule",uVar2,
            LevelBasedModifier_ZombieSpeedModule::StaticNew);
  LevelBasedModifier_ZombieSpeedModule::StaticClassInit();
  return LevelBasedModifier_ZombieSpeedModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_ZombieSpeedProps::StaticClassInit() */

void LevelBasedModifier_ZombieSpeedProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelBasedModifier_ZombieSpeedProps");
    (*pcVar2)(plVar1,asStack_10,FUN_033fb560,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifier_ZombieSpeedProps::StaticGetClass() */

long * LevelBasedModifier_ZombieSpeedProps::StaticGetClass(void)

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
  uVar2 = LevelBasedModifierModuleProps::StaticGetClass();
  (*pcVar3)(plVar1,"LevelBasedModifier_ZombieSpeedProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_ZombieSpeedProps::GetClass() const */

long * LevelBasedModifier_ZombieSpeedProps::GetClass(void)

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
  uVar2 = LevelBasedModifierModuleProps::StaticGetClass();
  (*pcVar3)(plVar1,"LevelBasedModifier_ZombieSpeedProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_ZombieSpeedProps::LevelBasedModifier_ZombieSpeedProps() */

void __thiscall
LevelBasedModifier_ZombieSpeedProps::LevelBasedModifier_ZombieSpeedProps
          (LevelBasedModifier_ZombieSpeedProps *this)

{
  LevelBasedModifierModuleProps::LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  *(undefined ***)this = &PTR_GetClass_0661e040;
  return;
}


/* LevelBasedModifier_ZombieSpeedProps::StaticNew() */

LevelBasedModifier_ZombieSpeedProps * LevelBasedModifier_ZombieSpeedProps::StaticNew(void)

{
  LevelBasedModifier_ZombieSpeedProps *this;
  
  this = ::operator_new(0x60);
  LevelBasedModifier_ZombieSpeedProps(this);
  return this;
}


/* LevelBasedModifier_ZombieSpeedProps::~LevelBasedModifier_ZombieSpeedProps() */

void __thiscall
LevelBasedModifier_ZombieSpeedProps::~LevelBasedModifier_ZombieSpeedProps
          (LevelBasedModifier_ZombieSpeedProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0661e040;
  LevelBasedModifierModuleProps::~LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  return;
}


/* LevelBasedModifier_ZombieSpeedProps::~LevelBasedModifier_ZombieSpeedProps() */

void __thiscall
LevelBasedModifier_ZombieSpeedProps::~LevelBasedModifier_ZombieSpeedProps
          (LevelBasedModifier_ZombieSpeedProps *this)

{
  ~LevelBasedModifier_ZombieSpeedProps(this);
  AK::FreeHook(this);
  return;
}

