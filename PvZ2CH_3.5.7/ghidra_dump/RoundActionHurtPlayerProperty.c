// Class: RoundActionHurtPlayerProperty


/* RoundActionHurtPlayerProperty::~RoundActionHurtPlayerProperty() */

void __thiscall
RoundActionHurtPlayerProperty::~RoundActionHurtPlayerProperty(RoundActionHurtPlayerProperty *this)

{
  *(undefined ***)this = &PTR_GetClass_06668b80;
  CardEffectProperty::~CardEffectProperty((CardEffectProperty *)this);
  return;
}


/* RoundActionHurtPlayerProperty::~RoundActionHurtPlayerProperty() */

void __thiscall
RoundActionHurtPlayerProperty::~RoundActionHurtPlayerProperty(RoundActionHurtPlayerProperty *this)

{
  ~RoundActionHurtPlayerProperty(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RoundActionHurtPlayerProperty::RoundActionHurtPlayerProperty() */

void __thiscall
RoundActionHurtPlayerProperty::RoundActionHurtPlayerProperty(RoundActionHurtPlayerProperty *this)

{
  undefined4 uVar1;
  
  CardEffectProperty::CardEffectProperty((CardEffectProperty *)this);
  uVar1 = _FUN_0361544c;
  *(undefined ***)this = &PTR_GetClass_06668b80;
  *(undefined4 *)(this + 0xc) = uVar1;
  return;
}


/* RoundActionHurtPlayerProperty::StaticNew() */

RoundActionHurtPlayerProperty * RoundActionHurtPlayerProperty::StaticNew(void)

{
  RoundActionHurtPlayerProperty *this;
  
  this = ::operator_new(0x10);
  RoundActionHurtPlayerProperty(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RoundActionHurtPlayerProperty::StaticClassInit() */

void RoundActionHurtPlayerProperty::StaticClassInit(void)

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
    std::string::string(asStack_10,"RoundActionHurtPlayerProperty");
    (*pcVar2)(plVar1,asStack_10,FUN_036155b0,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RoundActionHurtPlayerProperty::StaticGetClass() */

long * RoundActionHurtPlayerProperty::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RoundActionHurtPlayerProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RoundActionHurtPlayerProperty::GetClass() const */

long * RoundActionHurtPlayerProperty::GetClass(void)

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
  (*pcVar3)(plVar1,"RoundActionHurtPlayerProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RoundActionHurtPlayerProperty::GetCardEffectClass() const */

long * RoundActionHurtPlayerProperty::GetCardEffectClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (RoundActionHurtPlayer::sClass != (long *)0x0) {
    return RoundActionHurtPlayer::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  RoundActionHurtPlayer::sClass = plVar1;
  uVar2 = CardEffect::StaticGetClass();
  (*pcVar3)(plVar1,"RoundActionHurtPlayer",uVar2,RoundActionHurtPlayer::StaticNew);
  RoundActionHurtPlayer::StaticClassInit();
  return RoundActionHurtPlayer::sClass;
}

