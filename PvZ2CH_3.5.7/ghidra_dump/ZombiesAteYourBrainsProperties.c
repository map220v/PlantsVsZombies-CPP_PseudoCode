// Class: ZombiesAteYourBrainsProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiesAteYourBrainsProperties::StaticClassInit() */

void ZombiesAteYourBrainsProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiesAteYourBrainsProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_046ce318,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiesAteYourBrainsProperties::StaticGetClass() */

long * ZombiesAteYourBrainsProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiesAteYourBrainsProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiesAteYourBrainsProperties::GetClass() const */

long * ZombiesAteYourBrainsProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiesAteYourBrainsProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiesAteYourBrainsProperties::GetModuleClass() const */

long * ZombiesAteYourBrainsProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ZombiesAteYourBrainsModule::sClass != (long *)0x0) {
    return ZombiesAteYourBrainsModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ZombiesAteYourBrainsModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiesAteYourBrainsModule",uVar2,ZombiesAteYourBrainsModule::StaticNew);
  ZombiesAteYourBrainsModule::StaticClassInit();
  return ZombiesAteYourBrainsModule::sClass;
}


/* ZombiesAteYourBrainsProperties::ZombiesAteYourBrainsProperties() */

void __thiscall
ZombiesAteYourBrainsProperties::ZombiesAteYourBrainsProperties(ZombiesAteYourBrainsProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_068b3cb0;
  *(undefined4 *)(this + 0x40) = 0xc2a00000;
  return;
}


/* ZombiesAteYourBrainsProperties::StaticNew() */

ZombiesAteYourBrainsProperties * ZombiesAteYourBrainsProperties::StaticNew(void)

{
  ZombiesAteYourBrainsProperties *this;
  
  this = ::operator_new(0x48);
  ZombiesAteYourBrainsProperties(this);
  return this;
}


/* ZombiesAteYourBrainsProperties::~ZombiesAteYourBrainsProperties() */

void __thiscall
ZombiesAteYourBrainsProperties::~ZombiesAteYourBrainsProperties
          (ZombiesAteYourBrainsProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_068b3cb0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* ZombiesAteYourBrainsProperties::~ZombiesAteYourBrainsProperties() */

void __thiscall
ZombiesAteYourBrainsProperties::~ZombiesAteYourBrainsProperties
          (ZombiesAteYourBrainsProperties *this)

{
  ~ZombiesAteYourBrainsProperties(this);
  AK::FreeHook(this);
  return;
}

