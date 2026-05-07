// Class: PVPMapUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPMapUI::setUnlockBtnDown(int) */

void __thiscall PVPMapUI::setUnlockBtnDown(PVPMapUI *this,int param_1)

{
  long lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  *(int *)(this + 0x490) = param_1;
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_18,0x80,0x80,0x80,0x80);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x820c) = local_18;
  *(undefined8 *)(this + 0x8214) = uStack_10;
  this[0x821c] = (PVPMapUI)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPMapUI::resetDownBtn() */

void __thiscall PVPMapUI::resetDownBtn(PVPMapUI *this)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_18,0xff,0xff,0xff,0xff);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x820c) = local_18;
  *(undefined8 *)(this + 0x8214) = uStack_10;
  *(undefined4 *)(this + 0x48c) = 0xffffffff;
  *(undefined4 *)(this + 0x490) = 0xffffffff;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPMapUI::IsIndexValid(int, int) */

uint __thiscall PVPMapUI::IsIndexValid(PVPMapUI *this,int param_1,int param_2)

{
  return (uint)(param_1 < param_2) & (uint)~param_1 >> 0x1f;
}


/* PVPMapUI::Multiply(Sexy::FPoint, Sexy::FPoint, Sexy::FPoint) */

float __thiscall PVPMapUI::Multiply(undefined8 param_1,float *param_2,float *param_3,float *param_4)

{
  return (param_4[1] - param_2[1]) * (*param_3 - *param_4) +
         (*param_2 - *param_4) * (param_3[1] - param_4[1]);
}


/* PVPMapUI::enableAchieveEffect(int) */

void __thiscall PVPMapUI::enableAchieveEffect(PVPMapUI *this,int param_1)

{
  char cVar1;
  long lVar2;
  
  cVar1 = IsIndexValid(this,param_1,0x14);
  if (cVar1 != '\0') {
    lVar2 = *(long *)(this + (long)param_1 * 8 + 0x3a0);
    *(undefined4 *)(lVar2 + 0x50) = 0;
    *(undefined1 *)(lVar2 + 0x49) = 1;
    *(undefined4 *)(lVar2 + 0x4c) = 100;
  }
  return;
}


/* PVPMapUI::achieveEffectUpdate() */

void __thiscall PVPMapUI::achieveEffectUpdate(PVPMapUI *this)

{
  PVPMapUI *pPVar1;
  long lVar2;
  
  pPVar1 = this + 0x3a0;
  do {
    lVar2 = *(long *)pPVar1;
    if (*(char *)(lVar2 + 0x49) != '\0') {
      if (*(int *)(lVar2 + 0x4c) < 0xff) {
        *(int *)(lVar2 + 0x4c) = *(int *)(lVar2 + 0x4c) + 0x19;
        *(int *)(lVar2 + 0x50) = *(int *)(lVar2 + 0x50) + 10;
      }
      else {
        *(undefined1 *)(lVar2 + 0x49) = 0;
      }
    }
    pPVar1 = pPVar1 + 8;
  } while (pPVar1 != this + 0x440);
  return;
}


/* PVPMapUI::enableZoomEffect() */

void __thiscall PVPMapUI::enableZoomEffect(PVPMapUI *this)

{
  this[0x8224] = (PVPMapUI)0x1;
  this[0x8225] = (PVPMapUI)0x1;
  *(undefined4 *)(this + 0x8220) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPMapUI::setDownBtn(int) */

void __thiscall PVPMapUI::setDownBtn(PVPMapUI *this,int param_1)

{
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_18,0x80,0x80,0x80,0xff);
  *(undefined8 *)(this + 0x820c) = local_18;
  *(undefined8 *)(this + 0x8214) = uStack_10;
  *(int *)(this + 0x48c) = param_1;
  this[0x821c] = (PVPMapUI)0x1;
  enableZoomEffect(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPMapUI::zoomEffectUpdate() */

void __thiscall PVPMapUI::zoomEffectUpdate(PVPMapUI *this)

{
  float fVar1;
  
  if (this[0x8225] != (PVPMapUI)0x0) {
    fVar1 = *(float *)(this + 0x8220);
    if (this[0x8224] == (PVPMapUI)0x0) {
      if (fVar1 <= 0.0) {
        this[0x8225] = (PVPMapUI)0x0;
      }
      *(float *)(this + 0x8220) = fVar1 - 0.05;
    }
    else {
      *(float *)(this + 0x8220) = fVar1 + 0.025;
      if (0.1 <= fVar1 + 0.025) {
        this[0x8224] = (PVPMapUI)0x0;
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPMapUI::colorEffectUpdate() */

void __thiscall PVPMapUI::colorEffectUpdate(PVPMapUI *this)

{
  int iVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x48c) < 0) goto LAB_04a9abc8;
  iVar1 = *(int *)(this + 0x820c);
  if (iVar1 < 0xce) {
    this[0x821c] = (PVPMapUI)0x1;
LAB_04a9aba0:
    iVar1 = iVar1 + 4;
  }
  else if (iVar1 < 0xeb) {
    if (this[0x821c] != (PVPMapUI)0x0) goto LAB_04a9aba0;
    iVar1 = iVar1 + -4;
  }
  else {
    this[0x821c] = (PVPMapUI)0x0;
    iVar1 = iVar1 + -4;
  }
  Sexy::Insets::Insets((Insets *)&local_18,iVar1,iVar1,iVar1,0xff);
  *(undefined8 *)(this + 0x820c) = local_18;
  *(undefined8 *)(this + 0x8214) = uStack_10;
LAB_04a9abc8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPMapUI::unlockColorEffectUpdate() */

void __thiscall PVPMapUI::unlockColorEffectUpdate(PVPMapUI *this)

{
  int iVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x490) < 0) goto LAB_04a9ac7c;
  iVar1 = *(int *)(this + 0x820c);
  if (iVar1 < 0xce) {
    this[0x821c] = (PVPMapUI)0x1;
LAB_04a9ac54:
    iVar1 = iVar1 + 4;
  }
  else if (iVar1 < 0xeb) {
    if (this[0x821c] != (PVPMapUI)0x0) goto LAB_04a9ac54;
    iVar1 = iVar1 + -4;
  }
  else {
    this[0x821c] = (PVPMapUI)0x0;
    iVar1 = iVar1 + -4;
  }
  Sexy::Insets::Insets((Insets *)&local_18,iVar1,iVar1,iVar1,iVar1);
  *(undefined8 *)(this + 0x820c) = local_18;
  *(undefined8 *)(this + 0x8214) = uStack_10;
LAB_04a9ac7c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPMapUI::KillDialog() */

void __thiscall PVPMapUI::KillDialog(PVPMapUI *this)

{
  if (*(long *)(this + 0x498) != 0) {
    (**(code **)(*(long *)(this + 8) + 0x68))(this + 8);
    (**(code **)(**(long **)(this + 0x498) + 0x80))(*(long **)(this + 0x498),1,1);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x498));
    *(undefined8 *)(this + 0x498) = 0;
  }
  resetDownBtn(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPMapUI::TouchBegan(Sexy::Touch const&) */

void __thiscall PVPMapUI::TouchBegan(PVPMapUI *this,Touch *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = ___stack_chk_guard;
  if (*(int *)(this + 0x100) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(this + 0x480) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(this + 0x484) = uVar1;
    KillDialog(this);
    if (*(long *)(this + 0x470) == 0) {
      *(undefined8 *)(this + 0x470) = *(undefined8 *)param_1;
    }
    else if ((*(long *)(this + 0x478) == 0) && (*(long *)(this + 0x470) != *(long *)param_1)) {
      *(long *)(this + 0x478) = *(long *)param_1;
    }
  }
  WorldMapCamera::TransformPointFromCamera
            ((float)*(int *)(param_1 + 0x10) + *(float *)(this + 0x110),
             (float)*(int *)(param_1 + 0x14) + *(float *)(this + 0x114));
  nop();
  if (lVar2 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PVPMapUI::TouchBegan(Sexy::Touch const&) */

void __thiscall PVPMapUI::TouchBegan(PVPMapUI *this,Touch *param_1)

{
  TouchBegan(this + -8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPMapUI::isContain(Sexy::FPoint, Sexy::FPoint) */

void __thiscall PVPMapUI::isContain(PVPMapUI *this,float *param_2,TPoint *param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  DVec2 aDStack_88 [8];
  DVec2 aDStack_80 [8];
  DVec2 aDStack_78 [8];
  DVec2 aDStack_70 [8];
  FPoint aFStack_68 [8];
  FPoint aFStack_60 [8];
  FPoint aFStack_58 [8];
  FPoint aFStack_50 [8];
  FPoint aFStack_48 [8];
  FPoint aFStack_40 [8];
  FPoint aFStack_38 [8];
  FPoint aFStack_30 [8];
  FPoint aFStack_28 [8];
  FPoint aFStack_20 [8];
  FPoint aFStack_18 [8];
  FPoint aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)FUN_04a9a748(0xc2bf6666);
  DVec2::DVec2(aDStack_88,*param_2,fVar2 + param_2[1]);
  fVar2 = (float)FUN_04a9a748(0x43556666);
  DVec2::DVec2(aDStack_80,fVar2 + *param_2,param_2[1]);
  fVar2 = (float)FUN_04a9a748(0x44098000);
  fVar4 = *param_2;
  fVar3 = (float)FUN_04a9a748(0xc3460000);
  DVec2::DVec2(aDStack_78,fVar2 + fVar4,fVar3 + param_2[1]);
  fVar2 = (float)FUN_04a9a748(0x43b08000);
  fVar4 = *param_2;
  fVar3 = (float)FUN_04a9a748(0xc38f0000);
  DVec2::DVec2(aDStack_70,fVar2 + fVar4,fVar3 + param_2[1]);
  Sexy::FPoint::FPoint(aFStack_68,param_3);
  Sexy::FPoint::FPoint(aFStack_60,(TPoint *)aDStack_88);
  Sexy::FPoint::FPoint(aFStack_58,(TPoint *)aDStack_80);
  fVar2 = (float)Multiply(this,aFStack_68,aFStack_60,aFStack_58);
  Sexy::FPoint::FPoint(aFStack_50,param_3);
  Sexy::FPoint::FPoint(aFStack_48,(TPoint *)aDStack_70);
  Sexy::FPoint::FPoint(aFStack_40,(TPoint *)aDStack_78);
  fVar3 = (float)Multiply(this,aFStack_50,aFStack_48,aFStack_40);
  bVar1 = false;
  if (fVar3 * fVar2 <= 0.0) {
    Sexy::FPoint::FPoint(aFStack_38,param_3);
    Sexy::FPoint::FPoint(aFStack_30,(TPoint *)aDStack_70);
    Sexy::FPoint::FPoint(aFStack_28,(TPoint *)aDStack_88);
    fVar2 = (float)Multiply(this,aFStack_38,aFStack_30,aFStack_28);
    Sexy::FPoint::FPoint(aFStack_20,param_3);
    Sexy::FPoint::FPoint(aFStack_18,(TPoint *)aDStack_78);
    Sexy::FPoint::FPoint(aFStack_10,(TPoint *)aDStack_80);
    fVar3 = (float)Multiply(this,aFStack_20,aFStack_18,aFStack_10);
    bVar1 = fVar3 * fVar2 <= 0.0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPMapUI::isContain(Sexy::FPoint, Sexy::FPoint, Sexy::FPoint, Sexy::FPoint, Sexy::FPoint) */

void __thiscall
PVPMapUI::isContain(PVPMapUI *this,TPoint *param_2,TPoint *param_3,TPoint *param_4,TPoint *param_5,
                   TPoint *param_6)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  FPoint aFStack_68 [8];
  FPoint aFStack_60 [8];
  FPoint aFStack_58 [8];
  FPoint aFStack_50 [8];
  FPoint aFStack_48 [8];
  FPoint aFStack_40 [8];
  FPoint aFStack_38 [8];
  FPoint aFStack_30 [8];
  FPoint aFStack_28 [8];
  FPoint aFStack_20 [8];
  FPoint aFStack_18 [8];
  FPoint aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FPoint::FPoint(aFStack_68,param_6);
  Sexy::FPoint::FPoint(aFStack_60,param_2);
  Sexy::FPoint::FPoint(aFStack_58,param_3);
  fVar2 = (float)Multiply(this,aFStack_68,aFStack_60,aFStack_58);
  Sexy::FPoint::FPoint(aFStack_50,param_6);
  Sexy::FPoint::FPoint(aFStack_48,param_5);
  Sexy::FPoint::FPoint(aFStack_40,param_4);
  fVar3 = (float)Multiply(this,aFStack_50,aFStack_48,aFStack_40);
  bVar1 = false;
  if (fVar3 * fVar2 <= 0.0) {
    Sexy::FPoint::FPoint(aFStack_38,param_6);
    Sexy::FPoint::FPoint(aFStack_30,param_5);
    Sexy::FPoint::FPoint(aFStack_28,param_2);
    fVar2 = (float)Multiply(this,aFStack_38,aFStack_30,aFStack_28);
    Sexy::FPoint::FPoint(aFStack_20,param_6);
    Sexy::FPoint::FPoint(aFStack_18,param_4);
    Sexy::FPoint::FPoint(aFStack_10,param_3);
    fVar3 = (float)Multiply(this,aFStack_20,aFStack_18,aFStack_10);
    bVar1 = fVar3 * fVar2 <= 0.0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* PVPMapUI::OnPVPEvilDavilNarrationSuccessFinished() */

void PVPMapUI::OnPVPEvilDavilNarrationSuccessFinished(void)

{
  int iVar1;
  long lVar2;
  NetworkMgr *this;
  INetworkMsgProcess *this_00;
  
  lVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  iVar1 = FUN_04a9a22c(*(undefined4 *)(lVar2 + 0x1f8));
  if (-1 < iVar1) {
    this = (NetworkMgr *)NetworkMgr::Instance();
    this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this);
    INetworkMsgProcess::RequestPVPMapInfo(this_00);
    return;
  }
  return;
}


/* PVPMapUI::OnPVPEvilDavilNarrationFailedFinished() */

void PVPMapUI::OnPVPEvilDavilNarrationFailedFinished(void)

{
  int iVar1;
  long lVar2;
  NetworkMgr *this;
  INetworkMsgProcess *this_00;
  
  lVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  iVar1 = FUN_04a9a22c(*(undefined4 *)(lVar2 + 0x1f8));
  if (-1 < iVar1) {
    this = (NetworkMgr *)NetworkMgr::Instance();
    this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this);
    INetworkMsgProcess::RequestPVPMapInfo(this_00);
    return;
  }
  return;
}


/* PVPMapUI::refreshHouseAnim() */

void __thiscall PVPMapUI::refreshHouseAnim(PVPMapUI *this)

{
  MapEditor *this_00;
  short sVar1;
  int iVar2;
  uint uVar3;
  PVPManager *pPVar4;
  undefined8 *puVar5;
  OutlineFont *this_01;
  undefined8 *puVar6;
  int *piVar7;
  ulong uVar8;
  MapEventItem *this_02;
  ulong uVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar13 = 0;
  pPVar4 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstance();
  this_00 = (MapEditor *)(this + 8);
  puVar5 = (undefined8 *)PVPManager::GetPVPMapDataList(pPVar4);
  this_01 = (OutlineFont *)Sexy::LazySingleton<PVPManager>::GetInstance();
  puVar6 = (undefined8 *)EA::Text::OutlineFont::GetOTF(this_01);
  pPVar4 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstance();
  uVar14 = 0;
  piVar7 = (int *)PVPManager::GetPVPMapMainData(pPVar4);
  uVar12 = *(undefined8 *)(*(long *)(this + 0xe0) + 8);
  uVar8 = FUN_04a9a2b0(uVar12,*(undefined8 *)(*(long *)(this + 0xe0) + 0x10));
  if (uVar8 != 0) {
    do {
      this_02 = (MapEventItem *)FUN_04a9a2d0(uVar12,uVar13);
      iVar2 = FUN_04a9a20c(*(undefined4 *)(this_02 + 0x14));
      if (iVar2 == 0xf) {
        uVar8 = 0;
        while( true ) {
          uVar12 = *puVar5;
          uVar9 = FUN_04a9a370(uVar12,puVar5[1]);
          iVar2 = (int)uVar14;
          if (uVar9 <= uVar8) break;
          while( true ) {
            lVar10 = FUN_04a9a37c(uVar12,uVar8);
            if (*(int *)(lVar10 + 0x34) == 1) {
              iVar11 = *(int *)(lVar10 + 0x38) + -1;
            }
            else {
              iVar11 = (*(int *)(lVar10 + 0x34) + -2) * 3 + *(int *)(lVar10 + 0x38) + 4;
            }
            uVar8 = uVar8 + 1;
            uVar3 = MapEventItem::GetEventId(this_02);
            if (iVar11 + 1U != (uVar3 & 0xffff)) break;
            MapEditor::switchAnim(this_00,2,iVar11 % 3,iVar2);
            uVar12 = *puVar5;
            uVar9 = FUN_04a9a370(uVar12,puVar5[1]);
            if (uVar9 <= uVar8) goto LAB_04a9b79c;
          }
        }
LAB_04a9b79c:
        uVar8 = 0;
        while( true ) {
          uVar12 = *puVar6;
          uVar14 = FUN_04a9a2dc(uVar12,puVar6[1]);
          if (uVar14 <= uVar8) break;
          while( true ) {
            lVar10 = FUN_04a9a2e8(uVar12,uVar8);
            if (*(int *)(lVar10 + 0x20) == 1) {
              iVar11 = *(int *)(lVar10 + 0x24) + -1;
            }
            else {
              iVar11 = (*(int *)(lVar10 + 0x20) + -2) * 3 + *(int *)(lVar10 + 0x24) + 4;
            }
            uVar8 = uVar8 + 1;
            uVar3 = MapEventItem::GetEventId(this_02);
            if (iVar11 + 1U != (uVar3 & 0xffff)) break;
            MapEditor::switchAnim(this_00,1,iVar11 % 2,iVar2);
            uVar12 = *puVar6;
            uVar14 = FUN_04a9a2dc(uVar12,puVar6[1]);
            if (uVar14 <= uVar8) goto LAB_04a9b83c;
          }
        }
LAB_04a9b83c:
        sVar1 = MapEventItem::GetEventId(this_02);
        if (sVar1 == 2) {
          MapEditor::switchAnim(this_00,0,(*piVar7 + -1) / 5,iVar2);
        }
        uVar12 = *(undefined8 *)(*(long *)(this + 0xe0) + 8);
        uVar8 = FUN_04a9a2b0(uVar12,*(undefined8 *)(*(long *)(this + 0xe0) + 0x10));
      }
      uVar13 = uVar13 + 1;
      uVar14 = uVar13 & 0xffffffff;
    } while (uVar13 < uVar8);
  }
  return;
}


/* PVPMapUI::OnPVPEvilDavidNattationStartFinished() */

void PVPMapUI::OnPVPEvilDavidNattationStartFinished(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    PlayerInfo::SetHaveShowEvilDavidIntro(this_00,true);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPMapUI::onPVPNarrationFinished() */

void __thiscall PVPMapUI::onPVPNarrationFinished(PVPMapUI *this)

{
  LawnApp *pLVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ProfileMgr *this_00;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined4 local_18;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar6 = ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = FUN_04a9a214(*(undefined4 *)(lVar6 + 0x1100));
  if (iVar2 == 1) {
    lVar7 = *(long *)(this + 0x3a8);
    iVar2 = FUN_04a9a734(0x10e);
    pLVar1 = gLawnApp;
    fVar8 = *(float *)(lVar7 + 0x40);
    iVar3 = FUN_04a9a734(0xa0);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_18,(float)iVar2 + fVar8,(float)iVar3 + *(float *)(lVar7 + 0x44));
    fVar8 = (float)FUN_04a9a748(0x437a0000);
    std::string::string(asStack_10,"[PVP_TUTORIAL_CLICKBASEHOSE]");
    LawnApp::ShowGameMaskUI(local_18,local_14,pLVar1,(int)fVar8,this + 8,asStack_10);
    std::string::~string(asStack_10);
    nop();
    lVar7 = LawnApp::GetGameMaskUI(gLawnApp);
    uVar4 = FUN_04a9a734(0xfffffe7a);
    uVar5 = FUN_04a9a734(0x1e0);
    FUN_04a9a588(lVar7 + 0x114,uVar4,uVar5);
    lVar7 = LawnApp::GetGameMaskUI(gLawnApp);
    uVar4 = FUN_04a9a734(0xffffffec);
    uVar5 = FUN_04a9a734(300);
    FUN_04a9a5e0(lVar7 + 0xf8,lVar7 + 0x100,uVar4,uVar5);
    iVar2 = FUN_04a9a214(*(undefined4 *)(lVar6 + 0x1100));
  }
  if (iVar2 == 7) {
    lVar7 = *(long *)(this + 0x3a8);
    iVar2 = FUN_04a9a734(0x46);
    pLVar1 = gLawnApp;
    fVar8 = *(float *)(lVar7 + 0x40);
    iVar3 = FUN_04a9a734(0xa0);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_18,(float)iVar2 + fVar8,(float)iVar3 + *(float *)(lVar7 + 0x44));
    fVar8 = (float)FUN_04a9a748(0x437a0000);
    std::string::string(asStack_10,"[PVP_TUTORIAL_CLICKATTACK]");
    LawnApp::ShowGameMaskUI(local_18,local_14,pLVar1,(int)fVar8,this + 8,asStack_10);
    std::string::~string(asStack_10);
    nop();
    lVar7 = LawnApp::GetGameMaskUI(gLawnApp);
    uVar4 = FUN_04a9a734(0xfffffe7a);
    uVar5 = FUN_04a9a734(0x1e0);
    FUN_04a9a588(lVar7 + 0x114,uVar4,uVar5);
    lVar7 = LawnApp::GetGameMaskUI(gLawnApp);
    uVar4 = FUN_04a9a734(0xffffffec);
    uVar5 = FUN_04a9a734(300);
    FUN_04a9a5e0(lVar7 + 0xf8,lVar7 + 0x100,uVar4,uVar5);
    iVar2 = FUN_04a9a214(*(undefined4 *)(lVar6 + 0x1100));
  }
  if (iVar2 == 9) {
    FUN_04a9a218(lVar6 + 0x1100,10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPMapUI::onShow() */

void __thiscall PVPMapUI::onShow(PVPMapUI *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar4;
  PVPManager *pPVar5;
  CrazyNPCManager *pCVar6;
  uint uVar7;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  uVar7 = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = FUN_04a9a214(*(undefined4 *)(this_01 + 0x1100));
  if (iVar2 == 1) {
    uVar7 = 1;
    pCVar6 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string(asStack_60,"MAP_PVPGARDENWAR_INTRO");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPVPNarrationFinished);
    Sexy::Delegate0::Delegate0<PVPMapUI,void(PVPMapUI::*)()>(aDStack_38,aCStack_50);
    std::string::string(asStack_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar6,asStack_60,aDStack_38,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
    iVar2 = FUN_04a9a214(*(undefined4 *)(this_01 + 0x1100));
    if (iVar2 != 7) goto LAB_04a9bee8;
LAB_04a9c110:
    pCVar6 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string(asStack_60,"PVP_ATTACKBEGIN_INTRO");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPVPNarrationFinished);
    Sexy::Delegate0::Delegate0<PVPMapUI,void(PVPMapUI::*)()>(aDStack_38,aCStack_50);
    std::string::string(asStack_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar6,asStack_60,aDStack_38,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
    Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  }
  else {
    if (iVar2 == 7) goto LAB_04a9c110;
LAB_04a9bee8:
    lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    uVar3 = FUN_04a9a22c(*(undefined4 *)(lVar4 + 0x1f8));
    if (uVar7 < ~uVar3 >> 0x1f) {
      cVar1 = PlayerInfo::GetHaveShowEvilDavidIntro(this_01);
      if (cVar1 != '\0') {
        pPVar5 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        cVar1 = PVPManager::IsEvilDavidBattle(pPVar5);
        if (cVar1 == '\0') goto LAB_04a9bf18;
        uVar7 = 0;
LAB_04a9bf6c:
        lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        iVar2 = FUN_04a9a230(*(undefined4 *)(lVar4 + 0x1fc));
        if (iVar2 == 0) {
          pCVar6 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
          std::string::string(asStack_60,"MAP_PVPEVILDAVID_FAILED_INTRO");
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,OnPVPEvilDavilNarrationFailedFinished);
          Sexy::Delegate0::Delegate0<PVPMapUI,void(PVPMapUI::*)()>(aDStack_38,aCStack_50);
          std::string::string(asStack_58,"");
          CrazyNPCManager::StartNarrativeID(pCVar6,asStack_60,aDStack_38,asStack_58);
          std::string::~string(asStack_58);
          nop();
          std::string::~string(asStack_60);
          nop();
          lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
          iVar2 = FUN_04a9a230(*(undefined4 *)(lVar4 + 0x1fc));
          if (iVar2 != 1) goto LAB_04a9bf08;
          uVar7 = 1;
        }
        else {
          lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
          iVar2 = FUN_04a9a230(*(undefined4 *)(lVar4 + 0x1fc));
          if (iVar2 != 1) goto LAB_04a9bf04;
        }
        if (0 < (int)uVar3) {
          pPVar5 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
          iVar2 = PVPManager::GetEvilDavidMaxChallengingTimes(pPVar5);
          if ((int)uVar3 <= iVar2) {
            Sexy::StrFormat("MAP_PVPEVILDAVID_SUCCESS_%d_INTRO",asStack_60,(ulong)uVar3);
            pCVar6 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
            Sexy::
            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                      ((ReceivedDataCallback *)this,OnPVPEvilDavilNarrationSuccessFinished);
            Sexy::Delegate0::Delegate0<PVPMapUI,void(PVPMapUI::*)()>(aDStack_38,aCStack_50);
            std::string::string(asStack_58,"");
            CrazyNPCManager::StartNarrativeID(pCVar6,asStack_60,aDStack_38,asStack_58);
            std::string::~string(asStack_58);
            nop();
            std::string::~string(asStack_60);
            goto LAB_04a9bf08;
          }
        }
        goto LAB_04a9bf04;
      }
      pCVar6 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      std::string::string(asStack_60,"MAP_PVPEVILDAVID_START_INTRO");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnPVPEvilDavidNattationStartFinished);
      Sexy::Delegate0::Delegate0<PVPMapUI,void(PVPMapUI::*)()>(aDStack_38,aCStack_50);
      std::string::string(asStack_58,"");
      CrazyNPCManager::StartNarrativeID(pCVar6,asStack_60,aDStack_38,asStack_58);
      std::string::~string(asStack_58);
      nop();
      uVar7 = 1;
      std::string::~string(asStack_60);
      nop();
      pPVar5 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      cVar1 = PVPManager::IsEvilDavidBattle(pPVar5);
      if (cVar1 != '\0') goto LAB_04a9bf6c;
    }
    else {
LAB_04a9bf04:
      if (uVar7 == 0) goto LAB_04a9bf18;
    }
  }
LAB_04a9bf08:
  this[0x488] = (PVPMapUI)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  *(undefined8 *)(this + 0x470) = 0;
  this[0x489] = (PVPMapUI)0x0;
LAB_04a9bf18:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPMapUI::setupScreen() */

void __thiscall PVPMapUI::setupScreen(PVPMapUI *this)

{
  PVPMapUI *pPVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  PVZ2UIButton *this_00;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  INetworkMsgProcess *this_03;
  string *psVar9;
  SysFont *this_04;
  long lVar10;
  Widget *this_05;
  UIWidgetText *this_06;
  Widget *this_07;
  TrainingItemWidget *pTVar11;
  PVPCurrencyBar *this_08;
  long *plVar12;
  int iVar13;
  int iVar14;
  code *pcVar15;
  undefined1 auStack_80 [8];
  int local_78;
  int local_74;
  wstring awStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = this + 8;
  (**(code **)(*(long *)(this + 8) + 0x198))
            (pPVar1,0,0,*(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728));
  FUN_05478178((wstring *)&local_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)awStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,100,(ButtonListener *)this,(wstring *)&local_78,(Color *)awStack_40);
  FUN_05476c50((wstring *)&local_78);
  nop();
  pcVar15 = *(code **)(*(long *)this_00 + 0x198);
  uVar2 = FUN_04a9a734(0x1c);
  uVar3 = FUN_04a9a734(0x12);
  this_01 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7f778);
  uVar4 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  this_02 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7f778);
  uVar5 = SalesProgressBar::GetCurrentLevel(this_02);
  (*pcVar15)(this_00,uVar2,uVar3,uVar4,uVar5);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b7f778,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_40,&DAT_06b7f648,1);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)awStack_40);
  (**(code **)(*(long *)(this + 8) + 0x60))(pPVar1,this_00);
  this_03 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
  INetworkMsgProcess::RequestPVPTrainingInfos(this_03);
  psVar9 = (string *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  SeedPacketUtils::GetZombiePacketSize(psVar9);
  iVar6 = FUN_04a9a734(0x28);
  local_74 = local_74 + iVar6;
  iVar6 = FUN_04a9a734(0x1e);
  this_04 = (SysFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  lVar10 = Sexy::SysFont::CreateImageFont(this_04);
  iVar7 = FUN_04a9a278(*(undefined4 *)(lVar10 + 0xc));
  this_05 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_05);
  (**(code **)(*(long *)this_05 + 0x90))(this_05,1);
  uVar2 = FUN_04a9a734(10);
  (**(code **)(*(long *)this_05 + 0x198))
            (this_05,uVar2,*(int *)(this + 0x5c) - local_74,iVar7 * local_78,iVar6 + local_74);
  (**(code **)(*(long *)(this + 8) + 0x60))(pPVar1,this_05);
  TodStringTranslate(L"[PVP_MAP_ZOMBIE_TITLE]");
  this_06 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(this_06,awStack_40);
  FUN_05476c50(awStack_40);
  (**(code **)(*(long *)this_06 + 0x198))(this_06,0,0,*(undefined4 *)(this_05 + 0x50),iVar6);
  pcVar15 = *(code **)(*(long *)this_06 + 0x170);
  Sexy::Color::Color((Color *)awStack_40,1);
  (*pcVar15)(this_06,0,awStack_40);
  FUN_04a9a27c(this_06 + 0xe8,PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  (**(code **)(*(long *)this_05 + 0x60))(this_05,this_06);
  this_07 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_07);
  lVar10 = *(long *)this_05;
  *(Widget **)(this + 0x4a0) = this_07;
  (**(code **)(lVar10 + 0x60))(this_05);
  if (iVar7 < 1) {
    iVar13 = 0;
  }
  else {
    iVar14 = 0;
    iVar13 = 0;
    do {
      iVar14 = iVar14 + 1;
      pTVar11 = ::operator_new(0x120);
      TrainingItemWidget::TrainingItemWidget(pTVar11,2);
      (**(code **)(*(long *)pTVar11 + 0x198))(pTVar11,iVar13,0,local_78,local_74);
      (**(code **)(**(long **)(this + 0x4a0) + 0x60))(*(long **)(this + 0x4a0),pTVar11);
      iVar13 = iVar13 + local_78;
    } while (iVar14 != iVar7);
  }
  this_08 = ::operator_new(0x150);
  PVPCurrencyBar::PVPCurrencyBar(this_08);
  (**(code **)(*(long *)(this + 8) + 0x60))(pPVar1,this_08);
  iVar7 = *(int *)(this_08 + 0x50);
  iVar14 = *(int *)(gLawnApp + 0xd4);
  iVar8 = FUN_04a9a734(0x14);
  *(int *)(this_08 + 0x48) = (iVar14 - iVar7) - iVar8;
  uVar2 = FUN_04a9a734(10);
  plVar12 = *(long **)(this + 0x4a0);
  *(undefined4 *)(this_08 + 0x4c) = uVar2;
  uVar2 = FUN_04a9a734(0);
  (**(code **)(*plVar12 + 0x198))(plVar12,uVar2,iVar6,iVar13,local_74);
  refreshHouseAnim(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPMapUI::zoomMap(int, int, float) */

void __thiscall PVPMapUI::zoomMap(PVPMapUI *this,int param_1,int param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (0.0 <= param_3) {
    if (0.0 < param_3) {
      uVar7 = NEON_fminnm(param_3 + *(float *)(this + 0x128),*(undefined4 *)(this + 0x124));
      *(undefined4 *)(this + 0x128) = uVar7;
      return;
    }
    *(float *)(this + 0x128) = param_3 + *(float *)(this + 0x128);
    return;
  }
  fVar8 = *(float *)(this + 0x128);
  fVar11 = param_3 + fVar8;
  if (fVar11 <= *(float *)(this + 0x120)) {
    param_3 = *(float *)(this + 0x120) - fVar8;
    fVar11 = param_3 + fVar8;
  }
  iVar1 = *(int *)(gLawnApp + 0x724);
  *(float *)(this + 0x114) =
       *(float *)(this + 0x114) +
       ((float)(param_2 - *(int *)(gLawnApp + 0x728) / 2) + *(float *)(this + 0x114)) * param_3;
  *(float *)(this + 0x110) =
       *(float *)(this + 0x110) +
       ((float)(param_1 - iVar1 / 2) + *(float *)(this + 0x110)) * param_3;
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fc40);
  fVar9 = (float)*(int *)(lVar6 + 0x38) - DAT_06b7f518;
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fc40);
  fVar8 = DAT_06b7f518;
  iVar1 = *(int *)(lVar6 + 0x38);
  iVar2 = *(int *)(gLawnApp + 0x724);
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fc40);
  fVar10 = (float)*(int *)(lVar6 + 0x3c) - DAT_06b7f6a0;
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fc40);
  fVar5 = DAT_06b7f6a0;
  iVar3 = *(int *)(lVar6 + 0x3c);
  fVar9 = -(fVar11 * fVar9);
  iVar4 = *(int *)(gLawnApp + 0x728);
  if ((*(float *)(this + 0x110) < fVar9) ||
     (fVar9 = fVar11 * (fVar8 + (float)iVar1 * 2.0) - (float)iVar2, fVar9 < *(float *)(this + 0x110)
     )) {
    *(float *)(this + 0x110) = fVar9;
  }
  fVar8 = -(fVar11 * fVar10);
  if (fVar8 <= *(float *)(this + 0x114)) {
    fVar8 = fVar11 * (fVar5 + (float)iVar3 * 2.0) - (float)iVar4;
    if (fVar8 < *(float *)(this + 0x114)) {
      *(float *)(this + 0x114) = fVar8;
    }
    *(float *)(this + 0x128) = param_3 + *(float *)(this + 0x128);
    return;
  }
  *(float *)(this + 0x114) = fVar8;
  *(float *)(this + 0x128) = param_3 + *(float *)(this + 0x128);
  return;
}


/* PVPMapUI::OnGesturePinch(Sexy::Point, int, float) */

void PVPMapUI::OnGesturePinch(float param_1,PVPMapUI *param_2)

{
  if (*(int *)(param_2 + 0x100) == 0) {
    zoomMap(param_2,(int)*(float *)(param_2 + 0x118),(int)*(float *)(param_2 + 0x11c),param_1 * 0.5)
    ;
    param_2[0x489] = (PVPMapUI)0x1;
  }
  return;
}


/* non-virtual thunk to PVPMapUI::OnGesturePinch(Sexy::Point, int, float) */

void __thiscall PVPMapUI::OnGesturePinch(PVPMapUI *this)

{
  OnGesturePinch(this + -8);
  return;
}


/* PVPMapUI::setCameraPosition(int, int) */

void __thiscall PVPMapUI::setCameraPosition(PVPMapUI *this,int param_1,int param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  if (param_1 < 1) {
    lVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fc40);
    uVar4 = NEON_fminnm(*(float *)(this + 0x110) - (float)param_1,
                        (DAT_06b7f518 + (float)*(int *)(lVar1 + 0x38) * 2.0) *
                        *(float *)(this + 0x128) - (float)*(int *)(gLawnApp + 0x724));
    *(undefined4 *)(this + 0x110) = uVar4;
  }
  else {
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fc40);
    *(float *)(this + 0x110) = *(float *)(this + 0x110) - (float)param_1;
  }
  if (0 < param_2) {
    lVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fc40);
    fVar3 = -(*(float *)(this + 0x128) * ((float)*(int *)(lVar1 + 0x3c) - DAT_06b7f6a0));
    fVar2 = *(float *)(this + 0x114) - (float)param_2;
    if (*(float *)(this + 0x114) - (float)param_2 <= fVar3) {
      fVar2 = fVar3;
    }
    *(float *)(this + 0x114) = fVar2;
    return;
  }
  lVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fc40);
  uVar4 = NEON_fminnm(*(float *)(this + 0x114) - (float)param_2,
                      (DAT_06b7f6a0 + (float)*(int *)(lVar1 + 0x3c) * 2.0) *
                      *(float *)(this + 0x128) - (float)*(int *)(gLawnApp + 0x728));
  *(undefined4 *)(this + 0x114) = uVar4;
  return;
}


/* PVPMapUI::TouchMoved(Sexy::Touch const&) */

void __thiscall PVPMapUI::TouchMoved(PVPMapUI *this,Touch *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ProfileMgr *this_00;
  long lVar6;
  
  if (*(int *)(this + 0x100) != 0) {
LAB_04a9cf2c:
    nop();
    return;
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar6 = ProfileMgr::GetCurrentProfile(this_00);
  iVar4 = FUN_04a9a214(*(undefined4 *)(lVar6 + 0x1100));
  if ((iVar4 != 1) && (iVar4 != 7)) {
    if ((*(long *)(this + 0x470) == 0) || (*(long *)(this + 0x478) == 0)) {
      if (this[0x489] == (PVPMapUI)0x0) {
        iVar4 = *(int *)(param_1 + 0x10);
        iVar1 = *(int *)(param_1 + 0x14);
        iVar2 = iVar4 - *(int *)(this + 0x480);
        iVar3 = iVar1 - *(int *)(this + 0x484);
        if (this[0x488] == (PVPMapUI)0x0) {
          iVar5 = (**(code **)(*gLawnApp + 0x470))(gLawnApp);
          if (iVar5 * iVar5 < iVar3 * iVar3 + iVar2 * iVar2) {
            this[0x488] = (PVPMapUI)0x1;
          }
          else if (this[0x488] == (PVPMapUI)0x0) goto LAB_04a9cf2c;
        }
        setCameraPosition(this,iVar2,iVar3);
        *(int *)(this + 0x480) = iVar4;
        *(int *)(this + 0x484) = iVar1;
        goto LAB_04a9cf2c;
      }
    }
    else {
      this[0x489] = (PVPMapUI)0x1;
    }
  }
  return;
}


/* non-virtual thunk to PVPMapUI::TouchMoved(Sexy::Touch const&) */

void __thiscall PVPMapUI::TouchMoved(PVPMapUI *this,Touch *param_1)

{
  TouchMoved(this + -8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPMapUI::DrawEvilDavid(Sexy::Graphics*, void*, Sexy::FPoint&) */

void __thiscall
PVPMapUI::DrawEvilDavid(PVPMapUI *this,Graphics *param_1,void *param_2,FPoint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  PrimeTypeface *pPVar6;
  ResourceInfo *pRVar7;
  long lVar8;
  undefined8 uVar9;
  LotteryResultProgressBar *this_00;
  Image *pIVar10;
  SalesProgressBar *pSVar11;
  float fVar12;
  float fVar13;
  RtWeakPtr aRStack_48 [8];
  RtWeakPtr aRStack_40 [8];
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  wstring awStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (Graphics *)0x0) && (param_2 != (void *)0x0)) {
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7faf8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f870);
    TodStringTranslate(L"[EVIL_DAVID_NAME]");
    TodReplaceNumberString(awStack_18,L"{SON}",*(int *)((long)param_2 + 0x30));
    FUN_05476c50(awStack_18);
    TodReplaceNumberString(awStack_38,L"{MON}",*(int *)((long)param_2 + 0x34));
    FUN_054766c8(awStack_38,awStack_18);
    FUN_05476c50(awStack_18);
    pPVar6 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
    FUN_05477b24(awStack_18,awStack_38);
    iVar1 = Sexy::PrimeTypeface::SizeString_Line(pPVar6,awStack_18);
    iVar2 = FUN_04a9a734(0x12);
    FUN_05476c50(awStack_18);
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_40);
    fVar13 = *(float *)param_3;
    fVar12 = *(float *)(param_3 + 4);
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar7,(int)fVar13,(int)fVar12,iVar1 + iVar2,*(int *)(lVar8 + 0x3c))
    ;
    iVar3 = FUN_04a9a734(10);
    iVar4 = FUN_04a9a734(3);
    iVar5 = FUN_04a9a734(0x1e);
    Sexy::Insets::Insets
              (aIStack_28,(int)((float)iVar3 + *(float *)param_3),
               (int)(*(float *)(param_3 + 4) - (float)iVar4),iVar1 + iVar2,iVar5);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
    Sexy::Color::Color((Color *)awStack_18,1);
    WriteWordInRect(param_1,awStack_38,aIStack_28,uVar9,awStack_18,3,1);
    TodStringTranslate(L"[EVIL_DAVID_CD_TIME]");
    iVar1 = *(int *)((long)param_2 + 0x2c);
    lVar8 = LawnApp::GetRealServerTime(gLawnApp);
    lVar8 = iVar1 - lVar8;
    StringHelper::ToTimeString((StringHelper *)0x0,(float)lVar8,(int)lVar8);
    TodReplaceString((wstring *)aIStack_28,L"{TIME}",awStack_18);
    FUN_05476c50(awStack_18);
    FUN_05476c50(aIStack_28);
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_48);
    iVar1 = FUN_04a9a734(10);
    iVar2 = FUN_04a9a734(0x1c);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar7,(int)(*(float *)param_3 - (float)iVar1),
               (int)(*(float *)(param_3 + 4) - (float)iVar2));
    iVar1 = FUN_04a9a734(8);
    fVar12 = *(float *)param_3;
    iVar2 = FUN_04a9a734(0x1f);
    fVar13 = *(float *)(param_3 + 4);
    this_00 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar4 = FUN_04a9a734(0x1e);
    Sexy::Insets::Insets
              (aIStack_28,(int)(fVar12 - (float)iVar1),(int)(fVar13 - (float)iVar2),iVar3,iVar4);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
    Sexy::Color::Color((Color *)awStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar9,awStack_18,5,1);
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fb70);
    iVar1 = FUN_04a9a734(0x14);
    fVar13 = *(float *)param_3;
    iVar2 = FUN_04a9a734(0x1e);
    fVar12 = *(float *)(param_3 + 4);
    pSVar11 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fb70);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar11);
    Sexy::Graphics::DrawImage
              (param_1,pIVar10,(int)((float)iVar1 + fVar13),
               (int)((fVar12 - (float)iVar2) - (float)iVar3));
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7f6f8);
    iVar1 = FUN_04a9a734(0x14);
    fVar13 = *(float *)param_3;
    iVar2 = FUN_04a9a734(0x1e);
    fVar12 = *(float *)(param_3 + 4);
    pSVar11 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7f6f8);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar11);
    Sexy::Graphics::DrawImage
              (param_1,pIVar10,(int)((float)iVar1 + fVar13),
               (int)((fVar12 - (float)iVar2) - (float)iVar3));
    FUN_05476c50(auStack_30);
    FUN_05476c50(awStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPMapUI::onPVPTrainingZombieChanged(bool) */

void PVPMapUI::onPVPTrainingZombieChanged(bool param_1)

{
  bool bVar1;
  SysFont *this;
  TrainingCamp *this_00;
  undefined8 *puVar2;
  TaskResource **ppTVar3;
  string *psVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  this = (SysFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  this_00 = (TrainingCamp *)Sexy::SysFont::CreateImageFont(this);
  TrainingCamp::GetHaveDatas(this_00,(vector *)avStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  ppTVar3 = (TaskResource **)(*(long *)((ulong)param_1 + 0x4a0) + 8);
  local_38 = FUN_04a9c3b4(*ppTVar3);
  local_30 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       (ppTVar3);
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_38,(rbtree_iterator *)&local_30), bVar1
        ) {
    puVar2 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_38);
    psVar4 = (string *)*puVar2;
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_28);
    if (bVar1) {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      ZombieItemWidget::SetType(psVar4);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_40);
    }
    else {
      ZombieItemWidget::SetType(psVar4);
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_38);
  }
  std::vector<TrainingData,std::allocator<TrainingData>>::~vector
            ((vector<TrainingData,std::allocator<TrainingData>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPMapUI::ButtonPress(int) */

void PVPMapUI::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to PVPMapUI::ButtonPress(int) */

void __thiscall PVPMapUI::ButtonPress(PVPMapUI *this,int param_1)

{
  ButtonPress((int)this + -8);
  return;
}


/* PVPMapUI::ButtonDepress(int) */

void __thiscall PVPMapUI::ButtonDepress(PVPMapUI *this,int param_1)

{
  short sVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  MapEventItem *pMVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  if (this[0x488] == (PVPMapUI)0x0) {
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_UI_Button_Click_Release");
    switch(param_1) {
    case 100:
      lVar6 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      FUN_04a9a238(lVar6 + 0x128,0);
      GameStateMgr::TranslateTo(gGameStateMgr,0x16,5,5);
      return;
    case 0x65:
      uVar7 = 0;
      uVar8 = *(undefined8 *)(*(long *)(this + 0xe0) + 8);
      DAT_06b7f460 = DAT_06b7f460 + -1;
      uVar4 = FUN_04a9a2b0(uVar8,*(undefined8 *)(*(long *)(this + 0xe0) + 0x10));
      while (uVar7 < uVar4) {
        pMVar5 = (MapEventItem *)FUN_04a9a2d0(uVar8,uVar7);
        iVar2 = FUN_04a9a20c(*(undefined4 *)(pMVar5 + 0x14));
        if (iVar2 == 0xf) {
          sVar1 = MapEventItem::GetEventId(pMVar5);
          if (sVar1 == 1) {
            iVar2 = (int)uVar7;
            uVar7 = uVar7 + 1;
            MapEditor::switchAnim((MapEditor *)(this + 8),1,DAT_06b7f460,iVar2);
            uVar8 = *(undefined8 *)(*(long *)(this + 0xe0) + 8);
            uVar4 = FUN_04a9a2b0(uVar8,*(undefined8 *)(*(long *)(this + 0xe0) + 0x10));
          }
          else {
            uVar7 = uVar7 + 1;
            uVar8 = *(undefined8 *)(*(long *)(this + 0xe0) + 8);
            uVar4 = FUN_04a9a2b0(uVar8,*(undefined8 *)(*(long *)(this + 0xe0) + 0x10));
          }
        }
        else {
          uVar7 = uVar7 + 1;
        }
      }
      break;
    case 0x66:
      uVar7 = 0;
      uVar8 = *(undefined8 *)(*(long *)(this + 0xe0) + 8);
      DAT_06b7f460 = DAT_06b7f460 + 1;
      uVar4 = FUN_04a9a2b0(uVar8,*(undefined8 *)(*(long *)(this + 0xe0) + 0x10));
      while (uVar7 < uVar4) {
        pMVar5 = (MapEventItem *)FUN_04a9a2d0(uVar8,uVar7);
        iVar2 = FUN_04a9a20c(*(undefined4 *)(pMVar5 + 0x14));
        if (iVar2 == 0xf) {
          sVar1 = MapEventItem::GetEventId(pMVar5);
          if (sVar1 == 1) {
            iVar2 = (int)uVar7;
            uVar7 = uVar7 + 1;
            MapEditor::switchAnim((MapEditor *)(this + 8),1,DAT_06b7f460,iVar2);
            uVar8 = *(undefined8 *)(*(long *)(this + 0xe0) + 8);
            uVar4 = FUN_04a9a2b0(uVar8,*(undefined8 *)(*(long *)(this + 0xe0) + 0x10));
          }
          else {
            uVar7 = uVar7 + 1;
            uVar8 = *(undefined8 *)(*(long *)(this + 0xe0) + 8);
            uVar4 = FUN_04a9a2b0(uVar8,*(undefined8 *)(*(long *)(this + 0xe0) + 0x10));
          }
        }
        else {
          uVar7 = uVar7 + 1;
        }
      }
      break;
    case 0x67:
      DAT_06b7f720 = DAT_06b7f720 + -1;
      break;
    case 0x68:
      DAT_06b7f720 = DAT_06b7f720 + 1;
    }
  }
  return;
}


/* non-virtual thunk to PVPMapUI::ButtonDepress(int) */

void __thiscall PVPMapUI::ButtonDepress(PVPMapUI *this,int param_1)

{
  ButtonDepress(this + -8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPMapUI::~PVPMapUI() */

void __thiscall PVPMapUI::~PVPMapUI(PVPMapUI *this)

{
  LawnApp *pLVar1;
  CrazyNPCManager *pCVar2;
  PVPMapUI *pPVar3;
  PVPMapUI *pPVar4;
  PVPZoneData *this_00;
  PVPMapUI *pPVar5;
  WidgetContainer *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_ButtonPress_06947020;
  this_01 = (WidgetContainer *)(this + 8);
  *(undefined **)this_01 = &DAT_069470b0;
  Sexy::WidgetContainer::RemoveAllWidgets(this_01,true,true);
  std::map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
  ::clear((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
           *)(this + 0x4a8));
  std::map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
  ::clear((map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
           *)(this + 0x4d8));
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  if (*(long **)(this + 0x8230) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x8230) + 0x18))();
    *(undefined8 *)(this + 0x8230) = 0;
  }
  pPVar5 = this + 0x440;
  pPVar3 = this + 0x3a0;
  do {
    PVPHouseData::Destroy(*(PVPHouseData **)pPVar3);
    pPVar4 = pPVar3 + 8;
    *(undefined8 *)pPVar3 = 0;
    pPVar3 = pPVar4;
  } while (pPVar4 != pPVar5);
  do {
    this_00 = *(PVPZoneData **)pPVar5;
    if (this_00 != (PVPZoneData *)0x0) {
      PVPZoneData::~PVPZoneData(this_00);
      AK::FreeHook(this_00);
      *(undefined8 *)pPVar5 = 0;
    }
    pLVar1 = gLawnApp;
    pPVar5 = pPVar5 + 8;
  } while (pPVar5 != this + 0x470);
  std::string::string(asStack_10,"PVPGlobalAudio");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PVP");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PVP_Training");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PVP_Map");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"PVP_MpAnimation");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pCVar2 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  CrazyNPCManager::clearCurrentNarrativeData(pCVar2);
  pCVar2 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  CrazyNPCManager::FinisAllTalking(pCVar2);
  if (*(long **)(this + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x108) + 8))();
  }
  pPVar5 = this + 0x8208;
  do {
    pPVar5 = pPVar5 + -0x20;
    WidgetImg::~WidgetImg((WidgetImg *)pPVar5);
  } while (this + 0x508 != pPVar5);
  std::map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
  ::~map((map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
          *)(this + 0x4d8));
  std::map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
  ::~map((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
          *)(this + 0x4a8));
  MapEditor::~MapEditor((MapEditor *)this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PVPMapUI::~PVPMapUI() */

void __thiscall PVPMapUI::~PVPMapUI(PVPMapUI *this)

{
  ~PVPMapUI(this + -8);
  return;
}


/* PVPMapUI::~PVPMapUI() */

void __thiscall PVPMapUI::~PVPMapUI(PVPMapUI *this)

{
  ~PVPMapUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVPMapUI::~PVPMapUI() */

void __thiscall PVPMapUI::~PVPMapUI(PVPMapUI *this)

{
  ~PVPMapUI(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPMapUI::initData() */

void __thiscall PVPMapUI::initData(PVPMapUI *this)

{
  PVPMapUI *pPVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  LotteryResultProgressBar *pLVar9;
  SalesProgressBar *pSVar10;
  float *pfVar11;
  WorldMapCamera *this_00;
  PVPZoneData *this_01;
  ResourceInfo *pRVar12;
  RtClass *pRVar13;
  undefined8 uVar14;
  PVPHouseData *this_02;
  PopAnimRig *pPVar15;
  PVPMapUI *pPVar16;
  ulong uVar18;
  long lVar19;
  long lVar20;
  PVPMapUI *pPVar21;
  int *piVar22;
  WidgetImg *pWVar23;
  float fVar24;
  float fVar25;
  RtWeakPtr<Sexy::SoundResource> aRStack_d8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_d0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_c8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_c0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_b8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b0 [4];
  int local_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  float local_78 [8];
  undefined8 local_58;
  int local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  SexyTransform2D aSStack_38 [8];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [28];
  long local_8;
  PVPMapUI *pPVar17;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = this + 0x440;
  iVar4 = FUN_04a9a734(0xb2);
  DAT_06b7f518 = (float)iVar4;
  iVar4 = FUN_04a9a734(0x3c);
  *(undefined8 *)(this + 0x470) = 0;
  *(undefined8 *)(this + 0x478) = 0;
  DAT_06b7f6a0 = (float)iVar4;
  iVar4 = 0;
  iVar6 = *(int *)(gLawnApp + 0x724);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fc40);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  iVar7 = *(int *)(gLawnApp + 0x728);
  local_78[0] = (float)iVar6 / (float)(iVar5 * 3);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fc40);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
  local_58 = CONCAT44(local_58._4_4_,(float)iVar7 / (float)(iVar6 * 3));
  pfVar11 = eastl::max_alt<float>(local_78,(float *)&local_58);
  fVar24 = *pfVar11;
  *(undefined4 *)(this + 0x124) = 0x3f800000;
  *(undefined4 *)(this + 0x128) = 0x3f800000;
  *(float *)(this + 0x120) = fVar24;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_58,0.0,0.0);
  *(undefined8 *)(this + 0x110) = local_58;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_58,0.0,0.0);
  *(undefined8 *)(this + 0x118) = local_58;
  this_00 = ::operator_new(0x48);
  WorldMapCamera::WorldMapCamera(this_00,(Graphics *)0x0);
  *(WorldMapCamera **)(this + 0x108) = this_00;
  pPVar17 = pPVar1;
  do {
    iVar4 = iVar4 + 1;
    this_01 = ::operator_new(0x28);
    PVPZoneData::PVPZoneData(this_01);
    *(PVPZoneData **)pPVar17 = this_01;
    *(int *)this_01 = iVar4;
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f8f0);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this_01 + 0x10),(RtWeakPtr *)&local_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    pPVar17 = pPVar17 + 8;
  } while (iVar4 != 6);
  lVar19 = *(long *)(this + 0x440);
  iVar4 = -1;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_58,0.0,0.0);
  *(undefined8 *)(lVar19 + 4) = local_58;
  lVar20 = *(long *)(this + 0x448);
  lVar19 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fc40);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_58,(float)-*(int *)(lVar19 + 0x38),0.0);
  *(undefined8 *)(lVar20 + 4) = local_58;
  pPVar17 = this + 0x450;
  do {
    lVar20 = *(long *)pPVar17;
    lVar19 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fc40);
    iVar6 = iVar4 * *(int *)(lVar19 + 0x38);
    iVar4 = iVar4 + 1;
    lVar19 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fc40);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_58,(float)iVar6,(float)-*(int *)(lVar19 + 0x3c));
    *(undefined8 *)(lVar20 + 4) = local_58;
    pPVar17 = pPVar17 + 8;
  } while (iVar4 != 2);
  lVar20 = *(long *)(this + 0x468);
  lVar19 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fc40);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_58,(float)*(int *)(lVar19 + 0x38),0.0);
  *(undefined8 *)(lVar20 + 4) = local_58;
  pPVar17 = pPVar1;
  do {
    pPVar16 = pPVar17 + 8;
    lVar19 = *(long *)pPVar17;
    fVar25 = *(float *)(lVar19 + 4);
    fVar24 = *(float *)(lVar19 + 8);
    pLVar9 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7f8f0);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
    pSVar10 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7f8f0);
    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
    Sexy::Insets::Insets((Insets *)&local_58,(int)fVar25,(int)fVar24,iVar4,iVar6);
    *(undefined8 *)(lVar19 + 0x18) = local_58;
    *(ulong *)(lVar19 + 0x20) = CONCAT44(uStack_4c,local_50);
    pPVar17 = pPVar16;
  } while (pPVar16 != this + 0x470);
  pPVar17 = this + 0x3a0;
  iVar4 = 1;
  uVar18 = 0;
  pPVar16 = pPVar17;
  do {
    this_02 = ::operator_new(0x60);
    PVPHouseData::PVPHouseData(this_02);
    *(PVPHouseData **)pPVar16 = this_02;
    std::string::string((string *)&local_58,"IMAGE_UI_PVP_MAP_WORLDMAP_HOUSE01");
    pLVar9 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)&local_58,false);
    std::string::~string((string *)&local_58);
    nop();
    if (pLVar9 == (LotteryResultProgressBar *)0x0) {
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(*(long *)pPVar16 + 8));
    }
    else {
      lVar19 = *(long *)pPVar16;
      Sexy::BaseResource::GetRtId();
      Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                ((RtWeakPtr<CthulhuPropertySheet> *)(lVar19 + 8),(RtId *)&local_58);
      Sexy::RtId::~RtId((RtId *)&local_58);
      lVar19 = *(long *)pPVar16;
      iVar6 = FUN_04a9a734(200);
      iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
      iVar5 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar9);
      Sexy::Insets::Insets((Insets *)&local_58,iVar6,iVar6,iVar7,iVar5);
      *(undefined8 *)(lVar19 + 0x20) = local_58;
      *(ulong *)(lVar19 + 0x28) = CONCAT44(uStack_4c,local_50);
    }
    if (uVar18 < 5) {
      piVar22 = *(int **)pPVar16;
      *piVar22 = iVar4;
      piVar22[1] = 1;
LAB_04a9f6a0:
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7fc18);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(piVar22 + 4),(RtWeakPtr *)&local_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
      CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06b7fb20);
      pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_58);
      lVar19 = *(long *)pPVar16;
      pRVar13 = (RtClass *)PopAnimRig::StaticGetClass();
      uVar14 = PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar12,pRVar13);
      *(undefined8 *)(lVar19 + 0x18) = uVar14;
      lVar19 = *(long *)pPVar16;
      *(undefined1 *)(lVar19 + 0x49) = 0;
      *(undefined4 *)(lVar19 + 0x50) = 0;
      *(undefined4 *)(lVar19 + 0x4c) = 100;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
      if (iVar4 == 0x14) {
        iVar4 = 100;
        std::string::string((string *)local_78,"IMAGE_UI_PVP_MAP_WORLDMAP_HOUSE01");
        StringHelper::ToImage((string *)local_78,false);
        Sexy::BaseResource::GetRtId();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_d8,(RtWeakPtrBase *)&local_58);
        Sexy::RtId::~RtId((RtId *)&local_58);
        std::string::~string((string *)local_78);
        nop();
        std::string::string((string *)local_78,"IMAGE_UI_PVP_MAP_WORLDMAP_HOUSE01");
        StringHelper::ToImage((string *)local_78,false);
        Sexy::BaseResource::GetRtId();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_d0,(RtWeakPtrBase *)&local_58);
        Sexy::RtId::~RtId((RtId *)&local_58);
        std::string::~string((string *)local_78);
        nop();
        std::string::string((string *)local_78,"IMAGE_UI_PVP_MAP_WORLDMAP_HOUSE01");
        StringHelper::ToImage((string *)local_78,false);
        Sexy::BaseResource::GetRtId();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_c8,(RtWeakPtrBase *)&local_58);
        Sexy::RtId::~RtId((RtId *)&local_58);
        std::string::~string((string *)local_78);
        nop();
        std::string::string((string *)local_78,"IMAGE_UI_PVP_MAP_WORLDMAP_HOUSE01");
        StringHelper::ToImage((string *)local_78,false);
        Sexy::BaseResource::GetRtId();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_c0,(RtWeakPtrBase *)&local_58);
        Sexy::RtId::~RtId((RtId *)&local_58);
        std::string::~string((string *)local_78);
        nop();
        std::string::string((string *)local_78,"IMAGE_UI_PVP_MAP_WORLDMAP_HOUSE01");
        StringHelper::ToImage((string *)local_78,false);
        Sexy::BaseResource::GetRtId();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_b8,(RtWeakPtrBase *)&local_58);
        Sexy::RtId::~RtId((RtId *)&local_58);
        std::string::~string((string *)local_78);
        nop();
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(*(long *)(this + 0x418) + 8),
                   (RtWeakPtr *)aRStack_c8);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(*(long *)(this + 0x408) + 8),
                   (RtWeakPtr *)aRStack_d0);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(*(long *)(this + 0x3a0) + 8),
                   (RtWeakPtr *)aRStack_c8);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(*(long *)(this + 0x3b0) + 8),
                   (RtWeakPtr *)aRStack_d0);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(*(long *)(this + 0x430) + 8),
                   (RtWeakPtr *)aRStack_c0);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(*(long *)(this + 0x3f8) + 8),
                   (RtWeakPtr *)aRStack_d0);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(*(long *)(this + 0x3b8) + 8),
                   (RtWeakPtr *)aRStack_c0);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(*(long *)(this + 0x3d0) + 8),
                   (RtWeakPtr *)aRStack_d0);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(*(long *)(this + 0x438) + 8),
                   (RtWeakPtr *)aRStack_b8);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(*(long *)(this + 1000) + 8),
                   (RtWeakPtr *)aRStack_d0);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(*(long *)(this + 0x3f0) + 8),
                   (RtWeakPtr *)aRStack_b8);
        lVar20 = *(long *)(this + 0x3a0);
        fVar24 = (float)FUN_04a9a748(0x42d40000);
        fVar25 = (float)FUN_04a9a748(0x43550000);
        lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_58,fVar24,fVar25 - (float)*(int *)(lVar19 + 0x3c));
        *(undefined8 *)(lVar20 + 0x40) = local_58;
        lVar20 = *(long *)(this + 0x3a8);
        fVar24 = (float)FUN_04a9a748(0x439d8000);
        fVar25 = (float)FUN_04a9a748(0x43958000);
        lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_58,fVar24,fVar25 - (float)*(int *)(lVar19 + 0x3c));
        *(undefined8 *)(lVar20 + 0x40) = local_58;
        lVar20 = *(long *)(this + 0x3b0);
        fVar24 = (float)FUN_04a9a748(0x44204000);
        fVar25 = (float)FUN_04a9a748(0x43da8000);
        lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_58,fVar24,fVar25 - (float)*(int *)(lVar19 + 0x3c));
        *(undefined8 *)(lVar20 + 0x40) = local_58;
        lVar20 = *(long *)(this + 0x3b8);
        fVar24 = (float)FUN_04a9a748(0xc2fe0000);
        fVar25 = (float)FUN_04a9a748(0x440b4000);
        lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c0);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_58,fVar24,fVar25 - (float)*(int *)(lVar19 + 0x3c));
        *(undefined8 *)(lVar20 + 0x40) = local_58;
        lVar20 = *(long *)(this + 0x3c0);
        fVar24 = (float)FUN_04a9a748(0x43490000);
        fVar25 = (float)FUN_04a9a748(0x442dc000);
        lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_58,fVar24,fVar25 - (float)*(int *)(lVar19 + 0x3c));
        *(undefined8 *)(lVar20 + 0x40) = local_58;
        lVar20 = *(long *)(this + 0x3c8);
        fVar24 = (float)FUN_04a9a748(0xc1a80000);
        fVar25 = (float)FUN_04a9a748(0x44832000);
        lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_58,fVar24,fVar25 - (float)*(int *)(lVar19 + 0x3c));
        *(undefined8 *)(lVar20 + 0x40) = local_58;
        lVar20 = *(long *)(this + 0x3d0);
        fVar24 = (float)FUN_04a9a748(0x43d38000);
        fVar25 = (float)FUN_04a9a748(0x44458000);
        lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_58,fVar24,fVar25 - (float)*(int *)(lVar19 + 0x3c));
        *(undefined8 *)(lVar20 + 0x40) = local_58;
        lVar20 = *(long *)(this + 0x3d8);
        fVar24 = (float)FUN_04a9a748(0x441f0000);
        fVar25 = (float)FUN_04a9a748(0x445c4000);
        lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_58,fVar24,fVar25 - (float)*(int *)(lVar19 + 0x3c));
        *(undefined8 *)(lVar20 + 0x40) = local_58;
        lVar20 = *(long *)(this + 0x3e0);
        fVar24 = (float)FUN_04a9a748(0xc3ae8000);
        fVar25 = (float)FUN_04a9a748(0x43e88000);
        lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_58,fVar24,fVar25 - (float)*(int *)(lVar19 + 0x3c));
        *(undefined8 *)(lVar20 + 0x40) = local_58;
        lVar20 = *(long *)(this + 1000);
        fVar24 = (float)FUN_04a9a748(0xc40cc000);
        fVar25 = (float)FUN_04a9a748(0x444c8000);
        lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_58,fVar24,fVar25 - (float)*(int *)(lVar19 + 0x3c));
        *(undefined8 *)(lVar20 + 0x40) = local_58;
        lVar20 = *(long *)(this + 0x3f0);
        fVar24 = (float)FUN_04a9a748(0xc36c0000);
        fVar25 = (float)FUN_04a9a748(0x446f0000);
        lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_58,fVar24,fVar25 - (float)*(int *)(lVar19 + 0x3c));
        *(undefined8 *)(lVar20 + 0x40) = local_58;
        lVar20 = *(long *)(this + 0x3f8);
        fVar24 = (float)FUN_04a9a748(0xc40bc000);
        fVar25 = (float)FUN_04a9a748(0x43ba8000);
        lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_58,fVar24,fVar25 - (float)*(int *)(lVar19 + 0x3c));
        *(undefined8 *)(lVar20 + 0x40) = local_58;
        lVar20 = *(long *)(this + 0x400);
        fVar24 = (float)FUN_04a9a748(0xc2ce0000);
        fVar25 = (float)FUN_04a9a748(0x42ea0000);
        lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_58,fVar24,fVar25 - (float)*(int *)(lVar19 + 0x3c));
        *(undefined8 *)(lVar20 + 0x40) = local_58;
        lVar20 = *(long *)(this + 0x408);
        fVar24 = (float)FUN_04a9a748(0xc3e78000);
        fVar25 = (float)FUN_04a9a748(0xc1980000);
        lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_58,fVar24,fVar25 - (float)*(int *)(lVar19 + 0x3c));
        *(undefined8 *)(lVar20 + 0x40) = local_58;
        lVar20 = *(long *)(this + 0x410);
        fVar24 = (float)FUN_04a9a748(0x440dc000);
        fVar25 = (float)FUN_04a9a748(0xc2140000);
        lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_58,fVar24,fVar25 - (float)*(int *)(lVar19 + 0x3c));
        *(undefined8 *)(lVar20 + 0x40) = local_58;
        lVar20 = *(long *)(this + 0x418);
        fVar24 = (float)FUN_04a9a748(0x443b0000);
        fVar25 = (float)FUN_04a9a748(0x42180000);
        lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_58,fVar24,fVar25 - (float)*(int *)(lVar19 + 0x3c));
        *(undefined8 *)(lVar20 + 0x40) = local_58;
        lVar20 = *(long *)(this + 0x420);
        fVar24 = (float)FUN_04a9a748(0x4486c000);
        fVar25 = (float)FUN_04a9a748(0x432f0000);
        lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_58,fVar24,fVar25 - (float)*(int *)(lVar19 + 0x3c));
        *(undefined8 *)(lVar20 + 0x40) = local_58;
        lVar20 = *(long *)(this + 0x428);
        fVar24 = (float)FUN_04a9a748(0x44570000);
        fVar25 = (float)FUN_04a9a748(0x4404c000);
        lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_58,fVar24,fVar25 - (float)*(int *)(lVar19 + 0x3c));
        *(undefined8 *)(lVar20 + 0x40) = local_58;
        lVar20 = *(long *)(this + 0x430);
        fVar24 = (float)FUN_04a9a748(0x44860000);
        fVar25 = (float)FUN_04a9a748(0x441b4000);
        lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c0);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_58,fVar24,fVar25 - (float)*(int *)(lVar19 + 0x3c));
        *(undefined8 *)(lVar20 + 0x40) = local_58;
        lVar20 = *(long *)(this + 0x438);
        fVar24 = (float)FUN_04a9a748(0x44700000);
        fVar25 = (float)FUN_04a9a748(0x447e4000);
        lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_58,fVar24,fVar25 - (float)*(int *)(lVar19 + 0x3c));
        *(undefined8 *)(lVar20 + 0x40) = local_58;
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_90);
        lVar19 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7f438);
        iVar6 = *(int *)(lVar19 + 0x38);
        lVar19 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7f438);
        iVar7 = *(int *)(lVar19 + 0x3c);
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f438);
        iVar5 = FUN_04a9a734(0xffffffc0);
        iVar8 = FUN_04a9a734(0x1f1);
        Sexy::Insets::Insets((Insets *)&local_58,iVar5,iVar8 + iVar7,iVar6,iVar7);
        WidgetImg::WidgetImg
                  ((WidgetImg *)local_78,0,(RtWeakPtr<Sexy::ResourceInfo> *)&local_a0,
                   (FastCurve *)&local_58);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
        std::vector<WidgetImg,std::allocator<WidgetImg>>::push_back
                  ((vector<WidgetImg,std::allocator<WidgetImg>> *)&local_90,(WidgetImg *)local_78);
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f438);
        iVar5 = FUN_04a9a734(0x34a);
        iVar8 = FUN_04a9a734(0xfffffff5);
        Sexy::Insets::Insets((Insets *)&local_a0,iVar5,iVar8 + iVar7,iVar6,iVar7);
        WidgetImg::WidgetImg
                  ((WidgetImg *)&local_58,1,aRStack_b0,(RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
        WidgetImg::operator=((WidgetImg *)local_78,(WidgetImg *)&local_58);
        WidgetImg::~WidgetImg((WidgetImg *)&local_58);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
        std::vector<WidgetImg,std::allocator<WidgetImg>>::push_back
                  ((vector<WidgetImg,std::allocator<WidgetImg>> *)&local_90,(WidgetImg *)local_78);
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f438);
        iVar5 = FUN_04a9a734(0x17e);
        iVar8 = FUN_04a9a734(0xef);
        Sexy::Insets::Insets((Insets *)&local_a0,iVar5,iVar8 + iVar7,iVar6,iVar7);
        WidgetImg::WidgetImg
                  ((WidgetImg *)&local_58,2,aRStack_b0,(RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
        WidgetImg::operator=((WidgetImg *)local_78,(WidgetImg *)&local_58);
        WidgetImg::~WidgetImg((WidgetImg *)&local_58);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
        std::vector<WidgetImg,std::allocator<WidgetImg>>::push_back
                  ((vector<WidgetImg,std::allocator<WidgetImg>> *)&local_90,(WidgetImg *)local_78);
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f438);
        iVar5 = FUN_04a9a734(0xfffffe25);
        iVar8 = FUN_04a9a734(0x302);
        Sexy::Insets::Insets((Insets *)&local_a0,iVar5,iVar8 + iVar7,iVar6,iVar7);
        WidgetImg::WidgetImg
                  ((WidgetImg *)&local_58,3,aRStack_b0,(RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
        WidgetImg::operator=((WidgetImg *)local_78,(WidgetImg *)&local_58);
        WidgetImg::~WidgetImg((WidgetImg *)&local_58);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
        std::vector<WidgetImg,std::allocator<WidgetImg>>::push_back
                  ((vector<WidgetImg,std::allocator<WidgetImg>> *)&local_90,(WidgetImg *)local_78);
        pPVar16 = pPVar17;
        do {
          WidgetImg::WidgetImg((WidgetImg *)&local_58);
          local_58 = CONCAT44(local_58._4_4_,iVar4);
          iVar4 = iVar4 + 1;
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)&local_50,(RtWeakPtr *)(*(long *)pPVar16 + 8))
          ;
          lVar19 = *(long *)pPVar16;
          fVar24 = *(float *)(lVar19 + 0x40);
          fVar25 = *(float *)(lVar19 + 0x44);
          lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar19 + 8));
          iVar6 = *(int *)(lVar19 + 0x3c);
          lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)pPVar16 + 8));
          iVar7 = *(int *)(lVar19 + 0x38);
          lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)pPVar16 + 8));
          Sexy::Insets::Insets
                    ((Insets *)&local_a0,(int)fVar24,(int)((float)iVar6 + fVar25),iVar7,
                     *(int *)(lVar19 + 0x3c));
          local_48 = local_a0;
          uStack_40 = uStack_98;
          std::vector<WidgetImg,std::allocator<WidgetImg>>::push_back
                    ((vector<WidgetImg,std::allocator<WidgetImg>> *)&local_90,(WidgetImg *)&local_58
                    );
          WidgetImg::~WidgetImg((WidgetImg *)&local_58);
          pPVar16 = pPVar16 + 8;
        } while (iVar4 != 0x78);
        iVar4 = 0;
        local_a0 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_90);
        pPVar16 = this + 0x508;
        while( true ) {
          local_58 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_90);
          bVar2 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_58);
          if (bVar2 <= (iVar4 == 1000)) break;
          iVar4 = iVar4 + 1;
          pWVar23 = (WidgetImg *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
          WidgetImg::operator=((WidgetImg *)pPVar16,pWVar23);
          FUN_04a9c354((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
          pPVar16 = (PVPMapUI *)(pPVar16 + 0x20);
        }
        iVar4 = 0;
        iVar6 = FUN_04a9a2a4(local_90,local_88);
        *(int *)(this + 0x8208) = iVar6;
        if (0 < iVar6) {
          do {
            iVar7 = 0;
            pPVar16 = this + 0x508;
            if (1 < iVar6 - iVar4) {
              do {
                while( true ) {
                  iVar7 = iVar7 + 1;
                  Sexy::Insets::Insets((Insets *)aRStack_b0,(Insets *)(pPVar16 + 0x10));
                  Sexy::Insets::Insets((Insets *)&local_a0,(Insets *)(pPVar16 + 0x30));
                  if (9 < *(int *)pPVar16) break;
                  iVar6 = FUN_04a9a734(0x32);
                  local_ac = iVar6 + local_ac;
                  if (*(int *)(pPVar16 + 0x20) < 10) goto LAB_04aa046c;
LAB_04aa03fc:
                  if (local_ac <= local_a0._4_4_) goto LAB_04aa040c;
LAB_04aa048c:
                  pWVar23 = (WidgetImg *)(pPVar16 + 0x20);
                  WidgetImg::WidgetImg((WidgetImg *)&local_58,(WidgetImg *)pPVar16);
                  WidgetImg::operator=((WidgetImg *)pPVar16,pWVar23);
                  WidgetImg::operator=(pWVar23,(WidgetImg *)&local_58);
                  WidgetImg::~WidgetImg((WidgetImg *)&local_58);
                  iVar6 = *(int *)(this + 0x8208);
                  pPVar16 = (PVPMapUI *)pWVar23;
                  if ((iVar6 - iVar4) + -1 <= iVar7) goto LAB_04aa04d0;
                }
                if (9 < *(int *)(pPVar16 + 0x20)) goto LAB_04aa03fc;
LAB_04aa046c:
                iVar5 = local_ac;
                iVar6 = FUN_04a9a734(0x32);
                iVar6 = iVar6 + local_a0._4_4_;
                local_a0 = CONCAT44(iVar6,(undefined4)local_a0);
                if (iVar6 < iVar5) goto LAB_04aa048c;
LAB_04aa040c:
                pPVar16 = pPVar16 + 0x20;
                iVar6 = *(int *)(this + 0x8208);
              } while (iVar7 < (iVar6 - iVar4) + -1);
            }
LAB_04aa04d0:
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar6);
        }
        pPVar16 = pPVar17;
        do {
          lVar20 = *(long *)pPVar16;
          iVar6 = FUN_04a9a734(0x8c);
          fVar24 = *(float *)(lVar20 + 0x40);
          fVar25 = *(float *)(lVar20 + 0x44);
          lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar20 + 8));
          iVar4 = *(int *)(lVar19 + 0x3c);
          iVar7 = FUN_04a9a734(0xb4);
          pLVar9 = (LotteryResultProgressBar *)
                   CachedUIResourcePtr<Sexy::Image>::operator->
                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7faf8);
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
          pSVar10 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7faf8);
          iVar8 = SalesProgressBar::GetCurrentLevel(pSVar10);
          Sexy::Insets::Insets
                    ((Insets *)&local_58,(int)((float)iVar6 + fVar24),
                     (int)(((float)iVar4 + fVar25) - (float)iVar7),iVar5,iVar8);
          lVar19 = *(long *)pPVar16;
          *(undefined8 *)(lVar20 + 0x20) = local_58;
          *(ulong *)(lVar20 + 0x28) = CONCAT44(uStack_4c,local_50);
          iVar4 = FUN_04a9a734(300);
          fVar24 = *(float *)(lVar19 + 0x40);
          iVar6 = FUN_04a9a734(10);
          fVar25 = *(float *)(lVar19 + 0x44);
          pLVar9 = (LotteryResultProgressBar *)
                   CachedUIResourcePtr<Sexy::Image>::operator->
                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fa70);
          iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
          pSVar10 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fa70);
          iVar5 = SalesProgressBar::GetCurrentLevel(pSVar10);
          Sexy::Insets::Insets
                    ((Insets *)&local_58,(int)((float)iVar4 + fVar24),(int)((float)iVar6 + fVar25),
                     iVar7,iVar5);
          *(undefined8 *)(lVar19 + 0x30) = local_58;
          *(ulong *)(lVar19 + 0x38) = CONCAT44(uStack_4c,local_50);
          Sexy::SexyTransform2D::SexyTransform2D(aSStack_38);
          Sexy::Insets::Insets((Insets *)&local_58,(Insets *)(*(long *)pPVar16 + 0x30));
          FUN_04a9a1e8((float)(int)local_58,(float)local_58._4_4_,auStack_30,auStack_24);
          pPVar21 = pPVar16 + 8;
          PopAnimRig::SetRenderTransform(*(PopAnimRig **)(*(long *)pPVar16 + 0x18),aSStack_38);
          pPVar16 = pPVar21;
        } while (pPVar21 != pPVar1);
        do {
          if (**(int **)pPVar17 == 2) {
            iVar4 = (*(int **)pPVar17)[1] + -1;
            cVar3 = IsIndexValid(this,iVar4,6);
            if (cVar3 != '\0') {
              lVar20 = *(long *)(this + (long)iVar4 * 8 + 0x440);
              fVar25 = *(float *)(*(long *)pPVar17 + 0x40);
              lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)pPVar17 + 8));
              iVar4 = *(int *)(lVar19 + 0x38);
              fVar24 = *(float *)(*(long *)pPVar17 + 0x44);
              lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)pPVar17 + 8));
              iVar6 = *(int *)(lVar19 + 0x3c);
              pLVar9 = (LotteryResultProgressBar *)
                       CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7f8f0);
              iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
              pSVar10 = (SalesProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7f8f0);
              iVar5 = SalesProgressBar::GetCurrentLevel(pSVar10);
              Sexy::Insets::Insets
                        ((Insets *)&local_58,(int)(fVar25 + (float)iVar4 * 0.5),
                         (int)(fVar24 + (float)iVar6 * 0.5),iVar7,iVar5);
              *(undefined8 *)(lVar20 + 0x18) = local_58;
              *(ulong *)(lVar20 + 0x20) = CONCAT44(uStack_4c,local_50);
            }
          }
          pPVar17 = pPVar17 + 8;
        } while (pPVar1 != pPVar17);
        DAT_06b7f618 = 0;
        lVar19 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        cVar3 = FUN_04a9a270(*(undefined1 *)(lVar19 + 0x328));
        if (cVar3 != '\0') {
          lVar19 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
          FUN_04a9a570(lVar19 + 0x328);
          CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06b7f6d0);
          pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_a0);
          pRVar13 = (RtClass *)PopAnimRig::StaticGetClass();
          pPVar15 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar12,pRVar13);
          *(PopAnimRig **)(this + 0x8230) = pPVar15;
          std::string::string((string *)&local_58,"idle2");
          Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)aSStack_38);
          PopAnimRig::PlayAndStop(pPVar15,(FastCurve *)&local_58,0,aSStack_38);
          std::string::~string((string *)&local_58);
          nop();
          DAT_06b7f618 = 0x14;
          Sexy::LazySingleton<PVPManager>::GetInstancePtr();
          PVPManager::GetOldNameStatus();
          if (local_58._4_4_ == 1) {
            iVar4 = local_50 + -1;
          }
          else {
            iVar4 = (local_58._4_4_ + -2) * 3 + local_50 + 4;
          }
          cVar3 = IsIndexValid(this,iVar4,0x14);
          if (cVar3 == '\0') {
            NameEffectStruct::~NameEffectStruct((NameEffectStruct *)&local_58);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
          }
          else {
            iVar6 = *(int *)(gLawnApp + 0x724);
            lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)
                                (*(long *)(this + (long)iVar4 * 8 + 0x3a0) + 8));
            iVar7 = *(int *)(lVar19 + 0x38);
            iVar5 = *(int *)(gLawnApp + 0x728);
            lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)
                                (*(long *)(this + (long)iVar4 * 8 + 0x3a0) + 8));
            DAT_06b7f8c0 = (int)(((*(float *)(this + 0x110) -
                                  *(float *)(*(long *)(this + (long)iVar4 * 8 + 0x3a0) + 0x40)) +
                                 (float)(int)((float)(iVar6 - iVar7) * 0.5)) * 0.1);
            DAT_06b7fc68 = (int)(((*(float *)(this + 0x114) -
                                  *(float *)(*(long *)(this + (long)iVar4 * 8 + 0x3a0) + 0x44)) +
                                 (float)(int)((float)(iVar5 - *(int *)(lVar19 + 0x3c)) * 0.5)) * 0.1
                                );
            NameEffectStruct::~NameEffectStruct((NameEffectStruct *)&local_58);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
          }
        }
        WidgetImg::~WidgetImg((WidgetImg *)local_78);
        std::vector<WidgetImg,std::allocator<WidgetImg>>::~vector
                  ((vector<WidgetImg,std::allocator<WidgetImg>> *)&local_90);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c0)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8)
        ;
        if (local_8 == ___stack_chk_guard) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    else {
      piVar22 = *(int **)pPVar16;
      piVar22[1] = (iVar4 + -6) / 3 + 2;
      *piVar22 = (iVar4 + -6) % 3 + 1;
      if ((int)uVar18 != 8) goto LAB_04a9f6a0;
      lVar19 = *(long *)(this + 0x3e0);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f9f0);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(lVar19 + 0x10),(RtWeakPtr *)&local_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
      CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06b7fb20);
      pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_58);
      lVar19 = *(long *)pPVar16;
      pRVar13 = (RtClass *)PopAnimRig::StaticGetClass();
      uVar14 = PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar12,pRVar13);
      *(undefined8 *)(lVar19 + 0x18) = uVar14;
      lVar19 = *(long *)pPVar16;
      *(undefined1 *)(lVar19 + 0x49) = 0;
      *(undefined4 *)(lVar19 + 0x50) = 0;
      *(undefined4 *)(lVar19 + 0x4c) = 100;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    }
    uVar18 = uVar18 + 1;
    pPVar16 = pPVar16 + 8;
    iVar4 = iVar4 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPMapUI::PVPMapUI() */

void __thiscall PVPMapUI::PVPMapUI(PVPMapUI *this)

{
  PVPMapUI *pPVar1;
  undefined *puVar2;
  LawnApp *pLVar3;
  PVPMapUI *this_00;
  float fVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ButtonListener::ButtonListener((ButtonListener *)this);
  MapEditor::MapEditor((MapEditor *)(this + 8));
  *(undefined ***)this = &PTR_ButtonPress_06947020;
  *(undefined **)(this + 8) = &DAT_069470b0;
  Sexy::Point::Point((Point *)(this + 0x480),0,0);
  this[0x488] = (PVPMapUI)0x0;
  this[0x489] = (PVPMapUI)0x0;
  *(undefined4 *)(this + 0x48c) = 0xffffffff;
  *(undefined4 *)(this + 0x490) = 0xffffffff;
  *(undefined8 *)(this + 0x498) = 0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x4a8));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x4d8));
  this_00 = this + 0x508;
  do {
    pPVar1 = this_00 + 0x20;
    WidgetImg::WidgetImg((WidgetImg *)this_00);
    this_00 = pPVar1;
  } while (pPVar1 != this + 0x8208);
  *(undefined4 *)(this + 0x8208) = 0;
  Sexy::Color::Color((Color *)(this + 0x820c));
  *(undefined8 *)(this + 0x8230) = 0;
  *(undefined4 *)(this + 0x823c) = 0xbf800000;
  fVar4 = (float)PVZ_T();
  *(float *)(this + 0x8238) = fVar4 + 1.0;
  pLVar3 = gLawnApp;
  std::string::string((string *)&local_20,"UI_PVP");
  LawnApp::LoadGroup(pLVar3,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar3 = gLawnApp;
  std::string::string((string *)&local_20,"UI_PVP_Training");
  LawnApp::LoadGroup(pLVar3,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar3 = gLawnApp;
  std::string::string((string *)&local_20,"UI_PVP_Map");
  LawnApp::LoadGroup(pLVar3,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar3 = gLawnApp;
  std::string::string((string *)&local_20,"PVP_MpAnimation");
  LawnApp::LoadGroup(pLVar3,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar3 = gLawnApp;
  std::string::string((string *)&local_20,"PVPGlobalAudio");
  LawnApp::LoadGroup(pLVar3,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  initData(this);
  setupScreen(this);
  puVar2 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPVPTrainingZombieChanged);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<PVPMapUI,void(PVPMapUI::*)(bool)>>
            ((MessageRouter *)puVar2,Message::PVPTrainingZombieChanged,&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPMapUI::flushStringComponents() */

void __thiscall PVPMapUI::flushStringComponents(PVPMapUI *this)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  long lVar3;
  ulong uVar4;
  int local_1c;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_1c = 0x2bc0;
  local_8 = ___stack_chk_guard;
  uVar1 = std::
          map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
          ::operator[]((map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
                        *)(this + 0x4d8),&local_1c);
  TodStringTranslate(L"%d");
  pwVar2 = (wchar_t *)FUN_054766ec(auStack_18);
  lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  uVar4 = FUN_04a9a220(*(undefined4 *)(lVar3 + 8));
  Sexy::StrFormat(pwVar2,auStack_10,uVar4 & 0xffffffff);
  FUN_054766c8(uVar1,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(auStack_18);
  local_1c = 0x2c24;
  uVar1 = std::
          map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
          ::operator[]((map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
                        *)(this + 0x4d8),&local_1c);
  TodStringTranslate(L"%d");
  pwVar2 = (wchar_t *)FUN_054766ec(auStack_18);
  lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  uVar4 = FUN_04a9a224(*(undefined4 *)(lVar3 + 0xc));
  Sexy::StrFormat(pwVar2,auStack_10,uVar4 & 0xffffffff);
  FUN_054766c8(uVar1,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(auStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* PVPMapUI::Draw(Sexy::Graphics*) */

void __thiscall PVPMapUI::Draw(PVPMapUI *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  float fVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  Image *pIVar13;
  ulong uVar14;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float *pfVar15;
  ResourceInfo *pRVar16;
  long lVar17;
  PVPManager *this_02;
  S2C_PVP_BigMapInfo *this_03;
  PrimeTypeface *pPVar18;
  GridItemProtectorShieldSegment *this_04;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar19;
  uint *puVar20;
  long lVar21;
  int *piVar22;
  wchar_t *pwVar23;
  PopAnimRig *pPVar24;
  OutlineFont *this_05;
  S2C_PVP_BigMapPVPInfo *pSVar25;
  void *pvVar26;
  CachedUIResourcePtr *pCVar27;
  int iVar28;
  long lVar29;
  uint uVar30;
  undefined8 uVar31;
  int iVar32;
  undefined8 uVar33;
  ulong uVar34;
  WorldMapCamera *pWVar35;
  float fVar36;
  float fVar37;
  long lVar38;
  undefined1 auVar39 [12];
  GraphicsAutoState aGStack_a8 [8];
  undefined8 local_a0;
  float local_98;
  float local_94;
  undefined8 local_90;
  float local_88;
  float local_84;
  undefined8 local_80;
  float local_78;
  float local_74;
  int local_70;
  int local_6c;
  undefined8 local_68;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 local_48;
  int local_40;
  wstring awStack_38 [8];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_a8,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  WorldMapCamera::SetGraphics(*(WorldMapCamera **)(this + 0x108),param_1);
  WorldMapCamera::SetCameraCenter
            (*(WorldMapCamera **)(this + 0x108),*(float *)(this + 0x118),*(float *)(this + 0x11c));
  WorldMapCamera::SetCameraScale
            (*(WorldMapCamera **)(this + 0x108),*(float *)(this + 0x128),*(float *)(this + 0x128));
  Sexy::Graphics::TranslateF(param_1,-*(float *)(this + 0x110),-*(float *)(this + 0x114));
  uVar30 = 0;
  do {
    uVar9 = uVar30 + 1;
    Sexy::StrFormat("IMAGE_UI_PVP_MAP_WORLDMAP_BIG_%02d",(string *)&local_48,(ulong)uVar9);
    pIVar13 = (Image *)StringHelper::ToImage((string *)&local_48,false);
    if (pIVar13 != (Image *)0x0) {
      WorldMapCamera::DrawImage
                (*(WorldMapCamera **)(this + 0x108),pIVar13,
                 (float)(((int)uVar30 % 3 + -1) * *(int *)(pIVar13 + 0x38)) + DAT_06b7f518,
                 (float)(((int)uVar30 / 3 + -1) * *(int *)(pIVar13 + 0x3c)) + DAT_06b7f6a0,false,
                 -1.0,-1.0);
    }
    std::string::~string((string *)&local_48);
    uVar30 = uVar9;
  } while (uVar9 != 9);
  uVar33 = *(undefined8 *)(*(long *)(this + 0xe0) + 0x10);
  iVar6 = 0;
  uVar31 = *(undefined8 *)(*(long *)(this + 0xe0) + 8);
  uVar14 = FUN_04a9a2b0(uVar31,uVar33);
  do {
    for (uVar34 = 0; uVar34 < uVar14; uVar34 = uVar34 + 1) {
      this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)FUN_04a9a2d0(uVar31,uVar34);
      cVar2 = FUN_04a9a210(this_01[0x7c]);
      if ((iVar6 == cVar2) && (iVar5 = FUN_04a9a274(*(undefined4 *)(this + 0x2e0)), iVar6 <= iVar5))
      {
        this_00 = (RtWeakPtr *)(this_01 + 0x98);
        pfVar15 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_end(this_01);
        fVar36 = *pfVar15;
        fVar37 = pfVar15[1];
        bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
        if (bVar3) {
          iVar5 = FUN_04a9a20c(*(undefined4 *)(this_01 + 0x14));
          if (iVar5 - 0x11U < 2) {
            this_04 = (GridItemProtectorShieldSegment *)
                      Sexy::LazySingleton<PVPManager>::GetInstance();
            pvVar19 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)GridItemProtectorShieldSegment::GetGridOffset(this_04);
            local_80 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin(pvVar19);
            while( true ) {
              local_48 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::end(pvVar19);
              bVar3 = __gnu_cxx::operator!=
                                ((__normal_iterator *)&local_80,(__normal_iterator *)&local_48);
              if (!bVar3) break;
              puVar20 = (uint *)std::__exception_ptr::exception_ptr::_M_get
                                          ((exception_ptr *)&local_80);
              uVar30 = *puVar20;
              uVar9 = MapEventItem::GetEventId((MapEventItem *)this_01);
              if ((uVar30 == (uVar9 & 0xffff)) &&
                 (lVar21 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80),
                 *(char *)(lVar21 + 8) != '\0')) {
                iVar5 = FUN_04a9a20c(*(undefined4 *)(this_01 + 0x14));
                if (iVar5 == 0x12) {
                  WorldMapCamera::TransformPointToCamera(fVar36,fVar37);
                  TodStringTranslate(L"%d");
                  pwVar23 = (wchar_t *)FUN_054766ec((string *)&local_48);
                  lVar21 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
                  Sexy::StrFormat(pwVar23,(Insets *)&local_68,(ulong)*(uint *)(lVar21 + 4));
                  FUN_05476c50((string *)&local_48);
                  fVar1 = local_78;
                  iVar5 = FUN_04a9a734(0x32);
                  iVar10 = FUN_04a9a734(0x96);
                  iVar11 = FUN_04a9a734(0x1e);
                  Sexy::Insets::Insets
                            ((Insets *)&local_58,(int)((float)iVar5 + fVar1),(int)local_74,iVar10,
                             iVar11);
                  uVar31 = PrimeText_PotentialTypeface::Typeface
                                     (PrimeText_Game::Typeface_CafeteriaBlack_24_Shaded);
                  Sexy::Color::Color((Color *)&local_48,5);
                  WriteWordInRect(param_1,(Insets *)&local_68,
                                  (RtWeakPtr<Sexy::ResourceInfo> *)&local_58,uVar31,
                                  (string *)&local_48,3,1);
                  pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
                  Sexy::Graphics::DrawImage(param_1,(Image *)pRVar16,(int)local_78,(int)local_74);
                  FUN_05476c50((Insets *)&local_68);
                }
                else {
                  Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)&local_48,param_1)
                  ;
                  piVar22 = (int *)std::__exception_ptr::exception_ptr::_M_get
                                             ((exception_ptr *)&local_80);
                  if (*(int *)(this + 0x490) == *piVar22) {
                    Sexy::Graphics::SetColorizeImages(param_1,true);
                    Sexy::Graphics::SetColor(param_1,(Color *)(this + 0x820c));
                  }
                  pWVar35 = *(WorldMapCamera **)(this + 0x108);
                  pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
                  WorldMapCamera::DrawImage(pWVar35,(Image *)pRVar16,fVar36,fVar37,false,-1.0,-1.0);
                  Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)&local_48);
                }
              }
              FUN_04a9c400((__normal_iterator *)&local_80);
            }
          }
          else {
            pWVar35 = *(WorldMapCamera **)(this + 0x108);
            pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
            WorldMapCamera::DrawImage(pWVar35,(Image *)pRVar16,fVar36,fVar37,false,-1.0,-1.0);
          }
        }
        else {
          lVar38 = *(long *)(this + 0xe0);
          uVar4 = FUN_04a9a208(*(undefined2 *)(this_01 + 0x10));
          lVar21 = FUN_04a9a2f0(*(undefined8 *)(lVar38 + 0x60),uVar4);
          if (*(long *)(lVar21 + 8) == 0) {
LAB_04aa2084:
            uVar31 = *(undefined8 *)(lVar38 + 8);
            uVar33 = *(undefined8 *)(lVar38 + 0x10);
            goto LAB_04aa1f5c;
          }
          uVar31 = *(undefined8 *)(this + 0xe8);
          lVar17 = FUN_04a9a2fc(uVar31,*(undefined8 *)(this + 0xf0));
          lVar21 = 0;
          do {
            lVar29 = lVar21;
            if (lVar29 == lVar17) goto LAB_04aa2084;
            piVar22 = (int *)FUN_04a9a308(uVar31,lVar29);
            lVar21 = lVar29 + 1;
          } while (uVar34 != (long)*piVar22);
          MapPiecesAnimRig::GetAnimRect();
          if ((0 < local_70) && (0 < local_6c)) {
            lVar21 = FUN_04a9a308(*(undefined8 *)(this + 0xe8),lVar29);
            Sexy::Insets::Insets((Insets *)&local_68,(Insets *)(lVar21 + 0x10));
            WorldMapCamera::TransformPointToCamera
                      (fVar36 + (float)local_60 * 0.5,fVar37 - (float)local_5c * 0.5);
            ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                      ((ResistenceValueInfo *)&local_80);
            local_80 = CONCAT44(local_84,local_88);
            lVar21 = FUN_04a9a308(*(undefined8 *)(this + 0xe8),lVar29);
            if (*(int *)(this + 0x48c) + 1 == *(int *)(lVar21 + 4)) {
              pPVar24 = (PopAnimRig *)UIWidget::GetAtlasImage(*(UIWidget **)(lVar21 + 8));
              Sexy::Insets::Insets((Insets *)&local_58,600,600,600,0xff);
              Sexy::Color::operator*((Color *)(this + 0x820c),(Color *)&local_58);
              PopAnimRig::SetMultiplicativeOverlayColor(pPVar24,(Color *)&local_48);
            }
            else {
              pPVar24 = (PopAnimRig *)UIWidget::GetAtlasImage(*(UIWidget **)(lVar21 + 8));
              PopAnimRig::ClearMultiplicativeOverlayColor(pPVar24);
            }
            lVar21 = FUN_04a9a308(*(undefined8 *)(this + 0xe8),lVar29);
            (**(code **)(**(long **)(lVar21 + 8) + 0x80))
                      (*(undefined4 *)(this + 0x128),*(long **)(lVar21 + 8));
            lVar21 = FUN_04a9a308(*(undefined8 *)(this + 0xe8),lVar29);
            StandaloneEffect::SetScreenSpaceOrigin
                      (*(StandaloneEffect **)(lVar21 + 8),(SexyVector2 *)&local_80,700000);
            lVar21 = FUN_04a9a308(*(undefined8 *)(this + 0xe8),lVar29);
            StandaloneEffect::Draw(*(StandaloneEffect **)(lVar21 + 8),param_1);
          }
        }
        uVar31 = *(undefined8 *)(*(long *)(this + 0xe0) + 8);
        uVar33 = *(undefined8 *)(*(long *)(this + 0xe0) + 0x10);
      }
LAB_04aa1f5c:
      uVar14 = FUN_04a9a2b0(uVar31,uVar33);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 10);
  this_02 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstance();
  pvVar19 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)PVPManager::GetPVPMapDataList(this_02);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(pvVar19);
  while( true ) {
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(pvVar19);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_a0,(__normal_iterator *)&local_48);
    if (!bVar3) break;
    this_03 = (S2C_PVP_BigMapInfo *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    iVar6 = S2C_PVP_BigMapInfo::GetHouseID(this_03);
    lVar21 = (long)iVar6;
    cVar2 = IsIndexValid(this,iVar6,0x14);
    if (cVar2 != '\0') {
      lVar38 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
      lVar38 = *(long *)(lVar38 + 8);
      Sexy::LazySingleton<PVPManager>::GetInstance();
      iVar6 = PVPManager::GetPVPProfileId();
      if ((lVar38 == iVar6) &&
         (lVar38 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0),
         *(int *)(lVar38 + 0x28) <= *(int *)(lVar38 + 0x24) * 5)) {
        pWVar35 = *(WorldMapCamera **)(this + 0x108);
        pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fa70);
        WorldMapCamera::DrawImage
                  (pWVar35,pIVar13,(float)*(int *)(*(long *)(this + (lVar21 + 0x74) * 8) + 0x30),
                   (float)*(int *)(*(long *)(this + (lVar21 + 0x74) * 8) + 0x34),false,-1.0,-1.0);
      }
      cVar2 = PopAnimRig::IsPlayingAnything
                        (*(PopAnimRig **)(*(long *)(this + lVar21 * 8 + 0x3a0) + 0x18));
      if (cVar2 == '\0') {
LAB_04aa2170:
        lVar38 = *(long *)(this + lVar21 * 8 + 0x3a0);
      }
      else {
        WorldMapCamera::TransformPointToCamera
                  ((float)*(int *)(*(long *)(this + lVar21 * 8 + 0x3a0) + 0x30),
                   (float)*(int *)(*(long *)(this + lVar21 * 8 + 0x3a0) + 0x34));
        Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
        fVar36 = (float)local_80;
        iVar6 = FUN_04a9a734(0x3c);
        fVar37 = local_80._4_4_;
        iVar5 = FUN_04a9a734(0x46);
        FUN_04a9a1e8(fVar36 - (float)iVar6,fVar37 - (float)iVar5,auStack_28,auStack_1c);
        PopAnimRig::SetRenderTransform
                  (*(PopAnimRig **)(*(long *)(this + lVar21 * 8 + 0x3a0) + 0x18),aSStack_30);
        PopAnimRig::Draw(*(PopAnimRig **)(*(long *)(this + lVar21 * 8 + 0x3a0) + 0x18),param_1);
        lVar38 = *(long *)(this + lVar21 * 8 + 0x3a0);
        if (*(char *)(lVar38 + 0x49) != '\0') {
          Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)&local_78,param_1);
          Sexy::Graphics::SetColorizeImages(param_1,true);
          Sexy::Insets::Insets
                    ((Insets *)&local_48,0xff,0xff,0xff,
                     *(int *)(*(long *)(this + lVar21 * 8 + 0x3a0) + 0x4c));
          Sexy::Graphics::SetColor(param_1,(Color *)&local_48);
          fVar36 = local_80._4_4_;
          iVar28 = (int)(float)local_80;
          iVar6 = FUN_04a9a734(*(undefined4 *)(*(long *)(this + lVar21 * 8 + 0x3a0) + 0x50));
          iVar32 = (int)(fVar36 - (float)iVar6);
          pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7f8f0);
          Sexy::Graphics::DrawImage(param_1,pIVar13,iVar28,iVar32);
          pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fbc8);
          iVar6 = FUN_04a9a734(0x32);
          Sexy::Graphics::DrawImage(param_1,pIVar13,iVar28,iVar6 + iVar32);
          TodStringTranslate(L"%d");
          pwVar23 = (wchar_t *)FUN_054766ec((string *)&local_48);
          Sexy::StrFormat(pwVar23,(Insets *)&local_68,
                          (ulong)*(uint *)(*(long *)(this + lVar21 * 8 + 0x3a0) + 0x54));
          FUN_05476c50((string *)&local_48);
          pPVar18 = (PrimeTypeface *)
                    PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
          FUN_05477b24((string *)&local_48,(Insets *)&local_68);
          iVar6 = Sexy::PrimeTypeface::SizeString_Line(pPVar18,(string *)&local_48);
          iVar5 = FUN_04a9a734(0x12);
          FUN_05476c50((string *)&local_48);
          iVar10 = FUN_04a9a734(0x28);
          iVar11 = FUN_04a9a734(3);
          iVar7 = FUN_04a9a734(0x1e);
          Sexy::Insets::Insets
                    ((Insets *)&local_58,iVar10 + iVar28,iVar11 + iVar32,iVar6 + iVar5,iVar7);
          uVar31 = PrimeText_PotentialTypeface::Typeface
                             (PrimeText_Game::Typeface_CafeteriaBlack_24_Shaded);
          Sexy::Insets::Insets
                    ((Insets *)&local_48,0xff,0xff,0,
                     *(int *)(*(long *)(this + lVar21 * 8 + 0x3a0) + 0x4c));
          WriteWordInRect(param_1,(Insets *)&local_68,(RtWeakPtr<Sexy::ResourceInfo> *)&local_58,
                          uVar31,(string *)&local_48,3,1);
          TodStringTranslate(L"%d");
          pwVar23 = (wchar_t *)FUN_054766ec((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
          Sexy::StrFormat(pwVar23,(string *)&local_48,
                          (ulong)*(uint *)(*(long *)(this + lVar21 * 8 + 0x3a0) + 0x58));
          FUN_054766c8((Insets *)&local_68,(string *)&local_48);
          FUN_05476c50((string *)&local_48);
          FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
          iVar10 = FUN_04a9a734(0x28);
          iVar11 = FUN_04a9a734(0x32);
          iVar7 = FUN_04a9a734(3);
          iVar8 = FUN_04a9a734(0x1e);
          Sexy::Insets::Insets
                    ((Insets *)&local_58,iVar10 + iVar28,iVar11 + iVar32 + iVar7,iVar6 + iVar5,iVar8
                    );
          uVar31 = PrimeText_PotentialTypeface::Typeface
                             (PrimeText_Game::Typeface_CafeteriaBlack_24_Shaded);
          Sexy::Insets::Insets
                    ((Insets *)&local_48,0xff,0xff,0,
                     *(int *)(*(long *)(this + lVar21 * 8 + 0x3a0) + 0x4c));
          WriteWordInRect(param_1,(Insets *)&local_68,(RtWeakPtr<Sexy::ResourceInfo> *)&local_58,
                          uVar31,(string *)&local_48,3,1);
          FUN_05476c50((Insets *)&local_68);
          Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)&local_78);
          goto LAB_04aa2170;
        }
      }
      WorldMapCamera::TransformPointToCamera
                ((float)*(int *)(lVar38 + 0x20),(float)*(int *)(lVar38 + 0x24));
      Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      PVPManager::GetOldNameStatus();
      if ((*(PopAnimRig **)(this + 0x8230) == (PopAnimRig *)0x0) ||
         (cVar2 = PopAnimRig::IsPlayingAnything(*(PopAnimRig **)(this + 0x8230)), cVar2 == '\0')) {
LAB_04aa21d0:
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f870);
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f728);
        lVar21 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
        lVar21 = *(long *)(lVar21 + 8);
        if (lVar21 == 0) {
          CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7faf8);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)&local_90,(RtWeakPtr *)&local_58);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
          pCVar27 = (CachedUIResourcePtr *)&DAT_06b7f9c8;
LAB_04aa2230:
          CachedUIResourcePtr::operator_cast_to_RtWeakPtr(pCVar27);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)&local_88,(RtWeakPtr *)&local_58);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        }
        else {
          Sexy::LazySingleton<PVPManager>::GetInstance();
          iVar6 = PVPManager::GetPVPProfileId();
          if (lVar21 == iVar6) {
            CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f620);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)&local_90,(RtWeakPtr *)&local_58);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
            pCVar27 = (CachedUIResourcePtr *)&DAT_06b7f7f8;
            goto LAB_04aa2230;
          }
        }
        lVar21 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
        TodStringTranslate((wstring *)(lVar21 + 0x10));
        uVar31 = FUN_054766ec((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        FUN_05478178((__normal_iterator *)&local_80,uVar31,(Insets *)&local_68);
        nop();
        FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        lVar21 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
        lVar21 = *(long *)(lVar21 + 8);
        Sexy::LazySingleton<PVPManager>::GetInstance();
        iVar6 = PVPManager::GetPVPProfileId();
        if (lVar21 == iVar6) {
          TodStringTranslate(L"[PVP_MAP_RESOURCE_NAME]");
          FUN_054766c8((__normal_iterator *)&local_80,(RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
          FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        }
        pPVar18 = (PrimeTypeface *)
                  PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
        FUN_05477b24((RtWeakPtr<Sexy::ResourceInfo> *)&local_58,(__normal_iterator *)&local_80);
        iVar6 = Sexy::PrimeTypeface::SizeString_Line
                          (pPVar18,(RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        iVar5 = FUN_04a9a734(0x12);
        FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_90);
        iVar10 = (int)local_98;
        iVar11 = (int)local_94;
        lVar21 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pRVar16,iVar10,iVar11,iVar6 + iVar5,*(int *)(lVar21 + 0x3c));
        pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_88);
        fVar36 = local_98;
        iVar10 = FUN_04a9a734(0x14);
        fVar37 = local_94;
        iVar11 = FUN_04a9a734(2);
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pRVar16,(int)(fVar36 - (float)iVar10),
                   (int)(fVar37 - (float)iVar11));
        TodStringTranslate(L"%d");
        pwVar23 = (wchar_t *)FUN_054766ec((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        lVar21 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
        Sexy::StrFormat(pwVar23,(GraphicsAutoState *)&local_78,(ulong)*(uint *)(lVar21 + 0x18));
        FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        fVar36 = local_98;
        iVar10 = FUN_04a9a734(0x23);
        fVar37 = local_94;
        iVar11 = FUN_04a9a734(5);
        iVar7 = FUN_04a9a734(0x3c);
        iVar8 = FUN_04a9a734(0x1e);
        Sexy::Insets::Insets
                  ((Insets *)&local_68,(int)(fVar36 - (float)iVar10),(int)(fVar37 - (float)iVar11),
                   iVar7,iVar8);
        uVar31 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
        Sexy::Color::Color((Color *)&local_58,1);
        WriteWordInRect(param_1,(GraphicsAutoState *)&local_78,(Insets *)&local_68,uVar31,
                        (RtWeakPtr<Sexy::ResourceInfo> *)&local_58,5,1);
        fVar36 = local_98;
        iVar10 = FUN_04a9a734(10);
        fVar37 = local_94;
        iVar11 = FUN_04a9a734(3);
        iVar7 = FUN_04a9a734(0x1e);
        Sexy::Insets::Insets
                  ((Insets *)&local_68,(int)((float)iVar10 + fVar36),(int)(fVar37 - (float)iVar11),
                   iVar6 + iVar5,iVar7);
        uVar31 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
        Sexy::Color::Color((Color *)&local_58,1);
        WriteWordInRect(param_1,(__normal_iterator *)&local_80,(Insets *)&local_68,uVar31,
                        (RtWeakPtr<Sexy::ResourceInfo> *)&local_58,3,1);
      }
      else {
        iVar6 = local_48._4_4_;
        lVar21 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
        if ((iVar6 != *(int *)(lVar21 + 0x34)) || (local_40 != *(int *)(lVar21 + 0x38)))
        goto LAB_04aa21d0;
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f870);
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f728);
        iVar6 = (int)local_48;
        if ((int)local_48 == 0) {
          CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7faf8);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)&local_90,(RtWeakPtr *)&local_58);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
          pCVar27 = (CachedUIResourcePtr *)&DAT_06b7f9c8;
LAB_04aa3710:
          CachedUIResourcePtr::operator_cast_to_RtWeakPtr(pCVar27);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)&local_88,(RtWeakPtr *)&local_58);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        }
        else {
          Sexy::LazySingleton<PVPManager>::GetInstance();
          iVar5 = PVPManager::GetPVPProfileId();
          if (iVar6 == iVar5) {
            CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f620);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)&local_90,(RtWeakPtr *)&local_58);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
            pCVar27 = (CachedUIResourcePtr *)&DAT_06b7f7f8;
            goto LAB_04aa3710;
          }
        }
        TodStringTranslate(awStack_38);
        uVar31 = FUN_054766ec((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        FUN_05478178((__normal_iterator *)&local_80,uVar31,(Insets *)&local_68);
        nop();
        FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        pPVar18 = (PrimeTypeface *)
                  PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
        FUN_05477b24((RtWeakPtr<Sexy::ResourceInfo> *)&local_58,(__normal_iterator *)&local_80);
        iVar6 = Sexy::PrimeTypeface::SizeString_Line
                          (pPVar18,(RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        iVar5 = FUN_04a9a734(0x12);
        FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_90);
        iVar10 = (int)local_98;
        iVar11 = (int)local_94;
        lVar21 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pRVar16,iVar10,iVar11,iVar6 + iVar5,*(int *)(lVar21 + 0x3c));
        pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_88);
        fVar36 = local_98;
        iVar10 = FUN_04a9a734(0x14);
        fVar37 = local_94;
        iVar11 = FUN_04a9a734(2);
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pRVar16,(int)(fVar36 - (float)iVar10),
                   (int)(fVar37 - (float)iVar11));
        TodStringTranslate(L"%d");
        pwVar23 = (wchar_t *)FUN_054766ec((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        lVar21 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
        Sexy::StrFormat(pwVar23,(GraphicsAutoState *)&local_78,(ulong)*(uint *)(lVar21 + 0x18));
        FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        fVar36 = local_98;
        iVar10 = FUN_04a9a734(0x23);
        fVar37 = local_94;
        iVar11 = FUN_04a9a734(5);
        iVar7 = FUN_04a9a734(0x3c);
        iVar8 = FUN_04a9a734(0x1e);
        Sexy::Insets::Insets
                  ((Insets *)&local_68,(int)(fVar36 - (float)iVar10),(int)(fVar37 - (float)iVar11),
                   iVar7,iVar8);
        uVar31 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
        Sexy::Color::Color((Color *)&local_58,1);
        WriteWordInRect(param_1,(GraphicsAutoState *)&local_78,(Insets *)&local_68,uVar31,
                        (RtWeakPtr<Sexy::ResourceInfo> *)&local_58,5,1);
        fVar36 = local_98;
        iVar10 = FUN_04a9a734(10);
        fVar37 = local_94;
        iVar11 = FUN_04a9a734(3);
        iVar7 = FUN_04a9a734(0x1e);
        Sexy::Insets::Insets
                  ((Insets *)&local_68,(int)((float)iVar10 + fVar36),(int)(fVar37 - (float)iVar11),
                   iVar6 + iVar5,iVar7);
        uVar31 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
        Sexy::Color::Color((Color *)&local_58,1);
        WriteWordInRect(param_1,(__normal_iterator *)&local_80,(Insets *)&local_68,uVar31,
                        (RtWeakPtr<Sexy::ResourceInfo> *)&local_58,3,1);
        Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
        fVar36 = local_98;
        iVar6 = FUN_04a9a734(0x1e);
        fVar37 = local_94;
        iVar5 = FUN_04a9a734(0x53);
        FUN_04a9a1e8(fVar36 - (float)iVar6,fVar37 - (float)iVar5,auStack_28,auStack_1c);
        PopAnimRig::SetRenderTransform(*(PopAnimRig **)(this + 0x8230),aSStack_30);
        PopAnimRig::Draw(*(PopAnimRig **)(this + 0x8230),param_1);
      }
      FUN_05476c50((GraphicsAutoState *)&local_78);
      FUN_05476c50((__normal_iterator *)&local_80);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
      NameEffectStruct::~NameEffectStruct((NameEffectStruct *)&local_48);
    }
    FUN_04a9c460((__normal_iterator *)&local_a0);
  }
  this_05 = (OutlineFont *)Sexy::LazySingleton<PVPManager>::GetInstance();
  pvVar19 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)EA::Text::OutlineFont::GetOTF(this_05);
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(pvVar19);
  do {
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(pvVar19);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_90,(__normal_iterator *)&local_48);
    if (!bVar3) {
      Sexy::LazySingleton<PVPManager>::GetInstance();
      lVar21 = *(long *)(this + 0x3a8);
      iVar6 = FUN_04a9a734(0x50);
      WorldMapCamera::TransformPointToCamera
                ((float)*(int *)(lVar21 + 0x20),(float)(iVar6 + *(int *)(lVar21 + 0x24)));
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f870);
      pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_78);
      fVar36 = local_80._4_4_;
      iVar11 = (int)(float)local_80;
      iVar6 = FUN_04a9a734(0x32);
      iVar5 = FUN_04a9a734(0x70);
      lVar21 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
      iVar10 = FUN_04a9a734(0x32);
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar16,iVar11,(int)(fVar36 - (float)iVar6),iVar5,
                 iVar10 + *(int *)(lVar21 + 0x3c));
      pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7f820);
      fVar36 = (float)local_80;
      iVar6 = FUN_04a9a734(10);
      fVar37 = local_80._4_4_;
      iVar5 = FUN_04a9a734(0x28);
      Sexy::Graphics::DrawImage
                (param_1,pIVar13,(int)((float)iVar6 + fVar36),(int)(fVar37 - (float)iVar5));
      TodStringTranslate(L"%d");
      pwVar23 = (wchar_t *)FUN_054766ec((string *)&local_48);
      lVar21 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      uVar14 = FUN_04a9a228(*(undefined4 *)(lVar21 + 0x10));
      Sexy::StrFormat(pwVar23,(Insets *)&local_68,uVar14 & 0xffffffff);
      FUN_05476c50((string *)&local_48);
      fVar36 = (float)local_80;
      iVar6 = FUN_04a9a734(0x32);
      fVar37 = local_80._4_4_;
      iVar5 = FUN_04a9a734(0x28);
      iVar10 = FUN_04a9a734(0x70);
      iVar11 = FUN_04a9a734(0x1e);
      Sexy::Insets::Insets
                ((Insets *)&local_58,(int)((float)iVar6 + fVar36),(int)(fVar37 - (float)iVar5),
                 iVar10,iVar11);
      uVar31 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_CafeteriaBlack_24_Shaded);
      Sexy::Color::Color((Color *)&local_48,1);
      WriteWordInRect(param_1,(Insets *)&local_68,(RtWeakPtr<Sexy::ResourceInfo> *)&local_58,uVar31,
                      (string *)&local_48,3,1);
      TodStringTranslate(L"[PVP_MAP_MAIN_NAME]");
      FUN_054766c8((Insets *)&local_68,(string *)&local_48);
      FUN_05476c50((string *)&local_48);
      fVar36 = (float)local_80;
      iVar6 = FUN_04a9a734(10);
      fVar37 = local_80._4_4_;
      iVar5 = FUN_04a9a734(3);
      iVar10 = FUN_04a9a734(0x70);
      iVar11 = FUN_04a9a734(0x1e);
      Sexy::Insets::Insets
                ((Insets *)&local_58,(int)((float)iVar6 + fVar36),(int)(fVar37 - (float)iVar5),
                 iVar10,iVar11);
      uVar31 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
      Sexy::Color::Color((Color *)&local_48,1);
      WriteWordInRect(param_1,(Insets *)&local_68,(RtWeakPtr<Sexy::ResourceInfo> *)&local_58,uVar31,
                      (string *)&local_48,3,1);
      FUN_05476c50((Insets *)&local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
      local_58 = std::
                 map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                 ::begin((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                          *)(this + 0x4a8));
      while( true ) {
        local_48 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)(this + 0x4a8));
        bVar3 = eastl::operator!=((rbtree_iterator *)&local_58,(rbtree_iterator *)&local_48);
        if (!bVar3) break;
        lVar21 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                           ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_58);
        pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar21 + 8));
        lVar21 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                           ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_58);
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pRVar16,
                   (int)((float)*(int *)(lVar21 + 0x10) + *(float *)(this + 0x110)),
                   (int)((float)*(int *)(lVar21 + 0x14) + *(float *)(this + 0x114)));
        FUN_04a9a310((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
      }
      local_68 = std::
                 map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
                 ::begin((map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
                          *)(this + 0x4d8));
      while( true ) {
        local_48 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)(this + 0x4d8));
        bVar3 = eastl::operator!=((rbtree_iterator *)&local_68,(rbtree_iterator *)&local_48);
        if (!bVar3) break;
        flushStringComponents(this);
        lVar21 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                           ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_68);
        Sexy::Insets::Insets((Insets *)&local_58,(Insets *)(lVar21 + 0x28));
        local_58 = CONCAT44((int)((float)local_58._4_4_ + *(float *)(this + 0x114)),
                            (int)((float)(int)local_58 + *(float *)(this + 0x110)));
        lVar21 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                           ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_68);
        uVar31 = *(undefined8 *)(lVar21 + 0x10);
        Sexy::Insets::Insets((Insets *)&local_48,(Insets *)(lVar21 + 0x18));
        lVar38 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                           ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_68);
        WriteWordInRect(param_1,lVar21 + 8,(RtWeakPtr<Sexy::ResourceInfo> *)&local_58,uVar31,
                        (string *)&local_48,*(undefined4 *)(lVar38 + 0x38),1);
        FUN_04a9a340((Insets *)&local_68);
      }
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_a8);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pSVar25 = (S2C_PVP_BigMapPVPInfo *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    iVar6 = S2C_PVP_BigMapPVPInfo::GetHouseID(pSVar25);
    cVar2 = IsIndexValid(this,iVar6,0x14);
    if (cVar2 != '\0') {
      lVar21 = *(long *)(this + (long)iVar6 * 8 + 0x3a0);
      iVar6 = FUN_04a9a734(0x50);
      WorldMapCamera::TransformPointToCamera
                ((float)*(int *)(lVar21 + 0x20),(float)(iVar6 + *(int *)(lVar21 + 0x24)));
      pSVar25 = (S2C_PVP_BigMapPVPInfo *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
      cVar2 = S2C_PVP_BigMapPVPInfo::IsEvilDavid(pSVar25);
      if (cVar2 == '\0') {
        lVar21 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
        if (*(int *)(lVar21 + 0x28) == 2) {
          lVar21 = LawnApp::GetRealServerTime(gLawnApp);
          if (lVar21 < 1) {
LAB_04aa3abc:
            FUN_05478178((GraphicsAutoState *)&local_78,&DAT_056f11a8,(string *)&local_48);
            nop();
          }
          else {
            auVar39 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
            lVar21 = *(int *)(auVar39._0_8_ + 0x2c) - lVar21;
            if (lVar21 < 0) goto LAB_04aa3abc;
            StringHelper::ToTimeString((StringHelper *)0x0,(float)lVar21,auVar39._8_4_);
          }
          std::string::string((string *)&local_48,"[PVP_MAP_PVP_STATE]");
          StringHelper::ToStringValue((string *)&local_48);
          std::string::~string((string *)&local_48);
          nop();
          pPVar18 = (PrimeTypeface *)
                    PrimeText_PotentialTypeface::Typeface
                              (PrimeText_Game::Typeface_CafeteriaBlack_24_Shaded);
          FUN_05477b24((RtWeakPtr<Sexy::ResourceInfo> *)&local_58,(GraphicsAutoState *)&local_78);
          local_98 = (float)Sexy::PrimeTypeface::SizeString_Line
                                      (pPVar18,(RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
          pPVar18 = (PrimeTypeface *)
                    PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
          FUN_05477b24((string *)&local_48,(Insets *)&local_68);
          uVar12 = Sexy::PrimeTypeface::SizeString_Line(pPVar18,(string *)&local_48);
          local_80 = CONCAT44(local_80._4_4_,uVar12);
          piVar22 = eastl::max_alt<int>((int *)&local_98,(int *)&local_80);
          iVar6 = FUN_04a9a734(0x12);
          iVar6 = iVar6 + *piVar22;
          FUN_05476c50((string *)&local_48);
          FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
          pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7f870);
          fVar36 = local_84;
          iVar11 = (int)local_88;
          iVar5 = FUN_04a9a734(0x32);
          lVar21 = CachedUIResourcePtr<Sexy::Image>::operator->
                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7f870);
          iVar10 = FUN_04a9a734(0x32);
          Sexy::Graphics::DrawImage
                    (param_1,pIVar13,iVar11,(int)(fVar36 - (float)iVar5),iVar6,
                     iVar10 + *(int *)(lVar21 + 0x3c));
          cVar2 = FUN_054765e8((GraphicsAutoState *)&local_78);
          fVar36 = local_88;
          if (cVar2 == '\0') {
            iVar5 = FUN_04a9a734(10);
            fVar37 = local_84;
            iVar10 = FUN_04a9a734(0x28);
            iVar11 = FUN_04a9a734(0x1e);
            Sexy::Insets::Insets
                      ((Insets *)&local_58,(int)((float)iVar5 + fVar36),
                       (int)(fVar37 - (float)iVar10),iVar6,iVar11);
            uVar31 = PrimeText_PotentialTypeface::Typeface
                               (PrimeText_Game::Typeface_CafeteriaBlack_24_Shaded);
            Sexy::Color::Color((Color *)&local_48,1);
            WriteWordInRect(param_1,(GraphicsAutoState *)&local_78,
                            (RtWeakPtr<Sexy::ResourceInfo> *)&local_58,uVar31,(string *)&local_48,3,
                            1);
          }
          cVar2 = FUN_054765e8((Insets *)&local_68);
          fVar36 = local_88;
          if (cVar2 == '\0') {
            iVar5 = FUN_04a9a734(10);
            fVar37 = local_84;
            iVar10 = FUN_04a9a734(3);
            iVar11 = FUN_04a9a734(0x1e);
            Sexy::Insets::Insets
                      ((Insets *)&local_58,(int)((float)iVar5 + fVar36),
                       (int)(fVar37 - (float)iVar10),iVar6,iVar11);
            uVar31 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
            Sexy::Color::Color((Color *)&local_48,1);
            WriteWordInRect(param_1,(Insets *)&local_68,(RtWeakPtr<Sexy::ResourceInfo> *)&local_58,
                            uVar31,(string *)&local_48,3,1);
          }
          FUN_05476c50((Insets *)&local_68);
          FUN_05476c50((GraphicsAutoState *)&local_78);
        }
        else {
          CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f870);
          lVar21 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
          TodStringTranslate((wstring *)(lVar21 + 8));
          pPVar18 = (PrimeTypeface *)
                    PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
          FUN_05477b24((string *)&local_48,(GraphicsAutoState *)&local_78);
          iVar6 = Sexy::PrimeTypeface::SizeString_Line(pPVar18,(string *)&local_48);
          iVar5 = FUN_04a9a734(0x12);
          FUN_05476c50((string *)&local_48);
          pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_80);
          fVar36 = local_84;
          iVar7 = (int)local_88;
          iVar10 = FUN_04a9a734(0x32);
          lVar21 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
          iVar11 = FUN_04a9a734(0x32);
          Sexy::Graphics::DrawImage
                    (param_1,(Image *)pRVar16,iVar7,(int)(fVar36 - (float)iVar10),iVar6 + iVar5,
                     iVar11 + *(int *)(lVar21 + 0x3c));
          pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7f820);
          fVar36 = local_88;
          iVar10 = FUN_04a9a734(10);
          fVar37 = local_84;
          iVar11 = FUN_04a9a734(0x28);
          Sexy::Graphics::DrawImage
                    (param_1,pIVar13,(int)((float)iVar10 + fVar36),(int)(fVar37 - (float)iVar11));
          TodStringTranslate(L"%d");
          pwVar23 = (wchar_t *)FUN_054766ec((string *)&local_48);
          lVar21 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
          Sexy::StrFormat(pwVar23,(Insets *)&local_68,(ulong)*(uint *)(lVar21 + 0x14));
          FUN_05476c50((string *)&local_48);
          fVar36 = local_88;
          iVar10 = FUN_04a9a734(0x32);
          fVar37 = local_84;
          iVar11 = FUN_04a9a734(0x28);
          iVar7 = FUN_04a9a734(0x70);
          iVar8 = FUN_04a9a734(0x1e);
          Sexy::Insets::Insets
                    ((Insets *)&local_58,(int)((float)iVar10 + fVar36),(int)(fVar37 - (float)iVar11)
                     ,iVar7,iVar8);
          uVar31 = PrimeText_PotentialTypeface::Typeface
                             (PrimeText_Game::Typeface_CafeteriaBlack_24_Shaded);
          Sexy::Color::Color((Color *)&local_48,1);
          WriteWordInRect(param_1,(Insets *)&local_68,(RtWeakPtr<Sexy::ResourceInfo> *)&local_58,
                          uVar31,(string *)&local_48,3,1);
          fVar36 = local_88;
          iVar10 = FUN_04a9a734(10);
          fVar37 = local_84;
          iVar11 = FUN_04a9a734(3);
          iVar7 = FUN_04a9a734(0x1e);
          Sexy::Insets::Insets
                    ((Insets *)&local_58,(int)((float)iVar10 + fVar36),(int)(fVar37 - (float)iVar11)
                     ,iVar6 + iVar5,iVar7);
          uVar31 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
          Sexy::Color::Color((Color *)&local_48,1);
          WriteWordInRect(param_1,(GraphicsAutoState *)&local_78,
                          (RtWeakPtr<Sexy::ResourceInfo> *)&local_58,uVar31,(string *)&local_48,3,1)
          ;
          FUN_05476c50((Insets *)&local_68);
          FUN_05476c50((GraphicsAutoState *)&local_78);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
        }
      }
      else {
        pvVar26 = (void *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
        DrawEvilDavid(this,param_1,pvVar26,(FPoint *)&local_88);
      }
    }
    FUN_04a9c4c0((RtWeakPtr<PowerPropertySheet> *)&local_90);
  } while( true );
}


/* non-virtual thunk to PVPMapUI::Draw(Sexy::Graphics*) */

void __thiscall PVPMapUI::Draw(PVPMapUI *this,Graphics *param_1)

{
  Draw(this + -8,param_1);
  return;
}


/* PVPMapUI::ShowDialog(DialogType, int, int) */

void __thiscall
PVPMapUI::ShowDialog(PVPMapUI *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  PVPMapDialog *pPVar1;
  
  if (*(long *)(this + 0x498) != 0) {
    (**(code **)(*(long *)(this + 8) + 0x68))(this + 8);
    (**(code **)(**(long **)(this + 0x498) + 0x80))(*(long **)(this + 0x498),1,1);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x498));
    *(undefined8 *)(this + 0x498) = 0;
  }
  pPVar1 = ::operator_new(0x1e8);
  PVPMapDialog::PVPMapDialog(pPVar1,this,param_2,param_3,param_4);
  *(PVPMapDialog **)(this + 0x498) = pPVar1;
  (**(code **)(*(long *)(this + 8) + 0x60))(this + 8,pPVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPMapUI::TouchEnded(Sexy::Touch const&) */

void __thiscall PVPMapUI::TouchEnded(PVPMapUI *this,Touch *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ProfileMgr *this_00;
  long lVar6;
  GridItemProtectorShieldSegment *this_01;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar7;
  int *piVar8;
  undefined4 *puVar9;
  PVPManager *this_02;
  OutlineFont *this_03;
  undefined8 *puVar10;
  ulong uVar11;
  NetworkMgr *this_04;
  INetworkMsgProcess *this_05;
  long *plVar12;
  char *pcVar13;
  MetricsCollector *this_06;
  UIMessageBox *this_07;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  PVPMapUI *pPVar17;
  ulong uVar18;
  PVPMapDialog *this_08;
  PopAnimRig *pPVar19;
  float fVar20;
  float fVar21;
  float local_118;
  float local_114;
  undefined8 local_110;
  FPoint aFStack_108 [8];
  undefined8 local_100;
  DVec2 aDStack_f8 [8];
  FPoint aFStack_f0 [8];
  undefined8 local_e8 [2];
  DummyInit aDStack_d8 [48];
  DVec2 aDStack_a8 [8];
  DVec2 aDStack_a0 [8];
  DVec2 aDStack_98 [8];
  DVec2 aDStack_90 [8];
  DVec2 aDStack_88 [8];
  DVec2 aDStack_80 [8];
  DVec2 aDStack_78 [8];
  DVec2 aDStack_70 [8];
  DVec2 aDStack_68 [8];
  DVec2 aDStack_60 [8];
  DVec2 aDStack_58 [8];
  DVec2 aDStack_50 [8];
  DVec2 aDStack_48 [8];
  DVec2 aDStack_40 [8];
  DVec2 aDStack_38 [8];
  DVec2 aDStack_30 [8];
  DVec2 aDStack_28 [8];
  DVec2 aDStack_20 [8];
  DVec2 aDStack_18 [8];
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x100) != 0) {
    *(undefined8 *)(this + 0x470) = 0;
    *(undefined8 *)(this + 0x478) = 0;
    this[0x489] = (PVPMapUI)0x0;
    goto LAB_04aa85cc;
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar6 = ProfileMgr::GetCurrentProfile(this_00);
  iVar4 = FUN_04a9a214(*(undefined4 *)(lVar6 + 0x1100));
  if (iVar4 == 1) {
    this_06 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
    MetricsCollector::LogPvpGuideComplete(this_06,3);
    LawnApp::KillGameMaskUI(gLawnApp);
    ShowDialog(this,4,1,2);
    setDownBtn(this,0);
    goto LAB_04aa85d8;
  }
  if (iVar4 == 7) {
    LawnApp::KillGameMaskUI(gLawnApp);
    ShowDialog(this,5,1,1);
    setDownBtn(this,1);
    goto LAB_04aa85d8;
  }
  if ((this[0x488] == (PVPMapUI)0x0) && (this[0x489] == (PVPMapUI)0x0)) {
    pPVar17 = this + 0x3a0;
    iVar4 = 1;
    WorldMapCamera::TransformPointFromCamera
              ((float)*(int *)(param_1 + 0x10) + *(float *)(this + 0x110),
               (float)*(int *)(param_1 + 0x14) + *(float *)(this + 0x114));
    do {
      lVar6 = *(long *)pPVar17;
      fVar21 = *(float *)(lVar6 + 0x44);
      fVar20 = *(float *)(lVar6 + 0x40);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 8))
      ;
      DVec2::DVec2(aDStack_f8,fVar20,(float)*(int *)(lVar6 + 0x3c) + fVar21);
      Sexy::FPoint::FPoint(aFStack_f0,(TPoint *)aDStack_f8);
      Sexy::FPoint::FPoint((FPoint *)local_e8,(TPoint *)&local_118);
      cVar2 = isContain(this,aFStack_f0,(FPoint *)local_e8);
      if (cVar2 != '\0') {
        *(int *)(this + 300) = iVar4;
      }
      iVar4 = iVar4 + 1;
      pPVar17 = pPVar17 + 8;
    } while (iVar4 != 0x15);
    lVar6 = 2;
    iVar4 = FUN_04a9a734(0x32d);
    iVar5 = FUN_04a9a734(500);
    DVec2::DVec2(aDStack_a8,(float)iVar4,(float)iVar5);
    iVar4 = FUN_04a9a734(0x478);
    iVar5 = FUN_04a9a734(0x311);
    DVec2::DVec2(aDStack_a0,(float)iVar4,(float)iVar5);
    iVar4 = FUN_04a9a734(0x32b);
    iVar5 = FUN_04a9a734(0x3c5);
    DVec2::DVec2(aDStack_98,(float)iVar4,(float)iVar5);
    iVar4 = FUN_04a9a734(0x194);
    iVar5 = FUN_04a9a734(0x315);
    DVec2::DVec2(aDStack_90,(float)iVar4,(float)iVar5);
    iVar4 = FUN_04a9a734(200);
    iVar5 = FUN_04a9a734(0x2ae);
    DVec2::DVec2(aDStack_88,(float)iVar4,(float)iVar5);
    iVar4 = FUN_04a9a734(0xffffffaf);
    iVar5 = FUN_04a9a734(0x38f);
    DVec2::DVec2(aDStack_80,(float)iVar4,(float)iVar5);
    iVar4 = FUN_04a9a734(0xfffffe04);
    iVar5 = FUN_04a9a734(0x362);
    DVec2::DVec2(aDStack_78,(float)iVar4,(float)iVar5);
    iVar4 = FUN_04a9a734(0xfffffe21);
    iVar5 = FUN_04a9a734(0x15e);
    DVec2::DVec2(aDStack_70,(float)iVar4,(float)iVar5);
    iVar4 = FUN_04a9a734(0xfffffe18);
    iVar5 = FUN_04a9a734(0xa3);
    DVec2::DVec2(aDStack_68,(float)iVar4,(float)iVar5);
    iVar4 = FUN_04a9a734(0x11a);
    iVar5 = FUN_04a9a734(0xffffff6e);
    DVec2::DVec2(aDStack_60,(float)iVar4,(float)iVar5);
    iVar4 = FUN_04a9a734(0xfffffec7);
    iVar5 = FUN_04a9a734(0xfffffe8a);
    DVec2::DVec2(aDStack_58,(float)iVar4,(float)iVar5);
    iVar4 = FUN_04a9a734(0xfffffdfe);
    iVar5 = FUN_04a9a734(0xfffffeb8);
    DVec2::DVec2(aDStack_50,(float)iVar4,(float)iVar5);
    iVar4 = FUN_04a9a734(0x31a);
    iVar5 = FUN_04a9a734(0xffffff78);
    DVec2::DVec2(aDStack_48,(float)iVar4,(float)iVar5);
    iVar4 = FUN_04a9a734(0x438);
    iVar5 = FUN_04a9a734(0xfffffe75);
    DVec2::DVec2(aDStack_40,(float)iVar4,(float)iVar5);
    iVar4 = FUN_04a9a734(0x609);
    iVar5 = FUN_04a9a734(0xffffff7b);
    DVec2::DVec2(aDStack_38,(float)iVar4,(float)iVar5);
    iVar4 = FUN_04a9a734(0x563);
    iVar5 = FUN_04a9a734(0x39);
    DVec2::DVec2(aDStack_30,(float)iVar4,(float)iVar5);
    iVar4 = FUN_04a9a734(0x407);
    iVar5 = FUN_04a9a734(0x19b);
    DVec2::DVec2(aDStack_28,(float)iVar4,(float)iVar5);
    iVar4 = FUN_04a9a734(0x5b1);
    iVar5 = FUN_04a9a734(0x263);
    DVec2::DVec2(aDStack_20,(float)iVar4,(float)iVar5);
    iVar4 = FUN_04a9a734(0x62f);
    iVar5 = FUN_04a9a734(0x170);
    DVec2::DVec2(aDStack_18,(float)iVar4,(float)iVar5);
    iVar4 = FUN_04a9a734(0x4d8);
    iVar5 = FUN_04a9a734(0xb1);
    DVec2::DVec2(aDStack_10,(float)iVar4,(float)iVar5);
    do {
      this_01 = (GridItemProtectorShieldSegment *)Sexy::LazySingleton<PVPManager>::GetInstance();
      pvVar7 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)GridItemProtectorShieldSegment::GetGridOffset(this_01);
      local_110 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(pvVar7);
      while( true ) {
        local_e8[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(pvVar7);
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_110,(__normal_iterator *)local_e8)
        ;
        if (!bVar3) break;
        piVar8 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_110);
        if ((lVar6 == *piVar8) && ((char)piVar8[2] != '\0')) {
          uVar1 = *piVar8 - 2;
          Sexy::FPoint::FPoint
                    (aFStack_108,
                     (TPoint *)
                     (aDStack_a8 +
                     (-(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5)));
          piVar8 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_110);
          Sexy::FPoint::FPoint
                    ((FPoint *)&local_100,
                     (TPoint *)
                     (aDStack_a8 +
                     (-(ulong)(*piVar8 - 2U >> 0x1f) & 0xffffffe000000000 |
                     (ulong)(*piVar8 - 2U) << 5) + 8));
          piVar8 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_110);
          Sexy::FPoint::FPoint
                    ((FPoint *)aDStack_f8,
                     (TPoint *)
                     (aDStack_a8 +
                     (-(ulong)(*piVar8 - 2U >> 0x1f) & 0xffffffe000000000 |
                     (ulong)(*piVar8 - 2U) << 5) + 0x10));
          piVar8 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_110);
          Sexy::FPoint::FPoint
                    (aFStack_f0,
                     (TPoint *)
                     (aDStack_a8 +
                     (-(ulong)(*piVar8 - 2U >> 0x1f) & 0xffffffe000000000 |
                     (ulong)(*piVar8 - 2U) << 5) + 0x18));
          Sexy::FPoint::FPoint((FPoint *)local_e8,(TPoint *)&local_118);
          cVar2 = isContain(this,aFStack_108,(FPoint *)&local_100,aDStack_f8,aFStack_f0,
                            (FPoint *)local_e8);
          if (cVar2 != '\0') {
            puVar9 = (undefined4 *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_110);
            ShowDialog(this,0,*puVar9,0);
            piVar8 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_110)
            ;
            setUnlockBtnDown(this,*piVar8);
            break;
          }
        }
        FUN_04a9c400((__normal_iterator *)&local_110);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 7);
    this_02 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstance();
    pvVar7 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)PVPManager::GetPVPMapDataList(this_02);
    local_100 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(pvVar7);
    while( true ) {
      local_e8[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(pvVar7);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_100,(__normal_iterator *)local_e8);
      if (!bVar3) break;
      lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_100);
      if (*(int *)(lVar6 + 0x34) == 1) {
        iVar4 = *(int *)(lVar6 + 0x38) + -1;
      }
      else {
        iVar4 = (*(int *)(lVar6 + 0x34) + -2) * 3 + *(int *)(lVar6 + 0x38) + 4;
      }
      cVar2 = IsIndexValid(this,iVar4,0x14);
      if (cVar2 != '\0') {
        lVar14 = (long)iVar4;
        lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_100);
        lVar6 = *(long *)(lVar6 + 8);
        Sexy::LazySingleton<PVPManager>::GetInstance();
        iVar5 = PVPManager::GetPVPProfileId();
        if ((lVar6 == iVar5) &&
           (lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_100),
           *(int *)(lVar6 + 0x28) <= *(int *)(lVar6 + 0x24) * 5)) {
          lVar6 = *(long *)(this + (lVar14 + 0x74) * 8);
          Sexy::Insets::Insets
                    ((Insets *)local_e8,*(int *)(lVar6 + 0x30),*(int *)(lVar6 + 0x34),
                     *(int *)(lVar6 + 0x38),*(int *)(lVar6 + 0x3c));
          cVar2 = Sexy::TRect<int>::Contains((TRect<int> *)local_e8,(int)local_118,(int)local_114);
          if (cVar2 != '\0') {
            this_04 = (NetworkMgr *)NetworkMgr::Instance();
            this_05 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_04);
            plVar12 = (long *)std::__exception_ptr::exception_ptr::_M_get
                                        ((exception_ptr *)&local_100);
            INetworkMsgProcess::RequestPVPAchieve(this_05,*plVar12);
            pcVar13 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
            AudioMgr::SendEvent(pcVar13,"Play_Coin");
            pPVar19 = *(PopAnimRig **)(*(long *)(this + lVar14 * 8 + 0x3a0) + 0x18);
            std::string::string((string *)aFStack_f0,"idle");
            Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_d8);
            PopAnimRig::PlayAndStop(pPVar19,aFStack_f0,0,aDStack_d8);
            std::string::~string((string *)aFStack_f0);
            nop();
            lVar14 = *(long *)(this + lVar14 * 8 + 0x3a0);
            lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_100);
            *(undefined4 *)(lVar14 + 0x54) = *(undefined4 *)(lVar6 + 0x24);
            lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_100);
            *(undefined4 *)(lVar14 + 0x58) = *(undefined4 *)(lVar6 + 0x1c);
            enableAchieveEffect(this,iVar4);
            break;
          }
        }
        lVar6 = *(long *)(this + (lVar14 + 0x74) * 8);
        fVar21 = *(float *)(lVar6 + 0x44);
        fVar20 = *(float *)(lVar6 + 0x40);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 8));
        DVec2::DVec2(aDStack_f8,fVar20,(float)*(int *)(lVar6 + 0x3c) + fVar21);
        Sexy::FPoint::FPoint(aFStack_f0,(TPoint *)aDStack_f8);
        Sexy::FPoint::FPoint((FPoint *)local_e8,(TPoint *)&local_118);
        cVar2 = isContain(this,aFStack_f0,(FPoint *)local_e8);
        if (cVar2 != '\0') {
          lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_100);
          lVar6 = *(long *)(lVar6 + 8);
          Sexy::LazySingleton<PVPManager>::GetInstance();
          iVar5 = PVPManager::GetPVPProfileId();
          if (lVar6 == iVar5) {
            lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_100);
            ShowDialog(this,2,*(undefined4 *)(lVar6 + 0x34),*(undefined4 *)(lVar6 + 0x38));
          }
          else {
            lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_100);
            ShowDialog(this,3,*(undefined4 *)(lVar6 + 0x34),*(undefined4 *)(lVar6 + 0x38));
          }
          setDownBtn(this,iVar4);
          break;
        }
      }
      FUN_04a9c460((FPoint *)&local_100);
    }
    this_03 = (OutlineFont *)Sexy::LazySingleton<PVPManager>::GetInstance();
    puVar10 = (undefined8 *)EA::Text::OutlineFont::GetOTF(this_03);
    uVar16 = *puVar10;
    uVar11 = FUN_04a9a2dc(uVar16,puVar10[1]);
    for (uVar18 = 0; uVar18 < uVar11; uVar18 = uVar18 + 1) {
      lVar6 = FUN_04a9a2e8(uVar16,uVar18);
      if (*(int *)(lVar6 + 0x28) != 2) {
        if (*(int *)(lVar6 + 0x20) == 1) {
          iVar4 = *(int *)(lVar6 + 0x24) + -1;
        }
        else {
          iVar4 = (*(int *)(lVar6 + 0x20) + -2) * 3 + *(int *)(lVar6 + 0x24) + 4;
        }
        cVar2 = IsIndexValid(this,iVar4,0x14);
        if (cVar2 != '\0') {
          lVar6 = *(long *)(this + (long)iVar4 * 8 + 0x3a0);
          fVar21 = *(float *)(lVar6 + 0x44);
          fVar20 = *(float *)(lVar6 + 0x40);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 8));
          DVec2::DVec2(aDStack_f8,fVar20,(float)*(int *)(lVar6 + 0x3c) + fVar21);
          Sexy::FPoint::FPoint(aFStack_f0,(TPoint *)aDStack_f8);
          Sexy::FPoint::FPoint((FPoint *)local_e8,(TPoint *)&local_118);
          cVar2 = isContain(this,aFStack_f0,(FPoint *)local_e8);
          if (cVar2 != '\0') {
            lVar6 = FUN_04a9a2e8(*puVar10,uVar18);
            if (*(int *)(lVar6 + 0x28) == 4) {
              lVar6 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
              iVar5 = FUN_04a9a22c(*(undefined4 *)(lVar6 + 0x1f8));
              lVar6 = FUN_04a9a2e8(*puVar10,uVar18);
              if (*(int *)(lVar6 + 0x34) <= iVar5) {
                this_07 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
                if (this_07 != (UIMessageBox *)0x0) {
                  TodStringTranslate(L"[EVIL_DAVID_CHALLENGE_FINISH]");
                  FUN_05478178((FPoint *)local_e8,&DAT_056f11a8,(FPoint *)&local_100);
                  UIMessageBox::SetMessage(this_07,(wstring *)aFStack_f0,(wstring *)local_e8);
                  FUN_05476c50((FPoint *)local_e8);
                  nop();
                  FUN_05476c50(aFStack_f0);
                  UIMessageBox::SetShowType(this_07,2);
                  std::string::string((string *)local_e8,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_PURPLE");
                  UIMessageBox::SetBackground(this_07,(string *)local_e8);
                  std::string::~string((string *)local_e8);
                  nop();
                }
                break;
              }
            }
            ShowDialog(this,5,*(undefined4 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0x24));
            this_08 = *(PVPMapDialog **)(this + 0x498);
            if (this_08 != (PVPMapDialog *)0x0) {
              lVar6 = FUN_04a9a2e8(*puVar10,uVar18);
              PVPMapDialog::SetCoolDown(this_08,*(int *)(lVar6 + 0x2c));
            }
            setDownBtn(this,iVar4);
            break;
          }
        }
        uVar16 = *puVar10;
        uVar11 = FUN_04a9a2dc(uVar16,puVar10[1]);
      }
    }
    lVar6 = *(long *)(this + 0x3a8);
    fVar21 = *(float *)(lVar6 + 0x44);
    fVar20 = *(float *)(lVar6 + 0x40);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 8));
    DVec2::DVec2(aDStack_f8,fVar20,(float)*(int *)(lVar6 + 0x3c) + fVar21);
    Sexy::FPoint::FPoint(aFStack_f0,(TPoint *)aDStack_f8);
    Sexy::FPoint::FPoint((FPoint *)local_e8,(TPoint *)&local_118);
    cVar2 = isContain(this,aFStack_f0,(FPoint *)local_e8);
    if (cVar2 != '\0') {
      ShowDialog(this,4,1,2);
      setDownBtn(this,1);
    }
  }
  lVar6 = *(long *)(this + 0x470);
  lVar15 = *(long *)param_1;
  this[0x488] = (PVPMapUI)0x0;
  lVar14 = *(long *)(this + 0x478);
  if (lVar6 == lVar15) {
    *(undefined8 *)(this + 0x470) = 0;
    if (lVar6 == lVar14) {
      *(undefined8 *)(this + 0x478) = 0;
      this[0x489] = (PVPMapUI)0x0;
    }
    else {
LAB_04aa8678:
      if (lVar14 == 0) {
        this[0x489] = (PVPMapUI)0x0;
      }
    }
  }
  else if (lVar15 == lVar14) {
    *(undefined8 *)(this + 0x478) = 0;
    if (lVar6 == 0) {
      this[0x489] = (PVPMapUI)0x0;
    }
  }
  else if (lVar6 == 0) goto LAB_04aa8678;
LAB_04aa85cc:
  nop();
LAB_04aa85d8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PVPMapUI::TouchEnded(Sexy::Touch const&) */

void __thiscall PVPMapUI::TouchEnded(PVPMapUI *this,Touch *param_1)

{
  TouchEnded(this + -8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPMapUI::Update() */

void __thiscall PVPMapUI::Update(PVPMapUI *this)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  PVPManager *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar5;
  S2C_PVP_BigMapInfo *this_01;
  OutlineFont *this_02;
  S2C_PVP_BigMapPVPInfo *this_03;
  PopAnimRig *this_04;
  char *pcVar6;
  NetworkMgr *this_05;
  INetworkMsgProcess *this_06;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  fVar9 = *(float *)(this + 0x8238);
  local_8 = ___stack_chk_guard;
  fVar7 = (float)PVZ_T();
  if (fVar9 < fVar7) {
    uVar8 = PVZ_EOT();
    *(undefined4 *)(this + 0x8238) = uVar8;
    onShow(this);
  }
  this_00 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstance();
  pvVar5 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)PVPManager::GetPVPMapDataList(this_00);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(pvVar5);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(pvVar5);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_01 = (S2C_PVP_BigMapInfo *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    iVar4 = S2C_PVP_BigMapInfo::GetHouseID(this_01);
    cVar2 = IsIndexValid(this,iVar4,0x14);
    if (cVar2 != '\0') {
      PVPHouseData::Update(*(PVPHouseData **)(this + (long)iVar4 * 8 + 0x3a0));
    }
    eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
              ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_18);
  }
  fVar7 = *(float *)(this + 0x823c);
  if ((fVar7 <= 0.0) || (fVar9 = (float)PVZ_T(), fVar7 < fVar9)) {
    fVar7 = (float)PVZ_T();
    bVar1 = false;
    *(float *)(this + 0x823c) = fVar7 + 5.0;
    this_02 = (OutlineFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    pvVar5 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)EA::Text::OutlineFont::GetOTF(this_02);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(pvVar5);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(pvVar5);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar3)
    {
      this_03 = (S2C_PVP_BigMapPVPInfo *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar2 = S2C_PVP_BigMapPVPInfo::CheckTime(this_03);
      if (cVar2 != '\0') {
        bVar1 = true;
      }
      eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
                ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_18);
    }
    if (bVar1) {
      this_05 = (NetworkMgr *)NetworkMgr::Instance();
      this_06 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_05);
      INetworkMsgProcess::RequestPVPMapInfo(this_06);
    }
  }
  if (DAT_06b7f618 < 1) {
    this_04 = *(PopAnimRig **)(this + 0x8230);
    if (this_04 == (PopAnimRig *)0x0) goto LAB_04aa9cb0;
  }
  else {
    if ((*(long *)(this + 0x8230) != 0) && (9 < DAT_06b7f618)) {
      setCameraPosition(this,DAT_06b7f8c0,DAT_06b7fc68);
    }
    DAT_06b7f618 = DAT_06b7f618 + -1;
    if (DAT_06b7f618 == 0) {
      pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar6,"Play_PVP_House_Occup");
    }
    this_04 = *(PopAnimRig **)(this + 0x8230);
    if ((this_04 == (PopAnimRig *)0x0) || (0 < DAT_06b7f618)) goto LAB_04aa9cb0;
  }
  fVar7 = (float)PVZ_T();
  fVar9 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(this_04,fVar7,fVar9);
LAB_04aa9cb0:
  zoomEffectUpdate(this);
  colorEffectUpdate(this);
  unlockColorEffectUpdate(this);
  achieveEffectUpdate(this);
  fVar7 = (float)PVZ_Dt();
  if (2.0 < fVar7 + *(float *)(this + 0x8228)) {
    *(undefined4 *)(this + 0x8228) = 0;
    refreshHouseAnim(this);
  }
  else {
    *(float *)(this + 0x8228) = fVar7 + *(float *)(this + 0x8228);
  }
  MapEditor::Update((MapEditor *)(this + 8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PVPMapUI::Update() */

void __thiscall PVPMapUI::Update(PVPMapUI *this)

{
  Update(this + -8);
  return;
}


/* PVPMapUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall PVPMapUI::DrawAll(PVPMapUI *this,ModalFlags *param_1,Graphics *param_2)

{
  TenYearRecordInfoPage::DrawAll((TenYearRecordInfoPage *)(this + 8),param_1,param_2);
  return;
}


/* non-virtual thunk to PVPMapUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall PVPMapUI::DrawAll(PVPMapUI *this,ModalFlags *param_1,Graphics *param_2)

{
  DrawAll(this + -8,param_1,param_2);
  return;
}

