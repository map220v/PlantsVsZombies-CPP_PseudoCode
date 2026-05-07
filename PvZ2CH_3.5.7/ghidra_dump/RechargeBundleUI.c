// Class: RechargeBundleUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RechargeBundleUI::requestNetwork(void)

{
  char cVar1;
  NetworkMgr *this;
  INetworkMsgProcess *this_00;
  undefined1 auStack_28 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar1 = LawnApp::CheckNetWork(gLawnApp);
  if (cVar1 != '\0') {
    this = (NetworkMgr *)NetworkMgr::Instance();
    this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
              (avStack_20,&DAT_05754d80,2,auStack_28);
    INetworkMsgProcess::RequestActivityList(this_00,(vector *)avStack_20,0,true);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_20);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RechargeBundleUI::requestNetwork(void)

{
  char cVar1;
  NetworkMgr *this;
  INetworkMsgProcess *this_00;
  undefined1 auStack_28 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar1 = LawnApp::CheckNetWork(gLawnApp);
  if (cVar1 != '\0') {
    this = (NetworkMgr *)NetworkMgr::Instance();
    this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
              (avStack_20,&DAT_05754d80,2,auStack_28);
    INetworkMsgProcess::RequestActivityList(this_00,(vector *)avStack_20,0,true);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_20);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RechargeBundleUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void RechargeBundleUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to RechargeBundleUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall RechargeBundleUI::ScrollTargetReached(RechargeBundleUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* RechargeBundleUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void RechargeBundleUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to RechargeBundleUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
RechargeBundleUI::ScrollTargetInterrupted(RechargeBundleUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* RechargeBundleUI::ButtonPress(int) */

int RechargeBundleUI::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to RechargeBundleUI::ButtonPress(int) */

void __thiscall RechargeBundleUI::ButtonPress(RechargeBundleUI *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* RechargeBundleUI::onRechargeRewardCurrencyChanged(int) */

void __thiscall
RechargeBundleUI::onRechargeRewardCurrencyChanged(RechargeBundleUI *this,int param_1)

{
  *(int *)(this + 0x180) = param_1;
  RechargeRewardProgress::setCurrentRechargeAmount
            (*(RechargeRewardProgress **)(this + 0xe8),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeBundleUI::RefreshBundles(std::string const&) */

void __thiscall RechargeBundleUI::RefreshBundles(RechargeBundleUI *this,string *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x188));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x188));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    BundleDisplayWidget::RefreshBundle((BundleDisplayWidget *)*puVar2,param_1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeBundleUI::OnBundleBuy(std::string const&) */

void RechargeBundleUI::OnBundleBuy(string *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  string *in_x1;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uStack_18 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(param_1 + 0x188));
  uStack_10 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(param_1 + 0x188));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&uStack_18,(__normal_iterator *)&uStack_10), bVar1)
  {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_18);
    BundleDisplayWidget::RefreshBundle((BundleDisplayWidget *)*puVar2,in_x1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&uStack_18);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeBundleUI::checkLogSendCondition() */

void __thiscall RechargeBundleUI::checkLogSendCondition(RechargeBundleUI *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  long lVar6;
  string asStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x17c);
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = *(int *)(this + 0x178) / iVar1;
  }
  local_8 = ___stack_chk_guard;
  lVar6 = (long)(*(int *)(this + 0x178) - iVar3 * iVar1);
  piVar5 = (int *)FUN_049ec3e8(*(undefined8 *)(this + 0x118),lVar6);
  if (*piVar5 == 0) {
    *piVar5 = 1;
    puVar4 = gMessageRouter;
    lVar6 = FUN_049ec3c8(*(undefined8 *)(this + 0x100),lVar6);
    uVar2 = *(undefined4 *)(lVar6 + 0x30);
    FUN_05475d88(asStack_10,lVar6 + 0x58);
    MessageRouter::Post<std::string_const&,int,std::string_const&,char_const*,int,std::string>
              ((MessageRouter *)puVar4,Message::RechargeBundleLog,"Bundle_Show",uVar2,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeBundleUI::ButtonDepress(int) */

void __thiscall RechargeBundleUI::ButtonDepress(RechargeBundleUI *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ScrollWidget *pSVar4;
  float fVar5;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    LawnApp::KillRechargeBundleUI(gLawnApp);
  }
  else if (param_1 == 1) {
    fVar5 = (float)PVZ_T();
    iVar3 = *(int *)(this + 0x178);
    *(float *)(this + 0x174) = fVar5 + 8.0;
    if (iVar3 == 0) {
      *(int *)(this + 0x178) = *(int *)(this + 0x17c);
      Sexy::Point::Point(aPStack_10,*(int *)(this + 0x17c) * *(int *)(this + 0x150),0);
      Sexy::ScrollWidget::ScrollToPoint(*(ScrollWidget **)(this + 0xf0),aPStack_10,false);
      iVar3 = *(int *)(this + 0x178);
    }
    *(int *)(this + 0x178) = iVar3 + -1;
    FUN_049ec3a0(*(long *)(this + 0xf8) + 0xd4,iVar3 + -1);
    checkLogSendCondition(this);
    pSVar4 = *(ScrollWidget **)(this + 0xf0);
    Sexy::Point::Point(aPStack_10,*(int *)(this + 0x150) * *(int *)(this + 0x178),0);
    Sexy::ScrollWidget::ScrollToPoint(pSVar4,aPStack_10,true);
  }
  else if (param_1 == 2) {
    fVar5 = (float)PVZ_T();
    iVar3 = *(int *)(this + 0x178);
    iVar2 = *(int *)(this + 0x17c);
    *(float *)(this + 0x174) = fVar5 + 8.0;
    if (iVar3 == iVar2) {
      *(undefined4 *)(this + 0x178) = 0;
      pSVar4 = *(ScrollWidget **)(this + 0xf0);
      Sexy::Point::Point(aPStack_10,0,0);
      Sexy::ScrollWidget::ScrollToPoint(pSVar4,aPStack_10,false);
      iVar3 = *(int *)(this + 0x178);
      iVar2 = *(int *)(this + 0x17c);
    }
    iVar3 = iVar3 + 1;
    *(int *)(this + 0x178) = iVar3;
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = iVar3 / iVar2;
    }
    FUN_049ec3a0(*(long *)(this + 0xf8) + 0xd4,iVar3 - iVar1 * iVar2);
    checkLogSendCondition(this);
    Sexy::Point::Point(aPStack_10,*(int *)(this + 0x150) * *(int *)(this + 0x178),0);
    Sexy::ScrollWidget::ScrollToPoint(*(ScrollWidget **)(this + 0xf0),aPStack_10,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to RechargeBundleUI::ButtonDepress(int) */

void __thiscall RechargeBundleUI::ButtonDepress(RechargeBundleUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeBundleUI::Update() */

void __thiscall RechargeBundleUI::Update(RechargeBundleUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ScrollWidget *this_00;
  float fVar4;
  float fVar5;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (((1 < *(int *)(this + 0x17c)) && (this[0x171] == (RechargeBundleUI)0x0)) &&
     (fVar5 = *(float *)(this + 0x174), fVar4 = (float)PVZ_T(), fVar5 < fVar4)) {
    fVar4 = (float)PVZ_T();
    iVar3 = *(int *)(this + 0x178);
    iVar1 = *(int *)(this + 0x17c);
    *(float *)(this + 0x174) = fVar4 + 8.0;
    if (iVar3 == iVar1) {
      *(undefined4 *)(this + 0x178) = 0;
      this_00 = *(ScrollWidget **)(this + 0xf0);
      Sexy::Point::Point(aPStack_10,0,0);
      Sexy::ScrollWidget::ScrollToPoint(this_00,aPStack_10,false);
      iVar3 = *(int *)(this + 0x178);
      iVar1 = *(int *)(this + 0x17c);
    }
    iVar3 = iVar3 + 1;
    *(int *)(this + 0x178) = iVar3;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = iVar3 / iVar1;
    }
    FUN_049ec3a0(*(long *)(this + 0xf8) + 0xd4,iVar3 - iVar2 * iVar1);
    checkLogSendCondition(this);
    Sexy::Point::Point(aPStack_10,*(int *)(this + 0x150) * *(int *)(this + 0x178),0);
    Sexy::ScrollWidget::ScrollToPoint(*(ScrollWidget **)(this + 0xf0),aPStack_10,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeBundleUI::~RechargeBundleUI() */

void __thiscall RechargeBundleUI::~RechargeBundleUI(RechargeBundleUI *this)

{
  LawnApp *pLVar1;
  PrimeText *this_00;
  WorldMapActivityBtnTurnChangeManager *this_01;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_0692ce00;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0692cac0;
  *(undefined ***)(this + 0xe0) = &PTR__RechargeBundleUI_0692ce48;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_RechargeReward");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_RechargeBundle");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_01 = (WorldMapActivityBtnTurnChangeManager *)
            Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstance();
  WorldMapActivityBtnTurnChangeManager::setIsPause(this_01,false);
  std::vector<BundleDisplayWidget*,std::allocator<BundleDisplayWidget*>>::~vector
            ((vector<BundleDisplayWidget*,std::allocator<BundleDisplayWidget*>> *)(this + 0x188));
  std::vector<EventBundleDisplayWidget*,std::allocator<EventBundleDisplayWidget*>>::~vector
            ((vector<EventBundleDisplayWidget*,std::allocator<EventBundleDisplayWidget*>> *)
             (this + 0x130));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x118));
  std::vector<BundleUIDetail,std::allocator<BundleUIDetail>>::~vector
            ((vector<BundleUIDetail,std::allocator<BundleUIDetail>> *)(this + 0x100));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to RechargeBundleUI::~RechargeBundleUI() */

void __thiscall RechargeBundleUI::~RechargeBundleUI(RechargeBundleUI *this)

{
  ~RechargeBundleUI(this + -0xe0);
  return;
}


/* RechargeBundleUI::~RechargeBundleUI() */

void __thiscall RechargeBundleUI::~RechargeBundleUI(RechargeBundleUI *this)

{
  ~RechargeBundleUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RechargeBundleUI::~RechargeBundleUI() */

void __thiscall RechargeBundleUI::~RechargeBundleUI(RechargeBundleUI *this)

{
  ~RechargeBundleUI(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeBundleUI::requestNetwork() */

void RechargeBundleUI::requestNetwork(void)

{
  char cVar1;
  NetworkMgr *this;
  INetworkMsgProcess *this_00;
  undefined1 auStack_28 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::CheckNetWork(gLawnApp);
  if (cVar1 != '\0') {
    this = (NetworkMgr *)NetworkMgr::Instance();
    this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
              (avStack_20,&DAT_05754d80,2,auStack_28);
    INetworkMsgProcess::RequestActivityList(this_00,(vector *)avStack_20,0,true);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeBundleUI::CreateBundleDisplayWidget(BundleUIDetail const&) */

void __thiscall
RechargeBundleUI::CreateBundleDisplayWidget(RechargeBundleUI *this,BundleUIDetail *param_1)

{
  BundleDisplayWidget *this_00;
  EventBundleDisplayWidget *this_01;
  BundleDisplayWidget *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x40) == 0xd2fe) {
    this_01 = ::operator_new(400);
    EventBundleDisplayWidget::EventBundleDisplayWidget(this_01,param_1);
    local_10 = (BundleDisplayWidget *)this_01;
    std::vector<EventBundleDisplayWidget*,std::allocator<EventBundleDisplayWidget*>>::push_back
              ((vector<EventBundleDisplayWidget*,std::allocator<EventBundleDisplayWidget*>> *)
               (this + 0x130),(EventBundleDisplayWidget **)&local_10);
    this_00 = local_10;
  }
  else {
    this_00 = ::operator_new(0x180);
    BundleDisplayWidget::BundleDisplayWidget(this_00,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeBundleUI::CreateNewBundle(RechargeBundleConfig*, int, bool) */

void __thiscall
RechargeBundleUI::CreateNewBundle
          (RechargeBundleUI *this,RechargeBundleConfig *param_1,int param_2,bool param_3)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  BundleDetail *pBVar3;
  long lVar4;
  undefined8 local_c0;
  long lStack_b8;
  undefined8 local_b0;
  int local_94 [3];
  string asStack_88 [8];
  int local_80;
  int iStack_7c;
  long local_78;
  int local_70;
  undefined4 uStack_6c;
  BundleUIDetail aBStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_94[0] = param_2;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  pBVar3 = (BundleDetail *)
           RechargeBundleConfig::chooseRandomBundleFromType
                     (param_1,local_94[0],param_3,(int *)(this + 0x180));
  if (pBVar3 != (BundleDetail *)0x0) {
    iStack_7c = *(int *)(pBVar3 + 0x30);
    local_80 = local_94[0];
    local_78 = 0;
    local_70 = 0;
    local_70 = RechargeBundleConfig::getBundleListBuyTimes(param_1,local_94[0],iStack_7c);
    lVar4 = LawnApp::GetRealServerTime(gLawnApp);
    iVar1 = RechargeBundleConfig::getBundleListExpireTime(param_1,local_94[0]);
    lStack_b8 = lVar4 + iVar1;
    local_c0 = CONCAT44(iStack_7c,local_80);
    local_b0 = CONCAT44(uStack_6c,local_70);
    local_78 = lStack_b8;
    PlayerInfo::RefreshDisplayingBundle(pPVar2,&local_c0);
    RechargeBundleConfig::getBundlePushConditionStrById((int)param_1);
    BundleUIDetail::BundleUIDetail(aBStack_68,pBVar3,local_94,&local_70,&local_78,asStack_88);
    std::vector<BundleUIDetail,std::allocator<BundleUIDetail>>::push_back
              ((vector<BundleUIDetail,std::allocator<BundleUIDetail>> *)(this + 0x100),aBStack_68);
    BundleUIDetail::~BundleUIDetail(aBStack_68);
    std::string::~string(asStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeBundleUI::refreshBundleConfig(ActiveItem*) */

void RechargeBundleUI::refreshBundleConfig(ActiveItem *param_1)

{
  char cVar1;
  bool bVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long lVar3;
  string *psVar4;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  RechargeBundleConfig aRStack_48 [32];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  RechargeBundleConfig::RechargeBundleConfig(aRStack_48);
  cVar1 = ActiveItem::GetDataSerialized(param_1,(RtObject *)aRStack_48);
  if (cVar1 != '\0') {
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(avStack_28);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(avStack_28);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar2)
    {
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      local_5c = *(int *)(lVar3 + 0x38);
      psVar4 = (string *)RechargeBundleConfig::getBundleListPushCondition(aRStack_48,local_5c);
      PlayerInfo::AddBundleQueueCondition(this_00,psVar4,psVar4 + 8,&local_5c);
      eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
                ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_58);
    }
  }
  PlayerInfo::saveCurrentProfile(this_00);
  RechargeBundleConfig::~RechargeBundleConfig(aRStack_48);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeBundleUI::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
RechargeBundleUI::onNotifyRefreshActivityList(RechargeBundleUI *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  vector *pvVar5;
  EventBundleDisplayWidget *this_00;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8 [8];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_d8 = CONCAT44(local_d8._4_4_,0x2983);
  local_8 = ___stack_chk_guard;
  local_d0 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_d8);
  local_c8[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_d0,(rbtree_iterator *)local_c8);
  if ((bVar1) && (param_1)) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    ActiveItem::RefreshDate(aAStack_88);
    RechargeBundleConfig::RechargeBundleConfig((RechargeBundleConfig *)local_c8);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)local_c8);
    if (cVar2 == '\0') {
      RechargeBundleConfig::~RechargeBundleConfig((RechargeBundleConfig *)local_c8);
      ActiveItem::~ActiveItem(aAStack_88);
    }
    else {
      local_d8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x130));
      local_d0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x130));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_d8,(__normal_iterator *)&local_d0),
            bVar1) {
        puVar4 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d8);
        this_00 = (EventBundleDisplayWidget *)*puVar4;
        iVar3 = FUN_049ec394(*(undefined4 *)(this_00 + 0x124));
        pvVar5 = (vector *)
                 RechargeBundleConfig::getBundleDetailById((RechargeBundleConfig *)local_c8,iVar3);
        if (pvVar5 != (vector *)0x0) {
          EventBundleDisplayWidget::RefreshUI(this_00,pvVar5);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_d8);
      }
      RechargeBundleConfig::~RechargeBundleConfig((RechargeBundleConfig *)local_c8);
      ActiveItem::~ActiveItem(aAStack_88);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeBundleUI::Draw(Sexy::Graphics*) */

void __thiscall RechargeBundleUI::Draw(RechargeBundleUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  Image *pIVar5;
  LotteryResultProgressBar *this_00;
  long lVar6;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  vector *pvVar7;
  long lVar8;
  int extraout_w1;
  code *pcVar9;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  wstring awStack_40 [8];
  wstring awStack_38 [8];
  Color aCStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x170] == (RechargeBundleUI)0x0) goto LAB_049f44a4;
  Sexy::Insets::Insets((Insets *)&local_20,(Insets *)(this + 0x148));
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b77940);
  Draw9SliceImage(param_1,(Insets *)&local_20,uVar4);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b777a0);
  iVar3 = *(int *)(this + 0x50);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b777a0);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar2 = FUN_049ec7f8(0x2c);
  Sexy::Graphics::DrawImage(param_1,pIVar5,(iVar3 - iVar1) / 2,*(int *)(this + 0x14c) - iVar2);
  pcVar9 = *(code **)(*(long *)this + 0x290);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  Sexy::Color::Color((Color *)&local_20,1);
  iVar1 = FUN_049ec7f8(0x1a);
  iVar3 = *(int *)(this + 0x14c);
  TodStringTranslate(L"[RECHARGEBUNDLE_TITLE]");
  (*pcVar9)(this,param_1,uVar4,(Insets *)&local_20,iVar3 - iVar1,aCStack_30);
  FUN_05476c50(aCStack_30);
  lVar6 = FUN_049ec3b4(*(undefined8 *)(this + 0x100),*(undefined8 *)(this + 0x108));
  if (lVar6 == 0) {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    lVar6 = LawnApp::GetRealServerTime(gLawnApp);
    pvVar7 = (vector *)PlayerInfo::GetDisplayingBundleList(this_02);
    std::vector<BundleDisplay,std::allocator<BundleDisplay>>::vector
              ((vector<BundleDisplay,std::allocator<BundleDisplay>> *)&local_20,pvVar7);
    FUN_05476574(auStack_48);
    lVar8 = FUN_049ec3d4(local_20,local_18);
    if (lVar8 == 0) {
LAB_049f4730:
      TodStringTranslate(L"[RECHARGEBUNDLE_CLOSE_TO_REFRESH]");
      FUN_054766c8(auStack_48,aCStack_30);
      FUN_05476c50(aCStack_30);
    }
    else {
      lVar8 = FUN_049ec5d8(local_20);
      lVar6 = *(long *)(lVar8 + 8) - lVar6;
      if (lVar6 < 1) goto LAB_049f4730;
      FUN_05478178(awStack_38,L"[RECHARGEBUNDLE_WAITING_FOR_REFRESH]",auStack_50);
      StringHelper::ToTimeString((StringHelper *)0x3,(float)lVar6,extraout_w1);
      TodReplaceString(awStack_38,L"{TIME}",awStack_40);
      FUN_054766c8(auStack_48,aCStack_30);
      FUN_05476c50(aCStack_30);
      FUN_05476c50(awStack_40);
      FUN_05476c50(awStack_38);
      nop();
    }
    pcVar9 = *(code **)(*(long *)this + 0x290);
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline)
    ;
    Sexy::Color::Color(aCStack_30,1);
    iVar3 = FUN_049ec7f8(0x127);
    (*pcVar9)(this,param_1,uVar4,aCStack_30,*(int *)(this + 0x14c) + iVar3 / 2,auStack_48);
    FUN_05476c50(auStack_48);
    std::vector<BundleDisplay,std::allocator<BundleDisplay>>::~vector
              ((vector<BundleDisplay,std::allocator<BundleDisplay>> *)&local_20);
  }
  nop();
LAB_049f44a4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeBundleUI::Init() */

void __thiscall RechargeBundleUI::Init(RechargeBundleUI *this)

{
  ButtonListener *pBVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  RechargeRewardProgress *this_00;
  PVZ2UIButton *pPVar11;
  LotteryResultProgressBar *pLVar12;
  SalesProgressBar *pSVar13;
  undefined8 uVar14;
  long lVar15;
  BundleDisplayScrollWidget *this_01;
  Widget *this_02;
  ulong uVar16;
  BundleUIDetail *pBVar17;
  RechargeBundleDotWidget *this_03;
  char *__s;
  TGALogMgr *pTVar18;
  byte bVar19;
  undefined8 uVar20;
  ulong uVar21;
  long *plVar22;
  code *pcVar23;
  float fVar24;
  int iVar25;
  undefined1 auStack_f0 [8];
  Insets aIStack_e8 [16];
  Insets aIStack_d8 [8];
  undefined4 local_d0;
  undefined4 local_cc;
  TGARechargeBundleData aTStack_c8 [8];
  string asStack_c0 [40];
  vector<TGABundle,std::allocator<TGABundle>> avStack_98 [24];
  vector<TGABundle,std::allocator<TGABundle>> avStack_80 [24];
  long *local_68 [12];
  long local_8;
  
  pBVar1 = (ButtonListener *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_049ec7f8(10);
  iVar25 = *(int *)(this + 0x148);
  iVar10 = *(int *)(this + 0x154);
  iVar9 = *(int *)(this + 0x14c);
  iVar4 = FUN_049ec7f8(0xd2);
  Sexy::Insets::Insets
            (aIStack_e8,iVar3 + iVar25,(iVar9 + iVar10) - iVar4,*(int *)(this + 0x150) + iVar3 * -2,
             iVar4);
  this_00 = ::operator_new(0x128);
  RechargeRewardProgress::RechargeRewardProgress(this_00);
  *(RechargeRewardProgress **)(this + 0xe8) = this_00;
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_e8);
  RechargeRewardProgress::Init(*(RechargeRewardProgress **)(this + 0xe8));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  FUN_05478178(aTStack_c8,&DAT_056f11a8,aIStack_d8);
  Sexy::Color::Color((Color *)local_68,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar11,0,pBVar1,(wstring *)aTStack_c8,(Color *)local_68);
  *(PVZ2UIButton **)(this + 0x158) = pPVar11;
  FUN_05476c50(aTStack_c8);
  nop();
  plVar22 = *(long **)(this + 0x158);
  iVar25 = *(int *)(this + 0x150);
  iVar10 = *(int *)(this + 0x148);
  pcVar23 = *(code **)(*plVar22 + 0x198);
  iVar3 = FUN_049ec7f8(0x34);
  iVar4 = FUN_049ec7f8(9);
  iVar9 = *(int *)(this + 0x14c);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b779e8);
  uVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b779e8);
  uVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
  (*pcVar23)(plVar22,(iVar10 + iVar25) - iVar3,iVar9 - iVar4,uVar5,uVar6);
  pPVar11 = *(PVZ2UIButton **)(this + 0x158);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aTStack_c8,&DAT_06b779e8,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_68,&DAT_06b77a68,1);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)aTStack_c8,(PVZ2UIImage *)local_68);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x158));
  uVar14 = *(undefined8 *)(this + 0x100);
  uVar20 = *(undefined8 *)(this + 0x108);
  *(undefined4 *)(*(long *)(this + 0x158) + 0x68) = 10000;
  lVar15 = FUN_049ec3b4(uVar14,uVar20);
  if (lVar15 != 0) {
    uVar21 = 0;
    iVar10 = 0;
    iVar4 = FUN_049ec7f8(0x19);
    iVar25 = *(int *)(this + 0x148);
    iVar7 = FUN_049ec7f8(0xf);
    iVar9 = *(int *)(this + 0x14c);
    iVar3 = *(int *)(this + 0x150);
    iVar8 = FUN_049ec7f8(0x127);
    Sexy::Insets::Insets(aIStack_d8,iVar4 + iVar25,iVar7 + iVar9,iVar3 + iVar4 * -2,iVar8);
    this_01 = ::operator_new(0x248);
    BundleDisplayScrollWidget::BundleDisplayScrollWidget
              (this_01,(ScrollWidgetListener *)(this + 0xe0));
    lVar15 = *(long *)this_01;
    *(BundleDisplayScrollWidget **)(this + 0xf0) = this_01;
    (**(code **)(lVar15 + 0x1a0))(this_01,aIStack_d8);
    Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0xf0),1);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
    this_02 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_02);
    uVar14 = *(undefined8 *)(this + 0x100);
    uVar20 = *(undefined8 *)(this + 0x108);
    *(undefined4 *)(this + 0x17c) = 0;
    uVar16 = FUN_049ec3b4(uVar14,uVar20);
    iVar9 = 0;
    iVar25 = iVar10;
    if (uVar16 != 0) {
      do {
        pBVar17 = (BundleUIDetail *)FUN_049ec3c8(uVar14,uVar21);
        if (*(int *)(pBVar17 + 0x40) == 0xd2fe) {
          iVar3 = LawnApp::GetPlatform(gLawnApp);
          if (((iVar3 == 0xa5) || (iVar3 = LawnApp::GetPlatform(gLawnApp), iVar3 == 4)) &&
             (0x1e < *(int *)(pBVar17 + 0x34))) {
            uVar14 = *(undefined8 *)(this + 0x100);
            uVar20 = *(undefined8 *)(this + 0x108);
            uVar16 = FUN_049ec3b4(uVar14,uVar20);
          }
          else {
            plVar22 = (long *)CreateBundleDisplayWidget(this,pBVar17);
            (**(code **)(*plVar22 + 0x198))(plVar22,iVar25,0,local_d0,local_cc);
            (**(code **)(*(long *)this_02 + 0x60))(this_02,plVar22);
            iVar4 = FUN_049ec7f8(0x19);
            uVar20 = *(undefined8 *)(this + 0x108);
            iVar3 = *(int *)(this + 0x17c);
            lVar15 = plVar22[10];
            *(int *)(this + 0x17c) = iVar3 + 1;
            iVar25 = iVar25 + (int)lVar15 + iVar4 * 2;
            uVar14 = *(undefined8 *)(this + 0x100);
            if (iVar3 == 0) {
              iVar10 = iVar9;
            }
            uVar16 = FUN_049ec3b4(uVar14,uVar20);
          }
        }
        uVar21 = uVar21 + 1;
        iVar9 = (int)uVar21;
      } while (uVar21 < uVar16);
    }
    for (uVar21 = 0; uVar21 < uVar16; uVar21 = uVar21 + 1) {
      pBVar17 = (BundleUIDetail *)FUN_049ec3c8(uVar14,uVar21);
      if (*(int *)(pBVar17 + 0x40) != 0xd2fe) {
        iVar9 = LawnApp::GetPlatform(gLawnApp);
        if (((iVar9 == 0xa5) || (iVar9 = LawnApp::GetPlatform(gLawnApp), iVar9 == 4)) &&
           (0x1e < *(int *)(pBVar17 + 0x34))) {
          uVar14 = *(undefined8 *)(this + 0x100);
          uVar20 = *(undefined8 *)(this + 0x108);
        }
        else {
          local_68[0] = (long *)CreateBundleDisplayWidget(this,pBVar17);
          (**(code **)(*local_68[0] + 0x198))(local_68[0],iVar25,0,local_d0,local_cc);
          (**(code **)(*(long *)this_02 + 0x60))(this_02,local_68[0]);
          cVar2 = LawnApp::isOppoNewerOptimizationOpen(gLawnApp);
          if (cVar2 != '\0') {
            std::vector<BundleDisplayWidget*,std::allocator<BundleDisplayWidget*>>::push_back
                      ((vector<BundleDisplayWidget*,std::allocator<BundleDisplayWidget*>> *)
                       (this + 0x188),(BundleDisplayWidget **)local_68);
          }
          iVar3 = FUN_049ec7f8(0x19);
          uVar14 = *(undefined8 *)(this + 0x100);
          iVar9 = *(int *)(this + 0x17c);
          uVar20 = *(undefined8 *)(this + 0x108);
          lVar15 = local_68[0][10];
          *(int *)(this + 0x17c) = iVar9 + 1;
          if (iVar9 == 0) {
            iVar10 = (int)uVar21;
          }
          iVar25 = iVar25 + (int)lVar15 + iVar3 * 2;
        }
      }
      uVar16 = FUN_049ec3b4(uVar14,uVar20);
    }
    local_68[0] = (long *)((ulong)local_68[0] & 0xffffffff00000000);
    std::vector<int,std::allocator<int>>::resize
              ((vector<int,std::allocator<int>> *)(this + 0x118),(long)*(int *)(this + 0x17c),
               (int *)local_68);
    if (*(int *)(this + 0x17c) < 2) {
      iVar10 = FUN_049ec7f8(0x19);
      iVar10 = -iVar10;
    }
    else {
      pBVar17 = (BundleUIDetail *)FUN_049ec3c8(*(undefined8 *)(this + 0x100),(long)iVar10);
      plVar22 = (long *)CreateBundleDisplayWidget(this,pBVar17);
      FUN_049ec5dc((long)plVar22 + 0x114);
      (**(code **)(*plVar22 + 0x198))(plVar22,iVar25,0,local_d0,local_cc);
      (**(code **)(*(long *)this_02 + 0x60))(this_02,plVar22);
      iVar10 = FUN_049ec7f8(0x19);
      iVar10 = iVar10 + (int)plVar22[10];
    }
    (**(code **)(*(long *)this_02 + 0x198))(this_02,0,0,iVar10 + iVar25,local_cc);
    (**(code **)(**(long **)(this + 0xf0) + 0x60))(*(long **)(this + 0xf0),this_02);
    FUN_049ec398(*(long *)(this + 0xf0) + 0x1ec);
    FUN_05478178(aTStack_c8,&DAT_056f11a8,auStack_f0);
    Sexy::Color::Color((Color *)local_68,1);
    pPVar11 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar11,1,pBVar1,(wstring *)aTStack_c8,(Color *)local_68);
    *(PVZ2UIButton **)(this + 0x160) = pPVar11;
    FUN_05476c50(aTStack_c8);
    nop();
    plVar22 = *(long **)(this + 0x160);
    pcVar23 = *(code **)(*plVar22 + 0x198);
    iVar9 = FUN_049ec7f8(5);
    iVar25 = *(int *)(this + 0x148);
    iVar3 = FUN_049ec7f8(0x96);
    iVar10 = *(int *)(this + 0x14c);
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b77970);
    uVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    pSVar13 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b77970);
    uVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
    (*pcVar23)(plVar22,iVar9 + iVar25,iVar3 + iVar10,uVar5,uVar6);
    pPVar11 = *(PVZ2UIButton **)(this + 0x160);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aTStack_c8,&DAT_06b77970,1);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_68,&DAT_06b77970,1);
    PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)aTStack_c8,(PVZ2UIImage *)local_68);
    if (*(int *)(this + 0x17c) < 2) {
      bVar19 = 0;
    }
    else {
      bVar19 = (byte)this[0x171] ^ 1;
    }
    (**(code **)(**(long **)(this + 0x160) + 0x158))(*(long **)(this + 0x160),bVar19);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x160));
    FUN_05478178(aTStack_c8,&DAT_056f11a8,auStack_f0);
    Sexy::Color::Color((Color *)local_68,1);
    pPVar11 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar11,2,pBVar1,(wstring *)aTStack_c8,(Color *)local_68);
    *(PVZ2UIButton **)(this + 0x168) = pPVar11;
    FUN_05476c50(aTStack_c8);
    nop();
    plVar22 = *(long **)(this + 0x168);
    iVar25 = *(int *)(this + 0x150);
    iVar10 = *(int *)(this + 0x148);
    pcVar23 = *(code **)(*plVar22 + 0x198);
    iVar3 = FUN_049ec7f8(5);
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b777f0);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    iVar7 = FUN_049ec7f8(0x96);
    iVar9 = *(int *)(this + 0x14c);
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b777f0);
    uVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    pSVar13 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b777f0);
    uVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
    (*pcVar23)(plVar22,((iVar10 + iVar25) - iVar3) - iVar4,iVar7 + iVar9,uVar5,uVar6);
    pPVar11 = *(PVZ2UIButton **)(this + 0x168);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aTStack_c8,&DAT_06b777f0,1);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_68,&DAT_06b777f0,1);
    PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)aTStack_c8,(PVZ2UIImage *)local_68);
    if (*(int *)(this + 0x17c) < 2) {
      bVar19 = 0;
    }
    else {
      bVar19 = (byte)this[0x171] ^ 1;
    }
    (**(code **)(**(long **)(this + 0x168) + 0x158))(*(long **)(this + 0x168),bVar19);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x168));
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b77c70);
    iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    iVar25 = *(int *)(this + 0x17c);
    iVar3 = FUN_049ec7f8(10);
    iVar10 = *(int *)(this + 0x50);
    iVar9 = iVar9 * iVar25 + iVar3 * (iVar25 + -1);
    iVar3 = FUN_049ec7f8(0x11b);
    iVar25 = *(int *)(this + 0x14c);
    this_03 = ::operator_new(0xe0);
    RechargeBundleDotWidget::RechargeBundleDotWidget(this_03,*(int *)(this + 0x17c));
    lVar15 = *(long *)this_03;
    *(RechargeBundleDotWidget **)(this + 0xf8) = this_03;
    pcVar23 = *(code **)(lVar15 + 0x198);
    pSVar13 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b77c70);
    uVar5 = SalesProgressBar::GetCurrentLevel(pSVar13);
    (*pcVar23)(this_03,(iVar10 - iVar9) / 2,iVar3 + iVar25,iVar9,uVar5);
    if (*(int *)(this + 0x17c) < 2) {
      bVar19 = 0;
    }
    else {
      bVar19 = (byte)this[0x171] ^ 1;
    }
    (**(code **)(**(long **)(this + 0xf8) + 0x158))(*(long **)(this + 0xf8),bVar19);
    iVar25 = 5;
    pcVar23 = *(code **)(*(long *)this + 0x60);
    (*pcVar23)(this,*(undefined8 *)(this + 0xf8));
    fVar24 = (float)PVZ_T();
    *(float *)(this + 0x174) = fVar24 + 8.0;
    checkLogSendCondition(this);
    TGARechargeBundleData::TGARechargeBundleData(aTStack_c8);
    std::string::append((string *)aTStack_c8,"1",(size_t)pcVar23);
    DString::DString((DString *)local_68,*(int *)(this + 0x180));
    __s = (char *)DString::c_str((DString *)local_68);
    std::string::append(asStack_c0,__s,(size_t)pcVar23);
    DString::~DString((DString *)local_68);
    do {
      Sexy::FlagsMod::FlagsMod((FlagsMod *)local_68);
      std::vector<TGABundle,std::allocator<TGABundle>>::push_back(avStack_98,(TGABundle *)local_68);
      std::vector<TGABundle,std::allocator<TGABundle>>::push_back(avStack_80,(TGABundle *)local_68);
      iVar25 = iVar25 + -1;
    } while (iVar25 != 0);
    pTVar18 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGARechargeBundleData::TGARechargeBundleData((TGARechargeBundleData *)local_68,aTStack_c8);
    TGALogMgr::LogRechargeBundle(pTVar18,(DString *)local_68);
    TGARechargeBundleData::~TGARechargeBundleData((TGARechargeBundleData *)local_68);
    TGARechargeBundleData::~TGARechargeBundleData(aTStack_c8);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeBundleUI::createFromNetworkResponse() */

void __thiscall RechargeBundleUI::createFromNetworkResponse(RechargeBundleUI *this)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar7;
  BundleDetail *pBVar8;
  vector *pvVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  equal_to *local_188;
  int local_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150 [2];
  undefined8 local_140 [3];
  RechargeBundleConfig aRStack_128 [32];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_108 [32];
  BundleUIDetail aBStack_e8 [96];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar4 = PlayerInfo::GetNumRechargeCurrency(this_01);
  *(undefined4 *)(this + 0x180) = uVar4;
  iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar5);
  ActiveItem::RefreshDate(aAStack_88);
  RechargeBundleConfig::RechargeBundleConfig(aRStack_128);
  cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aRStack_128);
  if (cVar1 == '\0') goto LAB_049f581c;
  cVar1 = PlayerInfo::HasQueueingBundle(this_01);
  if (cVar1 == '\0') {
    PlayerInfo::ClearExpiredDisplayingBundle(this_01);
    local_170 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(avStack_108);
    local_168 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(avStack_108);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_170,(__normal_iterator *)&local_168);
    bVar3 = false;
    if (bVar2) {
      do {
        lVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_170);
        local_174 = *(int *)(lVar7 + 0x38);
        cVar1 = PlayerInfo::IsBundleListDisplaying(this_01,local_174);
        if (cVar1 == '\0') {
          bVar3 = true;
          CreateNewBundle(this,aRStack_128,local_174,false);
        }
        else {
          PlayerInfo::GetDisplayingBundleById((int)this_01);
          local_160 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)local_140);
          local_158 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)local_140);
          while (bVar2 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_160,(__normal_iterator *)&local_158)
                , bVar2) {
            lVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_160);
            iVar5 = *(int *)(lVar7 + 4);
            iVar6 = PlayerInfo::GetDisplayingBundleBuyTimes(this_01,iVar5);
            if ((0 < iVar6) &&
               (pBVar8 = (BundleDetail *)
                         RechargeBundleConfig::getBundleDetailById(aRStack_128,iVar5),
               pBVar8 != (BundleDetail *)0x0)) {
              RechargeBundleConfig::getBundlePushConditionStrById((int)aRStack_128);
              BundleUIDetail::BundleUIDetail
                        (aBStack_e8,pBVar8,&local_174,(int *)(lVar7 + 0x10),(long *)(lVar7 + 8),
                         (string *)local_150);
              std::vector<BundleUIDetail,std::allocator<BundleUIDetail>>::push_back
                        ((vector<BundleUIDetail,std::allocator<BundleUIDetail>> *)(this + 0x100),
                         aBStack_e8);
              BundleUIDetail::~BundleUIDetail(aBStack_e8);
              std::string::~string((string *)local_150);
            }
            std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                      ((move_iterator<Sexy::LeaderboardEntry*> *)&local_160);
          }
          std::vector<BundleDisplay,std::allocator<BundleDisplay>>::~vector
                    ((vector<BundleDisplay,std::allocator<BundleDisplay>> *)local_140);
        }
        eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
                  ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_170);
        bVar2 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&local_170,(__normal_iterator *)&local_168);
      } while (bVar2);
    }
    PlayerInfo::saveCurrentProfile(this_01);
    if (bVar3) goto LAB_049f5ae8;
  }
  else {
    pvVar9 = (vector *)PVPSkillUpgrade::SkillButton::GetSkill((SkillButton *)this_01);
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)aBStack_e8,pvVar9);
    local_150[0] = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)aBStack_e8);
    local_140[0] = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aBStack_e8);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_150,(__normal_iterator *)local_140), bVar3)
    {
      piVar10 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_150);
      CreateNewBundle(this,aRStack_128,*piVar10,true);
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)local_150);
    }
    PlayerInfo::ClearBundleQueueingList(this_01);
    this[0x171] = (RechargeBundleUI)0x1;
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)aBStack_e8);
LAB_049f5ae8:
    PlayerInfo::SortDisplayingBundleByTime(this_01);
  }
  local_188 = (equal_to *)&local_168;
  uVar11 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x100));
  uVar12 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)(this + 0x100));
  local_160 = 0x48;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_160,(_Placeholder *)&DAT_0576d300);
  local_158 = 0x48;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_158,(_Placeholder *)&DAT_0576d308);
  std::
  bind<std::equal_to<int>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>>
            (local_188,(_Bind *)local_150,(_Bind *)local_140);
  std::
  sort<__gnu_cxx::__normal_iterator<BundleUIDetail*,std::vector<BundleUIDetail,std::allocator<BundleUIDetail>>>,std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<long_BundleUIDetail::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<long_BundleUIDetail::*>(std::_Placeholder<2>)>)>>
            (uVar11,uVar12,aBStack_e8);
LAB_049f581c:
  if (this[0x170] == (RechargeBundleUI)0x0) {
    Init(this);
  }
  else {
    RechargeRewardProgress::setCurrentRechargeAmount
              (*(RechargeRewardProgress **)(this + 0xe8),*(int *)(this + 0x180));
  }
  this[0x170] = (RechargeBundleUI)0x1;
  RechargeBundleConfig::~RechargeBundleConfig(aRStack_128);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeBundleUI::RechargeBundleUI() */

void __thiscall RechargeBundleUI::RechargeBundleUI(RechargeBundleUI *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  PrimeText *this_00;
  WorldMapActivityBtnTurnChangeManager *this_01;
  undefined4 uVar7;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_0692cac0;
  *(undefined **)(this + 0xd8) = &DAT_0692ce00;
  *(undefined ***)(this + 0xe0) = &PTR__RechargeBundleUI_0692ce48;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x100));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x118));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x130));
  Sexy::Insets::Insets((Insets *)(this + 0x148));
  this[0x171] = (RechargeBundleUI)0x0;
  uVar7 = PVZ_EOT();
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x174) = uVar7;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x188));
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_RechargeReward");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_RechargeBundle");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_HeadShot_BigPlant");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Fragment_Material");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  Sexy::Widget::Resize
            ((Widget *)this,*(int *)(gLawnApp + 0x71c),*(int *)(gLawnApp + 0x720),
             *(int *)(gLawnApp + 0x724),*(int *)(gLawnApp + 0x728));
  iVar4 = FUN_049ec7f8(0x2ee);
  iVar5 = FUN_049ec7f8(0x1fe);
  iVar6 = FUN_049ec7f8(10);
  Sexy::Insets::Insets
            ((Insets *)&local_20,(*(int *)(this + 0x50) - iVar4) / 2,
             iVar6 + (*(int *)(this + 0x54) - iVar5) / 2,iVar4,iVar5);
  *(undefined8 *)(this + 0x148) = local_20;
  *(undefined8 *)(this + 0x150) = uStack_18;
  this[0x170] = (RechargeBundleUI)0x0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRechargeRewardCurrencyChanged);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<RechargeBundleUI,void(RechargeBundleUI::*)(int)>>
            ((MessageRouter *)puVar1,Message::RechargeRewardCurrencyChanged,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_80 = local_28;
  local_90 = local_38;
  uStack_88 = uStack_30;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<RechargeBundleUI,void(RechargeBundleUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_90);
  cVar3 = LawnApp::isOppoNewerOptimizationOpen(gLawnApp);
  puVar1 = gMessageRouter;
  if (cVar3 != '\0') {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnBundleBuy);
    local_b0 = local_20;
    uStack_a8 = uStack_18;
    local_a0 = local_10;
    MessageRouter::
    Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<RechargeBundleUI,void(RechargeBundleUI::*)(std::string_const&)>>
              ((MessageRouter *)puVar1,Message::BundleBuy,&local_b0);
  }
  createFromNetworkResponse(this);
  MessageRouter::Post((_func_void *)gMessageRouter);
  this_01 = (WorldMapActivityBtnTurnChangeManager *)
            Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstance();
  WorldMapActivityBtnTurnChangeManager::setIsPause(this_01,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RechargeBundleUI::refreshBundleConfig(ActiveItem *param_1)

{
  char cVar1;
  bool bVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long lVar3;
  string *psVar4;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  RechargeBundleConfig aRStack_48 [32];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_28 [32];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  RechargeBundleConfig::RechargeBundleConfig(aRStack_48);
  cVar1 = ActiveItem::GetDataSerialized(param_1,(RtObject *)aRStack_48);
  if (cVar1 != '\0') {
    uStack_58 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(avStack_28);
    uStack_50 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(avStack_28);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&uStack_58,(__normal_iterator *)&uStack_50),
          bVar2) {
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_58);
      iStack_5c = *(int *)(lVar3 + 0x38);
      psVar4 = (string *)RechargeBundleConfig::getBundleListPushCondition(aRStack_48,iStack_5c);
      PlayerInfo::AddBundleQueueCondition(this_00,psVar4,psVar4 + 8,&iStack_5c);
      eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
                ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&uStack_58);
    }
  }
  PlayerInfo::saveCurrentProfile(this_00);
  RechargeBundleConfig::~RechargeBundleConfig(aRStack_48);
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

