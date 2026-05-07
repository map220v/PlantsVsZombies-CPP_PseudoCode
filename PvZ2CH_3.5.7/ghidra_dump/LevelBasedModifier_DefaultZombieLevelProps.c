// Class: LevelBasedModifier_DefaultZombieLevelProps


/* LevelBasedModifier_DefaultZombieLevelProps::GetModuleClass() const */

long * LevelBasedModifier_DefaultZombieLevelProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelBasedModifier_DefaultZombieLevelModule::sClass != (long *)0x0) {
    return LevelBasedModifier_DefaultZombieLevelModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelBasedModifier_DefaultZombieLevelModule::sClass = plVar1;
  uVar2 = LevelBasedModifierModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelBasedModifier_DefaultZombieLevelModule",uVar2,
            LevelBasedModifier_DefaultZombieLevelModule::StaticNew);
  LevelBasedModifier_DefaultZombieLevelModule::StaticClassInit();
  return LevelBasedModifier_DefaultZombieLevelModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_DefaultZombieLevelProps::StaticClassInit() */

void LevelBasedModifier_DefaultZombieLevelProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelBasedModifier_DefaultZombieLevelProps");
    (*pcVar2)(plVar1,asStack_10,FUN_033fe3d8,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifier_DefaultZombieLevelProps::StaticGetClass() */

long * LevelBasedModifier_DefaultZombieLevelProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_DefaultZombieLevelProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_DefaultZombieLevelProps::GetClass() const */

long * LevelBasedModifier_DefaultZombieLevelProps::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_DefaultZombieLevelProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_DefaultZombieLevelProps::LevelBasedModifier_DefaultZombieLevelProps() */

void __thiscall
LevelBasedModifier_DefaultZombieLevelProps::LevelBasedModifier_DefaultZombieLevelProps
          (LevelBasedModifier_DefaultZombieLevelProps *this)

{
  LevelBasedModifierModuleProps::LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  *(undefined ***)this = &PTR_GetClass_0661f300;
  return;
}


/* LevelBasedModifier_DefaultZombieLevelProps::StaticNew() */

LevelBasedModifier_DefaultZombieLevelProps *
LevelBasedModifier_DefaultZombieLevelProps::StaticNew(void)

{
  LevelBasedModifier_DefaultZombieLevelProps *this;
  
  this = ::operator_new(0x60);
  LevelBasedModifier_DefaultZombieLevelProps(this);
  return this;
}


/* LevelBasedModifier_DefaultZombieLevelProps::~LevelBasedModifier_DefaultZombieLevelProps() */

void __thiscall
LevelBasedModifier_DefaultZombieLevelProps::~LevelBasedModifier_DefaultZombieLevelProps
          (LevelBasedModifier_DefaultZombieLevelProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0661f300;
  LevelBasedModifierModuleProps::~LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  return;
}


/* LevelBasedModifier_DefaultZombieLevelProps::~LevelBasedModifier_DefaultZombieLevelProps() */

void __thiscall
LevelBasedModifier_DefaultZombieLevelProps::~LevelBasedModifier_DefaultZombieLevelProps
          (LevelBasedModifier_DefaultZombieLevelProps *this)

{
  ~LevelBasedModifier_DefaultZombieLevelProps(this);
  AK::FreeHook(this);
  return;
}

