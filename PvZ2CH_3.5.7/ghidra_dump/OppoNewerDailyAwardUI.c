// Class: OppoNewerDailyAwardUI


/* OppoNewerDailyAwardUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void OppoNewerDailyAwardUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to OppoNewerDailyAwardUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
OppoNewerDailyAwardUI::ScrollTargetReached(OppoNewerDailyAwardUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* OppoNewerDailyAwardUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void OppoNewerDailyAwardUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to OppoNewerDailyAwardUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
OppoNewerDailyAwardUI::ScrollTargetInterrupted(OppoNewerDailyAwardUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoNewerDailyAwardUI::GetLayoutName() */

void __thiscall OppoNewerDailyAwardUI::GetLayoutName(OppoNewerDailyAwardUI *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"OppoNewerDailyAwardPanel");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoNewerDailyAwardUI::OnCreate() */

void __thiscall OppoNewerDailyAwardUI::OnCreate(OppoNewerDailyAwardUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LotteryResultProgressBar *this_00;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string((string *)&local_18,"IMAGE_UI_PLANTADVENTURE_BG_EGYPT");
  this_00 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)&local_18,false);
  std::string::~string((string *)&local_18);
  nop();
  if (this_00 != (LotteryResultProgressBar *)0x0) {
    Sexy::OutputDebugStrF
              ((wchar_t *)"OppoNewerDailyAwardUI::OppoNewerDailyAwardUI, bgImage is not null");
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
    iVar2 = FUN_03925930(10);
    iVar3 = FUN_03925930(100);
    iVar4 = FUN_03925930(0x156);
    Sexy::Insets::Insets((Insets *)&local_18,iVar2,iVar3,iVar1,iVar4);
    *(undefined8 *)(this + 0x150) = local_18;
    *(undefined8 *)(this + 0x158) = uStack_10;
  }
  (**(code **)(*(long *)this + 0x358))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* OppoNewerDailyAwardUI::ButtonDepress(int) */

void __thiscall OppoNewerDailyAwardUI::ButtonDepress(OppoNewerDailyAwardUI *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  UISingletonDialog<OppoNewerDailyAwardUI>::CloseDialog();
  return;
}


/* non-virtual thunk to OppoNewerDailyAwardUI::ButtonDepress(int) */

void __thiscall OppoNewerDailyAwardUI::ButtonDepress(OppoNewerDailyAwardUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoNewerDailyAwardUI::DrawOverlay(Sexy::Graphics*) */

void __thiscall OppoNewerDailyAwardUI::DrawOverlay(OppoNewerDailyAwardUI *this,Graphics *param_1)

{
  char cVar1;
  ResourceInfo *pRVar2;
  undefined8 uVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsShowSevenDaysRewardView(gLawnApp);
  if (cVar1 == '\0') {
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x1c8));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar2,*(int *)(this + 0x170),*(int *)(this + 0x174))
    ;
    uVar3 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x1b0));
    WriteWordInRect(param_1,this + 0x1c0,this + 0x160,uVar3,aIStack_18,5,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OppoNewerDailyAwardUI::OnNotifyOppoLoginReward() */

void __thiscall OppoNewerDailyAwardUI::OnNotifyOppoLoginReward(OppoNewerDailyAwardUI *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  FilesystemSaveGameContext *this_02;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = PlayerInfo::GetDailyRewardDays(this_01);
  this_02 = (FilesystemSaveGameContext *)LawnApp::GetOfferBundleConfig(gLawnApp);
  puVar2 = (undefined8 *)Sexy::FilesystemSaveGameContext::GetBuffer(this_02);
  uVar7 = 0;
  while( true ) {
    puVar4 = (undefined8 *)FUN_03925294(*puVar2,(long)iVar1);
    uVar8 = *puVar4;
    uVar5 = FUN_039252a0(uVar8,puVar4[1]);
    if (uVar5 <= uVar7) break;
    piVar3 = (int *)FUN_039252ac(uVar8,uVar7);
    PlayerInfo::AddCommonGachaReward((int)this_01,*piVar3,SUB41(piVar3[1],0),false);
    uVar7 = uVar7 + 1;
  }
  lVar6 = LawnApp::GetRealBeijingTime(gLawnApp);
  PlayerInfo::SetOppoNewerDailyLoginRewardGetTime(this_01,lVar6);
  (**(code **)(*(long *)this + 0x358))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoNewerDailyAwardUI::UpdateTimeLabel() */

void __thiscall OppoNewerDailyAwardUI::UpdateTimeLabel(OppoNewerDailyAwardUI *this)

{
  ProfileMgr *this_00;
  long lVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar1 = ProfileMgr::GetCurrentProfile(this_00);
  lVar1 = FUN_03924b80(*(undefined8 *)(lVar1 + 0x13d8));
  lVar2 = LawnApp::GetRealBeijingTime(gLawnApp);
  lVar2 = (lVar1 + 0x127500) - lVar2;
  if (lVar2 < 1) {
    Sexy::Color::Color((Color *)&local_18,2);
    *(undefined8 *)(this + 0x1b0) = local_18;
    *(undefined8 *)(this + 0x1b8) = uStack_10;
    Sexy::StrFormat(L"0",(Color *)&local_18);
    FUN_054766c8(this + 0x1c0,(Color *)&local_18);
    FUN_05476c50((Color *)&local_18);
  }
  else {
    Sexy::Color::Color((Color *)&local_18,1);
    *(undefined8 *)(this + 0x1b0) = local_18;
    *(undefined8 *)(this + 0x1b8) = uStack_10;
    Sexy::StrFormat(L"%d",(Color *)&local_18,lVar2 / 0x15180);
    FUN_054766c8(this + 0x1c0,(Color *)&local_18);
    FUN_05476c50((Color *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoNewerDailyAwardUI::OppoNewerDailyAwardUI() */

void __thiscall OppoNewerDailyAwardUI::OppoNewerDailyAwardUI(OppoNewerDailyAwardUI *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<OppoNewerDailyAwardUI>::UISingletonDialog
            ((UISingletonDialog<OppoNewerDailyAwardUI> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_066ca210;
  *(undefined **)(this + 0xd8) = &DAT_066ca580;
  *(undefined ***)(this + 0x138) = &PTR__OppoNewerDailyAwardUI_066ca5c8;
  *(undefined8 *)(this + 0x148) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x150));
  Sexy::Insets::Insets((Insets *)(this + 0x160));
  Sexy::Insets::Insets((Insets *)(this + 0x170));
  DailyAwardBonus::DailyAwardBonus((DailyAwardBonus *)(this + 0x180));
  Sexy::Color::Color((Color *)(this + 0x1b0),1);
  FUN_05476574(this + 0x1c0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1c8));
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyOppoLoginReward);
  Sexy::Delegate0::Delegate0<OppoNewerDailyAwardUI,void(OppoNewerDailyAwardUI::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::GetOppoDailyReward,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OppoNewerDailyAwardUI::~OppoNewerDailyAwardUI() */

void __thiscall OppoNewerDailyAwardUI::~OppoNewerDailyAwardUI(OppoNewerDailyAwardUI *this)

{
  *(undefined ***)(this + 0x138) = &PTR__OppoNewerDailyAwardUI_066ca5c8;
  *(undefined ***)this = &PTR_GetClass_066ca210;
  *(undefined **)(this + 0xd8) = &DAT_066ca580;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c8));
  FUN_05476c50(this + 0x1c0);
  DailySignBonus::~DailySignBonus((DailySignBonus *)(this + 0x180));
  UISingletonDialog<OppoNewerDailyAwardUI>::~UISingletonDialog
            ((UISingletonDialog<OppoNewerDailyAwardUI> *)this);
  return;
}


/* non-virtual thunk to OppoNewerDailyAwardUI::~OppoNewerDailyAwardUI() */

void __thiscall OppoNewerDailyAwardUI::~OppoNewerDailyAwardUI(OppoNewerDailyAwardUI *this)

{
  ~OppoNewerDailyAwardUI(this + -0x138);
  return;
}


/* OppoNewerDailyAwardUI::~OppoNewerDailyAwardUI() */

void __thiscall OppoNewerDailyAwardUI::~OppoNewerDailyAwardUI(OppoNewerDailyAwardUI *this)

{
  ~OppoNewerDailyAwardUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to OppoNewerDailyAwardUI::~OppoNewerDailyAwardUI() */

void __thiscall OppoNewerDailyAwardUI::~OppoNewerDailyAwardUI(OppoNewerDailyAwardUI *this)

{
  ~OppoNewerDailyAwardUI(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoNewerDailyAwardUI::updateUIData() */

void __thiscall OppoNewerDailyAwardUI::updateUIData(OppoNewerDailyAwardUI *this)

{
  TRect *pTVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  long *plVar8;
  PVZ2UIScrollingWidget *this_02;
  OppoAwardActivityScrollPanel *this_03;
  string asStack_20 [8];
  undefined8 local_18;
  int local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x350))();
  std::string::string((string *)&local_18,"Background_0");
  lVar7 = UI::Dialog::GetWidget((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  *(int *)(lVar7 + 0x4c) = *(int *)(lVar7 + 0x4c) + -10;
  Sexy::StrFormat("IMAGE_UI_NATIONDAYAWARD_IMG_TIME_LEBEL",asStack_20);
  GetImageByNameWithUIFallback(asStack_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1c8),(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_20);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb2d8);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb2d8);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar6 = (*(int *)(gLawnApp + 0x724) - iVar2) / 2;
  iVar4 = FUN_03925930(0x1fe);
  Sexy::Insets::Insets((Insets *)&local_18,iVar6,iVar4,iVar2,iVar3);
  *(undefined8 *)(this + 0x170) = local_18;
  *(ulong *)(this + 0x178) = CONCAT44(uStack_c,local_10);
  iVar4 = FUN_03925930(0x2f);
  iVar5 = FUN_03925930(0x1fe);
  Sexy::Insets::Insets((Insets *)&local_18,iVar6 + iVar2 / 2 + iVar4,iVar5,0x14,iVar3);
  *(undefined8 *)(this + 0x160) = local_18;
  *(ulong *)(this + 0x168) = CONCAT44(uStack_c,local_10);
  UpdateTimeLabel(this);
  std::string::string((string *)&local_18,"UIImage_2");
  plVar8 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  if (*(long *)(this + 0x140) != 0) {
    (**(code **)(*plVar8 + 0x68))(plVar8);
    *(undefined8 *)(this + 0x140) = 0;
  }
  pTVar1 = (TRect *)(this + 0x150);
  this_02 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0x138));
  *(PVZ2UIScrollingWidget **)(this + 0x140) = this_02;
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)pTVar1);
  iVar6 = FUN_03925930(0x32);
  local_10 = local_10 + iVar6;
  (**(code **)(**(long **)(this + 0x140) + 0x1a0))(*(long **)(this + 0x140),(string *)&local_18);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x140),2);
  (**(code **)(*plVar8 + 0x60))(plVar8,*(undefined8 *)(this + 0x140));
  if (*(long *)(this + 0x148) == 0) {
    this_03 = ::operator_new(0x128);
    OppoAwardActivityScrollPanel::OppoAwardActivityScrollPanel
              (this_03,pTVar1,(DailyAwardBonus *)(this + 0x180));
    *(OppoAwardActivityScrollPanel **)(this + 0x148) = this_03;
    (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140),this_03);
  }
  else {
    (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140));
    DailyAwardActivityScrollPanel::loadData
              (*(DailyAwardActivityScrollPanel **)(this + 0x148),pTVar1,
               (DailyAwardBonus *)(this + 0x180));
    OppoAwardActivityScrollPanel::InitView(*(OppoAwardActivityScrollPanel **)(this + 0x148));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoNewerDailyAwardUI::loadData() */

void __thiscall OppoNewerDailyAwardUI::loadData(OppoNewerDailyAwardUI *this)

{
  OppoNewerDailyAwardUI OVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  FilesystemSaveGameContext *this_02;
  undefined8 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 local_28;
  undefined4 local_24;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar10 = 0;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar2 = PlayerInfo::GetDailyRewardDays(this_01);
  *(undefined4 *)(this + 0x180) = uVar2;
  OVar1 = (OppoNewerDailyAwardUI)PlayerInfo::HasGotTodayOppoNewerDailyReward(this_01);
  this[0x184] = OVar1;
  this_02 = (FilesystemSaveGameContext *)LawnApp::GetOfferBundleConfig(gLawnApp);
  puVar3 = (undefined8 *)Sexy::FilesystemSaveGameContext::GetBuffer(this_02);
  lVar4 = FUN_039252b4(*puVar3,puVar3[1]);
  if (lVar4 != 0) {
    do {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      uVar8 = 0;
      while( true ) {
        puVar6 = (undefined8 *)FUN_03925294(*puVar3,uVar10);
        uVar9 = *puVar6;
        uVar7 = FUN_039252a0(uVar9,puVar6[1]);
        if (uVar7 <= uVar8) break;
        puVar5 = (undefined4 *)FUN_039252ac(uVar9,uVar8);
        local_28 = *puVar5;
        local_24 = puVar5[1];
        std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::push_back
                  ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)avStack_20,
                   (NDLoginRewardBonus *)&local_28);
        uVar8 = uVar8 + 1;
      }
      uVar10 = uVar10 + 1;
      std::
      vector<std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>,std::allocator<std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>>>
      ::push_back((vector<std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>,std::allocator<std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>>>
                   *)(this + 0x198),(vector *)avStack_20);
      std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::~vector
                ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)avStack_20);
      uVar8 = FUN_039252b4(*puVar3,puVar3[1]);
    } while (uVar10 < uVar8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

