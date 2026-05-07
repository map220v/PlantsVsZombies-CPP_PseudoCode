// Class: UIWorldLevelPackage


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldLevelPackage::GetLayoutName() */

void __thiscall UIWorldLevelPackage::GetLayoutName(UIWorldLevelPackage *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIWorldLevelPackage");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIWorldLevelPackage::~UIWorldLevelPackage() */

void __thiscall UIWorldLevelPackage::~UIWorldLevelPackage(UIWorldLevelPackage *this)

{
  *(undefined ***)this = &PTR_GetClass_06868b30;
  *(undefined **)(this + 0xd8) = &DAT_06868e80;
  UISingletonDialog<UIWorldLevelPackage>::~UISingletonDialog
            ((UISingletonDialog<UIWorldLevelPackage> *)this);
  return;
}


/* UIWorldLevelPackage::~UIWorldLevelPackage() */

void __thiscall UIWorldLevelPackage::~UIWorldLevelPackage(UIWorldLevelPackage *this)

{
  ~UIWorldLevelPackage(this);
  AK::FreeHook(this);
  return;
}


/* UIWorldLevelPackage::UIWorldLevelPackage() */

void __thiscall UIWorldLevelPackage::UIWorldLevelPackage(UIWorldLevelPackage *this)

{
  UISingletonDialog<UIWorldLevelPackage>::UISingletonDialog
            ((UISingletonDialog<UIWorldLevelPackage> *)this);
  *(undefined ***)this = &PTR_GetClass_06868b30;
  *(undefined **)(this + 0xd8) = &DAT_06868e80;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldLevelPackage::ShowTips() */

void UIWorldLevelPackage::ShowTips(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  PVZ2UIDialog *this;
  wchar16 *in_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  wchar16 *local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (___stack_chk_guard,in_x1,in_x2,in_x3,in_x4);
  if (cVar1 == '\0') {
    iVar2 = FUN_045aaddc(0x28a);
    iVar3 = FUN_045aaddc(0x10e);
  }
  else {
    iVar2 = FUN_045aaddc(600);
    iVar3 = FUN_045aaddc(300);
  }
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[WORLD_LEVEL_PACKAGE_TIPS_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[WORLD_LEVEL_PACKAGE_TIPS_DESC]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetFooterAlign(this,3);
  iVar2 = FUN_045aaddc(2);
  PVZ2UIDialog::SetFooterBottomPadding(this,iVar2);
  PVZ2UIDialog::SetBackgroundDarken(this,true,0.5);
  FUN_05478178(auStack_58,L"[OVERVIEW_CONFIRM]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWorldLevelPackage::ButtonDepress(int) */

void __thiscall UIWorldLevelPackage::ButtonDepress(UIWorldLevelPackage *this,int param_1)

{
  if (param_1 == 1000) {
    UISingletonDialog<UIWorldLevelPackage>::CloseDialog();
    return;
  }
  if (param_1 == 0x3e9) {
    ShowTips();
    return;
  }
  return;
}


/* non-virtual thunk to UIWorldLevelPackage::ButtonDepress(int) */

void __thiscall UIWorldLevelPackage::ButtonDepress(UIWorldLevelPackage *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldLevelPackage::InitView() */

void __thiscall UIWorldLevelPackage::InitView(UIWorldLevelPackage *this)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  UIWidgetText *pUVar7;
  long *plVar8;
  WorldLevelPackageManager *pWVar9;
  WorldLevelPackageButton *this_00;
  char *pcVar10;
  ProfileMgr *this_01;
  string *psVar11;
  TGALogMgr *this_02;
  string *extraout_x1;
  size_t __n;
  code *pcVar12;
  code *pcVar13;
  int iVar14;
  int iVar15;
  Sexy aSStack_60 [8];
  undefined1 auStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [16];
  string asStack_38 [32];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
  pcVar13 = (code *)0x0;
  RechargeDailySignActivityManager::GetBannerImageName();
  std::string::string(asStack_38,"WorldTitle");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  Sexy::StringToUpper(aSStack_60,extraout_x1);
  std::operator+("[",asStack_50);
  std::operator+(asStack_48,"]");
  StringHelper::ToStringValue(asStack_38);
  std::string::~string(asStack_38);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  PuzzleTip::SetTip(pUVar7,auStack_58);
  std::string::string(asStack_38,"ButtonContainer");
  plVar8 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  iVar5 = FUN_045aaddc(0x1e);
  iVar6 = *(int *)((long)plVar8 + 0x54);
  iVar2 = ((int)plVar8[10] + iVar5 * -2) / 3;
  iVar14 = 0;
  do {
    pWVar9 = (WorldLevelPackageManager *)
             Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
    FUN_05475d88(asStack_38,aSStack_60);
    cVar3 = WorldLevelPackageManager::CheckPackageValid(pWVar9,asStack_38,pcVar13);
    std::string::~string(asStack_38);
    pWVar9 = (WorldLevelPackageManager *)
             Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
    FUN_05475d88(asStack_38,aSStack_60);
    pcVar12 = pcVar13;
    cVar4 = WorldLevelPackageManager::CheckTimeValid(pWVar9,asStack_38);
    std::string::~string(asStack_38);
    iVar15 = iVar14;
    if ((cVar4 != '\0') && (cVar3 != '\0')) {
      this_00 = ::operator_new(0x3a8);
      WorldLevelPackageButton::WorldLevelPackageButton(this_00,(int)pcVar13 + 2000);
      pcVar12 = *(code **)(*(long *)this_00 + 0x1a0);
      iVar15 = iVar14 + iVar2 + iVar5;
      Sexy::Insets::Insets((Insets *)asStack_38,iVar14,0,iVar2,iVar6);
      (*pcVar12)(this_00,asStack_38);
      WorldLevelPackageButton::InitView(this_00);
      pcVar12 = *(code **)(*plVar8 + 0x60);
      (*pcVar12)(plVar8,this_00);
    }
    uVar1 = (int)pcVar13 + 1;
    pcVar13 = (code *)(ulong)uVar1;
    iVar14 = iVar15;
  } while (uVar1 != 3);
  TGASecretStore::TGASecretStore((TGASecretStore *)asStack_38);
  DString::DString((DString *)asStack_48,2);
  pcVar10 = (char *)DString::c_str((DString *)asStack_48);
  std::string::append(asStack_38,pcVar10,(size_t)pcVar12);
  DString::~DString((DString *)asStack_48);
  thunk_FUN_05475e00(auStack_18,aSStack_60);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  psVar11 = (string *)ProfileMgr::GetCurrentProfile(this_01);
  __n = 0;
  iVar6 = PlayerInfo::GetStarsCompletedInWorld(psVar11,SUB81(aSStack_60,0));
  DString::DString((DString *)asStack_48,iVar6);
  pcVar10 = (char *)DString::c_str((DString *)asStack_48);
  std::string::append(asStack_10,pcVar10,__n);
  DString::~DString((DString *)asStack_48);
  this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogLevelPackageData(this_02,(TGALevelPackageData *)asStack_38);
  DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_38);
  FUN_05476c50(auStack_58);
  std::string::~string((string *)aSStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldLevelPackage::OnCreate() */

void __thiscall UIWorldLevelPackage::OnCreate(UIWorldLevelPackage *this)

{
  Widget *pWVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pWVar1 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar1,true);
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

