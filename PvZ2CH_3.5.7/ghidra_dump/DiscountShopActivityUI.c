// Class: DiscountShopActivityUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DiscountShopActivityUI::RequestNetwork() */

void DiscountShopActivityUI::RequestNetwork(void)

{
  NetworkMgr *this;
  INetworkMsgProcess *this_00;
  wchar_t local_30 [2];
  pair<wchar_t_const,wchar_t> apStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_30[1] = 1;
  local_30[0] = L'⨭';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,local_30 + 1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
             (pair *)apStack_28);
  this = (NetworkMgr *)NetworkMgr::Instance();
  this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this);
  INetworkMsgProcess::RequestActivityList(this_00,(vector *)avStack_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DiscountShopActivityUI::GetLayoutName() */

void __thiscall DiscountShopActivityUI::GetLayoutName(DiscountShopActivityUI *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"DiscountShopActivity");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* DiscountShopActivityUI::ButtonDepress(int) */

void __thiscall DiscountShopActivityUI::ButtonDepress(DiscountShopActivityUI *this,int param_1)

{
  if (param_1 != 1000) {
    return;
  }
  LawnApp::ShowCoinStore(gLawnApp,2);
  return;
}


/* non-virtual thunk to DiscountShopActivityUI::ButtonDepress(int) */

void __thiscall DiscountShopActivityUI::ButtonDepress(DiscountShopActivityUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* DiscountShopActivityUI::UpdateUI(DiscountShopData) */

void __thiscall DiscountShopActivityUI::UpdateUI(DiscountShopActivityUI *this,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(param_2 + 8);
    uVar3 = FUN_04c52fa0(uVar5,*(undefined8 *)(param_2 + 0x10));
    if (uVar3 <= uVar4) break;
    puVar1 = (undefined8 *)FUN_04c52fd0(*(undefined8 *)(this + 0x170),uVar4);
    puVar2 = (undefined8 *)FUN_04c52f94(uVar5,uVar4);
    local_20 = *puVar2;
    uStack_18 = puVar2[1];
    local_10 = puVar2[2];
    DiscountShopContentWidget::UpdateUI((DiscountShopContentWidget *)*puVar1,&local_20);
    uVar4 = uVar4 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DiscountShopActivityUI::UpdateTimeCountDown() */

void __thiscall DiscountShopActivityUI::UpdateTimeCountDown(DiscountShopActivityUI *this)

{
  UIWidgetText *pUVar1;
  int extraout_w1;
  long lVar2;
  float fVar3;
  undefined1 auVar4 [12];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[DISCOUNT_SHOP_ACTIVITY_TIME_COUNTDOWN_PARAM]");
  fVar3 = (float)TimeUtil::GetTimeCountdown(1,-1);
  StringHelper::ToTimeString((StringHelper *)0x3,fVar3,extraout_w1);
  TodReplaceString(awStack_20,L"{TIME}",awStack_18);
  FUN_054766c8(this + 0x138,asStack_10);
  FUN_05476c50(asStack_10);
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_20);
  TodStringTranslate(L"[RECHARGE_DAILYSIGN_ACTIVITY_TIME_COUNTDOWN]");
  lVar2 = *(long *)(this + 0x148);
  auVar4 = LawnApp::GetRealServerTime(gLawnApp);
  StringHelper::ToTimeString
            ((StringHelper *)&DAT_00000004,(float)(lVar2 - auVar4._0_8_),auVar4._8_4_);
  TodReplaceString(awStack_20,L"{TIME}",awStack_18);
  FUN_054766c8(this + 0x140,asStack_10);
  FUN_05476c50(asStack_10);
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_20);
  std::string::string(asStack_10,"Diamond");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    PuzzleTip::SetTip(pUVar1,this + 0x140);
  }
  std::string::string(asStack_10,"TimeCountDown");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    PuzzleTip::SetTip(pUVar1,this + 0x138);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DiscountShopActivityUI::Update() */

void __thiscall DiscountShopActivityUI::Update(DiscountShopActivityUI *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  UpdateTimeCountDown(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DiscountShopActivityUI::Draw(Sexy::Graphics*) */

void __thiscall DiscountShopActivityUI::Draw(DiscountShopActivityUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  long lVar6;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::Draw((Dialog *)this,param_1);
  lVar6 = *(long *)(this + 0x150);
  if (lVar6 != 0) {
    pIVar5 = *(Image **)(this + 0x188);
    if (pIVar5 != (Image *)0x0) {
      iVar1 = FUN_04c52f00(*(undefined4 *)(lVar6 + 0x48));
      iVar2 = FUN_04c52f04(*(undefined4 *)(lVar6 + 0x4c));
      iVar3 = FUN_04c52f08(*(undefined4 *)(lVar6 + 0x50));
      iVar4 = FUN_04c52f0c(*(undefined4 *)(lVar6 + 0x54));
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
    }
  }
  lVar6 = *(long *)(this + 0x158);
  if (lVar6 != 0) {
    iVar1 = FUN_04c52f00(*(undefined4 *)(lVar6 + 0x48));
    iVar2 = FUN_04c52f04(*(undefined4 *)(lVar6 + 0x4c));
    iVar3 = FUN_04c52f08(*(undefined4 *)(lVar6 + 0x50));
    iVar4 = FUN_04c52f0c(*(undefined4 *)(lVar6 + 0x54));
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  }
  if (*(long *)(this + 0x160) != 0) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b91cd0);
    lVar6 = *(long *)(this + 0x160);
    iVar1 = FUN_04c52f00(*(undefined4 *)(lVar6 + 0x48));
    iVar2 = FUN_04c52f04(*(undefined4 *)(lVar6 + 0x4c));
    iVar3 = FUN_04c52f08(*(undefined4 *)(lVar6 + 0x50));
    iVar4 = FUN_04c52f0c(*(undefined4 *)(lVar6 + 0x54));
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DiscountShopActivityUI::DiscountShopActivityUI() */

void __thiscall DiscountShopActivityUI::DiscountShopActivityUI(DiscountShopActivityUI *this)

{
  undefined *puVar1;
  float fVar2;
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
  
  UISingletonDialog<DiscountShopActivityUI>::UISingletonDialog
            ((UISingletonDialog<DiscountShopActivityUI> *)this);
  *(undefined ***)this = &PTR_GetClass_0698b690;
  *(undefined **)(this + 0xd8) = &DAT_0698b9e0;
  FUN_05476574(this + 0x138);
  FUN_05476574(this + 0x140);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x170));
  FUN_054772c4(this + 0x138,&DAT_056f11a8);
  FUN_054772c4(this + 0x140,&DAT_056f11a8);
  std::vector<DiscountShopContentWidget*,std::allocator<DiscountShopContentWidget*>>::clear
            ((vector<DiscountShopContentWidget*,std::allocator<DiscountShopContentWidget*>> *)
             (this + 0x170));
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  fVar2 = (float)PVZ_EOT();
  *(undefined8 *)(this + 0x188) = 0;
  *(long *)(this + 0x148) = (long)fVar2;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefreshActivityList);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<DiscountShopActivityUI,void(DiscountShopActivityUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGetRewardResult);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<bool,S2C_ShopItemPurchaseInfo_const*,Sexy::CBMemberTranslatorX<DiscountShopActivityUI,void(DiscountShopActivityUI::*)(bool,S2C_ShopItemPurchaseInfo_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyShopBuyFinishDetails,&local_70);
  return;
}


/* DiscountShopActivityUI::~DiscountShopActivityUI() */

void __thiscall DiscountShopActivityUI::~DiscountShopActivityUI(DiscountShopActivityUI *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0698b9e0;
  *(undefined ***)this = &PTR_GetClass_0698b690;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<DiscountShopContentWidget*,std::allocator<DiscountShopContentWidget*>>::~vector
            ((vector<DiscountShopContentWidget*,std::allocator<DiscountShopContentWidget*>> *)
             (this + 0x170));
  FUN_05476c50(this + 0x140);
  FUN_05476c50(this + 0x138);
  UISingletonDialog<DiscountShopActivityUI>::~UISingletonDialog
            ((UISingletonDialog<DiscountShopActivityUI> *)this);
  return;
}


/* DiscountShopActivityUI::~DiscountShopActivityUI() */

void __thiscall DiscountShopActivityUI::~DiscountShopActivityUI(DiscountShopActivityUI *this)

{
  ~DiscountShopActivityUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DiscountShopActivityUI::UpdateUI() */

void __thiscall DiscountShopActivityUI::UpdateUI(DiscountShopActivityUI *this)

{
  DiscountShopData aDStack_68 [48];
  DiscountShopData aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<DiscountShopActivityManager>::GetInstancePtr();
  DiscountShopActivityManager::GetShopData();
  DiscountShopData::DiscountShopData(aDStack_38,aDStack_68);
  UpdateUI(this,aDStack_38);
  DiscountShopData::~DiscountShopData(aDStack_38);
  DiscountShopData::~DiscountShopData(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DiscountShopActivityUI::RechargeBundlePurchased(int) */

void DiscountShopActivityUI::RechargeBundlePurchased(int param_1)

{
  NetworkMgr *this;
  INetworkMsgProcess *this_00;
  wchar_t awStack_30 [2];
  pair<wchar_t_const,wchar_t> apStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  awStack_30[1] = 1;
  awStack_30[0] = L'⨭';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,awStack_30,awStack_30 + 1)
  ;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
             (pair *)apStack_28);
  this = (NetworkMgr *)NetworkMgr::Instance();
  this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this);
  INetworkMsgProcess::RequestActivityList(this_00,(vector *)avStack_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DiscountShopActivityUI::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
DiscountShopActivityUI::OnNotifyRefreshActivityList
          (DiscountShopActivityUI *this,bool param_1,set *param_2)

{
  bool bVar1;
  int iVar2;
  DiscountShopActivityManager *pDVar3;
  int local_11c;
  undefined8 local_118;
  undefined8 local_110;
  ActiveItem aAStack_108 [128];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_11c = 0x2a2d;
    local_118 = std::set<int,std::less<int>,std::allocator<int>>::find
                          ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_11c);
    local_110 = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_118,(rbtree_iterator *)&local_110);
    if (bVar1) {
      iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar2);
      pDVar3 = (DiscountShopActivityManager *)
               Sexy::LazySingleton<DiscountShopActivityManager>::GetInstancePtr();
      ActiveItem::ActiveItem(aAStack_88,aAStack_108);
      DiscountShopActivityManager::Init(pDVar3,aAStack_88);
      ActiveItem::~ActiveItem(aAStack_88);
      UpdateUI(this);
      ActiveItem::~ActiveItem(aAStack_108);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DiscountShopActivityUI::InitView() */

void __thiscall DiscountShopActivityUI::InitView(DiscountShopActivityUI *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  DiscountShopActivityManager *this_00;
  DiscountShopContentWidget *this_01;
  char *__s;
  TGALogMgr *pTVar10;
  TGAAccumulatedLoginData *__n;
  int iVar11;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  DiscountShopContentWidget *local_48 [4];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_28,"Activity_Desc");
  uVar8 = UI::Dialog::GetWidget((Dialog *)this,(string *)&local_28);
  *(undefined8 *)(this + 0x150) = uVar8;
  std::string::~string((string *)&local_28);
  nop();
  std::string::string((string *)&local_28,"TimeCountDown");
  uVar8 = UI::Dialog::GetWidget((Dialog *)this,(string *)&local_28);
  *(undefined8 *)(this + 0x158) = uVar8;
  std::string::~string((string *)&local_28);
  nop();
  std::string::string((string *)&local_28,"ScrollBg");
  uVar8 = UI::Dialog::GetWidget((Dialog *)this,(string *)&local_28);
  *(undefined8 *)(this + 0x160) = uVar8;
  std::string::~string((string *)&local_28);
  nop();
  std::string::string((string *)&local_28,"Diamond");
  uVar8 = UI::Dialog::GetWidget((Dialog *)this,(string *)&local_28);
  *(undefined8 *)(this + 0x168) = uVar8;
  std::string::~string((string *)&local_28);
  nop();
  UpdateTimeCountDown(this);
  __n = (TGAAccumulatedLoginData *)local_48;
  std::string::string((string *)&local_28,"UIImage_0");
  lVar9 = UI::Dialog::GetWidget((Dialog *)this,(string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  iVar1 = FUN_04c52f00(*(undefined4 *)(lVar9 + 0x48));
  uVar2 = FUN_04c52f04(*(undefined4 *)(lVar9 + 0x4c));
  iVar3 = FUN_04c52f08(*(undefined4 *)(lVar9 + 0x50));
  uVar4 = FUN_04c52f0c(*(undefined4 *)(lVar9 + 0x54));
  iVar5 = FUN_04c53650(0);
  this_00 = (DiscountShopActivityManager *)
            Sexy::LazySingleton<DiscountShopActivityManager>::GetInstancePtr();
  iVar6 = DiscountShopActivityManager::GetDataLength(this_00);
  if (0 < iVar6) {
    iVar11 = 0;
    do {
      iVar7 = Sexy::LazySingleton<DiscountShopActivityManager>::GetInstancePtr();
      DiscountShopActivityManager::GetShopContentData(iVar7);
      this_01 = ::operator_new(0x118);
      DiscountShopContentWidget::DiscountShopContentWidget(this_01,this);
      local_70 = local_28;
      uStack_68 = uStack_20;
      local_60 = local_18;
      local_48[0] = this_01;
      DiscountShopContentWidget::InitView(this_01,iVar11,&local_70);
      __n = (TGAAccumulatedLoginData *)(ulong)uVar2;
      iVar11 = iVar11 + 1;
      (**(code **)(*(long *)local_48[0] + 0x198))(local_48[0],iVar1,__n,iVar3,uVar4);
      (**(code **)(*(long *)this + 0x60))(this,local_48[0]);
      std::vector<DiscountShopContentWidget*,std::allocator<DiscountShopContentWidget*>>::push_back
                ((vector<DiscountShopContentWidget*,std::allocator<DiscountShopContentWidget*>> *)
                 (this + 0x170),local_48);
      iVar1 = iVar1 + iVar3 + iVar5;
    } while (iVar11 != iVar6);
  }
  lVar9 = Sexy::LazySingleton<DiscountShopActivityManager>::GetInstancePtr();
  uVar8 = FUN_04c52f80(*(undefined8 *)(lVar9 + 0x38));
  *(undefined8 *)(this + 0x148) = uVar8;
  Sexy::LazySingleton<DiscountShopActivityManager>::GetInstancePtr();
  DiscountShopActivityManager::GetBannerImageName();
  uVar8 = StringHelper::ToImage((string *)&local_28,false);
  *(undefined8 *)(this + 0x188) = uVar8;
  std::string::~string((string *)&local_28);
  TGAAccumulatedLoginData::TGAAccumulatedLoginData((TGAAccumulatedLoginData *)local_48);
  DString::DString((DString *)&local_28,1);
  __s = (char *)DString::c_str((DString *)&local_28);
  std::string::append((string *)local_48,__s,(size_t)__n);
  DString::~DString((DString *)&local_28);
  pTVar10 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  InvitationPlayerInfo::InvitationPlayerInfo
            ((InvitationPlayerInfo *)&local_28,(InvitationPlayerInfo *)local_48);
  TGALogMgr::LogDiscountShop(pTVar10,(string *)&local_28);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)&local_28);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)local_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DiscountShopActivityUI::OnCreate() */

undefined4 __thiscall DiscountShopActivityUI::OnCreate(DiscountShopActivityUI *this)

{
  undefined4 uVar1;
  
  uVar1 = UI::Dialog::OnCreate((Dialog *)this);
  InitView(this);
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DiscountShopActivityUI::OnGetRewardResult(bool, S2C_ShopItemPurchaseInfo const*) */

void __thiscall
DiscountShopActivityUI::OnGetRewardResult
          (DiscountShopActivityUI *this,bool param_1,S2C_ShopItemPurchaseInfo *param_2)

{
  int iVar1;
  undefined4 uVar2;
  PlayerInfo *pPVar3;
  CommonUIManager *this_00;
  char *pcVar4;
  undefined8 uVar5;
  TGALogMgr *pTVar6;
  size_t __n;
  undefined1 *__n_00;
  undefined1 auStack_200 [8];
  undefined4 local_1f8;
  uint local_1f4;
  undefined4 local_1f0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_1e8 [24];
  undefined4 local_1d0;
  TGAAccumulatedLoginData aTStack_1b8 [8];
  undefined1 auStack_1b0 [8];
  string asStack_1a8 [16];
  DString aDStack_198 [32];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    pPVar3 = (PlayerInfo *)ProfileUtils::Profile();
    iVar1 = PlayerInfo::GetNumGems(pPVar3,false);
    pPVar3 = (PlayerInfo *)ProfileUtils::Profile();
    __n_00 = auStack_200;
    PlayerInfo::SetGems(pPVar3,iVar1 - *(int *)(param_2 + 0x24));
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_1e8);
    local_1f8 = 0;
    local_1f4 = 0;
    local_1f0 = 0;
    iVar1 = Sexy::LazySingleton<DiscountShopActivityManager>::GetInstancePtr();
    DiscountShopActivityManager::GetShopContentData(iVar1);
    local_1f4 = *(uint *)(param_2 + 0x1c);
    __n = (size_t)local_1f4;
    local_1f8 = local_1d0;
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_1e8,
               (LotteryBonus *)&local_1f8);
    this_00 = (CommonUIManager *)Sexy::LazySingleton<CommonUIManager>::GetInstance();
    CommonUIManager::ShowBonusRedPachet(this_00,(vector *)avStack_1e8);
    RequestNetwork();
    TGAAccumulatedLoginData::TGAAccumulatedLoginData(aTStack_1b8);
    DString::DString(aDStack_198,3);
    pcVar4 = (char *)DString::c_str(aDStack_198);
    std::string::append((string *)aTStack_1b8,pcVar4,__n);
    DString::~DString(aDStack_198);
    uVar2 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar2);
    std::string::string((string *)aDStack_198,"");
    FUN_05462980(auStack_178,aDStack_198);
    std::string::~string((string *)aDStack_198);
    nop();
    uVar5 = FUN_0546065c(auStack_168,local_1f8);
    uVar5 = FUN_054603b8(uVar5,&DAT_05593348);
    uVar5 = FUN_0546065c(uVar5,local_1f4);
    FUN_054603b8(uVar5,&DAT_05594620);
    FUN_05462824(aDStack_198,auStack_178);
    FUN_05474278(auStack_1b0,aDStack_198);
    std::string::~string((string *)aDStack_198);
    DString::DString(aDStack_198,*(int *)(param_2 + 0x24));
    pcVar4 = (char *)DString::c_str(aDStack_198);
    std::string::append(asStack_1a8,pcVar4,(size_t)__n_00);
    DString::~DString(aDStack_198);
    pTVar6 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    InvitationPlayerInfo::InvitationPlayerInfo
              ((InvitationPlayerInfo *)aDStack_198,(InvitationPlayerInfo *)aTStack_1b8);
    TGALogMgr::LogDiscountShop(pTVar6,aDStack_198);
    TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aDStack_198);
    FUN_054617bc(auStack_178);
    TGAAccumulatedLoginData::~TGAAccumulatedLoginData(aTStack_1b8);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_1e8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

