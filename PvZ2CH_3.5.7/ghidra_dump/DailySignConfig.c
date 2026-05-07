// Class: DailySignConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignConfig::StaticClassInit() */

void DailySignConfig::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DailySignBonus");
    (*pcVar3)(plVar2,asStack_10,FUN_03976f38,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DailySignConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_039726f0,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DailySignConfig::StaticGetClass() */

long * DailySignConfig::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"DailySignConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DailySignConfig::GetClass() const */

long * DailySignConfig::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"DailySignConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DailySignConfig::DailySignConfig() */

void __thiscall DailySignConfig::DailySignConfig(DailySignConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066d8da0;
  DailySignBonus::DailySignBonus((DailySignBonus *)(this + 0x10));
  Set8BytesTo0(this + 0x48);
  return;
}


/* DailySignConfig::StaticNew() */

DailySignConfig * DailySignConfig::StaticNew(void)

{
  DailySignConfig *this;
  
  this = ::operator_new(0x50);
  DailySignConfig(this);
  return this;
}


/* DailySignConfig::~DailySignConfig() */

void __thiscall DailySignConfig::~DailySignConfig(DailySignConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_066d8da0;
  std::string::~string((string *)(this + 0x48));
  DailySignBonus::~DailySignBonus((DailySignBonus *)(this + 0x10));
  nop();
  return;
}


/* DailySignConfig::~DailySignConfig() */

void __thiscall DailySignConfig::~DailySignConfig(DailySignConfig *this)

{
  ~DailySignConfig(this);
  AK::FreeHook(this);
  return;
}

