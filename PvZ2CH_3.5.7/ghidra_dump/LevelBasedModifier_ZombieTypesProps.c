// Class: LevelBasedModifier_ZombieTypesProps


/* LevelBasedModifier_ZombieTypesProps::GetModuleClass() const */

long * LevelBasedModifier_ZombieTypesProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelBasedModifier_ZombieTypesModule::sClass != (long *)0x0) {
    return LevelBasedModifier_ZombieTypesModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelBasedModifier_ZombieTypesModule::sClass = plVar1;
  uVar2 = LevelBasedModifierModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelBasedModifier_ZombieTypesModule",uVar2,
            LevelBasedModifier_ZombieTypesModule::StaticNew);
  LevelBasedModifier_ZombieTypesModule::StaticClassInit();
  return LevelBasedModifier_ZombieTypesModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_ZombieTypesProps::StaticClassInit() */

void LevelBasedModifier_ZombieTypesProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelBasedModifier_ZombieTypesProps");
    (*pcVar2)(plVar1,asStack_10,FUN_033fd9e8,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifier_ZombieTypesProps::StaticGetClass() */

long * LevelBasedModifier_ZombieTypesProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_ZombieTypesProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_ZombieTypesProps::GetClass() const */

long * LevelBasedModifier_ZombieTypesProps::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_ZombieTypesProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_ZombieTypesProps::LevelBasedModifier_ZombieTypesProps() */

void __thiscall
LevelBasedModifier_ZombieTypesProps::LevelBasedModifier_ZombieTypesProps
          (LevelBasedModifier_ZombieTypesProps *this)

{
  LevelBasedModifierModuleProps::LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  *(undefined ***)this = &PTR_GetClass_0661ed30;
  return;
}


/* LevelBasedModifier_ZombieTypesProps::StaticNew() */

LevelBasedModifier_ZombieTypesProps * LevelBasedModifier_ZombieTypesProps::StaticNew(void)

{
  LevelBasedModifier_ZombieTypesProps *this;
  
  this = ::operator_new(0x60);
  LevelBasedModifier_ZombieTypesProps(this);
  return this;
}


/* LevelBasedModifier_ZombieTypesProps::~LevelBasedModifier_ZombieTypesProps() */

void __thiscall
LevelBasedModifier_ZombieTypesProps::~LevelBasedModifier_ZombieTypesProps
          (LevelBasedModifier_ZombieTypesProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0661ed30;
  LevelBasedModifierModuleProps::~LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  return;
}


/* LevelBasedModifier_ZombieTypesProps::~LevelBasedModifier_ZombieTypesProps() */

void __thiscall
LevelBasedModifier_ZombieTypesProps::~LevelBasedModifier_ZombieTypesProps
          (LevelBasedModifier_ZombieTypesProps *this)

{
  ~LevelBasedModifier_ZombieTypesProps(this);
  AK::FreeHook(this);
  return;
}

