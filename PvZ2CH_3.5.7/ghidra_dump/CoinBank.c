// Class: CoinBank


/* CoinBank::cancelTouch() */

void __thiscall CoinBank::cancelTouch(CoinBank *this)

{
  *(undefined8 *)(this + 0x178) = 0;
  (**(code **)(*(long *)this + 0xe8))(this,2);
  return;
}


/* CoinBank::onExitState_Loading(WidgetState) */

void CoinBank::onExitState_Loading(long param_1)

{
  *(undefined1 *)(param_1 + 0x170) = 0;
  return;
}


/* CoinBank::onUpdate() */

void __thiscall CoinBank::onUpdate(CoinBank *this)

{
  time_t tVar1;
  
  if ((this[0x171] != (CoinBank)0x0) && (tVar1 = time((time_t *)0x0), *(long *)(this + 400) < tVar1)
     ) {
    (**(code **)(*(long *)this + 0x198))(this,0);
    return;
  }
  return;
}


/* CoinBank::~CoinBank() */

void __thiscall CoinBank::~CoinBank(CoinBank *this)

{
  *(undefined ***)this = &PTR_GetClass_067540b0;
  *(undefined ***)(this + 0x10) = &PTR__CoinBank_06754260;
  if (*(long **)(this + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x188) + 0x18))();
    *(undefined8 *)(this + 0x188) = 0;
  }
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to CoinBank::~CoinBank() */

void __thiscall CoinBank::~CoinBank(CoinBank *this)

{
  ~CoinBank(this + -0x10);
  return;
}


/* CoinBank::~CoinBank() */

void __thiscall CoinBank::~CoinBank(CoinBank *this)

{
  ~CoinBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CoinBank::~CoinBank() */

void __thiscall CoinBank::~CoinBank(CoinBank *this)

{
  ~CoinBank(this + -0x10);
  return;
}


/* CoinBank::SetVisible(bool) */

void __thiscall CoinBank::SetVisible(CoinBank *this,bool param_1)

{
  time_t tVar1;
  
  UIWidget::SetVisible((UIWidget *)this,param_1);
  if (param_1) {
    tVar1 = time((time_t *)0x0);
    *(time_t *)(this + 400) = tVar1 + 5;
  }
  return;
}


/* CoinBank::handleTouch(Sexy::Touch const&) */

byte __thiscall CoinBank::handleTouch(CoinBank *this,Touch *param_1)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  
  if (this[0x170] == (CoinBank)0x0) {
LAB_03c5cb20:
    bVar2 = 0;
  }
  else {
    bVar2 = (**(code **)(*(long *)this + 0xa8))
                      (this,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 == 3) {
      lVar3 = *(long *)param_1;
      lVar4 = *(long *)(this + 0x178);
      if ((bVar2 == 0) || (lVar3 != lVar4)) {
        bVar2 = 0;
      }
      else {
        bVar2 = 1;
        LawnApp::ShowCoinStore(gLawnApp,0);
        lVar3 = *(long *)param_1;
        lVar4 = *(long *)(this + 0x178);
      }
    }
    else {
      if (iVar1 != 4) {
        if ((iVar1 == 0) && (bVar2 = bVar2 & *(long *)(this + 0x178) == 0, bVar2 != 0)) {
          *(undefined8 *)(this + 0x178) = *(undefined8 *)param_1;
          (**(code **)(*(long *)this + 0xe8))(this,4);
          return bVar2;
        }
        goto LAB_03c5cb20;
      }
      lVar3 = *(long *)param_1;
      bVar2 = 0;
      lVar4 = *(long *)(this + 0x178);
    }
    if (lVar3 == lVar4) {
      cancelTouch(this);
    }
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinBank::StaticClassInit() */

void CoinBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"CoinBank");
    (*pcVar2)(plVar1,asStack_10,FUN_03c5ced8,0x198,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CoinBank::StaticGetClass() */

long * CoinBank::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CoinBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CoinBank::GetClass() const */

long * CoinBank::GetClass(void)

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
  (*pcVar3)(plVar1,"CoinBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CoinBank::SetAutoHide(bool) */

void __thiscall CoinBank::SetAutoHide(CoinBank *this,bool param_1)

{
  this[0x171] = (CoinBank)param_1;
  return;
}


/* CoinBank::onGameplayEnded() */

void __thiscall CoinBank::onGameplayEnded(CoinBank *this)

{
  UIWidget::SetClickable((UIWidget *)this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinBank::calcSpinTime() */

void __thiscall CoinBank::calcSpinTime(CoinBank *this)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float local_c;
  long local_8;
  
  iVar2 = *(int *)(this + 0x168);
  local_8 = ___stack_chk_guard;
  if (iVar2 < 0) {
    iVar2 = *(int *)(this + 0x164);
  }
  uVar1 = *(int *)(this + 0x16c) - iVar2 >> 0x1f;
  local_c = (float)(int)((*(int *)(this + 0x16c) - iVar2 ^ uVar1) - uVar1) * 0.02;
  pfVar3 = eastl::min_alt<float>((float *)&DAT_057524a0,&local_c);
  fVar5 = *pfVar3;
  fVar4 = (float)PVZ_T();
  *(float *)(this + 0x174) = fVar5 + fVar4;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CoinBank::onUpdateCoinFakeCurrency() */

void __thiscall CoinBank::onUpdateCoinFakeCurrency(CoinBank *this)

{
  *(undefined4 *)(this + 0x168) = GlobalFakeCurrency;
  calcSpinTime(this);
  return;
}


/* CoinBank::SetFakeCurrencyAmount(int) */

void __thiscall CoinBank::SetFakeCurrencyAmount(CoinBank *this,int param_1)

{
  *(int *)(this + 0x168) = param_1;
  calcSpinTime(this);
  return;
}


/* CoinBank::ClearFakeCurrency() */

void __thiscall CoinBank::ClearFakeCurrency(CoinBank *this)

{
  *(undefined4 *)(this + 0x168) = 0xffffffff;
  GlobalFakeCurrency = 0xffffffff;
  calcSpinTime(this);
  return;
}


/* CoinBank::onCoinCurrencyChanged(int) */

void __thiscall CoinBank::onCoinCurrencyChanged(CoinBank *this,int param_1)

{
  *(int *)(this + 0x164) = param_1;
  (**(code **)(*(long *)this + 0x198))(this,1);
  calcSpinTime(this);
  return;
}


/* CoinBank::CoinBank() */

void __thiscall CoinBank::CoinBank(CoinBank *this)

{
  int iVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  time_t tVar3;
  
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined8 *)(this + 0x178) = 0;
  this[0x180] = (CoinBank)0x0;
  *(undefined ***)this = &PTR_GetClass_067540b0;
  *(undefined ***)(this + 0x10) = &PTR__CoinBank_06754260;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = PlayerInfo::GetNumCoins(this_01,false);
  *(int *)(this + 0x164) = iVar2;
  this[0x171] = (CoinBank)0x1;
  this[0x170] = (CoinBank)0x0;
  iVar1 = GlobalFakeCurrency;
  *(int *)(this + 0x168) = GlobalFakeCurrency;
  *(undefined8 *)(this + 0x188) = 0;
  if (iVar1 < 0) {
    iVar1 = iVar2;
  }
  *(int *)(this + 0x16c) = iVar1;
  *(undefined4 *)(this + 0x174) = 0;
  tVar3 = time((time_t *)0x0);
  *(time_t *)(this + 400) = tVar3;
  return;
}


/* CoinBank::StaticNew() */

CoinBank * CoinBank::StaticNew(void)

{
  CoinBank *this;
  
  this = ::operator_new(0x198);
  CoinBank(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinBank::registerForEvents() */

void __thiscall CoinBank::registerForEvents(CoinBank *this)

{
  undefined *puVar1;
  Board *pBVar2;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_b8 [8];
  CBMemberTranslatorX aCStack_b0 [24];
  CBMemberTranslatorX aCStack_98 [24];
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
            ((ReceivedDataCallback *)this,onCoinCurrencyChanged);
  local_e0 = local_80;
  uStack_d8 = uStack_78;
  local_d0 = local_70;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<CoinBank,void(CoinBank::*)(int)>>
            ((MessageRouter *)puVar1,Message::CoinCurrencyChanged,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<CoinBank,void(CoinBank::*)()>(aDStack_38,aCStack_98);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayEnded,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ClearFakeCurrency);
  Sexy::Delegate0::Delegate0<CoinBank,void(CoinBank::*)()>(aDStack_38,aCStack_98);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ClearFakeCurrency,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdateCoinFakeCurrency);
  Sexy::Delegate0::Delegate0<CoinBank,void(CoinBank::*)()>(aDStack_38,aCStack_98);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::UpdateFakeCurrency,aDStack_38);
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  if (pBVar2 != (Board *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,handleTouch);
    Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
    Delegate1wRet<CoinBank,bool(CoinBank::*)(Sexy::Touch_const&)>(aDStack_68,aCStack_b0);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_b8);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,cancelTouch);
    Sexy::Delegate0::Delegate0<CoinBank,void(CoinBank::*)()>(aDStack_38,aCStack_98);
    Board::RegisterTouchGameplayObject(pBVar2,aDStack_68,9,a_Stack_b8,aDStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_b8);
    this[0x180] = (CoinBank)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinBank::CalcPlusButtonRect() */

void CoinBank::CalcPlusButtonRect(void)

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
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad0cc0);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  pSVar6 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad0cc0);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar6);
  Sexy::Insets::Insets(in_x8,0,0,iVar3,iVar4);
  iVar3 = FUN_03c5cc14(*(undefined4 *)(in_x0 + 0x38));
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad0cc0);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  *(int *)in_x8 = *(int *)in_x8 + ((local_18 + iVar3) - iVar4 / 2);
  pSVar6 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad0cc0);
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
/* CoinBank::Draw(Sexy::Graphics*) */

void __thiscall CoinBank::Draw(CoinBank *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  Image *pIVar5;
  LotteryResultProgressBar *pLVar6;
  SalesProgressBar *this_00;
  int *piVar7;
  CachedUIResourcePtr<Sexy::Image> *this_01;
  PrimeText_PotentialText *pPVar8;
  PrimeTextWidget *this_02;
  long *plVar9;
  code *pcVar10;
  float fVar11;
  GraphicsAutoState aGStack_60 [8];
  wstring awStack_58 [8];
  undefined1 auStack_50 [8];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  Color aCStack_28 [16];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_60,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  UIWidget::GetDrawRect();
  (**(code **)(*(long *)this + 400))(&local_38,this);
  local_38 = local_38 - local_48;
  local_34 = local_34 - local_44;
  local_48 = 0;
  local_44 = 0;
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)&local_48);
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad0d18);
  Draw3SliceImage(param_1,(Insets *)local_18,uVar4);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad0c68);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad0c68);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  iVar3 = local_3c;
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad0c68);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Graphics::DrawImage(param_1,pIVar5,(int)((float)iVar1 * -0.5),(iVar3 - iVar2) / 2);
  if (this[0x170] != (CoinBank)0x0) {
    iVar3 = UIWidget::getWidgetStateSerialization((UIWidget *)this);
    if (iVar3 == 4) {
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad0d88;
    }
    else {
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad0cc0;
    }
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_01);
    Sexy::Graphics::DrawImage(param_1,pIVar5,local_38,local_34);
  }
  local_18[0] = 0;
  piVar7 = eastl::max_alt<int>((int *)(this + 0x16c),(int *)local_18);
  Sexy::CommaSeparate(*piVar7);
  Sexy::Color::Color(aCStack_28,0xff,0xff,0xff);
  plVar9 = *(long **)(this + 0x188);
  if (plVar9 == (long *)0x0) {
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded)
    ;
    iVar3 = local_48;
    pLVar6 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad0c68);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
    fVar11 = (float)local_44;
    pLVar6 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad0c68);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
    FUN_05477b24(auStack_50,awStack_58);
    Sexy::Color::Color((Color *)local_18,1);
    pPVar8 = (PrimeText_PotentialText *)
             Sexy::BuildPotentialText_Paragraph
                       ((float)(iVar3 + iVar1 / 2),fVar11,(float)(local_40 - iVar2 / 2),
                        (float)local_3c,uVar4,auStack_50,1,1,(Insets *)local_18);
    this_02 = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(this_02,pPVar8);
    *(PrimeTextWidget **)(this + 0x188) = this_02;
    FUN_05476c50(auStack_50);
  }
  else {
    pcVar10 = *(code **)(*plVar9 + 0x170);
    Sexy::Color::Color((Color *)local_18,1);
    (*pcVar10)(plVar9,0,(Insets *)local_18);
    Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x188),awStack_58);
  }
  (**(code **)(**(long **)(this + 0x188) + 0x128))(*(long **)(this + 0x188),param_1);
  FUN_05476c50(awStack_58);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to CoinBank::Draw(Sexy::Graphics*) */

void __thiscall CoinBank::Draw(CoinBank *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinBank::GetCenterPointOnScreen() */

void __thiscall CoinBank::GetCenterPointOnScreen(CoinBank *this)

{
  long lVar1;
  int iVar2;
  Point *in_x8;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  UIWidget::GetCenterPointOnScreen();
  iVar2 = FUN_03c5cd90(0);
  Sexy::Point::Point(in_x8,local_10 + iVar2,iVar2 + local_c);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinBank::IsMouseOver(int, int) */

void __thiscall CoinBank::IsMouseOver(CoinBank *this,int param_1,int param_2)

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
      if (this[0x170] != (CoinBank)0x0) {
        (**(code **)(*(long *)this + 400))(aTStack_18,this);
        cVar3 = Sexy::TRect<int>::Contains(aTStack_18,param_1,param_2);
        if (cVar3 != '\0') goto LAB_03c5da64;
      }
      cVar3 = UIWidget::IsMouseOver((UIWidget *)this,param_1,param_2);
    }
  }
LAB_03c5da64:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3);
}

