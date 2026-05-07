// Class: ZombieVanModuleProperties


/* ZombieVanModuleProperties::GetModuleClass() const */

long * ZombieVanModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ZombieVanModule::sClass != (long *)0x0) {
    return ZombieVanModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ZombieVanModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieVanModule",uVar2,ZombieVanModule::StaticNew);
  ZombieVanModule::StaticClassInit();
  return ZombieVanModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVanModuleProperties::StaticClassInit() */

void ZombieVanModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieVanModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04f3da70,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieVanModuleProperties::StaticGetClass() */

long * ZombieVanModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieVanModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieVanModuleProperties::GetClass() const */

long * ZombieVanModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieVanModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieVanModuleProperties::ZombieVanModuleProperties() */

void __thiscall
ZombieVanModuleProperties::ZombieVanModuleProperties(ZombieVanModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06a18950;
  return;
}


/* ZombieVanModuleProperties::StaticNew() */

ZombieVanModuleProperties * ZombieVanModuleProperties::StaticNew(void)

{
  ZombieVanModuleProperties *this;
  
  this = ::operator_new(0x40);
  ZombieVanModuleProperties(this);
  return this;
}


/* ZombieVanModuleProperties::~ZombieVanModuleProperties() */

void __thiscall
ZombieVanModuleProperties::~ZombieVanModuleProperties(ZombieVanModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06a18950;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* ZombieVanModuleProperties::~ZombieVanModuleProperties() */

void __thiscall
ZombieVanModuleProperties::~ZombieVanModuleProperties(ZombieVanModuleProperties *this)

{
  ~ZombieVanModuleProperties(this);
  AK::FreeHook(this);
  return;
}

