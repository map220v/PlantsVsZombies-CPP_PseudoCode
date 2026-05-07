// Class: FestivalGamePage


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePage::GetLayoutName() */

void __thiscall FestivalGamePage::GetLayoutName(FestivalGamePage *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIFestivalGamePage");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* FestivalGamePage::~FestivalGamePage() */

void __thiscall FestivalGamePage::~FestivalGamePage(FestivalGamePage *this)

{
  *(undefined ***)this = &PTR_GetClass_0671f4c0;
  *(undefined **)(this + 0xd8) = &DAT_0671f810;
  FUN_05476c50(this + 0x140);
  UISingletonDialog<FestivalGamePage>::~UISingletonDialog
            ((UISingletonDialog<FestivalGamePage> *)this);
  return;
}


/* FestivalGamePage::~FestivalGamePage() */

void __thiscall FestivalGamePage::~FestivalGamePage(FestivalGamePage *this)

{
  ~FestivalGamePage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePage::FestivalGamePage() */

void __thiscall FestivalGamePage::FestivalGamePage(FestivalGamePage *this)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<FestivalGamePage>::UISingletonDialog
            ((UISingletonDialog<FestivalGamePage> *)this);
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_0671f4c0;
  *(undefined **)(this + 0xd8) = &DAT_0671f810;
  FUN_05478178(this + 0x140,&DAT_056f11a8,auStack_10);
  nop();
  Sexy::Color::Color((Color *)(this + 0x148),1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePage::showFestivalGameEntrance() */

void FestivalGamePage::showFestivalGameEntrance(void)

{
  TGALogMgr *pTVar1;
  RichManUIMgr *this;
  size_t in_x2;
  TGATourismOctoberData aTStack_98 [72];
  TGARichManData aTStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TGATourismOctoberData::TGATourismOctoberData(aTStack_98);
  std::string::append((string *)aTStack_98,"1",in_x2);
  pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGARichManData::TGARichManData(aTStack_50,(TGARichManData *)aTStack_98);
  TGALogMgr::LogRichMan(pTVar1,aTStack_50);
  TGATourismOctoberData::~TGATourismOctoberData((TGATourismOctoberData *)aTStack_50);
  this = (RichManUIMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
  RichManUIMgr::RequestNetwork(this);
  TGATourismOctoberData::~TGATourismOctoberData(aTStack_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePage::Update() */

void __thiscall FestivalGamePage::Update(FestivalGamePage *this)

{
  FestivalGamePage *pFVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  wstring awStack_90 [8];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  iVar2 = ActiveItem::GetLeftDays(aAStack_88);
  lVar3 = LawnApp::GetRealBeijingTime(gLawnApp);
  lVar3 = 0x15180 - (lVar3 + 0x1c200) % 0x15180;
  if (iVar2 < 1) {
    iVar2 = (int)(lVar3 / 0x3c);
    Sexy::StrFormat(L"%02d: %02d: %02d",awStack_90,lVar3 / 0xe10 & 0xffffffff,
                    (ulong)(uint)(iVar2 + (int)((lVar3 / 0x3c) / 0x3c) * -0x3c),
                    (ulong)(uint)((int)lVar3 + iVar2 * -0x3c));
    FUN_054766c8(this + 0x140,awStack_90);
    FUN_05476c50(awStack_90);
  }
  else {
    pFVar1 = this + 0x140;
    FUN_05478178(awStack_90,L"[TOTAL_LOGIN_DAYS]",auStack_a0);
    TodReplaceNumberString(awStack_90,L"{DAY_COUNT}",iVar2);
    FUN_05476c50(awStack_90);
    nop();
    Sexy::StrFormat(L"%02d:%02d",awStack_90,lVar3 / 0xe10 & 0xffffffff,
                    (ulong)(uint)((int)(lVar3 / 0x3c) + (int)((lVar3 / 0x3c) / 0x3c) * -0x3c));
    FUN_054766c8(pFVar1,awStack_90);
    FUN_05476c50(awStack_90);
    FUN_0342e660(awStack_90,auStack_98,pFVar1);
    FUN_054766c8(pFVar1,awStack_90);
    FUN_05476c50(awStack_90);
    FUN_05476c50(auStack_98);
  }
  if (*(long *)(this + 0x138) != 0) {
    PuzzleTip::SetTip(*(long *)(this + 0x138),this + 0x140);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePage::InitView() */

void __thiscall FestivalGamePage::InitView(FestivalGamePage *this)

{
  int iVar1;
  int iVar2;
  UIWidgetText *pUVar3;
  wstring awStack_a8 [8];
  wstring awStack_a0 [8];
  wstring awStack_98 [8];
  string asStack_90 [8];
  ActiveItem aAStack_88 [32];
  string asStack_68 [8];
  string asStack_60 [88];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_90,"UIText_ActivityTime");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_90);
  *(UIWidgetText **)(this + 0x138) = pUVar3;
  std::string::~string(asStack_90);
  nop();
  iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar1);
  iVar1 = StringHelper::ToInt(asStack_68);
  iVar2 = StringHelper::ToInt(asStack_60);
  TodStringTranslate(L"[PVZ_FESTIVAL_GAME_TIME]");
  TodReplaceNumberString(awStack_a0,L"{NUM1}",iVar1 / 10000);
  TodReplaceNumberString(awStack_98,L"{NUM2}",(iVar1 % 10000) / 100);
  TodReplaceNumberString((wstring *)asStack_90,L"{NUM3}",iVar1 % 100);
  FUN_05476c50(asStack_90);
  FUN_05476c50(awStack_98);
  FUN_05476c50(awStack_a0);
  TodReplaceNumberString(awStack_a8,L"{NUM4}",iVar2 / 10000);
  TodReplaceNumberString(awStack_a0,L"{NUM5}",(iVar2 % 10000) / 100);
  TodReplaceNumberString(awStack_98,L"{NUM6}",iVar2 % 100);
  FUN_054766c8(this + 0x140,asStack_90);
  FUN_05476c50(asStack_90);
  FUN_05476c50(awStack_98);
  FUN_05476c50(awStack_a0);
  if (*(long *)(this + 0x138) != 0) {
    PuzzleTip::SetTip(*(long *)(this + 0x138),this + 0x140);
  }
  FUN_05476c50(awStack_a8);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FestivalGamePage::OnCreate() */

char __thiscall FestivalGamePage::OnCreate(FestivalGamePage *this)

{
  char cVar1;
  
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    InitView(this);
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePage::ButtonDepress(int) */

void __thiscall FestivalGamePage::ButtonDepress(FestivalGamePage *this,int param_1)

{
  char cVar1;
  int iVar2;
  UIMessageBox *this_00;
  Image *pIVar3;
  long lVar4;
  wstring awStack_a8 [8];
  wstring awStack_a0 [8];
  undefined1 auStack_98 [8];
  string asStack_90 [8];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x1f8) {
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
      showFestivalGameEntrance();
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to FestivalGamePage::ButtonDepress(int) */

void __thiscall FestivalGamePage::ButtonDepress(FestivalGamePage *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

