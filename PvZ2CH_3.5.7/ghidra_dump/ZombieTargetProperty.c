// Class: ZombieTargetProperty


/* ZombieTargetProperty::IsTargeted() const */

byte __thiscall ZombieTargetProperty::IsTargeted(ZombieTargetProperty *this)

{
  return (byte)this[0x11] ^ 1;
}


/* ZombieTargetProperty::~ZombieTargetProperty() */

void __thiscall ZombieTargetProperty::~ZombieTargetProperty(ZombieTargetProperty *this)

{
  *(undefined ***)this = &PTR_GetClass_06666b90;
  CardTargetProperty::~CardTargetProperty((CardTargetProperty *)this);
  return;
}


/* ZombieTargetProperty::~ZombieTargetProperty() */

void __thiscall ZombieTargetProperty::~ZombieTargetProperty(ZombieTargetProperty *this)

{
  ~ZombieTargetProperty(this);
  AK::FreeHook(this);
  return;
}


/* ZombieTargetProperty::GetTargetAdaptorClass() const */

long * ZombieTargetProperty::GetTargetAdaptorClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ZombieTargetAdaptor::sClass != (long *)0x0) {
    return ZombieTargetAdaptor::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ZombieTargetAdaptor::sClass = plVar1;
  uVar2 = CardTargetAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTargetAdaptor",uVar2,ZombieTargetAdaptor::StaticNew);
  ZombieTargetAdaptor::StaticClassInit();
  return ZombieTargetAdaptor::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTargetProperty::StaticClassInit() */

void ZombieTargetProperty::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieTargetProperty");
    (*pcVar2)(plVar1,asStack_10,FUN_03606318,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTargetProperty::StaticGetClass() */

long * ZombieTargetProperty::StaticGetClass(void)

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
  uVar2 = CardTargetProperty::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTargetProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTargetProperty::GetClass() const */

long * ZombieTargetProperty::GetClass(void)

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
  uVar2 = CardTargetProperty::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTargetProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTargetProperty::ZombieTargetProperty() */

void __thiscall ZombieTargetProperty::ZombieTargetProperty(ZombieTargetProperty *this)

{
  CardTargetProperty::CardTargetProperty((CardTargetProperty *)this);
  this[0x11] = (ZombieTargetProperty)0x1;
  *(undefined4 *)(this + 0x14) = 1;
  *(undefined ***)this = &PTR_GetClass_06666b90;
  return;
}


/* ZombieTargetProperty::StaticNew() */

ZombieTargetProperty * ZombieTargetProperty::StaticNew(void)

{
  ZombieTargetProperty *this;
  
  this = ::operator_new(0x18);
  ZombieTargetProperty(this);
  return this;
}

