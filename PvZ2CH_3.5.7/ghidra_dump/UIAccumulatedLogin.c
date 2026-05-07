// Class: UIAccumulatedLogin


/* UIAccumulatedLogin::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIAccumulatedLogin::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIAccumulatedLogin::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UIAccumulatedLogin::ScrollTargetReached(UIAccumulatedLogin *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIAccumulatedLogin::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIAccumulatedLogin::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIAccumulatedLogin::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIAccumulatedLogin::ScrollTargetInterrupted(UIAccumulatedLogin *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAccumulatedLogin::GetLayoutName() */

void __thiscall UIAccumulatedLogin::GetLayoutName(UIAccumulatedLogin *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIAccumulatedLogin");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIAccumulatedLogin::compareFirstTime(int, int) */

bool __thiscall
UIAccumulatedLogin::compareFirstTime(UIAccumulatedLogin *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = true;
  if ((param_1 / 10000 <= param_2 / 10000) && (bVar3 = false, param_2 / 10000 <= param_1 / 10000)) {
    bVar3 = true;
    iVar1 = (param_1 % 10000) / 100;
    iVar2 = (param_2 % 10000) / 100;
    if ((iVar1 <= iVar2) && (bVar3 = false, iVar2 <= iVar1)) {
      bVar3 = param_2 % 100 <= param_1 % 100;
    }
  }
  return bVar3;
}


/* UIAccumulatedLogin::ButtonDepress(int) */

void __thiscall UIAccumulatedLogin::ButtonDepress(UIAccumulatedLogin *this,int param_1)

{
  if (param_1 != 0x58) {
    return;
  }
  UISingletonDialog<UIAccumulatedLogin>::CloseDialog();
  return;
}


/* non-virtual thunk to UIAccumulatedLogin::ButtonDepress(int) */

void __thiscall UIAccumulatedLogin::ButtonDepress(UIAccumulatedLogin *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UIAccumulatedLogin::UIAccumulatedLogin() */

void __thiscall UIAccumulatedLogin::UIAccumulatedLogin(UIAccumulatedLogin *this)

{
  UISingletonDialog<UIAccumulatedLogin>::UISingletonDialog
            ((UISingletonDialog<UIAccumulatedLogin> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_069f4690;
  *(undefined **)(this + 0xd8) = &DAT_069f49f0;
  *(undefined ***)(this + 0x138) = &PTR__UIAccumulatedLogin_069f4a38;
  AccumulatedLoginData::AccumulatedLoginData((AccumulatedLoginData *)(this + 0x140));
  return;
}


/* UIAccumulatedLogin::~UIAccumulatedLogin() */

void __thiscall UIAccumulatedLogin::~UIAccumulatedLogin(UIAccumulatedLogin *this)

{
  *(undefined ***)this = &PTR_GetClass_069f4690;
  *(undefined **)(this + 0xd8) = &DAT_069f49f0;
  *(undefined ***)(this + 0x138) = &PTR__UIAccumulatedLogin_069f4a38;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  AccumulatedLoginData::~AccumulatedLoginData((AccumulatedLoginData *)(this + 0x140));
  UISingletonDialog<UIAccumulatedLogin>::~UISingletonDialog
            ((UISingletonDialog<UIAccumulatedLogin> *)this);
  return;
}


/* non-virtual thunk to UIAccumulatedLogin::~UIAccumulatedLogin() */

void __thiscall UIAccumulatedLogin::~UIAccumulatedLogin(UIAccumulatedLogin *this)

{
  ~UIAccumulatedLogin(this + -0x138);
  return;
}


/* UIAccumulatedLogin::~UIAccumulatedLogin() */

void __thiscall UIAccumulatedLogin::~UIAccumulatedLogin(UIAccumulatedLogin *this)

{
  ~UIAccumulatedLogin(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIAccumulatedLogin::~UIAccumulatedLogin() */

void __thiscall UIAccumulatedLogin::~UIAccumulatedLogin(UIAccumulatedLogin *this)

{
  ~UIAccumulatedLogin(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAccumulatedLogin::InitReward() */

void __thiscall UIAccumulatedLogin::InitReward(UIAccumulatedLogin *this)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  int *piVar8;
  ulong uVar9;
  AccumulatedLoginReward *this_02;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  ulong uVar13;
  int iVar14;
  int *local_38;
  Insets aIStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar14 = 0;
  std::string::string(asStack_18,"Widget_Scroll");
  plVar7 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  iVar2 = FUN_04eb9b74(0);
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar2,(int)plVar7[10],*(int *)((long)plVar7 + 0x54));
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_28);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  uVar3 = FUN_04eb9b74(0);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,uVar3,uVar3,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar4 = FUN_04eb9b74(0xf);
  iVar5 = FUN_04eb9b74(200);
  iVar2 = *(int *)(this_01 + 0x54);
  for (uVar13 = 0; uVar9 = FUN_04eb9874(*(undefined8 *)(this + 0x158),*(undefined8 *)(this + 0x160))
      , uVar13 < uVar9; uVar13 = uVar13 + 1) {
    uVar9 = FUN_04eb9868(*(undefined8 *)(this + 0x188),*(undefined8 *)(this + 400));
    if (uVar13 < uVar9) {
      this_02 = ::operator_new(0x108);
      AccumulatedLoginReward::AccumulatedLoginReward(this_02);
      Sexy::Insets::Insets((Insets *)asStack_18,iVar14,0,iVar5,iVar2);
      (**(code **)(*(long *)this_02 + 0x1a0))(this_02,asStack_18);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
      local_38 = (int *)FUN_04eb9894(*(undefined8 *)(this + 0x170),uVar13);
      piVar8 = (int *)FUN_04eb9894(*(undefined8 *)(this + 0x188),uVar13);
      uVar11 = *(undefined8 *)(this + 0x160);
      uVar10 = *(undefined8 *)(this + 0x158);
      uVar1 = *piVar8 < *(int *)(this + 0x154);
    }
    else {
      uVar1 = compareFirstTime(this,*(int *)(this + 0x1a0),*(int *)(this + 0x1a4));
      this_02 = ::operator_new(0x108);
      AccumulatedLoginReward::AccumulatedLoginReward(this_02);
      Sexy::Insets::Insets((Insets *)asStack_18,iVar14,0,iVar5,iVar2);
      (**(code **)(*(long *)this_02 + 0x1a0))(this_02,asStack_18);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
      local_38 = (int *)FUN_04eb9894(*(undefined8 *)(this + 0x170),uVar13);
      uVar11 = *(undefined8 *)(this + 0x160);
      uVar10 = *(undefined8 *)(this + 0x158);
    }
    iVar6 = FUN_04eb9874(uVar10,uVar11);
    iVar14 = iVar14 + iVar4 + iVar5;
    AccumulatedLoginReward::InitView(this_02,(int)uVar13,*local_38,(bool)uVar1,false,iVar6);
  }
  pcVar12 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_01 + 0x50) = (int)uVar9 * (iVar4 + iVar5) - iVar4;
  (*pcVar12)(this_00,this_01);
  (**(code **)(*plVar7 + 0x60))(plVar7,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAccumulatedLogin::InitView() */

void __thiscall UIAccumulatedLogin::InitView(UIAccumulatedLogin *this)

{
  AccumulatedLoginManager *this_00;
  long lVar1;
  UIWidgetImage *this_01;
  UIWidgetText *this_02;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (AccumulatedLoginManager *)
            Sexy::LazySingleton<AccumulatedLoginManager>::GetInstancePtr();
  AccumulatedLoginManager::LoadData(this_00);
  lVar1 = Sexy::LazySingleton<AccumulatedLoginManager>::GetInstancePtr();
  AccumulatedLoginData::operator=
            ((AccumulatedLoginData *)(this + 0x140),(AccumulatedLoginData *)(lVar1 + 0x10));
  std::string::string(asStack_18,"UIImage_Banner_Background");
  this_01 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::string(asStack_10,"IMAGE_UI_ACCUMULATEDLOGIN_BG_BANNER");
  UIWidgetImage::SetImage(this_01,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_BannerText");
  this_02 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x154));
  UIWidgetText::SetString(this_02,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  InitReward(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAccumulatedLogin::OnCreate() */

void __thiscall UIAccumulatedLogin::OnCreate(UIAccumulatedLogin *this)

{
  UIWidgetBackground *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

