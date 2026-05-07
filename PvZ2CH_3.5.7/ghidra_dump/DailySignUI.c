// Class: DailySignUI


/* DailySignUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void DailySignUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to DailySignUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall DailySignUI::ScrollTargetReached(DailySignUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* DailySignUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void DailySignUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to DailySignUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall DailySignUI::ScrollTargetInterrupted(DailySignUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* DailySignUI::GetLayoutName() */

undefined8 DailySignUI::GetLayoutName(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* DailySignUI::DrawOverlay(Sexy::Graphics*) */

void DailySignUI::DrawOverlay(Graphics *param_1)

{
  if (param_1[0x240] != (Graphics)0x0) {
    return;
  }
  LawnApp::IsShowSevenDaysRewardView(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignUI::OnUpdateSumDays(int) */

void DailySignUI::OnUpdateSumDays(int param_1)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",auStack_10);
  FUN_054766c8((ulong)(uint)param_1 + 0x220,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignUI::Update() */

void __thiscall DailySignUI::Update(DailySignUI *this)

{
  long *plVar1;
  UIWidgetText *pUVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Background_0");
  plVar1 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if ((plVar1 != (long *)0x0) && (*(char *)((long)plVar1 + 0x6c) == '\0')) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
  }
  std::string::string(asStack_10,"UIText_Sum");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidgetText *)0x0) {
    PuzzleTip::SetTip(pUVar2,this + 0x220);
  }
  std::string::string(asStack_10,"UIText_Timer");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidgetText *)0x0) {
    PuzzleTip::SetTip(pUVar2,this + 0x1c8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall DailySignUI::DrawAll(DailySignUI *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  LotteryResultProgressBar *this_00;
  undefined8 uVar5;
  undefined1 auStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TenYearRecordInfoPage::DrawAll((TenYearRecordInfoPage *)this,param_1,param_2);
  if (this[0x240] == (DailySignUI)0x0) {
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd858);
    iVar1 = *(int *)(this + 0x50);
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd858);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar3 = FUN_03972124(0xfffffffb);
    Sexy::Graphics::DrawImage(param_2,pIVar4,(iVar1 - iVar2) / 2,*(int *)(this + 0x4c) - iVar3);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_40_ThickOutline)
    ;
    iVar3 = FUN_03972124(0x16);
    iVar1 = *(int *)(this + 0x4c);
    iVar2 = *(int *)(this + 0x50);
    TodStringTranslate(L"[DAILY_SIGN_EVENT_TITLE]");
    Sexy::Color::Color(aCStack_18,1);
    Sexy::PrimeTypeface::DrawString_Line
              ((PrimeTypeface *)0x0,(float)(iVar3 + iVar1),(float)iVar2,uVar5,param_2,auStack_20,1,
               aCStack_18,0);
    FUN_05476c50(auStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignUI::DailySignUI() */

void __thiscall DailySignUI::DailySignUI(DailySignUI *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  LotteryResultProgressBar *this_00;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<DailySignUI>::UISingletonDialog((UISingletonDialog<DailySignUI> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_066d8310;
  *(undefined **)(this + 0xd8) = &DAT_066d8680;
  *(undefined ***)(this + 0x138) = &PTR__DailySignUI_066d86c8;
  *(undefined8 *)(this + 0x148) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x150));
  Sexy::Insets::Insets((Insets *)(this + 0x160));
  Sexy::Insets::Insets((Insets *)(this + 0x170));
  DailySignBonus::DailySignBonus((DailySignBonus *)(this + 0x180));
  Sexy::Color::Color((Color *)(this + 0x1b8),1);
  FUN_05476574(this + 0x1c8);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1d0));
  Sexy::Insets::Insets((Insets *)(this + 0x1e0));
  Sexy::Insets::Insets((Insets *)(this + 0x1f8));
  Sexy::Insets::Insets((Insets *)(this + 0x210));
  FUN_05476574(this + 0x220);
  Sexy::Insets::Insets((Insets *)(this + 0x228));
  std::string::string((string *)(this + 0x238),"DailySignUI");
  nop();
  this[0x240] = (DailySignUI)0x0;
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_GLLottery");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_PlantAdventure");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_NationDay_Award");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_LevelOfTheDay");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_NewAvatar");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"IMAGE_UI_PLANTADVENTURE_BG_EGYPT");
  this_00 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)&local_20,false);
  std::string::~string((string *)&local_20);
  nop();
  if (this_00 != (LotteryResultProgressBar *)0x0) {
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
    iVar4 = FUN_03972124(0xf);
    iVar5 = FUN_03972124(0x14);
    iVar6 = FUN_03972124(0x156);
    Sexy::Insets::Insets((Insets *)&local_20,iVar4,iVar5,iVar3,iVar6);
    *(undefined8 *)(this + 0x150) = local_20;
    *(undefined8 *)(this + 0x158) = uStack_18;
  }
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnUpdateSumDays);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<DailySignUI,void(DailySignUI::*)(int)>>
            ((MessageRouter *)puVar1,Message::UpdateSumDays,&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignUI::~DailySignUI() */

void __thiscall DailySignUI::~DailySignUI(DailySignUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066d8310;
  *(undefined **)(this + 0xd8) = &DAT_066d8680;
  *(undefined ***)(this + 0x138) = &PTR__DailySignUI_066d86c8;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_GLLottery");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlantAdventure");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NationDay_Award");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelOfTheDay");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0x238));
  FUN_05476c50(this + 0x220);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d0));
  FUN_05476c50(this + 0x1c8);
  DailySignBonus::~DailySignBonus((DailySignBonus *)(this + 0x180));
  UISingletonDialog<DailySignUI>::~UISingletonDialog((UISingletonDialog<DailySignUI> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to DailySignUI::~DailySignUI() */

void __thiscall DailySignUI::~DailySignUI(DailySignUI *this)

{
  ~DailySignUI(this + -0x138);
  return;
}


/* DailySignUI::~DailySignUI() */

void __thiscall DailySignUI::~DailySignUI(DailySignUI *this)

{
  ~DailySignUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DailySignUI::~DailySignUI() */

void __thiscall DailySignUI::~DailySignUI(DailySignUI *this)

{
  ~DailySignUI(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignUI::RequestNetwork(bool) */

void DailySignUI::RequestNetwork(bool param_1)

{
  undefined *puVar1;
  LawnApp *this;
  char cVar2;
  undefined8 uVar3;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  PVZ2UIDialog *pPVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = LawnApp::IsNetworkModuleOK();
  this = gLawnApp;
  puVar1 = gMessageRouter;
  if (cVar2 == '\0') {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178((wstring *)avStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
    pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,(wstring *)avStack_50);
    FUN_05476c50((wstring *)avStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,(wstring *)avStack_50);
    PVZ2UIDialog::AddButton(pPVar4,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
  }
  else {
    uVar3 = std::
            __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                      ((TaskResource **)onNotifyRefreshActivityList);
    MessageRouter::
    Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBFunctionTranslatorX<void(*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
              ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,uVar3);
    if (param_1) {
      s_requested = 1;
    }
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
              (avStack_50,&DAT_05751e40,1,awStack_58);
    INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_50,0,true);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DailySignUI::ButtonDepress(int) */

void __thiscall DailySignUI::ButtonDepress(DailySignUI *this,int param_1)

{
  if (param_1 != 0x66) {
    return;
  }
  UISingletonDialog<DailySignUI>::CloseDialog();
  RequestNetwork(false);
  return;
}


/* non-virtual thunk to DailySignUI::ButtonDepress(int) */

void __thiscall DailySignUI::ButtonDepress(DailySignUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignUI::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>, std::allocator<int>
   > const&) */

void DailySignUI::onNotifyRefreshActivityList(bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_1c = 0x29d6;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if ((bVar1) && (s_requested != '\0')) {
      s_requested = '\0';
      UISingletonDialog<DailySignUI>::ShowDialog();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignUI::UpdateTimeLabel() */

void __thiscall DailySignUI::UpdateTimeLabel(DailySignUI *this)

{
  int iVar1;
  undefined8 local_98;
  undefined8 uStack_90;
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar1);
  iVar1 = ActiveItem::GetLeftTimes(aAStack_88);
  if ((long)iVar1 < 1) {
    Sexy::Color::Color((Color *)&local_98,2);
    *(undefined8 *)(this + 0x1b8) = local_98;
    *(undefined8 *)(this + 0x1c0) = uStack_90;
    Sexy::StrFormat(L"0",(Color *)&local_98);
    FUN_054766c8(this + 0x1c8,(Color *)&local_98);
    FUN_05476c50((Color *)&local_98);
  }
  else {
    Sexy::Color::Color((Color *)&local_98,1);
    *(undefined8 *)(this + 0x1b8) = local_98;
    *(undefined8 *)(this + 0x1c0) = uStack_90;
    Sexy::StrFormat(L"%d",(Color *)&local_98,(long)iVar1 / 0x15180);
    FUN_054766c8(this + 0x1c8,(Color *)&local_98);
    FUN_05476c50((Color *)&local_98);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignUI::loadData() */

void __thiscall DailySignUI::loadData(DailySignUI *this)

{
  char cVar1;
  int iVar2;
  DailySignConfig aDStack_d8 [16];
  DailySignBonus aDStack_c8 [64];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03971e48(local_80);
  if (cVar1 != '\0') {
    DailySignConfig::DailySignConfig(aDStack_d8);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aDStack_d8);
    if ((cVar1 == '\0') || (local_70 == '\0')) {
      DailySignConfig::~DailySignConfig(aDStack_d8);
      ActiveItem::~ActiveItem(aAStack_88);
      goto LAB_0397772c;
    }
    DailySignBonus::operator=((DailySignBonus *)(this + 0x180),aDStack_c8);
    DailySignConfig::~DailySignConfig(aDStack_d8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
LAB_0397772c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignUI::updateUIData() */

void __thiscall DailySignUI::updateUIData(DailySignUI *this)

{
  TRect *pTVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  Widget *pWVar10;
  UIWidgetImage *this_00;
  long lVar11;
  undefined8 *puVar12;
  int *piVar13;
  NameMapperBase *this_01;
  LotteryResultProgressBar *this_02;
  long *plVar14;
  PVZ2UIScrollingWidget *this_03;
  DailySignActivityScrollPanel *this_04;
  string *extraout_x1;
  code *pcVar15;
  undefined8 uVar16;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  undefined8 local_18;
  int local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x350))();
  std::string::string((string *)&local_18,"UIImage_Back");
  pWVar10 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar10,false);
  iVar3 = FUN_03972124(0x19);
  *(int *)(pWVar10 + 0x4c) = *(int *)(pWVar10 + 0x4c) - iVar3;
  std::string::string((string *)&local_18,"UIImage_0");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  if (this_00 != (UIWidgetImage *)0x0) {
    uVar16 = *(undefined8 *)(this + 0x198);
    lVar11 = FUN_03971e64(uVar16,*(undefined8 *)(this + 0x1a0));
    puVar12 = (undefined8 *)FUN_03971e78(uVar16,lVar11 + -1);
    piVar13 = (int *)FUN_03971e98(*puVar12,0);
    iVar3 = *piVar13;
    this_01 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsId(this_01,iVar3);
    if (cVar2 != '\0') {
      iVar3 = PlantChipNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar3);
      std::string::string(asStack_20,"IMAGE_UI_NATIONDAYAWARD_SIGN_BANNER_");
      Sexy::StringToUpper((Sexy *)asStack_30,extraout_x1);
      std::operator+(asStack_20,(string *)&local_18);
      std::string::~string((string *)&local_18);
      std::string::~string(asStack_20);
      nop();
      UIWidgetImage::SetImage(this_00,asStack_28);
      std::string::~string(asStack_28);
      std::string::~string(asStack_30);
    }
  }
  std::string::string((string *)&local_18,"Background_0");
  lVar11 = UI::Dialog::GetWidget((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  if (lVar11 == 0) {
    iVar3 = 0;
    iVar9 = 0;
    iVar6 = iVar3;
  }
  else {
    iVar9 = *(int *)(lVar11 + 0x50);
    iVar3 = *(int *)(lVar11 + 0x48) + *(int *)(pWVar10 + 0x48);
    iVar6 = *(int *)(lVar11 + 0x4c) + *(int *)(lVar11 + 0x54) + *(int *)(pWVar10 + 0x4c);
  }
  std::string::string(asStack_30,"IMAGE_UI_DIALOG_ASSET_GRAY_BG_OUTER");
  nop();
  uVar16 = StringHelper::ToImage(asStack_30,false);
  *(undefined8 *)(this + 0x1d8) = uVar16;
  iVar4 = FUN_03972124(0x41);
  iVar5 = FUN_03972124(10);
  Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar5 + iVar6,iVar9,iVar4);
  *(undefined8 *)(this + 0x1e0) = local_18;
  *(ulong *)(this + 0x1e8) = CONCAT44(uStack_c,local_10);
  std::string::string(asStack_28,"IMAGE_UI_NATIONDAYAWARD_IMG_TIME_LEBEL");
  nop();
  this_02 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_28,false);
  *(LotteryResultProgressBar **)(this + 0x1f0) = this_02;
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(this_02);
  iVar4 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x1f0));
  iVar5 = FUN_03972124(0xf);
  iVar3 = *(int *)(this + 0x1e4);
  iVar9 = *(int *)(this + 0x1e0);
  iVar7 = FUN_03972124(0x41);
  iVar8 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x1f0));
  Sexy::Insets::Insets((Insets *)&local_18,iVar5 + iVar9,iVar3 + (iVar7 - iVar8) / 2,iVar6,iVar4);
  *(undefined8 *)(this + 0x1f8) = local_18;
  *(ulong *)(this + 0x200) = CONCAT44(uStack_c,local_10);
  std::string::string(asStack_20,"IMAGE_UI_NATIONDAYAWARD_SIGN_SUM_BG");
  nop();
  uVar16 = StringHelper::ToImage(asStack_20,false);
  *(undefined8 *)(this + 0x208) = uVar16;
  Sexy::Insets::Insets
            ((Insets *)&local_18,
             (*(int *)(this + 0x1e0) + *(int *)(this + 0x1e8)) - *(int *)(this + 0x200),
             *(int *)(this + 0x1e4) + (*(int *)(this + 0x1ec) - *(int *)(this + 0x204)) / 2,
             *(int *)(this + 0x200),*(int *)(this + 0x204));
  *(undefined8 *)(this + 0x210) = local_18;
  *(ulong *)(this + 0x218) = CONCAT44(uStack_c,local_10);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x1f0));
  iVar4 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x1f0));
  iVar3 = FUN_03972124(0x30);
  iVar3 = (iVar6 - iVar3) + *(int *)(this + 0x1f8);
  iVar5 = FUN_03972124(0);
  iVar9 = *(int *)(this + 0x1fc);
  iVar7 = FUN_03972124(0x50);
  Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar7,iVar6,iVar4);
  *(undefined8 *)(this + 0x170) = local_18;
  *(ulong *)(this + 0x178) = CONCAT44(uStack_c,local_10);
  Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar5 + iVar9,0x14,iVar4);
  pcVar15 = *(code **)(*(long *)this + 0x358);
  *(undefined8 *)(this + 0x160) = local_18;
  *(ulong *)(this + 0x168) = CONCAT44(uStack_c,local_10);
  (*pcVar15)(this);
  Sexy::StrFormat(L"%d",(string *)&local_18,(ulong)*(uint *)(this + 0x180));
  FUN_054766c8(this + 0x220,(string *)&local_18);
  FUN_05476c50((string *)&local_18);
  iVar9 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x208));
  iVar6 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x208));
  iVar4 = FUN_03972124(0x42);
  iVar3 = *(int *)(this + 0x210);
  iVar5 = FUN_03972124(0);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(iVar9 - iVar4) + iVar3,iVar5 + *(int *)(this + 0x214),0x14,iVar6);
  *(undefined8 *)(this + 0x228) = local_18;
  *(ulong *)(this + 0x230) = CONCAT44(uStack_c,local_10);
  std::string::string((string *)&local_18,"UIImage_2");
  plVar14 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  if (*(long *)(this + 0x140) != 0) {
    (**(code **)(*plVar14 + 0x68))(plVar14);
    *(undefined8 *)(this + 0x140) = 0;
  }
  pTVar1 = (TRect *)(this + 0x150);
  iVar3 = FUN_03972124(0);
  iVar9 = FUN_03971da0((int)plVar14[10]);
  iVar6 = FUN_03971da4(*(undefined4 *)((long)plVar14 + 0x54));
  Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar3,iVar9,iVar6);
  *(undefined8 *)pTVar1 = local_18;
  *(ulong *)(this + 0x158) = CONCAT44(uStack_c,local_10);
  this_03 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_03,(ScrollWidgetListener *)(this + 0x138));
  *(PVZ2UIScrollingWidget **)(this + 0x140) = this_03;
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)pTVar1);
  iVar3 = FUN_03972124(0x32);
  local_10 = local_10 + iVar3;
  (**(code **)(**(long **)(this + 0x140) + 0x1a0))(*(long **)(this + 0x140),(string *)&local_18);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x140),2);
  (**(code **)(*plVar14 + 0x60))(plVar14,*(undefined8 *)(this + 0x140));
  if (*(long *)(this + 0x148) == 0) {
    this_04 = ::operator_new(0x130);
    DailySignActivityScrollPanel::DailySignActivityScrollPanel
              (this_04,pTVar1,(DailySignBonus *)(this + 0x180));
    *(DailySignActivityScrollPanel **)(this + 0x148) = this_04;
    (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140),this_04);
  }
  else {
    (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140));
    DailySignActivityScrollPanel::loadData
              (*(DailySignActivityScrollPanel **)(this + 0x148),pTVar1,
               (DailySignBonus *)(this + 0x180));
    (**(code **)(**(long **)(this + 0x148) + 0x310))(*(long **)(this + 0x148));
  }
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DailySignUI::OnCreate() */

char __thiscall DailySignUI::OnCreate(DailySignUI *this)

{
  char cVar1;
  
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    updateUIData(this);
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignUI::updateUIPage() */

void __thiscall DailySignUI::updateUIPage(DailySignUI *this)

{
  TRect *pTVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  UIWidgetImage *this_00;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  NameMapperBase *this_01;
  LotteryResultProgressBar *this_02;
  long *plVar13;
  PVZ2UIScrollingWidget *this_03;
  DailySignActivityScrollPanel *this_04;
  string *extraout_x1;
  code *pcVar14;
  undefined8 uVar15;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  undefined8 local_18;
  int local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x350))();
  std::string::string((string *)&local_18,"UIImage_0");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  if (this_00 != (UIWidgetImage *)0x0) {
    uVar15 = *(undefined8 *)(this + 0x198);
    lVar10 = FUN_03971e64(uVar15,*(undefined8 *)(this + 0x1a0));
    puVar11 = (undefined8 *)FUN_03971e78(uVar15,lVar10 + -1);
    piVar12 = (int *)FUN_03971e98(*puVar11,0);
    iVar8 = *piVar12;
    this_01 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsId(this_01,iVar8);
    if (cVar2 != '\0') {
      iVar8 = PlantChipNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar8);
      std::string::string(asStack_20,"IMAGE_UI_NATIONDAYAWARD_SIGN_BANNER_");
      Sexy::StringToUpper((Sexy *)asStack_30,extraout_x1);
      std::operator+(asStack_20,(string *)&local_18);
      std::string::~string((string *)&local_18);
      std::string::~string(asStack_20);
      nop();
      UIWidgetImage::SetImage(this_00,asStack_28);
      std::string::~string(asStack_28);
      std::string::~string(asStack_30);
    }
  }
  std::string::string((string *)&local_18,"Background_0");
  lVar10 = UI::Dialog::GetWidget((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  if (lVar10 == 0) {
    iVar8 = 0;
    iVar9 = 0;
    iVar5 = iVar8;
  }
  else {
    iVar8 = *(int *)(lVar10 + 0x48);
    iVar9 = *(int *)(lVar10 + 0x50);
    iVar5 = *(int *)(lVar10 + 0x4c) + *(int *)(lVar10 + 0x54);
  }
  std::string::string(asStack_30,"IMAGE_UI_DIALOG_ASSET_GRAY_BG_OUTER");
  nop();
  uVar15 = StringHelper::ToImage(asStack_30,false);
  *(undefined8 *)(this + 0x1d8) = uVar15;
  iVar3 = FUN_03972124(0x41);
  iVar4 = FUN_03972124(10);
  Sexy::Insets::Insets((Insets *)&local_18,iVar8,iVar4 + iVar5,iVar9,iVar3);
  *(undefined8 *)(this + 0x1e0) = local_18;
  *(ulong *)(this + 0x1e8) = CONCAT44(uStack_c,local_10);
  std::string::string(asStack_28,"IMAGE_UI_NATIONDAYAWARD_IMG_TIME_LEBEL");
  nop();
  this_02 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_28,false);
  *(LotteryResultProgressBar **)(this + 0x1f0) = this_02;
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_02);
  iVar3 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x1f0));
  iVar4 = FUN_03972124(0xf);
  iVar8 = *(int *)(this + 0x1e4);
  iVar9 = *(int *)(this + 0x1e0);
  iVar6 = FUN_03972124(0x41);
  iVar7 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x1f0));
  Sexy::Insets::Insets((Insets *)&local_18,iVar4 + iVar9,iVar8 + (iVar6 - iVar7) / 2,iVar5,iVar3);
  *(undefined8 *)(this + 0x1f8) = local_18;
  *(ulong *)(this + 0x200) = CONCAT44(uStack_c,local_10);
  std::string::string(asStack_20,"IMAGE_UI_NATIONDAYAWARD_SIGN_SUM_BG");
  nop();
  uVar15 = StringHelper::ToImage(asStack_20,false);
  *(undefined8 *)(this + 0x208) = uVar15;
  Sexy::Insets::Insets
            ((Insets *)&local_18,
             (*(int *)(this + 0x1e0) + *(int *)(this + 0x1e8)) - *(int *)(this + 0x200),
             *(int *)(this + 0x1e4) + (*(int *)(this + 0x1ec) - *(int *)(this + 0x204)) / 2,
             *(int *)(this + 0x200),*(int *)(this + 0x204));
  *(undefined8 *)(this + 0x210) = local_18;
  *(ulong *)(this + 0x218) = CONCAT44(uStack_c,local_10);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x1f0));
  iVar3 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x1f0));
  iVar8 = FUN_03972124(0x30);
  iVar8 = (iVar5 - iVar8) + *(int *)(this + 0x1f8);
  iVar4 = FUN_03972124(0);
  iVar9 = *(int *)(this + 0x1fc);
  iVar6 = FUN_03972124(0x50);
  Sexy::Insets::Insets((Insets *)&local_18,iVar8,iVar6,iVar5,iVar3);
  *(undefined8 *)(this + 0x170) = local_18;
  *(ulong *)(this + 0x178) = CONCAT44(uStack_c,local_10);
  Sexy::Insets::Insets((Insets *)&local_18,iVar8,iVar4 + iVar9,0x14,iVar3);
  pcVar14 = *(code **)(*(long *)this + 0x358);
  *(undefined8 *)(this + 0x160) = local_18;
  *(ulong *)(this + 0x168) = CONCAT44(uStack_c,local_10);
  (*pcVar14)(this);
  Sexy::StrFormat(L"%d",(string *)&local_18,(ulong)*(uint *)(this + 0x180));
  FUN_054766c8(this + 0x220,(string *)&local_18);
  FUN_05476c50((string *)&local_18);
  iVar9 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x208));
  iVar5 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x208));
  iVar3 = FUN_03972124(0x42);
  iVar8 = *(int *)(this + 0x210);
  iVar4 = FUN_03972124(0);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(iVar9 - iVar3) + iVar8,iVar4 + *(int *)(this + 0x214),0x14,iVar5);
  *(undefined8 *)(this + 0x228) = local_18;
  *(ulong *)(this + 0x230) = CONCAT44(uStack_c,local_10);
  std::string::string((string *)&local_18,"UIImage_2");
  plVar13 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  if (*(long *)(this + 0x140) != 0) {
    (**(code **)(*plVar13 + 0x68))(plVar13);
    *(undefined8 *)(this + 0x140) = 0;
  }
  pTVar1 = (TRect *)(this + 0x150);
  iVar8 = FUN_03972124(0);
  iVar9 = FUN_03971da0((int)plVar13[10]);
  iVar5 = FUN_03971da4(*(undefined4 *)((long)plVar13 + 0x54));
  Sexy::Insets::Insets((Insets *)&local_18,iVar8,iVar8,iVar9,iVar5);
  *(undefined8 *)pTVar1 = local_18;
  *(ulong *)(this + 0x158) = CONCAT44(uStack_c,local_10);
  this_03 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_03,(ScrollWidgetListener *)(this + 0x138));
  *(PVZ2UIScrollingWidget **)(this + 0x140) = this_03;
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)pTVar1);
  iVar8 = FUN_03972124(0x32);
  local_10 = local_10 + iVar8;
  (**(code **)(**(long **)(this + 0x140) + 0x1a0))(*(long **)(this + 0x140),(string *)&local_18);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x140),2);
  (**(code **)(*plVar13 + 0x60))(plVar13,*(undefined8 *)(this + 0x140));
  if (*(long *)(this + 0x148) == 0) {
    this_04 = ::operator_new(0x130);
    DailySignActivityScrollPanel::DailySignActivityScrollPanel
              (this_04,pTVar1,(DailySignBonus *)(this + 0x180));
    *(DailySignActivityScrollPanel **)(this + 0x148) = this_04;
    (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140),this_04);
  }
  else {
    (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140));
    DailySignActivityScrollPanel::loadData
              (*(DailySignActivityScrollPanel **)(this + 0x148),pTVar1,
               (DailySignBonus *)(this + 0x180));
    (**(code **)(**(long **)(this + 0x148) + 0x310))(*(long **)(this + 0x148));
  }
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DailySignUI::OnCreatePage() */

char __thiscall DailySignUI::OnCreatePage(DailySignUI *this)

{
  char cVar1;
  
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    updateUIPage(this);
  }
  this[0x240] = (DailySignUI)0x1;
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignUI::ShowPage(std::string const&) */

void DailySignUI::ShowPage(string *param_1)

{
  char cVar1;
  DailySignUI *this;
  DailySignUI *pDVar2;
  DailySignUI *pDVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c();
  if (cVar1 == '\0') {
    this = ::operator_new(0x248);
    pDVar3 = this + 0x238;
    DailySignUI(this);
    FUN_05475d88(asStack_10,pDVar3);
    thunk_FUN_05475e00(pDVar3,param_1);
    cVar1 = OnCreatePage(this);
    pDVar2 = this;
    if (cVar1 == '\0') {
      pDVar3 = (DailySignUI *)0x238;
      pDVar2 = (DailySignUI *)0x0;
      (**(code **)(*(long *)this + 0x18))(this);
    }
    thunk_FUN_05475e00(pDVar3,asStack_10);
    std::string::~string(asStack_10);
  }
  else {
    pDVar2 = (DailySignUI *)UISingletonDialog<DailySignUI>::ShowDialog();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pDVar2);
}

