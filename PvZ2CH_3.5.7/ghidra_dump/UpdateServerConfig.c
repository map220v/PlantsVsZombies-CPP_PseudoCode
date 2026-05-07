// Class: UpdateServerConfig


/* UpdateServerConfig::~UpdateServerConfig() */

void __thiscall UpdateServerConfig::~UpdateServerConfig(UpdateServerConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0684aa90;
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  nop();
  return;
}


/* UpdateServerConfig::~UpdateServerConfig() */

void __thiscall UpdateServerConfig::~UpdateServerConfig(UpdateServerConfig *this)

{
  ~UpdateServerConfig(this);
  AK::FreeHook(this);
  return;
}


/* UpdateServerConfig::UpdateServerConfig() */

void __thiscall UpdateServerConfig::UpdateServerConfig(UpdateServerConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0684aa90;
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  Set8BytesTo0(this + 0x30);
  return;
}


/* UpdateServerConfig::StaticNew() */

UpdateServerConfig * UpdateServerConfig::StaticNew(void)

{
  UpdateServerConfig *this;
  
  this = ::operator_new(0x38);
  UpdateServerConfig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UpdateServerConfig::StaticClassInit() */

void UpdateServerConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"UpdateServerConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_04441cbc,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UpdateServerConfig::StaticGetClass() */

long * UpdateServerConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UpdateServerConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UpdateServerConfig::GetClass() const */

long * UpdateServerConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"UpdateServerConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

