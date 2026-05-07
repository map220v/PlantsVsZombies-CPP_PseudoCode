// Class: ServerConfig


/* ServerConfig::~ServerConfig() */

void __thiscall ServerConfig::~ServerConfig(ServerConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0684a910;
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  nop();
  return;
}


/* ServerConfig::~ServerConfig() */

void __thiscall ServerConfig::~ServerConfig(ServerConfig *this)

{
  ~ServerConfig(this);
  AK::FreeHook(this);
  return;
}


/* ServerConfig::ServerConfig() */

void __thiscall ServerConfig::ServerConfig(ServerConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0684a910;
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  return;
}


/* ServerConfig::StaticNew() */

ServerConfig * ServerConfig::StaticNew(void)

{
  ServerConfig *this;
  
  this = ::operator_new(0x20);
  ServerConfig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ServerConfig::StaticClassInit() */

void ServerConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"ServerConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_044410d4,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ServerConfig::StaticGetClass() */

long * ServerConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ServerConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ServerConfig::GetClass() const */

long * ServerConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"ServerConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

