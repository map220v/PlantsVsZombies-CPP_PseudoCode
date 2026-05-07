// Class: UINoviceSevenDaysCollection


/* UINoviceSevenDaysCollection::ScrollTargetReached(Sexy::ScrollWidget*) */

void UINoviceSevenDaysCollection::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINoviceSevenDaysCollection::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UINoviceSevenDaysCollection::ScrollTargetReached
          (UINoviceSevenDaysCollection *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UINoviceSevenDaysCollection::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UINoviceSevenDaysCollection::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINoviceSevenDaysCollection::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UINoviceSevenDaysCollection::ScrollTargetInterrupted
          (UINoviceSevenDaysCollection *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINoviceSevenDaysCollection::GetLayoutName() */

void __thiscall UINoviceSevenDaysCollection::GetLayoutName(UINoviceSevenDaysCollection *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UINoviceSevenDaysCollection");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINoviceSevenDaysCollection::RefreshProgressBar() */

void __thiscall UINoviceSevenDaysCollection::RefreshProgressBar(UINoviceSevenDaysCollection *this)

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
  if (*(int *)(this + 0x140) < 0x23) {
    if (*(int *)(this + 0x140) < 3) {
      local_10[0] = 2;
      UIWidgetImage::SetImageType(this_00,(string *)local_10,0.0);
    }
    else {
      local_10[0] = 5;
      UIWidgetImage::SetImageType(this_00,(string *)local_10,0.0);
    }
    *(int *)(this_00 + 0x50) = (*(int *)(pUVar1 + 0x50) * *(int *)(this + 0x140)) / 0x23;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINoviceSevenDaysCollection::UpdateIntegral() */

void __thiscall UINoviceSevenDaysCollection::UpdateIntegral(UINoviceSevenDaysCollection *this)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  iVar1 = *(int *)(this + 0x140);
  uVar5 = 0;
  uVar6 = *(undefined8 *)(this + 0x148);
  uVar2 = FUN_03a3d520(uVar6,*(undefined8 *)(this + 0x150));
  while (uVar4 = uVar5, uVar5 < uVar2) {
    while( true ) {
      uVar5 = uVar4 + 1;
      puVar3 = (undefined8 *)FUN_03a3d52c(uVar6,uVar4);
      if ((PVZ1ModeAchievementRewardButton *)*puVar3 == (PVZ1ModeAchievementRewardButton *)0x0)
      break;
      PVZ1ModeAchievementRewardButton::UpdateButtonState
                ((PVZ1ModeAchievementRewardButton *)*puVar3,iVar1 / 5);
      uVar6 = *(undefined8 *)(this + 0x148);
      uVar2 = FUN_03a3d520(uVar6,*(undefined8 *)(this + 0x150));
      uVar4 = uVar5;
      if (uVar2 <= uVar5) goto LAB_03a3ed24;
    }
  }
LAB_03a3ed24:
  RefreshProgressBar(this);
  return;
}


/* UINoviceSevenDaysCollection::AddIntegral(int) */

void __thiscall
UINoviceSevenDaysCollection::AddIntegral(UINoviceSevenDaysCollection *this,int param_1)

{
  NoviceSevenDaysManager *this_00;
  
  *(int *)(this + 0x140) = *(int *)(this + 0x140) + 1;
  UpdateIntegral(this);
  this_00 = (NoviceSevenDaysManager *)Sexy::LazySingleton<NoviceSevenDaysManager>::GetInstancePtr();
  NoviceSevenDaysManager::ObtainIntegral(this_00,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINoviceSevenDaysCollection::SwitchLabel(int) */

void __thiscall
UINoviceSevenDaysCollection::SwitchLabel(UINoviceSevenDaysCollection *this,int param_1)

{
  uint uVar1;
  PVZ2UIButton *this_00;
  long *plVar2;
  uint uVar3;
  PVZ2UIImage aPStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 0;
  do {
    uVar1 = uVar3 + 1;
    Sexy::StrFormat("UIButton_%d",asStack_40,(ulong)uVar1);
    this_00 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_40);
    std::string::~string(asStack_40);
    Sexy::StrFormat("Widget_Tab_Content%d",asStack_40,(ulong)uVar1);
    plVar2 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_40);
    std::string::~string(asStack_40);
    if (uVar3 == param_1) {
      PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06ac4810,3);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06ac4810,3);
      PVZ2UIButton::SetDialogStates(this_00,aPStack_78,(PVZ2UIImage *)asStack_40);
      (**(code **)(*plVar2 + 0x158))(plVar2,1);
    }
    else {
      PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06ac4860,3);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06ac4860,3);
      PVZ2UIButton::SetDialogStates(this_00,aPStack_78,(PVZ2UIImage *)asStack_40);
      (**(code **)(*plVar2 + 0x158))(plVar2,0);
    }
    uVar3 = uVar1;
  } while (uVar1 != 7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINoviceSevenDaysCollection::ButtonDepress(int) */

void __thiscall
UINoviceSevenDaysCollection::ButtonDepress(UINoviceSevenDaysCollection *this,int param_1)

{
  if (param_1 == 0x58) {
    UISingletonDialog<UINoviceSevenDaysCollection>::CloseDialog();
    return;
  }
  if (6 < param_1 - 0x6fU) {
    return;
  }
  SwitchLabel(this,param_1 - 0x6fU);
  return;
}


/* non-virtual thunk to UINoviceSevenDaysCollection::ButtonDepress(int) */

void __thiscall
UINoviceSevenDaysCollection::ButtonDepress(UINoviceSevenDaysCollection *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINoviceSevenDaysCollection::UINoviceSevenDaysCollection() */

void __thiscall
UINoviceSevenDaysCollection::UINoviceSevenDaysCollection(UINoviceSevenDaysCollection *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  char cVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UINoviceSevenDaysCollection>::UISingletonDialog
            ((UISingletonDialog<UINoviceSevenDaysCollection> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_06705d10;
  *(undefined **)(this + 0xd8) = &DAT_06706070;
  *(undefined ***)(this + 0x138) = &PTR__UINoviceSevenDaysCollection_067060b8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_ActivityCommon");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_GLLottery");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"Effects_Lottery_Result");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"RenderEffects");
  cVar3 = LawnApp::CanLoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  if (cVar3 != '\0') {
    std::string::string((string *)&local_20,"RenderEffects");
    LawnApp::LoadGroup(pLVar2,(string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
  }
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Fragment_Avatar");
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
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_NewAvatar");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_HeadShot_BigAvatar");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_HeadShot_BigPlant");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_HeadshotFrame");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,NotifyRefreshActivityList);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<UINoviceSevenDaysCollection,void(UINoviceSevenDaysCollection::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINoviceSevenDaysCollection::~UINoviceSevenDaysCollection() */

void __thiscall
UINoviceSevenDaysCollection::~UINoviceSevenDaysCollection(UINoviceSevenDaysCollection *this)

{
  LawnApp *pLVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06705d10;
  *(undefined **)(this + 0xd8) = &DAT_06706070;
  *(undefined ***)(this + 0x138) = &PTR__UINoviceSevenDaysCollection_067060b8;
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
             (this + 0x148));
  UISingletonDialog<UINoviceSevenDaysCollection>::~UISingletonDialog
            ((UISingletonDialog<UINoviceSevenDaysCollection> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINoviceSevenDaysCollection::~UINoviceSevenDaysCollection() */

void __thiscall
UINoviceSevenDaysCollection::~UINoviceSevenDaysCollection(UINoviceSevenDaysCollection *this)

{
  ~UINoviceSevenDaysCollection(this + -0x138);
  return;
}


/* UINoviceSevenDaysCollection::~UINoviceSevenDaysCollection() */

void __thiscall
UINoviceSevenDaysCollection::~UINoviceSevenDaysCollection(UINoviceSevenDaysCollection *this)

{
  ~UINoviceSevenDaysCollection(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UINoviceSevenDaysCollection::~UINoviceSevenDaysCollection() */

void __thiscall
UINoviceSevenDaysCollection::~UINoviceSevenDaysCollection(UINoviceSevenDaysCollection *this)

{
  ~UINoviceSevenDaysCollection(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINoviceSevenDaysCollection::InitTasks(NoviceSevenDaysData const&) */

void __thiscall
UINoviceSevenDaysCollection::InitTasks
          (UINoviceSevenDaysCollection *this,NoviceSevenDaysData *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  PVZ2UIButton *this_00;
  Widget *pWVar7;
  PVZ2UIScrollingWidget *this_01;
  Widget *this_02;
  long *plVar8;
  long lVar9;
  NoviceSevenDaysTaskWidget *this_03;
  undefined8 *puVar10;
  ulong uVar11;
  UIWidgetImage *pUVar12;
  UIWidgetText *pUVar13;
  code *pcVar14;
  ulong uVar15;
  uint uVar16;
  Insets aIStack_40 [16];
  wstring awStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar16 = 0;
  do {
    uVar1 = uVar16 + 1;
    Sexy::StrFormat("UIButton_%d",(string *)&local_20,(ulong)uVar1);
    this_00 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_20);
    std::string::~string((string *)&local_20);
    FUN_05478178(awStack_30,L"[LANTERN_RIDDLES_DAY]",aIStack_40);
    TodReplaceNumberString(awStack_30,L"{DAY}",uVar1);
    PVZ2UIButton::SetLabelText(this_00,(wstring *)&local_20);
    FUN_05476c50((string *)&local_20);
    FUN_05476c50(awStack_30);
    nop();
    Sexy::StrFormat("Widget_Task_Back%d",(string *)&local_20,(ulong)uVar1);
    pWVar7 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)&local_20);
    std::string::~string((string *)&local_20);
    if (pWVar7 != (Widget *)0x0) {
      (**(code **)(*(long *)pWVar7 + 0x80))(pWVar7,1,1);
      this_01 = ::operator_new(0x248);
      PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0x138));
      iVar3 = FUN_03a3db80(0);
      Sexy::Insets::Insets
                (aIStack_40,iVar3,iVar3,*(int *)(pWVar7 + 0x50) - iVar3,
                 *(int *)(pWVar7 + 0x54) - iVar3);
      (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_40);
      Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_01,2);
      this_02 = ::operator_new(0xd8);
      Sexy::Widget::Widget(this_02);
      (**(code **)(*(long *)this_02 + 0x198))
                (this_02,0,0,*(undefined4 *)(this_01 + 0x50),*(undefined4 *)(this_01 + 0x54));
      uVar4 = FUN_03a3db80(6);
      iVar3 = *(int *)(this_02 + 0x50);
      iVar5 = FUN_03a3db80(0x3c);
      iVar6 = Sexy::LazySingleton<NoviceSevenDaysManager>::GetInstancePtr();
      HappyVaseBreakerTaskManager::GetTasksByGroupID(iVar6 + 8,SUB41(uVar1,0));
      uVar15 = 0;
      while( true ) {
        uVar2 = local_20;
        uVar11 = FUN_03a3d570(local_20,local_18);
        if (uVar11 <= uVar15) break;
        plVar8 = (long *)FUN_03a3d57c(uVar2,uVar15);
        plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar8 + 0x20));
        lVar9 = (**(code **)(*plVar8 + 0x58))();
        FUN_03a3d480(*(undefined8 *)(lVar9 + 0x18));
        nop();
        iVar6 = FUN_03a3db80(uVar4);
        Sexy::Insets::Insets((Insets *)awStack_30,0,(iVar6 + iVar5) * (int)uVar15,iVar3,iVar5);
        (**(code **)(*(long *)this_03 + 0x1a0))(this_03,awStack_30);
        (**(code **)(*(long *)this_02 + 0x60))(this_02,this_03);
        puVar10 = (undefined8 *)FUN_03a3d57c(local_20,uVar15);
        NoviceSevenDaysTaskWidget::SetTaskForNewPlayerCollection(this_03,(GeneralTask *)*puVar10);
        uVar15 = uVar15 + 1;
      }
      iVar3 = FUN_03a3db80(uVar4);
      pcVar14 = *(code **)(*(long *)this_01 + 0x60);
      *(int *)(this_02 + 0x54) = (iVar3 + iVar5) * (int)uVar11;
      (*pcVar14)(this_01,this_02);
      (**(code **)(*(long *)pWVar7 + 0x60))(pWVar7,this_01);
      std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
                ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_20);
    }
    Sexy::StrFormat("UIImage_Task_Mask%d",(string *)&local_20,(ulong)uVar1);
    pUVar12 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
    std::string::~string((string *)&local_20);
    if (pUVar12 != (UIWidgetImage *)0x0) {
      if ((int)uVar16 < *(int *)(param_1 + 0x14)) {
        (**(code **)(*(long *)pUVar12 + 0x158))(pUVar12,0);
      }
      else {
        Sexy::StrFormat("UIText_Task_Mask%d",(string *)&local_20,(ulong)uVar1);
        pUVar13 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_20);
        std::string::~string((string *)&local_20);
        FUN_05478178((string *)&local_20,L"[NOVICESEVENDAYS_UNLOCK]",aIStack_40);
        TodReplaceNumberString((wstring *)&local_20,L"{NUM}",uVar1 - *(int *)(param_1 + 0x14));
        FUN_05476c50((string *)&local_20);
        nop();
        PuzzleTip::SetTip(pUVar13,awStack_30);
        FUN_05476c50(awStack_30);
      }
    }
    uVar16 = uVar1;
  } while (uVar1 != 7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINoviceSevenDaysCollection::InitReward(NoviceSevenDaysData const&) */

void __thiscall
UINoviceSevenDaysCollection::InitReward
          (UINoviceSevenDaysCollection *this,NoviceSevenDaysData *param_1)

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
             (this + 0x148));
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
              (this + 0x148),&local_20);
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
/* UINoviceSevenDaysCollection::NotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
UINoviceSevenDaysCollection::NotifyRefreshActivityList
          (UINoviceSevenDaysCollection *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_114;
  undefined8 local_110;
  ActiveItem aAStack_108 [8];
  undefined4 local_100;
  char local_f0;
  undefined8 local_88 [3];
  undefined4 local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    uVar4 = std::set<int,std::less<int>,std::allocator<int>>::begin
                      ((set<int,std::less<int>,std::allocator<int>> *)param_2);
    uVar5 = std::
            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
            end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)param_2);
    local_114 = 0x2a4c;
    local_110 = std::find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>(uVar4,uVar5,&local_114);
    local_88[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_110,(rbtree_iterator *)local_88);
    if (bVar1) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_03a3d4e0(local_100);
      if ((cVar2 != '\0') && (local_f0 != '\0')) {
        NoviceSevenDaysData::NoviceSevenDaysData((NoviceSevenDaysData *)local_88);
        cVar2 = ActiveItem::GetDataSerialized(aAStack_108,(RtObject *)local_88);
        if (cVar2 != '\0') {
          InitTasks(this,(NoviceSevenDaysData *)local_88);
          *(undefined4 *)(this + 0x140) = local_70;
          UpdateIntegral(this);
        }
        NoviceSevenDaysData::~NoviceSevenDaysData((NoviceSevenDaysData *)local_88);
      }
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
/* UINoviceSevenDaysCollection::InitView() */

void __thiscall UINoviceSevenDaysCollection::InitView(UINoviceSevenDaysCollection *this)

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
      *(undefined4 *)(this + 0x140) = local_70;
      UpdateIntegral(this);
      SwitchLabel(this,0);
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
/* UINoviceSevenDaysCollection::OnCreate() */

void __thiscall UINoviceSevenDaysCollection::OnCreate(UINoviceSevenDaysCollection *this)

{
  long lVar1;
  TGALogMgr *pTVar2;
  size_t in_x2;
  TGANFSLinkageData aTStack_58 [40];
  TGAArtifactPresentData aTStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  lVar1 = Sexy::LazySingleton<NoviceSevenDaysManager>::GetInstancePtr();
  GeneralTaskManager::Initialize((GeneralTaskManager *)(lVar1 + 8));
  InitView(this);
  TGANFSLinkageData::TGANFSLinkageData(aTStack_58);
  std::string::append((string *)aTStack_58,"1",in_x2);
  pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAArtifactPresentData::TGAArtifactPresentData(aTStack_30,(TGAArtifactPresentData *)aTStack_58);
  TGALogMgr::LogNoviceSevenDays(pTVar2,aTStack_30);
  TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)aTStack_30);
  TGANFSLinkageData::~TGANFSLinkageData(aTStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

