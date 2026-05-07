// Class: CodeRewardUI


/* CodeRewardUI::EditWidgetText(int, std::wstring const&) */

void CodeRewardUI::EditWidgetText(int param_1,wstring *param_2)

{
  *(undefined1 *)(*(long *)((ulong)(uint)param_1 + 0x120) + 0x16c) = 0;
  return;
}


/* non-virtual thunk to CodeRewardUI::EditWidgetText(int, std::wstring const&) */

void __thiscall CodeRewardUI::EditWidgetText(CodeRewardUI *this,int param_1,wstring *param_2)

{
  EditWidgetText((int)this + -0xe0,(wstring *)(ulong)(uint)param_1);
  return;
}


/* CodeRewardUI::AllowKey(int, Sexy::KeyCode) */

undefined8 CodeRewardUI::AllowKey(void)

{
  return 1;
}


/* non-virtual thunk to CodeRewardUI::AllowKey(int, Sexy::KeyCode) */

void __thiscall CodeRewardUI::AllowKey(CodeRewardUI *this)

{
  AllowKey(this + -0xe0);
  return;
}


/* CodeRewardUI::AllowText(int, std::wstring const&) */

undefined8 CodeRewardUI::AllowText(int param_1,wstring *param_2)

{
  return 1;
}


/* non-virtual thunk to CodeRewardUI::AllowText(int, std::wstring const&) */

void __thiscall CodeRewardUI::AllowText(CodeRewardUI *this,int param_1,wstring *param_2)

{
  AllowText((int)this + -0xe0,(wstring *)(ulong)(uint)param_1);
  return;
}


/* CodeRewardUI::AllowChar(int, wchar_t) */

bool __thiscall CodeRewardUI::AllowChar(CodeRewardUI *this,int param_1,wchar_t param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = true;
  iVar1 = iswalnum(param_2);
  if ((iVar1 == 0) &&
     ((param_2 != L' ' || (lVar2 = FUN_054765c4(*(long *)(this + 0x120) + 0xe8), lVar2 == 0)))) {
    bVar3 = (uint)param_2 < 0x100;
  }
  return bVar3;
}


/* non-virtual thunk to CodeRewardUI::AllowChar(int, wchar_t) */

void __thiscall CodeRewardUI::AllowChar(CodeRewardUI *this,int param_1,wchar_t param_2)

{
  AllowChar(this + -0xe0,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CodeRewardUI::~CodeRewardUI() */

void __thiscall CodeRewardUI::~CodeRewardUI(CodeRewardUI *this)

{
  LawnApp *pLVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06980ea0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069811e8;
  *(undefined ***)(this + 0xe0) = &PTR_EditWidgetText_06981230;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Universe_Map");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_UserInfo");
  cVar2 = LawnApp::IsGroupLoadComplete(pLVar1,asStack_10);
  if ((cVar2 != '\0') && (cVar2 = UISettingHeadshot::isActive(), cVar2 == '\0')) {
    std::string::~string(asStack_10);
    nop();
    pLVar1 = gLawnApp;
    std::string::string(asStack_10,"UI_UserInfo");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
  }
  std::string::~string(asStack_10);
  nop();
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CodeRewardUI::~CodeRewardUI() */

void __thiscall CodeRewardUI::~CodeRewardUI(CodeRewardUI *this)

{
  ~CodeRewardUI(this);
  AK::FreeHook(this);
  return;
}


/* CodeRewardUI::showError(bool, std::wstring const&) */

void __thiscall CodeRewardUI::showError(CodeRewardUI *this,bool param_1,wstring *param_2)

{
  CodeRewardErrorDialog *this_00;
  
  if (*(CodeRewardErrorDialog **)(this + 0x130) != (CodeRewardErrorDialog *)0x0) {
    CodeRewardErrorDialog::showError(*(CodeRewardErrorDialog **)(this + 0x130),param_1,param_2);
    return;
  }
  this_00 = ::operator_new(0x108);
  CodeRewardErrorDialog::CodeRewardErrorDialog(this_00);
  *(CodeRewardErrorDialog **)(this + 0x130) = this_00;
  (**(code **)(*(long *)this + 0x60))(this);
  CodeRewardErrorDialog::showError(*(CodeRewardErrorDialog **)(this + 0x130),param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CodeRewardUI::ButtonDepress(int) */

void __thiscall CodeRewardUI::ButtonDepress(CodeRewardUI *this,int param_1)

{
  LawnApp *pLVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  Util *this_00;
  NetworkMgr *this_01;
  long *plVar5;
  PVZ2UIDialog *pPVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    LawnApp::KillCodeRewardUI(gLawnApp);
  }
  else if (param_1 == 1) {
    cVar2 = LawnApp::IsNetworkModuleOK();
    pLVar1 = gLawnApp;
    if (cVar2 == '\0') {
      FUN_05478178((wstring *)&local_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
      FUN_05478178((wstring *)asStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",&local_60);
      pPVar6 = (PVZ2UIDialog *)
               LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)&local_58,(wstring *)asStack_50);
      FUN_05476c50((wstring *)asStack_50);
      nop();
      FUN_05476c50((wstring *)&local_58);
      nop();
      FUN_05478178((wstring *)&local_58,L"[BUTTON_OK]",&local_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,(wstring *)asStack_50);
      PVZ2UIDialog::AddButton(pPVar6,(wstring *)&local_58,aDStack_38,1);
      FUN_05476c50((wstring *)&local_58);
      nop();
    }
    else {
      lVar7 = *(long *)(this + 0x120);
      local_60 = FUN_05476ef0(lVar7 + 0xe8);
      local_58 = FUN_05476f24(lVar7 + 0xe8);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58),
            bVar3) {
        puVar4 = (undefined4 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
        cVar2 = (**(code **)(*(long *)this + 0x328))(this,0,*puVar4);
        if (cVar2 == '\0') {
          TodStringTranslate(L"[CODE_COMMON_ERROR]");
          showError(this,false,(wstring *)asStack_50);
          FUN_05476c50(asStack_50);
          (**(code **)(*(long *)gLawnApp + 0x340))(gLawnApp);
          plVar5 = *(long **)(this + 0x120);
          pcVar8 = *(code **)(*plVar5 + 0x318);
          std::string::string(asStack_50,"");
          (*pcVar8)(plVar5,asStack_50);
          std::string::~string(asStack_50);
          nop();
          goto LAB_04c03580;
        }
        eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                  ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_60);
      }
      std::string::string((string *)&local_58,"");
      nop();
      Android::Util::GetPackageName(this_00);
      FUN_05474278((string *)&local_58,asStack_50);
      std::string::~string(asStack_50);
      this_01 = (NetworkMgr *)NetworkMgr::Instance();
      plVar5 = (long *)NetworkMgr::GetNewNetWorkProcess(this_01);
      pcVar8 = *(code **)(*plVar5 + 0x350);
      Sexy::ToString((wstring *)(*(long *)(this + 0x120) + 0xe8));
      (*pcVar8)(plVar5,(string *)&local_58,asStack_50);
      std::string::~string(asStack_50);
      pLVar1 = gLawnApp;
      std::string::string(asStack_50,"[NET_CONNECTING]");
      LawnApp::ShowNetConnectingUI(pLVar1,asStack_50);
      std::string::~string(asStack_50);
      nop();
      (**(code **)(*(long *)gLawnApp + 0x340))(gLawnApp);
      plVar5 = *(long **)(this + 0x120);
      pcVar8 = *(code **)(*plVar5 + 0x318);
      std::string::string(asStack_50,"");
      (*pcVar8)(plVar5,asStack_50);
      std::string::~string(asStack_50);
      nop();
      std::string::~string((string *)&local_58);
    }
  }
LAB_04c03580:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to CodeRewardUI::ButtonDepress(int) */

void __thiscall CodeRewardUI::ButtonDepress(CodeRewardUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CodeRewardUI::CodeRewardUI() */

void __thiscall CodeRewardUI::CodeRewardUI(CodeRewardUI *this)

{
  ButtonListener *this_00;
  Insets *this_01;
  undefined *puVar1;
  LawnApp *pLVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  PVZ2UIButton *pPVar12;
  LotteryResultProgressBar *this_02;
  SalesProgressBar *this_03;
  PVZ2UIEditWidget *this_04;
  undefined8 uVar13;
  long *plVar14;
  code *pcVar15;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 auStack_98 [8];
  wstring awStack_90 [8];
  Color aCStack_88 [12];
  undefined4 local_7c;
  string asStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ButtonListener *)(this + 0xd8);
  this_01 = (Insets *)(this + 0x108);
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener(this_00);
  Sexy::EditListener::EditListener((EditListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06980ea0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069811e8;
  *(undefined ***)(this + 0xe0) = &PTR_EditWidgetText_06981230;
  Sexy::Insets::Insets((Insets *)(this + 0xe8));
  Sexy::Insets::Insets((Insets *)(this + 0xf8));
  Sexy::Insets::Insets(this_01);
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  Sexy::Widget::Resize
            ((Widget *)this,*(int *)(gLawnApp + 0x71c),*(int *)(gLawnApp + 0x720),
             *(int *)(gLawnApp + 0x724),*(int *)(gLawnApp + 0x728));
  iVar4 = FUN_04c02ee8(0x2da);
  iVar5 = FUN_04c02ee8(0x1ea);
  iVar6 = FUN_04c02ee8(0x19);
  Sexy::Insets::Insets
            ((Insets *)&local_40,(*(int *)(this + 0x50) - iVar4) / 2,
             iVar6 + (*(int *)(this + 0x54) - iVar5) / 2,iVar4,iVar5);
  *(undefined8 *)(this + 0xe8) = local_40;
  *(undefined8 *)(this + 0xf0) = uStack_38;
  iVar6 = FUN_04c02ee8(0x28);
  iVar4 = *(int *)(this + 0xe8);
  iVar7 = FUN_04c02ee8(0x50);
  iVar5 = *(int *)(this + 0xec);
  iVar8 = FUN_04c02ee8(0x1ea);
  iVar9 = FUN_04c02ee8(0x3c);
  Sexy::Insets::Insets((Insets *)&local_40,iVar6 + iVar4,iVar7 + iVar5,iVar8,iVar9);
  *(undefined8 *)(this + 0xf8) = local_40;
  *(undefined8 *)(this + 0x100) = uStack_38;
  iVar6 = FUN_04c02ee8(5);
  iVar4 = *(int *)(this + 0xf8);
  iVar5 = *(int *)(this + 0xfc);
  iVar7 = FUN_04c02ee8(10);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar6 + iVar4,iVar6 + iVar5,*(int *)(this + 0x100) - iVar7,
             *(int *)(this + 0x104) - iVar7);
  *(undefined8 *)this_01 = local_40;
  *(undefined8 *)(this + 0x110) = uStack_38;
  FUN_05478178(asStack_78,&DAT_056f11a8,aCStack_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,0,this_00,(wstring *)asStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x118) = pPVar12;
  FUN_05476c50(asStack_78);
  nop();
  plVar14 = *(long **)(this + 0x118);
  iVar4 = *(int *)(this + 0xe8);
  iVar5 = *(int *)(this + 0xf0);
  pcVar15 = *(code **)(*plVar14 + 0x198);
  iVar7 = FUN_04c02ee8(0x28);
  iVar8 = FUN_04c02ee8(10);
  iVar6 = *(int *)(this + 0xec);
  this_02 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d918);
  uVar10 = LotteryResultProgressBar::GetCurrentLevel(this_02);
  this_03 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d918);
  uVar11 = SalesProgressBar::GetCurrentLevel(this_03);
  (*pcVar15)(plVar14,(iVar4 + iVar5) - iVar7,iVar6 - iVar8,uVar10,uVar11);
  pPVar12 = *(PVZ2UIButton **)(this + 0x118);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b8d918,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8db68,1);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)&local_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x118));
  FUN_05478178(awStack_90,&DAT_056f11a8,(Insets *)&local_40);
  nop();
  this_04 = ::operator_new(0x1b8);
  PVZ2UIEditWidget::PVZ2UIEditWidget
            (this_04,(TRect *)this_01,0,(EditListener *)(this + 0xe0),awStack_90,true);
  *(PVZ2UIEditWidget **)(this + 0x120) = this_04;
  *(undefined4 *)(this_04 + 0x148) = 0xe;
  (**(code **)(*(long *)this_04 + 0x170))(this_04,2,&PrimeText_Game::Color_Description_Brown);
  Sexy::Color::Color(aCStack_88,1);
  local_7c = 0;
  (**(code **)(**(long **)(this + 0x120) + 0x170))(*(long **)(this + 0x120),0,aCStack_88);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x120));
  FUN_05478178(asStack_78,L"[PLANT_OBTAIN]",auStack_98);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,1,this_00,(wstring *)asStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x128) = pPVar12;
  FUN_05476c50(asStack_78);
  nop();
  plVar14 = *(long **)(this + 0x128);
  iVar6 = FUN_04c02ee8(0x21c);
  iVar4 = *(int *)(this + 0xe8);
  iVar7 = FUN_04c02ee8(0x50);
  iVar5 = *(int *)(this + 0xec);
  uVar10 = FUN_04c02ee8(0x96);
  uVar11 = FUN_04c02ee8(0x3c);
  (**(code **)(*plVar14 + 0x198))(plVar14,iVar6 + iVar4,iVar7 + iVar5,uVar10,uVar11);
  plVar14 = *(long **)(this + 0x128);
  pcVar15 = *(code **)(*plVar14 + 800);
  uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  (*pcVar15)(plVar14,uVar13);
  pPVar12 = *(PVZ2UIButton **)(this + 0x128);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b8d980,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8da68,3);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)&local_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x128));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRewardResult);
  local_c0 = local_40;
  uStack_b8 = uStack_38;
  local_b0 = local_30;
  MessageRouter::
  Subscribe<bool,S2C_CodeRewardResult_const*,Sexy::CBMemberTranslatorX<CodeRewardUI,void(CodeRewardUI::*)(bool,S2C_CodeRewardResult_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyCodeRewardResult,&local_c0);
  pLVar2 = gLawnApp;
  std::string::string(asStack_78,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar2,asStack_78);
  std::string::~string(asStack_78);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_78,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar2,asStack_78);
  std::string::~string(asStack_78);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_78,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar2,asStack_78);
  std::string::~string(asStack_78);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_78,"UI_Universe_Map");
  LawnApp::LoadGroup(pLVar2,asStack_78);
  std::string::~string(asStack_78);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_78,"UI_NewAvatar");
  LawnApp::LoadGroup(pLVar2,asStack_78);
  std::string::~string(asStack_78);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_78,"UI_UserInfo");
  cVar3 = LawnApp::IsGroupLoadComplete(pLVar2,asStack_78);
  if ((cVar3 == '\0') && (cVar3 = UISettingHeadshot::isActive(), cVar3 == '\0')) {
    std::string::~string(asStack_78);
    nop();
    pLVar2 = gLawnApp;
    std::string::string(asStack_78,"UI_UserInfo");
    LawnApp::LoadGroup(pLVar2,asStack_78);
  }
  std::string::~string(asStack_78);
  nop();
  FUN_05476c50(awStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CodeRewardUI::showRewardList(S2C_CodeRewardResult const*) */

void __thiscall CodeRewardUI::showRewardList(CodeRewardUI *this,S2C_CodeRewardResult *param_1)

{
  CodeRewardDlg *this_00;
  
  if (*(CodeRewardDlg **)(this + 0x138) != (CodeRewardDlg *)0x0) {
    CodeRewardDlg::showRewardList(*(CodeRewardDlg **)(this + 0x138),param_1);
    return;
  }
  this_00 = ::operator_new(0x120);
  CodeRewardDlg::CodeRewardDlg(this_00);
  *(CodeRewardDlg **)(this + 0x138) = this_00;
  (**(code **)(*(long *)this + 0x60))(this);
  CodeRewardDlg::showRewardList(*(CodeRewardDlg **)(this + 0x138),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CodeRewardUI::onRewardResult(bool, S2C_CodeRewardResult const*) */

void __thiscall
CodeRewardUI::onRewardResult(CodeRewardUI *this,bool param_1,S2C_CodeRewardResult *param_2)

{
  undefined *puVar1;
  bool bVar2;
  ProfileMgr *pPVar3;
  int *piVar4;
  Util *this_00;
  string asStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  GAME_ITEM_INFO aGStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    if (*(int *)(param_2 + 0x14) == 0) {
      Sexy::UTF8StringToSexyString((string *)(param_2 + 0x18));
      showError(this,true,(wstring *)aGStack_38);
      FUN_05476c50((wstring *)aGStack_38);
    }
    else {
      showRewardList(this,param_2);
      pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      ProfileMgr::GetCurrentProfile(pPVar3);
      local_48 = FUN_04c03450(*(undefined8 *)(param_2 + 0x20));
      local_40 = FUN_04c034a0(*(undefined8 *)(param_2 + 0x28));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40),
            bVar2) {
        piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
        ProfileChangeItemAmount(*piVar4,piVar4[1],false);
        GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
      }
      pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      ProfileMgr::Save(pPVar3,false,false);
      std::string::string(asStack_50,"");
      nop();
      Android::Util::GetPackageName(this_00);
      FUN_05474278(asStack_50,aGStack_38);
      std::string::~string((string *)aGStack_38);
      puVar1 = gMessageRouter;
      FUN_05475d88((exception_ptr *)&local_48,param_2 + 0x88);
      FUN_05475d88((string *)&local_40,asStack_50);
      std::vector<S2C_CodeRewardPlantNum,std::allocator<S2C_CodeRewardPlantNum>>::vector
                ((vector<S2C_CodeRewardPlantNum,std::allocator<S2C_CodeRewardPlantNum>> *)aGStack_38
                 ,(vector *)(param_2 + 0x20));
      MessageRouter::
      Broadcast<std::string_const&,std::string_const&,std::vector<S2C_CodeRewardPlantNum,std::allocator<S2C_CodeRewardPlantNum>>const&,std::string,std::string,std::vector<S2C_CodeRewardPlantNum,std::allocator<S2C_CodeRewardPlantNum>>>
                ((MessageRouter *)puVar1,Message::CodeReward,(exception_ptr *)&local_48,
                 (string *)&local_40,aGStack_38);
      std::vector<S2C_CodeRewardPlantNum,std::allocator<S2C_CodeRewardPlantNum>>::~vector
                ((vector<S2C_CodeRewardPlantNum,std::allocator<S2C_CodeRewardPlantNum>> *)aGStack_38
                );
      std::string::~string((string *)&local_40);
      std::string::~string((string *)&local_48);
      std::string::~string(asStack_50);
    }
  }
  else {
    TodStringTranslate(L"[CODE_COMMON_ERROR]");
    showError(this,param_1,(wstring *)aGStack_38);
    FUN_05476c50((wstring *)aGStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CodeRewardUI::Update() */

void __thiscall CodeRewardUI::Update(CodeRewardUI *this)

{
  char cVar1;
  long *plVar2;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  cVar1 = FUN_054765e8(*(long *)(this + 0x120) + 0xe8);
  plVar2 = *(long **)(this + 0x128);
  if (cVar1 == '\0') {
    (**(code **)(*plVar2 + 0x188))(plVar2);
    return;
  }
  (**(code **)(*plVar2 + 0x188))(plVar2,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CodeRewardUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall CodeRewardUI::DrawAll(CodeRewardUI *this,ModalFlags *param_1,Graphics *param_2)

{
  undefined8 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xe8));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d8c8);
  Draw9SliceImage(param_2,aIStack_18,uVar1);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xf8));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8dac0);
  Draw9SliceImage(param_2,aIStack_18,uVar1);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x108));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d878);
  Draw9SliceImage(param_2,aIStack_18,uVar1);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CodeRewardUI::Draw(Sexy::Graphics*) */

void __thiscall CodeRewardUI::Draw(CodeRewardUI *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  LotteryResultProgressBar *pLVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 auStack_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8dae8);
  iVar4 = *(int *)(this + 0x50);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8dae8);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  iVar3 = FUN_04c02ee8(0x2c);
  Sexy::Graphics::DrawImage(param_1,pIVar5,(iVar4 - iVar2) / 2,*(int *)(this + 0xec) - iVar3);
  pcVar8 = *(code **)(*(long *)this + 0x290);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  iVar2 = FUN_04c02ee8(0x1a);
  iVar4 = *(int *)(this + 0xec);
  TodStringTranslate(L"[CODE_REWARD_TITLE]");
  (*pcVar8)(this,param_1,uVar7,aIStack_18,iVar4 - iVar2,aIStack_28);
  FUN_05476c50(aIStack_28);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d948);
  iVar4 = *(int *)(this + 0x50);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d948);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  iVar3 = FUN_04c02ee8(0xaa);
  Sexy::Graphics::DrawImage(param_1,pIVar5,(iVar4 - iVar2) / 2,iVar3 + *(int *)(this + 0xec));
  cVar1 = FUN_054765e8(*(long *)(this + 0x120) + 0xe8);
  if (cVar1 != '\0') {
    Sexy::Color::Color((Color *)&local_38,1);
    local_2c = 0x80;
    pcVar8 = *(code **)(*(long *)this + 0x2a8);
    local_38 = 0x80;
    local_34 = 0x80;
    local_30 = 0x80;
    uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline)
    ;
    Sexy::Insets::Insets(aIStack_18,(Insets *)&local_38);
    iVar4 = FUN_04c02ee8(5);
    Sexy::Insets::Insets
              (aIStack_28,*(int *)(this + 0x108),iVar4 + *(int *)(this + 0x10c),
               *(int *)(this + 0x110),*(int *)(this + 0x114));
    TodStringTranslate(L"[CODE_REWARD_TIP]");
    (*pcVar8)(this,param_1,uVar7,aIStack_18,aIStack_28,auStack_40,0xffffffff,0);
    FUN_05476c50(auStack_40);
  }
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

