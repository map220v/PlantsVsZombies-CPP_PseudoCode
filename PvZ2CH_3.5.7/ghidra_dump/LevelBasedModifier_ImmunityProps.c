// Class: LevelBasedModifier_ImmunityProps


/* LevelBasedModifier_ImmunityProps::GetModuleClass() const */

long * LevelBasedModifier_ImmunityProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelBasedModifier_ImmunityModule::sClass != (long *)0x0) {
    return LevelBasedModifier_ImmunityModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelBasedModifier_ImmunityModule::sClass = plVar1;
  uVar2 = LevelBasedModifierModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelBasedModifier_ImmunityModule",uVar2,
            LevelBasedModifier_ImmunityModule::StaticNew);
  LevelBasedModifier_ImmunityModule::StaticClassInit();
  return LevelBasedModifier_ImmunityModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_ImmunityProps::StaticClassInit() */

void LevelBasedModifier_ImmunityProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelBasedModifier_ImmunityProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03402bb4,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifier_ImmunityProps::StaticGetClass() */

long * LevelBasedModifier_ImmunityProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_ImmunityProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_ImmunityProps::GetClass() const */

long * LevelBasedModifier_ImmunityProps::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_ImmunityProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_ImmunityProps::LevelBasedModifier_ImmunityProps() */

void __thiscall
LevelBasedModifier_ImmunityProps::LevelBasedModifier_ImmunityProps
          (LevelBasedModifier_ImmunityProps *this)

{
  LevelBasedModifierModuleProps::LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  *(undefined ***)this = &PTR_GetClass_0661e1b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  return;
}


/* LevelBasedModifier_ImmunityProps::StaticNew() */

LevelBasedModifier_ImmunityProps * LevelBasedModifier_ImmunityProps::StaticNew(void)

{
  LevelBasedModifier_ImmunityProps *this;
  
  this = ::operator_new(0x78);
  LevelBasedModifier_ImmunityProps(this);
  return this;
}


/* LevelBasedModifier_ImmunityProps::~LevelBasedModifier_ImmunityProps() */

void __thiscall
LevelBasedModifier_ImmunityProps::~LevelBasedModifier_ImmunityProps
          (LevelBasedModifier_ImmunityProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0661e1b0;
  std::
  vector<std::vector<ZombieConditions,std::allocator<ZombieConditions>>,std::allocator<std::vector<ZombieConditions,std::allocator<ZombieConditions>>>>
  ::~vector((vector<std::vector<ZombieConditions,std::allocator<ZombieConditions>>,std::allocator<std::vector<ZombieConditions,std::allocator<ZombieConditions>>>>
             *)(this + 0x60));
  LevelBasedModifierModuleProps::~LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  return;
}


/* LevelBasedModifier_ImmunityProps::~LevelBasedModifier_ImmunityProps() */

void __thiscall
LevelBasedModifier_ImmunityProps::~LevelBasedModifier_ImmunityProps
          (LevelBasedModifier_ImmunityProps *this)

{
  ~LevelBasedModifier_ImmunityProps(this);
  AK::FreeHook(this);
  return;
}

