// Class: CardObject


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardObject::StaticClassInit() */

void CardObject::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardObject");
    (*pcVar2)(plVar1,asStack_10,FUN_03601498,0xb0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardObject::StaticGetClass() */

long * CardObject::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CardObject",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardObject::GetClass() const */

long * CardObject::GetClass(void)

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
  (*pcVar3)(plVar1,"CardObject",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardObject::SetTargetPosition(Sexy::Point) */

void CardObject::SetTargetPosition(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x50))();
  }
  return;
}


/* CardObject::IsValidTargetPosition(Sexy::Point) */

undefined1 CardObject::IsValidTargetPosition(long param_1)

{
  undefined1 uVar1;
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x60))();
    return uVar1;
  }
  return 1;
}


/* CardObject::SetCursorVisible(bool) */

void __thiscall CardObject::SetCursorVisible(CardObject *this,bool param_1)

{
  if (*(long *)(this + 0xa8) != 0) {
    FUN_0360124c(*(long *)(this + 0xa8) + 0x38,param_1);
    return;
  }
  return;
}


/* CardObject::GetCost() */

undefined4 __thiscall CardObject::GetCost(CardObject *this)

{
  long lVar1;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  return *(undefined4 *)(lVar1 + 0x20);
}


/* CardObject::HasTag(CardTag) */

void __thiscall CardObject::HasTag(CardObject *this,undefined8 param_2)

{
  CardType *pCVar1;
  
  pCVar1 = (CardType *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  CardType::HasTag(pCVar1,param_2);
  return;
}


/* CardObject::GetCardUIInfo() */

long __thiscall CardObject::GetCardUIInfo(CardObject *this)

{
  long lVar1;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  return lVar1 + 200;
}


/* CardObject::GetCardAttribute() */

long __thiscall CardObject::GetCardAttribute(CardObject *this)

{
  long lVar1;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  return lVar1 + 0x108;
}


/* CardObject::GetCursorAnim() */

long __thiscall CardObject::GetCursorAnim(CardObject *this)

{
  long lVar1;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  return lVar1 + 0x78;
}


/* CardObject::GetCardName() */

long __thiscall CardObject::GetCardName(CardObject *this)

{
  long lVar1;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  return lVar1 + 0x18;
}


/* CardObject::GetCardDescription() */

long __thiscall CardObject::GetCardDescription(CardObject *this)

{
  long lVar1;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  return lVar1 + 0x48;
}


/* CardObject::GetCardTags() */

long __thiscall CardObject::GetCardTags(CardObject *this)

{
  long lVar1;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  return lVar1 + 0x28;
}


/* CardObject::GetRarity() */

undefined4 __thiscall CardObject::GetRarity(CardObject *this)

{
  long lVar1;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  return *(undefined4 *)(lVar1 + 0x40);
}


/* CardObject::IsExhaust() */

void __thiscall CardObject::IsExhaust(CardObject *this)

{
  CardType *pCVar1;
  
  pCVar1 = (CardType *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  CardType::HasTag(pCVar1,9);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardObject::TryToAddCursor(Sexy::Touch const&) */

void __thiscall CardObject::TryToAddCursor(CardObject *this,Touch *param_1)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  char *pcVar4;
  BaseCursor *extraout_x0;
  code *pcVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(lVar3 + 0x68));
  if (cVar1 != '\0') {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10))
    ;
    pcVar4 = (char *)FUN_0547429c(lVar3 + 0x70);
    lVar3 = Sexy::RtClass::StaticGetClassNamed(pcVar4);
    if (lVar3 != 0) {
      FUN_03601224(*(undefined8 *)(lVar3 + 0x18));
      nop();
      pcVar5 = *(code **)(*(long *)extraout_x0 + 0x78);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      (*pcVar5)(extraout_x0,param_1,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      *(BaseCursor **)(this + 0xa8) = extraout_x0;
      uVar2 = Board::TryToAddCursor(*(Board **)(gLawnApp + 0x9f0),extraout_x0,true);
      goto LAB_036017f8;
    }
  }
  uVar2 = 0;
LAB_036017f8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* CardObject::CanUseCard() */

char __thiscall CardObject::CanUseCard(CardObject *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  iVar2 = GetCost(this);
  lVar4 = Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  uVar7 = 0;
  iVar3 = FUN_03601254(*(undefined4 *)(lVar4 + 0x10));
  uVar8 = *(undefined8 *)(this + 0x90);
  cVar1 = iVar3 <= iVar2;
  uVar5 = FUN_03601258(uVar8,*(undefined8 *)(this + 0x98));
  if (uVar5 != 0) {
    do {
      if (cVar1 != '\0') {
        this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03601264(uVar8,uVar7);
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        if (*(code **)(*plVar6 + 0x80) == CardRule::IsRulePass) {
          cVar1 = CardRule::IsRulePass();
        }
        else {
          cVar1 = (**(code **)(*plVar6 + 0x80))();
        }
        uVar8 = *(undefined8 *)(this + 0x90);
        uVar5 = FUN_03601258(uVar8,*(undefined8 *)(this + 0x98));
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardObject::ActionBeforePlayerDiscard() */

void __thiscall CardObject::ActionBeforePlayerDiscard(CardObject *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  CardEffectProcessor *pCVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  ulong uVar4;
  long *plVar5;
  RtWeakPtrBase *pRVar6;
  code *pcVar7;
  ulong uVar8;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10);
  uVar8 = 0;
  pCVar1 = GameObject::Create<CardEffectProcessor>();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar2 = FUN_03601280(*(undefined8 *)(lVar2 + 0x50),*(undefined8 *)(lVar2 + 0x58));
  if (lVar2 != 0) {
    do {
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0360128c(*(undefined8 *)(lVar2 + 0x50),uVar8);
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
      if (*(int *)(lVar2 + 8) == 1) {
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0360128c(*(undefined8 *)(lVar2 + 0x50),uVar8);
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
        if (*(code **)(*plVar5 + 0x48) == CardEffectProperty::GetCardEffectClass) {
          lVar2 = CardEffectProperty::GetCardEffectClass();
        }
        else {
          lVar2 = (**(code **)(*plVar5 + 0x48))();
        }
        if (lVar2 != 0) {
          GameObject::Create(lVar2,0xa2);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
          pcVar7 = *(code **)(*plVar5 + 0x78);
          lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          pRVar6 = (RtWeakPtrBase *)FUN_0360128c(*(undefined8 *)(lVar2 + 0x50),uVar8);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar6);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_20);
          (*pcVar7)(plVar5,aRStack_18,aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_28);
          CardEffectProcessor::PushEffect(pCVar1,aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
        }
      }
      uVar8 = uVar8 + 1;
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      uVar4 = FUN_03601280(*(undefined8 *)(lVar2 + 0x50),*(undefined8 *)(lVar2 + 0x58));
    } while (uVar8 < uVar4);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardObject::UseCard() */

void __thiscall CardObject::UseCard(CardObject *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  CardEffectProcessor *pCVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  ulong uVar4;
  long *plVar5;
  RtWeakPtrBase *pRVar6;
  ulong uVar7;
  code *pcVar8;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10);
  pCVar1 = GameObject::Create<CardEffectProcessor>();
  uVar7 = 0;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar2 = FUN_03601280(*(undefined8 *)(lVar2 + 0x50),*(undefined8 *)(lVar2 + 0x58));
  if (lVar2 != 0) {
    do {
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0360128c(*(undefined8 *)(lVar2 + 0x50),uVar7);
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
      if (*(int *)(lVar2 + 8) == 0) {
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0360128c(*(undefined8 *)(lVar2 + 0x50),uVar7);
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
        if (*(code **)(*plVar5 + 0x48) == CardEffectProperty::GetCardEffectClass) {
          lVar2 = CardEffectProperty::GetCardEffectClass();
        }
        else {
          lVar2 = (**(code **)(*plVar5 + 0x48))();
        }
        if (lVar2 != 0) {
          GameObject::Create(lVar2,0xa2);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
          pcVar8 = *(code **)(*plVar5 + 0x78);
          lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          pRVar6 = (RtWeakPtrBase *)FUN_0360128c(*(undefined8 *)(lVar2 + 0x50),uVar7);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar6);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_20);
          (*pcVar8)(plVar5,aRStack_18,aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_28);
          CardEffectProcessor::PushEffect(pCVar1,aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
        }
      }
      uVar7 = uVar7 + 1;
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      uVar4 = FUN_03601280(*(undefined8 *)(lVar2 + 0x50),*(undefined8 *)(lVar2 + 0x58));
    } while (uVar7 < uVar4);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* CardObject::CardObject() */

void __thiscall CardObject::CardObject(CardObject *this)

{
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_06666500;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  *(undefined8 *)(this + 0x18) = 0;
  this[0x20] = (CardObject)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  CardBuffTracker::CardBuffTracker((CardBuffTracker *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x90));
  *(undefined8 *)(this + 0xa8) = 0;
  return;
}


/* CardObject::StaticNew() */

CardObject * CardObject::StaticNew(void)

{
  CardObject *this;
  
  this = ::operator_new(0xb0);
  CardObject(this);
  return this;
}


/* CardObject::~CardObject() */

void __thiscall CardObject::~CardObject(CardObject *this)

{
  char cVar1;
  RtWeakPtrBase *this_00;
  ulong uVar2;
  RtMixedPtrBase *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  *(undefined ***)this = &PTR_GetClass_06666500;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 0x18))();
    *(undefined8 *)(this + 0x18) = 0;
  }
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0x90);
    uVar2 = FUN_03601258(uVar5,*(undefined8 *)(this + 0x98));
    if (uVar2 <= uVar4) break;
    this_01 = (RtMixedPtrBase *)FUN_03601264(uVar5,uVar4);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_01);
    if (cVar1 != '\0') {
      this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03601264(*(undefined8 *)(this + 0x90),uVar4);
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
      (**(code **)(*plVar3 + 0x48))();
    }
    this_00 = (RtWeakPtrBase *)FUN_03601264(*(undefined8 *)(this + 0x90),uVar4);
    Sexy::RtWeakPtrBase::ClearId(this_00);
    uVar4 = uVar4 + 1;
  }
  *(undefined8 *)(this + 0xa8) = 0;
  std::vector<Sexy::RtWeakPtr<CardRule>,std::allocator<Sexy::RtWeakPtr<CardRule>>>::~vector
            ((vector<Sexy::RtWeakPtr<CardRule>,std::allocator<Sexy::RtWeakPtr<CardRule>>> *)
             (this + 0x90));
  CardBuffTracker::~CardBuffTracker((CardBuffTracker *)(this + 0x40));
  std::vector<CardTag,std::allocator<CardTag>>::~vector
            ((vector<CardTag,std::allocator<CardTag>> *)(this + 0x28));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* CardObject::~CardObject() */

void __thiscall CardObject::~CardObject(CardObject *this)

{
  ~CardObject(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardObject::initializeCardObject(Sexy::RtWeakPtr<CardType>) */

void __thiscall CardObject::initializeCardObject(CardObject *this,RtWeakPtr *param_2)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  undefined *this_01;
  char cVar1;
  CardObject CVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar4;
  long *plVar5;
  RtWeakPtrBase *pRVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *extraout_x0;
  ulong uVar9;
  code *pcVar10;
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,param_2);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(lVar3 + 0x68));
  if (cVar1 != '\0') {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 0x68));
    CVar2 = (CardObject)(**(code **)(*plVar5 + 0x80))();
    this[0x20] = CVar2;
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 0x68));
    lVar3 = (**(code **)(*plVar5 + 0x88))();
    FUN_03601224(*(undefined8 *)(lVar3 + 0x18));
    nop();
    *(long **)(this + 0x18) = extraout_x0;
    pcVar10 = *(code **)(*extraout_x0 + 0x48);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)(lVar3 + 0x68));
    (*pcVar10)(extraout_x0,(RtWeakPtr<Sexy::SoundResource> *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  }
  uVar9 = 0;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  lVar3 = FUN_0360126c(*(undefined8 *)(lVar3 + 0xb0),*(undefined8 *)(lVar3 + 0xb8));
  if (lVar3 != 0) {
    do {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03601278(*(undefined8 *)(lVar3 + 0xb0),uVar9);
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      lVar3 = (**(code **)(*plVar5 + 0x48))();
      if (lVar3 != 0) {
        GameObject::Create(lVar3,0xa2);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
        pcVar10 = *(code **)(*plVar5 + 0x78);
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        pRVar6 = (RtWeakPtrBase *)FUN_03601278(*(undefined8 *)(lVar3 + 0xb0),uVar9);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,pRVar6);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)aRStack_60);
        (*pcVar10)(plVar5,aRStack_58,aRStack_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58)
        ;
        std::vector<Sexy::RtWeakPtr<CardRule>,std::allocator<Sexy::RtWeakPtr<CardRule>>>::push_back
                  ((vector<Sexy::RtWeakPtr<CardRule>,std::allocator<Sexy::RtWeakPtr<CardRule>>> *)
                   (this + 0x90),(RtWeakPtr *)aRStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
      }
      uVar9 = uVar9 + 1;
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      uVar7 = FUN_0360126c(*(undefined8 *)(lVar3 + 0xb0),*(undefined8 *)(lVar3 + 0xb8));
    } while (uVar9 < uVar7);
  }
  uVar9 = 0;
  do {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    uVar7 = FUN_03601280(*(undefined8 *)(lVar3 + 0x50),*(undefined8 *)(lVar3 + 0x58));
    if (uVar7 <= uVar9) {
LAB_03602420:
      Sexy::OutputDebugStrF((wchar_t *)"CardType Info InitializeCardObject Start");
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Sexy::OutputDebugStrF((wchar_t *)"CardType CardID %d",(ulong)*(uint *)(lVar3 + 0x10));
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      uVar8 = FUN_0547429c(lVar3 + 0x18);
      Sexy::OutputDebugStrF((wchar_t *)"CardType TypeName %s",uVar8);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Sexy::OutputDebugStrF((wchar_t *)"CardType Cost %d",(ulong)*(uint *)(lVar3 + 0x20));
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Sexy::OutputDebugStrF((wchar_t *)"CardType Rarity %d",(ulong)*(uint *)(lVar3 + 0x40));
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      uVar8 = FUN_0547429c(lVar3 + 0x48);
      Sexy::OutputDebugStrF((wchar_t *)"CardType Description %s",uVar8);
      uVar9 = 0;
      while( true ) {
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        uVar7 = FUN_03601280(*(undefined8 *)(lVar3 + 0x50),*(undefined8 *)(lVar3 + 0x58));
        if (uVar7 <= uVar9) break;
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0360128c(*(undefined8 *)(lVar3 + 0x50),uVar9);
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
        if (*(code **)(*plVar5 + 0x48) == CardEffectProperty::GetCardEffectClass) {
          lVar3 = CardEffectProperty::GetCardEffectClass();
        }
        else {
          lVar3 = (**(code **)(*plVar5 + 0x48))();
        }
        uVar8 = FUN_03601220(*(undefined8 *)(lVar3 + 8));
        Sexy::OutputDebugStrF((wchar_t *)"CardType EffectList num %d info %s",uVar9,uVar8);
        uVar9 = uVar9 + 1;
      }
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 0x68));
      lVar3 = (**(code **)(*plVar5 + 0x88))();
      uVar8 = FUN_03601220(*(undefined8 *)(lVar3 + 8));
      Sexy::OutputDebugStrF((wchar_t *)"CardType TargetProps adaptor %s",uVar8);
      Sexy::OutputDebugStrF((wchar_t *)"CardType Info InitializeCardObject End");
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0360128c(*(undefined8 *)(lVar3 + 0x50),uVar9);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
    this_01 = gMessageRouter;
    if (*(int *)(lVar3 + 8) == 1) {
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,ActionBeforePlayerDiscard);
      Sexy::Delegate0::Delegate0<CardObject,void(CardObject::*)()>(aDStack_38,aRStack_50);
      MessageRouter::Subscribe
                ((MessageRouter *)this_01,Message::BeforePlayerDiscard_ForCardObject,aDStack_38);
      goto LAB_03602420;
    }
    uVar9 = uVar9 + 1;
  } while( true );
}

