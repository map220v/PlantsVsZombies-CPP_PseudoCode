// Class: AdaptiveMessageBox


/* AdaptiveMessageBox::SetConfirmFunction(std::function<void ()>) */

void __thiscall AdaptiveMessageBox::SetConfirmFunction(AdaptiveMessageBox *this,function *param_2)

{
  std::function<void()>::operator=((function<void()> *)(this + 0x140),param_2);
  return;
}


/* AdaptiveMessageBox::AdaptiveMessageBox() */

void __thiscall AdaptiveMessageBox::AdaptiveMessageBox(AdaptiveMessageBox *this)

{
  UISingletonDialog<AdaptiveMessageBox>::UISingletonDialog
            ((UISingletonDialog<AdaptiveMessageBox> *)this);
  *(undefined ***)this = &PTR_GetClass_06a29980;
  *(undefined **)(this + 0xd8) = &DAT_06a29cd0;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x140));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x160));
  return;
}


/* AdaptiveMessageBox::SetCloseFunction(std::function<void ()>) */

void __thiscall AdaptiveMessageBox::SetCloseFunction(AdaptiveMessageBox *this,function *param_2)

{
  std::function<void()>::operator=((function<void()> *)(this + 0x160),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptiveMessageBox::GetLayoutName() */

void __thiscall AdaptiveMessageBox::GetLayoutName(AdaptiveMessageBox *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"AdaptiveMessageBox");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* AdaptiveMessageBox::~AdaptiveMessageBox() */

void __thiscall AdaptiveMessageBox::~AdaptiveMessageBox(AdaptiveMessageBox *this)

{
  *(undefined ***)this = &PTR_GetClass_06a29980;
  *(undefined **)(this + 0xd8) = &DAT_06a29cd0;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x160));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x140));
  UISingletonDialog<AdaptiveMessageBox>::~UISingletonDialog
            ((UISingletonDialog<AdaptiveMessageBox> *)this);
  return;
}


/* AdaptiveMessageBox::~AdaptiveMessageBox() */

void __thiscall AdaptiveMessageBox::~AdaptiveMessageBox(AdaptiveMessageBox *this)

{
  ~AdaptiveMessageBox(this);
  AK::FreeHook(this);
  return;
}


/* AdaptiveMessageBox::ButtonDepress(int) */

void __thiscall AdaptiveMessageBox::ButtonDepress(AdaptiveMessageBox *this,int param_1)

{
  if (param_1 == 0xb) {
    std::function<void()>::operator()((function<void()> *)(this + 0x140));
    return;
  }
  if (param_1 == 0x58) {
    std::function<void()>::operator()((function<void()> *)(this + 0x160));
    return;
  }
  return;
}


/* non-virtual thunk to AdaptiveMessageBox::ButtonDepress(int) */

void __thiscall AdaptiveMessageBox::ButtonDepress(AdaptiveMessageBox *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptiveMessageBox::AdaptiveAdjust(int, int) */

void __thiscall AdaptiveMessageBox::AdaptiveAdjust(AdaptiveMessageBox *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  UIWidgetBackground *pUVar3;
  UIWidgetText *pUVar4;
  PVZ2UIButton *pPVar5;
  PVZ2UIButton *pPVar6;
  Widget *pWVar7;
  code *pcVar8;
  long lVar9;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Background_0");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Title");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIButton_Confirm");
  pPVar5 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIButton_Close");
  pPVar6 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Widget_Center");
  pWVar7 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  lVar9 = *(long *)pPVar5;
  iVar1 = param_1 + 3;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  iVar2 = *(int *)(pUVar3 + 0x50);
  *(int *)(pUVar3 + 0x4c) = *(int *)(pUVar3 + 0x4c) - param_2 / 2;
  *(int *)(pUVar3 + 0x48) = *(int *)(pUVar3 + 0x48) - param_1 / 2;
  *(int *)(pUVar3 + 0x50) = param_1 + iVar2;
  *(int *)(pUVar3 + 0x54) = *(int *)(pUVar3 + 0x54) + param_2;
  pcVar8 = *(code **)(lVar9 + 0x1b0);
  *(int *)(pUVar4 + 0x50) = param_1 + iVar2;
  (*pcVar8)(pPVar5,iVar1 >> 2,0);
  (**(code **)(*(long *)pPVar6 + 0x1b0))(pPVar6,-(iVar1 >> 2),0);
  lVar9 = ___stack_chk_guard;
  *(int *)(pWVar7 + 0x50) = *(int *)(pWVar7 + 0x50) + param_1;
  *(int *)(pWVar7 + 0x54) = *(int *)(pWVar7 + 0x54) + param_2;
  if (local_8 == lVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptiveMessageBox::SetContentWidget(Sexy::Widget*) */

void __thiscall AdaptiveMessageBox::SetContentWidget(AdaptiveMessageBox *this,Widget *param_1)

{
  int iVar1;
  int iVar2;
  Widget *pWVar3;
  code *pcVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Widget_Center");
  pWVar3 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  iVar1 = *(int *)(param_1 + 0x54);
  iVar2 = *(int *)(pWVar3 + 0x54);
  if (*(int *)(pWVar3 + 0x50) - *(int *)(param_1 + 0x50) < 0) {
    AdaptiveAdjust(this,-(*(int *)(pWVar3 + 0x50) - *(int *)(param_1 + 0x50)),0);
  }
  if (iVar2 - iVar1 < 0) {
    AdaptiveAdjust(this,0,-(iVar2 - iVar1));
  }
  iVar1 = *(int *)(pWVar3 + 0x50);
  pcVar4 = *(code **)(*(long *)pWVar3 + 0x60);
  *(int *)(param_1 + 0x4c) = (*(int *)(pWVar3 + 0x54) - *(int *)(param_1 + 0x54)) / 2;
  *(int *)(param_1 + 0x48) = (iVar1 - *(int *)(param_1 + 0x50)) / 2;
  (*pcVar4)(pWVar3,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptiveMessageBox::OnCreate() */

void __thiscall AdaptiveMessageBox::OnCreate(AdaptiveMessageBox *this)

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
  FUN_04fb1124(this + 0x140);
  FUN_04fb1190(this + 0x160);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

