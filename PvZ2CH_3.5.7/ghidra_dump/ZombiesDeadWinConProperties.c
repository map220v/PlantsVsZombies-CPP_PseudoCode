// Class: ZombiesDeadWinConProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiesDeadWinConProperties::StaticClassInit() */

void ZombiesDeadWinConProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiesDeadWinConProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_046d2b68,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiesDeadWinConProperties::StaticGetClass() */

long * ZombiesDeadWinConProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiesDeadWinConProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiesDeadWinConProperties::GetClass() const */

long * ZombiesDeadWinConProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiesDeadWinConProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiesDeadWinConProperties::GetModuleClass() const */

long * ZombiesDeadWinConProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ZombiesDeadWinCon::sClass != (long *)0x0) {
    return ZombiesDeadWinCon::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ZombiesDeadWinCon::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiesDeadWinCon",uVar2,ZombiesDeadWinCon::StaticNew);
  return ZombiesDeadWinCon::sClass;
}


/* ZombiesDeadWinConProperties::ZombiesDeadWinConProperties() */

void __thiscall
ZombiesDeadWinConProperties::ZombiesDeadWinConProperties(ZombiesDeadWinConProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_068b4230;
  return;
}


/* ZombiesDeadWinConProperties::StaticNew() */

ZombiesDeadWinConProperties * ZombiesDeadWinConProperties::StaticNew(void)

{
  ZombiesDeadWinConProperties *this;
  
  this = ::operator_new(0x40);
  ZombiesDeadWinConProperties(this);
  return this;
}


/* ZombiesDeadWinConProperties::~ZombiesDeadWinConProperties() */

void __thiscall
ZombiesDeadWinConProperties::~ZombiesDeadWinConProperties(ZombiesDeadWinConProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_068b4230;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* ZombiesDeadWinConProperties::~ZombiesDeadWinConProperties() */

void __thiscall
ZombiesDeadWinConProperties::~ZombiesDeadWinConProperties(ZombiesDeadWinConProperties *this)

{
  ~ZombiesDeadWinConProperties(this);
  AK::FreeHook(this);
  return;
}

