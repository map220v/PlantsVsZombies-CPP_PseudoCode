// Class: UIHappyVaseBreaker


/* UIHappyVaseBreaker::closeDescription() */

void __thiscall UIHappyVaseBreaker::closeDescription(UIHappyVaseBreaker *this)

{
  if (*(long *)(this + 0x1a8) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x1a8))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x1a8));
    *(undefined8 *)(this + 0x1a8) = 0;
  }
  return;
}


/* UIHappyVaseBreaker::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIHappyVaseBreaker::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIHappyVaseBreaker::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UIHappyVaseBreaker::ScrollTargetReached(UIHappyVaseBreaker *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x140));
  return;
}


/* UIHappyVaseBreaker::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIHappyVaseBreaker::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIHappyVaseBreaker::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIHappyVaseBreaker::ScrollTargetInterrupted(UIHappyVaseBreaker *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x140));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIHappyVaseBreaker::GetLayoutName() */

void __thiscall UIHappyVaseBreaker::GetLayoutName(UIHappyVaseBreaker *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIHappyVaseBreaker");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIHappyVaseBreaker::SetRewardGet(int) */

void __thiscall UIHappyVaseBreaker::SetRewardGet(UIHappyVaseBreaker *this,int param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x160);
  uVar4 = 0;
  uVar2 = FUN_03a0ebf4(uVar5,*(undefined8 *)(this + 0x168));
  if (uVar2 != 0) {
    do {
      puVar3 = (undefined8 *)FUN_03a0ec00(uVar5,uVar4);
      if ((HappyVaseDisplayItem *)*puVar3 != (HappyVaseDisplayItem *)0x0) {
        iVar1 = HappyVaseDisplayItem::GetItemID((HappyVaseDisplayItem *)*puVar3);
        if (iVar1 == param_1) {
          puVar3 = (undefined8 *)FUN_03a0ec00(*(undefined8 *)(this + 0x160),uVar4);
          Sexy::PrimeTextWidget::SetDontDrawWhenOffscreen((PrimeTextWidget *)*puVar3,true);
        }
        uVar5 = *(undefined8 *)(this + 0x160);
        uVar2 = FUN_03a0ebf4(uVar5,*(undefined8 *)(this + 0x168));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return;
}


/* UIHappyVaseBreaker::GetHammerNum() */

undefined4 __thiscall UIHappyVaseBreaker::GetHammerNum(UIHappyVaseBreaker *this)

{
  return *(undefined4 *)(this + 0x19c);
}


/* UIHappyVaseBreaker::GetResetHammerNeed() */

undefined4 __thiscall UIHappyVaseBreaker::GetResetHammerNeed(UIHappyVaseBreaker *this)

{
  return *(undefined4 *)(this + 0x198);
}


/* UIHappyVaseBreaker::SetResetHammerNeed(int) */

void __thiscall UIHappyVaseBreaker::SetResetHammerNeed(UIHappyVaseBreaker *this,int param_1)

{
  *(int *)(this + 0x198) = param_1;
  return;
}


/* UIHappyVaseBreaker::IsJackPotId(int) */

undefined8 __thiscall UIHappyVaseBreaker::IsJackPotId(UIHappyVaseBreaker *this,int param_1)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x180);
  lVar1 = FUN_03a0eb38(uVar4,*(undefined8 *)(this + 0x188));
  lVar3 = 0;
  do {
    if (lVar3 == lVar1) {
      return 0;
    }
    piVar2 = (int *)FUN_03a0ec4c(uVar4,lVar3);
    lVar3 = lVar3 + 1;
  } while (*piVar2 != param_1);
  return 1;
}


/* UIHappyVaseBreaker::showDescription() */

void __thiscall UIHappyVaseBreaker::showDescription(UIHappyVaseBreaker *this)

{
  ShowHappyVaseDescriptionUI *this_00;
  
  if (*(long *)(this + 0x1a8) != 0) {
    return;
  }
  this_00 = ::operator_new(0xe0);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  ShowHappyVaseDescriptionUI::ShowHappyVaseDescriptionUI(this_00);
  *(ShowHappyVaseDescriptionUI **)(this + 0x1a8) = this_00;
  ShowHappyVaseDescriptionUI::InitView(this_00);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x1a8));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x1a8));
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal
            (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x1a8));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x1a8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIHappyVaseBreaker::TabSelectionChanged(int) */

void __thiscall UIHappyVaseBreaker::TabSelectionChanged(UIHappyVaseBreaker *this,int param_1)

{
  UIWidgetImage *pUVar1;
  UIWidgetImage *pUVar2;
  string asStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x178) = param_1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIImage_ActiveTime");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_TaskTime");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (*(int *)(this + 0x178) == 1) {
    (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1);
    (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,0);
  }
  else {
    (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,0);
    (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIHappyVaseBreaker::TabSelectionChanged(int) */

void __thiscall UIHappyVaseBreaker::TabSelectionChanged(UIHappyVaseBreaker *this,int param_1)

{
  TabSelectionChanged(this + -0x138,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIHappyVaseBreaker::SwitchTaskWidget(int) */

void __thiscall UIHappyVaseBreaker::SwitchTaskWidget(UIHappyVaseBreaker *this,int param_1)

{
  UIWidgetImage *pUVar1;
  UIWidgetImage *pUVar2;
  UIWidgetImage *pUVar3;
  UIWidgetImage *pUVar4;
  UIWidgetImage *pUVar5;
  UIWidgetImage *pUVar6;
  undefined8 uVar7;
  long lVar8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x1a0) = param_1;
  std::string::string(asStack_10,"UIImage_Task1");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_Task2");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_Task3");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_Day");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_Week");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_Season");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (param_1 == 1) {
    (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,1);
    (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,0);
    (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,0);
    (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,1);
    lVar8 = *(long *)pUVar5;
    uVar7 = 0;
  }
  else {
    if (param_1 != 2) {
      if (param_1 == 3) {
        (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,0);
        (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,0);
        (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,1);
        (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,0);
        (**(code **)(*(long *)pUVar5 + 0x158))(pUVar5,0);
        (**(code **)(*(long *)pUVar6 + 0x158))(pUVar6,1);
      }
      goto LAB_03a10a9c;
    }
    (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,0);
    (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,1);
    (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,0);
    (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,0);
    lVar8 = *(long *)pUVar5;
    uVar7 = 1;
  }
  (**(code **)(lVar8 + 0x158))(pUVar5,uVar7);
  (**(code **)(*(long *)pUVar6 + 0x158))(pUVar6,0);
LAB_03a10a9c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIHappyVaseBreaker::SetHammerNum(int) */

void __thiscall UIHappyVaseBreaker::SetHammerNum(UIHappyVaseBreaker *this,int param_1)

{
  UIWidgetText *this_00;
  int local_24 [5];
  string asStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x19c) = param_1;
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  std::string::string(asStack_10,"UIText_3");
  this_00 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (UIWidgetText *)0x0) {
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_24);
    UIWidgetText::SetString(this_00,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIHappyVaseBreaker::UnlockOperation() */

void __thiscall UIHappyVaseBreaker::UnlockOperation(UIHappyVaseBreaker *this)

{
  ulong uVar1;
  long *plVar2;
  PVZ2UIButton *pPVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  string asStack_10 [8];
  long local_8;
  
  uVar5 = *(undefined8 *)(this + 0x148);
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_03a0ebe0(uVar5,*(undefined8 *)(this + 0x150));
  if (uVar1 != 0) {
    do {
      plVar2 = (long *)FUN_03a0ebec(uVar5,uVar4);
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x188))(plVar2,0);
        uVar5 = *(undefined8 *)(this + 0x148);
        uVar1 = FUN_03a0ebe0(uVar5,*(undefined8 *)(this + 0x150));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  std::string::string(asStack_10,"UIButton_Reset");
  pPVar3 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar3 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar3 + 0x188))(pPVar3,0);
  }
  std::string::string(asStack_10,"UIButton_Close");
  pPVar3 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar3 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar3 + 0x188))(pPVar3,0);
  }
  uVar6 = PVZ_EOT();
  *(undefined4 *)(this + 0x1a4) = uVar6;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIHappyVaseBreaker::LockOperation() */

void __thiscall UIHappyVaseBreaker::LockOperation(UIHappyVaseBreaker *this)

{
  ulong uVar1;
  long *plVar2;
  PVZ2UIButton *pPVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  string asStack_10 [8];
  long local_8;
  
  uVar5 = *(undefined8 *)(this + 0x148);
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_03a0ebe0(uVar5,*(undefined8 *)(this + 0x150));
  if (uVar1 != 0) {
    do {
      plVar2 = (long *)FUN_03a0ebec(uVar5,uVar4);
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x188))(plVar2,1);
        uVar5 = *(undefined8 *)(this + 0x148);
        uVar1 = FUN_03a0ebe0(uVar5,*(undefined8 *)(this + 0x150));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  std::string::string(asStack_10,"UIButton_Reset");
  pPVar3 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar3 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar3 + 0x188))(pPVar3,1);
  }
  std::string::string(asStack_10,"UIButton_Close");
  pPVar3 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar3 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar3 + 0x188))(pPVar3,1);
  }
  fVar6 = (float)PVZ_T();
  *(float *)(this + 0x1a4) = fVar6 + 5.0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIHappyVaseBreaker::ButtonDepress(int) */

void __thiscall UIHappyVaseBreaker::ButtonDepress(UIHappyVaseBreaker *this,int param_1)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x66) {
    showDescription(this);
  }
  else if (param_1 < 0x67) {
    if (param_1 == 0x58) {
      UISingletonDialog<UIHappyVaseBreaker>::CloseDialog();
    }
    else if ((param_1 == 100) &&
            (this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog(),
            this_00 != (UIMessageBox *)0x0)) {
      UIMessageBox::SetShowType(this_00,6);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[HAPPY_VASE_BREAKER_RESET_CONFIRM]");
      TodReplaceNumberString(awStack_58,L"{NUM}",*(int *)(this + 0x198));
      FUN_054766c8(awStack_58,asStack_50);
      FUN_05476c50(asStack_50);
      UIMessageBox::SetMessage(this_00,awStack_58,awStack_60);
      std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar1 = (Image *)StringHelper::ToImage(asStack_50,false);
      UIMessageBox::SetBackground(this_00,pIVar1);
      std::string::~string(asStack_50);
      nop();
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,ResetConfirm);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<UIHappyVaseBreaker,void(UIHappyVaseBreaker::*)(UIMessageBox*,int)>
                (aDStack_38,asStack_50);
      UIMessageBox::SetCallback(this_00,aDStack_38);
      FUN_05476c50(awStack_58);
      FUN_05476c50(awStack_60);
    }
  }
  else if (param_1 == 0x104) {
    SwitchTaskWidget(this,2);
  }
  else if (param_1 == 0x10e) {
    SwitchTaskWidget(this,3);
  }
  else if (param_1 == 0xfa) {
    SwitchTaskWidget(this,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIHappyVaseBreaker::ButtonDepress(int) */

void __thiscall UIHappyVaseBreaker::ButtonDepress(UIHappyVaseBreaker *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIHappyVaseBreaker::UIHappyVaseBreaker() */

void __thiscall UIHappyVaseBreaker::UIHappyVaseBreaker(UIHappyVaseBreaker *this)

{
  LawnApp *pLVar1;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIHappyVaseBreaker>::UISingletonDialog
            ((UISingletonDialog<UIHappyVaseBreaker> *)this);
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x138));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x140));
  *(undefined ***)this = &PTR_GetClass_066fba70;
  *(undefined **)(this + 0xd8) = &DAT_066fbdd8;
  *(undefined **)(this + 0x138) = &DAT_066fbe20;
  *(undefined ***)(this + 0x140) = &PTR__UIHappyVaseBreaker_066fbe38;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160));
  *(undefined4 *)(this + 0x178) = 1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x180));
  *(undefined4 *)(this + 0x1a0) = 1;
  *(undefined4 *)(this + 0x19c) = 0;
  uVar2 = PVZ_EOT();
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1a4) = uVar2;
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
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_Plant");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigAvatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UPDATE_UI_HeadShot_BigAvatar");
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
/* UIHappyVaseBreaker::~UIHappyVaseBreaker() */

void __thiscall UIHappyVaseBreaker::~UIHappyVaseBreaker(UIHappyVaseBreaker *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_066fbdd8;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066fba70;
  *(undefined **)(this + 0x138) = &DAT_066fbe20;
  *(undefined ***)(this + 0x140) = &PTR__UIHappyVaseBreaker_066fbe38;
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
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_Plant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UPDATE_UI_HeadShot_BigAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x180));
  std::vector<HappyVaseDisplayItem*,std::allocator<HappyVaseDisplayItem*>>::~vector
            ((vector<HappyVaseDisplayItem*,std::allocator<HappyVaseDisplayItem*>> *)(this + 0x160));
  std::vector<HappyVaseAnimWidget*,std::allocator<HappyVaseAnimWidget*>>::~vector
            ((vector<HappyVaseAnimWidget*,std::allocator<HappyVaseAnimWidget*>> *)(this + 0x148));
  UISingletonDialog<UIHappyVaseBreaker>::~UISingletonDialog
            ((UISingletonDialog<UIHappyVaseBreaker> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIHappyVaseBreaker::~UIHappyVaseBreaker() */

void __thiscall UIHappyVaseBreaker::~UIHappyVaseBreaker(UIHappyVaseBreaker *this)

{
  ~UIHappyVaseBreaker(this + -0x140);
  return;
}


/* UIHappyVaseBreaker::~UIHappyVaseBreaker() */

void __thiscall UIHappyVaseBreaker::~UIHappyVaseBreaker(UIHappyVaseBreaker *this)

{
  ~UIHappyVaseBreaker(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIHappyVaseBreaker::~UIHappyVaseBreaker() */

void __thiscall UIHappyVaseBreaker::~UIHappyVaseBreaker(UIHappyVaseBreaker *this)

{
  ~UIHappyVaseBreaker(this + -0x140);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIHappyVaseBreaker::InitTasks() */

void __thiscall UIHappyVaseBreaker::InitTasks(UIHappyVaseBreaker *this)

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
      iVar2 = FUN_03a0fa3c(0);
      Sexy::Insets::Insets(aIStack_48,iVar2,iVar2,*(int *)(pUVar5 + 0x50),*(int *)(pUVar5 + 0x54));
      (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_48);
      Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
      (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_48);
      iVar3 = FUN_03a0fa3c(0);
      iVar2 = *(int *)(this_00 + 0x50);
      iVar13 = (int)((float)(*(int *)(this_00 + 0x54) + iVar3 * -2) * 0.4);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
      iVar4 = Sexy::LazySingleton<HappyVaseBreakerTaskManager>::GetInstancePtr();
      HappyVaseBreakerTaskManager::GetTasksByGroupID(iVar4,SUB41(uVar10,0));
      std::vector<GeneralTask*,std::allocator<GeneralTask*>>::operator=
                ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_38,(vector *)asStack_20
                );
      std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
                ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)asStack_20);
      uVar12 = 0;
      while( true ) {
        uVar1 = local_38;
        uVar9 = FUN_03a0ec38(local_38,local_30);
        if (uVar9 <= uVar12) break;
        plVar6 = (long *)FUN_03a0ec44(uVar1,uVar12);
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar6 + 0x20));
        lVar7 = (**(code **)(*plVar6 + 0x58))();
        FUN_03a0eacc(*(undefined8 *)(lVar7 + 0x18));
        nop();
        iVar4 = FUN_03a0fa3c(5);
        Sexy::Insets::Insets
                  ((Insets *)asStack_20,iVar3,iVar3 + (iVar4 + iVar13) * (int)uVar12,iVar2,iVar13);
        (**(code **)(*extraout_x0 + 0x1a0))(extraout_x0,asStack_20);
        (**(code **)(*(long *)this_01 + 0x60))(this_01,extraout_x0);
        puVar8 = (undefined8 *)FUN_03a0ec44(local_38,uVar12);
        (**(code **)(*extraout_x0 + 0x318))(extraout_x0,*puVar8);
        uVar12 = uVar12 + 1;
      }
      iVar2 = FUN_03a0fa3c(5);
      pcVar11 = *(code **)(*(long *)pUVar5 + 0x60);
      *(int *)(this_01 + 0x54) = iVar3 + (iVar2 + iVar13) * (int)uVar9;
      (*pcVar11)(pUVar5,this_00);
      (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
      if (uVar10 != 1) {
        (**(code **)(*(long *)pUVar5 + 0x158))(pUVar5,0);
      }
      std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
                ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_38);
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 != 4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIHappyVaseBreaker::SetJackPotId(std::vector<int, std::allocator<int> > const&) */

void __thiscall UIHappyVaseBreaker::SetJackPotId(UIHappyVaseBreaker *this,vector *param_1)

{
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x180),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIHappyVaseBreaker::VaseReset(int) */

void __thiscall UIHappyVaseBreaker::VaseReset(UIHappyVaseBreaker *this,int param_1)

{
  undefined8 uVar1;
  DNetwork *this_00;
  int local_d54 [5];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1960];
  string asStack_540 [1336];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_d54[0] = param_1;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"f");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d54);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03a0f9e0(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_540,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* UIHappyVaseBreaker::CheckReset() */

void __thiscall UIHappyVaseBreaker::CheckReset(UIHappyVaseBreaker *this)

{
  char cVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(this + 0x148);
  uVar6 = *(undefined8 *)(this + 0x150);
  uVar2 = FUN_03a0ebe0(uVar5,uVar6);
  uVar4 = 0;
  if (uVar2 == 0) {
    return;
  }
  do {
    if (uVar2 <= uVar4) {
      VaseReset(this,1);
      return;
    }
    puVar3 = (undefined8 *)FUN_03a0ebec(uVar5,uVar4);
    if ((GoldenEggAnimWidget *)*puVar3 != (GoldenEggAnimWidget *)0x0) {
      cVar1 = GoldenEggAnimWidget::IsBroken((GoldenEggAnimWidget *)*puVar3);
      if (cVar1 == '\0') {
        return;
      }
      uVar5 = *(undefined8 *)(this + 0x148);
      uVar6 = *(undefined8 *)(this + 0x150);
    }
    uVar2 = FUN_03a0ebe0(uVar5,uVar6);
    uVar4 = uVar4 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIHappyVaseBreaker::ResetConfirm(UIMessageBox*, int) */

void __thiscall
UIHappyVaseBreaker::ResetConfirm(UIHappyVaseBreaker *this,UIMessageBox *param_1,int param_2)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  long lVar2;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    if (*(int *)(this + 0x19c) < *(int *)(this + 0x198)) {
      this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_00 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_00,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[HAPPY_VASE_BREAKER_NOT_ENOUGH]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(this_00,awStack_20,awStack_28);
        std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar1 = (Image *)StringHelper::ToImage(asStack_10,false);
        UIMessageBox::SetBackground(this_00,pIVar1);
        std::string::~string(asStack_10);
        nop();
        lVar2 = UIMessageBox::GetButtonCancel(this_00);
        thunk_FUN_05477b9c(lVar2 + 0xd8,auStack_18);
        FUN_05476c50(auStack_18);
        FUN_05476c50(awStack_20);
        FUN_05476c50(awStack_28);
      }
    }
    else {
      VaseReset(this,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIHappyVaseBreaker::InitVases(std::vector<HappyVaseItem, std::allocator<HappyVaseItem> > const&,
   std::vector<int, std::allocator<int> > const&, std::vector<int, std::allocator<int> > const&) */

void __thiscall
UIHappyVaseBreaker::InitVases
          (UIHappyVaseBreaker *this,vector *param_1,vector *param_2,vector *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  UIWidgetImage *pUVar10;
  PVZ2UIScrollingWidget *pPVar11;
  Widget *pWVar12;
  HappyVaseAnimWidget *pHVar13;
  HappyVaseDisplayItem *this_00;
  int *piVar14;
  undefined4 *puVar15;
  long lVar16;
  code *pcVar17;
  ulong uVar18;
  undefined8 uVar19;
  uint uVar20;
  vector *local_28;
  HappyVaseAnimWidget *local_20;
  string asStack_18 [16];
  long local_8;
  
  uVar19 = *(undefined8 *)(this + 0x148);
  uVar18 = 0;
  local_8 = ___stack_chk_guard;
  uVar8 = FUN_03a0ebe0(uVar19,*(undefined8 *)(this + 0x150));
  if (uVar8 != 0) {
    do {
      plVar9 = (long *)FUN_03a0ebec(uVar19,uVar18);
      if (*plVar9 != 0) {
        plVar9 = *(long **)(*plVar9 + 0x20);
        (**(code **)(*plVar9 + 0x68))(plVar9);
        uVar19 = *(undefined8 *)(this + 0x148);
        uVar8 = FUN_03a0ebe0(uVar19,*(undefined8 *)(this + 0x150));
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar8);
  }
  uVar19 = *(undefined8 *)(this + 0x160);
  uVar18 = 0;
  uVar8 = FUN_03a0ebf4(uVar19,*(undefined8 *)(this + 0x168));
  if (uVar8 != 0) {
    do {
      plVar9 = (long *)FUN_03a0ec00(uVar19,uVar18);
      if (*plVar9 != 0) {
        plVar9 = *(long **)(*plVar9 + 0x20);
        (**(code **)(*plVar9 + 0x68))(plVar9);
        uVar19 = *(undefined8 *)(this + 0x160);
        uVar8 = FUN_03a0ebf4(uVar19,*(undefined8 *)(this + 0x168));
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar8);
  }
  std::vector<HappyVaseAnimWidget*,std::allocator<HappyVaseAnimWidget*>>::clear
            ((vector<HappyVaseAnimWidget*,std::allocator<HappyVaseAnimWidget*>> *)(this + 0x148));
  std::vector<HappyVaseDisplayItem*,std::allocator<HappyVaseDisplayItem*>>::clear
            ((vector<HappyVaseDisplayItem*,std::allocator<HappyVaseDisplayItem*>> *)(this + 0x160));
  std::string::string(asStack_18,"UIImage_BG");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  iVar2 = FUN_03a0fa3c(100);
  iVar3 = FUN_03a0fa3c(5);
  iVar4 = FUN_03a0fa3c(0x14);
  pPVar11 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(pPVar11,(ScrollWidgetListener *)(this + 0x140));
  (**(code **)(*(long *)pUVar10 + 0x60))(pUVar10,pPVar11);
  (**(code **)(*(long *)pPVar11 + 0x198))
            (pPVar11,0,0,*(undefined4 *)(pUVar10 + 0x50),*(undefined4 *)(pUVar10 + 0x54));
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)pPVar11,1);
  pWVar12 = ::operator_new(0xd8);
  Sexy::Widget::Widget(pWVar12);
  iVar5 = FUN_03a0fa3c(10);
  (**(code **)(*(long *)pWVar12 + 0x198))
            (pWVar12,iVar5,0,*(int *)(pUVar10 + 0x50) - iVar5,*(undefined4 *)(pUVar10 + 0x54));
  iVar5 = *(int *)(pUVar10 + 0x50) + iVar2 * -2 + iVar4 * -3;
  iVar7 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar7 = iVar5;
  }
  iVar5 = (*(int *)(pUVar10 + 0x54) + iVar3 * -3) / 2;
  uVar18 = 0;
  while( true ) {
    uVar20 = (uint)uVar18;
    uVar8 = FUN_03a0eb38(*(undefined8 *)param_3,*(undefined8 *)(param_3 + 8));
    if (uVar8 <= uVar18) break;
    Sexy::Insets::Insets
              ((Insets *)asStack_18,iVar2 + (uVar20 & 3) * ((iVar7 >> 2) + iVar4),
               iVar3 + ((int)uVar20 >> 2) * (iVar3 + iVar5),iVar7 >> 2,iVar5);
    pHVar13 = ::operator_new(0x130);
    HappyVaseAnimWidget::HappyVaseAnimWidget(pHVar13);
    local_20 = pHVar13;
    (**(code **)(*(long *)pHVar13 + 0x1a0))(pHVar13,asStack_18);
    pHVar13 = local_20;
    piVar14 = (int *)FUN_03a0eb44(*(undefined8 *)param_3,uVar18);
    HappyVaseAnimWidget::Init(pHVar13,uVar20,*piVar14 == 1);
    std::vector<HappyVaseAnimWidget*,std::allocator<HappyVaseAnimWidget*>>::push_back
              ((vector<HappyVaseAnimWidget*,std::allocator<HappyVaseAnimWidget*>> *)(this + 0x148),
               &local_20);
    (**(code **)(*(long *)pWVar12 + 0x60))(pWVar12,local_20);
    uVar18 = uVar18 + 1;
  }
  lVar16 = *(long *)pPVar11;
  *(undefined4 *)(pWVar12 + 0x50) = *(undefined4 *)(pUVar10 + 0x50);
  (**(code **)(lVar16 + 0x60))(pPVar11,pWVar12);
  local_28 = param_2;
  std::string::string(asStack_18,"UIImage_Right");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  pPVar11 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(pPVar11,(ScrollWidgetListener *)(this + 0x140));
  (**(code **)(*(long *)pUVar10 + 0x60))(pUVar10,pPVar11);
  uVar6 = FUN_03a0fa3c(5);
  iVar5 = FUN_03a0fa3c(10);
  (**(code **)(*(long *)pPVar11 + 0x198))
            (pPVar11,uVar6,0,*(int *)(pUVar10 + 0x50) - iVar5,*(undefined4 *)(pUVar10 + 0x54));
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)pPVar11,1);
  pWVar12 = ::operator_new(0xd8);
  Sexy::Widget::Widget(pWVar12);
  (**(code **)(*(long *)pWVar12 + 0x198))
            (pWVar12,0,0,*(undefined4 *)(pPVar11 + 0x50),*(undefined4 *)(pPVar11 + 0x54));
  iVar7 = FUN_03a0fa3c(8);
  iVar5 = FUN_03a0fa3c(0x1e);
  iVar5 = *(int *)(pUVar10 + 0x54) - iVar5;
  uVar18 = 0;
  while( true ) {
    uVar8 = FUN_03a0ec08(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
    if (uVar8 <= uVar18) break;
    iVar2 = FUN_03a0fa3c(0xf);
    Sexy::Insets::Insets
              ((Insets *)asStack_18,((uint)uVar18 & 7) * (iVar7 + iVar5),iVar2,iVar5,iVar5);
    this_00 = ::operator_new(0x108);
    HappyVaseDisplayItem::HappyVaseDisplayItem(this_00);
    local_20 = (HappyVaseAnimWidget *)this_00;
    (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_18);
    pHVar13 = local_20;
    piVar14 = (int *)FUN_03a0ec30(*(undefined8 *)param_1,uVar18);
    HappyVaseDisplayItem::Init((HappyVaseDisplayItem *)pHVar13,*piVar14,piVar14[1]);
    pHVar13 = local_20;
    puVar15 = (undefined4 *)FUN_03a0ec30(*(undefined8 *)param_1,uVar18);
    bVar1 = (bool)FUN_03a0eb4c(&local_28,*puVar15);
    Sexy::PrimeTextWidget::SetDontDrawWhenOffscreen((PrimeTextWidget *)pHVar13,bVar1);
    std::vector<HappyVaseDisplayItem*,std::allocator<HappyVaseDisplayItem*>>::push_back
              ((vector<HappyVaseDisplayItem*,std::allocator<HappyVaseDisplayItem*>> *)(this + 0x160)
               ,(HappyVaseDisplayItem **)&local_20);
    (**(code **)(*(long *)pWVar12 + 0x60))(pWVar12,local_20);
    uVar18 = uVar18 + 1;
  }
  pcVar17 = *(code **)(*(long *)pPVar11 + 0x60);
  *(int *)(pWVar12 + 0x50) = (iVar7 + iVar5) * 8;
  (*pcVar17)(pPVar11,pWVar12);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIHappyVaseBreaker::GetVaseBreakHammerNeed() */

void __thiscall UIHappyVaseBreaker::GetVaseBreakHammerNeed(UIHappyVaseBreaker *this)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ActiveItem aAStack_1c0 [8];
  undefined4 local_1b8;
  char local_1a8;
  HappyVaseBreakerData aHStack_140 [272];
  undefined8 local_30;
  undefined8 local_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0xffffffff;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03a0eb2c(local_1b8);
  if ((cVar1 != '\0') && (local_1a8 != '\0')) {
    HappyVaseBreakerData::HappyVaseBreakerData(aHStack_140);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_1c0,(RtObject *)aHStack_140);
    if (cVar1 != '\0') {
      uVar8 = *(undefined8 *)(this + 0x148);
      uVar7 = 0;
      iVar2 = 0;
      uVar3 = FUN_03a0ebe0(uVar8,*(undefined8 *)(this + 0x150));
      if (uVar3 != 0) {
        do {
          puVar4 = (undefined8 *)FUN_03a0ebec(uVar8,uVar7);
          if ((GoldenEggAnimWidget *)*puVar4 != (GoldenEggAnimWidget *)0x0) {
            cVar1 = GoldenEggAnimWidget::IsBroken((GoldenEggAnimWidget *)*puVar4);
            uVar8 = *(undefined8 *)(this + 0x148);
            if (cVar1 != '\0') {
              iVar2 = iVar2 + 1;
            }
            uVar3 = FUN_03a0ebe0(uVar8,*(undefined8 *)(this + 0x150));
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar3);
      }
      uVar7 = FUN_03a0eb38(local_30,local_28);
      if ((ulong)(long)iVar2 < uVar7) {
        puVar5 = (undefined4 *)FUN_03a0ec4c(local_30,(long)iVar2);
        uVar6 = *puVar5;
        HappyVaseBreakerData::~HappyVaseBreakerData(aHStack_140);
        goto LAB_03a150d0;
      }
    }
    uVar6 = 0xffffffff;
    HappyVaseBreakerData::~HappyVaseBreakerData(aHStack_140);
  }
LAB_03a150d0:
  ActiveItem::~ActiveItem(aAStack_1c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIHappyVaseBreaker::UpdateTimer() */

void __thiscall UIHappyVaseBreaker::UpdateTimer(UIHappyVaseBreaker *this)

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
  cVar1 = FUN_03a0eb2c(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    local_98[0] = ActiveItem::GetLeftDays(aAStack_88);
    std::string::string(asStack_90,"UIText_ActiveTime");
    pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_90);
    std::string::~string(asStack_90);
    nop();
    if (pUVar3 != (UIWidgetText *)0x0) {
      std::to_string<ActivityTypeID>((ActivityTypeID *)local_98);
      UIWidgetText::SetString(pUVar3,asStack_90);
      std::string::~string(asStack_90);
    }
  }
  std::string::string(asStack_90,"UIText_TaskTime");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_90);
  std::string::~string(asStack_90);
  nop();
  if (*(int *)(this + 0x1a0) - 1U < 2) {
    fVar4 = (float)TimeUtil::GetTimeCountdown(1,0x2a26);
  }
  else {
    if (*(int *)(this + 0x1a0) != 3) {
      FUN_05476574(auStack_a0);
      goto LAB_03a156ac;
    }
    fVar4 = (float)TimeUtil::GetTimeCountdown(3,0x2a26);
  }
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
        if (iVar2 < 1) goto LAB_03a156ac;
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
LAB_03a156ac:
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
/* UIHappyVaseBreaker::InitView() */

void __thiscall UIHappyVaseBreaker::InitView(UIHappyVaseBreaker *this)

{
  char cVar1;
  int iVar2;
  ActiveItem aAStack_1c0 [8];
  undefined4 local_1b8;
  char local_1a8;
  HappyVaseBreakerData aHStack_140 [20];
  int local_12c;
  vector avStack_120 [24];
  vector avStack_108 [24];
  vector avStack_f0 [24];
  vector avStack_d8 [192];
  int local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03a0eb2c(local_1b8);
  if ((cVar1 != '\0') && (local_1a8 != '\0')) {
    HappyVaseBreakerData::HappyVaseBreakerData(aHStack_140);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_1c0,(RtObject *)aHStack_140);
    if (cVar1 != '\0') {
      MessageRouter::Post<int,int>
                ((MessageRouter *)gMessageRouter,Message::SetDailyGemsRecharge,100);
      MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::SetGemsRecharge,1000);
      SetJackPotId(this,avStack_120);
      SetHammerNum(this,local_12c);
      SetResetHammerNeed(this,local_18);
      (**(code **)(*(long *)this + 0x350))(this,1);
      SwitchTaskWidget(this,1);
      InitVases(this,avStack_f0,avStack_d8,avStack_108);
      InitTasks(this);
    }
    HappyVaseBreakerData::~HappyVaseBreakerData(aHStack_140);
  }
  ActiveItem::~ActiveItem(aAStack_1c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIHappyVaseBreaker::Update() */

void __thiscall UIHappyVaseBreaker::Update(UIHappyVaseBreaker *this)

{
  float fVar1;
  float fVar2;
  
  Sexy::WidgetContainer::Update((WidgetContainer *)this);
  UpdateTimer(this);
  fVar2 = *(float *)(this + 0x1a4);
  fVar1 = (float)PVZ_T();
  if (fVar1 <= fVar2) {
    return;
  }
  UnlockOperation(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIHappyVaseBreaker::OnCreate() */

void __thiscall UIHappyVaseBreaker::OnCreate(UIHappyVaseBreaker *this)

{
  UIWidgetBackground *pUVar1;
  HappyVaseBreakerTaskManager *this_00;
  UITabControl *this_01;
  char *__s;
  TGALogMgr *pTVar2;
  TGAHappyVaseBreakerData *__n;
  TGAHappyVaseBreakerData aTStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_40,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  this_00 = (HappyVaseBreakerTaskManager *)
            Sexy::LazySingleton<HappyVaseBreakerTaskManager>::GetInstancePtr();
  HappyVaseBreakerTaskManager::Initialize(this_00);
  __n = aTStack_78;
  std::string::string(asStack_40,"UITabControl_0");
  this_01 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  if (this_01 != (UITabControl *)0x0) {
    UITabControl::SetListener(this_01,(TabControlListener *)(this + 0x138));
  }
  TGAHappyVaseBreakerData::TGAHappyVaseBreakerData(aTStack_78);
  DString::DString((DString *)asStack_40,1);
  __s = (char *)DString::c_str((DString *)asStack_40);
  std::string::append((string *)aTStack_78,__s,(size_t)__n);
  DString::~DString((DString *)asStack_40);
  pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAPlantSpecialOfferData::TGAPlantSpecialOfferData
            ((TGAPlantSpecialOfferData *)asStack_40,(TGAPlantSpecialOfferData *)aTStack_78);
  TGALogMgr::LogHappyVaseBreaker(pTVar2,asStack_40);
  TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)asStack_40);
  InitView(this);
  TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)aTStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

