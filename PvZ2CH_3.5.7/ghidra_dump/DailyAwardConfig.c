// Class: DailyAwardConfig


/* DailyAwardConfig::DailyAwardConfig() */

void __thiscall DailyAwardConfig::DailyAwardConfig(DailyAwardConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066d77f0;
  DailyAwardBonus::DailyAwardBonus((DailyAwardBonus *)(this + 8));
  return;
}


/* DailyAwardConfig::~DailyAwardConfig() */

void __thiscall DailyAwardConfig::~DailyAwardConfig(DailyAwardConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_066d77f0;
  DailySignBonus::~DailySignBonus((DailySignBonus *)(this + 8));
  nop();
  return;
}


/* DailyAwardConfig::~DailyAwardConfig() */

void __thiscall DailyAwardConfig::~DailyAwardConfig(DailyAwardConfig *this)

{
  ~DailyAwardConfig(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAwardConfig::StaticClassInit() */

void DailyAwardConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"DailyAwardConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_0396caec,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DailyAwardConfig::StaticGetClass() */

long * DailyAwardConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DailyAwardConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DailyAwardConfig::GetClass() const */

long * DailyAwardConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"DailyAwardConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DailyAwardConfig::StaticNew() */

DailyAwardConfig * DailyAwardConfig::StaticNew(void)

{
  DailyAwardConfig *this;
  
  this = ::operator_new(0x38);
  DailyAwardConfig(this);
  return this;
}

