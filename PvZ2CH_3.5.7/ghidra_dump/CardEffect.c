// Class: CardEffect


/* CardEffect::DoEffect() */

void __thiscall CardEffect::DoEffect(CardEffect *this)

{
  *(undefined4 *)(this + 0x20) = 2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardEffect::StaticClassInit() */

void CardEffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardEffect");
    (*pcVar2)(plVar1,asStack_10,FUN_03602948,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardEffect::StaticGetClass() */

long * CardEffect::StaticGetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"CardEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardEffect::GetClass() const */

long * CardEffect::GetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"CardEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardEffect::InitializaEffect(Sexy::RtWeakPtr<CardEffectProperty>, Sexy::RtWeakPtr<CardObject>) */

void __thiscall CardEffect::InitializaEffect(CardEffect *this,RtWeakPtr *param_2,RtWeakPtr *param_3)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x18),param_2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),param_3);
  *(undefined4 *)(this + 0x20) = 1;
  return;
}


/* CardEffect::CardEffect() */

void __thiscall CardEffect::CardEffect(CardEffect *this)

{
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_066665f0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* CardEffect::StaticNew() */

CardEffect * CardEffect::StaticNew(void)

{
  CardEffect *this;
  
  this = ::operator_new(0x28);
  CardEffect(this);
  return this;
}


/* CardEffect::~CardEffect() */

void __thiscall CardEffect::~CardEffect(CardEffect *this)

{
  *(undefined ***)this = &PTR_GetClass_066665f0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* CardEffect::~CardEffect() */

void __thiscall CardEffect::~CardEffect(CardEffect *this)

{
  ~CardEffect(this);
  AK::FreeHook(this);
  return;
}

