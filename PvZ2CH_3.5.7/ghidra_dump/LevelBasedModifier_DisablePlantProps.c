// Class: LevelBasedModifier_DisablePlantProps


/* LevelBasedModifier_DisablePlantProps::GetModuleClass() const */

long * LevelBasedModifier_DisablePlantProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelBasedModifier_DisablePlantModule::sClass != (long *)0x0) {
    return LevelBasedModifier_DisablePlantModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelBasedModifier_DisablePlantModule::sClass = plVar1;
  uVar2 = LevelBasedModifierModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelBasedModifier_DisablePlantModule",uVar2,
            LevelBasedModifier_DisablePlantModule::StaticNew);
  LevelBasedModifier_DisablePlantModule::StaticClassInit();
  return LevelBasedModifier_DisablePlantModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_DisablePlantProps::StaticClassInit() */

void LevelBasedModifier_DisablePlantProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelBasedModifier_DisablePlantProps");
    (*pcVar2)(plVar1,asStack_10,FUN_033fd198,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifier_DisablePlantProps::StaticGetClass() */

long * LevelBasedModifier_DisablePlantProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_DisablePlantProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_DisablePlantProps::GetClass() const */

long * LevelBasedModifier_DisablePlantProps::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_DisablePlantProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_DisablePlantProps::LevelBasedModifier_DisablePlantProps() */

void __thiscall
LevelBasedModifier_DisablePlantProps::LevelBasedModifier_DisablePlantProps
          (LevelBasedModifier_DisablePlantProps *this)

{
  LevelBasedModifierModuleProps::LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  *(undefined ***)this = &PTR_GetClass_0661ea50;
  return;
}


/* LevelBasedModifier_DisablePlantProps::StaticNew() */

LevelBasedModifier_DisablePlantProps * LevelBasedModifier_DisablePlantProps::StaticNew(void)

{
  LevelBasedModifier_DisablePlantProps *this;
  
  this = ::operator_new(0x60);
  LevelBasedModifier_DisablePlantProps(this);
  return this;
}


/* LevelBasedModifier_DisablePlantProps::~LevelBasedModifier_DisablePlantProps() */

void __thiscall
LevelBasedModifier_DisablePlantProps::~LevelBasedModifier_DisablePlantProps
          (LevelBasedModifier_DisablePlantProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0661ea50;
  LevelBasedModifierModuleProps::~LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  return;
}


/* LevelBasedModifier_DisablePlantProps::~LevelBasedModifier_DisablePlantProps() */

void __thiscall
LevelBasedModifier_DisablePlantProps::~LevelBasedModifier_DisablePlantProps
          (LevelBasedModifier_DisablePlantProps *this)

{
  ~LevelBasedModifier_DisablePlantProps(this);
  AK::FreeHook(this);
  return;
}

