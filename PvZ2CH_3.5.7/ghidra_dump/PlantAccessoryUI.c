// Class: PlantAccessoryUI


/* PlantAccessoryUI::CloseAccessorySuperPacket() */

void __thiscall PlantAccessoryUI::CloseAccessorySuperPacket(PlantAccessoryUI *this)

{
  if (*(long *)(this + 0x140) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x140))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x140));
    *(undefined8 *)(this + 0x140) = 0;
  }
  return;
}


/* PlantAccessoryUI::CloseSteadySuccessSuperPacket() */

void __thiscall PlantAccessoryUI::CloseSteadySuccessSuperPacket(PlantAccessoryUI *this)

{
  if (*(long *)(this + 0x148) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x148))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x148));
    *(undefined8 *)(this + 0x148) = 0;
  }
  return;
}


/* PlantAccessoryUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void PlantAccessoryUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PlantAccessoryUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall PlantAccessoryUI::ScrollTargetReached(PlantAccessoryUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* PlantAccessoryUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PlantAccessoryUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PlantAccessoryUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
PlantAccessoryUI::ScrollTargetInterrupted(PlantAccessoryUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* PlantAccessoryUI::OnCloseDialog() */

void PlantAccessoryUI::OnCloseDialog(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* PlantAccessoryUI::showSuperAccessoryDescription() */

void __thiscall PlantAccessoryUI::showSuperAccessoryDescription(PlantAccessoryUI *this)

{
  ShowSuperAccessoryDescriptionUI *this_00;
  
  if (*(long *)(this + 0x150) != 0) {
    return;
  }
  this_00 = ::operator_new(0xe0);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  ShowSuperAccessoryDescriptionUI::ShowSuperAccessoryDescriptionUI(this_00);
  *(ShowSuperAccessoryDescriptionUI **)(this + 0x150) = this_00;
  ShowSuperAccessoryDescriptionUI::InitView(this_00);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x150));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x150));
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal
            (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x150));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x150));
  return;
}


/* PlantAccessoryUI::onNarrationFinished() */

void PlantAccessoryUI::onNarrationFinished(void)

{
  int iVar1;
  ProfileMgr *this;
  long lVar2;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this);
  iVar1 = FUN_0494fbf4(*(undefined4 *)(lVar2 + 0x40));
  if (iVar1 != 0x1e) {
    return;
  }
  lVar2 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
  FUN_0494fe98(lVar2 + 0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
PlantAccessoryUI::DrawAll(PlantAccessoryUI *this,ModalFlags *param_1,Graphics *param_2)

{
  PlantAccessoryUI *pPVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  Image *pIVar12;
  SalesProgressBar *pSVar13;
  LotteryResultProgressBar *pLVar14;
  undefined8 uVar15;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long *plVar16;
  undefined8 *puVar17;
  ulong uVar18;
  CachedUIResourcePtr<Sexy::Image> *this_02;
  ulong uVar19;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_74;
  Insets aIStack_70 [16];
  Insets aIStack_60 [16];
  Transform aTStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  pPVar1 = this + 0x1d0;
  iVar3 = FUN_04950334(0x2f3);
  iVar4 = FUN_04950334(0x1bc);
  Sexy::Insets::Insets
            ((Insets *)&local_90,(*(int *)(this + 0x50) - iVar3) / 2,
             (*(int *)(this + 0x54) - iVar4) / 2,iVar3,iVar4);
  iVar3 = local_90;
  iVar5 = FUN_04950334(10);
  iVar4 = local_88;
  iVar6 = FUN_04950334(0x14);
  iVar7 = FUN_04950334(0x17);
  Sexy::Insets::Insets
            ((Insets *)&local_80,iVar3 + iVar5,iVar5 + local_8c,iVar4 - iVar6,local_84 - iVar7);
  Sexy::Insets::Insets(aIStack_60,(Insets *)&local_80);
  uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b717f8);
  DrawImageTiled(0x3f800000,param_2,aIStack_60,uVar11);
  Sexy::Insets::Insets(aIStack_60,(Insets *)&local_90);
  uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71700);
  Draw9SliceImage(param_2,aIStack_60,uVar11);
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70eb8);
  iVar3 = local_80;
  iVar5 = FUN_04950334(7);
  iVar4 = local_7c;
  iVar6 = FUN_04950334(0x14);
  Sexy::Graphics::DrawImage(param_2,pIVar12,iVar3 + iVar5,iVar4 + iVar6);
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71558);
  iVar3 = local_80;
  iVar5 = FUN_04950334(0x202);
  iVar4 = local_7c;
  iVar6 = FUN_04950334(0x14);
  Sexy::Graphics::DrawImage(param_2,pIVar12,iVar3 + iVar5,iVar4 + iVar6);
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71128);
  iVar4 = local_80;
  iVar3 = local_7c + local_74;
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71128);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar13);
  Sexy::Graphics::DrawImage(param_2,pIVar12,iVar4,iVar3 - iVar5);
  iVar3 = local_90;
  iVar4 = FUN_04950334(0x210);
  iVar3 = iVar3 + iVar4;
  iVar5 = FUN_04950334(0x98);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71558);
  LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b711d8);
  LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  cVar2 = FUN_054765e8(pPVar1);
  iVar4 = local_7c;
  if (cVar2 == '\0') {
    iVar6 = FUN_04950334(0x1c);
    if (*(int *)(this + 0x138) != 4) {
      uVar11 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
      iVar7 = local_80;
      iVar8 = FUN_04950334(0x2d);
      uVar15 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
      FUN_05477b24(auStack_98,pPVar1);
      iVar9 = Sexy::PrimeTypeface::StringWidth(uVar15,auStack_98);
      FUN_05477b24(aIStack_70,pPVar1);
      Sexy::Color::Color((Color *)aIStack_60,1);
      Sexy::PrimeTypeface::DrawString_Line
                ((PrimeTypeface *)(float)(iVar7 + iVar8),(float)(iVar4 + iVar6),(float)iVar9,uVar11,
                 param_2,aIStack_70,1,aIStack_60,0);
      FUN_05476c50(aIStack_70);
      FUN_05476c50(auStack_98);
      goto LAB_04951f50;
    }
LAB_049522bc:
    if (*(long *)(this + 0x1e8) != 0) {
      pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71680);
      iVar4 = FUN_04950334(8);
      Sexy::Graphics::DrawImage(param_2,pIVar12,iVar4 + iVar3,iVar5);
    }
    if (*(long *)(this + 0x1f8) == 0) goto LAB_04951fe0;
    pLVar14 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71680);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x1f8));
    pSVar13 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71680);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar13);
    iVar8 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x1f8));
    iVar9 = FUN_04950334(8);
    Sexy::Graphics::DrawImage
              (param_2,*(Image **)(this + 0x1f8),iVar9 + iVar3 + (iVar4 - iVar6) / 2,
               iVar5 + (iVar7 - iVar8) / 2);
    iVar4 = *(int *)(this + 0x138);
    if (iVar4 != 2) goto LAB_04951fec;
LAB_04952378:
    pPVar1 = this + 0x1b8;
    pLVar14 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71b38);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
    iVar6 = FUN_04950334(0x34);
    pSVar13 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71b38);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar13);
    iVar8 = FUN_04950334(8);
    pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71b38);
    iVar9 = FUN_04950334(5);
    iVar10 = FUN_04950334(10);
    Sexy::Graphics::DrawImage
              (param_2,pIVar12,iVar9 + iVar3,iVar10 + iVar5,iVar4 + iVar6,iVar7 + iVar8);
    cVar2 = FUN_054765e8(pPVar1);
    if (cVar2 == '\0') {
      pSVar13 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71b38);
      iVar4 = SalesProgressBar::GetCurrentLevel(pSVar13);
      iVar6 = FUN_04950334(0xf);
      iVar7 = FUN_04950334(0x2a);
      iVar4 = iVar5 + (iVar4 - iVar6) / 2;
      iVar8 = FUN_04950334(10);
      iVar9 = FUN_04950334(0x96);
      Sexy::Insets::Insets(aIStack_70,iVar7 + iVar3,iVar4 + iVar8,iVar9,iVar6);
      uVar11 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
      iVar6 = FUN_04950334(0x2a);
      iVar7 = FUN_04950334(10);
      uVar15 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
      FUN_05477b24(auStack_a0,pPVar1);
      iVar8 = Sexy::PrimeTypeface::StringWidth(uVar15,auStack_a0);
      FUN_05477b24(auStack_98,pPVar1);
      Sexy::Color::Color((Color *)aIStack_60,1);
      Sexy::PrimeTypeface::DrawString_Line
                ((PrimeTypeface *)(float)(iVar6 + iVar3),(float)(iVar4 + iVar7),(float)iVar8,uVar11,
                 param_2,auStack_98,1,aIStack_60,0);
      FUN_05476c50(auStack_98);
      FUN_05476c50(auStack_a0);
      iVar4 = *(int *)(this + 0x138);
    }
    else {
      iVar4 = *(int *)(this + 0x138);
    }
    if (iVar4 == 4) {
LAB_04952424:
      pLVar14 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71b38);
      LotteryResultProgressBar::GetCurrentLevel(pLVar14);
      pSVar13 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71b38);
      iVar7 = SalesProgressBar::GetCurrentLevel(pSVar13);
      pSVar13 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71848);
      iVar8 = SalesProgressBar::GetCurrentLevel(pSVar13);
      iVar6 = FUN_04950334(0x23);
      iVar6 = (iVar8 + iVar5) - iVar6;
      pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70f30);
      iVar5 = FUN_04950334(0x2f);
      iVar8 = FUN_04950334(iVar4);
      iVar9 = FUN_04950334(0x93);
      Sexy::Graphics::DrawImage(param_2,pIVar12,iVar5 + iVar3,iVar6 - iVar8,iVar9,iVar7);
      pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71150);
      iVar5 = FUN_04950334(0x2f);
      iVar4 = FUN_04950334(iVar4);
      iVar8 = FUN_04950334(0x93);
      Sexy::Graphics::DrawImage
                (param_2,pIVar12,iVar5 + iVar3,iVar6 - iVar4,
                 (int)((float)iVar8 * *(float *)(this + 0x1e0)),iVar7);
      pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70ee0);
      iVar4 = FUN_04950334(10);
      iVar5 = FUN_04950334(8);
      iVar7 = FUN_04950334(0x28);
      Sexy::Graphics::DrawImage(param_2,pIVar12,iVar4 + iVar3,iVar6 - iVar5,iVar7,iVar7);
      cVar2 = FUN_054765e8(this + 0x1b8);
      if (cVar2 == '\0') {
        uVar11 = PrimeText_PotentialTypeface::Typeface
                           (PrimeText_Game::Typeface_CafeteriaBlack_22_ThickOutline);
        iVar4 = FUN_04950334(0x32);
        iVar5 = FUN_04950334(0x8c);
        FUN_05477b24(aIStack_70,this + 0x1d8);
        Sexy::Color::Color((Color *)aIStack_60,1);
        Sexy::PrimeTypeface::DrawString_Line
                  ((PrimeTypeface *)(float)(iVar4 + iVar3),(float)iVar6,(float)iVar5,uVar11,param_2,
                   aIStack_70,1,aIStack_60,0);
        FUN_05476c50(aIStack_70);
      }
    }
  }
  else {
LAB_04951f50:
    if (*(int *)(this + 0x138) == 4) goto LAB_049522bc;
    if (*(Image **)(this + 0x1e8) != (Image *)0x0) {
      Sexy::Graphics::DrawImage(param_2,*(Image **)(this + 0x1e8),iVar3,iVar5);
    }
    if (*(long *)(this + 0x1f8) != 0) {
      pLVar14 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71848);
      iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
      iVar6 = LotteryResultProgressBar::GetCurrentLevel
                        (*(LotteryResultProgressBar **)(this + 0x1f8));
      pSVar13 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71848);
      iVar7 = SalesProgressBar::GetCurrentLevel(pSVar13);
      iVar8 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x1f8));
      Sexy::Graphics::DrawImage
                (param_2,*(Image **)(this + 0x1f8),iVar3 + (iVar4 - iVar6) / 2,
                 iVar5 + (iVar7 - iVar8) / 2);
    }
LAB_04951fe0:
    iVar4 = *(int *)(this + 0x138);
    if (iVar4 == 2) goto LAB_04952378;
LAB_04951fec:
    if (*(long *)(this + 0x1e8) == 0) {
      if (iVar4 == 3) goto LAB_04952610;
LAB_04952040:
      if (iVar4 != 4) goto LAB_04952048;
      goto LAB_04952424;
    }
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar4 = PlayerInfo::GetPlantAccessoryLevelById(this_01,(long)*(int *)(this + 0x198));
    if (iVar4 == 1) {
      this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71658;
LAB_04952a38:
      pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_02);
      iVar4 = FUN_04950334(0x9b);
      iVar6 = FUN_04950334(0xd);
      iVar7 = FUN_04950334(0x20);
      iVar8 = FUN_04950334(0x28);
      Sexy::Graphics::DrawImage(param_2,pIVar12,iVar4 + iVar3,iVar6 + iVar5,iVar7,iVar8);
    }
    else {
      if (iVar4 == 2) {
        this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70fd8;
        goto LAB_04952a38;
      }
      if (iVar4 == 3) {
        this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b712e0;
        goto LAB_04952a38;
      }
      if (iVar4 == 4) {
        this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71088;
        goto LAB_04952a38;
      }
      if (iVar4 == 5) {
        this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b717d0;
        goto LAB_04952a38;
      }
    }
    iVar4 = *(int *)(this + 0x138);
    if (iVar4 != 3) {
LAB_04952038:
      if (iVar4 == 2) goto LAB_04952378;
      goto LAB_04952040;
    }
LAB_04952610:
    pPVar1 = this + 0x1c8;
    cVar2 = FUN_054765e8(pPVar1);
    if (cVar2 == '\0') {
      pSVar13 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71848);
      iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
      iVar4 = FUN_04950334(0x23);
      iVar4 = (iVar6 + iVar5) - iVar4;
      iVar6 = FUN_04950334(10);
      iVar7 = FUN_04950334(200);
      iVar8 = FUN_04950334(0xf);
      Sexy::Insets::Insets(aIStack_70,iVar6 + iVar3,iVar4,iVar7,iVar8);
      uVar11 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
      iVar6 = FUN_04950334(10);
      uVar15 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
      FUN_05477b24(auStack_a0,pPVar1);
      iVar7 = Sexy::PrimeTypeface::StringWidth(uVar15,auStack_a0);
      FUN_05477b24(auStack_98,pPVar1);
      Sexy::Color::Color((Color *)aIStack_60,1);
      Sexy::PrimeTypeface::DrawString_Line
                ((PrimeTypeface *)(float)(iVar6 + iVar3),(float)iVar4,(float)iVar7,uVar11,param_2,
                 auStack_98,1,aIStack_60,0);
      FUN_05476c50(auStack_98);
      FUN_05476c50(auStack_a0);
      iVar4 = *(int *)(this + 0x138);
      goto LAB_04952038;
    }
  }
LAB_04952048:
  pPVar1 = this + 0x1c0;
  cVar2 = FUN_054765e8(pPVar1);
  if (cVar2 == '\0') {
    uVar11 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
    FUN_05477b24(aIStack_60,pPVar1);
    Sexy::PrimeTypeface::StringWidth(uVar11,aIStack_60);
    iVar4 = FUN_04950334();
    FUN_05476c50(aIStack_60);
    iVar3 = local_80;
    iVar5 = FUN_04950334(0x202);
    pLVar14 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71558);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
    iVar3 = iVar3 + iVar5 + (iVar6 - iVar4) / 2;
    iVar5 = FUN_04950334(0x1e);
    iVar6 = FUN_04950334(0xf);
    iVar7 = FUN_04950334(iVar3 + 0x254);
    Sexy::Insets::Insets(aIStack_70,iVar7,local_7c + iVar5,iVar4,iVar6);
    uVar11 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
    FUN_05477b24(auStack_98,pPVar1);
    Sexy::Color::Color((Color *)aIStack_60,1);
    Sexy::PrimeTypeface::DrawString_Line
              ((PrimeTypeface *)(float)iVar3,(float)(local_7c + iVar5),(float)iVar4,uVar11,param_2,
               auStack_98,1,aIStack_60,0);
    FUN_05476c50(auStack_98);
    if (*(int *)(this + 0x138) != 4) goto LAB_04952070;
LAB_04952874:
    cVar2 = FUN_054765e8(this + 0x1a0);
    if (cVar2 != '\0') goto LAB_04952090;
    pLVar14 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71128);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
    iVar4 = FUN_04950334(400);
    iVar5 = FUN_04950334(0x2d);
    Sexy::Insets::Insets(aIStack_70,local_80,iVar4,iVar3,iVar5);
    puVar17 = &PrimeText_Game::Typeface_FZCuYuan_26;
LAB_049529e4:
    uVar11 = PrimeText_PotentialTypeface::Typeface((PrimeText_PotentialTypeface *)*puVar17);
    Sexy::Insets::Insets(aIStack_60,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_2,this + 0x1a0,aIStack_70,uVar11,aIStack_60,5,1);
    if (*(int *)(this + 0x138) == 4) goto LAB_04952090;
  }
  else {
    if (*(int *)(this + 0x138) == 4) goto LAB_04952874;
LAB_04952070:
    cVar2 = FUN_054765e8(this + 0x1a0);
    if (cVar2 == '\0') {
      pLVar14 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71128);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
      iVar4 = FUN_04950334(0x19f);
      iVar5 = FUN_04950334(0x14);
      Sexy::Insets::Insets(aIStack_70,local_80,iVar4,iVar3,iVar5);
      puVar17 = &PrimeText_Game::Typeface_FZShaoEr_18;
      goto LAB_049529e4;
    }
  }
  cVar2 = FUN_054765e8(this + 0x1a8);
  if (cVar2 == '\0') {
    pLVar14 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71128);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
    iVar4 = FUN_04950334(0x1bd);
    iVar5 = FUN_04950334(0x32);
    iVar6 = FUN_04950334(0x14);
    iVar7 = FUN_04950334(0x28);
    Sexy::Insets::Insets(aIStack_70,local_80 + iVar6,iVar4,iVar3 - iVar7,iVar5);
    uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    Sexy::Color::Color((Color *)aIStack_60,0,0x7c,0);
    WriteWordInRect(param_2,this + 0x1a8,aIStack_70,uVar11,aIStack_60,5,1);
  }
LAB_04952090:
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71240);
  iVar4 = local_90;
  iVar5 = FUN_04950334(0x14);
  iVar3 = *(int *)(this + 0x54);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71240);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
  iVar7 = FUN_04950334(0x1e);
  Sexy::Graphics::DrawImage(param_2,pIVar12,iVar4 - iVar5,(iVar3 - iVar6) - iVar7);
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71630);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71240);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  iVar5 = FUN_04950334(0x5a);
  iVar3 = *(int *)(this + 0x54);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71240);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
  iVar7 = FUN_04950334(0x14);
  Sexy::Graphics::DrawImage(param_2,pIVar12,iVar4 - iVar5,(iVar3 - iVar6) + iVar7);
  Sexy::Transform::Transform(aTStack_50);
  Sexy::Transform::Scale(aTStack_50,-1.0,1.0);
  iVar4 = FUN_04950334(0x14);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71240);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  iVar3 = *(int *)(this + 0x54);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71240);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
  iVar7 = FUN_04950334(0x1e);
  Sexy::Transform::Translate
            (aTStack_50,(float)((local_90 + local_88 + iVar4) - iVar5 / 2),
             (float)((iVar3 - iVar6 / 2) - iVar7));
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71240);
  Sexy::Graphics::DrawImageTransform(param_2,pIVar12,aTStack_50,0.0,0.0);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  uVar19 = 0;
  while( true ) {
    uVar18 = FUN_0494fc9c(*(undefined8 *)(this + 0x120),*(undefined8 *)(this + 0x128));
    if (uVar18 <= uVar19) break;
    Sexy::Graphics::PushState(param_2);
    plVar16 = (long *)FUN_0494fca8(*(undefined8 *)(this + 0x120),uVar19);
    Sexy::Graphics::Translate(param_2,*(int *)(*plVar16 + 0x48),*(int *)(*plVar16 + 0x4c));
    puVar17 = (undefined8 *)FUN_0494fca8(*(undefined8 *)(this + 0x120),uVar19);
    (**(code **)(*(long *)*puVar17 + 0x130))((long *)*puVar17,param_1,param_2);
    plVar16 = (long *)FUN_0494fca8(*(undefined8 *)(this + 0x120),uVar19);
    *(undefined1 *)(*plVar16 + 0x44) = 0;
    Sexy::Graphics::PopState(param_2);
    uVar19 = uVar19 + 1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryUI::DoSwitchTargetAccessory() */

void __thiscall PlantAccessoryUI::DoSwitchTargetAccessory(PlantAccessoryUI *this)

{
  undefined4 uVar1;
  PlantAccessoryMgr *pPVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  uVar1 = *(undefined4 *)(this + 0x198);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x1f0));
  PlantAccessoryMgr::BindTargetAccessory(pPVar2,uVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryUI::OnMainUINoticed(AccessoryContent*) */

void __thiscall PlantAccessoryUI::OnMainUINoticed(PlantAccessoryUI *this,AccessoryContent *param_1)

{
  wstring *pwVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  AccessoryUIInfo *pAVar10;
  undefined8 uVar11;
  PlantAccessoryMgr *pPVar12;
  ProfileMgr *pPVar13;
  long lVar14;
  CrazyNPCManager *pCVar15;
  PVZ2UIButton *pPVar16;
  SalesProgressBar *pSVar17;
  PlayerInfo *pPVar18;
  string *psVar19;
  ulong uVar20;
  ulong uVar21;
  int *piVar22;
  ulong uVar23;
  long *plVar24;
  code *pcVar25;
  undefined1 auStack_c0 [8];
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  Delegate0 aDStack_a8 [48];
  wstring awStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Lua::CUIDialog::GetLayoutName();
  thunk_FUN_05475e00((string *)(this + 400),asStack_40);
  std::string::~string(asStack_40);
  uVar4 = AccessoryContent::GetId(param_1);
  *(undefined4 *)(this + 0x198) = uVar4;
  pAVar10 = (AccessoryUIInfo *)AccessoryContent::GetUIInfo(param_1);
  AccessoryUIInfo::operator=((AccessoryUIInfo *)(this + 0x158),pAVar10);
  uVar11 = AccessoryContent::GetDisplayImage(param_1);
  *(undefined8 *)(this + 0x1f8) = uVar11;
  iVar5 = *(int *)(this + 0x138);
  if (iVar5 == 2) {
    cVar2 = AccessoryContent::IsUnlocked(param_1);
    plVar24 = *(long **)(this + 0xf8);
    uVar4 = 0;
    if (cVar2 == '\0') {
LAB_049535d0:
      uVar4 = 1;
    }
LAB_049533b0:
    (**(code **)(*plVar24 + 0x188))(plVar24,uVar4);
  }
  else if (iVar5 == 1) {
    if (*(long *)(this + 0xf8) != 0) {
      (**(code **)(*(long *)this + 0x68))(this);
      (**(code **)(*(long *)gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0xf8));
      *(undefined8 *)(this + 0xf8) = 0;
    }
    iVar5 = FUN_04950334(0x2f3);
    iVar6 = FUN_04950334(0x1bc);
    Sexy::Insets::Insets
              ((Insets *)&local_b8,(*(int *)(this + 0x50) - iVar5) / 2,
               (*(int *)(this + 0x54) - iVar6) / 2,iVar5,iVar6);
    pPVar12 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
    uVar4 = *(undefined4 *)(this + 0x198);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_40,(RtWeakPtrBase *)(this + 0x1f0));
    iVar5 = PlantAccessoryMgr::CanAccessoryBindTargetPlants(pPVar12,uVar4,asStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
    if (iVar5 == 0) {
      FUN_05478178((PVZ2UIImage *)awStack_78,L"[BUTTON_BIND]",auStack_c0);
      Sexy::Color::Color((Color *)asStack_40,1);
      pPVar16 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton
                (pPVar16,0x65,(ButtonListener *)(this + 0xe0),awStack_78,(Color *)asStack_40);
      *(PVZ2UIButton **)(this + 0xf8) = pPVar16;
      FUN_05476c50((PVZ2UIImage *)awStack_78);
      nop();
      pPVar16 = *(PVZ2UIButton **)(this + 0xf8);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b71ca0,3);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b70f80,3);
      PVZ2UIButton::SetDialogStates(pPVar16,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
      iVar5 = FUN_04950334(0x78);
      pSVar17 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71ca0);
      iVar6 = SalesProgressBar::GetCurrentLevel(pSVar17);
      plVar24 = *(long **)(this + 0xf8);
      pcVar25 = *(code **)(*plVar24 + 0x198);
      uVar4 = FUN_04950334(0x78);
      pSVar17 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71ca0);
      uVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
      (*pcVar25)(plVar24,local_b8 + (local_b0 - iVar5) / 2,(local_b4 + local_ac) - iVar6 / 2,uVar4,
                 uVar7);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
      (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),0);
    }
    else {
      if (iVar5 == 2) {
        FUN_05478178((PVZ2UIImage *)awStack_78,L"[BUTTON_SWITCH]",auStack_c0);
        Sexy::Color::Color((Color *)asStack_40,1);
        pPVar16 = ::operator_new(0x300);
        iVar5 = 0x69;
      }
      else {
        if (iVar5 != 4) {
          if (iVar5 == 3) {
            FUN_05478178((PVZ2UIImage *)awStack_78,L"[BUTTON_NOT_ENOUGH_LEVEL]",auStack_c0);
            Sexy::Color::Color((Color *)asStack_40,1);
            pPVar16 = ::operator_new(0x300);
            PVZ2UIButton::PVZ2UIButton
                      (pPVar16,0x6a,(ButtonListener *)(this + 0xe0),awStack_78,(Color *)asStack_40);
            *(PVZ2UIButton **)(this + 0xf8) = pPVar16;
            FUN_05476c50((PVZ2UIImage *)awStack_78);
            nop();
            pPVar16 = *(PVZ2UIButton **)(this + 0xf8);
            PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b71ca0,3);
            PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b70f80,3);
          }
          else {
            if (iVar5 != 5) goto LAB_049533c4;
            FUN_05478178((PVZ2UIImage *)awStack_78,L"[BUTTON_UNUSEBLE]",auStack_c0);
            Sexy::Color::Color((Color *)asStack_40,1);
            pPVar16 = ::operator_new(0x300);
            PVZ2UIButton::PVZ2UIButton
                      (pPVar16,0x6b,(ButtonListener *)(this + 0xe0),awStack_78,(Color *)asStack_40);
            *(PVZ2UIButton **)(this + 0xf8) = pPVar16;
            FUN_05476c50((PVZ2UIImage *)awStack_78);
            nop();
            pPVar16 = *(PVZ2UIButton **)(this + 0xf8);
            PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b71ca0,3);
            PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b70f80,3);
          }
          PVZ2UIButton::SetDialogStates(pPVar16,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40)
          ;
          iVar5 = FUN_04950334(0x78);
          pSVar17 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71ca0);
          iVar6 = SalesProgressBar::GetCurrentLevel(pSVar17);
          plVar24 = *(long **)(this + 0xf8);
          pcVar25 = *(code **)(*plVar24 + 0x198);
          uVar4 = FUN_04950334(0x78);
          pSVar17 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71ca0);
          uVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
          (*pcVar25)(plVar24,local_b8 + (local_b0 - iVar5) / 2,(local_b4 + local_ac) - iVar6 / 2,
                     uVar4,uVar7);
          (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
          (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),1);
          goto LAB_049533c4;
        }
        FUN_05478178((PVZ2UIImage *)awStack_78,L"[BUTTON_UNBIND]",auStack_c0);
        Sexy::Color::Color((Color *)asStack_40,1);
        pPVar16 = ::operator_new(0x300);
        iVar5 = 0x68;
      }
      PVZ2UIButton::PVZ2UIButton
                (pPVar16,iVar5,(ButtonListener *)(this + 0xe0),awStack_78,(Color *)asStack_40);
      *(PVZ2UIButton **)(this + 0xf8) = pPVar16;
      FUN_05476c50((PVZ2UIImage *)awStack_78);
      nop();
      pPVar16 = *(PVZ2UIButton **)(this + 0xf8);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b71ca0,3);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b70f80,3);
      PVZ2UIButton::SetDialogStates(pPVar16,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
      iVar5 = FUN_04950334(0x78);
      pSVar17 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71ca0);
      iVar6 = SalesProgressBar::GetCurrentLevel(pSVar17);
      plVar24 = *(long **)(this + 0xf8);
      pcVar25 = *(code **)(*plVar24 + 0x198);
      uVar4 = FUN_04950334(0x78);
      pSVar17 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71ca0);
      uVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
      (*pcVar25)(plVar24,local_b8 + (local_b0 - iVar5) / 2,(local_b4 + local_ac) - iVar6 / 2,uVar4,
                 uVar7);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
      (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),0);
    }
  }
  else if (iVar5 == 3) {
    pPVar13 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar18 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar13);
    psVar19 = (string *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
    Lua::CUIDialog::GetLayoutName();
    PlantAccessoryMgr::GetAccessoryByType(psVar19);
    std::string::~string(asStack_40);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)awStack_78);
    if ((bVar3) &&
       (lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)awStack_78),
       *(int *)(lVar14 + 0x80) == 5)) {
      iVar5 = AccessoryContent::GetBindedType(param_1);
      if (iVar5 != 0) goto LAB_04953e44;
      iVar5 = PlayerInfo::GetNumGems(pPVar18,false);
      if (iVar5 < 10) goto LAB_04953c6c;
      iVar5 = Sexy::PageControl::GetCurrentPage((PageControl *)param_1);
      plVar24 = *(long **)(this + 0x110);
      if (iVar5 < 1) goto LAB_04953c70;
      (**(code **)(*plVar24 + 0x188))(plVar24,0);
LAB_04953c84:
      (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),0);
    }
    else {
      iVar5 = AccessoryContent::GetBindedType(param_1);
      if (iVar5 == 0) {
LAB_04953c6c:
        plVar24 = *(long **)(this + 0x110);
LAB_04953c70:
        (**(code **)(*plVar24 + 0x188))(plVar24,1);
        goto LAB_04953c84;
      }
LAB_04953e44:
      (**(code **)(**(long **)(this + 0x110) + 0x188))(*(long **)(this + 0x110),1);
      (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),1);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)awStack_78);
  }
  else {
    if (iVar5 != 4) {
      iVar5 = AccessoryContent::GetBindedType(param_1);
      plVar24 = *(long **)(this + 0xf8);
      uVar4 = 0;
      if (iVar5 != 0) goto LAB_049535d0;
      goto LAB_049533b0;
    }
    pPVar13 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar18 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar13);
    psVar19 = (string *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
    Lua::CUIDialog::GetLayoutName();
    PlantAccessoryMgr::GetAccessoryByType(psVar19);
    std::string::~string(asStack_40);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_b8);
    if ((bVar3) &&
       (lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_b8),
       *(int *)(lVar14 + 0x80) == 5)) {
      iVar5 = AccessoryContent::GetId(param_1);
      uVar8 = PlayerInfo::GetPlantAccessoryLevelById(pPVar18,(long)iVar5);
      uVar20 = (ulong)(int)uVar8;
      if (4 < uVar8) goto LAB_04953998;
      lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_b8);
      uVar21 = FUN_0494fc50(*(undefined8 *)(lVar14 + 0x90),*(undefined8 *)(lVar14 + 0x98));
      if (uVar21 <= uVar20) goto LAB_04953998;
      iVar5 = 0;
      bVar3 = true;
      uVar21 = 0;
      while( true ) {
        lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_b8);
        lVar14 = FUN_0494fc64(*(undefined8 *)(lVar14 + 0x90),uVar20);
        uVar23 = FUN_0494fcc4(*(undefined8 *)(lVar14 + 8),*(undefined8 *)(lVar14 + 0x10));
        if (uVar23 <= uVar21) break;
        lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_b8);
        lVar14 = FUN_0494fc64(*(undefined8 *)(lVar14 + 0x90),uVar20);
        uVar23 = uVar21 + 1;
        piVar22 = (int *)FUN_0494fcd0(*(undefined8 *)(lVar14 + 8),uVar21);
        iVar6 = piVar22[1];
        if (*piVar22 == 0x5a37) {
          iVar5 = iVar6;
        }
        iVar9 = ProfileGetItemAmount(*piVar22);
        uVar21 = uVar23;
        if (iVar9 < iVar6) {
          bVar3 = false;
        }
      }
      pwVar1 = (wstring *)(this + 0x1d8);
      TodStringTranslate(L"[RECONSTRUCTION_COMPONENT_NUM]");
      TodReplaceNumberString(awStack_78,L"{NUMBER2}",iVar5);
      FUN_054766c8(pwVar1,asStack_40);
      FUN_05476c50(asStack_40);
      FUN_05476c50(awStack_78);
      iVar5 = PlayerInfo::GetMaterialNum(pPVar18,0x5a37);
      TodReplaceNumberString(pwVar1,L"{NUMBER1}",iVar5);
      FUN_054766c8(pwVar1,asStack_40);
      FUN_05476c50(asStack_40);
      if (!bVar3) goto LAB_04953998;
      (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),0);
    }
    else {
LAB_04953998:
      (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),1);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_b8);
  }
LAB_049533c4:
  Sexy::ToWString((string *)(this + 0x160));
  TodStringTranslate(awStack_78);
  FUN_054766c8(this + 0x1a0,asStack_40);
  FUN_05476c50(asStack_40);
  FUN_05476c50(awStack_78);
  Sexy::ToWString((string *)(this + 0x168));
  TodStringTranslate(awStack_78);
  FUN_054766c8(this + 0x1a8,asStack_40);
  FUN_05476c50(asStack_40);
  FUN_05476c50(awStack_78);
  if (*(int *)(this + 0x178) == 5) {
    psVar19 = (string *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
    Lua::CUIDialog::GetLayoutName();
    PlantAccessoryMgr::GetAccessoryByType(psVar19);
    std::string::~string(asStack_40);
    iVar5 = Sexy::PageControl::GetCurrentPage((PageControl *)param_1);
    if (0 < iVar5) {
      lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_b8);
      uVar20 = FUN_0494fc50(*(undefined8 *)(lVar14 + 0x90),*(undefined8 *)(lVar14 + 0x98));
      if ((ulong)(long)iVar5 <= uVar20) {
        lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_b8);
        lVar14 = FUN_0494fc64(*(undefined8 *)(lVar14 + 0x90),(long)(iVar5 + -1));
        Sexy::ToWString((string *)(lVar14 + 0x20));
        TodStringTranslate(awStack_78);
        FUN_054766c8(this + 0x1a8,asStack_40);
        FUN_05476c50(asStack_40);
        FUN_05476c50(awStack_78);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_b8);
  }
  pPVar12 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  iVar5 = PlantAccessoryMgr::GetOwnedPieces(pPVar12,(string *)(this + 400));
  TodStringTranslate(L"[OWNED_PIECES]");
  TodReplaceNumberString(awStack_78,L"{PIECE_COUNT}",iVar5);
  FUN_054766c8(this + 0x1b0,asStack_40);
  FUN_05476c50(asStack_40);
  FUN_05476c50(awStack_78);
  TodStringTranslate(L"[REQUIRED_PIECES]");
  TodReplaceNumberString(awStack_78,L"{PIECE_COUNT}",*(int *)(this + 0x180));
  FUN_054766c8(this + 0x1b8,asStack_40);
  FUN_05476c50(asStack_40);
  FUN_05476c50(awStack_78);
  Sexy::ToWString((string *)(this + 0x158));
  TodStringTranslate(awStack_78);
  FUN_054766c8(this + 0x1c0,asStack_40);
  FUN_05476c50(asStack_40);
  FUN_05476c50(awStack_78);
  TodStringTranslate(L"[ACCESSORY_SOLD_TXT]");
  TodReplaceNumberString(awStack_78,L"{PRICE}",*(int *)(this + 0x188));
  FUN_054766c8(this + 0x1c8,asStack_40);
  FUN_05476c50(asStack_40);
  FUN_05476c50(awStack_78);
  switch(*(undefined4 *)(this + 0x178)) {
  default:
    uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b713f8);
    *(undefined8 *)(this + 0x1e8) = uVar11;
    break;
  case 1:
    uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71848);
    *(undefined8 *)(this + 0x1e8) = uVar11;
    break;
  case 2:
  case 4:
    uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71ab8);
    *(undefined8 *)(this + 0x1e8) = uVar11;
    pPVar13 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar14 = ProfileMgr::GetCurrentProfile(pPVar13);
    iVar5 = FUN_0494fbf4(*(undefined4 *)(lVar14 + 0x40));
    if (iVar5 != 0x1e) goto LAB_04953584;
    goto LAB_04953618;
  case 3:
    uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71038);
    *(undefined8 *)(this + 0x1e8) = uVar11;
    break;
  case 5:
    uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71b60);
    *(undefined8 *)(this + 0x1e8) = uVar11;
  }
  pPVar13 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar14 = ProfileMgr::GetCurrentProfile(pPVar13);
  iVar5 = FUN_0494fbf4(*(undefined4 *)(lVar14 + 0x40));
  if (iVar5 == 0x1e) {
LAB_04953618:
    Lua::CUIDialog::GetLayoutName();
    cVar2 = std::operator==(asStack_40,(string *)&DAT_06b711d0);
    std::string::~string(asStack_40);
    if (cVar2 != '\0') {
      LawnApp::KillGameMaskUI(gLawnApp);
      lVar14 = *(long *)(this + 0xf8);
      if ((lVar14 == 0) || (*(char *)(lVar14 + 0x6e) != '\0')) {
        pCVar15 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
        if (pCVar15 != (CrazyNPCManager *)0x0) {
          std::string::string((string *)&local_b8,"TUTORIAL_ACCESSORY1_INTRO");
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,onNarrationFinished);
          Sexy::Delegate0::Delegate0<PlantAccessoryUI,void(PlantAccessoryUI::*)()>
                    (aDStack_a8,asStack_40);
          std::string::string((string *)awStack_78,"");
          CrazyNPCManager::StartNarrativeID(pCVar15,(string *)&local_b8,aDStack_a8,awStack_78);
          std::string::~string((string *)awStack_78);
          nop();
          std::string::~string((string *)&local_b8);
          nop();
        }
      }
      else {
        std::string::string((string *)awStack_78,"");
        Sexy::Insets::Insets((Insets *)asStack_40);
        GameMaskUI::ShowMask(lVar14,2,awStack_78,asStack_40);
        std::string::~string((string *)awStack_78);
        nop();
      }
    }
  }
LAB_04953584:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAccessoryUI::OnConfirmSale() */

void __thiscall PlantAccessoryUI::OnConfirmSale(PlantAccessoryUI *this)

{
  PlantAccessoryMgr *this_00;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  if (*(int *)(this + 0x198) != -1) {
    this_00 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
    PlantAccessoryMgr::SoldTargetAccessory(this_00,(string *)(this + 400),*(int *)(this + 0x198));
    return;
  }
  return;
}


/* PlantAccessoryUI::OnConfirmReset() */

void __thiscall PlantAccessoryUI::OnConfirmReset(PlantAccessoryUI *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  PlantAccessoryMgr *this_02;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if ((this_01 != (PlayerInfo *)0x0) &&
     (iVar1 = PlayerInfo::GetPlantAccessoryLevelById(this_01,(long)*(int *)(this + 0x198)),
     iVar1 < 1)) {
    return;
  }
  this_02 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  PlantAccessoryMgr::ResetTargetAccessory(this_02,(string *)(this + 400),*(int *)(this + 0x198));
  return;
}


/* PlantAccessoryUI::OnConfirmSteady() */

void __thiscall PlantAccessoryUI::OnConfirmSteady(PlantAccessoryUI *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  PlantAccessoryMgr *this_02;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if ((this_01 != (PlayerInfo *)0x0) &&
     (iVar1 = PlayerInfo::GetPlantAccessoryLevelById(this_01,(long)*(int *)(this + 0x198)),
     5 < iVar1)) {
    return;
  }
  this_02 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  PlantAccessoryMgr::SteadyTargetAccessory(this_02,(string *)(this + 400),*(int *)(this + 0x198));
  return;
}


/* PlantAccessoryUI::OnSoldTargetAccessory(int) */

void PlantAccessoryUI::OnSoldTargetAccessory(int param_1)

{
  PlantAccessoryMgr *this;
  
  this = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  PlantAccessoryMgr::OnSoldTargetAccessory
            (this,(string *)((ulong)(uint)param_1 + 400),*(int *)((ulong)(uint)param_1 + 0x198));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryUI::~PlantAccessoryUI() */

void __thiscall PlantAccessoryUI::~PlantAccessoryUI(PlantAccessoryUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06914d80;
  *(undefined ***)(this + 0xd8) = &PTR__PlantAccessoryUI_069150b8;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06915100;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_SeedPackets");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_SeedPackets_2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1f0));
  FUN_05476c50(this + 0x1d8);
  FUN_05476c50(this + 0x1d0);
  FUN_05476c50(this + 0x1c8);
  FUN_05476c50(this + 0x1c0);
  FUN_05476c50(this + 0x1b8);
  FUN_05476c50(this + 0x1b0);
  FUN_05476c50(this + 0x1a8);
  FUN_05476c50(this + 0x1a0);
  std::string::~string((string *)(this + 400));
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)(this + 0x158));
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x120));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PlantAccessoryUI::~PlantAccessoryUI() */

void __thiscall PlantAccessoryUI::~PlantAccessoryUI(PlantAccessoryUI *this)

{
  ~PlantAccessoryUI(this + -0xd8);
  return;
}


/* PlantAccessoryUI::~PlantAccessoryUI() */

void __thiscall PlantAccessoryUI::~PlantAccessoryUI(PlantAccessoryUI *this)

{
  ~PlantAccessoryUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAccessoryUI::~PlantAccessoryUI() */

void __thiscall PlantAccessoryUI::~PlantAccessoryUI(PlantAccessoryUI *this)

{
  ~PlantAccessoryUI(this + -0xd8);
  return;
}


/* PlantAccessoryUI::ShowSteadySuccessSuperPacket(int) */

void __thiscall PlantAccessoryUI::ShowSteadySuccessSuperPacket(PlantAccessoryUI *this,int param_1)

{
  UISuperAccessoryLevelUp *this_00;
  
  if (*(long *)(this + 0x148) == 0) {
    this_00 = ::operator_new(0xf8);
    UISuperAccessoryLevelUp::UISuperAccessoryLevelUp(this_00);
    *(UISuperAccessoryLevelUp **)(this + 0x148) = this_00;
    UISuperAccessoryLevelUp::init(this_00,param_1);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x148));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x148));
  }
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal
            (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x148));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x148));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryUI::OnSteadySuccess(int) */

void __thiscall PlantAccessoryUI::OnSteadySuccess(PlantAccessoryUI *this,int param_1)

{
  wstring *pwVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  PlantAccessoryMgr *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  vector *pvVar6;
  ulong uVar7;
  PlantAccessoryUI *this_03;
  PlantAccessoryInfo *pPVar8;
  string *psVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  RtWeakPtr aRStack_58 [8];
  wstring awStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  PlantAccessoryInfo aPStack_28 [32];
  long local_8;
  
  uVar14 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  this_00 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  PlantAccessoryMgr::OnSteadyTargetAccessory(this_00,(string *)(this + 400),*(int *)(this + 0x198));
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  pvVar6 = (vector *)PlayerInfo::GetPlantAccessoryInfos(this_02);
  std::vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>>::vector
            ((vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>> *)&local_40,pvVar6);
  uVar7 = FUN_0494fc70(local_40,local_38);
  if (uVar14 < uVar7) {
    pPVar8 = (PlantAccessoryInfo *)FUN_0494fc14(local_40,uVar14);
    PlantAccessoryInfo::PlantAccessoryInfo(aPStack_28,pPVar8);
    psVar9 = (string *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
    PlantAccessoryMgr::GetAccessoryByType(psVar9);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_58);
    if ((bVar2) &&
       (lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58),
       *(int *)(lVar10 + 0x80) == 5)) {
      uVar3 = PlayerInfo::GetPlantAccessoryLevelById(this_02,uVar14);
      uVar7 = (ulong)(int)uVar3;
      if (uVar3 < 5) {
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
        uVar14 = FUN_0494fc50(*(undefined8 *)(lVar10 + 0x90),*(undefined8 *)(lVar10 + 0x98));
        if (uVar7 < uVar14) {
          iVar13 = 0;
          bVar2 = true;
          uVar14 = 0;
          while( true ) {
            lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
            lVar10 = FUN_0494fc64(*(undefined8 *)(lVar10 + 0x90),uVar7);
            uVar12 = FUN_0494fcc4(*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
            if (uVar12 <= uVar14) break;
            lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
            lVar10 = FUN_0494fc64(*(undefined8 *)(lVar10 + 0x90),uVar7);
            uVar12 = uVar14 + 1;
            piVar11 = (int *)FUN_0494fcd0(*(undefined8 *)(lVar10 + 8),uVar14);
            iVar5 = piVar11[1];
            if (*piVar11 == 0x5a37) {
              iVar13 = iVar5;
            }
            iVar4 = ProfileGetItemAmount(*piVar11);
            uVar14 = uVar12;
            if (iVar4 < iVar5) {
              bVar2 = false;
            }
          }
          iVar5 = PlayerInfo::GetMaterialNum(this_02,0x5a37);
          pwVar1 = (wstring *)(this + 0x1d8);
          TodStringTranslate(L"[RECONSTRUCTION_COMPONENT_NUM]");
          TodReplaceNumberString(awStack_50,L"{NUMBER2}",iVar13);
          FUN_054766c8(pwVar1,auStack_48);
          FUN_05476c50(auStack_48);
          FUN_05476c50(awStack_50);
          TodReplaceNumberString(pwVar1,L"{NUMBER1}",iVar5);
          FUN_054766c8(pwVar1,auStack_48);
          FUN_05476c50(auStack_48);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
          PakRecord::~PakRecord((PakRecord *)aPStack_28);
          if (bVar2) {
            (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),0);
            goto LAB_04955f08;
          }
          goto LAB_04955ef0;
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    PakRecord::~PakRecord((PakRecord *)aPStack_28);
  }
LAB_04955ef0:
  (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),1);
LAB_04955f08:
  this_03 = (PlantAccessoryUI *)LawnApp::getPlantAccessoryUI(gLawnApp);
  if (this_03 != (PlantAccessoryUI *)0x0) {
    ShowSteadySuccessSuperPacket(this_03,param_1);
  }
  std::vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>>::~vector
            ((vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>> *)&local_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantAccessoryUI::ShowAccessorySuperPacket() */

void __thiscall PlantAccessoryUI::ShowAccessorySuperPacket(PlantAccessoryUI *this)

{
  AccessorySuperPacket *this_00;
  
  if (*(long *)(this + 0x140) == 0) {
    this_00 = ::operator_new(0xe8);
    AccessorySuperPacket::AccessorySuperPacket(this_00);
    *(AccessorySuperPacket **)(this + 0x140) = this_00;
    AccessorySuperPacket::init(this_00);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x140));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x140));
  }
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal
            (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x140));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x140));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryUI::createPanel(PlantAccessoryUITabPanel) */

void __thiscall PlantAccessoryUI::createPanel(PlantAccessoryUI *this,int param_2)

{
  wstring *pwVar1;
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
  LotteryResultProgressBar *pLVar12;
  PVZ2UIScrollingWidget *this_00;
  AccessoryScrollPanel *this_01;
  PVZ2UIButton *pPVar13;
  SalesProgressBar *pSVar14;
  AccessorySteadyPanel *this_02;
  ProfileMgr *this_03;
  PlayerInfo *this_04;
  string *extraout_x1;
  code *pcVar15;
  long lVar16;
  long *plVar17;
  ButtonListener *pBVar18;
  undefined1 auStack_c0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b8 [8];
  wstring awStack_b0 [8];
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  Insets aIStack_88 [16];
  wstring awStack_78 [56];
  string asStack_40 [56];
  code *local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar15 = ___stack_chk_guard;
  if (*(long *)(this + 0xe8) != 0) {
    (**(code **)(*(long *)this + 0x68))();
    pcVar15 = *(code **)(*gLawnApp + 0x150);
    (*pcVar15)(gLawnApp,*(undefined8 *)(this + 0xe8));
    *(undefined8 *)(this + 0xe8) = 0;
  }
  pwVar1 = (wstring *)(this + 0x1d0);
  std::string::append((string *)(this + 400),"",(size_t)pcVar15);
  *(undefined4 *)(this + 0x198) = 0xffffffff;
  FUN_05476f98(this + 0x1a0);
  FUN_05476f98(this + 0x1a8);
  FUN_05476f98(this + 0x1b8);
  FUN_05476f98(this + 0x1c8);
  FUN_05476f98(this + 0x1c0);
  FUN_05476f98(pwVar1);
  Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  iVar2 = PlantAccessoryMgr::GetNumOwnedAccessories();
  TodStringTranslate(L"[NUM_OWNED_ACCESSORY]");
  FUN_054766c8(pwVar1,asStack_40);
  FUN_05476c50(asStack_40);
  TodReplaceNumberString(pwVar1,L"{OWNED_COUNT}",iVar2);
  FUN_054766c8(pwVar1,asStack_40);
  FUN_05476c50(asStack_40);
  TodReplaceNumberString(pwVar1,L"{TOTAL_COUNT}",*(int *)(this + 0x200));
  FUN_054766c8(pwVar1,asStack_40);
  FUN_05476c50(asStack_40);
  if (*(long *)(this + 0x1e8) != 0) {
    *(undefined8 *)(this + 0x1e8) = 0;
  }
  if (*(long *)(this + 0xf8) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0xf8));
    *(undefined8 *)(this + 0xf8) = 0;
  }
  if (*(long *)(this + 0x100) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x100));
    *(undefined8 *)(this + 0x100) = 0;
  }
  if (*(long *)(this + 0x108) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x108));
    *(undefined8 *)(this + 0x108) = 0;
  }
  if (*(long *)(this + 0x110) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x110));
    *(undefined8 *)(this + 0x110) = 0;
  }
  if (*(long *)(this + 0x118) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x118));
    *(undefined8 *)(this + 0x118) = 0;
  }
  if (*(long *)(this + 0x1f8) != 0) {
    *(undefined8 *)(this + 0x1f8) = 0;
  }
  iVar2 = FUN_04950334(0x2f3);
  iVar3 = FUN_04950334(0x1bc);
  Sexy::Insets::Insets
            ((Insets *)&local_a8,(*(int *)(this + 0x50) - iVar2) / 2,
             (*(int *)(this + 0x54) - iVar3) / 2,iVar2,iVar3);
  iVar2 = local_a8;
  iVar4 = FUN_04950334(0x34);
  iVar3 = local_a4;
  iVar5 = FUN_04950334(0x50);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71608);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  iVar7 = FUN_04950334(4);
  iVar8 = FUN_04950334(5);
  iVar9 = FUN_04950334(200);
  Sexy::Insets::Insets
            ((Insets *)&local_98,iVar2 + iVar4,iVar3 + iVar5,iVar7 * 5 + iVar6 * 6 + iVar8 * 2,iVar9
            );
  if (param_2 == 4) {
    iVar2 = FUN_04950334(0x1e);
    local_90 = local_90 + iVar2;
    iVar2 = FUN_04950334(0x14);
    local_8c = local_8c + iVar2;
  }
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xd8));
  lVar16 = *(long *)this_00;
  *(PVZ2UIScrollingWidget **)(this + 0xe8) = this_00;
  (**(code **)(lVar16 + 0x1a0))(this_00,(Insets *)&local_98);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0xe8),2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  Sexy::Insets::Insets(aIStack_88,local_98,local_94,local_90,local_8c);
  std::string::string(asStack_40,"PvZ2 Accessories");
  Magento::GetStore((Magento *)asStack_40,extraout_x1);
  std::string::~string(asStack_40);
  nop();
  iVar2 = local_a8;
  if (param_2 - 1U < 2) {
    iVar3 = FUN_04950334(0x210);
    iVar4 = FUN_04950334(0x98);
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71848);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71178);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    iVar7 = FUN_04950334(2);
    pSVar14 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71848);
    iVar8 = SalesProgressBar::GetCurrentLevel(pSVar14);
    iVar9 = FUN_04950334(0x23);
    FUN_05478178(awStack_78,L"[BUTTON_ACCESSORY_LINK]",awStack_b0);
    Sexy::Color::Color((Color *)asStack_40,1);
    pPVar13 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar13,0x6c,(ButtonListener *)(this + 0xe0),awStack_78,(Color *)asStack_40);
    *(PVZ2UIButton **)(this + 0x100) = pPVar13;
    FUN_05476c50(awStack_78);
    nop();
    plVar17 = *(long **)(this + 0x100);
    pcVar15 = *(code **)(*plVar17 + 0x198);
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71178);
    uVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    pSVar14 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71178);
    uVar11 = SalesProgressBar::GetCurrentLevel(pSVar14);
    (*pcVar15)(plVar17,((iVar5 + iVar2 + iVar3) - iVar6) - iVar7,(iVar8 + iVar4) - iVar9,uVar10,
               uVar11);
    pPVar13 = *(PVZ2UIButton **)(this + 0x100);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b71178,1);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b71178,1);
    PVZ2UIButton::SetDialogStates(pPVar13,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
    (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),0);
    if (param_2 == 1) {
      Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
      PlantAccessoryMgr::SortOwnedAccessories();
      Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
      uVar10 = PlantAccessoryMgr::GetNumOwnedAccessories();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_40,(RtWeakPtrBase *)(this + 0x1f0));
      this_01 = ::operator_new(0x108);
      AccessoryScrollPanel::AccessoryScrollPanel(this_01,aIStack_88,uVar10,aRStack_b8,1,asStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
      (**(code **)(**(long **)(this + 0xe8) + 0x60))(*(long **)(this + 0xe8),this_01);
      FUN_05478178(awStack_78,L"[BUTTON_BIND]",awStack_b0);
      Sexy::Color::Color((Color *)asStack_40,1);
      pPVar13 = ::operator_new(0x300);
      iVar2 = 0x65;
    }
    else {
      if (param_2 != 2) goto LAB_0495866c;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_40,(RtWeakPtrBase *)(this + 0x1f0));
      this_01 = ::operator_new(0x108);
      AccessoryScrollPanel::AccessoryScrollPanel(this_01,aIStack_88,0,aRStack_b8,2,asStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
      (**(code **)(**(long **)(this + 0xe8) + 0x60))(*(long **)(this + 0xe8),this_01);
      FUN_05478178(awStack_78,L"[BUTTON_EXCHANGE]",awStack_b0);
      Sexy::Color::Color((Color *)asStack_40,1);
      pPVar13 = ::operator_new(0x300);
      iVar2 = 0x66;
    }
    PVZ2UIButton::PVZ2UIButton
              (pPVar13,iVar2,(ButtonListener *)(this + 0xe0),awStack_78,(Color *)asStack_40);
    *(PVZ2UIButton **)(this + 0xf8) = pPVar13;
    FUN_05476c50(awStack_78);
    nop();
    pPVar13 = *(PVZ2UIButton **)(this + 0xf8);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b71ca0,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b70f80,3);
    PVZ2UIButton::SetDialogStates(pPVar13,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
    iVar2 = FUN_04950334(0x93);
    iVar2 = local_a8 + (local_a0 - iVar2) / 2;
    pSVar14 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71ca0);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar14);
    iVar3 = (local_a4 + local_9c) - iVar3 / 2;
  }
  else {
LAB_0495866c:
    pBVar18 = (ButtonListener *)(this + 0xe0);
    if (param_2 == 4) {
      this_02 = ::operator_new(0xf8);
      AccessorySteadyPanel::AccessorySteadyPanel(this_02);
      (**(code **)(*(long *)this_02 + 0x1a0))(this_02,aIStack_88);
      (**(code **)(**(long **)(this + 0xe8) + 0x60))(*(long **)(this + 0xe8),this_02);
      this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_04 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_03);
      iVar3 = PlayerInfo::GetMaterialNum(this_04,0x5a37);
      TodStringTranslate(L"[RECONSTRUCTION_COMPONENT_NUM]");
      TodReplaceNumberString((wstring *)asStack_40,L"{NUMBER2}",0);
      FUN_05476c50(asStack_40);
      TodReplaceNumberString(awStack_b0,L"{NUMBER1}",iVar3);
      FUN_054766c8(this + 0x1d8,asStack_40);
      FUN_05476c50(asStack_40);
      iVar2 = local_a8;
      uVar10 = 0x3f800000;
      if (iVar3 < 1) {
        uVar10 = 0;
      }
      *(undefined4 *)(this + 0x1e0) = uVar10;
      iVar4 = FUN_04950334(0x210);
      this_01 = (AccessoryScrollPanel *)0x0;
      iVar3 = FUN_04950334(0x98);
      pSVar14 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71848);
      iVar5 = SalesProgressBar::GetCurrentLevel(pSVar14);
      iVar6 = FUN_04950334(0x37);
      iVar3 = iVar5 + iVar3 + iVar6 * -2;
      FUN_05478178(awStack_78,&DAT_056f11a8,auStack_c0);
      Sexy::Color::Color((Color *)asStack_40,1);
      pPVar13 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton(pPVar13,0x6d,pBVar18,awStack_78,(Color *)asStack_40);
      *(PVZ2UIButton **)(this + 0x108) = pPVar13;
      FUN_05476c50(awStack_78);
      nop();
      pPVar13 = *(PVZ2UIButton **)(this + 0x108);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b71870,3);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b71870,3);
      PVZ2UIButton::SetDialogStates(pPVar13,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
      plVar17 = *(long **)(this + 0x108);
      iVar5 = FUN_04950334(0x93);
      iVar6 = FUN_04950334(0xd);
      uVar10 = FUN_04950334(0x28);
      uVar11 = FUN_04950334(0x2a);
      (**(code **)(*plVar17 + 0x198))(plVar17,iVar5 + iVar2 + iVar4,iVar6 + iVar3,uVar10,uVar11);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x108));
      FUN_05478178(awStack_78,&DAT_056f11a8,auStack_c0);
      Sexy::Color::Color((Color *)asStack_40,1);
      pPVar13 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton(pPVar13,0x74,pBVar18,awStack_78,(Color *)asStack_40);
      *(PVZ2UIButton **)(this + 0x118) = pPVar13;
      FUN_05476c50(awStack_78);
      nop();
      pPVar13 = *(PVZ2UIButton **)(this + 0x118);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b71750,2);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b71750,2);
      PVZ2UIButton::SetDialogStates(pPVar13,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
      plVar17 = *(long **)(this + 0x118);
      pcVar15 = *(code **)(*plVar17 + 0x198);
      iVar5 = FUN_04950334(0xa0);
      iVar6 = FUN_04950334(0xaa);
      pSVar14 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71750);
      uVar10 = SalesProgressBar::GetCurrentLevel(pSVar14);
      pSVar14 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71750);
      uVar11 = SalesProgressBar::GetCurrentLevel(pSVar14);
      (*pcVar15)(plVar17,iVar5 + iVar2 + iVar4,iVar6 + iVar3,uVar10,uVar11);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x118));
      FUN_05478178(awStack_78,L"[BUTTON_STEADY]",auStack_c0);
      Sexy::Color::Color((Color *)asStack_40,1);
      pPVar13 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton(pPVar13,0x6f,pBVar18,awStack_78,(Color *)asStack_40);
      *(PVZ2UIButton **)(this + 0xf8) = pPVar13;
      FUN_05476c50(awStack_78);
      nop();
      pPVar13 = *(PVZ2UIButton **)(this + 0xf8);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b71a90,3);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b71200,3);
      PVZ2UIButton::SetDialogStates(pPVar13,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
      FUN_05476c50(awStack_b0);
      iVar2 = FUN_04950334(0x93);
      iVar2 = local_a8 + (local_a0 - iVar2) / 2;
      pSVar14 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71ca0);
      iVar4 = SalesProgressBar::GetCurrentLevel(pSVar14);
      iVar3 = FUN_04950334(0x32);
      iVar3 = ((local_a4 + local_9c) - iVar4 / 2) - iVar3;
      iVar4 = FUN_04950334(0x93);
      goto LAB_04958878;
    }
    Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
    PlantAccessoryMgr::SortOwnedAccessories();
    Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
    uVar10 = PlantAccessoryMgr::GetNumOwnedAccessories();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_40,(RtWeakPtrBase *)(this + 0x1f0));
    this_01 = ::operator_new(0x108);
    AccessoryScrollPanel::AccessoryScrollPanel
              (this_01,aIStack_88,uVar10,aRStack_b8,param_2,asStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
    (**(code **)(**(long **)(this + 0xe8) + 0x60))(*(long **)(this + 0xe8),this_01);
    FUN_05478178(awStack_78,L"[BUTTON_SALE]",awStack_b0);
    Sexy::Color::Color((Color *)asStack_40,1);
    pPVar13 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar13,0x67,pBVar18,awStack_78,(Color *)asStack_40);
    *(PVZ2UIButton **)(this + 0xf8) = pPVar13;
    FUN_05476c50(awStack_78);
    nop();
    pPVar13 = *(PVZ2UIButton **)(this + 0xf8);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b71ca0,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b70f80,3);
    PVZ2UIButton::SetDialogStates(pPVar13,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
    FUN_05478178(awStack_78,L"[BUTTON_RESET]",awStack_b0);
    Sexy::Color::Color((Color *)asStack_40,1);
    pPVar13 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar13,0x6e,pBVar18,awStack_78,(Color *)asStack_40);
    *(PVZ2UIButton **)(this + 0x110) = pPVar13;
    FUN_05476c50(awStack_78);
    nop();
    pPVar13 = *(PVZ2UIButton **)(this + 0x110);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b71ca0,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b70f80,3);
    PVZ2UIButton::SetDialogStates(pPVar13,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
    iVar5 = local_a0;
    iVar6 = local_a8;
    iVar7 = FUN_04950334(0x93);
    iVar2 = iVar6 + (iVar5 - iVar7) / 2;
    pSVar14 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71ca0);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar14);
    iVar3 = (local_a4 + local_9c) - iVar3 / 2;
    if (param_2 == 3) {
      iVar2 = local_a0 + 3;
      if (-1 < local_a0) {
        iVar2 = local_a0;
      }
      iVar4 = FUN_04950334(0x93);
      plVar17 = *(long **)(this + 0x110);
      iVar2 = (local_a8 + (iVar2 >> 2)) - iVar4 / 2;
      if (plVar17 != (long *)0x0) {
        iVar5 = iVar5 * 3;
        pcVar15 = *(code **)(*plVar17 + 0x198);
        pSVar14 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71ca0);
        uVar10 = SalesProgressBar::GetCurrentLevel(pSVar14);
        iVar8 = iVar5 + 3;
        if (-1 < iVar5) {
          iVar8 = iVar5;
        }
        (*pcVar15)(plVar17,(iVar6 + (iVar8 >> 2)) - iVar7 / 2,iVar3,iVar4,uVar10);
        (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x110));
        (**(code **)(**(long **)(this + 0x110) + 0x188))(*(long **)(this + 0x110),1);
        iVar4 = FUN_04950334(0x93);
      }
      goto LAB_04958878;
    }
  }
  iVar4 = FUN_04950334(0x93);
LAB_04958878:
  plVar17 = *(long **)(this + 0xf8);
  pcVar15 = *(code **)(*plVar17 + 0x198);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71ca0);
  uVar10 = SalesProgressBar::GetCurrentLevel(pSVar14);
  (*pcVar15)(plVar17,iVar2,iVar3,iVar4,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
  (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),1);
  *(int *)(this + 0x138) = param_2;
  if (this_01 != (AccessoryScrollPanel *)0x0) {
    AccessoryScrollPanel::SelectDefaultContent(this_01);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantAccessoryUI::ToPanel(int) */

void __thiscall PlantAccessoryUI::ToPanel(PlantAccessoryUI *this,int param_1)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  undefined8 *puVar4;
  PVZ2UIButton *this_00;
  undefined8 uVar5;
  
  createPanel();
  iVar1 = param_1 + -1;
  if (-1 < iVar1) {
    uVar5 = *(undefined8 *)(this + 0x120);
    uVar3 = FUN_0494fc9c(uVar5,*(undefined8 *)(this + 0x128));
    if ((ulong)(long)iVar1 < uVar3) {
      puVar4 = (undefined8 *)FUN_0494fca8(uVar5,(long)iVar1);
      this_00 = (PVZ2UIButton *)*puVar4;
      cVar2 = FUN_0494fbf0(this_00[0x1a8]);
      if (cVar2 == '\0') {
        PVZ2UIButton::SetRadioButtonSelected(this_00);
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryUI::TriggerTutorial() */

void __thiscall PlantAccessoryUI::TriggerTutorial(PlantAccessoryUI *this)

{
  undefined *puVar1;
  int iVar2;
  ProfileMgr *this_00;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = FUN_0494fbf4(*(undefined4 *)(lVar3 + 0x40));
  if (iVar2 == 0x1e) {
    ToPanel(this,2);
    puVar1 = gMessageRouter;
    FUN_05475d88(asStack_10,&DAT_06b711d0);
    MessageRouter::Post<std::string_const&,std::string>
              ((MessageRouter *)puVar1,Message::NotifyTutorialSelectContent,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAccessoryUI::RecreateCurrentPanel() */

void __thiscall PlantAccessoryUI::RecreateCurrentPanel(PlantAccessoryUI *this)

{
  createPanel(this,*(undefined4 *)(this + 0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryUI::OnAccessorySaleComplete() */

void __thiscall PlantAccessoryUI::OnAccessorySaleComplete(PlantAccessoryUI *this)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[SALE_SUCCESS_MESSAGE]");
  TodReplaceNumberString(awStack_50,L"{GOLD_COUNT}",*(int *)(this + 0x188));
  FUN_05476c50(awStack_50);
  this_00 = gLawnApp;
  FUN_05478178(awStack_50,L"[SALE_SUCCESS_TITLE]",auStack_58);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_50,awStack_60);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(auStack_58,L"[BUTTON_OK]",auStack_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCloseDialog);
  Sexy::Delegate0::Delegate0<PlantAccessoryUI,void(PlantAccessoryUI::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  RecreateCurrentPanel(this);
  FUN_05476c50(awStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryUI::OnResetSuccess(int) */

void PlantAccessoryUI::OnResetSuccess(int param_1)

{
  LawnApp *this;
  ReceivedDataCallback *this_00;
  PlantAccessoryMgr *this_01;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = (ReceivedDataCallback *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  this_01 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  PlantAccessoryMgr::OnSteadyTargetAccessory
            (this_01,(string *)(this_00 + 400),*(int *)(this_00 + 0x198));
  this = gLawnApp;
  FUN_05478178(awStack_50,L"[RESET_SUCCESS_TITLE]",auStack_60);
  TodStringTranslate(L"[RESET_SUCCESS_MESSAGE]");
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_50,awStack_58);
  FUN_05476c50(awStack_58);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (this_00,OnCloseDialog);
  Sexy::Delegate0::Delegate0<PlantAccessoryUI,void(PlantAccessoryUI::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  RecreateCurrentPanel((PlantAccessoryUI *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryUI::OnExchangeComplete(bool) */

void PlantAccessoryUI::OnExchangeComplete(bool param_1)

{
  LawnApp *pLVar1;
  int iVar2;
  PlantAccessoryUI *this;
  ProfileMgr *this_00;
  long lVar3;
  DTimerManager *this_01;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  pLVar1 = gLawnApp;
  this = (PlantAccessoryUI *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  uVar4 = *(undefined8 *)(this + 0x1f8);
  uVar5 = *(undefined8 *)(this + 0x1e8);
  FUN_05477b24(auStack_40,this + 0x1c0);
  FUN_05477b24(auStack_38,this + 0x1a0);
  FUN_05477b24(asStack_30,this + 0x1a8);
  LawnApp::ShowAccessoryAwardDialog(pLVar1,uVar5,uVar4,auStack_40,auStack_38,asStack_30);
  FUN_05476c50(asStack_30);
  FUN_05476c50(auStack_38);
  FUN_05476c50(auStack_40);
  RecreateCurrentPanel(this);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = FUN_0494fbf4(*(undefined4 *)(lVar3 + 0x40));
  if (iVar2 == 0x1e) {
    LawnApp::KillGameMaskUI(gLawnApp);
    ToPanel(this,1);
    lVar3 = LawnApp::getPlantAccessoryUI(gLawnApp);
    *(undefined1 *)(lVar3 + 0x204) = 0;
    this_01 = (DTimerManager *)DTimerManager::getInstane();
    std::string::string(asStack_30,"AccessoryTutorial");
    FUN_049502e8(afStack_28);
    DTimerManager::addTimer(this_01,asStack_30,(function *)afStack_28,1.0,1);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    std::string::~string(asStack_30);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAccessoryUI::OnActionComplete() */

void __thiscall PlantAccessoryUI::OnActionComplete(PlantAccessoryUI *this)

{
  createPanel(this,*(undefined4 *)(this + 0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryUI::InitView() */

void __thiscall PlantAccessoryUI::InitView(PlantAccessoryUI *this)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  PVZ2UIButton *pPVar12;
  LotteryResultProgressBar *pLVar13;
  SalesProgressBar *pSVar14;
  ulong uVar15;
  CachedUIResourcePtr *pCVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  code *pcVar20;
  uint uVar21;
  ulong uVar22;
  PVZ2UIButton *local_c0;
  wstring awStack_b8 [8];
  int local_b0 [4];
  CachedUIResourcePtr<Sexy::Image> aCStack_a0 [40];
  wstring awStack_78 [56];
  vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> avStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar22 = 0;
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(gLawnApp + 0x71c),*(undefined4 *)(gLawnApp + 0x720),
             *(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728));
  FUN_05478178(awStack_78,&DAT_056f11a8,aCStack_a0);
  Sexy::Color::Color((Color *)avStack_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar12,100,(ButtonListener *)(this + 0xe0),awStack_78,(Color *)avStack_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar12;
  FUN_05476c50(awStack_78);
  nop();
  plVar19 = *(long **)(this + 0xf0);
  pcVar20 = *(code **)(*plVar19 + 0x198);
  iVar3 = FUN_04950334(0x2f3);
  iVar4 = FUN_04950334(0x28);
  iVar10 = *(int *)(this + 0x50);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71448);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  iVar6 = FUN_04950334(0x1bc);
  iVar11 = *(int *)(this + 0x54);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71448);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar14);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71448);
  uVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71448);
  uVar9 = SalesProgressBar::GetCurrentLevel(pSVar14);
  (*pcVar20)(plVar19,((iVar3 + iVar10) / 2 - iVar4) - iVar5,(iVar11 - iVar6) / 2 - iVar7,uVar8,uVar9
            );
  pPVar12 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b71448,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)avStack_40,&DAT_06b71308,1);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)avStack_40);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  uVar8 = PlantAccessoryMgr::GetMaxOwnedAccessories();
  *(undefined4 *)(this + 0x200) = uVar8;
  iVar10 = FUN_04950334(0x2f3);
  iVar11 = FUN_04950334(0x1bc);
  Sexy::Insets::Insets
            ((Insets *)local_b0,(*(int *)(this + 0x50) - iVar10) / 2,
             (*(int *)(this + 0x54) - iVar11) / 2,iVar10,iVar11);
  iVar10 = FUN_04950334(0x17);
  iVar10 = local_b0[0] + iVar10;
  uVar21 = 1;
  do {
    if (uVar21 == 1) {
      createPanel(this,1);
    }
    uVar17 = DAT_06b71478;
    uVar15 = FUN_0494fc7c(DAT_06b71478,DAT_06b71480);
    uVar2 = 0;
    if (uVar15 != 0) {
      uVar2 = uVar22 / uVar15;
    }
    pCVar16 = (CachedUIResourcePtr *)FUN_0494fc90(uVar17,uVar22 - uVar2 * uVar15);
    CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr(aCStack_a0,pCVar16);
    Sexy::StrFormat(L"[PLANT_ACCESSORY_OBTAIN_TITLE_%d]",awStack_b8,(ulong)uVar21);
    TodStringTranslate(awStack_b8);
    Sexy::Color::Color((Color *)avStack_40,1);
    pPVar12 = ::operator_new(0x300);
    uVar1 = uVar21 + 1;
    PVZ2UIButton::PVZ2UIButton
              (pPVar12,uVar21,(ButtonListener *)(this + 0xe0),awStack_78,(Color *)avStack_40);
    local_c0 = pPVar12;
    FUN_05476c50(awStack_78);
    FUN_05476c50(awStack_b8);
    pPVar12 = local_c0;
    pcVar20 = *(code **)(*(long *)local_c0 + 0x198);
    iVar3 = FUN_04950334(0x1bc);
    iVar11 = *(int *)(this + 0x54);
    pSVar14 = (SalesProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(aCStack_a0);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar14);
    pLVar13 = (LotteryResultProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(aCStack_a0);
    uVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
    pSVar14 = (SalesProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(aCStack_a0);
    uVar9 = SalesProgressBar::GetCurrentLevel(pSVar14);
    (*pcVar20)(pPVar12,iVar10,(iVar11 - iVar3) / 2 - iVar4,uVar8,uVar9);
    pPVar12 = local_c0;
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,aCStack_a0,1);
    uVar17 = DAT_06b71228;
    uVar15 = FUN_0494fc7c(DAT_06b71228,DAT_06b71230);
    uVar2 = 0;
    if (uVar15 != 0) {
      uVar2 = uVar22 / uVar15;
    }
    lVar18 = uVar22 - uVar2 * uVar15;
    uVar22 = uVar22 + 1;
    uVar17 = FUN_0494fc90(uVar17,lVar18);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)avStack_40,uVar17,1);
    PVZ2UIButton::SetRadioStates
              (pPVar12,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)avStack_40,uVar21 == 1);
    pPVar12 = local_c0;
    pcVar20 = *(code **)(*(long *)local_c0 + 800);
    uVar17 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
    (*pcVar20)(pPVar12,uVar17);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x120),&local_c0);
    (**(code **)(*(long *)this + 0x60))(this,local_c0);
    iVar11 = FUN_04950334(8);
    iVar10 = iVar10 + iVar11 + *(int *)(local_c0 + 0x50);
    CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr(aCStack_a0);
    uVar21 = uVar1;
  } while (uVar1 != 5);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::vector
            (avStack_40,(vector *)(this + 0x120));
  PVZ2UI::LinkRadioButtons(avStack_40);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector(avStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryUI::PlantAccessoryUI(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall PlantAccessoryUI::PlantAccessoryUI(PlantAccessoryUI *this,RtWeakPtr *param_2)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_00;
  undefined *puVar1;
  LawnApp *pLVar2;
  PlantAccessoryMgr *pPVar3;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
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
  this_00 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1f0);
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06914d80;
  *(undefined ***)(this + 0xd8) = &PTR__PlantAccessoryUI_069150b8;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06915100;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x120));
  AccessoryUIInfo::AccessoryUIInfo((AccessoryUIInfo *)(this + 0x158));
  Set8BytesTo0((string *)(this + 400));
  FUN_05476574(this + 0x1a0);
  FUN_05476574(this + 0x1a8);
  FUN_05476574(this + 0x1b0);
  FUN_05476574(this + 0x1b8);
  FUN_05476574(this + 0x1c0);
  FUN_05476574(this + 0x1c8);
  FUN_05476574(this + 0x1d0);
  FUN_05476574(this + 0x1d8);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_00)
  ;
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UI_SeedPackets");
  LawnApp::LoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UI_SeedPackets_2");
  LawnApp::LoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0x138) = 1;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  std::string::append((string *)(this + 400),"",1);
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x198) = 0xffffffff;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this_00,param_2);
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined4 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  this[0x204] = (PlantAccessoryUI)0x0;
  pPVar3 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_50,(RtWeakPtrBase *)this_00);
  PlantAccessoryMgr::SetCurrentPlantType(pPVar3,(string *)&local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  InitView(this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnMainUINoticed);
  local_d0 = local_b0;
  uStack_c8 = uStack_a8;
  local_c0 = local_a0;
  MessageRouter::
  Subscribe<AccessoryContent*,Sexy::CBMemberTranslatorX<PlantAccessoryUI,void(PlantAccessoryUI::*)(AccessoryContent*)>>
            ((MessageRouter *)puVar1,Message::NoticeMainUI,&local_d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnAccessorySaleComplete);
  Sexy::Delegate0::Delegate0<PlantAccessoryUI,void(PlantAccessoryUI::*)()>
            (aDStack_38,(string *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::AccessorySaleComplete,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnExchangeComplete);
  local_e0 = local_88;
  local_f0 = local_98;
  uStack_e8 = uStack_90;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<PlantAccessoryUI,void(PlantAccessoryUI::*)(bool)>>
            ((MessageRouter *)puVar1,Message::ExchangeComplete,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnActionComplete);
  Sexy::Delegate0::Delegate0<PlantAccessoryUI,void(PlantAccessoryUI::*)()>
            (aDStack_38,(string *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ActionComplete,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnSoldTargetAccessory);
  local_110 = local_80;
  uStack_108 = uStack_78;
  local_100 = local_70;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<PlantAccessoryUI,void(PlantAccessoryUI::*)(int)>>
            ((MessageRouter *)puVar1,Message::OnSoldTargetAccessory,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnSteadySuccess);
  local_100 = local_58;
  local_110 = local_68;
  uStack_108 = uStack_60;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<PlantAccessoryUI,void(PlantAccessoryUI::*)(int)>>
            ((MessageRouter *)puVar1,Message::OnSteadySuccess,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnResetSuccess);
  local_110 = local_50;
  uStack_108 = uStack_48;
  local_100 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<PlantAccessoryUI,void(PlantAccessoryUI::*)(int)>>
            ((MessageRouter *)puVar1,Message::OnResetSuccess,&local_110);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryUI::GetCurrentSteadyCost() */

void PlantAccessoryUI::GetCurrentSteadyCost(void)

{
  wstring *pwVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long in_x0;
  ProfileMgr *this;
  PlayerInfo *this_00;
  string *psVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  RtWeakPtr aRStack_28 [8];
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  psVar6 = (string *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  PlantAccessoryMgr::GetAccessoryByType(psVar6);
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if ((bVar3) &&
     (lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28),
     *(int *)(lVar7 + 0x80) == 5)) {
    uVar4 = PlayerInfo::GetPlantAccessoryLevelById(this_00,(long)*(int *)(in_x0 + 0x198));
    uVar11 = (ulong)(int)uVar4;
    if (uVar4 < 5) {
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      uVar8 = FUN_0494fc50(*(undefined8 *)(lVar7 + 0x90),*(undefined8 *)(lVar7 + 0x98));
      if (uVar11 < uVar8) {
        uVar8 = 0;
        iVar14 = 0;
        iVar13 = 0;
        iVar12 = 0;
        while( true ) {
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
          lVar7 = FUN_0494fc64(*(undefined8 *)(lVar7 + 0x90),uVar11);
          uVar9 = FUN_0494fcc4(*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10));
          if (uVar9 <= uVar8) break;
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
          lVar7 = FUN_0494fc64(*(undefined8 *)(lVar7 + 0x90),uVar11);
          piVar10 = (int *)FUN_0494fcd0(*(undefined8 *)(lVar7 + 8),uVar8);
          iVar5 = *piVar10;
          iVar2 = piVar10[1];
          if (iVar5 == 0x5a36) {
            uVar8 = uVar8 + 1;
            iVar13 = iVar2;
          }
          else if (iVar5 == 0x5a37) {
            uVar8 = uVar8 + 1;
            iVar14 = iVar2;
          }
          else {
            uVar8 = uVar8 + 1;
            if (iVar5 == 0xfad) {
              iVar12 = iVar2;
            }
          }
        }
        pwVar1 = (wstring *)(in_x0 + 0x1d8);
        TodStringTranslate(L"[RECONSTRUCTION_COMPONENT_NUM]");
        TodReplaceNumberString((wstring *)&local_18,L"{NUMBER2}",iVar14);
        FUN_054766c8(pwVar1,(pair *)&local_10);
        FUN_05476c50((pair *)&local_10);
        FUN_05476c50((wstring *)&local_18);
        iVar5 = PlayerInfo::GetMaterialNum(this_00,0x5a37);
        TodReplaceNumberString(pwVar1,L"{NUMBER1}",iVar5);
        FUN_054766c8(pwVar1,(pair *)&local_10);
        FUN_05476c50((pair *)&local_10);
        local_20 = 0x5a36;
        local_18 = 0x5a37;
        local_10 = 0xfad;
        local_1c = iVar13;
        local_14 = iVar14;
        local_c = iVar12;
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)in_x8,
                   (pair *)&local_20);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)in_x8,
                   (pair *)&local_18);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)in_x8,
                   (pair *)&local_10);
      }
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryUI::ButtonDepress(int) */

void __thiscall PlantAccessoryUI::ButtonDepress(PlantAccessoryUI *this,int param_1)

{
  undefined4 uVar1;
  LawnApp *pLVar2;
  int iVar3;
  char *pcVar4;
  PlantAccessoryUI *this_00;
  CrazyNPCManager *pCVar5;
  PlantAccessoryMgr *pPVar6;
  ProfileMgr *pPVar7;
  PlayerInfo *this_01;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  PVZ2UIDialog *pPVar11;
  code *pcVar12;
  wchar_t *pwVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined1 auStack_80 [8];
  wstring awStack_78 [8];
  string asStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  pLVar2 = gLawnApp;
  local_8 = ___stack_chk_guard;
  switch(param_1) {
  case 100:
    MessageRouter::Post((_func_void *)gMessageRouter);
    LawnApp::KillPlantAccessoryUI(gLawnApp);
    break;
  case 0x65:
    pPVar6 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
    uVar1 = *(undefined4 *)(this + 0x198);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)(this + 0x1f0));
    PlantAccessoryMgr::BindTargetAccessory(pPVar6,uVar1,aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    pPVar7 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar10 = ProfileMgr::GetCurrentProfile(pPVar7);
    iVar3 = FUN_0494fbf4(*(undefined4 *)(lVar10 + 0x40));
    if (iVar3 == 0x1e) {
      LawnApp::KillGameMaskUI(gLawnApp);
      pCVar5 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      if (pCVar5 != (CrazyNPCManager *)0x0) {
        std::string::string(asStack_70,"TUTORIAL_ACCESSORY1_INTRO");
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,onNarrationFinished);
        Sexy::Delegate0::Delegate0<PlantAccessoryUI,void(PlantAccessoryUI::*)()>
                  (aDStack_38,aRStack_50);
        std::string::string((string *)&local_68,"");
        CrazyNPCManager::StartNarrativeID(pCVar5,asStack_70,aDStack_38,(string *)&local_68);
        std::string::~string((string *)&local_68);
        nop();
        std::string::~string(asStack_70);
        nop();
      }
    }
    break;
  case 0x66:
    TodStringTranslate(L"[EXCHANGE_CONFIRM_MESSAGE]");
    TodReplaceNumberString((wstring *)aRStack_50,L"{GOLD_COUNT}",*(int *)(this + 0x184));
    FUN_05476c50((wstring *)aRStack_50);
    pLVar2 = gLawnApp;
    FUN_05478178((wstring *)aRStack_50,L"[EXCHANGE_CONFIRM_TITLE]",&local_68);
    pPVar11 = (PVZ2UIDialog *)
              LawnApp::ShowPVZ2Dialog(pLVar2,(wstring *)aRStack_50,(wstring *)asStack_70);
    FUN_05476c50((wstring *)aRStack_50);
    nop();
    FUN_05478178(&local_68,L"[BUTTON_CANCEL]",awStack_78);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnCloseDialog);
    Sexy::Delegate0::Delegate0<PlantAccessoryUI,void(PlantAccessoryUI::*)()>
              (aDStack_38,(wstring *)aRStack_50);
    PVZ2UIDialog::AddButton(pPVar11,&local_68,aDStack_38,1);
    FUN_05476c50(&local_68);
    nop();
    FUN_05478178(&local_68,L"[BUTTON_OK]",awStack_78);
    pcVar12 = OnConfirmExchange;
    goto LAB_0495a770;
  case 0x67:
    FUN_05478178((wstring *)&local_68,L"[SALE_CONFIRM_TITLE]",awStack_78);
    FUN_05478178((wstring *)aRStack_50,L"[SALE_CONFIRM_MESSAGE]",asStack_70);
    pPVar11 = (PVZ2UIDialog *)
              LawnApp::ShowPVZ2Dialog(pLVar2,(wstring *)&local_68,(wstring *)aRStack_50);
    FUN_05476c50((wstring *)aRStack_50);
    nop();
    FUN_05476c50((wstring *)&local_68);
    nop();
    FUN_05478178((wstring *)&local_68,L"[BUTTON_CANCEL]",asStack_70);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnCloseDialog);
    Sexy::Delegate0::Delegate0<PlantAccessoryUI,void(PlantAccessoryUI::*)()>
              (aDStack_38,(wstring *)aRStack_50);
    PVZ2UIDialog::AddButton(pPVar11,(wstring *)&local_68,aDStack_38,1);
    FUN_05476c50((wstring *)&local_68);
    nop();
    FUN_05478178((wstring *)&local_68,L"[BUTTON_OK]",asStack_70);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnConfirmSale);
    Sexy::Delegate0::Delegate0<PlantAccessoryUI,void(PlantAccessoryUI::*)()>
              (aDStack_38,(wstring *)aRStack_50);
    PVZ2UIDialog::AddButton(pPVar11,(wstring *)&local_68,aDStack_38,0);
    FUN_05476c50((wstring *)&local_68);
    nop();
    break;
  case 0x68:
    pPVar6 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
    PlantAccessoryMgr::UnbindTargetAccessory(pPVar6,*(int *)(this + 0x198));
    break;
  case 0x69:
    iVar3 = Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
    PlantAccessoryMgr::GetBindedPlantTypeForTargetAccessory(iVar3);
    pLVar2 = gLawnApp;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)&local_68);
    LawnApp::ShowAccessorySwitchDialog(pLVar2,aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    break;
  case 0x6a:
  case 0x6b:
    break;
  case 0x6c:
    LawnApp::KillPlantAccessoryUI(gLawnApp);
    iVar3 = GameStateMgr::GetState(gGameStateMgr);
    if ((iVar3 == 5) && (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0)) {
      Board::EndLevel(*(Board **)(gLawnApp + 0x9f0));
    }
    break;
  case 0x6d:
    ShowAccessorySuperPacket(this);
    break;
  case 0x6e:
    TodStringTranslate(L"[CONFIRM_RESET]");
    pLVar2 = gLawnApp;
    FUN_05478178((wstring *)aRStack_50,L"[CONFIRM_RESET_TITLE]",&local_68);
    pPVar11 = (PVZ2UIDialog *)
              LawnApp::ShowPVZ2Dialog(pLVar2,(wstring *)aRStack_50,(wstring *)asStack_70);
    FUN_05476c50((wstring *)aRStack_50);
    nop();
    FUN_05478178(&local_68,L"[BUTTON_CANCEL]",awStack_78);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnCloseDialog);
    Sexy::Delegate0::Delegate0<PlantAccessoryUI,void(PlantAccessoryUI::*)()>
              (aDStack_38,(wstring *)aRStack_50);
    PVZ2UIDialog::AddButton(pPVar11,&local_68,aDStack_38,1);
    FUN_05476c50(&local_68);
    nop();
    FUN_05478178(&local_68,L"[BUTTON_OK]",awStack_78);
    pcVar12 = OnConfirmReset;
LAB_0495a770:
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,pcVar12);
    Sexy::Delegate0::Delegate0<PlantAccessoryUI,void(PlantAccessoryUI::*)()>(aDStack_38,aRStack_50);
    PVZ2UIDialog::AddButton(pPVar11,&local_68,aDStack_38,0);
    FUN_05476c50(&local_68);
    nop();
    FUN_05476c50(asStack_70);
    break;
  case 0x6f:
    pPVar7 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar7);
    uVar14 = 0;
    TodStringTranslate(L"[CONFIRM_STEADY]");
    FUN_05478178((wstring *)aRStack_50,L"[MAT_SPACE_TIME_CRYSTAL]",(wstring *)asStack_70);
    TodReplaceString((wstring *)&local_68,L"{MAT1}",(wstring *)aRStack_50);
    FUN_05476c50((wstring *)aRStack_50);
    nop();
    FUN_05476c50((wstring *)&local_68);
    FUN_05478178((wstring *)&local_68,L"[MAT_SPACE_TIME_DUST]",(wstring *)asStack_70);
    TodReplaceString(awStack_78,L"{MAT2}",(wstring *)&local_68);
    FUN_054766c8(awStack_78,(wstring *)aRStack_50);
    FUN_05476c50((wstring *)aRStack_50);
    FUN_05476c50((wstring *)&local_68);
    nop();
    FUN_05478178((wstring *)&local_68,L"[REWARD_TYPE_COIN]",(wstring *)asStack_70);
    TodReplaceString(awStack_78,L"{MAT3}",(wstring *)&local_68);
    FUN_054766c8(awStack_78,(wstring *)aRStack_50);
    FUN_05476c50((wstring *)aRStack_50);
    FUN_05476c50((wstring *)&local_68);
    nop();
    GetCurrentSteadyCost();
    uVar15 = local_68;
    uVar8 = FUN_0494fcb0(local_68,local_60);
    while (pLVar2 = gLawnApp, uVar14 < uVar8) {
      piVar9 = (int *)FUN_0494fcbc(uVar15,uVar14);
      iVar3 = *piVar9;
      if (iVar3 == 0x5a36) {
        TodStringTranslate(L"[RECONSTRUCTION_COMPONENT_NUM]");
        lVar10 = FUN_0494fcbc(local_68,uVar14);
        TodReplaceNumberString((wstring *)aRStack_50,L"{NUMBER2}",*(int *)(lVar10 + 4));
        FUN_05476c50((wstring *)aRStack_50);
        iVar3 = PlayerInfo::GetMaterialNum(this_01,0x5a36);
        TodReplaceNumberString((wstring *)asStack_70,L"{NUMBER1}",iVar3);
        FUN_054766c8((wstring *)asStack_70,(wstring *)aRStack_50);
        FUN_05476c50((wstring *)aRStack_50);
        pwVar13 = L"{NUM1}";
LAB_0495ac94:
        TodReplaceString(awStack_78,pwVar13,(wstring *)asStack_70);
        uVar14 = uVar14 + 1;
        FUN_054766c8(awStack_78,(wstring *)aRStack_50);
        FUN_05476c50((wstring *)aRStack_50);
        FUN_05476c50((wstring *)asStack_70);
        uVar15 = local_68;
        uVar8 = FUN_0494fcb0(local_68,local_60);
      }
      else {
        if (iVar3 == 0x5a37) {
          TodStringTranslate(L"[RECONSTRUCTION_COMPONENT_NUM]");
          lVar10 = FUN_0494fcbc(local_68,uVar14);
          TodReplaceNumberString((wstring *)aRStack_50,L"{NUMBER2}",*(int *)(lVar10 + 4));
          FUN_05476c50((wstring *)aRStack_50);
          iVar3 = PlayerInfo::GetMaterialNum(this_01,0x5a37);
          TodReplaceNumberString((wstring *)asStack_70,L"{NUMBER1}",iVar3);
          FUN_054766c8((wstring *)asStack_70,(wstring *)aRStack_50);
          FUN_05476c50((wstring *)aRStack_50);
          pwVar13 = L"{NUM2}";
          goto LAB_0495ac94;
        }
        if (iVar3 == 0xfad) {
          TodStringTranslate(L"[RECONSTRUCTION_COMPONENT_NUM]");
          lVar10 = FUN_0494fcbc(local_68,uVar14);
          TodReplaceNumberString((wstring *)aRStack_50,L"{NUMBER2}",*(int *)(lVar10 + 4));
          FUN_05476c50((wstring *)aRStack_50);
          iVar3 = PlayerInfo::GetNumCoins(this_01,true);
          TodReplaceNumberString((wstring *)asStack_70,L"{NUMBER1}",iVar3);
          FUN_054766c8((wstring *)asStack_70,(wstring *)aRStack_50);
          FUN_05476c50((wstring *)aRStack_50);
          pwVar13 = L"{NUM3}";
          goto LAB_0495ac94;
        }
        uVar14 = uVar14 + 1;
      }
    }
    FUN_05478178((wstring *)aRStack_50,L"[CONFIRM_STEADY_TITLE]",(wstring *)asStack_70);
    pPVar11 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar2,(wstring *)aRStack_50,awStack_78);
    FUN_05476c50((wstring *)aRStack_50);
    nop();
    FUN_05478178((wstring *)asStack_70,L"[BUTTON_CANCEL]",auStack_80);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnCloseDialog);
    Sexy::Delegate0::Delegate0<PlantAccessoryUI,void(PlantAccessoryUI::*)()>
              (aDStack_38,(wstring *)aRStack_50);
    PVZ2UIDialog::AddButton(pPVar11,(wstring *)asStack_70,aDStack_38,1);
    FUN_05476c50((wstring *)asStack_70);
    nop();
    FUN_05478178((wstring *)asStack_70,L"[BUTTON_OK]",auStack_80);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnConfirmSteady);
    Sexy::Delegate0::Delegate0<PlantAccessoryUI,void(PlantAccessoryUI::*)()>
              (aDStack_38,(wstring *)aRStack_50);
    PVZ2UIDialog::AddButton(pPVar11,(wstring *)asStack_70,aDStack_38,0);
    FUN_05476c50((wstring *)asStack_70);
    nop();
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)&local_68);
    FUN_05476c50(awStack_78);
    break;
  default:
    pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar4,"Play_UI_Menu_Tab_Scroll");
    createPanel(this,param_1);
    break;
  case 0x74:
    this_00 = (PlantAccessoryUI *)LawnApp::getPlantAccessoryUI(gLawnApp);
    if (this_00 != (PlantAccessoryUI *)0x0) {
      showSuperAccessoryDescription(this_00);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PlantAccessoryUI::ButtonDepress(int) */

void __thiscall PlantAccessoryUI::ButtonDepress(PlantAccessoryUI *this,int param_1)

{
  ButtonDepress(this + -0xe0,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAccessoryUI::OnConfirmExchange() */

void __thiscall PlantAccessoryUI::OnConfirmExchange(PlantAccessoryUI *this)

{
  LawnApp *this_00;
  char cVar1;
  PVZ2UIDialog *pPVar2;
  char *__s;
  TGALogMgr *this_01;
  PlantAccessoryMgr *this_02;
  size_t in_x2;
  undefined1 auStack_98 [8];
  undefined4 local_90 [2];
  wstring awStack_88 [16];
  Delegate0 aDStack_78 [48];
  wstring awStack_48 [16];
  undefined1 auStack_38 [16];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  cVar1 = PlantAccessoryMgr::CanExchangeAccessory();
  this_00 = gLawnApp;
  if (cVar1 == '\0') {
    FUN_05478178(awStack_88,L"[ACCESSORY_FULL_TITLE]",auStack_98);
    FUN_05478178(awStack_48,L"[ACCESSORY_FULL_MESSAGE]",local_90);
    pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_88,awStack_48);
    FUN_05476c50(awStack_48);
    nop();
    FUN_05476c50(awStack_88);
    nop();
    FUN_05478178(awStack_88,L"[BUTTON_OK]",local_90);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnCloseDialog);
    Sexy::Delegate0::Delegate0<PlantAccessoryUI,void(PlantAccessoryUI::*)()>(aDStack_78,awStack_48);
    PVZ2UIDialog::AddButton(pPVar2,awStack_88,aDStack_78,0);
    FUN_05476c50(awStack_88);
    nop();
  }
  else {
    TGAPlantWarsData::TGAPlantWarsData((TGAPlantWarsData *)awStack_48);
    local_90[0] = 3;
    FUN_0494fe18((string *)awStack_88,local_90);
    FUN_05474278((TGAPlantWarsData *)awStack_48,(string *)awStack_88);
    std::string::~string((string *)awStack_88);
    thunk_FUN_05475e00(auStack_38,(string *)(this + 400));
    DString::DString((DString *)awStack_88,*(int *)(this + 0x184));
    __s = (char *)DString::c_str((DString *)awStack_88);
    std::string::append(asStack_28,__s,in_x2);
    DString::~DString((DString *)awStack_88);
    this_01 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogDecorateData(this_01,(TGALogPlantDecorate *)awStack_48);
    this_02 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
    PlantAccessoryMgr::ExchangeTargetAccessory(this_02,(string *)(this + 400));
    TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)awStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

