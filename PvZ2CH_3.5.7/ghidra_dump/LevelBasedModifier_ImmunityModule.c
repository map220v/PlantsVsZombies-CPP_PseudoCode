// Class: LevelBasedModifier_ImmunityModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_ImmunityModule::StaticClassInit() */

void LevelBasedModifier_ImmunityModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelBasedModifier_ImmunityModule");
    (*pcVar2)(plVar1,asStack_10,FUN_033fb774,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifier_ImmunityModule::StaticGetClass() */

long * LevelBasedModifier_ImmunityModule::StaticGetClass(void)

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
  uVar2 = LevelBasedModifierModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelBasedModifier_ImmunityModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_ImmunityModule::LevelBasedModifier_ImmunityModule() */

void __thiscall
LevelBasedModifier_ImmunityModule::LevelBasedModifier_ImmunityModule
          (LevelBasedModifier_ImmunityModule *this)

{
  LevelBasedModifierModule::LevelBasedModifierModule((LevelBasedModifierModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0661e0f0;
  return;
}


/* LevelBasedModifier_ImmunityModule::StaticNew() */

LevelBasedModifier_ImmunityModule * LevelBasedModifier_ImmunityModule::StaticNew(void)

{
  LevelBasedModifier_ImmunityModule *this;
  
  this = ::operator_new(0x20);
  LevelBasedModifier_ImmunityModule(this);
  return this;
}


/* LevelBasedModifier_ImmunityModule::~LevelBasedModifier_ImmunityModule() */

void __thiscall
LevelBasedModifier_ImmunityModule::~LevelBasedModifier_ImmunityModule
          (LevelBasedModifier_ImmunityModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0661e0f0;
  LevelBasedModifierModule::~LevelBasedModifierModule((LevelBasedModifierModule *)this);
  return;
}


/* LevelBasedModifier_ImmunityModule::~LevelBasedModifier_ImmunityModule() */

void __thiscall
LevelBasedModifier_ImmunityModule::~LevelBasedModifier_ImmunityModule
          (LevelBasedModifier_ImmunityModule *this)

{
  ~LevelBasedModifier_ImmunityModule(this);
  AK::FreeHook(this);
  return;
}


/* LevelBasedModifier_ImmunityModule::GetZombieConditionsImmunities(std::vector<ZombieConditions,
   std::allocator<ZombieConditions> >&) */

void __thiscall
LevelBasedModifier_ImmunityModule::GetZombieConditionsImmunities
          (LevelBasedModifier_ImmunityModule *this,vector *param_1)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ulong uVar3;
  vector *pvVar4;
  undefined8 uVar5;
  
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar1 = *(int *)(this + 0x18);
  if (0 < iVar1) {
    uVar5 = *(undefined8 *)(pRVar2 + 0x60);
    uVar3 = FUN_033fa2d8(uVar5,*(undefined8 *)(pRVar2 + 0x68));
    if (1 < uVar3) {
      pvVar4 = (vector *)FUN_033fa308(uVar5,(long)(iVar1 + -1));
      std::vector<ZombieConditions,std::allocator<ZombieConditions>>::operator=
                ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)param_1,pvVar4);
      return;
    }
  }
  return;
}

