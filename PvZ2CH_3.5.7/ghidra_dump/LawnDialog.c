// Class: LawnDialog


/* LawnDialog::SetButtonDelay(int) */

void __thiscall LawnDialog::SetButtonDelay(LawnDialog *this,int param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x1a8);
  *(int *)(this + 0x1a0) = param_1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,1);
  }
  plVar1 = *(long **)(this + 0x1b0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,1);
  }
  return;
}


/* LawnDialog::SetStaticImage(Sexy::RtWeakPtr<Sexy::Image>) */

void __thiscall LawnDialog::SetStaticImage(LawnDialog *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x230),param_2);
  return;
}


/* LawnDialog::GetLeft() */

int __thiscall LawnDialog::GetLeft(LawnDialog *this)

{
  return *(int *)(this + 0x148) + *(int *)(this + 0x138);
}


/* LawnDialog::GetWidth() */

int __thiscall LawnDialog::GetWidth(LawnDialog *this)

{
  return (((*(int *)(this + 0x50) - *(int *)(this + 0x148)) - *(int *)(this + 0x150)) -
         *(int *)(this + 0x138)) - *(int *)(this + 0x140);
}


/* LawnDialog::GetTop() */

int __thiscall LawnDialog::GetTop(LawnDialog *this)

{
  return *(int *)(this + 0x14c) + *(int *)(this + 0x13c) + 99;
}


/* LawnDialog::~LawnDialog() */

void __thiscall LawnDialog::~LawnDialog(LawnDialog *this)

{
  RtWeakPtr *this_00;
  LawnApp *this_01;
  bool bVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR_GetClass_0678cb20;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0678ceb0;
  if (*(long **)(this + 0x1a8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a8) + 0x18))();
  }
  if (*(long **)(this + 0x1b0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1b0) + 0x18))();
  }
  this_00 = (RtWeakPtr *)(this + 0x228);
  if (*(long *)(this + 0x220) != 0) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    this_01 = gLawnApp;
    if (bVar1) {
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      LawnApp::DeleteGroup(this_01,(string *)(lVar2 + 0x10));
    }
    if (*(long **)(this + 0x220) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x220) + 0x18))();
      *(undefined8 *)(this + 0x220) = 0;
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x230));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::Dialog::~Dialog((Dialog *)this);
  return;
}


/* LawnDialog::~LawnDialog() */

void __thiscall LawnDialog::~LawnDialog(LawnDialog *this)

{
  ~LawnDialog(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnDialog::CalcSizeWithPrimeFont(int, int, bool) */

void __thiscall
LawnDialog::CalcSizeWithPrimeFont(LawnDialog *this,int param_1,int param_2,bool param_3)

{
  LawnDialog *pLVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_18 [4];
  int local_14;
  undefined1 auStack_10 [8];
  long local_8;
  
  iVar8 = *(int *)(this + 0x148);
  iVar7 = *(int *)(this + 0x150);
  pLVar1 = this + 0x110;
  iVar2 = *(int *)(this + 0x138);
  iVar3 = *(int *)(this + 0x140);
  local_8 = ___stack_chk_guard;
  iVar5 = FUN_03e63004(param_1);
  iVar5 = iVar8 + iVar7 + iVar2 + iVar3 + iVar5;
  lVar9 = FUN_054765d0(pLVar1);
  if (lVar9 != 0) {
    uVar11 = *(undefined8 *)(this + 0x188);
    FUN_05477b24(auStack_10,pLVar1);
    iVar8 = Sexy::PrimeTypeface::StringWidth(uVar11,auStack_10);
    iVar5 = iVar5 + iVar8;
    FUN_05476c50(auStack_10);
  }
  lVar9 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf3d8);
  iVar8 = *(int *)(lVar9 + 0x38);
  lVar9 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf200);
  iVar7 = *(int *)(lVar9 + 0x38);
  lVar9 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf320);
  iVar8 = iVar8 + iVar7 + *(int *)(lVar9 + 0x38);
  if (iVar8 <= iVar5) {
    lVar9 = CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf320);
    iVar5 = MakeMultiple(iVar5 - iVar8,*(int *)(lVar9 + 0x38));
    iVar8 = iVar8 + iVar5;
  }
  iVar6 = FUN_03e63004(0x2d);
  iVar7 = *(int *)(this + 0x14c);
  iVar2 = *(int *)(this + 0x154);
  iVar3 = *(int *)(this + 0x13c);
  iVar4 = *(int *)(this + 0x144);
  iVar5 = FUN_03e63004(param_2);
  iVar5 = iVar6 + iVar7 + iVar2 + iVar3 + iVar4 + iVar5;
  lVar9 = FUN_054765d0(pLVar1);
  if (lVar9 != 0) {
    fVar12 = (float)Sexy::PrimeTypeface::GetHeight(*(PrimeTypeface **)(this + 0x188));
    fVar13 = UI::TypeSensitiveZero<float>();
    iVar5 = (int)((fVar12 + (float)iVar5) - fVar13) + *(int *)(this + 0x158);
  }
  lVar9 = FUN_054765d0(this + 0x120);
  if (lVar9 != 0) {
    if (param_3) {
      lVar10 = CachedResourcePtr<Sexy::Image>::operator->
                         ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf320);
      lVar9 = *(long *)(this + 400);
      iVar8 = iVar8 + *(int *)(lVar10 + 0x38);
    }
    else {
      lVar9 = *(long *)(this + 400);
    }
    if (lVar9 != 0) {
      iVar7 = *(int *)(this + 0x148);
      iVar2 = *(int *)(this + 0x150);
      iVar3 = *(int *)(this + 0x138);
      iVar4 = *(int *)(this + 0x140);
      iVar6 = FUN_03e63004(4);
      FUN_05477b24(auStack_10,this + 0x120);
      Sexy::PrimeTypeface::SizeString_Paragraph
                ((float)(((((iVar8 - iVar7) - iVar2) - iVar3) - iVar4) - iVar6),lVar9,auStack_10,
                 auStack_18,&local_14);
      FUN_05476c50(auStack_10);
      iVar5 = iVar5 + local_14;
    }
    iVar7 = FUN_03e63004(0x1e);
    iVar5 = iVar5 + iVar7;
  }
  iVar2 = *(int *)(this + 0x134);
  iVar7 = FUN_03e63004(8);
  iVar7 = iVar5 + iVar2 + iVar7;
  fVar12 = (float)ScaledApp::GetScaleAmount(gLawnApp);
  lVar9 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf3d8);
  iVar5 = *(int *)(lVar9 + 0x3c);
  lVar9 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf228);
  if (this[0x1b8] == (LawnDialog)0x0) {
    fVar12 = (float)iVar5 + (float)*(int *)(lVar9 + 0x3c) + fVar12 * 45.0;
  }
  else {
    fVar12 = (float)ScaledApp::GetScaleAmount(gLawnApp);
    lVar9 = CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf3d8);
    iVar5 = *(int *)(lVar9 + 0x3c);
    lVar9 = CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf3a8);
    fVar12 = (float)*(int *)(lVar9 + 0x3c) + (float)iVar5 + fVar12 * 45.0;
  }
  iVar5 = (int)fVar12;
  if (iVar5 <= iVar7) {
    lVar9 = CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf1a8);
    iVar7 = MakeMultiple(iVar7 - iVar5,*(int *)(lVar9 + 0x3c));
    iVar5 = iVar5 + iVar7;
  }
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x4c),iVar8,iVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnDialog::Draw(Sexy::Graphics*) */

void __thiscall LawnDialog::Draw(LawnDialog *this,Graphics *param_1)

{
  LawnDialog *pLVar1;
  RtWeakPtr *this_00;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  Image *pIVar11;
  Image *pIVar12;
  Image *pIVar13;
  long lVar14;
  Image *pIVar15;
  Insets *pIVar16;
  ResourceInfo *pRVar17;
  long *plVar18;
  PrimeTypeface *pPVar19;
  int iVar20;
  int iVar21;
  code *pcVar22;
  undefined8 uVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  int iVar27;
  undefined1 auStack_50 [24];
  int local_38;
  int local_34;
  TPoint<int> aTStack_30 [8];
  Insets aIStack_28 [4];
  int local_24;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1a4] != (LawnDialog)0x0) {
    pIVar11 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                 ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf228);
    pIVar12 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                 ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf370);
    pIVar13 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                 ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf1d0);
    if (this[0x1b8] != (LawnDialog)0x0) {
      pIVar11 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                   ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf3a8);
      pIVar12 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                   ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf2f8);
      pIVar13 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                   ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf348);
    }
    iVar7 = *(int *)(this + 0x50);
    lVar14 = CachedResourcePtr<Sexy::Image>::operator->
                       ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf3d8);
    iVar8 = *(int *)(lVar14 + 0x38);
    lVar14 = CachedResourcePtr<Sexy::Image>::operator->
                       ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf200);
    iVar9 = *(int *)(lVar14 + 0x38);
    lVar14 = CachedResourcePtr<Sexy::Image>::operator->
                       ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf320);
    iVar10 = *(int *)(this + 0x50);
    iVar24 = 0;
    if (*(int *)(lVar14 + 0x38) != 0) {
      iVar24 = ((iVar7 - iVar8) - iVar9) / *(int *)(lVar14 + 0x38);
    }
    iVar7 = 0;
    if (*(int *)(pIVar12 + 0x38) != 0) {
      iVar7 = ((iVar10 - *(int *)(pIVar11 + 0x38)) - *(int *)(pIVar13 + 0x38)) /
              *(int *)(pIVar12 + 0x38);
    }
    lVar14 = CachedResourcePtr<Sexy::Image>::operator->
                       ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf1a8);
    iVar8 = *(int *)(lVar14 + 0x38);
    lVar14 = CachedResourcePtr<Sexy::Image>::operator->
                       ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf288);
    iVar27 = *(int *)(lVar14 + 0x38);
    lVar14 = CachedResourcePtr<Sexy::Image>::operator->
                       ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf250);
    iVar9 = *(int *)(lVar14 + 0x38);
    iVar5 = FUN_03e63004(0x2d);
    iVar21 = *(int *)(this + 0x54);
    lVar14 = CachedResourcePtr<Sexy::Image>::operator->
                       ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf3d8);
    iVar6 = *(int *)(lVar14 + 0x3c);
    iVar20 = *(int *)(pIVar11 + 0x3c);
    lVar14 = CachedResourcePtr<Sexy::Image>::operator->
                       ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf250);
    iVar2 = 0;
    if (*(int *)(lVar14 + 0x3c) != 0) {
      iVar2 = (((iVar21 - iVar5) - iVar6) - iVar20) / *(int *)(lVar14 + 0x3c);
    }
    iVar6 = FUN_03e63004(0x2d);
    pIVar15 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                 ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf3d8);
    Sexy::Graphics::DrawImage(param_1,pIVar15,0,iVar6);
    lVar14 = CachedResourcePtr<Sexy::Image>::operator->
                       ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf3d8);
    iVar21 = *(int *)(lVar14 + 0x38);
    if (0 < iVar24) {
      iVar20 = 0;
      do {
        iVar20 = iVar20 + 1;
        pIVar15 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf320);
        Sexy::Graphics::DrawImage(param_1,pIVar15,iVar21,iVar6);
        lVar14 = CachedResourcePtr<Sexy::Image>::operator->
                           ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf320);
        iVar21 = iVar21 + *(int *)(lVar14 + 0x38);
      } while (iVar20 != iVar24);
    }
    pIVar15 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                 ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf200);
    Sexy::Graphics::DrawImage(param_1,pIVar15,iVar21,iVar6);
    lVar14 = CachedResourcePtr<Sexy::Image>::operator->
                       ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf200);
    iVar6 = iVar6 + *(int *)(lVar14 + 0x3c);
    if (0 < iVar2) {
      iVar24 = 0;
      iVar21 = 0;
      if (iVar9 != 0) {
        iVar21 = ((iVar10 - iVar8) - iVar27) / iVar9;
      }
      pIVar15 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                   ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf1a8);
      Sexy::Graphics::DrawImage(param_1,pIVar15,0,iVar6);
      CachedResourcePtr<Sexy::Image>::operator->((CachedResourcePtr<Sexy::Image> *)&DAT_06adf1a8);
      do {
        lVar14 = CachedResourcePtr<Sexy::Image>::operator->
                           ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf1a8);
        iVar8 = *(int *)(lVar14 + 0x38);
        if (0 < iVar21) {
          iVar9 = 0;
          do {
            iVar9 = iVar9 + 1;
            pIVar15 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                         ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf250);
            Sexy::Graphics::DrawImage(param_1,pIVar15,iVar8,iVar6);
            lVar14 = CachedResourcePtr<Sexy::Image>::operator->
                               ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf250);
            iVar8 = iVar8 + *(int *)(lVar14 + 0x38);
          } while (iVar9 != iVar21);
        }
        iVar24 = iVar24 + 1;
        lVar14 = CachedResourcePtr<Sexy::Image>::operator->
                           ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf250);
        iVar6 = iVar6 + *(int *)(lVar14 + 0x3c);
      } while (iVar24 != iVar2);
      iVar6 = FUN_03e63004(0x2d);
      lVar14 = CachedResourcePtr<Sexy::Image>::operator->
                         ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf3d8);
      iVar6 = iVar6 + *(int *)(lVar14 + 0x3c);
      pIVar15 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                   ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf288);
      Sexy::Graphics::DrawImage(param_1,pIVar15,iVar8,iVar6);
    }
    lVar14 = CachedResourcePtr<Sexy::Image>::operator->
                       ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf250);
    iVar6 = iVar6 + iVar2 * *(int *)(lVar14 + 0x3c);
    Sexy::Graphics::DrawImage(param_1,pIVar11,0,iVar6);
    iVar8 = *(int *)(pIVar11 + 0x38);
    if (0 < iVar7) {
      iVar9 = 0;
      do {
        iVar9 = iVar9 + 1;
        Sexy::Graphics::DrawImage(param_1,pIVar12,iVar8,iVar6);
        iVar8 = iVar8 + *(int *)(pIVar12 + 0x38);
      } while (iVar9 != iVar7);
    }
    pLVar1 = this + 0x110;
    Sexy::Graphics::DrawImage(param_1,pIVar13,iVar8,iVar6);
    iVar7 = FUN_03e63004(0x2d);
    iVar7 = iVar7 + *(int *)(this + 0x14c) + *(int *)(this + 0x13c);
    lVar14 = FUN_054765d0(pLVar1);
    if (lVar14 != 0) {
      plVar18 = *(long **)(this + 0x178);
      if (plVar18 == (long *)0x0) {
        if (*(PrimeTypeface **)(this + 0x188) != (PrimeTypeface *)0x0) {
          fVar25 = (float)Sexy::PrimeTypeface::GetAscent(*(PrimeTypeface **)(this + 0x188));
          fVar26 = UI::TypeSensitiveZero<float>();
          uVar23 = *(undefined8 *)(this + 0x188);
          iVar7 = (int)((fVar25 + (float)iVar7) - fVar26);
          pIVar16 = (Insets *)FUN_03e62ffc(*(undefined8 *)(this + 0x78),0);
          Sexy::Insets::Insets(aIStack_18,pIVar16);
          Sexy::Widget::WriteCenteredLine((Widget *)this,param_1,uVar23,aIStack_18,iVar7,pLVar1);
          fVar25 = (float)Sexy::PrimeTypeface::GetHeight(*(PrimeTypeface **)(this + 0x188));
          fVar26 = (float)Sexy::PrimeTypeface::GetAscent(*(PrimeTypeface **)(this + 0x188));
          iVar7 = (int)((fVar25 - fVar26) + (float)iVar7);
        }
      }
      else {
        iVar8 = (**(code **)(*plVar18 + 0x50))(plVar18);
        iVar9 = (**(code **)(**(long **)(this + 0x178) + 0x58))(*(long **)(this + 0x178));
        iVar7 = iVar7 + (iVar8 - iVar9);
        pIVar16 = (Insets *)FUN_03e62ffc(*(undefined8 *)(this + 0x78),0);
        Sexy::Insets::Insets(aIStack_18,pIVar16);
        Sexy::Widget::WriteCenteredLine(auStack_50,this,param_1,aIStack_18,iVar7,pLVar1);
        iVar8 = (**(code **)(**(long **)(this + 0x178) + 0x68))(*(long **)(this + 0x178));
        iVar9 = (**(code **)(**(long **)(this + 0x178) + 0x50))(*(long **)(this + 0x178));
        iVar7 = iVar7 + (iVar8 - iVar9);
      }
      iVar7 = iVar7 + *(int *)(this + 0x158);
    }
    iVar8 = *(int *)(this + 0x148);
    iVar9 = *(int *)(this + 0x50);
    iVar10 = *(int *)(this + 0x150);
    iVar24 = *(int *)(this + 0x138);
    iVar21 = *(int *)(this + 0x140);
    iVar6 = FUN_03e63004(4);
    iVar6 = ((((iVar9 - iVar8) - iVar10) - iVar24) - iVar21) - iVar6;
    iVar9 = FUN_03e63004(2);
    Sexy::Insets::Insets
              (aIStack_28,iVar8 + iVar24 + iVar9,iVar7,iVar6,
               Sexy::PrimeTypeface::ParagraphHeightUnlimited);
    plVar18 = *(long **)(this + 0x180);
    if (this[0x1b9] != (LawnDialog)0x0) {
      if (plVar18 == (long *)0x0) {
        pPVar19 = *(PrimeTypeface **)(this + 400);
        if (pPVar19 == (PrimeTypeface *)0x0) {
          iVar8 = 0;
        }
        else {
          pcVar22 = *(code **)(*(long *)this + 0x2b0);
          fVar25 = (float)Sexy::PrimeTypeface::GetLineSpacing(pPVar19);
          iVar8 = (*pcVar22)(this,param_1,pPVar19,iVar6,this + 0x120,
                             (int)(fVar25 + (float)*(int *)(this + 0x130)));
          plVar18 = *(long **)(this + 0x180);
        }
      }
      else {
        pcVar22 = *(code **)(*(long *)this + 0x2e8);
        iVar8 = (**(code **)(*plVar18 + 0x78))(plVar18);
        iVar8 = (*pcVar22)(this,param_1,iVar6,this + 0x120,iVar8 + *(int *)(this + 0x130));
        plVar18 = *(long **)(this + 0x180);
      }
      fVar25 = (float)ScaledApp::GetScaleAmount(gLawnApp);
      iVar9 = (int)((float)((((*(int *)(this + 0x54) - *(int *)(this + 0x154)) -
                             *(int *)(this + 0x144)) - iVar7) - *(int *)(this + 0x134)) -
                   fVar25 * 55.0);
      if (this[0x1b8] != (LawnDialog)0x0) {
        iVar9 = (int)((float)iVar9 - fVar25 * 36.0);
      }
      local_24 = local_24 + (iVar9 - iVar8) / 2;
    }
    if (plVar18 == (long *)0x0) {
      if (*(long *)(this + 400) != 0) {
        pcVar22 = *(code **)(*(long *)this + 0x2a8);
        pIVar16 = (Insets *)FUN_03e62ffc(*(undefined8 *)(this + 0x78),1);
        Sexy::Insets::Insets(aIStack_18,pIVar16);
        pPVar19 = *(PrimeTypeface **)(this + 400);
        fVar25 = (float)Sexy::PrimeTypeface::GetLineSpacing(pPVar19);
        iVar8 = (*pcVar22)(this,param_1,pPVar19,aIStack_18,aIStack_28,this + 0x120,
                           (int)(fVar25 + (float)*(int *)(this + 0x130)),*(undefined4 *)(this + 300)
                          );
        iVar7 = iVar7 + iVar8;
      }
    }
    else {
      pcVar22 = *(code **)(*(long *)this + 0x2e0);
      pIVar16 = (Insets *)FUN_03e62ffc(*(undefined8 *)(this + 0x78),1);
      Sexy::Insets::Insets(aIStack_18,pIVar16);
      iVar8 = (**(code **)(**(long **)(this + 0x180) + 0x78))(*(long **)(this + 0x180));
      iVar8 = (*pcVar22)(this,param_1,aIStack_18,aIStack_28,this + 0x120,
                         iVar8 + *(int *)(this + 0x130),*(undefined4 *)(this + 300));
      iVar7 = iVar7 + iVar8;
    }
    if (*(long *)(this + 0x220) != 0) {
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x228));
      if (cVar3 == '\0') {
        FUN_03e62ff8(*(undefined8 *)(*(long *)(this + 0x220) + 0x20));
        Sexy::TRect<int>::GetCenter();
        fVar25 = (float)PopAnimRig::GetDrawScale(*(PopAnimRig **)(this + 0x220));
        Sexy::TPoint<int>::operator*(aTStack_30,fVar25);
        Sexy::Point::Point((Point *)&local_38,(TPoint *)aIStack_18);
        iVar8 = *(int *)(this + 0x50);
        iVar9 = FUN_03e63004(0xba);
        Sexy::Graphics::Translate(param_1,iVar8 / 2 - local_38,(iVar9 + iVar7) - local_34);
      }
      else {
        lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x228));
        lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar14 + 0x28));
        fVar25 = (float)FUN_03e63018(*(undefined4 *)(lVar14 + 0x9c));
        iVar8 = FUN_03e63004(0xba);
        fVar26 = (float)FUN_03e63018(*(undefined4 *)(lVar14 + 0xa0));
        Sexy::Graphics::Translate
                  (param_1,(int)((float)(*(int *)(this + 0x50) / 2) - fVar25),
                   (int)((float)(iVar8 + iVar7) - fVar26));
      }
      PopAnimRig::Draw(*(PopAnimRig **)(this + 0x220),param_1);
    }
    this_00 = (RtWeakPtr *)(this + 0x230);
    bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar4) {
      iVar8 = *(int *)(this + 0x50);
      lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar9 = *(int *)(lVar14 + 0x38);
      iVar10 = FUN_03e63004(0xba);
      lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Sexy::Graphics::Translate
                (param_1,iVar8 / 2 - iVar9 / 2,(iVar10 + iVar7) - *(int *)(lVar14 + 0x38) / 2);
      pRVar17 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar17,0,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnDialog::ButtonPress(int) */

void LawnDialog::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Button_Select");
  return;
}


/* non-virtual thunk to LawnDialog::ButtonPress(int) */

void __thiscall LawnDialog::ButtonPress(LawnDialog *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* LawnDialog::CheckboxChecked(int, bool) */

void LawnDialog::CheckboxChecked(int param_1,bool param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Buttonclick");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnDialog::CalcSizeWithFont(int, int, bool) */

void __thiscall LawnDialog::CalcSizeWithFont(LawnDialog *this,int param_1,int param_2,bool param_3)

{
  LawnDialog *pLVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  code *pcVar11;
  float fVar12;
  Graphics aGStack_d0 [200];
  long local_8;
  
  iVar9 = *(int *)(this + 0x148);
  iVar7 = *(int *)(this + 0x150);
  pLVar1 = this + 0x110;
  iVar8 = *(int *)(this + 0x138);
  iVar2 = *(int *)(this + 0x140);
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_03e63004(param_1);
  iVar4 = iVar9 + iVar7 + iVar8 + iVar2 + iVar4;
  lVar10 = FUN_054765d0(pLVar1);
  if (lVar10 != 0) {
    iVar9 = (**(code **)(**(long **)(this + 0x178) + 0x80))(*(long **)(this + 0x178),pLVar1);
    iVar4 = iVar4 + iVar9;
  }
  lVar10 = CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf3d8);
  iVar9 = *(int *)(lVar10 + 0x38);
  lVar10 = CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf200);
  iVar7 = *(int *)(lVar10 + 0x38);
  lVar10 = CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf320);
  iVar9 = iVar9 + iVar7 + *(int *)(lVar10 + 0x38);
  if (iVar9 <= iVar4) {
    lVar10 = CachedResourcePtr<Sexy::Image>::operator->
                       ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf320);
    iVar4 = MakeMultiple(iVar4 - iVar9,*(int *)(lVar10 + 0x38));
    iVar9 = iVar9 + iVar4;
  }
  iVar5 = FUN_03e63004(0x2d);
  iVar7 = *(int *)(this + 0x14c);
  iVar8 = *(int *)(this + 0x154);
  iVar2 = *(int *)(this + 0x13c);
  iVar3 = *(int *)(this + 0x144);
  iVar4 = FUN_03e63004(param_2);
  iVar4 = iVar5 + iVar7 + iVar8 + iVar2 + iVar3 + iVar4;
  lVar10 = FUN_054765d0(pLVar1);
  if (lVar10 != 0) {
    iVar7 = (**(code **)(**(long **)(this + 0x178) + 0x68))(*(long **)(this + 0x178));
    iVar8 = (**(code **)(**(long **)(this + 0x178) + 0x58))(*(long **)(this + 0x178));
    iVar4 = iVar4 + (iVar7 - iVar8) + *(int *)(this + 0x158);
  }
  lVar10 = FUN_054765d0(this + 0x120);
  if (lVar10 != 0) {
    if (param_3) {
      lVar10 = CachedResourcePtr<Sexy::Image>::operator->
                         ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf320);
      iVar9 = iVar9 + *(int *)(lVar10 + 0x38);
      lVar10 = *(long *)(this + 0x180);
    }
    else {
      lVar10 = *(long *)(this + 0x180);
    }
    if (lVar10 != 0) {
      Sexy::Graphics::Graphics(aGStack_d0,(Image *)0x0);
      Effect_Barrage::SetViceBarrage
                ((Effect_Barrage *)aGStack_d0,*(Effect_Barrage **)(this + 0x180));
      iVar7 = *(int *)(this + 0x138);
      iVar8 = *(int *)(this + 0x148);
      iVar2 = *(int *)(this + 0x150);
      iVar3 = *(int *)(this + 0x140);
      pcVar11 = *(code **)(*(long *)this + 0x2e8);
      iVar5 = FUN_03e63004(4);
      iVar6 = (**(code **)(**(long **)(this + 0x180) + 0x78))(*(long **)(this + 0x180));
      iVar7 = (*pcVar11)(this,aGStack_d0,((((iVar9 - iVar8) - iVar2) - iVar7) - iVar3) - iVar5,
                         this + 0x120,iVar6 + *(int *)(this + 0x130));
      iVar4 = iVar4 + iVar7;
      Sexy::Graphics::~Graphics(aGStack_d0);
    }
    iVar7 = FUN_03e63004(0x1e);
    iVar4 = iVar4 + iVar7;
  }
  iVar8 = *(int *)(this + 0x134);
  iVar7 = FUN_03e63004(8);
  iVar7 = iVar4 + iVar8 + iVar7;
  fVar12 = (float)ScaledApp::GetScaleAmount(gLawnApp);
  lVar10 = CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf3d8);
  iVar4 = *(int *)(lVar10 + 0x3c);
  lVar10 = CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf228);
  if (this[0x1b8] == (LawnDialog)0x0) {
    fVar12 = (float)iVar4 + (float)*(int *)(lVar10 + 0x3c) + fVar12 * 45.0;
  }
  else {
    fVar12 = (float)ScaledApp::GetScaleAmount(gLawnApp);
    lVar10 = CachedResourcePtr<Sexy::Image>::operator->
                       ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf3d8);
    iVar4 = *(int *)(lVar10 + 0x3c);
    lVar10 = CachedResourcePtr<Sexy::Image>::operator->
                       ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf3a8);
    fVar12 = (float)*(int *)(lVar10 + 0x3c) + (float)iVar4 + fVar12 * 45.0;
  }
  iVar4 = (int)fVar12;
  if (iVar4 <= iVar7) {
    lVar10 = CachedResourcePtr<Sexy::Image>::operator->
                       ((CachedResourcePtr<Sexy::Image> *)&DAT_06adf1a8);
    iVar7 = MakeMultiple(iVar7 - iVar4,*(int *)(lVar10 + 0x3c));
    iVar4 = iVar4 + iVar7;
  }
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x4c),iVar9,iVar4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnDialog::CalcSize(int, int, bool) */

void __thiscall LawnDialog::CalcSize(LawnDialog *this,int param_1,int param_2,bool param_3)

{
  if ((*(long *)(this + 0x178) != 0) && (*(long *)(this + 0x180) != 0)) {
    CalcSizeWithFont(this,param_1,param_2,param_3);
    return;
  }
  if ((*(long *)(this + 0x188) != 0) && (*(long *)(this + 400) != 0)) {
    CalcSizeWithPrimeFont(this,param_1,param_2,param_3);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnDialog::SetButtonImage(Sexy::RtWeakPtr<Sexy::Image>, int, std::wstring const&) */

void __thiscall
LawnDialog::SetButtonImage(LawnDialog *this,RtWeakPtrBase *param_2,int param_3,wstring *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  PrimeTypeface *pPVar5;
  ResourceInfo *pRVar6;
  LotteryResultProgressBar *pLVar7;
  long lVar8;
  wchar_t *pwVar9;
  code *pcVar10;
  undefined1 auStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_2);
  Sexy::Dialog::SetButtonComponentImage((Dialog *)this,aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  (**(code **)(*(long *)this + 0x160))(this,&DAT_06a885e0,7);
  pcVar10 = *(code **)(*(long *)this + 0x170);
  Sexy::Color::Color((Color *)aRStack_18,0xe0,0xbb,0x62);
  (*pcVar10)(this,0,aRStack_18);
  pcVar10 = *(code **)(*(long *)this + 0x170);
  Sexy::Color::Color((Color *)aRStack_18,0xe0,0xbb,0x62);
  (*pcVar10)(this,1,aRStack_18);
  if (*(long **)(this + 0x1a8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a8) + 0x18))();
  }
  if (*(long **)(this + 0x1b0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1b0) + 0x18))();
  }
  if (param_3 == 1) {
    FUN_05478178(aRStack_18,L"[BUTTON_YES]",auStack_20);
    pPVar5 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)param_2);
    pLVar7 = (LotteryResultProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    pLVar7 = (LotteryResultProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    uVar4 = MakeStretchableNewLawnButton
                      (1000,(ButtonListener *)(this + 0xd8),(wstring *)aRStack_18,pPVar5,
                       (Image *)pRVar6,(Image *)0x0,(Image *)0x0,iVar1 / 3,iVar2 / 3);
    *(undefined8 *)(this + 0x1a8) = uVar4;
    FUN_05476c50(aRStack_18);
    nop();
    uVar3 = FUN_03e63004(0xfffffffd);
    lVar8 = *(long *)(this + 0x1a8);
    pwVar9 = L"[BUTTON_NO]";
  }
  else {
    if (param_3 != 2) {
      if (param_3 == 3) {
        pPVar5 = (PrimeTypeface *)
                 PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
        pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)param_2);
        pLVar7 = (LotteryResultProgressBar *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
        pLVar7 = (LotteryResultProgressBar *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
        lVar8 = MakeStretchableNewLawnButton
                          (1000,(ButtonListener *)(this + 0xd8),param_4,pPVar5,(Image *)pRVar6,
                           (Image *)0x0,(Image *)0x0,iVar1 / 3,iVar2 / 3);
        *(long *)(this + 0x1a8) = lVar8;
        uVar3 = FUN_03e63004(0xfffffffd);
        *(undefined4 *)(lVar8 + 0x1ac) = uVar3;
        *(undefined8 *)(this + 0x1b0) = 0;
      }
      else {
        *(undefined8 *)(this + 0x1a8) = 0;
        *(undefined8 *)(this + 0x1b0) = 0;
      }
      goto LAB_03e643a4;
    }
    FUN_05478178(aRStack_18,L"[BUTTON_OK]",auStack_20);
    pPVar5 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)param_2);
    pLVar7 = (LotteryResultProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    pLVar7 = (LotteryResultProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    uVar4 = MakeStretchableNewLawnButton
                      (1000,(ButtonListener *)(this + 0xd8),(wstring *)aRStack_18,pPVar5,
                       (Image *)pRVar6,(Image *)0x0,(Image *)0x0,iVar1 / 3,iVar2 / 3);
    *(undefined8 *)(this + 0x1a8) = uVar4;
    FUN_05476c50(aRStack_18);
    nop();
    uVar3 = FUN_03e63004(0xfffffffd);
    lVar8 = *(long *)(this + 0x1a8);
    pwVar9 = L"[BUTTON_CANCEL]";
  }
  *(undefined4 *)(lVar8 + 0x1ac) = uVar3;
  FUN_05478178(aRStack_18,pwVar9,auStack_20);
  pPVar5 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)param_2);
  pLVar7 = (LotteryResultProgressBar *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  pLVar7 = (LotteryResultProgressBar *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  uVar4 = MakeStretchableNewLawnButton
                    (0x3e9,(ButtonListener *)(this + 0xd8),(wstring *)aRStack_18,pPVar5,
                     (Image *)pRVar6,(Image *)0x0,(Image *)0x0,iVar1 / 3,iVar2 / 3);
  *(undefined8 *)(this + 0x1b0) = uVar4;
  FUN_05476c50(aRStack_18);
  nop();
  uVar3 = FUN_03e63004(0xfffffffd);
  *(undefined4 *)(*(long *)(this + 0x1b0) + 0x1ac) = uVar3;
LAB_03e643a4:
  CalcSize(this,0,0,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnDialog::LawnDialog(int, bool, std::wstring const&, std::wstring const&, std::wstring const&,
   int) */

void __thiscall
LawnDialog::LawnDialog
          (LawnDialog *this,int param_1,bool param_2,wstring *param_3,wstring *param_4,
          wstring *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  PrimeTypeface *pPVar5;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178((Insets *)&local_48,&DAT_056f11a8,auStack_50);
  Sexy::Dialog::Dialog((Dialog *)this,param_1,param_2,param_3,param_4,(wstring *)&local_48,0);
  FUN_05476c50((Insets *)&local_48);
  nop();
  *(undefined ***)this = &PTR_GetClass_0678cb20;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0678ceb0;
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x1c0),(DummyInit *)0x0);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x1f0),(DummyInit *)0x0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x228));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x230));
  *(undefined8 *)(this + 0x1a8) = 0;
  this[0x1a4] = (LawnDialog)0x1;
  this[0x1b9] = (LawnDialog)0x1;
  *(undefined4 *)(this + 0x1a0) = 0xffffffff;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  this[0x1b8] = (LawnDialog)0x0;
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x1c0),(Delegate2 *)aDStack_38);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x1f0),(Delegate2 *)aDStack_38);
  TodStringTranslate(param_3);
  FUN_054766c8(this + 0x110,(Insets *)&local_48);
  FUN_05476c50((Insets *)&local_48);
  TodStringTranslate(param_4);
  FUN_054766c8(this + 0x120,(Insets *)&local_48);
  FUN_05476c50((Insets *)&local_48);
  pPVar5 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_40_ThickOutline);
  Sexy::Dialog::SetHeaderFont((Dialog *)this,pPVar5);
  pPVar5 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Outline);
  Sexy::Dialog::SetLinesFont((Dialog *)this,pPVar5);
  iVar1 = FUN_03e63004(0x38);
  iVar2 = FUN_03e63004(0x19);
  iVar3 = FUN_03e63004(0x24);
  Sexy::Insets::Insets((Insets *)&local_48,iVar1,iVar2,iVar1,iVar3);
  *(undefined8 *)(this + 0x148) = local_48;
  *(undefined8 *)(this + 0x150) = uStack_40;
  uVar4 = FUN_03e63004(3);
  *(undefined4 *)(this + 0x158) = uVar4;
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06adf2b0);
  SetButtonImage(this,(Insets *)&local_48,param_6,param_5);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  Sexy::SexyAppBase::SetCursor((int)gLawnApp);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnDialog::SetPlant(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall LawnDialog::SetPlant(LawnDialog *this,RtWeakPtrBase *param_2)

{
  RtWeakPtr *this_00;
  LawnApp *this_01;
  bool bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long **)(this + 0x220) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x220) + 0x18))();
    *(undefined8 *)(this + 0x220) = 0;
  }
  this_00 = (RtWeakPtr *)(this + 0x228);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  this_01 = gLawnApp;
  if (bVar1) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    LawnApp::DeleteGroup(this_01,(string *)(lVar3 + 0x10));
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  plVar4 = (long *)CreateStandalonePlantAnimRig(aRStack_10,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  *(long **)(this + 0x220) = plVar4;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)param_2);
  (**(code **)(*plVar4 + 0x1a0))(plVar4,0);
  iVar2 = FUN_03e63004(0);
  CalcSize(this,0,iVar2,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnDialog::SetPopAnim(Sexy::PopAnim*, std::string const&) */

void __thiscall LawnDialog::SetPopAnim(LawnDialog *this,PopAnim *param_1,string *param_2)

{
  int iVar1;
  RtClass *pRVar2;
  PopAnimRig *pPVar3;
  long *plVar4;
  DummyInit aDStack_38 [48];
  long local_8;
  
  plVar4 = *(long **)(this + 0x220);
  local_8 = ___stack_chk_guard;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
    *(undefined8 *)(this + 0x220) = 0;
  }
  pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar3 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable(param_1,pRVar2);
  *(PopAnimRig **)(this + 0x220) = pPVar3;
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar3,param_2,0,aDStack_38);
  iVar1 = FUN_03e63004(0);
  CalcSize(this,0,iVar1,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnDialog::AddedToManager(Sexy::WidgetManager*) */

void __thiscall LawnDialog::AddedToManager(LawnDialog *this,WidgetManager *param_1)

{
  Sexy::WidgetContainer::AddedToManager((WidgetContainer *)this,param_1);
  if (*(long *)(this + 0x1a8) != 0) {
    (**(code **)(*(long *)this + 0x60))(this);
  }
  if (*(long *)(this + 0x1b0) != 0) {
    (**(code **)(*(long *)this + 0x60))(this);
  }
  return;
}


/* LawnDialog::RemovedFromManager(Sexy::WidgetManager*) */

void __thiscall LawnDialog::RemovedFromManager(LawnDialog *this,WidgetManager *param_1)

{
  Sexy::WidgetContainer::RemovedFromManager((WidgetContainer *)this,param_1);
  if (*(long *)(this + 0x1a8) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
  }
  if (*(long *)(this + 0x1b0) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
  }
  return;
}


/* LawnDialog::Update() */

void __thiscall LawnDialog::Update(LawnDialog *this)

{
  PopAnimRig *this_00;
  long *plVar1;
  float fVar2;
  float fVar3;
  
  Lua::CUIImage::Update((CUIImage *)this);
  if (*(int *)(this + 0x40) == *(int *)(this + 0x1a0)) {
    plVar1 = *(long **)(this + 0x1a8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x188))(plVar1,0);
    }
    plVar1 = *(long **)(this + 0x1b0);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x188))(plVar1,0);
    }
  }
  this_00 = *(PopAnimRig **)(this + 0x220);
  if (this_00 != (PopAnimRig *)0x0) {
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar2,fVar3);
  }
  (**(code **)(*(long *)this + 0xd8))(this);
  return;
}


/* LawnDialog::ButtonDepress(int) */

void __thiscall LawnDialog::ButtonDepress(LawnDialog *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 1000) {
    iVar1 = FUN_03e62fe0(*(undefined8 *)(this + 0x1c8),*(undefined8 *)(this + 0x1d8));
    if (iVar1 != 0) {
      Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x1c0));
      return;
    }
  }
  else if ((param_1 == 0x3e9) &&
          (iVar1 = FUN_03e62fe0(*(undefined8 *)(this + 0x1f8),*(undefined8 *)(this + 0x208)),
          iVar1 != 0)) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x1f0));
    return;
  }
  Sexy::Dialog::ButtonDepress((Dialog *)this,param_1);
  return;
}


/* non-virtual thunk to LawnDialog::ButtonDepress(int) */

void __thiscall LawnDialog::ButtonDepress(LawnDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* LawnDialog::KeyDown(Sexy::KeyCode) */

void __thiscall LawnDialog::KeyDown(LawnDialog *this,uint param_2)

{
  if (((param_2 == 0xd) || (param_2 == 0x20)) || ((param_2 & 0xffffffdf) == 0x59)) {
    Sexy::Dialog::ButtonDepress((Dialog *)this,1000);
    return;
  }
  if ((((param_2 & 0xffffffdf) == 0x4e) || (param_2 == 0x1b)) && (*(long *)(this + 0x1b0) != 0)) {
    Sexy::Dialog::ButtonDepress((Dialog *)this,0x3e9);
    return;
  }
  return;
}


/* LawnDialog::Resize(int, int, int, int) */

void __thiscall LawnDialog::Resize(LawnDialog *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  
  Sexy::Dialog::Resize((Dialog *)this,param_1,param_2,param_3,param_4);
  if (*(long *)(this + 0x1a8) == 0) {
    iVar4 = 0;
    plVar10 = (long *)0x0;
  }
  else {
    iVar4 = Sexy::Image::GetCelHeight(*(Image **)(*(long *)(this + 0x1a8) + 0xe8));
    Sexy::Image::GetCelWidth(*(Image **)(*(long *)(this + 0x1a8) + 0xe8));
    plVar10 = *(long **)(this + 0x1a8);
  }
  iVar1 = *(int *)(this + 0x148);
  iVar8 = *(int *)(this + 0x138);
  iVar5 = FUN_03e63004(0x1a);
  iVar5 = iVar1 + iVar8 + iVar5;
  iVar6 = FUN_03e63004(0xfffffff6);
  iVar9 = *(int *)(this + 0x50);
  iVar2 = *(int *)(this + 0x150);
  iVar3 = *(int *)(this + 0x140);
  iVar6 = (((iVar6 + *(int *)(this + 0x54)) - *(int *)(this + 0x154)) - *(int *)(this + 0x144)) -
          iVar4;
  iVar7 = FUN_03e63004(0x34);
  iVar7 = ((((iVar9 - iVar1) - iVar8) - iVar2) - iVar3) - iVar7;
  iVar8 = FUN_03e63004(5);
  iVar1 = iVar6 + 5;
  if (this[0x1b8] == (LawnDialog)0x0) {
    iVar1 = iVar6;
  }
  if (plVar10 != (long *)0x0) {
    if (*(long *)(this + 0x1b0) == 0) {
      (**(code **)(*plVar10 + 0x198))(plVar10,iVar5,iVar1,iVar7,iVar4);
      return;
    }
    iVar8 = (iVar7 - iVar8) / 2;
    (**(code **)(*plVar10 + 0x198))(plVar10,iVar5,iVar1,iVar8,iVar4);
    plVar10 = *(long **)(this + 0x1b0);
    iVar9 = FUN_03e63004(5);
    (**(code **)(*plVar10 + 0x198))(plVar10,((iVar5 + iVar7) - iVar8) + iVar9,iVar1,iVar8,iVar4);
  }
  return;
}

