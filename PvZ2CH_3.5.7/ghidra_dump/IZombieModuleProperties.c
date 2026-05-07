// Class: IZombieModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IZombieModuleProperties::StaticClassInit() */

void IZombieModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"IZombieModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03419acc,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IZombieModuleProperties::StaticGetClass() */

long * IZombieModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"IZombieModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IZombieModuleProperties::GetClass() const */

long * IZombieModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"IZombieModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IZombieModuleProperties::GetModuleClass() const */

long * IZombieModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (IZombieModule::sClass != (long *)0x0) {
    return IZombieModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  IZombieModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"IZombieModule",uVar2,IZombieModule::StaticNew);
  IZombieModule::StaticClassInit();
  return IZombieModule::sClass;
}


/* IZombieModuleProperties::IZombieModuleProperties() */

void __thiscall IZombieModuleProperties::IZombieModuleProperties(IZombieModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06621260;
  return;
}


/* IZombieModuleProperties::StaticNew() */

IZombieModuleProperties * IZombieModuleProperties::StaticNew(void)

{
  IZombieModuleProperties *this;
  
  this = ::operator_new(0x40);
  IZombieModuleProperties(this);
  return this;
}


/* IZombieModuleProperties::~IZombieModuleProperties() */

void __thiscall IZombieModuleProperties::~IZombieModuleProperties(IZombieModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06621260;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* IZombieModuleProperties::~IZombieModuleProperties() */

void __thiscall IZombieModuleProperties::~IZombieModuleProperties(IZombieModuleProperties *this)

{
  ~IZombieModuleProperties(this);
  AK::FreeHook(this);
  return;
}

