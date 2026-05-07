// Class: ZombossRiftBattleModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRiftBattleModuleProperties::StaticClassInit() */

void ZombossRiftBattleModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossRiftBattleModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036e5c70,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRiftBattleModuleProperties::StaticGetClass() */

long * ZombossRiftBattleModuleProperties::StaticGetClass(void)

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
  uVar2 = ZombossBattleModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossRiftBattleModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRiftBattleModuleProperties::GetClass() const */

long * ZombossRiftBattleModuleProperties::GetClass(void)

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
  uVar2 = ZombossBattleModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossRiftBattleModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRiftBattleModuleProperties::GetModuleClass() const */

long * ZombossRiftBattleModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ZombossRiftBattleModule::sClass != (long *)0x0) {
    return ZombossRiftBattleModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ZombossRiftBattleModule::sClass = plVar1;
  uVar2 = ZombossBattleModule::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossRiftBattleModule",uVar2,ZombossRiftBattleModule::StaticNew);
  ZombossRiftBattleModule::StaticClassInit();
  return ZombossRiftBattleModule::sClass;
}


/* ZombossRiftBattleModuleProperties::ZombossRiftBattleModuleProperties() */

void __thiscall
ZombossRiftBattleModuleProperties::ZombossRiftBattleModuleProperties
          (ZombossRiftBattleModuleProperties *this)

{
  ZombossBattleModuleProperties::ZombossBattleModuleProperties
            ((ZombossBattleModuleProperties *)this);
  *(undefined4 *)(this + 0x68) = 1;
  *(undefined ***)this = &PTR_GetClass_06685e60;
  *(undefined4 *)(this + 0x6c) = 0x43340000;
  return;
}


/* ZombossRiftBattleModuleProperties::StaticNew() */

ZombossRiftBattleModuleProperties * ZombossRiftBattleModuleProperties::StaticNew(void)

{
  ZombossRiftBattleModuleProperties *this;
  
  this = ::operator_new(0x70);
  ZombossRiftBattleModuleProperties(this);
  return this;
}


/* ZombossRiftBattleModuleProperties::~ZombossRiftBattleModuleProperties() */

void __thiscall
ZombossRiftBattleModuleProperties::~ZombossRiftBattleModuleProperties
          (ZombossRiftBattleModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06685e60;
  ZombossBattleModuleProperties::~ZombossBattleModuleProperties
            ((ZombossBattleModuleProperties *)this);
  return;
}


/* ZombossRiftBattleModuleProperties::~ZombossRiftBattleModuleProperties() */

void __thiscall
ZombossRiftBattleModuleProperties::~ZombossRiftBattleModuleProperties
          (ZombossRiftBattleModuleProperties *this)

{
  ~ZombossRiftBattleModuleProperties(this);
  AK::FreeHook(this);
  return;
}

