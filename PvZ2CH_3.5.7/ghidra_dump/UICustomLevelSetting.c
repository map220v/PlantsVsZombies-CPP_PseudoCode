// Class: UICustomLevelSetting


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelSetting::GetLayoutName() */

void __thiscall UICustomLevelSetting::GetLayoutName(UICustomLevelSetting *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UICustomLevelSetting");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UICustomLevelSetting::~UICustomLevelSetting() */

void __thiscall UICustomLevelSetting::~UICustomLevelSetting(UICustomLevelSetting *this)

{
  *(undefined ***)this = &PTR_GetClass_06795ed0;
  *(undefined **)(this + 0xd8) = &DAT_06796220;
  UISingletonDialog<UICustomLevelSetting>::~UISingletonDialog
            ((UISingletonDialog<UICustomLevelSetting> *)this);
  return;
}


/* UICustomLevelSetting::~UICustomLevelSetting() */

void __thiscall UICustomLevelSetting::~UICustomLevelSetting(UICustomLevelSetting *this)

{
  ~UICustomLevelSetting(this);
  AK::FreeHook(this);
  return;
}


/* UICustomLevelSetting::UICustomLevelSetting() */

void __thiscall UICustomLevelSetting::UICustomLevelSetting(UICustomLevelSetting *this)

{
  UISingletonDialog<UICustomLevelSetting>::UISingletonDialog
            ((UISingletonDialog<UICustomLevelSetting> *)this);
  *(undefined ***)this = &PTR_GetClass_06795ed0;
  *(undefined **)(this + 0xd8) = &DAT_06796220;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelSetting::RefreshView() */

void __thiscall UICustomLevelSetting::RefreshView(UICustomLevelSetting *this)

{
  char cVar1;
  int iVar2;
  UIWidgetImage *pUVar3;
  UIWidgetText *pUVar4;
  UIWidgetText *pUVar5;
  UIWidgetText *pUVar6;
  PVZ2UIButton *pPVar7;
  PVZ2UIButton *pPVar8;
  CustomLevelSettingManager *this_00;
  long lVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  code *pcVar13;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIImage_Mask");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_Item2_State");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_Item3_State");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_Item4_State");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar6 + 0x158))(pUVar6,0);
  std::string::string(asStack_18,"UIButton_Item3");
  pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIButton_Item4");
  pPVar8 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  this_00 = (CustomLevelSettingManager *)
            Sexy::LazySingleton<CustomLevelSettingManager>::GetInstancePtr();
  cVar1 = CustomLevelSettingManager::GetLinkState(this_00);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,1);
    (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    (**(code **)(*(long *)pPVar8 + 0x158))(pPVar8,0);
    TodStringTranslate(L"[CUSTOM_LEVEL_SETTING_NOT_LINKED]");
    PuzzleTip::SetTip(pUVar4,asStack_18);
    FUN_05476c50(asStack_18);
    pcVar13 = *(code **)(*(long *)pUVar4 + 0x170);
    Sexy::Color::Color((Color *)asStack_18,0xec,0x1b,0x32);
    (*pcVar13)(pUVar4,0,asStack_18);
    TodStringTranslate(L"[CUSTOM_LEVEL_SETTING_MUST_LINKED]");
    PuzzleTip::SetTip(pUVar5,asStack_18);
    FUN_05476c50(asStack_18);
    pcVar13 = *(code **)(*(long *)pUVar5 + 0x170);
    Sexy::Color::Color((Color *)asStack_18,0xec,0x1b,0x32);
    (*pcVar13)(pUVar5,0,asStack_18);
    TodStringTranslate(L"[CUSTOM_LEVEL_SETTING_MUST_LINKED]");
    PuzzleTip::SetTip(pUVar6,asStack_18);
    FUN_05476c50(asStack_18);
    pcVar13 = *(code **)(*(long *)pUVar6 + 0x170);
    Sexy::Color::Color((Color *)asStack_18,0xec,0x1b,0x32);
    (*pcVar13)(pUVar6,0,asStack_18);
  }
  else {
    (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,0);
    (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,1);
    (**(code **)(*(long *)pPVar8 + 0x158))(pPVar8,1);
    TodStringTranslate(L"[CUSTOM_LEVEL_SETTING_LINKED]");
    PuzzleTip::SetTip(pUVar4,asStack_18);
    FUN_05476c50(asStack_18);
    pcVar13 = *(code **)(*(long *)pUVar4 + 0x170);
    Sexy::Color::Color((Color *)asStack_18,0x4d,0x80,0);
    (*pcVar13)(pUVar4,0,asStack_18);
    lVar9 = Sexy::LazySingleton<CustomLevelSettingManager>::GetInstancePtr();
    iVar2 = FUN_03f102e4(*(undefined4 *)(lVar9 + 0x14));
    if (iVar2 == 2) {
      TodStringTranslate(L"[CUSTOM_LEVEL_SETTING_ACTIVATED]");
      PuzzleTip::SetTip(pUVar5,asStack_18);
      FUN_05476c50(asStack_18);
      lVar9 = *(long *)pUVar5;
      iVar2 = 0x4d;
      iVar11 = 0x80;
      iVar12 = 0;
    }
    else {
      TodStringTranslate(L"[CUSTOM_LEVEL_SETTING_NOT_ACTIVATED]");
      PuzzleTip::SetTip(pUVar5,asStack_18);
      FUN_05476c50(asStack_18);
      lVar9 = *(long *)pUVar5;
      iVar2 = 0xec;
      iVar11 = 0x1b;
      iVar12 = 0x32;
    }
    pcVar13 = *(code **)(lVar9 + 0x170);
    Sexy::Color::Color((Color *)asStack_18,iVar2,iVar11,iVar12);
    (*pcVar13)(pUVar5,0,asStack_18);
  }
  std::string::string(asStack_18,"UIText_Item2");
  plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  (**(code **)(*plVar10 + 0x158))(plVar10,0);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIImage_Line2");
  plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  (**(code **)(*plVar10 + 0x158))(plVar10,0);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_Item3");
  plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  (**(code **)(*plVar10 + 0x158))(plVar10,0);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIImage_Line3");
  plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  (**(code **)(*plVar10 + 0x158))(plVar10,0);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_Item4");
  plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  (**(code **)(*plVar10 + 0x158))(plVar10,0);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIImage_Line4");
  plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  (**(code **)(*plVar10 + 0x158))(plVar10,0);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_Item2_State");
  plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  (**(code **)(*plVar10 + 0x158))(plVar10,0);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_Item3_State");
  plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  (**(code **)(*plVar10 + 0x158))(plVar10,0);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_Item4_State");
  plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  (**(code **)(*plVar10 + 0x158))(plVar10,0);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIButton_Item2");
  plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  (**(code **)(*plVar10 + 0x158))(plVar10,0);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIButton_Item3");
  plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  (**(code **)(*plVar10 + 0x158))(plVar10,0);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIButton_Item4");
  plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  (**(code **)(*plVar10 + 0x158))(plVar10,0);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIImage_Mask");
  plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  (**(code **)(*plVar10 + 0x158))(plVar10,0);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelSetting::OnCreate() */

void __thiscall UICustomLevelSetting::OnCreate(UICustomLevelSetting *this)

{
  undefined4 uVar1;
  UIWidgetBackground *pUVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar2 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar2 + 0x50)) / 2;
  RefreshView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* UICustomLevelSetting::ButtonDepress(int) */

void __thiscall UICustomLevelSetting::ButtonDepress(UICustomLevelSetting *this,int param_1)

{
  UICustomLevelSubSetting *this_00;
  
  if (param_1 != 0x21) {
    if (param_1 < 0x22) {
      if ((param_1 == 0xb) || (param_1 == 0x16)) goto LAB_03f137dc;
    }
    else {
      if (param_1 == 0x2c) goto LAB_03f137dc;
      if (param_1 == 0x58) {
        UISingletonDialog<UICustomLevelSetting>::CloseDialog();
        return;
      }
    }
    return;
  }
LAB_03f137dc:
  this_00 = (UICustomLevelSubSetting *)UISingletonDialog<UICustomLevelSubSetting>::ShowDialog();
  UICustomLevelSubSetting::InitView(this_00,param_1);
  return;
}


/* non-virtual thunk to UICustomLevelSetting::ButtonDepress(int) */

void __thiscall UICustomLevelSetting::ButtonDepress(UICustomLevelSetting *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

