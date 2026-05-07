// Class: ActivityCollectionDiscountShop


/* ActivityCollectionDiscountShop::ButtonDepress(int) */

int ActivityCollectionDiscountShop::ButtonDepress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to ActivityCollectionDiscountShop::ButtonDepress(int) */

void __thiscall
ActivityCollectionDiscountShop::ButtonDepress(ActivityCollectionDiscountShop *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* ActivityCollectionDiscountShop::RefreshContainer(ActivityCollectionTabBase*) */

void ActivityCollectionDiscountShop::RefreshContainer(ActivityCollectionTabBase *param_1)

{
  return;
}


/* non-virtual thunk to ActivityCollectionDiscountShop::RefreshContainer(ActivityCollectionTabBase*)
    */

void __thiscall
ActivityCollectionDiscountShop::RefreshContainer
          (ActivityCollectionDiscountShop *this,ActivityCollectionTabBase *param_1)

{
  RefreshContainer((ActivityCollectionTabBase *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionDiscountShop::GetLayoutName() */

void __thiscall ActivityCollectionDiscountShop::GetLayoutName(ActivityCollectionDiscountShop *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIDiscountShopActivityNew");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionDiscountShop::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionDiscountShop::InitContainer
          (ActivityCollectionDiscountShop *this,ActivityCollectionTabBase *param_1)

{
  long *plVar1;
  long *plVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)FUN_03428e64(*(undefined8 *)(param_1 + 0x18));
  std::string::string(asStack_10,"Background_0");
  plVar2 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x1a8))
              (plVar2,((int)plVar1[10] - (int)plVar2[10]) / 2,*(undefined4 *)((long)plVar2 + 0x4c));
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActivityCollectionDiscountShop::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionDiscountShop::InitContainer
          (ActivityCollectionDiscountShop *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0x138,param_1);
  return;
}


/* ActivityCollectionDiscountShop::UpdateUI(DiscountShopData) */

void __thiscall
ActivityCollectionDiscountShop::UpdateUI(ActivityCollectionDiscountShop *this,long param_2)

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
    uVar3 = FUN_0342988c(uVar5,*(undefined8 *)(param_2 + 0x10));
    if (uVar3 <= uVar4) break;
    puVar1 = (undefined8 *)FUN_03429930(*(undefined8 *)(this + 0x180),uVar4);
    puVar2 = (undefined8 *)FUN_03429880(uVar5,uVar4);
    local_20 = *puVar2;
    uStack_18 = puVar2[1];
    local_10 = puVar2[2];
    DiscountShopContentWidget::UpdateUI((DiscountShopContentWidget *)*puVar1,&local_20);
    uVar4 = uVar4 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionDiscountShop::ShowTips() */

void ActivityCollectionDiscountShop::ShowTips(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  PVZ2UIDialog *this;
  wchar16 *in_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  wchar16 *local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (___stack_chk_guard,in_x1,in_x2,in_x3,in_x4);
  if (cVar1 == '\0') {
    iVar2 = FUN_0342d430(0x28a);
    iVar3 = FUN_0342d430(300);
  }
  else {
    iVar2 = FUN_0342d430(600);
    iVar3 = FUN_0342d430(0x15e);
  }
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[ACTIVITY_NEW_TIPS_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[ACTIVITY_NEW_DISCOUNTSOHP_TIPS]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetFooterAlign(this,3);
  iVar2 = FUN_0342d430(2);
  PVZ2UIDialog::SetFooterBottomPadding(this,iVar2);
  PVZ2UIDialog::SetBackgroundDarken(this,true,0.5);
  FUN_05478178(auStack_58,L"[OVERVIEW_CONFIRM]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionDiscountShop::ActivityCollectionDiscountShop() */

void __thiscall
ActivityCollectionDiscountShop::ActivityCollectionDiscountShop(ActivityCollectionDiscountShop *this)

{
  undefined *puVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<ActivityCollectionDiscountShop>::UISingletonDialog
            ((UISingletonDialog<ActivityCollectionDiscountShop> *)this);
  ActivityCollectionContainer::ActivityCollectionContainer
            ((ActivityCollectionContainer *)(this + 0x138));
  this[0x140] = (ActivityCollectionDiscountShop)0x0;
  *(undefined ***)this = &PTR_GetClass_0662e620;
  *(undefined **)(this + 0xd8) = &DAT_0662e980;
  *(undefined ***)(this + 0x138) = &PTR_InitContainer_0662e9c8;
  *(undefined8 *)(this + 0x148) = 0;
  FUN_05478178(this + 0x150,&DAT_056f11a8,&local_20);
  nop();
  *(undefined8 *)(this + 0x158) = 0;
  FUN_05478178(this + 0x160,&DAT_056f11a8,&local_20);
  nop();
  Sexy::Color::Color((Color *)(this + 0x168),1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x180));
  *(undefined4 *)(this + 0x178) = 0x2a2d;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_50 = local_28;
  local_60 = local_38;
  uStack_58 = uStack_30;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<ActivityCollectionDiscountShop,void(ActivityCollectionDiscountShop::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_60);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGetRewardResult);
  local_80 = local_20;
  uStack_78 = uStack_18;
  local_70 = local_10;
  MessageRouter::
  Subscribe<bool,S2C_ShopItemPurchaseInfo_const*,Sexy::CBMemberTranslatorX<ActivityCollectionDiscountShop,void(ActivityCollectionDiscountShop::*)(bool,S2C_ShopItemPurchaseInfo_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyShopBuyFinishDetails,&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityCollectionDiscountShop::~ActivityCollectionDiscountShop() */

void __thiscall
ActivityCollectionDiscountShop::~ActivityCollectionDiscountShop
          (ActivityCollectionDiscountShop *this)

{
  *(undefined ***)(this + 0x138) = &PTR_InitContainer_0662e9c8;
  *(undefined ***)this = &PTR_GetClass_0662e620;
  *(undefined **)(this + 0xd8) = &DAT_0662e980;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<DiscountShopContentWidgetNew*,std::allocator<DiscountShopContentWidgetNew*>>::~vector
            ((vector<DiscountShopContentWidgetNew*,std::allocator<DiscountShopContentWidgetNew*>> *)
             (this + 0x180));
  FUN_05476c50(this + 0x160);
  FUN_05476c50(this + 0x150);
  UISingletonDialog<ActivityCollectionDiscountShop>::~UISingletonDialog
            ((UISingletonDialog<ActivityCollectionDiscountShop> *)this);
  return;
}


/* ActivityCollectionDiscountShop::~ActivityCollectionDiscountShop() */

void __thiscall
ActivityCollectionDiscountShop::~ActivityCollectionDiscountShop
          (ActivityCollectionDiscountShop *this)

{
  ~ActivityCollectionDiscountShop(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionDiscountShop::Update() */

void __thiscall ActivityCollectionDiscountShop::Update(ActivityCollectionDiscountShop *this)

{
  ActivityCollectionDiscountShop *pAVar1;
  int iVar2;
  long lVar3;
  int extraout_w1;
  float fVar4;
  wstring awStack_a0 [8];
  wstring awStack_98 [8];
  wstring awStack_90 [8];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  iVar2 = ActiveItem::GetLeftDays(aAStack_88);
  lVar3 = LawnApp::GetRealBeijingTime(gLawnApp);
  lVar3 = 0x15180 - (lVar3 + 0x1c200) % 0x15180;
  if (iVar2 < 1) {
    iVar2 = (int)(lVar3 / 0x3c);
    Sexy::StrFormat(L"%02d: %02d: %02d",awStack_90,lVar3 / 0xe10 & 0xffffffff,
                    (ulong)(uint)(iVar2 + (int)((lVar3 / 0x3c) / 0x3c) * -0x3c),
                    (ulong)(uint)((int)lVar3 + iVar2 * -0x3c));
    FUN_054766c8(this + 0x150,awStack_90);
    FUN_05476c50(awStack_90);
  }
  else {
    pAVar1 = this + 0x150;
    FUN_05478178(awStack_90,L"[TOTAL_LOGIN_DAYS]",awStack_a0);
    TodReplaceNumberString(awStack_90,L"{DAY_COUNT}",iVar2);
    FUN_05476c50(awStack_90);
    nop();
    Sexy::StrFormat(L"%02d:%02d",awStack_90,lVar3 / 0xe10 & 0xffffffff,
                    (ulong)(uint)((int)(lVar3 / 0x3c) + (int)((lVar3 / 0x3c) / 0x3c) * -0x3c));
    FUN_054766c8(pAVar1,awStack_90);
    FUN_05476c50(awStack_90);
    FUN_0342e660(awStack_90,awStack_98,pAVar1);
    FUN_054766c8(pAVar1,awStack_90);
    FUN_05476c50(awStack_90);
    FUN_05476c50(awStack_98);
  }
  if (*(long *)(this + 0x148) != 0) {
    PuzzleTip::SetTip(*(long *)(this + 0x148),this + 0x150);
  }
  TodStringTranslate(L"[DISCOUNT_SHOP_ACTIVITY_TIME_COUNTDOWN_PARAM]");
  fVar4 = (float)TimeUtil::GetTimeCountdown(1,-1);
  StringHelper::ToTimeString((StringHelper *)0x3,fVar4,extraout_w1);
  TodReplaceString(awStack_a0,L"{TIME}",awStack_98);
  FUN_054766c8(this + 0x160,awStack_90);
  FUN_05476c50(awStack_90);
  FUN_05476c50(awStack_98);
  FUN_05476c50(awStack_a0);
  if (*(long *)(this + 0x158) != 0) {
    PuzzleTip::SetTip(*(long *)(this + 0x158),this + 0x160);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionDiscountShop::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
ActivityCollectionDiscountShop::onNotifyRefreshActivityList
          (ActivityCollectionDiscountShop *this,bool param_1,set *param_2)

{
  bool bVar1;
  int iVar2;
  DiscountShopActivityManager *pDVar3;
  int local_16c;
  undefined8 local_168 [6];
  undefined8 local_138 [6];
  ActiveItem aAStack_108 [128];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_16c = 0x2a2d;
    local_168[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                             ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_16c);
    local_138[0] = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)local_168,(rbtree_iterator *)local_138);
    if (bVar1) {
      iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar2);
      pDVar3 = (DiscountShopActivityManager *)
               Sexy::LazySingleton<DiscountShopActivityManager>::GetInstancePtr();
      ActiveItem::ActiveItem(aAStack_88,aAStack_108);
      DiscountShopActivityManager::Init(pDVar3,aAStack_88);
      ActiveItem::~ActiveItem(aAStack_88);
      Sexy::LazySingleton<DiscountShopActivityManager>::GetInstancePtr();
      DiscountShopActivityManager::GetShopData();
      DiscountShopData::DiscountShopData((DiscountShopData *)local_138,(rbtree_iterator *)local_168)
      ;
      UpdateUI(this,(DiscountShopData *)local_138);
      DiscountShopData::~DiscountShopData((DiscountShopData *)local_138);
      DiscountShopData::~DiscountShopData((DiscountShopData *)local_168);
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
/* ActivityCollectionDiscountShop::InitView() */

void __thiscall ActivityCollectionDiscountShop::InitView(ActivityCollectionDiscountShop *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  UIWidgetText *pUVar7;
  long *plVar8;
  DiscountShopActivityManager *this_00;
  DiscountShopContentWidgetNew *this_01;
  char *__s;
  TGALogMgr *pTVar9;
  TGAAccumulatedLoginData *__n;
  int iVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  DiscountShopContentWidgetNew *local_48 [4];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_28,"UIText_ActivityTime");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_28);
  *(UIWidgetText **)(this + 0x148) = pUVar7;
  std::string::~string((string *)&local_28);
  nop();
  std::string::string((string *)&local_28,"UIText_RefreshTime");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_28);
  *(UIWidgetText **)(this + 0x158) = pUVar7;
  std::string::~string((string *)&local_28);
  nop();
  __n = (TGAAccumulatedLoginData *)local_48;
  std::string::string((string *)&local_28,"ItemContainer");
  plVar8 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  iVar2 = FUN_03428e5c((int)plVar8[10]);
  uVar3 = FUN_03428e60(*(undefined4 *)((long)plVar8 + 0x54));
  iVar4 = FUN_0342d430(0);
  this_00 = (DiscountShopActivityManager *)
            Sexy::LazySingleton<DiscountShopActivityManager>::GetInstancePtr();
  iVar5 = DiscountShopActivityManager::GetDataLength(this_00);
  iVar1 = 0;
  if (iVar5 != 0) {
    iVar1 = iVar2 / iVar5;
  }
  if (0 < iVar5) {
    iVar2 = 0;
    iVar10 = 0;
    do {
      iVar6 = Sexy::LazySingleton<DiscountShopActivityManager>::GetInstancePtr();
      DiscountShopActivityManager::GetShopContentData(iVar6);
      this_01 = ::operator_new(0x118);
      DiscountShopContentWidgetNew::DiscountShopContentWidgetNew
                (this_01,(DiscountShopActivityUI *)0x0);
      local_48[0] = this_01;
      (**(code **)(*(long *)this_01 + 0x198))(this_01,iVar2,0,iVar1,uVar3);
      local_60 = local_18;
      iVar6 = iVar10 + 1;
      local_70 = local_28;
      uStack_68 = uStack_20;
      DiscountShopContentWidgetNew::InitView(local_48[0],iVar10,&local_70);
      __n = *(TGAAccumulatedLoginData **)(*plVar8 + 0x60);
      (*(code *)__n)(plVar8,local_48[0]);
      std::vector<DiscountShopContentWidgetNew*,std::allocator<DiscountShopContentWidgetNew*>>::
      push_back((vector<DiscountShopContentWidgetNew*,std::allocator<DiscountShopContentWidgetNew*>>
                 *)(this + 0x180),local_48);
      iVar2 = iVar2 + iVar4 + iVar1;
      iVar10 = iVar6;
    } while (iVar6 != iVar5);
  }
  TGAAccumulatedLoginData::TGAAccumulatedLoginData((TGAAccumulatedLoginData *)local_48);
  DString::DString((DString *)&local_28,1);
  __s = (char *)DString::c_str((DString *)&local_28);
  std::string::append((string *)local_48,__s,(size_t)__n);
  DString::~DString((DString *)&local_28);
  pTVar9 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  InvitationPlayerInfo::InvitationPlayerInfo
            ((InvitationPlayerInfo *)&local_28,(InvitationPlayerInfo *)local_48);
  TGALogMgr::LogDiscountShop(pTVar9,(string *)&local_28);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)&local_28);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)local_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityCollectionDiscountShop::OnCreate() */

char __thiscall ActivityCollectionDiscountShop::OnCreate(ActivityCollectionDiscountShop *this)

{
  char cVar1;
  
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    InitView(this);
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionDiscountShop::OnGetRewardResult(bool, S2C_ShopItemPurchaseInfo const*) */

void __thiscall
ActivityCollectionDiscountShop::OnGetRewardResult
          (ActivityCollectionDiscountShop *this,bool param_1,S2C_ShopItemPurchaseInfo *param_2)

{
  int iVar1;
  undefined4 uVar2;
  PlayerInfo *pPVar3;
  CommonUIManager *this_00;
  NetworkMgr *this_01;
  INetworkMsgProcess *this_02;
  char *pcVar4;
  undefined8 uVar5;
  TGALogMgr *pTVar6;
  size_t __n;
  wchar_t *__n_00;
  wchar_t local_218 [2];
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_200 [24];
  undefined4 local_1e8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_1d0 [24];
  undefined4 local_1b8 [2];
  undefined1 auStack_1b0 [8];
  string asStack_1a8 [16];
  pair<wchar_t_const,wchar_t> apStack_198 [32];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    pPVar3 = (PlayerInfo *)ProfileUtils::Profile();
    iVar1 = PlayerInfo::GetNumGems(pPVar3,false);
    pPVar3 = (PlayerInfo *)ProfileUtils::Profile();
    __n_00 = local_218;
    PlayerInfo::SetGems(pPVar3,iVar1 - *(int *)(param_2 + 0x24));
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_200);
    local_210 = 0;
    local_20c = 0;
    local_208 = 0;
    iVar1 = Sexy::LazySingleton<DiscountShopActivityManager>::GetInstancePtr();
    DiscountShopActivityManager::GetShopContentData(iVar1);
    local_20c = *(undefined4 *)(param_2 + 0x1c);
    local_210 = local_1e8;
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_200,
               (LotteryBonus *)&local_210);
    this_00 = (CommonUIManager *)Sexy::LazySingleton<CommonUIManager>::GetInstance();
    CommonUIManager::ShowBonusRedPachet(this_00,(vector *)avStack_200);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_1d0);
    local_1b8[0] = 1;
    local_218[0] = L'⨭';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
              (apStack_198,__n_00,(wchar_t *)local_1b8);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_1d0,
               (pair *)apStack_198);
    this_01 = (NetworkMgr *)NetworkMgr::Instance();
    this_02 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
    __n = 0;
    INetworkMsgProcess::RequestActivityList(this_02,(vector *)avStack_1d0,0,true);
    TGAAccumulatedLoginData::TGAAccumulatedLoginData((TGAAccumulatedLoginData *)local_1b8);
    DString::DString((DString *)apStack_198,3);
    pcVar4 = (char *)DString::c_str((DString *)apStack_198);
    std::string::append((string *)local_1b8,pcVar4,__n);
    DString::~DString((DString *)apStack_198);
    uVar2 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar2);
    std::string::string((string *)apStack_198,"");
    FUN_05462980(auStack_178,apStack_198);
    std::string::~string((string *)apStack_198);
    nop();
    uVar5 = FUN_0546065c(auStack_168,local_210);
    uVar5 = FUN_054603b8(uVar5,&DAT_05593348);
    uVar5 = FUN_0546065c(uVar5,local_20c);
    FUN_054603b8(uVar5,&DAT_05594620);
    FUN_05462824(apStack_198,auStack_178);
    FUN_05474278(auStack_1b0,apStack_198);
    std::string::~string((string *)apStack_198);
    DString::DString((DString *)apStack_198,*(int *)(param_2 + 0x24));
    pcVar4 = (char *)DString::c_str((DString *)apStack_198);
    std::string::append(asStack_1a8,pcVar4,(size_t)__n_00);
    DString::~DString((DString *)apStack_198);
    pTVar6 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    InvitationPlayerInfo::InvitationPlayerInfo
              ((InvitationPlayerInfo *)apStack_198,(InvitationPlayerInfo *)local_1b8);
    TGALogMgr::LogDiscountShop(pTVar6,apStack_198);
    TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)apStack_198);
    FUN_054617bc(auStack_178);
    TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)local_1b8);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_1d0);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_200);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

