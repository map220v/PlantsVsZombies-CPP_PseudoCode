// Class: LevelBasedModifier_SunReducedProps


/* LevelBasedModifier_SunReducedProps::GetModuleClass() const */

long * LevelBasedModifier_SunReducedProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelBasedModifier_SunReducedModule::sClass != (long *)0x0) {
    return LevelBasedModifier_SunReducedModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelBasedModifier_SunReducedModule::sClass = plVar1;
  uVar2 = LevelBasedModifierModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelBasedModifier_SunReducedModule",uVar2,
            LevelBasedModifier_SunReducedModule::StaticNew);
  LevelBasedModifier_SunReducedModule::StaticClassInit();
  return LevelBasedModifier_SunReducedModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_SunReducedProps::StaticClassInit() */

void LevelBasedModifier_SunReducedProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelBasedModifier_SunReducedProps");
    (*pcVar2)(plVar1,asStack_10,FUN_033fc520,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifier_SunReducedProps::StaticGetClass() */

long * LevelBasedModifier_SunReducedProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_SunReducedProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_SunReducedProps::GetClass() const */

long * LevelBasedModifier_SunReducedProps::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_SunReducedProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_SunReducedProps::LevelBasedModifier_SunReducedProps() */

void __thiscall
LevelBasedModifier_SunReducedProps::LevelBasedModifier_SunReducedProps
          (LevelBasedModifier_SunReducedProps *this)

{
  LevelBasedModifierModuleProps::LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  *(undefined ***)this = &PTR_GetClass_0661e600;
  return;
}


/* LevelBasedModifier_SunReducedProps::StaticNew() */

LevelBasedModifier_SunReducedProps * LevelBasedModifier_SunReducedProps::StaticNew(void)

{
  LevelBasedModifier_SunReducedProps *this;
  
  this = ::operator_new(0x60);
  LevelBasedModifier_SunReducedProps(this);
  return this;
}


/* LevelBasedModifier_SunReducedProps::~LevelBasedModifier_SunReducedProps() */

void __thiscall
LevelBasedModifier_SunReducedProps::~LevelBasedModifier_SunReducedProps
          (LevelBasedModifier_SunReducedProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0661e600;
  LevelBasedModifierModuleProps::~LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  return;
}


/* LevelBasedModifier_SunReducedProps::~LevelBasedModifier_SunReducedProps() */

void __thiscall
LevelBasedModifier_SunReducedProps::~LevelBasedModifier_SunReducedProps
          (LevelBasedModifier_SunReducedProps *this)

{
  ~LevelBasedModifier_SunReducedProps(this);
  AK::FreeHook(this);
  return;
}

