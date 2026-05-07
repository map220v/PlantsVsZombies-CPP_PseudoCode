// Class: RedPackUI


/* RedPackUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void RedPackUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to RedPackUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall RedPackUI::ScrollTargetReached(RedPackUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* RedPackUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void RedPackUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to RedPackUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall RedPackUI::ScrollTargetInterrupted(RedPackUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* RedPackUI::onDialogCancel() */

void RedPackUI::onDialogCancel(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* RedPackUI::onCloseDialog() */

void RedPackUI::onCloseDialog(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* RedPackUI::SetContentsVisible(bool) */

void __thiscall RedPackUI::SetContentsVisible(RedPackUI *this,bool param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x1c8);
    uVar2 = FUN_041bc070(uVar4,*(undefined8 *)(this + 0x1d0));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_041bc07c(uVar4,uVar3);
    (**(code **)(*(long *)*puVar1 + 0x158))((long *)*puVar1,param_1);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* RedPackUI::RankSort(S2C_RedPack_Public const&, S2C_RedPack_Public const&) */

bool RedPackUI::RankSort(S2C_RedPack_Public *param_1,S2C_RedPack_Public *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)FUN_0547429c(param_1 + 8);
  iVar1 = atoi(pcVar3);
  pcVar3 = (char *)FUN_0547429c(param_2 + 8);
  iVar2 = atoi(pcVar3);
  return iVar2 <= iVar1;
}


/* RedPackUI::Update() */

void __thiscall RedPackUI::Update(RedPackUI *this)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  fVar3 = *(float *)(this + 0x188);
  fVar1 = (float)PVZ_T();
  if (fVar3 < fVar1) {
    uVar2 = PVZ_EOT();
    this[0x198] = (RedPackUI)0x0;
    *(undefined4 *)(this + 0x188) = uVar2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackUI::onRedPackPurchased(int) */

void __thiscall RedPackUI::onRedPackPurchased(RedPackUI *this,int param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar7 = (float)PVZ_T();
  this[0x198] = (RedPackUI)0x1;
  *(float *)(this + 0x188) = fVar7 + 1.0;
  TodStringTranslate(L"[REDPACK_PURCHASE_SUCCESS]");
  TodReplaceNumberString(awStack_18,L"{REDPACK_COUNT}",param_1);
  FUN_054766c8(this + 400,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  iVar3 = FUN_041bd038(0x50);
  iVar1 = *(int *)(this + 0xf4);
  iVar4 = FUN_041bd038(0xf);
  iVar5 = FUN_041bd038(0xa0);
  iVar6 = FUN_041bd038(10);
  lVar2 = ___stack_chk_guard;
  iVar5 = iVar5 + iVar6;
  if (param_1 == 1) {
    iVar5 = 0;
  }
  *(int *)(this + 0x19c) = iVar3 + iVar1 + iVar4 + iVar5;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RedPackUI::DoOpenRedPack(int) */

void __thiscall RedPackUI::DoOpenRedPack(RedPackUI *this,int param_1)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  RedPackOpenUI *this_02;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    PlayerInfo::SubtractRedPacket(this_01,param_1);
    PlayerInfo::AddRedPackOpenTotalCount(this_01,param_1);
    LawnApp::ShowRedPackOpenUI(gLawnApp,param_1);
    this_02 = (RedPackOpenUI *)LawnApp::getRedPackOpenUI(gLawnApp);
    RedPackOpenUI::SetPrizePool(this_02,param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackUI::RefreshGetRewardButton() */

void __thiscall RedPackUI::RefreshGetRewardButton(RedPackUI *this)

{
  char cVar1;
  ProfileMgr *this_00;
  long lVar2;
  long lVar3;
  ActivityConfig *this_01;
  undefined8 uVar4;
  PVZ2UIButton *pPVar5;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  PVZ2UIButton::ClearButton(*(PVZ2UIButton **)(this + 0x170));
  lVar3 = LawnApp::GetActivityConfig();
  if (lVar3 == 0) {
LAB_041bde54:
    if (*(uint *)(this + 0x110) < 0x3e9) {
      cVar1 = FUN_041bbebc(*(undefined1 *)(lVar2 + 0xf80));
      if (cVar1 == '\0') {
        pPVar5 = *(PVZ2UIButton **)(this + 0x170);
        FUN_05478178(auStack_10,L"[REDPACK_LEADERBOARD_GET]",auStack_18);
        uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
        goto LAB_041bde1c;
      }
    }
  }
  else {
    this_01 = (ActivityConfig *)LawnApp::GetActivityConfig();
    cVar1 = ActivityConfig::IsRedPackActivated(this_01);
    if (cVar1 == '\0') goto LAB_041bde54;
  }
  pPVar5 = *(PVZ2UIButton **)(this + 0x170);
  FUN_05478178(auStack_10,L"[REDPACK_LEADERBOARD_PREVIEW]",auStack_18);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
LAB_041bde1c:
  PVZ2UIButton::AddText(pPVar5,auStack_10,uVar4,0);
  FUN_05476c50(auStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackUI::onNetworkError(int) */

void RedPackUI::onNetworkError(int param_1)

{
  LawnApp *this;
  PVZ2UIDialog *pPVar1;
  long *plVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this = gLawnApp;
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
  FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05476c50(awStack_58);
  nop();
  if (pPVar1 != (PVZ2UIDialog *)0x0) {
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)(ulong)(uint)param_1,onCloseDialog);
    Sexy::Delegate0::Delegate0<RedPackUI,void(RedPackUI::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  plVar2 = *(long **)((ReceivedDataCallback *)(ulong)(uint)param_1 + 0x120);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x188))(plVar2,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall RedPackUI::DrawAll(RedPackUI *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  RedPacketRewardInfo *this_00;
  long lVar5;
  char *pcVar6;
  PrimeTypeface *pPVar7;
  undefined8 uVar8;
  LotteryResultProgressBar *this_02;
  undefined1 auStack_78 [8];
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  Insets aIStack_60 [16];
  Color aCStack_50 [16];
  Insets aIStack_40 [16];
  CachedUIResourcePtr<Sexy::Image> aCStack_30 [40];
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *this_01;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1e8] == (RedPackUI)0x0) {
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af11a8);
    Sexy::Graphics::DrawImage(param_2,pIVar4,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  else {
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0bf0);
    Sexy::Graphics::DrawImage(param_2,pIVar4,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  iVar1 = FUN_041bd038(0x302);
  iVar2 = FUN_041bd038(0x3c);
  Sexy::Insets::Insets
            ((Insets *)&local_70,(*(int *)(this + 0x50) - iVar1) / 2,iVar2,iVar1,
             *(int *)(this + 0x54) + iVar2 * -2);
  iVar1 = FUN_041bd038(10);
  iVar2 = FUN_041bd038(0x14);
  Sexy::Insets::Insets
            (aIStack_60,local_70 + iVar1,iVar1 + local_6c,local_68 - iVar2,local_64 - iVar2);
  if (*(int *)(this + 0x1e4) == 0) {
    Sexy::Insets::Insets((Insets *)aCStack_30,(Insets *)&local_70);
    this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1370;
  }
  else {
    if (*(int *)(this + 0x1e4) != 1) goto LAB_041beb00;
    Sexy::Insets::Insets((Insets *)aCStack_30,(Insets *)&local_70);
    this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1220;
  }
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->(this_01);
  Draw9SliceImage(param_2,aCStack_30,uVar8);
LAB_041beb00:
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  this_00 = (RedPacketRewardInfo *)LawnApp::GetRedPacketRewardInfo(gLawnApp);
  lVar5 = RedPacketRewardInfo::GetCurrentDisplayConfig(this_00);
  pcVar6 = (char *)FUN_0547429c(lVar5 + 8);
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr(aCStack_30,pcVar6);
  this_02 = *(LotteryResultProgressBar **)(this + 0x108);
  if (this_02 != (LotteryResultProgressBar *)0x0) {
    iVar1 = *(int *)(this + 0x50);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_02);
    iVar3 = FUN_041bd038(0x1e);
    Sexy::Graphics::DrawImage
              (param_2,(Image *)this_02,(iVar1 - iVar2) / 2,iVar3 + *(int *)(this + 0x4c));
  }
  if ((*(int *)(this + 0xf0) == 2) && (this[0x198] != (RedPackUI)0x0)) {
    pPVar7 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x19c));
    FUN_05477b24(auStack_78,this + 400);
    Sexy::Color::Color(aCStack_50,0,0x97,0x18);
    Sexy::PrimeTypeface::DrawString_Paragraph(pPVar7,param_2,aIStack_40,auStack_78,1,1,aCStack_50,0)
    ;
    FUN_05476c50(auStack_78);
  }
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr(aCStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackUI::DrawLeaderBoardState(Sexy::Graphics*) */

void __thiscall RedPackUI::DrawLeaderBoardState(RedPackUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x158));
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af11f8);
  Draw9SliceImage(param_1,aIStack_18,uVar4);
  pcVar5 = *(code **)(*(long *)this + 0x290);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_18,0);
  iVar2 = FUN_041bd038(0x19);
  iVar1 = *(int *)(this + 0x15c);
  TodStringTranslate(L"[REDPACK_ACTIVE_TIME]");
  (*pcVar5)(this,param_1,uVar4,aIStack_18,iVar1 - iVar2,auStack_20);
  FUN_05476c50(auStack_20);
  TodStringTranslate(L"[REDPACK_OPEN_TOTAL]");
  TodReplaceNumberString((wstring *)aIStack_18,L"{REDPACK_COUNT}",*(int *)(this + 0x150));
  FUN_05476c50(aIStack_18);
  pcVar5 = *(code **)(*(long *)this + 0x290);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_18,0);
  iVar1 = *(int *)(this + 0x15c);
  iVar2 = *(int *)(this + 0x164);
  iVar3 = FUN_041bd038(5);
  (*pcVar5)(this,param_1,uVar4,aIStack_18,iVar1 + iVar2 + iVar3,auStack_20);
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackUI::DrawMainState(Sexy::Graphics*) */

void __thiscall RedPackUI::DrawMainState(RedPackUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  Image *pIVar9;
  SalesProgressBar *pSVar10;
  PrimeTypeface *pPVar11;
  LotteryResultProgressBar *pLVar12;
  undefined8 uVar13;
  ulong uVar14;
  char *__s;
  Image *local_70;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  Insets aIStack_48 [16];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_041bd038(0x302);
  iVar2 = FUN_041bd038(0x3c);
  Sexy::Insets::Insets
            (aIStack_48,(*(int *)(this + 0x50) - iVar1) / 2,iVar2,iVar1,
             *(int *)(this + 0x54) + iVar2 * -2);
  if (*(int *)(this + 0x1e4) == 0) {
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af10e0);
    LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  }
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0e30);
  iVar3 = FUN_041bd038(10);
  iVar1 = *(int *)(this + 0xf4);
  iVar4 = FUN_041bd038(0x159);
  iVar5 = FUN_041bd038(0x14);
  iVar2 = *(int *)(this + 0xfc);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0e30);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
  Sexy::Graphics::DrawImage(param_1,pIVar9,iVar3 + iVar1,iVar4,iVar2 - iVar5,iVar6);
  iVar2 = FUN_041bd038(0x104);
  iVar1 = *(int *)(this + 0xf4);
  iVar3 = FUN_041bd038(0x140);
  iVar4 = FUN_041bd038(100);
  iVar5 = FUN_041bd038(0x8c);
  Sexy::Insets::Insets((Insets *)&local_38,iVar2 + iVar1,iVar3,iVar4,iVar5);
  TodStringTranslate(L"[REDPACK_NUM_DESC]");
  if (*(int *)(this + 0x1e4) == 1) {
    TodStringTranslate(L"[DUMPLING_NUM_DESC]");
    FUN_054766c8(auStack_60,aIStack_18);
    FUN_05476c50(aIStack_18);
  }
  pPVar11 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)&local_38);
  FUN_05477b24(auStack_50,auStack_60);
  Sexy::Color::Color((Color *)aIStack_18,0);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar11,param_1,(Insets *)&local_28,auStack_50,1,1,aIStack_18,0);
  FUN_05476c50(auStack_50);
  if (*(int *)(this + 0x1e4) == 0) {
    pSVar10 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0bc8);
  }
  else {
    pSVar10 = (SalesProgressBar *)0x0;
    if (*(int *)(this + 0x1e4) == 1) {
      pSVar10 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1108);
    }
  }
  iVar1 = FUN_041bd038(5);
  iVar1 = local_38 + local_30 + iVar1;
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar10);
  iVar2 = local_34 + (local_2c - iVar2) / 2;
  Sexy::Graphics::DrawImage(param_1,(Image *)pSVar10,iVar1,iVar2);
  iVar3 = FUN_041bd038(5);
  local_38 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)pSVar10);
  local_38 = iVar3 + iVar1 + local_38;
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar10);
  iVar5 = FUN_041bd038(0xf);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0e30);
  iVar6 = FUN_041bd038(10);
  iVar1 = *(int *)(this + 0xf4);
  iVar7 = FUN_041bd038(0x14);
  iVar3 = *(int *)(this + 0xfc);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0e30);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar10);
  Sexy::Graphics::DrawImage(param_1,pIVar9,iVar6 + iVar1,iVar4 + iVar2 + iVar5,iVar3 - iVar7,iVar8);
  if (*(int *)(this + 0x1e4) == 0) {
    __s = "mat_new_redpacket";
LAB_041bf364:
    std::string::string((string *)aIStack_18,__s);
    uVar14 = PlayerInfo::GetMaterialNum(this_01,(string *)aIStack_18);
    uVar14 = uVar14 & 0xffffffff;
    std::string::~string((string *)aIStack_18);
    nop();
  }
  else {
    uVar14 = 0;
    if (*(int *)(this + 0x1e4) == 1) {
      __s = "mat_new_dumpling";
      goto LAB_041bf364;
    }
  }
  Sexy::StrFormat(L"x%d",auStack_58,uVar14);
  pPVar11 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)&local_38);
  FUN_05477b24(auStack_50,auStack_58);
  Sexy::Color::Color((Color *)aIStack_18,0);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar11,param_1,(Insets *)&local_28,auStack_50,0,1,aIStack_18,0);
  FUN_05476c50(auStack_50);
  iVar3 = FUN_041bd038(0x280);
  iVar1 = *(int *)(this + 0xfc);
  iVar2 = *(int *)(this + 0xf4);
  iVar4 = FUN_041bd038(0x7f);
  iVar5 = FUN_041bd038(0xf);
  iVar6 = FUN_041bd038(0x1e);
  iVar7 = FUN_041bd038(0xdc);
  Sexy::Insets::Insets
            ((Insets *)&local_28,iVar2 + (iVar1 - iVar3) / 2,(iVar4 + iVar5) - iVar6,iVar3,iVar7);
  if (*(int *)(this + 0x1e4) == 0) {
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0dc8);
    Sexy::Graphics::DrawImage(param_1,pIVar9,local_28,local_24,local_20,local_1c);
  }
  else {
    if (*(int *)(this + 0x1e4) != 1) goto LAB_041bf22c;
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1088);
    Sexy::Graphics::DrawImage(param_1,pIVar9,local_28,local_24,local_20,local_1c);
    uVar13 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline);
    iVar2 = FUN_041bd038(0x8c);
    iVar1 = *(int *)(this + 0x50);
    TodStringTranslate(L"[DUMPLING_TITLE]");
    Sexy::Color::Color((Color *)aIStack_18,1);
    Sexy::PrimeTypeface::DrawString_Line
              ((PrimeTypeface *)0x0,(float)iVar2,(float)iVar1,uVar13,param_1,auStack_50,1,aIStack_18
               ,0);
    FUN_05476c50(auStack_50);
  }
  if (*(int *)(this + 0x1e4) == 0) {
    local_70 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0e98);
    iVar1 = *(int *)(this + 0x50);
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0e98);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    uVar13 = 0xf;
  }
  else {
    if (*(int *)(this + 0x1e4) != 1) goto LAB_041bf22c;
    local_70 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0d78);
    iVar1 = *(int *)(this + 0x50);
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0d78);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    uVar13 = 0xffffffe9;
  }
  iVar3 = FUN_041bd038(uVar13);
  Sexy::Graphics::DrawImage(param_1,local_70,(iVar1 - iVar2) / 2,iVar3 + *(int *)(this + 0x4c));
LAB_041bf22c:
  iVar2 = FUN_041bd038(5);
  iVar1 = *(int *)(this + 0xf4);
  iVar3 = FUN_041bd038(0x7f);
  iVar4 = FUN_041bd038(100);
  Sexy::Insets::Insets(aIStack_18,iVar2 + iVar1,iVar3,*(int *)(this + 0xfc),iVar4);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0ee8);
  LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af11d0);
  LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  FUN_05476c50(auStack_58);
  FUN_05476c50(auStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackUI::DrawBuyState(Sexy::Graphics*) */

void __thiscall RedPackUI::DrawBuyState(RedPackUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LotteryResultProgressBar *pLVar4;
  undefined8 uVar5;
  Image *pIVar6;
  CachedUIResourcePtr<Sexy::Image> *pCVar7;
  Image *local_40;
  int local_38;
  int local_30;
  Image *local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_041bd038(5);
  iVar3 = *(int *)(this + 0xf8);
  iVar2 = FUN_041bd038(8);
  Sexy::Insets::Insets
            ((Insets *)&local_18,*(int *)(this + 0xf4),iVar1 + iVar3,*(int *)(this + 0xfc),
             iVar2 + *(int *)(this + 0x100));
  if (*(int *)(this + 0x1e4) == 0) {
    local_40 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1398);
    local_30 = local_14;
    local_38 = local_18;
    iVar3 = FUN_041bd038(9);
    local_28._0_4_ = local_10;
    local_30 = local_30 - iVar3;
    iVar3 = FUN_041bd038(0xf);
    local_c = local_c + iVar3;
  }
  else {
    if (*(int *)(this + 0x1e4) != 1) goto LAB_041bf56c;
    local_40 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af15d8);
    local_30 = local_14;
    local_38 = local_18;
    iVar3 = FUN_041bd038(9);
    local_28._0_4_ = local_10;
    local_30 = local_30 - iVar3;
    iVar3 = FUN_041bd038(0xf);
    local_c = local_c + iVar3;
  }
  Sexy::Graphics::DrawImage(param_1,local_40,local_38,local_30,(int)local_28,local_c);
  if (*(int *)(this + 0x1e4) == 0) {
    local_28 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0e98);
    iVar3 = *(int *)(this + 0x50);
    pLVar4 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0e98);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
    uVar5 = 0xf;
  }
  else {
    if (*(int *)(this + 0x1e4) != 1) goto LAB_041bf56c;
    local_28 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0d78);
    iVar3 = *(int *)(this + 0x50);
    pLVar4 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0d78);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
    uVar5 = 0xffffffe9;
  }
  iVar2 = FUN_041bd038(uVar5);
  Sexy::Graphics::DrawImage(param_1,local_28,(iVar3 - iVar1) / 2,iVar2 + *(int *)(this + 0x4c));
  local_30 = local_18;
  if (*(int *)(this + 0x1e4) == 0) {
    pCVar7 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1158;
    pLVar4 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1158);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
    local_28._0_4_ = local_14;
    iVar3 = FUN_041bd038(10);
    local_28._0_4_ = (int)local_28 + iVar3;
  }
  else {
    if (*(int *)(this + 0x1e4) != 1) goto LAB_041bf56c;
    pLVar4 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1158);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
    local_28._0_4_ = local_14;
    iVar3 = FUN_041bd038(0x1c);
    local_28._0_4_ = (int)local_28 + iVar3;
    pCVar7 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0f98;
  }
  local_30 = local_30 + (local_10 - iVar1) / 2;
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar7);
  Sexy::Graphics::DrawImage(param_1,pIVar6,local_30,(int)local_28);
  if (*(int *)(this + 0x1e4) == 0) {
    local_30 = FUN_041bd038(0x1e);
    local_28._0_4_ = FUN_041bd038(0x2d);
    local_28._0_4_ = local_14 - (int)local_28;
    pCVar7 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1298;
  }
  else {
    if (*(int *)(this + 0x1e4) != 1) goto LAB_041bf56c;
    local_30 = FUN_041bd038(0x28);
    local_28._0_4_ = FUN_041bd038(0x3c);
    local_28._0_4_ = local_14 - (int)local_28;
    pCVar7 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0cc8;
  }
  local_30 = local_18 - local_30;
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar7);
  Sexy::Graphics::DrawImage(param_1,pIVar6,local_30,(int)local_28);
LAB_041bf56c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackUI::Draw(Sexy::Graphics*) */

void __thiscall RedPackUI::Draw(RedPackUI *this,Graphics *param_1)

{
  int iVar1;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  iVar1 = *(int *)(this + 0xf0);
  if (iVar1 == 1) {
    DrawLeaderBoardState(this,param_1);
  }
  else if (iVar1 == 2) {
    DrawBuyState(this,param_1);
  }
  else if (iVar1 == 0) {
    DrawMainState(this,param_1);
  }
  nop();
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RedPackUI::~RedPackUI() */

void __thiscall RedPackUI::~RedPackUI(RedPackUI *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  PACommand *this_00;
  undefined8 uVar4;
  
  *(undefined ***)this = &PTR_GetClass_06800870;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06800ba8;
  *(undefined ***)(this + 0xe0) = &PTR__RedPackUI_06800bf0;
  uVar3 = 0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  uVar4 = *(undefined8 *)(this + 0x138);
  uVar1 = FUN_041bbec0(uVar4,*(undefined8 *)(this + 0x140));
  if (uVar1 != 0) {
    do {
      puVar2 = (undefined8 *)FUN_041bbecc(uVar4,uVar3);
      this_00 = (PACommand *)*puVar2;
      if (this_00 != (PACommand *)0x0) {
        Sexy::PACommand::~PACommand(this_00);
        AK::FreeHook(this_00);
        puVar2 = (undefined8 *)FUN_041bbecc(*(undefined8 *)(this + 0x138),uVar3);
        *puVar2 = 0;
        uVar4 = *(undefined8 *)(this + 0x138);
        uVar1 = FUN_041bbec0(uVar4,*(undefined8 *)(this + 0x140));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  s_pWidgetHandler = 0;
  if (UIBuyRedPacket::s_pBuyWidgetHandler != (long *)0x0) {
    (**(code **)(*UIBuyRedPacket::s_pBuyWidgetHandler + 0x348))();
  }
  std::vector<RedPackDisplayContent*,std::allocator<RedPackDisplayContent*>>::~vector
            ((vector<RedPackDisplayContent*,std::allocator<RedPackDisplayContent*>> *)(this + 0x1c8)
            );
  std::vector<RedPackDisplayData,std::allocator<RedPackDisplayData>>::~vector
            ((vector<RedPackDisplayData,std::allocator<RedPackDisplayData>> *)(this + 0x1b0));
  FUN_05476c50(this + 400);
  std::vector<RedPackLeaderBoardInfo*,std::allocator<RedPackLeaderBoardInfo*>>::~vector
            ((vector<RedPackLeaderBoardInfo*,std::allocator<RedPackLeaderBoardInfo*>> *)
             (this + 0x138));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to RedPackUI::~RedPackUI() */

void __thiscall RedPackUI::~RedPackUI(RedPackUI *this)

{
  ~RedPackUI(this + -0xe0);
  return;
}


/* RedPackUI::~RedPackUI() */

void __thiscall RedPackUI::~RedPackUI(RedPackUI *this)

{
  ~RedPackUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RedPackUI::~RedPackUI() */

void __thiscall RedPackUI::~RedPackUI(RedPackUI *this)

{
  ~RedPackUI(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackUI::SetState(RedPackUIState) */

void __thiscall RedPackUI::SetState(RedPackUI *this,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ProfileMgr *this_00;
  long *plVar7;
  PVZ2UIScrollingWidget *this_01;
  RedPackLeaderBoardScrollPanel *this_02;
  undefined8 uVar8;
  long lVar9;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  *(int *)(this + 0xf0) = param_2;
  if (param_2 == 1) {
    uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1010);
    *(undefined8 *)(this + 0x108) = uVar8;
    plVar7 = *(long **)(this + 0x120);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x158))(plVar7,0);
    }
    (**(code **)(**(long **)(this + 0x168) + 0x158))(*(long **)(this + 0x168),1);
    plVar7 = *(long **)(this + 0x168);
    iVar3 = FUN_041bd038(0x96);
    iVar4 = FUN_041bd038(100);
    iVar1 = *(int *)(this + 0x50);
    uVar2 = FUN_041bd038(0x1cc);
    (**(code **)(*plVar7 + 0x1a8))(plVar7,(iVar1 - iVar3) / 2 - iVar4,uVar2);
    RefreshGetRewardButton(this);
    (**(code **)(**(long **)(this + 0x170) + 0x158))(*(long **)(this + 0x170),1);
    (**(code **)(**(long **)(this + 0x118) + 0x158))(*(long **)(this + 0x118),0);
    (**(code **)(**(long **)(this + 0x128) + 0x158))(*(long **)(this + 0x128),0);
    (**(code **)(**(long **)(this + 0x130) + 0x158))(*(long **)(this + 0x130),0);
    plVar7 = *(long **)(this + 0x180);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x158))(plVar7,0);
    }
    if (*(long *)(this + 0x178) != 0) {
      (**(code **)(*(long *)this + 0x68))(this);
      (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x178));
      *(undefined8 *)(this + 0x178) = 0;
    }
    iVar4 = FUN_041bd038(10);
    iVar1 = *(int *)(this + 0x158);
    iVar5 = FUN_041bd038(5);
    iVar3 = *(int *)(this + 0x15c);
    iVar6 = FUN_041bd038(0x14);
    Sexy::Insets::Insets
              ((Insets *)&local_28,iVar4 + iVar1,iVar5 + iVar3,*(int *)(this + 0x160) - iVar6,
               *(int *)(this + 0x164) - iVar4);
    this_01 = ::operator_new(0x248);
    PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0xe0));
    lVar9 = *(long *)this_01;
    *(PVZ2UIScrollingWidget **)(this + 0x178) = this_01;
    (**(code **)(lVar9 + 0x1a0))(this_01,(Insets *)&local_28);
    Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x178),2);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x178));
    Sexy::Insets::Insets(aIStack_18,local_28,local_24,local_20,local_1c);
    this_02 = ::operator_new(0xf0);
    RedPackLeaderBoardScrollPanel::RedPackLeaderBoardScrollPanel
              (this_02,(TRect *)aIStack_18,(vector *)(this + 0x138));
    (**(code **)(**(long **)(this + 0x178) + 0x60))(*(long **)(this + 0x178),this_02);
  }
  else if (param_2 == 2) {
    if (*(int *)(this + 0x1e4) == 0) {
      uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0c48);
      *(undefined8 *)(this + 0x108) = uVar8;
    }
    else if (*(int *)(this + 0x1e4) == 1) {
      uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1060);
      *(undefined8 *)(this + 0x108) = uVar8;
    }
    plVar7 = *(long **)(this + 0x120);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x158))(plVar7,0);
    }
    (**(code **)(**(long **)(this + 0x168) + 0x158))(*(long **)(this + 0x168),0);
    plVar7 = *(long **)(this + 0x168);
    iVar1 = FUN_041bd038(0x96);
    uVar2 = FUN_041bd038(0x1cc);
    (**(code **)(*plVar7 + 0x1a8))(plVar7,(*(int *)(this + 0x50) - iVar1) / 2,uVar2);
    (**(code **)(**(long **)(this + 0x170) + 0x158))(*(long **)(this + 0x170),0);
    (**(code **)(**(long **)(this + 0x118) + 0x158))(*(long **)(this + 0x118),0);
    (**(code **)(**(long **)(this + 0x128) + 0x158))(*(long **)(this + 0x128),0);
    (**(code **)(**(long **)(this + 0x130) + 0x158))(*(long **)(this + 0x130),0);
    if (UIBuyRedPacket::s_pBuyWidgetHandler != (long *)0x0) {
      (**(code **)(*UIBuyRedPacket::s_pBuyWidgetHandler + 0x158))
                (UIBuyRedPacket::s_pBuyWidgetHandler,1);
    }
    SetContentsVisible(this,false);
  }
  else if (param_2 == 0) {
    if (*(long *)(this + 0x178) != 0) {
      (**(code **)(*(long *)this + 0x68))(this);
      (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x178));
      *(undefined8 *)(this + 0x178) = 0;
    }
    if (*(int *)(this + 0x1e4) == 0) {
      uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0c48);
      *(undefined8 *)(this + 0x108) = uVar8;
    }
    else if (*(int *)(this + 0x1e4) == 1) {
      uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1060);
      *(undefined8 *)(this + 0x108) = uVar8;
    }
    plVar7 = *(long **)(this + 0x120);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x158))(plVar7,1);
    }
    (**(code **)(**(long **)(this + 0x168) + 0x158))(*(long **)(this + 0x168),0);
    (**(code **)(**(long **)(this + 0x128) + 0x158))(*(long **)(this + 0x128),1);
    (**(code **)(**(long **)(this + 0x170) + 0x158))(*(long **)(this + 0x170),0);
    (**(code **)(**(long **)(this + 0x118) + 0x158))(*(long **)(this + 0x118),1);
    (**(code **)(**(long **)(this + 0x130) + 0x158))(*(long **)(this + 0x130),1);
    plVar7 = *(long **)(this + 0x180);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x158))(plVar7,0);
    }
    if (UIBuyRedPacket::s_pBuyWidgetHandler != (long *)0x0) {
      (**(code **)(*UIBuyRedPacket::s_pBuyWidgetHandler + 0x158))
                (UIBuyRedPacket::s_pBuyWidgetHandler,0);
    }
    SetContentsVisible(this,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RedPackUI::onBuyRedPack() */

void __thiscall RedPackUI::onBuyRedPack(RedPackUI *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  SetState(this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackUI::GetRankRewardNameByConfigNameAndGetReward(std::string&, int) */

void RedPackUI::GetRankRewardNameByConfigNameAndGetReward(string *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  ProfileMgr *this;
  PlayerInfo *this_00;
  Magento *this_01;
  Magento *extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar8;
  long lVar9;
  ulong uVar10;
  PlantAccessoryMgr *pPVar11;
  wchar_t *pwVar12;
  Magento *extraout_x0_00;
  string *psVar13;
  Magento *extraout_x0_01;
  long extraout_x0_02;
  long extraout_x0_03;
  string *extraout_x1;
  int in_w2;
  ulong uVar14;
  string asStack_38 [8];
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  Sexy aSStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178();
  nop();
  Set8BytesTo0(asStack_38);
  FUN_05475ffc(asStack_10,param_2,0,6);
  bVar1 = std::operator==(asStack_10,"plant_");
  std::string::~string(asStack_10);
  FUN_05475ffc(asStack_10,param_2,0,0xb);
  bVar2 = std::operator==(asStack_10,"plantpiece_");
  std::string::~string(asStack_10);
  FUN_05475ffc(asStack_10,param_2,0,7);
  bVar3 = std::operator==(asStack_10,"avatar_");
  uVar7 = (uint)bVar3;
  std::string::~string(asStack_10);
  FUN_05475ffc(asStack_10,param_2,0,0xc);
  bVar3 = std::operator==(asStack_10,"avatarpiece_");
  std::string::~string(asStack_10);
  FUN_05475ffc(asStack_10,param_2,0,10);
  bVar4 = std::operator==(asStack_10,"accessory_");
  std::string::~string(asStack_10);
  FUN_05475ffc(asStack_10,param_2,0,0xf);
  bVar5 = std::operator==(asStack_10,"accessorypiece_");
  std::string::~string(asStack_10);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (bVar1) {
    FUN_05475ffc(asStack_18,param_2,6,0xffffffffffffffff);
    psVar13 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar13);
    cVar6 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_10);
    if (cVar6 != '\0') {
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      thunk_FUN_05475e00(asStack_38,lVar9 + 8);
      cVar6 = PlayerInfo::GetIsPlantUnlocked(this_00,asStack_18);
      if (cVar6 == '\0') {
        PlayerInfo::UnlockPlant(this_00,asStack_18,false);
      }
      else {
        PlayerInfo::AddPlantPieceCount((string *)this_00,(int)asStack_18,true);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    std::string::~string(asStack_18);
    this_01 = extraout_x0;
LAB_041c1f38:
    Magento::GetPlantLevelUp(this_01);
    uVar10 = 0;
    do {
      uVar14 = uVar10;
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      uVar10 = FUN_041bc0b8(*(undefined8 *)(lVar9 + 0x60),*(undefined8 *)(lVar9 + 0x68));
      if (uVar10 <= uVar14) goto LAB_041c1f9c;
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_041bc0c4(*(undefined8 *)(lVar9 + 0x60),uVar14);
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
      cVar6 = std::operator==((string *)(lVar9 + 0x80),asStack_38);
      uVar10 = uVar14 + 1;
    } while (cVar6 == '\0');
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_041bc0c4(*(undefined8 *)(lVar9 + 0x60),uVar14);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
    MagentoProductProps::GetLocalizedShortDescription();
    Sexy::UTF8StringToWString(aSStack_20,extraout_x1);
    TodStringTranslate((wstring *)asStack_18);
    FUN_054766c8();
    FUN_05476c50(asStack_10);
    FUN_05476c50((wstring *)asStack_18);
    std::string::~string((string *)aSStack_20);
LAB_041c1f9c:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    if (bVar2) goto LAB_041c2054;
    if (!bVar3) {
LAB_041c1fac:
      if (!bVar5) goto LAB_041c1fb0;
      goto LAB_041c2054;
    }
    pwVar12 = L"[AVATAR_PIECE]";
  }
  else {
    if (bVar2) {
      FUN_05475ffc(asStack_30,param_2,0xb,0xffffffffffffffff);
      bVar1 = std::operator!=(asStack_30,"");
      if (bVar1) {
        std::string::string((string *)aRStack_28,"plant_piece_");
        nop();
        FUN_05475d88(aSStack_20,asStack_30);
        FUN_031dcc6c(asStack_18,(string *)aRStack_28,aSStack_20);
        psVar13 = (string *)
                  Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
        ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar13);
        cVar6 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_10);
        if (cVar6 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
          nop();
          thunk_FUN_05475e00(asStack_38,extraout_x0_02 + 0x98);
        }
        PlayerInfo::AddPlantPieceCount((string *)this_00,(int)asStack_30,SUB41(in_w2,0));
        goto LAB_041c2274;
      }
LAB_041c212c:
      std::string::~string(asStack_30);
      this_01 = extraout_x0_00;
      goto LAB_041c1f38;
    }
    if (bVar3) {
      FUN_05475ffc(asStack_30,param_2,0xc,0xffffffffffffffff);
      bVar1 = std::operator!=(asStack_30,"");
      if (!bVar1) goto LAB_041c212c;
      std::string::string((string *)aRStack_28,"avatar_piece_");
      nop();
      FUN_05475d88(aSStack_20,asStack_30);
      FUN_031dcc6c(asStack_18,(string *)aRStack_28,aSStack_20);
      psVar13 = (string *)
                Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar13);
      cVar6 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_10);
      if (cVar6 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
        nop();
        thunk_FUN_05475e00(asStack_38,extraout_x0_03 + 0x98);
      }
      PlayerInfo::AddAvatarPiecesCount(this_00,asStack_30,0,in_w2,1);
LAB_041c2274:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      std::string::~string(asStack_18);
      std::string::~string((string *)aSStack_20);
      std::string::~string((string *)aRStack_28);
      std::string::~string(asStack_30);
      this_01 = extraout_x0_01;
      goto LAB_041c1f38;
    }
    if (bVar4) {
      FUN_05475ffc(asStack_18,param_2,10,0xffffffffffffffff);
      pPVar11 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
      PlantAccessoryMgr::GetAccessoryDisplayName(pPVar11,asStack_18);
      thunk_FUN_05477b9c();
      FUN_05476c50(asStack_10);
      Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
      cVar6 = PlantAccessoryMgr::CanExchangeAccessory();
      if (cVar6 != '\0') {
        FUN_05475d88(asStack_10,asStack_18);
        PlayerInfo::AddPlantAccessoryInfos(this_00,asStack_10,0,1);
        std::string::~string(asStack_10);
      }
      std::string::~string(asStack_18);
      this_01 = (Magento *)(ulong)uVar7;
      if (uVar7 != 0) goto LAB_041c1f38;
      goto LAB_041c1fac;
    }
    if (!bVar5) {
      if (uVar7 == 0) goto LAB_041c1fb0;
LAB_041c1ee4:
      this_01 = (Magento *)(ulong)uVar7;
      goto LAB_041c1f38;
    }
    FUN_05475ffc(asStack_18,param_2,0xf,0xffffffffffffffff);
    pPVar11 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
    PlantAccessoryMgr::GetAccessoryDisplayName(pPVar11,asStack_18);
    thunk_FUN_05477b9c();
    FUN_05476c50(asStack_10);
    PlayerInfo::AddAccessoryPieceCount(this_00,asStack_18,in_w2,true);
    std::string::~string(asStack_18);
    if (uVar7 != 0) goto LAB_041c1ee4;
LAB_041c2054:
    pwVar12 = L"[PIECE]";
  }
  TodStringTranslate(pwVar12);
  thunk_FUN_05477668();
  FUN_05476c50(asStack_10);
LAB_041c1fb0:
  std::string::~string(asStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackUI::onRedPackLeaderBoardReward() */

void __thiscall RedPackUI::onRedPackLeaderBoardReward(RedPackUI *this)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  RedPacketRewardInfo *this_03;
  long lVar3;
  wchar_t *pwVar4;
  long lVar5;
  ulong uVar6;
  PVZ2UIDialog *this_04;
  PrimeTypeface *pPVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  wstring awStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  this_03 = (RedPacketRewardInfo *)LawnApp::GetRedPacketRewardInfo(gLawnApp);
  iVar1 = FUN_041bbeb4(*(undefined4 *)(this_02 + 0xf78));
  lVar3 = RedPacketRewardInfo::GetRankRewardInfo(this_03,iVar1);
  if (lVar3 != 0) {
    TodStringTranslate(L"[REDPACK_LEADERBOARD_PRIZE_GOT]");
    FUN_05478178(auStack_60,&DAT_0571ed80,awStack_50);
    nop();
    uVar8 = 0;
    while( true ) {
      uVar9 = *(undefined8 *)(lVar3 + 8);
      uVar6 = FUN_041bc0a4(uVar9,*(undefined8 *)(lVar3 + 0x10));
      this_00 = gLawnApp;
      if (uVar6 <= uVar8) break;
      pwVar4 = (wchar_t *)FUN_054766ec(auStack_60);
      iVar1 = FUN_041bc0b0(uVar9,uVar8);
      GetRankRewardNameByConfigNameAndGetReward((string *)this,iVar1);
      uVar9 = FUN_054766ec(auStack_58);
      lVar5 = FUN_041bc0b0(*(undefined8 *)(lVar3 + 8),uVar8);
      Sexy::StrFormat(pwVar4,awStack_50,uVar9,(ulong)*(uint *)(lVar5 + 8));
      thunk_FUN_05477668(awStack_68,awStack_50);
      FUN_05476c50(awStack_50);
      FUN_05476c50(auStack_58);
      FUN_05477888(awStack_68,&DAT_0570f658);
      uVar8 = uVar8 + 1;
    }
    iVar1 = FUN_041bd038(0x1c2);
    iVar2 = FUN_041bd038(0xfa);
    this_04 = (PVZ2UIDialog *)
              LawnApp::ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
    FUN_05478178(awStack_50,L"[REDPACK_LEADERBOARD_PRIZE_GOT_TITLE]",auStack_58);
    PVZ2UIDialog::SetHeaderLabel(this_04,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    PVZ2UIDialog::SetFooterLabel(this_04,awStack_68);
    pPVar7 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
    PVZ2UIDialog::SetHeaderFont(this_04,pPVar7,(Color *)&PrimeText_Game::Color_Generic_Title);
    pPVar7 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
    Sexy::Color::Color((Color *)awStack_50,1);
    PVZ2UIDialog::SetFooterFont(this_04,pPVar7,(Color *)awStack_50);
    FUN_05478178(auStack_58,L"[BUTTON_OK]",auStack_70);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onDialogCancel);
    Sexy::Delegate0::Delegate0<RedPackUI,void(RedPackUI::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(this_04,auStack_58,aDStack_38,0);
    FUN_05476c50(auStack_58);
    nop();
    PlayerInfo::SetIsRedPackRankRewardGet(this_02,true);
    RefreshGetRewardButton(this);
    FUN_05476c50(auStack_60);
    FUN_05476c50(awStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackUI::SetupRewardDisplay() */

void __thiscall RedPackUI::SetupRewardDisplay(RedPackUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  LotteryResultProgressBar *pLVar12;
  ulong uVar13;
  RedPackDisplayData *pRVar14;
  RedPackDisplayContent *this_00;
  SalesProgressBar *this_01;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  code *pcVar18;
  RedPackDisplayContent *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_041bd038(10);
  iVar1 = *(int *)(this + 0xf4);
  iVar2 = *(int *)(this + 0xfc);
  lVar11 = FUN_041bc05c(*(undefined8 *)(this + 0x1b0),*(undefined8 *)(this + 0x1b8));
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0c70);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  uVar16 = *(undefined8 *)(this + 0x1b0);
  uVar13 = FUN_041bc05c(uVar16,*(undefined8 *)(this + 0x1b8));
  uVar15 = uVar13 - 1;
  iVar5 = FUN_041bd038(0x7f);
  iVar6 = FUN_041bd038(0xf);
  iVar7 = FUN_041bd038(0x3c);
  uVar17 = 0;
  while( true ) {
    if (uVar13 <= uVar17) break;
    pRVar14 = (RedPackDisplayData *)FUN_041bc068(uVar16,uVar17);
    this_00 = ::operator_new(0xe0);
    RedPackDisplayContent::RedPackDisplayContent(this_00,pRVar14);
    pcVar18 = *(code **)(*(long *)this_00 + 0x198);
    local_10 = this_00;
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0c70);
    iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0c70);
    uVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0c70);
    uVar10 = SalesProgressBar::GetCurrentLevel(this_01);
    (*pcVar18)(this_00,(int)((float)iVar1 +
                             ((float)(ulong)((long)iVar2 - iVar4 * lVar11) -
                             (float)iVar3 * (float)uVar15) * 0.5 +
                            (float)(int)uVar17 * ((float)iVar8 + (float)iVar3)),
               iVar5 + iVar6 + iVar7,uVar9,uVar10);
    (**(code **)(*(long *)this + 0x60))(this,local_10);
    std::vector<RedPackDisplayContent*,std::allocator<RedPackDisplayContent*>>::push_back
              ((vector<RedPackDisplayContent*,std::allocator<RedPackDisplayContent*>> *)
               (this + 0x1c8),&local_10);
    uVar16 = *(undefined8 *)(this + 0x1b0);
    uVar13 = FUN_041bc05c(uVar16,*(undefined8 *)(this + 0x1b8));
    uVar17 = uVar17 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackUI::InitView() */

void __thiscall RedPackUI::InitView(RedPackUI *this)

{
  ButtonListener *pBVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ProfileMgr *this_00;
  PVZ2UIButton *pPVar12;
  LotteryResultProgressBar *pLVar13;
  SalesProgressBar *pSVar14;
  undefined8 uVar15;
  TGALogMgr *pTVar16;
  long lVar17;
  long *plVar18;
  code *pcVar19;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  int local_a8 [2];
  int local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  int local_80;
  TGANFSLinkageData aTStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  pBVar1 = (ButtonListener *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(gLawnApp + 0x71c),*(undefined4 *)(gLawnApp + 0x720),
             *(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728));
  iVar2 = FUN_041bd038(700);
  iVar3 = FUN_041bd038(0x5a);
  iVar4 = FUN_041bd038(400);
  Sexy::Insets::Insets((Insets *)&local_40,(*(int *)(this + 0x50) - iVar2) / 2,iVar3,iVar2,iVar4);
  *(undefined8 *)(this + 0xf4) = local_40;
  *(undefined8 *)(this + 0xfc) = uStack_38;
  iVar2 = FUN_041bd038(700);
  iVar3 = FUN_041bd038(0x8c);
  iVar4 = FUN_041bd038(0x15e);
  Sexy::Insets::Insets((Insets *)&local_40,(*(int *)(this + 0x50) - iVar2) / 2,iVar3,iVar2,iVar4);
  *(undefined8 *)(this + 0x158) = local_40;
  *(undefined8 *)(this + 0x160) = uStack_38;
  FUN_05478178(aTStack_78,&DAT_056f11a8,(Insets *)&local_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,100,pBVar1,(wstring *)aTStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar12;
  FUN_05476c50(aTStack_78);
  nop();
  plVar18 = *(long **)(this + 0xe8);
  pcVar19 = *(code **)(*plVar18 + 0x198);
  iVar3 = FUN_041bd038(0x302);
  iVar4 = FUN_041bd038(0x1e);
  iVar2 = *(int *)(this + 0x50);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1420);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  iVar6 = FUN_041bd038(0x28);
  iVar7 = FUN_041bd038(0x3c);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1420);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar14);
  iVar9 = FUN_041bd038(0x32);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1420);
  uVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1420);
  uVar11 = SalesProgressBar::GetCurrentLevel(pSVar14);
  (*pcVar19)(plVar18,(((iVar3 + iVar2) / 2 - iVar4) - iVar5) + iVar6,(iVar7 - iVar8) + iVar9,uVar10,
             uVar11);
  pPVar12 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aTStack_78,&DAT_06af1420,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06af1500,1);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)aTStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  iVar2 = FUN_041bd038(0x302);
  iVar3 = FUN_041bd038(0x3c);
  Sexy::Insets::Insets
            ((Insets *)local_a8,(*(int *)(this + 0x50) - iVar2) / 2,iVar3,iVar2,
             *(int *)(this + 0x54) + iVar3 * -2);
  iVar3 = FUN_041bd038(0x96);
  iVar4 = FUN_041bd038(100);
  FUN_05478178(aTStack_78,&DAT_056f11a8,(Insets *)&local_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,0x67,pBVar1,(wstring *)aTStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x128) = pPVar12;
  FUN_05476c50(aTStack_78);
  nop();
  plVar18 = *(long **)(this + 0x128);
  iVar5 = FUN_041bd038(0x168);
  iVar2 = *(int *)(this + 0xf8);
  uVar10 = FUN_041bd038(0x96);
  uVar11 = FUN_041bd038(0x3c);
  (**(code **)(*plVar18 + 0x198))
            (plVar18,local_a8[0] + ((local_a0 + iVar3 * -2) - iVar4) / 2,iVar5 + iVar2,uVar10,uVar11
            );
  pPVar12 = *(PVZ2UIButton **)(this + 0x128);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aTStack_78,&DAT_06af13c0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06af0f70,3);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)aTStack_78,(PVZ2UIImage *)&local_40);
  FUN_05478178(auStack_b0,L"[REDPACK_OPEN]",(Insets *)&local_40);
  nop();
  if (*(int *)(this + 0x1e4) == 1) {
    FUN_054772c4(auStack_b0,L"[DUMPLING_OPEN]");
  }
  pPVar12 = *(PVZ2UIButton **)(this + 0x128);
  uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  PVZ2UIButton::AddText(pPVar12,auStack_b0,uVar15,0);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x128));
  lVar17 = *(long *)(this + 0x128);
  iVar2 = *(int *)(lVar17 + 0x50);
  iVar3 = *(int *)(lVar17 + 0x48);
  iVar4 = FUN_041bd038(100);
  uVar10 = *(undefined4 *)(lVar17 + 0x4c);
  uVar11 = *(undefined4 *)(lVar17 + 0x54);
  FUN_05478178(aTStack_78,&DAT_056f11a8,(Insets *)&local_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,0x65,pBVar1,(wstring *)aTStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x118) = pPVar12;
  FUN_05476c50(aTStack_78);
  nop();
  (**(code **)(**(long **)(this + 0x118) + 0x198))
            (*(long **)(this + 0x118),iVar2 + iVar3 + iVar4,uVar10,iVar2,uVar11);
  pPVar12 = *(PVZ2UIButton **)(this + 0x118);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aTStack_78,&DAT_06af1180,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06af16d0,3);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)aTStack_78,(PVZ2UIImage *)&local_40);
  pPVar12 = *(PVZ2UIButton **)(this + 0x118);
  FUN_05478178((Insets *)&local_40,L"[REDPACK_BUY]",aTStack_78);
  uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  PVZ2UIButton::AddText(pPVar12,(Insets *)&local_40,uVar15,0);
  FUN_05476c50((Insets *)&local_40);
  nop();
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x118));
  FUN_05478178(aTStack_78,&DAT_056f11a8,(Insets *)&local_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,0x68,pBVar1,(wstring *)aTStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x168) = pPVar12;
  FUN_05476c50(aTStack_78);
  nop();
  plVar18 = *(long **)(this + 0x168);
  iVar3 = FUN_041bd038(0x96);
  iVar4 = FUN_041bd038(100);
  iVar2 = *(int *)(this + 0x50);
  uVar10 = FUN_041bd038(0x1cc);
  uVar11 = FUN_041bd038(0x3c);
  (**(code **)(*plVar18 + 0x198))(plVar18,(iVar2 - iVar3) / 2 - iVar4,uVar10,iVar3,uVar11);
  pPVar12 = *(PVZ2UIButton **)(this + 0x168);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aTStack_78,&DAT_06af13c0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06af0f70,3);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)aTStack_78,(PVZ2UIImage *)&local_40);
  pPVar12 = *(PVZ2UIButton **)(this + 0x168);
  FUN_05478178((Insets *)&local_40,L"[REDPACK_LEADERBOARD_BACK]",aTStack_78);
  uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  PVZ2UIButton::AddText(pPVar12,(Insets *)&local_40,uVar15,0);
  FUN_05476c50((Insets *)&local_40);
  nop();
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x168));
  FUN_05478178(aTStack_78,&DAT_056f11a8,(Insets *)&local_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,0x69,pBVar1,(wstring *)aTStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x170) = pPVar12;
  FUN_05476c50(aTStack_78);
  nop();
  plVar18 = *(long **)(this + 0x170);
  iVar3 = FUN_041bd038(0x96);
  iVar4 = FUN_041bd038(100);
  iVar2 = *(int *)(this + 0x50);
  uVar10 = FUN_041bd038(0x1cc);
  uVar11 = FUN_041bd038(0x2d);
  (**(code **)(*plVar18 + 0x198))(plVar18,iVar4 + (iVar2 - iVar3) / 2,uVar10,iVar3,uVar11);
  pPVar12 = *(PVZ2UIButton **)(this + 0x170);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aTStack_78,&DAT_06af1270,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06af0d18,3);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)aTStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x170));
  SetupRewardDisplay(this);
  plVar18 = (long *)UIBuyRedPacket::create(1,*(undefined4 *)(this + 0x1e4));
  iVar3 = FUN_041bd038(5);
  iVar2 = *(int *)(this + 0xf8);
  iVar4 = FUN_041bd038(8);
  Sexy::Insets::Insets
            ((Insets *)&local_98,0,iVar3 + iVar2,*(int *)(this + 0x50),
             *(int *)(this + 0x100) - iVar4);
  (**(code **)(*plVar18 + 0x330))(plVar18,local_98,local_94,local_90,local_8c);
  (**(code **)(*plVar18 + 0x158))(plVar18,0);
  iVar4 = FUN_041bd038(0x280);
  iVar2 = *(int *)(this + 0xfc);
  iVar3 = *(int *)(this + 0xf4);
  iVar5 = FUN_041bd038(0x7f);
  iVar6 = FUN_041bd038(0xf);
  iVar7 = FUN_041bd038(0x1e);
  iVar8 = FUN_041bd038(0xdc);
  Sexy::Insets::Insets
            ((Insets *)&local_88,iVar3 + (iVar2 - iVar4) / 2,(iVar5 + iVar6) - iVar7,iVar4,iVar8);
  iVar2 = FUN_041bd038(100);
  iVar3 = FUN_041bd038(0x14);
  iVar4 = FUN_041bd038(0x19);
  FUN_05478178(aTStack_78,&DAT_056f11a8,auStack_b8);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,0x6a,pBVar1,(wstring *)aTStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x130) = pPVar12;
  FUN_05476c50(aTStack_78);
  nop();
  (**(code **)(**(long **)(this + 0x130) + 0x198))
            (*(long **)(this + 0x130),((local_88 + local_80) - iVar2) + iVar3,local_84 + iVar4,iVar2
             ,iVar2);
  pPVar12 = *(PVZ2UIButton **)(this + 0x130);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aTStack_78,&DAT_06af15b0,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06af15b0,1);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)aTStack_78,(PVZ2UIImage *)&local_40);
  pcVar19 = *(code **)(*(long *)this + 0x60);
  (*pcVar19)(this,*(undefined8 *)(this + 0x130));
  SetState(this,0);
  TGANFSLinkageData::TGANFSLinkageData(aTStack_78);
  std::string::append((string *)aTStack_78,"1",(size_t)pcVar19);
  pTVar16 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAArtifactPresentData::TGAArtifactPresentData
            ((TGAArtifactPresentData *)&local_40,(TGAArtifactPresentData *)aTStack_78);
  TGALogMgr::LogOneYuanRedPacket(pTVar16,(Insets *)&local_40);
  TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)&local_40);
  TGANFSLinkageData::~TGANFSLinkageData(aTStack_78);
  FUN_05476c50(auStack_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackUI::SyncActivityData(NetworkRedPackDisplayInfo const&) */

void __thiscall RedPackUI::SyncActivityData(RedPackUI *this,NetworkRedPackDisplayInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(param_1 + 8);
    uVar4 = FUN_041bc02c(uVar6,*(undefined8 *)(param_1 + 0x10));
    if (uVar4 <= uVar5) break;
    puVar3 = (undefined4 *)FUN_041bc054(uVar6,uVar5);
    uVar1 = *puVar3;
    uVar2 = puVar3[1];
    Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_10);
    local_10 = uVar2;
    local_c = uVar1;
    std::vector<RedPackDisplayData,std::allocator<RedPackDisplayData>>::push_back
              ((vector<RedPackDisplayData,std::allocator<RedPackDisplayData>> *)(this + 0x1b0),
               (RedPackDisplayData *)&local_10);
    uVar5 = uVar5 + 1;
  }
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackUI::RankMySelf(std::vector<S2C_RedPack_Public, std::allocator<S2C_RedPack_Public> >&,
   S2C_RedPack_Public&) */

void __thiscall RedPackUI::RankMySelf(RedPackUI *this,vector *param_1,S2C_RedPack_Public *param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar5 = (char *)FUN_0547429c(param_2 + 8);
  iVar2 = atoi(pcVar5);
  uVar11 = *(undefined8 *)param_1;
  uVar6 = FUN_041bc084(uVar11,*(undefined8 *)(param_1 + 8));
  uVar10 = 0;
  do {
    uVar9 = uVar10;
    iVar3 = (int)uVar9;
    uVar12 = uVar6;
    if (uVar9 == uVar6) break;
    lVar7 = FUN_041bc098(uVar11,uVar9);
    pcVar5 = (char *)FUN_0547429c(lVar7 + 8);
    iVar4 = atoi(pcVar5);
    uVar10 = uVar9 + 1;
    uVar12 = uVar9;
  } while (iVar2 < iVar4);
  if (iVar3 == 0) {
    uVar10 = 0;
    if (uVar6 != 0) {
      do {
        lVar7 = FUN_041bc098(uVar11,uVar10);
        pcVar5 = (char *)FUN_0547429c(lVar7 + 8);
        iVar3 = atoi(pcVar5);
        if (iVar3 < iVar2) {
          *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + 1;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar6);
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)param_1);
  }
  else {
    if (uVar12 == uVar6) {
      lVar7 = std::
              vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
              ::back((vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
                      *)param_1);
      iVar2 = *(int *)(lVar7 + 0x10);
      iVar3 = Sexy::Rand(10000);
      *(int *)(param_2 + 0x10) = iVar2 + 1 + iVar3;
      goto LAB_041c3f3c;
    }
    uVar10 = (long)iVar3;
    uVar1 = uVar12;
    while (uVar1 < uVar6) {
      lVar7 = FUN_041bc098(uVar11,uVar9);
      pcVar5 = (char *)FUN_0547429c(lVar7 + 8);
      iVar4 = atoi(pcVar5);
      if (iVar4 < iVar2) {
        *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + 1;
      }
      uVar10 = uVar10 + 1;
      uVar9 = uVar10;
      uVar1 = uVar10;
    }
    lVar7 = FUN_041bc098(uVar11,uVar12);
    lVar8 = FUN_041bc098(uVar11,(long)(iVar3 + -1));
    iVar2 = *(int *)(lVar8 + 0x10);
    iVar4 = *(int *)(lVar7 + 0x10) - iVar2;
    if (iVar4 < 1) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + -1;
    }
    iVar4 = Sexy::Rand(iVar4);
    *(int *)(param_2 + 0x10) = iVar2 + 1 + iVar4;
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)param_1);
    local_18 = __gnu_cxx::
               __normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
               ::operator+((__normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
                            *)&local_20,(long)iVar3);
  }
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<S2C_RedPack_Public,std::allocator<S2C_RedPack_Public>>::insert
            ((vector<S2C_RedPack_Public,std::allocator<S2C_RedPack_Public>> *)param_1,local_10,
             param_2);
LAB_041c3f3c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackUI::onProcessLeaderBoardInfo(S2C_ICloud_RedPackLeaderBoard const*) */

void __thiscall
RedPackUI::onProcessLeaderBoardInfo(RedPackUI *this,S2C_ICloud_RedPackLeaderBoard *param_1)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  long lVar2;
  ulong uVar3;
  long lVar4;
  RedPackLeaderBoardInfo *pRVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  wstring *extraout_x1;
  Sexy aSStack_48 [8];
  RedPackLeaderBoardInfo *local_40;
  undefined8 local_38;
  undefined8 local_30;
  RedPackLeaderBoardInfo aRStack_20 [8];
  undefined1 auStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  std::vector<S2C_RedPack_Public,std::allocator<S2C_RedPack_Public>>::vector
            ((vector<S2C_RedPack_Public,std::allocator<S2C_RedPack_Public>> *)&local_38,
             (vector *)(param_1 + 0x18));
  RedPackLeaderBoardInfo::RedPackLeaderBoardInfo(aRStack_20);
  PlayerInfo::AM_GetName();
  Sexy::WStringToUTF8String(aSStack_48,extraout_x1);
  FUN_05474278(aRStack_20,(string *)&local_40);
  std::string::~string((string *)&local_40);
  FUN_05476c50(aSStack_48);
  uVar3 = FUN_041bbeb8(*(undefined4 *)(lVar2 + 0xf7c));
  Sexy::StrFormat("%d",(string *)&local_40,uVar3 & 0xffffffff);
  FUN_05474278(auStack_18,(string *)&local_40);
  std::string::~string((string *)&local_40);
  RankMySelf(this,(vector *)&local_38,(S2C_RedPack_Public *)aRStack_20);
  *(undefined4 *)(this + 0x110) = local_10;
  FUN_041bbeac(lVar2 + 0xf78);
  lVar4 = FUN_041bc084(local_38,local_30);
  if (lVar4 == 0) {
    this[0x154] = (RedPackUI)0x1;
  }
  else {
    uVar1 = FUN_041bbeb8(*(undefined4 *)(lVar2 + 0xf7c));
    *(undefined4 *)(this + 0x150) = uVar1;
    lVar2 = 0;
    do {
      pRVar5 = ::operator_new(0x18);
      RedPackLeaderBoardInfo::RedPackLeaderBoardInfo(pRVar5);
      local_40 = pRVar5;
      lVar6 = FUN_041bc098(local_38,lVar2);
      thunk_FUN_05475e00(pRVar5 + 8,lVar6 + 8);
      uVar7 = FUN_041bc098(local_38,lVar2);
      thunk_FUN_05475e00(local_40,uVar7);
      pRVar5 = local_40;
      lVar6 = lVar2 + 1;
      lVar2 = FUN_041bc098(local_38,lVar2);
      *(undefined4 *)(pRVar5 + 0x10) = *(undefined4 *)(lVar2 + 0x10);
      std::vector<RedPackLeaderBoardInfo*,std::allocator<RedPackLeaderBoardInfo*>>::push_back
                ((vector<RedPackLeaderBoardInfo*,std::allocator<RedPackLeaderBoardInfo*>> *)
                 (this + 0x138),&local_40);
      lVar2 = lVar6;
    } while (lVar6 != lVar4);
  }
  SetState(this,1);
  plVar8 = *(long **)(this + 0x120);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x188))(plVar8,0);
  }
  Sexy::PACommand::~PACommand((PACommand *)aRStack_20);
  std::vector<S2C_RedPack_Public,std::allocator<S2C_RedPack_Public>>::~vector
            ((vector<S2C_RedPack_Public,std::allocator<S2C_RedPack_Public>> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackUI::requestNetwork() */

void __thiscall RedPackUI::requestNetwork(RedPackUI *this)

{
  wchar_t wVar1;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  wchar_t local_30;
  wchar_t local_2c;
  pair<wchar_t_const,wchar_t> apStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  wVar1 = *(wchar_t *)(this + 0x1e4);
  if (wVar1 == L'\0') {
    local_30 = L'⨇';
    local_2c = L'\x01';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,&local_30,&local_2c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
               (pair *)apStack_28);
  }
  else if (wVar1 == L'\x01') {
    local_30 = L'⧂';
    local_2c = wVar1;
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,&local_30,&local_2c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
               (pair *)apStack_28);
  }
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RedPackUI::RedPackUI(FestivalEventType) */

void __thiscall RedPackUI::RedPackUI(RedPackUI *this,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  long lVar3;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06800ba8;
  *(undefined ***)this = &PTR_GetClass_06800870;
  *(undefined ***)(this + 0xe0) = &PTR__RedPackUI_06800bf0;
  Sexy::Insets::Insets((Insets *)(this + 0xf4));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  Sexy::Insets::Insets((Insets *)(this + 0x158));
  FUN_05476574(this + 400);
  Sexy::Insets::Insets((Insets *)(this + 0x19c));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c8));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_00);
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xf0) = 0xffffffff;
  std::vector<RedPackLeaderBoardInfo*,std::allocator<RedPackLeaderBoardInfo*>>::clear
            ((vector<RedPackLeaderBoardInfo*,std::allocator<RedPackLeaderBoardInfo*>> *)
             (this + 0x138));
  *(undefined8 *)(this + 0x108) = 0;
  uVar2 = FUN_041bbeb4(*(undefined4 *)(lVar3 + 0xf78));
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x110) = uVar2;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  this[0x154] = (RedPackUI)0x0;
  *(undefined4 *)(this + 0x150) = 0;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x188) = uVar2;
  FUN_054772c4(this + 400,&DAT_056f11a8);
  this[0x198] = (RedPackUI)0x0;
  std::vector<RedPackDisplayData,std::allocator<RedPackDisplayData>>::clear
            ((vector<RedPackDisplayData,std::allocator<RedPackDisplayData>> *)(this + 0x1b0));
  std::vector<RedPackDisplayContent*,std::allocator<RedPackDisplayContent*>>::clear
            ((vector<RedPackDisplayContent*,std::allocator<RedPackDisplayContent*>> *)(this + 0x1c8)
            );
  *(undefined4 *)(this + 0x1e4) = param_2;
  *(undefined4 *)(this + 0x1e0) = 0;
  this[0x1e8] = (RedPackUI)0x1;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onProcessLeaderBoardInfo);
  local_80 = local_60;
  uStack_78 = uStack_58;
  local_70 = local_50;
  MessageRouter::
  Subscribe<S2C_ICloud_RedPackLeaderBoard_const*,Sexy::CBMemberTranslatorX<RedPackUI,void(RedPackUI::*)(S2C_ICloud_RedPackLeaderBoard_const*)>>
            ((MessageRouter *)puVar1,Message::ProcessRedPackLeaderBoardInfo,&local_80);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRedPackPurchased);
  local_90 = local_38;
  local_a0 = local_48;
  uStack_98 = uStack_40;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<RedPackUI,void(RedPackUI::*)(int)>>
            ((MessageRouter *)puVar1,Message::RedPackPurchased,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNetworkError);
  local_a0 = local_30;
  uStack_98 = uStack_28;
  local_90 = local_20;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<RedPackUI,void(RedPackUI::*)(int)>>
            ((MessageRouter *)puVar1,Message::MsgError,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_b0 = local_8;
  local_c0 = local_18;
  uStack_b8 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<RedPackUI,void(RedPackUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_c0);
  requestNetwork(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackUI::ButtonDepress(int) */

void __thiscall RedPackUI::ButtonDepress(RedPackUI *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_00;
  long lVar4;
  NetworkMgr *this_01;
  long *plVar5;
  long lVar6;
  ActivityConfig *this_02;
  PVZ2UIDialog *this_03;
  PrimeTypeface *pPVar7;
  LawnApp *pLVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar4 = ProfileMgr::GetCurrentProfile(this_00);
  pLVar8 = gLawnApp;
  switch(param_1) {
  case 100:
    if (*(int *)(this + 0xf0) == 2) {
      requestNetwork(this);
      SetState(this,0);
    }
    else {
      GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
    }
    break;
  case 0x65:
    SetState(this,2);
    break;
  case 0x66:
    cVar1 = std::vector<RedPackLeaderBoardInfo*,std::allocator<RedPackLeaderBoardInfo*>>::empty
                      ((vector<RedPackLeaderBoardInfo*,std::allocator<RedPackLeaderBoardInfo*>> *)
                       (this + 0x138));
    if (cVar1 == '\0') {
      SetState(this,1);
    }
    else {
      this_01 = (NetworkMgr *)NetworkMgr::Instance();
      plVar5 = (long *)NetworkMgr::GetNewNetWorkProcess(this_01);
      if (*(code **)(*plVar5 + 0x2d0) != INetworkMsgProcess::RequestGetRedPackLeaderBoard) {
        (**(code **)(*plVar5 + 0x2d0))();
      }
      plVar5 = *(long **)(this + 0x120);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x188))(plVar5,1);
      }
    }
    break;
  case 0x67:
    UIRedPacket::create(1,*(undefined4 *)(this + 0x1e4));
    break;
  case 0x68:
    SetState(this,0);
    break;
  case 0x69:
    lVar6 = LawnApp::GetActivityConfig();
    if (lVar6 == 0) {
LAB_041c48c4:
      if ((*(uint *)(this + 0x110) < 0x3e9) &&
         (cVar1 = FUN_041bbebc(*(undefined1 *)(lVar4 + 0xf80)), cVar1 == '\0')) {
        onRedPackLeaderBoardReward(this);
        break;
      }
      pLVar8 = gLawnApp;
      iVar2 = FUN_041bd038(0x2a8);
    }
    else {
      this_02 = (ActivityConfig *)LawnApp::GetActivityConfig();
      cVar1 = ActivityConfig::IsRedPackActivated(this_02);
      pLVar8 = gLawnApp;
      if (cVar1 == '\0') goto LAB_041c48c4;
      iVar2 = FUN_041bd038(0x2a8);
    }
    iVar3 = FUN_041bd038(400);
    this_03 = (PVZ2UIDialog *)
              LawnApp::ShowPVZ2Dialog(pLVar8,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
    FUN_05478178(awStack_50,L"[REDPACK_LEADERBOARD_PRIZE_GOT_TITLE]",auStack_58);
    PVZ2UIDialog::SetHeaderLabel(this_03,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05478178(awStack_50,L"[REDPACK_LEADERBOARD_PRIZE_DESC]",auStack_58);
    PVZ2UIDialog::SetFooterLabel(this_03,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    pPVar7 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
    PVZ2UIDialog::SetHeaderFont(this_03,pPVar7,(Color *)&PrimeText_Game::Color_Generic_Title);
    PVZ2UIDialog::SetFooterAlign(this_03,3);
    pPVar7 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
    Sexy::Color::Color((Color *)awStack_50,1);
    PVZ2UIDialog::SetFooterFont(this_03,pPVar7,(Color *)awStack_50);
    PVZ2UIDialog::SetBackgroundDarken(this_03,true,0.5);
    FUN_05478178(auStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onDialogCancel);
    Sexy::Delegate0::Delegate0<RedPackUI,void(RedPackUI::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(this_03,auStack_58,aDStack_38,0);
    FUN_05476c50(auStack_58);
    nop();
    break;
  case 0x6a:
    FUN_05478178(awStack_50,L"Festival2019_OneYuan",auStack_58);
    LawnApp::ShowProbabilityDialog(pLVar8,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to RedPackUI::ButtonDepress(int) */

void __thiscall RedPackUI::ButtonDepress(RedPackUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackUI::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&) */

void __thiscall RedPackUI::onNotifyRefreshActivityList(RedPackUI *this,bool param_1,set *param_2)

{
  LawnApp *pLVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  PVZ2UIDialog *pPVar5;
  long lVar6;
  ProfileMgr *pPVar7;
  PlayerInfo *this_00;
  char *__s;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined4 local_100 [2];
  undefined8 local_f8 [3];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c0;
  int local_bc;
  Delegate0 aDStack_b8 [48];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (!param_1) {
    FUN_05478178((wstring *)local_f8,&DAT_056f11a8,auStack_108);
    FUN_05478178((wstring *)&local_e0,L"[REWARD_GET_TIP_FAILED]",local_100);
    pPVar5 = (PVZ2UIDialog *)
             LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)local_f8,(wstring *)&local_e0);
    FUN_05476c50((wstring *)&local_e0);
    nop();
    FUN_05476c50((wstring *)local_f8);
    nop();
    FUN_05478178((wstring *)local_f8,L"[BUTTON_OK]",local_100);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
              ((Delegate0 *)aAStack_88,(wstring *)&local_e0);
    PVZ2UIDialog::AddButton(pPVar5,(wstring *)local_f8,(Delegate0 *)aAStack_88,1);
    FUN_05476c50((wstring *)local_f8);
    nop();
    goto LAB_041c4d20;
  }
  local_100[0] = 0x2a07;
  local_f8[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                          ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)local_100);
  local_e0 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  bVar2 = eastl::operator!=((rbtree_iterator *)local_f8,(rbtree_iterator *)&local_e0);
  if (bVar2) {
    iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar4);
    if ((local_70 != '\0') && (cVar3 = UIRedPacket::isActive(), cVar3 == '\0')) {
      NetworkRedPackDisplayInfo::NetworkRedPackDisplayInfo((NetworkRedPackDisplayInfo *)&local_e0);
      cVar3 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)&local_e0);
      if (cVar3 == '\0') {
LAB_041c4b5c:
        pLVar1 = gLawnApp;
        FUN_05478178((wstring *)local_100,&DAT_056f11a8,auStack_110);
        FUN_05478178((rbtree_iterator *)local_f8,L"[WECHAT_ACTIVITY_DATA_ERROR]",auStack_108);
        pPVar5 = (PVZ2UIDialog *)
                 LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)local_100,(wstring *)local_f8);
        FUN_05476c50((rbtree_iterator *)local_f8);
        nop();
        FUN_05476c50((wstring *)local_100);
        nop();
        FUN_05478178((wstring *)local_100,L"[BUTTON_OK]",auStack_108);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                  (aDStack_b8,(rbtree_iterator *)local_f8);
        PVZ2UIDialog::AddButton(pPVar5,(wstring *)local_100,aDStack_b8,1);
        FUN_05476c50((wstring *)local_100);
        nop();
      }
      else {
        *(undefined4 *)(this + 0x1e0) = local_c0;
        this[0x1e8] = (RedPackUI)(local_bc == 1);
        pPVar7 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar7);
        __s = "mat_new_redpacket";
LAB_041c4df0:
        std::string::string((string *)local_f8,__s);
        PlayerInfo::SetMaterialNum(this_00,(string *)local_f8,*(int *)(this + 0x1e0));
        std::string::~string((string *)local_f8);
        nop();
        lVar6 = FUN_041bc02c(local_d8,local_d0);
        if (lVar6 != 0) {
          SyncActivityData(this,(NetworkRedPackDisplayInfo *)&local_e0);
        }
      }
      NetworkRedPackDisplayInfo::~NetworkRedPackDisplayInfo((NetworkRedPackDisplayInfo *)&local_e0);
    }
  }
  else {
    local_100[0] = 0x29c2;
    local_f8[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                            ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)local_100
                            );
    local_e0 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar2 = eastl::operator!=((rbtree_iterator *)local_f8,(rbtree_iterator *)&local_e0);
    if (!bVar2) goto LAB_041c4d20;
    iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar4);
    if ((local_70 != '\0') && (cVar3 = UIRedPacket::isActive(), cVar3 == '\0')) {
      NetworkRedPackDisplayInfo::NetworkRedPackDisplayInfo((NetworkRedPackDisplayInfo *)&local_e0);
      cVar3 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)&local_e0);
      if (cVar3 != '\0') {
        *(undefined4 *)(this + 0x1e0) = local_c0;
        pPVar7 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar7);
        __s = "mat_new_dumpling";
        goto LAB_041c4df0;
      }
      goto LAB_041c4b5c;
    }
  }
  ActiveItem::~ActiveItem(aAStack_88);
LAB_041c4d20:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackUI::requestBuyRedPacket(int) */

void __thiscall RedPackUI::requestBuyRedPacket(RedPackUI *this,int param_1)

{
  string *psVar1;
  char *pcVar2;
  DNetwork *this_00;
  undefined1 *__n;
  undefined1 *__n_00;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [1408];
  string asStack_768 [1888];
  long local_8;
  
  __n_00 = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  __n = __n_00;
  std::string::string(asStack_d40,"n");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,param_1);
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"ai");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,0x2a07);
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n_00);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_041bce10(afStack_d38,this,param_1);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_768,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
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
/* RedPackUI::requestBuyDumpling(int) */

void __thiscall RedPackUI::requestBuyDumpling(RedPackUI *this,int param_1)

{
  string *psVar1;
  char *pcVar2;
  DNetwork *this_00;
  undefined1 *__n;
  undefined1 *__n_00;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [1408];
  string asStack_768 [1888];
  long local_8;
  
  __n_00 = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  __n = __n_00;
  std::string::string(asStack_d40,"n");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,param_1);
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"ai");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,0x29c2);
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n_00);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_041bce6c(afStack_d38,this,param_1);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_768,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
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

