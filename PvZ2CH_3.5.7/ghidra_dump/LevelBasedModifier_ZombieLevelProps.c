// Class: LevelBasedModifier_ZombieLevelProps


/* LevelBasedModifier_ZombieLevelProps::GetModuleClass() const */

long * LevelBasedModifier_ZombieLevelProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelBasedModifier_ZombieLevelModule::sClass != (long *)0x0) {
    return LevelBasedModifier_ZombieLevelModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelBasedModifier_ZombieLevelModule::sClass = plVar1;
  uVar2 = LevelBasedModifierModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelBasedModifier_ZombieLevelModule",uVar2,
            LevelBasedModifier_ZombieLevelModule::StaticNew);
  LevelBasedModifier_ZombieLevelModule::StaticClassInit();
  return LevelBasedModifier_ZombieLevelModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_ZombieLevelProps::StaticClassInit() */

void LevelBasedModifier_ZombieLevelProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelBasedModifier_ZombieLevelProps");
    (*pcVar2)(plVar1,asStack_10,FUN_033fb138,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifier_ZombieLevelProps::StaticGetClass() */

long * LevelBasedModifier_ZombieLevelProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_ZombieLevelProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_ZombieLevelProps::GetClass() const */

long * LevelBasedModifier_ZombieLevelProps::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_ZombieLevelProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_ZombieLevelProps::LevelBasedModifier_ZombieLevelProps() */

void __thiscall
LevelBasedModifier_ZombieLevelProps::LevelBasedModifier_ZombieLevelProps
          (LevelBasedModifier_ZombieLevelProps *this)

{
  LevelBasedModifierModuleProps::LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  *(undefined ***)this = &PTR_GetClass_0661ded0;
  return;
}


/* LevelBasedModifier_ZombieLevelProps::StaticNew() */

LevelBasedModifier_ZombieLevelProps * LevelBasedModifier_ZombieLevelProps::StaticNew(void)

{
  LevelBasedModifier_ZombieLevelProps *this;
  
  this = ::operator_new(0x60);
  LevelBasedModifier_ZombieLevelProps(this);
  return this;
}


/* LevelBasedModifier_ZombieLevelProps::~LevelBasedModifier_ZombieLevelProps() */

void __thiscall
LevelBasedModifier_ZombieLevelProps::~LevelBasedModifier_ZombieLevelProps
          (LevelBasedModifier_ZombieLevelProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0661ded0;
  LevelBasedModifierModuleProps::~LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  return;
}


/* LevelBasedModifier_ZombieLevelProps::~LevelBasedModifier_ZombieLevelProps() */

void __thiscall
LevelBasedModifier_ZombieLevelProps::~LevelBasedModifier_ZombieLevelProps
          (LevelBasedModifier_ZombieLevelProps *this)

{
  ~LevelBasedModifier_ZombieLevelProps(this);
  AK::FreeHook(this);
  return;
}

