// Class: FestivalShopContent


/* FestivalShopContent::~FestivalShopContent() */

void __thiscall FestivalShopContent::~FestivalShopContent(FestivalShopContent *this)

{
  *(undefined ***)this = &PTR_GetClass_0671dcb0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0671dfd8;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* FestivalShopContent::~FestivalShopContent() */

void __thiscall FestivalShopContent::~FestivalShopContent(FestivalShopContent *this)

{
  ~FestivalShopContent(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalShopContent::RefreshContentData(FShopContentData const&) */

void FestivalShopContent::RefreshContentData(FShopContentData *param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_10);
  local_10 = *(undefined4 *)(param_1 + 0xe0);
  local_c = *(undefined4 *)(param_1 + 0xe4);
  if (*(long *)(param_1 + 0x110) != 0) {
    FUN_03ac12e4(*(long *)(param_1 + 0x110) + 0xd4,(FlagsMod *)&local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalShopContent::onMaterialChanged() */

void __thiscall FestivalShopContent::onMaterialChanged(FestivalShopContent *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long *plVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    std::string::string(asStack_10,"mat_festival_currency");
    iVar1 = PlayerInfo::GetMaterialNum(this_01,asStack_10);
    std::string::~string(asStack_10);
    nop();
    plVar2 = *(long **)(this + 0xf8);
    if (iVar1 < *(int *)(this + 0xe8)) {
      (**(code **)(*plVar2 + 0x188))(plVar2,1);
    }
    else {
      (**(code **)(*plVar2 + 0x188))(plVar2,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalShopContent::ButtonDepress(int) */

void __thiscall FestivalShopContent::ButtonDepress(FestivalShopContent *this,int param_1)

{
  int iVar1;
  LawnApp *pLVar2;
  int iVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  PVZ2UIDialog *pPVar5;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 5) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if (this_01 != (PlayerInfo *)0x0) {
      iVar3 = PlayerInfo::GetFestivalShopItemBuyTimes(this_01,*(int *)(this + 0xe4));
      std::string::string(asStack_50,"mat_festival_currency");
      iVar4 = PlayerInfo::GetMaterialNum(this_01,asStack_50);
      std::string::~string(asStack_50);
      nop();
      pLVar2 = gLawnApp;
      iVar1 = *(int *)(this + 0xe8);
      if (iVar4 < iVar1) {
        FUN_05478178(awStack_58,L"[NATIONAL_SHOP_BUY_FAILED_TITLE]",auStack_68);
        FUN_05478178(asStack_50,L"[NATIONAL_SHOP_BUY_FAILED_TEXT]",auStack_60);
        pPVar5 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar2,awStack_58,(wstring *)asStack_50);
        FUN_05476c50(asStack_50);
        nop();
        FUN_05476c50(awStack_58);
        nop();
        FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,asStack_50);
        PVZ2UIDialog::AddButton(pPVar5,awStack_58,aDStack_38,0);
        FUN_05476c50(awStack_58);
        nop();
      }
      else {
        PlayerInfo::SetFestivalShopItemBuyTimes(this_01,*(int *)(this + 0xe4),iVar3 + -1);
        std::string::string(asStack_50,"mat_festival_currency");
        PlayerInfo::SetMaterialNum(this_01,asStack_50,iVar4 - iVar1);
        std::string::~string(asStack_50);
        nop();
        PlayerInfo::AddCommonGachaReward
                  ((int)this_01,*(int *)(this + 0xe4),SUB41(*(undefined4 *)(this + 0xe0),0),true);
        PlayerInfo::saveCurrentProfile(this_01);
        pLVar2 = gLawnApp;
        FUN_05478178(awStack_58,L"[NATIONAL_SHOP_BUY_SUCCESS_TITLE]",auStack_68);
        FUN_05478178(asStack_50,L"[NATIONAL_SHOP_BUY_SUCCESS_TEXT]",auStack_60);
        pPVar5 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar2,awStack_58,(wstring *)asStack_50);
        FUN_05476c50(asStack_50);
        nop();
        FUN_05476c50(awStack_58);
        nop();
        FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,asStack_50);
        PVZ2UIDialog::AddButton(pPVar5,awStack_58,aDStack_38,0);
        FUN_05476c50(awStack_58);
        nop();
        if (iVar3 + -1 == 0) {
          (**(code **)(**(long **)(this + 0xf8) + 0x158))(*(long **)(this + 0xf8),0);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to FestivalShopContent::ButtonDepress(int) */

void __thiscall FestivalShopContent::ButtonDepress(FestivalShopContent *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalShopContent::FestivalShopContent(FShopContentData&, FestivalShopPanel*) */

void __thiscall
FestivalShopContent::FestivalShopContent
          (FestivalShopContent *this,FShopContentData *param_1,FestivalShopPanel *param_2)

{
  undefined8 uVar1;
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xe0) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xe8) = uVar1;
  *(FestivalShopPanel **)(this + 0xf0) = param_2;
  *(undefined ***)this = &PTR_GetClass_0671dcb0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0671dfd8;
  Sexy::Insets::Insets((Insets *)(this + 0x100));
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMaterialChanged);
  Sexy::Delegate0::Delegate0<FestivalShopContent,void(FestivalShopContent::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::MaterialChanged,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalShopContent::InitView() */

void __thiscall FestivalShopContent::InitView(FestivalShopContent *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LotteryResultProgressBar *pLVar8;
  SalesProgressBar *pSVar9;
  FShopItemContent *this_00;
  PVZ2UIButton *pPVar10;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  code *pcVar11;
  undefined1 auStack_88 [8];
  undefined4 local_80;
  undefined4 local_7c;
  wstring awStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_80);
  local_80 = *(undefined4 *)(this + 0xe0);
  local_7c = *(undefined4 *)(this + 0xe4);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
  LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar7 = *(int *)(this + 0x54);
  iVar5 = *(int *)(this + 0x4c);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
  iVar1 = SalesProgressBar::GetCurrentLevel(pSVar9);
  uVar2 = FUN_03ac4800(0x32);
  iVar6 = *(int *)(this + 0x54);
  *(undefined4 *)(this + 0x100) = uVar2;
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar9);
  *(int *)(this + 0x104) = (iVar6 - iVar3) / 2;
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7f48);
  uVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  *(undefined4 *)(this + 0x108) = uVar2;
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
  uVar2 = SalesProgressBar::GetCurrentLevel(pSVar9);
  *(undefined4 *)(this + 0x10c) = uVar2;
  this_00 = ::operator_new(0xe0);
  FShopItemContent::FShopItemContent(this_00,(FShopItemData *)&local_80);
  iVar6 = *(int *)(this + 0x100);
  iVar3 = *(int *)(this + 0x108);
  pcVar11 = *(code **)(*(long *)this_00 + 0x198);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
  uVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
  uVar4 = SalesProgressBar::GetCurrentLevel(pSVar9);
  (*pcVar11)(this_00,iVar6 + iVar3,iVar5 + (iVar7 - iVar1) / 2,uVar2,uVar4);
  (**(code **)(**(long **)(this + 0xf0) + 0x60))(*(long **)(this + 0xf0),this_00);
  *(FShopItemContent **)(this + 0x110) = this_00;
  FUN_05478178(awStack_78,L"[NATIONAL_SHOP_BUY]",auStack_88);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar10,5,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0xf8) = pPVar10;
  FUN_05476c50(awStack_78);
  nop();
  pPVar10 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ac8290,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06ac8bc0,3);
  PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  iVar5 = FUN_03ac4800(0x41);
  iVar7 = *(int *)(this + 0x50);
  iVar6 = FUN_03ac4800(0xa0);
  iVar3 = FUN_03ac4800(0x37);
  (**(code **)(**(long **)(this + 0xf8) + 0x198))
            (*(long **)(this + 0xf8),(iVar7 - iVar5) - iVar6,(*(int *)(this + 0x54) - iVar3) / 2,
             iVar6,iVar3);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  if (this_02 != (PlayerInfo *)0x0) {
    PlayerInfo::RefreshFestivalShopItemIfNeed
              (this_02,CONCAT44(*(undefined4 *)(this + 0xec),*(undefined4 *)(this + 0xe4)));
    iVar7 = PlayerInfo::GetFestivalShopItemBuyTimes(this_02,*(int *)(this + 0xe4));
    if (iVar7 == 0) {
      (**(code **)(**(long **)(this + 0xf8) + 0x158))(*(long **)(this + 0xf8),0);
    }
    std::string::string(asStack_40,"mat_festival_currency");
    iVar7 = PlayerInfo::GetMaterialNum(this_02,asStack_40);
    std::string::~string(asStack_40);
    nop();
    if (iVar7 < *(int *)(this + 0xe8)) {
      (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalShopContent::Draw(Sexy::Graphics*) */

void __thiscall FestivalShopContent::Draw(FestivalShopContent *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  LotteryResultProgressBar *pLVar10;
  Image *pIVar11;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ulong uVar12;
  SalesProgressBar *this_02;
  long lVar13;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03ac4800(5);
  iVar7 = *(int *)(this + 0x54);
  iVar2 = FUN_03ac4800(0x23);
  Sexy::Insets::Insets(aIStack_18,iVar1,0,*(int *)(this + 0x50) - iVar2,iVar7);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8758);
  Draw9SliceImage(param_1,aIStack_18,uVar9);
  iVar3 = FUN_03ac4800(0x19);
  iVar2 = *(int *)(this + 0x108);
  iVar8 = *(int *)(this + 0x100);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac80f0);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  iVar5 = FUN_03ac4800(0x19);
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7f48);
  Sexy::Graphics::DrawImage
            (param_1,pIVar11,*(int *)(this + 0x100),*(int *)(this + 0x104),*(int *)(this + 0x108),
             *(int *)(this + 0x10c));
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac83a8);
  iVar6 = FUN_03ac4800(0x19);
  Sexy::Graphics::DrawImage
            (param_1,pIVar11,iVar8 + ((iVar2 + iVar4) - iVar5) / 2,
             iVar1 + ((iVar7 + iVar1 * -2) - iVar3) / 2,iVar6,iVar6);
  iVar1 = FUN_03ac4800(0xa0);
  iVar3 = FUN_03ac4800(0x3c);
  iVar4 = FUN_03ac4800(0);
  iVar7 = *(int *)(this + 0x104);
  iVar2 = *(int *)(this + 0x100);
  iVar8 = *(int *)(this + 0x10c);
  iVar5 = FUN_03ac4800(0x16);
  Sexy::Insets::Insets((Insets *)&local_28,iVar4 + iVar2,(iVar7 + iVar8) - iVar5,iVar1,iVar3);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 == (PlayerInfo *)0x0) {
    uVar12 = 0;
  }
  else {
    std::string::string((string *)aIStack_18,"mat_festival_currency");
    uVar12 = PlayerInfo::GetMaterialNum(this_01,(string *)aIStack_18);
    uVar12 = uVar12 & 0xffffffff;
    std::string::~string((string *)aIStack_18);
    nop();
  }
  Sexy::StrFormat(L"%d/%d",auStack_38,uVar12,(ulong)*(uint *)(this + 0xe8));
  uVar9 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
  iVar7 = FUN_03ac4800(0x41);
  FUN_05477b24(auStack_30,auStack_38);
  Sexy::Color::Color((Color *)aIStack_18,1);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)local_28,(float)local_24,(float)iVar7,uVar9,param_1,auStack_30,
             2,aIStack_18,0);
  FUN_05476c50(auStack_30);
  if (*(char *)(*(long *)(this + 0xf8) + 0x6c) == '\0') {
    iVar8 = FUN_03ac4800(0xa0);
    pLVar10 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8ae0);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
    this_02 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8ae0);
    SalesProgressBar::GetCurrentLevel(this_02);
    lVar13 = *(long *)(this + 0xf8);
    iVar7 = *(int *)(lVar13 + 0x48);
    iVar3 = FUN_03ac4800(10);
    iVar2 = *(int *)(lVar13 + 0x4c);
    pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8ae0);
    Sexy::Graphics::DrawImage(param_1,pIVar11,iVar7 + (iVar8 - iVar1) / 2,iVar3 + iVar2);
  }
  FUN_05476c50(auStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

