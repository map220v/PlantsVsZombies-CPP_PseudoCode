// Class: UINighttheToyAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINighttheToyAction::GetLayoutName() */

void __thiscall UINighttheToyAction::GetLayoutName(UINighttheToyAction *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UINighttheToyAction");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UINighttheToyAction::~UINighttheToyAction() */

void __thiscall UINighttheToyAction::~UINighttheToyAction(UINighttheToyAction *this)

{
  *(undefined ***)this = &PTR_GetClass_066b90f0;
  *(undefined **)(this + 0xd8) = &DAT_066b9440;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  UISingletonDialog<UINighttheToyAction>::~UISingletonDialog
            ((UISingletonDialog<UINighttheToyAction> *)this);
  return;
}


/* UINighttheToyAction::~UINighttheToyAction() */

void __thiscall UINighttheToyAction::~UINighttheToyAction(UINighttheToyAction *this)

{
  ~UINighttheToyAction(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINighttheToyAction::Update() */

void __thiscall UINighttheToyAction::Update(UINighttheToyAction *this)

{
  UIWidgetText *pUVar1;
  float fVar2;
  string asStack_18 [8];
  TimeUtil aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)TimeUtil::GetTimeCountdown(3,0x2a8e);
  if (fVar2 <= 0.0) {
    std::string::string(asStack_18,"UIText_Timer");
    pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
    TodStringTranslate(L"[FINISHED]");
  }
  else {
    std::string::string(asStack_18,"UIText_Timer");
    pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
    TimeUtil::GetTimeCountdown(3,0x2a8e);
    TimeUtil::GetTimeCountdownFormat(aTStack_10,0);
  }
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


/* UINighttheToyAction::UINighttheToyAction() */

void __thiscall UINighttheToyAction::UINighttheToyAction(UINighttheToyAction *this)

{
  UISingletonDialog<UINighttheToyAction>::UISingletonDialog
            ((UISingletonDialog<UINighttheToyAction> *)this);
  *(undefined ***)this = &PTR_GetClass_066b90f0;
  *(undefined **)(this + 0xd8) = &DAT_066b9440;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINighttheToyAction::OnCreate() */

void __thiscall UINighttheToyAction::OnCreate(UINighttheToyAction *this)

{
  UIWidgetBackground *pUVar1;
  UIWidgetImage *this_00;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  std::string::string(asStack_18,"UIImage_Background");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::string(asStack_10,"IMAGE_UI_BATTLEORDER_INTRODUCTION_NIGHTTHETOY");
  UIWidgetImage::SetImage(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* UINighttheToyAction::ButtonDepress(int) */

void __thiscall UINighttheToyAction::ButtonDepress(UINighttheToyAction *this,int param_1)

{
  if (param_1 != 100) {
    if (param_1 != 0x6c) {
      return;
    }
    LawnApp::ShowActivityCollection(gLawnApp);
  }
  UISingletonDialog<UINighttheToyAction>::CloseDialog();
  return;
}


/* non-virtual thunk to UINighttheToyAction::ButtonDepress(int) */

void __thiscall UINighttheToyAction::ButtonDepress(UINighttheToyAction *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

