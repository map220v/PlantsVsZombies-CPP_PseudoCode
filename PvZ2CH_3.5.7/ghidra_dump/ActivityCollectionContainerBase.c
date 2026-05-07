// Class: ActivityCollectionContainerBase


/* ActivityCollectionContainerBase::ScrollTargetReached(Sexy::ScrollWidget*) */

void ActivityCollectionContainerBase::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ActivityCollectionContainerBase::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
ActivityCollectionContainerBase::ScrollTargetReached
          (ActivityCollectionContainerBase *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe8));
  return;
}


/* ActivityCollectionContainerBase::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void ActivityCollectionContainerBase::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to
   ActivityCollectionContainerBase::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
ActivityCollectionContainerBase::ScrollTargetInterrupted
          (ActivityCollectionContainerBase *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionContainerBase::Update() */

void __thiscall ActivityCollectionContainerBase::Update(ActivityCollectionContainerBase *this)

{
  TimeUtil aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (this[0xfc] != (ActivityCollectionContainerBase)0x0) {
    TimeUtil::GetTimeCountdown(3,*(int *)(this + 0xf8));
    TimeUtil::GetTimeCountdownFormat(aTStack_10,0);
    FUN_054766c8(this + 0x100,aTStack_10);
    FUN_05476c50(aTStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityCollectionContainerBase::CloseInfoWidget() */

void __thiscall
ActivityCollectionContainerBase::CloseInfoWidget(ActivityCollectionContainerBase *this)

{
  if (*(long *)(this + 0x188) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x188))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x188));
    *(undefined8 *)(this + 0x188) = 0;
  }
  return;
}


/* ActivityCollectionContainerBase::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionContainerBase::InitContainer
          (ActivityCollectionContainerBase *this,ActivityCollectionTabBase *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_03428e64(*(undefined8 *)(param_1 + 0x18));
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,(int)plVar2[10],*(undefined4 *)((long)plVar2 + 0x54));
  (**(code **)(*plVar2 + 0x60))(plVar2,this);
  uVar1 = FUN_034297a4(param_1[0x30]);
  FUN_034297b8(this + 0x1a4,uVar1);
  return;
}


/* non-virtual thunk to ActivityCollectionContainerBase::InitContainer(ActivityCollectionTabBase*)
    */

void __thiscall
ActivityCollectionContainerBase::InitContainer
          (ActivityCollectionContainerBase *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0xe0,param_1);
  return;
}


/* ActivityCollectionContainerBase::InitTimer(Sexy::Point const&) */

void __thiscall
ActivityCollectionContainerBase::InitTimer(ActivityCollectionContainerBase *this,Point *param_1)

{
  *(undefined8 *)(this + 0x108) = *(undefined8 *)param_1;
  this[0xfc] = (ActivityCollectionContainerBase)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionContainerBase::InitRewardPriview(Sexy::TRect<int> const&,
   std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> > const&) */

void __thiscall
ActivityCollectionContainerBase::InitRewardPriview
          (ActivityCollectionContainerBase *this,TRect *param_1,vector *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  UIWidgetImage *this_00;
  PVZ2UIScrollingWidget *this_01;
  Widget *this_02;
  long lVar5;
  int *piVar6;
  UIRewardFrame *this_03;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 uVar10;
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[400] = (ActivityCollectionContainerBase)0x1;
  uVar9 = 0;
  this_00 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_00);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,param_1);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06aa04e8,2);
  UIWidgetImage::SetImage(this_00,aPStack_40);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0xe8));
  iVar1 = FUN_0342d430(10);
  uVar2 = FUN_0342d430(5);
  uVar3 = FUN_0342d430(200);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,iVar1,uVar2,uVar3,*(int *)(this_00 + 0x54) - iVar1);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_01,1);
  this_02 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_02);
  uVar2 = FUN_0342d430(0);
  (**(code **)(*(long *)this_02 + 0x198))
            (this_02,uVar2,0,*(undefined4 *)(this_01 + 0x50),*(undefined4 *)(this_01 + 0x54));
  uVar10 = *(undefined8 *)param_2;
  iVar1 = *(int *)(this_01 + 0x54);
  lVar5 = FUN_034298e0(uVar10,*(undefined8 *)(param_2 + 8));
  uVar7 = 0;
  if (lVar5 != 0) {
    do {
      piVar6 = (int *)FUN_034298f4(uVar10,uVar9);
      this_03 = (UIRewardFrame *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar6,0,true);
      iVar4 = FUN_0342d430(5);
      (**(code **)(*(long *)this_03 + 0x198))(this_03,(iVar4 + iVar1) * (int)uVar9,0,iVar1,iVar1);
      (**(code **)(*(long *)this_02 + 0x60))(this_02,this_03);
      if (uVar9 == 0) {
        UIRewardFrame::EnableFrameRotation(this_03,true);
        UIRewardFrame::SetFrameRotationScale(this_03,1.0);
      }
      uVar9 = uVar9 + 1;
      uVar10 = *(undefined8 *)param_2;
      uVar7 = FUN_034298e0(uVar10,*(undefined8 *)(param_2 + 8));
    } while (uVar9 < uVar7);
  }
  iVar4 = FUN_0342d430(5);
  pcVar8 = *(code **)(*(long *)this_01 + 0x60);
  *(int *)(this_02 + 0x50) = (iVar4 + iVar1) * (int)uVar7;
  (*pcVar8)(this_01,this_02);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionContainerBase::DrawBackground(Sexy::Graphics*) */

void __thiscall
ActivityCollectionContainerBase::DrawBackground
          (ActivityCollectionContainerBase *this,Graphics *param_1)

{
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xf0) != 0) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    DrawHorizontalCropImage(param_1,aIStack_18,*(undefined8 *)(this + 0xf0));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionContainerBase::ShowInfoWidget() */

void __thiscall
ActivityCollectionContainerBase::ShowInfoWidget(ActivityCollectionContainerBase *this)

{
  ActivityDescriptionUI *this_00;
  ulong uVar1;
  wstring *pwVar2;
  wstring *pwVar3;
  undefined8 uVar4;
  PlantWarsLevelSelectUI *pPVar5;
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x188) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    uVar4 = *(undefined8 *)(this + 0x150);
    *(ActivityDescriptionUI **)(this + 0x188) = this_00;
    uVar1 = FUN_03429900(uVar4,*(undefined8 *)(this + 0x158));
    if (uVar1 == 1) {
      pwVar2 = (wstring *)FUN_0342990c(uVar4,0);
      ActivityDescriptionUI::InitView(this_00,pwVar2,(wstring *)(this + 0x148));
    }
    else if (uVar1 < 2) {
      FUN_05476574(awStack_50);
      ActivityDescriptionUI::InitView(this_00,awStack_50,(wstring *)(this + 0x148));
      FUN_05476c50(awStack_50);
    }
    else {
      pwVar2 = (wstring *)FUN_0342990c(uVar4,0);
      pwVar3 = (wstring *)FUN_0342990c(uVar4,1);
      ActivityDescriptionUI::InitView(this_00,pwVar2,pwVar3,(wstring *)(this + 0x148));
    }
    pPVar5 = *(PlantWarsLevelSelectUI **)(this + 0x188);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,CloseInfoWidget);
    Sexy::Delegate0::
    Delegate0<ActivityCollectionContainerBase,void(ActivityCollectionContainerBase::*)()>
              (aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar5,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x188));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x188));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x188));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x188));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionContainerBase::InitGotoButton(Sexy::TRect<int> const&, std::function<void ()>
   const&, bool) */

void __thiscall
ActivityCollectionContainerBase::InitGotoButton
          (ActivityCollectionContainerBase *this,TRect *param_1,function *param_2,bool param_3)

{
  PVZ2UIButton *this_00;
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  this[0x110] = (ActivityCollectionContainerBase)param_3;
  local_8 = ___stack_chk_guard;
  std::function<void()>::operator=((function<void()> *)(this + 0x118),param_2);
  TodStringTranslate(L"[GO_TO_EVENT]");
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0xb,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06aa01b8,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06aa0458,3);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,param_1);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionContainerBase::InitInfoButton(Sexy::Point const&, std::function<void ()>
   const&) */

void __thiscall
ActivityCollectionContainerBase::InitInfoButton
          (ActivityCollectionContainerBase *this,Point *param_1,function *param_2)

{
  int iVar1;
  PVZ2UIButton *this_00;
  code *pcVar2;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  this[0x138] = (ActivityCollectionContainerBase)0x1;
  *(undefined8 *)(this + 0x13c) = *(undefined8 *)param_1;
  local_8 = ___stack_chk_guard;
  std::function<void()>::operator=((function<void()> *)(this + 0x168),param_2);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aIStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0x16,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aIStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06aa00e8,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06aa00e8,2);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  pcVar2 = *(code **)(*(long *)this_00 + 0x1a0);
  iVar1 = FUN_0342d430(0x28);
  Sexy::Insets::Insets(aIStack_40,*(int *)param_1,*(int *)(param_1 + 4),iVar1,iVar1);
  (*pcVar2)(this_00,aIStack_40);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionContainerBase::ActivityCollectionContainerBase() */

void __thiscall
ActivityCollectionContainerBase::ActivityCollectionContainerBase
          (ActivityCollectionContainerBase *this)

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
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  ActivityCollectionContainer::ActivityCollectionContainer
            ((ActivityCollectionContainer *)(this + 0xe0));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe8));
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined ***)this = &PTR_GetClass_06628370;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066286d8;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_06628720;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionContainerBase_06628740;
  *(undefined4 *)(this + 0xf8) = 0;
  this[0xfc] = (ActivityCollectionContainerBase)0x0;
  FUN_05476574(this + 0x100);
  Sexy::Point::Point((Point *)(this + 0x108));
  this[0x110] = (ActivityCollectionContainerBase)0x0;
  this[0x111] = (ActivityCollectionContainerBase)0x0;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x118));
  this[0x138] = (ActivityCollectionContainerBase)0x0;
  Sexy::Point::Point((Point *)(this + 0x13c));
  FUN_05476574(this + 0x148);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x168));
  *(undefined8 *)(this + 0x188) = 0;
  this[400] = (ActivityCollectionContainerBase)0x0;
  Sexy::Insets::Insets((Insets *)(this + 0x194));
  this[0x1a4] = (ActivityCollectionContainerBase)0x1;
  Sexy::Point::Point((Point *)(this + 0x1a8));
  Sexy::Point::Point((Point *)&local_20,0,0);
  *(undefined8 *)(this + 0x1a8) = local_20;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_40 = local_20;
  uStack_38 = uStack_18;
  local_30 = local_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<ActivityCollectionContainerBase,void(ActivityCollectionContainerBase::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionContainerBase::DrawTimer(Sexy::Graphics*, int, int) */

void __thiscall
ActivityCollectionContainerBase::DrawTimer
          (ActivityCollectionContainerBase *this,Graphics *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xfc] != (ActivityCollectionContainerBase)0x0) {
    TodStringTranslate(L"[ACTIVITY_LEFT]");
    iVar2 = FUN_0342d430(0x50);
    iVar3 = FUN_0342d430(0x1e);
    Sexy::Insets::Insets(aIStack_28,param_2,param_3,iVar2,iVar3);
    uVar1 = PrimeText_Game::Typeface_FZCuYuan_19_Outline;
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar1,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa01e0);
    iVar2 = FUN_0342d430(0x50);
    iVar3 = FUN_0342d430(5);
    iVar4 = FUN_0342d430(0x78);
    iVar5 = FUN_0342d430(0x1e);
    Sexy::Graphics::DrawImage(param_1,pIVar6,iVar2 + param_2 + iVar3,param_3,iVar4,iVar5);
    iVar2 = FUN_0342d430(0x50);
    iVar3 = FUN_0342d430(5);
    iVar4 = FUN_0342d430(0x78);
    iVar5 = FUN_0342d430(0x1e);
    Sexy::Insets::Insets(aIStack_28,iVar2 + param_2 + iVar3,param_3,iVar4,iVar5);
    uVar1 = PrimeText_Game::Typeface_FZCuYuan_20;
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x100,aIStack_28,uVar1,aCStack_18,5,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionContainerBase::DrawInfo(Sexy::Graphics*, int, int) */

void __thiscall
ActivityCollectionContainerBase::DrawInfo
          (ActivityCollectionContainerBase *this,Graphics *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x138] != (ActivityCollectionContainerBase)0x0) {
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa01e0);
    iVar2 = FUN_0342d430(0xf);
    iVar3 = FUN_0342d430(5);
    iVar4 = FUN_0342d430(0x78);
    iVar5 = FUN_0342d430(0x1e);
    Sexy::Graphics::DrawImage(param_1,pIVar6,iVar2 + param_2,iVar3 + param_3,iVar4,iVar5);
    TodStringTranslate(L"[OVERVIEW_LABEL]");
    iVar2 = FUN_0342d430(0x28);
    iVar3 = FUN_0342d430(5);
    iVar4 = FUN_0342d430(0x5a);
    iVar5 = FUN_0342d430(0x1e);
    Sexy::Insets::Insets(aIStack_28,iVar2 + param_2,iVar3 + param_3,iVar4,iVar5);
    uVar1 = PrimeText_Game::Typeface_FZShaoEr_20_Outline;
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar1,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionContainerBase::DrawLock(Sexy::Graphics*, int, int) */

void __thiscall
ActivityCollectionContainerBase::DrawLock
          (ActivityCollectionContainerBase *this,Graphics *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1a4] == (ActivityCollectionContainerBase)0x0) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa0390);
    Draw3SliceImage(param_1,aIStack_18,uVar6);
    (**(code **)(*(long *)this + 0x350))(auStack_30,this);
    iVar1 = *(int *)(this + 0x50);
    iVar2 = FUN_0342d430(0x78);
    iVar3 = FUN_0342d430(0xcd);
    iVar4 = FUN_0342d430(0xf0);
    iVar5 = FUN_0342d430(0x5a);
    Sexy::Insets::Insets(aIStack_28,(param_2 + iVar1 / 2) - iVar2,iVar3 + param_3,iVar4,iVar5);
    uVar6 = PrimeText_Game::Typeface_FZShaoEr_40_Outline;
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aIStack_18,5,1);
    FUN_05476c50(auStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityCollectionContainerBase::~ActivityCollectionContainerBase() */

void __thiscall
ActivityCollectionContainerBase::~ActivityCollectionContainerBase
          (ActivityCollectionContainerBase *this)

{
  *(undefined ***)this = &PTR_GetClass_06628370;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionContainerBase_06628740;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066286d8;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_06628720;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x168));
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x150));
  FUN_05476c50(this + 0x148);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x118));
  FUN_05476c50(this + 0x100);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to ActivityCollectionContainerBase::~ActivityCollectionContainerBase() */

void __thiscall
ActivityCollectionContainerBase::~ActivityCollectionContainerBase
          (ActivityCollectionContainerBase *this)

{
  ~ActivityCollectionContainerBase(this + -0xe8);
  return;
}


/* ActivityCollectionContainerBase::~ActivityCollectionContainerBase() */

void __thiscall
ActivityCollectionContainerBase::~ActivityCollectionContainerBase
          (ActivityCollectionContainerBase *this)

{
  ~ActivityCollectionContainerBase(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ActivityCollectionContainerBase::~ActivityCollectionContainerBase() */

void __thiscall
ActivityCollectionContainerBase::~ActivityCollectionContainerBase
          (ActivityCollectionContainerBase *this)

{
  ~ActivityCollectionContainerBase(this + -0xe8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionContainerBase::InitInfoButton(Sexy::Point const&, std::wstring const&,
   std::vector<std::wstring, std::allocator<std::wstring > > const&) */

void __thiscall
ActivityCollectionContainerBase::InitInfoButton
          (ActivityCollectionContainerBase *this,Point *param_1,wstring *param_2,vector *param_3)

{
  int iVar1;
  PVZ2UIButton *this_00;
  code *pcVar2;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  this[0x138] = (ActivityCollectionContainerBase)0x1;
  *(undefined8 *)(this + 0x13c) = *(undefined8 *)param_1;
  local_8 = ___stack_chk_guard;
  thunk_FUN_05477b9c(this + 0x148,param_2);
  std::vector<std::wstring,std::allocator<std::wstring>>::operator=
            ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x150),param_3);
  FUN_034298a4(this + 0x168);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aIStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0x16,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aIStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06aa00e8,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06aa00e8,2);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  pcVar2 = *(code **)(*(long *)this_00 + 0x1a0);
  iVar1 = FUN_0342d430(0x28);
  Sexy::Insets::Insets(aIStack_40,*(int *)param_1,*(int *)(param_1 + 4),iVar1,iVar1);
  (*pcVar2)(this_00,aIStack_40);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionContainerBase::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
ActivityCollectionContainerBase::onNotifyRefreshActivityList
          (ActivityCollectionContainerBase *this,bool param_1,set *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x111] != (ActivityCollectionContainerBase)0x0) &&
     (this[0x111] = (ActivityCollectionContainerBase)0x0, param_1)) {
    uVar2 = std::set<int,std::less<int>,std::allocator<int>>::begin
                      ((set<int,std::less<int>,std::allocator<int>> *)param_2);
    uVar3 = std::
            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
            end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)param_2);
    local_18 = std::find<std::_Rb_tree_const_iterator<int>,int>(uVar2,uVar3,this + 0xf8);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x118));
      if (bVar1) {
        if (local_8 == ___stack_chk_guard) {
          std::function<void()>::operator()((function<void()> *)(this + 0x118));
          return;
        }
        goto LAB_03436994;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_03436994:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionContainerBase::ButtonDepress(int) */

void __thiscall
ActivityCollectionContainerBase::ButtonDepress(ActivityCollectionContainerBase *this,int param_1)

{
  bool bVar1;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  wchar_t local_2c;
  pair<wchar_t_const,wchar_t> apStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0xb) {
    if (this[0x110] == (ActivityCollectionContainerBase)0x0) {
      bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x118));
      if (bVar1) {
        std::function<void()>::operator()((function<void()> *)(this + 0x118));
      }
    }
    else {
      this[0x111] = (ActivityCollectionContainerBase)0x1;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      local_2c = L'\x01';
      std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
                (apStack_28,(wchar_t *)(this + 0xf8),&local_2c);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
                 (pair *)apStack_28);
      this_00 = (NetworkMgr *)NetworkMgr::Instance();
      this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
      INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_20,0,true);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20);
    }
  }
  else if (param_1 == 0x16) {
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x168));
    if (bVar1) {
      std::function<void()>::operator()((function<void()> *)(this + 0x168));
    }
    else {
      ShowInfoWidget(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActivityCollectionContainerBase::ButtonDepress(int) */

void __thiscall
ActivityCollectionContainerBase::ButtonDepress(ActivityCollectionContainerBase *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* ActivityCollectionContainerBase::Draw(Sexy::Graphics*) */

void __thiscall
ActivityCollectionContainerBase::Draw(ActivityCollectionContainerBase *this,Graphics *param_1)

{
  nop();
  (**(code **)(*(long *)this + 0x328))(this,param_1);
  (**(code **)(*(long *)this + 0x330))
            (this,param_1,*(undefined4 *)(this + 0x108),*(undefined4 *)(this + 0x10c));
  (**(code **)(*(long *)this + 0x338))
            (this,param_1,*(undefined4 *)(this + 0x13c),*(undefined4 *)(this + 0x140));
  (**(code **)(*(long *)this + 0x340))
            (this,param_1,*(undefined4 *)(this + 0x1a8),*(undefined4 *)(this + 0x1ac));
  return;
}

