// Class: UITheaterShop


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITheaterShop::GetLayoutName() */

void __thiscall UITheaterShop::GetLayoutName(UITheaterShop *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UITheaterShop");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITheaterShop::WidgetTouchCallback(CommonRewardItemData const&) */

void __thiscall
UITheaterShop::WidgetTouchCallback(UITheaterShop *this,CommonRewardItemData *param_1)

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
  iVar1 = PlayerInfo::GetMaterialNum(this_01,0x5a33);
  if (iVar1 < *(int *)(param_1 + 0xc)) {
    this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_02 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_02,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[MATERIAL_NOT_ENOUGH]");
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
              (plVar4,6,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),
               *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITheaterShop::IsAdvertisementEnable() */

void UITheaterShop::IsAdvertisementEnable(void)

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
  if (((DAT_06ac7920 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ac7920), iVar2 != 0)) {
    DAT_06ac7918 = LawnApp::IsAdChannel(gLawnApp,3);
    __cxa_guard_release(&DAT_06ac7920);
  }
  if (((DAT_06ac7788 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ac7788), iVar2 != 0)) {
    plVar4 = (long *)EASquared::Instance();
    DAT_06ac75f0 = (**(code **)(*plVar4 + 0xb8))(plVar4,0x2a99);
    __cxa_guard_release(&DAT_06ac7788);
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
  if (DAT_06ac7918 != '\0') {
    bVar5 = (cVar1 == '\0' || 0 < local_18) & DAT_06ac75f0;
  }
  GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
            ((GridItemCardGameZombieActionData *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITheaterShop::refreshMaterial() */

void __thiscall UITheaterShop::refreshMaterial(UITheaterShop *this)

{
  UIWidgetText *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  undefined4 local_18 [2];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Currency");
  this_00 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (UIWidgetText *)0x0) {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    local_18[0] = PlayerInfo::GetMaterialNum(this_02,0x5a33);
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_18);
    UIWidgetText::SetString(this_00,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITheaterShop::ButtonDepress(int) */

void __thiscall UITheaterShop::ButtonDepress(UITheaterShop *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIMessageBox *pUVar2;
  Image *pIVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x58) {
    UISingletonDialog<UITheaterShop>::CloseDialog();
  }
  else if (param_1 == 0x6f) {
    if (this[0x131] == (UITheaterShop)0x0) {
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      iVar1 = PlayerInfo::GetMaterialNum(this_01,0x5a33);
      if (iVar1 < 1) {
        pUVar2 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (pUVar2 != (UIMessageBox *)0x0) {
          UIMessageBox::SetShowType(pUVar2,2);
          TodStringTranslate(L"[REVIVE_TIP]");
          TodStringTranslate(L"[MATERIAL_NOT_ENOUGH]");
          TodStringTranslate(L"[BUTTON_OK]");
          UIMessageBox::SetMessage(pUVar2,awStack_60,awStack_68);
          std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
          pIVar3 = (Image *)StringHelper::ToImage(asStack_50,false);
          UIMessageBox::SetBackground(pUVar2,pIVar3);
          std::string::~string(asStack_50);
          nop();
          lVar4 = UIMessageBox::GetButtonOK(pUVar2);
          thunk_FUN_05477b9c(lVar4 + 0xd8,asStack_58);
          FUN_05476c50(asStack_58);
          FUN_05476c50(awStack_60);
          FUN_05476c50(awStack_68);
        }
      }
      else {
        pUVar2 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (pUVar2 != (UIMessageBox *)0x0) {
          UIMessageBox::SetShowType(pUVar2,6);
          TodStringTranslate(L"[REVIVE_TIP]");
          TodStringTranslate(L"[THEATER_REFRESH_CURRENCY_CONFIRM]");
          TodStringTranslate(L"[BUTTON_OK]");
          UIMessageBox::SetMessage(pUVar2,awStack_60,awStack_68);
          std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
          pIVar3 = (Image *)StringHelper::ToImage(asStack_50,false);
          UIMessageBox::SetBackground(pUVar2,pIVar3);
          std::string::~string(asStack_50);
          nop();
          lVar4 = UIMessageBox::GetButtonOK(pUVar2);
          thunk_FUN_05477b9c(lVar4 + 0xd8,asStack_58);
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,ConfirmBuy);
          Sexy::Delegate2<UIMessageBox*,int>::
          Delegate2<UITheaterShop,void(UITheaterShop::*)(UIMessageBox*,int)>(aDStack_38,asStack_50);
          UIMessageBox::SetCallback(pUVar2,aDStack_38);
          FUN_05476c50(asStack_58);
          FUN_05476c50(awStack_60);
          FUN_05476c50(awStack_68);
        }
      }
    }
    else {
      plVar5 = (long *)EASquared::Instance();
      pcVar6 = *(code **)(*plVar5 + 0x28);
      std::string::string(asStack_58,"DailySignAdvertisement");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onAdsFinish);
      Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::
      Delegate1<UITheaterShop,void(UITheaterShop::*)(EASquaredAdFinishedReason::EASquaredAdFinishedReason)>
                ((Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason> *)aDStack_38,
                 asStack_50);
      (*pcVar6)(plVar5,asStack_58,
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


/* non-virtual thunk to UITheaterShop::ButtonDepress(int) */

void __thiscall UITheaterShop::ButtonDepress(UITheaterShop *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UITheaterShop::UITheaterShop() */

void __thiscall UITheaterShop::UITheaterShop(UITheaterShop *this)

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
  
  UISingletonDialog<UITheaterShop>::UISingletonDialog((UISingletonDialog<UITheaterShop> *)this);
  this[0x131] = (UITheaterShop)0x0;
  *(undefined ***)this = &PTR_GetClass_067159b0;
  *(undefined **)(this + 0xd8) = &DAT_06715d00;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnShopBuyFinish);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<bool,S2C_ShopItemPurchaseInfo_const*,Sexy::CBMemberTranslatorX<UITheaterShop,void(UITheaterShop::*)(bool,S2C_ShopItemPurchaseInfo_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyShopBuyFinishDetails,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<UITheaterShop,void(UITheaterShop::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_70);
  return;
}


/* UITheaterShop::~UITheaterShop() */

void __thiscall UITheaterShop::~UITheaterShop(UITheaterShop *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06715d00;
  *(undefined ***)this = &PTR_GetClass_067159b0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<CommonRewardItemWidget*,std::allocator<CommonRewardItemWidget*>>::~vector
            ((vector<CommonRewardItemWidget*,std::allocator<CommonRewardItemWidget*>> *)
             (this + 0x138));
  UISingletonDialog<UITheaterShop>::~UISingletonDialog((UISingletonDialog<UITheaterShop> *)this);
  return;
}


/* UITheaterShop::~UITheaterShop() */

void __thiscall UITheaterShop::~UITheaterShop(UITheaterShop *this)

{
  ~UITheaterShop(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITheaterShop::refreshShop(int) */

void __thiscall UITheaterShop::refreshShop(UITheaterShop *this,int param_1)

{
  undefined8 uVar1;
  DNetwork *this_00;
  int local_d54 [5];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1776];
  string asStack_5f8 [1520];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_d54[0] = param_1;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"t");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d54);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03ab6044(afStack_d38,this,local_d54[0]);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_5f8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UITheaterShop::ConfirmBuy(UIMessageBox*, int) */

void __thiscall UITheaterShop::ConfirmBuy(UITheaterShop *this,UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  refreshShop(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITheaterShop::onAdsFinish(EASquaredAdFinishedReason::EASquaredAdFinishedReason) */

void __thiscall UITheaterShop::onAdsFinish(UITheaterShop *this,int param_2)

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
    refreshShop(this,2);
    if (local_18 == 0) {
      this[0x131] = (UITheaterShop)0x0;
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
/* UITheaterShop::initWidgets(TheaterShopData const&) */

void __thiscall UITheaterShop::initWidgets(UITheaterShop *this,TheaterShopData *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Widget *pWVar7;
  undefined4 *puVar8;
  CommonRewardItemWidget *this_00;
  ulong uVar9;
  ulong uVar10;
  CommonRewardItemWidget *local_80;
  Insets aIStack_78 [16];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  string asStack_50 [24];
  Delegate1<CommonRewardItemData_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<CommonRewardItemWidget*,std::allocator<CommonRewardItemWidget*>>::clear
            ((vector<CommonRewardItemWidget*,std::allocator<CommonRewardItemWidget*>> *)
             (this + 0x138));
  std::string::string(asStack_50,"Widget_Rewards");
  pWVar7 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_50);
  std::string::~string(asStack_50);
  nop();
  (**(code **)(*(long *)pWVar7 + 0x80))(pWVar7,1,1);
  for (uVar10 = 0;
      uVar9 = FUN_03ab57ac(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20)),
      uVar10 < uVar9; uVar10 = uVar10 + 1) {
    iVar1 = FUN_03ab60a0(0x14);
    iVar2 = FUN_03ab60a0(0x82);
    iVar3 = FUN_03ab60a0(0x1e);
    iVar4 = FUN_03ab60a0(10);
    iVar5 = FUN_03ab60a0(0x96);
    iVar6 = FUN_03ab60a0(0xf);
    Sexy::Insets::Insets
              (aIStack_78,iVar1 + (iVar2 + iVar3) * ((int)uVar10 % 3),
               iVar4 + (iVar5 + iVar6) * ((int)uVar10 / 3),iVar2,iVar5);
    CommonRewardItemData::CommonRewardItemData((CommonRewardItemData *)&local_68);
    puVar8 = (undefined4 *)FUN_03ab57d4(*(undefined8 *)(param_1 + 0x18),uVar10);
    local_68 = *puVar8;
    local_64 = puVar8[1];
    local_60 = 0x5a33;
    local_58 = *(byte *)(puVar8 + 2) ^ 1;
    local_5c = puVar8[3];
    this_00 = ::operator_new(0x180);
    CommonRewardItemWidget::CommonRewardItemWidget(this_00);
    local_80 = this_00;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,WidgetTouchCallback);
    Sexy::Delegate1<CommonRewardItemData_const&>::
    Delegate1<UITheaterShop,void(UITheaterShop::*)(CommonRewardItemData_const&)>
              (aDStack_38,asStack_50);
    UIRiftZombossRewardSelect::SetFunctionOne((UIRiftZombossRewardSelect *)this_00,aDStack_38);
    (**(code **)(*(long *)local_80 + 0x310))(local_80,(CommonRewardItemData *)&local_68);
    (**(code **)(*(long *)local_80 + 0x1a0))(local_80,aIStack_78);
    (**(code **)(*(long *)pWVar7 + 0x60))(pWVar7,local_80);
    std::vector<CommonRewardItemWidget*,std::allocator<CommonRewardItemWidget*>>::push_back
              ((vector<CommonRewardItemWidget*,std::allocator<CommonRewardItemWidget*>> *)
               (this + 0x138),&local_80);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITheaterShop::OnCreate() */

void __thiscall UITheaterShop::OnCreate(UITheaterShop *this)

{
  UIWidgetBackground *pUVar1;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  wchar_t local_30 [2];
  pair<wchar_t_const,wchar_t> apStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_20,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
  local_30[1] = 1;
  local_30[0] = L'⨔';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,local_30 + 1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)asStack_20,
             (pair *)apStack_28);
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestActivityList(this_01,(vector *)asStack_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITheaterShop::init() */

void __thiscall UITheaterShop::init(UITheaterShop *this)

{
  char cVar1;
  UITheaterShop UVar2;
  int iVar3;
  TGALogMgr *pTVar4;
  PVZ2UIButton *this_00;
  TGATourismOctoberData *in_x2;
  TheaterShopData aTStack_148 [48];
  TGATourismOctoberData aTStack_118 [72];
  TGARichManData aTStack_d0 [72];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03ab57a0(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    TheaterShopData::TheaterShopData(aTStack_148);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aTStack_148);
    if (cVar1 != '\0') {
      initWidgets(this,aTStack_148);
      UVar2 = (UITheaterShop)IsAdvertisementEnable();
      this[0x131] = UVar2;
      if (UVar2 != (UITheaterShop)0x0) {
        in_x2 = aTStack_118;
        std::string::string((string *)aTStack_d0,"UIButton_Refresh");
        this_00 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)aTStack_d0);
        std::string::~string((string *)aTStack_d0);
        nop();
        TodStringTranslate(L"[THEATER_REFRESH_ADS]");
        PVZ2UIButton::SetLabelText(this_00,(wstring *)aTStack_d0);
        FUN_05476c50(aTStack_d0);
      }
      refreshMaterial(this);
      TGATourismOctoberData::TGATourismOctoberData(aTStack_118);
      std::string::append((string *)aTStack_118,"4",(size_t)in_x2);
      pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGARichManData::TGARichManData(aTStack_d0,(TGARichManData *)aTStack_118);
      TGALogMgr::LogRichMan(pTVar4,aTStack_d0);
      TGATourismOctoberData::~TGATourismOctoberData((TGATourismOctoberData *)aTStack_d0);
      TGATourismOctoberData::~TGATourismOctoberData(aTStack_118);
    }
    TheaterShopData::~TheaterShopData(aTStack_148);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITheaterShop::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
UITheaterShop::onNotifyRefreshActivityList(UITheaterShop *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_1c = 0x2a14;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      init(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITheaterShop::OnShopBuyFinish(bool, S2C_ShopItemPurchaseInfo const*) */

void __thiscall
UITheaterShop::OnShopBuyFinish(UITheaterShop *this,bool param_1,S2C_ShopItemPurchaseInfo *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  DaveTreasureDataManager *this_00;
  char *pcVar5;
  TGALogMgr *pTVar6;
  GAME_ITEM_INFO *__n;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_b0 [24];
  TGATourismOctoberData aTStack_98 [16];
  string asStack_88 [40];
  string asStack_60 [8];
  string asStack_58 [8];
  GAME_ITEM_INFO aGStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    if ((*(int *)(param_2 + 0x14) != 6) || (*(int *)(param_2 + 0x20) != 0x5a33)) goto LAB_03aba594;
    uVar8 = *(undefined8 *)(this + 0x138);
    uVar7 = 0;
    uVar3 = FUN_03ab57dc(uVar8,*(undefined8 *)(this + 0x140));
    if (uVar3 != 0) {
      do {
        puVar4 = (undefined8 *)FUN_03ab57e8(uVar8,uVar7);
        if ((FishingModule *)*puVar4 != (FishingModule *)0x0) {
          iVar1 = *(int *)(param_2 + 0x18);
          iVar2 = FishingModule::GetCannonLevel((FishingModule *)*puVar4);
          if (iVar1 == iVar2) {
            puVar4 = (undefined8 *)FUN_03ab57e8(*(undefined8 *)(this + 0x138),uVar7);
            CommonRewardItemWidget::SetSoldOut((CommonRewardItemWidget *)*puVar4,true);
          }
          uVar8 = *(undefined8 *)(this + 0x138);
          uVar3 = FUN_03ab57dc(uVar8,*(undefined8 *)(this + 0x140));
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar3);
    }
    ProfileChangeItemAmount(0x5a33,-*(int *)(param_2 + 0x24),false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_50);
    ProfileChangeItemAmount(*(int *)(param_2 + 0x18),*(int *)(param_2 + 0x1c),false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_50);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_b0);
    local_b8 = 0;
    local_c0 = *(undefined4 *)(param_2 + 0x18);
    local_bc = *(undefined4 *)(param_2 + 0x1c);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_b0,
               (LotteryBonus *)&local_c0);
    this_00 = (DaveTreasureDataManager *)
              Sexy::LazySingleton<DaveTreasureDataManager>::GetInstancePtr();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aGStack_50);
    __n = aGStack_50;
    DaveTreasureDataManager::ShowBonus(this_00,(vector *)avStack_b0,(vector *)aGStack_50);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)aGStack_50);
    TGATourismOctoberData::TGATourismOctoberData(aTStack_98);
    std::string::append((string *)aTStack_98,"6",(size_t)__n);
    DString::DString((DString *)aGStack_50,*(int *)(param_2 + 0x24));
    pcVar5 = (char *)DString::c_str((DString *)aGStack_50);
    std::string::append(asStack_88,pcVar5,(size_t)__n);
    DString::~DString((DString *)aGStack_50);
    DString::DString((DString *)aGStack_50,*(int *)(param_2 + 0x18));
    pcVar5 = (char *)DString::c_str((DString *)aGStack_50);
    std::string::append(asStack_60,pcVar5,(size_t)__n);
    DString::~DString((DString *)aGStack_50);
    DString::DString((DString *)aGStack_50,*(int *)(param_2 + 0x1c));
    pcVar5 = (char *)DString::c_str((DString *)aGStack_50);
    std::string::append(asStack_58,pcVar5,(size_t)__n);
    DString::~DString((DString *)aGStack_50);
    pTVar6 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGARichManData::TGARichManData((TGARichManData *)aGStack_50,(TGARichManData *)aTStack_98);
    TGALogMgr::LogRichMan(pTVar6,aGStack_50);
    TGATourismOctoberData::~TGATourismOctoberData((TGATourismOctoberData *)aGStack_50);
    TGATourismOctoberData::~TGATourismOctoberData(aTStack_98);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_b0);
  }
  refreshMaterial(this);
LAB_03aba594:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

