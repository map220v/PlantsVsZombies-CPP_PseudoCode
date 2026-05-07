// Class: UIArborDay


/* UIArborDay::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIArborDay::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIArborDay::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UIArborDay::ScrollTargetReached(UIArborDay *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIArborDay::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIArborDay::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIArborDay::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UIArborDay::ScrollTargetInterrupted(UIArborDay *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArborDay::GetLayoutName() */

void __thiscall UIArborDay::GetLayoutName(UIArborDay *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIArborDayNew");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIArborDay::closeDescriptionWidget() */

void __thiscall UIArborDay::closeDescriptionWidget(UIArborDay *this)

{
  if (*(long *)(this + 0x268) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x268))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x268));
    *(undefined8 *)(this + 0x268) = 0;
  }
  return;
}


/* UIArborDay::GetCurrentKettle() */

undefined4 __thiscall UIArborDay::GetCurrentKettle(UIArborDay *this)

{
  return *(undefined4 *)(this + 0x15c);
}


/* UIArborDay::GetBubbleItem(int) */

undefined4 __thiscall UIArborDay::GetBubbleItem(UIArborDay *this,int param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (-1 < param_1) {
    uVar3 = *(undefined8 *)(this + 0x170);
    uVar1 = FUN_03a20760(uVar3,*(undefined8 *)(this + 0x178));
    if ((ulong)(long)param_1 < uVar1) {
      lVar2 = FUN_03a20790(uVar3,(long)param_1);
      return *(undefined4 *)(lVar2 + 4);
    }
  }
  return 0;
}


/* UIArborDay::CalculCache(std::vector<ArborDayBonus, std::allocator<ArborDayBonus> > const&) */

void __thiscall UIArborDay::CalculCache(UIArborDay *this,vector *param_1)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)param_1;
  lVar1 = FUN_03a20760(uVar5,*(undefined8 *)(param_1 + 8));
  lVar4 = 0;
  if (lVar1 != 0) {
    do {
      piVar2 = (int *)FUN_03a20790(*(undefined8 *)(this + 0x170),lVar4);
      piVar3 = (int *)FUN_03a2079c(uVar5,lVar4);
      if (*piVar2 != *piVar3) {
        *(int *)(this + 0x140) = (int)lVar4;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != lVar1);
  }
  return;
}


/* UIArborDay::ObtainPersonalReward(int) */

void __thiscall UIArborDay::ObtainPersonalReward(UIArborDay *this,int param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x1b8);
  uVar1 = FUN_03a207a8(uVar3,*(undefined8 *)(this + 0x1c0));
  if ((ulong)(long)param_1 < uVar1) {
    lVar2 = FUN_03a207b4(uVar3,(long)param_1);
    *(undefined4 *)(lVar2 + 4) = 1;
  }
  return;
}


/* UIArborDay::ObtainTotalReward(int) */

void __thiscall UIArborDay::ObtainTotalReward(UIArborDay *this,int param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x1a0);
  uVar1 = FUN_03a207a8(uVar3,*(undefined8 *)(this + 0x1a8));
  if ((ulong)(long)param_1 < uVar1) {
    lVar2 = FUN_03a207b4(uVar3,(long)param_1);
    *(undefined4 *)(lVar2 + 4) = 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArborDay::Update() */

void __thiscall UIArborDay::Update(UIArborDay *this)

{
  UIWidgetText *pUVar1;
  string asStack_18 [8];
  TimeUtil aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  std::string::string(asStack_18,"UIText_Timer1");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  TimeUtil::GetTimeCountdown(3,0x2a5c);
  TimeUtil::GetTimeCountdownFormat(aTStack_10,0);
  PuzzleTip::SetTip(pUVar1,aTStack_10);
  FUN_05476c50(aTStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_Timer2");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  TimeUtil::GetTimeCountdown(3,0x2a5c);
  TimeUtil::GetTimeCountdownFormat(aTStack_10,0);
  PuzzleTip::SetTip(pUVar1,aTStack_10);
  FUN_05476c50(aTStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_Timer3");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  TimeUtil::GetTimeCountdown(1,-1);
  TimeUtil::GetTimeCountdownFormat(aTStack_10,0);
  PuzzleTip::SetTip(pUVar1,aTStack_10);
  FUN_05476c50(aTStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_Timer4");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  TimeUtil::GetTimeCountdown(3,0x2a5c);
  TimeUtil::GetTimeCountdownFormat(aTStack_10,0);
  PuzzleTip::SetTip(pUVar1,aTStack_10);
  FUN_05476c50(aTStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArborDay::SetNextNeed(int) */

void __thiscall UIArborDay::SetNextNeed(UIArborDay *this,int param_1)

{
  UIWidgetText *pUVar1;
  string asStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x160) = param_1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"UIText_NextWater");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  TodStringTranslate(L"[ARBORDAY_NEXT_HARVEST]");
  TodReplaceNumberString(awStack_18,L"{NUM}",param_1);
  PuzzleTip::SetTip(pUVar1,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  std::string::~string(asStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArborDay::ShowCache(bool) */

void __thiscall UIArborDay::ShowCache(UIArborDay *this,bool param_1)

{
  Widget *pWVar1;
  UIWidgetAnim *pUVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("Widget_Bubble%d",asStack_10,(ulong)*(uint *)(this + 0x140));
  pWVar1 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  Sexy::StrFormat("UIAnim_Bubble%d",asStack_10,(ulong)*(uint *)(this + 0x140));
  pUVar2 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  if (pWVar1 != (Widget *)0x0) {
    (**(code **)(*(long *)pWVar1 + 0x158))(pWVar1,param_1);
  }
  if (pUVar2 != (UIWidgetAnim *)0x0) {
    (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArborDay::OnWatering() */

void __thiscall UIArborDay::OnWatering(UIArborDay *this)

{
  UIWidgetAnim *pUVar1;
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ShowCache(this,false);
  std::string::string(asStack_30,"UIAnim_Water");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,1);
  std::string::string(asStack_30,"animation");
  FUN_03a22250(afStack_28,this,pUVar1);
  UIWidgetAnim::SetLabel(pUVar1,asStack_30,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"UIAnim_Face");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"animation02");
  FUN_03a222ac(afStack_28,this,pUVar1);
  UIWidgetAnim::SetLabel(pUVar1,asStack_30,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  std::string::~string(asStack_30);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArborDay::RefreshBubble() */

void __thiscall UIArborDay::RefreshBubble(UIArborDay *this)

{
  long lVar1;
  Widget *pWVar2;
  UIWidgetAnim *pUVar3;
  undefined8 *puVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  ArborDayBubbleWidget *this_00;
  string asStack_10 [8];
  long local_8;
  
  uVar7 = 0;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_03a20760(*(undefined8 *)(this + 0x170),*(undefined8 *)(this + 0x178));
  if (lVar1 != 0) {
    do {
      Sexy::StrFormat("Widget_Bubble%d",asStack_10,uVar7 & 0xffffffff);
      pWVar2 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_10);
      std::string::~string(asStack_10);
      Sexy::StrFormat("UIAnim_Bubble%d",asStack_10,uVar7 & 0xffffffff);
      pUVar3 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_10);
      std::string::~string(asStack_10);
      puVar4 = (undefined8 *)FUN_03a207bc(*(undefined8 *)(this + 0x250),uVar7);
      this_00 = (ArborDayBubbleWidget *)*puVar4;
      piVar5 = (int *)FUN_03a20790(*(undefined8 *)(this + 0x170),uVar7);
      if (*piVar5 == 0) {
        (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,0);
        (**(code **)(*(long *)pWVar2 + 0x158))(pWVar2,0);
        puVar4 = (undefined8 *)FUN_03a207bc(*(undefined8 *)(this + 0x250),uVar7);
        (**(code **)(*(long *)*puVar4 + 0x158))((long *)*puVar4,0);
      }
      else {
        (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,1);
        (**(code **)(*(long *)pWVar2 + 0x158))(pWVar2,1);
        puVar4 = (undefined8 *)FUN_03a207bc(*(undefined8 *)(this + 0x250),uVar7);
        (**(code **)(*(long *)*puVar4 + 0x158))((long *)*puVar4,1);
        lVar1 = FUN_03a20790(*(undefined8 *)(this + 0x170),uVar7);
        ArborDayBubbleWidget::SetData(this_00,*(int *)(lVar1 + 4),*(int *)(lVar1 + 8));
      }
      uVar7 = uVar7 + 1;
      uVar6 = FUN_03a20760(*(undefined8 *)(this + 0x170),*(undefined8 *)(this + 0x178));
    } while (uVar7 < uVar6);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIArborDay::HarvestBubble(int) */

void __thiscall UIArborDay::HarvestBubble(UIArborDay *this,int param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  if (-1 < param_1) {
    uVar3 = *(undefined8 *)(this + 0x170);
    uVar1 = FUN_03a20760(uVar3,*(undefined8 *)(this + 0x178));
    if ((ulong)(long)param_1 < uVar1) {
      puVar2 = (undefined4 *)FUN_03a20790(uVar3,(long)param_1);
      *puVar2 = 0;
    }
  }
  RefreshBubble(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArborDay::SetCurrentKettle(int) */

void __thiscall UIArborDay::SetCurrentKettle(UIArborDay *this,int param_1)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIWidgetText *this_02;
  int local_24 [3];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x15c) = param_1;
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_10,"mat_arborday_kettle");
  PlayerInfo::SetMaterialNum(this_01,asStack_10,local_24[0]);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_18,"UIText_Kettle");
  this_02 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_24);
  UIWidgetText::SetString(this_02,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArborDay::WaterConfirm(UIMessageBox*, int) */

void __thiscall UIArborDay::WaterConfirm(UIArborDay *this,UIMessageBox *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  NetworkMgr *this_00;
  long *plVar3;
  int iVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    iVar4 = 0;
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x170));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x170));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if (*piVar2 != 0) {
        iVar4 = iVar4 + 1;
      }
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_18);
    }
    iVar4 = (4 - iVar4) * 3 + *(int *)(this + 0x160);
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    plVar3 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
    if (*(int *)(this + 0x15c) < iVar4) {
      iVar4 = *(int *)(this + 0x15c);
    }
    (**(code **)(*plVar3 + 0x1e8))(plVar3,iVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArborDay::HarvestAllBubble() */

void __thiscall UIArborDay::HarvestAllBubble(UIArborDay *this)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x170));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x170));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    *puVar2 = 0;
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_18);
  }
  RefreshBubble(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArborDay::showDescriptionWidget() */

void __thiscall UIArborDay::showDescriptionWidget(UIArborDay *this)

{
  ActivityDescriptionUI *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x268) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 0x268) = this_00;
    TodStringTranslate(L"[ARBORDAY_DESCRIPTION]");
    TodStringTranslate(L"[ARBORDAY_DESCRIPTION_TITLE]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x268);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,closeDescriptionWidget);
    Sexy::Delegate0::Delegate0<UIArborDay,void(UIArborDay::*)()>(aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x268));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x268));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x268));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x268));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArborDay::ButtonDepress(int) */

void __thiscall UIArborDay::ButtonDepress(UIArborDay *this,int param_1)

{
  LawnApp *this_00;
  bool bVar1;
  UIMessageBox *pUVar2;
  int *piVar3;
  Image *pIVar4;
  UITabControl *this_01;
  UITabContent *pUVar5;
  wchar_t *pwVar6;
  int iVar7;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  undefined8 local_58;
  undefined8 local_50 [3];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  switch(param_1) {
  case 0xb:
    FUN_05478178((wstring *)local_50,L"ArborDay",&local_58);
    LawnApp::ShowProbabilityDialog(this_00,(wstring *)local_50);
    FUN_05476c50((wstring *)local_50);
    nop();
    break;
  case 0x16:
    std::string::string((string *)local_50,"UITabControl_0");
    this_01 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,(string *)local_50);
    std::string::~string((string *)local_50);
    nop();
    if (this_01 != (UITabControl *)0x0) {
      pUVar5 = (UITabContent *)UITabControl::GetTab(this_01,3);
      UITabControl::SetTabSelected(this_01,pUVar5);
    }
    break;
  case 0x21:
    showDescriptionWidget(this);
    break;
  case 0x2c:
    pUVar2 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar2 == (UIMessageBox *)0x0) break;
    iVar7 = 0;
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x170));
    local_50[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x170));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)local_50), bVar1)
    {
      piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      if (*piVar3 != 0) {
        iVar7 = iVar7 + 1;
      }
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_58);
    }
    iVar7 = (4 - iVar7) * 3 + *(int *)(this + 0x160);
    FUN_05476574(awStack_60);
    if (iVar7 == 0) {
      UIMessageBox::SetShowType(pUVar2,2);
      pwVar6 = L"[PVP_ERROR_46309]";
LAB_03a244f8:
      TodStringTranslate(pwVar6);
      FUN_054766c8(awStack_60,(string *)local_50);
      FUN_05476c50((string *)local_50);
    }
    else {
      if (*(int *)(this + 0x15c) < 1) {
        UIMessageBox::SetShowType(pUVar2,2);
        pwVar6 = L"[ARBOARDAY_KETTLE_NOT_ENOUGH]";
        goto LAB_03a244f8;
      }
      UIMessageBox::SetShowType(pUVar2,6);
      TodStringTranslate(L"[ARBOARDAY_SURE_WATER]");
      if (*(int *)(this + 0x15c) < iVar7) {
        iVar7 = *(int *)(this + 0x15c);
      }
      TodReplaceNumberString((wstring *)&local_58,L"{NUM}",iVar7);
      FUN_054766c8(awStack_60,(string *)local_50);
      FUN_05476c50((string *)local_50);
      FUN_05476c50((exception_ptr *)&local_58);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,WaterConfirm);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<UIArborDay,void(UIArborDay::*)(UIMessageBox*,int)>(aDStack_38,(string *)local_50);
      UIMessageBox::SetCallback(pUVar2,aDStack_38);
    }
    TodStringTranslate(L"[REVIVE_TIP]");
    UIMessageBox::SetMessage(pUVar2,awStack_60,(wstring *)&local_58);
    std::string::string((string *)local_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar4 = (Image *)StringHelper::ToImage((string *)local_50,false);
    UIMessageBox::SetBackground(pUVar2,pIVar4);
    std::string::~string((string *)local_50);
    nop();
    FUN_05476c50((exception_ptr *)&local_58);
    FUN_05476c50(awStack_60);
    break;
  case 0x2d:
    pUVar2 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar2 != (UIMessageBox *)0x0) {
      TodStringTranslate(L"[REVIVE_TIP]");
      iVar7 = 0;
      FUN_05476574(awStack_60);
      local_58 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x170));
      local_50[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0x170));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_58,(__normal_iterator *)local_50), bVar1
            ) {
        piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
        if (*piVar3 != 0) {
          iVar7 = iVar7 + 1;
        }
        __gnu_cxx::
        __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
        ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                      *)&local_58);
      }
      if (iVar7 == 0) {
        TodStringTranslate(L"[ARBOARDAY_REWARD_NOT_ENOUGH]");
        FUN_054766c8(awStack_60,(string *)local_50);
        FUN_05476c50((string *)local_50);
        UIMessageBox::SetShowType(pUVar2,2);
      }
      else {
        UIMessageBox::SetShowType(pUVar2,6);
        TodStringTranslate(L"[ARBOARDAY_SURE_WATER_GET]");
        FUN_054766c8(awStack_60,(string *)local_50);
        FUN_05476c50((string *)local_50);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,HarvestAllRewards);
        Sexy::Delegate2<UIMessageBox*,int>::
        Delegate2<UIArborDay,void(UIArborDay::*)(UIMessageBox*,int)>(aDStack_38,(string *)local_50);
        UIMessageBox::SetCallback(pUVar2,aDStack_38);
      }
      UIMessageBox::SetMessage(pUVar2,awStack_60,awStack_68);
      std::string::string((string *)local_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar4 = (Image *)StringHelper::ToImage((string *)local_50,false);
      UIMessageBox::SetBackground(pUVar2,pIVar4);
      std::string::~string((string *)local_50);
      nop();
      FUN_05476c50(awStack_60);
      FUN_05476c50(awStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIArborDay::ButtonDepress(int) */

void __thiscall UIArborDay::ButtonDepress(UIArborDay *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArborDay::InitTotalReward() */

void __thiscall UIArborDay::InitTotalReward(UIArborDay *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  UIWidgetImage *pUVar10;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  long lVar11;
  ArborDayTotalRewardItem *this_02;
  undefined8 uVar12;
  int *piVar13;
  ulong uVar14;
  Image *pIVar15;
  UIWidgetImage *pUVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  Insets aIStack_28 [16];
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  long local_8;
  
  uVar18 = 0;
  iVar17 = 0;
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_18,"UIImage_Tab2_BG1");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  (**(code **)(*(long *)pUVar10 + 0x80))(pUVar10,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  iVar2 = FUN_03a22530(0xf);
  iVar3 = FUN_03a22530(10);
  iVar4 = FUN_03a22530(0x1e);
  iVar20 = *(int *)(pUVar10 + 0x50);
  iVar5 = FUN_03a22530(200);
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar3,iVar20 - iVar4,iVar5);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_28);
  uVar19 = 0;
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_28);
  iVar2 = FUN_03a22530(0x82);
  uVar6 = FUN_03a22530(0x5a);
  lVar11 = FUN_03a207a8(*(undefined8 *)(this + 0x1a0),*(undefined8 *)(this + 0x1a8));
  iVar20 = iVar17;
  if (lVar11 != 0) {
    do {
      Sexy::Insets::Insets((Insets *)&local_18);
      iVar17 = (int)uVar19 >> 1;
      if ((uVar18 & 1) == 0) {
        iVar3 = FUN_03a22530(100);
        local_18 = iVar17 * (iVar3 + iVar2);
        local_14 = FUN_03a22530((uint)uVar18 & 1);
      }
      else {
        iVar3 = FUN_03a22530(0x73);
        iVar4 = FUN_03a22530(100);
        local_18 = iVar3 + iVar17 * (iVar4 + iVar2);
        local_14 = FUN_03a22530(0x6e);
      }
      local_10 = iVar2;
      local_c = uVar6;
      this_02 = ::operator_new(0x118);
      ArborDayTotalRewardItem::ArborDayTotalRewardItem(this_02);
      (**(code **)(*(long *)this_02 + 0x1a0))(this_02,(string *)&local_18);
      uVar12 = FUN_03a207b4(*(undefined8 *)(this + 0x1a0),uVar18);
      (**(code **)(*(long *)this_02 + 0x310))(this_02,uVar19,uVar12);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
      iVar5 = local_10;
      uVar12 = *(undefined8 *)(this + 0x1a0);
      iVar17 = local_10 + local_18;
      iVar3 = *(int *)(this + 0x164);
      piVar13 = (int *)FUN_03a207b4(uVar12,uVar18);
      iVar4 = *piVar13;
      if (iVar3 < iVar4) {
        if (uVar18 == 0) {
          iVar5 = 0;
        }
        else {
          piVar13 = (int *)FUN_03a207b4(uVar12,uVar18 - 1);
          iVar5 = *piVar13;
        }
        if (iVar3 < iVar5) {
          uVar14 = FUN_03a207a8(uVar12,*(undefined8 *)(this + 0x1a8));
        }
        else {
          iVar9 = FUN_03a22530(0x73);
          iVar4 = iVar4 - iVar5;
          iVar1 = 0;
          if (iVar4 != 0) {
            iVar1 = (iVar9 * (iVar3 - iVar5)) / iVar4;
          }
          uVar14 = FUN_03a207a8(uVar12,*(undefined8 *)(this + 0x1a8));
          iVar20 = iVar20 + iVar1;
        }
      }
      else {
        iVar3 = iVar5 / 2 + *(int *)(this_02 + 0x48);
        uVar14 = FUN_03a207a8(uVar12,*(undefined8 *)(this + 0x1a8));
        iVar20 = iVar3 + iVar5 / 2;
        if (uVar18 != uVar14 - 1) {
          iVar20 = iVar3;
        }
      }
      uVar18 = uVar18 + 1;
      uVar19 = uVar18 & 0xffffffff;
    } while (uVar18 < uVar14);
  }
  *(int *)(this_01 + 0x50) = iVar17;
  pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac3438);
  pUVar16 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(pUVar16,pIVar15);
  local_18 = 3;
  UIWidgetImage::SetImageType(pUVar16,(string *)&local_18,0.0);
  uVar6 = FUN_03a22530(0);
  uVar7 = FUN_03a22530(0x5a);
  uVar8 = FUN_03a22530(0x14);
  (**(code **)(*(long *)pUVar16 + 0x198))(pUVar16,uVar6,uVar7,iVar17,uVar8);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,pUVar16);
  pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac3780);
  pUVar16 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(pUVar16,pIVar15);
  local_18 = 3;
  UIWidgetImage::SetImageType(pUVar16,(string *)&local_18,0.0);
  uVar6 = FUN_03a22530(0);
  uVar7 = FUN_03a22530(0x5a);
  uVar8 = FUN_03a22530(0x14);
  (**(code **)(*(long *)pUVar16 + 0x198))(pUVar16,uVar6,uVar7,iVar20,uVar8);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,pUVar16);
  (**(code **)(*(long *)pUVar10 + 0x60))(pUVar10,this_00);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArborDay::InitPersonReward() */

void __thiscall UIArborDay::InitPersonReward(UIArborDay *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  UIWidgetImage *pUVar14;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  Image *pIVar15;
  UIWidgetImage *this_02;
  UIWidgetImage *this_03;
  undefined8 uVar16;
  ulong uVar17;
  ArborDayRewardItem *this_04;
  long lVar18;
  ActivityTypeID *pAVar19;
  UIWidgetText *this_05;
  int *piVar20;
  code *pcVar21;
  undefined1 uVar22;
  int iVar23;
  ulong uVar24;
  int iVar25;
  int iVar26;
  string asStack_38 [8];
  wstring awStack_30 [8];
  Insets aIStack_28 [8];
  undefined4 local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  iVar23 = 0;
  local_8 = ___stack_chk_guard;
  iVar26 = 0;
  std::string::string((string *)&local_18,"UIImage_Tab2_BG2");
  iVar11 = 0;
  pUVar14 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  (**(code **)(*(long *)pUVar14 + 0x80))(pUVar14,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  iVar4 = FUN_03a22530(0xf);
  iVar5 = FUN_03a22530(8);
  iVar6 = FUN_03a22530(0x1e);
  Sexy::Insets::Insets
            (aIStack_28,iVar4,iVar5,*(int *)(pUVar14 + 0x50) - iVar6,
             *(int *)(pUVar14 + 0x54) - iVar5);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_28);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_28);
  iVar4 = FUN_03a22530(10);
  iVar5 = FUN_03a22530(0x46);
  iVar6 = FUN_03a22530(0x32);
  pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac3438);
  this_02 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_02,pIVar15);
  local_18 = 3;
  UIWidgetImage::SetImageType(this_02,(string *)&local_18,0.0);
  uVar7 = FUN_03a22530(0);
  uVar8 = FUN_03a22530(0x36);
  uVar10 = local_20;
  uVar9 = FUN_03a22530(0x14);
  (**(code **)(*(long *)this_02 + 0x198))(this_02,uVar7,uVar8,uVar10,uVar9);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
  pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac3780);
  this_03 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_03,pIVar15);
  local_18 = 3;
  UIWidgetImage::SetImageType(this_03,(string *)&local_18,0.0);
  uVar10 = FUN_03a22530(0);
  uVar7 = FUN_03a22530(0x36);
  uVar8 = FUN_03a22530(0x14);
  (**(code **)(*(long *)this_03 + 0x198))(this_03,uVar10,uVar7,local_20,uVar8);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,this_03);
  uVar16 = *(undefined8 *)(this + 0x1b8);
  for (uVar24 = 0; uVar17 = FUN_03a207a8(uVar16,*(undefined8 *)(this + 0x1c0)), uVar24 < uVar17;
      uVar24 = uVar24 + 1) {
    iVar11 = FUN_03a22530(0);
    Sexy::Insets::Insets((Insets *)&local_18,iVar26,iVar11,iVar5,iVar6);
    this_04 = ::operator_new(0x118);
    ArborDayRewardItem::ArborDayRewardItem(this_04);
    (**(code **)(*(long *)this_04 + 0x1a0))(this_04,(string *)&local_18);
    uVar16 = *(undefined8 *)(this + 0x1b8);
    bVar3 = (int)uVar24 != 0;
    lVar18 = FUN_03a207a8(uVar16,*(undefined8 *)(this + 0x1c0));
    uVar22 = bVar3;
    if (uVar24 == lVar18 - 1U) {
      uVar22 = 2;
    }
    uVar16 = FUN_03a207b4(uVar16,uVar24);
    (**(code **)(*(long *)this_04 + 0x310))(this_04,uVar24 & 0xffffffff,uVar16,uVar22);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_04);
    iVar11 = local_18 + local_10;
    pAVar19 = (ActivityTypeID *)FUN_03a207b4(*(undefined8 *)(this + 0x1b8),uVar24);
    std::to_string<ActivityTypeID>(pAVar19);
    Sexy::ToWString(asStack_38);
    this_05 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(this_05,awStack_30);
    FUN_05476c50(awStack_30);
    std::string::~string(asStack_38);
    iVar2 = local_18;
    iVar12 = FUN_03a22530(0x20);
    iVar1 = local_14 + local_c;
    iVar13 = FUN_03a22530(4);
    iVar25 = local_10;
    uVar10 = FUN_03a22530(0x16);
    (**(code **)(*(long *)this_05 + 0x198))(this_05,iVar2 - iVar12,iVar1 + iVar13,iVar25,uVar10);
    uVar16 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
    FUN_03a20724(this_05 + 0xe8,uVar16);
    FUN_03a2072c(this_05 + 0xe0,4);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_05);
    uVar16 = *(undefined8 *)(this + 0x1b8);
    iVar1 = *(int *)(this + 0x168);
    piVar20 = (int *)FUN_03a207b4(uVar16,uVar24);
    iVar2 = *piVar20;
    if (iVar1 < iVar2) {
      if (bVar3) {
        piVar20 = (int *)FUN_03a207b4(uVar16,uVar24 - 1);
        iVar25 = *piVar20;
      }
      else {
        iVar25 = 0;
      }
      if (iVar25 <= iVar1) {
        iVar13 = FUN_03a22530(0x55);
        iVar2 = iVar2 - iVar25;
        iVar12 = 0;
        if (iVar2 != 0) {
          iVar12 = (iVar13 * (iVar1 - iVar25)) / iVar2;
        }
        iVar23 = iVar23 + iVar12;
      }
    }
    else {
      iVar23 = *(int *)(this_04 + 0x48) + local_10;
    }
    iVar26 = iVar26 + iVar4 + iVar5;
  }
  lVar18 = *(long *)pUVar14;
  *(int *)(this_01 + 0x50) = iVar11;
  *(int *)(this_02 + 0x50) = iVar11;
  pcVar21 = *(code **)(lVar18 + 0x60);
  *(int *)(this_03 + 0x50) = iVar23;
  (*pcVar21)(pUVar14,this_00);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArborDay::Refresh(int, int) */

void __thiscall UIArborDay::Refresh(UIArborDay *this,int param_1,int param_2)

{
  UIWidgetText *pUVar1;
  string asStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"UIText_PrePlant");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  TodStringTranslate(L"[ARBORDAY_PLAYER_PROGRESS_DESC]");
  TodReplaceNumberString(awStack_18,L"{NUMS}",param_2);
  PuzzleTip::SetTip(pUVar1,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_20,"UIText_Process");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  TodStringTranslate(L"[ARBORDAY_SERVER_PROGRESS_DESC]");
  TodReplaceNumberString(awStack_18,L"{NUMS}",param_1);
  PuzzleTip::SetTip(pUVar1,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  std::string::~string(asStack_20);
  nop();
  *(int *)(this + 0x164) = param_1;
  *(int *)(this + 0x168) = param_2;
  InitTotalReward(this);
  InitPersonReward(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIArborDay::UIArborDay() */

void __thiscall UIArborDay::UIArborDay(UIArborDay *this)

{
  UISingletonDialog<UIArborDay>::UISingletonDialog((UISingletonDialog<UIArborDay> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined4 *)(this + 0x140) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_066ff710;
  *(undefined **)(this + 0xd8) = &DAT_066ffa70;
  *(undefined ***)(this + 0x138) = &PTR__UIArborDay_066ffab8;
  ArborDayData::ArborDayData((ArborDayData *)(this + 0x148));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x250));
  *(undefined8 *)(this + 0x268) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArborDay::InitTask() */

void __thiscall UIArborDay::InitTask(UIArborDay *this)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UIWidgetImage *pUVar5;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  long *plVar6;
  long lVar7;
  long *extraout_x0;
  undefined8 *puVar8;
  ulong uVar9;
  code *pcVar10;
  ulong uVar11;
  int iVar12;
  Insets aIStack_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"UIImage_Task");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  (**(code **)(*(long *)pUVar5 + 0x80))(pUVar5,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  iVar2 = FUN_03a22530(0x14);
  iVar3 = FUN_03a22530(0x28);
  Sexy::Insets::Insets
            (aIStack_48,iVar2,iVar2,*(int *)(pUVar5 + 0x50) - iVar3,*(int *)(pUVar5 + 0x54) - iVar3)
  ;
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_48);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,0,0,local_40,local_3c);
  iVar3 = FUN_03a22530(0);
  iVar2 = *(int *)(this_00 + 0x50);
  iVar12 = (int)((float)(*(int *)(this_00 + 0x54) + iVar3 * -2) * 0.45454544);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  iVar4 = Sexy::LazySingleton<ArborDayTaskManager>::GetInstancePtr();
  HappyVaseBreakerTaskManager::GetTasksByGroupID(iVar4 + 8,true);
  std::vector<GeneralTask*,std::allocator<GeneralTask*>>::operator=
            ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_38,(vector *)asStack_20);
  std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
            ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)asStack_20);
  uVar11 = 0;
  while( true ) {
    uVar1 = local_38;
    uVar9 = FUN_03a207c4(local_38,local_30);
    if (uVar9 <= uVar11) break;
    plVar6 = (long *)FUN_03a207d0(uVar1,uVar11);
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar6 + 0x20));
    lVar7 = (**(code **)(*plVar6 + 0x58))();
    FUN_03a206c4(*(undefined8 *)(lVar7 + 0x18));
    nop();
    iVar4 = FUN_03a22530(5);
    Sexy::Insets::Insets
              ((Insets *)asStack_20,iVar3,iVar3 + (iVar4 + iVar12) * (int)uVar11,iVar2,iVar12);
    (**(code **)(*extraout_x0 + 0x1a0))(extraout_x0,asStack_20);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,extraout_x0);
    puVar8 = (undefined8 *)FUN_03a207d0(local_38,uVar11);
    (**(code **)(*extraout_x0 + 0x318))(extraout_x0,*puVar8);
    uVar11 = uVar11 + 1;
  }
  iVar2 = FUN_03a22530(5);
  pcVar10 = *(code **)(*(long *)pUVar5 + 0x60);
  *(int *)(this_01 + 0x54) = iVar3 + (iVar2 + iVar12) * (int)uVar9;
  (*pcVar10)(pUVar5,this_00);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
            ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIArborDay::~UIArborDay() */

void __thiscall UIArborDay::~UIArborDay(UIArborDay *this)

{
  *(undefined ***)this = &PTR_GetClass_066ff710;
  *(undefined **)(this + 0xd8) = &DAT_066ffa70;
  *(undefined ***)(this + 0x138) = &PTR__UIArborDay_066ffab8;
  std::vector<ArborDayBubbleWidget*,std::allocator<ArborDayBubbleWidget*>>::~vector
            ((vector<ArborDayBubbleWidget*,std::allocator<ArborDayBubbleWidget*>> *)(this + 0x250));
  ArborDayData::~ArborDayData((ArborDayData *)(this + 0x148));
  UISingletonDialog<UIArborDay>::~UISingletonDialog((UISingletonDialog<UIArborDay> *)this);
  return;
}


/* non-virtual thunk to UIArborDay::~UIArborDay() */

void __thiscall UIArborDay::~UIArborDay(UIArborDay *this)

{
  ~UIArborDay(this + -0x138);
  return;
}


/* UIArborDay::~UIArborDay() */

void __thiscall UIArborDay::~UIArborDay(UIArborDay *this)

{
  ~UIArborDay(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIArborDay::~UIArborDay() */

void __thiscall UIArborDay::~UIArborDay(UIArborDay *this)

{
  ~UIArborDay(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArborDay::InitBundle() */

void __thiscall UIArborDay::InitBundle(UIArborDay *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UIWidgetImage *pUVar5;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  ArborPresentData *pAVar6;
  TemplateBundleWidget *this_02;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  undefined8 uVar10;
  ulong uVar11;
  Insets aIStack_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  string asStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_30,"UIImage_Bundle");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  iVar2 = FUN_03a22530(0x14);
  iVar3 = FUN_03a22530(0x28);
  Sexy::Insets::Insets
            (aIStack_40,iVar2,iVar2,*(int *)(pUVar5 + 0x50) - iVar3,*(int *)(pUVar5 + 0x54) - iVar3)
  ;
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_40);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,0,0,local_38,local_34);
  iVar2 = FUN_03a22530(0);
  uVar1 = *(undefined4 *)(this_00 + 0x54);
  iVar3 = (int)((float)*(int *)(this_00 + 0x50) * 0.3030303);
  uVar11 = 0;
  while( true ) {
    uVar10 = *(undefined8 *)(this + 0x188);
    uVar8 = FUN_03a207d8(uVar10,*(undefined8 *)(this + 400));
    if (uVar8 <= uVar11) break;
    pAVar6 = (ArborPresentData *)FUN_03a20808(uVar10,uVar11);
    ArborPresentData::ArborPresentData((ArborPresentData *)asStack_30,pAVar6);
    this_02 = ::operator_new(0x140);
    ArborDayBundleWidget::ArborDayBundleWidget((ArborDayBundleWidget *)this_02,asStack_30);
    PlantWarsStarRewardData::~PlantWarsStarRewardData((PlantWarsStarRewardData *)asStack_30);
    iVar4 = FUN_03a22530(0x19);
    (**(code **)(*(long *)this_02 + 0x198))
              (this_02,iVar2 + (iVar4 + iVar3) * (int)uVar11,iVar2,iVar3,uVar1);
    (**(code **)(*(long *)this_02 + 0x318))(this_02,uVar11 & 0xffffffff);
    lVar7 = FUN_03a20808(*(undefined8 *)(this + 0x188),uVar11);
    lVar7 = FUN_03a20740(*(undefined8 *)(lVar7 + 8),0);
    TemplateBundleWidget::SetReward(this_02,0,*(int *)(lVar7 + 4));
    lVar7 = FUN_03a20808(*(undefined8 *)(this + 0x188),uVar11);
    TemplateBundleWidget::SetLimit(this_02,*(int *)(lVar7 + 0x20));
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
    uVar11 = uVar11 + 1;
  }
  iVar4 = FUN_03a22530(0x19);
  pcVar9 = *(code **)(*(long *)pUVar5 + 0x60);
  *(int *)(this_01 + 0x50) = iVar2 + (iVar4 + iVar3) * (int)uVar8;
  (*pcVar9)(pUVar5,this_00);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIArborDay::SetBubbles(std::vector<ArborDayBonus, std::allocator<ArborDayBonus> > const&) */

void __thiscall UIArborDay::SetBubbles(UIArborDay *this,vector *param_1)

{
  std::vector<ArborDayBonus,std::allocator<ArborDayBonus>>::operator=
            ((vector<ArborDayBonus,std::allocator<ArborDayBonus>> *)(this + 0x170),param_1);
  RefreshBubble(this);
  return;
}


/* UIArborDay::GetData() */

ArborDayData * UIArborDay::GetData(void)

{
  long in_x0;
  ArborDayData *in_x8;
  
  ArborDayData::ArborDayData(in_x8,(ArborDayData *)(in_x0 + 0x148));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArborDay::RequestHarvest() */

void __thiscall UIArborDay::RequestHarvest(UIArborDay *this)

{
  undefined8 uVar1;
  DNetwork *this_00;
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2576];
  string asStack_2d8 [720];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"t");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  local_d48[0] = 3;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03a221f4(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_2d8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArborDay::HarvestAllRewards(UIMessageBox*, int) */

void __thiscall UIArborDay::HarvestAllRewards(UIArborDay *this,UIMessageBox *param_1,int param_2)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x170));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x170));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_18);
    }
    RequestHarvest(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArborDay::InitMain() */

void __thiscall UIArborDay::InitMain(UIArborDay *this)

{
  bool bVar1;
  UIWidgetAnim *pUVar2;
  UIWidgetImage *pUVar3;
  UIWidgetText *pUVar4;
  Widget *pWVar5;
  ArborDayBubbleWidget *this_00;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  string asStack_20 [8];
  wstring awStack_18 [8];
  ArborDayBubbleWidget *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SetCurrentKettle(this,*(int *)(this + 0x15c));
  uVar8 = 0;
  std::string::string((string *)&local_10,"UIAnim_Water");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,(string *)&local_10);
  (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,0);
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"UIImage_Kettle");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_10);
  pUVar3[0x6d] = (UIWidgetImage)0x0;
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"UIImage_Kettle_0");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_10);
  pUVar3[0x6d] = (UIWidgetImage)0x0;
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"UIText_Water");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_10);
  pUVar4[0x6d] = (UIWidgetText)0x0;
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"UIText_Water_0");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_10);
  pUVar4[0x6d] = (UIWidgetText)0x0;
  std::string::~string((string *)&local_10);
  nop();
  std::string::string(asStack_20,"UIText_PrePlant");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  TodStringTranslate(L"[ARBORDAY_PLAYER_PROGRESS_DESC]");
  TodReplaceNumberString(awStack_18,L"{NUMS}",*(int *)(this + 0x168));
  PuzzleTip::SetTip(pUVar4,(string *)&local_10);
  FUN_05476c50((string *)&local_10);
  FUN_05476c50(awStack_18);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_20,"UIText_Process");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  TodStringTranslate(L"[ARBORDAY_SERVER_PROGRESS_DESC]");
  TodReplaceNumberString(awStack_18,L"{NUMS}",*(int *)(this + 0x164));
  PuzzleTip::SetTip(pUVar4,(string *)&local_10);
  FUN_05476c50((string *)&local_10);
  FUN_05476c50(awStack_18);
  std::string::~string(asStack_20);
  nop();
  SetNextNeed(this,*(int *)(this + 0x160));
  while( true ) {
    iVar7 = (int)uVar8;
    uVar9 = uVar8 & 0xffffffff;
    uVar6 = FUN_03a20760(*(undefined8 *)(this + 0x170),*(undefined8 *)(this + 0x178));
    bVar1 = uVar6 <= uVar8;
    uVar8 = uVar8 + 1;
    if (bVar1) break;
    Sexy::StrFormat("Widget_Bubble%d",(string *)&local_10,uVar9);
    pWVar5 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)&local_10);
    std::string::~string((string *)&local_10);
    Sexy::StrFormat("UIAnim_Bubble%d",(string *)&local_10,uVar9);
    UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,(string *)&local_10);
    std::string::~string((string *)&local_10);
    this_00 = ::operator_new(0xe8);
    ArborDayBubbleWidget::ArborDayBubbleWidget(this_00,iVar7);
    local_10 = this_00;
    (**(code **)(*(long *)this_00 + 0x198))
              (this_00,0,0,*(undefined4 *)(pWVar5 + 0x50),*(undefined4 *)(pWVar5 + 0x54));
    (**(code **)(*(long *)pWVar5 + 0x60))(pWVar5,local_10);
    std::vector<ArborDayBubbleWidget*,std::allocator<ArborDayBubbleWidget*>>::push_back
              ((vector<ArborDayBubbleWidget*,std::allocator<ArborDayBubbleWidget*>> *)(this + 0x250)
               ,&local_10);
  }
  RefreshBubble(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArborDay::Init() */

void __thiscall UIArborDay::Init(UIArborDay *this)

{
  char cVar1;
  int iVar2;
  UIWidgetAnim *pUVar3;
  string asStack_90 [8];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_90,"UIAnim_Face");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_90);
  std::string::~string(asStack_90);
  nop();
  if (pUVar3 != (UIWidgetAnim *)0x0) {
    (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,0);
  }
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03a20734(local_80);
  if (((cVar1 != '\0') && (local_70 != '\0')) &&
     (cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0x148)), cVar1 != '\0'))
  {
    InitMain(this);
    InitTask(this);
    InitBundle(this);
    InitTotalReward(this);
    InitPersonReward(this);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArborDay::OnCreate() */

void __thiscall UIArborDay::OnCreate(UIArborDay *this)

{
  UIWidgetBackground *pUVar1;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined4 *)(pUVar1 + 0x48) = 0;
  *(undefined4 *)(pUVar1 + 0x4c) = 0;
  lVar2 = Sexy::LazySingleton<ArborDayTaskManager>::GetInstancePtr();
  GeneralTaskManager::Initialize((GeneralTaskManager *)(lVar2 + 8));
  Init(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

