// Class: NewerPresentUI


/* NewerPresentUI::GetCountImagePath(int) */

void NewerPresentUI::GetCountImagePath(int param_1)

{
  Sexy::StrFormat("IMAGE_UI_AWARDDIALOG_X%d");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentUI::~NewerPresentUI() */

void __thiscall NewerPresentUI::~NewerPresentUI(NewerPresentUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06842528;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06842200;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0x110));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x108));
  FUN_05476c50(this + 0xf8);
  FUN_05476c50(this + 0xf0);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewerPresentUI::~NewerPresentUI() */

void __thiscall NewerPresentUI::~NewerPresentUI(NewerPresentUI *this)

{
  ~NewerPresentUI(this);
  AK::FreeHook(this);
  return;
}


/* NewerPresentUI::DrawPlantImage(Sexy::Graphics*) */

void __thiscall NewerPresentUI::DrawPlantImage(NewerPresentUI *this,Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  ResourceInfo *pRVar4;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x108);
  this_01 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  this_02 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_02);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
  iVar3 = FUN_043b2f64(0x14);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar4,(*(int *)(this + 0x50) - (int)((double)iVar1 * 0.8)) / 2,
             (*(int *)(this + 0x54) - (int)((double)iVar2 * 0.8)) / 2 - iVar3,
             (int)((double)iVar1 * 0.8),(int)((double)iVar2 * 0.8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentUI::ButtonDepress(int) */

void __thiscall NewerPresentUI::ButtonDepress(NewerPresentUI *this,int param_1)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var2;
  PurchaseBroker *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 1) {
    if (*(int *)(this + 0x100) == -1) {
      iVar1 = LawnApp::GetPlatform(gLawnApp);
      if ((iVar1 == 0xb) || (iVar1 == 5)) {
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        this_00 = (PurchaseBroker *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_rightmost(p_Var2);
        std::string::string(asStack_10,
                            "com.popcap.ios.chs.PVZ2.diamonds.newer.present.chinamobilemm");
      }
      else {
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        this_00 = (PurchaseBroker *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_rightmost(p_Var2);
        std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.diamonds.newer.present");
      }
    }
    else {
      if (*(int *)(this + 0x100) != -2) goto LAB_043b31e8;
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_00 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(p_Var2);
      std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.diamonds.advance.newer.present");
    }
    PurchaseBroker::RequestPayment(this_00,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
  else if (param_1 == 2) {
    if (*(int *)(this + 0x100) == 1) {
      LawnApp::KillNewerPresentUI(gLawnApp);
      LawnApp::ShowCoinStore(gLawnApp,2);
    }
  }
  else if (param_1 == 0) {
    LawnApp::KillNewerPresentUI(gLawnApp);
  }
LAB_043b31e8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to NewerPresentUI::ButtonDepress(int) */

void __thiscall NewerPresentUI::ButtonDepress(NewerPresentUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentUI::DrawRebatePresent(Sexy::Graphics*) */

void __thiscall NewerPresentUI::DrawRebatePresent(NewerPresentUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LotteryResultProgressBar *pLVar4;
  SalesProgressBar *this_00;
  undefined8 uVar5;
  RebateDateMgr *this_01;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar4 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02bd8);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02bd8);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
  iVar3 = FUN_043b2f64(0x5f);
  Sexy::Insets::Insets
            (aIStack_28,(*(int *)(this + 0x50) - iVar1) / 2,
             (*(int *)(this + 0x54) - iVar2) / 2 - iVar3,iVar1,iVar2);
  TodStringTranslate(L"[PRESENT_CON_1012]");
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28);
  Sexy::Color::Color((Color *)asStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar5,asStack_18,5,1);
  FUN_05476c50(auStack_30);
  FUN_05475d88(asStack_18,this + 0x110);
  this_01 = (RebateDateMgr *)RebateDateMgr::GetInstance();
  pLVar4 = (LotteryResultProgressBar *)RebateDateMgr::GetPlantPieceImage(this_01,asStack_18);
  if (pLVar4 != (LotteryResultProgressBar *)0x0) {
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
    iVar2 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar4);
    iVar3 = FUN_043b2f64(0x19);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pLVar4,(*(int *)(this + 0x50) - iVar1) / 2,
               iVar3 + (*(int *)(this + 0x54) - iVar2) / 2);
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewerPresentUI::DrawGiftEffect(Sexy::Graphics*) */

void __thiscall NewerPresentUI::DrawGiftEffect(NewerPresentUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  LotteryResultProgressBar *pLVar7;
  SalesProgressBar *this_00;
  
  iVar1 = FUN_043b2f64(0x41);
  iVar1 = *(int *)(this + 0xe4) - iVar1;
  if (*(int *)(this + 0x100) - 1000U < 0xc) {
    iVar2 = FUN_043b2f64(0x19);
    iVar1 = iVar1 - iVar2;
  }
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02aa8);
  iVar2 = *(int *)(this + 0x50);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02aa8);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02aa8);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02aa8);
  iVar5 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Graphics::DrawImage(param_1,pIVar6,(iVar2 - iVar3) / 2,iVar1,iVar4,iVar5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentUI::DrawDialogBottomBackground(Sexy::Graphics*) */

void __thiscall NewerPresentUI::DrawDialogBottomBackground(NewerPresentUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  float fVar9;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02b30);
  iVar1 = *(int *)(this + 0xe0);
  iVar2 = *(int *)(this + 0xec);
  iVar3 = *(int *)(this + 0xe4);
  fVar9 = (float)(*(int *)(lVar6 + 0x38) / 3);
  iVar8 = (int)(fVar9 * 0.43);
  iVar4 = FUN_043b2f64(0x88);
  iVar5 = FUN_043b2f64(3);
  Sexy::Insets::Insets
            (aIStack_18,iVar8 + iVar1,(((iVar3 + iVar2) - iVar4) - (int)(fVar9 * 0.4)) - iVar5,
             *(int *)(this + 0xe8) + iVar8 * -2,iVar4);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02858);
  Draw3SliceImage(param_1,aIStack_18,uVar7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewerPresentUI::DrawRibbon(Sexy::Graphics*) */

void __thiscall NewerPresentUI::DrawRibbon(NewerPresentUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  Image *pIVar5;
  
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02670);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02670);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar4 = FUN_043b2f64(0x12);
  iVar1 = *(int *)(this + 0xe4);
  if (*(int *)(this + 0x100) - 1000U < 0xc) {
    iVar2 = (int)((double)iVar2 * 0.85);
    iVar3 = (int)((double)iVar3 * 0.85);
  }
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02670);
  Sexy::Graphics::DrawImage
            (param_1,pIVar5,(*(int *)(this + 0x50) - iVar2) / 2,iVar1 - iVar4,iVar2,iVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentUI::DrawNewPresentInfoBg(Sexy::Graphics*) */

void __thiscall NewerPresentUI::DrawNewPresentInfoBg(NewerPresentUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  SalesProgressBar *this_00;
  undefined8 uVar8;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_043b2f64(0x14);
  iVar1 = *(int *)(this + 0xe0);
  iVar5 = FUN_043b2f64(0x32);
  iVar2 = *(int *)(this + 0xe4);
  iVar6 = FUN_043b2f64(0x28);
  iVar3 = *(int *)(this + 0xe8);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b028a8);
  iVar7 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Insets::Insets(aIStack_28,iVar4 + iVar1,iVar5 + iVar2,iVar3 - iVar6,iVar7);
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b028a8);
  Draw9SliceImage(param_1,aIStack_18,uVar8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentUI::drawShadedBox(Sexy::Graphics*, Sexy::TRect<int>) */

void __thiscall
NewerPresentUI::drawShadedBox(undefined8 param_1_00,Graphics *param_1,Insets *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  Image *pIVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  GraphicsAutoState aGStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar9 = 0;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02b30);
  iVar1 = *(int *)(lVar5 + 0x38);
  Sexy::Insets::Insets((Insets *)&local_18);
  fVar10 = (float)(iVar1 / 3);
  local_14 = *(int *)(param_3 + 4) + (int)(fVar10 * 0.35);
  local_18 = *(int *)param_3 + (int)(fVar10 * 0.43);
  local_10 = *(int *)(param_3 + 8) + (int)(fVar10 * 0.43) * -2;
  local_c = (*(int *)(param_3 + 0xc) - (int)(fVar10 * 0.35)) - (int)(fVar10 * 0.4);
  Sexy::Graphics::SetClipRect(param_1,(TRect *)&local_18);
  iVar1 = *(int *)(param_3 + 0xc);
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02b88);
  iVar8 = *(int *)(param_3 + 8);
  iVar4 = 0;
  if (*(int *)(lVar5 + 0x3c) != 0) {
    iVar4 = iVar1 / *(int *)(lVar5 + 0x3c);
  }
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02b88);
  iVar1 = 0;
  if (*(int *)(lVar5 + 0x38) != 0) {
    iVar1 = iVar8 / *(int *)(lVar5 + 0x38);
  }
  if (-1 < iVar1) {
    do {
      if (-2 < iVar4) {
        iVar8 = 0;
        do {
          lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02b88);
          iVar2 = *(int *)(lVar5 + 0x38);
          lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02b88);
          iVar3 = iVar8 * *(int *)(lVar5 + 0x3c);
          iVar8 = iVar8 + 1;
          pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02b88);
          Sexy::Graphics::DrawImage(param_1,pIVar6,iVar9 * iVar2,iVar3);
        } while (iVar8 != iVar4 + 2);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 <= iVar1);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  Sexy::Insets::Insets((Insets *)&local_18,param_3);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02b30);
  Draw9SliceImage(param_1,(Insets *)&local_18,uVar7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentUI::Draw(Sexy::Graphics*) */

void __thiscall NewerPresentUI::Draw(NewerPresentUI *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  Image *pIVar11;
  LotteryResultProgressBar *pLVar12;
  SalesProgressBar *pSVar13;
  undefined8 uVar14;
  PVZDB *pPVar15;
  RtName *this_00;
  CompensatedAwardList *this_01;
  CachedUIResourcePtr<Sexy::Image> *pCVar16;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  Sexy::Graphics::Translate(param_1,*(int *)(this + 0xe0),*(int *)(this + 0xe4));
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0xe8),*(int *)(this + 0xec));
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  drawShadedBox(this,param_1,aIStack_18);
  Sexy::Graphics::Translate(param_1,-*(int *)(this + 0xe0),-*(int *)(this + 0xe4));
  iVar7 = *(int *)(this + 0x100);
  if (iVar7 == 0x25) {
    DrawDialogBottomBackground(this,param_1);
    DrawNewPresentInfoBg(this,param_1);
    pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02598);
    iVar7 = *(int *)(this + 0x50);
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02598);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    iVar8 = *(int *)(this + 0x54);
    pSVar13 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02598);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar13);
    iVar4 = FUN_043b2f64(0x5f);
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02598);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    pSVar13 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02598);
    pCVar16 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02880;
    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
    Sexy::Graphics::DrawImage
              (param_1,pIVar11,(iVar7 - iVar2) / 2,(iVar8 - iVar3) / 2 - iVar4,iVar5,iVar6);
LAB_043b3db8:
    pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar16);
    iVar7 = *(int *)(this + 0x50);
    pLVar12 = (LotteryResultProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar16);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    iVar8 = *(int *)(this + 0x54);
    pSVar13 = (SalesProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar16);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar13);
    iVar4 = FUN_043b2f64(5);
    pLVar12 = (LotteryResultProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar16);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    pSVar13 = (SalesProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar16);
    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
    Sexy::Graphics::DrawImage
              (param_1,pIVar11,(iVar7 - iVar2) / 2,(iVar8 - iVar3) / 2 - iVar4,iVar5,iVar6);
  }
  else {
    if (iVar7 < 0x26) {
      if (iVar7 == 1) {
        DrawDialogBottomBackground(this,param_1);
        DrawNewPresentInfoBg(this,param_1);
        pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02920);
        iVar7 = *(int *)(this + 0x50);
        pLVar12 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02920);
        iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
        iVar8 = *(int *)(this + 0x54);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02920);
        iVar3 = SalesProgressBar::GetCurrentLevel(pSVar13);
        iVar4 = FUN_043b2f64(0x5f);
        pLVar12 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02920);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02920);
        pCVar16 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02c50;
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar11,(iVar7 - iVar2) / 2,(iVar8 - iVar3) / 2 - iVar4,iVar5,iVar6);
      }
      else if (iVar7 < 2) {
        if (iVar7 == -2) {
          DrawDialogBottomBackground(this,param_1);
          DrawNewPresentInfoBg(this,param_1);
          pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02c78);
          iVar7 = *(int *)(this + 0x50);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02c78);
          iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          iVar8 = *(int *)(this + 0x54);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02c78);
          iVar3 = SalesProgressBar::GetCurrentLevel(pSVar13);
          iVar4 = FUN_043b2f64(0x5f);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02c78);
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02c78);
          pCVar16 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b027e0;
          iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
          Sexy::Graphics::DrawImage
                    (param_1,pIVar11,(iVar7 - iVar2) / 2,(iVar8 - iVar3) / 2 - iVar4,iVar5,iVar6);
        }
        else {
          if (iVar7 != -1) goto LAB_043b4400;
          DrawDialogBottomBackground(this,param_1);
          DrawNewPresentInfoBg(this,param_1);
          pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02bd8);
          iVar7 = *(int *)(this + 0x50);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02bd8);
          iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          iVar8 = *(int *)(this + 0x54);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02bd8);
          iVar3 = SalesProgressBar::GetCurrentLevel(pSVar13);
          iVar4 = FUN_043b2f64(0x5f);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02bd8);
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02bd8);
          iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
          Sexy::Graphics::DrawImage
                    (param_1,pIVar11,(iVar7 - iVar2) / 2,(iVar8 - iVar3) / 2 - iVar4,iVar5,iVar6);
          iVar7 = LawnApp::GetPlatform(gLawnApp);
          if ((iVar7 == 0xb) || (iVar7 == 5)) {
            pCVar16 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b025f8;
          }
          else {
            pCVar16 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02830;
          }
        }
      }
      else if (iVar7 == 0x23) {
        DrawDialogBottomBackground(this,param_1);
        DrawNewPresentInfoBg(this,param_1);
        pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02970);
        iVar7 = *(int *)(this + 0x50);
        pLVar12 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02970);
        iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
        iVar8 = *(int *)(this + 0x54);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02970);
        iVar3 = SalesProgressBar::GetCurrentLevel(pSVar13);
        iVar4 = FUN_043b2f64(0x5f);
        pLVar12 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02970);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02970);
        pCVar16 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02948;
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar11,(iVar7 - iVar2) / 2,(iVar8 - iVar3) / 2 - iVar4,iVar5,iVar6);
      }
      else {
        if (iVar7 != 0x24) goto LAB_043b4400;
        DrawDialogBottomBackground(this,param_1);
        DrawNewPresentInfoBg(this,param_1);
        pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02a00);
        iVar7 = *(int *)(this + 0x50);
        pLVar12 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02a00);
        iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
        iVar8 = *(int *)(this + 0x54);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02a00);
        iVar3 = SalesProgressBar::GetCurrentLevel(pSVar13);
        iVar4 = FUN_043b2f64(0x5f);
        pLVar12 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02a00);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02a00);
        pCVar16 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02a78;
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar11,(iVar7 - iVar2) / 2,(iVar8 - iVar3) / 2 - iVar4,iVar5,iVar6);
      }
      goto LAB_043b3db8;
    }
    if (iVar7 < 0x3f4) {
      if (iVar7 < 0x3ef) {
        if (999 < iVar7) {
          pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02790);
          iVar7 = *(int *)(this + 0x50);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02790);
          iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          iVar8 = *(int *)(this + 0x54);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02790);
          iVar3 = SalesProgressBar::GetCurrentLevel(pSVar13);
          iVar4 = FUN_043b2f64(0x2d);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02790);
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02790);
          iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
          Sexy::Graphics::DrawImage
                    (param_1,pIVar11,(iVar7 - iVar2) / 2,(iVar8 - iVar3) / 2 - iVar4,iVar5,iVar6);
          pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b026e8);
          iVar7 = *(int *)(this + 0x50);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b026e8);
          iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          iVar8 = *(int *)(this + 0x54);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b026e8);
          iVar3 = SalesProgressBar::GetCurrentLevel(pSVar13);
          iVar4 = FUN_043b2f64(0x6e);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b026e8);
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b026e8);
          iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
          Sexy::Graphics::DrawImage
                    (param_1,pIVar11,(iVar7 - iVar2) / 2,(iVar8 - iVar3) / 2 - iVar4,iVar5,iVar6);
          DrawPlantImage(this,param_1);
          pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b026c0);
          iVar7 = *(int *)(this + 0x50);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b026c0);
          iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          iVar3 = FUN_043b2f64(100);
          iVar8 = *(int *)(this + 0x54);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b026c0);
          iVar4 = SalesProgressBar::GetCurrentLevel(pSVar13);
          iVar5 = FUN_043b2f64(0x14);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b026c0);
          iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b026c0);
          iVar9 = SalesProgressBar::GetCurrentLevel(pSVar13);
          Sexy::Graphics::DrawImage
                    (param_1,pIVar11,(iVar7 / 2 - iVar2) - iVar3,(iVar8 - iVar4) / 2 - iVar5,iVar6,
                     iVar9);
          pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02d28);
          iVar7 = *(int *)(this + 0x50);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02d28);
          iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          iVar3 = FUN_043b2f64(0x3c);
          iVar8 = *(int *)(this + 0x54);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02d28);
          iVar4 = SalesProgressBar::GetCurrentLevel(pSVar13);
          iVar5 = FUN_043b2f64(0x14);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02d28);
          iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02d28);
          iVar9 = SalesProgressBar::GetCurrentLevel(pSVar13);
          Sexy::Graphics::DrawImage
                    (param_1,pIVar11,(iVar7 / 2 - iVar2) - iVar3,(iVar8 - iVar4) / 2 - iVar5,iVar6,
                     iVar9);
          pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b027b8);
          iVar2 = FUN_043b2f64(0x78);
          iVar7 = *(int *)(this + 0x54);
          iVar8 = *(int *)(this + 0x50);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b027b8);
          iVar3 = SalesProgressBar::GetCurrentLevel(pSVar13);
          iVar4 = FUN_043b2f64(0x19);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b027b8);
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b027b8);
          iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
          Sexy::Graphics::DrawImage
                    (param_1,pIVar11,iVar2 + iVar8 / 2,(iVar7 - iVar3) / 2 - iVar4,iVar5,iVar6);
          pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02d28);
          iVar2 = FUN_043b2f64(0x46);
          iVar7 = *(int *)(this + 0x54);
          iVar8 = *(int *)(this + 0x50);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02d28);
          iVar3 = SalesProgressBar::GetCurrentLevel(pSVar13);
          iVar4 = FUN_043b2f64(0x14);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02d28);
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02d28);
          iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
          Sexy::Graphics::DrawImage
                    (param_1,pIVar11,iVar2 + iVar8 / 2,(iVar7 - iVar3) / 2 - iVar4,iVar5,iVar6);
          pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02c00);
          iVar7 = *(int *)(this + 0x50);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02c00);
          iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          iVar3 = FUN_043b2f64(0x50);
          iVar8 = *(int *)(this + 0x54);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02c00);
          iVar4 = SalesProgressBar::GetCurrentLevel(pSVar13);
          iVar5 = FUN_043b2f64(5);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02c00);
          iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02c00);
          iVar9 = SalesProgressBar::GetCurrentLevel(pSVar13);
          Sexy::Graphics::DrawImage
                    (param_1,pIVar11,(iVar7 / 2 - iVar2) - iVar3,iVar5 + (iVar8 - iVar4) / 2,iVar6,
                     iVar9);
          pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02ca0);
          iVar7 = *(int *)(this + 0x50);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02ca0);
          iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          iVar8 = *(int *)(this + 0x54);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02ca0);
          iVar3 = SalesProgressBar::GetCurrentLevel(pSVar13);
          iVar4 = FUN_043b2f64(0xf);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02ca0);
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02ca0);
          iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
          Sexy::Graphics::DrawImage
                    (param_1,pIVar11,(iVar7 - iVar2) / 2,iVar4 + (iVar8 - iVar3) / 2,iVar5,iVar6);
          pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02648);
          iVar2 = FUN_043b2f64(0x78);
          iVar7 = *(int *)(this + 0x54);
          iVar8 = *(int *)(this + 0x50);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02648);
          iVar3 = SalesProgressBar::GetCurrentLevel(pSVar13);
          iVar4 = FUN_043b2f64(5);
          pLVar12 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02648);
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          pSVar13 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02648);
          iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
          Sexy::Graphics::DrawImage
                    (param_1,pIVar11,iVar2 + iVar8 / 2,iVar4 + (iVar7 - iVar3) / 2,iVar5,iVar6);
        }
      }
      else {
        pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02790);
        iVar7 = *(int *)(this + 0x50);
        pLVar12 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02790);
        iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
        iVar8 = *(int *)(this + 0x54);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02790);
        iVar3 = SalesProgressBar::GetCurrentLevel(pSVar13);
        iVar4 = FUN_043b2f64(0x2d);
        pLVar12 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02790);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02790);
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar11,(iVar7 - iVar2) / 2,(iVar8 - iVar3) / 2 - iVar4,iVar5,iVar6);
        pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02b58);
        iVar7 = *(int *)(this + 0x50);
        pLVar12 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02b58);
        iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
        iVar8 = *(int *)(this + 0x54);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02b58);
        iVar3 = SalesProgressBar::GetCurrentLevel(pSVar13);
        iVar4 = FUN_043b2f64(0x6e);
        pLVar12 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02b58);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02b58);
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar11,(iVar7 - iVar2) / 2,(iVar8 - iVar3) / 2 - iVar4,iVar5,iVar6);
        pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b026c0);
        iVar7 = *(int *)(this + 0x50);
        pLVar12 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b026c0);
        iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
        iVar3 = FUN_043b2f64(0x50);
        iVar8 = *(int *)(this + 0x54);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b026c0);
        iVar4 = SalesProgressBar::GetCurrentLevel(pSVar13);
        iVar5 = FUN_043b2f64(0x14);
        pLVar12 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b026c0);
        iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b026c0);
        iVar9 = SalesProgressBar::GetCurrentLevel(pSVar13);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar11,(iVar7 / 2 - iVar2) - iVar3,(iVar8 - iVar4) / 2 - iVar5,iVar6,
                   iVar9);
        pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02d28);
        iVar7 = *(int *)(this + 0x50);
        pLVar12 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02d28);
        iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
        iVar8 = *(int *)(this + 0x54);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02d28);
        iVar3 = SalesProgressBar::GetCurrentLevel(pSVar13);
        iVar4 = FUN_043b2f64(0x14);
        pLVar12 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02d28);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02d28);
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar11,(iVar7 - iVar2) / 2,(iVar8 - iVar3) / 2 - iVar4,iVar5,iVar6);
        pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b027b8);
        iVar2 = FUN_043b2f64(0x46);
        iVar7 = *(int *)(this + 0x54);
        iVar8 = *(int *)(this + 0x50);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b027b8);
        iVar3 = SalesProgressBar::GetCurrentLevel(pSVar13);
        iVar4 = FUN_043b2f64(0x19);
        pLVar12 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b027b8);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b027b8);
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar11,iVar2 + iVar8 / 2,(iVar7 - iVar3) / 2 - iVar4,iVar5,iVar6);
        pPVar15 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
        this_00 = (RtName *)PVZDB::GetTable(pPVar15,0x65);
        Sexy::RtName::RtName((RtName *)aIStack_18,L"CompensatedAwardList");
        Sexy::RtDbTable::GetIdForAlias(this_00);
        Sexy::RtDbTable::GetObjectForId((RtDbTable *)this_00,(RtId *)aIStack_28);
        nop();
        Sexy::RtId::~RtId((RtId *)aIStack_28);
        Sexy::RtName::~RtName((RtName *)aIStack_18);
        CompensatedAwardList::GetItem(this_01,*(int *)(this + 0x100));
        GetCountImagePath((int)this);
        GetCountImagePath((int)this);
        pLVar12 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)aIStack_28,false);
        pSVar13 = (SalesProgressBar *)StringHelper::ToImage((string *)aIStack_18,false);
        if ((pSVar13 != (SalesProgressBar *)0x0) && (pLVar12 != (LotteryResultProgressBar *)0x0)) {
          iVar7 = *(int *)(this + 0x50);
          iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          iVar3 = FUN_043b2f64(0x3c);
          iVar8 = *(int *)(this + 0x54);
          iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar12);
          iVar5 = FUN_043b2f64(5);
          iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
          iVar9 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar12);
          Sexy::Graphics::DrawImage
                    (param_1,(Image *)pLVar12,(iVar7 / 2 - iVar2) - iVar3,
                     iVar5 + (iVar8 - iVar4) / 2,iVar6,iVar9);
          iVar2 = FUN_043b2f64(0x46);
          iVar7 = *(int *)(this + 0x54);
          iVar8 = *(int *)(this + 0x50);
          iVar3 = SalesProgressBar::GetCurrentLevel(pSVar13);
          iVar4 = FUN_043b2f64(5);
          iVar5 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)pSVar13);
          iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
          Sexy::Graphics::DrawImage
                    (param_1,(Image *)pSVar13,iVar2 + iVar8 / 2,iVar4 + (iVar7 - iVar3) / 2,iVar5,
                     iVar6);
        }
        std::string::~string((string *)aIStack_18);
        std::string::~string((string *)aIStack_28);
      }
    }
    else if ((iVar7 == 0x3f4) && (cVar1 = FUN_054765e8(this + 0xf8), cVar1 == '\0')) {
      DrawDialogBottomBackground(this,param_1);
      DrawNewPresentInfoBg(this,param_1);
      DrawRebatePresent(this,param_1);
    }
  }
LAB_043b4400:
  DrawGiftEffect(this,param_1);
  DrawRibbon(this,param_1);
  iVar7 = FUN_043b2f64(0x12);
  iVar7 = *(int *)(this + 0xe4) - iVar7;
  if (*(int *)(this + 0x100) - 1000U < 0xc) {
    iVar8 = FUN_043b2f64(5);
    iVar7 = iVar7 - iVar8;
  }
  iVar8 = FUN_043b2f64(100);
  Sexy::Insets::Insets(aIStack_28,*(int *)(this + 0xe0),iVar7,*(int *)(this + 0xe8),iVar8);
  uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xf0,aIStack_28,uVar14,aIStack_18,5,1);
  iVar7 = *(int *)(this + 0x100);
  if (iVar7 == -1) {
    pCVar16 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02738;
  }
  else if (iVar7 == -2) {
    pCVar16 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02d00;
  }
  else {
    if (iVar7 != 1) {
      iVar4 = FUN_043b2f64(8);
      iVar7 = *(int *)(this + 0xe4);
      iVar8 = *(int *)(this + 0xe0);
      iVar2 = *(int *)(this + 0xec);
      iVar5 = FUN_043b2f64(0x88);
      iVar6 = FUN_043b2f64(2);
      iVar9 = FUN_043b2f64(0x10);
      iVar3 = *(int *)(this + 0xe8);
      iVar10 = FUN_043b2f64(0x4b);
      Sexy::Insets::Insets
                (aIStack_28,iVar4 + iVar8,((iVar7 + iVar2) - iVar5) + iVar6,iVar3 - iVar9,iVar10);
      uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
      Sexy::Color::Color((Color *)aIStack_18,1);
      WriteWordInRect(param_1,this + 0xf8,aIStack_28,uVar14,aIStack_18,5,1);
      goto LAB_043b4570;
    }
    pCVar16 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b028d0;
  }
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar16);
  iVar7 = *(int *)(this + 0x50);
  pLVar12 = (LotteryResultProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar16);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  iVar8 = *(int *)(this + 0xe4);
  iVar2 = *(int *)(this + 0xec);
  iVar4 = FUN_043b2f64(0x88);
  iVar5 = FUN_043b2f64(2);
  pLVar12 = (LotteryResultProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar16);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  pSVar13 = (SalesProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar16);
  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar13);
  Sexy::Graphics::DrawImage
            (param_1,pIVar11,(iVar7 - iVar3) / 2,((iVar8 + iVar2) - iVar4) + iVar5,iVar6,iVar9);
LAB_043b4570:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentUI::GetPlantPieceImage(int) */

void NewerPresentUI::GetPlantPieceImage(int param_1)

{
  PVZDB *pPVar1;
  RtName *this;
  CompensatedAwardList *this_00;
  undefined8 uVar2;
  int in_w1;
  undefined1 auVar3 [16];
  RtId aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  this = (RtName *)PVZDB::GetTable(pPVar1,0x65);
  Sexy::RtName::RtName(aRStack_18,L"CompensatedAwardList");
  Sexy::RtDbTable::GetIdForAlias(this);
  Sexy::RtDbTable::GetObjectForId((RtDbTable *)this,aRStack_20);
  nop();
  Sexy::RtId::~RtId(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  auVar3 = CompensatedAwardList::GetItem(this_00,in_w1);
  Sexy::StringToUpper((Sexy *)(auVar3._0_8_ + 8),auVar3._8_8_);
  uVar2 = FUN_0547429c(aRStack_18);
  Sexy::StrFormat("IMAGE_UI_FRAGMENT_PIECES_PACKETS_%s",aRStack_20,uVar2);
  std::string::~string((string *)aRStack_18);
  Sexy::ResourceManager::GetResourceForStringIdT<Sexy::Image>
            (*(string **)(gLawnApp + 0x848),SUB81(aRStack_20,0));
  std::string::~string((string *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentUI::GotRebateData(S2C_ChristmasRebate*) */

void __thiscall NewerPresentUI::GotRebateData(NewerPresentUI *this,S2C_ChristmasRebate *param_1)

{
  NewerPresentUI *pNVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  string *psVar5;
  ProfileMgr *this_00;
  wstring awStack_30 [8];
  string asStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (S2C_ChristmasRebate *)0x0) goto LAB_043b5278;
  iVar4 = PlantChipNameMapperServerID::GetInstance();
  pNVar1 = this + 0x110;
  NameMapperBase::GetNameForId(iVar4);
  FUN_05474278(pNVar1,asStack_10);
  std::string::~string(asStack_10);
  TodStringTranslate(L"[PRESENT_DES_1012]");
  psVar5 = (string *)RebateDateMgr::GetInstance();
  RebateDateMgr::GetItemName(psVar5,SUB81(pNVar1,0));
  TodReplaceString(awStack_18,L"{NAME}",(wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  FUN_05476c50(awStack_18);
  TodReplaceNumberString(awStack_30,L"{NUM}",*(int *)(param_1 + 0x18));
  FUN_054766c8(awStack_30,asStack_10);
  FUN_05476c50(asStack_10);
  thunk_FUN_05477b9c(this + 0xf8,awStack_30);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  psVar5 = (string *)ProfileMgr::GetCurrentProfile(this_00);
  Sexy::StrFormat("%d:%d",asStack_28,(ulong)*(uint *)(param_1 + 0x14),
                  (ulong)*(uint *)(param_1 + 0x18));
  puVar2 = gMessageRouter;
  FUN_05475d88(asStack_10,asStack_28);
  MessageRouter::Post<int,std::string_const&,int,std::string>
            ((MessageRouter *)puVar2,Message::ActiveNewYearFinish,2,asStack_10);
  std::string::~string(asStack_10);
  if (psVar5 != (string *)0x0) {
    PlayerInfo::AddPlantPieceCount(psVar5,(int)pNVar1,SUB41(*(undefined4 *)(param_1 + 0x18),0));
    if (0 < *(int *)(param_1 + 0x20)) {
      cVar3 = PlayerInfo::IsPlantAvatarUnLocked((PlayerInfo *)psVar5,pNVar1,0,0);
      if (cVar3 == '\0') {
        PlayerInfo::UnlockPlantAvatar((PlayerInfo *)psVar5,pNVar1);
        TodStringTranslate(L"[PRESENT_DES_APPEND_1012]");
        psVar5 = (string *)RebateDateMgr::GetInstance();
        RebateDateMgr::GetItemName(psVar5,SUB81(pNVar1,0));
        TodReplaceString(awStack_20,L"{NAME}",awStack_18);
        thunk_FUN_05477668(this + 0xf8,asStack_10);
        FUN_05476c50(asStack_10);
        FUN_05476c50(awStack_18);
        FUN_05476c50(awStack_20);
        goto LAB_043b5268;
      }
    }
    cVar3 = PlayerInfo::IsPlantAvatarUnLocked((PlayerInfo *)psVar5,pNVar1,0,0);
    if (cVar3 != '\0') {
      PlayerInfo::AddAvatarPiecesCount((PlayerInfo *)psVar5,pNVar1,0,0xf,0);
    }
  }
LAB_043b5268:
  std::string::~string(asStack_28);
  FUN_05476c50(awStack_30);
LAB_043b5278:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentUI::onPaySucess() */

void __thiscall NewerPresentUI::onPaySucess(NewerPresentUI *this)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar3;
  string *in_x4;
  string *psVar4;
  string asStack_40 [16];
  RtMixedPtrBase aRStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (*(int *)(this + 0x100) == -1) {
    iVar2 = LawnApp::GetPlatform(gLawnApp);
    if ((iVar2 == 0xb) || (iVar2 == 5)) {
      MessageRouter::Post<int,int,int,int>((MessageRouter *)gMessageRouter,Message::NewerBagPay,0,0)
      ;
      std::string::string(asStack_10,"torchwood");
      cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (cVar1 == '\0') {
        std::string::string(asStack_10,"torchwood");
        PlayerInfo::UnlockPlant(this_01,asStack_10,false);
        std::string::~string(asStack_10);
        nop();
        std::string::string(asStack_10,"torchwood");
        PlayerInfo::AddPlantStartLevel(this_01,asStack_10,0);
        std::string::~string(asStack_10);
        nop();
      }
      else {
        std::string::string(asStack_28,"iOS PvZ2 Plant Store");
        std::string::string(asStack_20,"Plant Pieces");
        std::string::string(asStack_18,"plant");
        std::string::string(asStack_10,"torchwood");
        Magento::FindStoreProduct((Magento *)asStack_28,asStack_20,asStack_18,asStack_10,in_x4);
        std::string::~string(asStack_10);
        nop();
        std::string::~string(asStack_18);
        nop();
        std::string::~string(asStack_20);
        nop();
        std::string::~string(asStack_28);
        nop();
        cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
        if (cVar1 != '\0') {
          std::string::string(asStack_10,"torchwood");
          lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          PlayerInfo::AddPlantPieceCount
                    ((string *)this_01,(int)asStack_10,SUB41(*(undefined4 *)(lVar3 + 0x90),0));
          std::string::~string(asStack_10);
          nop();
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    else {
      MessageRouter::Post<int,int,int,NewerPresentType>
                ((MessageRouter *)gMessageRouter,Message::NewerBagPay,2,0xffffffff);
      std::string::string(asStack_10,"repeater");
      cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (cVar1 == '\0') {
        std::string::string(asStack_10,"repeater");
        PlayerInfo::UnlockPlant(this_01,asStack_10,false);
        std::string::~string(asStack_10);
        nop();
        std::string::string(asStack_10,"repeater");
        PlayerInfo::AddPlantStartLevel(this_01,asStack_10,0);
        std::string::~string(asStack_10);
        nop();
      }
      else {
        std::string::string(asStack_28,"iOS PvZ2 Plant Store");
        std::string::string(asStack_20,"Plant Pieces");
        std::string::string(asStack_18,"plant");
        std::string::string(asStack_10,"repeater");
        Magento::FindStoreProduct((Magento *)asStack_28,asStack_20,asStack_18,asStack_10,in_x4);
        std::string::~string(asStack_10);
        nop();
        std::string::~string(asStack_18);
        nop();
        std::string::~string(asStack_20);
        nop();
        std::string::~string(asStack_28);
        nop();
        cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
        if (cVar1 != '\0') {
          std::string::string(asStack_10,"repeater");
          lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          PlayerInfo::AddPlantPieceCount
                    ((string *)this_01,(int)asStack_10,SUB41(*(undefined4 *)(lVar3 + 0x90),0));
          std::string::~string(asStack_10);
          nop();
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    PlayerInfo::AddGems(this_01,0x1e,true);
    PlayerInfo::AddCoins(this_01,10000);
    PlayerInfo::SetNewerPresent(this_01,true);
  }
  else if (*(int *)(this + 0x100) == -2) {
    MessageRouter::Post<int,int,int,NewerPresentType>
              ((MessageRouter *)gMessageRouter,Message::NewerBagPay,10);
    std::string::string(asStack_10,"snowpea");
    cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (cVar1 == '\0') {
      std::string::string(asStack_10,"snowpea");
      PlayerInfo::UnlockPlant(this_01,asStack_10,false);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"snowpea");
      PlayerInfo::AddPlantStartLevel(this_01,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
    else {
      std::string::string(asStack_28,"iOS PvZ2 Plant Store");
      psVar4 = asStack_40;
      std::string::string(asStack_20,"Plant Pieces");
      std::string::string(asStack_18,"plant");
      std::string::string(asStack_10,"snowpea");
      Magento::FindStoreProduct((Magento *)asStack_28,asStack_20,asStack_18,asStack_10,psVar4);
      std::string::~string(asStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      std::string::~string(asStack_20);
      nop();
      std::string::~string(asStack_28);
      nop();
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
      if (cVar1 != '\0') {
        std::string::string(asStack_10,"snowpea");
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        PlayerInfo::AddPlantPieceCount
                  ((string *)this_01,(int)asStack_10,SUB41(*(undefined4 *)(lVar3 + 0x90),0));
        std::string::~string(asStack_10);
        nop();
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    }
    PlayerInfo::AddGems(this_01,0x9b,true);
    PlayerInfo::AddCoins(this_01,50000);
    PlayerInfo::SetAdvanceNewerPresent(this_01,true);
  }
  LawnApp::KillNewerPresentUI(gLawnApp);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentUI::RebateAndroidRequestProcess(int) */

void __thiscall NewerPresentUI::RebateAndroidRequestProcess(NewerPresentUI *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector *pvVar2;
  int *piVar3;
  undefined8 local_60 [3];
  S2C_ChristmasRebate aSStack_48 [20];
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  S2C_ChristmasRebate::S2C_ChristmasRebate(aSStack_48);
  local_34 = param_1;
  local_2c = param_1;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  pvVar2 = (vector *)PlayerInfo::GetRebateRewardState(this_01);
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)local_60,pvVar2);
  piVar3 = (int *)FUN_043b2e80(local_60[0],0);
  if (*piVar3 == 1) {
    *piVar3 = 2;
    local_30 = local_30 + 10;
  }
  piVar3 = (int *)FUN_043b2e80(local_60[0],1);
  if (*piVar3 == 1) {
    *piVar3 = 2;
    local_30 = local_30 + 0x28;
    piVar3 = (int *)FUN_043b2e80(local_60[0],2);
    iVar1 = *piVar3;
  }
  else {
    piVar3 = (int *)FUN_043b2e80(local_60[0],2);
    iVar1 = *piVar3;
  }
  if (iVar1 == 1) {
    local_28 = 1;
    *piVar3 = 2;
    local_30 = local_30 + 0x28;
  }
  PlayerInfo::SetRebateRewardState(this_01,(vector *)local_60);
  std::vector<int,std::allocator<int>>::operator=(avStack_20,(vector *)local_60);
  GotRebateData(this,aSStack_48);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_60);
  S2C_ChristmasRebate::~S2C_ChristmasRebate(aSStack_48);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentUI::NewerPresentUI(int) */

void __thiscall NewerPresentUI::NewerPresentUI(NewerPresentUI *this,int param_1)

{
  NewerPresentUI *pNVar1;
  NewerPresentUI *pNVar2;
  ButtonListener *this_00;
  undefined *puVar3;
  LawnApp *pLVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  PVZDB *pPVar10;
  RtName *pRVar11;
  CompensatedAwardList *this_01;
  PVZ2UIButton *pPVar12;
  long lVar13;
  undefined8 uVar14;
  wchar_t *pwVar15;
  CompensatedAwardList *this_02;
  RebateDateMgr *pRVar16;
  NameMapperBase *this_03;
  MessageRouter *this_04;
  code *pcVar17;
  undefined1 auVar18 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 auStack_c8 [8];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  Delegate0 aDStack_a8 [48];
  RtId aRStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar1 = this + 0xf0;
  pNVar2 = this + 0xf8;
  this_00 = (ButtonListener *)(this + 0xd8);
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener(this_00);
  *(undefined ***)this = &PTR_GetClass_06842200;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06842528;
  Sexy::Insets::Insets((Insets *)(this + 0xe0));
  FUN_05476574(pNVar1);
  FUN_05476574(pNVar2);
  *(int *)(this + 0x100) = param_1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x108));
  Set8BytesTo0(this + 0x110);
  pLVar4 = gLawnApp;
  std::string::string((string *)&local_40,"UI_AwardDialog");
  LawnApp::LoadGroup(pLVar4,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pLVar4 = gLawnApp;
  std::string::string((string *)&local_40,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar4,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  puVar3 = gMessageRouter;
  iVar6 = *(int *)(this + 0x100);
  if (iVar6 == 0x25) {
    TodStringTranslate(L"[PRESENT_TITLE_37]");
    FUN_054766c8(pNVar1,(string *)&local_40);
    FUN_05476c50((string *)&local_40);
    pwVar15 = L"[PRESENT_DES_37]";
LAB_043b5e68:
    TodStringTranslate(pwVar15);
    FUN_054766c8(pNVar2,(string *)&local_40);
    FUN_05476c50((string *)&local_40);
  }
  else {
    if (iVar6 < 0x26) {
      if (iVar6 == 1) {
        TodStringTranslate(L"[NEWER_PRESENT_FIRSTRECHARGE_TITLE]");
        FUN_054766c8(pNVar1,(string *)&local_40);
        FUN_05476c50((string *)&local_40);
        pwVar15 = L"[NEWER_PRESENT_FIRSTRECHARGE_DES]";
      }
      else if (iVar6 < 2) {
        if (iVar6 == -2) {
          TodStringTranslate(L"[NEWER_PRESENT_ADVANCE_TITLE]");
          FUN_054766c8(pNVar1,(string *)&local_40);
          FUN_05476c50((string *)&local_40);
          pwVar15 = L"[NEWER_PRESENT_ADVANCE_DES]";
        }
        else {
          if (iVar6 != -1) goto LAB_043b5f54;
          TodStringTranslate(L"[NEWER_PRESENT_TITLE]");
          FUN_054766c8(pNVar1,(string *)&local_40);
          FUN_05476c50((string *)&local_40);
          iVar6 = LawnApp::GetPlatform(gLawnApp);
          if ((iVar6 == 0xb) || (iVar6 == 5)) {
            pwVar15 = L"[NEWER_PRESENT_FOR_CHINAMOBILEMM_DES]";
          }
          else {
            pwVar15 = L"[NEWER_PRESENT_DES]";
          }
        }
      }
      else if (iVar6 == 0x23) {
        TodStringTranslate(L"[PRESENT_TITLE_35]");
        FUN_054766c8(pNVar1,(string *)&local_40);
        FUN_05476c50((string *)&local_40);
        pwVar15 = L"[PRESENT_DES_35]";
      }
      else {
        if (iVar6 != 0x24) goto LAB_043b5f54;
        TodStringTranslate(L"[PRESENT_TITLE_36]");
        FUN_054766c8(pNVar1,(string *)&local_40);
        FUN_05476c50((string *)&local_40);
        pwVar15 = L"[PRESENT_DES_36]";
      }
      goto LAB_043b5e68;
    }
    if (iVar6 < 0x3f4) {
      if (iVar6 < 0x3ef) {
        if (999 < iVar6) {
          pPVar10 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
          pRVar11 = (RtName *)PVZDB::GetTable(pPVar10,0x65);
          Sexy::RtName::RtName((RtName *)&local_40,L"CompensatedAwardList");
          Sexy::RtDbTable::GetIdForAlias(pRVar11);
          Sexy::RtDbTable::GetObjectForId((RtDbTable *)pRVar11,aRStack_78);
          nop();
          Sexy::RtId::~RtId(aRStack_78);
          Sexy::RtName::~RtName((RtName *)&local_40);
          auVar18 = CompensatedAwardList::GetItem(this_01,*(int *)(this + 0x100));
          Sexy::StringToWString((Sexy *)(auVar18._0_8_ + 0x28),auVar18._8_8_);
          TodStringTranslate((wstring *)&local_40);
          FUN_054766c8(pNVar1,aRStack_78);
          FUN_05476c50(aRStack_78);
          FUN_05476c50((string *)&local_40);
          GetPlantPieceImage((int)this);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)(this + 0x108),(RtWeakPtr *)&local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        }
      }
      else {
        pPVar10 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
        pRVar11 = (RtName *)PVZDB::GetTable(pPVar10,0x65);
        Sexy::RtName::RtName((RtName *)&local_40,L"CompensatedAwardList");
        Sexy::RtDbTable::GetIdForAlias(pRVar11);
        Sexy::RtDbTable::GetObjectForId((RtDbTable *)pRVar11,aRStack_78);
        nop();
        Sexy::RtId::~RtId(aRStack_78);
        Sexy::RtName::~RtName((RtName *)&local_40);
        auVar18 = CompensatedAwardList::GetItem(this_02,*(int *)(this + 0x100));
        Sexy::StringToWString((Sexy *)(auVar18._0_8_ + 0x28),auVar18._8_8_);
        TodStringTranslate((wstring *)&local_40);
        FUN_054766c8(pNVar1,aRStack_78);
        FUN_05476c50(aRStack_78);
        FUN_05476c50((string *)&local_40);
      }
    }
    else if (iVar6 == 0x3f4) {
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,GotRebateData);
      local_f0 = local_c0;
      uStack_e8 = uStack_b8;
      local_e0 = local_b0;
      MessageRouter::
      Subscribe<S2C_ChristmasRebate*,Sexy::CBMemberTranslatorX<NewerPresentUI,void(NewerPresentUI::*)(S2C_ChristmasRebate*)>>
                ((MessageRouter *)puVar3,Message::GotChristmasRebate,&local_f0);
      TodStringTranslate(L"[PRESENT_TITLE_1012]");
      FUN_054766c8(pNVar1,(string *)&local_40);
      FUN_05476c50((string *)&local_40);
      FUN_05476f98(pNVar2);
      pRVar16 = (RebateDateMgr *)RebateDateMgr::GetInstance();
      RebateDateMgr::GetMaxWorldName(pRVar16);
      cVar5 = FUN_0547419c(aRStack_78);
      if (cVar5 == '\0') {
        pRVar16 = (RebateDateMgr *)RebateDateMgr::GetInstance();
        RebateDateMgr::GetPLantIDWithWorldName(pRVar16,(string *)aRStack_78);
        iVar6 = PlantNameMapperServerID::GetInstance();
        NameMapperBase::GetNameForId(iVar6);
        this_03 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
        iVar6 = NameMapperBase::GetIdForName(this_03,(string *)&local_40);
        RebateAndroidRequestProcess(this,iVar6);
        std::string::~string((string *)&local_40);
        std::string::~string((string *)aRStack_78);
      }
      else {
        std::string::~string((string *)aRStack_78);
      }
    }
  }
LAB_043b5f54:
  Sexy::Widget::Resize((Widget *)this,0,0,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
  iVar6 = FUN_043b2f64(0x208);
  iVar7 = FUN_043b2f64(100);
  iVar8 = FUN_043b2f64(0x1c2);
  Sexy::Insets::Insets((Insets *)&local_40,(*(int *)(this + 0x50) - iVar6) / 2,iVar7,iVar6,iVar8);
  iVar6 = *(int *)(this + 0x100);
  *(undefined8 *)(this + 0xe0) = local_40;
  *(undefined8 *)(this + 0xe8) = uStack_38;
  if (iVar6 - 1000U < 0xc) {
    iVar7 = FUN_043b2f64(0x8c);
    *(int *)(this + 0xec) = *(int *)(this + 0xec) - iVar7;
  }
  if (iVar6 + 2U < 2) {
    FUN_05478178(aRStack_78,L"[NEWER_PRESENT_QUIT]",auStack_c8);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar12 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar12,0,this_00,(wstring *)aRStack_78,(Color *)&local_40);
    FUN_05476c50(aRStack_78);
    nop();
    pcVar17 = *(code **)(*(long *)pPVar12 + 0x198);
    iVar7 = FUN_043b2f64(0x82);
    iVar8 = FUN_043b2f64(0x55);
    iVar6 = *(int *)(this + 0x50);
    uVar9 = FUN_043b2f64(0x208);
    lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b029a0);
    (*pcVar17)(pPVar12,(iVar6 - iVar7) / 2 - iVar8,uVar9,iVar7,*(undefined4 *)(lVar13 + 0x3c));
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_78,&DAT_06b029a0,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b02570,3);
    PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)aRStack_78,(PVZ2UIImage *)&local_40);
    pcVar17 = *(code **)(*(long *)pPVar12 + 800);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
    (*pcVar17)(pPVar12,uVar14);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)pPVar12);
    FUN_05478178(aRStack_78,L"[NEWER_PRESENT_BUY]",auStack_c8);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar12 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar12,1,this_00,(wstring *)aRStack_78,(Color *)&local_40);
    FUN_05476c50(aRStack_78);
    nop();
    pcVar17 = *(code **)(*(long *)pPVar12 + 0x198);
    iVar7 = FUN_043b2f64(0x82);
    iVar8 = FUN_043b2f64(0x55);
    iVar6 = *(int *)(this + 0x50);
    uVar9 = FUN_043b2f64(0x208);
    lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b029a0);
    (*pcVar17)(pPVar12,iVar8 + (iVar6 - iVar7) / 2,uVar9,iVar7,*(undefined4 *)(lVar13 + 0x3c));
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_78,&DAT_06b02d50,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b02620,3);
    PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)aRStack_78,(PVZ2UIImage *)&local_40);
    pcVar17 = *(code **)(*(long *)pPVar12 + 800);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
    (*pcVar17)(pPVar12,uVar14);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)pPVar12);
    this_04 = (MessageRouter *)gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPaySucess);
  }
  else {
    if (iVar6 != 1) {
      uVar9 = 0x208;
      if (iVar6 - 1000U < 0xc) {
        uVar9 = 0x16d;
      }
      FUN_05478178(aRStack_78,L"[BUTTON_TEXT_OF_ACCEPT]",auStack_c8);
      Sexy::Color::Color((Color *)&local_40,1);
      pPVar12 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton(pPVar12,0,this_00,(wstring *)aRStack_78,(Color *)&local_40);
      FUN_05476c50(aRStack_78);
      nop();
      pcVar17 = *(code **)(*(long *)pPVar12 + 0x198);
      iVar7 = FUN_043b2f64(0x82);
      iVar6 = *(int *)(this + 0x50);
      uVar9 = FUN_043b2f64(uVar9);
      lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b029a0);
      (*pcVar17)(pPVar12,(iVar6 - iVar7) / 2,uVar9,iVar7,*(undefined4 *)(lVar13 + 0x3c));
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_78,&DAT_06b029a0,3);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b02570,3);
      PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)aRStack_78,(PVZ2UIImage *)&local_40);
      pcVar17 = *(code **)(*(long *)pPVar12 + 800);
      uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
      (*pcVar17)(pPVar12,uVar14);
      Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)pPVar12);
      goto LAB_043b612c;
    }
    FUN_05478178(aRStack_78,&DAT_056f11a8,auStack_c8);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar12 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar12,0,this_00,(wstring *)aRStack_78,(Color *)&local_40);
    FUN_05476c50(aRStack_78);
    nop();
    pcVar17 = *(code **)(*(long *)pPVar12 + 0x198);
    iVar7 = FUN_043b2f64(0x82);
    iVar6 = *(int *)(this + 0x50);
    iVar8 = FUN_043b2f64(0x5f);
    uVar9 = FUN_043b2f64(0x46);
    lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b02760);
    (*pcVar17)(pPVar12,iVar7 + iVar6 / 2 + iVar8,uVar9,iVar7,*(undefined4 *)(lVar13 + 0x3c));
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_78,&DAT_06b02760,1);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b02c28,1);
    PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)aRStack_78,(PVZ2UIImage *)&local_40);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)pPVar12);
    FUN_05478178(aRStack_78,L"[NEWER_PRESENT_BUY]",auStack_c8);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar12 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar12,2,this_00,(wstring *)aRStack_78,(Color *)&local_40);
    FUN_05476c50(aRStack_78);
    nop();
    pcVar17 = *(code **)(*(long *)pPVar12 + 0x198);
    iVar7 = FUN_043b2f64(0x82);
    iVar6 = *(int *)(this + 0x50);
    uVar9 = FUN_043b2f64(0x208);
    lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b029a0);
    (*pcVar17)(pPVar12,(iVar6 - iVar7) / 2,uVar9,iVar7,*(undefined4 *)(lVar13 + 0x3c));
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_78,&DAT_06b02d50,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b02620,3);
    PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)aRStack_78,(PVZ2UIImage *)&local_40);
    pcVar17 = *(code **)(*(long *)pPVar12 + 800);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
    (*pcVar17)(pPVar12,uVar14);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)pPVar12);
    this_04 = (MessageRouter *)gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPaySucess);
  }
  Sexy::Delegate0::Delegate0<NewerPresentUI,void(NewerPresentUI::*)()>
            (aDStack_a8,(string *)&local_40);
  MessageRouter::Subscribe(this_04,Message::BuyNewerPresent,aDStack_a8);
LAB_043b612c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

