// Class: WorldMapActivityBtnTurnChangeManager


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityBtnTurnChangeManager::doCurBtnWidget(int, int) */

void __thiscall
WorldMapActivityBtnTurnChangeManager::doCurBtnWidget
          (WorldMapActivityBtnTurnChangeManager *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  long *plVar5;
  char *pcVar6;
  code *pcVar7;
  UIWidget *this_00;
  float fVar8;
  float fVar9;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 0x2972) {
    pcVar6 = "UIWorldMapLimitedGachaButton";
LAB_03957390:
    std::string::string((string *)&local_10,pcVar6);
    this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
LAB_03957194:
    if (param_2 != 0x2a1b) goto LAB_039571a0;
    pcVar6 = "UIWorldMapLuckBagButton";
  }
  else {
    if (param_2 == 0x297d) {
      pcVar6 = "UIWorldMapAnniversaryButton";
      goto LAB_03957390;
    }
    if (param_2 != 0x29c6) {
      if (param_2 == 0x2983) {
        pcVar6 = "UIWorldMapRechargeBundleButton";
        goto LAB_03957290;
      }
      this_00 = (UIWidget *)0x0;
      if (param_2 == 0x29c0) {
        pcVar6 = "UIWorldMapPlantSpecialButton";
        goto LAB_03957290;
      }
      goto LAB_03957194;
    }
    pcVar6 = "WorldMapRechargeReward";
  }
LAB_03957290:
  std::string::string((string *)&local_10,pcVar6);
  this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
LAB_039571a0:
  if ((this_00 != (UIWidget *)0x0) && (cVar1 = RiftUtils::IsWorldMapButtonsEnabled(), cVar1 != '\0')
     ) {
    UIWidget::SetVisible(this_00,true);
    pfVar4 = (float *)UIWidget::GetPositionOffset(this_00);
    fVar8 = (float)FUN_03956f74();
    fVar9 = *pfVar4;
    if (param_1 == 2) {
      iVar2 = FUN_03956f60(0xf0);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)(int)(fVar9 - fVar8),(float)iVar2);
      UIWidget::SetPositionOffset(local_10,local_c,this_00);
      pfVar4 = (float *)UIWidget::GetPositionOffset(this_00);
      iVar2 = FUN_03956f60(0xffffff5b);
      if (*pfVar4 <= (float)iVar2) {
        *(undefined4 *)(this + 0x50) = 0;
        *(undefined4 *)(this + 0x54) = 1;
      }
    }
    else {
      iVar2 = FUN_03956f60(0x32);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)(int)(fVar9 - fVar8),(float)iVar2);
      UIWidget::SetPositionOffset(local_10,local_c,this_00);
      pfVar4 = (float *)UIWidget::GetPositionOffset(this_00);
      iVar2 = FUN_03956f60(0xffffff5b);
      if ((*pfVar4 <= (float)iVar2) && (param_1 == 1)) {
        *(undefined4 *)(this + 0x48) = 0;
        *(undefined4 *)(this + 0x4c) = 1;
      }
    }
  }
  if ((param_2 == 0x2973) &&
     (plVar5 = (long *)Lua::CUIDialog::GetDialog("WorldUnlockPackBtn"), plVar5 != (long *)0x0)) {
    fVar8 = (float)FUN_03956f74();
    pcVar7 = *(code **)(*plVar5 + 0x158);
    *(int *)(plVar5 + 9) = (int)((float)(int)plVar5[9] - fVar8);
    (*pcVar7)(plVar5,1);
    uVar3 = FUN_03956f60(0x7d);
    *(undefined4 *)((long)plVar5 + 0x4c) = uVar3;
    if (param_1 == 2) {
      uVar3 = FUN_03956f60(0xf0);
      *(undefined4 *)((long)plVar5 + 0x4c) = uVar3;
      iVar2 = FUN_03956f60(0xffffff5b);
      if ((int)plVar5[9] <= iVar2) {
        *(undefined4 *)(this + 0x50) = 0;
        *(undefined4 *)(this + 0x54) = 1;
      }
    }
    else {
      iVar2 = FUN_03956f60(0xffffff5b);
      if (((int)plVar5[9] <= iVar2) && (param_1 == 1)) {
        *(undefined4 *)(this + 0x48) = 0;
        *(undefined4 *)(this + 0x4c) = 1;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapActivityBtnTurnChangeManager::doFirstLineBtnTurn() */

void __thiscall
WorldMapActivityBtnTurnChangeManager::doFirstLineBtnTurn(WorldMapActivityBtnTurnChangeManager *this)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 8);
  uVar2 = FUN_03956ce8(uVar5,*(undefined8 *)(this + 0x10));
  if (1 < uVar2) {
    if (*(int *)(this + 0x38) < 0) {
      *(undefined4 *)(this + 0x38) = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = (ulong)*(int *)(this + 0x38);
      if (uVar2 <= uVar4) {
        uVar1 = (int)uVar2 - 1;
        uVar4 = (ulong)uVar1;
        *(uint *)(this + 0x38) = uVar1;
      }
    }
    piVar3 = (int *)FUN_03956d10(uVar5,uVar4);
    doCurBtnWidget(this,piVar3[2],*piVar3);
    return;
  }
  return;
}


/* WorldMapActivityBtnTurnChangeManager::doSecondLineBtnTurn() */

void __thiscall
WorldMapActivityBtnTurnChangeManager::doSecondLineBtnTurn
          (WorldMapActivityBtnTurnChangeManager *this)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x20);
  uVar2 = FUN_03956ce8(uVar5,*(undefined8 *)(this + 0x28));
  if (1 < uVar2) {
    if (*(int *)(this + 0x3c) < 0) {
      *(undefined4 *)(this + 0x3c) = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = (ulong)*(int *)(this + 0x3c);
      if (uVar2 <= uVar4) {
        uVar1 = (int)uVar2 - 1;
        uVar4 = (ulong)uVar1;
        *(uint *)(this + 0x3c) = uVar1;
      }
    }
    piVar3 = (int *)FUN_03956d10(uVar5,uVar4);
    doCurBtnWidget(this,piVar3[2],*piVar3);
    return;
  }
  return;
}


/* WorldMapActivityBtnTurnChangeManager::toNextBtnWidget(int) */

void __thiscall
WorldMapActivityBtnTurnChangeManager::toNextBtnWidget
          (WorldMapActivityBtnTurnChangeManager *this,int param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (param_1 != 1) {
    if (param_1 == 2) {
      iVar1 = *(int *)(this + 0x3c) + 1;
      *(int *)(this + 0x3c) = iVar1;
      uVar2 = FUN_03956ce8(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28));
      if ((ulong)(long)iVar1 < uVar2) {
        if (iVar1 < 0) {
          *(undefined4 *)(this + 0x3c) = 0;
        }
      }
      else {
        *(undefined4 *)(this + 0x3c) = 0;
      }
    }
    return;
  }
  iVar1 = *(int *)(this + 0x38) + 1;
  *(int *)(this + 0x38) = iVar1;
  uVar2 = FUN_03956ce8(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  if ((ulong)(long)iVar1 < uVar2) {
    if (-1 < iVar1) {
      return;
    }
    *(undefined4 *)(this + 0x38) = 0;
  }
  else {
    *(undefined4 *)(this + 0x38) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityBtnTurnChangeManager::doNextBtnWidget(int, int) */

void __thiscall
WorldMapActivityBtnTurnChangeManager::doNextBtnWidget
          (WorldMapActivityBtnTurnChangeManager *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  long *plVar6;
  char *pcVar7;
  code *pcVar8;
  UIWidget *this_00;
  float fVar9;
  float fVar10;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 0x2972) {
    pcVar7 = "UIWorldMapLimitedGachaButton";
LAB_0395787c:
    std::string::string((string *)&local_10,pcVar7);
    this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
LAB_0395766c:
    if (param_2 != 0x2a1b) goto LAB_03957678;
    pcVar7 = "UIWorldMapLuckBagButton";
  }
  else {
    if (param_2 == 0x297d) {
      pcVar7 = "UIWorldMapAnniversaryButton";
      goto LAB_0395787c;
    }
    if (param_2 != 0x29c6) {
      if (param_2 == 0x2983) {
        pcVar7 = "UIWorldMapRechargeBundleButton";
        goto LAB_03957760;
      }
      this_00 = (UIWidget *)0x0;
      if (param_2 == 0x29c0) {
        pcVar7 = "UIWorldMapPlantSpecialButton";
        goto LAB_03957760;
      }
      goto LAB_0395766c;
    }
    pcVar7 = "WorldMapRechargeReward";
  }
LAB_03957760:
  std::string::string((string *)&local_10,pcVar7);
  this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
LAB_03957678:
  if ((this_00 != (UIWidget *)0x0) && (cVar1 = RiftUtils::IsWorldMapButtonsEnabled(), cVar1 != '\0')
     ) {
    UIWidget::SetVisible(this_00,true);
    pfVar5 = (float *)UIWidget::GetPositionOffset(this_00);
    fVar9 = (float)FUN_03956f74();
    uVar3 = 0xf0;
    if (param_1 != 2) {
      uVar3 = 0x32;
    }
    fVar10 = *pfVar5;
    iVar2 = FUN_03956f60(uVar3);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)(int)(fVar9 + fVar10),(float)iVar2);
    UIWidget::SetPositionOffset(local_10,local_c,this_00);
    pfVar5 = (float *)UIWidget::GetPositionOffset(this_00);
    iVar2 = FUN_03956f60(0);
    if ((float)iVar2 <= *pfVar5) {
      iVar4 = FUN_03956f60(uVar3);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)iVar2,(float)iVar4);
      UIWidget::SetPositionOffset(local_10,local_c,this_00);
      if (param_1 == 1) {
        *(undefined4 *)(this + 0x4c) = 0;
      }
      else if (param_1 == 2) {
        *(undefined4 *)(this + 0x54) = 0;
      }
      toNextBtnWidget(this,param_1);
    }
  }
  if ((param_2 == 0x2973) &&
     (plVar6 = (long *)Lua::CUIDialog::GetDialog("WorldUnlockPackBtn"), plVar6 != (long *)0x0)) {
    fVar9 = (float)FUN_03956f74();
    pcVar8 = *(code **)(*plVar6 + 0x158);
    *(int *)(plVar6 + 9) = (int)(fVar9 + (float)(int)plVar6[9]);
    (*pcVar8)(plVar6,1);
    uVar3 = FUN_03956f60(0x7d);
    *(undefined4 *)((long)plVar6 + 0x4c) = uVar3;
    if (param_1 == 2) {
      uVar3 = FUN_03956f60(0xf0);
      *(undefined4 *)((long)plVar6 + 0x4c) = uVar3;
    }
    cVar1 = (**(code **)(*gLawnApp + 0x360))(gLawnApp);
    uVar3 = 0x4b;
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    iVar2 = FUN_03956f60(uVar3);
    if (iVar2 <= (int)plVar6[9]) {
      if (param_1 == 1) {
        *(undefined4 *)(this + 0x4c) = 0;
      }
      else if (param_1 == 2) {
        *(undefined4 *)(this + 0x54) = 0;
      }
      toNextBtnWidget(this,param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapActivityBtnTurnChangeManager::doNextFirstLineBtnTurn() */

void __thiscall
WorldMapActivityBtnTurnChangeManager::doNextFirstLineBtnTurn
          (WorldMapActivityBtnTurnChangeManager *this)

{
  ulong uVar1;
  int *piVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 8);
  uVar1 = FUN_03956ce8(uVar4,*(undefined8 *)(this + 0x10));
  if (uVar1 < 2) {
    return;
  }
  uVar3 = (ulong)(*(int *)(this + 0x38) + 1);
  if (uVar3 < uVar1) {
    if (*(int *)(this + 0x38) + 1 < 0) {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  piVar2 = (int *)FUN_03956d10(uVar4,uVar3);
  doNextBtnWidget(this,piVar2[2],*piVar2);
  return;
}


/* WorldMapActivityBtnTurnChangeManager::doNextSecondLineBtnTurn() */

void __thiscall
WorldMapActivityBtnTurnChangeManager::doNextSecondLineBtnTurn
          (WorldMapActivityBtnTurnChangeManager *this)

{
  ulong uVar1;
  int *piVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x20);
  uVar1 = FUN_03956ce8(uVar4,*(undefined8 *)(this + 0x28));
  if (uVar1 < 2) {
    return;
  }
  uVar3 = (ulong)(*(int *)(this + 0x3c) + 1);
  if (uVar3 < uVar1) {
    if (*(int *)(this + 0x3c) + 1 < 0) {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  piVar2 = (int *)FUN_03956d10(uVar4,uVar3);
  doNextBtnWidget(this,piVar2[2],*piVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityBtnTurnChangeManager::GetWidgetSheetName(int) */

void WorldMapActivityBtnTurnChangeManager::GetWidgetSheetName(int param_1)

{
  long lVar1;
  int in_w1;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (in_w1 == 0x2972) {
    __s = "UIWorldMapLimitedGachaButton";
  }
  else if (in_w1 == 0x297d) {
    __s = "UIWorldMapAnniversaryButton";
  }
  else if (in_w1 == 0x29c6) {
    __s = "WorldMapRechargeReward";
  }
  else if (in_w1 == 0x2983) {
    __s = "UIWorldMapRechargeBundleButton";
  }
  else if (in_w1 == 0x29c0) {
    __s = "UIWorldMapPlantSpecialButton";
  }
  else if (in_w1 == 0x2a1b) {
    __s = "UIWorldMapLuckBagButton";
  }
  else if (in_w1 == 0x2a07) {
    __s = "UIWorldMapOneYuanButton";
  }
  else if (in_w1 == 0x2a44) {
    __s = "UIWorldMapPiggyBankButton";
  }
  else if (in_w1 == 0x29fd) {
    __s = "UIWorldMapDaveTreasureButton";
  }
  else if (in_w1 == 0x2a4f) {
    __s = "UIWorldMapCallOfWishButton";
  }
  else if (in_w1 == 0x2a50) {
    __s = "UIWorldMapArtifactPresentButton";
  }
  else if (in_w1 == 0x2a61) {
    __s = "UIWorldMapPVZ2UnchartedModeButton";
  }
  else if (in_w1 == 0x2a60) {
    __s = "UIWorldMapGrowthPackageButton";
  }
  else if (in_w1 == 0x2a63) {
    __s = "UIWorldMapBattleOrderButton";
  }
  else if (in_w1 == 0x2a66) {
    __s = "UIWorldMapLimitedSummonButton";
  }
  else if (in_w1 == 0x2a6a) {
    __s = "UIWorldMapCarnivalButton";
  }
  else if (in_w1 == 0x2a6c) {
    __s = "UIWorldMapNewYearGoodsButton";
  }
  else if (in_w1 == 0x2a6f) {
    __s = "UIWorldMapCornucopiaButton";
  }
  else if (in_w1 == 0x2a77) {
    __s = "UIWorldMapPlantCultivateButton";
  }
  else if (in_w1 == 0x2a75) {
    __s = "UIWorldMapTenYearRecordButton";
  }
  else if (in_w1 == 0x2a76) {
    __s = "UIWorldMapGiftFoReturnButton";
  }
  else if (in_w1 == 0x2a79) {
    __s = "UIWorldMapPartyAssistButton";
  }
  else if (in_w1 == 0x2a80) {
    __s = "UIWorldMapNewYearGiftBoxButton";
  }
  else if (in_w1 == 0x2a81) {
    __s = "UIWorldMapTreasurePavilionButton";
  }
  else if (in_w1 == 0x2a84) {
    __s = "UIWorldMapPennyGiftBoxButton";
  }
  else if (in_w1 == 0x2a89) {
    __s = "UIWorldMapLuckyChestShopButton";
  }
  else if (in_w1 == 0x2a8b) {
    __s = "UIWorldMapAutumnHarvestButton";
  }
  else if (in_w1 == 0x2a8c) {
    __s = "UIWorldMapTourismOctoberButton";
  }
  else if (in_w1 == 0x2a8e) {
    __s = "UIWorldMapNighttheToyButton";
  }
  else {
    __s = "";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WorldMapActivityBtnTurnChangeManager::setIsPause(bool) */

void __thiscall
WorldMapActivityBtnTurnChangeManager::setIsPause
          (WorldMapActivityBtnTurnChangeManager *this,bool param_1)

{
  this[0x60] = (WorldMapActivityBtnTurnChangeManager)param_1;
  return;
}


/* WorldMapActivityBtnTurnChangeManager::setIsInit(bool) */

void __thiscall
WorldMapActivityBtnTurnChangeManager::setIsInit
          (WorldMapActivityBtnTurnChangeManager *this,bool param_1)

{
  this[0x61] = (WorldMapActivityBtnTurnChangeManager)param_1;
  return;
}


/* WorldMapActivityBtnTurnChangeManager::setVecLine1(Sexy::SexyVector2 const&) */

void __thiscall
WorldMapActivityBtnTurnChangeManager::setVecLine1
          (WorldMapActivityBtnTurnChangeManager *this,SexyVector2 *param_1)

{
  *(undefined8 *)(this + 100) = *(undefined8 *)param_1;
  return;
}


/* WorldMapActivityBtnTurnChangeManager::setVecLine2(Sexy::SexyVector2 const&) */

void __thiscall
WorldMapActivityBtnTurnChangeManager::setVecLine2
          (WorldMapActivityBtnTurnChangeManager *this,SexyVector2 *param_1)

{
  *(undefined8 *)(this + 0x6c) = *(undefined8 *)param_1;
  return;
}


/* WorldMapActivityBtnTurnChangeManager::clear() */

void __thiscall
WorldMapActivityBtnTurnChangeManager::clear(WorldMapActivityBtnTurnChangeManager *this)

{
  this[0x61] = (WorldMapActivityBtnTurnChangeManager)0x0;
  this[0xa9] = (WorldMapActivityBtnTurnChangeManager)0x0;
  this[0xa8] = (WorldMapActivityBtnTurnChangeManager)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  return;
}


/* WorldMapActivityBtnTurnChangeManager::setFirstInit(bool) */

void __thiscall
WorldMapActivityBtnTurnChangeManager::setFirstInit
          (WorldMapActivityBtnTurnChangeManager *this,bool param_1)

{
  this[0xa8] = (WorldMapActivityBtnTurnChangeManager)param_1;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  return;
}


/* WorldMapActivityBtnTurnChangeManager::CheckUniverseMap() */

undefined1 WorldMapActivityBtnTurnChangeManager::CheckUniverseMap(void)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = LawnApp::GetWorldMap(gLawnApp);
  uVar1 = 0;
  if ((lVar2 != 0) && (lVar2 = FUN_03956a98(*(undefined8 *)(lVar2 + 0x2b0)), uVar1 = 0, lVar2 != 0))
  {
    uVar1 = *(undefined1 *)(lVar2 + 0x7c);
  }
  return uVar1;
}


/* WorldMapActivityBtnTurnChangeManager::CheckGame() */

undefined8 WorldMapActivityBtnTurnChangeManager::CheckGame(void)

{
  int iVar1;
  
  if ((gGameStateMgr != (GameStateMgr *)0x0) &&
     (iVar1 = GameStateMgr::GetState(gGameStateMgr), iVar1 == 5)) {
    return 1;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityBtnTurnChangeManager::initButtonFirstIcon(int, int) */

void WorldMapActivityBtnTurnChangeManager::initButtonFirstIcon(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  UIWidget *this;
  float fVar10;
  undefined1 auVar11 [16];
  LineBreakCategory aLStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  uVar7 = (ulong)(uint)param_1;
  iVar1 = (int)in_x2;
  local_8 = ___stack_chk_guard;
  fVar10 = (float)PVZ_T();
  *(float *)(uVar7 + 0x40) = fVar10 + *(float *)(uVar7 + 0x58);
  fVar10 = (float)PVZ_T();
  *(float *)(uVar7 + 0x44) = fVar10 + *(float *)(uVar7 + 0x58);
  fVar10 = (float)PVZ_T();
  *(float *)(uVar7 + 0x5c) = fVar10 + *(float *)(uVar7 + 0x58);
  if (iVar1 == 0x2972) {
    pcVar9 = "UIWorldMapLimitedGachaButton";
LAB_03958288:
    in_x2 = aLStack_18;
    std::string::string((string *)&local_10,pcVar9);
    this = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
LAB_039580f0:
    if (iVar1 != 0x2a1b) goto LAB_039580fc;
    pcVar9 = "UIWorldMapLuckBagButton";
  }
  else {
    if (iVar1 == 0x297d) {
      pcVar9 = "UIWorldMapAnniversaryButton";
      goto LAB_03958288;
    }
    if (iVar1 != 0x29c6) {
      if (iVar1 == 0x2983) {
        pcVar9 = "UIWorldMapRechargeBundleButton";
        goto LAB_039581bc;
      }
      this = (UIWidget *)0x0;
      if (iVar1 == 0x29c0) {
        pcVar9 = "UIWorldMapPlantSpecialButton";
        goto LAB_039581bc;
      }
      goto LAB_039580f0;
    }
    pcVar9 = "WorldMapRechargeReward";
  }
LAB_039581bc:
  in_x2 = aLStack_18;
  std::string::string((string *)&local_10,pcVar9);
  this = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
LAB_039580fc:
  if ((this != (UIWidget *)0x0) && (cVar2 = RiftUtils::IsWorldMapButtonsEnabled(), cVar2 != '\0')) {
    auVar11 = UIWidget::SetVisible(this,true);
    EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
              (auVar11._0_8_,auVar11._8_8_,in_x2,in_x3,in_x4);
    uVar6 = 0x32;
    if (param_2 == 2) {
      uVar6 = 0xf0;
    }
    iVar3 = FUN_03956f60(0);
    iVar4 = FUN_03956f60(uVar6);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)iVar3,(float)iVar4);
    UIWidget::SetPositionOffset(local_10,local_c,this);
  }
  if ((iVar1 == 0x2973) &&
     (plVar8 = (long *)Lua::CUIDialog::GetDialog("WorldUnlockPackBtn"), plVar8 != (long *)0x0)) {
    uVar6 = 0x7d;
    if (param_2 == 2) {
      uVar6 = 0xf0;
    }
    *(undefined1 *)(uVar7 + 0xaa) = 1;
    uVar5 = FUN_03956f60(0);
    uVar6 = FUN_03956f60(uVar6);
    (**(code **)(*plVar8 + 0x1a8))(plVar8,uVar5,uVar6);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityBtnTurnChangeManager::HideAllWidgets() */

void __thiscall
WorldMapActivityBtnTurnChangeManager::HideAllWidgets(WorldMapActivityBtnTurnChangeManager *this)

{
  bool bVar1;
  int *piVar2;
  long *plVar3;
  UIWidget *this_00;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    if (*piVar2 == 0x2973) {
      plVar3 = (long *)Lua::CUIDialog::GetDialog("WorldUnlockPackBtn");
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x158))(plVar3,0);
      }
    }
    else {
      GetWidgetSheetName((int)this);
      bVar1 = std::operator!=(asStack_10,"");
      if ((bVar1) &&
         (this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10),
         this_00 != (UIWidget *)0x0)) {
        UIWidget::SetVisible(this_00,false);
      }
      std::string::~string(asStack_10);
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityBtnTurnChangeManager::NewIconBtnChange(int) */

void __thiscall
WorldMapActivityBtnTurnChangeManager::NewIconBtnChange
          (WorldMapActivityBtnTurnChangeManager *this,int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  string asStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HideAllWidgets(this);
  if (param_1 == 0x2973) {
    plVar6 = (long *)Lua::CUIDialog::GetDialog("WorldUnlockPackBtn");
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x158))(plVar6,1);
      *(long **)(this + 0xb8) = plVar6;
      iVar3 = FUN_03956f60(0x6f);
      (**(code **)(*plVar6 + 0x1a8))(plVar6,*(int *)(gLawnApp + 0x724) - iVar3,0x32);
    }
  }
  else {
    GetWidgetSheetName((int)this);
    bVar1 = std::operator!=(asStack_18,"");
    if (bVar1) {
      lVar5 = UIWidget::GetWidgetBySheetName(asStack_18);
      *(long *)(this + 0xb0) = lVar5;
    }
    else {
      lVar5 = *(long *)(this + 0xb0);
    }
    if ((lVar5 != 0) && (cVar2 = RiftUtils::IsWorldMapButtonsEnabled(), cVar2 != '\0')) {
      UIWidget::SetVisible(*(UIWidget **)(this + 0xb0),true);
      uVar7 = *(undefined8 *)(this + 0xb0);
      iVar3 = FUN_03956f60(0);
      iVar4 = FUN_03956f60(0x32);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)iVar3,(float)iVar4);
      UIWidget::SetPositionOffset(local_10,local_c,uVar7);
    }
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapActivityBtnTurnChangeManager::Update_NewIcon() */

void __thiscall
WorldMapActivityBtnTurnChangeManager::Update_NewIcon(WorldMapActivityBtnTurnChangeManager *this)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = *(float *)(this + 0x5c);
  fVar6 = (float)PVZ_T();
  if (fVar7 < fVar6) {
    fVar6 = (float)PVZ_T();
    *(float *)(this + 0x5c) = fVar6 + *(float *)(this + 0x58);
    toNextBtnWidget(this,1);
    uVar5 = *(undefined8 *)(this + 8);
    uVar2 = FUN_03956ce8(uVar5,*(undefined8 *)(this + 0x10));
    if (1 < uVar2) {
      if (*(int *)(this + 0x38) < 0) {
        *(undefined4 *)(this + 0x38) = 0;
        uVar4 = 0;
      }
      else {
        uVar4 = (ulong)*(int *)(this + 0x38);
        if (uVar2 <= uVar4) {
          uVar1 = (int)uVar2 - 1;
          uVar4 = (ulong)uVar1;
          *(uint *)(this + 0x38) = uVar1;
        }
      }
      piVar3 = (int *)FUN_03956d10(uVar5,uVar4);
      NewIconBtnChange(this,*piVar3);
      return;
    }
  }
  return;
}


/* WorldMapActivityBtnTurnChangeManager::InitNewIcon_Btn(int) */

void __thiscall
WorldMapActivityBtnTurnChangeManager::InitNewIcon_Btn
          (WorldMapActivityBtnTurnChangeManager *this,int param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x5c) = fVar1 + *(float *)(this + 0x58);
  NewIconBtnChange(this,param_1);
  return;
}


/* WorldMapActivityBtnTurnChangeManager::initButtonTurn() */

void __thiscall
WorldMapActivityBtnTurnChangeManager::initButtonTurn(WorldMapActivityBtnTurnChangeManager *this)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = std::vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>>::empty
                    ((vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>> *)(this + 8));
  if (cVar1 != '\0') {
    return;
  }
  *(undefined4 *)(this + 0x38) = 0;
  piVar2 = (int *)FUN_03956d10(*(undefined8 *)(this + 8),0);
  InitNewIcon_Btn(this,*piVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityBtnTurnChangeManager::update() */

void __thiscall
WorldMapActivityBtnTurnChangeManager::update(WorldMapActivityBtnTurnChangeManager *this)

{
  char cVar1;
  long lVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x61] != (WorldMapActivityBtnTurnChangeManager)0x0) {
    lVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    cVar1 = FUN_03956aa8(*(undefined1 *)(lVar2 + 8));
    if (cVar1 == '\0') {
      setIsInit(this,false);
    }
    else {
      std::string::string(asStack_10,"egypt3");
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      cVar1 = ProfileUtils::HasCompletedLevel(asStack_10,false,pPVar3);
      std::string::~string(asStack_10);
      nop();
      if ((((cVar1 != '\0') && (this[0xa9] != (WorldMapActivityBtnTurnChangeManager)0x0)) &&
          (cVar1 = CheckUniverseMap(), cVar1 == '\0')) && (cVar1 = CheckGame(), cVar1 == '\0')) {
        if (this[0xa8] == (WorldMapActivityBtnTurnChangeManager)0x0) {
          this[0xa8] = (WorldMapActivityBtnTurnChangeManager)0x1;
          initButtonTurn(this);
        }
        if (this[0x60] == (WorldMapActivityBtnTurnChangeManager)0x0) {
          Update_NewIcon(this);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapActivityBtnTurnChangeManager::~WorldMapActivityBtnTurnChangeManager() */

void __thiscall
WorldMapActivityBtnTurnChangeManager::~WorldMapActivityBtnTurnChangeManager
          (WorldMapActivityBtnTurnChangeManager *this)

{
  *(undefined ***)this = &PTR__WorldMapActivityBtnTurnChangeManager_066d2b70;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::~map
            ((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)(this + 0x78)
            );
  std::vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>>::~vector
            ((vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>> *)(this + 0x20));
  std::vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>>::~vector
            ((vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>> *)(this + 8));
  Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::~LazySingleton
            ((LazySingleton<WorldMapActivityBtnTurnChangeManager> *)this);
  return;
}


/* WorldMapActivityBtnTurnChangeManager::~WorldMapActivityBtnTurnChangeManager() */

void __thiscall
WorldMapActivityBtnTurnChangeManager::~WorldMapActivityBtnTurnChangeManager
          (WorldMapActivityBtnTurnChangeManager *this)

{
  ~WorldMapActivityBtnTurnChangeManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityBtnTurnChangeManager::WorldMapActivityBtnTurnChangeManager() */

void __thiscall
WorldMapActivityBtnTurnChangeManager::WorldMapActivityBtnTurnChangeManager
          (WorldMapActivityBtnTurnChangeManager *this)

{
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  *this_00;
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  int local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = (map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
             *)(this + 0x78);
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::LazySingleton
            ((LazySingleton<WorldMapActivityBtnTurnChangeManager> *)this);
  *(undefined ***)this = &PTR__WorldMapActivityBtnTurnChangeManager_066d2b70;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  uVar4 = PVZ_T();
  *(undefined4 *)(this + 0x40) = uVar4;
  uVar4 = PVZ_T();
  *(undefined4 *)(this + 0x44) = uVar4;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  this[0x60] = (WorldMapActivityBtnTurnChangeManager)0x0;
  this[0x61] = (WorldMapActivityBtnTurnChangeManager)0x0;
  *(undefined4 *)(this + 0x58) = 0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 100));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x6c));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(this_00);
  this[0xa8] = (WorldMapActivityBtnTurnChangeManager)0x0;
  local_50 = 0x29c0;
  this[0xa9] = (WorldMapActivityBtnTurnChangeManager)0x0;
  this[0xaa] = (WorldMapActivityBtnTurnChangeManager)0x0;
  puVar3 = (undefined1 *)
           std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::operator[]
                     ((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)
                      this_00,&local_50);
  *puVar3 = 0;
  local_50 = 0x297d;
  puVar3 = (undefined1 *)
           std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::operator[]
                     ((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)
                      this_00,&local_50);
  *puVar3 = 0;
  local_50 = 0x29c6;
  puVar3 = (undefined1 *)
           std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::operator[]
                     ((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)
                      this_00,&local_50);
  *puVar3 = 1;
  local_50 = 0x2972;
  puVar3 = (undefined1 *)
           std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::operator[]
                     ((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)
                      this_00,&local_50);
  *puVar3 = 0;
  local_50 = 0x2983;
  puVar3 = (undefined1 *)
           std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::operator[]
                     ((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)
                      this_00,&local_50);
  *puVar3 = 0;
  local_50 = 0x2973;
  puVar3 = (undefined1 *)
           std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::operator[]
                     ((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)
                      this_00,&local_50);
  *puVar3 = 0;
  local_50 = 0x2a1b;
  puVar3 = (undefined1 *)
           std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::operator[]
                     ((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)
                      this_00,&local_50);
  *puVar3 = 0;
  local_50 = 0x2a07;
  puVar3 = (undefined1 *)
           std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::operator[]
                     ((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)
                      this_00,&local_50);
  *puVar3 = 0;
  local_50 = 0x2a44;
  puVar3 = (undefined1 *)
           std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::operator[]
                     ((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)
                      this_00,&local_50);
  *puVar3 = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<WorldMapActivityBtnTurnChangeManager,void(WorldMapActivityBtnTurnChangeManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyPurchasedSpecialOffer);
  Sexy::Delegate0::
  Delegate0<WorldMapActivityBtnTurnChangeManager,void(WorldMapActivityBtnTurnChangeManager::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyPurchasedSpecialOffer,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLuaNotify);
  local_b0 = CONCAT44(uStack_4c,local_50);
  uStack_a8 = uStack_48;
  local_a0 = local_40;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<WorldMapActivityBtnTurnChangeManager,void(WorldMapActivityBtnTurnChangeManager::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::OnLuaNotify,&local_b0);
  uVar4 = PVZ_T();
  *(undefined8 *)(this + 0xb0) = 0;
  lVar2 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0x5c) = uVar4;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapActivityBtnTurnChangeManager::setIsLoaded(int, bool) */

void __thiscall
WorldMapActivityBtnTurnChangeManager::setIsLoaded
          (WorldMapActivityBtnTurnChangeManager *this,int param_1,bool param_2)

{
  undefined8 uVar1;
  int local_4;
  
  local_4 = param_1;
  uVar1 = std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::operator[]
                    ((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)
                     (this + 0x78),&local_4);
  *(bool *)uVar1 = param_2;
  return;
}


/* WorldMapActivityBtnTurnChangeManager::OnLuaNotify(std::string const&) */

void __thiscall
WorldMapActivityBtnTurnChangeManager::OnLuaNotify
          (WorldMapActivityBtnTurnChangeManager *this,string *param_1)

{
  bool bVar1;
  WorldMapActivityBtnTurnChangeManager *this_00;
  
  bVar1 = std::operator!=(param_1,"WorldUnlockPackCreate");
  if (bVar1) {
    return;
  }
  this_00 = (WorldMapActivityBtnTurnChangeManager *)
            Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstance();
  setIsLoaded(this_00,0x2973,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityBtnTurnChangeManager::isActivityOpened(int, bool) */

void WorldMapActivityBtnTurnChangeManager::isActivityOpened(int param_1,bool param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  PlayerInfo *pPVar4;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = LawnApp::GetPlatform(gLawnApp);
  if (((((iVar3 == 6) || (iVar3 = LawnApp::GetPlatform(gLawnApp), iVar3 == 1)) ||
       (iVar3 = LawnApp::GetPlatform(gLawnApp), iVar3 == 0x70)) ||
      (iVar3 = LawnApp::GetPlatform(gLawnApp), iVar3 == 0x39)) && (param_2 == 0x2972)) {
    cVar2 = '\0';
  }
  else {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    cVar1 = FUN_03956a9c(local_80);
    cVar2 = '\0';
    if (((cVar1 != '\0') && (cVar2 = local_70, local_70 != '\0')) && (param_2 == 0x29fd)) {
      pPVar4 = (PlayerInfo *)ProfileUtils::Profile();
      cVar2 = PlayerInfo::PlayerHasCompletedTutorial(pPVar4,0x17);
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityBtnTurnChangeManager::isAllLiaded() */

void __thiscall
WorldMapActivityBtnTurnChangeManager::isAllLiaded(WorldMapActivityBtnTurnChangeManager *this)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::begin
                       ((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)
                        (this + 0x78));
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x78));
  while (bVar3 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10), bVar3
        ) {
    puVar5 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    cVar1 = *(char *)(puVar5 + 1);
    cVar2 = isActivityOpened((int)this,SUB41(*puVar5,0));
    if ((cVar2 != '\0') && (uVar4 = 0, cVar1 == '\0')) goto LAB_0395b664;
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  uVar4 = 1;
LAB_0395b664:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityBtnTurnChangeManager::updateData() */

void __thiscall
WorldMapActivityBtnTurnChangeManager::updateData(WorldMapActivityBtnTurnChangeManager *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar1) break;
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    local_30 = *puVar3;
    local_28 = puVar3[1];
    cVar2 = isActivityOpened((int)this,SUB81(local_30,0));
    if (cVar2 != '\0') {
      std::vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>>::push_back
                ((vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>> *)avStack_20,
                 (stActivity_iconInfo *)&local_30);
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_40);
  }
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x20);
  std::vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>>::operator=
            ((vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>> *)this_00,
             (vector *)avStack_20);
  std::vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>>::clear
            ((vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>> *)avStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_01);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_01);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    local_30 = *puVar3;
    local_28 = puVar3[1];
    cVar2 = isActivityOpened((int)this,SUB81(local_30,0));
    if (cVar2 != '\0') {
      std::vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>>::push_back
                ((vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>> *)avStack_20,
                 (stActivity_iconInfo *)&local_30);
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_40);
  }
  std::vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>>::operator=
            ((vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>> *)this_01,
             (vector *)avStack_20);
  std::vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>>::~vector
            ((vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityBtnTurnChangeManager::onNotifyPurchasedSpecialOffer() */

void __thiscall
WorldMapActivityBtnTurnChangeManager::onNotifyPurchasedSpecialOffer
          (WorldMapActivityBtnTurnChangeManager *this)

{
  WorldMap_PlantSpecialOfferUIButton *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIWorldMapPlantSpecialButton");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (WorldMap_PlantSpecialOfferUIButton *)0x0) {
    WorldMap_PlantSpecialOfferUIButton::CheckActivated(this_00);
  }
  updateData(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityBtnTurnChangeManager::onNotifyRefreshActivityList(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&) */

void __thiscall
WorldMapActivityBtnTurnChangeManager::onNotifyRefreshActivityList
          (WorldMapActivityBtnTurnChangeManager *this,bool param_1,set *param_2)

{
  bool bVar1;
  WorldMapActivityBtnTurnChangeManager WVar2;
  char *pcVar3;
  long lVar4;
  WorldMap_LuckBagUIButton *this_00;
  WorldMap_RechargeReward *this_01;
  WorldMap_AnniversaryButton *this_02;
  WorldMap_LimitGachaButton *this_03;
  long extraout_x0;
  WorldMap_PlantSpecialOfferUIButton *this_04;
  int local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_20[0] = 0x29c0;
  local_8 = ___stack_chk_guard;
  local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,local_20);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    Sexy::OutputDebugStrF
              ((wchar_t *)"ChristmasChargeManager::GetInstancePtr() Activity_Plant_Special_Offer ");
    local_10 = CONCAT44(local_10._4_4_,0x29c0);
    pcVar3 = (char *)std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::
                     operator[]((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>
                                 *)(this + 0x78),(int *)&local_10);
    if (*pcVar3 != '\0') {
      std::string::string((string *)&local_18,"UIWorldMapPlantSpecialButton");
      lVar4 = UIWidget::GetWidgetBySheetName((string *)&local_18);
      if (lVar4 == 0) {
        std::string::~string((string *)&local_18);
        nop();
      }
      else {
        std::string::string((string *)&local_10,"UIWorldMapPlantSpecialButton");
        UIWidget::GetWidgetBySheetName((string *)&local_10);
        nop();
        std::string::~string((string *)&local_10);
        nop();
        std::string::~string((string *)&local_18);
        nop();
        if (this_04 != (WorldMap_PlantSpecialOfferUIButton *)0x0) {
          WorldMap_PlantSpecialOfferUIButton::CheckActivated(this_04);
        }
      }
      updateData(this);
    }
  }
  local_20[0] = 0x2983;
  local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,local_20);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    local_10 = CONCAT44(local_10._4_4_,0x2983);
    pcVar3 = (char *)std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::
                     operator[]((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>
                                 *)(this + 0x78),(int *)&local_10);
    if (*pcVar3 != '\0') {
      std::string::string((string *)&local_18,"UIWorldMapRechargeBundleButton");
      lVar4 = UIWidget::GetWidgetBySheetName((string *)&local_18);
      if (lVar4 == 0) {
        std::string::~string((string *)&local_18);
        nop();
      }
      else {
        std::string::string((string *)&local_10,"UIWorldMapRechargeBundleButton");
        UIWidget::GetWidgetBySheetName((string *)&local_10);
        nop();
        std::string::~string((string *)&local_10);
        nop();
        std::string::~string((string *)&local_18);
        nop();
        if (extraout_x0 != 0) {
          WorldMap_RechargeBundleButton::CheckVisibility(false);
        }
      }
      updateData(this);
    }
  }
  local_20[0] = 0x2972;
  local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,local_20);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    local_10 = CONCAT44(local_10._4_4_,0x2972);
    pcVar3 = (char *)std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::
                     operator[]((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>
                                 *)(this + 0x78),(int *)&local_10);
    if (*pcVar3 != '\0') {
      std::string::string((string *)&local_18,"UIWorldMapLimitedGachaButton");
      lVar4 = UIWidget::GetWidgetBySheetName((string *)&local_18);
      if (lVar4 == 0) {
        std::string::~string((string *)&local_18);
        nop();
      }
      else {
        std::string::string((string *)&local_10,"UIWorldMapLimitedGachaButton");
        UIWidget::GetWidgetBySheetName((string *)&local_10);
        nop();
        std::string::~string((string *)&local_10);
        nop();
        std::string::~string((string *)&local_18);
        nop();
        if (this_03 != (WorldMap_LimitGachaButton *)0x0) {
          WorldMap_LimitGachaButton::CheckActivated(this_03);
        }
      }
      updateData(this);
    }
  }
  local_20[0] = 0x297d;
  local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,local_20);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    local_10 = CONCAT44(local_10._4_4_,0x297d);
    pcVar3 = (char *)std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::
                     operator[]((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>
                                 *)(this + 0x78),(int *)&local_10);
    if (*pcVar3 != '\0') {
      std::string::string((string *)&local_18,"UIWorldMapAnniversaryButton");
      lVar4 = UIWidget::GetWidgetBySheetName((string *)&local_18);
      if (lVar4 == 0) {
        std::string::~string((string *)&local_18);
        nop();
      }
      else {
        std::string::string((string *)&local_10,"UIWorldMapAnniversaryButton");
        UIWidget::GetWidgetBySheetName((string *)&local_10);
        nop();
        std::string::~string((string *)&local_10);
        nop();
        std::string::~string((string *)&local_18);
        nop();
        if (this_02 != (WorldMap_AnniversaryButton *)0x0) {
          WorldMap_AnniversaryButton::CheckActivated(this_02);
        }
      }
      updateData(this);
    }
  }
  local_20[0] = 0x29c6;
  local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,local_20);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    local_10 = CONCAT44(local_10._4_4_,0x29c6);
    pcVar3 = (char *)std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::
                     operator[]((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>
                                 *)(this + 0x78),(int *)&local_10);
    if (*pcVar3 != '\0') {
      std::string::string((string *)&local_18,"WorldMapRechargeReward");
      lVar4 = UIWidget::GetWidgetBySheetName((string *)&local_18);
      if (lVar4 == 0) {
        std::string::~string((string *)&local_18);
        nop();
      }
      else {
        std::string::string((string *)&local_10,"WorldMapRechargeReward");
        UIWidget::GetWidgetBySheetName((string *)&local_10);
        nop();
        std::string::~string((string *)&local_10);
        nop();
        std::string::~string((string *)&local_18);
        nop();
        if (this_01 != (WorldMap_RechargeReward *)0x0) {
          WorldMap_RechargeReward::CheckActivated(this_01);
        }
      }
      updateData(this);
    }
  }
  local_20[0] = 0x2973;
  local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,local_20);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    WVar2 = (WorldMapActivityBtnTurnChangeManager)isActivityOpened((int)this,true);
    this[0xaa] = WVar2;
    updateData(this);
  }
  local_20[0] = 0x2a1b;
  local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,local_20);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    local_10 = CONCAT44(local_10._4_4_,0x2a1b);
    pcVar3 = (char *)std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::
                     operator[]((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>
                                 *)(this + 0x78),(int *)&local_10);
    if (*pcVar3 != '\0') {
      std::string::string((string *)&local_18,"UIWorldMapLuckBagButton");
      lVar4 = UIWidget::GetWidgetBySheetName((string *)&local_18);
      if (lVar4 == 0) {
        std::string::~string((string *)&local_18);
        nop();
      }
      else {
        std::string::string((string *)&local_10,"UIWorldMapLuckBagButton");
        UIWidget::GetWidgetBySheetName((string *)&local_10);
        nop();
        std::string::~string((string *)&local_10);
        nop();
        std::string::~string((string *)&local_18);
        nop();
        if (this_00 != (WorldMap_LuckBagUIButton *)0x0) {
          WorldMap_LuckBagUIButton::CheckActivated(this_00);
        }
      }
      updateData(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActivityBtnTurnChangeManager::loadData(ActivityTurnChangeConfig const&) */

void __thiscall
WorldMapActivityBtnTurnChangeManager::loadData
          (WorldMapActivityBtnTurnChangeManager *this,ActivityTurnChangeConfig *param_1)

{
  vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>> *pvVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_40 = FUN_039583a4(*(undefined8 *)(param_1 + 8));
  local_38 = FUN_039583f4(*(undefined8 *)(param_1 + 0x10));
  while( true ) {
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar3) break;
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    local_28 = puVar7[1];
    local_30 = *puVar7;
    cVar4 = isActivityOpened((int)this,SUB81(local_30,0));
    if ((cVar4 != '\0') && ((int)local_28 == 1)) {
      std::vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>>::push_back
                ((vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>> *)avStack_20,
                 (stActivity_iconInfo *)&local_30);
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_40);
  }
  pvVar1 = (vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>> *)(this + 8);
  std::vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>>::operator=
            (pvVar1,(vector *)avStack_20);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)pvVar1);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)pvVar1);
  std::
  sort<__gnu_cxx::__normal_iterator<stActivity_iconInfo*,std::vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>>>,bool(*)(stActivity_iconInfo_const&,stActivity_iconInfo_const&)>
            (uVar5,uVar6,sortByPriority);
  uVar5 = FUN_03956ce8(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  Sexy::OutputDebugStrF((wchar_t *)"m_firstLineActivityOrderList  size = %d",uVar5);
  std::vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>>::clear
            ((vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>> *)avStack_20);
  local_40 = FUN_039583a4(*(undefined8 *)(param_1 + 8));
  local_38 = FUN_039583f4(*(undefined8 *)(param_1 + 0x10));
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar3) {
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    local_28 = puVar7[1];
    local_30 = *puVar7;
    cVar4 = isActivityOpened((int)this,SUB81(local_30,0));
    if ((cVar4 != '\0') && ((int)local_28 == 2)) {
      std::vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>>::push_back
                ((vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>> *)avStack_20,
                 (stActivity_iconInfo *)&local_30);
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_40);
  }
  pvVar1 = (vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>> *)(this + 0x20);
  std::vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>>::operator=
            (pvVar1,(vector *)avStack_20);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)pvVar1);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)pvVar1);
  std::
  sort<__gnu_cxx::__normal_iterator<stActivity_iconInfo*,std::vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>>>,bool(*)(stActivity_iconInfo_const&,stActivity_iconInfo_const&)>
            (uVar5,uVar6,sortByPriority);
  uVar5 = FUN_03956ce8(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28));
  Sexy::OutputDebugStrF((wchar_t *)"m_secondLineActivityOrderList size = %d",uVar5);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  this[0xa9] = (WorldMapActivityBtnTurnChangeManager)0x1;
  *(undefined4 *)(this + 0x58) = uVar2;
  std::vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>>::~vector
            ((vector<stActivity_iconInfo,std::allocator<stActivity_iconInfo>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

