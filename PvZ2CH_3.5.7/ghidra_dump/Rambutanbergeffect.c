// Class: Rambutanbergeffect


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Rambutanbergeffect::StaticClassInit() */

void Rambutanbergeffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"Rambutanbergeffect");
    (*pcVar2)(plVar1,asStack_10,FUN_038a45cc,0x120,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Rambutanbergeffect::StaticGetClass() */

long * Rambutanbergeffect::StaticGetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"Rambutanbergeffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Rambutanbergeffect::GetClass() const */

long * Rambutanbergeffect::GetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"Rambutanbergeffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Rambutanbergeffect::Onkill(Zombie*) */

void __thiscall Rambutanbergeffect::Onkill(Rambutanbergeffect *this,Zombie *param_1)

{
  char cVar1;
  Zombie *pZVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x110));
  if (((cVar1 != '\0') &&
      (pZVar2 = (Zombie *)Sexy::RtWeakPtr<Zombie>::GetPtr((RtWeakPtr<Zombie> *)(this + 0x110)),
      param_1 == pZVar2)) && (this[0x118] != (Rambutanbergeffect)0x0)) {
    std::string::string(asStack_10,"binkuai_xiao_lk");
    Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
    this[0x118] = (Rambutanbergeffect)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Rambutanbergeffect::Rambutanbergeffect() */

void __thiscall Rambutanbergeffect::Rambutanbergeffect(Rambutanbergeffect *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_066b2bb0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  this[0x118] = (Rambutanbergeffect)0x1;
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x110));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,Onkill);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<Rambutanbergeffect,void(Rambutanbergeffect::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::IceboundEnd,&local_40);
  return;
}


/* Rambutanbergeffect::StaticNew() */

Rambutanbergeffect * Rambutanbergeffect::StaticNew(void)

{
  Rambutanbergeffect *this;
  
  this = ::operator_new(0x120);
  Rambutanbergeffect(this);
  return this;
}


/* Rambutanbergeffect::~Rambutanbergeffect() */

void __thiscall Rambutanbergeffect::~Rambutanbergeffect(Rambutanbergeffect *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  *(undefined ***)this = &PTR_GetClass_066b2bb0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,Onkill);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Unsubscribe<Zombie*,Sexy::CBMemberTranslatorX<Rambutanbergeffect,void(Rambutanbergeffect::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::IceboundEnd,&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Rambutanbergeffect::~Rambutanbergeffect() */

void __thiscall Rambutanbergeffect::~Rambutanbergeffect(Rambutanbergeffect *this)

{
  ~Rambutanbergeffect(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Rambutanbergeffect::onUpdate() */

void __thiscall Rambutanbergeffect::onUpdate(Rambutanbergeffect *this)

{
  char cVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::onUpdate((Effect_PopAnim *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x110));
  if ((cVar1 == '\0') && (this[0x118] != (Rambutanbergeffect)0x0)) {
    std::string::string(asStack_10,"binkuai_xiao_lk");
    Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
    this[0x118] = (Rambutanbergeffect)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

