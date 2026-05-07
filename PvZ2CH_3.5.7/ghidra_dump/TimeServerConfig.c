// Class: TimeServerConfig


/* TimeServerConfig::~TimeServerConfig() */

void __thiscall TimeServerConfig::~TimeServerConfig(TimeServerConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0684ad30;
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  nop();
  return;
}


/* TimeServerConfig::~TimeServerConfig() */

void __thiscall TimeServerConfig::~TimeServerConfig(TimeServerConfig *this)

{
  ~TimeServerConfig(this);
  AK::FreeHook(this);
  return;
}


/* TimeServerConfig::TimeServerConfig() */

void __thiscall TimeServerConfig::TimeServerConfig(TimeServerConfig *this)

{
  size_t in_x2;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0684ad30;
  Set8BytesTo0((string *)(this + 8));
  Set8BytesTo0((string *)(this + 0x10));
  std::string::append((string *)(this + 8),"",in_x2);
  std::string::append((string *)(this + 0x10),"",in_x2);
  return;
}


/* TimeServerConfig::StaticNew() */

TimeServerConfig * TimeServerConfig::StaticNew(void)

{
  TimeServerConfig *this;
  
  this = ::operator_new(0x18);
  TimeServerConfig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeServerConfig::StaticClassInit() */

void TimeServerConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"TimeServerConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_04443848,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TimeServerConfig::StaticGetClass() */

long * TimeServerConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TimeServerConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TimeServerConfig::GetClass() const */

long * TimeServerConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"TimeServerConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

