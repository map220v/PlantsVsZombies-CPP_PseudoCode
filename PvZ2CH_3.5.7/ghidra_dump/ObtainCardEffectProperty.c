// Class: ObtainCardEffectProperty


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObtainCardEffectProperty::StaticClassInit() */

void ObtainCardEffectProperty::StaticClassInit(void)

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
    std::string::string(asStack_10,"ObtainCardEffectProperty");
    (*pcVar2)(plVar1,asStack_10,FUN_0360fc70,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ObtainCardEffectProperty::StaticGetClass() */

long * ObtainCardEffectProperty::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ObtainCardEffectProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ObtainCardEffectProperty::GetClass() const */

long * ObtainCardEffectProperty::GetClass(void)

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
  (*pcVar3)(plVar1,"ObtainCardEffectProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ObtainCardEffectProperty::GetCardEffectClass() const */

long * ObtainCardEffectProperty::GetCardEffectClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ObtainCardEffect::sClass != (long *)0x0) {
    return ObtainCardEffect::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ObtainCardEffect::sClass = plVar1;
  uVar2 = CardEffect::StaticGetClass();
  (*pcVar3)(plVar1,"ObtainCardEffect",uVar2,ObtainCardEffect::StaticNew);
  ObtainCardEffect::StaticClassInit();
  return ObtainCardEffect::sClass;
}


/* ObtainCardEffectProperty::ObtainCardEffectProperty() */

void __thiscall ObtainCardEffectProperty::ObtainCardEffectProperty(ObtainCardEffectProperty *this)

{
  CardEffectProperty::CardEffectProperty((CardEffectProperty *)this);
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x10) = 1;
  *(undefined ***)this = &PTR_GetClass_06667790;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* ObtainCardEffectProperty::StaticNew() */

ObtainCardEffectProperty * ObtainCardEffectProperty::StaticNew(void)

{
  ObtainCardEffectProperty *this;
  
  this = ::operator_new(0x30);
  ObtainCardEffectProperty(this);
  return this;
}


/* ObtainCardEffectProperty::~ObtainCardEffectProperty() */

void __thiscall ObtainCardEffectProperty::~ObtainCardEffectProperty(ObtainCardEffectProperty *this)

{
  *(undefined ***)this = &PTR_GetClass_06667790;
  std::vector<Sexy::RtWeakPtr<CardType>,std::allocator<Sexy::RtWeakPtr<CardType>>>::~vector
            ((vector<Sexy::RtWeakPtr<CardType>,std::allocator<Sexy::RtWeakPtr<CardType>>> *)
             (this + 0x18));
  CardEffectProperty::~CardEffectProperty((CardEffectProperty *)this);
  return;
}


/* ObtainCardEffectProperty::~ObtainCardEffectProperty() */

void __thiscall ObtainCardEffectProperty::~ObtainCardEffectProperty(ObtainCardEffectProperty *this)

{
  ~ObtainCardEffectProperty(this);
  AK::FreeHook(this);
  return;
}

