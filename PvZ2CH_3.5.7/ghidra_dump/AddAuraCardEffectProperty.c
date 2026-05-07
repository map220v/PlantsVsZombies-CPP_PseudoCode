// Class: AddAuraCardEffectProperty


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AddAuraCardEffectProperty::StaticClassInit() */

void AddAuraCardEffectProperty::StaticClassInit(void)

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
    std::string::string(asStack_10,"AddAuraCardEffectProperty");
    (*pcVar2)(plVar1,asStack_10,FUN_0360f628,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AddAuraCardEffectProperty::StaticGetClass() */

long * AddAuraCardEffectProperty::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AddAuraCardEffectProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AddAuraCardEffectProperty::GetClass() const */

long * AddAuraCardEffectProperty::GetClass(void)

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
  (*pcVar3)(plVar1,"AddAuraCardEffectProperty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AddAuraCardEffectProperty::GetCardEffectClass() const */

long * AddAuraCardEffectProperty::GetCardEffectClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (AddAuraCardEffect::sClass != (long *)0x0) {
    return AddAuraCardEffect::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  AddAuraCardEffect::sClass = plVar1;
  uVar2 = CardEffect::StaticGetClass();
  (*pcVar3)(plVar1,"AddAuraCardEffect",uVar2,AddAuraCardEffect::StaticNew);
  AddAuraCardEffect::StaticClassInit();
  return AddAuraCardEffect::sClass;
}


/* AddAuraCardEffectProperty::AddAuraCardEffectProperty() */

void __thiscall
AddAuraCardEffectProperty::AddAuraCardEffectProperty(AddAuraCardEffectProperty *this)

{
  CardEffectProperty::CardEffectProperty((CardEffectProperty *)this);
  *(undefined ***)this = &PTR_GetClass_06667a90;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  return;
}


/* AddAuraCardEffectProperty::StaticNew() */

AddAuraCardEffectProperty * AddAuraCardEffectProperty::StaticNew(void)

{
  AddAuraCardEffectProperty *this;
  
  this = ::operator_new(0x18);
  AddAuraCardEffectProperty(this);
  return this;
}


/* AddAuraCardEffectProperty::~AddAuraCardEffectProperty() */

void __thiscall
AddAuraCardEffectProperty::~AddAuraCardEffectProperty(AddAuraCardEffectProperty *this)

{
  *(undefined ***)this = &PTR_GetClass_06667a90;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  CardEffectProperty::~CardEffectProperty((CardEffectProperty *)this);
  return;
}


/* AddAuraCardEffectProperty::~AddAuraCardEffectProperty() */

void __thiscall
AddAuraCardEffectProperty::~AddAuraCardEffectProperty(AddAuraCardEffectProperty *this)

{
  ~AddAuraCardEffectProperty(this);
  AK::FreeHook(this);
  return;
}

