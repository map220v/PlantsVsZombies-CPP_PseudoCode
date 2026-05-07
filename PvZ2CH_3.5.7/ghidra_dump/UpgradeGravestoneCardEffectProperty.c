// Class: UpgradeGravestoneCardEffectProperty


/* UpgradeGravestoneCardEffectProperty::~UpgradeGravestoneCardEffectProperty() */

void __thiscall
UpgradeGravestoneCardEffectProperty::~UpgradeGravestoneCardEffectProperty
          (UpgradeGravestoneCardEffectProperty *this)

{
  *(undefined ***)this = &PTR_GetClass_06667b90;
  CardEffectProperty::~CardEffectProperty((CardEffectProperty *)this);
  return;
}


/* UpgradeGravestoneCardEffectProperty::~UpgradeGravestoneCardEffectProperty() */

void __thiscall
UpgradeGravestoneCardEffectProperty::~UpgradeGravestoneCardEffectProperty
          (UpgradeGravestoneCardEffectProperty *this)

{
  ~UpgradeGravestoneCardEffectProperty(this);
  AK::FreeHook(this);
  return;
}


/* UpgradeGravestoneCardEffectProperty::UpgradeGravestoneCardEffectProperty() */

void __thiscall
UpgradeGravestoneCardEffectProperty::UpgradeGravestoneCardEffectProperty
          (UpgradeGravestoneCardEffectProperty *this)

{
  CardEffectProperty::CardEffectProperty((CardEffectProperty *)this);
  *(undefined ***)this = &PTR_GetClass_06667b90;
  return;
}


/* UpgradeGravestoneCardEffectProperty::StaticNew() */

UpgradeGravestoneCardEffectProperty * UpgradeGravestoneCardEffectProperty::StaticNew(void)

{
  UpgradeGravestoneCardEffectProperty *this;
  
  this = ::operator_new(0x10);
  UpgradeGravestoneCardEffectProperty(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UpgradeGravestoneCardEffectProperty::StaticClassInit() */

void UpgradeGravestoneCardEffectProperty::StaticClassInit(void)

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
    std::string::string(asStack_10,"UpgradeGravestoneCardEffectProperty");
    (*pcVar2)(plVar1,asStack_10,FUN_0360d978,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UpgradeGravestoneCardEffectProperty::StaticGetClass() */

long * UpgradeGravestoneCardEffectProperty::StaticGetClass(void)

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
  uVar2 = CardEffectProperty::StaticGetClass();
  (*pcVar3)(plVar1,"UpgradeGravestoneCardEffectProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UpgradeGravestoneCardEffectProperty::GetClass() const */

long * UpgradeGravestoneCardEffectProperty::GetClass(void)

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
  uVar2 = CardEffectProperty::StaticGetClass();
  (*pcVar3)(plVar1,"UpgradeGravestoneCardEffectProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UpgradeGravestoneCardEffectProperty::GetCardEffectClass() const */

long * UpgradeGravestoneCardEffectProperty::GetCardEffectClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (UpgradeGravestoneCardEffect::sClass != (long *)0x0) {
    return UpgradeGravestoneCardEffect::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  UpgradeGravestoneCardEffect::sClass = plVar1;
  uVar2 = CardEffect::StaticGetClass();
  (*pcVar3)(plVar1,"UpgradeGravestoneCardEffect",uVar2,UpgradeGravestoneCardEffect::StaticNew);
  UpgradeGravestoneCardEffect::StaticClassInit();
  return UpgradeGravestoneCardEffect::sClass;
}

