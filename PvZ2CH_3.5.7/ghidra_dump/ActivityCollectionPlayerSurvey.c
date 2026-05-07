// Class: ActivityCollectionPlayerSurvey


/* ActivityCollectionPlayerSurvey::ScrollTargetReached(Sexy::ScrollWidget*) */

void ActivityCollectionPlayerSurvey::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ActivityCollectionPlayerSurvey::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
ActivityCollectionPlayerSurvey::ScrollTargetReached
          (ActivityCollectionPlayerSurvey *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x140));
  return;
}


/* ActivityCollectionPlayerSurvey::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void ActivityCollectionPlayerSurvey::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ActivityCollectionPlayerSurvey::ScrollTargetInterrupted(Sexy::ScrollWidget*)
    */

void __thiscall
ActivityCollectionPlayerSurvey::ScrollTargetInterrupted
          (ActivityCollectionPlayerSurvey *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x140));
  return;
}


/* ActivityCollectionPlayerSurvey::RefreshContainer(ActivityCollectionTabBase*) */

void ActivityCollectionPlayerSurvey::RefreshContainer(ActivityCollectionTabBase *param_1)

{
  return;
}


/* non-virtual thunk to ActivityCollectionPlayerSurvey::RefreshContainer(ActivityCollectionTabBase*)
    */

void __thiscall
ActivityCollectionPlayerSurvey::RefreshContainer
          (ActivityCollectionPlayerSurvey *this,ActivityCollectionTabBase *param_1)

{
  RefreshContainer((ActivityCollectionTabBase *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionPlayerSurvey::GetLayoutName() */

void __thiscall ActivityCollectionPlayerSurvey::GetLayoutName(ActivityCollectionPlayerSurvey *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPlayerSurveyActivityNew");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionPlayerSurvey::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionPlayerSurvey::InitContainer
          (ActivityCollectionPlayerSurvey *this,ActivityCollectionTabBase *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  int unaff_w25;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)FUN_03428e64(*(undefined8 *)(param_1 + 0x18));
  std::string::string(asStack_10,"Background_0");
  plVar2 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (plVar2 != (long *)0x0) {
    unaff_w25 = ((int)plVar1[10] - (int)plVar2[10]) / 2;
    (**(code **)(*plVar2 + 0x1a8))(plVar2,unaff_w25,*(undefined4 *)((long)plVar2 + 0x4c));
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,this);
  std::string::string(asStack_10,"Container");
  lVar3 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (unaff_w25 < 1) {
    iVar4 = ((int)plVar1[10] - unaff_w25) - *(int *)(lVar3 + 0x50);
  }
  else {
    iVar4 = (int)plVar2[10] - *(int *)(lVar3 + 0x50);
  }
  *(int *)(lVar3 + 0x48) = iVar4;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActivityCollectionPlayerSurvey::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionPlayerSurvey::InitContainer
          (ActivityCollectionPlayerSurvey *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0x138,param_1);
  return;
}


/* ActivityCollectionPlayerSurvey::~ActivityCollectionPlayerSurvey() */

void __thiscall
ActivityCollectionPlayerSurvey::~ActivityCollectionPlayerSurvey
          (ActivityCollectionPlayerSurvey *this)

{
  *(undefined ***)this = &PTR_GetClass_0662da10;
  *(undefined ***)(this + 0x138) = &PTR_InitContainer_0662ddc8;
  *(undefined **)(this + 0xd8) = &DAT_0662dd80;
  *(undefined ***)(this + 0x140) = &PTR__ActivityCollectionPlayerSurvey_0662dde8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x158);
  UISingletonDialog<ActivityCollectionPlayerSurvey>::~UISingletonDialog
            ((UISingletonDialog<ActivityCollectionPlayerSurvey> *)this);
  return;
}


/* non-virtual thunk to ActivityCollectionPlayerSurvey::~ActivityCollectionPlayerSurvey() */

void __thiscall
ActivityCollectionPlayerSurvey::~ActivityCollectionPlayerSurvey
          (ActivityCollectionPlayerSurvey *this)

{
  ~ActivityCollectionPlayerSurvey(this + -0x140);
  return;
}


/* ActivityCollectionPlayerSurvey::~ActivityCollectionPlayerSurvey() */

void __thiscall
ActivityCollectionPlayerSurvey::~ActivityCollectionPlayerSurvey
          (ActivityCollectionPlayerSurvey *this)

{
  ~ActivityCollectionPlayerSurvey(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ActivityCollectionPlayerSurvey::~ActivityCollectionPlayerSurvey() */

void __thiscall
ActivityCollectionPlayerSurvey::~ActivityCollectionPlayerSurvey
          (ActivityCollectionPlayerSurvey *this)

{
  ~ActivityCollectionPlayerSurvey(this + -0x140);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionPlayerSurvey::SetButtonDisable(bool) */

void __thiscall
ActivityCollectionPlayerSurvey::SetButtonDisable(ActivityCollectionPlayerSurvey *this,bool param_1)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_2");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar1 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar1 + 0x188))(pPVar1,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionPlayerSurvey::ShowTips() */

void ActivityCollectionPlayerSurvey::ShowTips(void)

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
  FUN_05478178(awStack_50,L"[ACTIVITY_NEW_PLAYER_SURVEY_TIPS]",auStack_58);
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
/* ActivityCollectionPlayerSurvey::ActivityCollectionPlayerSurvey() */

void __thiscall
ActivityCollectionPlayerSurvey::ActivityCollectionPlayerSurvey(ActivityCollectionPlayerSurvey *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<ActivityCollectionPlayerSurvey>::UISingletonDialog
            ((UISingletonDialog<ActivityCollectionPlayerSurvey> *)this);
  ActivityCollectionContainer::ActivityCollectionContainer
            ((ActivityCollectionContainer *)(this + 0x138));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x140));
  this[0x148] = (ActivityCollectionPlayerSurvey)0x0;
  *(undefined ***)this = &PTR_GetClass_0662da10;
  *(undefined **)(this + 0xd8) = &DAT_0662dd80;
  *(undefined ***)(this + 0x138) = &PTR_InitContainer_0662ddc8;
  *(undefined ***)(this + 0x140) = &PTR__ActivityCollectionPlayerSurvey_0662dde8;
  *(undefined8 *)(this + 0x150) = 0;
  FUN_05478178(this + 0x158,&DAT_056f11a8,&local_20);
  nop();
  Sexy::Color::Color((Color *)(this + 0x160),1);
  *(undefined4 *)(this + 0x170) = 0x2a51;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_40 = local_20;
  uStack_38 = uStack_18;
  local_30 = local_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<ActivityCollectionPlayerSurvey,void(ActivityCollectionPlayerSurvey::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionPlayerSurvey::ButtonDepress(int) */

void __thiscall
ActivityCollectionPlayerSurvey::ButtonDepress(ActivityCollectionPlayerSurvey *this,int param_1)

{
  char cVar1;
  int iVar2;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  wchar_t local_b0 [2];
  pair<wchar_t_const,wchar_t> apStack_a8 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_a0 [24];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x1f8) {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    cVar1 = FUN_03429840(local_80);
    if ((cVar1 == '\0') || (local_70 == '\0')) {
      FestivalGamePageFightZodiac::ShowErrorDialog();
    }
    else {
      this[0x148] = (ActivityCollectionPlayerSurvey)0x1;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_a0);
      local_b0[1] = 1;
      local_b0[0] = *(wchar_t *)(this + 0x170);
      std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_a8,local_b0,local_b0 + 1)
      ;
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_a0,
                 (pair *)apStack_a8);
      this_00 = (NetworkMgr *)NetworkMgr::Instance();
      this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
      INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_a0,0,true);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_a0);
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  else if (param_1 == 0x3e9) {
    ShowTips();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActivityCollectionPlayerSurvey::ButtonDepress(int) */

void __thiscall
ActivityCollectionPlayerSurvey::ButtonDepress(ActivityCollectionPlayerSurvey *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionPlayerSurvey::InitView() */

void __thiscall ActivityCollectionPlayerSurvey::InitView(ActivityCollectionPlayerSurvey *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  UIWidgetText *pUVar8;
  long *plVar9;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  int *piVar10;
  UIRewardFrame *this_02;
  long lVar11;
  string asStack_e0 [16];
  string asStack_d0 [48];
  undefined8 local_a0;
  undefined8 local_98;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_d0,"UIText_ActivityTime");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_d0);
  *(UIWidgetText **)(this + 0x150) = pUVar8;
  std::string::~string(asStack_d0);
  nop();
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar2 = FUN_03429840(local_80);
  if ((cVar2 != '\0') && (local_70 != '\0')) {
    NetworkPlayerSurvey::NetworkPlayerSurvey((NetworkPlayerSurvey *)asStack_d0);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)asStack_d0);
    if (cVar2 != '\0') {
      lVar11 = 0;
      std::string::string(asStack_e0,"RewardContainer");
      plVar9 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_e0);
      std::string::~string(asStack_e0);
      nop();
      iVar3 = FUN_03428e5c((int)plVar9[10]);
      iVar4 = FUN_03428e60(*(undefined4 *)((long)plVar9 + 0x54));
      iVar5 = FUN_0342d430(4);
      iVar6 = FUN_0342d430(3);
      iVar1 = iVar4 + iVar6 * -2;
      this_00 = ::operator_new(0x248);
      PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
      Sexy::Insets::Insets((Insets *)asStack_e0,0,0,iVar3,iVar4);
      (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_e0);
      Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
      (**(code **)(*plVar9 + 0x60))(plVar9,this_00);
      iVar7 = FUN_034298e0(local_a0,local_98);
      this_01 = ::operator_new(0xd8);
      Sexy::Widget::Widget(this_01);
      (**(code **)(*(long *)this_01 + 0x198))(this_01,0,0,iVar6 + (iVar5 + iVar1) * iVar7,iVar4);
      (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
      iVar3 = iVar6;
      if (0 < iVar7) {
        do {
          piVar10 = (int *)FUN_0342991c(local_a0,lVar11);
          this_02 = (UIRewardFrame *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar10,0,true);
          (**(code **)(*(long *)this_02 + 0x198))(this_02,iVar3,iVar6,iVar1,iVar1);
          if (lVar11 == 0) {
            UIRewardFrame::EnableFrameRotation(this_02,true);
            UIRewardFrame::SetFrameRotationScale(this_02,0.8);
          }
          lVar11 = lVar11 + 1;
          iVar3 = iVar3 + iVar5 + iVar1;
          (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
        } while ((int)lVar11 < iVar7);
      }
    }
    NetworkPlayerSurvey::~NetworkPlayerSurvey((NetworkPlayerSurvey *)asStack_d0);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ActivityCollectionPlayerSurvey::OnCreate() */

char __thiscall ActivityCollectionPlayerSurvey::OnCreate(ActivityCollectionPlayerSurvey *this)

{
  char cVar1;
  
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    InitView(this);
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionPlayerSurvey::showFestivalGameEntrance() */

void ActivityCollectionPlayerSurvey::showFestivalGameEntrance(void)

{
  LawnApp *this;
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  UIPlayerSurvey *pUVar5;
  PVZ2UIDialog *pPVar6;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  wstring awStack_120 [8];
  vector<PlayerSurveyStringData,std::allocator<PlayerSurveyStringData>> avStack_118 [24];
  Delegate0 aDStack_100 [48];
  NetworkPlayerSurvey aNStack_d0 [20];
  undefined4 local_bc;
  vector avStack_b8 [48];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03429840(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    NetworkPlayerSurvey::NetworkPlayerSurvey(aNStack_d0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aNStack_d0);
    this = gLawnApp;
    if (cVar1 == '\0') {
      FUN_05478178(awStack_120,L"[REVIVE_TIP]",auStack_130);
      FUN_05478178((wstring *)avStack_118,L"[CHARGEDOUBLE_FESTIVAL_NOUSE]",auStack_128);
      pPVar6 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_120,(wstring *)avStack_118);
      FUN_05476c50((wstring *)avStack_118);
      nop();
      FUN_05476c50(awStack_120);
      nop();
      FUN_05478178(awStack_120,L"[DIALOG_STRING_OK]",auStack_128);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_100,(wstring *)avStack_118);
      PVZ2UIDialog::AddButton(pPVar6,awStack_120,aDStack_100,0);
      FUN_05476c50(awStack_120);
      nop();
    }
    else {
      plVar3 = (long *)UISingletonDialog<UIPlayerSurvey>::GetSingletonPtr();
      if (plVar3 == (long *)0x0) {
        UISingletonDialog<UIPlayerSurvey>::ShowDialog();
      }
      else {
        (**(code **)(*plVar3 + 0x108))();
      }
      lVar4 = UISingletonDialog<UIPlayerSurvey>::GetSingletonPtr();
      FUN_0342984c(lVar4 + 0x178,local_bc);
      pUVar5 = (UIPlayerSurvey *)UISingletonDialog<UIPlayerSurvey>::GetSingletonPtr();
      std::vector<PlayerSurveyStringData,std::allocator<PlayerSurveyStringData>>::vector
                (avStack_118,avStack_b8);
      UIPlayerSurvey::SetQuestionStrList(pUVar5,avStack_118);
      std::vector<PlayerSurveyStringData,std::allocator<PlayerSurveyStringData>>::~vector
                (avStack_118);
      pUVar5 = (UIPlayerSurvey *)UISingletonDialog<UIPlayerSurvey>::GetSingletonPtr();
      UIPlayerSurvey::InitView(pUVar5);
    }
    NetworkPlayerSurvey::~NetworkPlayerSurvey(aNStack_d0);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionPlayerSurvey::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
ActivityCollectionPlayerSurvey::onNotifyRefreshActivityList
          (ActivityCollectionPlayerSurvey *this,bool param_1,set *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (this[0x148] != (ActivityCollectionPlayerSurvey)0x0)) {
    uVar2 = std::set<int,std::less<int>,std::allocator<int>>::begin
                      ((set<int,std::less<int>,std::allocator<int>> *)param_2);
    uVar3 = std::
            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
            end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)param_2);
    local_18 = std::find<std::_Rb_tree_const_iterator<int>,int>(uVar2,uVar3);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      showFestivalGameEntrance();
    }
  }
  this[0x148] = (ActivityCollectionPlayerSurvey)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

