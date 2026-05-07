// Class: UIDaveTreasure


/* UIDaveTreasure::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIDaveTreasure::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIDaveTreasure::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UIDaveTreasure::ScrollTargetReached(UIDaveTreasure *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x140));
  return;
}


/* UIDaveTreasure::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIDaveTreasure::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIDaveTreasure::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UIDaveTreasure::ScrollTargetInterrupted(UIDaveTreasure *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x140));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDaveTreasure::GetLayoutName() */

void __thiscall UIDaveTreasure::GetLayoutName(UIDaveTreasure *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIDaveTreasure");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDaveTreasure::~UIDaveTreasure() */

void __thiscall UIDaveTreasure::~UIDaveTreasure(UIDaveTreasure *this)

{
  LawnApp *pLVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066f8660;
  *(undefined **)(this + 0xd8) = &DAT_066f89c0;
  *(undefined **)(this + 0x138) = &DAT_066f8a08;
  *(undefined ***)(this + 0x140) = &PTR__UIDaveTreasure_066f8a20;
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
  UISingletonDialog<UIDaveTreasure>::~UISingletonDialog((UISingletonDialog<UIDaveTreasure> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIDaveTreasure::~UIDaveTreasure() */

void __thiscall UIDaveTreasure::~UIDaveTreasure(UIDaveTreasure *this)

{
  ~UIDaveTreasure(this + -0x140);
  return;
}


/* UIDaveTreasure::~UIDaveTreasure() */

void __thiscall UIDaveTreasure::~UIDaveTreasure(UIDaveTreasure *this)

{
  ~UIDaveTreasure(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIDaveTreasure::~UIDaveTreasure() */

void __thiscall UIDaveTreasure::~UIDaveTreasure(UIDaveTreasure *this)

{
  ~UIDaveTreasure(this + -0x140);
  return;
}


/* UIDaveTreasure::GetCurrentProcessIndex() */

undefined1 __thiscall UIDaveTreasure::GetCurrentProcessIndex(UIDaveTreasure *this)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = *(int *)(this + 0x16c);
  uVar2 = 0x4f < iVar1;
  if (0x77 < iVar1) {
    uVar2 = 2;
  }
  if (0x9f < iVar1) {
    uVar2 = 3;
  }
  if (199 < iVar1) {
    uVar2 = 4;
  }
  if (0xf9 < iVar1) {
    uVar2 = 5;
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDaveTreasure::RefreshProgressBar() */

void __thiscall UIDaveTreasure::RefreshProgressBar(UIDaveTreasure *this)

{
  int iVar1;
  UIWidgetImage *pUVar2;
  UIWidgetImage *pUVar3;
  UIWidgetImage *pUVar4;
  uint uVar5;
  float fVar6;
  string asStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x16c);
  uVar5 = (uint)(0x4f < iVar1);
  if (0x77 < iVar1) {
    uVar5 = 2;
  }
  local_8 = ___stack_chk_guard;
  if (0x9f < iVar1) {
    uVar5 = 3;
  }
  if (199 < iVar1) {
    uVar5 = 4;
  }
  if (0xf9 < iVar1) {
    uVar5 = 5;
  }
  fVar6 = 1.0;
  if (iVar1 < 0xfa) {
    if (uVar5 == 0) {
      fVar6 = (float)uVar5 * 0.16666667 + (float)iVar1 * 0.025 * 0.16666667;
    }
    else {
      fVar6 = (float)uVar5 * 0.16666667 +
              ((float)(iVar1 - (&DAT_05751fb0)[(int)(uVar5 - 1)]) /
              (float)(int)((&DAT_05751fb0)[(int)uVar5] - (&DAT_05751fb0)[(int)(uVar5 - 1)])) *
              0.16666667;
    }
  }
  std::string::string(asStack_10,"UIImage_ProgressBg_N");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_Progress_N");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_Progress_H");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar3 + 0x50) = (int)(fVar6 * (float)*(int *)(pUVar2 + 0x50));
  *(int *)(pUVar4 + 0x50) = (int)(fVar6 * (float)*(int *)(pUVar2 + 0x50));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDaveTreasure::UIDaveTreasure() */

void __thiscall UIDaveTreasure::UIDaveTreasure(UIDaveTreasure *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  char cVar3;
  float fVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  string asStack_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIDaveTreasure>::UISingletonDialog((UISingletonDialog<UIDaveTreasure> *)this);
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x138));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x140));
  *(undefined ***)this = &PTR_GetClass_066f8660;
  *(undefined **)(this + 0xd8) = &DAT_066f89c0;
  *(undefined **)(this + 0x138) = &DAT_066f8a08;
  *(undefined ***)(this + 0x140) = &PTR__UIDaveTreasure_066f8a20;
  fVar4 = (float)PVZ_T();
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x170) = 0xffffffff;
  *(undefined4 *)(this + 0x150) = 3;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x168) = 1;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  *(float *)(this + 0x148) = fVar4 + 8.0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyBillingReward);
  local_60 = local_28;
  local_70 = local_38;
  uStack_68 = uStack_30;
  MessageRouter::
  Subscribe<bool,S2C_BillingReward_const*,Sexy::CBMemberTranslatorX<UIDaveTreasure,void(UIDaveTreasure::*)(bool,S2C_BillingReward_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyBillingReward,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnObtainIntegral);
  local_90 = local_20;
  uStack_88 = uStack_18;
  local_80 = local_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<UIDaveTreasure,void(UIDaveTreasure::*)(int)>>
            ((MessageRouter *)puVar1,Message::ObtainDaveTreasureIntegral,&local_90);
  pLVar2 = gLawnApp;
  std::string::string(asStack_40,"UI_ActivityCommon");
  LawnApp::LoadGroup(pLVar2,asStack_40);
  std::string::~string(asStack_40);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_40,"UI_GLLottery");
  LawnApp::LoadGroup(pLVar2,asStack_40);
  std::string::~string(asStack_40);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_40,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar2,asStack_40);
  std::string::~string(asStack_40);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_40,"Effects_Lottery_Result");
  LawnApp::LoadGroup(pLVar2,asStack_40);
  std::string::~string(asStack_40);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_40,"RenderEffects");
  cVar3 = LawnApp::CanLoadGroup(pLVar2,asStack_40);
  std::string::~string(asStack_40);
  nop();
  pLVar2 = gLawnApp;
  if (cVar3 != '\0') {
    std::string::string(asStack_40,"RenderEffects");
    LawnApp::LoadGroup(pLVar2,asStack_40);
    std::string::~string(asStack_40);
    nop();
  }
  pLVar2 = gLawnApp;
  std::string::string(asStack_40,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar2,asStack_40);
  std::string::~string(asStack_40);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_40,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar2,asStack_40);
  std::string::~string(asStack_40);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_40,"UI_Fragment_Material");
  LawnApp::LoadGroup(pLVar2,asStack_40);
  std::string::~string(asStack_40);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_40,"UI_NewAvatar");
  LawnApp::LoadGroup(pLVar2,asStack_40);
  std::string::~string(asStack_40);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_40,"UI_HeadShot_BigAvatar");
  LawnApp::LoadGroup(pLVar2,asStack_40);
  std::string::~string(asStack_40);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_40,"UI_HeadShot_BigPlant");
  LawnApp::LoadGroup(pLVar2,asStack_40);
  std::string::~string(asStack_40);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_40,"UI_HeadshotFrame");
  LawnApp::LoadGroup(pLVar2,asStack_40);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDaveTreasure::ButtonDepress(int) */

void __thiscall UIDaveTreasure::ButtonDepress(UIDaveTreasure *this,int param_1)

{
  int iVar1;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  int iVar2;
  int iVar3;
  ScrollWidget *pSVar4;
  float fVar5;
  wchar_t local_30 [2];
  pair<wchar_t_const,wchar_t> apStack_28 [8];
  Point aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_1) {
  case 0x1e:
    fVar5 = (float)PVZ_T();
    iVar3 = *(int *)(this + 0x14c);
    *(float *)(this + 0x148) = fVar5 + 8.0;
    if (iVar3 == 0) {
      *(int *)(this + 0x14c) = *(int *)(this + 0x150);
      Sexy::Point::Point(aPStack_20,
                         *(int *)(this + 0x150) * *(int *)(*(long *)(this + 0x160) + 0x50),0);
      Sexy::ScrollWidget::ScrollToPoint(*(ScrollWidget **)(this + 0x160),aPStack_20,false);
      iVar3 = *(int *)(this + 0x14c);
    }
    *(int *)(this + 0x14c) = iVar3 + -1;
    FUN_039f0218(*(long *)(this + 0x158) + 0xd4,iVar3 + -1);
    pSVar4 = *(ScrollWidget **)(this + 0x160);
    Sexy::Point::Point(aPStack_20,*(int *)(pSVar4 + 0x50) * *(int *)(this + 0x14c),0);
    Sexy::ScrollWidget::ScrollToPoint(pSVar4,aPStack_20,true);
    break;
  case 0x28:
    fVar5 = (float)PVZ_T();
    iVar3 = *(int *)(this + 0x14c);
    iVar2 = *(int *)(this + 0x150);
    *(float *)(this + 0x148) = fVar5 + 8.0;
    if (iVar3 == iVar2) {
      *(undefined4 *)(this + 0x14c) = 0;
      pSVar4 = *(ScrollWidget **)(this + 0x160);
      Sexy::Point::Point(aPStack_20,0,0);
      Sexy::ScrollWidget::ScrollToPoint(pSVar4,aPStack_20,false);
      iVar3 = *(int *)(this + 0x14c);
      iVar2 = *(int *)(this + 0x150);
    }
    iVar3 = iVar3 + 1;
    *(int *)(this + 0x14c) = iVar3;
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = iVar3 / iVar2;
    }
    FUN_039f0218(*(long *)(this + 0x158) + 0xd4,iVar3 - iVar1 * iVar2);
    Sexy::Point::Point(aPStack_20,*(int *)(*(long *)(this + 0x160) + 0x50) * *(int *)(this + 0x14c),
                       0);
    Sexy::ScrollWidget::ScrollToPoint(*(ScrollWidget **)(this + 0x160),aPStack_20,true);
    break;
  case 0x32:
    UIPennyGuide::SwitchTaskWidget((UIPennyGuide *)this,1);
    *(undefined4 *)(this + 0x168) = 1;
    break;
  case 0x3c:
    UIPennyGuide::SwitchTaskWidget((UIPennyGuide *)this,2);
    *(undefined4 *)(this + 0x168) = 2;
    break;
  case 0x46:
    UIPennyGuide::SwitchTaskWidget((UIPennyGuide *)this,3);
    *(undefined4 *)(this + 0x168) = 3;
    break;
  case 0x58:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aPStack_20);
    local_30[1] = 1;
    local_30[0] = L'⧽';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,local_30 + 1);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)aPStack_20,
               (pair *)apStack_28);
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    INetworkMsgProcess::RequestActivityList(this_01,(vector *)aPStack_20,0,true);
    UISingletonDialog<UIDaveTreasure>::CloseDialog();
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)aPStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIDaveTreasure::ButtonDepress(int) */

void __thiscall UIDaveTreasure::ButtonDepress(UIDaveTreasure *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDaveTreasure::InitTasks() */

void __thiscall UIDaveTreasure::InitTasks(UIDaveTreasure *this)

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
  DaveTreasureTaskWidget *this_02;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  code *pcVar11;
  ulong uVar12;
  int iVar13;
  Insets aIStack_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  string asStack_20 [24];
  long local_8;
  
  uVar10 = 1;
  local_8 = ___stack_chk_guard;
  do {
    Sexy::StrFormat("UIImage_Task%d",asStack_20,(ulong)uVar10);
    pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
    std::string::~string(asStack_20);
    if (pUVar5 != (UIWidgetImage *)0x0) {
      (**(code **)(*(long *)pUVar5 + 0x80))(pUVar5,1,1);
      this_00 = ::operator_new(0x248);
      PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
      this_01 = ::operator_new(0xd8);
      Sexy::Widget::Widget(this_01);
      iVar2 = FUN_039f135c(0);
      Sexy::Insets::Insets(aIStack_48,iVar2,iVar2,*(int *)(pUVar5 + 0x50),*(int *)(pUVar5 + 0x54));
      (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_48);
      Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
      (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_48);
      iVar3 = FUN_039f135c(0);
      iVar2 = *(int *)(this_00 + 0x50);
      iVar13 = (int)((float)(*(int *)(this_00 + 0x54) + iVar3 * -2) * 0.4);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
      iVar4 = Sexy::LazySingleton<DaveTaskManager>::GetInstancePtr();
      PennyTaskManager::GetTasksByGroupID(iVar4,(bool)((char)uVar10 + -1));
      std::vector<DaveTask*,std::allocator<DaveTask*>>::operator=
                ((vector<DaveTask*,std::allocator<DaveTask*>> *)&local_38,(vector *)asStack_20);
      std::vector<DaveTask*,std::allocator<DaveTask*>>::~vector
                ((vector<DaveTask*,std::allocator<DaveTask*>> *)asStack_20);
      uVar12 = 0;
      while( true ) {
        uVar1 = local_38;
        uVar9 = FUN_039f02ac(local_38,local_30);
        if (uVar9 <= uVar12) break;
        plVar6 = (long *)FUN_039f02b8(uVar1,uVar12);
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar6 + 0x30));
        lVar7 = (**(code **)(*plVar6 + 0x50))();
        FUN_039f018c(*(undefined8 *)(lVar7 + 0x18));
        nop();
        iVar4 = FUN_039f135c(5);
        Sexy::Insets::Insets
                  ((Insets *)asStack_20,iVar3,iVar3 + (iVar4 + iVar13) * (int)uVar12,iVar2,iVar13);
        (**(code **)(*(long *)this_02 + 0x1a0))(this_02,asStack_20);
        (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
        puVar8 = (undefined8 *)FUN_039f02b8(local_38,uVar12);
        DaveTreasureTaskWidget::SetTask(this_02,(DaveTask *)*puVar8);
        uVar12 = uVar12 + 1;
      }
      iVar2 = FUN_039f135c(5);
      pcVar11 = *(code **)(*(long *)pUVar5 + 0x60);
      *(int *)(this_01 + 0x54) = iVar3 + (iVar2 + iVar13) * (int)uVar9;
      (*pcVar11)(pUVar5,this_00);
      (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
      if (uVar10 != 1) {
        (**(code **)(*(long *)pUVar5 + 0x158))(pUVar5,0);
      }
      std::vector<DaveTask*,std::allocator<DaveTask*>>::~vector
                ((vector<DaveTask*,std::allocator<DaveTask*>> *)&local_38);
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 != 4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDaveTreasure::OnObtainIntegral(int) */

void __thiscall UIDaveTreasure::OnObtainIntegral(UIDaveTreasure *this,int param_1)

{
  bool bVar1;
  UIWidgetText *this_00;
  UIWidgetImage *pUVar2;
  DaveTreasureRewardButton *pDVar3;
  uint uVar4;
  code *pcVar5;
  string asStack_18 [16];
  long local_8;
  
  *(int *)(this + 0x16c) = *(int *)(this + 0x16c) + param_1;
  local_8 = ___stack_chk_guard;
  RefreshProgressBar(this);
  UIPennyGuide::UpdateIntegral((UIPennyGuide *)this);
  std::string::string(asStack_18,"UIText_Integral");
  this_00 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (this_00 != (UIWidgetText *)0x0) {
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x16c));
    UIWidgetText::SetString(this_00,asStack_18);
    std::string::~string(asStack_18);
  }
  if (*(uint *)(this + 0x170) < 6) {
    uVar4 = *(uint *)(this + 0x170) + 1;
    do {
      while ((int)(&DAT_05751fb0)[(int)(uVar4 - 1)] <= *(int *)(this + 0x16c)) {
        Sexy::StrFormat("UIImage_N%d",asStack_18,(ulong)uVar4);
        pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
        std::string::~string(asStack_18);
        pDVar3 = ::operator_new(0xe0);
        DaveTreasureRewardButton::DaveTreasureRewardButton(pDVar3);
        DaveTreasureRewardButton::SetData(pDVar3,true,uVar4);
        pcVar5 = *(code **)(*(long *)pDVar3 + 0x1a0);
        Sexy::Insets::Insets
                  ((Insets *)asStack_18,0,0,*(int *)(pUVar2 + 0x50),*(int *)(pUVar2 + 0x54));
        (*pcVar5)(pDVar3,asStack_18);
        (**(code **)(*(long *)pUVar2 + 0x60))(pUVar2,pDVar3);
        Sexy::StrFormat("UIImage_H%d",asStack_18,(ulong)uVar4);
        pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
        std::string::~string(asStack_18);
        pDVar3 = ::operator_new(0xe0);
        DaveTreasureRewardButton::DaveTreasureRewardButton(pDVar3);
        DaveTreasureRewardButton::SetData(pDVar3,false,uVar4);
        pcVar5 = *(code **)(*(long *)pDVar3 + 0x1a0);
        Sexy::Insets::Insets
                  ((Insets *)asStack_18,0,0,*(int *)(pUVar2 + 0x50),*(int *)(pUVar2 + 0x54));
        (*pcVar5)(pDVar3,asStack_18);
        (**(code **)(*(long *)pUVar2 + 0x60))(pUVar2,pDVar3);
        *(uint *)(this + 0x170) = uVar4;
        bVar1 = uVar4 == 6;
        uVar4 = uVar4 + 1;
        if (bVar1) goto LAB_039f71ac;
      }
      bVar1 = uVar4 != 6;
      uVar4 = uVar4 + 1;
    } while (bVar1);
  }
LAB_039f71ac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDaveTreasure::UpdateTimer() */

void __thiscall UIDaveTreasure::UpdateTimer(UIDaveTreasure *this)

{
  char cVar1;
  int iVar2;
  UIWidgetText *pUVar3;
  float fVar4;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined4 local_98 [2];
  string asStack_90 [8];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_039f0224(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    local_98[0] = ActiveItem::GetLeftDays(aAStack_88);
    std::string::string(asStack_90,"UIText_Timer");
    pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_90);
    std::string::~string(asStack_90);
    nop();
    if (pUVar3 != (UIWidgetText *)0x0) {
      std::to_string<ActivityTypeID>((ActivityTypeID *)local_98);
      UIWidgetText::SetString(pUVar3,asStack_90);
      std::string::~string(asStack_90);
    }
  }
  std::string::string(asStack_90,"UIText_Task_Timer");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_90);
  std::string::~string(asStack_90);
  nop();
  fVar4 = (float)TimeUtil::GetTimeCountdown(*(int *)(this + 0x168),0x29fd);
  iVar2 = (int)fVar4;
  FUN_05476574(auStack_a0);
  if (iVar2 == 0x7fffffff) {
    TodStringTranslate(L"[UNLIMITED]");
    FUN_054766c8(auStack_a0,asStack_90);
    FUN_05476c50(asStack_90);
  }
  else {
    if (iVar2 < 0x15181) {
      if (iVar2 < 0xe11) {
        if (iVar2 < 1) goto LAB_039f823c;
        FUN_05478178(asStack_90,L"[MIN_SEC]",auStack_a8);
        TodReplaceNumberString((wstring *)asStack_90,L"{NUM1}",iVar2 / 0x3c);
        FUN_05476c50(asStack_90);
        nop();
        iVar2 = iVar2 % 0x3c;
      }
      else {
        FUN_05478178(asStack_90,L"[HOUR_MIN]",auStack_a8);
        TodReplaceNumberString((wstring *)asStack_90,L"{NUM1}",iVar2 / 0xe10);
        FUN_05476c50(asStack_90);
        nop();
        iVar2 = (iVar2 % 0xe10) / 0x3c;
      }
    }
    else {
      FUN_05478178(asStack_90,L"[DAY_HOUR]",auStack_a8);
      TodReplaceNumberString((wstring *)asStack_90,L"{NUM1}",iVar2 / 0x15180);
      FUN_05476c50(asStack_90);
      nop();
      iVar2 = (iVar2 % 0x15180) / 0xe10;
    }
    TodReplaceNumberString((wstring *)local_98,L"{NUM2}",iVar2);
    FUN_054766c8(auStack_a0,asStack_90);
    FUN_05476c50(asStack_90);
    FUN_05476c50((wstring *)local_98);
  }
LAB_039f823c:
  if (pUVar3 != (UIWidgetText *)0x0) {
    PuzzleTip::SetTip(pUVar3,auStack_a0);
  }
  FUN_05476c50(auStack_a0);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDaveTreasure::Update() */

void __thiscall UIDaveTreasure::Update(UIDaveTreasure *this)

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
  UpdateTimer(this);
  fVar5 = *(float *)(this + 0x148);
  fVar4 = (float)PVZ_T();
  if (fVar5 < fVar4) {
    fVar4 = (float)PVZ_T();
    iVar3 = *(int *)(this + 0x14c);
    iVar1 = *(int *)(this + 0x150);
    *(float *)(this + 0x148) = fVar4 + 8.0;
    if (iVar3 == iVar1) {
      *(undefined4 *)(this + 0x14c) = 0;
      this_00 = *(ScrollWidget **)(this + 0x160);
      Sexy::Point::Point(aPStack_10,0,0);
      Sexy::ScrollWidget::ScrollToPoint(this_00,aPStack_10,false);
      iVar3 = *(int *)(this + 0x14c);
      iVar1 = *(int *)(this + 0x150);
    }
    iVar3 = iVar3 + 1;
    *(int *)(this + 0x14c) = iVar3;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = iVar3 / iVar1;
    }
    FUN_039f0218(*(long *)(this + 0x158) + 0xd4,iVar3 - iVar2 * iVar1);
    Sexy::Point::Point(aPStack_10,*(int *)(*(long *)(this + 0x160) + 0x50) * *(int *)(this + 0x14c),
                       0);
    Sexy::ScrollWidget::ScrollToPoint(*(ScrollWidget **)(this + 0x160),aPStack_10,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDaveTreasure::OnNotifyBillingReward(bool, S2C_BillingReward const*) */

void __thiscall
UIDaveTreasure::OnNotifyBillingReward(UIDaveTreasure *this,bool param_1,S2C_BillingReward *param_2)

{
  DaveTreasureDataManager *this_00;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (DaveTreasureDataManager *)
            Sexy::LazySingleton<DaveTreasureDataManager>::GetInstancePtr();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  DaveTreasureDataManager::ShowBonus(this_00,(vector *)(param_2 + 0x18),(vector *)avStack_20);
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_20);
  Sexy::LazySingleton<DaveTreasureDataManager>::GetInstancePtr();
  DaveTreasureDataManager::RefreshData();
  MessageRouter::Post((_func_void *)gMessageRouter);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDaveTreasure::InitReward() */

void __thiscall UIDaveTreasure::InitReward(UIDaveTreasure *this)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  UIWidgetImage *pUVar6;
  DaveTreasureRewardWidget *pDVar7;
  DaveTreasureIntegralReward *pDVar8;
  ulong uVar9;
  undefined8 uVar10;
  string *extraout_x0;
  int *piVar11;
  UIWidgetImage *pUVar12;
  DaveTreasureRewardButton *pDVar13;
  ProfileMgr *this_00;
  UserInfo *this_01;
  ulong uVar14;
  code *pcVar15;
  string asStack_170 [8];
  string asStack_168 [8];
  string asStack_160 [8];
  string asStack_158 [8];
  string asStack_150 [16];
  ActiveItem aAStack_140 [8];
  undefined4 local_138;
  char local_128;
  DaveTreasureData aDStack_c0 [24];
  int local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar4);
  cVar2 = FUN_039f0224(local_138);
  if ((cVar2 != '\0') && (local_128 != '\0')) {
    DaveTreasureData::DaveTreasureData(aDStack_c0);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_140,(RtObject *)aDStack_c0);
    if (cVar2 != '\0') {
      *(int *)(this + 0x16c) = local_a8;
      uVar14 = 0;
      lVar5 = FUN_039f0270(local_a0,local_98);
      if (lVar5 != 0) {
        do {
          uVar1 = (int)uVar14 + 1;
          Sexy::StrFormat("UIImage_N%d",asStack_150,(ulong)uVar1);
          pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_150);
          std::string::~string(asStack_150);
          pDVar7 = ::operator_new(0x120);
          DaveTreasureRewardWidget::DaveTreasureRewardWidget(pDVar7);
          pcVar15 = *(code **)(*(long *)pDVar7 + 0x1a0);
          Sexy::Insets::Insets
                    ((Insets *)asStack_150,0,0,*(int *)(pUVar6 + 0x50),*(int *)(pUVar6 + 0x54));
          (*pcVar15)(pDVar7,asStack_150);
          pDVar8 = (DaveTreasureIntegralReward *)FUN_039f02a0(local_a0,uVar14);
          DaveTreasureRewardWidget::SetReawrd(pDVar7,pDVar8);
          (**(code **)(*(long *)pUVar6 + 0x60))(pUVar6,pDVar7);
          uVar10 = local_a0;
          lVar5 = FUN_039f02a0(local_a0,uVar14);
          if (*(int *)(lVar5 + 8) == 0) {
            Sexy::StrFormat("UIImage_Finish_N%d",asStack_150,(ulong)uVar1);
            pUVar12 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_150);
            std::string::~string(asStack_150);
            (**(code **)(*(long *)pUVar12 + 0x158))(pUVar12,0);
            uVar10 = local_a0;
            if ((int)(&DAT_05751fb0)[uVar14] <= local_a8) {
              pDVar13 = ::operator_new(0xe0);
              DaveTreasureRewardButton::DaveTreasureRewardButton(pDVar13);
              DaveTreasureRewardButton::SetData(pDVar13,true,uVar1);
              pcVar15 = *(code **)(*(long *)pDVar13 + 0x1a0);
              Sexy::Insets::Insets
                        ((Insets *)asStack_150,0,0,*(int *)(pUVar6 + 0x50),*(int *)(pUVar6 + 0x54));
              (*pcVar15)(pDVar13,asStack_150);
              (**(code **)(*(long *)pUVar6 + 0x60))(pUVar6,pDVar13);
              *(uint *)(this + 0x170) = uVar1;
              uVar10 = local_a0;
            }
          }
          uVar14 = uVar14 + 1;
          uVar9 = FUN_039f0270(uVar10,local_98);
        } while (uVar14 < uVar9);
      }
      uVar14 = 0;
      lVar5 = FUN_039f0270(local_88,local_80);
      if (lVar5 != 0) {
        do {
          uVar1 = (int)uVar14 + 1;
          Sexy::StrFormat("UIImage_H%d",asStack_150,(ulong)uVar1);
          pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_150);
          std::string::~string(asStack_150);
          pDVar7 = ::operator_new(0x120);
          DaveTreasureRewardWidget::DaveTreasureRewardWidget(pDVar7);
          pcVar15 = *(code **)(*(long *)pDVar7 + 0x1a0);
          Sexy::Insets::Insets
                    ((Insets *)asStack_150,0,0,*(int *)(pUVar6 + 0x50),*(int *)(pUVar6 + 0x54));
          (*pcVar15)(pDVar7,asStack_150);
          pDVar8 = (DaveTreasureIntegralReward *)FUN_039f02a0(local_88,uVar14);
          DaveTreasureRewardWidget::SetReawrd(pDVar7,pDVar8);
          (**(code **)(*(long *)pUVar6 + 0x60))(pUVar6,pDVar7);
          uVar10 = local_88;
          lVar5 = FUN_039f02a0(local_88,uVar14);
          iVar4 = *(int *)(lVar5 + 8);
          if (iVar4 == 0) {
            Sexy::StrFormat("UIImage_Finish_H%d",asStack_150,(ulong)uVar1);
            pUVar12 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_150);
            std::string::~string(asStack_150);
            (**(code **)(*(long *)pUVar12 + 0x158))(pUVar12,0);
            if ((int)(&DAT_05751fb0)[uVar14] <= local_a8) {
              pDVar13 = ::operator_new(0xe0);
              DaveTreasureRewardButton::DaveTreasureRewardButton(pDVar13);
              DaveTreasureRewardButton::SetData(pDVar13,false,uVar1);
              pcVar15 = *(code **)(*(long *)pDVar13 + 0x1a0);
              Sexy::Insets::Insets
                        ((Insets *)asStack_150,0,0,*(int *)(pUVar6 + 0x50),*(int *)(pUVar6 + 0x54));
              (*pcVar15)(pDVar13,asStack_150);
              (**(code **)(*(long *)pUVar6 + 0x60))(pUVar6,pDVar13);
            }
            uVar10 = local_88;
            lVar5 = FUN_039f02a0(local_88,uVar14);
            iVar4 = *(int *)(lVar5 + 8);
          }
          if (iVar4 == 1) {
            DSingleton<HeadshotConfig>::getInstance();
            nop();
            piVar11 = (int *)FUN_039f02a0(local_88,uVar14);
            DString::DString((DString *)asStack_150,*piVar11);
            DString::operator_cast_to_string((DString *)asStack_150);
            std::string::string(asStack_160,"plant");
            std::string::string(asStack_158,"none");
            DIniFile::getItem(extraout_x0,asStack_168,asStack_160);
            std::string::~string(asStack_158);
            nop();
            std::string::~string(asStack_160);
            nop();
            std::string::~string(asStack_168);
            DString::~DString((DString *)asStack_150);
            bVar3 = std::operator!=(asStack_170,"none");
            if (bVar3) {
              this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
              ProfileMgr::GetCurrentProfile(this_00);
              this_01 = (UserInfo *)DSingleton<UserInfo>::getInstance();
              piVar11 = (int *)FUN_039f02a0(local_88,uVar14);
              UserInfo::unlockHeadShotId(this_01,*piVar11);
            }
            std::string::~string(asStack_170);
            uVar10 = local_88;
          }
          uVar14 = uVar14 + 1;
          uVar9 = FUN_039f0270(uVar10,local_80);
        } while (uVar14 < uVar9);
      }
    }
    DaveTreasureData::~DaveTreasureData(aDStack_c0);
  }
  RefreshProgressBar(this);
  UIPennyGuide::UpdateIntegral((UIPennyGuide *)this);
  ActiveItem::~ActiveItem(aAStack_140);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDaveTreasure::InitView() */

void __thiscall UIDaveTreasure::InitView(UIDaveTreasure *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Widget *pWVar5;
  DaveTreasureScrollWidget *this_00;
  Widget *this_01;
  DaveTreasureDisplayWidget *this_02;
  LotteryResultProgressBar *this_03;
  DaveTreasureDotWidget *this_04;
  SalesProgressBar *this_05;
  int iVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  code *pcVar10;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"Widget_Show");
  pWVar5 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  this_00 = ::operator_new(0x248);
  DaveTreasureScrollWidget::DaveTreasureScrollWidget(this_00,(ScrollWidgetListener *)(this + 0x140))
  ;
  lVar7 = *(long *)pWVar5;
  *(DaveTreasureScrollWidget **)(this + 0x160) = this_00;
  (**(code **)(lVar7 + 0x60))(pWVar5,this_00);
  (**(code **)(**(long **)(this + 0x160) + 0x198))
            (*(long **)(this + 0x160),0,0,*(undefined4 *)(pWVar5 + 0x50),
             *(undefined4 *)(pWVar5 + 0x54));
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x160),1);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(pWVar5 + 0x50),*(undefined4 *)(pWVar5 + 0x54));
  iVar6 = *(int *)(this + 0x150);
  if (-1 < iVar6) {
    iVar9 = 0;
    do {
      iVar6 = *(int *)(*(long *)(this + 0x160) + 0x50);
      iVar1 = iVar6 * iVar9;
      iVar9 = iVar9 + 1;
      Sexy::Insets::Insets
                ((Insets *)asStack_18,iVar1,0,iVar6,*(int *)(*(long *)(this + 0x160) + 0x54));
      this_02 = ::operator_new(0x110);
      DaveTreasureDisplayWidget::DaveTreasureDisplayWidget(this_02);
      (**(code **)(*(long *)this_02 + 0x1a0))(this_02,asStack_18);
      DaveTreasureDisplayWidget::InitView(this_02,iVar9,false);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
      iVar6 = *(int *)(this + 0x150);
    } while (iVar9 <= iVar6);
  }
  plVar8 = *(long **)(this + 0x160);
  lVar7 = *plVar8;
  *(int *)(this_01 + 0x50) = *(int *)(pWVar5 + 0x50) + iVar6 * *(int *)(pWVar5 + 0x50);
  (**(code **)(lVar7 + 0x60))(plVar8,this_01);
  FUN_039f0210(*(long *)(this + 0x160) + 0x1ec);
  this_03 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2500);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_03);
  iVar6 = *(int *)(this + 0x150);
  iVar2 = FUN_039f135c(10);
  iVar9 = *(int *)(pWVar5 + 0x50);
  iVar6 = iVar1 * iVar6 + iVar2 * (iVar6 + -1);
  uVar3 = FUN_039f135c(0xb4);
  this_04 = ::operator_new(0xe0);
  DaveTreasureDotWidget::DaveTreasureDotWidget(this_04,*(int *)(this + 0x150));
  lVar7 = *(long *)pWVar5;
  *(DaveTreasureDotWidget **)(this + 0x158) = this_04;
  (**(code **)(lVar7 + 0x60))(pWVar5,this_04);
  plVar8 = *(long **)(this + 0x158);
  pcVar10 = *(code **)(*plVar8 + 0x198);
  this_05 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2500);
  uVar4 = SalesProgressBar::GetCurrentLevel(this_05);
  (*pcVar10)(plVar8,(iVar9 - iVar6) / 2,uVar3,iVar6,uVar4);
  InitReward(this);
  UIPennyGuide::SwitchTaskWidget((UIPennyGuide *)this,1);
  InitTasks(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDaveTreasure::OnCreate() */

void __thiscall UIDaveTreasure::OnCreate(UIDaveTreasure *this)

{
  UIWidgetBackground *pUVar1;
  DaveTaskManager *this_00;
  TGALogMgr *pTVar2;
  TGAPlantWarsData aTStack_88 [64];
  string asStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_48,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_48);
  std::string::~string(asStack_48);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  this_00 = (DaveTaskManager *)Sexy::LazySingleton<DaveTaskManager>::GetInstancePtr();
  DaveTaskManager::Init(this_00);
  InitView(this);
  TGAPlantWarsData::TGAPlantWarsData(aTStack_88);
  pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogPurchaseData::TGALogPurchaseData
            ((TGALogPurchaseData *)asStack_48,(TGALogPurchaseData *)aTStack_88);
  TGALogMgr::LogDaveTreasure(pTVar2,1,asStack_48);
  TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)asStack_48);
  TGAPlantWarsData::~TGAPlantWarsData(aTStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

