// Class: ActivityCollectionRichman


/* ActivityCollectionRichman::ScrollTargetReached(Sexy::ScrollWidget*) */

void ActivityCollectionRichman::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ActivityCollectionRichman::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
ActivityCollectionRichman::ScrollTargetReached
          (ActivityCollectionRichman *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x140));
  return;
}


/* ActivityCollectionRichman::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void ActivityCollectionRichman::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ActivityCollectionRichman::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
ActivityCollectionRichman::ScrollTargetInterrupted
          (ActivityCollectionRichman *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x140));
  return;
}


/* ActivityCollectionRichman::RefreshContainer(ActivityCollectionTabBase*) */

void ActivityCollectionRichman::RefreshContainer(ActivityCollectionTabBase *param_1)

{
  return;
}


/* non-virtual thunk to ActivityCollectionRichman::RefreshContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionRichman::RefreshContainer
          (ActivityCollectionRichman *this,ActivityCollectionTabBase *param_1)

{
  RefreshContainer((ActivityCollectionTabBase *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionRichman::GetLayoutName() */

void __thiscall ActivityCollectionRichman::GetLayoutName(ActivityCollectionRichman *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIRichmanActivityNew");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionRichman::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionRichman::InitContainer
          (ActivityCollectionRichman *this,ActivityCollectionTabBase *param_1)

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


/* non-virtual thunk to ActivityCollectionRichman::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionRichman::InitContainer
          (ActivityCollectionRichman *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0x138,param_1);
  return;
}


/* ActivityCollectionRichman::~ActivityCollectionRichman() */

void __thiscall
ActivityCollectionRichman::~ActivityCollectionRichman(ActivityCollectionRichman *this)

{
  *(undefined ***)this = &PTR_GetClass_0662de30;
  *(undefined ***)(this + 0x138) = &PTR_InitContainer_0662e1e8;
  *(undefined **)(this + 0xd8) = &DAT_0662e1a0;
  *(undefined ***)(this + 0x140) = &PTR__ActivityCollectionRichman_0662e208;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x158);
  UISingletonDialog<ActivityCollectionRichman>::~UISingletonDialog
            ((UISingletonDialog<ActivityCollectionRichman> *)this);
  return;
}


/* non-virtual thunk to ActivityCollectionRichman::~ActivityCollectionRichman() */

void __thiscall
ActivityCollectionRichman::~ActivityCollectionRichman(ActivityCollectionRichman *this)

{
  ~ActivityCollectionRichman(this + -0x140);
  return;
}


/* ActivityCollectionRichman::~ActivityCollectionRichman() */

void __thiscall
ActivityCollectionRichman::~ActivityCollectionRichman(ActivityCollectionRichman *this)

{
  ~ActivityCollectionRichman(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ActivityCollectionRichman::~ActivityCollectionRichman() */

void __thiscall
ActivityCollectionRichman::~ActivityCollectionRichman(ActivityCollectionRichman *this)

{
  ~ActivityCollectionRichman(this + -0x140);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionRichman::ShowTips() */

void ActivityCollectionRichman::ShowTips(void)

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
  FUN_05478178(awStack_50,L"[ACTIVITY_NEW_RICHMAN_TIPS]",auStack_58);
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
/* ActivityCollectionRichman::ActivityCollectionRichman() */

void __thiscall
ActivityCollectionRichman::ActivityCollectionRichman(ActivityCollectionRichman *this)

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
  UISingletonDialog<ActivityCollectionRichman>::UISingletonDialog
            ((UISingletonDialog<ActivityCollectionRichman> *)this);
  ActivityCollectionContainer::ActivityCollectionContainer
            ((ActivityCollectionContainer *)(this + 0x138));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x140));
  this[0x148] = (ActivityCollectionRichman)0x0;
  *(undefined ***)this = &PTR_GetClass_0662de30;
  *(undefined **)(this + 0xd8) = &DAT_0662e1a0;
  *(undefined ***)(this + 0x138) = &PTR_InitContainer_0662e1e8;
  *(undefined ***)(this + 0x140) = &PTR__ActivityCollectionRichman_0662e208;
  *(undefined8 *)(this + 0x150) = 0;
  FUN_05478178(this + 0x158,&DAT_056f11a8,&local_20);
  nop();
  Sexy::Color::Color((Color *)(this + 0x160),1);
  *(undefined4 *)(this + 0x170) = 0x2a13;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_40 = local_20;
  uStack_38 = uStack_18;
  local_30 = local_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<ActivityCollectionRichman,void(ActivityCollectionRichman::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionRichman::Update() */

void __thiscall ActivityCollectionRichman::Update(ActivityCollectionRichman *this)

{
  ActivityCollectionRichman *pAVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
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
    FUN_054766c8(this + 0x158,awStack_90);
    FUN_05476c50(awStack_90);
  }
  else {
    pAVar1 = this + 0x158;
    FUN_05478178(awStack_90,L"[TOTAL_LOGIN_DAYS]",auStack_a0);
    TodReplaceNumberString(awStack_90,L"{DAY_COUNT}",iVar2);
    FUN_05476c50(awStack_90);
    nop();
    Sexy::StrFormat(L"%02d:%02d",awStack_90,lVar3 / 0xe10 & 0xffffffff,
                    (ulong)(uint)((int)(lVar3 / 0x3c) + (int)((lVar3 / 0x3c) / 0x3c) * -0x3c));
    FUN_054766c8(pAVar1,awStack_90);
    FUN_05476c50(awStack_90);
    FUN_0342e660(awStack_90,auStack_98,pAVar1);
    FUN_054766c8(pAVar1,awStack_90);
    FUN_05476c50(awStack_90);
    FUN_05476c50(auStack_98);
  }
  if (*(long *)(this + 0x150) != 0) {
    PuzzleTip::SetTip(*(long *)(this + 0x150),this + 0x158);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionRichman::showFestivalGameEntrance() */

void ActivityCollectionRichman::showFestivalGameEntrance(void)

{
  char cVar1;
  int iVar2;
  RichManUIMgr *this;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03429840(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    this = (RichManUIMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
    RichManUIMgr::RequestNetwork(this);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionRichman::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
ActivityCollectionRichman::onNotifyRefreshActivityList
          (ActivityCollectionRichman *this,bool param_1,set *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (this[0x148] != (ActivityCollectionRichman)0x0)) {
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
  this[0x148] = (ActivityCollectionRichman)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionRichman::ButtonDepress(int) */

void __thiscall
ActivityCollectionRichman::ButtonDepress(ActivityCollectionRichman *this,int param_1)

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
      this[0x148] = (ActivityCollectionRichman)0x1;
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


/* non-virtual thunk to ActivityCollectionRichman::ButtonDepress(int) */

void __thiscall
ActivityCollectionRichman::ButtonDepress(ActivityCollectionRichman *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionRichman::InitView() */

void __thiscall ActivityCollectionRichman::InitView(ActivityCollectionRichman *this)

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
  string asStack_d8 [16];
  string asStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_c8,"UIText_ActivityTime");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_c8);
  *(UIWidgetText **)(this + 0x150) = pUVar8;
  std::string::~string(asStack_c8);
  nop();
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar2 = FUN_03429840(local_80);
  if ((cVar2 != '\0') && (local_70 != '\0')) {
    NetworkRichManConfig::NetworkRichManConfig((NetworkRichManConfig *)asStack_c8);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)asStack_c8);
    if (cVar2 != '\0') {
      lVar11 = 0;
      std::string::string(asStack_d8,"RewardContainer");
      plVar9 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_d8);
      std::string::~string(asStack_d8);
      nop();
      iVar3 = FUN_03428e5c((int)plVar9[10]);
      iVar4 = FUN_03428e60(*(undefined4 *)((long)plVar9 + 0x54));
      iVar5 = FUN_0342d430(4);
      iVar6 = FUN_0342d430(3);
      iVar1 = iVar4 + iVar6 * -2;
      this_00 = ::operator_new(0x248);
      PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
      Sexy::Insets::Insets((Insets *)asStack_d8,0,0,iVar3,iVar4);
      (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_d8);
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
    NetworkRichManConfig::~NetworkRichManConfig((NetworkRichManConfig *)asStack_c8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ActivityCollectionRichman::OnCreate() */

char __thiscall ActivityCollectionRichman::OnCreate(ActivityCollectionRichman *this)

{
  char cVar1;
  
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    InitView(this);
  }
  return cVar1;
}

