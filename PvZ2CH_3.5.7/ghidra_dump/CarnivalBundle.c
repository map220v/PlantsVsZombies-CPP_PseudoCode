// Class: CarnivalBundle


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarnivalBundle::Update() */

void __thiscall CarnivalBundle::Update(CarnivalBundle *this)

{
  long lVar1;
  long lVar2;
  TimeUtil aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  lVar2 = *(long *)(this + 0x168);
  lVar1 = LawnApp::GetRealServerTime(gLawnApp);
  TimeUtil::GetTimeCountdownFormat(aTStack_10,(float)(lVar2 - lVar1),0);
  FUN_054766c8(this + 0x160,aTStack_10);
  FUN_05476c50(aTStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CarnivalBundle::IsLimitBundle() */

bool __thiscall CarnivalBundle::IsLimitBundle(CarnivalBundle *this)

{
  return *(int *)(this + 0xe4) - 1U < 2;
}


/* CarnivalBundle::IsDailyBundle() */

bool __thiscall CarnivalBundle::IsDailyBundle(CarnivalBundle *this)

{
  return *(int *)(this + 0xe4) == 0;
}


/* CarnivalBundle::IsPreviewBundle() */

bool __thiscall CarnivalBundle::IsPreviewBundle(CarnivalBundle *this)

{
  return *(int *)(this + 0xe4) == 3;
}


/* CarnivalBundle::ConfirmBuy(UIMessageBox*, int) */

void __thiscall CarnivalBundle::ConfirmBuy(CarnivalBundle *this,UIMessageBox *param_1,int param_2)

{
  NetworkMgr *this_00;
  long *plVar1;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
  (**(code **)(*plVar1 + 0x1f0))(plVar1,*(undefined4 *)(this + 0xe4),*(undefined4 *)(this + 0xec));
  return;
}


/* CarnivalBundle::OnBuyCarnivalBundle(int, int) */

void __thiscall CarnivalBundle::OnBuyCarnivalBundle(CarnivalBundle *this,int param_1,int param_2)

{
  char cVar1;
  UICarnival *pUVar2;
  
  if ((*(int *)(this + 0xe4) == param_1) && (*(int *)(this + 0xec) == param_2)) {
    *(int *)(this + 0xf4) = *(int *)(this + 0xf4) + -1;
    cVar1 = IsLimitBundle(this);
    if (cVar1 != '\0') {
      *(int *)(this + 0xfc) = *(int *)(this + 0xfc) + -1;
    }
    pUVar2 = (UICarnival *)UISingletonDialog<UICarnival>::GetSingletonPtr();
    UICarnival::OnBuyBundle(pUVar2);
    pUVar2 = (UICarnival *)UISingletonDialog<UICarnival>::GetSingletonPtr();
    UICarnival::Refresh(pUVar2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarnivalBundle::TouchEnded(Sexy::Touch const&) */

void __thiscall CarnivalBundle::TouchEnded(CarnivalBundle *this,Touch *param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIMessageBox *pUVar3;
  Image *pIVar4;
  long lVar5;
  wchar_t *pwVar6;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsPreviewBundle(this);
  if ((cVar1 != '\0') || (*(int *)(this + 0xe0) != (int)*(undefined8 *)param_1)) goto LAB_039ad9f0;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_50,"mat_carnival_ticket");
  iVar2 = PlayerInfo::GetMaterialNum(this_01,asStack_50);
  std::string::~string(asStack_50);
  nop();
  if (iVar2 < *(int *)(this + 0xf8)) {
    pUVar3 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar3 == (UIMessageBox *)0x0) goto LAB_039ad9f0;
    UIMessageBox::SetShowType(pUVar3,4);
    TodStringTranslate(L"[REVIVE_TIP]");
    pwVar6 = L"[MATERIAL_NOT_ENOUGH]";
  }
  else {
    cVar1 = IsLimitBundle(this);
    if ((cVar1 == '\0') ||
       (lVar5 = LawnApp::GetRealServerTime(gLawnApp), lVar5 <= *(long *)(this + 0x168))) {
      cVar1 = IsLimitBundle(this);
      if ((cVar1 == '\0') || (0 < *(int *)(this + 0xfc))) {
        if (0 < *(int *)(this + 0xf4)) {
          pUVar3 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
          if (pUVar3 != (UIMessageBox *)0x0) {
            UIMessageBox::SetShowType(pUVar3,6);
            TodStringTranslate(L"[REVIVE_TIP]");
            TodStringTranslate(L"[BATTLE_ORDER_SELECT_CONFIRM]");
            TodStringTranslate(L"[BUTTON_OK]");
            UIMessageBox::SetMessage(pUVar3,awStack_60,awStack_68);
            std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
            pIVar4 = (Image *)StringHelper::ToImage(asStack_50,false);
            UIMessageBox::SetBackground(pUVar3,pIVar4);
            std::string::~string(asStack_50);
            nop();
            lVar5 = UIMessageBox::GetButtonOK(pUVar3);
            thunk_FUN_05477b9c(lVar5 + 0xd8,auStack_58);
            Sexy::
            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                      ((ReceivedDataCallback *)this,ConfirmBuy);
            Sexy::Delegate2<UIMessageBox*,int>::
            Delegate2<CarnivalBundle,void(CarnivalBundle::*)(UIMessageBox*,int)>
                      (aDStack_38,asStack_50);
            UIMessageBox::SetCallback(pUVar3,aDStack_38);
            FUN_05476c50(auStack_58);
            FUN_05476c50(awStack_60);
            FUN_05476c50(awStack_68);
          }
          goto LAB_039ad9f0;
        }
        pUVar3 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (pUVar3 == (UIMessageBox *)0x0) goto LAB_039ad9f0;
        UIMessageBox::SetShowType(pUVar3,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        pwVar6 = L"[SHOP_SOLD_OUT]";
      }
      else {
        pUVar3 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (pUVar3 == (UIMessageBox *)0x0) goto LAB_039ad9f0;
        UIMessageBox::SetShowType(pUVar3,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        pwVar6 = L"[ITEM_SOLD_OUT]";
      }
      TodStringTranslate(pwVar6);
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(pUVar3,awStack_60,awStack_68);
      std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar4 = (Image *)StringHelper::ToImage(asStack_50,false);
      UIMessageBox::SetBackground(pUVar3,pIVar4);
      std::string::~string(asStack_50);
      nop();
      lVar5 = UIMessageBox::GetButtonCancel(pUVar3);
      thunk_FUN_05477b9c(lVar5 + 0xd8,auStack_58);
      FUN_05476c50(auStack_58);
      FUN_05476c50(awStack_60);
      FUN_05476c50(awStack_68);
      goto LAB_039ad9f0;
    }
    pUVar3 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar3 == (UIMessageBox *)0x0) goto LAB_039ad9f0;
    UIMessageBox::SetShowType(pUVar3,4);
    TodStringTranslate(L"[REVIVE_TIP]");
    pwVar6 = L"[BUNDLE_OUT_OF_TIME]";
  }
  TodStringTranslate(pwVar6);
  TodStringTranslate(L"[BUTTON_OK]");
  UIMessageBox::SetMessage(pUVar3,awStack_60,awStack_68);
  std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
  pIVar4 = (Image *)StringHelper::ToImage(asStack_50,false);
  UIMessageBox::SetBackground(pUVar3,pIVar4);
  std::string::~string(asStack_50);
  nop();
  lVar5 = UIMessageBox::GetButtonCancel(pUVar3);
  thunk_FUN_05477b9c(lVar5 + 0xd8,auStack_58);
  FUN_05476c50(auStack_58);
  FUN_05476c50(awStack_60);
  FUN_05476c50(awStack_68);
LAB_039ad9f0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CarnivalBundle::CarnivalBundle() */

void __thiscall CarnivalBundle::CarnivalBundle(CarnivalBundle *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066e65e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066e6908;
  CarnivalBundleData::CarnivalBundleData((CarnivalBundleData *)(this + 0xe8));
  FUN_05476574(this + 0x158);
  FUN_05476574(this + 0x160);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyCarnivalBundle);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<CarnivalBundle,void(CarnivalBundle::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::OnBuyCarnivalBundle,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarnivalBundle::Draw(Sexy::Graphics*) */

void __thiscall CarnivalBundle::Draw(CarnivalBundle *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 auStack_40 [8];
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xe4) == 0) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abfb28);
    Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    iVar1 = *(int *)(this + 0xe8);
    if (iVar1 != 0) goto LAB_039af248;
LAB_039af3d8:
    iVar1 = FUN_039ac220(5);
    iVar2 = FUN_039ac220(0xb1);
    iVar3 = FUN_039ac220(0x1e);
    Sexy::Insets::Insets(aIStack_28,0,iVar1,iVar2,iVar3);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x158,aIStack_28,uVar6,aCStack_18,5,1);
    TodStringTranslate(L"[DAILY_BUNDLE_OFFER]");
    iVar1 = FUN_039ac220(0x1e);
    iVar2 = FUN_039ac220(0xb1);
    Sexy::Insets::Insets(aIStack_28,0,iVar1,iVar2,iVar1);
LAB_039af320:
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
  }
  else {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf670);
    Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    iVar1 = *(int *)(this + 0xe8);
    if (iVar1 == 0) goto LAB_039af3d8;
LAB_039af248:
    if (iVar1 != 2) {
      iVar1 = FUN_039ac220(5);
      iVar2 = FUN_039ac220(0xb1);
      iVar3 = FUN_039ac220(0x1e);
      Sexy::Insets::Insets(aIStack_28,0,iVar1,iVar2,iVar3);
      uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
      Sexy::Color::Color(aCStack_18,1);
      WriteWordInRect(param_1,this + 0x158,aIStack_28,uVar6,aCStack_18,5,1);
      TodStringTranslate(L"[LIMITED_BUNDLE_OFFER]");
      iVar1 = FUN_039ac220(0x1e);
      iVar2 = FUN_039ac220(0xb1);
      Sexy::Insets::Insets(aIStack_28,0,iVar1,iVar2,iVar1);
      goto LAB_039af320;
    }
    TodStringTranslate(L"[GET_RANDOM_BUNDLE_OFFER]");
    iVar1 = FUN_039ac220(5);
    iVar2 = FUN_039ac220(0xb1);
    iVar3 = FUN_039ac220(0x3c);
    Sexy::Insets::Insets(aIStack_28,0,iVar1,iVar2,iVar3);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf9d0);
    iVar1 = FUN_039ac220(0x23);
    iVar2 = FUN_039ac220(0x4b);
    iVar3 = FUN_039ac220(100);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar3);
  }
  uVar7 = *(uint *)(this + 0xe4);
  if (uVar7 == 0) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf488);
    iVar1 = FUN_039ac220(0x32);
    Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,iVar1,iVar1);
  }
  else {
    if (1 < uVar7 - 1) goto joined_r0x039af9ac;
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf4e8);
    iVar1 = FUN_039ac220(0x32);
    Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,iVar1,iVar1);
  }
  uVar7 = *(uint *)(this + 0xe4);
  if (uVar7 - 1 < 2) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf510);
    iVar1 = FUN_039ac220(5);
    iVar2 = FUN_039ac220(0x3a);
    iVar3 = FUN_039ac220(0xa5);
    iVar4 = FUN_039ac220(0x14);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
    TodStringTranslate(L"[FLASH_SALE_LIMITED]");
    iVar1 = FUN_039ac220(0xf);
    iVar2 = FUN_039ac220(0x3d);
    iVar3 = FUN_039ac220(0x3c);
    iVar4 = FUN_039ac220(0x14);
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aCStack_18,0,1);
    FUN_05476c50(auStack_30);
    iVar1 = FUN_039ac220(0x5a);
    iVar2 = FUN_039ac220(0x3d);
    iVar3 = FUN_039ac220(0x46);
    iVar4 = FUN_039ac220(0x14);
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x160,aIStack_28,uVar6,aCStack_18,0,1);
    FUN_05478178(awStack_38,L"[SERVER_LIMIT]",auStack_40);
    TodReplaceNumberString(awStack_38,L"{NUM}",*(int *)(this + 0xfc));
    iVar1 = FUN_039ac220(0);
    iVar2 = FUN_039ac220(0xcf);
    iVar3 = FUN_039ac220(0xb1);
    iVar4 = FUN_039ac220(0x14);
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
    Sexy::Color::Color(aCStack_18,0);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
    FUN_05476c50(awStack_38);
    nop();
    uVar7 = *(uint *)(this + 0xe4);
  }
  if (uVar7 < 3) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abfb78);
    iVar1 = FUN_039ac220(0x1e);
    iVar2 = FUN_039ac220(0xe4);
    iVar3 = FUN_039ac220(0x78);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar1);
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf638);
    iVar1 = FUN_039ac220(0x28);
    iVar2 = FUN_039ac220(0xe4);
    iVar3 = FUN_039ac220(0x1e);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar3);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xf8));
    Sexy::ToWString((string *)awStack_38);
    iVar1 = FUN_039ac220(0x50);
    iVar2 = FUN_039ac220(0xe4);
    iVar3 = FUN_039ac220(100);
    iVar4 = FUN_039ac220(0x1e);
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aCStack_18,3,1);
    FUN_05476c50(auStack_30);
    std::string::~string((string *)awStack_38);
    FUN_05478178((string *)awStack_38,L"[MONTHLY_CARD_BUY_TIMES]",auStack_40);
    TodReplaceNumberString(awStack_38,L"{NUM}",*(int *)(this + 0xf4));
    iVar1 = FUN_039ac220(0);
    iVar2 = FUN_039ac220(0x104);
    iVar3 = FUN_039ac220(0xb1);
    iVar4 = FUN_039ac220(0x14);
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
    Sexy::Color::Color(aCStack_18,0);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
    FUN_05476c50((string *)awStack_38);
    nop();
    uVar7 = *(uint *)(this + 0xe4);
  }
joined_r0x039af9ac:
  if (uVar7 == 3) {
    TodStringTranslate(L"[START_SALE_TIME]");
    iVar1 = FUN_039ac220(0);
    iVar2 = FUN_039ac220(0xe6);
    iVar3 = FUN_039ac220(0xb4);
    iVar4 = FUN_039ac220(0x14);
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
    Sexy::Color::Color(aCStack_18,0x66,0x37,0);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
    FUN_039aaaa0((string *)awStack_38,this + 0x148);
    Sexy::ToWString((string *)awStack_38);
    iVar1 = FUN_039ac220(0);
    iVar2 = FUN_039ac220(0xfa);
    iVar3 = FUN_039ac220(0xb4);
    iVar4 = FUN_039ac220(0x14);
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
    Sexy::Color::Color(aCStack_18,0x66,0x37,0);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
    std::string::~string((string *)awStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CarnivalBundle::ButtonDepress(int) */

void __thiscall CarnivalBundle::ButtonDepress(CarnivalBundle *this,int param_1)

{
  UICarnivalBundleInfo *this_00;
  
  if (param_1 != 0xb) {
    return;
  }
  this_00 = (UICarnivalBundleInfo *)UISingletonDialog<UICarnivalBundleInfo>::ShowDialog();
  UICarnivalBundleInfo::InitView(this_00,*(int *)(this + 0xe4),(CarnivalBundleData *)(this + 0xe8));
  return;
}


/* non-virtual thunk to CarnivalBundle::ButtonDepress(int) */

void __thiscall CarnivalBundle::ButtonDepress(CarnivalBundle *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* CarnivalBundle::~CarnivalBundle() */

void __thiscall CarnivalBundle::~CarnivalBundle(CarnivalBundle *this)

{
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066e6908;
  *(undefined ***)this = &PTR_GetClass_066e65e0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x160);
  FUN_05476c50(this + 0x158);
  CarnivalBundleData::~CarnivalBundleData((CarnivalBundleData *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* CarnivalBundle::~CarnivalBundle() */

void __thiscall CarnivalBundle::~CarnivalBundle(CarnivalBundle *this)

{
  ~CarnivalBundle(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarnivalBundle::InitView(int, CarnivalBundleData&) */

void __thiscall
CarnivalBundle::InitView(CarnivalBundle *this,int param_1,CarnivalBundleData *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  long *plVar8;
  UIWidgetText *this_00;
  ulong uVar9;
  PVZ2UIButton *this_01;
  CUILabel *this_02;
  long lVar10;
  long lVar11;
  PrimeTypeface *pPVar12;
  undefined8 uVar13;
  int iVar14;
  ulong uVar15;
  code *pcVar16;
  undefined1 auStack_80 [8];
  string asStack_78 [56];
  tm local_40;
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *this_03;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe4) = param_1;
  CarnivalBundleData::operator=((CarnivalBundleData *)(this + 0xe8),param_2);
  cVar1 = std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::empty
                    ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x100));
  if (cVar1 != '\0') goto LAB_039b3618;
  piVar7 = (int *)FUN_039ab030(*(undefined8 *)(this + 0x100),0);
  GetGameItemInfo(*piVar7,0x7fffffff,0);
  FUN_054766c8(this + 0x158,&local_40.tm_gmtoff);
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_40);
  piVar7 = (int *)FUN_039ab030(*(undefined8 *)(this + 0x100),0);
  iVar5 = *piVar7;
  if (iVar5 == 0xfad) {
    this_02 = (CUILabel *)UIRewardFrameSelect::CreateUIRewardFrame(0,0,false);
    this_03 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf6f0;
LAB_039b3b40:
    pPVar12 = (PrimeTypeface *)CachedUIResourcePtr<Sexy::Image>::operator->(this_03);
    Lua::CUILabel::SetTypeface(this_02,pPVar12);
    FUN_05477b24(&local_40,this + 0x158);
    LevelEditorStatueMazeSliderWidget::SetDescription4((wstring *)this_02);
    FUN_05476c50(&local_40);
  }
  else {
    if (iVar5 == 0xbc0) {
      this_02 = (CUILabel *)UIRewardFrameSelect::CreateUIRewardFrame(0,0,false);
      this_03 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf718;
      goto LAB_039b3b40;
    }
    this_02 = (CUILabel *)UIRewardFrameSelect::CreateUIRewardFrame(iVar5,0,false);
  }
  uVar2 = FUN_039ac220(0x23);
  uVar3 = FUN_039ac220(0x4b);
  uVar4 = FUN_039ac220(100);
  (**(code **)(*(long *)this_02 + 0x198))(this_02,uVar2,uVar3,uVar4,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,this_02);
LAB_039b3618:
  uVar15 = 0;
  while( true ) {
    uVar13 = *(undefined8 *)(this + 0x100);
    uVar9 = FUN_039ab03c(uVar13,*(undefined8 *)(this + 0x108));
    if (uVar9 <= uVar15) break;
    piVar7 = (int *)FUN_039ab030(uVar13,uVar15);
    plVar8 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar7,0,false);
    iVar5 = FUN_039ac220(0x1e);
    iVar6 = FUN_039ac220(0x50);
    uVar2 = FUN_039ac220(0xb4);
    uVar3 = FUN_039ac220(0x19);
    iVar14 = (int)uVar15;
    (**(code **)(*plVar8 + 0x198))(plVar8,iVar5 + iVar6 * iVar14,uVar2,uVar3,uVar3);
    lVar10 = *(long *)this;
    *(undefined1 *)((long)plVar8 + 0x6d) = 0;
    (**(code **)(lVar10 + 0x60))(this,plVar8);
    lVar10 = FUN_039ab030(*(undefined8 *)(this + 0x100),uVar15);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar10 + 4));
    Sexy::ToWString(asStack_78);
    this_00 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(this_00,(wstring *)&local_40);
    FUN_05476c50(&local_40);
    std::string::~string(asStack_78);
    iVar5 = FUN_039ac220(0x3c);
    iVar6 = FUN_039ac220(0x50);
    uVar2 = FUN_039ac220(0xb5);
    uVar3 = FUN_039ac220(0x19);
    uVar15 = uVar15 + 1;
    (**(code **)(*(long *)this_00 + 0x198))(this_00,iVar5 + iVar6 * iVar14,uVar2,iVar6,uVar3);
    uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_Outline);
    FUN_039aae4c(this_00 + 0xe8,uVar13);
    FUN_039aae54(this_00 + 0xe0,3);
    pcVar16 = *(code **)(*(long *)this_00 + 0x170);
    Sexy::Color::Color((Color *)&local_40,1);
    (*pcVar16)(this_00,0,&local_40);
    lVar10 = *(long *)this;
    this_00[0x6d] = (UIWidgetText)0x0;
    (**(code **)(lVar10 + 0x60))(this,this_00);
  }
  cVar1 = IsLimitBundle(this);
  if (cVar1 != '\0') {
    local_40.tm_zone = (char *)0x0;
    local_40.tm_sec = 0;
    local_40.tm_min = 0;
    local_40.tm_hour = 0;
    local_40.tm_mday = 0;
    local_40.tm_mon = 0;
    local_40.tm_year = 0;
    local_40.tm_wday = 0;
    local_40.tm_yday = 0;
    local_40.tm_isdst = 0;
    local_40._36_4_ = 0;
    local_40.tm_gmtoff = 0;
    FUN_05475ffc(asStack_78,this + 0x150,0,8);
    iVar5 = StringHelper::ToInt(asStack_78);
    std::string::~string(asStack_78);
    FUN_05475ffc(asStack_78,this + 0x150,8,0xffffffffffffffff);
    iVar6 = StringHelper::ToInt(asStack_78);
    std::string::~string(asStack_78);
    local_40.tm_mday = iVar5 % 100;
    local_40.tm_hour = iVar6 / 10000;
    local_40.tm_year = iVar5 / 10000 + -0x76c;
    local_40.tm_mon = (iVar5 % 10000) / 100 + -1;
    local_40.tm_min = (iVar6 % 10000) / 100;
    local_40.tm_sec = iVar6 % 100;
    lVar10 = Sexy::GetTimegm(&local_40);
    lVar11 = Sexy::GetBJTimeOffset();
    *(long *)(this + 0x168) = lVar10 - lVar11;
  }
  if (*(int *)param_2 != 2) {
    FUN_05478178((wstring *)asStack_78,&DAT_056f11a8,auStack_80);
    Sexy::Color::Color((Color *)&local_40,1);
    this_01 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (this_01,0xb,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)&local_40)
    ;
    FUN_05476c50((wstring *)asStack_78);
    nop();
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06abfba8,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06abfb50,2);
    PVZ2UIButton::SetDialogStates(this_01,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)&local_40);
    uVar2 = FUN_039ac220(0x96);
    uVar3 = FUN_039ac220(0);
    uVar4 = FUN_039ac220(0x1e);
    (**(code **)(*(long *)this_01 + 0x198))(this_01,uVar2,uVar3,uVar4,uVar4);
    (**(code **)(*(long *)this + 0x60))(this,this_01);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

