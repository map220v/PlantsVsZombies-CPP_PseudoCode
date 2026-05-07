// Class: ZombieTitleAttackProperties


/* ZombieTitleAttackProperties::~ZombieTitleAttackProperties() */

void __thiscall
ZombieTitleAttackProperties::~ZombieTitleAttackProperties(ZombieTitleAttackProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06620e00;
  ZombieTitleProperties::~ZombieTitleProperties((ZombieTitleProperties *)this);
  return;
}


/* ZombieTitleAttackProperties::~ZombieTitleAttackProperties() */

void __thiscall
ZombieTitleAttackProperties::~ZombieTitleAttackProperties(ZombieTitleAttackProperties *this)

{
  ~ZombieTitleAttackProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTitleAttackProperties::StaticClassInit() */

void ZombieTitleAttackProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieTitleAttackProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03417c58,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTitleAttackProperties::ZombieTitleAttackProperties() */

void __thiscall
ZombieTitleAttackProperties::ZombieTitleAttackProperties(ZombieTitleAttackProperties *this)

{
  ZombieTitleProperties::ZombieTitleProperties((ZombieTitleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06620e00;
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


/* ZombieTitleAttackProperties::StaticNew() */

ZombieTitleAttackProperties * ZombieTitleAttackProperties::StaticNew(void)

{
  ZombieTitleAttackProperties *this;
  
  this = ::operator_new(0x38);
  ZombieTitleAttackProperties(this);
  return this;
}


/* ZombieTitleAttackProperties::StaticGetClass() */

long * ZombieTitleAttackProperties::StaticGetClass(void)

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
  uVar2 = ZombieTitleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTitleAttackProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTitleAttackProperties::GetClass() const */

long * ZombieTitleAttackProperties::GetClass(void)

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
  uVar2 = ZombieTitleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTitleAttackProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

