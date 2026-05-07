// Class: UINewPVPShop


/* UINewPVPShop::ScrollTargetReached(Sexy::ScrollWidget*) */

void UINewPVPShop::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINewPVPShop::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UINewPVPShop::ScrollTargetReached(UINewPVPShop *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UINewPVPShop::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UINewPVPShop::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINewPVPShop::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UINewPVPShop::ScrollTargetInterrupted(UINewPVPShop *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPShop::GetLayoutName() */

void __thiscall UINewPVPShop::GetLayoutName(UINewPVPShop *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UINewPVPShop");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UINewPVPShop::closeDescriptionWidget() */

void __thiscall UINewPVPShop::closeDescriptionWidget(UINewPVPShop *this)

{
  if (*(long *)(this + 0x158) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x158))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x158));
    *(undefined8 *)(this + 0x158) = 0;
  }
  return;
}


/* UINewPVPShop::refreshShop() */

void UINewPVPShop::refreshShop(void)

{
  NetworkMgr *this;
  long *plVar1;
  
  this = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this);
  (**(code **)(*plVar1 + 0x398))(plVar1,1,0);
  return;
}


/* UINewPVPShop::costOnceBuyLimit(int) */

void UINewPVPShop::costOnceBuyLimit(int param_1)

{
  NetworkMgr *this;
  long *plVar1;
  
  this = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this);
  (**(code **)(*plVar1 + 0x398))(plVar1,1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPShop::updateTimer() */

void __thiscall UINewPVPShop::updateTimer(UINewPVPShop *this)

{
  UIWidgetText *pUVar1;
  int iVar2;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Time");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    fVar3 = (float)TimeUtil::GetTimeCountdown(1,-1);
    iVar2 = (int)fVar3;
    Sexy::StrFormat(L"%02d: %02d: %02d",asStack_10,(ulong)(uint)(iVar2 / 0xe10),
                    (ulong)(uint)((iVar2 / 0x3c) % 0x3c),(ulong)(uint)(iVar2 % 0x3c));
    PuzzleTip::SetTip(pUVar1,asStack_10);
    if (iVar2 < 2) {
      if (this[0x160] == (UINewPVPShop)0x0) {
        this[0x160] = (UINewPVPShop)0x1;
        refreshShop();
      }
    }
    else if ((0x1517e < iVar2) && (this[0x160] != (UINewPVPShop)0x0)) {
      this[0x160] = (UINewPVPShop)0x0;
    }
    FUN_05476c50(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPShop::Update() */

void __thiscall UINewPVPShop::Update(UINewPVPShop *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  updateTimer(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPShop::refreshMaterial() */

void __thiscall UINewPVPShop::refreshMaterial(UINewPVPShop *this)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIWidgetText *this_02;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  local_14 = PlayerInfo::GetMaterialNum(this_01,0x5acb);
  std::string::string(asStack_10,"UIText_Currency");
  this_02 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_02 != (UIWidgetText *)0x0) {
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_14);
    UIWidgetText::SetString(this_02,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPShop::showDescriptionWidget() */

void __thiscall UINewPVPShop::showDescriptionWidget(UINewPVPShop *this)

{
  ActivityDescriptionUI *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x158) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 0x158) = this_00;
    TodStringTranslate(L"[NEW_PVP_SHOP_INFO_DETAIL]");
    TodStringTranslate(L"[NEW_PVP_SHOP_INFO_TITLE]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x158);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,closeDescriptionWidget);
    Sexy::Delegate0::Delegate0<UINewPVPShop,void(UINewPVPShop::*)()>(aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x158));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x158));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x158));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x158));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPShop::ButtonDepress(int) */

void __thiscall UINewPVPShop::ButtonDepress(UINewPVPShop *this,int param_1)

{
  if (param_1 == 0x58) {
    UISingletonDialog<UINewPVPShop>::CloseDialog();
    return;
  }
  if (param_1 == 99) {
    showDescriptionWidget(this);
    return;
  }
  return;
}


/* non-virtual thunk to UINewPVPShop::ButtonDepress(int) */

void __thiscall UINewPVPShop::ButtonDepress(UINewPVPShop *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UINewPVPShop::UINewPVPShop() */

void __thiscall UINewPVPShop::UINewPVPShop(UINewPVPShop *this)

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
  
  UISingletonDialog<UINewPVPShop>::UISingletonDialog((UISingletonDialog<UINewPVPShop> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_06658b20;
  *(undefined **)(this + 0xd8) = &DAT_06658e80;
  *(undefined ***)(this + 0x138) = &PTR__UINewPVPShop_06658ec8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  *(undefined8 *)(this + 0x158) = 0;
  this[0x160] = (UINewPVPShop)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnShopBuyFinish);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<bool,S2C_ShopItemPurchaseInfo_const*,Sexy::CBMemberTranslatorX<UINewPVPShop,void(UINewPVPShop::*)(bool,S2C_ShopItemPurchaseInfo_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyShopBuyFinishDetails,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyBuyChest);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<int,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>&,Sexy::CBMemberTranslatorX<UINewPVPShop,void(UINewPVPShop::*)(int,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>&)>>
            ((MessageRouter *)puVar1,Message::NewPVPShopBuyChest,&local_70);
  return;
}


/* UINewPVPShop::~UINewPVPShop() */

void __thiscall UINewPVPShop::~UINewPVPShop(UINewPVPShop *this)

{
  *(undefined ***)(this + 0x138) = &PTR__UINewPVPShop_06658ec8;
  *(undefined ***)this = &PTR_GetClass_06658b20;
  *(undefined **)(this + 0xd8) = &DAT_06658e80;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<NewPVPShopCommonWidget*,std::allocator<NewPVPShopCommonWidget*>>::~vector
            ((vector<NewPVPShopCommonWidget*,std::allocator<NewPVPShopCommonWidget*>> *)
             (this + 0x140));
  UISingletonDialog<UINewPVPShop>::~UISingletonDialog((UISingletonDialog<UINewPVPShop> *)this);
  return;
}


/* non-virtual thunk to UINewPVPShop::~UINewPVPShop() */

void __thiscall UINewPVPShop::~UINewPVPShop(UINewPVPShop *this)

{
  ~UINewPVPShop(this + -0x138);
  return;
}


/* UINewPVPShop::~UINewPVPShop() */

void __thiscall UINewPVPShop::~UINewPVPShop(UINewPVPShop *this)

{
  ~UINewPVPShop(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UINewPVPShop::~UINewPVPShop() */

void __thiscall UINewPVPShop::~UINewPVPShop(UINewPVPShop *this)

{
  ~UINewPVPShop(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPShop::getGoodsPriceByIndex(int) */

void __thiscall UINewPVPShop::getGoodsPriceByIndex(UINewPVPShop *this,int param_1)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_00;
  Network_NewPVPShopData *pNVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  Network_NewPVPShopData aNStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)Sexy::LazySingleton<NewPVPShopMgr>::GetInstancePtr();
  pNVar1 = (Network_NewPVPShopData *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root(this_00);
  Network_NewPVPShopData::Network_NewPVPShopData(aNStack_38,pNVar1);
  uVar2 = FUN_035503a0(local_20,local_18);
  if ((ulong)(long)param_1 < uVar2) {
    lVar3 = FUN_035503dc(local_20,(long)param_1);
    uVar4 = *(undefined4 *)(lVar3 + 8);
  }
  else {
    uVar4 = 0xffffffff;
  }
  Network_NewPVPShopData::~Network_NewPVPShopData(aNStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPShop::getChestIdFromItemIndex(int) */

void __thiscall UINewPVPShop::getChestIdFromItemIndex(UINewPVPShop *this,int param_1)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_00;
  Network_NewPVPShopData *pNVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  Network_NewPVPShopData aNStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)Sexy::LazySingleton<NewPVPShopMgr>::GetInstancePtr();
  pNVar1 = (Network_NewPVPShopData *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root(this_00);
  Network_NewPVPShopData::Network_NewPVPShopData(aNStack_38,pNVar1);
  uVar2 = FUN_035503a0(local_20,local_18);
  if ((ulong)(long)param_1 < uVar2) {
    lVar3 = FUN_035503dc(local_20,(long)param_1);
    uVar4 = *(undefined4 *)(lVar3 + 0x14);
  }
  else {
    uVar4 = 0xffffffff;
  }
  Network_NewPVPShopData::~Network_NewPVPShopData(aNStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPShop::initWidgets(Network_NewPVPShopData const&) */

void __thiscall UINewPVPShop::initWidgets(UINewPVPShop *this,Network_NewPVPShopData *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  Widget *pWVar10;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  long lVar11;
  ulong uVar12;
  Network_NewPVPShopItemData *pNVar13;
  NewPVPShopCommonWidget *this_02;
  ProfileMgr *this_03;
  PlayerInfo *this_04;
  ulong uVar14;
  Insets aIStack_b8 [16];
  Insets aIStack_a8 [16];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  vector<int,std::allocator<int>> avStack_80 [24];
  NewPVPShopChestWidget *local_68 [3];
  string asStack_50 [12];
  int local_44;
  int local_40;
  int local_3c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<NewPVPShopCommonWidget*,std::allocator<NewPVPShopCommonWidget*>>::clear
            ((vector<NewPVPShopCommonWidget*,std::allocator<NewPVPShopCommonWidget*>> *)
             (this + 0x140));
  std::string::string(asStack_50,"Widget_Rewards");
  pWVar10 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_50);
  std::string::~string(asStack_50);
  nop();
  (**(code **)(*(long *)pWVar10 + 0x80))(pWVar10,1,1);
  uVar14 = FUN_035503a0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  iVar1 = FUN_0355030c(*(undefined4 *)(pWVar10 + 0x50));
  iVar2 = FUN_03550310(*(undefined4 *)(pWVar10 + 0x54));
  iVar3 = FUN_03551df0(6);
  iVar4 = FUN_03551df0(1);
  iVar5 = FUN_03551df0(0x14);
  iVar6 = FUN_03551df0(10);
  iVar2 = iVar5 + (iVar2 + iVar4 * -2 + iVar6 * -2) / 2;
  iVar1 = (iVar1 + iVar3 * -2 + iVar5 * -2) / 3;
  iVar6 = iVar2 + iVar6;
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  iVar7 = FUN_0355030c(*(undefined4 *)(pWVar10 + 0x50));
  iVar8 = FUN_03550310(*(undefined4 *)(pWVar10 + 0x54));
  Sexy::Insets::Insets(aIStack_b8,0,0,iVar7,iVar8);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_b8);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  (**(code **)(*(long *)pWVar10 + 0x60))(pWVar10,this_00);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  uVar9 = FUN_0355030c(*(undefined4 *)(pWVar10 + 0x50));
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,uVar9,iVar4 + iVar6 * (int)((float)uVar14 * 0.33333334));
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  for (uVar14 = 0;
      uVar12 = FUN_035503a0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20)),
      uVar14 < uVar12; uVar14 = uVar14 + 1) {
    iVar7 = (int)uVar14;
    Sexy::Insets::Insets
              (aIStack_a8,iVar3 + (iVar1 + iVar5) * (iVar7 % 3),iVar4 + iVar6 * (iVar7 / 3),iVar1,
               iVar2);
    CommonRewardItemData::CommonRewardItemData((CommonRewardItemData *)&local_98);
    pNVar13 = (Network_NewPVPShopItemData *)FUN_03550408(*(undefined8 *)(param_1 + 0x18),uVar14);
    local_98 = *(undefined4 *)pNVar13;
    local_94 = *(undefined4 *)(pNVar13 + 4);
    local_8c = *(undefined4 *)(pNVar13 + 8);
    local_90 = 0x5acb;
    Network_NewPVPShopItemData::Network_NewPVPShopItemData
              ((Network_NewPVPShopItemData *)asStack_50,pNVar13);
    if (local_3c < 1) {
      this_02 = ::operator_new(0x1c8);
      NewPVPShopCommonWidget::NewPVPShopCommonWidget(this_02,iVar7);
    }
    else {
      this_02 = ::operator_new(0x210);
      NewPVPShopChestWidget::NewPVPShopChestWidget((NewPVPShopChestWidget *)this_02,iVar7);
      lVar11 = FUN_03550408(*(undefined8 *)(param_1 + 0x18),uVar14);
      uVar9 = *(undefined4 *)(lVar11 + 0x14);
      std::vector<int,std::allocator<int>>::vector(avStack_80,(vector *)(lVar11 + 0x18));
      lVar11 = FUN_03550408(*(undefined8 *)(param_1 + 0x18),uVar14);
      std::vector<int,std::allocator<int>>::vector
                ((vector<int,std::allocator<int>> *)local_68,(vector *)(lVar11 + 0x30));
      NewPVPShopChestWidget::setChestInfo
                ((NewPVPShopChestWidget *)this_02,uVar9,avStack_80,
                 (vector<int,std::allocator<int>> *)local_68);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_68);
      std::vector<int,std::allocator<int>>::~vector(avStack_80);
    }
    *(NewPVPShopChestWidget *)(this_02 + 0x59) = (NewPVPShopChestWidget)0x0;
    local_68[0] = (NewPVPShopChestWidget *)this_02;
    (**(code **)(*(long *)this_02 + 0x1a0))(this_02,aIStack_a8);
    FUN_03550364(local_68[0] + 0x1a8,-iVar5);
    (**(code **)(*(long *)local_68[0] + 0x310))(local_68[0],(CommonRewardItemData *)&local_98);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,local_68[0]);
    if (uVar14 != 0) {
      NewPVPShopCommonWidget::SetBuyTimes((NewPVPShopCommonWidget *)local_68[0],local_40,local_44);
    }
    std::vector<NewPVPShopCommonWidget*,std::allocator<NewPVPShopCommonWidget*>>::push_back
              ((vector<NewPVPShopCommonWidget*,std::allocator<NewPVPShopCommonWidget*>> *)
               (this + 0x140),(NewPVPShopCommonWidget **)local_68);
    Network_NewPVPShopItemData::~Network_NewPVPShopItemData
              ((Network_NewPVPShopItemData *)asStack_50);
  }
  this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_04 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_03);
  PlayerInfo::SetMaterialNum(this_04,0x5acb,*(int *)(param_1 + 0x14));
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UINewPVPShop::UpdateShopUI(Network_NewPVPShopData const&) */

void __thiscall UINewPVPShop::UpdateShopUI(UINewPVPShop *this,Network_NewPVPShopData *param_1)

{
  initWidgets(this,param_1);
  refreshMaterial(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPShop::OnCreate() */

void __thiscall UINewPVPShop::OnCreate(UINewPVPShop *this)

{
  long lVar1;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_00;
  Network_NewPVPShopData *pNVar2;
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_38,"Background_0");
  lVar1 = UI::Dialog::GetWidget((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  *(int *)(lVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(lVar1 + 0x50)) / 2;
  this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)Sexy::LazySingleton<NewPVPShopMgr>::GetInstancePtr();
  pNVar2 = (Network_NewPVPShopData *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root(this_00);
  Network_NewPVPShopData::Network_NewPVPShopData((Network_NewPVPShopData *)asStack_38,pNVar2);
  UpdateShopUI(this,(Network_NewPVPShopData *)asStack_38);
  Network_NewPVPShopData::~Network_NewPVPShopData((Network_NewPVPShopData *)asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPShop::onNotifyBuyChest(int, std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >&)
    */

void __thiscall UINewPVPShop::onNotifyBuyChest(UINewPVPShop *this,int param_1,vector *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *puVar7;
  long lVar8;
  NameMapperBase *this_00;
  NewPVPMgr *this_01;
  UIChestAward *this_02;
  char *__s;
  TGALogMgr *pTVar9;
  string *__n;
  ulong uVar10;
  undefined8 uVar11;
  undefined4 local_288;
  undefined4 local_284;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_280 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_268 [24];
  function<bool(Sexy::Touch_const&)> afStack_250 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_230 [48];
  string asStack_200 [8];
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [32];
  UIChestAward *local_1c8;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> amStack_1c0 [48];
  vector<int,std::allocator<int>> avStack_190 [24];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  costOnceBuyLimit((int)this);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_230);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_280);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_268);
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  __n = asStack_200;
  std::string::string((string *)&local_1c8,"");
  FUN_05462980(auStack_178,(string *)&local_1c8);
  std::string::~string((string *)&local_1c8);
  nop();
  uVar10 = 0;
  while( true ) {
    uVar11 = *(undefined8 *)param_2;
    uVar5 = FUN_035503e8(uVar11,*(undefined8 *)(param_2 + 8));
    if (uVar5 <= uVar10) break;
    piVar6 = (int *)FUN_035503fc(uVar11,uVar10);
    ProfileChangeItemAmount(*piVar6,piVar6[1],false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_1c8);
    puVar7 = (undefined4 *)FUN_035503fc(*(undefined8 *)param_2,uVar10);
    uVar11 = FUN_0546065c(auStack_168,*puVar7);
    uVar11 = FUN_054603b8(uVar11,&DAT_05593348);
    lVar8 = FUN_035503fc(*(undefined8 *)param_2,uVar10);
    uVar11 = FUN_0546065c(uVar11,*(undefined4 *)(lVar8 + 4));
    FUN_054603b8(uVar11,&DAT_05594620);
    this_00 = (NameMapperBase *)NewPVPZombiePieceMapper::GetInstance();
    piVar6 = (int *)FUN_035503fc(*(undefined8 *)param_2,uVar10);
    cVar1 = NameMapperBase::ContainsId(this_00,*piVar6);
    if (cVar1 != '\0') {
      this_01 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      piVar6 = (int *)FUN_035503fc(*(undefined8 *)param_2,uVar10);
      NewPVPMgr::onObtainedZombieCardPiece(this_01,*piVar6,piVar6[1]);
    }
    piVar6 = (int *)FUN_035503fc(*(undefined8 *)param_2,uVar10);
    piVar6 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                    operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                *)amStack_230,piVar6);
    piVar3 = (int *)FUN_035503fc(*(undefined8 *)param_2,uVar10);
    *piVar6 = piVar3[1];
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_280,piVar3);
    puVar4 = (undefined8 *)FUN_035503fc(*(undefined8 *)param_2,uVar10);
    local_1c8 = (UIChestAward *)*puVar4;
    __n = (string *)(ulong)*(uint *)((long)puVar4 + 4);
    std::vector<ChestAwardContent,std::allocator<ChestAwardContent>>::push_back
              ((vector<ChestAwardContent,std::allocator<ChestAwardContent>> *)avStack_268,
               (ChestAwardContent *)&local_1c8);
    uVar10 = uVar10 + 1;
  }
  local_284 = getChestIdFromItemIndex(this,param_1);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_284);
  std::operator+("POPANIM_EFFECTS_NEW_PVP_CHEST_",asStack_200);
  this_02 = (UIChestAward *)UINewPVPChestAward::create(avStack_268,(string *)&local_1c8);
  std::string::~string((string *)&local_1c8);
  std::string::~string(asStack_200);
  local_1c8 = this_02;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            (amStack_1c0,(map *)amStack_230);
  std::vector<int,std::allocator<int>>::vector(avStack_190,(vector *)avStack_280);
  FUN_035561a4(afStack_250,(string *)&local_1c8);
  UIChestAward::setEndCallBack(this_02,(function *)afStack_250);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_250);
  FUN_03540004((string *)&local_1c8);
  local_288 = getGoodsPriceByIndex(this,param_1);
  TGALuckyChestData::TGALuckyChestData((TGALuckyChestData *)asStack_200);
  DString::DString((DString *)&local_1c8,3);
  __s = (char *)DString::c_str((DString *)&local_1c8);
  std::string::append(asStack_200,__s,(size_t)__n);
  DString::~DString((DString *)&local_1c8);
  FUN_05462824((string *)&local_1c8,auStack_178);
  FUN_05474278(auStack_1f8,(string *)&local_1c8);
  std::string::~string((string *)&local_1c8);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_288);
  FUN_05474278(auStack_1f0,(string *)&local_1c8);
  std::string::~string((string *)&local_1c8);
  local_284 = 0;
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_284);
  FUN_05474278(auStack_1e8,(string *)&local_1c8);
  std::string::~string((string *)&local_1c8);
  pTVar9 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAPlantSpecialOfferData::TGAPlantSpecialOfferData
            ((TGAPlantSpecialOfferData *)&local_1c8,(TGAPlantSpecialOfferData *)asStack_200);
  TGALogMgr::LogNewPVPPlus(pTVar9,(string *)&local_1c8);
  TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)&local_1c8);
  TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)asStack_200);
  FUN_054617bc(auStack_178);
  std::vector<ChestAwardContent,std::allocator<ChestAwardContent>>::~vector
            ((vector<ChestAwardContent,std::allocator<ChestAwardContent>> *)avStack_268);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_280);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_230);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPShop::OnShopBuyFinish(bool, S2C_ShopItemPurchaseInfo const*) */

void __thiscall
UINewPVPShop::OnShopBuyFinish(UINewPVPShop *this,bool param_1,S2C_ShopItemPurchaseInfo *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_00;
  Network_NewPVPShopData *pNVar4;
  Network_NewPVPShopItemData *pNVar5;
  int *piVar6;
  NameMapperBase *this_01;
  NewPVPMgr *this_02;
  undefined8 uVar7;
  char *__s;
  TGALogMgr *pTVar8;
  TGALuckyChestData *__n;
  undefined4 local_2ac;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_2a8 [24];
  Network_NewPVPShopData aNStack_290 [24];
  undefined8 local_278;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_260 [48];
  TGALuckyChestData aTStack_230 [8];
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [32];
  GAME_ITEM_INFO aGStack_1f8 [56];
  int local_1c0;
  int local_1bc;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1) && (*(int *)(param_2 + 0x14) == 0xe)) && (*(int *)(param_2 + 0x20) == 0x5acb)) {
    ProfileChangeItemAmount(0x5acb,-*(int *)(param_2 + 0x24),false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_1c0);
    iVar1 = *(int *)(param_2 + 0x18);
    this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               *)Sexy::LazySingleton<NewPVPShopMgr>::GetInstancePtr();
    pNVar4 = (Network_NewPVPShopData *)
             std::
             _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             ::_M_root(this_00);
    Network_NewPVPShopData::Network_NewPVPShopData(aNStack_290,pNVar4);
    pNVar5 = (Network_NewPVPShopItemData *)FUN_035503dc(local_278,(long)iVar1);
    Network_NewPVPShopItemData::Network_NewPVPShopItemData
              ((Network_NewPVPShopItemData *)&local_1c0,pNVar5);
    ProfileChangeItemAmount(local_1c0,local_1bc,false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_1f8);
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_260);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_2a8);
    piVar6 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                    operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                *)amStack_260,&local_1c0);
    *piVar6 = local_1bc;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_2a8,&local_1c0);
    UINewPVPRedPacketResult::create((map *)amStack_260,(vector *)avStack_2a8,true);
    this_01 = (NameMapperBase *)NewPVPZombiePieceMapper::GetInstance();
    cVar2 = NameMapperBase::ContainsId(this_01,local_1c0);
    if (cVar2 != '\0') {
      this_02 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      NewPVPMgr::onObtainedZombieCardPiece(this_02,local_1c0,local_1bc);
    }
    costOnceBuyLimit((int)this);
    uVar3 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar3);
    __n = aTStack_230;
    std::string::string((string *)aGStack_1f8,"");
    FUN_05462980(auStack_178,aGStack_1f8);
    std::string::~string((string *)aGStack_1f8);
    nop();
    uVar7 = FUN_0546065c(auStack_168,local_1c0);
    uVar7 = FUN_054603b8(uVar7,&DAT_05593348);
    uVar7 = FUN_0546065c(uVar7,local_1bc);
    FUN_054603b8(uVar7,&DAT_05594620);
    TGALuckyChestData::TGALuckyChestData(aTStack_230);
    DString::DString((DString *)aGStack_1f8,3);
    __s = (char *)DString::c_str((DString *)aGStack_1f8);
    std::string::append((string *)aTStack_230,__s,(size_t)__n);
    DString::~DString((DString *)aGStack_1f8);
    FUN_05462824(aGStack_1f8,auStack_178);
    FUN_05474278(auStack_228,aGStack_1f8);
    std::string::~string((string *)aGStack_1f8);
    local_2ac = 0;
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_2ac);
    FUN_05474278(auStack_220,aGStack_1f8);
    std::string::~string((string *)aGStack_1f8);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(param_2 + 0x24));
    FUN_05474278(auStack_218,aGStack_1f8);
    std::string::~string((string *)aGStack_1f8);
    pTVar8 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGAPlantSpecialOfferData::TGAPlantSpecialOfferData
              ((TGAPlantSpecialOfferData *)aGStack_1f8,(TGAPlantSpecialOfferData *)aTStack_230);
    TGALogMgr::LogNewPVPPlus(pTVar8,aGStack_1f8);
    TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)aGStack_1f8);
    TGALuckyChestData::~TGALuckyChestData(aTStack_230);
    FUN_054617bc(auStack_178);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_2a8);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_260);
    Network_NewPVPShopItemData::~Network_NewPVPShopItemData
              ((Network_NewPVPShopItemData *)&local_1c0);
    Network_NewPVPShopData::~Network_NewPVPShopData(aNStack_290);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

