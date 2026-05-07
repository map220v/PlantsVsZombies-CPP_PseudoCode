// Class: RechargeDailySignActivityUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeDailySignActivityUI::RequestNetwork() */

void RechargeDailySignActivityUI::RequestNetwork(void)

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
  local_30[0] = L'⨬';
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


/* RechargeDailySignActivityUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void RechargeDailySignActivityUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to RechargeDailySignActivityUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
RechargeDailySignActivityUI::ScrollTargetReached
          (RechargeDailySignActivityUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* RechargeDailySignActivityUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void RechargeDailySignActivityUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to RechargeDailySignActivityUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
RechargeDailySignActivityUI::ScrollTargetInterrupted
          (RechargeDailySignActivityUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeDailySignActivityUI::GetLayoutName() */

void __thiscall RechargeDailySignActivityUI::GetLayoutName(RechargeDailySignActivityUI *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"RechargeDailySignActivityNewYear");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* RechargeDailySignActivityUI::ButtonDepress(int) */

void __thiscall
RechargeDailySignActivityUI::ButtonDepress(RechargeDailySignActivityUI *this,int param_1)

{
  if (param_1 != 1000) {
    return;
  }
  LawnApp::ShowCoinStore(gLawnApp,2);
  return;
}


/* non-virtual thunk to RechargeDailySignActivityUI::ButtonDepress(int) */

void __thiscall
RechargeDailySignActivityUI::ButtonDepress(RechargeDailySignActivityUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeDailySignActivityUI::UpdateTimeCountDown() */

void __thiscall RechargeDailySignActivityUI::UpdateTimeCountDown(RechargeDailySignActivityUI *this)

{
  long lVar1;
  undefined1 auVar2 [12];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[RECHARGE_DAILYSIGN_ACTIVITY_TIME_COUNTDOWN]");
  lVar1 = *(long *)(this + 0x170);
  auVar2 = LawnApp::GetRealServerTime(gLawnApp);
  StringHelper::ToTimeString
            ((StringHelper *)&DAT_00000004,(float)(lVar1 - auVar2._0_8_),auVar2._8_4_);
  TodReplaceString(awStack_20,L"{TIME}",awStack_18);
  FUN_054766c8(this + 400,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RechargeDailySignActivityUI::Update() */

void __thiscall RechargeDailySignActivityUI::Update(RechargeDailySignActivityUI *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  UpdateTimeCountDown(this);
  return;
}


/* RechargeDailySignActivityUI::RechargeDailySignActivityUI() */

void __thiscall
RechargeDailySignActivityUI::RechargeDailySignActivityUI(RechargeDailySignActivityUI *this)

{
  undefined *puVar1;
  float fVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<RechargeDailySignActivityUI>::UISingletonDialog
            ((UISingletonDialog<RechargeDailySignActivityUI> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_0698a0c0;
  *(undefined **)(this + 0xd8) = &DAT_0698a420;
  *(undefined ***)(this + 0x138) = &PTR__RechargeDailySignActivityUI_0698a468;
  FUN_05476574(this + 0x140);
  FUN_05476574(this + 0x148);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  FUN_05476574(this + 400);
  FUN_054772c4(this + 0x140,&DAT_056f11a8);
  FUN_054772c4(this + 0x148,&DAT_056f11a8);
  *(undefined8 *)(this + 0x150) = 0;
  std::vector<RechargeDailySignWidget*,std::allocator<RechargeDailySignWidget*>>::clear
            ((vector<RechargeDailySignWidget*,std::allocator<RechargeDailySignWidget*>> *)
             (this + 0x158));
  fVar2 = (float)PVZ_EOT();
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(long *)(this + 0x170) = (long)fVar2;
  FUN_054772c4(this + 400,&DAT_056f11a8);
  *(undefined8 *)(this + 0x1a0) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<RechargeDailySignActivityUI,void(RechargeDailySignActivityUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* RechargeDailySignActivityUI::~RechargeDailySignActivityUI() */

void __thiscall
RechargeDailySignActivityUI::~RechargeDailySignActivityUI(RechargeDailySignActivityUI *this)

{
  *(undefined ***)(this + 0x138) = &PTR__RechargeDailySignActivityUI_0698a468;
  *(undefined ***)this = &PTR_GetClass_0698a0c0;
  *(undefined **)(this + 0xd8) = &DAT_0698a420;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 400);
  std::vector<RechargeDailySignWidget*,std::allocator<RechargeDailySignWidget*>>::~vector
            ((vector<RechargeDailySignWidget*,std::allocator<RechargeDailySignWidget*>> *)
             (this + 0x158));
  FUN_05476c50(this + 0x148);
  FUN_05476c50(this + 0x140);
  UISingletonDialog<RechargeDailySignActivityUI>::~UISingletonDialog
            ((UISingletonDialog<RechargeDailySignActivityUI> *)this);
  return;
}


/* non-virtual thunk to RechargeDailySignActivityUI::~RechargeDailySignActivityUI() */

void __thiscall
RechargeDailySignActivityUI::~RechargeDailySignActivityUI(RechargeDailySignActivityUI *this)

{
  ~RechargeDailySignActivityUI(this + -0x138);
  return;
}


/* RechargeDailySignActivityUI::~RechargeDailySignActivityUI() */

void __thiscall
RechargeDailySignActivityUI::~RechargeDailySignActivityUI(RechargeDailySignActivityUI *this)

{
  ~RechargeDailySignActivityUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RechargeDailySignActivityUI::~RechargeDailySignActivityUI() */

void __thiscall
RechargeDailySignActivityUI::~RechargeDailySignActivityUI(RechargeDailySignActivityUI *this)

{
  ~RechargeDailySignActivityUI(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeDailySignActivityUI::UpdateUI(RechargeDailySignData) */

void __thiscall
RechargeDailySignActivityUI::UpdateUI(RechargeDailySignActivityUI *this,long param_2)

{
  bool bVar1;
  UIWidgetText *pUVar2;
  undefined8 *puVar3;
  vector *pvVar4;
  ulong uVar5;
  char *__s;
  code *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  string asStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = *(int *)(param_2 + 0x20) < 1;
  if (bVar1) {
    __s = "[RECHARGE_DAILYSIGN_ACTIVITY_NO_RECHARGE]";
  }
  else {
    __s = "[RECHARGE_DAILYSIGN_ACTIVITY_ALREADY_RECHARGE]";
  }
  std::string::string(asStack_28,__s);
  StringHelper::ToStringValue(asStack_28);
  FUN_054766c8(this + 0x148,asStack_20);
  FUN_05476c50(asStack_20);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_20,"RechargeStatus");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  PuzzleTip::SetTip(pUVar2,this + 0x148);
  (**(code **)(**(long **)(this + 0x150) + 0x158))(*(long **)(this + 0x150),bVar1);
  uVar7 = 0;
  while( true ) {
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar5 = FUN_04c4dcc4(uVar8,*(undefined8 *)(param_2 + 0x10));
    if (uVar5 <= uVar7) break;
    puVar3 = (undefined8 *)FUN_04c4dd00(*(undefined8 *)(this + 0x158),uVar7);
    plVar9 = (long *)*puVar3;
    pcVar6 = *(code **)(*plVar9 + 800);
    pvVar4 = (vector *)FUN_04c4dcb8(uVar8,uVar7);
    std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>::vector
              ((vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>> *)
               asStack_20,pvVar4);
    (*pcVar6)(plVar9,asStack_20);
    std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>::~vector
              ((vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>> *)
               asStack_20);
    uVar7 = uVar7 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeDailySignActivityUI::UpdateUI() */

void __thiscall RechargeDailySignActivityUI::UpdateUI(RechargeDailySignActivityUI *this)

{
  RechargeDailySignData aRStack_78 [56];
  RechargeDailySignData aRStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<RechargeDailySignActivityManager>::GetInstancePtr();
  RechargeDailySignActivityManager::GetSignData();
  RechargeDailySignData::RechargeDailySignData(aRStack_40,aRStack_78);
  UpdateUI(this,aRStack_40);
  RechargeDailySignData::~RechargeDailySignData(aRStack_40);
  RechargeDailySignData::~RechargeDailySignData(aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeDailySignActivityUI::RechargeBundlePurchased(int) */

void RechargeDailySignActivityUI::RechargeBundlePurchased(int param_1)

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
  awStack_30[0] = L'⨬';
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
/* RechargeDailySignActivityUI::CreateTestBonusData() */

void __thiscall RechargeDailySignActivityUI::CreateTestBonusData(RechargeDailySignActivityUI *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  int iVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = 7;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_40);
  local_3c = 10;
  local_40 = 0x44d;
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_30);
  local_2c = 10;
  local_30 = 0x44e;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)avStack_20,
             (S2C_BonusInfo *)&local_40);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)avStack_20,
             (S2C_BonusInfo *)&local_30);
  do {
    std::
    vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
    ::push_back((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
                 *)in_x8,(vector *)avStack_20);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeDailySignActivityUI::CreateTestBtnStatusData() */

void __thiscall
RechargeDailySignActivityUI::CreateTestBtnStatusData(RechargeDailySignActivityUI *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  int iVar1;
  int local_24;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  iVar1 = 7;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_24 = 0;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_20,&local_24);
  local_24 = 2;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_20,&local_24);
  do {
    std::
    vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
    ::push_back((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
                 *)in_x8,(vector *)avStack_20);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeDailySignActivityUI::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
RechargeDailySignActivityUI::OnNotifyRefreshActivityList
          (RechargeDailySignActivityUI *this,bool param_1,set *param_2)

{
  bool bVar1;
  int iVar2;
  RechargeDailySignActivityManager *pRVar3;
  int local_17c;
  undefined8 local_178 [7];
  undefined8 local_140 [7];
  ActiveItem aAStack_108 [128];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_17c = 0x2a2c;
    local_178[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                             ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_17c);
    local_140[0] = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)local_178,(rbtree_iterator *)local_140);
    if (bVar1) {
      iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar2);
      pRVar3 = (RechargeDailySignActivityManager *)
               Sexy::LazySingleton<RechargeDailySignActivityManager>::GetInstancePtr();
      ActiveItem::ActiveItem(aAStack_88,aAStack_108);
      RechargeDailySignActivityManager::Init(pRVar3,aAStack_88);
      ActiveItem::~ActiveItem(aAStack_88);
      Sexy::LazySingleton<RechargeDailySignActivityManager>::GetInstancePtr();
      RechargeDailySignActivityManager::GetSignData();
      RechargeDailySignData::RechargeDailySignData
                ((RechargeDailySignData *)local_140,(rbtree_iterator *)local_178);
      UpdateUI(this,(RechargeDailySignData *)local_140);
      RechargeDailySignData::~RechargeDailySignData((RechargeDailySignData *)local_140);
      RechargeDailySignData::~RechargeDailySignData((RechargeDailySignData *)local_178);
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
/* RechargeDailySignActivityUI::Draw(Sexy::Graphics*) */

void __thiscall
RechargeDailySignActivityUI::Draw(RechargeDailySignActivityUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  Image *pIVar9;
  long lVar10;
  long lVar11;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  lVar10 = *(long *)(this + 0x178);
  if (lVar10 != 0) {
    pIVar9 = *(Image **)(this + 0x1a0);
    if (pIVar9 != (Image *)0x0) {
      iVar1 = FUN_04c4dc24(*(undefined4 *)(lVar10 + 0x48));
      iVar2 = FUN_04c4dc28(*(undefined4 *)(lVar10 + 0x4c));
      iVar3 = FUN_04c4dc2c(*(undefined4 *)(lVar10 + 0x50));
      iVar4 = FUN_04c4dc30(*(undefined4 *)(lVar10 + 0x54));
      Sexy::Graphics::DrawImage(param_1,pIVar9,iVar1,iVar2,iVar3,iVar4);
    }
  }
  if (*(long *)(this + 0x180) != 0) {
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b918d0);
    lVar10 = *(long *)(this + 0x180);
    iVar1 = FUN_04c4dc24(*(undefined4 *)(lVar10 + 0x48));
    iVar2 = FUN_04c4e3e8(0x50);
    iVar3 = FUN_04c4dc28(*(undefined4 *)(lVar10 + 0x4c));
    iVar4 = FUN_04c4e3e8(0x78);
    iVar5 = FUN_04c4dc30(*(undefined4 *)(lVar10 + 0x54));
    Sexy::Graphics::DrawImage(param_1,pIVar9,iVar1 + iVar2,iVar3,iVar4,iVar5);
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b91b78);
    lVar10 = *(long *)(this + 0x180);
    iVar1 = FUN_04c4dc24(*(undefined4 *)(lVar10 + 0x48));
    iVar2 = FUN_04c4dc28(*(undefined4 *)(lVar10 + 0x4c));
    iVar3 = FUN_04c4dc2c(*(undefined4 *)(lVar10 + 0x50));
    iVar4 = FUN_04c4dc30(*(undefined4 *)(lVar10 + 0x54));
    Sexy::Graphics::DrawImage(param_1,pIVar9,iVar1,iVar2,iVar3,iVar4);
    lVar10 = *(long *)(this + 0x188);
    if (lVar10 != 0) {
      lVar11 = *(long *)(this + 0x180);
      iVar1 = FUN_04c4dc24(*(undefined4 *)(lVar11 + 0x48));
      iVar2 = FUN_04c4dc24(*(undefined4 *)(lVar10 + 0x48));
      iVar3 = FUN_04c4e3e8(0x16);
      iVar4 = FUN_04c4dc28(*(undefined4 *)(lVar11 + 0x4c));
      iVar5 = FUN_04c4dc28(*(undefined4 *)(lVar10 + 0x4c));
      iVar6 = FUN_04c4dc2c(*(undefined4 *)(lVar10 + 0x50));
      iVar7 = FUN_04c4dc30(*(undefined4 *)(lVar10 + 0x54));
      Sexy::Insets::Insets(aIStack_28,iVar1 + iVar2 + iVar3,iVar4 + iVar5,iVar6,iVar7);
      uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
      Sexy::Color::Color(aCStack_18,1);
      WriteWordInRect(param_1,this + 400,aIStack_28,uVar8,aCStack_18,3,1);
    }
  }
  if (*(long *)(this + 0x198) != 0) {
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b91878);
    lVar10 = *(long *)(this + 0x198);
    iVar1 = FUN_04c4dc24(*(undefined4 *)(lVar10 + 0x48));
    iVar2 = FUN_04c4dc28(*(undefined4 *)(lVar10 + 0x4c));
    iVar3 = FUN_04c4dc2c(*(undefined4 *)(lVar10 + 0x50));
    iVar4 = FUN_04c4dc30(*(undefined4 *)(lVar10 + 0x54));
    Sexy::Graphics::DrawImage(param_1,pIVar9,iVar1,iVar2,iVar3,iVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeDailySignActivityUI::InitView() */

void __thiscall RechargeDailySignActivityUI::InitView(RechargeDailySignActivityUI *this)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  UIWidgetText *pUVar10;
  undefined8 uVar11;
  long lVar12;
  PVZ2UIButton *pPVar13;
  PVZ2UIScrollingWidget *this_00;
  RechargeDailySignActivityManager *pRVar14;
  Widget *this_01;
  RechargeDailySignWidget *pRVar15;
  char *pcVar16;
  TGALogMgr *pTVar17;
  code *pcVar18;
  RechargeDailySignWidget *local_60;
  Insets aIStack_58 [16];
  string asStack_48 [32];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"RechargeDailySignActivityUI::InitView");
  std::string::string(asStack_48,"[RECHARGE_DAILYSIGN_ACTIVITY_DESC]");
  StringHelper::ToStringValue(asStack_48);
  FUN_054766c8(this + 0x140,asStack_28);
  FUN_05476c50(asStack_28);
  std::string::~string(asStack_48);
  nop();
  std::string::string(asStack_28,"Activity_Desc");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_28);
  std::string::~string(asStack_28);
  nop();
  PuzzleTip::SetTip(pUVar10,this + 0x140);
  (**(code **)(*(long *)pUVar10 + 0x158))(pUVar10,0);
  std::string::string(asStack_28,"Activity_Desc");
  uVar11 = UI::Dialog::GetWidget((Dialog *)this,asStack_28);
  *(undefined8 *)(this + 0x178) = uVar11;
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"EndTime");
  uVar11 = UI::Dialog::GetWidget((Dialog *)this,asStack_28);
  *(undefined8 *)(this + 0x180) = uVar11;
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"EndTimeText");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_28);
  *(UIWidgetText **)(this + 0x188) = pUVar10;
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"ScrollRect");
  uVar11 = UI::Dialog::GetWidget((Dialog *)this,asStack_28);
  *(undefined8 *)(this + 0x198) = uVar11;
  std::string::~string(asStack_28);
  nop();
  lVar12 = Sexy::LazySingleton<RechargeDailySignActivityManager>::GetInstancePtr();
  bVar1 = FUN_04c4dc98(*(undefined4 *)(lVar12 + 0x28));
  if (bVar1 == 0) {
    pcVar16 = "[RECHARGE_DAILYSIGN_ACTIVITY_NO_RECHARGE]";
  }
  else {
    pcVar16 = "[RECHARGE_DAILYSIGN_ACTIVITY_ALREADY_RECHARGE]";
  }
  std::string::string(asStack_48,pcVar16);
  StringHelper::ToStringValue(asStack_48);
  FUN_054766c8(this + 0x148,asStack_28);
  FUN_05476c50(asStack_28);
  std::string::~string(asStack_48);
  nop();
  std::string::string(asStack_28,"RechargeStatus");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_28);
  std::string::~string(asStack_28);
  nop();
  PuzzleTip::SetTip(pUVar10,this + 0x148);
  std::string::string(asStack_28,"RechargeBtn");
  pPVar13 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_28);
  *(PVZ2UIButton **)(this + 0x150) = pPVar13;
  std::string::~string(asStack_28);
  nop();
  (**(code **)(**(long **)(this + 0x150) + 0x158))(*(long **)(this + 0x150),bVar1 ^ 1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  std::string::string(asStack_28,"DailySignItem");
  lVar12 = UI::Dialog::GetWidget((Dialog *)this,asStack_28);
  std::string::~string(asStack_28);
  nop();
  uVar2 = FUN_04c4dc2c(*(undefined4 *)(lVar12 + 0x50));
  iVar3 = FUN_04c4dc30(*(undefined4 *)(lVar12 + 0x54));
  iVar4 = FUN_04c4e3e8(0);
  std::string::string(asStack_28,"ScrollRect");
  lVar12 = UI::Dialog::GetWidget((Dialog *)this,asStack_28);
  std::string::~string(asStack_28);
  nop();
  iVar5 = FUN_04c4dc24(*(undefined4 *)(lVar12 + 0x48));
  iVar6 = FUN_04c4dc28(*(undefined4 *)(lVar12 + 0x4c));
  iVar7 = FUN_04c4dc2c(*(undefined4 *)(lVar12 + 0x50));
  iVar8 = FUN_04c4dc30(*(undefined4 *)(lVar12 + 0x54));
  Sexy::Insets::Insets(aIStack_58,iVar5,iVar6,iVar7,iVar8);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_58);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  pRVar14 = (RechargeDailySignActivityManager *)
            Sexy::LazySingleton<RechargeDailySignActivityManager>::GetInstancePtr();
  iVar5 = RechargeDailySignActivityManager::CurrentCanGotItemIndex(pRVar14);
  iVar4 = iVar3 + iVar4;
  if (0 < iVar5) {
    DVec2::DVec2((DVec2 *)asStack_28,0.0,(float)-(iVar5 * iVar4));
    Sexy::ScrollWidget::SetScrollOffset((ScrollWidget *)this_00,asStack_28,1);
  }
  pRVar14 = (RechargeDailySignActivityManager *)
            Sexy::LazySingleton<RechargeDailySignActivityManager>::GetInstancePtr();
  iVar5 = RechargeDailySignActivityManager::GetDayLength(pRVar14);
  std::vector<RechargeDailySignWidget*,std::allocator<RechargeDailySignWidget*>>::clear
            ((vector<RechargeDailySignWidget*,std::allocator<RechargeDailySignWidget*>> *)
             (this + 0x158));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  uVar9 = FUN_04c4dc2c(*(undefined4 *)(lVar12 + 0x50));
  (**(code **)(*(long *)this_01 + 0x198))(this_01,0,0,uVar9,iVar5 * iVar4);
  pcVar18 = *(code **)(*(long *)this_00 + 0x60);
  (*pcVar18)(this_00,this_01);
  if (0 < iVar5) {
    iVar6 = 0;
    iVar7 = 0;
    do {
      pRVar15 = ::operator_new(0x1d0);
      RechargeDailySignWidget::RechargeDailySignWidget(pRVar15,this);
      local_60 = pRVar15;
      iVar8 = Sexy::LazySingleton<RechargeDailySignActivityManager>::GetInstancePtr();
      RechargeDailySignActivityManager::GetDayData(iVar8);
      pRVar15 = local_60;
      pcVar18 = *(code **)(*(long *)local_60 + 0x318);
      std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>::vector
                ((vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>> *)
                 asStack_28,(vector *)asStack_48);
      iVar8 = iVar6 + 1;
      (*pcVar18)(pRVar15,iVar6,asStack_28);
      std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>::~vector
                ((vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>> *)
                 asStack_28);
      (**(code **)(*(long *)local_60 + 0x198))(local_60,0,iVar7,uVar2,iVar3);
      pcVar18 = *(code **)(*(long *)this_01 + 0x60);
      (*pcVar18)(this_01,local_60);
      std::vector<RechargeDailySignWidget*,std::allocator<RechargeDailySignWidget*>>::push_back
                ((vector<RechargeDailySignWidget*,std::allocator<RechargeDailySignWidget*>> *)
                 (this + 0x158),&local_60);
      std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>::~vector
                ((vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>> *)
                 asStack_48);
      iVar6 = iVar8;
      iVar7 = iVar7 + iVar4;
    } while (iVar8 != iVar5);
  }
  lVar12 = Sexy::LazySingleton<RechargeDailySignActivityManager>::GetInstancePtr();
  uVar11 = FUN_04c4dca4(*(undefined8 *)(lVar12 + 0x40));
  *(undefined8 *)(this + 0x170) = uVar11;
  Sexy::LazySingleton<RechargeDailySignActivityManager>::GetInstancePtr();
  RechargeDailySignActivityManager::GetBannerImageName();
  uVar11 = StringHelper::ToImage(asStack_28,false);
  *(undefined8 *)(this + 0x1a0) = uVar11;
  std::string::~string(asStack_28);
  TGAAccumulatedLoginData::TGAAccumulatedLoginData((TGAAccumulatedLoginData *)asStack_48);
  DString::DString((DString *)asStack_28,1);
  pcVar16 = (char *)DString::c_str((DString *)asStack_28);
  std::string::append(asStack_48,pcVar16,(size_t)pcVar18);
  DString::~DString((DString *)asStack_28);
  pTVar17 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  InvitationPlayerInfo::InvitationPlayerInfo
            ((InvitationPlayerInfo *)asStack_28,(InvitationPlayerInfo *)asStack_48);
  TGALogMgr::LogRechargeDailySign(pTVar17,asStack_28);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)asStack_28);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RechargeDailySignActivityUI::OnCreate() */

undefined4 __thiscall RechargeDailySignActivityUI::OnCreate(RechargeDailySignActivityUI *this)

{
  undefined4 uVar1;
  
  uVar1 = UI::Dialog::OnCreate((Dialog *)this);
  InitView(this);
  return uVar1;
}

