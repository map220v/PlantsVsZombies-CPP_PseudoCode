// Class: MainMenu


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::onSyncProfileToServer(bool) */

void __thiscall MainMenu::onSyncProfileToServer(MainMenu *this,bool param_1)

{
  LawnApp *this_00;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (!param_1) {
    FUN_05478178(awStack_18,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_28);
    FUN_05478178(awStack_10,L"[NETWORK_NOT_CONNECTED_TEXT_FOR_SYNC_PLAYERINFO]",auStack_20);
    LawnApp::CheckNetWork(this_00,awStack_18,awStack_10);
    FUN_05476c50(awStack_10);
    nop();
    FUN_05476c50(awStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MainMenu::OnCheckMD5Failed() */

void MainMenu::OnCheckMD5Failed(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  Android::Device::ExitApp();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::onNetworkError(int) */

void MainMenu::onNetworkError(int param_1)

{
  LawnApp *this;
  char cVar1;
  NetworkMgr *pNVar2;
  INetworkMsgProcess *this_00;
  long *plVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
  this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
  if (*(code **)(*(long *)this_00 + 0x28) == INetworkMsgProcess::IsLogined) {
    cVar1 = INetworkMsgProcess::IsLogined(this_00);
  }
  else {
    cVar1 = (**(code **)(*(long *)this_00 + 0x28))();
  }
  this = gLawnApp;
  if (cVar1 == '\0') {
    *(undefined1 *)((ulong)(uint)param_1 + 0x219) = 0;
    pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
    plVar3 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
    local_10[0] = 0;
    (**(code **)(*plVar3 + 0x38))();
  }
  else {
    FUN_05478178(awStack_18,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_28);
    FUN_05478178((wstring *)local_10,L"[NETWORK_NOT_CONNECTED_TEXT_FOR_SYNC_PLAYERINFO]",auStack_20)
    ;
    cVar1 = LawnApp::CheckNetWork(this,awStack_18,(wstring *)local_10);
    FUN_05476c50((wstring *)local_10);
    nop();
    FUN_05476c50(awStack_18);
    nop();
    if (cVar1 != '\0') {
      LawnApp::CheckNetWorkWifiIssue(gLawnApp);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* MainMenu::onProfileListChanged() */

void __thiscall MainMenu::onProfileListChanged(MainMenu *this)

{
  (**(code **)(**(long **)(this + 0x1a8) + 0x310))(*(long **)(this + 0x1a8));
  FUN_03e97fb0(*(long *)(this + 0x1a8) + 0x110,0);
  return;
}


/* MainMenu::reloadData() */

void MainMenu::reloadData(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* MainMenu::ScrollLeft() */

void __thiscall MainMenu::ScrollLeft(MainMenu *this)

{
  PVZ2UIScrollingPaneWidget::ScrollLeft(*(PVZ2UIScrollingPaneWidget **)(this + 0x1a8));
  return;
}


/* MainMenu::createSettingsDialog() */

void __thiscall MainMenu::createSettingsDialog(MainMenu *this)

{
  SettingsDialog *this_00;
  
  this_00 = ::operator_new(0x148);
  SettingsDialog::SettingsDialog(this_00);
  *(SettingsDialog **)(this + 0x1a0) = this_00;
  (**(code **)(*(long *)this + 0x60))(this);
  Sexy::WidgetManager::AddBaseModal
            (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x1a0));
  return;
}


/* MainMenu::CreateComplainDialog() */

void __thiscall MainMenu::CreateComplainDialog(MainMenu *this)

{
  ComplainDialog *this_00;
  
  this_00 = ::operator_new(0xe0);
  ComplainDialog::ComplainDialog(this_00);
  *(ComplainDialog **)(this + 0x1b0) = this_00;
  (**(code **)(*(long *)this + 0x60))(this);
  Sexy::WidgetManager::AddBaseModal
            (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x1b0));
  return;
}


/* MainMenu::CreateAgeTipDialog() */

void __thiscall MainMenu::CreateAgeTipDialog(MainMenu *this)

{
  AgeTipDialog *this_00;
  
  this_00 = ::operator_new(0xe0);
  AgeTipDialog::AgeTipDialog(this_00);
  *(AgeTipDialog **)(this + 0x1b8) = this_00;
  (**(code **)(*(long *)this + 0x60))(this);
  Sexy::WidgetManager::AddBaseModal
            (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x1b8));
  return;
}


/* MainMenu::createAccountBindDialog() */

void __thiscall MainMenu::createAccountBindDialog(MainMenu *this)

{
  AccountBindDialog *this_00;
  long *plVar1;
  
  this_00 = ::operator_new(0x178);
  AccountBindDialog::AccountBindDialog(this_00);
  *(AccountBindDialog **)(this + 0x1c0) = this_00;
  (**(code **)(*(long *)this + 0x60))(this);
  Sexy::WidgetManager::AddBaseModal
            (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x1c0));
  plVar1 = *(long **)(this + 0x1c0);
  (**(code **)(*plVar1 + 0x1a8))
            (plVar1,(*(int *)(this + 0x50) - (int)plVar1[10]) / 2,
             (*(int *)(this + 0x54) - *(int *)((long)plVar1 + 0x54)) / 2);
  return;
}


/* MainMenu::NeedCreateRedeemButton() */

bool MainMenu::NeedCreateRedeemButton(void)

{
  int iVar1;
  
  iVar1 = LawnApp::GetPlatform(gLawnApp);
  return iVar1 == 0x71;
}


/* MainMenu::showDiffProfileSummary() */

void __thiscall MainMenu::showDiffProfileSummary(MainMenu *this)

{
  ProfileSummaryComparer *this_00;
  
  if (*(long *)(this + 0x210) != 0) {
    return;
  }
  this_00 = ::operator_new(0x1c8);
  ProfileSummaryComparer::ProfileSummaryComparer(this_00,true);
  *(ProfileSummaryComparer **)(this + 0x210) = this_00;
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  return;
}


/* MainMenu::closeDiffProfileSummary() */

void __thiscall MainMenu::closeDiffProfileSummary(MainMenu *this)

{
  if (*(long *)(this + 0x210) != 0) {
    (**(code **)(*(long *)this + 0x68))();
    if (*(long **)(this + 0x210) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x210) + 0x18))();
    }
    *(undefined8 *)(this + 0x210) = 0;
  }
  return;
}


/* MainMenu::retryConnect() */

void __thiscall MainMenu::retryConnect(MainMenu *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this[0x21a] = (MainMenu)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::onSyncProfileListFinish(bool) */

void __thiscall MainMenu::onSyncProfileListFinish(MainMenu *this,bool param_1)

{
  LawnApp *this_00;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this[0x21b] = (MainMenu)0x1;
    this[0x21c] = (MainMenu)0x1;
  }
  else {
    FUN_05478178(awStack_18,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_28);
    FUN_05478178(awStack_10,L"[NETWORK_NOT_CONNECTED_TEXT_FOR_SYNC_PLAYERINFO]",auStack_20);
    LawnApp::CheckNetWork(this_00,awStack_18,awStack_10);
    FUN_05476c50(awStack_10);
    nop();
    FUN_05476c50(awStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MainMenu::SetBindBtnEnable(bool) */

void __thiscall MainMenu::SetBindBtnEnable(MainMenu *this,bool param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x1f0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::InitDecompressImage() */

void __thiscall MainMenu::InitDecompressImage(MainMenu *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03e98680(0x2d0);
  iVar2 = FUN_03e98680(0x23);
  iVar3 = FUN_03e98680(0x2d);
  iVar3 = (*(int *)(this + 0x50) - iVar1) / 2 - iVar3;
  iVar4 = FUN_03e98680(0x1eb);
  Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar4,iVar1,iVar2);
  *(undefined8 *)(this + 0x104) = local_18;
  *(undefined8 *)(this + 0x10c) = uStack_10;
  std::string::string((string *)&local_18,"IMAGE_UI_MAINMENU_LOADER_METER_DECOMPRESS");
  uVar8 = StringHelper::ToImage((string *)&local_18,false);
  *(undefined8 *)(this + 0x170) = uVar8;
  std::string::~string((string *)&local_18);
  nop();
  std::string::string((string *)&local_18,"IMAGE_UI_MAINMENU_LOADER_METER_DECOMPRESS_FILL");
  uVar8 = StringHelper::ToImage((string *)&local_18,false);
  *(undefined8 *)(this + 0x178) = uVar8;
  std::string::~string((string *)&local_18);
  nop();
  if ((*(LotteryResultProgressBar **)(this + 0x170) == (LotteryResultProgressBar *)0x0) ||
     (*(long *)(this + 0x178) == 0)) {
    iVar7 = -0x3c;
    iVar6 = 0x1e;
    iVar9 = -0x3c;
    iVar5 = 0x1e;
  }
  else {
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x170));
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x178));
    iVar5 = (iVar5 - iVar6) / 2;
    iVar6 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x170));
    iVar7 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x178));
    iVar9 = iVar5 * -2;
    iVar6 = (iVar6 - iVar7) / 2;
    iVar7 = iVar6 * -2;
  }
  Sexy::Insets::Insets((Insets *)&local_18,iVar3 + iVar5,iVar4 + iVar6,iVar1 + iVar9,iVar2 + iVar7);
  *(undefined8 *)(this + 0x114) = local_18;
  *(undefined8 *)(this + 0x11c) = uStack_10;
  iVar3 = FUN_03e98680(0);
  iVar1 = FUN_03e98680(0x1b9);
  iVar2 = FUN_03e98680(0x37);
  Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar1,*(int *)(this + 0x50),iVar2);
  *(undefined8 *)(this + 0x130) = local_18;
  *(undefined8 *)(this + 0x138) = uStack_10;
  iVar3 = FUN_03e98680(0);
  iVar1 = FUN_03e98680(0x213);
  iVar2 = FUN_03e98680(0x37);
  Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar1,*(int *)(this + 0x50),iVar2);
  iVar3 = *(int *)(this + 0x104);
  iVar1 = *(int *)(this + 0x10c);
  *(undefined8 *)(this + 0x150) = local_18;
  *(undefined8 *)(this + 0x158) = uStack_10;
  iVar2 = FUN_03e98680(0);
  iVar4 = FUN_03e98680(0x1e9);
  iVar5 = FUN_03e98680(0x3c);
  iVar6 = FUN_03e98680(0x37);
  Sexy::Insets::Insets((Insets *)&local_18,iVar3 + iVar1 + iVar2,iVar4,iVar5,iVar6);
  *(undefined8 *)(this + 0x140) = local_18;
  *(undefined8 *)(this + 0x148) = uStack_10;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::drawBackgroundEffect(Sexy::Graphics*) */

void __thiscall MainMenu::drawBackgroundEffect(MainMenu *this,Graphics *param_1)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x228) != 0) {
    lVar1 = FUN_03e98054(*(undefined8 *)(*(long *)(this + 0x228) + 0x20));
    fVar3 = (float)*(int *)(lVar1 + 0x40);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,(float)*(int *)(lVar1 + 0x3c),fVar3);
    local_38 = (float)Sexy::SexyVector2::operator*
                                ((SexyVector2 *)&local_38,*(float *)(lVar1 + 0x28));
    local_34 = fVar3;
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    fVar3 = local_38;
    local_40 = 1.0;
    local_3c = (float)*(int *)(gLawnApp + 0xd4) / local_38;
    pfVar2 = eastl::max_alt<float>(&local_40,&local_3c);
    fVar4 = *pfVar2;
    FUN_03e97f90(-(fVar3 * 0.5),-(local_34 * 0.5),auStack_28,auStack_1c);
    Sexy::SexyTransform2D::Scale(aSStack_30,fVar4,fVar4);
    FUN_03e97f90((float)(*(int *)(gLawnApp + 0xd4) / 2),(float)(*(int *)(gLawnApp + 0xd8) / 2),
                 auStack_28,auStack_1c);
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x228),param_1,aSStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::createPrivacyDialog() */

void MainMenu::createPrivacyDialog(void)

{
  char cVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"AgreePravicy");
  cVar1 = UserPrefs::GetBool(asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 == '\0') {
    UISingletonDialog<UIPrivacyDialog>::ShowDialog();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::RequesBindUniqueID() */

void MainMenu::RequesBindUniqueID(void)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  NetworkMgr *this_00;
  androidNetworkMsgProcess *this_01;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  std::
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  ::_M_rightmost(this);
  PurchaseBroker::GetUniqueID();
  LawnApp::GetAppNameForiCloud();
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (androidNetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  androidNetworkMsgProcess::ICloudRequestBindingUniqueID(this_01,asStack_10,asStack_18);
  LawnApp::KillPVZ2Dialog(gLawnApp);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::UpdateProfieName() */

void __thiscall MainMenu::UpdateProfieName(MainMenu *this)

{
  char cVar1;
  long lVar2;
  ProfileMgr *pPVar3;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Sexy::LazySingleton<ProfileMgr>::GetInstancePtr();
  cVar1 = FUN_03e98068(*(undefined1 *)(lVar2 + 0x12e));
  if (cVar1 != '\0') {
    lVar2 = Sexy::LazySingleton<ProfileMgr>::GetInstancePtr();
    FUN_03e98060(lVar2 + 0x12e);
    FUN_05478178(auStack_18,&DAT_056f11a8,auStack_10);
    nop();
    pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    cVar1 = ProfileMgr::HasValidProfile(pPVar3);
    if (cVar1 != '\0') {
      pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      ProfileMgr::GetCurrentProfile(pPVar3);
      PlayerInfo::AM_GetName();
      FUN_054766c8(auStack_18,auStack_10);
      FUN_05476c50(auStack_10);
      thunk_FUN_05477b9c(*(long *)(this + 0x1d0) + 0xd8,auStack_18);
    }
    FUN_05476c50(auStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MainMenu::updateBackgroundEffect() */

void __thiscall MainMenu::updateBackgroundEffect(MainMenu *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  this_00 = *(PopAnimRig **)(this + 0x228);
  if (this_00 != (PopAnimRig *)0x0) {
    fVar1 = (float)PVZ_T();
    fVar2 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
    return;
  }
  return;
}


/* MainMenu::GetPreviousDecompressTime() */

int __thiscall MainMenu::GetPreviousDecompressTime(MainMenu *this)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (*(int *)(this + 0x100) < 1) {
    iVar2 = 0;
  }
  else {
    lVar4 = 0;
    iVar2 = 0;
    do {
      pfVar1 = (float *)FUN_03e980e0(*(undefined8 *)(this + 0xe8),lVar4);
      fVar8 = *pfVar1;
      fVar5 = (float)TitleScreen::GetSecondDecompressTotalAmount();
      fVar6 = (float)PVZ_Dt();
      fVar7 = (float)TitleScreen::GetSecondDecompressTotalAmount();
      iVar3 = (int)lVar4;
      lVar4 = lVar4 + 1;
      iVar2 = (int)((float)(int)((fVar8 * fVar5) / (fVar6 * fVar7 * 0.9)) + (float)iVar2);
    } while (iVar3 + 1 < *(int *)(this + 0x100));
  }
  return iVar2;
}


/* MainMenu::GetTotalDecompressTime() */

int __thiscall MainMenu::GetTotalDecompressTime(MainMenu *this)

{
  float *pfVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar3 = 0;
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0xe8);
    uVar2 = FUN_03e98098(uVar5,*(undefined8 *)(this + 0xf0));
    if (uVar2 <= uVar4) break;
    pfVar1 = (float *)FUN_03e980e0(uVar5,uVar4);
    fVar9 = *pfVar1;
    fVar6 = (float)TitleScreen::GetSecondDecompressTotalAmount();
    fVar7 = (float)PVZ_Dt();
    fVar8 = (float)TitleScreen::GetSecondDecompressTotalAmount();
    iVar3 = (int)((float)(int)((fVar9 * fVar6) / (fVar7 * fVar8 * 0.9)) + (float)iVar3);
    uVar4 = uVar4 + 1;
  }
  return iVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::GetLeftDecompressTime() */

void __thiscall MainMenu::GetLeftDecompressTime(MainMenu *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_10;
  int local_c;
  long local_8;
  
  iVar3 = *(int *)(this + 0x194);
  local_8 = ___stack_chk_guard;
  if (iVar3 == 0) {
    iVar1 = GetTotalDecompressTime(this);
    local_10 = GetPreviousDecompressTime(this);
    local_10 = iVar1 - local_10;
    local_c = iVar3;
    piVar2 = eastl::max_alt<int>(&local_10,&local_c);
    iVar3 = *piVar2;
    *(int *)(this + 0x194) = iVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


/* MainMenu::TryRedeem() */

void __thiscall MainMenu::TryRedeem(MainMenu *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PurchaseBroker *this_01;
  long *plVar1;
  float fVar2;
  
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PurchaseBroker *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(this_00);
  PurchaseBroker::CheckSpecialRedeem(this_01);
  fVar2 = (float)PVZ_RealT();
  plVar1 = *(long **)(this + 0x200);
  *(float *)(this + 0x208) = fVar2 + 60.0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::playBackgroundEffect() */

void __thiscall MainMenu::playBackgroundEffect(MainMenu *this)

{
  LawnApp *pLVar1;
  char cVar2;
  bool bVar3;
  ResourceInfo *pRVar4;
  RtClass *pRVar5;
  PopAnimRig *pPVar6;
  SecretGachaMgr *this_00;
  char *__s;
  string *psVar7;
  float fVar8;
  RtWeakPtr aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  cVar2 = LawnApp::IsUsingSpecialBackground(gLawnApp);
  psVar7 = *(string **)(pLVar1 + 0x848);
  if (cVar2 == '\0') {
    __s = "POPANIM_EFFECTS_MAINMENU_BACKGROUND";
  }
  else {
    __s = "POPANIM_EFFECTS_MAINMENU_BACKGROUND_SPECIAL";
  }
  std::string::string(asStack_40,__s);
  Sexy::ResourceManager::GetResourceForStringIdT<Sexy::PopAnim>(psVar7,SUB81(asStack_40,0));
  std::string::~string(asStack_40);
  nop();
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_48);
  pRVar5 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar6 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar4,pRVar5);
  *(PopAnimRig **)(this + 0x228) = pPVar6;
  std::string::string(asStack_40,"idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar6,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  SecretGachaMgr::GetScreenType(this_00);
  bVar3 = std::operator==(asStack_40,"Large");
  if (bVar3) {
    fVar8 = (float)PopAnimRig::GetDrawScale(*(PopAnimRig **)(this + 0x228));
    PopAnimRig::SetDrawScale(*(PopAnimRig **)(this + 0x228),fVar8 * 0.8);
  }
  std::string::~string(asStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::ShowBindUniqueID() */

void MainMenu::ShowBindUniqueID(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ReceivedDataCallback *in_x0;
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
    iVar2 = FUN_03e98680(0x28a);
    iVar3 = FUN_03e98680(0x140);
  }
  else {
    iVar2 = FUN_03e98680(600);
    iVar3 = FUN_03e98680(0x140);
  }
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[BIND_UNIQUE_ID_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[BIND_UNIQUE_ID_DESC]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetFooterAlign(this,3);
  iVar2 = FUN_03e98680(2);
  PVZ2UIDialog::SetFooterBottomPadding(this,iVar2);
  PVZ2UIDialog::SetBackgroundDarken(this,true,0.5);
  FUN_05478178(auStack_58,L"[OVERVIEW_CONFIRM]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (in_x0,RequesBindUniqueID);
  Sexy::Delegate0::Delegate0<MainMenu,void(MainMenu::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::onCheckRedeemFinished(bool) */

void __thiscall MainMenu::onCheckRedeemFinished(MainMenu *this,bool param_1)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_01;
  PrimeTypeface *pPVar3;
  wchar_t *pwVar4;
  undefined1 auStack_70 [8];
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  Color aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03e98680(400);
  iVar2 = FUN_03e98680(0xfa);
  this_01 = (PVZ2UIDialog *)
            LawnApp::ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  if (param_1) {
    FUN_05478178(awStack_68,L"[REDEEM_SUCCESS_TITLE]",aCStack_50);
    nop();
    pwVar4 = L"[REDEEM_SUCCESS_TEXT]";
  }
  else {
    FUN_05478178(awStack_68,L"[REDEEM_FAILED_TITLE]",aCStack_50);
    nop();
    pwVar4 = L"[REDEEM_FAILED_TEXT]";
  }
  FUN_05478178(awStack_60,pwVar4,aCStack_50);
  nop();
  PVZ2UIDialog::SetHeaderLabel(this_01,awStack_68);
  PVZ2UIDialog::SetFooterLabel(this_01,awStack_60);
  pPVar3 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
  PVZ2UIDialog::SetHeaderFont(this_01,pPVar3,(Color *)&PrimeText_Game::Color_Generic_Title);
  pPVar3 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Color::Color(aCStack_50,1);
  PVZ2UIDialog::SetFooterFont(this_01,pPVar3,aCStack_50);
  PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
  FUN_05478178(auStack_58,L"[BUTTON_OK]",auStack_70);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,aCStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  FUN_05476c50(awStack_60);
  FUN_05476c50(awStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::ShowBindUniqueIDHint() */

void MainMenu::ShowBindUniqueIDHint(void)

{
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03e98680(0x1c2);
  iVar2 = FUN_03e98680(0xdc);
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[BIND_UNIQUE_ID_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[BIND_UNIQUE_ID_HINT]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetFooterAlign(this,5);
  iVar1 = FUN_03e98680(2);
  PVZ2UIDialog::SetFooterBottomPadding(this,iVar1);
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


/* MainMenu::checkOfflineNotice() */

void MainMenu::checkOfflineNotice(void)

{
  OfflineBoardMgr *this;
  LawnStringUpdater *this_00;
  
  this = (OfflineBoardMgr *)Sexy::LazySingleton<OfflineBoardMgr>::GetInstance();
  OfflineBoardMgr::CheckForNotice(this);
  this_00 = (LawnStringUpdater *)Sexy::LazySingleton<LawnStringUpdater>::GetInstance();
  LawnStringUpdater::CheckForUpdates(this_00,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::LoadRsbsExtraProc() */

void __thiscall MainMenu::LoadRsbsExtraProc(MainMenu *this)

{
  bool bVar1;
  string *psVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_03e9a9e8(DAT_06ae0608);
  local_10 = FUN_03e9aa38(DAT_06ae0610);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar3 = FUN_0547429c();
    Sexy::OutputDebugStrF((wchar_t *)"MainMenu::LoadRsbsExtraProc() start load rsb %s",uVar3);
    Sexy::ResourceManager::Init
              (*(ResourceManager **)(Sexy::gSexyAppBase + 0x848),0x4b0,
               (int)*(float *)(gLawnApp + 0x28dc),psVar2,psVar2 + 8,true);
    *(undefined4 *)(this + 0x194) = 0;
    *(int *)(this + 0x100) = *(int *)(this + 0x100) + 1;
    *(undefined4 *)(this + 0x19c) = 0;
    uVar3 = FUN_0547429c(psVar2);
    Sexy::OutputDebugStrF((wchar_t *)"MainMenu::LoadRsbsExtraProc() end load rsb %s",uVar3);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  Sexy::OutputDebugStrF((wchar_t *)"MainMenu LoadRsbsExtraProc Load Rsbs Extra Proc");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::NeedDecompressRsbsExtra() */

void MainMenu::NeedDecompressRsbsExtra(void)

{
  char cVar1;
  bool bVar2;
  string *psVar3;
  ResStreamsManager *this;
  undefined8 local_28;
  undefined8 local_20;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = FUN_03e9a9e8(DAT_06ae0608);
  local_20 = FUN_03e9aa38(DAT_06ae0610);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20),
        cVar1 = '\0', bVar2) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    this = *(ResStreamsManager **)(gLawnApp + 0x908);
    std::string::string(asStack_18,"");
    std::string::string(asStack_10,"");
    cVar1 = Sexy::ResStreamsManager::NeedDecompressRsb(this,psVar3,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    if (cVar1 != '\0') break;
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* MainMenu::tryStartGame() */

void MainMenu::tryStartGame(void)

{
  char cVar1;
  NetworkProfileMgr *this;
  long lVar2;
  NetworkItemMgr *this_00;
  
  Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
  cVar1 = NetworkItemMgr::HasNetworkCacheSyncComplete();
  if (cVar1 == '\0') {
    lVar2 = Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
    cVar1 = FUN_03e9807c(*(undefined1 *)(lVar2 + 0x12));
    if (cVar1 == '\0') {
      this_00 = (NetworkItemMgr *)Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
      NetworkItemMgr::HandleSyncTask(this_00);
      return;
    }
  }
  this = (NetworkProfileMgr *)Sexy::LazySingleton<NetworkProfileMgr>::GetInstance();
  NetworkProfileMgr::TrySync(this);
  return;
}


/* MainMenu::startGame() */

void MainMenu::startGame(void)

{
  char cVar1;
  NetworkProfileMgr *this;
  long lVar2;
  NetworkItemMgr *this_00;
  
  Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
  cVar1 = NetworkItemMgr::HasNetworkCacheSyncComplete();
  if (cVar1 == '\0') {
    lVar2 = Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
    cVar1 = FUN_03e9807c(*(undefined1 *)(lVar2 + 0x12));
    if (cVar1 == '\0') {
      this_00 = (NetworkItemMgr *)Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
      NetworkItemMgr::HandleSyncTask(this_00);
      return;
    }
  }
  this = (NetworkProfileMgr *)Sexy::LazySingleton<NetworkProfileMgr>::GetInstance();
  NetworkProfileMgr::TrySync(this);
  return;
}


/* MainMenu::onUseLocalStorage() */

void MainMenu::onUseLocalStorage(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  startGame();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::onSyncProfileFromServer(bool) */

void __thiscall MainMenu::onSyncProfileFromServer(MainMenu *this,bool param_1)

{
  LawnApp *this_00;
  PlayerInfo *this_01;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this_01 = (PlayerInfo *)ProfileUtils::Profile();
    if (this_01 != (PlayerInfo *)0x0) {
      PlayerInfo::SyncOfflineDataFromOnlineData(this_01);
    }
    startGame();
  }
  else {
    FUN_05478178(awStack_18,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_28);
    FUN_05478178(awStack_10,L"[NETWORK_NOT_CONNECTED_TEXT_FOR_SYNC_PLAYERINFO]",auStack_20);
    LawnApp::CheckNetWork(this_00,awStack_18,awStack_10);
    FUN_05476c50(awStack_10);
    nop();
    FUN_05476c50(awStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::onProfileSummarySelectResult(int) */

void __thiscall MainMenu::onProfileSummarySelectResult(MainMenu *this,int param_1)

{
  LawnApp *this_00;
  char cVar1;
  ProfileMgr *pPVar2;
  long lVar3;
  time_t tVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  closeDiffProfileSummary(this);
  if (param_1 == 1) {
    Sexy::LazySingleton<ProfileMgr>::GetInstance();
    cVar1 = ProfileMgr::SyncProfileFromServer();
    this_00 = gLawnApp;
    if (cVar1 == '\0') {
      FUN_05478178(awStack_18,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_28);
      FUN_05478178(awStack_10,L"[NETWORK_NOT_CONNECTED_TEXT_FOR_SYNC_PLAYERINFO]",auStack_20);
      LawnApp::CheckNetWork(this_00,awStack_18,awStack_10);
      FUN_05476c50(awStack_10);
      nop();
      FUN_05476c50(awStack_18);
      nop();
    }
    else {
      LawnApp::setSyncProfileSuccess(gLawnApp,true);
      cVar1 = LawnApp::CheckProfileOpen();
      if (cVar1 != '\0') {
        this[0x21e] = (MainMenu)0x1;
      }
    }
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 0) goto LAB_03e9af40;
      pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      ProfileMgr::Save(pPVar2,false,true);
      LawnApp::setSyncProfileSuccess(gLawnApp,true);
      cVar1 = LawnApp::isOppoNewerOptimizationOpen(gLawnApp);
      if ((cVar1 != '\0') && (this[0x21f] != (MainMenu)0x0)) {
        pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        lVar3 = ProfileMgr::GetCurrentProfile(pPVar2);
        tVar4 = time((time_t *)0x0);
        FUN_03e9804c(lVar3 + 0x13d8,tVar4);
      }
    }
    startGame();
  }
LAB_03e9af40:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::ChooseProfile(bool) */

void __thiscall MainMenu::ChooseProfile(MainMenu *this,bool param_1)

{
  LawnApp *this_00;
  char cVar1;
  ProfileMgr *pPVar2;
  long lVar3;
  time_t tVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::Save(pPVar2,false,true);
    LawnApp::setSyncProfileSuccess(gLawnApp,true);
    cVar1 = LawnApp::isOppoNewerOptimizationOpen(gLawnApp);
    if ((cVar1 != '\0') && (this[0x21f] != (MainMenu)0x0)) {
      pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      lVar3 = ProfileMgr::GetCurrentProfile(pPVar2);
      tVar4 = time((time_t *)0x0);
      FUN_03e9804c(lVar3 + 0x13d8,tVar4);
    }
    startGame();
  }
  else {
    Sexy::LazySingleton<ProfileMgr>::GetInstance();
    cVar1 = ProfileMgr::SyncProfileFromServer();
    this_00 = gLawnApp;
    if (cVar1 == '\0') {
      FUN_05478178(awStack_18,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_28);
      FUN_05478178(awStack_10,L"[NETWORK_NOT_CONNECTED_TEXT_FOR_SYNC_PLAYERINFO]",auStack_20);
      LawnApp::CheckNetWork(this_00,awStack_18,awStack_10);
      FUN_05476c50(awStack_10);
      nop();
      FUN_05476c50(awStack_18);
      nop();
    }
    else {
      LawnApp::setSyncProfileSuccess(gLawnApp,true);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::onNetworkProfileSyncFinish(bool) */

void __thiscall MainMenu::onNetworkProfileSyncFinish(MainMenu *this,bool param_1)

{
  ReceivedDataCallback *this_00;
  NetworkMgr *this_01;
  long *plVar1;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    Sexy::LazySingleton<TutorialMgr>::GetInstance();
    TutorialMgr::TryProfileReset();
    this_01 = (NetworkMgr *)NetworkMgr::Instance();
    plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_01);
    (**(code **)(*plVar1 + 0x78))();
  }
  else {
    std::string::string(asStack_60,"[NETWORK_PROFILE_SYNC_FAILED_TITLE]");
    std::string::string(asStack_58,"[NETWORK_PROFILE_SYNC_FAILED_DESC]");
    this_00 = gLawnApp;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              (gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,aCStack_50);
    LawnApp::ShowMessageDialog((LawnApp *)this_00,asStack_60,asStack_58,aDStack_38);
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MainMenu::MainMenu() */

void __thiscall MainMenu::MainMenu(MainMenu *this)

{
  char cVar1;
  undefined4 uVar2;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06791560;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06791890;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  Sexy::Insets::Insets((Insets *)(this + 0x104));
  Sexy::Insets::Insets((Insets *)(this + 0x114));
  FUN_05476574(this + 0x128);
  Sexy::Insets::Insets((Insets *)(this + 0x130));
  Sexy::Insets::Insets((Insets *)(this + 0x140));
  Sexy::Insets::Insets((Insets *)(this + 0x150));
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  this[0x218] = (MainMenu)0x0;
  this[0x219] = (MainMenu)0x0;
  this[0x21e] = (MainMenu)0x0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  uVar2 = PVZ_EOT();
  this[0x21f] = (MainMenu)0x0;
  this[0x220] = (MainMenu)0x0;
  this[0x21a] = (MainMenu)0x0;
  this[0x21b] = (MainMenu)0x0;
  this[0x21d] = (MainMenu)0x0;
  this[0x21c] = (MainMenu)0x0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined4 *)(this + 0x208) = uVar2;
  PlantHeadshot::Resize((PlantHeadshot *)this,(TRect *)(gLawnApp + 0x71c));
  LawnApp::setCanDealProfile(gLawnApp,false);
  cVar1 = IsPHd();
  if ((cVar1 != '\0') || (cVar1 = LawnApp::IsForbiddenPlatform(), cVar1 != '\0')) {
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  this[0xe0] = (MainMenu)0x0;
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x194) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x19c) = 0;
  InitDecompressImage(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::CreateComplainButton() */

void __thiscall MainMenu::CreateComplainButton(MainMenu *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  PVZ2UIButton *this_00;
  SalesProgressBar *this_01;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsServiceAvailable(gLawnApp,0x400000);
  if (cVar1 != '\0') {
    FUN_05478178(awStack_78,L"[COMPLAIN_ICON]",auStack_80);
    Sexy::Color::Color((Color *)aPStack_40,1);
    this_00 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (this_00,0xe,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
    FUN_05476c50(awStack_78);
    nop();
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ae07e8,3);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06ae04a0,3);
    PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,aPStack_40);
    iVar2 = FUN_03e98680(0x76);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae07e8);
    uVar3 = SalesProgressBar::GetCurrentLevel(this_01);
    iVar6 = *(int *)(this + 0x50);
    iVar4 = FUN_03e98680(0x14);
    uVar5 = FUN_03e98680(0x19c);
    (**(code **)(*(long *)this_00 + 0x198))(this_00,(iVar6 - iVar2) - iVar4,uVar5,iVar2,uVar3);
    (**(code **)(*(long *)this + 0x60))(this,this_00);
    iVar6 = LawnApp::GetPlatform(gLawnApp);
    if ((iVar6 == 0x1b) || (iVar6 = LawnApp::GetPlatform(gLawnApp), iVar6 == 0x4f)) {
      (**(code **)(*(long *)this_00 + 0x158))(this_00,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::CreateRedeemButton() */

void __thiscall MainMenu::CreateRedeemButton(MainMenu *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  PVZ2UIButton *pPVar7;
  SalesProgressBar *this_00;
  long *plVar8;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = NeedCreateRedeemButton();
  if (cVar2 != '\0') {
    FUN_05478178(awStack_78,L"[REDEEM_TITLE]",auStack_80);
    Sexy::Color::Color((Color *)aPStack_40,1);
    pPVar7 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar7,0xd,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
    *(PVZ2UIButton **)(this + 0x200) = pPVar7;
    FUN_05476c50(awStack_78);
    nop();
    pPVar7 = *(PVZ2UIButton **)(this + 0x200);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ae07e8,3);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06ae04a0,3);
    PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,aPStack_40);
    iVar3 = FUN_03e98680(0x54);
    this_00 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae07e8);
    uVar4 = SalesProgressBar::GetCurrentLevel(this_00);
    iVar1 = *(int *)(this + 0x50);
    plVar8 = *(long **)(this + 0x200);
    iVar5 = FUN_03e98680(0xf0);
    uVar6 = FUN_03e98680(0x19c);
    (**(code **)(*plVar8 + 0x198))(plVar8,(iVar1 - iVar3) - iVar5,uVar6,iVar3,uVar4);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x200));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::createBottomButton(int, MainMenuButtons, Sexy::Image*, bool) */

void __thiscall
MainMenu::createBottomButton
          (MainMenu *this,int param_1,int param_3,LotteryResultProgressBar *param_4,char param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  PVZ2UIButton *this_00;
  SalesProgressBar *pSVar9;
  long lVar10;
  code *pcVar11;
  undefined1 auStack_80 [8];
  Insets aIStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(aIStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,param_3,(ButtonListener *)(this + 0xd8),(wstring *)aIStack_78,
             (Color *)aPStack_40);
  FUN_05476c50(aIStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_78,&DAT_06ae07e8,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06ae04a0,3);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)aIStack_78,aPStack_40);
  if (param_5 == '\0') {
    iVar8 = *(int *)(this + 0x50);
    pcVar11 = *(code **)(*(long *)this_00 + 0x198);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(param_4);
    iVar2 = FUN_03e98680(0x44);
    uVar3 = FUN_03e98680(0x19c);
    pSVar9 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae07e8);
    uVar4 = SalesProgressBar::GetCurrentLevel(pSVar9);
    (*pcVar11)(this_00,(iVar8 - param_1) + (-iVar2 - iVar1) / 2,uVar3,iVar2,uVar4);
  }
  else {
    pcVar11 = *(code **)(*(long *)this_00 + 0x198);
    iVar8 = LotteryResultProgressBar::GetCurrentLevel(param_4);
    iVar1 = FUN_03e98680(0x44);
    uVar3 = FUN_03e98680(0x19c);
    pSVar9 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae07e8);
    uVar4 = SalesProgressBar::GetCurrentLevel(pSVar9);
    (*pcVar11)(this_00,param_1 + (iVar8 - iVar1) / 2,uVar3,iVar1,uVar4);
  }
  iVar8 = *(int *)(this_00 + 0x50);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(param_4);
  iVar1 = *(int *)(this_00 + 0x54);
  iVar5 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_4);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,param_4,1);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(param_4);
  iVar7 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_4);
  Sexy::Insets::Insets(aIStack_78,(iVar8 - iVar2) / 2,(iVar1 - iVar5) / 2,iVar6 / 2,iVar7 / 2);
  PVZ2UIButton::AddImage(this_00,aPStack_40,(TRect *)aIStack_78);
  lVar10 = *(long *)this;
  this_00[0x59] = (PVZ2UIButton)0x0;
  (**(code **)(lVar10 + 0x60))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::createAgeTipsButton(int, MainMenuButtons, Sexy::Image*, bool) */

void MainMenu::createAgeTipsButton
               (long *param_1,undefined8 param_2,int param_3,LotteryResultProgressBar *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  PVZ2UIButton *this;
  LotteryResultProgressBar *pLVar5;
  SalesProgressBar *pSVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  this = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this,param_3,(ButtonListener *)(param_1 + 0x1b),(wstring *)aPStack_78,
             (Color *)aPStack_40);
  FUN_05476c50(aPStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06ae0420,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06ae0420,2);
  PVZ2UIButton::SetDialogStates(this,aPStack_78,aPStack_40);
  lVar7 = param_1[10];
  pcVar8 = *(code **)(*(long *)this + 0x198);
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0420);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  pSVar6 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0420);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar6);
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0420);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  pSVar6 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0420);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar6);
  (*pcVar8)(this,(int)((double)(int)lVar7 - (double)(iVar1 / 5) * 1.5),
            (int)((double)(iVar2 / 5) * 0.5),iVar3 / 5,iVar4 / 5);
  LotteryResultProgressBar::GetCurrentLevel(param_4);
  SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_4);
  lVar7 = *param_1;
  this[0x59] = (PVZ2UIButton)0x0;
  (**(code **)(lVar7 + 0x60))(param_1,this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::createBindButton(int, int, MainMenuButtons, Sexy::Image*) */

void __thiscall
MainMenu::createBindButton
          (MainMenu *this,int param_1,undefined4 param_2,int param_4,
          LotteryResultProgressBar *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  PVZ2UIButton *this_00;
  SalesProgressBar *this_01;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  undefined1 auStack_80 [8];
  Insets aIStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(aIStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aIStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,param_4,(ButtonListener *)(this + 0xd8),(wstring *)aIStack_78,
             (Color *)aIStack_40);
  FUN_05476c50(aIStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_78,&DAT_06ae07e8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06ae04a0,3);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)aIStack_78,(PVZ2UIImage *)aIStack_40);
  pcVar11 = *(code **)(*(long *)this_00 + 0x198);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(param_5);
  iVar2 = FUN_03e98680(0xa0);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae07e8);
  uVar3 = SalesProgressBar::GetCurrentLevel(this_01);
  (*pcVar11)(this_00,param_1 + (iVar1 - iVar2) / 2,param_2,iVar2,uVar3);
  iVar1 = FUN_03e98680(3);
  iVar2 = FUN_03e98680(2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,param_5,1);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(param_5);
  iVar5 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_5);
  Sexy::Insets::Insets(aIStack_78,iVar1,iVar2,iVar4,iVar5);
  PVZ2UIButton::AddImage(this_00,(PVZ2UIImage *)aIStack_40,(TRect *)aIStack_78);
  TodStringTranslate(L"[MAINMENU_ACCOUNT_BINDING]");
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(param_5);
  iVar5 = FUN_03e98680(2);
  iVar6 = FUN_03e98680(0xa0);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(param_5);
  iVar8 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_5);
  Sexy::Insets::Insets(aIStack_40,iVar4 + iVar1,iVar5 + iVar2,iVar6 - iVar7,iVar8);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  PVZ2UIButton::AddText(this_00,aIStack_78,aIStack_40,uVar9,0);
  FUN_05476c50(aIStack_78);
  lVar10 = *(long *)this;
  this_00[0x59] = (PVZ2UIButton)0x0;
  (**(code **)(lVar10 + 0x60))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::CreateBindUniqueIDButton() */

void __thiscall MainMenu::CreateBindUniqueIDButton(MainMenu *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  NetworkMgr *this_00;
  androidNetworkMsgProcess *this_01;
  PVZ2UIButton *pPVar8;
  SalesProgressBar *this_02;
  long *plVar9;
  code *pcVar10;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (androidNetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  cVar2 = androidNetworkMsgProcess::EnableBindUniqueID(this_01);
  if ((cVar2 != '\0') && (*(long *)(this + 0x1f0) == 0)) {
    FUN_05478178(awStack_78,L"[BIND_UNIQUE_ID_TITLE]",auStack_80);
    Sexy::Color::Color((Color *)aPStack_40,1);
    pPVar8 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar8,0x12,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
    *(PVZ2UIButton **)(this + 0x1f0) = pPVar8;
    FUN_05476c50(awStack_78);
    nop();
    pPVar8 = *(PVZ2UIButton **)(this + 0x1f0);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ae0d48,3);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06ae0500,3);
    PVZ2UIButton::SetDialogStates(pPVar8,(PVZ2UIImage *)awStack_78,aPStack_40);
    iVar3 = FUN_03e98680(0x90);
    iVar4 = FUN_03e98680(0x124);
    plVar9 = *(long **)(this + 0x1f0);
    iVar1 = *(int *)(this + 0x50);
    pcVar10 = *(code **)(*plVar9 + 0x198);
    iVar5 = FUN_03e98680(5);
    uVar6 = FUN_03e98680(0x162);
    this_02 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0d48);
    uVar7 = SalesProgressBar::GetCurrentLevel(this_02);
    (*pcVar10)(plVar9,((iVar1 - iVar4) / 2 - iVar3) - iVar5,uVar6,iVar3,uVar7);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1f0));
    if (*(long *)(this + 0x1a8) != 0) {
      (**(code **)(*(long *)this + 0xc0))(this,*(undefined8 *)(this + 0x1f0));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MainMenu::onGameCenterAuthenticationChanged(bool) */

void __thiscall MainMenu::onGameCenterAuthenticationChanged(MainMenu *this,bool param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  plVar2 = *(long **)(this + 0x1d8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,param_1);
    return;
  }
  uVar1 = FUN_03e98680(0x94);
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0a08);
  plVar2 = (long *)createBottomButton(this,uVar1,10,uVar3,1);
  lVar4 = *plVar2;
  *(long **)(this + 0x1d8) = plVar2;
  (**(code **)(lVar4 + 0x158))(plVar2,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::createMainButtons() */

void __thiscall MainMenu::createMainButtons(MainMenu *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  PVZ2UIButton *pPVar12;
  SalesProgressBar *pSVar13;
  ConfirmUrlButton *this_00;
  ConfirmUrlButtonExtra *pCVar14;
  ProfileMgr *pPVar15;
  long lVar16;
  undefined8 uVar17;
  LotteryResultProgressBar *pLVar18;
  long *plVar19;
  code *pcVar20;
  float fVar21;
  wstring awStack_80 [8];
  string asStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
  cVar1 = NetworkItemMgr::HasNetworkCacheSyncComplete();
  if (cVar1 != '\0') {
    lVar16 = Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
    FUN_03e98220(lVar16 + 0x12);
  }
  FUN_05478178(asStack_78,L"[MAINMENU_PLAY]",awStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar12,0,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0x1c8) = pPVar12;
  FUN_05476c50(asStack_78);
  nop();
  pPVar12 = *(PVZ2UIButton **)(this + 0x1c8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ae0d48,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06ae0500,3);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)asStack_40);
  iVar2 = FUN_03e98680(0x90);
  plVar19 = *(long **)(this + 0x1c8);
  iVar5 = *(int *)(this + 0x50);
  pcVar20 = *(code **)(*plVar19 + 0x198);
  uVar3 = FUN_03e98680(0x19c);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0d48);
  uVar4 = SalesProgressBar::GetCurrentLevel(pSVar13);
  (*pcVar20)(plVar19,(iVar5 - iVar2) / 2,uVar3,iVar2,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1c8));
  this_00 = ::operator_new(0x310);
  ConfirmUrlButton::ConfirmUrlButton(this_00,0x13);
  iVar5 = FUN_03e98680(0x6e);
  fVar21 = (float)iVar5;
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,(*(int *)(this + 0x50) - (int)(fVar21 * 2.93475)) / 2,
             (int)((float)*(int *)(this + 0x54) - fVar21 * 0.3875),(int)(fVar21 * 2.93475),
             (int)(fVar21 * 0.175));
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  std::string::string(asStack_78,"http://filead.talkyun.com.cn/tw/twys.htm");
  std::string::string(asStack_40,"IMAGE_UI_GENERIC_URL_EXTRA");
  pCVar14 = ::operator_new(0x328);
  ConfirmUrlButtonExtra::ConfirmUrlButtonExtra(pCVar14,0x14,asStack_78,asStack_40);
  std::string::~string(asStack_40);
  nop();
  std::string::~string(asStack_78);
  nop();
  uVar3 = FUN_03e98680(5);
  uVar4 = FUN_03e98680(0x1c7);
  uVar6 = FUN_03e98680(0x1a);
  (**(code **)(*(long *)pCVar14 + 0x198))(pCVar14,uVar3,uVar3,uVar4,uVar6);
  (**(code **)(*(long *)this + 0x60))(this,pCVar14);
  CreateBindUniqueIDButton(this);
  iVar5 = FUN_03e98680(0x124);
  FUN_05478178(awStack_80,L"-Invalid-",asStack_40);
  nop();
  pPVar15 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar16 = ProfileMgr::GetCurrentProfile(pPVar15);
  if (lVar16 == 0) {
    Sexy::OutputDebugStrF((wchar_t *)"ACLog - createMainButtons, profile name -Invalid-");
  }
  else {
    Sexy::OutputDebugStrF((wchar_t *)"ACLog - createMainButtons, profile name");
    pPVar15 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(pPVar15);
    PlayerInfo::AM_GetName();
    FUN_054766c8(awStack_80,asStack_40);
    FUN_05476c50(asStack_40);
  }
  Sexy::Color::Color((Color *)asStack_40,0);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar12,3,(ButtonListener *)(this + 0xd8),awStack_80,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0x1d0) = pPVar12;
  pcVar20 = *(code **)(*(long *)pPVar12 + 800);
  uVar17 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
  (*pcVar20)(pPVar12,uVar17);
  pPVar12 = *(PVZ2UIButton **)(this + 0x1d0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ae0528,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,0,1);
  PVZ2UIButton::SetNormalStates(pPVar12,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)asStack_40);
  pPVar12 = *(PVZ2UIButton **)(this + 0x1d0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06ae0c28,1);
  iVar2 = FUN_03e98680(6);
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0c28);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  iVar8 = FUN_03e98680(0x2d);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0c28);
  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar13);
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0c28);
  iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0c28);
  iVar11 = SalesProgressBar::GetCurrentLevel(pSVar13);
  Sexy::Insets::Insets
            ((Insets *)asStack_78,(iVar5 - iVar2) - iVar7,(iVar8 - iVar9) / 2,iVar10,iVar11);
  PVZ2UIButton::AddImage(pPVar12,(PVZ2UIImage *)asStack_40,(TRect *)asStack_78);
  plVar19 = *(long **)(this + 0x1d0);
  uVar3 = FUN_03e98680(0x162);
  uVar4 = FUN_03e98680(0x2d);
  (**(code **)(*plVar19 + 0x198))(plVar19,(*(int *)(this + 0x50) - iVar5) / 2,uVar3,iVar5,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1d0));
  uVar3 = FUN_03e98680(0x94);
  uVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0718);
  createBottomButton(this,uVar3,1,uVar17,0);
  uVar3 = FUN_03e98680(0xa0);
  uVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0420);
  createAgeTipsButton(this,uVar3,0x11,uVar17,0);
  CreateComplainButton(this);
  CreateRedeemButton(this);
  checkOfflineNotice();
  FUN_05476c50(awStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::Draw(Sexy::Graphics*) */

void __thiscall MainMenu::Draw(MainMenu *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LotteryResultProgressBar *pLVar6;
  float *pfVar7;
  SalesProgressBar *pSVar8;
  Image *pIVar9;
  undefined8 uVar10;
  wchar_t *pwVar11;
  wchar16 *extraout_x1;
  uint uVar12;
  uint uVar14;
  uint uVar16;
  float fVar18;
  float fVar19;
  undefined1 auStack_50 [8];
  Insets aIStack_48 [16];
  Insets aIStack_38 [16];
  undefined4 local_28 [4];
  float local_18 [4];
  long local_8;
  LineBreakCategory *pLVar13;
  LineBreakCategory *pLVar15;
  LineBreakCategory *pLVar17;
  
  local_8 = ___stack_chk_guard;
  pLVar6 = (LotteryResultProgressBar *)
           CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06ae04d8);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  local_28[0] = 0x3f800000;
  local_18[0] = (float)*(int *)(this + 0x50) / (float)iVar2;
  pfVar7 = eastl::max_alt<float>((float *)local_28,local_18);
  fVar19 = *pfVar7;
  pSVar8 = (SalesProgressBar *)
           CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06ae04d8);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar8);
  fVar18 = fVar19 * (float)iVar2;
  fVar19 = (float)iVar3 * fVar19;
  pIVar9 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06ae04d8);
  uVar16 = (uint)fVar18;
  pLVar17 = (LineBreakCategory *)(ulong)uVar16;
  uVar12 = (uint)(((float)*(int *)(this + 0x50) - fVar18) * 0.5);
  pLVar13 = (LineBreakCategory *)(ulong)uVar12;
  uVar14 = (uint)(((float)*(int *)(this + 0x54) - fVar19) * 0.5);
  pLVar15 = (LineBreakCategory *)(ulong)uVar14;
  Sexy::Graphics::DrawImage(param_1,pIVar9,uVar12,uVar14,uVar16,(int)fVar19);
  drawBackgroundEffect(this,param_1);
  iVar2 = *(int *)(this + 0x50);
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    ((wchar16 *)(ulong)(uint)(iVar2 - (iVar2 >> 0x1f)),extraout_x1,pLVar13,pLVar15,
                     pLVar17);
  if (cVar1 == '\0') {
    iVar3 = FUN_03e98680(0xdc);
    pLVar6 = (LotteryResultProgressBar *)
             CachedResourcePtr<Sexy::Image>::operator->
                       ((CachedResourcePtr<Sexy::Image> *)&DAT_06ae0448);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
    iVar3 = (iVar2 / 2 - iVar3) - iVar4 / 2;
    iVar2 = FUN_03e98680(0x14);
  }
  else {
    iVar3 = FUN_03e98680(0xaa);
    pLVar6 = (LotteryResultProgressBar *)
             CachedResourcePtr<Sexy::Image>::operator->
                       ((CachedResourcePtr<Sexy::Image> *)&DAT_06ae0448);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
    iVar3 = (iVar2 / 2 - iVar3) - iVar4 / 2;
    iVar2 = FUN_03e98680(0x28);
    iVar2 = -iVar2;
  }
  pLVar6 = (LotteryResultProgressBar *)
           CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06ae0448);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  pSVar8 = (SalesProgressBar *)
           CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06ae0448);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar8);
  Sexy::Insets::Insets
            ((Insets *)local_18,iVar3,iVar2,(int)((float)iVar4 * 0.8),(int)((float)iVar5 * 0.8));
  uVar10 = CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06ae0448);
  DrawAdaptiveImage(param_1,(Insets *)local_18,uVar10);
  LawnApp::IsServiceAvailable(gLawnApp,0x40000);
  iVar2 = FUN_03e98680(0);
  iVar3 = FUN_03e98680(0x6e);
  Sexy::Insets::Insets(aIStack_48,iVar2,*(int *)(this + 0x54) - iVar3,*(int *)(this + 0x50),iVar3);
  iVar2 = FUN_03e98680(0);
  iVar3 = FUN_03e98680(0x6e);
  Sexy::Insets::Insets
            (aIStack_38,iVar2,*(int *)(this + 0x54) - iVar3,*(int *)(this + 0x50),
             (int)((float)iVar3 * 0.6));
  iVar2 = FUN_03e98680(0);
  iVar3 = FUN_03e98680(0x6e);
  Sexy::Insets::Insets
            ((Insets *)local_28,iVar2,(int)((float)*(int *)(this + 0x54) - (float)iVar3 * 0.2),
             *(int *)(this + 0x50),(int)((float)iVar3 * 0.2));
  Sexy::Insets::Insets((Insets *)local_18,0,0,0,0x80);
  Sexy::Graphics::SetColor(param_1,(Color *)local_18);
  Sexy::Graphics::FillRect(param_1,(TRect *)aIStack_48);
  iVar2 = LawnApp::GetPlatform(gLawnApp);
  if (iVar2 == 0xb0) {
    pwVar11 = L"[HEALTH_NOTICE_CONTENT_3_1]";
  }
  else {
    pwVar11 = L"[HEALTH_NOTICE_CONTENT_3]";
  }
  TodStringTranslate(pwVar11);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Color::Color((Color *)local_18,1);
  WriteWordInRect(param_1,auStack_50,aIStack_38,uVar10,(Insets *)local_18,5,1);
  FUN_05476c50(auStack_50);
  TodStringTranslate(L"[HEALTH_NOTICE_CONTENT_4]");
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Color::Color((Color *)local_18,1);
  WriteWordInRect(param_1,auStack_50,(Insets *)local_28,uVar10,(Insets *)local_18,5,1);
  FUN_05476c50(auStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::uploadLocalProfile() */

void MainMenu::uploadLocalProfile(void)

{
  bool bVar1;
  int iVar2;
  ProfileMgr *this;
  undefined8 uVar3;
  long lVar4;
  NetworkMgr *pNVar5;
  long *plVar6;
  PlayerInfo *pPVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ResourceInfo *pRVar10;
  int extraout_w1;
  code *pcVar11;
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstancePtr();
  ProfileMgr::removeInvalidProfile(this);
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x37);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      pNVar5 = (NetworkMgr *)NetworkMgr::Instance();
      plVar6 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar5);
      if (*(code **)(*plVar6 + 0x60) != INetworkMsgProcess::ICloudRequestProfileList) {
        (**(code **)(*plVar6 + 0x60))();
      }
LAB_03e9daf8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    iVar2 = FUN_03e98044(*(undefined4 *)(lVar4 + 0x604));
    if (iVar2 < 1) {
      Set8BytesTo0(asStack_40);
      Set8BytesTo0(asStack_38);
      Set8BytesTo0(aRStack_30);
      pPVar7 = (PlayerInfo *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48)
      ;
      PlayerInfo::UpdateDeltaDataForServer(pPVar7);
      pPVar7 = (PlayerInfo *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48)
      ;
      PlayerInfo::GetDeltaDataForServer(pPVar7,asStack_40,asStack_38,(string *)aRStack_30);
      uVar3 = FUN_0547429c(asStack_40);
      uVar8 = FUN_0547429c(asStack_38);
      uVar9 = FUN_0547429c(aRStack_30);
      Sexy::OutputDebugStrF
                ((wchar_t *)"ProfileMgr::Save i_json =[%s] i_md5=[%s] i_summary=[%s]",uVar3,uVar8,
                 uVar9);
      pNVar5 = (NetworkMgr *)NetworkMgr::Instance();
      plVar6 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar5);
      pcVar11 = *(code **)(*plVar6 + 0x80);
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_48);
      if (pcVar11 != INetworkMsgProcess::ICloudRequestUploadFirstTime) {
        (*pcVar11)(plVar6,asStack_40,asStack_38,aRStack_30,1,pRVar10);
      }
      std::string::~string((string *)aRStack_30);
      std::string::~string(asStack_38);
      std::string::~string(asStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_03e9daf8;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::onUploadFirstTimeFinish(bool) */

void MainMenu::onUploadFirstTimeFinish(bool param_1)

{
  bool bVar1;
  int iVar2;
  ProfileMgr *this;
  undefined8 uVar3;
  long lVar4;
  NetworkMgr *pNVar5;
  long *plVar6;
  PlayerInfo *pPVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ResourceInfo *pRVar10;
  int extraout_w1;
  code *pcVar11;
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstancePtr();
  ProfileMgr::removeInvalidProfile(this);
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x37);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      pNVar5 = (NetworkMgr *)NetworkMgr::Instance();
      plVar6 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar5);
      if (*(code **)(*plVar6 + 0x60) != INetworkMsgProcess::ICloudRequestProfileList) {
        (**(code **)(*plVar6 + 0x60))();
      }
LAB_03e9daf8:
      if (lStack_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    iVar2 = FUN_03e98044(*(undefined4 *)(lVar4 + 0x604));
    if (iVar2 < 1) {
      Set8BytesTo0(asStack_40);
      Set8BytesTo0(asStack_38);
      Set8BytesTo0(aRStack_30);
      pPVar7 = (PlayerInfo *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48)
      ;
      PlayerInfo::UpdateDeltaDataForServer(pPVar7);
      pPVar7 = (PlayerInfo *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48)
      ;
      PlayerInfo::GetDeltaDataForServer(pPVar7,asStack_40,asStack_38,(string *)aRStack_30);
      uVar3 = FUN_0547429c(asStack_40);
      uVar8 = FUN_0547429c(asStack_38);
      uVar9 = FUN_0547429c(aRStack_30);
      Sexy::OutputDebugStrF
                ((wchar_t *)"ProfileMgr::Save i_json =[%s] i_md5=[%s] i_summary=[%s]",uVar3,uVar8,
                 uVar9);
      pNVar5 = (NetworkMgr *)NetworkMgr::Instance();
      plVar6 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar5);
      pcVar11 = *(code **)(*plVar6 + 0x80);
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_48);
      if (pcVar11 != INetworkMsgProcess::ICloudRequestUploadFirstTime) {
        (*pcVar11)(plVar6,asStack_40,asStack_38,aRStack_30,1,pRVar10);
      }
      std::string::~string((string *)aRStack_30);
      std::string::~string(asStack_38);
      std::string::~string(asStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_03e9daf8;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::doUpgradeProfileLogic() */

void __thiscall MainMenu::doUpgradeProfileLogic(MainMenu *this)

{
  MainMenu MVar1;
  char cVar2;
  bool bVar3;
  MainMenu MVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  NetworkMgr *pNVar8;
  long *plVar9;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar6,0x37);
  MVar1 = (MainMenu)Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  this[0x21c] = MVar1;
  cVar2 = LawnApp::IsNetworkModuleOK();
  if (cVar2 != '\0') {
    pNVar8 = (NetworkMgr *)NetworkMgr::Instance();
    lVar7 = NetworkMgr::GetNewNetWorkProcess(pNVar8);
    MVar4 = (MainMenu)FUN_03e9806c(*(undefined4 *)(lVar7 + 0x20));
    if ((byte)MVar1 < (byte)MVar4) {
      this[0x21b] = (MainMenu)0x1;
      goto LAB_03e9dd50;
    }
  }
  uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar6,0x37);
  while (bVar3 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar3) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    iVar5 = FUN_03e98044(*(undefined4 *)(lVar7 + 0x604));
    if (iVar5 < 1) {
      this[0x21c] = (MainMenu)0x0;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (this[0x21c] == (MainMenu)0x0) goto LAB_03e9dd14;
      goto LAB_03e9dd78;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (this[0x21c] == (MainMenu)0x0) {
LAB_03e9dd14:
    cVar2 = LawnApp::IsNetworkModuleOK();
    if (cVar2 == '\0') {
      this[0x219] = (MainMenu)0x0;
    }
    else {
      uploadLocalProfile();
    }
  }
  else {
LAB_03e9dd78:
    pNVar8 = (NetworkMgr *)NetworkMgr::Instance();
    plVar9 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar8);
    if (*(code **)(*plVar9 + 0x60) != INetworkMsgProcess::ICloudRequestProfileList) {
      (**(code **)(*plVar9 + 0x60))();
    }
  }
LAB_03e9dd50:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* MainMenu::~MainMenu() */

void __thiscall MainMenu::~MainMenu(MainMenu *this)

{
  long lVar1;
  Widget *pWVar2;
  
  pWVar2 = *(Widget **)(this + 0x1c0);
  *(undefined ***)this = &PTR_GetClass_06791560;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06791890;
  if ((pWVar2 != (Widget *)0x0) && (pWVar2[0x6c] == (Widget)0x0)) {
    Sexy::WidgetContainer::RemoveWidget((WidgetContainer *)this,pWVar2);
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x1c0));
    if (*(long **)(this + 0x1c0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x1c0) + 0x18))();
    }
    *(undefined8 *)(this + 0x1c0) = 0;
  }
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  lVar1 = Sexy::LazySingleton<ProfileMgr>::GetInstance();
  FUN_03e98058(lVar1 + 0x129,1);
  if (*(long **)(this + 0x228) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x228) + 0x18))();
    *(undefined8 *)(this + 0x228) = 0;
  }
  FUN_05476c50(this + 0x128);
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* MainMenu::~MainMenu() */

void __thiscall MainMenu::~MainMenu(MainMenu *this)

{
  ~MainMenu(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::onPlayerInfoSyncFinish() */

void __thiscall MainMenu::onPlayerInfoSyncFinish(MainMenu *this)

{
  char cVar1;
  TGALogMgr *pTVar2;
  PlayerInfo *this_00;
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  this[0x218] = (MainMenu)0x1;
  local_8 = ___stack_chk_guard;
  MessageRouter::Post((_func_void *)gMessageRouter);
  MessageRouter::Post((_func_void *)gMessageRouter);
  pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  std::string::string(asStack_28,"10001");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  TGALogMgr::Log(pTVar2,asStack_28,(vector *)avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  std::string::~string(asStack_28);
  nop();
  cVar1 = LawnApp::GetIsNewUser(gLawnApp);
  if (cVar1 != '\0') {
    pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    std::string::string(asStack_28,"10000");
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    TGALogMgr::Log(pTVar2,asStack_28,(vector *)avStack_20);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)avStack_20);
    std::string::~string(asStack_28);
    nop();
  }
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  FUN_03e97ff4(this_00 + 0xdc8);
  GameStateMgr::WaitForNetworkLoad(gGameStateMgr);
  PlayerInfo::RefreshRechargeCurrency(this_00);
  LawnApp::ResetDatas();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::onSyncPlayerInfoFinish(bool) */

void __thiscall MainMenu::onSyncPlayerInfoFinish(MainMenu *this,bool param_1)

{
  LawnApp *this_00;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    onPlayerInfoSyncFinish(this);
  }
  else {
    FUN_05478178(awStack_18,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_28);
    FUN_05478178(awStack_10,L"[NETWORK_NOT_CONNECTED_TEXT_FOR_SYNC_PLAYERINFO]",auStack_20);
    LawnApp::CheckNetWork(this_00,awStack_18,awStack_10);
    FUN_05476c50(awStack_10);
    nop();
    FUN_05476c50(awStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MainMenu::ButtonPress(int) */

void __thiscall MainMenu::ButtonPress(MainMenu *this,int param_1)

{
  char *pcVar1;
  
  if (this[0x218] == (MainMenu)0x0) {
    switch(param_1) {
    case 0:
      pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Button_Profile_Play_Press");
      return;
    case 1:
    case 2:
    case 0xd:
    case 0xe:
    case 0xf:
      pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Settings_Press");
      return;
    default:
      pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
      return;
    }
  }
  return;
}


/* non-virtual thunk to MainMenu::ButtonPress(int) */

void __thiscall MainMenu::ButtonPress(MainMenu *this,int param_1)

{
  ButtonPress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::ButtonDepress(int) */

void __thiscall MainMenu::ButtonDepress(MainMenu *this,int param_1)

{
  LawnApp *pLVar1;
  char *pcVar2;
  long lVar3;
  AccountRemoveMgr *this_00;
  code *pcVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x218] == (MainMenu)0x0) {
    switch(param_1) {
    case 0:
      this_00 = (AccountRemoveMgr *)Sexy::LazySingleton<AccountRemoveMgr>::GetInstance();
      AccountRemoveMgr::TryCheckAccount(this_00,false);
      break;
    case 1:
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Settings_Release");
      createSettingsDialog(this);
      break;
    case 2:
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Settings_Release");
      MessageRouter::Post((_func_void *)gMessageRouter);
      LawnApp::LaunchTmallSotreWebpage(gLawnApp);
      break;
    case 10:
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Click_Release");
      Achievement::ShowAll();
      break;
    case 0xc:
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Settings_Release");
      lVar3 = LawnApp::GetQiHooPlatform(gLawnApp);
      if (lVar3 != 0) {
        nop();
      }
      break;
    case 0xd:
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Settings_Release");
      TryRedeem(this);
      break;
    case 0xe:
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Settings_Release");
      CreateComplainDialog(this);
      break;
    case 0xf:
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Click_Release");
      createAccountBindDialog(this);
      break;
    case 0x10:
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Click_Release");
      pLVar1 = gLawnApp;
      pcVar4 = *(code **)(*(long *)gLawnApp + 0x168);
      std::string::string(asStack_10,"https://itunes.apple.com/app/id890648710?ls=1&mt=8");
      (*pcVar4)(pLVar1,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
      MessageRouter::Post((_func_void *)gMessageRouter);
      break;
    case 0x11:
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Settings_Release");
      CreateAgeTipDialog(this);
      break;
    case 0x12:
      ShowBindUniqueID();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to MainMenu::ButtonDepress(int) */

void __thiscall MainMenu::ButtonDepress(MainMenu *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::syncProfileSummaryWithServer() */

void __thiscall MainMenu::syncProfileSummaryWithServer(MainMenu *this)

{
  MainMenu MVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  PlayerInfo *this_00;
  NetworkMgr *pNVar6;
  INetworkMsgProcess *this_01;
  androidNetworkMsgProcess *this_02;
  PlantCthulhuActinia *pPVar7;
  long *plVar8;
  UIUpdateMgr *pUVar9;
  time_t tVar10;
  string *psVar11;
  PVZ2UIDialog *this_03;
  PrimeTypeface *pPVar12;
  char *pcVar13;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  if (this_00 == (PlayerInfo *)0x0) {
LAB_03e9ed58:
    pNVar6 = (NetworkMgr *)NetworkMgr::Instance();
    this_02 = (androidNetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar6);
    cVar2 = androidNetworkMsgProcess::CheckACLogFirstLogin(this_02);
    if (cVar2 != '\0') {
      psVar11 = (string *)PlayerInfo::GetLastACLKey(this_00);
      bVar3 = std::operator==(psVar11,"");
      if (bVar3) {
        this[0x21a] = (MainMenu)0x1;
        iVar4 = FUN_03e98680(400);
        iVar5 = FUN_03e98680(0xfa);
        this_03 = (PVZ2UIDialog *)
                  LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar4,(float)iVar5,(PVZ2UIDialog *)0x0);
        FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_58);
        PVZ2UIDialog::SetHeaderLabel(this_03,awStack_50);
        FUN_05476c50(awStack_50);
        nop();
        FUN_05478178(awStack_50,L"[NETWORK_CLOUD_FIRST_SYNC_ERROR]",auStack_58);
        PVZ2UIDialog::SetFooterLabel(this_03,awStack_50);
        FUN_05476c50(awStack_50);
        nop();
        pPVar12 = (PrimeTypeface *)
                  PrimeText_PotentialTypeface::Typeface
                            (PrimeText_Game::Typeface_FZShaoEr_28_Outline);
        PVZ2UIDialog::SetHeaderFont(this_03,pPVar12,(Color *)&PrimeText_Game::Color_Generic_Title);
        pPVar12 = (PrimeTypeface *)
                  PrimeText_PotentialTypeface::Typeface
                            (PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
        Sexy::Color::Color((Color *)awStack_50,1);
        PVZ2UIDialog::SetFooterFont(this_03,pPVar12,(Color *)awStack_50);
        PVZ2UIDialog::SetBackgroundDarken(this_03,true,0.5);
        FUN_05478178(auStack_58,L"[BUTTON_OK]",auStack_60);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)gLawnApp,LawnApp::OnCancelStore);
        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
        PVZ2UIDialog::AddButton(this_03,auStack_58,aDStack_38,0);
        FUN_05476c50(auStack_58);
        nop();
        pcVar13 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar13,"Play_UI_Menu_PopUp_General");
      }
    }
    pPVar7 = (PlantCthulhuActinia *)Sexy::LazySingleton<UIUpdateMgr>::GetInstance();
    cVar2 = PlantCthulhuActinia::GetEyeballStatus(pPVar7);
  }
  else {
    pNVar6 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar6);
    if (*(code **)(*(long *)this_01 + 0x28) != INetworkMsgProcess::IsLogined) {
      cVar2 = (**(code **)(*(long *)this_01 + 0x28))();
      if (cVar2 != '\0') goto LAB_03e9edec;
      goto LAB_03e9ed58;
    }
    cVar2 = INetworkMsgProcess::IsLogined(this_01);
    if (cVar2 == '\0') goto LAB_03e9ed58;
LAB_03e9edec:
    cVar2 = LawnApp::IsNetworkModuleOK();
    if (cVar2 == '\0') goto LAB_03e9ed58;
    pNVar6 = (NetworkMgr *)NetworkMgr::Instance();
    plVar8 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar6);
    if (*(code **)(*plVar8 + 0x2c8) == INetworkMsgProcess::ICloudRequestProfileMd5) {
      cVar2 = INetworkMsgProcess::ICloudRequestProfileMd5();
    }
    else {
      cVar2 = (**(code **)(*plVar8 + 0x2c8))();
    }
    if (cVar2 != '\0') goto LAB_03e9edac;
    pPVar7 = (PlantCthulhuActinia *)Sexy::LazySingleton<UIUpdateMgr>::GetInstance();
    cVar2 = PlantCthulhuActinia::GetEyeballStatus(pPVar7);
  }
  if (cVar2 == '\0') {
    pUVar9 = (UIUpdateMgr *)Sexy::LazySingleton<UIUpdateMgr>::GetInstance();
    UIUpdateMgr::Init(pUVar9);
    pUVar9 = (UIUpdateMgr *)Sexy::LazySingleton<UIUpdateMgr>::GetInstance();
    UIUpdateMgr::LoadUIUpdateRSB(pUVar9);
  }
  LawnApp::setSyncProfileSuccess(gLawnApp,false);
  cVar2 = LawnApp::isOppoNewerOptimizationOpen(gLawnApp);
  if ((cVar2 == '\0') || (this[0x21f] == (MainMenu)0x0)) {
    MVar1 = this[0x21a];
  }
  else {
    tVar10 = time((time_t *)0x0);
    FUN_03e9804c(this_00 + 0x13d8,tVar10);
    MVar1 = this[0x21a];
  }
  if (MVar1 == (MainMenu)0x0) {
    startGame();
  }
LAB_03e9edac:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* MainMenu::onLoginComplete() */

void __thiscall MainMenu::onLoginComplete(MainMenu *this)

{
  LawnApp::SetQiHooLogin(gLawnApp,true);
  syncProfileSummaryWithServer(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::continuePressStartGame() */

void __thiscall MainMenu::continuePressStartGame(MainMenu *this)

{
  LawnApp *this_00;
  ReceivedDataCallback *this_01;
  char cVar1;
  int iVar2;
  int iVar3;
  NetworkMgr *this_02;
  androidNetworkMsgProcess *this_03;
  char *pcVar4;
  PVZ2UIDialog *pPVar5;
  PrimeTypeface *pPVar6;
  string asStack_60 [8];
  string asStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_02 = (NetworkMgr *)NetworkMgr::Instance();
  this_03 = (androidNetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_02);
  cVar1 = androidNetworkMsgProcess::EnableBindUniqueID(this_03);
  if (cVar1 == '\0') {
    cVar1 = SettingsDialog::GetHaveSendV202();
    if (cVar1 == '\0') {
      iVar2 = FUN_03e98680(300);
      iVar3 = FUN_03e98680(0xdc);
      pPVar5 = (PVZ2UIDialog *)
               LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
      FUN_05478178(awStack_50,L"[HINT_DEFAULT_TITLE]",asStack_58);
      PVZ2UIDialog::SetHeaderLabel(pPVar5,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      FUN_05478178(awStack_50,L"[PVZ_PROFILE_CHECK_CHEAT]",asStack_58);
      PVZ2UIDialog::SetFooterLabel(pPVar5,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      pPVar6 = (PrimeTypeface *)
               PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
      PVZ2UIDialog::SetHeaderFont(pPVar5,pPVar6,(Color *)&PrimeText_Game::Color_Generic_Title);
      pPVar6 = (PrimeTypeface *)
               PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
      Sexy::Color::Color((Color *)awStack_50,1);
      PVZ2UIDialog::SetFooterFont(pPVar5,pPVar6,(Color *)awStack_50);
      PVZ2UIDialog::SetBackgroundDarken(pPVar5,true,0.5);
      FUN_05478178(asStack_58,L"[BUTTON_OK]",asStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar5,asStack_58,aDStack_38,0);
      FUN_05476c50(asStack_58);
      nop();
    }
    else {
      cVar1 = LawnApp::IsFitVersionLimit(gLawnApp);
      if (cVar1 == '\0') {
        std::string::string(asStack_60,"[VERSION_LIMIT_ERROR_TITLE]");
        std::string::string(asStack_58,"[VERSION_LIMIT_ERROR_MSG]");
        this_01 = (ReceivedDataCallback *)gLawnApp;
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)gLawnApp,LawnApp::VersionForceUpdate);
        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
        LawnApp::ShowMessageDialogWithOKButton((LawnApp *)this_01,asStack_60,asStack_58,aDStack_38);
        std::string::~string(asStack_58);
        nop();
        std::string::~string(asStack_60);
        nop();
      }
      else {
        cVar1 = SettingsDialog::GetIsACheatProfile();
        this_00 = gLawnApp;
        if (cVar1 == '\0') {
          pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
          AudioMgr::SendEvent(pcVar4,"Play_UI_Menu_Button_Profile_Play_Release");
          syncProfileSummaryWithServer(this);
        }
        else {
          iVar2 = FUN_03e98680(300);
          iVar3 = FUN_03e98680(0xdc);
          pPVar5 = (PVZ2UIDialog *)
                   LawnApp::ShowPVZ2Dialog(this_00,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
          FUN_05478178(awStack_50,L"[HINT_DEFAULT_TITLE]",asStack_58);
          PVZ2UIDialog::SetHeaderLabel(pPVar5,awStack_50);
          FUN_05476c50(awStack_50);
          nop();
          FUN_05478178(awStack_50,L"[PVZ_PROFILE_ERROR]",asStack_58);
          PVZ2UIDialog::SetFooterLabel(pPVar5,awStack_50);
          FUN_05476c50(awStack_50);
          nop();
          pPVar6 = (PrimeTypeface *)
                   PrimeText_PotentialTypeface::Typeface
                             (PrimeText_Game::Typeface_FZShaoEr_28_Outline);
          PVZ2UIDialog::SetHeaderFont(pPVar5,pPVar6,(Color *)&PrimeText_Game::Color_Generic_Title);
          pPVar6 = (PrimeTypeface *)
                   PrimeText_PotentialTypeface::Typeface
                             (PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
          Sexy::Color::Color((Color *)awStack_50,1);
          PVZ2UIDialog::SetFooterFont(pPVar5,pPVar6,(Color *)awStack_50);
          PVZ2UIDialog::SetBackgroundDarken(pPVar5,true,0.5);
          FUN_05478178(asStack_58,L"[EXIT_GAME]",asStack_60);
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)gLawnApp,LawnApp::onConfirmExitGame);
          Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
          PVZ2UIDialog::AddButton(pPVar5,asStack_58,aDStack_38,0);
          FUN_05476c50(asStack_58);
          nop();
        }
      }
    }
  }
  else {
    ShowBindUniqueIDHint();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MainMenu::onFinishCheckAccount(bool) */

void __thiscall MainMenu::onFinishCheckAccount(MainMenu *this,bool param_1)

{
  AccountRemoveMgr *this_00;
  
  if (!param_1) {
    this_00 = (AccountRemoveMgr *)Sexy::LazySingleton<AccountRemoveMgr>::GetInstance();
    AccountRemoveMgr::DisplayUI(this_00);
    return;
  }
  if ((*(long *)(this + 0x1a0) != 0) && (*(char *)(*(long *)(this + 0x1a0) + 0x6c) != '\0')) {
    (**(code **)(*(long *)this + 0x68))();
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x1a0));
    if (*(long **)(this + 0x1a0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x1a0) + 0x18))();
    }
    *(undefined8 *)(this + 0x1a0) = 0;
    continuePressStartGame(this);
    return;
  }
  continuePressStartGame(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::onSyncProfileSummaryFinish(bool) */

void __thiscall MainMenu::onSyncProfileSummaryFinish(MainMenu *this,bool param_1)

{
  LawnApp *pLVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  PlayerInfo *pPVar6;
  time_t tVar7;
  PVZ2UIDialog *this_00;
  PrimeTypeface *pPVar8;
  char *pcVar9;
  NetworkMgr *this_01;
  androidNetworkMsgProcess *this_02;
  ProfileMgr *this_03;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (!param_1) {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178((wstring *)asStack_50,L"[NETWORK_NOT_CONNECTED_TEXT_FOR_SYNC_PLAYERINFO]",
                 auStack_60);
    cVar2 = LawnApp::CheckNetWork(pLVar1,awStack_58,(wstring *)asStack_50);
    FUN_05476c50((wstring *)asStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    pLVar1 = gLawnApp;
    if (cVar2 != '\0') {
      iVar4 = FUN_03e98680(400);
      iVar5 = FUN_03e98680(0xfa);
      this_00 = (PVZ2UIDialog *)
                LawnApp::ShowPVZ2Dialog(pLVar1,(float)iVar4,(float)iVar5,(PVZ2UIDialog *)0x0);
      FUN_05478178((wstring *)asStack_50,L"[NETWORK_NOT_CONNECTED_TITLE]",awStack_58);
      PVZ2UIDialog::SetHeaderLabel(this_00,(wstring *)asStack_50);
      FUN_05476c50((wstring *)asStack_50);
      nop();
      FUN_05478178((wstring *)asStack_50,L"[NETWORK_CLOUD_SYNC_ERROR]",awStack_58);
      PVZ2UIDialog::SetFooterLabel(this_00,(wstring *)asStack_50);
      FUN_05476c50((wstring *)asStack_50);
      nop();
      pPVar8 = (PrimeTypeface *)
               PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
      PVZ2UIDialog::SetHeaderFont(this_00,pPVar8,(Color *)&PrimeText_Game::Color_Generic_Title);
      pPVar8 = (PrimeTypeface *)
               PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
      Sexy::Color::Color((Color *)asStack_50,1);
      PVZ2UIDialog::SetFooterFont(this_00,pPVar8,(Color *)asStack_50);
      PVZ2UIDialog::SetBackgroundDarken(this_00,true,0.5);
      FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::OnCancelStore);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,(wstring *)asStack_50);
      PVZ2UIDialog::AddButton(this_00,awStack_58,aDStack_38,0);
      FUN_05476c50(awStack_58);
      nop();
      pcVar9 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar9,"Play_UI_Menu_PopUp_General");
      MessageRouter::Post<int,summarySelectResult>
                ((MessageRouter *)gMessageRouter,Message::ProfileSummarySelectResult,2);
    }
    goto LAB_03e9f64c;
  }
  LawnApp::setProfileConnected(gLawnApp,true);
  cVar2 = LawnApp::CheckProfileOpen();
  if ((cVar2 != '\0') && (this[0x21a] != (MainMenu)0x0)) {
    this[0x21a] = (MainMenu)0x0;
  }
  pPVar6 = (PlayerInfo *)ProfileUtils::Profile();
  if (pPVar6 != (PlayerInfo *)0x0) {
    PlayerInfo::GetDeltaOnlineDataSign();
    cVar2 = FUN_0547419c(asStack_50);
    std::string::~string(asStack_50);
    if (cVar2 != '\0') {
      this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      ProfileMgr::Save(this_03,true,true);
      startGame();
      goto LAB_03e9f64c;
    }
    PlayerInfo::UpdateDeltaDataForServer(pPVar6);
    cVar2 = PlayerInfo::IsDiffDeltaDataBetweenServer(pPVar6);
    if (cVar2 != '\0') {
      cVar2 = LawnApp::CheckProfileOpen();
      if (cVar2 != '\0') {
        this_01 = (NetworkMgr *)NetworkMgr::Instance();
        this_02 = (androidNetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
        cVar2 = androidNetworkMsgProcess::CheckACLogFirstLogin(this_02);
        if (cVar2 == '\0') {
          pPVar6 = (PlayerInfo *)ProfileUtils::Profile();
          if (pPVar6 != (PlayerInfo *)0x0) {
            bVar3 = PlayerInfo::IsOlderThanServerData(pPVar6);
            ChooseProfile(this,(bool)(bVar3 ^ 1));
          }
          goto LAB_03e9f64c;
        }
      }
      showDiffProfileSummary(this);
      goto LAB_03e9f64c;
    }
    LawnApp::setSyncProfileSuccess(gLawnApp,true);
    cVar2 = LawnApp::isOppoNewerOptimizationOpen(gLawnApp);
    if ((cVar2 != '\0') && (this[0x21f] != (MainMenu)0x0)) {
      tVar7 = time((time_t *)0x0);
      FUN_03e9804c(pPVar6 + 0x13d8,tVar7);
    }
  }
  startGame();
LAB_03e9f64c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::SplitString(std::wstring, std::vector<std::wstring, std::allocator<std::wstring > >&,
   wchar_t) */

void __thiscall
MainMenu::SplitString
          (undefined8 param_1,undefined8 param_2,
          vector<std::wstring,std::allocator<std::wstring>> *param_3,int param_4)

{
  char cVar1;
  long lVar2;
  int *piVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  wstring awStack_10 [8];
  long local_8;
  
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  FUN_05476574(awStack_10);
  lVar2 = FUN_054765d0(param_2);
  if (lVar2 != 0) {
    do {
      piVar3 = (int *)FUN_05476f5c(param_2,uVar6);
      if (*piVar3 == param_4) {
        std::vector<std::wstring,std::allocator<std::wstring>>::push_back(param_3,awStack_10);
        FUN_05476f98(awStack_10);
      }
      else {
        piVar3 = (int *)FUN_05476f5c(param_2,uVar6);
        if (((*piVar3 != 0xd) && (piVar3 = (int *)FUN_05476f5c(param_2,uVar6), *piVar3 != 10)) &&
           (piVar3 = (int *)FUN_05476f5c(param_2,uVar6), *piVar3 != 9)) {
          puVar4 = (undefined4 *)FUN_05476f5c(param_2,uVar6);
          FUN_054778bc(awStack_10,1,*puVar4);
        }
      }
      uVar6 = uVar6 + 1;
      uVar5 = FUN_054765d0(param_2);
    } while (uVar6 < uVar5);
  }
  cVar1 = FUN_054765e8(awStack_10);
  if (cVar1 == '\0') {
    std::vector<std::wstring,std::allocator<std::wstring>>::push_back(param_3,awStack_10);
  }
  FUN_05476c50(awStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* MainMenu::createProfilesDialog() */

void __thiscall MainMenu::createProfilesDialog(MainMenu *this)

{
  ProfilesDialog *this_00;
  PVZ2UIScrollingPaneWidget *this_01;
  
  FUN_03e97fb0(*(long *)(this + 0x1a8) + 0x110,1);
  this_01 = *(PVZ2UIScrollingPaneWidget **)(this + 0x1a8);
  this_00 = ::operator_new(0xf0);
  ProfilesDialog::ProfilesDialog(this_00);
  PVZ2UIScrollingPaneWidget::ScrollRight(this_01,(Widget *)this_00);
  (**(code **)(*(long *)this + 0xb0))(this,*(undefined8 *)(this + 0x1a8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::CreateWelcomeDialog(Sexy::RtWeakPtr<PlayerInfo>) */

void __thiscall MainMenu::CreateWelcomeDialog(MainMenu *this,RtWeakPtrBase *param_2)

{
  Widget *pWVar1;
  PVZ2UIScrollingPaneWidget *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this_00 = *(PVZ2UIScrollingPaneWidget **)(this + 0x1a8);
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  pWVar1 = ::operator_new(0x150);
  EditProfileWidget::EditProfileWidget((EditProfileWidget *)pWVar1,aRStack_10);
  PVZ2UIScrollingPaneWidget::ScrollRight(this_00,pWVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  (**(code **)(*(long *)this + 0xb0))(this,*(undefined8 *)(this + 0x1a8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::Update() */

void __thiscall MainMenu::Update(MainMenu *this)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  ProfileMgr *this_01;
  NetworkMgr *this_02;
  INetworkMsgProcess *this_03;
  NetworkItemMgr *pNVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)(this + 0x1a0) != 0) && (*(char *)(*(long *)(this + 0x1a0) + 0x6c) == '\0')) {
    (**(code **)(*(long *)this + 0x68))();
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x1a0));
    if (*(long **)(this + 0x1a0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x1a0) + 0x18))();
    }
    *(undefined8 *)(this + 0x1a0) = 0;
  }
  if ((*(long *)(this + 0x1b0) != 0) && (*(char *)(*(long *)(this + 0x1b0) + 0x6c) == '\0')) {
    (**(code **)(*(long *)this + 0x68))(this);
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x1b0));
    if (*(long **)(this + 0x1b0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x1b0) + 0x18))();
    }
    *(undefined8 *)(this + 0x1b0) = 0;
  }
  if ((*(long *)(this + 0x1b8) != 0) && (*(char *)(*(long *)(this + 0x1b8) + 0x6c) == '\0')) {
    (**(code **)(*(long *)this + 0x68))(this);
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x1b8));
    if (*(long **)(this + 0x1b8) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x1b8) + 0x18))();
    }
    *(undefined8 *)(this + 0x1b8) = 0;
  }
  if ((*(long *)(this + 0x1c0) != 0) && (*(char *)(*(long *)(this + 0x1c0) + 0x6c) == '\0')) {
    (**(code **)(*(long *)this + 0x68))(this);
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x1c0));
    if (*(long **)(this + 0x1c0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x1c0) + 0x18))();
    }
    *(undefined8 *)(this + 0x1c0) = 0;
  }
  iVar2 = PVZ2UIScrollingPaneWidget::GetDepth(*(PVZ2UIScrollingPaneWidget **)(this + 0x1a8));
  if ((iVar2 == 0) && (*(long *)(this + 0x1d0) == 0)) {
    createMainButtons(this);
    Sexy::LazySingleton<ProfileMgr>::GetInstance();
    iVar2 = ProfileMgr::GetNumProfiles();
    if (0 < iVar2) goto LAB_03ea2828;
LAB_03ea2a64:
    iVar2 = PVZ2UIScrollingPaneWidget::GetDepth(*(PVZ2UIScrollingPaneWidget **)(this + 0x1a8));
    if ((iVar2 == 0) && (cVar1 = LawnApp::CheckProfileOpen(), cVar1 == '\0')) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)awStack_10);
      CreateWelcomeDialog(this,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                               awStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)awStack_10);
    }
  }
  else {
    Sexy::LazySingleton<ProfileMgr>::GetInstance();
    iVar2 = ProfileMgr::GetNumProfiles();
    if (iVar2 < 1) goto LAB_03ea2a64;
LAB_03ea2828:
    lVar4 = *(long *)(this + 0x1d0);
    if (lVar4 != 0) {
      this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      ProfileMgr::GetCurrentProfile(this_01);
      PlayerInfo::AM_GetName();
      FUN_054766c8(lVar4 + 0xd8,awStack_10);
      FUN_05476c50(awStack_10);
    }
  }
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar2 = ProfileMgr::GetNumProfiles();
  if ((iVar2 == 0) && (*(long *)(this + 0x1d0) != 0)) {
    FUN_054772c4(*(long *)(this + 0x1d0) + 0xd8,&DAT_056f11a8);
  }
  this_02 = (NetworkMgr *)NetworkMgr::Instance();
  this_03 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_02);
  this_00 = gLawnApp;
  if (gLawnApp[0x2a10] == (LawnApp)0x0) {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if ((cVar1 == '\0') || (this[0x219] != (MainMenu)0x0)) goto LAB_03ea2910;
    if (*(code **)(*(long *)this_03 + 0x30) == INetworkMsgProcess::GetICloudState) {
      iVar2 = INetworkMsgProcess::GetICloudState(this_03);
    }
    else {
      iVar2 = (**(code **)(*(long *)this_03 + 0x30))();
    }
    if (iVar2 == 1) goto LAB_03ea2910;
    if (*(code **)(*(long *)this_03 + 0x30) == INetworkMsgProcess::GetICloudState) {
      iVar2 = INetworkMsgProcess::GetICloudState(this_03);
    }
    else {
      iVar2 = (**(code **)(*(long *)this_03 + 0x30))();
    }
    if (iVar2 == 3) goto LAB_03ea2910;
    this[0x219] = (MainMenu)0x1;
    Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::LoginiCloudServer();
    Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
    cVar1 = NetworkItemMgr::HasNetworkCacheSyncComplete();
  }
  else {
    this[0x219] = (MainMenu)0x1;
    this_00[0x2a10] = (LawnApp)0x0;
    FUN_05478178(awStack_18,L"[ENTER_GAME_ERROR_TITLE]",auStack_28);
    FUN_05478178(awStack_10,L"[DOWNLOAD_AND_USE_NEW_APP]",auStack_20);
    LawnApp::ShowPVZ2Dialog(this_00,awStack_18,awStack_10);
    FUN_05476c50(awStack_10);
    nop();
    FUN_05476c50(awStack_18);
    nop();
LAB_03ea2910:
    Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
    cVar1 = NetworkItemMgr::HasNetworkCacheSyncComplete();
  }
  if (cVar1 == '\0') {
    lVar4 = Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
    cVar1 = FUN_03e98078(*(undefined1 *)(lVar4 + 0x11));
    if (cVar1 != '\0') {
      pNVar3 = (NetworkItemMgr *)Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
      cVar1 = NetworkItemMgr::ReachMaxRetry(pNVar3);
      if (cVar1 == '\0') {
        pNVar3 = (NetworkItemMgr *)Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
        NetworkItemMgr::ShowWaitingDialog(pNVar3);
        goto LAB_03ea2928;
      }
    }
  }
  pNVar3 = (NetworkItemMgr *)Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
  NetworkItemMgr::KillWaitingDialog(pNVar3);
LAB_03ea2928:
  if ((*(long *)(this + 0x200) != 0) &&
     (fVar5 = (float)PVZ_RealT(), *(float *)(this + 0x208) < fVar5)) {
    uVar6 = PVZ_EOT();
    lVar4 = **(long **)(this + 0x200);
    *(undefined4 *)(this + 0x208) = uVar6;
    (**(code **)(lVar4 + 0x188))(*(long **)(this + 0x200),0);
  }
  updateBackgroundEffect(this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::createWelcomeDialogIfNeeded() */

void __thiscall MainMenu::createWelcomeDialogIfNeeded(MainMenu *this)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  ulong uVar3;
  ProfileMgr *this_01;
  long lVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  uVar3 = ProfileMgr::GetNumProfiles();
  Sexy::OutputDebugStrF
            ((wchar_t *)"ACLog - createWelcomeDialogIfNeeded, profiles num : %d",uVar3 & 0xffffffff)
  ;
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar2 = ProfileMgr::GetNumProfiles();
  if (iVar2 == 0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)awStack_10);
    CreateWelcomeDialog(this,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                             awStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)awStack_10);
  }
  else {
    createMainButtons(this);
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar4 = ProfileMgr::GetCurrentProfile(this_01);
    if ((lVar4 != 0) &&
       (cVar1 = FUN_03e98048(*(undefined1 *)(lVar4 + 0xd98)), this_00 = gLawnApp, cVar1 == '\0')) {
      FUN_05478178(awStack_18,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_28);
      FUN_05478178(awStack_10,L"[NETWORK_NOT_CONNECTED_TEXT_FOR_SYNC_PLAYERINFO]",auStack_20);
      LawnApp::CheckNetWork(this_00,awStack_18,awStack_10);
      FUN_05476c50(awStack_10);
      nop();
      FUN_05476c50(awStack_18);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MainMenu::LoginiCloudServerFinishProc(bool) */

void __thiscall MainMenu::LoginiCloudServerFinishProc(MainMenu *this,bool param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  PlantTwinsHoneySuckle *this_00;
  ConfigUpdateMgr *this_01;
  
  plVar4 = *(long **)(this + 0x1c8);
  this[0xe0] = (MainMenu)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x158))(plVar4,1);
  }
  plVar4 = *(long **)(this + 0x1f0);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x158))(plVar4,1);
  }
  Sexy::OutputDebugStrF
            ((wchar_t *)"ACLog - LoginiCloudServerFinishProc, success : %d",(ulong)param_1);
  this[0x219] = (MainMenu)0x0;
  lVar5 = Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
  FUN_03e9822c(lVar5 + 0x11);
  this_00 = (PlantTwinsHoneySuckle *)Sexy::LazySingleton<ConfigUpdateMgr>::GetInstance();
  cVar1 = PlantTwinsHoneySuckle::CanEndPlantfood(this_00);
  if ((cVar1 != '\0') && (cVar1 = LawnApp::IsServiceAvailable(gLawnApp,0x10), cVar1 != '\0')) {
    this_01 = (ConfigUpdateMgr *)Sexy::LazySingleton<ConfigUpdateMgr>::GetInstance();
    ConfigUpdateMgr::ForceRestart(this_01);
  }
  bVar2 = LawnApp::CheckProfileOpen();
  if ((param_1 < bVar2) &&
     (iVar3 = PVZ2UIScrollingPaneWidget::GetDepth(*(PVZ2UIScrollingPaneWidget **)(this + 0x1a8)),
     iVar3 == 0)) {
    createWelcomeDialogIfNeeded(this);
  }
  cVar1 = LawnApp::CheckProfileOpen();
  if ((cVar1 != '\0') && (this[0x21e] != (MainMenu)0x0)) {
    startGame();
  }
  if (!param_1) {
    return;
  }
  CreateBindUniqueIDButton(this);
  return;
}


/* MainMenu::onLoginiCloudServerFinish(bool) */

void __thiscall MainMenu::onLoginiCloudServerFinish(MainMenu *this,bool param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  PlantTwinsHoneySuckle *this_00;
  ConfigUpdateMgr *this_01;
  
  Sexy::OutputDebugStrF((wchar_t *)"ACLog - onLoginiCloudServerFinish, success : %d",(ulong)param_1)
  ;
  this[0x219] = (MainMenu)0x0;
  lVar4 = Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
  FUN_03e9822c(lVar4 + 0x11);
  this_00 = (PlantTwinsHoneySuckle *)Sexy::LazySingleton<ConfigUpdateMgr>::GetInstance();
  cVar1 = PlantTwinsHoneySuckle::CanEndPlantfood(this_00);
  if ((cVar1 != '\0') && (cVar1 = LawnApp::IsServiceAvailable(gLawnApp,0x10), cVar1 != '\0')) {
    this_01 = (ConfigUpdateMgr *)Sexy::LazySingleton<ConfigUpdateMgr>::GetInstance();
    ConfigUpdateMgr::ForceRestart(this_01);
  }
  bVar2 = LawnApp::CheckProfileOpen();
  if ((param_1 < bVar2) &&
     (iVar3 = PVZ2UIScrollingPaneWidget::GetDepth(*(PVZ2UIScrollingPaneWidget **)(this + 0x1a8)),
     iVar3 == 0)) {
    createWelcomeDialogIfNeeded(this);
  }
  cVar1 = LawnApp::CheckProfileOpen();
  if ((cVar1 != '\0') && (this[0x21e] != (MainMenu)0x0)) {
    startGame();
  }
  if (!param_1) {
    return;
  }
  CreateBindUniqueIDButton(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::CheckConfigFile(std::string const&) */

void __thiscall MainMenu::CheckConfigFile(MainMenu *this,string *param_1)

{
  SexyAppBase *pSVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  string *psVar5;
  void *pvVar6;
  string asStack_100 [8];
  string asStack_f8 [8];
  string asStack_f0 [8];
  string asStack_e8 [8];
  string asStack_e0 [8];
  string asStack_d8 [8];
  string asStack_d0 [8];
  string asStack_c8 [8];
  string asStack_c0 [8];
  string asStack_b8 [8];
  string asStack_b0 [8];
  string asStack_a8 [48];
  MD5 aMStack_78 [112];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Android::Resources::GetUserDataFolder(gLawnApp);
  cVar3 = '\x01';
  Android::Resources::GetExternalFilesDirectory(gLawnApp);
  pSVar1 = Sexy::gSexyAppBase;
  std::operator+(asStack_100,"/");
  std::operator+(asStack_f0,param_1);
  std::operator+(asStack_e8,".smf");
  cVar2 = Sexy::SexyAppBase::FileExists(pSVar1,asStack_e0);
  pSVar1 = Sexy::gSexyAppBase;
  if (cVar2 == '\0') {
    std::operator+(asStack_f8,"/");
    std::operator+(asStack_d8,param_1);
    std::operator+(asStack_d0,".smf");
    cVar3 = Sexy::SexyAppBase::FileExists(pSVar1,asStack_c8);
    pSVar1 = Sexy::gSexyAppBase;
    if (cVar3 == '\0') {
      std::operator+(asStack_100,"/");
      std::operator+(asStack_c0,param_1);
      cVar3 = Sexy::SexyAppBase::FileExists(pSVar1,asStack_b8);
      pSVar1 = Sexy::gSexyAppBase;
      if (cVar3 == '\0') {
        std::operator+(asStack_f8,"/");
        std::operator+(asStack_b0,param_1);
        cVar3 = Sexy::SexyAppBase::FileExists(pSVar1,asStack_a8);
        std::string::~string(asStack_a8);
        std::string::~string(asStack_b0);
      }
      std::string::~string(asStack_b8);
      std::string::~string(asStack_c0);
    }
    std::string::~string(asStack_c8);
    std::string::~string(asStack_d0);
    std::string::~string(asStack_d8);
  }
  std::string::~string(asStack_e0);
  std::string::~string(asStack_e8);
  std::string::~string(asStack_f0);
  cVar2 = '\0';
  if (cVar3 == '\0') goto LAB_03ea2ff8;
  std::string::string(asStack_c0,"");
  nop();
  pSVar1 = Sexy::gSexyAppBase;
  std::operator+(asStack_100,"/");
  std::operator+(asStack_b8,param_1);
  std::operator+(asStack_b0,".smf");
  cVar2 = Sexy::SexyAppBase::FileExists(pSVar1,asStack_a8);
  std::string::~string(asStack_a8);
  std::string::~string(asStack_b0);
  std::string::~string(asStack_b8);
  pSVar1 = Sexy::gSexyAppBase;
  psVar5 = asStack_100;
  if (cVar2 == '\0') {
    std::operator+(asStack_f8,"/");
    std::operator+(asStack_b8,param_1);
    std::operator+(asStack_b0,".smf");
    cVar2 = Sexy::SexyAppBase::FileExists(pSVar1,asStack_a8);
    std::string::~string(asStack_a8);
    std::string::~string(asStack_b0);
    std::string::~string(asStack_b8);
    psVar5 = asStack_f8;
    if (cVar2 != '\0') goto LAB_03ea3168;
  }
  else {
LAB_03ea3168:
    std::operator+(psVar5,"/");
    std::operator+(asStack_b8,param_1);
    std::operator+(asStack_b0,".smf");
    FUN_05474278(asStack_c0,asStack_a8);
    std::string::~string(asStack_a8);
    std::string::~string(asStack_b0);
    std::string::~string(asStack_b8);
  }
  cVar2 = FUN_0547419c(asStack_c0);
  if (cVar2 == '\0') {
    std::string::string(asStack_b8,"");
    nop();
    Sexy::Buffer::Buffer((Buffer *)asStack_a8);
    cVar3 = Sexy::SexyAppBase::ReadBufferFromFile
                      ((string *)Sexy::gSexyAppBase,(Buffer *)asStack_c0,SUB81(asStack_a8,0));
    cVar2 = '\0';
    if (cVar3 != '\0') {
      pvVar6 = (void *)Sexy::Buffer::GetDataPtr((Buffer *)asStack_a8);
      iVar4 = Sexy::Buffer::GetDataLen((Buffer *)asStack_a8);
      MD5::MD5(aMStack_78,pvVar6,(long)iVar4);
      MD5::toString();
      FUN_05474278(asStack_b8,asStack_b0);
      std::string::~string(asStack_b0);
      cVar2 = std::operator==((string *)&DAT_06ae0498,asStack_b8);
      if (cVar2 == '\0') {
        Sexy::Buffer::~Buffer((Buffer *)asStack_a8);
        std::string::~string(asStack_b8);
        std::string::~string(asStack_c0);
        goto LAB_03ea2ff8;
      }
    }
    Sexy::Buffer::~Buffer((Buffer *)asStack_a8);
    std::string::~string(asStack_b8);
  }
  else {
    cVar2 = '\0';
  }
  std::string::~string(asStack_c0);
LAB_03ea2ff8:
  std::string::~string(asStack_f8);
  std::string::~string(asStack_100);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::Initialize() */

void __thiscall MainMenu::Initialize(MainMenu *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  TGALogMgr *pTVar7;
  CrazyNPCManager *this_00;
  long lVar8;
  PVZ2UIScrollingPaneWidget *this_01;
  NewPVPMgr *this_02;
  ProfileMgr *pPVar9;
  PlayerInfo *pPVar10;
  PVZ2UIDialog *this_03;
  PrimeTypeface *pPVar11;
  size_t in_x2;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined1 auStack_170 [8];
  TGABagData aTStack_168 [8];
  undefined1 auStack_160 [8];
  wstring awStack_158 [24];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_100;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TGABagData::TGABagData(aTStack_168);
  std::string::append((string *)aTStack_168,"7",in_x2);
  pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGABagData::TGABagData((TGABagData *)&local_50,aTStack_168);
  TGALogMgr::LogAppLaunch(pTVar7,(TGABagData *)&local_50);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_50);
  pLVar2 = gLawnApp;
  gLawnApp[0x298c] = (LawnApp)0x1;
  this_00 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(pLVar2);
  CrazyNPCManager::FinisAllTalking(this_00);
  lVar8 = Sexy::LazySingleton<ProfileMgr>::GetInstance();
  FUN_03e98058(lVar8 + 0x129,0);
  iVar4 = FUN_03e98680(0x1a9);
  iVar5 = FUN_03e98680(0x49);
  iVar6 = FUN_03e98680(0x1be);
  Sexy::Insets::Insets
            ((Insets *)&local_50,(*(int *)(gLawnApp + 0x724) - iVar4) / 2,iVar5,iVar4,iVar6);
  this_01 = ::operator_new(0x120);
  PVZ2UIScrollingPaneWidget::PVZ2UIScrollingPaneWidget
            (this_01,(TRect *)&local_50,(Widget *)this,(Widget *)0x0);
  *(PVZ2UIScrollingPaneWidget **)(this + 0x1a8) = this_01;
  (**(code **)(*(long *)this + 0x60))(this,this_01);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar4 = ProfileMgr::GetNumProfiles();
  if (iVar4 == 0) {
    this[0x220] = (MainMenu)0x1;
  }
  this_02 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  NewPVPMgr::StartFrameCalc(this_02);
  Sexy::LazySingleton<talkingGame>::GetInstancePtr();
  nop();
  iVar4 = LawnApp::GetPlatform(gLawnApp);
  if ((iVar4 != 3) && (iVar4 = LawnApp::GetPlatform(gLawnApp), iVar4 != 9)) {
    Sexy::LazySingleton<talkingGame>::GetInstancePtr();
    nop();
  }
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar4 = ProfileMgr::GetNumProfiles();
  if ((iVar4 == 0) && (cVar3 = LawnApp::IsNetworkModuleOK(), cVar3 == '\0')) {
    Sexy::OutputDebugStrF((wchar_t *)"ACLog - ProfileMgr::GetInstance().GetNumProfiles() == 0");
    cVar3 = LawnApp::isOppoNewerOptimizationOpen(gLawnApp);
    if (cVar3 != '\0') {
      this[0x21f] = (MainMenu)0x1;
    }
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_50);
    CreateWelcomeDialog(this,(TGABagData *)&local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  }
  else {
    createMainButtons(this);
    pPVar9 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar10 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar9);
    if ((pPVar10 != (PlayerInfo *)0x0) &&
       (cVar3 = FUN_03e98048(pPVar10[0xd98]), pLVar2 = gLawnApp, cVar3 == '\0')) {
      FUN_05478178((wstring *)&local_68,L"[NETWORK_NOT_CONNECTED_TITLE]",&local_98);
      FUN_05478178((TGABagData *)&local_50,L"[NETWORK_NOT_CONNECTED_TEXT_FOR_SYNC_PLAYERINFO]",
                   &local_80);
      cVar3 = LawnApp::CheckNetWork(pLVar2,(wstring *)&local_68,(wstring *)&local_50);
      FUN_05476c50((TGABagData *)&local_50);
      nop();
      FUN_05476c50((wstring *)&local_68);
      nop();
      if ((cVar3 == '\0') && (cVar3 = LawnApp::CheckProfileOpen(), cVar3 != '\0')) {
        Set8BytesTo0((TGABagData *)&local_50);
        PlayerInfo::UnserializeACLog(pPVar10,(string *)&local_50);
        std::string::~string((string *)&local_50);
      }
    }
  }
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,reloadData);
  Sexy::Delegate0::Delegate0<MainMenu,void(MainMenu::*)()>(aDStack_38,(TGABagData *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::AccountIdChanged,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onProfileListChanged);
  Sexy::Delegate0::Delegate0<MainMenu,void(MainMenu::*)()>(aDStack_38,(TGABagData *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ProfileListChanged,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameCenterAuthenticationChanged);
  local_190 = local_140;
  uStack_188 = uStack_138;
  local_180 = local_130;
  MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<MainMenu,void(MainMenu::*)(bool)>>
            ((MessageRouter *)puVar1,Message::GameCenterAuthenticationChanged,&local_190);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoginiCloudServerFinish);
  local_190 = local_128;
  uStack_188 = uStack_120;
  local_180 = local_118;
  MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<MainMenu,void(MainMenu::*)(bool)>>
            ((MessageRouter *)puVar1,Message::LoginiCloudServerFinish,&local_190);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSyncProfileSummaryFinish);
  local_180 = local_100;
  MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<MainMenu,void(MainMenu::*)(bool)>>
            ((MessageRouter *)puVar1,Message::SyncProfileSummaryFinish,&local_190);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSyncProfileToServer);
  local_180 = local_e8;
  MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<MainMenu,void(MainMenu::*)(bool)>>
            ((MessageRouter *)puVar1,Message::SyncProfileToServerFinish,&local_190);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSyncProfileFromServer);
  local_190 = local_e0;
  uStack_188 = uStack_d8;
  local_180 = local_d0;
  MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<MainMenu,void(MainMenu::*)(bool)>>
            ((MessageRouter *)puVar1,Message::SyncProfileFromServerFinish,&local_190);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onProfileSummarySelectResult);
  local_1a0 = local_b8;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<MainMenu,void(MainMenu::*)(int)>>
            ((MessageRouter *)puVar1,Message::ProfileSummarySelectResult,&local_1b0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNetworkError);
  local_1b0 = local_b0;
  uStack_1a8 = uStack_a8;
  local_1a0 = local_a0;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<MainMenu,void(MainMenu::*)(int)>>
            ((MessageRouter *)puVar1,Message::MsgError,&local_1b0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,startGame);
  Sexy::Delegate0::Delegate0<MainMenu,void(MainMenu::*)()>(aDStack_38,(TGABagData *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::StartGameOffLine,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoginComplete);
  Sexy::Delegate0::Delegate0<MainMenu,void(MainMenu::*)()>(aDStack_38,(TGABagData *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LoginComplete,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNetworkProfileSyncFinish);
  local_180 = local_88;
  local_190 = local_98;
  uStack_188 = uStack_90;
  MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<MainMenu,void(MainMenu::*)(bool)>>
            ((MessageRouter *)puVar1,Message::NetworkProfileSyncFinish,&local_190);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFinishCheckAccount);
  local_190 = local_80;
  uStack_188 = uStack_78;
  local_180 = local_70;
  MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<MainMenu,void(MainMenu::*)(bool)>>
            ((MessageRouter *)puVar1,Message::FinishCheckAccount,&local_190);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSyncPlayerInfoFinish);
  local_180 = local_58;
  local_190 = local_68;
  uStack_188 = uStack_60;
  MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<MainMenu,void(MainMenu::*)(bool)>>
            ((MessageRouter *)puVar1,Message::SyncPlayerInfoFinish,&local_190);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCheckRedeemFinished);
  local_190 = local_50;
  uStack_188 = uStack_48;
  local_180 = local_40;
  MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<MainMenu,void(MainMenu::*)(bool)>>
            ((MessageRouter *)puVar1,Message::CheckRedeemFinished,&local_190);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,tryStartGame);
  Sexy::Delegate0::Delegate0<MainMenu,void(MainMenu::*)()>(aDStack_38,awStack_158);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::FinishUnsyncItems,aDStack_38);
  MessageRouter::Post((_func_void *)gMessageRouter);
  MessageRouter::Post((_func_void *)gMessageRouter);
  playBackgroundEffect(this);
  cVar3 = LawnApp::IsServiceAvailable(gLawnApp,0x4000000);
  if ((cVar3 != '\0') &&
     (cVar3 = CheckConfigFile(this,(string *)&DAT_06ae0600), pLVar2 = gLawnApp, cVar3 == '\0')) {
    iVar4 = FUN_03e98680(400);
    iVar5 = FUN_03e98680(0xfa);
    this_03 = (PVZ2UIDialog *)
              LawnApp::ShowPVZ2Dialog(pLVar2,(float)iVar4,(float)iVar5,(PVZ2UIDialog *)0x0);
    FUN_05478178(awStack_158,L"[MD5_CHECK_FAILED_TITLE]",auStack_160);
    PVZ2UIDialog::SetHeaderLabel(this_03,awStack_158);
    FUN_05476c50(awStack_158);
    nop();
    FUN_05478178(awStack_158,L"[MD5_CHECK_FAILED_DESC]",auStack_160);
    PVZ2UIDialog::SetFooterLabel(this_03,awStack_158);
    FUN_05476c50(awStack_158);
    nop();
    pPVar11 = (PrimeTypeface *)
              PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
    PVZ2UIDialog::SetHeaderFont(this_03,pPVar11,(Color *)&PrimeText_Game::Color_Generic_Title);
    pPVar11 = (PrimeTypeface *)
              PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow)
    ;
    Sexy::Color::Color((Color *)awStack_158,1);
    PVZ2UIDialog::SetFooterFont(this_03,pPVar11,(Color *)awStack_158);
    FUN_05478178(auStack_160,L"[BUTTON_OK]",auStack_170);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnCheckMD5Failed);
    Sexy::Delegate0::Delegate0<MainMenu,void(MainMenu::*)()>(aDStack_38,awStack_158);
    PVZ2UIDialog::AddButton(this_03,auStack_160,aDStack_38,0);
    FUN_05476c50(auStack_160);
    nop();
  }
  pPVar9 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar10 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar9);
  if ((pPVar10 != (PlayerInfo *)0x0) && (cVar3 = PlayerInfo::IsHighFPS(pPVar10), cVar3 != '\0')) {
    (**(code **)(*(long *)gLawnApp + 0x350))(gLawnApp,1);
  }
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_168);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::InitForDecompressRsbs() */

void __thiscall MainMenu::InitForDecompressRsbs(MainMenu *this)

{
  bool bVar1;
  undefined4 uVar2;
  string *psVar3;
  uint *puVar4;
  uint uVar5;
  float local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar5 = 0;
  local_30 = FUN_03e9a9e8(DAT_06ae0608);
  local_28 = FUN_03e9aa38(DAT_06ae0610);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    local_34 = (float)TitleScreen::GetTargetRSBDecompressSize((TitleScreen *)this,psVar3);
    std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)&local_20,(uint *)&local_34);
    uVar5 = uVar5 + (int)local_34;
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_30);
  }
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar4 = (uint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    local_34 = (float)*puVar4 * (1.0 / (float)uVar5);
    std::vector<float,std::allocator<float>>::push_back
              ((vector<float,std::allocator<float>> *)(this + 0xe8),&local_34);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_30);
  }
  uVar2 = FUN_03e98080(local_20,local_18);
  *(undefined4 *)(this + 400) = uVar2;
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainMenu::DrawDecompressTips(Sexy::Graphics*) */

void __thiscall MainMenu::DrawDecompressTips(MainMenu *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *__s;
  wstring awStack_28 [8];
  string asStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[DECOMPRESS_TIPS_1]");
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  Sexy::Color::Color((Color *)aDStack_18,1);
  WriteWordInRect(param_1,asStack_20,this + 0x130,uVar2,aDStack_18,5,1);
  FUN_05476c50(asStack_20);
  DString::DString(aDStack_18,*(int *)(this + 0x100) + 1);
  __s = (char *)DString::c_str(aDStack_18);
  std::string::string(asStack_20,__s);
  Sexy::ToWString(asStack_20);
  std::string::~string(asStack_20);
  nop();
  DString::~DString(aDStack_18);
  TodStringTranslate(L"[DECOMPRESS_TIPS_2]");
  TodReplaceString((wstring *)aDStack_18,L"{NUMBER1}",awStack_28);
  FUN_05476c50(aDStack_18);
  TodReplaceNumberString((wstring *)asStack_20,L"{NUMBER2}",*(int *)(this + 400));
  FUN_054766c8(asStack_20,aDStack_18);
  FUN_05476c50(aDStack_18);
  iVar1 = GetLeftDecompressTime(this);
  TodReplaceNumberString((wstring *)asStack_20,L"{NUMBER3}",iVar1);
  FUN_054766c8(asStack_20,aDStack_18);
  FUN_05476c50(aDStack_18);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aDStack_18,1);
  WriteWordInRect(param_1,asStack_20,this + 0x150,uVar2,aDStack_18,5,1);
  Sexy::StrFormat(L"%d%%",aDStack_18,(ulong)(uint)(int)(*(float *)(this + 0x198) * 100.0));
  FUN_054766c8(this + 0x128,aDStack_18);
  FUN_05476c50(aDStack_18);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  Sexy::Color::Color((Color *)aDStack_18,1);
  WriteWordInRect(param_1,this + 0x128,this + 0x140,uVar2,aDStack_18,1,1);
  FUN_05476c50(asStack_20);
  FUN_05476c50(awStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

