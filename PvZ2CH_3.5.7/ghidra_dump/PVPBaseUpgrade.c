// Class: PVPBaseUpgrade


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPBaseUpgrade::~PVPBaseUpgrade() */

void __thiscall PVPBaseUpgrade::~PVPBaseUpgrade(PVPBaseUpgrade *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06950cc8;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_069509a0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_PVP_Upgrade");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPBaseUpgrade::~PVPBaseUpgrade() */

void __thiscall PVPBaseUpgrade::~PVPBaseUpgrade(PVPBaseUpgrade *this)

{
  ~PVPBaseUpgrade(this);
  AK::FreeHook(this);
  return;
}


/* PVPBaseUpgrade::ConfirmCompletePVPUpgrade(int) */

void __thiscall PVPBaseUpgrade::ConfirmCompletePVPUpgrade(PVPBaseUpgrade *this,int param_1)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  
  if (param_1 != 1) {
    return;
  }
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestCompletePVPUpgrade(this_01);
  return;
}


/* PVPBaseUpgrade::GetUpgradeButtonRect() */

void PVPBaseUpgrade::GetUpgradeButtonRect(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long in_x0;
  Insets *in_x8;
  
  iVar2 = FUN_04af66ac(0xe6);
  iVar3 = FUN_04af66ac(0x42);
  iVar4 = FUN_04af66ac(0x30c);
  iVar1 = *(int *)(in_x0 + 0xe0);
  iVar5 = FUN_04af66ac(0xc);
  iVar6 = FUN_04af66ac(0x1ea);
  Sexy::Insets::Insets
            (in_x8,((iVar4 + iVar1) - iVar5) - iVar2,
             ((iVar6 + *(int *)(in_x0 + 0xe4)) - iVar3) - iVar5,iVar2,iVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPBaseUpgrade::DrawRewardPerHour(Sexy::Graphics*, int, int, int) */

void __thiscall
PVPBaseUpgrade::DrawRewardPerHour
          (PVPBaseUpgrade *this,Graphics *param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  wstring awStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[REWARD_PER_HOUR]");
  TodReplaceNumberString(awStack_18,L"{COUNT}",param_4);
  FUN_05476c50(awStack_18);
  iVar2 = FUN_04af66ac(100);
  iVar3 = FUN_04af66ac(0x28);
  Sexy::Insets::Insets(aIStack_28,param_2,param_3,iVar2,iVar3);
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_18;
  Sexy::Color::Color((Color *)awStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar1,awStack_18,0,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPBaseUpgrade::DrawInstruction(Sexy::Graphics*) */

void __thiscall PVPBaseUpgrade::DrawInstruction(PVPBaseUpgrade *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  wstring awStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574(awStack_30);
  iVar6 = *(int *)(this + 0xe8);
  if (iVar6 == 2) {
    pwVar7 = L"[PVP_SUN_LIMIT_CONTENT]";
  }
  else {
    if (iVar6 != 3) {
      if (iVar6 == 1) {
        FUN_054772c4(awStack_30,L"[PVP_BASE_UPGRADE_CONTENT]");
        iVar6 = FUN_04af66ac(0x134);
        iVar6 = iVar6 + *(int *)(this + 0xe4);
      }
      else {
        iVar6 = 0;
      }
      goto LAB_04af68d0;
    }
    pwVar7 = L"[PVP_ZOMBIE_POPULATION_CONTENT]";
  }
  FUN_054772c4(awStack_30,pwVar7);
  iVar6 = FUN_04af66ac(0xf0);
  iVar6 = iVar6 + *(int *)(this + 0xe4);
LAB_04af68d0:
  TodStringTranslate(awStack_30);
  FUN_054766c8(awStack_30,aCStack_18);
  FUN_05476c50(aCStack_18);
  iVar3 = FUN_04af66ac(0x37);
  iVar1 = *(int *)(this + 0xe0);
  iVar4 = FUN_04af66ac(0x172);
  iVar5 = FUN_04af66ac(100);
  Sexy::Insets::Insets(aIStack_28,iVar3 + iVar1,iVar6,iVar4,iVar5);
  uVar2 = PrimeText_Game::Typeface_FZCuYuan_26_Shaded;
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,awStack_30,aIStack_28,uVar2,aCStack_18,0,1);
  FUN_05476c50(awStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPBaseUpgrade::ButtonDepress(int) */

void __thiscall PVPBaseUpgrade::ButtonDepress(PVPBaseUpgrade *this,int param_1)

{
  int iVar1;
  NetworkMgr *pNVar2;
  INetworkMsgProcess *pIVar3;
  AssetsManagerManifest *this_00;
  long lVar4;
  
  switch(param_1) {
  case -10:
    this_00 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar4 = AssetsManagerManifest::getAssets(this_00);
    iVar1 = FUN_04af64fc(*(undefined4 *)(lVar4 + 0x30));
    if (iVar1 == *(int *)(this + 0xe8)) {
      pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
      pIVar3 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
      iVar1 = FUN_04af6500(*(undefined4 *)(lVar4 + 0x34));
      INetworkMsgProcess::RequestPVPUpgradeCancel(pIVar3,*(int *)(this + 0xe8),iVar1);
      return;
    }
    break;
  case -3:
    if (*(PVZ2UIButton **)(this + 0xf0) != (PVZ2UIButton *)0x0) {
      PVZ2UIButton::SetDelayDisabled(*(PVZ2UIButton **)(this + 0xf0),1.0);
    }
    if (*(PVZ2UIButton **)(this + 0xf8) != (PVZ2UIButton *)0x0) {
      PVZ2UIButton::SetDelayDisabled(*(PVZ2UIButton **)(this + 0xf8),1.0);
    }
    pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
    pIVar3 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
    INetworkMsgProcess::RequestPvPUpgradeCompleteGem(pIVar3);
    return;
  case -2:
    if (*(PVZ2UIButton **)(this + 0xf0) != (PVZ2UIButton *)0x0) {
      PVZ2UIButton::SetDelayDisabled(*(PVZ2UIButton **)(this + 0xf0),1.0);
    }
    if (*(PVZ2UIButton **)(this + 0xf8) != (PVZ2UIButton *)0x0) {
      PVZ2UIButton::SetDelayDisabled(*(PVZ2UIButton **)(this + 0xf8),1.0);
    }
    pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
    pIVar3 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
    INetworkMsgProcess::RequestBeginPVPUpgrade(pIVar3,*(int *)(this + 0xe8),0);
    return;
  case -1:
    LawnApp::KillPvpUpgrade(gLawnApp);
    return;
  }
  return;
}


/* non-virtual thunk to PVPBaseUpgrade::ButtonDepress(int) */

void __thiscall PVPBaseUpgrade::ButtonDepress(PVPBaseUpgrade *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* PVPBaseUpgrade::GetPVPCompletePVPUpgrade(S2C_PVPCompleteUpgradeData*) */

void __thiscall
PVPBaseUpgrade::GetPVPCompletePVPUpgrade(PVPBaseUpgrade *this,S2C_PVPCompleteUpgradeData *param_1)

{
  undefined4 uVar1;
  AssetsManagerManifest *pAVar2;
  PVPLabData *pPVar3;
  PlayerInfo *this_00;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  pAVar2 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  pPVar3 = (PVPLabData *)AssetsManagerManifest::getAssets(pAVar2);
  PVPLabData::SetUpgradeItem(pPVar3,0,0,0);
  pAVar2 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  pPVar3 = (PVPLabData *)AssetsManagerManifest::getAssets(pAVar2);
  PVPLabData::SetLabItemLevel(pPVar3,uVar1,*(undefined4 *)(param_1 + 0x18));
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  if (this_00 != (PlayerInfo *)0x0) {
    PlayerInfo::SetGems(this_00,*(int *)(param_1 + 0x20));
    return;
  }
  return;
}


/* PVPBaseUpgrade::GetMaxLevel() */

undefined8 __thiscall PVPBaseUpgrade::GetMaxLevel(PVPBaseUpgrade *this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(this + 0xe8);
  if (iVar1 == 2) {
    lVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar2 = FUN_04af6508(*(undefined8 *)(lVar2 + 0x3f8));
    uVar3 = FUN_04af652c(*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28));
    return uVar3;
  }
  if (iVar1 != 3) {
    if (iVar1 != 1) {
      return 0;
    }
    lVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar2 = FUN_04af6508(*(undefined8 *)(lVar2 + 0x3f8));
    uVar3 = FUN_04af650c(*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
    return uVar3;
  }
  lVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  lVar2 = FUN_04af6508(*(undefined8 *)(lVar2 + 0x3f8));
  uVar3 = FUN_04af652c(*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40));
  return uVar3;
}


/* PVPBaseUpgrade::GetUpgradeCost(int) */

undefined4 __thiscall PVPBaseUpgrade::GetUpgradeCost(PVPBaseUpgrade *this,int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)(this + 0xe8);
  iVar2 = param_1 + -1;
  if (iVar1 == 2) {
    lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar3 = FUN_04af6508(*(undefined8 *)(lVar3 + 0x3f8));
    lVar3 = FUN_04af6540(*(undefined8 *)(lVar3 + 0x20),(long)iVar2);
    return *(undefined4 *)(lVar3 + 4);
  }
  if (iVar1 != 3) {
    if (iVar1 != 1) {
      return 0;
    }
    lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar3 = FUN_04af6508(*(undefined8 *)(lVar3 + 0x3f8));
    lVar3 = FUN_04af6520(*(undefined8 *)(lVar3 + 8),(long)iVar2);
    return *(undefined4 *)(lVar3 + 0x10);
  }
  lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  lVar3 = FUN_04af6508(*(undefined8 *)(lVar3 + 0x3f8));
  lVar3 = FUN_04af6540(*(undefined8 *)(lVar3 + 0x38),(long)iVar2);
  return *(undefined4 *)(lVar3 + 4);
}


/* PVPBaseUpgrade::BeginPVPUpgradeSuccess() */

void __thiscall PVPBaseUpgrade::BeginPVPUpgradeSuccess(PVPBaseUpgrade *this)

{
  int iVar1;
  int iVar2;
  AssetsManagerManifest *pAVar3;
  PVPLabData *pPVar4;
  long lVar5;
  int iVar6;
  
  pAVar3 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  pPVar4 = (PVPLabData *)AssetsManagerManifest::getAssets(pAVar3);
  iVar2 = PVPLabData::GetLabItemLevel(pPVar4,*(undefined4 *)(this + 0xe8));
  iVar2 = iVar2 + -1;
  iVar1 = *(int *)(this + 0xe8);
  if (iVar1 == 2) {
    lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar5 = FUN_04af6508(*(undefined8 *)(lVar5 + 0x3f8));
    lVar5 = FUN_04af6540(*(undefined8 *)(lVar5 + 0x20),(long)iVar2);
    iVar6 = (int)*(float *)(lVar5 + 8);
  }
  else if (iVar1 == 3) {
    lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar5 = FUN_04af6508(*(undefined8 *)(lVar5 + 0x3f8));
    lVar5 = FUN_04af6540(*(undefined8 *)(lVar5 + 0x38),(long)iVar2);
    iVar6 = (int)*(float *)(lVar5 + 8);
  }
  else {
    iVar6 = 0;
    if (iVar1 == 1) {
      lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      lVar5 = FUN_04af6508(*(undefined8 *)(lVar5 + 0x3f8));
      lVar5 = FUN_04af6520(*(undefined8 *)(lVar5 + 8),(long)iVar2);
      iVar6 = (int)*(float *)(lVar5 + 0x14);
    }
  }
  pAVar3 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  pPVar4 = (PVPLabData *)AssetsManagerManifest::getAssets(pAVar3);
  PVPLabData::SetUpgradeItem(pPVar4,*(undefined4 *)(this + 0xe8),0,iVar6);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPBaseUpgrade::GetTimeLeft() */

void __thiscall PVPBaseUpgrade::GetTimeLeft(PVPBaseUpgrade *this)

{
  int iVar1;
  AssetsManagerManifest *pAVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  int local_10 [2];
  long local_8;
  
  local_10[0] = 0;
  iVar5 = 0;
  local_8 = ___stack_chk_guard;
  pAVar2 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  lVar3 = AssetsManagerManifest::getAssets(pAVar2);
  iVar1 = FUN_04af64fc(*(undefined4 *)(lVar3 + 0x30));
  if (iVar1 == *(int *)(this + 0xe8)) {
    pAVar2 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar3 = AssetsManagerManifest::getAssets(pAVar2);
    fVar6 = (float)FUN_04af6504(*(undefined4 *)(lVar3 + 0x38));
    local_10[0] = (int)fVar6;
    fVar7 = (float)local_10[0];
    fVar6 = (float)PVZ_EOT();
    if (fVar7 != fVar6) {
      fVar6 = (float)PVZ_T();
      local_10[1] = 0;
      local_10[0] = (int)(fVar7 - fVar6);
      piVar4 = eastl::max_alt<int>(local_10 + 1,local_10);
      iVar5 = *piVar4;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPBaseUpgrade::GetPVPCompleteUpgradeGemSuccess(int) */

void __thiscall PVPBaseUpgrade::GetPVPCompleteUpgradeGemSuccess(PVPBaseUpgrade *this,int param_1)

{
  PVPFinishButton *pPVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CardGameDeckButton::SetIndex(*(CardGameDeckButton **)(this + 0xf8),param_1);
  pPVar1 = *(PVPFinishButton **)(this + 0xf8);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ConfirmCompletePVPUpgrade);
  Sexy::Delegate1<int>::Delegate1<PVPBaseUpgrade,void(PVPBaseUpgrade::*)(int)>
            (aDStack_38,aCStack_50);
  PVPFinishButton::ShowBuyConfirm(pPVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPBaseUpgrade::GetTitle() */

undefined8 __thiscall PVPBaseUpgrade::GetTitle(PVPBaseUpgrade *this)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(this + 0xe8);
  if (iVar1 == 2) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82568);
    return uVar2;
  }
  if (iVar1 != 3) {
    if (iVar1 != 1) {
      return 0;
    }
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b823c8);
    return uVar2;
  }
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b827c8);
  return uVar2;
}


/* PVPBaseUpgrade::GetBackImage() */

undefined8 __thiscall PVPBaseUpgrade::GetBackImage(PVPBaseUpgrade *this)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(this + 0xe8);
  if (iVar1 == 2) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82608);
    return uVar2;
  }
  if (iVar1 != 3) {
    if (iVar1 != 1) {
      return 0;
    }
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82718);
    return uVar2;
  }
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b824e0);
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPBaseUpgrade::DrawLevel(Sexy::Graphics*, int, int, int) */

void __thiscall
PVPBaseUpgrade::DrawLevel
          (PVPBaseUpgrade *this,Graphics *param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  Image *pIVar3;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82350);
  Sexy::Graphics::DrawImage(param_1,pIVar3,param_2,param_3);
  iVar2 = FUN_04af66ac(0x28);
  Sexy::Insets::Insets(aIStack_28,param_2,param_3,iVar2,iVar2);
  Sexy::StrFormat(L"%d",auStack_30,(ulong)(uint)param_4);
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_19_HardShadow;
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar1,aCStack_18,5,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPBaseUpgrade::DrawProcessBar(Sexy::Graphics*, int, int, int, int) */

void __thiscall
PVPBaseUpgrade::DrawProcessBar
          (PVPBaseUpgrade *this,Graphics *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  LotteryResultProgressBar *pLVar6;
  SalesProgressBar *pSVar7;
  undefined1 auStack_40 [8];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82630);
  Sexy::Graphics::DrawImage(param_1,pIVar5,param_2,param_3);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b824b8);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  pSVar7 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b824b8);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar7);
  Sexy::Insets::Insets(aIStack_38,0,0,(int)((float)iVar2 * ((float)param_4 / (float)param_5)),iVar3)
  ;
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b824b8);
  iVar2 = FUN_04af66ac(1);
  Sexy::Graphics::DrawImage(param_1,pIVar5,iVar2 + param_2,param_3 + iVar2,(TRect *)aIStack_38);
  Sexy::StrFormat(L"%d/%d",auStack_40,(ulong)(uint)param_4,(ulong)(uint)param_5);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b824b8);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  pSVar7 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b824b8);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar7);
  iVar4 = FUN_04af66ac(4);
  Sexy::Insets::Insets(aIStack_28,param_2,param_3,iVar2,iVar3 + iVar4);
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_19_HardShadow;
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar1,aCStack_18,5,1);
  FUN_05476c50(auStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPBaseUpgrade::DrawCurrentBox(Sexy::Graphics*, int, int, int, Sexy::Image*) */

void __thiscall
PVPBaseUpgrade::DrawCurrentBox
          (PVPBaseUpgrade *this,Graphics *param_1,int param_2,int param_3,int param_4,Image *param_5
          )

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  SalesProgressBar *pSVar6;
  int local_38;
  int local_34;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82378);
  Sexy::Graphics::DrawImage(param_1,pIVar5,param_2,param_3);
  iVar2 = FUN_04af66ac(0x1e);
  iVar3 = FUN_04af66ac(0);
  Sexy::Point::Point((Point *)&local_38,iVar2,iVar3);
  pSVar6 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82378);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar6);
  iVar3 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_5);
  iVar2 = local_34 + (iVar2 - iVar3) / 2;
  pSVar6 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82378);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar6);
  iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_5);
  if (iVar3 < iVar4) {
    iVar3 = FUN_04af66ac(5);
    iVar2 = iVar2 - iVar3;
  }
  iVar3 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_5);
  Sexy::Graphics::DrawImage(param_1,param_5,(param_2 + local_38) - iVar3 / 2,param_3 + iVar2);
  iVar2 = FUN_04af66ac(0x32);
  iVar3 = FUN_04af66ac(100);
  pSVar6 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82378);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar6);
  Sexy::Insets::Insets(aIStack_28,iVar2 + param_2,param_3,iVar3,iVar4);
  Sexy::StrFormat(L"%d",auStack_30,(ulong)(uint)param_4);
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar1,aCStack_18,5,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPBaseUpgrade::DrawMaxState(Sexy::Graphics*, int) */

void __thiscall PVPBaseUpgrade::DrawMaxState(PVPBaseUpgrade *this,Graphics *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  Image *pIVar8;
  Image *pIVar9;
  int iVar10;
  
  iVar10 = *(int *)(this + 0xe8);
  if (iVar10 == 2) {
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82508);
    lVar6 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar6 = FUN_04af6508(*(undefined8 *)(lVar6 + 0x3f8));
    piVar7 = (int *)FUN_04af6540(*(undefined8 *)(lVar6 + 0x20),(long)(param_2 + -1));
    iVar10 = *piVar7;
  }
  else if (iVar10 == 3) {
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82800);
    lVar6 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar6 = FUN_04af6508(*(undefined8 *)(lVar6 + 0x3f8));
    piVar7 = (int *)FUN_04af6540(*(undefined8 *)(lVar6 + 0x38),(long)(param_2 + -1));
    iVar10 = *piVar7;
  }
  else if (iVar10 == 1) {
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82828);
    lVar6 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar6 = FUN_04af6508(*(undefined8 *)(lVar6 + 0x3f8));
    piVar7 = (int *)FUN_04af6520(*(undefined8 *)(lVar6 + 8),(long)(param_2 + -1));
    iVar4 = FUN_04af66ac(0x37);
    iVar10 = piVar7[3];
    iVar1 = *(int *)(this + 0xe0);
    iVar5 = FUN_04af66ac(0xe6);
    iVar2 = *(int *)(this + 0xe4);
    iVar3 = piVar7[2];
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b826c8);
    DrawCurrentBox(this,param_1,iVar4 + iVar1,iVar5 + iVar2,iVar3,pIVar8);
    iVar2 = FUN_04af66ac(0x76);
    iVar1 = *(int *)(this + 0xe0);
    iVar3 = FUN_04af66ac(0xc3);
    DrawRewardPerHour(this,param_1,iVar2 + iVar1,iVar3 + *(int *)(this + 0xe4),piVar7[1]);
    iVar2 = FUN_04af66ac(0x76);
    iVar1 = *(int *)(this + 0xe0);
    iVar3 = FUN_04af66ac(0x11d);
    DrawRewardPerHour(this,param_1,iVar2 + iVar1,iVar3 + *(int *)(this + 0xe4),*piVar7);
  }
  else {
    iVar10 = 0;
    pIVar9 = (Image *)0x0;
  }
  iVar2 = FUN_04af66ac(0x37);
  iVar1 = *(int *)(this + 0xe0);
  iVar3 = FUN_04af66ac(0x8c);
  DrawCurrentBox(this,param_1,iVar2 + iVar1,iVar3 + *(int *)(this + 0xe4),iVar10,pIVar9);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPBaseUpgrade::DrawNextLevel(Sexy::Graphics*, int, int, int, int, Sexy::Image*, bool) */

void __thiscall
PVPBaseUpgrade::DrawNextLevel
          (PVPBaseUpgrade *this,Graphics *param_1,int param_2,int param_3,int param_4,int param_5,
          Image *param_6,bool param_7)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  LotteryResultProgressBar *pLVar6;
  SalesProgressBar *pSVar7;
  int iVar8;
  int local_48;
  int local_44;
  undefined1 auStack_40 [8];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b825e0);
  iVar2 = FUN_04af66ac(2);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b825e0);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  pSVar7 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b825e0);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar7);
  Sexy::Graphics::DrawImage
            (param_1,pIVar5,param_2,param_3 - iVar2,(int)((float)iVar3 * 0.7),
             (int)((float)iVar4 * 0.7));
  DrawCurrentBox(this,param_1,param_2,param_3,param_4,param_6);
  iVar2 = FUN_04af66ac(0x1e);
  iVar3 = FUN_04af66ac(0);
  Sexy::Point::Point((Point *)&local_48,iVar2,iVar3);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b825e0);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  iVar3 = FUN_04af66ac(5);
  iVar8 = (int)(((float)iVar2 * 0.7 - (float)iVar3) + (float)param_2);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b823f0);
  Sexy::Graphics::DrawImage(param_1,pIVar5,iVar8,param_3);
  iVar2 = FUN_04af66ac(0x10e);
  iVar3 = FUN_04af66ac(100);
  pSVar7 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82378);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar7);
  Sexy::Insets::Insets(aIStack_38,iVar2 + param_2,param_3,iVar3,iVar4);
  Sexy::StrFormat(L"%d",aIStack_28,(ulong)(uint)param_5);
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,aIStack_28,aIStack_38,uVar1,aCStack_18,5,1);
  FUN_05476c50(aIStack_28);
  pSVar7 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82378);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar7);
  iVar3 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_6);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_6);
  Sexy::Graphics::DrawImage
            (param_1,param_6,(iVar8 + local_48) - iVar4 / 2,param_3 + local_44 + (iVar2 - iVar3) / 2
            );
  if (param_7) {
    TodStringTranslate(L"[NEXT_LEVEL]");
    iVar2 = FUN_04af66ac(0x122);
    iVar3 = FUN_04af66ac(0x14);
    iVar4 = FUN_04af66ac(100);
    iVar8 = FUN_04af66ac(0x28);
    Sexy::Insets::Insets(aIStack_28,iVar2 + param_2,param_3 - iVar3,iVar4,iVar8);
    uVar1 = PrimeText_Game::Typeface_FZCuYuan_19_Outline;
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_40,aIStack_28,uVar1,aCStack_18,0,1);
    FUN_05476c50(auStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPBaseUpgrade::DrawCurrentAndNextState(Sexy::Graphics*, int) */

void __thiscall
PVPBaseUpgrade::DrawCurrentAndNextState(PVPBaseUpgrade *this,Graphics *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  Image *pIVar10;
  int iVar11;
  Image *pIVar12;
  int iVar13;
  
  iVar13 = *(int *)(this + 0xe8);
  if (iVar13 == 2) {
    pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82508);
    lVar7 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar7 = FUN_04af6508(*(undefined8 *)(lVar7 + 0x3f8));
    piVar8 = (int *)FUN_04af6540(*(undefined8 *)(lVar7 + 0x20),(long)(param_2 + -1));
    iVar13 = *piVar8;
    lVar7 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar7 = FUN_04af6508(*(undefined8 *)(lVar7 + 0x3f8));
    piVar8 = (int *)FUN_04af6540(*(undefined8 *)(lVar7 + 0x20),(long)param_2);
    iVar11 = *piVar8;
  }
  else if (iVar13 == 3) {
    pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82800);
    lVar7 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar7 = FUN_04af6508(*(undefined8 *)(lVar7 + 0x3f8));
    piVar8 = (int *)FUN_04af6540(*(undefined8 *)(lVar7 + 0x38),(long)(param_2 + -1));
    iVar13 = *piVar8;
    lVar7 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar7 = FUN_04af6508(*(undefined8 *)(lVar7 + 0x3f8));
    piVar8 = (int *)FUN_04af6540(*(undefined8 *)(lVar7 + 0x38),(long)param_2);
    iVar11 = *piVar8;
  }
  else if (iVar13 == 1) {
    pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82828);
    lVar7 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar7 = FUN_04af6508(*(undefined8 *)(lVar7 + 0x3f8));
    piVar8 = (int *)FUN_04af6520(*(undefined8 *)(lVar7 + 8),(long)(param_2 + -1));
    lVar7 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar7 = FUN_04af6508(*(undefined8 *)(lVar7 + 0x3f8));
    piVar9 = (int *)FUN_04af6520(*(undefined8 *)(lVar7 + 8),(long)param_2);
    iVar13 = piVar8[3];
    iVar5 = FUN_04af66ac(0x37);
    iVar11 = piVar9[3];
    iVar1 = *(int *)(this + 0xe0);
    iVar6 = FUN_04af66ac(0xe6);
    iVar3 = *(int *)(this + 0xe4);
    iVar4 = piVar8[2];
    iVar2 = piVar9[2];
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b826c8);
    DrawNextLevel(this,param_1,iVar5 + iVar1,iVar6 + iVar3,iVar4,iVar2,pIVar10,false);
    iVar3 = FUN_04af66ac(0x76);
    iVar1 = *(int *)(this + 0xe0);
    iVar4 = FUN_04af66ac(0xc3);
    DrawRewardPerHour(this,param_1,iVar3 + iVar1,iVar4 + *(int *)(this + 0xe4),piVar8[1]);
    iVar3 = FUN_04af66ac(0x154);
    iVar1 = *(int *)(this + 0xe0);
    iVar4 = FUN_04af66ac(0xc3);
    DrawRewardPerHour(this,param_1,iVar3 + iVar1,iVar4 + *(int *)(this + 0xe4),piVar9[1]);
    iVar3 = FUN_04af66ac(0x76);
    iVar1 = *(int *)(this + 0xe0);
    iVar4 = FUN_04af66ac(0x11d);
    DrawRewardPerHour(this,param_1,iVar3 + iVar1,iVar4 + *(int *)(this + 0xe4),*piVar8);
    iVar3 = FUN_04af66ac(0x154);
    iVar1 = *(int *)(this + 0xe0);
    iVar4 = FUN_04af66ac(0x11d);
    DrawRewardPerHour(this,param_1,iVar3 + iVar1,iVar4 + *(int *)(this + 0xe4),*piVar9);
  }
  else {
    iVar11 = 0;
    pIVar12 = (Image *)0x0;
    iVar13 = 0;
  }
  iVar3 = FUN_04af66ac(0x37);
  iVar1 = *(int *)(this + 0xe0);
  iVar4 = FUN_04af66ac(0x8c);
  DrawNextLevel(this,param_1,iVar3 + iVar1,iVar4 + *(int *)(this + 0xe4),iVar13,iVar11,pIVar12,true)
  ;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPBaseUpgrade::DrawCompleteButton(Sexy::Graphics*, int) */

void __thiscall
PVPBaseUpgrade::DrawCompleteButton(PVPBaseUpgrade *this,Graphics *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  Image *pIVar9;
  LotteryResultProgressBar *pLVar10;
  SalesProgressBar *pSVar11;
  undefined1 auStack_40 [8];
  int local_38;
  int local_34;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetUpgradeButtonRect();
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_38);
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82540);
  Draw9SliceImage(param_1,aIStack_18,uVar8);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82770);
  iVar6 = local_38;
  iVar1 = FUN_04af66ac(10);
  iVar7 = local_34;
  iVar2 = FUN_04af66ac(0xf);
  Sexy::Graphics::DrawImage(param_1,pIVar9,iVar6 + iVar1,iVar7 + iVar2);
  iVar6 = local_38;
  iVar1 = FUN_04af66ac(10);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82770);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  iVar7 = local_34;
  iVar3 = FUN_04af66ac(0xd);
  iVar4 = FUN_04af66ac(0x32);
  iVar5 = FUN_04af66ac(0x28);
  Sexy::Insets::Insets(aIStack_28,iVar6 + iVar1 + iVar2,iVar7 + iVar3,iVar4,iVar5);
  Sexy::StrFormat(L"%d",auStack_40,(ulong)(uint)param_2);
  uVar8 = PrimeText_Game::Typeface_CafeteriaBlack_28_Outline;
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar8,aIStack_18,0,1);
  FUN_05476c50(auStack_40);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82418);
  iVar6 = local_38;
  iVar1 = FUN_04af66ac(0x57);
  iVar7 = local_34;
  iVar2 = FUN_04af66ac(4);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82418);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82418);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar11);
  Sexy::Graphics::DrawImage
            (param_1,pIVar9,iVar6 + iVar1,iVar7 + iVar2,iVar3,(int)((double)iVar4 * 0.85));
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82490);
  iVar6 = FUN_04af66ac(0x5a);
  iVar7 = FUN_04af66ac(0xf);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82490);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82490);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar11);
  Sexy::Graphics::DrawImage
            (param_1,pIVar9,local_38 + iVar6,local_34 + iVar7,(int)((float)iVar1 * 0.9),
             (int)((float)iVar2 * 0.9));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPBaseUpgrade::DrawUpgradeButton(Sexy::Graphics*, int) */

void __thiscall
PVPBaseUpgrade::DrawUpgradeButton(PVPBaseUpgrade *this,Graphics *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  Image *pIVar9;
  LotteryResultProgressBar *pLVar10;
  SalesProgressBar *pSVar11;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04af66ac(0xe6);
  iVar3 = FUN_04af66ac(0x42);
  iVar4 = FUN_04af66ac(0x30c);
  iVar1 = *(int *)(this + 0xe0);
  iVar5 = FUN_04af66ac(0xc);
  iVar1 = ((iVar4 + iVar1) - iVar5) - iVar2;
  iVar4 = FUN_04af66ac(0x1ea);
  iVar5 = ((iVar4 + *(int *)(this + 0xe4)) - iVar3) - iVar5;
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar5,iVar2,iVar3);
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82540);
  Draw9SliceImage(param_1,aIStack_18,uVar8);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b826c8);
  iVar2 = FUN_04af66ac(10);
  iVar3 = FUN_04af66ac(0xf);
  Sexy::Graphics::DrawImage(param_1,pIVar9,iVar2 + iVar1,iVar3 + iVar5);
  iVar2 = FUN_04af66ac(10);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82770);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  iVar4 = FUN_04af66ac(0xd);
  iVar6 = FUN_04af66ac(100);
  iVar7 = FUN_04af66ac(0x28);
  Sexy::Insets::Insets(aIStack_28,iVar2 + iVar1 + iVar3,iVar4 + iVar5,iVar6,iVar7);
  Sexy::StrFormat(L"%d",auStack_30,(ulong)(uint)param_2);
  uVar8 = PrimeText_Game::Typeface_CafeteriaBlack_28_Outline;
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar8,aIStack_18,0,1);
  FUN_05476c50(auStack_30);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82418);
  iVar2 = FUN_04af66ac(0x82);
  iVar3 = FUN_04af66ac(4);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82418);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82418);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar11);
  Sexy::Graphics::DrawImage
            (param_1,pIVar9,iVar2 + iVar1,iVar3 + iVar5,iVar4,(int)((double)iVar6 * 0.85));
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b826f0);
  iVar2 = FUN_04af66ac(0x8c);
  iVar3 = FUN_04af66ac(0xf);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b826f0);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b826f0);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar11);
  Sexy::Graphics::DrawImage
            (param_1,pIVar9,iVar2 + iVar1,iVar3 + iVar5,(int)((float)iVar4 * 0.9),
             (int)((float)iVar6 * 0.9));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPBaseUpgrade::DrawUpagradeReady(Sexy::Graphics*, int) */

void __thiscall
PVPBaseUpgrade::DrawUpagradeReady(PVPBaseUpgrade *this,Graphics *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  LotteryResultProgressBar *this_00;
  Image *pIVar10;
  undefined1 auStack_30 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04af66ac(0x46);
  iVar2 = iVar2 + *(int *)(this + 0xe0);
  iVar3 = FUN_04af66ac(0x1ea);
  iVar5 = *(int *)(this + 0xe4);
  iVar4 = FUN_04af66ac(0x48);
  iVar4 = (iVar3 + iVar5) - iVar4;
  DrawLevel(this,param_1,iVar2,iVar4,param_2);
  iVar5 = FUN_04af66ac(0x62);
  this_00 = (LotteryResultProgressBar *)GetTitle(this);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar6 = FUN_04af66ac(0xc);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar8 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)this_00,(int)((float)(iVar5 + iVar2) - (float)iVar3 * 0.25),
             iVar6 + iVar4,(int)((float)iVar7 * 0.5),(int)((float)iVar8 * 0.5));
  TodStringTranslate(L"[UPGRADE_CONSUME]");
  iVar5 = FUN_04af66ac(0x9b);
  iVar3 = FUN_04af66ac(0xd);
  iVar6 = FUN_04af66ac(0xe6);
  iVar7 = FUN_04af66ac(0x28);
  Sexy::Insets::Insets((Insets *)&local_28,iVar5 + iVar2,iVar3 + iVar4,iVar6,iVar7);
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_18;
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,auStack_30,(Insets *)&local_28,uVar1,(Insets *)&local_18,0,1);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b826c8);
  iVar5 = FUN_04af66ac(0xe1);
  Sexy::Graphics::DrawImage(param_1,pIVar10,iVar5 + iVar2,iVar4);
  uVar9 = GetUpgradeCost(this,param_2);
  Sexy::StrFormat(L"%d",(Insets *)&local_18,(ulong)uVar9);
  FUN_054766c8(auStack_30,(Insets *)&local_18);
  FUN_05476c50((Insets *)&local_18);
  iVar5 = FUN_04af66ac(0xfa);
  iVar3 = FUN_04af66ac(0xc);
  iVar6 = FUN_04af66ac(0x46);
  iVar7 = FUN_04af66ac(0x1e);
  Sexy::Insets::Insets((Insets *)&local_18,iVar5 + iVar2,iVar3 + iVar4,iVar6,iVar7);
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_19_Outline;
  local_28 = local_18;
  uStack_20 = uStack_10;
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,auStack_30,(Insets *)&local_28,uVar1,(Insets *)&local_18,2,1);
  iVar5 = FUN_04af66ac(0x181);
  DrawLevel(this,param_1,iVar5 + iVar2,iVar4,param_2 + 1);
  DrawUpgradeButton(this,param_1,uVar9);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPBaseUpgrade::DrawTimeLeft(Sexy::Graphics*, int) */

void __thiscall PVPBaseUpgrade::DrawTimeLeft(PVPBaseUpgrade *this,Graphics *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  SalesProgressBar *pSVar11;
  Image *pIVar12;
  LotteryResultProgressBar *this_00;
  int extraout_w1;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_04af66ac(200);
  iVar1 = *(int *)(this + 0xe0);
  iVar4 = FUN_04af66ac(0x1ea);
  iVar10 = *(int *)(this + 0xe4);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82468);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar11);
  iVar6 = FUN_04af66ac(0x20);
  iVar6 = ((iVar4 + iVar10) - iVar5) - iVar6;
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82468);
  Sexy::Graphics::DrawImage(param_1,pIVar12,iVar3 + iVar1,iVar6);
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82740);
  iVar5 = FUN_04af66ac(0x32);
  iVar10 = *(int *)(this + 0xe0);
  iVar7 = FUN_04af66ac(0x1ea);
  iVar4 = *(int *)(this + 0xe4);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82740);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar11);
  iVar9 = FUN_04af66ac(0x20);
  Sexy::Graphics::DrawImage(param_1,pIVar12,iVar5 + iVar10,((iVar7 + iVar4) - iVar8) - iVar9);
  StringHelper::ToTimeString((StringHelper *)0x0,(float)param_2,extraout_w1);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82468);
  iVar10 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82468);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar11);
  Sexy::Insets::Insets(aIStack_28,iVar3 + iVar1,iVar6,iVar10,iVar4);
  uVar2 = PrimeText_Game::Typeface_FZCuYuan_20;
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar2,aCStack_18,5,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPBaseUpgrade::DrawUnlockZombie(Sexy::Graphics*, std::vector<std::string,
   std::allocator<std::string > > const&) */

void __thiscall
PVPBaseUpgrade::DrawUnlockZombie(PVPBaseUpgrade *this,Graphics *param_1,vector *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  string *psVar5;
  SeedPacketUtils *pSVar6;
  PacketRenderData *pPVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  string asStack_18 [8];
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82300);
  iVar1 = FUN_04af66ac(0x208);
  iVar3 = *(int *)(this + 0xe0);
  iVar2 = FUN_04af66ac(0x113);
  Sexy::Graphics::DrawImage(param_1,pIVar4,iVar1 + iVar3,iVar2 + *(int *)(this + 0xe4));
  std::string::string(asStack_18,"IMAGE_UI_ZOMBIE_PVP1_PACKETS_");
  nop();
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  iVar1 = FUN_04af66ac(0x208);
  iVar3 = *(int *)(this + 0xe0);
  iVar2 = FUN_04af66ac(0x127);
  Sexy::Graphics::Translate(param_1,iVar1 + iVar3,iVar2 + *(int *)(this + 0xe4));
  uVar9 = 0;
  while( true ) {
    uVar10 = *(undefined8 *)param_2;
    uVar8 = FUN_04af654c(uVar10,*(undefined8 *)(param_2 + 8));
    if (uVar8 <= uVar9) break;
    psVar5 = (string *)FUN_04af6558(uVar10,uVar9);
    pSVar6 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    pPVar7 = (PacketRenderData *)
             SeedPacketUtils::GetZombiePacketRenderData(pSVar6,psVar5,asStack_18,-1);
    pSVar6 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    SeedPacketUtils::DrawPacket(pSVar6,param_1,pPVar7,false,-1,false,false);
    iVar3 = FUN_04af66ac(0x50);
    Sexy::Graphics::Translate(param_1,iVar3,0);
    uVar9 = uVar9 + 1;
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPBaseUpgrade::PVPBaseUpgrade(PVPLabItemType) */

void __thiscall PVPBaseUpgrade::PVPBaseUpgrade(PVPBaseUpgrade *this,undefined4 param_2)

{
  ButtonListener *this_00;
  undefined *puVar1;
  LawnApp *pLVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  PVZ2UIButton *pPVar12;
  LotteryResultProgressBar *pLVar13;
  SalesProgressBar *pSVar14;
  PVPFinishButton *this_01;
  PVPCancelUpgradeBtn *this_02;
  code *pcVar15;
  long *plVar16;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 auStack_b0 [8];
  Delegate0 aDStack_a8 [48];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ButtonListener *)(this + 0xd8);
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener(this_00);
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined ***)this = &PTR_GetClass_069509a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06950cc8;
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_40,"UI_PVP");
  LawnApp::LoadGroup(pLVar2,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_40,"UI_PVP_Training");
  LawnApp::LoadGroup(pLVar2,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_40,"UI_PVP_Upgrade");
  LawnApp::LoadGroup(pLVar2,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  *(undefined4 *)(this + 0xe8) = param_2;
  PlantHeadshot::Resize((PlantHeadshot *)this,(TRect *)(gLawnApp + 0x71c));
  iVar3 = FUN_04af66ac(0x1ea);
  iVar4 = FUN_04af66ac(10);
  *(int *)(this + 0xe4) = iVar4 + (*(int *)(this + 0x54) - iVar3) / 2;
  iVar3 = FUN_04af66ac(0x30c);
  *(int *)(this + 0xe0) = (*(int *)(this + 0x50) - iVar3) / 2;
  FUN_05478178((wstring *)&local_78,&DAT_056f11a8,auStack_b0);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,-1,this_00,(wstring *)&local_78,(Color *)&local_40);
  FUN_05476c50((wstring *)&local_78);
  nop();
  pcVar15 = *(code **)(*(long *)pPVar12 + 0x198);
  iVar5 = FUN_04af66ac(0x30c);
  iVar3 = *(int *)(this + 0xe0);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82698);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  iVar7 = FUN_04af66ac(0x14);
  iVar8 = FUN_04af66ac(3);
  iVar4 = *(int *)(this + 0xe4);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82698);
  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar14);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82698);
  uVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82698);
  uVar11 = SalesProgressBar::GetCurrentLevel(pSVar14);
  (*pcVar15)(pPVar12,(((iVar5 + iVar3) - iVar6) - iVar7) + iVar8,iVar4 - iVar9,uVar10,uVar11);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b82698,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b82440,1);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)&local_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)pPVar12);
  FUN_05478178((wstring *)&local_78,&DAT_056f11a8,auStack_b0);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,-2,this_00,(wstring *)&local_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar12;
  FUN_05476c50((wstring *)&local_78);
  nop();
  plVar16 = *(long **)(this + 0xf0);
  pcVar15 = *(code **)(*plVar16 + 0x1a0);
  GetUpgradeButtonRect();
  (*pcVar15)(plVar16,(string *)&local_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xf0));
  FUN_05478178((wstring *)&local_78,&DAT_056f11a8,auStack_b0);
  Sexy::Color::Color((Color *)&local_40,1);
  this_01 = ::operator_new(0x338);
  PVPFinishButton::PVPFinishButton(this_01,-3,this_00,(wstring *)&local_78,(Color *)&local_40);
  *(PVPFinishButton **)(this + 0xf8) = this_01;
  FUN_05476c50((wstring *)&local_78);
  nop();
  plVar16 = *(long **)(this + 0xf8);
  pcVar15 = *(code **)(*plVar16 + 0x1a0);
  GetUpgradeButtonRect();
  (*pcVar15)(plVar16,(string *)&local_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xf8));
  this_02 = ::operator_new(0x300);
  PVPCancelUpgradeBtn::PVPCancelUpgradeBtn(this_02,-10,this_00);
  iVar3 = FUN_04af66ac(0xf);
  *(int *)(this_02 + 0x48) = *(int *)(this + 0xe0) + iVar3;
  iVar5 = FUN_04af66ac(0x1ea);
  iVar3 = *(int *)(this_02 + 0x54);
  iVar4 = *(int *)(this + 0xe4);
  iVar6 = FUN_04af66ac(0x23);
  *(int *)(this_02 + 0x4c) = ((iVar5 + iVar4) - iVar3) - iVar6;
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)this_02);
  (**(code **)(*(long *)this_02 + 0x158))(this_02,0);
  *(PVPCancelUpgradeBtn **)(this + 0x100) = this_02;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,BeginPVPUpgradeSuccess);
  Sexy::Delegate0::Delegate0<PVPBaseUpgrade,void(PVPBaseUpgrade::*)()>
            (aDStack_a8,(string *)&local_40);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::BeginPVPUpgradeSuccess,aDStack_a8);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GetPVPCompleteUpgradeGemSuccess);
  local_c0 = local_68;
  local_d0 = local_78;
  uStack_c8 = uStack_70;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<PVPBaseUpgrade,void(PVPBaseUpgrade::*)(int)>>
            ((MessageRouter *)puVar1,Message::GetPVPCompleteUpgradeGemSuccess,&local_d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GetPVPCompletePVPUpgrade);
  local_f0 = local_40;
  uStack_e8 = uStack_38;
  local_e0 = local_30;
  MessageRouter::
  Subscribe<S2C_PVPCompleteUpgradeData*,Sexy::CBMemberTranslatorX<PVPBaseUpgrade,void(PVPBaseUpgrade::*)(S2C_PVPCompleteUpgradeData*)>>
            ((MessageRouter *)puVar1,Message::GetPVPCompletePVPUpgrade,&local_f0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPBaseUpgrade::DrawNeedBaseLevel(Sexy::Graphics*, int) */

void __thiscall
PVPBaseUpgrade::DrawNeedBaseLevel(PVPBaseUpgrade *this,Graphics *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  RenderEffectDefinition *pRVar9;
  RenderEffect *pRVar10;
  code *pcVar11;
  undefined1 auStack_60 [8];
  Insets aIStack_58 [16];
  string asStack_48 [24];
  CachedResourcePtr<Sexy::RenderEffectDefinition> aCStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_04af66ac(0x1ea);
  iVar8 = *(int *)(this + 0xe4);
  TodStringTranslate(L"[NEED_BASE_LEVEL]");
  iVar4 = FUN_04af66ac(0x8c);
  iVar1 = *(int *)(this + 0xe0);
  iVar5 = FUN_04af66ac(0x55);
  iVar6 = FUN_04af66ac(200);
  iVar7 = FUN_04af66ac(0x46);
  Sexy::Insets::Insets(aIStack_58,iVar4 + iVar1,(iVar3 + iVar8) - iVar5,iVar6,iVar7);
  uVar2 = PrimeText_Game::Typeface_FZCuYuan_26;
  Sexy::Color::Color((Color *)aCStack_30,1);
  WriteWordInRect(param_1,auStack_60,aIStack_58,uVar2,aCStack_30,3,1);
  iVar4 = FUN_04af66ac(0x136);
  iVar1 = *(int *)(this + 0xe0);
  iVar5 = FUN_04af66ac(0x48);
  DrawLevel(this,param_1,iVar4 + iVar1,(iVar3 + iVar8) - iVar5,param_2);
  CachedResourcePtr<Sexy::RenderEffectDefinition>::CachedResourcePtr(aCStack_30,"EFFECT_GRAYSCALE");
  pRVar9 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(param_1);
  CachedResourcePtr::operator_cast_to_RenderEffectDefinition_((CachedResourcePtr *)aCStack_30);
  pRVar10 = (RenderEffect *)Sexy::Graphics3D::GetEffect(pRVar9);
  pcVar11 = *(code **)(*(long *)pRVar10 + 0x38);
  std::string::string(asStack_48,"Default");
  (*pcVar11)(pRVar10,asStack_48,1);
  std::string::~string(asStack_48);
  nop();
  Sexy::RenderEffectAutoState::RenderEffectAutoState
            ((RenderEffectAutoState *)asStack_48,param_1,pRVar10,1);
  iVar8 = GetUpgradeCost(this,param_2 + -1);
  DrawUpgradeButton(this,param_1,iVar8);
  Sexy::RenderEffectAutoState::~RenderEffectAutoState((RenderEffectAutoState *)asStack_48);
  CachedResourcePtr<Sexy::RenderEffectDefinition>::~CachedResourcePtr(aCStack_30);
  FUN_05476c50(auStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPBaseUpgrade::Draw(Sexy::Graphics*) */

void __thiscall PVPBaseUpgrade::Draw(PVPBaseUpgrade *this,Graphics *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  LotteryResultProgressBar *pLVar11;
  AssetsManagerManifest *pAVar12;
  PVPLabData *pPVar13;
  long *plVar14;
  PVPManager *this_00;
  long lVar15;
  ulong uVar16;
  Image *pIVar17;
  undefined1 auStack_68 [8];
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  Insets aIStack_50 [16];
  Insets aIStack_40 [16];
  Insets aIStack_30 [16];
  Insets aIStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  nop();
  iVar3 = FUN_04af66ac(0x30c);
  iVar4 = FUN_04af66ac(0x1ea);
  Sexy::Insets::Insets((Insets *)&local_60,*(int *)(this + 0xe0),*(int *)(this + 0xe4),iVar3,iVar4);
  iVar3 = FUN_04af66ac(10);
  iVar4 = FUN_04af66ac(9);
  iVar5 = FUN_04af66ac(0x14);
  iVar6 = FUN_04af66ac(0x19);
  Sexy::Insets::Insets
            (aIStack_50,local_60 + iVar3,local_5c + iVar4,local_58 - iVar5,local_54 - iVar6);
  Sexy::Insets::Insets(aIStack_20,(Insets *)&local_60);
  uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b827a0);
  Draw9SliceImage(param_1,aIStack_20,uVar10);
  pLVar11 = (LotteryResultProgressBar *)GetBackImage(this);
  iVar3 = *(int *)(this + 0x50);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar4 = *(int *)(this + 0x54);
  iVar6 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar11);
  Sexy::Graphics::DrawImage(param_1,(Image *)pLVar11,(iVar3 - iVar5) / 2,(iVar4 - iVar6) / 2);
  pLVar11 = (LotteryResultProgressBar *)GetTitle(this);
  iVar3 = *(int *)(this + 0x50);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar5 = FUN_04af66ac(10);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pLVar11,(iVar3 - iVar4) / 2,iVar5 + *(int *)(this + 0xe4));
  iVar4 = FUN_04af66ac(0x2f8);
  iVar5 = FUN_04af66ac(0x46);
  iVar6 = FUN_04af66ac(0x1ea);
  iVar3 = *(int *)(this + 0xe4);
  iVar7 = FUN_04af66ac(10);
  Sexy::Insets::Insets
            (aIStack_40,(*(int *)(this + 0x50) - iVar4) / 2,((iVar6 + iVar3) - iVar5) - iVar7,iVar4,
             iVar5);
  Sexy::Insets::Insets(aIStack_20,aIStack_40);
  uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b823a0);
  Draw9SliceImage(param_1,aIStack_20,uVar10);
  DrawInstruction(this,param_1);
  pAVar12 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  pPVar13 = (PVPLabData *)AssetsManagerManifest::getAssets(pAVar12);
  uVar8 = PVPLabData::GetLabItemLevel(pPVar13,*(undefined4 *)(this + 0xe8));
  iVar5 = FUN_04af66ac(0x12);
  iVar3 = *(int *)(this + 0xe0);
  iVar6 = FUN_04af66ac(0x55);
  iVar4 = *(int *)(this + 0xe4);
  iVar7 = FUN_04af66ac(0x3c);
  iVar9 = FUN_04af66ac(0x28);
  Sexy::Insets::Insets(aIStack_30,iVar5 + iVar3,iVar6 + iVar4,iVar7,iVar9);
  Sexy::StrFormat(L"%d",auStack_68,(ulong)uVar8);
  uVar10 = PrimeText_Game::Typeface_FZCuYuan_46_HardShadow;
  Sexy::Color::Color((Color *)aIStack_20,1);
  WriteWordInRect(param_1,auStack_68,aIStack_30,uVar10,aIStack_20,5,1);
  FUN_05476c50(auStack_68);
  iVar3 = GetMaxLevel(this);
  iVar4 = GetTimeLeft(this);
  bVar1 = 0 < iVar4;
  (**(code **)(**(long **)(this + 0xf8) + 0x158))(*(long **)(this + 0xf8),bVar1);
  plVar14 = *(long **)(this + 0x100);
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x158))(plVar14,bVar1);
  }
  if ((int)uVar8 < iVar3) {
    DrawCurrentAndNextState(this,param_1,uVar8);
    if (bVar1) {
      DrawTimeLeft(this,param_1,iVar4);
      this_00 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      iVar3 = PVPManager::TimeToGem(this_00,iVar4);
      CardGameDeckButton::SetIndex(*(CardGameDeckButton **)(this + 0xf8),iVar3);
      (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),0);
      iVar3 = *(int *)(this + 0xe8);
      goto joined_r0x04af9730;
    }
    if (*(int *)(this + 0xe8) != 1) {
      pAVar12 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      pPVar13 = (PVPLabData *)AssetsManagerManifest::getAssets(pAVar12);
      iVar3 = PVPLabData::GetLabItemLevel(pPVar13,1);
      if (iVar3 <= (int)uVar8) {
        DrawNeedBaseLevel(this,param_1,uVar8 + 1);
        uVar10 = 0;
        goto LAB_04af9714;
      }
    }
    DrawUpagradeReady(this,param_1,uVar8);
    uVar10 = 1;
  }
  else {
    DrawMaxState(this,param_1,uVar8);
    pIVar17 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82850);
    iVar3 = *(int *)(this + 0x50);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82850);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    iVar6 = FUN_04af66ac(0x1ea);
    iVar4 = *(int *)(this + 0xe4);
    iVar7 = FUN_04af66ac(0x44);
    Sexy::Graphics::DrawImage(param_1,pIVar17,(iVar3 - iVar5) / 2,(iVar6 + iVar4) - iVar7);
    uVar10 = 0;
  }
LAB_04af9714:
  (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),uVar10);
  iVar3 = *(int *)(this + 0xe8);
joined_r0x04af9730:
  if (iVar3 == 1) {
    lVar15 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar15 = FUN_04af6508(*(undefined8 *)(lVar15 + 0x3f8));
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aIStack_20);
    if (0 < (int)uVar8) {
      uVar10 = *(undefined8 *)(lVar15 + 8);
      uVar16 = FUN_04af650c(uVar10,*(undefined8 *)(lVar15 + 0x10));
      if ((ulong)(long)(int)uVar8 <= uVar16) {
        lVar15 = FUN_04af6520(uVar10,(long)(int)(uVar8 - 1));
        std::vector<std::string,std::allocator<std::string>>::operator=
                  ((vector<std::string,std::allocator<std::string>> *)aIStack_20,
                   (vector *)(lVar15 + 0x18));
      }
    }
    cVar2 = std::vector<std::string,std::allocator<std::string>>::empty
                      ((vector<std::string,std::allocator<std::string>> *)aIStack_20);
    if (cVar2 == '\0') {
      DrawUnlockZombie(this,param_1,(vector *)aIStack_20);
    }
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)aIStack_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

