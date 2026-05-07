// Class: TempCard


/* TempCard::CalcRenderOrder() const */

undefined8 TempCard::CalcRenderOrder(void)

{
  return 900000;
}


/* non-virtual thunk to TempCard::CalcRenderOrder() const */

void __thiscall TempCard::CalcRenderOrder(TempCard *this)

{
  CalcRenderOrder();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TempCard::StaticClassInit() */

void TempCard::StaticClassInit(void)

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
    std::string::string(asStack_10,"TempCard");
    (*pcVar2)(plVar1,asStack_10,FUN_035fac14,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TempCard::StaticGetClass() */

long * TempCard::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"TempCard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TempCard::GetClass() const */

long * TempCard::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"TempCard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TempCard::calcCollisionRect() */

void TempCard::calcCollisionRect(void)

{
  long in_x0;
  Insets *in_x8;
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(in_x0 + 0x1c);
  fVar1 = (float)FUN_035fa574(*(undefined4 *)(in_x0 + 0x18),fVar2,*(undefined4 *)(in_x0 + 0x20));
  Sexy::Insets::Insets(in_x8,(int)fVar1,(int)fVar2,0x28,100);
  return;
}


/* TempCard::TempCard() */

void __thiscall TempCard::TempCard(TempCard *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_06666000;
  *(undefined ***)(this + 0x10) = &PTR__TempCard_066661f0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  return;
}


/* TempCard::StaticNew() */

TempCard * TempCard::StaticNew(void)

{
  TempCard *this;
  
  this = ::operator_new(0xb8);
  TempCard(this);
  return this;
}


/* TempCard::~TempCard() */

void __thiscall TempCard::~TempCard(TempCard *this)

{
  *(undefined ***)this = &PTR_GetClass_06666000;
  *(undefined ***)(this + 0x10) = &PTR__TempCard_066661f0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to TempCard::~TempCard() */

void __thiscall TempCard::~TempCard(TempCard *this)

{
  ~TempCard(this + -0x10);
  return;
}


/* TempCard::~TempCard() */

void __thiscall TempCard::~TempCard(TempCard *this)

{
  ~TempCard(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TempCard::~TempCard() */

void __thiscall TempCard::~TempCard(TempCard *this)

{
  ~TempCard(this + -0x10);
  return;
}


/* TempCard::onTouchEvent(Sexy::Touch const&) */

char __thiscall TempCard::onTouchEvent(TempCard *this,Touch *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  TRect<int> *this_00;
  EASquaredImpl *pEVar5;
  CardObject *pCVar6;
  float fVar7;
  float fVar8;
  
  this_00 = (TRect<int> *)(**(code **)(*(long *)this + 0x178))();
  fVar7 = (float)FUN_035fa6a8((float)*(int *)(param_1 + 0x10));
  fVar8 = (float)FUN_035fa6a8((float)*(int *)(param_1 + 0x14));
  cVar3 = Sexy::TRect<int>::Contains(this_00,(int)fVar7,(int)fVar8);
  if (cVar3 == '\0') {
    iVar2 = *(int *)(this + 0xa8);
    iVar1 = *(int *)(param_1 + 0x30);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 == 0) {
      *(undefined4 *)(this + 0xa4) = 0;
      *(undefined4 *)(this + 0xa8) = 1;
      pEVar5 = (EASquaredImpl *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
      cVar4 = EASquaredImpl::IsEnabledForUser(pEVar5);
      if (cVar4 != '\0') {
        pCVar6 = (CardObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
        CardObject::TryToAddCursor(pCVar6,param_1);
        return cVar4;
      }
      return cVar3;
    }
    iVar2 = *(int *)(this + 0xa8);
  }
  if (iVar2 == 1) {
    if (iVar1 == 3) {
      if (*(int *)(this + 0xa4) != 0) {
        pCVar6 = (CardObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
        CardObject::UseCard(pCVar6);
      }
      *(undefined4 *)(this + 0xa8) = 0;
      return '\0';
    }
    if (iVar1 == 4) goto LAB_035fb26c;
    pEVar5 = (EASquaredImpl *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    cVar3 = EASquaredImpl::IsEnabledForUser(pEVar5);
    if ((cVar3 == '\0') && (*(int *)(param_1 + 0x30) == 1)) {
      cVar3 = Sexy::TRect<int>::Contains(this_00,(int)fVar7,(int)fVar8);
      if (cVar3 == '\0') {
        *(undefined4 *)(this + 0xa4) = 1;
        return '\x01';
      }
      *(undefined4 *)(this + 0xa4) = 0;
      return cVar3;
    }
  }
  else if (iVar1 == 4) {
LAB_035fb26c:
    *(undefined4 *)(this + 0xa8) = 0;
    return '\x01';
  }
  return '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TempCard::registerForEvents() */

void __thiscall TempCard::registerForEvents(TempCard *this)

{
  Board *pBVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_88 [8];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1d8);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<TempCard,bool(TempCard::*)(Sexy::Touch_const&)>(aDStack_68,aCStack_80);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_88,(RtWeakPtrBase *)aRStack_90);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,0xb,aRStack_88,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TempCard::Draw(Sexy::Graphics*) */

void __thiscall TempCard::Draw(TempCard *this,Graphics *param_1)

{
  Image *pIVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  GraphicsAutoState aGStack_50 [8];
  string asStack_48 [8];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_50,param_1);
  Sexy::Insets::Insets((Insets *)&local_38);
  iVar4 = *(int *)(this + 0xa8);
  if (iVar4 == 1) {
    Sexy::Insets::Insets((Insets *)&local_18,-5,-5,10,10);
    iVar5 = 0;
    iVar4 = 0xff;
  }
  else {
    if (iVar4 != 2) {
      if (iVar4 == 3) {
        Sexy::Insets::Insets((Insets *)&local_18,0,0,0xff,0xff);
        Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
      }
      goto LAB_035fb7c4;
    }
    Sexy::Insets::Insets((Insets *)&local_18,-5,-5,10,10);
    iVar4 = 0;
    iVar5 = 0xff;
  }
  local_38 = local_18;
  local_30 = uStack_10;
  Sexy::Insets::Insets((Insets *)&local_18,iVar4,iVar5,0,0xff);
  Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
LAB_035fb7c4:
  (**(code **)(*(long *)this + 0xb0))((TRect *)&local_28,this);
  local_28 = local_28 + (int)local_38;
  local_24 = local_24 + local_38._4_4_;
  local_20 = local_20 + (int)local_30;
  local_1c = local_1c + local_30._4_4_;
  pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa8520);
  lVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa8520);
  iVar4 = *(int *)(lVar2 + 0x38);
  lVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa8520);
  Sexy::Insets::Insets((Insets *)&local_18,0,0,iVar4,*(int *)(lVar2 + 0x3c));
  Sexy::Graphics::DrawImage(param_1,pIVar1,(TRect *)&local_28,(TRect *)&local_18);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar2 + 0x10));
  std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar2 + 0x10));
  Sexy::ToWString(asStack_48);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline);
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,auStack_40,(TRect *)&local_28,uVar3,(Insets *)&local_18,5,1);
  FUN_05476c50(auStack_40);
  std::string::~string(asStack_48);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to TempCard::Draw(Sexy::Graphics*) */

void __thiscall TempCard::Draw(TempCard *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TempCard::CardInitialize(Sexy::RtWeakPtr<CardType>) */

void __thiscall TempCard::CardInitialize(TempCard *this,RtWeakPtrBase *param_2)

{
  CardSystemManager *pCVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0xa8) = 0;
  local_8 = ___stack_chk_guard;
  pCVar1 = Board::GetGameSubSystem<CardSystemManager>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_2);
  CardSystemManager::CreateCardByType(aRStack_10,pCVar1,aRStack_18);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xb0),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

