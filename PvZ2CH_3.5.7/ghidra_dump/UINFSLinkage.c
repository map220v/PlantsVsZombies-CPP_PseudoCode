// Class: UINFSLinkage


/* UINFSLinkage::GetCurrentIntegral() */

undefined4 __thiscall UINFSLinkage::GetCurrentIntegral(UINFSLinkage *this)

{
  return *(undefined4 *)(this + 0x228);
}


/* UINFSLinkage::TabSelectionChanged(int) */

int UINFSLinkage::TabSelectionChanged(int param_1)

{
  return param_1;
}


/* non-virtual thunk to UINFSLinkage::TabSelectionChanged(int) */

void __thiscall UINFSLinkage::TabSelectionChanged(UINFSLinkage *this,int param_1)

{
  TabSelectionChanged((int)this + -0x138);
  return;
}


/* UINFSLinkage::ScrollTargetReached(Sexy::ScrollWidget*) */

void UINFSLinkage::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINFSLinkage::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UINFSLinkage::ScrollTargetReached(UINFSLinkage *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x140));
  return;
}


/* UINFSLinkage::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UINFSLinkage::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINFSLinkage::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UINFSLinkage::ScrollTargetInterrupted(UINFSLinkage *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x140));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINFSLinkage::GetLayoutName() */

void __thiscall UINFSLinkage::GetLayoutName(UINFSLinkage *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UINFSLinkage");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINFSLinkage::OnUpdateSumDays(int) */

void UINFSLinkage::OnUpdateSumDays(int param_1)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",auStack_10);
  FUN_054766c8((ulong)(uint)param_1 + 600,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINFSLinkage::RefreshTokenNum() */

void __thiscall UINFSLinkage::RefreshTokenNum(UINFSLinkage *this)

{
  UIWidgetText *pUVar1;
  undefined8 uVar2;
  undefined4 local_24;
  string asStack_20 [8];
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = 1;
  while( true ) {
    Sexy::StrFormat("UIText_Integral_Number%d",asStack_20,uVar2);
    pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
    if (pUVar1 != (UIWidgetText *)0x0) {
      local_24 = GetCurrentIntegral(this);
      std::to_string<ActivityTypeID>((ActivityTypeID *)&local_24);
      Sexy::ToWString(asStack_18);
      PuzzleTip::SetTip(pUVar1,auStack_10);
      FUN_05476c50(auStack_10);
      std::string::~string(asStack_18);
    }
    std::string::~string(asStack_20);
    if ((int)uVar2 == 2) break;
    uVar2 = 2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINFSLinkage::AddIntegral(int) */

void __thiscall UINFSLinkage::AddIntegral(UINFSLinkage *this,int param_1)

{
  *(int *)(this + 0x228) = *(int *)(this + 0x228) + param_1;
  RefreshTokenNum(this);
  return;
}


/* UINFSLinkage::ButtonDepress(int) */

void __thiscall UINFSLinkage::ButtonDepress(UINFSLinkage *this,int param_1)

{
  if (param_1 != 0x66) {
    return;
  }
  UISingletonDialog<UINFSLinkage>::CloseDialog();
  return;
}


/* non-virtual thunk to UINFSLinkage::ButtonDepress(int) */

void __thiscall UINFSLinkage::ButtonDepress(UINFSLinkage *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINFSLinkage::InitShop() */

void __thiscall UINFSLinkage::InitShop(UINFSLinkage *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  UIWidgetImage *pUVar7;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  NFSLinkageShopWidget *this_02;
  NFSLinkageShopData *pNVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar11 = 0;
  std::string::string(asStack_18,"UIImage_Tab3_BG");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar7 + 0x80))(pUVar7,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
  iVar1 = FUN_04e8e694(0xf);
  iVar2 = FUN_04e8e694(10);
  iVar3 = FUN_04e8e694(0x1e);
  iVar5 = *(int *)(pUVar7 + 0x50);
  iVar4 = FUN_04e8e694(0x14);
  Sexy::Insets::Insets
            ((Insets *)asStack_18,iVar1,iVar2,iVar5 - iVar3,*(int *)(pUVar7 + 0x54) - iVar4);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_18);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar5 = FUN_04e8e694(0x1e);
  iVar1 = FUN_04e8e694(10);
  iVar2 = FUN_04e8e694(0x96);
  iVar3 = FUN_04e8e694(0xaf);
  iVar4 = FUN_04e8e694(0xf);
  iVar6 = FUN_04e8e694(0);
  uVar13 = 0;
  while( true ) {
    uVar12 = (uint)uVar13;
    uVar9 = FUN_04e8dd38(*(undefined8 *)(this + 0x210),*(undefined8 *)(this + 0x218));
    if (uVar9 <= uVar13) break;
    this_02 = ::operator_new(0x110);
    NFSLinkageShopWidget::NFSLinkageShopWidget(this_02);
    (**(code **)(*(long *)this_02 + 0x198))
              (this_02,iVar4 + (iVar2 + iVar5) * (uVar12 & 3),
               iVar6 + (iVar3 + iVar1) * ((int)uVar12 >> 2),iVar2,iVar3);
    pNVar8 = (NFSLinkageShopData *)FUN_04e8dd60(*(undefined8 *)(this + 0x210),uVar13);
    NFSLinkageShopWidget::InitView(this_02,uVar12,pNVar8);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
    iVar11 = *(int *)(this_02 + 0x4c) + *(int *)(this_02 + 0x54);
    uVar13 = uVar13 + 1;
  }
  lVar10 = *(long *)this_00;
  *(int *)(this_01 + 0x54) = iVar11;
  (**(code **)(lVar10 + 0x60))(this_00,this_01);
  (**(code **)(*(long *)pUVar7 + 0x60))(pUVar7,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINFSLinkage::initDailySign() */

void __thiscall UINFSLinkage::initDailySign(UINFSLinkage *this)

{
  TRect *pTVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UIWidgetImage *pUVar6;
  PVZ2UIScrollingWidget *this_00;
  NFSLinkageDailySignActivityScrollPanel *this_01;
  long lVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Insets aIStack_30 [8];
  int local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_20,"UIImage_2");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  (**(code **)(*(long *)pUVar6 + 0x80))(pUVar6,1,1);
  if (*(long *)(this + 0x150) != 0) {
    (**(code **)(*(long *)pUVar6 + 0x68))(pUVar6);
    *(undefined8 *)(this + 0x150) = 0;
  }
  pTVar1 = (TRect *)(this + 0x160);
  iVar3 = FUN_04e8e694(0);
  iVar4 = FUN_04e8da40(*(undefined4 *)(pUVar6 + 0x50));
  iVar5 = FUN_04e8da44(*(undefined4 *)(pUVar6 + 0x54));
  Sexy::Insets::Insets((Insets *)&local_20,iVar3,iVar3,iVar4 + -0x14,iVar5);
  *(undefined8 *)pTVar1 = local_20;
  *(undefined8 *)(this + 0x168) = uStack_18;
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
  *(PVZ2UIScrollingWidget **)(this + 0x150) = this_00;
  Sexy::Insets::Insets(aIStack_30,(Insets *)pTVar1);
  iVar3 = FUN_04e8e694(10);
  local_28 = local_28 + iVar3;
  (**(code **)(**(long **)(this + 0x150) + 0x1a0))(*(long **)(this + 0x150),aIStack_30);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x150),2);
  (**(code **)(*(long *)pUVar6 + 0x60))(pUVar6,*(undefined8 *)(this + 0x150));
  if (*(long *)(this + 0x158) == 0) {
    this_01 = ::operator_new(0x130);
    NFSLinkageDailySignActivityScrollPanel::NFSLinkageDailySignActivityScrollPanel
              (this_01,pTVar1,(DailySignBonus *)(this + 0x1c0));
    lVar7 = *(long *)this_01;
    *(NFSLinkageDailySignActivityScrollPanel **)(this + 0x158) = this_01;
    (**(code **)(lVar7 + 0x310))(this_01);
    (**(code **)(**(long **)(this + 0x150) + 0x60))
              (*(long **)(this + 0x150),*(undefined8 *)(this + 0x158));
  }
  else {
    (**(code **)(**(long **)(this + 0x150) + 0x60))(*(long **)(this + 0x150));
    DailySignActivityScrollPanel::loadData
              (*(DailySignActivityScrollPanel **)(this + 0x158),pTVar1,
               (DailySignBonus *)(this + 0x1c0));
    (**(code **)(**(long **)(this + 0x158) + 0x310))(*(long **)(this + 0x158));
  }
  Sexy::StrFormat(L"%d",(string *)&local_20,(ulong)*(uint *)(this + 0x1c0));
  FUN_054766c8(this + 600,(string *)&local_20);
  FUN_05476c50((string *)&local_20);
  puVar2 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnUpdateSumDays);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<UINFSLinkage,void(UINFSLinkage::*)(int)>>
            ((MessageRouter *)puVar2,Message::UpdateSumDays,&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINFSLinkage::UINFSLinkage() */

void __thiscall UINFSLinkage::UINFSLinkage(UINFSLinkage *this)

{
  LawnApp *this_00;
  bool bVar1;
  float fVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UINFSLinkage>::UISingletonDialog((UISingletonDialog<UINFSLinkage> *)this);
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x138));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x140));
  Sexy::EditListener::EditListener((EditListener *)(this + 0x148));
  *(undefined ***)this = &PTR_GetClass_069ec220;
  *(undefined **)(this + 0xd8) = &DAT_069ec590;
  *(undefined **)(this + 0x138) = &DAT_069ec5d8;
  *(undefined ***)(this + 0x140) = &PTR__UINFSLinkage_069ec5f0;
  *(undefined ***)(this + 0x148) = &PTR_EditWidgetText_069ec638;
  Sexy::Insets::Insets((Insets *)(this + 0x160));
  DailySignBonus::DailySignBonus((DailySignBonus *)(this + 0x170));
  NFSLinkageData::NFSLinkageData((NFSLinkageData *)(this + 0x1a8));
  Sexy::Color::Color((Color *)(this + 0x240),1);
  FUN_05476574(this + 0x250);
  FUN_05476574(this + 600);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined4 *)(this + 0x230) = 0;
  fVar2 = (float)PVZ_EOT();
  *(undefined8 *)(this + 0x158) = 0;
  bVar1 = local_8 == ___stack_chk_guard;
  *(long *)(this + 0x238) = (long)fVar2;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINFSLinkage::~UINFSLinkage() */

void __thiscall UINFSLinkage::~UINFSLinkage(UINFSLinkage *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_069ec590;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_069ec220;
  *(undefined ***)(this + 0x148) = &PTR_EditWidgetText_069ec638;
  *(undefined **)(this + 0x138) = &DAT_069ec5d8;
  *(undefined ***)(this + 0x140) = &PTR__UINFSLinkage_069ec5f0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 600);
  FUN_05476c50(this + 0x250);
  NFSLinkageData::~NFSLinkageData((NFSLinkageData *)(this + 0x1a8));
  DailySignBonus::~DailySignBonus((DailySignBonus *)(this + 0x170));
  UISingletonDialog<UINFSLinkage>::~UISingletonDialog((UISingletonDialog<UINFSLinkage> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINFSLinkage::~UINFSLinkage() */

void __thiscall UINFSLinkage::~UINFSLinkage(UINFSLinkage *this)

{
  ~UINFSLinkage(this + -0x140);
  return;
}


/* UINFSLinkage::~UINFSLinkage() */

void __thiscall UINFSLinkage::~UINFSLinkage(UINFSLinkage *this)

{
  ~UINFSLinkage(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UINFSLinkage::~UINFSLinkage() */

void __thiscall UINFSLinkage::~UINFSLinkage(UINFSLinkage *this)

{
  ~UINFSLinkage(this + -0x140);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINFSLinkage::initTasks() */

void __thiscall UINFSLinkage::initTasks(UINFSLinkage *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  UIWidgetImage *pUVar4;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  long lVar5;
  vector *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  RtObject *pRVar10;
  NFSLinkageGradeTaskData *pNVar11;
  ulong uVar12;
  pair<int,bool> *this_02;
  long *extraout_x0;
  undefined8 *puVar13;
  int *piVar14;
  code *pcVar15;
  ulong uVar16;
  int iVar17;
  bool local_71;
  Insets aIStack_70 [16];
  Insets aIStack_60 [16];
  vector<GeneralTask*,std::allocator<GeneralTask*>> avStack_50 [24];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_20,"UIImage_Task_Background");
  uVar16 = 0;
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  (**(code **)(*(long *)pUVar4 + 0x80))(pUVar4,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
  iVar1 = FUN_04e8e694(0xf);
  iVar2 = FUN_04e8e694(0x1e);
  Sexy::Insets::Insets
            (aIStack_70,iVar1,iVar1,*(int *)(pUVar4 + 0x50) - iVar2,*(int *)(pUVar4 + 0x54) - iVar2)
  ;
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_70);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar1 = *(int *)(this_01 + 0x50);
  iVar2 = FUN_04e8e694(0x8c);
  lVar5 = Sexy::LazySingleton<NFSLinkageGradeTaskManager>::GetInstancePtr();
  pvVar6 = (vector *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)(lVar5 + 8));
  std::vector<GeneralTask*,std::allocator<GeneralTask*>>::vector(avStack_50,pvVar6);
  std::vector<GeneralTask*,std::allocator<GeneralTask*>>::vector
            ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_38,(vector *)avStack_50);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_38);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_38);
  FUN_04e9239c(uVar7,uVar8);
  std::vector<std::pair<int,bool>,std::allocator<std::pair<int,bool>>>::vector
            ((vector<std::pair<int,bool>,std::allocator<std::pair<int,bool>>> *)&local_20,
             &DAT_05755dd0,4,aIStack_60);
  uVar7 = local_38;
  lVar5 = FUN_04e8dcf0(local_38,local_30);
  uVar12 = 0;
  if (lVar5 != 0) {
    do {
      plVar9 = (long *)FUN_04e8dcfc(uVar7,uVar16);
      pRVar10 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar9 + 0x20));
      pNVar11 = Sexy::RtObject::Cast<NFSLinkageGradeTaskData>(pRVar10);
      uVar8 = local_20;
      iVar17 = *(int *)(pNVar11 + 0x54);
      uVar7 = local_38;
      if ((-1 < iVar17) &&
         (uVar12 = FUN_04e8dd04(local_20,local_18), uVar7 = local_38, (ulong)(long)iVar17 < uVar12))
      {
        this_02 = (pair<int,bool> *)FUN_04e8dd10(uVar8);
        uVar7 = local_38;
        if (this_02[4] == (pair<int,bool>)0x0) {
          plVar9 = (long *)FUN_04e8dcfc(local_38,uVar16);
          lVar5 = *plVar9;
          if (*(int *)(lVar5 + 0x14) != 3) goto LAB_04e9260c;
          if (*(int *)(lVar5 + 8) <= *(int *)this_02) goto LAB_04e92638;
          local_71 = false;
        }
        else {
          plVar9 = (long *)FUN_04e8dcfc(local_38,uVar16);
          lVar5 = *plVar9;
          if ((*(int *)(lVar5 + 0x14) == 3) || (*(int *)this_02 <= *(int *)(lVar5 + 8)))
          goto LAB_04e92638;
LAB_04e9260c:
          local_71 = true;
        }
        std::pair<int,bool>::pair<int&,bool,void>
                  ((pair<int,bool> *)aIStack_60,(int *)(lVar5 + 8),&local_71);
        std::pair<int,bool>::operator=(this_02,(pair *)aIStack_60);
        uVar7 = local_38;
      }
LAB_04e92638:
      uVar16 = uVar16 + 1;
      uVar12 = FUN_04e8dcf0(uVar7,local_30);
    } while (uVar16 < uVar12);
  }
  iVar17 = 0;
  for (uVar16 = 0; uVar16 < uVar12; uVar16 = uVar16 + 1) {
    plVar9 = (long *)FUN_04e8dcfc(uVar7,uVar16);
    pRVar10 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar9 + 0x20));
    pNVar11 = Sexy::RtObject::Cast<NFSLinkageGradeTaskData>(pRVar10);
    uVar7 = local_20;
    iVar3 = *(int *)(pNVar11 + 0x54);
    if (((iVar3 < 0) || (uVar12 = FUN_04e8dd04(local_20,local_18), uVar12 <= (ulong)(long)iVar3)) ||
       (piVar14 = (int *)FUN_04e8dd10(uVar7), *piVar14 == *(int *)(pNVar11 + 8))) {
      plVar9 = (long *)FUN_04e8dcfc(local_38,uVar16);
      plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar9 + 0x20));
      lVar5 = (**(code **)(*plVar9 + 0x58))();
      FUN_04e8da20(*(undefined8 *)(lVar5 + 0x18));
      nop();
      iVar3 = FUN_04e8e694(10);
      iVar3 = (iVar3 + iVar2) * iVar17;
      iVar17 = iVar17 + 1;
      Sexy::Insets::Insets(aIStack_60,0,iVar3,iVar1,iVar2);
      (**(code **)(*extraout_x0 + 0x1a0))(extraout_x0,aIStack_60);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,extraout_x0);
      puVar13 = (undefined8 *)FUN_04e8dcfc(local_38,uVar16);
      (**(code **)(*extraout_x0 + 0x318))(extraout_x0,*puVar13);
    }
    uVar7 = local_38;
    uVar12 = FUN_04e8dcf0(local_38,local_30);
  }
  iVar1 = FUN_04e8e694(10);
  pcVar15 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_01 + 0x54) = (iVar1 + iVar2) * (int)uVar12;
  (*pcVar15)(this_00,this_01);
  (**(code **)(*(long *)pUVar4 + 0x60))(pUVar4,this_00);
  std::vector<std::pair<int,bool>,std::allocator<std::pair<int,bool>>>::~vector
            ((vector<std::pair<int,bool>,std::allocator<std::pair<int,bool>>> *)&local_20);
  std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
            ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_38);
  std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector(avStack_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINFSLinkage::UpdateTimeLabel() */

void __thiscall UINFSLinkage::UpdateTimeLabel(UINFSLinkage *this)

{
  uint uVar1;
  int iVar2;
  UIWidgetText *pUVar3;
  ulong uVar4;
  undefined8 local_98;
  undefined8 uStack_90;
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  iVar2 = ActiveItem::GetLeftTimes(aAStack_88);
  if ((long)iVar2 < 1) {
    Sexy::Color::Color((Color *)&local_98,2);
    *(undefined8 *)(this + 0x240) = local_98;
    *(undefined8 *)(this + 0x248) = uStack_90;
    Sexy::StrFormat(L"0",(string *)&local_98);
  }
  else {
    Sexy::Color::Color((Color *)&local_98,1);
    *(undefined8 *)(this + 0x240) = local_98;
    *(undefined8 *)(this + 0x248) = uStack_90;
    Sexy::StrFormat(L"%d",(string *)&local_98,(long)iVar2 / 0x15180);
  }
  uVar4 = 1;
  FUN_054766c8(this + 0x250,(string *)&local_98);
  FUN_05476c50((string *)&local_98);
  do {
    Sexy::StrFormat("UIText_Timer%d",(string *)&local_98,uVar4);
    pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_98);
    if (pUVar3 != (UIWidgetText *)0x0) {
      PuzzleTip::SetTip(pUVar3,this + 0x250);
    }
    uVar1 = (int)uVar4 + 1;
    uVar4 = (ulong)uVar1;
    std::string::~string((string *)&local_98);
  } while (uVar1 != 4);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINFSLinkage::OnCreate() */

void __thiscall UINFSLinkage::OnCreate(UINFSLinkage *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  Widget *pWVar4;
  long lVar5;
  undefined8 uVar6;
  TGALogMgr *this_00;
  size_t __n;
  string asStack_2b0 [8];
  TGANFSLinkageData aTStack_2a8 [8];
  undefined1 auStack_2a0 [32];
  ActiveItem aAStack_280 [8];
  undefined4 local_278;
  char local_268;
  undefined8 local_230;
  string asStack_200 [136];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_200,"UIImage_Back");
  pWVar4 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_200);
  std::string::~string(asStack_200);
  nop();
  __n = 1;
  UI::Dialog::SetCenter((Dialog *)this,pWVar4,true);
  lVar5 = Sexy::LazySingleton<NFSLinkageGradeTaskManager>::GetInstancePtr();
  GeneralTaskManager::Initialize((GeneralTaskManager *)(lVar5 + 8));
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_04e8daac(local_278);
  if ((cVar1 != '\0') && (local_268 != '\0')) {
    NFSLinkageData::NFSLinkageData((NFSLinkageData *)asStack_200);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)asStack_200);
    if (cVar1 != '\0') {
      NFSLinkageData::operator=((NFSLinkageData *)(this + 0x1a8),(NFSLinkageData *)asStack_200);
      (**(code **)(*(long *)this + 0x358))(this);
      initDailySign(this);
      initTasks(this);
      InitShop(this);
      RefreshTokenNum(this);
      TGANFSLinkageData::TGANFSLinkageData(aTStack_2a8);
      std::string::append((string *)aTStack_2a8,"1",__n);
      uVar3 = operator|(0x10,8);
      FUN_05462470(auStack_178,uVar3);
      uVar3 = GetCurrentIntegral(this);
      uVar6 = FUN_0546065c(auStack_168,uVar3);
      uVar6 = FUN_054603b8(uVar6,&DAT_05593348);
      uVar6 = FUN_0546065c(uVar6,0);
      uVar6 = FUN_054603b8(uVar6,&DAT_05593348);
      uVar3 = GetCurrentIntegral(this);
      uVar6 = FUN_0546065c(uVar6,uVar3);
      FUN_054603b8(uVar6,&DAT_05594620);
      FUN_05462824(asStack_2b0,auStack_178);
      FUN_05474278(auStack_2a0,asStack_2b0);
      std::string::~string(asStack_2b0);
      this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::LogNFSLinkage(this_00,aTStack_2a8);
      FUN_054617bc(auStack_178);
      TGANFSLinkageData::~TGANFSLinkageData(aTStack_2a8);
    }
    NFSLinkageData::~NFSLinkageData((NFSLinkageData *)asStack_200);
  }
  *(undefined8 *)(this + 0x238) = local_230;
  ActiveItem::~ActiveItem(aAStack_280);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINFSLinkage::Update() */

void __thiscall UINFSLinkage::Update(UINFSLinkage *this)

{
  UIWidgetText *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::Update((WidgetContainer *)this);
  std::string::string(asStack_10,"UIText_Sum");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    PuzzleTip::SetTip(pUVar1,this + 600);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

