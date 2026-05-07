// Class: PVZ1ModeSelectLevelThemeButton


/* PVZ1ModeSelectLevelThemeButton::~PVZ1ModeSelectLevelThemeButton() */

void __thiscall
PVZ1ModeSelectLevelThemeButton::~PVZ1ModeSelectLevelThemeButton
          (PVZ1ModeSelectLevelThemeButton *this)

{
  *(undefined ***)this = &PTR_GetClass_069c8340;
  *(undefined ***)(this + 0x198) = &PTR__PVZ1ModeSelectLevelThemeButton_069c86a0;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_069c86c8;
  std::string::~string((string *)(this + 0x310));
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to PVZ1ModeSelectLevelThemeButton::~PVZ1ModeSelectLevelThemeButton() */

void __thiscall
PVZ1ModeSelectLevelThemeButton::~PVZ1ModeSelectLevelThemeButton
          (PVZ1ModeSelectLevelThemeButton *this)

{
  ~PVZ1ModeSelectLevelThemeButton(this + -0x198);
  return;
}


/* PVZ1ModeSelectLevelThemeButton::~PVZ1ModeSelectLevelThemeButton() */

void __thiscall
PVZ1ModeSelectLevelThemeButton::~PVZ1ModeSelectLevelThemeButton
          (PVZ1ModeSelectLevelThemeButton *this)

{
  ~PVZ1ModeSelectLevelThemeButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVZ1ModeSelectLevelThemeButton::~PVZ1ModeSelectLevelThemeButton() */

void __thiscall
PVZ1ModeSelectLevelThemeButton::~PVZ1ModeSelectLevelThemeButton
          (PVZ1ModeSelectLevelThemeButton *this)

{
  ~PVZ1ModeSelectLevelThemeButton(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeSelectLevelThemeButton::PVZ1ModeSelectLevelThemeButton(int) */

void __thiscall
PVZ1ModeSelectLevelThemeButton::PVZ1ModeSelectLevelThemeButton
          (PVZ1ModeSelectLevelThemeButton *this,int param_1)

{
  undefined **__n;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,param_1,(ButtonListener *)(this + 0x300),awStack_20,aCStack_18);
  FUN_05476c50(awStack_20);
  nop();
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x300));
  __n = &PTR__PVZ1ModeSelectLevelThemeButton_069c86a0;
  *(undefined ***)this = &PTR_GetClass_069c8340;
  *(undefined ***)(this + 0x198) = &PTR__PVZ1ModeSelectLevelThemeButton_069c86a0;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_069c86c8;
  Set8BytesTo0((string *)(this + 0x310));
  *(undefined4 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  std::string::append((string *)(this + 0x310),"",(size_t)__n);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeSelectLevelThemeButton::InitView() */

void __thiscall PVZ1ModeSelectLevelThemeButton::InitView(PVZ1ModeSelectLevelThemeButton *this)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("IMAGE_UI_PVZ1_THEME_%d",asStack_10,(ulong)*(uint *)(this + 0x308));
  uVar1 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0x318) = uVar1;
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeSelectLevelThemeButton::Draw(Sexy::Graphics*) */

void __thiscall
PVZ1ModeSelectLevelThemeButton::Draw(PVZ1ModeSelectLevelThemeButton *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  SalesProgressBar *this_00;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x318) != 0) {
    Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x318));
    this_00 = *(SalesProgressBar **)(this + 0x318);
    iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar1,iVar2);
    Sexy::Graphics::DrawImage(param_1,(Image *)this_00,(TRect *)aIStack_28,(TRect *)aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeSelectLevelThemeButton::ShowDescriptionUI() */

void __thiscall
PVZ1ModeSelectLevelThemeButton::ShowDescriptionUI(PVZ1ModeSelectLevelThemeButton *this)

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
  PVZ1ModeUtils::GetCurrentThemeName(*(int *)(this + 0x308));
  PVZ1ModeUtils::GetCurrentThemeDescription(*(int *)(this + 0x308));
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this_00,4);
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
  }
  FUN_05476c50(awStack_20);
  FUN_05476c50(awStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeSelectLevelThemeButton::ButtonDepress(int) */

void __thiscall
PVZ1ModeSelectLevelThemeButton::ButtonDepress(PVZ1ModeSelectLevelThemeButton *this,int param_1)

{
  if (*(int *)(this + 0xd4) != param_1) {
    return;
  }
  ShowDescriptionUI(this);
  return;
}


/* non-virtual thunk to PVZ1ModeSelectLevelThemeButton::ButtonDepress(int) */

void __thiscall
PVZ1ModeSelectLevelThemeButton::ButtonDepress(PVZ1ModeSelectLevelThemeButton *this,int param_1)

{
  ButtonDepress(this + -0x300,param_1);
  return;
}

