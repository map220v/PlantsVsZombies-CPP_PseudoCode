// Class: DiscountShopContentWidget


/* DiscountShopContentWidget::~DiscountShopContentWidget() */

void __thiscall
DiscountShopContentWidget::~DiscountShopContentWidget(DiscountShopContentWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0698ac80;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698afa8;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* DiscountShopContentWidget::~DiscountShopContentWidget() */

void __thiscall
DiscountShopContentWidget::~DiscountShopContentWidget(DiscountShopContentWidget *this)

{
  ~DiscountShopContentWidget(this);
  AK::FreeHook(this);
  return;
}


/* DiscountShopContentWidget::CancelCallback() */

void DiscountShopContentWidget::CancelCallback(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* DiscountShopContentWidget::RechargeCallback() */

void DiscountShopContentWidget::RechargeCallback(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  LawnApp::ShowCoinStore(gLawnApp,2);
  return;
}


/* DiscountShopContentWidget::DiscountShopContentWidget(DiscountShopActivityUI*) */

void __thiscall
DiscountShopContentWidget::DiscountShopContentWidget
          (DiscountShopContentWidget *this,DiscountShopActivityUI *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0698ac80;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698afa8;
  DiscountShopContentData::DiscountShopContentData((DiscountShopContentData *)(this + 0xf8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(DiscountShopActivityUI **)(this + 0x110) = param_1;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DiscountShopContentWidget::UpdateUI(DiscountShopContentData) */

void __thiscall
DiscountShopContentWidget::UpdateUI(DiscountShopContentWidget *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  char *__s;
  PVZ2UIButton *this_00;
  string asStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  iVar3 = *(int *)(param_2 + 2);
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x108) = param_2[2];
  *(undefined8 *)(this + 0xf8) = uVar1;
  *(undefined8 *)(this + 0x100) = uVar2;
  this_00 = *(PVZ2UIButton **)(this + 0xe8);
  if (iVar3 == 1) {
    __s = "[DISCOUNT_SHOP_ACTIVITY_GOT]";
  }
  else {
    __s = "[DISCOUNT_SHOP_ACTIVITY_BUY_BTN]";
  }
  std::string::string(asStack_18,__s);
  StringHelper::ToStringValue(asStack_18);
  PVZ2UIButton::SetLabelText(this_00,awStack_10);
  FUN_05476c50(awStack_10);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8),iVar3 == 1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DiscountShopContentWidget::CreateTipsPanel() */

void __thiscall DiscountShopContentWidget::CreateTipsPanel(DiscountShopContentWidget *this)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_58,&DAT_056f11a8,auStack_68);
  FUN_05478178(awStack_50,L"[DISCOUNT_SHOP_TIPS]",auStack_60);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[DISCOUNT_SHOP_CANCEL]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CancelCallback);
  Sexy::Delegate0::Delegate0<DiscountShopContentWidget,void(DiscountShopContentWidget::*)()>
            (aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[DISCOUNT_SHOP_RECHARGE]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,RechargeCallback);
  Sexy::Delegate0::Delegate0<DiscountShopContentWidget,void(DiscountShopContentWidget::*)()>
            (aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DiscountShopContentWidget::InitView(int, DiscountShopContentData) */

void __thiscall
DiscountShopContentWidget::InitView(DiscountShopContentWidget *this,int param_1,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  DiscountShopCommonWidget *this_00;
  Image *pIVar10;
  PVZ2UIButton *pPVar11;
  wchar_t *pwVar12;
  long *plVar13;
  Dialog *pDVar14;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  PVZ2UIImage aPStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *(undefined8 *)(this + 0x108) = param_3[2];
  pDVar14 = *(Dialog **)(this + 0x110);
  *(undefined8 *)(this + 0xf8) = uVar1;
  *(undefined8 *)(this + 0x100) = uVar2;
  *(int *)(this + 0xf4) = param_1;
  *(int *)(this + 0xf0) = param_1 + 0x3e9;
  local_8 = ___stack_chk_guard;
  iVar3 = *(int *)(param_3 + 2);
  std::string::string(asStack_40,"Item");
  lVar8 = UI::Dialog::GetWidget(pDVar14,asStack_40);
  std::string::~string(asStack_40);
  nop();
  pDVar14 = *(Dialog **)(this + 0x110);
  std::string::string(asStack_40,"BuyBtn");
  lVar9 = UI::Dialog::GetWidget(pDVar14,asStack_40);
  std::string::~string(asStack_40);
  nop();
  this_00 = ::operator_new(0x188);
  DiscountShopCommonWidget::DiscountShopCommonWidget(this_00);
  local_b0 = param_3[2];
  local_c0 = *param_3;
  uStack_b8 = param_3[1];
  DiscountShopContentWidgetNew::CreateCommonRewardItemData(auStack_90,this,&local_c0);
  (**(code **)(*(long *)this_00 + 0x310))(this_00,auStack_90);
  uVar4 = FUN_04c52f00(*(undefined4 *)(lVar8 + 0x48));
  uVar5 = FUN_04c52f04(*(undefined4 *)(lVar8 + 0x4c));
  uVar6 = FUN_04c52f08(*(undefined4 *)(lVar8 + 0x50));
  uVar7 = FUN_04c52f0c(*(undefined4 *)(lVar8 + 0x54));
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar4,uVar5,uVar6,uVar7);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b921d8);
  CommonRewardItemWidget::SetCurrencyImage((CommonRewardItemWidget *)this_00,pIVar10);
  DiscountShopCommonWidgetNew::SetDiscount((int)this_00);
  lVar8 = *(long *)this;
  this_00[0x59] = (DiscountShopCommonWidget)0x0;
  (**(code **)(lVar8 + 0x60))(this,this_00);
  if (iVar3 == 1) {
    pwVar12 = L"[DISCOUNT_SHOP_ACTIVITY_GOT]";
  }
  else {
    pwVar12 = L"[DISCOUNT_SHOP_ACTIVITY_BUY_BTN]";
  }
  FUN_05478178(aPStack_78,pwVar12,auStack_98);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar11,*(int *)(this + 0xf0),(ButtonListener *)(this + 0xd8),(wstring *)aPStack_78,
             (Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar11;
  FUN_05476c50(aPStack_78);
  nop();
  pPVar11 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b91da0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b92208,3);
  PVZ2UIButton::SetDialogStates(pPVar11,aPStack_78,(PVZ2UIImage *)asStack_40);
  plVar13 = *(long **)(this + 0xe8);
  *(undefined1 *)((long)plVar13 + 0x59) = 0;
  (**(code **)(*plVar13 + 0x188))(plVar13,iVar3 == 1);
  plVar13 = *(long **)(this + 0xe8);
  uVar4 = FUN_04c52f00(*(undefined4 *)(lVar9 + 0x48));
  uVar5 = FUN_04c52f04(*(undefined4 *)(lVar9 + 0x4c));
  uVar6 = FUN_04c52f08(*(undefined4 *)(lVar9 + 0x50));
  uVar7 = FUN_04c52f0c(*(undefined4 *)(lVar9 + 0x54));
  (**(code **)(*plVar13 + 0x198))(plVar13,uVar4,uVar5,uVar6,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DiscountShopContentWidget::ButtonDepress(int) */

void __thiscall
DiscountShopContentWidget::ButtonDepress(DiscountShopContentWidget *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  PlayerInfo *this_00;
  NetworkMgr *this_01;
  long *plVar5;
  char *pcVar6;
  undefined8 uVar7;
  TGALogMgr *pTVar8;
  size_t __n;
  undefined1 *__n_00;
  undefined1 auStack_1c0 [8];
  TGAAccumulatedLoginData aTStack_1b8 [8];
  undefined1 auStack_1b0 [8];
  string asStack_1a8 [16];
  DString aDStack_198 [32];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xf0) == param_1) {
    lVar4 = Sexy::LazySingleton<DiscountShopActivityManager>::GetInstancePtr();
    cVar1 = FUN_04c52f74(*(undefined4 *)(lVar4 + 0x28));
    if (cVar1 == '\0') {
      CreateTipsPanel(this);
    }
    else {
      this_00 = (PlayerInfo *)ProfileUtils::Profile();
      iVar2 = PlayerInfo::GetNumGems(this_00,true);
      if (iVar2 < *(int *)(this + 0x100)) {
        LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
      }
      else {
        this_01 = (NetworkMgr *)NetworkMgr::Instance();
        plVar5 = (long *)NetworkMgr::GetNewNetWorkProcess(this_01);
        __n_00 = auStack_1c0;
        __n = (size_t)*(uint *)(this + 0xf4);
        (**(code **)(*plVar5 + 0x370))
                  (plVar5,7,__n,*(undefined4 *)(this + 0xfc),*(undefined4 *)(this + 0x10c),
                   *(undefined4 *)(this + 0x100));
        TGAAccumulatedLoginData::TGAAccumulatedLoginData(aTStack_1b8);
        DString::DString(aDStack_198,2);
        pcVar6 = (char *)DString::c_str(aDStack_198);
        std::string::append((string *)aTStack_1b8,pcVar6,__n);
        DString::~DString(aDStack_198);
        uVar3 = operator|(0x10,8);
        FUN_05462470(auStack_178,uVar3);
        std::string::string((string *)aDStack_198,"");
        FUN_05462980(auStack_178,aDStack_198);
        std::string::~string((string *)aDStack_198);
        nop();
        uVar7 = FUN_0546065c(auStack_168,*(undefined4 *)(this + 0xf8));
        uVar7 = FUN_054603b8(uVar7,&DAT_05593348);
        uVar7 = FUN_0546065c(uVar7,*(undefined4 *)(this + 0xfc));
        FUN_054603b8(uVar7,&DAT_05594620);
        FUN_05462824(aDStack_198,auStack_178);
        FUN_05474278(auStack_1b0,aDStack_198);
        std::string::~string((string *)aDStack_198);
        DString::DString(aDStack_198,*(int *)(this + 0x100));
        pcVar6 = (char *)DString::c_str(aDStack_198);
        std::string::append(asStack_1a8,pcVar6,(size_t)__n_00);
        DString::~DString(aDStack_198);
        pTVar8 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        InvitationPlayerInfo::InvitationPlayerInfo
                  ((InvitationPlayerInfo *)aDStack_198,(InvitationPlayerInfo *)aTStack_1b8);
        TGALogMgr::LogDiscountShop(pTVar8,aDStack_198);
        TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aDStack_198);
        FUN_054617bc(auStack_178);
        TGAAccumulatedLoginData::~TGAAccumulatedLoginData(aTStack_1b8);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to DiscountShopContentWidget::ButtonDepress(int) */

void __thiscall
DiscountShopContentWidget::ButtonDepress(DiscountShopContentWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

