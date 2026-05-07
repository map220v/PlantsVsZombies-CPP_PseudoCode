// Class: UICustomLevelMobileLink


/* UICustomLevelMobileLink::CheckboxChecked(int, bool) */

int UICustomLevelMobileLink::CheckboxChecked(int param_1,bool param_2)

{
  return param_1;
}


/* non-virtual thunk to UICustomLevelMobileLink::CheckboxChecked(int, bool) */

void __thiscall
UICustomLevelMobileLink::CheckboxChecked(UICustomLevelMobileLink *this,int param_1,bool param_2)

{
  CheckboxChecked((int)this + -0x138,SUB41(param_1,0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMobileLink::GetLayoutName() */

void __thiscall UICustomLevelMobileLink::GetLayoutName(UICustomLevelMobileLink *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UICustomLevelMobileLink");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UICustomLevelMobileLink::AllowChar(int, wchar_t) */

bool __thiscall
UICustomLevelMobileLink::AllowChar(UICustomLevelMobileLink *this,int param_1,wchar_t param_2)

{
  char cVar1;
  int iVar2;
  
  if (param_1 == 1) {
    iVar2 = iswalnum(param_2);
    return iVar2 != 0;
  }
  if ((param_1 == 2) &&
     ((iVar2 = iswalnum(param_2), iVar2 != 0 ||
      (cVar1 = EA::Text::IsCharAlphabetic((wchar16)param_2), cVar1 != '\0')))) {
    return true;
  }
  return false;
}


/* non-virtual thunk to UICustomLevelMobileLink::AllowChar(int, wchar_t) */

void __thiscall
UICustomLevelMobileLink::AllowChar(UICustomLevelMobileLink *this,int param_1,wchar_t param_2)

{
  AllowChar(this + -0x140,param_1,param_2);
  return;
}


/* UICustomLevelMobileLink::~UICustomLevelMobileLink() */

void __thiscall UICustomLevelMobileLink::~UICustomLevelMobileLink(UICustomLevelMobileLink *this)

{
  *(undefined ***)this = &PTR_GetClass_06795ae0;
  *(undefined **)(this + 0xd8) = &DAT_06795e40;
  *(undefined **)(this + 0x138) = &DAT_06795e88;
  *(undefined ***)(this + 0x140) = &PTR_EditWidgetText_06795ea0;
  UISingletonDialog<UICustomLevelMobileLink>::~UISingletonDialog
            ((UISingletonDialog<UICustomLevelMobileLink> *)this);
  return;
}


/* UICustomLevelMobileLink::~UICustomLevelMobileLink() */

void __thiscall UICustomLevelMobileLink::~UICustomLevelMobileLink(UICustomLevelMobileLink *this)

{
  ~UICustomLevelMobileLink(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMobileLink::MarkRelink() */

void __thiscall UICustomLevelMobileLink::MarkRelink(UICustomLevelMobileLink *this)

{
  undefined4 uVar1;
  PVZ2UIButton *pPVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_Preview");
  pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  (**(code **)(*(long *)pPVar2 + 0x158))(pPVar2,0);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIButton_Link");
  pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  uVar1 = FUN_03f10b50();
  *(undefined4 *)(pPVar2 + 0x48) = uVar1;
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMobileLink::CheckProtocol() */

void __thiscall UICustomLevelMobileLink::CheckProtocol(UICustomLevelMobileLink *this)

{
  char cVar1;
  UIMessageBox *this_00;
  Image *pIVar2;
  long lVar3;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03f102ec(*(undefined1 *)(*(long *)(this + 0x158) + 0x198));
  if ((cVar1 == '\0') &&
     (this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog(),
     this_00 != (UIMessageBox *)0x0)) {
    UIMessageBox::SetShowType(this_00,4);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[READ_AND_AGREE_PROTOCOL]");
    TodStringTranslate(L"[BUTTON_OK]");
    UIMessageBox::SetMessage(this_00,awStack_20,awStack_28);
    std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar2 = (Image *)StringHelper::ToImage(asStack_10,false);
    UIMessageBox::SetBackground(this_00,pIVar2);
    std::string::~string(asStack_10);
    nop();
    lVar3 = UIMessageBox::GetButtonCancel(this_00);
    thunk_FUN_05477b9c(lVar3 + 0xd8,auStack_18);
    FUN_05476c50(auStack_18);
    FUN_05476c50(awStack_20);
    FUN_05476c50(awStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* UICustomLevelMobileLink::UICustomLevelMobileLink() */

void __thiscall UICustomLevelMobileLink::UICustomLevelMobileLink(UICustomLevelMobileLink *this)

{
  UISingletonDialog<UICustomLevelMobileLink>::UISingletonDialog
            ((UISingletonDialog<UICustomLevelMobileLink> *)this);
  Sexy::CheckboxListener::CheckboxListener((CheckboxListener *)(this + 0x138));
  Sexy::EditListener::EditListener((EditListener *)(this + 0x140));
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined ***)this = &PTR_GetClass_06795ae0;
  *(undefined **)(this + 0xd8) = &DAT_06795e40;
  *(undefined **)(this + 0x138) = &DAT_06795e88;
  *(undefined ***)(this + 0x140) = &PTR_EditWidgetText_06795ea0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMobileLink::CheckPhoneNumber() */

void __thiscall UICustomLevelMobileLink::CheckPhoneNumber(UICustomLevelMobileLink *this)

{
  int iVar1;
  char cVar2;
  UIMessageBox *this_00;
  wchar_t *pwVar3;
  Image *pIVar4;
  long lVar5;
  ulong uVar6;
  undefined1 uVar7;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(this + 0x148) + 0x310))(asStack_10,*(long **)(this + 0x148));
  cVar2 = FUN_0547419c(asStack_10);
  std::string::~string(asStack_10);
  if (cVar2 == '\0') {
    (**(code **)(**(long **)(this + 0x148) + 0x310))((string *)awStack_18,*(long **)(this + 0x148));
    lVar5 = FUN_05474750((string *)awStack_18,"0123456789-",0);
    if (lVar5 == -1) {
      (**(code **)(**(long **)(this + 0x148) + 0x310))(asStack_10,*(long **)(this + 0x148));
      uVar6 = FUN_05474178(asStack_10);
      iVar1 = *(int *)(*(long *)(this + 0x148) + 0x148);
      std::string::~string(asStack_10);
      std::string::~string((string *)awStack_18);
      if (uVar6 <= (ulong)(long)iVar1) {
        uVar7 = 1;
        goto LAB_03f11334;
      }
    }
    else {
      std::string::~string((string *)awStack_18);
    }
    this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_00 == (UIMessageBox *)0x0) goto LAB_03f113f4;
    UIMessageBox::SetShowType(this_00,4);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[PHONE_NUMBER]");
    pwVar3 = L"[FORMAT_ERROR]";
  }
  else {
    this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_00 == (UIMessageBox *)0x0) {
LAB_03f113f4:
      uVar7 = 0;
      goto LAB_03f11334;
    }
    UIMessageBox::SetShowType(this_00,4);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[PHONE_NUMBER]");
    pwVar3 = L"[NOT_EMPTY]";
  }
  uVar7 = 0;
  TodStringTranslate(pwVar3);
  std::operator+(awStack_18,(wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  FUN_05476c50(awStack_18);
  TodStringTranslate(L"[BUTTON_OK]");
  UIMessageBox::SetMessage(this_00,awStack_20,awStack_28);
  std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
  pIVar4 = (Image *)StringHelper::ToImage(asStack_10,false);
  UIMessageBox::SetBackground(this_00,pIVar4);
  std::string::~string(asStack_10);
  nop();
  lVar5 = UIMessageBox::GetButtonCancel(this_00);
  thunk_FUN_05477b9c(lVar5 + 0xd8,awStack_18);
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_20);
  FUN_05476c50(awStack_28);
LAB_03f11334:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMobileLink::CheckCode() */

void __thiscall UICustomLevelMobileLink::CheckCode(UICustomLevelMobileLink *this)

{
  int iVar1;
  char cVar2;
  UIMessageBox *this_00;
  wchar_t *pwVar3;
  Image *pIVar4;
  long lVar5;
  ulong uVar6;
  undefined1 uVar7;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(this + 0x150) + 0x310))(asStack_10,*(long **)(this + 0x150));
  cVar2 = FUN_0547419c(asStack_10);
  std::string::~string(asStack_10);
  if (cVar2 == '\0') {
    (**(code **)(**(long **)(this + 0x150) + 0x310))((string *)awStack_18,*(long **)(this + 0x150));
    lVar5 = FUN_05474750((string *)awStack_18,"0123456789-",0);
    if (lVar5 == -1) {
      (**(code **)(**(long **)(this + 0x148) + 0x310))(asStack_10,*(long **)(this + 0x148));
      uVar6 = FUN_05474178(asStack_10);
      iVar1 = *(int *)(*(long *)(this + 0x148) + 0x148);
      std::string::~string(asStack_10);
      std::string::~string((string *)awStack_18);
      if (uVar6 <= (ulong)(long)iVar1) {
        uVar7 = 1;
        goto LAB_03f115ac;
      }
    }
    else {
      std::string::~string((string *)awStack_18);
    }
    this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_00 == (UIMessageBox *)0x0) goto LAB_03f1166c;
    UIMessageBox::SetShowType(this_00,4);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[VERIFICATION_CODE]");
    pwVar3 = L"[FORMAT_ERROR]";
  }
  else {
    this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_00 == (UIMessageBox *)0x0) {
LAB_03f1166c:
      uVar7 = 0;
      goto LAB_03f115ac;
    }
    UIMessageBox::SetShowType(this_00,4);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[VERIFICATION_CODE]");
    pwVar3 = L"[NOT_EMPTY]";
  }
  uVar7 = 0;
  TodStringTranslate(pwVar3);
  std::operator+(awStack_18,(wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  FUN_05476c50(awStack_18);
  TodStringTranslate(L"[BUTTON_OK]");
  UIMessageBox::SetMessage(this_00,awStack_20,awStack_28);
  std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
  pIVar4 = (Image *)StringHelper::ToImage(asStack_10,false);
  UIMessageBox::SetBackground(this_00,pIVar4);
  std::string::~string(asStack_10);
  nop();
  lVar5 = UIMessageBox::GetButtonCancel(this_00);
  thunk_FUN_05477b9c(lVar5 + 0xd8,awStack_18);
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_20);
  FUN_05476c50(awStack_28);
LAB_03f115ac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMobileLink::SetState(UICustomLevelMobileLink::LinkState) */

void __thiscall UICustomLevelMobileLink::SetState(UICustomLevelMobileLink *this,int param_2)

{
  int iVar1;
  PVZ2UIButton *pPVar2;
  string *psVar3;
  long lVar4;
  UICustomLevelSetting *this_00;
  float fVar5;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x160) = param_2;
  local_8 = ___stack_chk_guard;
  if (param_2 == 2) {
    std::string::string(asStack_10,"UIButton_ReSend");
    pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
    (**(code **)(*(long *)pPVar2 + 0x188))(pPVar2,0);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_18,"UIButton_ReSend");
    pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_18);
    TodStringTranslate(L"[RESEND_CODE]");
    PVZ2UIButton::SetLabelText(pPVar2,(wstring *)asStack_10);
    FUN_05476c50(asStack_10);
    std::string::~string(asStack_18);
    nop();
  }
  else if (param_2 == 3) {
    std::string::string(asStack_10,"UIButton_Link");
    pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
    (**(code **)(*(long *)pPVar2 + 0x188))(pPVar2,1);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"UIButton_ReSend");
    pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
    (**(code **)(*(long *)pPVar2 + 0x188))(pPVar2,1);
    std::string::~string(asStack_10);
    nop();
    psVar3 = (string *)Sexy::LazySingleton<CustomLevelSettingManager>::GetInstancePtr();
    (**(code **)(**(long **)(this + 0x148) + 0x310))(asStack_10,*(long **)(this + 0x148));
    CustomLevelSettingManager::SetLinkPhoneNumber(psVar3);
    std::string::~string(asStack_10);
    lVar4 = Sexy::LazySingleton<CustomLevelSettingManager>::GetInstancePtr();
    iVar1 = LawnApp::GetRealServerTime(gLawnApp);
    FUN_03f102d4(lVar4 + 0x10,iVar1 + 0x4f1a00);
    this_00 = (UICustomLevelSetting *)UISingletonDialog<UICustomLevelSetting>::GetSingletonPtr();
    if (this_00 != (UICustomLevelSetting *)0x0) {
      UICustomLevelSetting::RefreshView(this_00);
    }
  }
  else if (param_2 == 1) {
    fVar5 = (float)PVZ_T();
    *(float *)(this + 0x164) = fVar5 + 60.0;
    std::string::string(asStack_10,"UIButton_ReSend");
    pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
    (**(code **)(*(long *)pPVar2 + 0x188))(pPVar2,1);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICustomLevelMobileLink::LinkStart() */

void __thiscall UICustomLevelMobileLink::LinkStart(UICustomLevelMobileLink *this)

{
  SetState(this,3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMobileLink::Update() */

void __thiscall UICustomLevelMobileLink::Update(UICustomLevelMobileLink *this)

{
  PVZ2UIButton *this_00;
  float fVar1;
  float fVar2;
  string asStack_30 [8];
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (*(int *)(this + 0x160) == 1) {
    fVar1 = (float)PVZ_T();
    if (fVar1 < *(float *)(this + 0x164)) {
      std::string::string(asStack_30,"UIButton_ReSend");
      this_00 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_30);
      TodStringTranslate(L"[RESEND_CODE]");
      TodStringTranslate(L"[RESEND_CODE_EXTRA]");
      fVar2 = *(float *)(this + 0x164);
      fVar1 = (float)PVZ_T();
      TodReplaceNumberString(awStack_20,L"{NUMBER}",(int)(fVar2 - fVar1));
      std::operator+(awStack_28,awStack_18);
      PVZ2UIButton::SetLabelText(this_00,awStack_10);
      FUN_05476c50(awStack_10);
      FUN_05476c50(awStack_18);
      FUN_05476c50(awStack_20);
      FUN_05476c50(awStack_28);
      std::string::~string(asStack_30);
      nop();
    }
    else {
      SetState(this,2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMobileLink::InitView() */

void __thiscall UICustomLevelMobileLink::InitView(UICustomLevelMobileLink *this)

{
  PrimeText_PotentialTypeface *this_00;
  UIWidgetText *pUVar1;
  UIWidgetImage *pUVar2;
  EditWidget *pEVar3;
  undefined8 uVar4;
  Widget *pWVar5;
  PVZ2UICheckBox *this_01;
  Image *pIVar6;
  Image *pIVar7;
  long lVar8;
  code *pcVar9;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Text2");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar1[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_Phone");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pEVar3 = ::operator_new(0x180);
  Sexy::EditWidget::EditWidget(pEVar3,1,(EditListener *)(this + 0x140));
  *(EditWidget **)(this + 0x148) = pEVar3;
  pcVar9 = *(code **)(*(long *)pEVar3 + 0x330);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  (*pcVar9)(pEVar3,uVar4,0);
  (**(code **)(**(long **)(this + 0x148) + 0x198))
            (*(long **)(this + 0x148),0,0,*(undefined4 *)(pUVar2 + 0x50),
             *(undefined4 *)(pUVar2 + 0x54));
  lVar8 = *(long *)(this + 0x148);
  pcVar9 = *(code **)(*(long *)pUVar2 + 0x60);
  *(undefined4 *)(lVar8 + 0x148) = 0xb;
  (*pcVar9)(pUVar2,lVar8);
  std::string::string(asStack_10,"UIImage_Code");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pEVar3 = ::operator_new(0x180);
  Sexy::EditWidget::EditWidget(pEVar3,2,(EditListener *)(this + 0x140));
  this_00 = PrimeText_Game::Typeface_FZCuYuan_18;
  lVar8 = *(long *)pEVar3;
  *(EditWidget **)(this + 0x150) = pEVar3;
  pcVar9 = *(code **)(lVar8 + 0x330);
  uVar4 = PrimeText_PotentialTypeface::Typeface(this_00);
  (*pcVar9)(pEVar3,uVar4,0);
  (**(code **)(**(long **)(this + 0x150) + 0x198))
            (*(long **)(this + 0x150),0,0,*(undefined4 *)(pUVar2 + 0x50),
             *(undefined4 *)(pUVar2 + 0x54));
  lVar8 = *(long *)(this + 0x150);
  pcVar9 = *(code **)(*(long *)pUVar2 + 0x60);
  *(undefined4 *)(lVar8 + 0x148) = 8;
  (*pcVar9)(pUVar2,lVar8);
  std::string::string(asStack_10,"Widget_CheckBox");
  pWVar5 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_01 = ::operator_new(0x1b0);
  PVZ2UICheckBox::PVZ2UICheckBox
            (this_01,3,(ButtonListener *)(this + 0xd8),(CheckboxListener *)(this + 0x138));
  *(PVZ2UICheckBox **)(this + 0x158) = this_01;
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae26d0);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae24c8);
  PVZ2UICheckBox::SetCheckboxStates(this_01,pIVar6,pIVar7,false,0,0);
  (**(code **)(**(long **)(this + 0x158) + 0x198))
            (*(long **)(this + 0x158),0,0,*(undefined4 *)(pWVar5 + 0x50),
             *(undefined4 *)(pWVar5 + 0x54));
  (**(code **)(*(long *)pWVar5 + 0x60))(pWVar5,*(undefined8 *)(this + 0x158));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMobileLink::OnCreate() */

void __thiscall UICustomLevelMobileLink::OnCreate(UICustomLevelMobileLink *this)

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
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMobileLink::SendCode() */

void __thiscall UICustomLevelMobileLink::SendCode(UICustomLevelMobileLink *this)

{
  ProfileMgr *this_00;
  undefined8 uVar1;
  DNetwork *this_01;
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2488];
  string asStack_330 [808];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SetState(this,1);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_d40,"ai");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  local_d48[0] = 0x2a58;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"phone");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  (**(code **)(**(long **)(this + 0x148) + 0x310))(asStack_ce8,*(long **)(this + 0x148));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03f10af4(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_330,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMobileLink::ButtonDepress(int) */

void __thiscall UICustomLevelMobileLink::ButtonDepress(UICustomLevelMobileLink *this,int param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  ulong uVar6;
  UIRedPacketResult *this_00;
  NetworkMgr *this_01;
  long *plVar7;
  ulong uVar8;
  code *pcVar9;
  wstring awStack_148 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_140 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_128 [48];
  CustomNetworkExtraData aCStack_f8 [64];
  undefined8 local_b8;
  undefined8 local_b0;
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x8ae) {
    cVar2 = CheckProtocol(this);
    if (((cVar2 != '\0') && (cVar2 = CheckPhoneNumber(this), cVar2 != '\0')) &&
       (cVar2 = CheckCode(this), cVar2 != '\0')) {
      this_01 = (NetworkMgr *)NetworkMgr::Instance();
      plVar7 = (long *)NetworkMgr::GetNewNetWorkProcess(this_01);
      pcVar9 = *(code **)(*plVar7 + 0x1f8);
      (**(code **)(**(long **)(this + 0x148) + 0x310))
                ((string *)amStack_128,*(long **)(this + 0x148));
      (**(code **)(**(long **)(this + 0x150) + 0x310))
                ((string *)aCStack_f8,*(long **)(this + 0x150));
      (*pcVar9)(plVar7,(string *)amStack_128,(string *)aCStack_f8);
      std::string::~string((string *)aCStack_f8);
      std::string::~string((string *)amStack_128);
    }
  }
  else if (param_1 < 0x8af) {
    if (param_1 == 0x58) {
      UISingletonDialog<UICustomLevelMobileLink>::CloseDialog();
    }
    else if (((param_1 == 0x8ad) && (cVar2 = CheckProtocol(this), cVar2 != '\0')) &&
            (cVar2 = CheckPhoneNumber(this), cVar2 != '\0')) {
      SendCode(this);
    }
  }
  else if (param_1 == 0x8af) {
    uVar8 = 0;
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_128);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_140);
    CustomNetworkExtraData::CustomNetworkExtraData(aCStack_f8);
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aCStack_f8);
    if (cVar2 != '\0') {
      for (; uVar1 = local_b8, uVar6 = FUN_03f102f4(local_b8,local_b0), uVar8 < uVar6;
          uVar8 = uVar8 + 1) {
        piVar4 = (int *)FUN_03f10308(uVar1,uVar8);
        piVar4 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                        operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                    *)amStack_128,piVar4);
        piVar5 = (int *)FUN_03f10308(local_b8,uVar8);
        *piVar4 = piVar5[1];
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_140,piVar5);
      }
    }
    this_00 = (UIRedPacketResult *)
              UIRedPacketResult::create((map *)amStack_128,(vector *)avStack_140,true);
    TodStringTranslate(L"[RIFT_LEVEL_SETUP_BONUS]");
    UIRedPacketResult::setTitle(this_00,awStack_148);
    FUN_05476c50(awStack_148);
    ActiveItem::~ActiveItem(aAStack_88);
    CustomNetworkExtraData::~CustomNetworkExtraData(aCStack_f8);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_140);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_128);
  }
  else if (param_1 == 0x8b0) {
    LawnApp::LaunchEULAWebpage(gLawnApp);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to UICustomLevelMobileLink::ButtonDepress(int) */

void __thiscall UICustomLevelMobileLink::ButtonDepress(UICustomLevelMobileLink *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

