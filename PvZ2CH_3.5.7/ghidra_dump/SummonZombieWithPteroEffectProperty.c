// Class: SummonZombieWithPteroEffectProperty


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummonZombieWithPteroEffectProperty::StaticClassInit() */

void SummonZombieWithPteroEffectProperty::StaticClassInit(void)

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
    std::string::string(asStack_10,"SummonZombieWithPteroEffectProperty");
    (*pcVar2)(plVar1,asStack_10,FUN_03611958,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SummonZombieWithPteroEffectProperty::StaticGetClass() */

long * SummonZombieWithPteroEffectProperty::StaticGetClass(void)

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
  uVar2 = SummonZombieEffectProperty::StaticGetClass();
  (*pcVar3)(plVar1,"SummonZombieWithPteroEffectProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SummonZombieWithPteroEffectProperty::GetClass() const */

long * SummonZombieWithPteroEffectProperty::GetClass(void)

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
  uVar2 = SummonZombieEffectProperty::StaticGetClass();
  (*pcVar3)(plVar1,"SummonZombieWithPteroEffectProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SummonZombieWithPteroEffectProperty::GetCardEffectClass() const */

long * SummonZombieWithPteroEffectProperty::GetCardEffectClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SummonZombieWithPteroEffect::sClass != (long *)0x0) {
    return SummonZombieWithPteroEffect::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SummonZombieWithPteroEffect::sClass = plVar1;
  uVar2 = SummonZombieEffect::StaticGetClass();
  (*pcVar3)(plVar1,"SummonZombieWithPteroEffect",uVar2,SummonZombieWithPteroEffect::StaticNew);
  SummonZombieWithPteroEffect::StaticClassInit();
  return SummonZombieWithPteroEffect::sClass;
}


/* SummonZombieWithPteroEffectProperty::SummonZombieWithPteroEffectProperty() */

void __thiscall
SummonZombieWithPteroEffectProperty::SummonZombieWithPteroEffectProperty
          (SummonZombieWithPteroEffectProperty *this)

{
  SummonZombieEffectProperty::SummonZombieEffectProperty((SummonZombieEffectProperty *)this);
  *(undefined ***)this = &PTR_GetClass_06667f10;
  Sexy::Point::Point((Point *)(this + 0x28),1,0xd);
  return;
}


/* SummonZombieWithPteroEffectProperty::StaticNew() */

SummonZombieWithPteroEffectProperty * SummonZombieWithPteroEffectProperty::StaticNew(void)

{
  SummonZombieWithPteroEffectProperty *this;
  
  this = ::operator_new(0x30);
  SummonZombieWithPteroEffectProperty(this);
  return this;
}


/* SummonZombieWithPteroEffectProperty::~SummonZombieWithPteroEffectProperty() */

void __thiscall
SummonZombieWithPteroEffectProperty::~SummonZombieWithPteroEffectProperty
          (SummonZombieWithPteroEffectProperty *this)

{
  *(undefined ***)this = &PTR_GetClass_06667f10;
  SummonZombieEffectProperty::~SummonZombieEffectProperty((SummonZombieEffectProperty *)this);
  return;
}


/* SummonZombieWithPteroEffectProperty::~SummonZombieWithPteroEffectProperty() */

void __thiscall
SummonZombieWithPteroEffectProperty::~SummonZombieWithPteroEffectProperty
          (SummonZombieWithPteroEffectProperty *this)

{
  ~SummonZombieWithPteroEffectProperty(this);
  AK::FreeHook(this);
  return;
}

