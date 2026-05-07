// Class: ZombieTitleShieldProperties


/* ZombieTitleShieldProperties::~ZombieTitleShieldProperties() */

void __thiscall
ZombieTitleShieldProperties::~ZombieTitleShieldProperties(ZombieTitleShieldProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06620c20;
  ZombieTitleProperties::~ZombieTitleProperties((ZombieTitleProperties *)this);
  return;
}


/* ZombieTitleShieldProperties::~ZombieTitleShieldProperties() */

void __thiscall
ZombieTitleShieldProperties::~ZombieTitleShieldProperties(ZombieTitleShieldProperties *this)

{
  ~ZombieTitleShieldProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTitleShieldProperties::StaticClassInit() */

void ZombieTitleShieldProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieTitleShieldProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_034175d0,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTitleShieldProperties::ZombieTitleShieldProperties() */

void __thiscall
ZombieTitleShieldProperties::ZombieTitleShieldProperties(ZombieTitleShieldProperties *this)

{
  ZombieTitleProperties::ZombieTitleProperties((ZombieTitleProperties *)this);
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR_GetClass_06620c20;
  return;
}


/* ZombieTitleShieldProperties::StaticNew() */

ZombieTitleShieldProperties * ZombieTitleShieldProperties::StaticNew(void)

{
  ZombieTitleShieldProperties *this;
  
  this = ::operator_new(0x38);
  ZombieTitleShieldProperties(this);
  return this;
}


/* ZombieTitleShieldProperties::StaticGetClass() */

long * ZombieTitleShieldProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieTitleShieldProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTitleShieldProperties::GetClass() const */

long * ZombieTitleShieldProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieTitleShieldProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

