// Class: ZMatchTicketBank


/* ZMatchTicketBank::cancelTouch() */

void __thiscall ZMatchTicketBank::cancelTouch(ZMatchTicketBank *this)

{
  *(undefined8 *)(this + 0x178) = 0;
  (**(code **)(*(long *)this + 0xe8))(this,2);
  return;
}


/* ZMatchTicketBank::onExitState_Loading(WidgetState) */

void ZMatchTicketBank::onExitState_Loading(long param_1)

{
  undefined1 uVar1;
  
  uVar1 = LawnApp::HasPlayerUnlockedFeature(gLawnApp,8);
  *(undefined1 *)(param_1 + 0x170) = uVar1;
  return;
}


/* ZMatchTicketBank::~ZMatchTicketBank() */

void __thiscall ZMatchTicketBank::~ZMatchTicketBank(ZMatchTicketBank *this)

{
  *(undefined ***)this = &PTR_GetClass_066c3de0;
  *(undefined ***)(this + 0x10) = &PTR__ZMatchTicketBank_066c3f88;
  if (*(long **)(this + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x188) + 0x18))();
    *(undefined8 *)(this + 0x188) = 0;
  }
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to ZMatchTicketBank::~ZMatchTicketBank() */

void __thiscall ZMatchTicketBank::~ZMatchTicketBank(ZMatchTicketBank *this)

{
  ~ZMatchTicketBank(this + -0x10);
  return;
}


/* ZMatchTicketBank::~ZMatchTicketBank() */

void __thiscall ZMatchTicketBank::~ZMatchTicketBank(ZMatchTicketBank *this)

{
  ~ZMatchTicketBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZMatchTicketBank::~ZMatchTicketBank() */

void __thiscall ZMatchTicketBank::~ZMatchTicketBank(ZMatchTicketBank *this)

{
  ~ZMatchTicketBank(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZMatchTicketBank::StaticClassInit() */

void ZMatchTicketBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZMatchTicketBank");
    (*pcVar2)(plVar1,asStack_10,FUN_03913640,400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZMatchTicketBank::StaticGetClass() */

long * ZMatchTicketBank::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"ZMatchTicketBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZMatchTicketBank::GetClass() const */

long * ZMatchTicketBank::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"ZMatchTicketBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZMatchTicketBank::handleTouch(Sexy::Touch const&) */

void __thiscall ZMatchTicketBank::handleTouch(ZMatchTicketBank *this,Touch *param_1)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  Touch aTStack_40 [16];
  int local_30;
  int local_2c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x170] == (ZMatchTicketBank)0x0) {
LAB_03913754:
    bVar2 = 0;
  }
  else {
    Sexy::Touch::Touch(aTStack_40,param_1);
    Board::TranslateBoardPositionToScreenPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
    bVar2 = (**(code **)(*(long *)this + 0xa8))
                      (this,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48) + local_30,
                       *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c) + local_2c);
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 == 3) {
      lVar3 = *(long *)param_1;
      lVar4 = *(long *)(this + 0x178);
      if ((bVar2 == 0) || (lVar3 != lVar4)) {
        bVar2 = 0;
      }
      else {
        bVar2 = 1;
        LawnApp::ShowCoinStore(gLawnApp,2);
        lVar3 = *(long *)param_1;
        lVar4 = *(long *)(this + 0x178);
      }
    }
    else {
      if (iVar1 != 4) {
        if ((iVar1 == 0) && (bVar2 = bVar2 & *(long *)(this + 0x178) == 0, bVar2 != 0)) {
          *(undefined8 *)(this + 0x178) = *(undefined8 *)param_1;
          (**(code **)(*(long *)this + 0xe8))(this,4);
          goto LAB_03913758;
        }
        goto LAB_03913754;
      }
      lVar3 = *(long *)param_1;
      bVar2 = 0;
      lVar4 = *(long *)(this + 0x178);
    }
    if (lVar3 == lVar4) {
      cancelTouch(this);
    }
  }
LAB_03913758:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZMatchTicketBank::GetHitRect() */

void ZMatchTicketBank::GetHitRect(void)

{
  int iVar1;
  long *in_x0;
  Insets *in_x8;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*in_x0 + 400))(&local_18);
  iVar1 = FUN_039134f8();
  Sexy::Insets::Insets
            (in_x8,local_18 - iVar1,local_14 - iVar1,local_10 + iVar1 * 2,local_c + iVar1 * 2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZMatchTicketBank::onGameplayEnded() */

void __thiscall ZMatchTicketBank::onGameplayEnded(ZMatchTicketBank *this)

{
  UIWidget::SetClickable((UIWidget *)this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZMatchTicketBank::calcSpinTime() */

void __thiscall ZMatchTicketBank::calcSpinTime(ZMatchTicketBank *this)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float local_c;
  long local_8;
  
  iVar2 = *(int *)(this + 0x168);
  local_8 = ___stack_chk_guard;
  if (iVar2 < 0) {
    iVar2 = *(int *)(this + 0x164);
  }
  local_c = ABS((float)*(int *)(this + 0x16c) - (float)iVar2) * 0.02;
  pfVar1 = eastl::min_alt<float>((float *)&DAT_05751db0,&local_c);
  fVar4 = *pfVar1;
  fVar3 = (float)PVZ_T();
  *(float *)(this + 0x174) = fVar4 + fVar3;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZMatchTicketBank::SetFakeCurrencyAmount(int) */

void __thiscall ZMatchTicketBank::SetFakeCurrencyAmount(ZMatchTicketBank *this,int param_1)

{
  *(int *)(this + 0x168) = param_1;
  calcSpinTime(this);
  return;
}


/* ZMatchTicketBank::onZmatchTicketCurrencyAdd(int) */

void __thiscall ZMatchTicketBank::onZmatchTicketCurrencyAdd(ZMatchTicketBank *this,int param_1)

{
  *(int *)(this + 0x164) = *(int *)(this + 0x164) + param_1;
  calcSpinTime(this);
  return;
}


/* ZMatchTicketBank::onZmatchTicketCurrencyChanged(int) */

void __thiscall ZMatchTicketBank::onZmatchTicketCurrencyChanged(ZMatchTicketBank *this,int param_1)

{
  *(int *)(this + 0x164) = param_1;
  calcSpinTime(this);
  return;
}


/* ZMatchTicketBank::ZMatchTicketBank() */

void __thiscall ZMatchTicketBank::ZMatchTicketBank(ZMatchTicketBank *this)

{
  ZMatchTicketBank ZVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  ZMatchShopMgr *this_01;
  int iVar3;
  
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined8 *)(this + 0x178) = 0;
  this[0x180] = (ZMatchTicketBank)0x0;
  *(undefined ***)this = &PTR_GetClass_066c3de0;
  *(undefined ***)(this + 0x10) = &PTR__ZMatchTicketBank_066c3f88;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  this_01 = (ZMatchShopMgr *)Sexy::LazySingleton<ZMatchShopMgr>::GetInstancePtr();
  uVar2 = ZMatchShopMgr::getMatchTicket(this_01);
  *(undefined4 *)(this + 0x164) = uVar2;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x168) = GlobalFakeCurrency;
  ZVar1 = (ZMatchTicketBank)LawnApp::HasPlayerUnlockedFeature(gLawnApp,8);
  this[0x170] = ZVar1;
  iVar3 = *(int *)(this + 0x168);
  if (iVar3 < 0) {
    iVar3 = *(int *)(this + 0x164);
  }
  *(int *)(this + 0x16c) = iVar3;
  *(undefined8 *)(this + 0x188) = 0;
  return;
}


/* ZMatchTicketBank::StaticNew() */

ZMatchTicketBank * ZMatchTicketBank::StaticNew(void)

{
  ZMatchTicketBank *this;
  
  this = ::operator_new(400);
  ZMatchTicketBank(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZMatchTicketBank::registerForEvents() */

void __thiscall ZMatchTicketBank::registerForEvents(ZMatchTicketBank *this)

{
  undefined *puVar1;
  Board *pBVar2;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_d0 [8];
  CBMemberTranslatorX aCStack_c8 [24];
  CBMemberTranslatorX aCStack_b0 [24];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZmatchTicketCurrencyAdd);
  local_e0 = local_88;
  local_f0 = local_98;
  uStack_e8 = uStack_90;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<ZMatchTicketBank,void(ZMatchTicketBank::*)(int)>>
            ((MessageRouter *)puVar1,Message::ZmatchTicketAdd,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZmatchTicketCurrencyChanged);
  local_f0 = local_80;
  uStack_e8 = uStack_78;
  local_e0 = local_70;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<ZMatchTicketBank,void(ZMatchTicketBank::*)(int)>>
            ((MessageRouter *)puVar1,Message::ZmatchTicketChanged,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<ZMatchTicketBank,void(ZMatchTicketBank::*)()>(aDStack_38,aCStack_b0);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayEnded,aDStack_38);
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  if (pBVar2 != (Board *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,handleTouch);
    Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
    Delegate1wRet<ZMatchTicketBank,bool(ZMatchTicketBank::*)(Sexy::Touch_const&)>
              (aDStack_68,aCStack_c8);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_d0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,cancelTouch);
    Sexy::Delegate0::Delegate0<ZMatchTicketBank,void(ZMatchTicketBank::*)()>(aDStack_38,aCStack_b0);
    Board::RegisterTouchGameplayObject(pBVar2,aDStack_68,9,a_Stack_d0,aDStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_d0);
    this[0x180] = (ZMatchTicketBank)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZMatchTicketBank::CalcPlusButtonRect() */

void ZMatchTicketBank::CalcPlusButtonRect(void)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long in_x0;
  LotteryResultProgressBar *pLVar5;
  SalesProgressBar *pSVar6;
  Insets *in_x8;
  int local_18;
  int local_14;
  int local_c;
  
  lVar1 = ___stack_chk_guard;
  UIWidget::GetDrawRect();
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab9e40);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  pSVar6 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab9e40);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar6);
  Sexy::Insets::Insets(in_x8,0,0,iVar3,iVar4);
  iVar3 = FUN_03913390(*(undefined4 *)(in_x0 + 0x38));
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab9e40);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  *(int *)in_x8 = *(int *)in_x8 + ((local_18 + iVar3) - iVar4);
  pSVar6 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab9e40);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar6);
  bVar2 = lVar1 == ___stack_chk_guard;
  *(int *)(in_x8 + 4) = *(int *)(in_x8 + 4) + local_14 + (local_c - iVar3) / 2;
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZMatchTicketBank::GetUIRect() */

void __thiscall ZMatchTicketBank::GetUIRect(ZMatchTicketBank *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  LotteryResultProgressBar *pLVar4;
  Insets *in_x8;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  lVar1 = ___stack_chk_guard;
  UIWidget::GetDrawRect();
  pLVar4 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab9f30);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
  pLVar4 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab9f30);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
  Sexy::Insets::Insets(in_x8,local_18 - iVar2 / 2,local_14,local_10 + iVar3 / 2,local_c);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZMatchTicketBank::Draw(Sexy::Graphics*) */

void __thiscall ZMatchTicketBank::Draw(ZMatchTicketBank *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Image *pIVar6;
  LotteryResultProgressBar *pLVar7;
  SalesProgressBar *this_00;
  int *piVar8;
  CachedUIResourcePtr<Sexy::Image> *this_01;
  PrimeText_PotentialText *pPVar9;
  PrimeTextWidget *this_02;
  long *plVar10;
  code *pcVar11;
  float fVar12;
  GraphicsAutoState aGStack_50 [8];
  wstring awStack_48 [8];
  undefined1 auStack_40 [8];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_50,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  UIWidget::GetDrawRect();
  (**(code **)(*(long *)this + 400))(&local_28,this);
  local_28 = local_28 - local_38;
  local_24 = local_24 - local_34;
  local_38 = 0;
  local_34 = 0;
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)&local_38);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab9ec0);
  Draw3SliceImage(param_1,(Insets *)local_18,uVar5);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab9f30);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab9f30);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  iVar3 = local_2c;
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab9f30);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Graphics::DrawImage(param_1,pIVar6,(int)((float)iVar1 * -0.5),(iVar3 - iVar2) / 2);
  if (this[0x170] != (ZMatchTicketBank)0x0) {
    iVar3 = UIWidget::getWidgetStateSerialization((UIWidget *)this);
    if (iVar3 == 4) {
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab9e70;
    }
    else {
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab9e40;
    }
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_01);
    Sexy::Graphics::DrawImage(param_1,pIVar6,local_28,local_24);
  }
  local_18[0] = 0;
  piVar8 = eastl::max_alt<int>((int *)(this + 0x16c),(int *)local_18);
  Sexy::CommaSeparate(*piVar8);
  plVar10 = *(long **)(this + 0x188);
  if (plVar10 == (long *)0x0) {
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded)
    ;
    iVar3 = local_38;
    pLVar7 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab9f30);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    fVar12 = (float)local_34;
    pLVar7 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab9f30);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    pLVar7 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab9e40);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    FUN_05477b24(auStack_40,awStack_48);
    Sexy::Color::Color((Color *)local_18,1);
    pPVar9 = (PrimeText_PotentialText *)
             Sexy::BuildPotentialText_Paragraph
                       ((float)(iVar3 + iVar1 / 2),fVar12,(float)((local_30 - iVar2 / 2) - iVar4),
                        (float)local_2c,uVar5,auStack_40,1,1,(Insets *)local_18);
    this_02 = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(this_02,pPVar9);
    *(PrimeTextWidget **)(this + 0x188) = this_02;
    FUN_05476c50(auStack_40);
  }
  else {
    pcVar11 = *(code **)(*plVar10 + 0x170);
    Sexy::Color::Color((Color *)local_18,1);
    (*pcVar11)(plVar10,0,(Insets *)local_18);
    Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x188),awStack_48);
  }
  (**(code **)(**(long **)(this + 0x188) + 0x128))(*(long **)(this + 0x188),param_1);
  FUN_05476c50(awStack_48);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ZMatchTicketBank::Draw(Sexy::Graphics*) */

void __thiscall ZMatchTicketBank::Draw(ZMatchTicketBank *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZMatchTicketBank::GetCenterPointOnScreen() */

void __thiscall ZMatchTicketBank::GetCenterPointOnScreen(ZMatchTicketBank *this)

{
  long lVar1;
  int iVar2;
  Point *in_x8;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  UIWidget::GetCenterPointOnScreen();
  iVar2 = FUN_039134e4(0);
  Sexy::Point::Point(in_x8,local_10 + iVar2,iVar2 + local_c);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZMatchTicketBank::IsMouseOver(int, int) */

void __thiscall ZMatchTicketBank::IsMouseOver(ZMatchTicketBank *this,int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  TRect<int> aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = UIWidget::IsVisible((UIWidget *)this);
  cVar3 = '\0';
  if (cVar1 != '\0') {
    bVar2 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x68),4);
    cVar3 = '\0';
    if (bVar2) {
      if (this[0x170] != (ZMatchTicketBank)0x0) {
        (**(code **)(*(long *)this + 0xb8))(aTStack_18,this);
        cVar3 = Sexy::TRect<int>::Contains(aTStack_18,param_1,param_2);
        if (cVar3 != '\0') goto LAB_039143f0;
      }
      cVar3 = UIWidget::IsMouseOver((UIWidget *)this,param_1,param_2);
    }
  }
LAB_039143f0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3);
}

