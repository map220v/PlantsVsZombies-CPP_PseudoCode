// Class: CDNConfig


/* CDNConfig::~CDNConfig() */

void __thiscall CDNConfig::~CDNConfig(CDNConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0684a970;
  std::string::~string((string *)(this + 8));
  nop();
  return;
}


/* CDNConfig::~CDNConfig() */

void __thiscall CDNConfig::~CDNConfig(CDNConfig *this)

{
  ~CDNConfig(this);
  AK::FreeHook(this);
  return;
}


/* CDNConfig::CDNConfig() */

void __thiscall CDNConfig::CDNConfig(CDNConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0684a970;
  Set8BytesTo0(this + 8);
  return;
}


/* CDNConfig::StaticNew() */

CDNConfig * CDNConfig::StaticNew(void)

{
  CDNConfig *this;
  
  this = ::operator_new(0x10);
  CDNConfig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CDNConfig::StaticClassInit() */

void CDNConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"CDNConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_04441448,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CDNConfig::StaticGetClass() */

long * CDNConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CDNConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CDNConfig::GetClass() const */

long * CDNConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"CDNConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

