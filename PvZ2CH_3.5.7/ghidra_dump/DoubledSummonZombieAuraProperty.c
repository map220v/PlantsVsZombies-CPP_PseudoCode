// Class: DoubledSummonZombieAuraProperty


/* DoubledSummonZombieAuraProperty::~DoubledSummonZombieAuraProperty() */

void __thiscall
DoubledSummonZombieAuraProperty::~DoubledSummonZombieAuraProperty
          (DoubledSummonZombieAuraProperty *this)

{
  *(undefined ***)this = &PTR_GetClass_06667280;
  InfluenceAuraProperty::~InfluenceAuraProperty((InfluenceAuraProperty *)this);
  return;
}


/* DoubledSummonZombieAuraProperty::~DoubledSummonZombieAuraProperty() */

void __thiscall
DoubledSummonZombieAuraProperty::~DoubledSummonZombieAuraProperty
          (DoubledSummonZombieAuraProperty *this)

{
  ~DoubledSummonZombieAuraProperty(this);
  AK::FreeHook(this);
  return;
}


/* DoubledSummonZombieAuraProperty::DoubledSummonZombieAuraProperty() */

void __thiscall
DoubledSummonZombieAuraProperty::DoubledSummonZombieAuraProperty
          (DoubledSummonZombieAuraProperty *this)

{
  InfluenceAuraProperty::InfluenceAuraProperty((InfluenceAuraProperty *)this);
  *(undefined4 *)(this + 8) = 1;
  *(undefined ***)this = &PTR_GetClass_06667280;
  return;
}


/* DoubledSummonZombieAuraProperty::StaticNew() */

DoubledSummonZombieAuraProperty * DoubledSummonZombieAuraProperty::StaticNew(void)

{
  DoubledSummonZombieAuraProperty *this;
  
  this = ::operator_new(0x10);
  DoubledSummonZombieAuraProperty(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DoubledSummonZombieAuraProperty::StaticClassInit() */

void DoubledSummonZombieAuraProperty::StaticClassInit(void)

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
    std::string::string(asStack_10,"DoubledSummonZombieAuraProperty");
    (*pcVar2)(plVar1,asStack_10,FUN_03609d34,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DoubledSummonZombieAuraProperty::StaticGetClass() */

long * DoubledSummonZombieAuraProperty::StaticGetClass(void)

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
  uVar2 = InfluenceAuraProperty::StaticGetClass();
  (*pcVar3)(plVar1,"DoubledSummonZombieAuraProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DoubledSummonZombieAuraProperty::GetClass() const */

long * DoubledSummonZombieAuraProperty::GetClass(void)

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
  uVar2 = InfluenceAuraProperty::StaticGetClass();
  (*pcVar3)(plVar1,"DoubledSummonZombieAuraProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DoubledSummonZombieAuraProperty::GetAuraClass() const */

long * DoubledSummonZombieAuraProperty::GetAuraClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (DoubledSummonZombieAura::sClass != (long *)0x0) {
    return DoubledSummonZombieAura::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  DoubledSummonZombieAura::sClass = plVar1;
  uVar2 = InfluenceAura::StaticGetClass();
  (*pcVar3)(plVar1,"DoubledSummonZombieAura",uVar2,DoubledSummonZombieAura::StaticNew);
  DoubledSummonZombieAura::StaticClassInit();
  return DoubledSummonZombieAura::sClass;
}

