// Class: UISettingLargeTextEnunciation


/* UISettingLargeTextEnunciation::UISettingLargeTextEnunciation() */

void __thiscall
UISettingLargeTextEnunciation::UISettingLargeTextEnunciation(UISettingLargeTextEnunciation *this)

{
  UISingletonDialog<UISettingLargeTextEnunciation>::UISingletonDialog
            ((UISingletonDialog<UISettingLargeTextEnunciation> *)this);
  *(undefined ***)this = &PTR_GetClass_06773870;
  *(undefined **)(this + 0xd8) = &DAT_06773bc0;
  return;
}


/* UISettingLargeTextEnunciation::~UISettingLargeTextEnunciation() */

void __thiscall
UISettingLargeTextEnunciation::~UISettingLargeTextEnunciation(UISettingLargeTextEnunciation *this)

{
  *(undefined ***)this = &PTR_GetClass_06773870;
  *(undefined **)(this + 0xd8) = &DAT_06773bc0;
  UISingletonDialog<UISettingLargeTextEnunciation>::~UISingletonDialog
            ((UISingletonDialog<UISettingLargeTextEnunciation> *)this);
  return;
}


/* UISettingLargeTextEnunciation::~UISettingLargeTextEnunciation() */

void __thiscall
UISettingLargeTextEnunciation::~UISettingLargeTextEnunciation(UISettingLargeTextEnunciation *this)

{
  ~UISettingLargeTextEnunciation(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISettingLargeTextEnunciation::OnCreate() */

void __thiscall UISettingLargeTextEnunciation::OnCreate(UISettingLargeTextEnunciation *this)

{
  Widget *pWVar1;
  PVZ2UIButton *pPVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"UIImage_0");
  pWVar1 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  UI::Dialog::SetCenter((Dialog *)this,pWVar1,true);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Btn_Close");
  pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar2 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar2 + 0x158))(pPVar2,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISettingLargeTextEnunciation::Init(std::string const&) */

void __thiscall
UISettingLargeTextEnunciation::Init(UISettingLargeTextEnunciation *this,string *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  UIWidgetText *pUVar6;
  UIScrollControl *this_00;
  UIWidgetImage *pUVar7;
  undefined8 uVar8;
  long lVar9;
  PVZ2UIButton *pPVar10;
  PVZ2UIButton *pPVar11;
  PVZ2UIButton *pPVar12;
  long *plVar13;
  code *pcVar14;
  int local_5c;
  wstring awStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_18,"UIText_6");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  FUN_031f5e7c(asStack_38,&DAT_05593308,param_1);
  std::operator+(asStack_38,"_TITLE]");
  Sexy::ToWString(asStack_30);
  TodStringTranslate((wstring *)&local_28);
  PuzzleTip::SetTip(pUVar6,(string *)&local_18);
  FUN_05476c50((string *)&local_18);
  FUN_05476c50((wstring *)&local_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  std::string::string((string *)&local_18,"UIScroll_0");
  this_00 = UI::Dialog::GetWidget<UIScrollControl>((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  if (this_00 != (UIScrollControl *)0x0) {
    Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
    UIScrollControl::SetAutoArrange(this_00,false);
    Sexy::Insets::Insets((Insets *)&local_28);
    std::string::string((string *)&local_18,"UIImage_1");
    pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_18);
    std::string::~string((string *)&local_18);
    nop();
    if (pUVar7 != (UIWidgetImage *)0x0) {
      (**(code **)(*(long *)pUVar7 + 0x48))((string *)&local_18,pUVar7);
      local_28 = local_18;
      uStack_20 = uStack_10;
    }
    local_5c = 1;
    FUN_031f5e7c(asStack_48,&DAT_05593308,param_1);
    std::operator+(asStack_48,"_");
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_5c);
    std::operator+(asStack_40,asStack_38);
    std::operator+(asStack_30,"]");
    Sexy::ToWString((string *)&local_18);
    std::string::~string((string *)&local_18);
    std::string::~string(asStack_30);
    std::string::~string(asStack_38);
    std::string::~string(asStack_40);
    std::string::~string(asStack_48);
    cVar1 = TodStringListExists(awStack_58);
    while (cVar1 != '\0') {
      TodStringTranslate(awStack_58);
      pUVar6 = ::operator_new(0x108);
      UIWidgetText::UIWidgetText(pUVar6,(wstring *)&local_18);
      FUN_05476c50((string *)&local_18);
      uVar2 = FUN_03d99248(0x1d);
      uVar3 = FUN_03d99248(0x69);
      uVar4 = FUN_03d99248(0x20b);
      uVar5 = FUN_03d99248(0x21d);
      (**(code **)(*(long *)pUVar6 + 0x198))(pUVar6,uVar2,uVar3,uVar4,uVar5);
      pUVar6[0x59] = (UIWidgetText)0x0;
      uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
      FUN_03d990e8(pUVar6 + 0xe8,uVar8);
      FUN_03d990fc(pUVar6 + 0xe0);
      pcVar14 = *(code **)(*(long *)pUVar6 + 0x170);
      Sexy::Insets::Insets((Insets *)&local_18,0x60,0x42,0x1e,0xff);
      (*pcVar14)(pUVar6,0,(string *)&local_18);
      UIWidgetText::FormatByWidth(pUVar6);
      Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_28);
      UIWidgetText::SetViewRect(pUVar6,(string *)&local_18);
      FUN_03d990f0(pUVar6 + 0xf0);
      lVar9 = AccessoryContent::GetDisplayImage((AccessoryContent *)this_00);
      plVar13 = *(long **)(pUVar6 + 0x20);
      *(undefined4 *)(lVar9 + 0x50) = *(undefined4 *)(this_00 + 0x50);
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x68))(plVar13,pUVar6);
      }
      (**(code **)(*(long *)this_00 + 0x60))(this_00,pUVar6);
      local_5c = local_5c + 1;
      FUN_031f5e7c(asStack_50,&DAT_05593308,param_1);
      std::operator+(asStack_50,"_");
      std::to_string<ActivityTypeID>((ActivityTypeID *)&local_5c);
      std::operator+(asStack_48,asStack_40);
      std::operator+(asStack_38,"]");
      Sexy::ToWString(asStack_30);
      FUN_054766c8(awStack_58,(string *)&local_18);
      FUN_05476c50((string *)&local_18);
      std::string::~string(asStack_30);
      std::string::~string(asStack_38);
      std::string::~string(asStack_40);
      std::string::~string(asStack_48);
      std::string::~string(asStack_50);
      cVar1 = TodStringListExists(awStack_58);
    }
    UIScrollControl::SetAutoArrange(this_00,true);
    FUN_05476c50(awStack_58);
  }
  std::string::string((string *)&local_18,"Btn_Disagree");
  pPVar10 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  std::string::string((string *)&local_18,"Btn_Agree");
  pPVar11 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  std::string::string((string *)&local_18,"Btn_Close");
  pPVar12 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  if (pPVar10 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar10 + 0x158))(pPVar10,0);
  }
  if (pPVar11 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar11 + 0x158))(pPVar11,0);
  }
  if (pPVar12 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar12 + 0x158))(pPVar12,1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UISettingLargeTextEnunciation::ButtonDepress(int) */

void __thiscall
UISettingLargeTextEnunciation::ButtonDepress(UISettingLargeTextEnunciation *this,int param_1)

{
  if (param_1 != 2) {
    return;
  }
  UISingletonDialog<UISettingLargeTextEnunciation>::CloseDialog();
  return;
}


/* non-virtual thunk to UISettingLargeTextEnunciation::ButtonDepress(int) */

void __thiscall
UISettingLargeTextEnunciation::ButtonDepress(UISettingLargeTextEnunciation *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

