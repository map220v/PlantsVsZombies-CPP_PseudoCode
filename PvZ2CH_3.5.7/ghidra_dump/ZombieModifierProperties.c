// Class: ZombieModifierProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModifierProperties::StaticClassInit() */

void ZombieModifierProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieModifierProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_046a3024,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieModifierProperties::StaticGetClass() */

long * ZombieModifierProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieModifierProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieModifierProperties::GetClass() const */

long * ZombieModifierProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieModifierProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieModifierProperties::GetModuleClass() const */

long * ZombieModifierProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ZombieModifierModule::sClass != (long *)0x0) {
    return ZombieModifierModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ZombieModifierModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieModifierModule",uVar2,ZombieModifierModule::StaticNew);
  return ZombieModifierModule::sClass;
}


/* ZombieModifierProperties::ZombieModifierProperties() */

void __thiscall ZombieModifierProperties::ZombieModifierProperties(ZombieModifierProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  this[0x40] = (ZombieModifierProperties)0x0;
  *(undefined ***)this = &PTR_GetClass_068a91d0;
  return;
}


/* ZombieModifierProperties::StaticNew() */

ZombieModifierProperties * ZombieModifierProperties::StaticNew(void)

{
  ZombieModifierProperties *this;
  
  this = ::operator_new(0x48);
  ZombieModifierProperties(this);
  return this;
}


/* ZombieModifierProperties::~ZombieModifierProperties() */

void __thiscall ZombieModifierProperties::~ZombieModifierProperties(ZombieModifierProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_068a91d0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* ZombieModifierProperties::~ZombieModifierProperties() */

void __thiscall ZombieModifierProperties::~ZombieModifierProperties(ZombieModifierProperties *this)

{
  ~ZombieModifierProperties(this);
  AK::FreeHook(this);
  return;
}

