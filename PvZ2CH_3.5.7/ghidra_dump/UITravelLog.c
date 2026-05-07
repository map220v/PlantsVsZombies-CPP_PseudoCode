// Class: UITravelLog


/* UITravelLog::ScrollTargetReached(Sexy::ScrollWidget*) */

void UITravelLog::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UITravelLog::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UITravelLog::ScrollTargetReached(UITravelLog *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x140));
  return;
}


/* UITravelLog::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UITravelLog::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UITravelLog::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UITravelLog::ScrollTargetInterrupted(UITravelLog *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x140));
  return;
}


/* UITravelLog::TabSelectionChanged(int) */

int UITravelLog::TabSelectionChanged(int param_1)

{
  return param_1;
}


/* non-virtual thunk to UITravelLog::TabSelectionChanged(int) */

void __thiscall UITravelLog::TabSelectionChanged(UITravelLog *this,int param_1)

{
  TabSelectionChanged((int)this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITravelLog::GetLayoutName() */

void __thiscall UITravelLog::GetLayoutName(UITravelLog *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UITravelLog");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UITravelLog::~UITravelLog() */

void __thiscall UITravelLog::~UITravelLog(UITravelLog *this)

{
  *(undefined ***)this = &PTR_GetClass_066f3880;
  *(undefined **)(this + 0x138) = &DAT_066f3c30;
  *(undefined **)(this + 0xd8) = &DAT_066f3be8;
  *(undefined ***)(this + 0x140) = &PTR__UITravelLog_066f3c48;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<UITravelLog>::~UISingletonDialog((UISingletonDialog<UITravelLog> *)this);
  return;
}


/* non-virtual thunk to UITravelLog::~UITravelLog() */

void __thiscall UITravelLog::~UITravelLog(UITravelLog *this)

{
  ~UITravelLog(this + -0x140);
  return;
}


/* UITravelLog::~UITravelLog() */

void __thiscall UITravelLog::~UITravelLog(UITravelLog *this)

{
  ~UITravelLog(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UITravelLog::~UITravelLog() */

void __thiscall UITravelLog::~UITravelLog(UITravelLog *this)

{
  ~UITravelLog(this + -0x140);
  return;
}


/* UITravelLog::SetNeedRefresh(bool) */

void __thiscall UITravelLog::SetNeedRefresh(UITravelLog *this,bool param_1)

{
  this[0x15c] = (UITravelLog)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITravelLog::StartReward() */

void __thiscall UITravelLog::StartReward(UITravelLog *this)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"BtnClose");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar1 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar1 + 0x188))(pPVar1,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITravelLog::EndReward() */

void __thiscall UITravelLog::EndReward(UITravelLog *this)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"BtnClose");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar1 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar1 + 0x188))(pPVar1,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITravelLog::UITravelLog() */

void __thiscall UITravelLog::UITravelLog(UITravelLog *this)

{
  undefined *this_00;
  undefined4 uVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UITravelLog>::UISingletonDialog((UISingletonDialog<UITravelLog> *)this);
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x138));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x140));
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined ***)this = &PTR_GetClass_066f3880;
  *(undefined **)(this + 0xd8) = &DAT_066f3be8;
  *(undefined **)(this + 0x138) = &DAT_066f3c30;
  *(undefined ***)(this + 0x140) = &PTR__UITravelLog_066f3c48;
  this[0x15c] = (UITravelLog)0x0;
  *(undefined4 *)(this + 0x148) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x158) = uVar1;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,InitView);
  Sexy::Delegate0::Delegate0<UITravelLog,void(UITravelLog::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::ReBuildTasks,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITravelLog::ButtonDepress(int) */

void __thiscall UITravelLog::ButtonDepress(UITravelLog *this,int param_1)

{
  bool bVar1;
  RtObject *this_00;
  WorldMap_DailyActivityButton *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x58) {
    std::string::string(asStack_10,"UIWorldMapDailyActivityButton");
    this_00 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_10);
    std::string::~string(asStack_10);
    nop();
    if ((this_00 != (RtObject *)0x0) &&
       (this_01 = Sexy::RtObject::Cast<WorldMap_DailyActivityButton>(this_00),
       this_01 != (WorldMap_DailyActivityButton *)0x0)) {
      bVar1 = (bool)WorldMap_DailyActivityButton::CheckActivityTips();
      WorldMap_WelfareButtonExtra::SetNotice((WorldMap_WelfareButtonExtra *)this_01,bVar1);
    }
    UISingletonDialog<UITravelLog>::CloseDialog();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UITravelLog::ButtonDepress(int) */

void __thiscall UITravelLog::ButtonDepress(UITravelLog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UITravelLog::ShowBonus() */

void __thiscall UITravelLog::ShowBonus(UITravelLog *this)

{
  undefined4 uVar1;
  TravelLogManager *this_00;
  TravelLogTask *pTVar2;
  undefined8 uVar3;
  TravelLogBonusUI *this_01;
  long lVar4;
  
  this_00 = (TravelLogManager *)Sexy::LazySingleton<TravelLogManager>::GetInstancePtr();
  pTVar2 = (TravelLogTask *)TravelLogManager::GetACompletedTask(this_00);
  if (*(long *)(this + 0x150) == 0) {
    this_01 = ::operator_new(0x200);
    TravelLogBonusUI::TravelLogBonusUI(this_01);
    *(TravelLogBonusUI **)(this + 0x150) = this_01;
    TravelLogBonusUI::SetTask(this_01,pTVar2);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x150));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x150));
  }
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal
            (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x150));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x150));
  lVar4 = *(long *)(this + 0x150);
  if (lVar4 != 0) {
    uVar3 = operator|(0x10,0x20);
    uVar3 = operator|(uVar3,0x1000);
    uVar1 = operator|(uVar3,0x2000);
    PopingWidget::NormalInit((PopingWidget *)0x3e99999a,lVar4,uVar1);
    (**(code **)(**(long **)(this + 0x150) + 0x310))(*(long **)(this + 0x150));
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITravelLog::CheckReward() */

void __thiscall UITravelLog::CheckReward(UITravelLog *this)

{
  char cVar1;
  UITabControl *this_00;
  UITabContent *pUVar2;
  float fVar3;
  string asStack_28 [8];
  vector<TravelLogTask*,std::allocator<TravelLogTask*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<TravelLogManager>::GetInstancePtr();
  TravelLogManager::GetCompletedTasks();
  std::string::string(asStack_28,"UITabControl_0");
  this_00 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,asStack_28);
  std::string::~string(asStack_28);
  nop();
  cVar1 = std::vector<TravelLogTask*,std::allocator<TravelLogTask*>>::empty(avStack_20);
  if (cVar1 == '\0') {
    StartReward(this);
    if (this_00 != (UITabControl *)0x0) {
      pUVar2 = (UITabContent *)UITabControl::GetTab(this_00,4);
      UITabControl::SetTabSelected(this_00,pUVar2);
    }
    *(undefined4 *)(this + 0x148) = 1;
    fVar3 = (float)PVZ_T();
    *(float *)(this + 0x158) = fVar3 + 1.0;
    std::vector<TravelLogTask*,std::allocator<TravelLogTask*>>::~vector(avStack_20);
  }
  else {
    UITabControl::SetTabVisible(this_00,4,false);
    std::vector<TravelLogTask*,std::allocator<TravelLogTask*>>::~vector(avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITravelLog::InitTab(int) */

void __thiscall UITravelLog::InitTab(UITravelLog *this,int param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  UIWidgetImage *this_00;
  PVZ2UIScrollingWidget *this_01;
  Widget *this_02;
  long *plVar7;
  long lVar8;
  TaskWidget *this_03;
  undefined8 *puVar9;
  ulong uVar10;
  code *pcVar11;
  ulong uVar12;
  int iVar13;
  Insets aIStack_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("Widget_%d",asStack_20);
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  if (this_00 == (UIWidgetImage *)0x0) goto LAB_039e1160;
  (**(code **)(*(long *)this_00 + 0x80))(this_00,1,1);
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0x140));
  this_02 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_02);
  iVar3 = FUN_039dd168(0);
  Sexy::Insets::Insets(aIStack_48,iVar3,iVar3,*(int *)(this_00 + 0x50),*(int *)(this_00 + 0x54));
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_48);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_01,2);
  (**(code **)(*(long *)this_02 + 0x1a0))(this_02,aIStack_48);
  iVar4 = FUN_039dd168(10);
  iVar5 = FUN_039dd168(0);
  iVar3 = *(int *)(this_01 + 0x50);
  iVar13 = (int)((float)(*(int *)(this_01 + 0x54) + iVar5 * -2) * 0.4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  if (-1 < param_1) {
    if (param_1 < 3) {
      iVar6 = Sexy::LazySingleton<TravelLogManager>::GetInstancePtr();
      TravelLogManager::GetTasksByGroupID(iVar6,SUB41(param_1,0));
    }
    else {
      if (param_1 != 3) goto LAB_039e103c;
      Sexy::LazySingleton<TravelLogManager>::GetInstancePtr();
      TravelLogManager::GetCompletedTasks();
    }
    std::vector<TravelLogTask*,std::allocator<TravelLogTask*>>::operator=
              ((vector<TravelLogTask*,std::allocator<TravelLogTask*>> *)&local_38,
               (vector *)asStack_20);
    std::vector<TravelLogTask*,std::allocator<TravelLogTask*>>::~vector
              ((vector<TravelLogTask*,std::allocator<TravelLogTask*>> *)asStack_20);
  }
LAB_039e103c:
  cVar2 = std::vector<TravelLogTask*,std::allocator<TravelLogTask*>>::empty
                    ((vector<TravelLogTask*,std::allocator<TravelLogTask*>> *)&local_38);
  if (cVar2 != '\0') {
    std::string::string(asStack_20,"IMAGE_UI_QUESTS_TRAVEL_LOG_FINAL");
    UIWidgetImage::SetImage(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
  }
  uVar12 = 0;
  while( true ) {
    uVar1 = local_38;
    uVar10 = FUN_039dcbe4(local_38,local_30);
    if (uVar10 <= uVar12) break;
    plVar7 = (long *)FUN_039dcbf0(uVar1,uVar12);
    plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar7 + 0x20));
    lVar8 = (**(code **)(*plVar7 + 0x50))();
    FUN_039dcbb4(*(undefined8 *)(lVar8 + 0x18));
    nop();
    iVar6 = FUN_039dd168(5);
    Sexy::Insets::Insets
              ((Insets *)asStack_20,iVar4,iVar5 + (iVar6 + iVar13) * (int)uVar12,iVar3 + iVar4 * -2,
               iVar13);
    (**(code **)(*(long *)this_03 + 0x1a0))(this_03,asStack_20);
    (**(code **)(*(long *)this_02 + 0x60))(this_02,this_03);
    puVar9 = (undefined8 *)FUN_039dcbf0(local_38,uVar12);
    TaskWidget::SetTask(this_03,(TravelLogTask *)*puVar9);
    uVar12 = uVar12 + 1;
  }
  iVar3 = FUN_039dd168(5);
  pcVar11 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_02 + 0x54) = iVar5 + (iVar3 + iVar13) * (int)uVar10;
  (*pcVar11)(this_00,this_01);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
  std::vector<TravelLogTask*,std::allocator<TravelLogTask*>>::~vector
            ((vector<TravelLogTask*,std::allocator<TravelLogTask*>> *)&local_38);
LAB_039e1160:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UITravelLog::InitView() */

void __thiscall UITravelLog::InitView(UITravelLog *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    InitTab(this,iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 4);
  CheckReward(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITravelLog::UpdateCompletedUI() */

void __thiscall UITravelLog::UpdateCompletedUI(UITravelLog *this)

{
  TravelLogManager *pTVar1;
  long lVar2;
  UITabControl *this_00;
  UITabContent *pUVar3;
  float fVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x148) == 1) && (fVar4 = (float)PVZ_T(), *(float *)(this + 0x158) < fVar4)) {
    pTVar1 = (TravelLogManager *)Sexy::LazySingleton<TravelLogManager>::GetInstancePtr();
    lVar2 = TravelLogManager::GetACompletedTask(pTVar1);
    if (lVar2 == 0) {
      *(undefined4 *)(this + 0x148) = 0;
      InitTab(this,0);
      InitTab(this,1);
      std::string::string(asStack_10,"UITabControl_0");
      this_00 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,asStack_10);
      std::string::~string(asStack_10);
      nop();
      pUVar3 = (UITabContent *)UITabControl::GetTab(this_00,1);
      UITabControl::SetTabSelected(this_00,pUVar3);
      UITabControl::SetTabVisible(this_00,4,false);
      pTVar1 = (TravelLogManager *)Sexy::LazySingleton<TravelLogManager>::GetInstancePtr();
      TravelLogManager::RefreshAllTasks(pTVar1);
      EndReward(this);
    }
    else {
      *(undefined4 *)(this + 0x148) = 2;
      ShowBonus(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITravelLog::Update() */

void __thiscall UITravelLog::Update(UITravelLog *this)

{
  UIWidgetImage *pUVar1;
  TravelLogManager *this_00;
  uint uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  UpdateCompletedUI(this);
  if ((this[0x15c] != (UITravelLog)0x0) && (*(int *)(this + 0x148) == 0)) {
    uVar2 = 0;
    do {
      Sexy::StrFormat("Widget_%d",asStack_10,(ulong)uVar2);
      pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
      std::string::~string(asStack_10);
      if (pUVar1 != (UIWidgetImage *)0x0) {
        (**(code **)(*(long *)pUVar1 + 0x80))(pUVar1,1,1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != 4);
    this_00 = (TravelLogManager *)Sexy::LazySingleton<TravelLogManager>::GetInstancePtr();
    TravelLogManager::RefreshAllTasks(this_00);
    InitView(this);
    this[0x15c] = (UITravelLog)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UITravelLog::GiveRewardFinish(TravelLogTask*) */

void UITravelLog::GiveRewardFinish(TravelLogTask *param_1)

{
  float fVar1;
  
  InitTab((UITravelLog *)param_1,3);
  if (*(long *)(param_1 + 0x150) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal
              ((WidgetManager *)gLawnApp[0x6c],*(Widget **)(param_1 + 0x150));
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(param_1 + 0x150));
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  *(undefined4 *)(param_1 + 0x148) = 1;
  fVar1 = (float)PVZ_T();
  *(float *)(param_1 + 0x158) = fVar1 + 1.0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITravelLog::OnCreate() */

void __thiscall UITravelLog::OnCreate(UITravelLog *this)

{
  UIWidgetBackground *pUVar1;
  TravelLogManager *pTVar2;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  TGALogMgr *pTVar3;
  wchar_t local_84;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  undefined4 local_68 [12];
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_38,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  pTVar2 = (TravelLogManager *)Sexy::LazySingleton<TravelLogManager>::GetInstancePtr();
  TravelLogManager::Init(pTVar2);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  local_68[0] = 0;
  local_84 = L'⧐';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
            ((pair<wchar_t_const,wchar_t> *)asStack_38,&local_84,(wchar_t *)local_68);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_80,
             (pair *)asStack_38);
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_80,0,true);
  pTVar2 = (TravelLogManager *)Sexy::LazySingleton<TravelLogManager>::GetInstancePtr();
  TravelLogManager::RefreshAllTasks(pTVar2);
  InitView(this);
  TGASecretStore::TGASecretStore((TGASecretStore *)local_68);
  pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGASecretStore::TGASecretStore((TGASecretStore *)asStack_38,(TGASecretStore *)local_68);
  TGALogMgr::LogTravelLog(pTVar3,1,asStack_38);
  DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_38);
  DropGroupNode::~DropGroupNode((DropGroupNode *)local_68);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

