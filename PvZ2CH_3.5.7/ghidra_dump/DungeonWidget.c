// Class: DungeonWidget


/* DungeonWidget::GetAddChanceGemCost() */

undefined8 DungeonWidget::GetAddChanceGemCost(void)

{
  return 0x1e;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DungeonWidget::GetDungeonNameForShow(std::string) */

void DungeonWidget::GetDungeonNameForShow(undefined8 param_1,undefined8 param_2,bool param_3)

{
  uint uVar1;
  string *psVar2;
  long lVar3;
  undefined1 auVar4 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<LevelUtils>::GetInstance();
  LevelUtils::LoadLevelDefinition(psVar2,param_3);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  uVar1 = *(uint *)(lVar3 + 0x30);
  auVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  Sexy::UTF8StringToWString((Sexy *)(auVar4._0_8_ + 0x10),auVar4._8_8_);
  FUN_05476574(awStack_18);
  if (0 < (int)uVar1) {
    Sexy::StrFormat(L"%d",auStack_10,(ulong)uVar1);
    FUN_054766c8(awStack_18,auStack_10);
    FUN_05476c50(auStack_10);
  }
  TodReplaceString(awStack_20,L"{LEVEL_NUMBER}",awStack_18);
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* DungeonWidget::Resize(Sexy::TRect<int> const&) */

void __thiscall DungeonWidget::Resize(DungeonWidget *this,TRect *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x19c) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 400) = uVar1;
  *(undefined4 *)(this + 0x194) = uVar2;
  *(undefined4 *)(this + 0x198) = uVar3;
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  return;
}


/* DungeonWidget::onADFinished(int) */

void __thiscall DungeonWidget::onADFinished(DungeonWidget *this,int param_1)

{
  long *plVar1;
  
  if (param_1 == 0x18) {
    if (this[0x318] != (DungeonWidget)0x0) {
      plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
      (**(code **)(*plVar1 + 0x118))(plVar1,*(undefined4 *)(this + 0xf4),5);
      this[0x318] = (DungeonWidget)0x0;
      *(undefined4 *)(this + 800) = 1;
    }
  }
  else if ((param_1 == 0x19) && (this[0x318] != (DungeonWidget)0x0)) {
    plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
    (**(code **)(*plVar1 + 0x118))(plVar1,*(undefined4 *)(this + 0xf4),7);
    this[0x318] = (DungeonWidget)0x0;
    *(undefined4 *)(this + 800) = 2;
    return;
  }
  return;
}


/* DungeonWidget::ConrirmForSuspend() */

void __thiscall DungeonWidget::ConrirmForSuspend(DungeonWidget *this)

{
  long *plVar1;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
  (**(code **)(*plVar1 + 0x118))(plVar1,*(undefined4 *)(this + 0xf4),0);
  return;
}


/* DungeonWidget::CancelSuspend() */

void DungeonWidget::CancelSuspend(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* DungeonWidget::canAddChance() */

bool __thiscall DungeonWidget::canAddChance(DungeonWidget *this)

{
  return 0 < *(int *)(this + 0x31c);
}


/* DungeonWidget::refreshAddChance() */

void __thiscall DungeonWidget::refreshAddChance(DungeonWidget *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  
  if (*(int *)(this + 0x2d8) != 4) {
    return;
  }
  iVar1 = *(int *)(this + 0x260);
  iVar2 = *(int *)(this + 0x268);
  *(undefined4 *)(this + 0x2d8) = 1;
  plVar5 = *(long **)(this + 0x308);
  iVar3 = FUN_042d2d60(10);
  iVar4 = FUN_042d2d60(0xfffffffb);
  (**(code **)(*plVar5 + 0x1a8))(plVar5,iVar1 + iVar2 + iVar3,iVar4 + *(int *)(this + 0x264));
  return;
}


/* DungeonWidget::StartAdventure(unsigned int) */

void DungeonWidget::StartAdventure(uint param_1)

{
  long *plVar1;
  
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
  (**(code **)(*plVar1 + 0x108))(plVar1,*(undefined4 *)((ulong)param_1 + 0xf4));
  return;
}


/* DungeonWidget::GetSkipGemCost() */

undefined8 DungeonWidget::GetSkipGemCost(void)

{
  return 0x14;
}


/* DungeonWidget::ClearPlantAdventureInfo() */

void __thiscall DungeonWidget::ClearPlantAdventureInfo(DungeonWidget *this)

{
  this[0x148] = (DungeonWidget)0x0;
  this[0x149] = (DungeonWidget)0x0;
  *(undefined4 *)(this + 0x14c) = 0xffffffff;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x154) = 0xffffffff;
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  return;
}


/* DungeonWidget::ConrirmPayForSkip(UIMessageBox*, int) */

void DungeonWidget::ConrirmPayForSkip(UIMessageBox *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long *plVar4;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    iVar2 = PlayerInfo::GetNumGems(this_00,true);
    iVar3 = GetSkipGemCost();
    if (iVar3 <= iVar2) {
      UISingletonDialog<UIMessageBox>::CloseDialog();
      uVar1 = 3;
      if (param_1[0xe1] == (UIMessageBox)0x0) {
        uVar1 = 1;
      }
      iVar2 = PlayerInfo::SubtractGems
                        (this_00,0x14,-1,(ICloudRequestCallbackFunctionBase *)0x0,1,false);
      if (-1 < iVar2) {
        plVar4 = (long *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
        (**(code **)(*plVar4 + 0x118))(plVar4,*(undefined4 *)(param_1 + 0xf4),uVar1);
        return;
      }
      goto LAB_042d3980;
    }
  }
  UISingletonDialog<UIMessageBox>::CloseDialog();
LAB_042d3980:
  LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
  return;
}


/* DungeonWidget::ConrirmPayForAddChance(UIMessageBox*, int) */

void DungeonWidget::ConrirmPayForAddChance(UIMessageBox *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long *plVar3;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    iVar1 = PlayerInfo::GetNumGems(this_00,true);
    iVar2 = GetAddChanceGemCost();
    if (iVar2 <= iVar1) {
      UISingletonDialog<UIMessageBox>::CloseDialog();
      iVar1 = PlayerInfo::SubtractGems
                        (this_00,0x1e,-1,(ICloudRequestCallbackFunctionBase *)0x0,1,false);
      if (-1 < iVar1) {
        plVar3 = (long *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
        (**(code **)(*plVar3 + 0x118))(plVar3,*(undefined4 *)(param_1 + 0xf4),6);
        *(undefined4 *)(param_1 + 800) = 2;
        return;
      }
      LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
      *(undefined4 *)(param_1 + 800) = 2;
      return;
    }
  }
  UISingletonDialog<UIMessageBox>::CloseDialog();
  LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
  return;
}


/* DungeonWidget::TryToSkipAdventure(unsigned int) */

void DungeonWidget::TryToSkipAdventure(uint param_1)

{
  int iVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long *plVar2;
  
  *(undefined1 *)((ulong)param_1 + 0xe1) = 0;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  iVar1 = PlayerInfo::SubtractGems(this_00,0x14,-1,(ICloudRequestCallbackFunctionBase *)0x0,1,false)
  ;
  if (-1 < iVar1) {
    plVar2 = (long *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
    (**(code **)(*plVar2 + 0x118))(plVar2,*(undefined4 *)((ulong)param_1 + 0xf4),2);
    return;
  }
  LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
  return;
}


/* DungeonWidget::IsAdvertisementEnable() */

byte DungeonWidget::IsAdvertisementEnable(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *pPVar4;
  long lVar5;
  long *plVar6;
  byte bVar7;
  
  if (((DAT_06af7308 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06af7308), iVar3 != 0)) {
    DAT_06af74d8 = LawnApp::IsAdChannel(gLawnApp,3);
    __cxa_guard_release(&DAT_06af7308);
  }
  if (((DAT_06af72d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06af72d8), iVar3 != 0)) {
    plVar6 = (long *)EASquared::Instance();
    DAT_06af7608 = (**(code **)(*plVar6 + 0xb8))(plVar6,0x54);
    __cxa_guard_release(&DAT_06af72d8);
  }
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar5 = PlayerInfo::GetAdvertisementWatchTime(pPVar4,2);
  bVar1 = TimeUtil::CheckTimeHourPass(lVar5,4);
  bVar2 = LawnApp::GetAdsStatus(gLawnApp,1);
  iVar3 = FUN_042d2594(*(undefined4 *)(pPVar4 + 0x40));
  bVar7 = 0;
  if ((DAT_06af74d8 != '\0') && (bVar7 = 0, DAT_06af7608 != '\0')) {
    bVar7 = iVar3 != 0x27 & bVar2 & bVar1;
  }
  return bVar7;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DungeonWidget::NotifyRequestingStateFinish() */

void __thiscall DungeonWidget::NotifyRequestingStateFinish(DungeonWidget *this)

{
  char cVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 800) == 2) {
    refreshAddChance(this);
  }
  *(undefined4 *)(this + 800) = 0;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar2 = PlayerInfo::GetPlantAdventureAddChances(this_01,*(int *)(this + 0xf4));
  *(undefined4 *)(this + 0x31c) = uVar2;
  cVar1 = PlayerInfo::HasPlantAdventureChances(this_01,*(int *)(this + 0xf4));
  if (cVar1 != '\0') {
    uVar2 = PlayerInfo::GetPlantAdventureTimes(this_01,*(int *)(this + 0xf4));
    *(undefined4 *)(this + 0xe4) = uVar2;
    TodStringTranslate(L"[PLANT_ADVENTURE_DUNGEON_CHANCES_LEFT]");
    TodReplaceNumberString(awStack_18,L"{CHANCES}",*(int *)(this + 0xe4));
    FUN_054766c8(this + 0x2c8,auStack_10);
    FUN_05476c50(auStack_10);
    FUN_05476c50(awStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DungeonWidget::FinishAdventure(unsigned int) */

void DungeonWidget::FinishAdventure(uint param_1)

{
  undefined4 uVar1;
  LawnApp *pLVar2;
  ulong uVar3;
  string *psVar4;
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  pLVar2 = gLawnApp;
  uVar3 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  uVar1 = *(undefined4 *)(uVar3 + 0xf4);
  FUN_05475d88(asStack_18,uVar3 + 0x108);
  GetDungeonNameForShow(auStack_10,uVar3,asStack_18);
  LawnApp::ShowAdventureBonusUI(pLVar2,uVar1,auStack_10);
  FUN_05476c50(auStack_10);
  std::string::~string(asStack_18);
  psVar4 = (string *)LawnApp::GetAdventureBonusUI(gLawnApp);
  if (psVar4 != (string *)0x0) {
    AdventureBonusUI::SetWorldName(psVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DungeonWidget::SuspendAdventure(unsigned int) */

void DungeonWidget::SuspendAdventure(uint param_1)

{
  LawnApp *this;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this = gLawnApp;
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_58,L"[PLANT_ADVENTURE_SUSPEND_TITLE]",auStack_68);
  FUN_05478178(awStack_50,L"[PLANT_ADVENTURE_SUSPEND_TITLE_DES]",auStack_60);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[PLANT_ADVENTURE_SUSPEND]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)(ulong)param_1,ConrirmForSuspend);
  Sexy::Delegate0::Delegate0<DungeonWidget,void(DungeonWidget::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,1);
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[PLANT_ADVENTURE_NOT_BUTTON]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)(ulong)param_1,CancelSuspend);
  Sexy::Delegate0::Delegate0<DungeonWidget,void(DungeonWidget::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DungeonWidget::WatchAD(UIMessageBox*, int) */

void DungeonWidget::WatchAD(UIMessageBox *param_1,int param_2)

{
  ADManager *pAVar1;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  param_1[0x318] = (UIMessageBox)0x1;
  pAVar1 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
  ADManager::ShowAD(pAVar1,0x18);
  return;
}


/* DungeonWidget::WatchADAddChance(UIMessageBox*, int) */

void DungeonWidget::WatchADAddChance(UIMessageBox *param_1,int param_2)

{
  ADManager *pAVar1;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  param_1[0x318] = (UIMessageBox)0x1;
  pAVar1 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
  ADManager::ShowAD(pAVar1,0x19);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DungeonWidget::AddChance() */

void __thiscall DungeonWidget::AddChance(DungeonWidget *this)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ADManager *pAVar7;
  wchar_t *pwVar8;
  UIMessageBox *this_00;
  undefined8 uVar9;
  long *plVar10;
  PVZ2UIButton *this_01;
  undefined4 uVar11;
  code *pcVar12;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pAVar7 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
  bVar1 = ADManager::CanWatchAD(pAVar7,0x19);
  FUN_05478178(auStack_68,&DAT_056f11a8,asStack_50);
  nop();
  if (bVar1 == 0) {
LAB_042d4204:
    pwVar8 = L"[PLANT_ADVENTURE_ADD_CHANCE_GEM_TITLE_DES]";
  }
  else {
    cVar2 = canAddChance(this);
    if (cVar2 == '\0') {
      cVar2 = canAddChance(this);
      if (cVar2 == '\0') {
        TodStringTranslate(L"[PLANT_ADVENTURE_ADD_CHANCE_AD_TITLE_DES]");
        FUN_054766c8(auStack_68,asStack_50);
        FUN_05476c50(asStack_50);
        this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        goto joined_r0x042d4590;
      }
      goto LAB_042d4204;
    }
    pwVar8 = L"[PLANT_ADVENTURE_ADD_CHANCE_BOTH_TITLE_DES]";
  }
  TodStringTranslate(pwVar8);
  iVar4 = GetAddChanceGemCost();
  TodReplaceNumberString(awStack_58,L"{GEMS}",iVar4);
  FUN_054766c8(auStack_68,asStack_50);
  FUN_05476c50(asStack_50);
  FUN_05476c50(awStack_58);
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
joined_r0x042d4590:
  if (this_00 == (UIMessageBox *)0x0) {
    FUN_05476c50(auStack_68);
  }
  else {
    pAVar7 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
    iVar4 = ADManager::GetLeftADWatchCount(pAVar7,0x19);
    FUN_05478178(awStack_60,L"[LEFT_AD_COUNT]",asStack_50);
    nop();
    TodReplaceNumberString(awStack_60,L"{NUMBER}",iVar4);
    FUN_054766c8(awStack_60,asStack_50);
    FUN_05476c50(asStack_50);
    UIMessageBox::SetADMessage(this_00,awStack_60);
    uVar9 = FUN_054766ec(auStack_68);
    FUN_05478178(asStack_50,uVar9,auStack_70);
    TodStringTranslate(L"[PLANT_ADVENTURE_ADD_CHANCE_TITLE]");
    UIMessageBox::SetMessage(this_00,(wstring *)asStack_50,awStack_58);
    FUN_05476c50(awStack_58);
    FUN_05476c50(asStack_50);
    nop();
    UIMessageBox::SetShowType(this_00,1);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
    UIMessageBox::SetBackground(this_00,asStack_50);
    std::string::~string(asStack_50);
    nop();
    UIMessageBox::SetBackgroundDarken(this_00,true,0.5);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,ConrirmPayForAddChance);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<DungeonWidget,void(DungeonWidget::*)(UIMessageBox*,int)>(aDStack_38,asStack_50);
    UIMessageBox::SetCallback(this_00,aDStack_38);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,WatchADAddChance);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<DungeonWidget,void(DungeonWidget::*)(UIMessageBox*,int)>(aDStack_38,asStack_50);
    UIMessageBox::SetCancelCallback(this_00,aDStack_38);
    uVar5 = FUN_042d2d60(0);
    uVar6 = FUN_042d2d60(0x2d);
    cVar2 = canAddChance(this);
    if ((cVar2 == '\0') || (uVar11 = 0, bVar1 == 0)) {
      bVar3 = canAddChance(this);
      uVar11 = 2;
      if (bVar1 < bVar3) {
        uVar11 = 1;
      }
    }
    UIMessageBox::SetNewBackground(this_00,uVar5,uVar6,uVar11);
    plVar10 = (long *)UIMessageBox::GetButtonLeft(this_00);
    pcVar12 = *(code **)(*plVar10 + 800);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline)
    ;
    (*pcVar12)(plVar10,uVar9);
    plVar10 = (long *)UIMessageBox::GetButtonRight(this_00);
    pcVar12 = *(code **)(*plVar10 + 800);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline)
    ;
    (*pcVar12)(plVar10,uVar9);
    FUN_05478178(awStack_58,L"[PLANT_ADV_BUY_GEM_FINISH_COUNT]",asStack_50);
    nop();
    iVar4 = GetAddChanceGemCost();
    TodReplaceNumberString(awStack_58,L"{GEM_COUNT}",iVar4);
    FUN_054766c8(awStack_58,asStack_50);
    FUN_05476c50(asStack_50);
    this_01 = (PVZ2UIButton *)UIMessageBox::GetButtonLeft(this_00);
    PVZ2UIButton::SetLabelText(this_01,awStack_58);
    FUN_05476c50(awStack_58);
    FUN_05476c50(awStack_60);
    FUN_05476c50(auStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DungeonWidget::SkipAdventure(unsigned int) */

void DungeonWidget::SkipAdventure(uint param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ReceivedDataCallback *pRVar5;
  UIMessageBox *this;
  ADManager *pAVar6;
  undefined8 uVar7;
  long *plVar8;
  code *pcVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  pRVar5 = (ReceivedDataCallback *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  FUN_05478178(auStack_68,&DAT_056f11a8,asStack_50);
  nop();
  if (pRVar5[0xe1] == (ReceivedDataCallback)0x0) {
    TodStringTranslate(L"[PLANT_ADVENTURE_SKIP_TITLE_DES]");
    iVar2 = GetSkipGemCost();
    TodReplaceNumberString(awStack_58,L"{GEMS}",iVar2);
    FUN_054766c8(auStack_68,asStack_50);
    FUN_05476c50(asStack_50);
    FUN_05476c50(awStack_58);
  }
  else {
    TodStringTranslate(L"[PLANT_ADVENTURE_FREESKIP_TITLE_DES]");
    FUN_054766c8(auStack_68,asStack_50);
    FUN_05476c50(asStack_50);
  }
  this = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this != (UIMessageBox *)0x0) {
    pAVar6 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
    bVar1 = ADManager::CanWatchAD(pAVar6,0x18);
    pAVar6 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
    iVar2 = ADManager::GetLeftADWatchCount(pAVar6,0x18);
    FUN_05478178(awStack_60,L"[LEFT_AD_COUNT]",asStack_50);
    nop();
    TodReplaceNumberString(awStack_60,L"{NUMBER}",iVar2);
    FUN_054766c8(awStack_60,asStack_50);
    FUN_05476c50(asStack_50);
    UIMessageBox::SetADMessage(this,awStack_60);
    uVar7 = FUN_054766ec(auStack_68);
    FUN_05478178(asStack_50,uVar7,auStack_70);
    TodStringTranslate(L"[PLANT_ADVENTURE_SKIP_TITLE]");
    UIMessageBox::SetMessage(this,(wstring *)asStack_50,awStack_58);
    FUN_05476c50(awStack_58);
    FUN_05476c50(asStack_50);
    nop();
    UIMessageBox::SetShowType(this,1);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
    UIMessageBox::SetBackground(this,asStack_50);
    std::string::~string(asStack_50);
    nop();
    UIMessageBox::SetBackgroundDarken(this,true,0.5);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              (pRVar5,ConrirmPayForSkip);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<DungeonWidget,void(DungeonWidget::*)(UIMessageBox*,int)>(aDStack_38,asStack_50);
    UIMessageBox::SetCallback(this,aDStack_38);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              (pRVar5,WatchAD);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<DungeonWidget,void(DungeonWidget::*)(UIMessageBox*,int)>(aDStack_38,asStack_50);
    UIMessageBox::SetCancelCallback(this,aDStack_38);
    uVar3 = FUN_042d2d60(0);
    uVar4 = FUN_042d2d60(0x2d);
    UIMessageBox::SetNewBackground(this,uVar3,uVar4,bVar1 ^ 1);
    plVar8 = (long *)UIMessageBox::GetButtonLeft(this);
    pcVar9 = *(code **)(*plVar8 + 800);
    uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline)
    ;
    (*pcVar9)(plVar8,uVar7);
    plVar8 = (long *)UIMessageBox::GetButtonRight(this);
    pcVar9 = *(code **)(*plVar8 + 800);
    uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline)
    ;
    (*pcVar9)(plVar8,uVar7);
    FUN_05476c50(awStack_60);
  }
  FUN_05476c50(auStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DungeonWidget::Draw(Sexy::Graphics*) */

void __thiscall DungeonWidget::Draw(DungeonWidget *this,Graphics *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ResourceInfo *pRVar12;
  Image *pIVar13;
  LotteryResultProgressBar *pLVar14;
  SalesProgressBar *pSVar15;
  undefined8 uVar16;
  SeedPacketUtils *this_00;
  RtWeakPtr *this_01;
  long lVar17;
  SexyVector2 *pSVar18;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  float local_50;
  float local_4c;
  Color aCStack_40 [16];
  SexyMatrix3 aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xe0] == (DungeonWidget)0x0) goto LAB_042d5354;
  pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x280));
  Sexy::Graphics::DrawImage(param_1,(Image *)pRVar12,0,0);
  iVar11 = *(int *)(this + 0x2d8);
  if (iVar11 - 3U < 3) {
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7388);
    iVar11 = FUN_042d2d60(2);
    Sexy::Graphics::DrawImage(param_1,pIVar13,iVar11,iVar11);
    iVar11 = *(int *)(this + 0x2d8);
    if (iVar11 != 3) goto LAB_042d53b0;
    if (this[0x149] != (DungeonWidget)0x0) {
      iVar8 = FUN_042d2d60(100);
      iVar11 = *(int *)(this + 0x1f0);
      iVar1 = *(int *)(this + 500);
      pLVar14 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7610);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
      pSVar15 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7610);
      iVar6 = SalesProgressBar::GetCurrentLevel(pSVar15);
      pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7610);
      Sexy::Graphics::DrawImage(param_1,pIVar13,iVar8 + iVar11,iVar1);
      FUN_05478178(auStack_58,&DAT_056f11a8,auStack_60);
      Sexy::Insets::Insets((Insets *)&local_50,iVar8 + iVar11,iVar1,iVar5,iVar6);
      uVar16 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_24_Outline);
      Sexy::Color::Color(aCStack_40,1);
      WriteWordInRect(param_1,auStack_58,(Insets *)&local_50,uVar16,aCStack_40,0,1);
      FUN_05476c50(auStack_58);
      nop();
      iVar11 = *(int *)(this + 0x2d8);
      goto LAB_042d53b0;
    }
  }
  else {
LAB_042d53b0:
    if (iVar11 == 5) {
      uVar16 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
      Sexy::Color::Color(aCStack_40,1);
      WriteWordInRect(param_1,this + 0x290,this + 0x250,uVar16,aCStack_40,5,1);
      goto LAB_042d5354;
    }
    if (iVar11 - 1U < 2) {
      Sexy::Insets::Insets((Insets *)aCStack_40,(Insets *)(this + 0x1b0));
      uVar16 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7640);
      Draw3SliceImage(param_1,(Insets *)aCStack_40,uVar16);
      uVar16 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
      Sexy::Color::Color(aCStack_40,0xff,0xe3,0x70);
      WriteWordInRect(param_1,this + 0x298,this + 0x1a0,uVar16,(Insets *)aCStack_40,0,1);
      uVar16 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
      Sexy::Color::Color(aCStack_40,0xfd,0xdc,0x75);
      WriteWordInRect(param_1,this + 0x2c8,this + 0x260,uVar16,(Insets *)aCStack_40,0,1);
      uVar16 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
      Sexy::Color::Color(aCStack_40,1);
      WriteWordInRect(param_1,this + 0x2a0,this + 0x1c0,uVar16,(Insets *)aCStack_40,0,1);
      pLVar14 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af76e0);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
      iVar1 = *(int *)(this + 0x1b4);
      iVar8 = *(int *)(this + 0x1bc);
      iVar11 = *(int *)(this + 0x1c0) + *(int *)(this + 0x1c8);
      iVar6 = (int)((double)iVar5 * 1.8);
      iVar5 = FUN_042d2d60(3);
      iVar1 = ((iVar1 + iVar8) - iVar5) - iVar6;
      pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af76e0);
      Sexy::Graphics::DrawImage(param_1,pIVar13,iVar11,iVar1,iVar6,iVar6);
      cVar2 = FUN_0547419c((string *)(this + 0x310));
      if (cVar2 == '\0') {
        this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
        this_01 = (RtWeakPtr *)
                  SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(this + 0x310));
        iVar9 = FUN_042d2d60(3);
        uVar4 = *(uint *)(this_01 + 0x2c);
        pSVar18 = (SexyVector2 *)(ulong)uVar4;
        iVar8 = *(int *)(this_01 + 0x28);
        ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                  ((ResistenceValueInfo *)&local_50);
        iVar5 = *(int *)(this_01 + 0x30);
        iVar10 = FUN_042d2d60(0xc);
        iVar7 = *(int *)(this_01 + 0x34);
        local_50 = (float)(iVar9 + iVar11 + iVar6 + iVar5 + iVar10);
        iVar11 = FUN_042d2d60(0xc);
        local_4c = (float)(iVar1 + iVar7 + iVar11);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)aCStack_40,(float)iVar6 / (float)iVar8,
                   (float)iVar6 / (float)(int)uVar4);
        Sexy::SexyTransform2D::CreateTransform
                  ((SexyTransform2D *)&local_50,(SexyVector2 *)aCStack_40,0.0,pSVar18);
        pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
        Sexy::Graphics::DrawImageMatrix
                  (param_1,(Image *)pRVar12,aSStack_30,(TRect *)(this_01 + 0x20),0.0,0.0);
        bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
        if (bVar3) {
          lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
          pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar17 + 0x48));
          Sexy::Graphics::DrawImageMatrix
                    (param_1,(Image *)pRVar12,aSStack_30,(TRect *)(this_01 + 8),0.0,0.0);
          iVar11 = *(int *)(this + 0x2d8);
        }
        else {
LAB_042d5b08:
          iVar11 = *(int *)(this + 0x2d8);
        }
      }
      else {
        bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x288));
        if (!bVar3) goto LAB_042d5b08;
        pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x288));
        iVar8 = FUN_042d2d60(3);
        Sexy::Graphics::DrawImage(param_1,(Image *)pRVar12,iVar8 + iVar11 + iVar6,iVar1,iVar6,iVar6)
        ;
        iVar11 = *(int *)(this + 0x2d8);
      }
    }
  }
  if (iVar11 == 2) {
    FUN_0342e660((Insets *)&local_50,this + 0x2b8,this + 0x2c0);
    uVar16 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color(aCStack_40,0x58,0xff,0x5c);
    WriteWordInRect(param_1,(Insets *)&local_50,this + 0x240,uVar16,aCStack_40,3,1);
    FUN_05476c50((Insets *)&local_50);
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af70f0);
    Sexy::Graphics::DrawImage(param_1,pIVar13,*(int *)(this + 0x1f0),*(int *)(this + 500));
    uVar4 = LawnApp::GetRealServerTime(gLawnApp);
    if (((uVar4 == 0) || (this[0x149] == (DungeonWidget)0x0)) || (uVar4 < *(uint *)(this + 0x16c)))
    {
      iVar11 = *(int *)(this + 0x2d8);
    }
    else {
      iVar8 = FUN_042d2d60(100);
      iVar11 = *(int *)(this + 0x1f0);
      iVar1 = *(int *)(this + 500);
      pLVar14 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7610);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
      pSVar15 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7610);
      iVar6 = SalesProgressBar::GetCurrentLevel(pSVar15);
      pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7610);
      Sexy::Graphics::DrawImage(param_1,pIVar13,iVar8 + iVar11,iVar1);
      FUN_05478178(auStack_58,&DAT_056f11a8,auStack_60);
      Sexy::Insets::Insets((Insets *)&local_50,iVar8 + iVar11,iVar1,iVar5,iVar6);
      uVar16 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_24_Outline);
      Sexy::Color::Color(aCStack_40,1);
      WriteWordInRect(param_1,auStack_58,(Insets *)&local_50,uVar16,aCStack_40,0,1);
      FUN_05476c50(auStack_58);
      nop();
      iVar11 = *(int *)(this + 0x2d8);
    }
  }
  if (iVar11 == 1) {
    uVar16 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_Outline);
    Sexy::Color::Color(aCStack_40,1);
    WriteWordInRect(param_1,this + 0x2a8,this + 0x210,uVar16,(Insets *)aCStack_40,1,1);
    iVar11 = *(int *)(this + 0x210);
    iVar1 = *(int *)(this + 0x218);
    iVar5 = FUN_042d2d60(2);
    iVar8 = *(int *)(this + 0x214);
    iVar6 = FUN_042d2d60(0x6e);
    iVar7 = FUN_042d2d60(0x18);
    Sexy::Insets::Insets((Insets *)aCStack_40,iVar11 + iVar1 + iVar5,iVar8 - iVar5,iVar6,iVar7);
    uVar16 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6eb0);
    Draw3SliceImage(param_1,(Insets *)aCStack_40,uVar16);
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7118);
    iVar11 = *(int *)(this + 0x210);
    iVar1 = *(int *)(this + 0x218);
    iVar5 = FUN_042d2d60(3);
    iVar8 = *(int *)(this + 0x214);
    iVar6 = FUN_042d2d60(0x1c);
    iVar7 = FUN_042d2d60(0x1a);
    Sexy::Graphics::DrawImage(param_1,pIVar13,iVar11 + iVar1,iVar8 - iVar5,iVar6,iVar7);
    iVar11 = *(int *)(this + 0x210);
    iVar1 = *(int *)(this + 0x218);
    iVar8 = FUN_042d2d60(0x1b);
    iVar5 = FUN_042d2d60(0x96);
    iVar6 = FUN_042d2d60(4);
    Sexy::Insets::Insets
              ((Insets *)&local_50,iVar11 + iVar1 + iVar8,*(int *)(this + 0x214),iVar5,
               iVar6 + *(int *)(this + 0x21c));
    uVar16 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    Sexy::Color::Color(aCStack_40,1);
    WriteWordInRect(param_1,this + 0x2b0,(Insets *)&local_50,uVar16,(Insets *)aCStack_40,0,1);
    iVar11 = *(int *)(this + 0x2d8);
  }
  if (iVar11 == 4) {
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af75b8);
    Sexy::Graphics::DrawImage(param_1,pIVar13,*(int *)(this + 0x230),*(int *)(this + 0x234));
  }
LAB_042d5354:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DungeonWidget::Update() */

void __thiscall DungeonWidget::Update(DungeonWidget *this)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  S2C_Explore_Team aSStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 == (PlayerInfo *)0x0) goto LAB_042d798c;
  iVar6 = *(int *)(this + 0x2d8);
  if (iVar6 == 5) {
    (**(code **)(**(long **)(this + 0x2e8) + 0x158))(*(long **)(this + 0x2e8),0);
    (**(code **)(**(long **)(this + 0x2f0) + 0x158))(*(long **)(this + 0x2f0),0);
    (**(code **)(**(long **)(this + 0x2f8) + 0x158))(*(long **)(this + 0x2f8),0);
    (**(code **)(**(long **)(this + 0x2e0) + 0x158))(*(long **)(this + 0x2e0),0);
    (**(code **)(**(long **)(this + 0x2e8) + 0x188))(*(long **)(this + 0x2e8),1);
    (**(code **)(**(long **)(this + 0x2f0) + 0x188))(*(long **)(this + 0x2f0),1);
    (**(code **)(**(long **)(this + 0x2f8) + 0x188))(*(long **)(this + 0x2f8),1);
    (**(code **)(**(long **)(this + 0x2e0) + 0x188))(*(long **)(this + 0x2e0),1);
    plVar8 = *(long **)(this + 0x300);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x158))(plVar8,0);
      (**(code **)(**(long **)(this + 0x300) + 0x188))(*(long **)(this + 0x300),1);
    }
    goto LAB_042d798c;
  }
  if (iVar6 == 0) {
    ClearPlantAdventureInfo(this);
    *(undefined4 *)(this + 0x2d8) = 1;
    PlayerInfo::SetPlantAdventureState(this_01,*(int *)(this + 0xf4),1,*(int *)(this + 0xf0),true,1)
    ;
    goto LAB_042d798c;
  }
  if (iVar6 == 4) {
LAB_042d79b4:
    (**(code **)(**(long **)(this + 0x2e0) + 0x158))(*(long **)(this + 0x2e0),0);
    plVar8 = *(long **)(this + 0x308);
LAB_042d79d4:
    (**(code **)(*plVar8 + 0x158))(plVar8,0);
  }
  else {
    cVar3 = PlayerInfo::HasPlantAdventureChances(this_01,*(int *)(this + 0xf4));
    if (cVar3 == '\0') {
      iVar6 = *(int *)(this + 0xf4);
      *(undefined4 *)(this + 0x2d8) = 4;
      iVar5 = PlayerInfo::GetPlantAdventureAddChances(this_01,iVar6);
      PlayerInfo::SetPlantAdventureState(this_01,iVar6,4,-1,true,iVar5);
      iVar6 = *(int *)(this + 0x2d8);
    }
    else {
      iVar6 = *(int *)(this + 0x2d8);
    }
    if (iVar6 != 1) goto LAB_042d79b4;
    (**(code **)(**(long **)(this + 0x2e0) + 0x158))(*(long **)(this + 0x2e0),1);
    plVar8 = *(long **)(this + 0x2e0);
    pcVar9 = *(code **)(*plVar8 + 0x188);
    bVar4 = PlayerInfo::CanStartNewPlantAdventure(this_01);
    (*pcVar9)(plVar8,bVar4 ^ 1);
    cVar3 = canAddChance(this);
    plVar8 = *(long **)(this + 0x308);
    if (cVar3 == '\0') goto LAB_042d79d4;
    (**(code **)(*plVar8 + 0x158))(plVar8,1);
  }
  iVar6 = *(int *)(this + 0x2d8);
  if (iVar6 == 4) {
    if (*(long *)(this + 0x308) != 0) {
      cVar3 = canAddChance(this);
      if (cVar3 == '\0') {
        iVar6 = *(int *)(this + 0x2d8);
      }
      else {
        plVar8 = *(long **)(this + 0x308);
        iVar6 = FUN_042d2d60(0xffffffd5);
        (**(code **)(*plVar8 + 0x1a8))
                  (plVar8,(*(int *)(this + 0x50) - (int)plVar8[10]) / 2,
                   iVar6 + *(int *)(this + 0x54));
        (**(code **)(**(long **)(this + 0x308) + 0x158))(*(long **)(this + 0x308),1);
        iVar6 = *(int *)(this + 0x2d8);
      }
      goto LAB_042d79f0;
    }
LAB_042d7908:
    (**(code **)(**(long **)(this + 0x2e8) + 0x158))(*(long **)(this + 0x2e8),0);
    (**(code **)(**(long **)(this + 0x2f0) + 0x158))(*(long **)(this + 0x2f0),0);
    plVar8 = *(long **)(this + 0x300);
joined_r0x042d793c:
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x158))(plVar8,0);
      (**(code **)(**(long **)(this + 0x300) + 0x188))(*(long **)(this + 0x300),1);
    }
LAB_042d7968:
    iVar6 = *(int *)(this + 0x2d8);
    plVar8 = *(long **)(this + 0x2f8);
  }
  else {
LAB_042d79f0:
    if (iVar6 != 2) goto LAB_042d7908;
    iVar6 = FUN_042d2594(*(undefined4 *)(this_01 + 0x40));
    if (iVar6 == 0x27) {
      TodStringTranslate(L"[PLANT_ADVENTURE_INTUTORIAL]");
      FUN_054766c8(this + 0x2c0,aSStack_50);
      FUN_05476c50(aSStack_50);
      (**(code **)(**(long **)(this + 0x2e8) + 0x158))(*(long **)(this + 0x2e8),1);
      (**(code **)(**(long **)(this + 0x2f0) + 0x158))(*(long **)(this + 0x2f0),1);
      (**(code **)(**(long **)(this + 0x2e0) + 0x188))(*(long **)(this + 0x2e0),1);
      (**(code **)(**(long **)(this + 0x2f0) + 0x188))(*(long **)(this + 0x2f0),0);
      (**(code **)(**(long **)(this + 0x2e8) + 0x188))(*(long **)(this + 0x2e8),1);
      plVar8 = *(long **)(this + 0x300);
      goto joined_r0x042d793c;
    }
    (**(code **)(**(long **)(this + 0x2f0) + 0x188))(*(long **)(this + 0x2f0),0);
    (**(code **)(**(long **)(this + 0x2e8) + 0x188))(*(long **)(this + 0x2e8),0);
    (**(code **)(**(long **)(this + 0x2e8) + 0x158))(*(long **)(this + 0x2e8),1);
    (**(code **)(**(long **)(this + 0x2f0) + 0x158))(*(long **)(this + 0x2f0),1);
    (**(code **)(**(long **)(this + 0x2e0) + 0x188))(*(long **)(this + 0x2e0),1);
    cVar3 = IsAdvertisementEnable();
    if ((cVar3 != '\0') && (plVar8 = *(long **)(this + 0x300), plVar8 != (long *)0x0)) {
      (**(code **)(*plVar8 + 0x188))(plVar8,0);
      (**(code **)(**(long **)(this + 0x300) + 0x158))(*(long **)(this + 0x300),1);
    }
    if (this[0x148] != (DungeonWidget)0x0) {
LAB_042d7ac8:
      lVar7 = LawnApp::GetRealServerTime(gLawnApp);
      if (lVar7 == 0) {
        TodStringTranslate(L"[PLANT_ADVENTURE_UNCONNECTED]");
        goto LAB_042d7ba0;
      }
      if ((uint)lVar7 < *(uint *)(this + 0x170)) {
        uVar1 = *(uint *)(this + 0x170) - (uint)lVar7;
        uVar2 = (ulong)uVar1 / 0x3c;
        iVar6 = (int)uVar2;
        Sexy::StrFormat(L"%02d:%02d:%02d",aSStack_50,
                        SUB168(SEXT816((long)(ulong)uVar1) * SEXT816(0x48d159e26af37c05),8) >> 10,
                        (ulong)(uint)(iVar6 + (int)(uVar2 / 0x3c) * -0x3c),
                        (ulong)(uVar1 + iVar6 * -0x3c));
        goto LAB_042d7ba0;
      }
      ClearPlantAdventureInfo(this);
      (**(code **)(**(long **)(this + 0x2e8) + 0x158))(*(long **)(this + 0x2e8),0);
      (**(code **)(**(long **)(this + 0x2f0) + 0x158))(*(long **)(this + 0x2f0),0);
      *(undefined4 *)(this + 0x2d8) = 3;
      PlayerInfo::SetPlantAdventureState(this_01,*(int *)(this + 0xf4),3,-1,true,1);
      goto LAB_042d7968;
    }
    PlayerInfo::GetPlantAdventureInfo((int)this_01);
    PlantAdventureInfo::operator=
              ((PlantAdventureInfo *)(this + 0x148),(PlantAdventureInfo *)aSStack_50);
    S2C_Explore_Team::~S2C_Explore_Team(aSStack_50);
    if (this[0x148] != (DungeonWidget)0x0) goto LAB_042d7ac8;
    TodStringTranslate(L"[PLANT_ADVENTURE_UNINITED]");
LAB_042d7ba0:
    FUN_054766c8(this + 0x2c0,aSStack_50);
    FUN_05476c50(aSStack_50);
    iVar6 = *(int *)(this + 0x2d8);
    plVar8 = *(long **)(this + 0x2f8);
  }
  if (iVar6 == 3) {
    (**(code **)(*plVar8 + 0x158))(plVar8,1);
  }
  else {
    (**(code **)(*plVar8 + 0x158))(plVar8,0);
  }
LAB_042d798c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DungeonWidget::ButtonDepress(int) */

void __thiscall DungeonWidget::ButtonDepress(DungeonWidget *this,int param_1)

{
  LawnApp *this_00;
  uint uVar1;
  int iVar2;
  ProfileMgr *this_01;
  long lVar3;
  long *plVar4;
  TGALogMgr *pTVar5;
  PVZ2UIDialog *pPVar6;
  ReceivedDataCallback *pRVar7;
  code *pcVar8;
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_01);
  uVar1 = (uint)this;
  if ((lVar3 == 0) || (iVar2 = FUN_042d2594(*(undefined4 *)(lVar3 + 0x40)), iVar2 != 0x27)) {
    iVar2 = LawnApp::GetRealServerTime(gLawnApp);
    this_00 = gLawnApp;
    if (iVar2 == 0) {
      FUN_05478178((wstring *)asStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",asStack_68);
      FUN_05478178((wstring *)asStack_50,L"[PLANT_ADVENTURE_FINISHED_FAILED]",asStack_60);
      pPVar6 = (PVZ2UIDialog *)
               LawnApp::ShowPVZ2Dialog(this_00,(wstring *)asStack_58,(wstring *)asStack_50);
      FUN_05476c50((wstring *)asStack_50);
      nop();
      FUN_05476c50((wstring *)asStack_58);
      nop();
      FUN_05478178((wstring *)asStack_58,L"[BACK_TO_MAP]",asStack_60);
      pRVar7 = (ReceivedDataCallback *)LawnApp::GetPlantAdventureUI(gLawnApp);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                (pRVar7,PlantAdventureUI::OnBackToMap);
      Sexy::Delegate0::Delegate0<PlantAdventureUI,void(PlantAdventureUI::*)()>
                ((Delegate0 *)aDStack_38,(wstring *)asStack_50);
      PVZ2UIDialog::AddButton(pPVar6,(wstring *)asStack_58,(Delegate0 *)aDStack_38,0);
      FUN_05476c50((wstring *)asStack_58);
      nop();
    }
    else {
      switch(param_1) {
      case 0:
        StartAdventure(uVar1);
        break;
      case 1:
        SuspendAdventure(uVar1);
        break;
      case 2:
        SkipAdventure(uVar1);
        break;
      case 3:
        FinishAdventure(uVar1);
        break;
      case 4:
        plVar4 = (long *)EASquared::Instance();
        pcVar8 = *(code **)(*plVar4 + 0x28);
        std::string::string(asStack_58,"PlantAdventureSkip");
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,onAdsFinish);
        Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::
        Delegate1<DungeonWidget,void(DungeonWidget::*)(EASquaredAdFinishedReason::EASquaredAdFinishedReason)>
                  (aDStack_38,asStack_50);
        (*pcVar8)(plVar4,asStack_58,aDStack_38,0,3,0x54);
        std::string::~string(asStack_58);
        nop();
        pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        std::string::string(asStack_68,"1");
        std::string::string(asStack_60,"");
        std::string::string(asStack_58,"");
        std::string::string(asStack_50,"");
        TGALogMgr::LogAD(pTVar5,asStack_68,asStack_60,0x54,asStack_58,asStack_50);
        std::string::~string(asStack_50);
        nop();
        std::string::~string(asStack_58);
        nop();
        std::string::~string(asStack_60);
        nop();
        std::string::~string(asStack_68);
        nop();
        break;
      case 5:
        AddChance(this);
      }
    }
  }
  else {
    LawnApp::KillGameMaskUI(gLawnApp);
    if (param_1 == 2) {
      LawnApp::KillGameMaskUI(gLawnApp);
      MessageRouter::Post<int,int,bool,int,int,bool>
                ((MessageRouter *)gMessageRouter,Message::StopExplore,*(int *)(this + 0xf4),3,true);
    }
    else if (param_1 == 3) {
      LawnApp::KillGameMaskUI(gLawnApp);
      FinishAdventure(uVar1);
    }
    else if (param_1 == 0) {
      LawnApp::KillGameMaskUI(gLawnApp);
      MessageRouter::Post<int,bool,int,bool>
                ((MessageRouter *)gMessageRouter,Message::GotExplorePlantStatus,
                 *(int *)(this + 0xf4),true);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to DungeonWidget::ButtonDepress(int) */

void __thiscall DungeonWidget::ButtonDepress(DungeonWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* DungeonWidget::~DungeonWidget() */

void __thiscall DungeonWidget::~DungeonWidget(DungeonWidget *this)

{
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0682ee48;
  *(undefined ***)this = &PTR_GetClass_0682eb20;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::string::~string((string *)(this + 0x310));
  std::string::~string((string *)(this + 0x2d0));
  FUN_05476c50(this + 0x2c8);
  FUN_05476c50(this + 0x2c0);
  FUN_05476c50(this + 0x2b8);
  FUN_05476c50(this + 0x2b0);
  FUN_05476c50(this + 0x2a8);
  FUN_05476c50(this + 0x2a0);
  FUN_05476c50(this + 0x298);
  FUN_05476c50(this + 0x290);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x288));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x280));
  S2C_Explore_Team::~S2C_Explore_Team((S2C_Explore_Team *)(this + 0x148));
  WorldDungeonInfo::~WorldDungeonInfo((WorldDungeonInfo *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* DungeonWidget::~DungeonWidget() */

void __thiscall DungeonWidget::~DungeonWidget(DungeonWidget *this)

{
  ~DungeonWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DungeonWidget::RealStartAdventure() */

void __thiscall DungeonWidget::RealStartAdventure(DungeonWidget *this)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  TGALogMgr *pTVar1;
  S2C_Explore_Team aSStack_50 [72];
  long local_8;
  
  this[0xe1] = (DungeonWidget)0x0;
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x2d8) == 1) {
    *(undefined4 *)(this + 0x2d8) = 2;
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if (this_01 != (PlayerInfo *)0x0) {
      PlayerInfo::SetPlantAdventureState
                (this_01,*(int *)(this + 0xf4),*(int *)(this + 0x2d8),-1,true,1);
      PlayerInfo::GetPlantAdventureInfo((int)this_01);
      PlantAdventureInfo::operator=
                ((PlantAdventureInfo *)(this + 0x148),(PlantAdventureInfo *)aSStack_50);
      S2C_Explore_Team::~S2C_Explore_Team(aSStack_50);
      pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      PlantAdventureInfo::PlantAdventureInfo
                ((PlantAdventureInfo *)aSStack_50,(PlantAdventureInfo *)(this + 0x148));
      TGALogMgr::LogPlantAdventure(pTVar1,1,aSStack_50,*(undefined4 *)(this + 0xe8));
      S2C_Explore_Team::~S2C_Explore_Team(aSStack_50);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DungeonWidget::RealStopAdventure(int) */

void __thiscall DungeonWidget::RealStopAdventure(DungeonWidget *this,int param_1)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  TGALogMgr *pTVar2;
  S2C_Explore_Team aSStack_50 [72];
  long local_8;
  
  this[0xe1] = (DungeonWidget)0x0;
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x2d8) == 2) {
    *(int *)(this + 0x2d8) = param_1;
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if (this_01 != (PlayerInfo *)0x0) {
      PlayerInfo::SetPlantAdventureState
                (this_01,*(int *)(this + 0xf4),*(int *)(this + 0x2d8),-1,true,1);
      PlayerInfo::GetPlantAdventureInfo((int)this_01);
      PlantAdventureInfo::operator=
                ((PlantAdventureInfo *)(this + 0x148),(PlantAdventureInfo *)aSStack_50);
      S2C_Explore_Team::~S2C_Explore_Team(aSStack_50);
      uVar1 = 2;
      if (*(int *)(this + 0x2d8) != 1) {
        uVar1 = 3;
      }
      pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      PlantAdventureInfo::PlantAdventureInfo
                ((PlantAdventureInfo *)aSStack_50,(PlantAdventureInfo *)(this + 0x148));
      TGALogMgr::LogPlantAdventure(pTVar2,uVar1,aSStack_50,*(undefined4 *)(this + 0xe8));
      S2C_Explore_Team::~S2C_Explore_Team(aSStack_50);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DungeonWidget::RealFinishAdventure() */

void __thiscall DungeonWidget::RealFinishAdventure(DungeonWidget *this)

{
  char cVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  TGALogMgr *pTVar3;
  int iVar4;
  wstring awStack_58 [8];
  S2C_Explore_Team aSStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x2d8) == 3) {
    pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    PlantAdventureInfo::PlantAdventureInfo
              ((PlantAdventureInfo *)aSStack_50,(PlantAdventureInfo *)(this + 0x148));
    TGALogMgr::LogPlantAdventure
              (pTVar3,4,(PlantAdventureInfo *)aSStack_50,*(undefined4 *)(this + 0xe8));
    S2C_Explore_Team::~S2C_Explore_Team(aSStack_50);
    ClearPlantAdventureInfo(this);
    *(undefined4 *)(this + 0x2d8) = 1;
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    if ((*(int *)(this + 0x2d8) == 4) ||
       (cVar1 = PlayerInfo::HasPlantAdventureChances(this_01,*(int *)(this + 0xf4)), cVar1 != '\0'))
    {
      uVar2 = PlayerInfo::GetPlantAdventureTimes(this_01,*(int *)(this + 0xf4));
      *(undefined4 *)(this + 0xe4) = uVar2;
      TodStringTranslate(L"[PLANT_ADVENTURE_DUNGEON_CHANCES_LEFT]");
      TodReplaceNumberString(awStack_58,L"{CHANCES}",*(int *)(this + 0xe4));
      FUN_054766c8(this + 0x2c8,aSStack_50);
      FUN_05476c50(aSStack_50);
      FUN_05476c50(awStack_58);
      iVar4 = *(int *)(this + 0x2d8);
    }
    else {
      iVar4 = 4;
      *(undefined4 *)(this + 0x2d8) = 4;
    }
    PlayerInfo::SetPlantAdventureState(this_01,*(int *)(this + 0xf4),iVar4,-1,true,1);
    PlayerInfo::GetPlantAdventureInfo((int)this_01);
    PlantAdventureInfo::operator=
              ((PlantAdventureInfo *)(this + 0x148),(PlantAdventureInfo *)aSStack_50);
    S2C_Explore_Team::~S2C_Explore_Team(aSStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DungeonWidget::GetDungeonInfo() */

WorldDungeonInfo * DungeonWidget::GetDungeonInfo(void)

{
  long in_x0;
  WorldDungeonInfo *in_x8;
  
  WorldDungeonInfo::WorldDungeonInfo(in_x8,(WorldDungeonInfo *)(in_x0 + 0xe8));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DungeonWidget::DungeonWidget(WorldDungeonInfo) */

void __thiscall DungeonWidget::DungeonWidget(DungeonWidget *this,WorldDungeonInfo *param_2)

{
  undefined *puVar1;
  undefined **__n;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  __n = &PTR_ButtonPress_0682ee48;
  *(undefined ***)this = &PTR_GetClass_0682eb20;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0682ee48;
  WorldDungeonInfo::WorldDungeonInfo((WorldDungeonInfo *)(this + 0xe8));
  PlantAdventureInfo::PlantAdventureInfo((PlantAdventureInfo *)(this + 0x148));
  Sexy::Insets::Insets((Insets *)(this + 400));
  Sexy::Insets::Insets((Insets *)(this + 0x1a0));
  Sexy::Insets::Insets((Insets *)(this + 0x1b0));
  Sexy::Insets::Insets((Insets *)(this + 0x1c0));
  Sexy::Insets::Insets((Insets *)(this + 0x1d0));
  Sexy::Insets::Insets((Insets *)(this + 0x1e0));
  Sexy::Insets::Insets((Insets *)(this + 0x1f0));
  Sexy::Insets::Insets((Insets *)(this + 0x200));
  Sexy::Insets::Insets((Insets *)(this + 0x210));
  Sexy::Insets::Insets((Insets *)(this + 0x220));
  Sexy::Insets::Insets((Insets *)(this + 0x230));
  Sexy::Insets::Insets((Insets *)(this + 0x240));
  Sexy::Insets::Insets((Insets *)(this + 0x250));
  Sexy::Insets::Insets((Insets *)(this + 0x260));
  Sexy::Insets::Insets((Insets *)(this + 0x270));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x280));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x288));
  FUN_05476574(this + 0x290);
  FUN_05476574(this + 0x298);
  FUN_05476574(this + 0x2a0);
  FUN_05476574(this + 0x2a8);
  FUN_05476574(this + 0x2b0);
  FUN_05476574(this + 0x2b8);
  FUN_05476574(this + 0x2c0);
  FUN_05476574(this + 0x2c8);
  Set8BytesTo0(this + 0x2d0);
  Set8BytesTo0((string *)(this + 0x310));
  this[0x59] = (DungeonWidget)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x288),(RtWeakPtr *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  this[0xe0] = (DungeonWidget)0x0;
  this[0xe1] = (DungeonWidget)0x0;
  WorldDungeonInfo::operator=((WorldDungeonInfo *)(this + 0xe8),param_2);
  std::string::append((string *)(this + 0x310),"",(size_t)__n);
  this[0x318] = (DungeonWidget)0x0;
  *(undefined4 *)(this + 0x31c) = 0;
  *(undefined4 *)(this + 800) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onADFinished);
  local_40 = local_20;
  uStack_38 = uStack_18;
  local_30 = local_10;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<DungeonWidget,void(DungeonWidget::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyADWatchFinish,&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DungeonWidget::Init() */

void __thiscall DungeonWidget::Init(DungeonWidget *this)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  Sexy *this_01;
  string *this_02;
  ButtonListener *pBVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  ProfileMgr *this_03;
  PlayerInfo *this_04;
  wchar_t *pwVar14;
  LotteryResultProgressBar *pLVar15;
  SalesProgressBar *pSVar16;
  PVZ2UIButton *pPVar17;
  string *psVar18;
  string *psVar19;
  string *extraout_x1;
  size_t __n;
  long *plVar20;
  long lVar21;
  code *pcVar22;
  undefined1 auStack_b0 [8];
  string asStack_a8 [8];
  string asStack_a0 [8];
  wstring awStack_98 [8];
  string asStack_90 [8];
  string asStack_88 [56];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = 1;
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x280);
  this_01 = (Sexy *)(this + 0x100);
  (**(code **)(*(long *)this + 0x80))();
  Sexy::StringToUpper(this_01,extraout_x1);
  uVar13 = FUN_0547429c(asStack_a8);
  Sexy::StrFormat("IMAGE_UI_PLANTADVENTURE_BG_%s",asStack_88,uVar13);
  GetImageByNameWithUIFallback(asStack_88);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  std::string::~string(asStack_88);
  cVar3 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)this_00);
  if (cVar3 != '\0') {
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  this_02 = (string *)(this + 0x310);
  psVar19 = (string *)(this + 0x110);
  std::string::append(this_02,"",__n);
  bVar4 = std::operator!=("",psVar19);
  if (bVar4) {
    psVar18 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    FUN_031f5e7c((RtWeakPtr<Sexy::ResourceInfo> *)&local_50,"plant_piece_",psVar19);
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar18);
    std::string::~string((string *)&local_50);
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_88);
    if (cVar3 != '\0') {
      thunk_FUN_05475e00(this_02,psVar19);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_88);
  }
  bVar4 = std::operator==("",this_02);
  if (bVar4) {
    iVar12 = PlantChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar12);
    bVar4 = std::operator!=("",asStack_90);
    if (bVar4) {
      psVar19 = (string *)
                Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
      FUN_031f5e7c((RtWeakPtr<Sexy::ResourceInfo> *)&local_50,"plant_piece_",asStack_90);
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar19);
      std::string::~string((string *)&local_50);
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_88);
      if (cVar3 != '\0') {
        thunk_FUN_05475e00(this_02,asStack_90);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_88);
    }
    std::string::~string(asStack_90);
  }
  bVar4 = false;
  cVar3 = WorldMapUtils::WorldHasHardModule((string *)this_01);
  if (cVar3 != '\0') {
    bVar4 = std::operator!=((string *)this_01,"egypt");
  }
  FUN_05475d88(asStack_a0,this + 0x108);
  this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_04 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_03);
  if (this_04 != (PlayerInfo *)0x0) {
    uVar5 = PlayerInfo::GetPlantAdventureState(this_04,*(int *)(this + 0xf4));
    *(undefined4 *)(this + 0x2d8) = uVar5;
    cVar3 = ProfileUtils::HasCompletedLevel(asStack_a0,bVar4,this_04);
    if (cVar3 == '\0') {
      iVar12 = *(int *)(this + 0xf4);
      *(undefined4 *)(this + 0x2d8) = 5;
      iVar6 = PlayerInfo::GetPlantAdventureAddChances(this_04,iVar12);
      PlayerInfo::SetPlantAdventureState(this_04,iVar12,5,-1,true,iVar6);
    }
    else {
      if ((*(int *)(this + 0x2d8) == 5) || (*(int *)(this + 0x2d8) == 0)) {
        ClearPlantAdventureInfo(this);
        *(undefined4 *)(this + 0x2d8) = 1;
        PlayerInfo::SetPlantAdventureState
                  (this_04,*(int *)(this + 0xf4),1,*(int *)(this + 0xf0),true,1);
      }
      cVar3 = PlayerInfo::HasPlantAdventureChances(this_04,*(int *)(this + 0xf4));
      if (cVar3 == '\0') {
        iVar12 = *(int *)(this + 0xf4);
        *(undefined4 *)(this + 0x2d8) = 4;
        iVar6 = PlayerInfo::GetPlantAdventureAddChances(this_04,iVar12);
        PlayerInfo::SetPlantAdventureState(this_04,iVar12,4,-1,true,iVar6);
        *(undefined4 *)(this + 0xe4) = 0;
        cVar3 = PlayerInfo::HasPlantAdventureAddChances(this_04,*(int *)(this + 0xf4));
      }
      else {
        uVar5 = PlayerInfo::GetPlantAdventureTimes(this_04,*(int *)(this + 0xf4));
        *(undefined4 *)(this + 0xe4) = uVar5;
        TodStringTranslate(L"[PLANT_ADVENTURE_DUNGEON_CHANCES_LEFT]");
        TodReplaceNumberString((wstring *)asStack_88,L"{CHANCES}",*(int *)(this + 0xe4));
        FUN_054766c8(this + 0x2c8,(RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
        FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
        FUN_05476c50(asStack_88);
        cVar3 = PlayerInfo::HasPlantAdventureAddChances(this_04,*(int *)(this + 0xf4));
      }
      if (cVar3 != '\0') {
        uVar5 = PlayerInfo::GetPlantAdventureAddChances(this_04,*(int *)(this + 0xf4));
        *(undefined4 *)(this + 0x31c) = uVar5;
      }
      if (*(int *)(this + 0x2d8) - 2U < 2) {
        PlayerInfo::GetPlantAdventureInfo((int)this_04);
        PlantAdventureInfo::operator=
                  ((PlantAdventureInfo *)(this + 0x148),(PlantAdventureInfo *)&local_50);
        S2C_Explore_Team::~S2C_Explore_Team((S2C_Explore_Team *)&local_50);
      }
    }
  }
  FUN_05475d88((RtWeakPtr<Sexy::ResourceInfo> *)&local_50,this + 0x108);
  GetDungeonNameForShow(awStack_98,this,(RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  std::string::~string((string *)&local_50);
  TodStringTranslate(L"[PLANT_ADVENTURE_DUNGEON_TITLE]");
  TodReplaceString((wstring *)asStack_88,L"{DUNGEON}",awStack_98);
  FUN_054766c8(this + 0x298,(RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  FUN_05476c50(asStack_88);
  TodStringTranslate(L"[PLANT_ADVENTURE_DUNGEON_AWARD]");
  FUN_054766c8(this + 0x2a0,(RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  if (bVar4 == false) {
    pwVar14 = L"[PLANT_ADVENTURE_DUNGEON_CLOSED]";
  }
  else {
    pwVar14 = L"[PLANT_ADVENTURE_DUNGEON_CLOSED_HARD]";
  }
  TodStringTranslate(pwVar14);
  pBVar1 = (ButtonListener *)(this + 0xd8);
  TodReplaceString((wstring *)asStack_88,L"{DUNGEON}",awStack_98);
  FUN_054766c8(this + 0x290,(RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  FUN_05476c50(asStack_88);
  Sexy::StrFormat("%02d:%02d:00",asStack_90,(ulong)(uint)((*(int *)(this + 0xe8) / 0x3c) % 0x3c),
                  (ulong)(uint)(*(int *)(this + 0xe8) % 0x3c));
  TodStringTranslate(L"[PLANT_ADVENTURE_DUNGEON_TIME]");
  FUN_054766c8(this + 0x2a8,(RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  Sexy::ToWString(asStack_90);
  TodStringTranslate((wstring *)asStack_88);
  FUN_054766c8(this + 0x2b0,(RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  FUN_05476c50(asStack_88);
  TodStringTranslate(L"[PLANT_ADVENTURE_DUNGEON_TIME_LEFT]");
  FUN_054766c8(this + 0x2b8,(RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7168);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  iVar6 = iVar6 * 5;
  iVar12 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar12 = iVar6;
  }
  iVar12 = iVar12 >> 2;
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7168);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar16);
  iVar2 = (iVar6 << 2) / 5;
  iVar7 = FUN_042d2d60(5);
  iVar6 = (*(int *)(this + 0x54) - iVar7) - iVar2;
  iVar7 = (*(int *)(this + 0x50) + iVar7 * -2) - iVar12;
  TodStringTranslate(L"[PLANT_ADVENTURE_DUNGEON_START]");
  Sexy::Color::Color((Color *)&local_50,1);
  pPVar17 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar17,0,pBVar1,(wstring *)asStack_88,(Color *)&local_50);
  *(PVZ2UIButton **)(this + 0x2e0) = pPVar17;
  FUN_05476c50(asStack_88);
  (**(code **)(**(long **)(this + 0x2e0) + 0x198))
            (*(long **)(this + 0x2e0),iVar7,iVar6,iVar12,iVar2);
  pPVar17 = *(PVZ2UIButton **)(this + 0x2e0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_88,&DAT_06af71b8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_50,&DAT_06af7230,3);
  PVZ2UIButton::SetDialogStates(pPVar17,(PVZ2UIImage *)asStack_88,(PVZ2UIImage *)&local_50);
  (**(code **)(**(long **)(this + 0x2e0) + 0x188))(*(long **)(this + 0x2e0),0);
  (**(code **)(**(long **)(this + 0x2e0) + 0x158))(*(long **)(this + 0x2e0),0);
  plVar20 = *(long **)(this + 0x2e0);
  pcVar22 = *(code **)(*plVar20 + 800);
  uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  (*pcVar22)(plVar20,uVar13);
  lVar21 = *(long *)(this + 0x2e0);
  pcVar22 = *(code **)(*(long *)this + 0x60);
  *(undefined1 *)(lVar21 + 0x59) = 0;
  (*pcVar22)(this,lVar21);
  TodStringTranslate(L"[PLANT_ADVENTURE_DUNGEON_SKIP]");
  Sexy::Color::Color((Color *)&local_50,1);
  pPVar17 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar17,2,pBVar1,(wstring *)asStack_88,(Color *)&local_50);
  *(PVZ2UIButton **)(this + 0x2f0) = pPVar17;
  FUN_05476c50(asStack_88);
  plVar20 = *(long **)(this + 0x2f0);
  iVar8 = FUN_042d2d60(8);
  (**(code **)(*plVar20 + 0x198))(plVar20,(iVar7 - iVar8) - iVar12,iVar6,iVar12,iVar2);
  pPVar17 = *(PVZ2UIButton **)(this + 0x2f0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_88,&DAT_06af71b8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_50,&DAT_06af7230,3);
  PVZ2UIButton::SetDialogStates(pPVar17,(PVZ2UIImage *)asStack_88,(PVZ2UIImage *)&local_50);
  (**(code **)(**(long **)(this + 0x2f0) + 0x188))(*(long **)(this + 0x2f0),0);
  (**(code **)(**(long **)(this + 0x2f0) + 0x158))(*(long **)(this + 0x2f0),0);
  plVar20 = *(long **)(this + 0x2f0);
  pcVar22 = *(code **)(*plVar20 + 800);
  uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  (*pcVar22)(plVar20,uVar13);
  lVar21 = *(long *)(this + 0x2f0);
  pcVar22 = *(code **)(*(long *)this + 0x60);
  *(undefined1 *)(lVar21 + 0x59) = 0;
  (*pcVar22)(this,lVar21);
  *(undefined8 *)(this + 0x300) = 0;
  if ((this_04 != (PlayerInfo *)0x0) &&
     (iVar8 = FUN_042d2594(*(undefined4 *)(this_04 + 0x40)), iVar8 != 0x27)) {
    FUN_05478178(asStack_88,&DAT_056f11a8,auStack_b0);
    Sexy::Color::Color((Color *)&local_50,1);
    pPVar17 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar17,4,pBVar1,(wstring *)asStack_88,(Color *)&local_50);
    *(PVZ2UIButton **)(this + 0x300) = pPVar17;
    FUN_05476c50(asStack_88);
    nop();
    plVar20 = *(long **)(this + 0x300);
    iVar8 = FUN_042d2d60(8);
    iVar9 = FUN_042d2d60(10);
    (**(code **)(*plVar20 + 0x198))
              (plVar20,(((iVar7 - iVar8) - iVar12) - iVar2) - iVar9,iVar6,iVar2,iVar2);
    pPVar17 = *(PVZ2UIButton **)(this + 0x300);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_88,&DAT_06af7050,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_50,&DAT_06af7050,2);
    PVZ2UIButton::SetDialogStates(pPVar17,(PVZ2UIImage *)asStack_88,(PVZ2UIImage *)&local_50);
    (**(code **)(**(long **)(this + 0x300) + 0x188))(*(long **)(this + 0x300),0);
    (**(code **)(**(long **)(this + 0x300) + 0x158))(*(long **)(this + 0x300),0);
    lVar21 = *(long *)(this + 0x300);
    pcVar22 = *(code **)(*(long *)this + 0x60);
    *(undefined1 *)(lVar21 + 0x59) = 0;
    (*pcVar22)(this,lVar21);
  }
  TodStringTranslate(L"[PLANT_ADVENTURE_DUNGEON_SUSPEND]");
  Sexy::Color::Color((Color *)&local_50,1);
  pPVar17 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar17,1,pBVar1,(wstring *)asStack_88,(Color *)&local_50);
  *(PVZ2UIButton **)(this + 0x2e8) = pPVar17;
  FUN_05476c50(asStack_88);
  (**(code **)(**(long **)(this + 0x2e8) + 0x198))
            (*(long **)(this + 0x2e8),iVar7,iVar6,iVar12,iVar2);
  pPVar17 = *(PVZ2UIButton **)(this + 0x2e8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_88,&DAT_06af72b0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_50,&DAT_06af7458,3);
  PVZ2UIButton::SetDialogStates(pPVar17,(PVZ2UIImage *)asStack_88,(PVZ2UIImage *)&local_50);
  (**(code **)(**(long **)(this + 0x2e8) + 0x188))(*(long **)(this + 0x2e8),0);
  (**(code **)(**(long **)(this + 0x2e8) + 0x158))(*(long **)(this + 0x2e8),0);
  plVar20 = *(long **)(this + 0x2e8);
  pcVar22 = *(code **)(*plVar20 + 800);
  uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  (*pcVar22)(plVar20,uVar13);
  lVar21 = *(long *)(this + 0x2e8);
  pcVar22 = *(code **)(*(long *)this + 0x60);
  *(undefined1 *)(lVar21 + 0x59) = 0;
  (*pcVar22)(this,lVar21);
  iVar12 = *(int *)(this + 0x50);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7078);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  iVar6 = *(int *)(this + 0x54);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7078);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar16);
  iVar9 = FUN_042d2d60(8);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7078);
  iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7078);
  iVar11 = SalesProgressBar::GetCurrentLevel(pSVar16);
  Sexy::Insets::Insets
            ((Insets *)&local_50,(iVar12 - iVar7) / 2,(iVar6 - iVar8) / 2 - iVar9,iVar10,iVar11);
  iVar12 = *(int *)(this + 0x50);
  *(undefined8 *)(this + 0x220) = local_50;
  *(undefined8 *)(this + 0x228) = uStack_48;
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af75b8);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  iVar6 = *(int *)(this + 0x54);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af75b8);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar16);
  iVar9 = FUN_042d2d60(8);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af75b8);
  iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af75b8);
  iVar11 = SalesProgressBar::GetCurrentLevel(pSVar16);
  Sexy::Insets::Insets
            ((Insets *)&local_50,(iVar12 - iVar7) / 2,(iVar6 - iVar8) / 2 - iVar9,iVar10,iVar11);
  *(undefined8 *)(this + 0x230) = local_50;
  *(undefined8 *)(this + 0x238) = uStack_48;
  TodStringTranslate(L"");
  Sexy::Color::Color((Color *)&local_50,1);
  pPVar17 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar17,3,pBVar1,(wstring *)asStack_88,(Color *)&local_50);
  *(PVZ2UIButton **)(this + 0x2f8) = pPVar17;
  FUN_05476c50(asStack_88);
  (**(code **)(**(long **)(this + 0x2f8) + 0x198))
            (*(long **)(this + 0x2f8),*(undefined4 *)(this + 0x220),*(undefined4 *)(this + 0x224),
             *(undefined4 *)(this + 0x228),*(undefined4 *)(this + 0x22c));
  pPVar17 = *(PVZ2UIButton **)(this + 0x2f8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_88,&DAT_06af7078,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_50,&DAT_06af7078,2);
  PVZ2UIButton::SetDialogStates(pPVar17,(PVZ2UIImage *)asStack_88,(PVZ2UIImage *)&local_50);
  (**(code **)(**(long **)(this + 0x2f8) + 0x188))(*(long **)(this + 0x2f8),0);
  (**(code **)(**(long **)(this + 0x2f8) + 0x158))(*(long **)(this + 0x2f8),0);
  lVar21 = *(long *)(this + 0x2f8);
  pcVar22 = *(code **)(*(long *)this + 0x60);
  *(undefined1 *)(lVar21 + 0x59) = 0;
  (*pcVar22)(this,lVar21);
  iVar12 = FUN_042d2d60(8);
  iVar6 = FUN_042d2d60(0x15e);
  iVar7 = FUN_042d2d60(0x23);
  Sexy::Insets::Insets((Insets *)&local_50,iVar12,iVar12,iVar6,iVar7);
  *(undefined8 *)(this + 0x1a0) = local_50;
  *(undefined8 *)(this + 0x1a8) = uStack_48;
  iVar7 = FUN_042d2d60(2);
  iVar8 = FUN_042d2d60(0x30);
  iVar12 = *(int *)(this + 0x54);
  iVar9 = FUN_042d2d60(4);
  iVar6 = *(int *)(this + 0x50);
  iVar10 = FUN_042d2d60(0x2e);
  Sexy::Insets::Insets((Insets *)&local_50,iVar7,iVar12 - iVar8,iVar6 - iVar9,iVar10);
  *(undefined8 *)(this + 0x1b0) = local_50;
  *(undefined8 *)(this + 0x1b8) = uStack_48;
  iVar7 = FUN_042d2d60(8);
  iVar12 = *(int *)(this + 0x1b0);
  iVar8 = FUN_042d2d60(0x23);
  iVar6 = *(int *)(this + 0x1a4);
  iVar9 = FUN_042d2d60(0x15e);
  Sexy::Insets::Insets
            ((Insets *)&local_50,iVar7 + iVar12,iVar8 + iVar6,(int)((double)iVar9 * 0.4),
             (int)((double)iVar8 * 0.8));
  *(undefined8 *)(this + 0x260) = local_50;
  *(undefined8 *)(this + 0x268) = uStack_48;
  iVar7 = FUN_042d2d60(8);
  iVar12 = *(int *)(this + 0x1b0);
  iVar8 = FUN_042d2d60(0x23);
  iVar6 = *(int *)(this + 0x54);
  iVar9 = FUN_042d2d60(0x15e);
  Sexy::Insets::Insets((Insets *)&local_50,iVar7 + iVar12,iVar6 - iVar8,iVar9 / 3,iVar8);
  iVar12 = *(int *)(this + 0x50);
  *(undefined8 *)(this + 0x1c0) = local_50;
  *(undefined8 *)(this + 0x1c8) = uStack_48;
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af70f0);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  iVar7 = FUN_042d2d60(8);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af70f0);
  iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af70f0);
  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar16);
  Sexy::Insets::Insets((Insets *)&local_50,iVar12 - iVar6,iVar7 << 1,iVar8,iVar9);
  *(undefined8 *)(this + 0x1f0) = local_50;
  *(undefined8 *)(this + 0x1f8) = uStack_48;
  iVar6 = FUN_042d2d60(0x78);
  iVar12 = *(int *)(this + 0x1f0);
  iVar7 = FUN_042d2d60(0x23);
  Sexy::Insets::Insets
            ((Insets *)&local_50,iVar12 - iVar6,*(int *)(this + 500),*(int *)(this + 0x1f8),iVar7);
  iVar12 = *(int *)(this + 0x260);
  iVar6 = *(int *)(this + 0x268);
  *(undefined8 *)(this + 0x210) = local_50;
  *(undefined8 *)(this + 0x218) = uStack_48;
  iVar7 = FUN_042d2d60(0x32);
  iVar8 = FUN_042d2d60(8);
  iVar9 = FUN_042d2d60(0x23);
  iVar10 = FUN_042d2d60(0x15e);
  Sexy::Insets::Insets((Insets *)&local_50,iVar12 + iVar6 + iVar7,iVar8 + iVar9,iVar10,iVar9);
  *(undefined8 *)(this + 0x240) = local_50;
  *(undefined8 *)(this + 0x248) = uStack_48;
  iVar12 = FUN_042d2d60(2);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7388);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7388);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar16);
  Sexy::Insets::Insets((Insets *)&local_50,iVar12,iVar12,iVar6,iVar7);
  iVar12 = *(int *)(this + 0x50);
  *(undefined8 *)(this + 0x250) = local_50;
  *(undefined8 *)(this + 600) = uStack_48;
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7610);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  iVar7 = FUN_042d2d60(0x23);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7610);
  iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7610);
  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar16);
  Sexy::Insets::Insets((Insets *)&local_50,iVar12 + iVar6,iVar7,iVar8,iVar9);
  *(undefined8 *)(this + 0x200) = local_50;
  *(undefined8 *)(this + 0x208) = uStack_48;
  FUN_05478178(asStack_88,&DAT_056f11a8,auStack_b0);
  Sexy::Color::Color((Color *)&local_50,1);
  pPVar17 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar17,5,pBVar1,(wstring *)asStack_88,(Color *)&local_50);
  *(PVZ2UIButton **)(this + 0x308) = pPVar17;
  FUN_05476c50(asStack_88);
  nop();
  iVar12 = *(int *)(this + 0x260);
  iVar6 = *(int *)(this + 0x268);
  plVar20 = *(long **)(this + 0x308);
  iVar7 = FUN_042d2d60(10);
  iVar8 = FUN_042d2d60(0xfffffffb);
  (**(code **)(*plVar20 + 0x198))
            (plVar20,iVar12 + iVar6 + iVar7,iVar8 + *(int *)(this + 0x264),iVar2,iVar2);
  pPVar17 = *(PVZ2UIButton **)(this + 0x308);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_88,&DAT_06af7518,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_50,&DAT_06af7310,2);
  PVZ2UIButton::SetDialogStates(pPVar17,(PVZ2UIImage *)asStack_88,(PVZ2UIImage *)&local_50);
  (**(code **)(**(long **)(this + 0x308) + 0x188))(*(long **)(this + 0x308),0);
  (**(code **)(**(long **)(this + 0x308) + 0x158))(*(long **)(this + 0x308),0);
  lVar21 = *(long *)(this + 0x308);
  pcVar22 = *(code **)(*(long *)this + 0x60);
  *(undefined1 *)(lVar21 + 0x59) = 0;
  (*pcVar22)(this,lVar21);
  this[0xe0] = (DungeonWidget)0x1;
  std::string::~string(asStack_90);
  FUN_05476c50(awStack_98);
  std::string::~string(asStack_a0);
  std::string::~string(asStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DungeonWidget::onAdsFinish(EASquaredAdFinishedReason::EASquaredAdFinishedReason) */

void __thiscall DungeonWidget::onAdsFinish(DungeonWidget *this,int param_2)

{
  TGALogMgr *pTVar1;
  long *plVar2;
  undefined8 uVar3;
  ProfileMgr *this_00;
  PlayerInfo *pPVar4;
  undefined1 auStack_78 [16];
  string asStack_68 [8];
  string asStack_60 [8];
  DString aDStack_58 [16];
  DString aDStack_48 [16];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"DungeonWidget::onAdsFinish %d");
  if (param_2 == 0) {
    std::string::string(asStack_68,"2019_SUMMER");
    std::string::string(asStack_38,"AD_CLICK");
    DString::DString(aDStack_58,(string *)(this + 0x108));
    DString::operator_cast_to_string(aDStack_58);
    DString::DString(aDStack_48,0x54);
    DString::operator_cast_to_string(aDStack_48);
    std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,asStack_38,3,auStack_78)
    ;
    std::string::string(asStack_60,"");
    BehaviorLog::inGameBehavior(asStack_68,(vector *)avStack_20,asStack_60);
    std::string::~string(asStack_60);
    nop();
    std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
    std::string::~string(asStack_28);
    std::string::~string(asStack_30);
    std::string::~string(asStack_38);
    DString::~DString(aDStack_48);
    DString::~DString(aDStack_58);
    nop();
    std::string::~string(asStack_68);
    nop();
    pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    std::string::string(asStack_60,"2");
    std::string::string((string *)aDStack_58,"");
    std::string::string((string *)aDStack_48,"");
    std::string::string((string *)avStack_20,"");
    TGALogMgr::LogAD(pTVar1,asStack_60,aDStack_58,0x54,aDStack_48,avStack_20);
    std::string::~string((string *)avStack_20);
    nop();
    std::string::~string((string *)aDStack_48);
    nop();
    std::string::~string((string *)aDStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
    plVar2 = *(long **)(this + 0x300);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x158))(plVar2,0);
      (**(code **)(**(long **)(this + 0x300) + 0x188))(*(long **)(this + 0x300),1);
    }
    plVar2 = (long *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
    (**(code **)(*plVar2 + 0x118))(plVar2,*(undefined4 *)(this + 0xf4),4);
    uVar3 = LawnApp::GetRealServerTime(gLawnApp);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    PlayerInfo::UpdateAdvertisementWatchTimeInfo(pPVar4,2,uVar3,1);
  }
  else {
    pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    std::string::string(asStack_60,"4");
    std::string::string((string *)aDStack_58,"");
    std::string::string((string *)aDStack_48,"");
    std::string::string((string *)avStack_20,"");
    TGALogMgr::LogAD(pTVar1,asStack_60,(string *)aDStack_58,0x54,(string *)aDStack_48,
                     (string *)avStack_20);
    std::string::~string((string *)avStack_20);
    nop();
    std::string::~string((string *)aDStack_48);
    nop();
    std::string::~string((string *)aDStack_58);
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

