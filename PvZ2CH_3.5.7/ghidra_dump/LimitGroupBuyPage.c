// Class: LimitGroupBuyPage


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitGroupBuyPage::GetLayoutName() */

void __thiscall LimitGroupBuyPage::GetLayoutName(LimitGroupBuyPage *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIFestivalGroupBuy");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* LimitGroupBuyPage::~LimitGroupBuyPage() */

void __thiscall LimitGroupBuyPage::~LimitGroupBuyPage(LimitGroupBuyPage *this)

{
  *(undefined ***)this = &PTR_GetClass_067224f0;
  *(undefined **)(this + 0xd8) = &DAT_06722840;
  UISingletonDialog<LimitGroupBuyPage>::~UISingletonDialog
            ((UISingletonDialog<LimitGroupBuyPage> *)this);
  return;
}


/* LimitGroupBuyPage::~LimitGroupBuyPage() */

void __thiscall LimitGroupBuyPage::~LimitGroupBuyPage(LimitGroupBuyPage *this)

{
  ~LimitGroupBuyPage(this);
  AK::FreeHook(this);
  return;
}


/* LimitGroupBuyPage::LimitGroupBuyPage() */

void __thiscall LimitGroupBuyPage::LimitGroupBuyPage(LimitGroupBuyPage *this)

{
  UISingletonDialog<LimitGroupBuyPage>::UISingletonDialog
            ((UISingletonDialog<LimitGroupBuyPage> *)this);
  *(undefined ***)this = &PTR_GetClass_067224f0;
  *(undefined **)(this + 0xd8) = &DAT_06722840;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitGroupBuyPage::Update() */

void __thiscall LimitGroupBuyPage::Update(LimitGroupBuyPage *this)

{
  int iVar1;
  UIWidgetText *pUVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  string asStack_90 [8];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_90,"UIText_Timer");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_90);
  std::string::~string(asStack_90);
  nop();
  FUN_05476574(auStack_a0);
  if (pUVar2 == (UIWidgetText *)0x0) goto LAB_03ad9648;
  iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar1);
  iVar1 = ActiveItem::GetLeftDays(aAStack_88);
  lVar3 = LawnApp::GetRealBeijingTime(gLawnApp);
  lVar3 = (lVar3 + 0x1c200) % 0x15180;
  lVar4 = 0x15180 - lVar3;
  if (lVar3 < 0x7e92) {
    DAT_06ac8958 = '\0';
LAB_03ad9548:
    if (0 < iVar1) goto LAB_03ad9550;
LAB_03ad9698:
    iVar1 = (int)(lVar4 / 0x3c);
    Sexy::StrFormat(L"%02d: %02d: %02d",asStack_90,lVar4 / 0xe10 & 0xffffffff,
                    (ulong)(uint)(iVar1 + (int)((lVar4 / 0x3c) / 0x3c) * -0x3c),
                    (ulong)(uint)((int)lVar4 + iVar1 * -0x3c));
    FUN_054766c8(auStack_a0,asStack_90);
    FUN_05476c50(asStack_90);
  }
  else {
    if (DAT_06ac8958 != '\0') goto LAB_03ad9548;
    DAT_06ac8958 = '\x01';
    if (iVar1 < 1) goto LAB_03ad9698;
LAB_03ad9550:
    FUN_05478178(asStack_90,L"[TOTAL_LOGIN_DAYS]",auStack_a8);
    TodReplaceNumberString((wstring *)asStack_90,L"{DAY_COUNT}",iVar1);
    FUN_05476c50(asStack_90);
    nop();
    Sexy::StrFormat(L"%02d:%02d",asStack_90,lVar4 / 0xe10 & 0xffffffff,
                    (ulong)(uint)((int)(lVar4 / 0x3c) + (int)((lVar4 / 0x3c) / 0x3c) * -0x3c));
    FUN_054766c8(auStack_a0,asStack_90);
    FUN_05476c50(asStack_90);
    FUN_0342e660(asStack_90,auStack_98,auStack_a0);
    FUN_054766c8(auStack_a0,asStack_90);
    FUN_05476c50(asStack_90);
    FUN_05476c50(auStack_98);
  }
  PuzzleTip::SetTip(pUVar2,auStack_a0);
  ActiveItem::~ActiveItem(aAStack_88);
LAB_03ad9648:
  FUN_05476c50(auStack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitGroupBuyPage::ButtonDepress(int) */

void __thiscall LimitGroupBuyPage::ButtonDepress(LimitGroupBuyPage *this,int param_1)

{
  char cVar1;
  int iVar2;
  UIMessageBox *this_00;
  Image *pIVar3;
  long lVar4;
  UILimitGroupBuy *this_01;
  wstring awStack_a8 [8];
  wstring awStack_a0 [8];
  undefined1 auStack_98 [8];
  string asStack_90 [8];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x1f9) {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    cVar1 = FUN_03ac12f8(local_80);
    if ((cVar1 == '\0') || (local_70 == '\0')) {
      this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_00 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_00,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[CHRISTMAS_GOLDEN_EGG_CLOSED_TITLE]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(this_00,awStack_a0,awStack_a8);
        std::string::string(asStack_90,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar3 = (Image *)StringHelper::ToImage(asStack_90,false);
        UIMessageBox::SetBackground(this_00,pIVar3);
        std::string::~string(asStack_90);
        nop();
        lVar4 = UIMessageBox::GetButtonCancel(this_00);
        thunk_FUN_05477b9c(lVar4 + 0xd8,auStack_98);
        FUN_05476c50(auStack_98);
        FUN_05476c50(awStack_a0);
        FUN_05476c50(awStack_a8);
      }
    }
    else {
      this_01 = (UILimitGroupBuy *)UISingletonDialog<UILimitGroupBuy>::ShowDialog();
      UILimitGroupBuy::Refresh(this_01,false);
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LimitGroupBuyPage::ButtonDepress(int) */

void __thiscall LimitGroupBuyPage::ButtonDepress(LimitGroupBuyPage *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

