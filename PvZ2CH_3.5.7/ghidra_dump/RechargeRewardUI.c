// Class: RechargeRewardUI


/* RechargeRewardUI::ButtonPress(int) */

int RechargeRewardUI::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to RechargeRewardUI::ButtonPress(int) */

void __thiscall RechargeRewardUI::ButtonPress(RechargeRewardUI *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* RechargeRewardUI::ButtonDepress(int) */

void __thiscall RechargeRewardUI::ButtonDepress(RechargeRewardUI *this,int param_1)

{
  if (param_1 == 0) {
    LawnApp::KillRechargeRewardUI(gLawnApp);
    return;
  }
  if (param_1 != 1) {
    return;
  }
  LawnApp::ShowCoinStore(gLawnApp,2);
  return;
}


/* non-virtual thunk to RechargeRewardUI::ButtonDepress(int) */

void __thiscall RechargeRewardUI::ButtonDepress(RechargeRewardUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardUI::getBannerImage() */

void RechargeRewardUI::getBannerImage(void)

{
  char cVar1;
  long in_x0;
  RechargeRewardConfig *pRVar2;
  long lVar3;
  undefined8 uVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_10);
  if (*(char *)(in_x0 + 0x128) != '\0') {
    pRVar2 = (RechargeRewardConfig *)LawnApp::GetRechargeRewardConfigInfo(gLawnApp);
    lVar3 = RechargeRewardConfig::getCurrentAvailableContent(pRVar2,(int *)(in_x0 + 300));
    if (lVar3 != 0) {
      cVar1 = FUN_0547419c(lVar3 + 0x20);
      if (cVar1 == '\0') {
        thunk_FUN_05475e00(asStack_10,lVar3 + 0x20);
        goto LAB_049e3b54;
      }
    }
  }
  pRVar2 = (RechargeRewardConfig *)LawnApp::GetRechargeRewardConfigInfo(gLawnApp);
  uVar4 = RechargeRewardConfig::getDefaultBanner(pRVar2);
  thunk_FUN_05475e00(asStack_10,uVar4);
LAB_049e3b54:
  GetImageByName(asStack_10);
  std::string::~string(asStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardUI::~RechargeRewardUI() */

void __thiscall RechargeRewardUI::~RechargeRewardUI(RechargeRewardUI *this)

{
  LawnApp *this_00;
  PrimeText *this_01;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_0692b560;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0692b230;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_RechargeReward");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_01 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x120));
  std::vector<RechargeRewardContent,std::allocator<RechargeRewardContent>>::~vector
            ((vector<RechargeRewardContent,std::allocator<RechargeRewardContent>> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RechargeRewardUI::~RechargeRewardUI() */

void __thiscall RechargeRewardUI::~RechargeRewardUI(RechargeRewardUI *this)

{
  ~RechargeRewardUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardUI::onRechargeRewardCurrencyChanged(int) */

void __thiscall
RechargeRewardUI::onRechargeRewardCurrencyChanged(RechargeRewardUI *this,int param_1)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  undefined1 auStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  *(int *)(this + 300) = param_1;
  local_8 = ___stack_chk_guard;
  RechargeRewardProgress::setCurrentRechargeAmount
            (*(RechargeRewardProgress **)(this + 0xe0),param_1);
  getBannerImage();
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x120),(RtWeakPtr *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)aRStack_20,
             &DAT_05754d60,1,auStack_28);
  INetworkMsgProcess::RequestActivityList(this_01,(vector *)aRStack_20,0,false);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardUI::requestNetwork() */

void RechargeRewardUI::requestNetwork(void)

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
              (avStack_20,&DAT_05754d70,2,auStack_28);
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
/* RechargeRewardUI::createFromNetworkResponse() */

void __thiscall RechargeRewardUI::createFromNetworkResponse(RechargeRewardUI *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  RechargeRewardProgress *this_00;
  PVZ2UIButton *pPVar11;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  undefined8 uVar12;
  code *pcVar13;
  long *plVar14;
  undefined1 auStack_138 [8];
  Insets aIStack_130 [16];
  RechargeRewardItem aRStack_120 [8];
  undefined8 local_118;
  undefined4 local_100;
  wstring awStack_f8 [56];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_c0 [56];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar4);
  ActiveItem::RefreshDate(aAStack_88);
  RechargeRewardItem::RechargeRewardItem(aRStack_120);
  cVar3 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aRStack_120);
  if (cVar3 != '\0') {
    piVar10 = (int *)FUN_049e3420(local_118,0);
    iVar4 = *piVar10;
    *(undefined4 *)(this + 300) = local_100;
    this[0x128] = (RechargeRewardUI)(iVar4 == 2);
  }
  if (this[0x129] == (RechargeRewardUI)0x0) {
    iVar5 = FUN_049e37f4(10);
    iVar4 = *(int *)(this + 0x100);
    iVar1 = *(int *)(this + 0x10c);
    iVar2 = *(int *)(this + 0x104);
    iVar6 = FUN_049e37f4(0x104);
    Sexy::Insets::Insets
              (aIStack_130,iVar5 + iVar4,(iVar2 + iVar1) - iVar6,*(int *)(this + 0x108) + iVar5 * -2
               ,iVar6);
    this_00 = ::operator_new(0x128);
    RechargeRewardProgress::RechargeRewardProgress(this_00);
    *(RechargeRewardProgress **)(this + 0xe0) = this_00;
    (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_130);
    RechargeRewardProgress::Init(*(RechargeRewardProgress **)(this + 0xe0));
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
    FUN_05478178(awStack_f8,&DAT_056f11a8,auStack_138);
    Sexy::Color::Color((Color *)aRStack_c0,1);
    pPVar11 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar11,0,(ButtonListener *)(this + 0xd8),awStack_f8,(Color *)aRStack_c0);
    *(PVZ2UIButton **)(this + 0x110) = pPVar11;
    FUN_05476c50(awStack_f8);
    nop();
    plVar14 = *(long **)(this + 0x110);
    iVar4 = *(int *)(this + 0x108);
    iVar1 = *(int *)(this + 0x100);
    pcVar13 = *(code **)(*plVar14 + 0x198);
    iVar5 = FUN_049e37f4(0x34);
    iVar6 = FUN_049e37f4(9);
    iVar2 = *(int *)(this + 0x104);
    this_01 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b77068);
    uVar7 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    this_02 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b77068);
    uVar8 = SalesProgressBar::GetCurrentLevel(this_02);
    (*pcVar13)(plVar14,(iVar1 + iVar4) - iVar5,iVar2 - iVar6,uVar7,uVar8);
    pPVar11 = *(PVZ2UIButton **)(this + 0x110);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_f8,&DAT_06b77068,1);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_c0,&DAT_06b76fc8,1);
    PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)awStack_f8,(PVZ2UIImage *)aRStack_c0);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x110));
    FUN_05478178(awStack_f8,L"[RECHARGE]",auStack_138);
    Sexy::Color::Color((Color *)aRStack_c0,1);
    pPVar11 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar11,1,(ButtonListener *)(this + 0xd8),awStack_f8,(Color *)aRStack_c0);
    *(PVZ2UIButton **)(this + 0x118) = pPVar11;
    FUN_05476c50(awStack_f8);
    nop();
    plVar14 = *(long **)(this + 0x118);
    iVar6 = FUN_049e37f4(0xb4);
    iVar4 = *(int *)(this + 0x108);
    iVar1 = *(int *)(this + 0x100);
    iVar2 = *(int *)(this + 0x10c);
    iVar5 = *(int *)(this + 0x104);
    iVar9 = FUN_049e37f4(0x4e);
    uVar7 = FUN_049e37f4(0x41);
    (**(code **)(*plVar14 + 0x198))
              (plVar14,iVar1 + (iVar4 - iVar6) / 2,(iVar5 + iVar2) - iVar9,iVar6,uVar7);
    plVar14 = *(long **)(this + 0x118);
    pcVar13 = *(code **)(*plVar14 + 800);
    uVar12 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_34_ThickOutline);
    (*pcVar13)(plVar14,uVar12);
    pPVar11 = *(PVZ2UIButton **)(this + 0x118);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_f8,&DAT_06b771e0,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_c0,&DAT_06b77318,3);
    PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)awStack_f8,(PVZ2UIImage *)aRStack_c0);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x118));
  }
  else {
    RechargeRewardProgress::setCurrentRechargeAmount
              (*(RechargeRewardProgress **)(this + 0xe0),*(int *)(this + 300));
  }
  getBannerImage();
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x120),(RtWeakPtr *)aRStack_c0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c0);
  this[0x129] = (RechargeRewardUI)0x1;
  RechargeRewardItem::~RechargeRewardItem(aRStack_120);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardUI::RechargeRewardUI() */

void __thiscall RechargeRewardUI::RechargeRewardUI(RechargeRewardUI *this)

{
  undefined *puVar1;
  LawnApp *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  PrimeText *this_01;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0692b230;
  *(undefined **)(this + 0xd8) = &DAT_0692b560;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  Sexy::Insets::Insets((Insets *)(this + 0x100));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x120));
  *(undefined4 *)(this + 300) = 0;
  this_00 = gLawnApp;
  std::string::string((string *)&local_20,"UI_RechargeReward");
  LawnApp::LoadGroup(this_00,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  this_01 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_01);
  Sexy::Widget::Resize
            ((Widget *)this,*(int *)(gLawnApp + 0x71c),*(int *)(gLawnApp + 0x720),
             *(int *)(gLawnApp + 0x724),*(int *)(gLawnApp + 0x728));
  iVar2 = FUN_049e37f4(0x2ee);
  iVar3 = FUN_049e37f4(0x212);
  iVar4 = FUN_049e37f4(0x19);
  Sexy::Insets::Insets
            ((Insets *)&local_20,(*(int *)(this + 0x50) - iVar2) / 2,
             iVar4 + (*(int *)(this + 0x54) - iVar3) / 2,iVar2,iVar3);
  *(undefined8 *)(this + 0x100) = local_20;
  *(undefined8 *)(this + 0x108) = uStack_18;
  this[0x129] = (RechargeRewardUI)0x0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRechargeRewardCurrencyChanged);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<RechargeRewardUI,void(RechargeRewardUI::*)(int)>>
            ((MessageRouter *)puVar1,Message::RechargeRewardCurrencyChanged,&local_50);
  createFromNetworkResponse(this);
  MessageRouter::Post<std::string_const&,char_const*>
            ((MessageRouter *)gMessageRouter,Message::JoinActivity,"First_Recharge_Event");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardUI::Draw(Sexy::Graphics*) */

void __thiscall RechargeRewardUI::Draw(RechargeRewardUI *this,Graphics *param_1)

{
  RtMixedPtrBase *this_00;
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Image *pIVar6;
  LotteryResultProgressBar *pLVar7;
  code *pcVar8;
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x129] != (RechargeRewardUI)0x0) {
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x100));
    this_00 = (RtMixedPtrBase *)(this + 0x120);
    uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76fa0);
    Draw9SliceImage(param_1,aIStack_18,uVar5);
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b77398);
    iVar1 = *(int *)(this + 0x50);
    pLVar7 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b77398);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    iVar4 = FUN_049e37f4(0x2c);
    Sexy::Graphics::DrawImage(param_1,pIVar6,(iVar1 - iVar3) / 2,*(int *)(this + 0x104) - iVar4);
    pcVar8 = *(code **)(*(long *)this + 0x290);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline)
    ;
    Sexy::Color::Color((Color *)aIStack_18,1);
    iVar3 = FUN_049e37f4(0x1a);
    iVar1 = *(int *)(this + 0x104);
    TodStringTranslate(L"[RECHARGE_PACKAGE_REWARD_TITLE]");
    (*pcVar8)(this,param_1,uVar5,aIStack_18,iVar1 - iVar3,auStack_20);
    FUN_05476c50(auStack_20);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar2 != '\0') {
      pIVar6 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar1 = *(int *)(this + 0x50);
      pLVar7 = (LotteryResultProgressBar *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
      iVar4 = FUN_049e37f4(0x28);
      Sexy::Graphics::DrawImage(param_1,pIVar6,(iVar1 - iVar3) / 2,iVar4 + *(int *)(this + 0x104));
    }
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

