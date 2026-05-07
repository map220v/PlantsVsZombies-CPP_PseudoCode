// Class: SummonZombieEffectProperty


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummonZombieEffectProperty::StaticClassInit() */

void SummonZombieEffectProperty::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieSummonPacket");
    (*pcVar3)(plVar2,asStack_10,FUN_0360f07c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SummonZombieEffectProperty");
    (*pcVar3)(plVar2,asStack_10,FUN_0360f358,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SummonZombieEffectProperty::StaticGetClass() */

long * SummonZombieEffectProperty::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SummonZombieEffectProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SummonZombieEffectProperty::GetClass() const */

long * SummonZombieEffectProperty::GetClass(void)

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
  (*pcVar3)(plVar1,"SummonZombieEffectProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SummonZombieEffectProperty::GetCardEffectClass() const */

long * SummonZombieEffectProperty::GetCardEffectClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SummonZombieEffect::sClass != (long *)0x0) {
    return SummonZombieEffect::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SummonZombieEffect::sClass = plVar1;
  uVar2 = CardEffect::StaticGetClass();
  (*pcVar3)(plVar1,"SummonZombieEffect",uVar2,SummonZombieEffect::StaticNew);
  SummonZombieEffect::StaticClassInit();
  return SummonZombieEffect::sClass;
}


/* SummonZombieEffectProperty::SummonZombieEffectProperty() */

void __thiscall
SummonZombieEffectProperty::SummonZombieEffectProperty(SummonZombieEffectProperty *this)

{
  CardEffectProperty::CardEffectProperty((CardEffectProperty *)this);
  *(undefined ***)this = &PTR_GetClass_06667580;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* SummonZombieEffectProperty::StaticNew() */

SummonZombieEffectProperty * SummonZombieEffectProperty::StaticNew(void)

{
  SummonZombieEffectProperty *this;
  
  this = ::operator_new(0x28);
  SummonZombieEffectProperty(this);
  return this;
}


/* SummonZombieEffectProperty::~SummonZombieEffectProperty() */

void __thiscall
SummonZombieEffectProperty::~SummonZombieEffectProperty(SummonZombieEffectProperty *this)

{
  *(undefined ***)this = &PTR_GetClass_06667580;
  std::vector<ZombieSummonPacket,std::allocator<ZombieSummonPacket>>::~vector
            ((vector<ZombieSummonPacket,std::allocator<ZombieSummonPacket>> *)(this + 0x10));
  CardEffectProperty::~CardEffectProperty((CardEffectProperty *)this);
  return;
}


/* SummonZombieEffectProperty::~SummonZombieEffectProperty() */

void __thiscall
SummonZombieEffectProperty::~SummonZombieEffectProperty(SummonZombieEffectProperty *this)

{
  ~SummonZombieEffectProperty(this);
  AK::FreeHook(this);
  return;
}

