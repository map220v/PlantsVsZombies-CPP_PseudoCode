// Class: ObtainCardEffect


/* ObtainCardEffect::DoEffect() */

void __thiscall ObtainCardEffect::DoEffect(ObtainCardEffect *this)

{
  *(undefined4 *)(this + 0x20) = 3;
  return;
}


/* ObtainCardEffect::ObtainCardEffect() */

void __thiscall ObtainCardEffect::ObtainCardEffect(ObtainCardEffect *this)

{
  CardEffect::CardEffect((CardEffect *)this);
  *(undefined ***)this = &PTR_GetCardEffectClass_066677f0;
  return;
}


/* ObtainCardEffect::StaticNew() */

ObtainCardEffect * ObtainCardEffect::StaticNew(void)

{
  ObtainCardEffect *this;
  
  this = ::operator_new(0x28);
  ObtainCardEffect(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObtainCardEffect::StaticClassInit() */

void ObtainCardEffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"ObtainCardEffect");
    (*pcVar2)(plVar1,asStack_10,FUN_0360cc78,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ObtainCardEffect::StaticGetClass() */

long * ObtainCardEffect::StaticGetClass(void)

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
  uVar2 = CardEffect::StaticGetClass();
  (*pcVar3)(plVar1,"ObtainCardEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ObtainCardEffect::~ObtainCardEffect() */

void __thiscall ObtainCardEffect::~ObtainCardEffect(ObtainCardEffect *this)

{
  *(undefined ***)this = &PTR_GetCardEffectClass_066677f0;
  CardEffect::~CardEffect((CardEffect *)this);
  return;
}


/* ObtainCardEffect::~ObtainCardEffect() */

void __thiscall ObtainCardEffect::~ObtainCardEffect(ObtainCardEffect *this)

{
  ~ObtainCardEffect(this);
  AK::FreeHook(this);
  return;
}

