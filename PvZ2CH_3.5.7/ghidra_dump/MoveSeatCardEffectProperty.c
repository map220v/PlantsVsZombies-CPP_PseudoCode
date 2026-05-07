// Class: MoveSeatCardEffectProperty


/* MoveSeatCardEffectProperty::~MoveSeatCardEffectProperty() */

void __thiscall
MoveSeatCardEffectProperty::~MoveSeatCardEffectProperty(MoveSeatCardEffectProperty *this)

{
  *(undefined ***)this = &PTR_GetClass_06667990;
  CardEffectProperty::~CardEffectProperty((CardEffectProperty *)this);
  return;
}


/* MoveSeatCardEffectProperty::~MoveSeatCardEffectProperty() */

void __thiscall
MoveSeatCardEffectProperty::~MoveSeatCardEffectProperty(MoveSeatCardEffectProperty *this)

{
  ~MoveSeatCardEffectProperty(this);
  AK::FreeHook(this);
  return;
}


/* MoveSeatCardEffectProperty::MoveSeatCardEffectProperty() */

void __thiscall
MoveSeatCardEffectProperty::MoveSeatCardEffectProperty(MoveSeatCardEffectProperty *this)

{
  CardEffectProperty::CardEffectProperty((CardEffectProperty *)this);
  *(undefined4 *)(this + 0x10) = 2;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 1;
  *(undefined ***)this = &PTR_GetClass_06667990;
  return;
}


/* MoveSeatCardEffectProperty::StaticNew() */

MoveSeatCardEffectProperty * MoveSeatCardEffectProperty::StaticNew(void)

{
  MoveSeatCardEffectProperty *this;
  
  this = ::operator_new(0x18);
  MoveSeatCardEffectProperty(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoveSeatCardEffectProperty::StaticClassInit() */

void MoveSeatCardEffectProperty::StaticClassInit(void)

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
    std::string::string(asStack_10,"MoveSeatCardEffectProperty");
    (*pcVar2)(plVar1,asStack_10,FUN_0360e660,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MoveSeatCardEffectProperty::StaticGetClass() */

long * MoveSeatCardEffectProperty::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MoveSeatCardEffectProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MoveSeatCardEffectProperty::GetClass() const */

long * MoveSeatCardEffectProperty::GetClass(void)

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
  (*pcVar3)(plVar1,"MoveSeatCardEffectProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MoveSeatCardEffectProperty::GetCardEffectClass() const */

long * MoveSeatCardEffectProperty::GetCardEffectClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (MoveSeatCardEffect::sClass != (long *)0x0) {
    return MoveSeatCardEffect::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  MoveSeatCardEffect::sClass = plVar1;
  uVar2 = CardEffect::StaticGetClass();
  (*pcVar3)(plVar1,"MoveSeatCardEffect",uVar2,MoveSeatCardEffect::StaticNew);
  MoveSeatCardEffect::StaticClassInit();
  return MoveSeatCardEffect::sClass;
}

