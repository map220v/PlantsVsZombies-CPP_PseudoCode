// Class: ForceUpdateConfig


/* ForceUpdateConfig::~ForceUpdateConfig() */

void __thiscall ForceUpdateConfig::~ForceUpdateConfig(ForceUpdateConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0684ad90;
  std::string::~string((string *)(this + 8));
  nop();
  return;
}


/* ForceUpdateConfig::~ForceUpdateConfig() */

void __thiscall ForceUpdateConfig::~ForceUpdateConfig(ForceUpdateConfig *this)

{
  ~ForceUpdateConfig(this);
  AK::FreeHook(this);
  return;
}


/* ForceUpdateConfig::ForceUpdateConfig() */

void __thiscall ForceUpdateConfig::ForceUpdateConfig(ForceUpdateConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0684ad90;
  Set8BytesTo0(this + 8);
  return;
}


/* ForceUpdateConfig::StaticNew() */

ForceUpdateConfig * ForceUpdateConfig::StaticNew(void)

{
  ForceUpdateConfig *this;
  
  this = ::operator_new(0x10);
  ForceUpdateConfig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ForceUpdateConfig::StaticClassInit() */

void ForceUpdateConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"ForceUpdateConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_04443b50,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ForceUpdateConfig::StaticGetClass() */

long * ForceUpdateConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ForceUpdateConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ForceUpdateConfig::GetClass() const */

long * ForceUpdateConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"ForceUpdateConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

