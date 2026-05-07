// Class: WorldMapEventAlert


/* WorldMapEventAlert::HideBadge() */

void __thiscall WorldMapEventAlert::HideBadge(WorldMapEventAlert *this)

{
  this[0x50] = (WorldMapEventAlert)0x0;
  return;
}


/* WorldMapEventAlert::GetAnchorLocation() */

Point * WorldMapEventAlert::GetAnchorLocation(void)

{
  long in_x0;
  Point *in_x8;
  
  Sexy::Point::Point(in_x8,(TPoint *)(in_x0 + 0x1c));
  return in_x8;
}


/* WorldMapEventAlert::~WorldMapEventAlert() */

void __thiscall WorldMapEventAlert::~WorldMapEventAlert(WorldMapEventAlert *this)

{
  *(undefined ***)this = &PTR__WorldMapEventAlert_0685b380;
  *(undefined ***)(this + 8) = &PTR_ButtonPress_0685b3f0;
  if (*(long **)(this + 0x290) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x290) + 0x18))();
    *(undefined8 *)(this + 0x290) = 0;
  }
  MapPopupDialog::~MapPopupDialog((MapPopupDialog *)this);
  return;
}


/* WorldMapEventAlert::~WorldMapEventAlert() */

void __thiscall WorldMapEventAlert::~WorldMapEventAlert(WorldMapEventAlert *this)

{
  ~WorldMapEventAlert(this);
  AK::FreeHook(this);
  return;
}


/* WorldMapEventAlert::SetPoppedInAnchorLocation(Sexy::Point) */

void __thiscall
WorldMapEventAlert::SetPoppedInAnchorLocation(WorldMapEventAlert *this,undefined8 *param_2)

{
  *(undefined8 *)(this + 0x2a0) = *(undefined8 *)(this + 0x1c);
  *(undefined8 *)(this + 0x1c) = *param_2;
  return;
}


/* WorldMapEventAlert::calculateBadgeLocation() */

void __thiscall WorldMapEventAlert::calculateBadgeLocation(WorldMapEventAlert *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(this + 0x1c);
  iVar2 = *(int *)(this + 0x20);
  iVar3 = *(int *)(this + 0x30);
  *(int *)(this + 0x24) = (int)((float)iVar1 - (float)*(int *)(this + 0x2c) * 0.5);
  iVar4 = FUN_04565188(0xe);
  *(int *)(this + 0x44) = iVar1;
  *(int *)(this + 0x48) = iVar2;
  *(int *)(this + 0x28) = (iVar2 - iVar3) - iVar4;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapEventAlert::SetAnchorLocation(Sexy::Point) */

void __thiscall WorldMapEventAlert::SetAnchorLocation(WorldMapEventAlert *this,TPoint *param_2)

{
  long lVar1;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_10,param_2);
  MapPopupDialog::SetAnchorLocation((MapPopupDialog *)this,aPStack_10);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x2a0) = *(undefined8 *)(this + 0x1c);
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapEventAlert::DrawFromMap(Sexy::Graphics*, WorldMapCamera*, int) */

void WorldMapEventAlert::DrawFromMap(Graphics *param_1,WorldMapCamera *param_2,int param_3)

{
  long lVar1;
  int local_10;
  int local_c;
  
  lVar1 = ___stack_chk_guard;
  if (param_1[0x50] != (Graphics)0x0) {
    if ((*(int *)(param_1 + 0x280) == 0) && (*(int *)(param_1 + 0x28c) == 1)) {
      if ((WorldMapCamera *)(ulong)(uint)param_3 != (WorldMapCamera *)0x0) {
        GetAnchorLocation();
        WorldMapCamera::DrawPopAnimRig
                  ((WorldMapCamera *)(ulong)(uint)param_3,*(PopAnimRig **)(param_1 + 0x290),
                   (float)local_10,(float)local_c,0.0,1.0,0.0);
      }
    }
    else {
      (**(code **)(*(long *)param_1 + 0x10))(param_1);
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapEventAlert::WorldMapEventAlert() */

void __thiscall WorldMapEventAlert::WorldMapEventAlert(WorldMapEventAlert *this)

{
  MapPopupDialog::MapPopupDialog((MapPopupDialog *)this);
  *(undefined ***)this = &PTR__WorldMapEventAlert_0685b380;
  *(undefined ***)(this + 8) = &PTR_ButtonPress_0685b3f0;
  Sexy::Point::Point((Point *)(this + 0x2a0));
  *(undefined4 *)(this + 0x280) = 0;
  *(undefined4 *)(this + 0x28c) = 1;
  MapPopupDialog::SetDialogType((MapPopupDialog *)this,5);
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  this[0x50] = (WorldMapEventAlert)0x0;
  *(undefined4 *)(this + 0x18) = 2;
  *(undefined4 *)(this + 0x2b0) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  this[0x284] = (WorldMapEventAlert)0x0;
  *(undefined4 *)(this + 0x288) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapEventAlert::IsVisibleInBounds(Sexy::TRect<int>) */

void __thiscall WorldMapEventAlert::IsVisibleInBounds(WorldMapEventAlert *this,TRect *param_2)

{
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets
            (aIStack_18,*(int *)(this + 0x24),*(int *)(this + 0x28),*(int *)(this + 0x2c),
             *(int *)(this + 0x30));
  Sexy::TRect<int>::Intersects((TRect<int> *)aIStack_18,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapEventAlert::Update() */

void __thiscall WorldMapEventAlert::Update(WorldMapEventAlert *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  this_00 = *(PopAnimRig **)(this + 0x290);
  if (this_00 != (PopAnimRig *)0x0) {
    fVar1 = (float)PVZ_T();
    fVar2 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapEventAlert::setupDialogState() */

void __thiscall WorldMapEventAlert::setupDialogState(WorldMapEventAlert *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  undefined1 auStack_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_045651ac(300);
  *(int *)(this + 0x2c) = iVar2;
  iVar3 = FUN_045651ac(0xf);
  fVar6 = (float)(iVar2 + iVar3 * -2);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
  FUN_05477b24(auStack_10,this + 0x90);
  Sexy::PrimeTypeface::SizeString_Paragraph(fVar6,uVar4,auStack_10,auStack_20,&local_1c);
  FUN_05476c50(auStack_10);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  FUN_05477b24(auStack_10,this + 0x70);
  Sexy::PrimeTypeface::SizeString_Paragraph(fVar6,uVar4,auStack_10,auStack_20,&local_18);
  FUN_05476c50(auStack_10);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  FUN_05477b24(auStack_10,this + 0x98);
  Sexy::PrimeTypeface::SizeString_Paragraph(fVar6,uVar4,auStack_10,auStack_20,&local_14);
  FUN_05476c50(auStack_10);
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10820);
  iVar2 = FUN_045651ac(0x3c);
  lVar1 = ___stack_chk_guard;
  *(int *)(this + 0x30) = iVar2 + local_1c + local_18 + local_14 + *(int *)(lVar5 + 0x3c);
  *(undefined1 *)(*(long *)(this + 0x10) + 0x6c) = 1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapEventAlert::drawOtherWorldDialog(Sexy::Graphics*) */

void __thiscall WorldMapEventAlert::drawOtherWorldDialog(WorldMapEventAlert *this,Graphics *param_1)

{
  WorldMapEventAlert WVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  Image *pIVar10;
  SalesProgressBar *pSVar11;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  long lVar12;
  PrimeTypeface *pPVar15;
  float fVar13;
  float fVar14;
  undefined1 auStack_40 [4];
  int local_3c;
  undefined1 auStack_38 [4];
  int local_34;
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_045651ac(0xf);
  iVar5 = *(int *)(this + 0x24);
  iVar6 = *(int *)(this + 0x28);
  iVar3 = FUN_045651ac(0xc);
  iVar7 = *(int *)(this + 0x2c);
  iVar4 = FUN_045651ac(0x18);
  Sexy::Insets::Insets
            ((Insets *)&local_28,iVar2 + iVar5,iVar6 + iVar3,iVar7 + iVar2 * -2,
             (*(int *)(*(long *)(this + 0x10) + 0x4c) - iVar4) - iVar6);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  pPVar15._0_4_ = (PrimeTypeface *)(float)local_28;
  fVar14 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  fVar13 = (float)local_20;
  FUN_05477b24(auStack_30,this + 0x70);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Popover_Header);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar15._0_4_,(float)local_24,fVar13,fVar14,uVar9,param_1,auStack_30,1,0,aIStack_18,0);
  FUN_05476c50(auStack_30);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  FUN_05477b24(aIStack_18,this + 0x70);
  Sexy::PrimeTypeface::SizeString_Paragraph((float)local_20,uVar9,aIStack_18,auStack_40,&local_3c);
  FUN_05476c50(aIStack_18);
  iVar5 = FUN_045651ac(0);
  iVar5 = local_24 + iVar5 + local_3c;
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
  pPVar15._0_4_ = (PrimeTypeface *)(float)local_28;
  fVar14 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  fVar13 = (float)local_20;
  FUN_05477b24(auStack_30,this + 0x90);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Popover_Header);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar15._0_4_,(float)iVar5,fVar13,fVar14,uVar9,param_1,auStack_30,1,0,aIStack_18,0);
  FUN_05476c50(auStack_30);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
  FUN_05477b24(aIStack_18,this + 0x90);
  Sexy::PrimeTypeface::SizeString_Paragraph((float)local_20,uVar9,aIStack_18,auStack_40,&local_3c);
  FUN_05476c50(aIStack_18);
  iVar6 = FUN_045651ac(0);
  iVar5 = iVar5 + iVar6 + local_3c;
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10930);
  iVar7 = local_28;
  iVar2 = FUN_045651ac(0);
  iVar6 = local_20 + iVar2 * 2;
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10930);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar11);
  Sexy::Graphics::DrawImage(param_1,pIVar10,iVar7 - iVar2,iVar5,iVar6,iVar3);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10930);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar11);
  iVar2 = FUN_045651ac(10);
  iVar6 = FUN_045651ac(5);
  iVar6 = iVar5 + iVar7 + iVar2 + iVar6;
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  pPVar15._0_4_ = (PrimeTypeface *)(float)local_28;
  fVar14 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  fVar13 = (float)local_20;
  FUN_05477b24(auStack_30,this + 0x98);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Popover_Desc);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar15._0_4_,(float)iVar6,fVar13,fVar14,uVar9,param_1,auStack_30,1,0,aIStack_18,0);
  FUN_05476c50(auStack_30);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  FUN_05477b24(aIStack_18,this + 0x98);
  Sexy::PrimeTypeface::SizeString_Paragraph((float)local_20,uVar9,aIStack_18,auStack_38,&local_34);
  FUN_05476c50(aIStack_18);
  iVar5 = FUN_045651ac(0xf);
  iVar6 = iVar6 + iVar5 + local_34;
  iVar5 = FUN_045651ac(0xa0);
  lVar12 = *(long *)(this + 0x10);
  iVar5 = (local_28 + local_20 / 2) - iVar5 / 2;
  *(int *)(lVar12 + 0x4c) = iVar6;
  *(int *)(lVar12 + 0x48) = iVar5;
  uVar8 = FUN_045651ac(0xa0);
  WVar1 = this[0x1e4];
  *(undefined4 *)(lVar12 + 0x50) = uVar8;
  if (WVar1 == (WorldMapEventAlert)0x0) {
    iVar7 = FUN_045651ac(0xa0);
    Sexy::Insets::Insets(aIStack_18,iVar5,iVar6,iVar7,*(int *)(lVar12 + 0x54));
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10820;
  }
  else {
    iVar7 = FUN_045651ac(0xa0);
    Sexy::Insets::Insets(aIStack_18,iVar5,iVar6,iVar7,*(int *)(lVar12 + 0x54));
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b107a0;
  }
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  Draw3SliceImage(param_1,aIStack_18,uVar9);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  FUN_05477b24(aIStack_18,*(long *)(this + 0x10) + 0xd8);
  iVar7 = FUN_045651ac(0xa0);
  Sexy::PrimeTypeface::SizeString_Paragraph((float)iVar7,uVar9,aIStack_18,auStack_40,&local_3c);
  FUN_05476c50(aIStack_18);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  lVar12 = *(long *)(this + 0x10);
  iVar7 = *(int *)(lVar12 + 0x54);
  iVar2 = FUN_045651ac(0xa0);
  fVar13 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  FUN_05477b24(auStack_30,lVar12 + 0xd8);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Popover_Btn_Label);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)iVar5,(float)((iVar6 + iVar7 / 2) - local_3c / 2),(float)iVar2,
             fVar13,uVar9,param_1,auStack_30,1,0,aIStack_18,0);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapEventAlert::drawYetiLevelDialog(Sexy::Graphics*) */

void __thiscall WorldMapEventAlert::drawYetiLevelDialog(WorldMapEventAlert *this,Graphics *param_1)

{
  WorldMapEventAlert WVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  LotteryResultProgressBar *pLVar13;
  Image *pIVar14;
  undefined8 uVar15;
  SalesProgressBar *pSVar16;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  wchar_t *pwVar17;
  long lVar18;
  PrimeTypeface *pPVar21;
  float fVar19;
  float fVar20;
  int local_48;
  int local_44;
  undefined1 auStack_40 [4];
  int local_3c;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_045651ac(0x28);
  iVar11 = *(int *)(this + 0x24);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10890);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  iVar10 = *(int *)(this + 0x28);
  iVar5 = FUN_045651ac(0xc);
  iVar6 = FUN_045651ac(0xf);
  iVar9 = *(int *)(this + 0x2c);
  iVar7 = FUN_045651ac(0x28);
  iVar8 = FUN_045651ac(0x18);
  Sexy::Insets::Insets
            ((Insets *)&local_28,iVar3 + iVar11 + iVar4,iVar10 + iVar5,(iVar9 - iVar6) - iVar7,
             (*(int *)(*(long *)(this + 0x10) + 0x4c) - iVar8) - iVar10);
  iVar11 = local_28._4_4_;
  pIVar14 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10890);
  iVar9 = FUN_045651ac(0x28);
  iVar10 = *(int *)(this + 0x24);
  iVar3 = FUN_045651ac(0xc);
  Sexy::Graphics::DrawImage(param_1,pIVar14,iVar9 + iVar10,iVar3 + *(int *)(this + 0x28));
  uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  pPVar21._0_4_ = (PrimeTypeface *)(float)(int)local_28;
  fVar19 = (float)(int)local_20;
  fVar20 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  FUN_05477b24(auStack_30,this + 0x90);
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&PrimeText_Game::Color_Popover_Header);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar21._0_4_,(float)iVar11,fVar19,fVar20,uVar15,param_1,auStack_30,0,0,
             (Insets *)&local_18,0);
  FUN_05476c50(auStack_30);
  uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  FUN_05477b24((Insets *)&local_18,this + 0x90);
  Sexy::PrimeTypeface::SizeString_Paragraph
            ((float)(int)local_20,uVar15,(Insets *)&local_18,&local_48,&local_44);
  FUN_05476c50((Insets *)&local_18);
  iVar10 = FUN_045651ac(0);
  iVar11 = iVar11 + iVar10 + local_44;
  uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
  fVar20 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  fVar19 = (float)(int)local_20;
  FUN_05477b24(auStack_30,this + 0x70);
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&PrimeText_Game::Color_Popover_Header);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)(int)local_28,(float)iVar11,fVar19,fVar20,uVar15,param_1,
             auStack_30,0,0,(Insets *)&local_18,0);
  FUN_05476c50(auStack_30);
  uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
  FUN_05477b24((Insets *)&local_18,this + 0x70);
  Sexy::PrimeTypeface::SizeString_Paragraph
            ((float)(int)local_20,uVar15,(Insets *)&local_18,&local_48,&local_44);
  FUN_05476c50((Insets *)&local_18);
  iVar10 = FUN_045651ac(0);
  iVar11 = iVar11 + iVar10 + local_44;
  iVar4 = FUN_045651ac(0xf);
  iVar10 = *(int *)(this + 0x24);
  iVar9 = *(int *)(this + 0x28);
  iVar5 = FUN_045651ac(0xc);
  iVar3 = *(int *)(this + 0x2c);
  iVar6 = FUN_045651ac(0x18);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar4 + iVar10,iVar9 + iVar5,iVar3 + iVar4 * -2,
             (*(int *)(*(long *)(this + 0x10) + 0x4c) - iVar6) - iVar9);
  local_28 = local_18;
  local_20 = uStack_10;
  pIVar14 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10930);
  uVar15 = local_28;
  iVar9 = FUN_045651ac(0);
  iVar10 = (int)local_20 + iVar9 * 2;
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10930);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar16);
  Sexy::Graphics::DrawImage(param_1,pIVar14,(int)uVar15 - iVar9,iVar11,iVar10,iVar3);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10930);
  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar16);
  iVar3 = FUN_045651ac(10);
  iVar10 = FUN_045651ac(5);
  iVar10 = iVar11 + iVar9 + iVar3 + iVar10;
  uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  pPVar21._0_4_ = (PrimeTypeface *)(float)(int)local_28;
  fVar20 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  fVar19 = (float)(int)local_20;
  FUN_05477b24(auStack_30,this + 0x98);
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&PrimeText_Game::Color_Popover_Desc);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar21._0_4_,(float)iVar10,fVar19,fVar20,uVar15,param_1,auStack_30,1,0,
             (Insets *)&local_18,0);
  FUN_05476c50(auStack_30);
  uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  FUN_05477b24((Insets *)&local_18,this + 0x98);
  Sexy::PrimeTypeface::SizeString_Paragraph
            ((float)(int)local_20,uVar15,(Insets *)&local_18,auStack_40,&local_3c);
  FUN_05476c50((Insets *)&local_18);
  iVar10 = iVar10 + local_3c;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::DoOnlineRefreshEventTime(this_01);
  iVar11 = PlayerInfo::GetPlayYetiLevelCount(this_01);
  if ((iVar11 < 1) && (cVar2 = PlayerInfo::IsYetiTutorialPlayed(this_01), cVar2 != '\0')) {
    lVar18 = LawnApp::GetRealBeijingTime(gLawnApp);
    if (lVar18 < 1) {
      (**(code **)(**(long **)(this + 0x10) + 0x158))(*(long **)(this + 0x10),0);
      pwVar17 = L"[WORLDMAP_YETI_EVENT_NEED_REFRESH]";
    }
    else {
      (**(code **)(**(long **)(this + 0x10) + 0x158))(*(long **)(this + 0x10),0);
      pwVar17 = L"[WORLDMAP_YETI_EVENT_NONE]";
    }
    TodStringTranslate(pwVar17);
    uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    pPVar21._0_4_ = (PrimeTypeface *)(float)(int)local_28;
    fVar19 = (float)(int)local_20;
    fVar20 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
    FUN_05477b24(auStack_30,auStack_38);
    Sexy::Color::Color((Color *)&local_18,0xfd,0,0);
    Sexy::PrimeTypeface::DrawString_Paragraph
              (pPVar21._0_4_,(float)iVar10,fVar19,fVar20,uVar15,param_1,auStack_30,1,0,
               (Insets *)&local_18,0);
    FUN_05476c50(auStack_30);
    uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    FUN_05477b24((Insets *)&local_18,auStack_38);
    Sexy::PrimeTypeface::SizeString_Paragraph
              ((float)(int)local_20,uVar15,(Insets *)&local_18,auStack_40,&local_3c);
    FUN_05476c50((Insets *)&local_18);
    FUN_05476c50(auStack_38);
  }
  else {
    (**(code **)(**(long **)(this + 0x10) + 0x158))(*(long **)(this + 0x10),1);
  }
  iVar11 = FUN_045651ac(0x14);
  iVar9 = *(int *)(this + 0x24);
  iVar10 = iVar10 + iVar11;
  iVar11 = (int)local_20 / 2;
  iVar3 = FUN_045651ac(0xa0);
  lVar18 = *(long *)(this + 0x10);
  iVar11 = (iVar9 + iVar11) - iVar3 / 2;
  *(int *)(lVar18 + 0x4c) = iVar10;
  *(int *)(lVar18 + 0x48) = iVar11;
  uVar12 = FUN_045651ac(0xa0);
  *(undefined4 *)(lVar18 + 0x50) = uVar12;
  if (*(char *)(lVar18 + 0x6c) != '\0') {
    if (this[0x1e4] == (WorldMapEventAlert)0x0) {
      iVar9 = FUN_045651ac(0xa0);
      Sexy::Insets::Insets((Insets *)&local_18,iVar11,iVar10,iVar9,*(int *)(lVar18 + 0x54));
      uVar15 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10820);
      Draw3SliceImage(param_1,(Insets *)&local_18,uVar15);
      WVar1 = this[0x284];
    }
    else {
      iVar9 = FUN_045651ac(0xa0);
      Sexy::Insets::Insets((Insets *)&local_18,iVar11,iVar10,iVar9,*(int *)(lVar18 + 0x54));
      uVar15 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b107a0);
      Draw3SliceImage(param_1,(Insets *)&local_18,uVar15);
      WVar1 = this[0x284];
    }
    if (WVar1 == (WorldMapEventAlert)0x0) {
      uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
      FUN_05477b24((Insets *)&local_18,*(long *)(this + 0x10) + 0xd8);
      iVar9 = FUN_045651ac(0xa0);
      Sexy::PrimeTypeface::SizeString_Paragraph
                ((float)iVar9,uVar15,(Insets *)&local_18,&local_48,&local_44);
      FUN_05476c50((Insets *)&local_18);
      uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
      lVar18 = *(long *)(this + 0x10);
      iVar9 = *(int *)(lVar18 + 0x54);
      iVar3 = FUN_045651ac(0xa0);
      fVar19 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
      FUN_05477b24(auStack_30,lVar18 + 0xd8);
      Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&PrimeText_Game::Color_Popover_Btn_Label);
      Sexy::PrimeTypeface::DrawString_Paragraph
                ((PrimeTypeface *)(float)iVar11,(float)((iVar10 + iVar9 / 2) - local_44 / 2),
                 (float)iVar3,fVar19,uVar15,param_1,auStack_30,1,0,(Insets *)&local_18,0);
      FUN_05476c50(auStack_30);
    }
    else {
      pIVar14 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10908);
      iVar9 = FUN_045651ac(0xf);
      iVar3 = FUN_045651ac(5);
      Sexy::Graphics::DrawImage(param_1,pIVar14,iVar9 + iVar11,iVar10 + iVar3);
      pLVar13 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10908);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
      iVar9 = FUN_045651ac(0xf);
      iVar9 = iVar3 + iVar11 + iVar9;
      Sexy::StrFormat(L"%d",auStack_38,(ulong)*(uint *)(this + 0x288));
      uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_22);
      FUN_05477b24((Insets *)&local_18,auStack_38);
      iVar11 = FUN_045651ac(0xa0);
      Sexy::PrimeTypeface::SizeString_Paragraph
                ((float)iVar11,uVar15,(Insets *)&local_18,&local_48,&local_44);
      FUN_05476c50((Insets *)&local_18);
      uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_22);
      iVar3 = *(int *)(*(long *)(this + 0x10) + 0x54);
      iVar11 = local_44 / 2;
      iVar4 = FUN_045651ac(0xa0);
      fVar19 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
      FUN_05477b24(auStack_30,auStack_38);
      Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&PrimeText_Game::Color_Popover_Btn_Label);
      Sexy::PrimeTypeface::DrawString_Paragraph
                ((PrimeTypeface *)(float)iVar9,(float)((iVar10 + iVar3 / 2) - iVar11),(float)iVar4,
                 fVar19,uVar15,param_1,auStack_30,0,0,(Insets *)&local_18,0);
      FUN_05476c50(auStack_30);
      iVar3 = FUN_045651ac(2);
      uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
      FUN_05477b24((Insets *)&local_18,*(long *)(this + 0x10) + 0xd8);
      iVar11 = FUN_045651ac(0xa0);
      Sexy::PrimeTypeface::SizeString_Paragraph
                ((float)iVar11,uVar15,(Insets *)&local_18,&local_48,&local_44);
      FUN_05476c50((Insets *)&local_18);
      uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
      lVar18 = *(long *)(this + 0x10);
      iVar11 = *(int *)(lVar18 + 0x54);
      iVar4 = FUN_045651ac(0xa0);
      fVar19 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
      FUN_05477b24(auStack_30,lVar18 + 0xd8);
      Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&PrimeText_Game::Color_Popover_Btn_Label);
      Sexy::PrimeTypeface::DrawString_Paragraph
                ((PrimeTypeface *)(float)(iVar9 + iVar3 + local_48),
                 (float)((iVar10 + iVar11 / 2) - local_44 / 2),(float)iVar4,fVar19,uVar15,param_1,
                 auStack_30,0,0,(Insets *)&local_18,0);
      FUN_05476c50(auStack_30);
      FUN_05476c50(auStack_38);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WorldMapEventAlert::drawDialog(Sexy::Graphics*) */

void __thiscall WorldMapEventAlert::drawDialog(WorldMapEventAlert *this,Graphics *param_1)

{
  if (*(int *)(this + 0x28c) == 0) {
    drawOtherWorldDialog(this,param_1);
    return;
  }
  if (*(int *)(this + 0x28c) == 1) {
    drawYetiLevelDialog(this,param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapEventAlert::setupBadgeState() */

void __thiscall WorldMapEventAlert::setupBadgeState(WorldMapEventAlert *this)

{
  undefined4 uVar1;
  ResourceInfo *pRVar2;
  RtClass *pRVar3;
  undefined8 uVar4;
  PopAnimRig *this_00;
  code *pcVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  string asStack_50 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_48 [24];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  this_00 = *(PopAnimRig **)(this + 0x290);
  local_8 = ___stack_chk_guard;
  if (this_00 == (PopAnimRig *)0x0) {
    CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06b107d0);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)avStack_48);
    *(float *)(pRVar2 + 0x28) = *(float *)(gLawnApp + 0x28dc) * 0.0006510417;
    pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
    uVar4 = PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar2,pRVar3);
    *(undefined8 *)(this + 0x290) = uVar4;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_48);
    this_00 = *(PopAnimRig **)(this + 0x290);
  }
  if (*(int *)(this + 0x28c) == 0) {
    pcVar5 = *(code **)(*(long *)this_00 + 0x78);
    std::string::string(asStack_50,"yeti_world_icon");
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_48);
    (*pcVar5)(this_00,asStack_50,1,0,avStack_48);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_48);
    std::string::~string(asStack_50);
    nop();
    uVar1 = FUN_04565188(0x36);
    *(undefined4 *)(this + 0x2c) = uVar1;
    uVar1 = FUN_04565188(0x46);
    *(undefined4 *)(this + 0x30) = uVar1;
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    uVar1 = FUN_0456519c(0xc2c20000);
    uVar6 = 0xc2fa0000;
  }
  else {
    if (*(int *)(this + 0x28c) != 1) goto LAB_0456688c;
    pcVar5 = *(code **)(*(long *)this_00 + 0x78);
    std::string::string(asStack_50,"yeti_map_icon");
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_48);
    (*pcVar5)(this_00,asStack_50,1,0,avStack_48);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_48);
    std::string::~string(asStack_50);
    nop();
    uVar1 = FUN_04565188(0x61);
    *(undefined4 *)(this + 0x2c) = uVar1;
    uVar1 = FUN_04565188(0x61);
    *(undefined4 *)(this + 0x30) = uVar1;
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    uVar1 = FUN_0456519c(0xc2c20000);
    uVar6 = 0xc2f40000;
  }
  uVar6 = FUN_0456519c(uVar6);
  FUN_04565168(uVar1,uVar6,auStack_28,auStack_1c);
  PopAnimRig::SetRenderTransform(*(PopAnimRig **)(this + 0x290),aSStack_30);
  this_00 = *(PopAnimRig **)(this + 0x290);
LAB_0456688c:
  fVar7 = (float)PVZ_T();
  fVar8 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(this_00,fVar7,fVar8);
  (**(code **)(**(long **)(this + 0x10) + 0x158))(*(long **)(this + 0x10),0);
  (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),0);
  (**(code **)(**(long **)(this + 0xd8) + 0x158))(*(long **)(this + 0xd8),0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapEventAlert::setState(WorldMapEventAlert::AlertState) */

void __thiscall WorldMapEventAlert::setState(WorldMapEventAlert *this,int param_2)

{
  *(int *)(this + 0x280) = param_2;
  if (param_2 != 0) {
    if (param_2 == 1) {
      setupDialogState(this);
    }
    (**(code **)(*(long *)this + 0x38))(this);
    return;
  }
  setupBadgeState(this);
  (**(code **)(*(long *)this + 0x38))(this);
  return;
}


/* WorldMapEventAlert::ShowBadge() */

void __thiscall WorldMapEventAlert::ShowBadge(WorldMapEventAlert *this)

{
  setState(this,0);
  this[0x50] = (WorldMapEventAlert)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapEventAlert::PopIn() */

void __thiscall WorldMapEventAlert::PopIn(WorldMapEventAlert *this)

{
  char cVar1;
  TRect<int> aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x280) == 0) {
    if (*(int *)(this + 0x28c) == 1) {
      LawnApp::GetWorldMap(gLawnApp);
      WorldMap::GetWorldBoundingRect();
      cVar1 = Sexy::TRect<int>::Contains(aTStack_18,(TPoint *)(this + 0x1c));
      if (cVar1 == '\0') goto LAB_04566b14;
    }
    setState(this,1);
    (**(code **)(*(long *)this + 0x38))(this);
  }
LAB_04566b14:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WorldMapEventAlert::PopOut() */

void __thiscall WorldMapEventAlert::PopOut(WorldMapEventAlert *this)

{
  if (*(int *)(this + 0x280) != 1) {
    return;
  }
  setState(this,0);
  *(undefined8 *)(this + 0x1c) = *(undefined8 *)(this + 0x2a0);
  (**(code **)(*(long *)this + 0x38))(this);
  return;
}


/* WorldMapEventAlert::OnMouseUp(int, int) */

void WorldMapEventAlert::OnMouseUp(int param_1,int param_2)

{
  char cVar1;
  long *plVar2;
  long *plVar3;
  string *psVar4;
  
  plVar2 = (long *)(ulong)(uint)param_1;
  plVar3 = (long *)plVar2[2];
  if ((*(char *)((long)plVar3 + 0x6c) != '\0') &&
     (cVar1 = (**(code **)(*plVar3 + 0x300))(plVar3,param_2), cVar1 != '\0')) {
    cVar1 = FUN_0547419c(plVar2 + 0x1d);
    if (cVar1 == '\0') {
      psVar4 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(psVar4,plVar2 + 0x1d);
    }
    (**(code **)(*plVar2 + 0x48))(plVar2);
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(plVar2 + 0x3d));
    return;
  }
  if ((int)plVar2[0x50] != 1) {
    (**(code **)(*plVar2 + 0x40))(plVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapEventAlert::Draw(Sexy::Graphics*) */

void __thiscall WorldMapEventAlert::Draw(WorldMapEventAlert *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  long lVar6;
  UniverseMap *this_00;
  PopAnimRig *this_01;
  code *pcVar7;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x50] != (WorldMapEventAlert)0x0) {
    lVar6 = LawnApp::GetWorldMap(gLawnApp);
    this_00 = (UniverseMap *)FUN_04565184(*(undefined8 *)(lVar6 + 0x2b0));
    cVar5 = UniverseMap::IsTransitioning(this_00);
    if (cVar5 == '\0') {
      if (*(long *)(this + 0x2a8) != 0) {
        iVar1 = *(int *)(*(long *)(this + 0x2a8) + 0x48);
        iVar2 = *(int *)(this + 0x2b0);
        if (iVar1 != iVar2) {
          *(int *)(this + 0x2b0) = iVar1;
          pcVar7 = *(code **)(*(long *)this + 0x58);
          Sexy::Point::Point((Point *)&local_10,(iVar1 - iVar2) + *(int *)(this + 0x1c),
                             *(int *)(this + 0x20));
          (*pcVar7)(this,(Point *)&local_10);
          (**(code **)(*(long *)this + 0x38))(this);
        }
      }
      if (*(int *)(this + 0x280) != 0) {
        MapPopupDialog::Draw((MapPopupDialog *)this,param_1);
        if (*(int *)(this + 0x280) != 0) {
          if (*(int *)(this + 0x280) == 1) {
            drawDialog(this,param_1);
          }
          goto LAB_04566c94;
        }
      }
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar4 = *(undefined4 *)(param_1 + 0x14);
      GetAnchorLocation();
      this_01 = *(PopAnimRig **)(this + 0x290);
      *(float *)(param_1 + 0x10) = (float)local_10;
      *(float *)(param_1 + 0x14) = (float)local_c;
      PopAnimRig::Draw(this_01,param_1);
      *(undefined4 *)(param_1 + 0x10) = uVar3;
      *(undefined4 *)(param_1 + 0x14) = uVar4;
    }
  }
LAB_04566c94:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapEventAlert::calculateLocation() */

void __thiscall WorldMapEventAlert::calculateLocation(WorldMapEventAlert *this)

{
  long lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(this + 0x28c) == 1) {
    LawnApp::GetWorldMap(gLawnApp);
    WorldMap::GetWorldBoundingRect();
    *(undefined8 *)(this + 0x34) = local_18;
    *(undefined8 *)(this + 0x3c) = uStack_10;
  }
  if (*(int *)(this + 0x280) == 0) {
    calculateBadgeLocation(this);
  }
  else {
    MapPopupDialog::calculateLocation((MapPopupDialog *)this);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

