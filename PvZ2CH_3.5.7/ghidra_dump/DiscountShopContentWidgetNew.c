// Class: DiscountShopContentWidgetNew


/* DiscountShopContentWidgetNew::~DiscountShopContentWidgetNew() */

void __thiscall
DiscountShopContentWidgetNew::~DiscountShopContentWidgetNew(DiscountShopContentWidgetNew *this)

{
  *(undefined ***)this = &PTR_GetClass_0698aff0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698b318;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* DiscountShopContentWidgetNew::~DiscountShopContentWidgetNew() */

void __thiscall
DiscountShopContentWidgetNew::~DiscountShopContentWidgetNew(DiscountShopContentWidgetNew *this)

{
  ~DiscountShopContentWidgetNew(this);
  AK::FreeHook(this);
  return;
}


/* DiscountShopContentWidgetNew::CancelCallback() */

void DiscountShopContentWidgetNew::CancelCallback(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* DiscountShopContentWidgetNew::RechargeCallback() */

void DiscountShopContentWidgetNew::RechargeCallback(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  LawnApp::ShowCoinStore(gLawnApp,2);
  return;
}


/* DiscountShopContentWidgetNew::CreateCommonRewardItemData(DiscountShopContentData) */

CommonRewardItemData *
DiscountShopContentWidgetNew::CreateCommonRewardItemData
          (CommonRewardItemData *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  CommonRewardItemData::CommonRewardItemData(param_1);
  uVar1 = param_3[1];
  uVar2 = param_3[5];
  uVar3 = param_3[2];
  *(undefined4 *)param_1 = *param_3;
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  return param_1;
}


/* DiscountShopContentWidgetNew::DiscountShopContentWidgetNew(DiscountShopActivityUI*) */

void __thiscall
DiscountShopContentWidgetNew::DiscountShopContentWidgetNew
          (DiscountShopContentWidgetNew *this,DiscountShopActivityUI *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0698aff0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698b318;
  DiscountShopContentData::DiscountShopContentData((DiscountShopContentData *)(this + 0xf8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(DiscountShopActivityUI **)(this + 0x110) = param_1;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DiscountShopContentWidgetNew::CreateTipsPanel() */

void __thiscall DiscountShopContentWidgetNew::CreateTipsPanel(DiscountShopContentWidgetNew *this)

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
  Sexy::Delegate0::Delegate0<DiscountShopContentWidgetNew,void(DiscountShopContentWidgetNew::*)()>
            (aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[DISCOUNT_SHOP_RECHARGE]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,RechargeCallback);
  Sexy::Delegate0::Delegate0<DiscountShopContentWidgetNew,void(DiscountShopContentWidgetNew::*)()>
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
/* DiscountShopContentWidgetNew::InitView(int, DiscountShopContentData) */

void __thiscall
DiscountShopContentWidgetNew::InitView
          (DiscountShopContentWidgetNew *this,int param_1,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  DiscountShopCommonWidgetNew *this_00;
  Image *pIVar7;
  PVZ2UIButton *pPVar8;
  wchar_t *pwVar9;
  long lVar10;
  long *plVar11;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  *(undefined8 *)(this + 0x108) = param_3[2];
  uVar1 = param_3[1];
  *(undefined8 *)(this + 0xf8) = *param_3;
  *(undefined8 *)(this + 0x100) = uVar1;
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xf0) = param_1 + 0x3e9;
  *(int *)(this + 0xf4) = param_1;
  this[0x59] = (DiscountShopContentWidgetNew)0x0;
  iVar2 = *(int *)(param_3 + 2);
  this_00 = ::operator_new(400);
  DiscountShopCommonWidgetNew::DiscountShopCommonWidgetNew(this_00);
  local_c0 = *param_3;
  uStack_b8 = param_3[1];
  local_b0 = param_3[2];
  CreateCommonRewardItemData(auStack_90,this,&local_c0);
  (**(code **)(*(long *)this_00 + 0x310))(this_00,auStack_90);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b921d8);
  CommonRewardItemWidget::SetCurrencyImage((CommonRewardItemWidget *)this_00,pIVar7);
  DiscountShopCommonWidgetNew::SetDiscount((int)this_00);
  lVar10 = *(long *)this;
  this_00[0x59] = (DiscountShopCommonWidgetNew)0x0;
  (**(code **)(lVar10 + 0x60))(this,this_00);
  iVar5 = FUN_04c53650(0x3c);
  iVar3 = *(int *)(this + 0x50);
  iVar6 = FUN_04c53650(0x28);
  iVar4 = *(int *)(this + 0x54);
  if (iVar2 == 1) {
    pwVar9 = L"[DISCOUNT_SHOP_ACTIVITY_GOT]";
  }
  else {
    pwVar9 = L"[DISCOUNT_SHOP_ACTIVITY_BUY_BTN]";
  }
  FUN_05478178(aPStack_78,pwVar9,auStack_98);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar8 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar8,*(int *)(this + 0xf0),(ButtonListener *)(this + 0xd8),(wstring *)aPStack_78,
             (Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar8;
  FUN_05476c50(aPStack_78);
  nop();
  pPVar8 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b91da0,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b92208,3);
  PVZ2UIButton::SetDialogStates(pPVar8,aPStack_78,aPStack_40);
  plVar11 = *(long **)(this + 0xe8);
  *(undefined1 *)((long)plVar11 + 0x59) = 0;
  (**(code **)(*plVar11 + 0x188))(plVar11,iVar2 == 1);
  (**(code **)(**(long **)(this + 0xe8) + 0x198))
            (*(long **)(this + 0xe8),iVar5,iVar4 - iVar6 / 2,iVar3 + iVar5 * -2,iVar6);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DiscountShopContentWidgetNew::ButtonDepress(int) */

void __thiscall
DiscountShopContentWidgetNew::ButtonDepress(DiscountShopContentWidgetNew *this,int param_1)

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


/* non-virtual thunk to DiscountShopContentWidgetNew::ButtonDepress(int) */

void __thiscall
DiscountShopContentWidgetNew::ButtonDepress(DiscountShopContentWidgetNew *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

