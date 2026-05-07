// Class: LevelMutatorStartSunProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorStartSunProps::StaticClassInit() */

void LevelMutatorStartSunProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelMutatorStartSunProps");
    (*pcVar2)(plVar1,asStack_10,FUN_036a2214,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelMutatorStartSunProps::StaticGetClass() */

long * LevelMutatorStartSunProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorStartSunProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelMutatorStartSunProps::GetClass() const */

long * LevelMutatorStartSunProps::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorStartSunProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelMutatorStartSunProps::GetModuleClass() const */

long * LevelMutatorStartSunProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelMutatorStartSunModule::sClass != (long *)0x0) {
    return LevelMutatorStartSunModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelMutatorStartSunModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelMutatorStartSunModule",uVar2,LevelMutatorStartSunModule::StaticNew);
  return LevelMutatorStartSunModule::sClass;
}


/* LevelMutatorStartSunProps::LevelMutatorStartSunProps() */

void __thiscall
LevelMutatorStartSunProps::LevelMutatorStartSunProps(LevelMutatorStartSunProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_GetClass_0667faa0;
  return;
}


/* LevelMutatorStartSunProps::StaticNew() */

LevelMutatorStartSunProps * LevelMutatorStartSunProps::StaticNew(void)

{
  LevelMutatorStartSunProps *this;
  
  this = ::operator_new(0x48);
  LevelMutatorStartSunProps(this);
  return this;
}


/* LevelMutatorStartSunProps::~LevelMutatorStartSunProps() */

void __thiscall
LevelMutatorStartSunProps::~LevelMutatorStartSunProps(LevelMutatorStartSunProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0667faa0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* LevelMutatorStartSunProps::~LevelMutatorStartSunProps() */

void __thiscall
LevelMutatorStartSunProps::~LevelMutatorStartSunProps(LevelMutatorStartSunProps *this)

{
  ~LevelMutatorStartSunProps(this);
  AK::FreeHook(this);
  return;
}

