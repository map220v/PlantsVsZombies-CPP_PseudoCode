// Class: AddGridItemCardEffectProperty


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AddGridItemCardEffectProperty::StaticClassInit() */

void AddGridItemCardEffectProperty::StaticClassInit(void)

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
    std::string::string(asStack_10,"AddGridItemCardEffectProperty");
    (*pcVar2)(plVar1,asStack_10,FUN_0360f4c4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AddGridItemCardEffectProperty::StaticGetClass() */

long * AddGridItemCardEffectProperty::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AddGridItemCardEffectProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AddGridItemCardEffectProperty::GetClass() const */

long * AddGridItemCardEffectProperty::GetClass(void)

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
  (*pcVar3)(plVar1,"AddGridItemCardEffectProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AddGridItemCardEffectProperty::GetCardEffectClass() const */

long * AddGridItemCardEffectProperty::GetCardEffectClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (AddGridItemCardEffect::sClass != (long *)0x0) {
    return AddGridItemCardEffect::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  AddGridItemCardEffect::sClass = plVar1;
  uVar2 = CardEffect::StaticGetClass();
  (*pcVar3)(plVar1,"AddGridItemCardEffect",uVar2,AddGridItemCardEffect::StaticNew);
  AddGridItemCardEffect::StaticClassInit();
  return AddGridItemCardEffect::sClass;
}


/* AddGridItemCardEffectProperty::AddGridItemCardEffectProperty() */

void __thiscall
AddGridItemCardEffectProperty::AddGridItemCardEffectProperty(AddGridItemCardEffectProperty *this)

{
  CardEffectProperty::CardEffectProperty((CardEffectProperty *)this);
  *(undefined ***)this = &PTR_GetClass_06667890;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  return;
}


/* AddGridItemCardEffectProperty::StaticNew() */

AddGridItemCardEffectProperty * AddGridItemCardEffectProperty::StaticNew(void)

{
  AddGridItemCardEffectProperty *this;
  
  this = ::operator_new(0x18);
  AddGridItemCardEffectProperty(this);
  return this;
}


/* AddGridItemCardEffectProperty::~AddGridItemCardEffectProperty() */

void __thiscall
AddGridItemCardEffectProperty::~AddGridItemCardEffectProperty(AddGridItemCardEffectProperty *this)

{
  *(undefined ***)this = &PTR_GetClass_06667890;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  CardEffectProperty::~CardEffectProperty((CardEffectProperty *)this);
  return;
}


/* AddGridItemCardEffectProperty::~AddGridItemCardEffectProperty() */

void __thiscall
AddGridItemCardEffectProperty::~AddGridItemCardEffectProperty(AddGridItemCardEffectProperty *this)

{
  ~AddGridItemCardEffectProperty(this);
  AK::FreeHook(this);
  return;
}

