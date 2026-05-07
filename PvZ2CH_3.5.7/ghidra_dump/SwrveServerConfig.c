// Class: SwrveServerConfig


/* SwrveServerConfig::~SwrveServerConfig() */

void __thiscall SwrveServerConfig::~SwrveServerConfig(SwrveServerConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0684aa30;
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  nop();
  return;
}


/* SwrveServerConfig::~SwrveServerConfig() */

void __thiscall SwrveServerConfig::~SwrveServerConfig(SwrveServerConfig *this)

{
  ~SwrveServerConfig(this);
  AK::FreeHook(this);
  return;
}


/* SwrveServerConfig::SwrveServerConfig() */

void __thiscall SwrveServerConfig::SwrveServerConfig(SwrveServerConfig *this)

{
  size_t in_x2;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0684aa30;
  Set8BytesTo0((string *)(this + 8));
  Set8BytesTo0((string *)(this + 0x10));
  Set8BytesTo0((string *)(this + 0x18));
  std::string::append((string *)(this + 8),"3loBa749z28yVqmeyb9",in_x2);
  std::string::append((string *)(this + 0x10),"http://api.swrve.com.cn/",in_x2);
  std::string::append((string *)(this + 0x18),"http://abtest.swrve.com.cn/",in_x2);
  return;
}


/* SwrveServerConfig::StaticNew() */

SwrveServerConfig * SwrveServerConfig::StaticNew(void)

{
  SwrveServerConfig *this;
  
  this = ::operator_new(0x20);
  SwrveServerConfig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SwrveServerConfig::StaticClassInit() */

void SwrveServerConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"SwrveServerConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_04441920,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SwrveServerConfig::StaticGetClass() */

long * SwrveServerConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SwrveServerConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SwrveServerConfig::GetClass() const */

long * SwrveServerConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"SwrveServerConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

