// Class: RiftaShop


/* RiftaShop::ScrollTargetReached(Sexy::ScrollWidget*) */

void RiftaShop::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to RiftaShop::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall RiftaShop::ScrollTargetReached(RiftaShop *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* RiftaShop::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void RiftaShop::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to RiftaShop::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall RiftaShop::ScrollTargetInterrupted(RiftaShop *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftaShop::GetLayoutName() */

void __thiscall RiftaShop::GetLayoutName(RiftaShop *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIRiftaShop");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* RiftaShop::onADFinished(int) */

void __thiscall RiftaShop::onADFinished(RiftaShop *this,int param_1)

{
  NetworkMgr *this_00;
  long *plVar1;
  
  if (param_1 != 0x10) {
    return;
  }
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
  (**(code **)(*plVar1 + 0x388))(plVar1,1,0,1);
  return;
}


/* RiftaShop::refreshShop(int) */

void RiftaShop::refreshShop(int param_1)

{
  NetworkMgr *this;
  long *plVar1;
  
  this = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this);
  (**(code **)(*plVar1 + 0x388))(plVar1,1,0,0);
  return;
}


/* RiftaShop::ConfirmBuy(UIMessageBox*, int) */

void __thiscall RiftaShop::ConfirmBuy(RiftaShop *this,UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  refreshShop((int)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftaShop::WidgetTouchCallback(CommonRewardItemData const&) */

void __thiscall RiftaShop::WidgetTouchCallback(RiftaShop *this,CommonRewardItemData *param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIMessageBox *this_02;
  Image *pIVar2;
  long lVar3;
  NetworkMgr *this_03;
  long *plVar4;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = PlayerInfo::GetMaterialNum(this_01,0x5a35);
  if (iVar1 < *(int *)(param_1 + 0xc)) {
    this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_02 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_02,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[MAT_RIFT_COIN_NOT_ENOUGH]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(this_02,awStack_20,awStack_28);
      std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar2 = (Image *)StringHelper::ToImage(asStack_10,false);
      UIMessageBox::SetBackground(this_02,pIVar2);
      std::string::~string(asStack_10);
      nop();
      lVar3 = UIMessageBox::GetButtonCancel(this_02);
      thunk_FUN_05477b9c(lVar3 + 0xd8,auStack_18);
      FUN_05476c50(auStack_18);
      FUN_05476c50(awStack_20);
      FUN_05476c50(awStack_28);
    }
  }
  else {
    this_03 = (NetworkMgr *)NetworkMgr::Instance();
    plVar4 = (long *)NetworkMgr::GetNewNetWorkProcess(this_03);
    (**(code **)(*plVar4 + 0x370))
              (plVar4,8,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),
               *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftaShop::onAdsFinish(EASquaredAdFinishedReason::EASquaredAdFinishedReason) */

void __thiscall RiftaShop::onAdsFinish(RiftaShop *this,int param_2)

{
  ProfileMgr *this_00;
  string *this_01;
  PVZ2UIButton *this_02;
  string asStack_28 [8];
  long local_20;
  int local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 0) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (string *)ProfileMgr::GetCurrentProfile(this_00);
    std::string::string(asStack_28,"theater");
    PlayerInfo::GetEventRecordByName(this_01);
    std::string::~string(asStack_28);
    nop();
    local_18 = local_18 + -1;
    std::string::string(asStack_28,"theater");
    PlayerInfo::SetEventRecordByName((PlayerInfo *)this_01,asStack_28,local_18,local_20);
    std::string::~string(asStack_28);
    nop();
    refreshShop((int)this);
    if (local_18 == 0) {
      this[0x140] = (RiftaShop)0x0;
      std::string::string(asStack_28,"UIButton_Refresh");
      this_02 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_28);
      std::string::~string(asStack_28);
      nop();
      TodStringTranslate(L"[THEATER_REFRESH_CURRENCY]");
      PVZ2UIButton::SetLabelText(this_02,(wstring *)asStack_28);
      FUN_05476c50(asStack_28);
    }
    GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
              ((GridItemCardGameZombieActionData *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftaShop::IsAdvertisementEnable() */

void RiftaShop::IsAdvertisementEnable(void)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this;
  string *this_00;
  long lVar3;
  long *plVar4;
  byte bVar5;
  string asStack_28 [8];
  long local_20;
  int local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06b98380 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b98380), iVar2 != 0)) {
    DAT_06b98208 = LawnApp::IsAdChannel(gLawnApp,3);
    __cxa_guard_release(&DAT_06b98380);
  }
  if (((DAT_06b97e90 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b97e90), iVar2 != 0)) {
    plVar4 = (long *)EASquared::Instance();
    DAT_06b98270 = (**(code **)(*plVar4 + 0xb8))(plVar4,0x2a99);
    __cxa_guard_release(&DAT_06b97e90);
  }
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (string *)ProfileMgr::GetCurrentProfile(this);
  std::string::string(asStack_28,"theater");
  PlayerInfo::GetEventRecordByName(this_00);
  std::string::~string(asStack_28);
  nop();
  cVar1 = TimeUtil::IsToday(local_20);
  if (cVar1 == '\0') {
    lVar3 = LawnApp::GetRealServerTime(gLawnApp);
    std::string::string(asStack_28,"theater");
    PlayerInfo::SetEventRecordByName((PlayerInfo *)this_00,asStack_28,3,lVar3);
    std::string::~string(asStack_28);
    nop();
  }
  bVar5 = 0;
  if (DAT_06b98208 != '\0') {
    bVar5 = (cVar1 == '\0' || 0 < local_18) & DAT_06b98270;
  }
  GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
            ((GridItemCardGameZombieActionData *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar5);
  }
  return;
}


/* RiftaShop::ConfirmWatchADOrBuy(UIMessageBox*, int) */

void __thiscall RiftaShop::ConfirmWatchADOrBuy(RiftaShop *this,UIMessageBox *param_1,int param_2)

{
  ADManager *pAVar1;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    pAVar1 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
    ADManager::ShowAD(pAVar1,0x10);
    return;
  }
  refreshShop((int)this);
  return;
}


/* RiftaShop::RiftaShop() */

void __thiscall RiftaShop::RiftaShop(RiftaShop *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<RiftaShop>::UISingletonDialog((UISingletonDialog<RiftaShop> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  this[0x140] = (RiftaShop)0x0;
  *(undefined ***)this = &PTR_GetClass_069b8fe0;
  *(undefined **)(this + 0xd8) = &DAT_069b9340;
  *(undefined ***)(this + 0x138) = &PTR__RiftaShop_069b9388;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnShopBuyFinish);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<bool,S2C_ShopItemPurchaseInfo_const*,Sexy::CBMemberTranslatorX<RiftaShop,void(RiftaShop::*)(bool,S2C_ShopItemPurchaseInfo_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyShopBuyFinishDetails,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onADFinished);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<RiftaShop,void(RiftaShop::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyADWatchFinish,&local_70);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftaShop::ButtonDepress(int) */

void __thiscall RiftaShop::ButtonDepress(RiftaShop *this,int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ADManager *pAVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  RiftShopMgr *pRVar5;
  UIMessageBox *pUVar6;
  Image *pIVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  Delegate2<UIMessageBox*,int> *pDVar11;
  code *pcVar12;
  wstring awStack_70 [8];
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x58) {
    UISingletonDialog<RiftaShop>::CloseDialog();
  }
  else if (param_1 == 0x6f) {
    if (this[0x140] == (RiftaShop)0x0) {
      pAVar4 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
      cVar1 = ADManager::CanWatchAD(pAVar4,0x10);
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      iVar2 = PlayerInfo::GetMaterialNum(this_01,0x5a35);
      pRVar5 = (RiftShopMgr *)Sexy::LazySingleton<RiftShopMgr>::GetInstancePtr();
      uVar3 = RiftShopMgr::getRefreshShopCost(pRVar5);
      if (uVar3 == 0) {
        pUVar6 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (pUVar6 != (UIMessageBox *)0x0) {
          UIMessageBox::SetShowType(pUVar6,6);
          TodStringTranslate(L"[REVIVE_TIP]");
          TodStringTranslate(L"[REFRESH_CURRENCY_CONFIRM_NOTFREE]");
          TodStringTranslate(L"[BUTTON_OK]");
          UIMessageBox::SetMessage(pUVar6,awStack_60,awStack_68);
          std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
          pIVar7 = (Image *)StringHelper::ToImage(asStack_50,false);
          UIMessageBox::SetBackground(pUVar6,pIVar7);
          std::string::~string(asStack_50);
          nop();
          lVar8 = UIMessageBox::GetButtonOK(pUVar6);
          thunk_FUN_05477b9c(lVar8 + 0xd8,asStack_58);
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,ConfirmBuy);
          Sexy::Delegate2<UIMessageBox*,int>::
          Delegate2<RiftaShop,void(RiftaShop::*)(UIMessageBox*,int)>(aDStack_38,asStack_50);
          UIMessageBox::SetCallback(pUVar6,aDStack_38);
          FUN_05476c50(asStack_58);
          FUN_05476c50(awStack_60);
          FUN_05476c50(awStack_68);
        }
      }
      else if (cVar1 == '\0') {
        if (iVar2 < (int)uVar3) {
          pUVar6 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
          if (pUVar6 != (UIMessageBox *)0x0) {
            UIMessageBox::SetShowType(pUVar6,2);
            TodStringTranslate(L"[REVIVE_TIP]");
            TodStringTranslate(L"[RIFT_ICON_NOT_ENOUGH]");
            TodStringTranslate(L"[BUTTON_OK]");
            UIMessageBox::SetMessage(pUVar6,awStack_60,awStack_68);
            std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
            pIVar7 = (Image *)StringHelper::ToImage(asStack_50,false);
            UIMessageBox::SetBackground(pUVar6,pIVar7);
            std::string::~string(asStack_50);
            nop();
            lVar8 = UIMessageBox::GetButtonOK(pUVar6);
            thunk_FUN_05477b9c(lVar8 + 0xd8,asStack_58);
            FUN_05476c50(asStack_58);
            FUN_05476c50(awStack_60);
            FUN_05476c50(awStack_68);
          }
        }
        else {
          pUVar6 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
          if (pUVar6 != (UIMessageBox *)0x0) {
            UIMessageBox::SetShowType(pUVar6,6);
            iVar2 = (int)awStack_70;
            TodStringTranslate(L"[REVIVE_TIP]");
            std::string::string(asStack_50,"[REFRESH_CURRENCY_CONFIRM]");
            StringHelper::ReplaceNumberString
                      ((StringHelper *)asStack_50,(string *)&DAT_056fbd78,(wchar_t *)(ulong)uVar3,
                       iVar2);
            std::string::~string(asStack_50);
            nop();
            TodStringTranslate(L"[BUTTON_OK]");
            UIMessageBox::SetMessage(pUVar6,awStack_60,awStack_68);
            std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
            pIVar7 = (Image *)StringHelper::ToImage(asStack_50,false);
            UIMessageBox::SetBackground(pUVar6,pIVar7);
            std::string::~string(asStack_50);
            nop();
            lVar8 = UIMessageBox::GetButtonOK(pUVar6);
            thunk_FUN_05477b9c(lVar8 + 0xd8,asStack_58);
            Sexy::
            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                      ((ReceivedDataCallback *)this,ConfirmBuy);
            Sexy::Delegate2<UIMessageBox*,int>::
            Delegate2<RiftaShop,void(RiftaShop::*)(UIMessageBox*,int)>(aDStack_38,asStack_50);
            UIMessageBox::SetCallback(pUVar6,aDStack_38);
            FUN_05476c50(asStack_58);
            FUN_05476c50(awStack_60);
            FUN_05476c50(awStack_68);
          }
        }
      }
      else {
        pAVar4 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
        uVar9 = ADManager::GetLeftADWatchCount(pAVar4,0x10);
        pUVar6 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (pUVar6 != (UIMessageBox *)0x0) {
          UIMessageBox::SetShowType(pUVar6,7);
          TodStringTranslate(L"[REVIVE_TIP]");
          pDVar11 = aDStack_38;
          std::string::string(asStack_50,"[REFRESH_CURRENCY_CONFIRM_AD]");
          iVar2 = (int)pDVar11;
          StringHelper::ReplaceNumberString
                    ((StringHelper *)asStack_50,(string *)&DAT_056fbd78,(wchar_t *)(ulong)uVar3,
                     iVar2);
          std::string::~string(asStack_50);
          nop();
          StringHelper::ReplaceNumberString
                    ((StringHelper *)awStack_68,(wstring *)&DAT_0570be08,
                     (wchar_t *)(uVar9 & 0xffffffff),iVar2);
          FUN_054766c8((StringHelper *)awStack_68,asStack_50);
          FUN_05476c50(asStack_50);
          TodStringTranslate(L"[BUTTON_OK]");
          TodStringTranslate(L"[ADVERTISEMENT_WATCH]");
          UIMessageBox::SetMessage(pUVar6,awStack_68,awStack_70);
          std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
          pIVar7 = (Image *)StringHelper::ToImage(asStack_50,false);
          UIMessageBox::SetBackground(pUVar6,pIVar7);
          std::string::~string(asStack_50);
          nop();
          lVar8 = UIMessageBox::GetButtonOK(pUVar6);
          thunk_FUN_05477b9c(lVar8 + 0xd8,awStack_60);
          lVar8 = UIMessageBox::GetButtonCancel(pUVar6);
          thunk_FUN_05477b9c(lVar8 + 0xd8,asStack_58);
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,ConfirmWatchADOrBuy);
          Sexy::Delegate2<UIMessageBox*,int>::
          Delegate2<RiftaShop,void(RiftaShop::*)(UIMessageBox*,int)>(aDStack_38,asStack_50);
          UIMessageBox::SetCallback(pUVar6,aDStack_38);
          pRVar5 = (RiftShopMgr *)Sexy::LazySingleton<RiftShopMgr>::GetInstancePtr();
          iVar2 = RiftShopMgr::getRefreshShopTimes(pRVar5);
          plVar10 = (long *)UIMessageBox::GetButtonOK(pUVar6);
          (**(code **)(*plVar10 + 0x188))(plVar10,iVar2 == 0);
          FUN_05476c50(asStack_58);
          FUN_05476c50(awStack_60);
          FUN_05476c50((StringHelper *)awStack_68);
          FUN_05476c50(awStack_70);
        }
      }
    }
    else {
      plVar10 = (long *)EASquared::Instance();
      pcVar12 = *(code **)(*plVar10 + 0x28);
      std::string::string(asStack_58,"DailySignAdvertisement");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onAdsFinish);
      Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::
      Delegate1<RiftaShop,void(RiftaShop::*)(EASquaredAdFinishedReason::EASquaredAdFinishedReason)>
                ((Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason> *)aDStack_38,
                 asStack_50);
      (*pcVar12)(plVar10,asStack_58,
                 (Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason> *)aDStack_38,0,3,
                 0x2a99);
      std::string::~string(asStack_58);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to RiftaShop::ButtonDepress(int) */

void __thiscall RiftaShop::ButtonDepress(RiftaShop *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* RiftaShop::~RiftaShop() */

void __thiscall RiftaShop::~RiftaShop(RiftaShop *this)

{
  *(undefined ***)(this + 0x138) = &PTR__RiftaShop_069b9388;
  *(undefined ***)this = &PTR_GetClass_069b8fe0;
  *(undefined **)(this + 0xd8) = &DAT_069b9340;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<RiftaShopCommonWidget*,std::allocator<RiftaShopCommonWidget*>>::~vector
            ((vector<RiftaShopCommonWidget*,std::allocator<RiftaShopCommonWidget*>> *)(this + 0x148)
            );
  UISingletonDialog<RiftaShop>::~UISingletonDialog((UISingletonDialog<RiftaShop> *)this);
  return;
}


/* non-virtual thunk to RiftaShop::~RiftaShop() */

void __thiscall RiftaShop::~RiftaShop(RiftaShop *this)

{
  ~RiftaShop(this + -0x138);
  return;
}


/* RiftaShop::~RiftaShop() */

void __thiscall RiftaShop::~RiftaShop(RiftaShop *this)

{
  ~RiftaShop(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RiftaShop::~RiftaShop() */

void __thiscall RiftaShop::~RiftaShop(RiftaShop *this)

{
  ~RiftaShop(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftaShop::refreshMaterial() */

void __thiscall RiftaShop::refreshMaterial(RiftaShop *this)

{
  UIWidgetText *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  RiftaShopData *pRVar1;
  string asStack_68 [8];
  string asStack_60 [72];
  ActivityTypeID aAStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_60,"UIText_Currency");
  this_00 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_60);
  std::string::~string(asStack_60);
  nop();
  if (this_00 != (UIWidgetText *)0x0) {
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<RiftShopMgr>::GetInstancePtr();
    pRVar1 = (RiftaShopData *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_end(this_01);
    RiftaShopData::RiftaShopData((RiftaShopData *)asStack_60,pRVar1);
    std::to_string<ActivityTypeID>(aAStack_18);
    UIWidgetText::SetString(this_00,asStack_68);
    std::string::~string(asStack_68);
    RiftaShopData::~RiftaShopData((RiftaShopData *)asStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftaShop::initWidgets(RiftaShopData const&) */

void __thiscall RiftaShop::initWidgets(RiftaShop *this,RiftaShopData *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  Widget *pWVar11;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  undefined4 *puVar12;
  RiftaShopCommonWidget *pRVar13;
  long lVar14;
  ulong uVar15;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  PVZ2UIButton *pPVar16;
  RiftShopMgr *this_04;
  ADManager *pAVar17;
  code *pcVar18;
  ulong uVar19;
  RiftaShopCommonWidget *local_48;
  Insets aIStack_40 [16];
  Insets aIStack_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<RiftaShopCommonWidget*,std::allocator<RiftaShopCommonWidget*>>::clear
            ((vector<RiftaShopCommonWidget*,std::allocator<RiftaShopCommonWidget*>> *)(this + 0x148)
            );
  std::string::string((string *)&local_20,"Widget_Rewards");
  pWVar11 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  (**(code **)(*(long *)pWVar11 + 0x80))(pWVar11,1,1);
  uVar19 = FUN_04d8446c(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  iVar2 = FUN_04d843d4(*(undefined4 *)(pWVar11 + 0x50));
  iVar3 = FUN_04d843d8(*(undefined4 *)(pWVar11 + 0x54));
  iVar4 = FUN_04d84c28(6);
  iVar5 = FUN_04d84c28(1);
  iVar6 = FUN_04d84c28(0x14);
  iVar7 = FUN_04d84c28(10);
  iVar3 = iVar6 + (iVar3 + iVar5 * -2 + iVar7 * -2) / 2;
  iVar7 = iVar3 + iVar7;
  iVar2 = (iVar2 + iVar4 * -2 + iVar6 * -2) / 3;
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  iVar8 = FUN_04d843d4(*(undefined4 *)(pWVar11 + 0x50));
  iVar9 = FUN_04d843d8(*(undefined4 *)(pWVar11 + 0x54));
  Sexy::Insets::Insets(aIStack_40,0,0,iVar8,iVar9);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_40);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  (**(code **)(*(long *)pWVar11 + 0x60))(pWVar11,this_00);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  uVar10 = FUN_04d843d4(*(undefined4 *)(pWVar11 + 0x50));
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,uVar10,iVar5 + iVar7 * (int)((float)uVar19 * 0.33333334));
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  for (uVar19 = 0;
      uVar15 = FUN_04d8446c(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38)),
      uVar19 < uVar15; uVar19 = uVar19 + 1) {
    iVar8 = (int)uVar19;
    Sexy::Insets::Insets
              (aIStack_30,iVar4 + (iVar2 + iVar6) * (iVar8 % 3),iVar5 + iVar7 * (iVar8 / 3),iVar2,
               iVar3);
    CommonRewardItemData::CommonRewardItemData((CommonRewardItemData *)&local_20);
    puVar12 = (undefined4 *)FUN_04d8449c(*(undefined8 *)(param_1 + 0x30),uVar19);
    local_20 = *puVar12;
    local_1c = puVar12[1];
    local_18 = 0x5a35;
    local_14 = puVar12[2];
    local_10 = (uint)(puVar12[3] != 1);
    pRVar13 = ::operator_new(0x1b8);
    RiftaShopCommonWidget::RiftaShopCommonWidget(pRVar13,iVar8);
    pcVar18 = *(code **)(*(long *)pRVar13 + 0x1a0);
    pRVar13[0x59] = (RiftaShopCommonWidget)0x0;
    local_48 = pRVar13;
    (*pcVar18)(pRVar13,aIStack_30);
    FUN_04d84458(local_48 + 0x1a8,-iVar6);
    pRVar13 = local_48;
    lVar14 = FUN_04d8449c(*(undefined8 *)(param_1 + 0x30),uVar19);
    uVar10 = 2;
    if (*(char *)(lVar14 + 0x10) != '\0') {
      uVar10 = 1;
    }
    FUN_04d84450(pRVar13 + 0x184,uVar10);
    pRVar13 = local_48;
    lVar14 = FUN_04d8449c(*(undefined8 *)(param_1 + 0x30),uVar19);
    RiftaShopCommonWidget::SetLockDescriptionIndex(pRVar13,*(int *)(lVar14 + 0x14));
    (**(code **)(*(long *)local_48 + 0x310))(local_48,(string *)&local_20);
    pRVar13 = local_48;
    lVar14 = FUN_04d8449c(*(undefined8 *)(param_1 + 0x30),uVar19);
    FUN_04d84440(pRVar13 + 0x170,*(undefined1 *)(lVar14 + 0x10));
    (**(code **)(*(long *)this_01 + 0x60))(this_01,local_48);
    std::vector<RiftaShopCommonWidget*,std::allocator<RiftaShopCommonWidget*>>::push_back
              ((vector<RiftaShopCommonWidget*,std::allocator<RiftaShopCommonWidget*>> *)
               (this + 0x148),&local_48);
  }
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  PlayerInfo::SetMaterialNum(this_03,0x5a35,*(int *)(param_1 + 0x48));
  std::string::string((string *)&local_20,"UIButton_Refresh");
  pPVar16 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  this_04 = (RiftShopMgr *)Sexy::LazySingleton<RiftShopMgr>::GetInstancePtr();
  iVar3 = RiftShopMgr::getRefreshShopTimes(this_04);
  if (pPVar16 != (PVZ2UIButton *)0x0) {
    pAVar17 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
    bVar1 = ADManager::CanWatchAD(pAVar17,0x10);
    (**(code **)(*(long *)pPVar16 + 0x188))(pPVar16,iVar3 == 0 & (bVar1 ^ 1));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* RiftaShop::UpdateShopUI(RiftaShopData const&) */

void __thiscall RiftaShop::UpdateShopUI(RiftaShop *this,RiftaShopData *param_1)

{
  initWidgets(this,param_1);
  refreshMaterial(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftaShop::OnCreate() */

void __thiscall RiftaShop::OnCreate(RiftaShop *this)

{
  LawnApp *this_00;
  char cVar1;
  long lVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  RiftaShopData *pRVar3;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  PVZ2UIDialog *pPVar4;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  wstring awStack_b0 [8];
  wstring awStack_a8 [24];
  Delegate0 aDStack_90 [48];
  string asStack_60 [88];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_60,"Background_0");
  lVar2 = UI::Dialog::GetWidget((Dialog *)this,asStack_60);
  std::string::~string(asStack_60);
  nop();
  *(int *)(lVar2 + 0x48) = (*(int *)(this + 0x50) - *(int *)(lVar2 + 0x50)) / 2;
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<RiftShopMgr>::GetInstancePtr();
  pRVar3 = (RiftaShopData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_01);
  RiftaShopData::RiftaShopData((RiftaShopData *)asStack_60,pRVar3);
  UpdateShopUI(this,(RiftaShopData *)asStack_60);
  cVar1 = RiftUtils::PlayerCanPlay();
  if (cVar1 == '\0') {
    this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
    if ((this_03 != (PlayerInfo *)0x0) &&
       (cVar1 = PlayerInfo::GetRiftStoreFirstEntered(this_03), this_00 = gLawnApp, cVar1 == '\0')) {
      FUN_05478178(awStack_b0,L"[RIFT_SEASON_END_STORE_TITLE]",auStack_c0);
      FUN_05478178(awStack_a8,L"[RIFT_SEASON_END_STORE_TIP]",auStack_b8);
      pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_b0,awStack_a8);
      FUN_05476c50(awStack_a8);
      nop();
      FUN_05476c50(awStack_b0);
      nop();
      FUN_05478178(awStack_b0,L"[BUTTON_OK]",auStack_b8);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_90,awStack_a8);
      PVZ2UIDialog::AddButton(pPVar4,awStack_b0,aDStack_90,1);
      FUN_05476c50(awStack_b0);
      nop();
      PlayerInfo::SetRiftStoreFirstEntered(this_03,true);
    }
  }
  RiftaShopData::~RiftaShopData((RiftaShopData *)asStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftaShop::OnShopBuyFinish(bool, S2C_ShopItemPurchaseInfo const*) */

void __thiscall
RiftaShop::OnShopBuyFinish(RiftaShop *this,bool param_1,S2C_ShopItemPurchaseInfo *param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  DaveTreasureDataManager *this_00;
  char *pcVar6;
  TGALogMgr *pTVar7;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  UIWidgetText *this_03;
  GAME_ITEM_INFO *__n;
  ulong uVar8;
  undefined8 uVar9;
  int iVar10;
  int local_280;
  undefined4 local_27c;
  undefined4 local_278;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_270 [24];
  undefined4 local_258 [8];
  undefined1 auStack_238 [48];
  string asStack_208 [32];
  GAME_ITEM_INFO aGStack_1e8 [112];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    if ((*(int *)(param_2 + 0x14) != 8) || (*(int *)(param_2 + 0x20) != 0x5a35)) goto LAB_04d8897c;
    uVar9 = *(undefined8 *)(this + 0x148);
    uVar8 = 0;
    uVar3 = FUN_04d844a8(uVar9,*(undefined8 *)(this + 0x150));
    if (uVar3 != 0) {
      do {
        puVar4 = (undefined8 *)FUN_04d844b4(uVar9,uVar8);
        if ((FishingModule *)*puVar4 != (FishingModule *)0x0) {
          iVar10 = *(int *)(param_2 + 0x18);
          iVar1 = FishingModule::GetCannonLevel((FishingModule *)*puVar4);
          if (iVar10 == iVar1) {
            puVar4 = (undefined8 *)FUN_04d844b4(*(undefined8 *)(this + 0x148),uVar8);
            CommonRewardItemWidget::SetSoldOut((CommonRewardItemWidget *)*puVar4,true);
            plVar5 = (long *)FUN_04d844b4(*(undefined8 *)(this + 0x148),uVar8);
            FUN_04d848e8(*(undefined8 *)(*plVar5 + 0x1b0));
          }
          uVar9 = *(undefined8 *)(this + 0x148);
          uVar3 = FUN_04d844a8(uVar9,*(undefined8 *)(this + 0x150));
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar3);
    }
    ProfileChangeItemAmount(0x5a35,-*(int *)(param_2 + 0x24),false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_1e8);
    iVar10 = *(int *)(param_2 + 0x18);
    if (iVar10 - 0x5a4aU < 2) {
      iVar10 = 0x5a48;
    }
    else if (iVar10 - 0x5a4cU < 2) {
      iVar10 = 0x5a49;
    }
    else if (iVar10 - 0x5a4eU < 2) {
      iVar10 = 0x5a36;
    }
    else if (iVar10 - 0x5a50U < 3) {
      iVar10 = 0x5a37;
    }
    ProfileChangeItemAmount(iVar10,*(int *)(param_2 + 0x1c),false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_1e8);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_270);
    local_278 = 0;
    local_27c = *(undefined4 *)(param_2 + 0x1c);
    local_280 = iVar10;
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_270,
               (LotteryBonus *)&local_280);
    this_00 = (DaveTreasureDataManager *)
              Sexy::LazySingleton<DaveTreasureDataManager>::GetInstancePtr();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aGStack_1e8);
    __n = aGStack_1e8;
    DaveTreasureDataManager::ShowBonus(this_00,(vector *)avStack_270,(vector *)aGStack_1e8);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)aGStack_1e8);
    TGAPennyPursuitData::TGAPennyPursuitData((TGAPennyPursuitData *)local_258);
    DString::DString((DString *)aGStack_1e8,4);
    pcVar6 = (char *)DString::c_str((DString *)aGStack_1e8);
    std::string::append((string *)local_258,pcVar6,(size_t)__n);
    DString::~DString((DString *)aGStack_1e8);
    DString::DString((DString *)aGStack_1e8,*(int *)(param_2 + 0x24));
    pcVar6 = (char *)DString::c_str((DString *)aGStack_1e8);
    std::string::append(asStack_208,pcVar6,(size_t)__n);
    DString::~DString((DString *)aGStack_1e8);
    std::string::string((string *)aGStack_1e8,"");
    uVar2 = operator|(0x10,8);
    FUN_05462618(auStack_178,aGStack_1e8,uVar2);
    std::string::~string((string *)aGStack_1e8);
    nop();
    uVar9 = FUN_0546065c(auStack_168,iVar10);
    uVar9 = FUN_054603b8(uVar9,&DAT_05593348);
    uVar9 = FUN_0546065c(uVar9,*(undefined4 *)(param_2 + 0x1c));
    FUN_054603b8(uVar9,&DAT_05594620);
    FUN_05462824(aGStack_1e8,auStack_178);
    FUN_05474278(auStack_238,aGStack_1e8);
    std::string::~string((string *)aGStack_1e8);
    pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGAPennyPursuitData::TGAPennyPursuitData
              ((TGAPennyPursuitData *)aGStack_1e8,(TGAPennyPursuitData *)local_258);
    TGALogMgr::LogPennyPursuit(pTVar7,aGStack_1e8);
    TGAPennyPursuitData::~TGAPennyPursuitData((TGAPennyPursuitData *)aGStack_1e8);
    FUN_054617bc(auStack_178);
    TGAPennyPursuitData::~TGAPennyPursuitData((TGAPennyPursuitData *)local_258);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_270);
  }
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  local_258[0] = PlayerInfo::GetMaterialNum(this_02,0x5a35);
  std::string::string((string *)aGStack_1e8,"UIText_Currency");
  this_03 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)aGStack_1e8);
  std::string::~string((string *)aGStack_1e8);
  nop();
  if (this_03 != (UIWidgetText *)0x0) {
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_258);
    UIWidgetText::SetString(this_03,(string *)aGStack_1e8);
    std::string::~string((string *)aGStack_1e8);
  }
LAB_04d8897c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

