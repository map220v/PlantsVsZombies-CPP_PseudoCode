// Class: PHPServerConfig


/* PHPServerConfig::~PHPServerConfig() */

void __thiscall PHPServerConfig::~PHPServerConfig(PHPServerConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0684acd0;
  std::string::~string((string *)(this + 0x48));
  std::string::~string((string *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  nop();
  return;
}


/* PHPServerConfig::~PHPServerConfig() */

void __thiscall PHPServerConfig::~PHPServerConfig(PHPServerConfig *this)

{
  ~PHPServerConfig(this);
  AK::FreeHook(this);
  return;
}


/* PHPServerConfig::PHPServerConfig() */

void __thiscall PHPServerConfig::PHPServerConfig(PHPServerConfig *this)

{
  size_t in_x2;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0684acd0;
  Set8BytesTo0((string *)(this + 8));
  Set8BytesTo0((string *)(this + 0x10));
  Set8BytesTo0((string *)(this + 0x18));
  Set8BytesTo0((string *)(this + 0x20));
  Set8BytesTo0((string *)(this + 0x28));
  Set8BytesTo0((string *)(this + 0x30));
  Set8BytesTo0((string *)(this + 0x38));
  Set8BytesTo0((string *)(this + 0x40));
  Set8BytesTo0((string *)(this + 0x48));
  std::string::append((string *)(this + 8),"",in_x2);
  std::string::append((string *)(this + 0x10),"",in_x2);
  std::string::append((string *)(this + 0x18),"",in_x2);
  std::string::append((string *)(this + 0x20),"",in_x2);
  std::string::append((string *)(this + 0x28),"",in_x2);
  std::string::append((string *)(this + 0x30),"",in_x2);
  std::string::append((string *)(this + 0x38),"",in_x2);
  std::string::append((string *)(this + 0x40),"",in_x2);
  std::string::append((string *)(this + 0x48),"",in_x2);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  return;
}


/* PHPServerConfig::StaticNew() */

PHPServerConfig * PHPServerConfig::StaticNew(void)

{
  PHPServerConfig *this;
  
  this = ::operator_new(0x60);
  PHPServerConfig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PHPServerConfig::StaticClassInit() */

void PHPServerConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"PHPServerConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_04443160,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PHPServerConfig::StaticGetClass() */

long * PHPServerConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PHPServerConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PHPServerConfig::GetClass() const */

long * PHPServerConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"PHPServerConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

