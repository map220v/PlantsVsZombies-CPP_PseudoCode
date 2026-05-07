// Class: RechargeCheckConfig


/* RechargeCheckConfig::~RechargeCheckConfig() */

void __thiscall RechargeCheckConfig::~RechargeCheckConfig(RechargeCheckConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0684ae50;
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  nop();
  return;
}


/* RechargeCheckConfig::~RechargeCheckConfig() */

void __thiscall RechargeCheckConfig::~RechargeCheckConfig(RechargeCheckConfig *this)

{
  ~RechargeCheckConfig(this);
  AK::FreeHook(this);
  return;
}


/* RechargeCheckConfig::RechargeCheckConfig() */

void __thiscall RechargeCheckConfig::RechargeCheckConfig(RechargeCheckConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0684ae50;
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  return;
}


/* RechargeCheckConfig::StaticNew() */

RechargeCheckConfig * RechargeCheckConfig::StaticNew(void)

{
  RechargeCheckConfig *this;
  
  this = ::operator_new(0x18);
  RechargeCheckConfig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeCheckConfig::StaticClassInit() */

void RechargeCheckConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"RechargeCheckConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_04444078,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RechargeCheckConfig::StaticGetClass() */

long * RechargeCheckConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RechargeCheckConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RechargeCheckConfig::GetClass() const */

long * RechargeCheckConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"RechargeCheckConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

