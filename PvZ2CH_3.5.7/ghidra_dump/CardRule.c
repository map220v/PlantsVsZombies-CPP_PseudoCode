// Class: CardRule


/* CardRule::IsRulePass() */

undefined8 CardRule::IsRulePass(void)

{
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardRule::StaticClassInit() */

void CardRule::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardRule");
    (*pcVar2)(plVar1,asStack_10,FUN_0360b598,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardRule::StaticGetClass() */

long * CardRule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CardRule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardRule::GetClass() const */

long * CardRule::GetClass(void)

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
  (*pcVar3)(plVar1,"CardRule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardRule::InitializaRule(Sexy::RtWeakPtr<CardRuleProperty>, Sexy::RtWeakPtr<CardObject>) */

void __thiscall CardRule::InitializaRule(CardRule *this,RtWeakPtr *param_2,RtWeakPtr *param_3)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x18),param_2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),param_3);
  return;
}


/* CardRule::CardRule() */

void __thiscall CardRule::CardRule(CardRule *this)

{
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_066673e0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  return;
}


/* CardRule::StaticNew() */

CardRule * CardRule::StaticNew(void)

{
  CardRule *this;
  
  this = ::operator_new(0x20);
  CardRule(this);
  return this;
}


/* CardRule::~CardRule() */

void __thiscall CardRule::~CardRule(CardRule *this)

{
  *(undefined ***)this = &PTR_GetClass_066673e0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* CardRule::~CardRule() */

void __thiscall CardRule::~CardRule(CardRule *this)

{
  ~CardRule(this);
  AK::FreeHook(this);
  return;
}

