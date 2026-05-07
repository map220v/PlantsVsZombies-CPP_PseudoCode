// Class: ZombossVictoryOutroProperties


/* ZombossVictoryOutroProperties::GetModuleClass() const */

long * ZombossVictoryOutroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ZombossVictoryOutroModule::sClass != (long *)0x0) {
    return ZombossVictoryOutroModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ZombossVictoryOutroModule::sClass = plVar1;
  uVar2 = VictoryOutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossVictoryOutroModule",uVar2,ZombossVictoryOutroModule::StaticNew);
  ZombossVictoryOutroModule::StaticClassInit();
  return ZombossVictoryOutroModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossVictoryOutroProperties::StaticClassInit() */

void ZombossVictoryOutroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossVictoryOutroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04750bfc,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossVictoryOutroProperties::StaticGetClass() */

long * ZombossVictoryOutroProperties::StaticGetClass(void)

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
  uVar2 = VictoryOutroProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossVictoryOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossVictoryOutroProperties::GetClass() const */

long * ZombossVictoryOutroProperties::GetClass(void)

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
  uVar2 = VictoryOutroProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossVictoryOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossVictoryOutroProperties::ZombossVictoryOutroProperties() */

void __thiscall
ZombossVictoryOutroProperties::ZombossVictoryOutroProperties(ZombossVictoryOutroProperties *this)

{
  VictoryOutroProperties::VictoryOutroProperties((VictoryOutroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_068cc320;
  return;
}


/* ZombossVictoryOutroProperties::StaticNew() */

ZombossVictoryOutroProperties * ZombossVictoryOutroProperties::StaticNew(void)

{
  ZombossVictoryOutroProperties *this;
  
  this = ::operator_new(0x68);
  ZombossVictoryOutroProperties(this);
  return this;
}


/* ZombossVictoryOutroProperties::~ZombossVictoryOutroProperties() */

void __thiscall
ZombossVictoryOutroProperties::~ZombossVictoryOutroProperties(ZombossVictoryOutroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_068cc320;
  VictoryOutroProperties::~VictoryOutroProperties((VictoryOutroProperties *)this);
  return;
}


/* ZombossVictoryOutroProperties::~ZombossVictoryOutroProperties() */

void __thiscall
ZombossVictoryOutroProperties::~ZombossVictoryOutroProperties(ZombossVictoryOutroProperties *this)

{
  ~ZombossVictoryOutroProperties(this);
  AK::FreeHook(this);
  return;
}

