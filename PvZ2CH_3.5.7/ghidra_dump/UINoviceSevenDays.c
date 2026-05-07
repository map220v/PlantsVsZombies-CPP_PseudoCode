// Class: UINoviceSevenDays


/* UINoviceSevenDays::ScrollTargetReached(Sexy::ScrollWidget*) */

void UINoviceSevenDays::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINoviceSevenDays::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UINoviceSevenDays::ScrollTargetReached(UINoviceSevenDays *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x140));
  return;
}


/* UINoviceSevenDays::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UINoviceSevenDays::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINoviceSevenDays::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UINoviceSevenDays::ScrollTargetInterrupted(UINoviceSevenDays *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x140));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINoviceSevenDays::GetLayoutName() */

void __thiscall UINoviceSevenDays::GetLayoutName(UINoviceSevenDays *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UINoviceSevenDays");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UINoviceSevenDays::ButtonDepress(int) */

void __thiscall UINoviceSevenDays::ButtonDepress(UINoviceSevenDays *this,int param_1)

{
  if (param_1 != 0x58) {
    return;
  }
  UISingletonDialog<UINoviceSevenDays>::CloseDialog();
  return;
}


/* non-virtual thunk to UINoviceSevenDays::ButtonDepress(int) */

void __thiscall UINoviceSevenDays::ButtonDepress(UINoviceSevenDays *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINoviceSevenDays::RefreshProgressBar() */

void __thiscall UINoviceSevenDays::RefreshProgressBar(UINoviceSevenDays *this)

{
  UIWidgetImage *pUVar1;
  UIWidgetImage *this_00;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)local_10,"UIImage_Progress_Back");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_10);
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"UIImage_Progress_Bar");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_10);
  std::string::~string((string *)local_10);
  nop();
  if (*(int *)(this + 0x148) < 0x23) {
    if (*(int *)(this + 0x148) < 3) {
      local_10[0] = 2;
      UIWidgetImage::SetImageType(this_00,(string *)local_10,0.0);
    }
    else {
      local_10[0] = 5;
      UIWidgetImage::SetImageType(this_00,(string *)local_10,0.0);
    }
    *(int *)(this_00 + 0x50) = (*(int *)(pUVar1 + 0x50) * *(int *)(this + 0x148)) / 0x23;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINoviceSevenDays::UpdateIntegral() */

void __thiscall UINoviceSevenDays::UpdateIntegral(UINoviceSevenDays *this)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  iVar1 = *(int *)(this + 0x148);
  uVar5 = 0;
  uVar6 = *(undefined8 *)(this + 0x150);
  uVar2 = FUN_03a3d520(uVar6,*(undefined8 *)(this + 0x158));
  while (uVar4 = uVar5, uVar5 < uVar2) {
    while( true ) {
      uVar5 = uVar4 + 1;
      puVar3 = (undefined8 *)FUN_03a3d52c(uVar6,uVar4);
      if ((PVZ1ModeAchievementRewardButton *)*puVar3 == (PVZ1ModeAchievementRewardButton *)0x0)
      break;
      PVZ1ModeAchievementRewardButton::UpdateButtonState
                ((PVZ1ModeAchievementRewardButton *)*puVar3,iVar1 / 5);
      uVar6 = *(undefined8 *)(this + 0x150);
      uVar2 = FUN_03a3d520(uVar6,*(undefined8 *)(this + 0x158));
      uVar4 = uVar5;
      if (uVar2 <= uVar5) goto LAB_03a3ea80;
    }
  }
LAB_03a3ea80:
  RefreshProgressBar(this);
  return;
}


/* UINoviceSevenDays::AddIntegral(int) */

void __thiscall UINoviceSevenDays::AddIntegral(UINoviceSevenDays *this,int param_1)

{
  NoviceSevenDaysManager *this_00;
  
  *(int *)(this + 0x148) = *(int *)(this + 0x148) + 1;
  UpdateIntegral(this);
  this_00 = (NoviceSevenDaysManager *)Sexy::LazySingleton<NoviceSevenDaysManager>::GetInstancePtr();
  NoviceSevenDaysManager::ObtainIntegral(this_00,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINoviceSevenDays::UINoviceSevenDays() */

void __thiscall UINoviceSevenDays::UINoviceSevenDays(UINoviceSevenDays *this)

{
  LawnApp *pLVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UINoviceSevenDays>::UISingletonDialog
            ((UISingletonDialog<UINoviceSevenDays> *)this);
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x138));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x140));
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined ***)this = &PTR_GetClass_067057e0;
  *(undefined **)(this + 0xd8) = &DAT_06705b40;
  *(undefined **)(this + 0x138) = &DAT_06705b88;
  *(undefined ***)(this + 0x140) = &PTR__UINoviceSevenDays_06705ba0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ActivityCommon");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_GLLottery");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_Lottery_Result");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"RenderEffects");
  cVar2 = LawnApp::CanLoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"RenderEffects");
    LawnApp::LoadGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Material");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigAvatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadshotFrame");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINoviceSevenDays::~UINoviceSevenDays() */

void __thiscall UINoviceSevenDays::~UINoviceSevenDays(UINoviceSevenDays *this)

{
  LawnApp *pLVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_067057e0;
  *(undefined **)(this + 0xd8) = &DAT_06705b40;
  *(undefined **)(this + 0x138) = &DAT_06705b88;
  *(undefined ***)(this + 0x140) = &PTR__UINoviceSevenDays_06705ba0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ActivityCommon");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_GLLottery");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_Lottery_Result");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"RenderEffects");
  cVar2 = LawnApp::CanLoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"RenderEffects");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Material");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadshotFrame");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::vector<NoviceSevenDaysRewardButton*,std::allocator<NoviceSevenDaysRewardButton*>>::~vector
            ((vector<NoviceSevenDaysRewardButton*,std::allocator<NoviceSevenDaysRewardButton*>> *)
             (this + 0x150));
  UISingletonDialog<UINoviceSevenDays>::~UISingletonDialog
            ((UISingletonDialog<UINoviceSevenDays> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINoviceSevenDays::~UINoviceSevenDays() */

void __thiscall UINoviceSevenDays::~UINoviceSevenDays(UINoviceSevenDays *this)

{
  ~UINoviceSevenDays(this + -0x140);
  return;
}


/* UINoviceSevenDays::~UINoviceSevenDays() */

void __thiscall UINoviceSevenDays::~UINoviceSevenDays(UINoviceSevenDays *this)

{
  ~UINoviceSevenDays(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UINoviceSevenDays::~UINoviceSevenDays() */

void __thiscall UINoviceSevenDays::~UINoviceSevenDays(UINoviceSevenDays *this)

{
  ~UINoviceSevenDays(this + -0x140);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINoviceSevenDays::InitTasks(NoviceSevenDaysData const&) */

void __thiscall UINoviceSevenDays::InitTasks(UINoviceSevenDays *this,NoviceSevenDaysData *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  Widget *pWVar9;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  long *plVar10;
  long lVar11;
  NoviceSevenDaysTaskWidget *this_02;
  undefined8 *puVar12;
  ulong uVar13;
  UIWidgetImage *pUVar14;
  UIWidgetText *pUVar15;
  code *pcVar16;
  ulong uVar17;
  uint uVar18;
  Insets aIStack_40 [16];
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar18 = 0;
  do {
    uVar1 = uVar18 + 1;
    Sexy::StrFormat("Widget_Task_Back%d",(string *)&local_20,(ulong)uVar1);
    pWVar9 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)&local_20);
    std::string::~string((string *)&local_20);
    if (pWVar9 != (Widget *)0x0) {
      (**(code **)(*(long *)pWVar9 + 0x80))(pWVar9,1,1);
      this_00 = ::operator_new(0x248);
      PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
      iVar3 = FUN_03a3db80(10);
      iVar4 = FUN_03a3db80(0xf);
      iVar5 = FUN_03a3db80(0x14);
      iVar8 = *(int *)(pWVar9 + 0x50);
      iVar6 = FUN_03a3db80(0x1e);
      Sexy::Insets::Insets(aIStack_40,iVar3,iVar4,iVar8 - iVar5,*(int *)(pWVar9 + 0x54) - iVar6);
      (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_40);
      Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
      this_01 = ::operator_new(0xd8);
      Sexy::Widget::Widget(this_01);
      (**(code **)(*(long *)this_01 + 0x198))
                (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
      uVar7 = FUN_03a3db80(8);
      iVar8 = *(int *)(this_01 + 0x50);
      iVar4 = (int)((float)*(int *)(this_01 + 0x54) * 0.4);
      iVar3 = Sexy::LazySingleton<NoviceSevenDaysManager>::GetInstancePtr();
      HappyVaseBreakerTaskManager::GetTasksByGroupID(iVar3 + 8,SUB41(uVar1,0));
      uVar17 = 0;
      while( true ) {
        uVar2 = local_20;
        uVar13 = FUN_03a3d570(local_20,local_18);
        if (uVar13 <= uVar17) break;
        plVar10 = (long *)FUN_03a3d57c(uVar2,uVar17);
        plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar10 + 0x20));
        lVar11 = (**(code **)(*plVar10 + 0x58))();
        FUN_03a3d480(*(undefined8 *)(lVar11 + 0x18));
        nop();
        iVar3 = FUN_03a3db80(uVar7);
        Sexy::Insets::Insets(aIStack_30,0,(iVar3 + iVar4) * (int)uVar17,iVar8,iVar4);
        (**(code **)(*(long *)this_02 + 0x1a0))(this_02,aIStack_30);
        (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
        puVar12 = (undefined8 *)FUN_03a3d57c(local_20,uVar17);
        NoviceSevenDaysTaskWidget::SetTask(this_02,(GeneralTask *)*puVar12);
        uVar17 = uVar17 + 1;
      }
      iVar8 = FUN_03a3db80(uVar7);
      pcVar16 = *(code **)(*(long *)this_00 + 0x60);
      *(int *)(this_01 + 0x54) = (iVar8 + iVar4) * (int)uVar13;
      (*pcVar16)(this_00,this_01);
      (**(code **)(*(long *)pWVar9 + 0x60))(pWVar9,this_00);
      std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
                ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_20);
    }
    Sexy::StrFormat("UIImage_Task_Mask%d",(string *)&local_20,(ulong)uVar1);
    pUVar14 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
    std::string::~string((string *)&local_20);
    if (pUVar14 != (UIWidgetImage *)0x0) {
      if ((int)uVar18 < *(int *)(param_1 + 0x14)) {
        (**(code **)(*(long *)pUVar14 + 0x158))(pUVar14,0);
      }
      else {
        Sexy::StrFormat("UIText_Task_Mask%d",(string *)&local_20,(ulong)uVar1);
        pUVar15 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_20);
        std::string::~string((string *)&local_20);
        FUN_05478178((string *)&local_20,L"[NOVICESEVENDAYS_UNLOCK]",aIStack_40);
        TodReplaceNumberString((wstring *)&local_20,L"{NUM}",uVar1 - *(int *)(param_1 + 0x14));
        FUN_05476c50((string *)&local_20);
        nop();
        PuzzleTip::SetTip(pUVar15,aIStack_30);
        FUN_05476c50(aIStack_30);
      }
    }
    uVar18 = uVar1;
  } while (uVar1 != 7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINoviceSevenDays::InitReward(NoviceSevenDaysData const&) */

void __thiscall UINoviceSevenDays::InitReward(UINoviceSevenDays *this,NoviceSevenDaysData *param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UIWidgetImage *pUVar5;
  NoviceSevenDaysRewardDisplay *this_00;
  NoviceSevenDaysIntegralReward *pNVar6;
  NoviceSevenDaysRewardButton *this_01;
  ulong uVar7;
  code *pcVar8;
  int local_24;
  NoviceSevenDaysRewardButton *local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<NoviceSevenDaysRewardButton*,std::allocator<NoviceSevenDaysRewardButton*>>::clear
            ((vector<NoviceSevenDaysRewardButton*,std::allocator<NoviceSevenDaysRewardButton*>> *)
             (this + 0x150));
  for (local_24 = 0; iVar1 = local_24,
      uVar7 = FUN_03a3d534(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70)),
      (ulong)(long)iVar1 < uVar7; local_24 = local_24 + 1) {
    uVar3 = FUN_03a3f0ac(*(undefined8 *)(param_1 + 0x50));
    uVar4 = FUN_03a3f0fc(*(undefined8 *)(param_1 + 0x58));
    local_20 = (NoviceSevenDaysRewardButton *)
               std::
               find<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,int>
                         (uVar3,uVar4,&local_24);
    local_18[0] = FUN_03a3f0fc(*(undefined8 *)(param_1 + 0x58));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
    Sexy::StrFormat("UIImage_Reward_Back%d",(string *)local_18,(ulong)(local_24 + 1));
    pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_18);
    std::string::~string((string *)local_18);
    this_00 = ::operator_new(0x120);
    NoviceSevenDaysRewardDisplay::NoviceSevenDaysRewardDisplay(this_00);
    pcVar8 = *(code **)(*(long *)this_00 + 0x1a0);
    Sexy::Insets::Insets((Insets *)local_18,0,0,*(int *)(pUVar5 + 0x50),*(int *)(pUVar5 + 0x54));
    (*pcVar8)(this_00,(string *)local_18);
    pNVar6 = (NoviceSevenDaysIntegralReward *)
             FUN_03a3d564(*(undefined8 *)(param_1 + 0x68),(long)local_24);
    NoviceSevenDaysRewardDisplay::SetReawrd(this_00,pNVar6);
    (**(code **)(*(long *)pUVar5 + 0x60))(pUVar5,this_00);
    this_01 = ::operator_new(0xe0);
    NoviceSevenDaysRewardButton::NoviceSevenDaysRewardButton(this_01);
    pcVar8 = *(code **)(*(long *)this_01 + 0x1a0);
    local_20 = this_01;
    Sexy::Insets::Insets((Insets *)local_18,0,0,*(int *)(pUVar5 + 0x50),*(int *)(pUVar5 + 0x54));
    (*pcVar8)(this_01,(string *)local_18);
    PVZ1ModeAchievementRewardButton::SetData
              ((PVZ1ModeAchievementRewardButton *)local_20,bVar2,local_24);
    (**(code **)(*(long *)pUVar5 + 0x60))(pUVar5,local_20);
    std::vector<NoviceSevenDaysRewardButton*,std::allocator<NoviceSevenDaysRewardButton*>>::
    push_back((vector<NoviceSevenDaysRewardButton*,std::allocator<NoviceSevenDaysRewardButton*>> *)
              (this + 0x150),&local_20);
    Sexy::StrFormat("UIImage_Reward_Finish%d",(string *)local_18,(ulong)(local_24 + 1));
    pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_18);
    std::string::~string((string *)local_18);
    (**(code **)(*(long *)pUVar5 + 0x158))(pUVar5,bVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINoviceSevenDays::InitView() */

void __thiscall UINoviceSevenDays::InitView(UINoviceSevenDays *this)

{
  char cVar1;
  int iVar2;
  ActiveItem aAStack_108 [8];
  undefined4 local_100;
  char local_f0;
  NoviceSevenDaysData aNStack_88 [24];
  undefined4 local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03a3d4e0(local_100);
  if ((cVar1 != '\0') && (local_f0 != '\0')) {
    NoviceSevenDaysData::NoviceSevenDaysData(aNStack_88);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_108,(RtObject *)aNStack_88);
    if (cVar1 != '\0') {
      InitReward(this,aNStack_88);
      InitTasks(this,aNStack_88);
      *(undefined4 *)(this + 0x148) = local_70;
      UpdateIntegral(this);
    }
    NoviceSevenDaysData::~NoviceSevenDaysData(aNStack_88);
  }
  ActiveItem::~ActiveItem(aAStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINoviceSevenDays::OnCreate() */

void __thiscall UINoviceSevenDays::OnCreate(UINoviceSevenDays *this)

{
  char cVar1;
  int iVar2;
  UIWidgetBackground *pUVar3;
  long lVar4;
  TGALogMgr *pTVar5;
  TGANFSLinkageData *__n;
  TGANFSLinkageData aTStack_d8 [40];
  string asStack_b0 [40];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  __n = aTStack_d8;
  std::string::string(asStack_b0,"Background_0");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_b0);
  std::string::~string(asStack_b0);
  nop();
  *(int *)(pUVar3 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar3 + 0x50)) / 2;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03a3d4e0(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    lVar4 = Sexy::LazySingleton<NoviceSevenDaysManager>::GetInstancePtr();
    GeneralTaskManager::Initialize((GeneralTaskManager *)(lVar4 + 8));
    InitView(this);
    TGANFSLinkageData::TGANFSLinkageData(aTStack_d8);
    std::string::append((string *)aTStack_d8,"1",(size_t)__n);
    pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGAArtifactPresentData::TGAArtifactPresentData
              ((TGAArtifactPresentData *)asStack_b0,(TGAArtifactPresentData *)aTStack_d8);
    TGALogMgr::LogNoviceSevenDays(pTVar5,asStack_b0);
    TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)asStack_b0);
    TGANFSLinkageData::~TGANFSLinkageData(aTStack_d8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

