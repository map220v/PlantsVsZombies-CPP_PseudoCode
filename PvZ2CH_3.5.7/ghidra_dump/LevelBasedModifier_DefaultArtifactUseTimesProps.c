// Class: LevelBasedModifier_DefaultArtifactUseTimesProps


/* LevelBasedModifier_DefaultArtifactUseTimesProps::GetModuleClass() const */

long * LevelBasedModifier_DefaultArtifactUseTimesProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelBasedModifier_DefaultArtifactUseTimesModule::sClass != (long *)0x0) {
    return LevelBasedModifier_DefaultArtifactUseTimesModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelBasedModifier_DefaultArtifactUseTimesModule::sClass = plVar1;
  uVar2 = LevelBasedModifierModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelBasedModifier_DefaultArtifactUseTimesModule",uVar2,
            LevelBasedModifier_DefaultArtifactUseTimesModule::StaticNew);
  LevelBasedModifier_DefaultArtifactUseTimesModule::StaticClassInit();
  return LevelBasedModifier_DefaultArtifactUseTimesModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_DefaultArtifactUseTimesProps::StaticClassInit() */

void LevelBasedModifier_DefaultArtifactUseTimesProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelBasedModifier_DefaultArtifactUseTimesProps");
    (*pcVar2)(plVar1,asStack_10,FUN_033fe800,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifier_DefaultArtifactUseTimesProps::StaticGetClass() */

long * LevelBasedModifier_DefaultArtifactUseTimesProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_DefaultArtifactUseTimesProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_DefaultArtifactUseTimesProps::GetClass() const */

long * LevelBasedModifier_DefaultArtifactUseTimesProps::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_DefaultArtifactUseTimesProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_DefaultArtifactUseTimesProps::LevelBasedModifier_DefaultArtifactUseTimesProps()
    */

void __thiscall
LevelBasedModifier_DefaultArtifactUseTimesProps::LevelBasedModifier_DefaultArtifactUseTimesProps
          (LevelBasedModifier_DefaultArtifactUseTimesProps *this)

{
  LevelBasedModifierModuleProps::LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  *(undefined ***)this = &PTR_GetClass_0661f470;
  return;
}


/* LevelBasedModifier_DefaultArtifactUseTimesProps::StaticNew() */

LevelBasedModifier_DefaultArtifactUseTimesProps *
LevelBasedModifier_DefaultArtifactUseTimesProps::StaticNew(void)

{
  LevelBasedModifier_DefaultArtifactUseTimesProps *this;
  
  this = ::operator_new(0x60);
  LevelBasedModifier_DefaultArtifactUseTimesProps(this);
  return this;
}


/* LevelBasedModifier_DefaultArtifactUseTimesProps::~LevelBasedModifier_DefaultArtifactUseTimesProps()
    */

void __thiscall
LevelBasedModifier_DefaultArtifactUseTimesProps::~LevelBasedModifier_DefaultArtifactUseTimesProps
          (LevelBasedModifier_DefaultArtifactUseTimesProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0661f470;
  LevelBasedModifierModuleProps::~LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  return;
}


/* LevelBasedModifier_DefaultArtifactUseTimesProps::~LevelBasedModifier_DefaultArtifactUseTimesProps()
    */

void __thiscall
LevelBasedModifier_DefaultArtifactUseTimesProps::~LevelBasedModifier_DefaultArtifactUseTimesProps
          (LevelBasedModifier_DefaultArtifactUseTimesProps *this)

{
  ~LevelBasedModifier_DefaultArtifactUseTimesProps(this);
  AK::FreeHook(this);
  return;
}

