// Class: ToolTipWidget


/* ToolTipWidget::~ToolTipWidget() */

void __thiscall ToolTipWidget::~ToolTipWidget(ToolTipWidget *this)

{
  FUN_05476c50(this + 0x10);
  FUN_05476c50(this + 8);
  FUN_05476c50(this);
  return;
}


/* ToolTipWidget::ToolTipWidget() */

void __thiscall ToolTipWidget::ToolTipWidget(ToolTipWidget *this)

{
  FUN_05476574();
  FUN_05476574(this + 8);
  FUN_05476574(this + 0x10);
  *(undefined4 *)(this + 0x18) = 0;
  this[0x28] = (ToolTipWidget)0x1;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x29] = (ToolTipWidget)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(gLawnApp + 0x728);
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  return;
}


/* ToolTipWidget::Update() */

void __thiscall ToolTipWidget::Update(ToolTipWidget *this)

{
  if (0 < *(int *)(this + 0x38)) {
    *(int *)(this + 0x38) = *(int *)(this + 0x38) + -1;
  }
  return;
}


/* ToolTipWidget::FlashWarning() */

void __thiscall ToolTipWidget::FlashWarning(ToolTipWidget *this)

{
  *(undefined4 *)(this + 0x38) = 0x46;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToolTipWidget::GetLines(std::vector<std::wstring, std::allocator<std::wstring > >&) */

void __thiscall ToolTipWidget::GetLines(ToolTipWidget *this,vector *param_1)

{
  ToolTipWidget *pTVar1;
  wchar_t wVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  float fVar8;
  wstring awStack_10 [8];
  long local_8;
  
  pTVar1 = this + 8;
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_054765c4(pTVar1);
  uVar4 = 0;
  if (uVar3 == 0) {
LAB_044b2e60:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
LAB_044b2de4:
  iVar6 = 0;
  uVar7 = uVar4;
  do {
    if (uVar7 < uVar3) {
      piVar5 = (int *)FUN_05476f5c(pTVar1,uVar7);
      if ((*piVar5 == 0x20) || (piVar5 = (int *)FUN_05476f5c(pTVar1,uVar7), *piVar5 == 10)) {
        uVar3 = FUN_054765c4(pTVar1);
        goto LAB_044b2df8;
      }
    }
    else {
LAB_044b2df8:
      if (((uVar7 == uVar3) || (*(int *)(this + 0x34) <= iVar6)) ||
         (piVar5 = (int *)FUN_05476f5c(pTVar1,uVar7), *piVar5 == 10)) break;
    }
    wVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    FUN_05476f5c(pTVar1,uVar7);
    fVar8 = (float)Sexy::PrimeTypeface::CharWidth(wVar2);
    iVar6 = (int)(fVar8 + (float)iVar6);
    uVar3 = FUN_054765c4(pTVar1);
    uVar7 = uVar7 + 1;
  } while( true );
  FUN_05477da4(awStack_10,pTVar1,uVar4,uVar7 - uVar4);
  std::vector<std::wstring,std::allocator<std::wstring>>::push_back
            ((vector<std::wstring,std::allocator<std::wstring>> *)param_1,awStack_10);
  uVar4 = FUN_054765c4(pTVar1);
  if (uVar7 < uVar4) {
    piVar5 = (int *)FUN_05476f5c(pTVar1,uVar7);
    if (*piVar5 == 10) {
      uVar4 = FUN_054765c4(pTVar1);
      uVar7 = uVar7 + 1;
    }
    else {
      uVar4 = FUN_054765c4(pTVar1);
    }
  }
  while ((uVar7 < uVar4 && (piVar5 = (int *)FUN_05476f5c(pTVar1,uVar7), *piVar5 == 0x20))) {
    uVar4 = FUN_054765c4(pTVar1);
    uVar7 = uVar7 + 1;
  }
  FUN_05476c50(awStack_10);
  uVar3 = FUN_054765c4(pTVar1);
  uVar4 = uVar7;
  if (uVar7 == uVar3) goto LAB_044b2e60;
  goto LAB_044b2de4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToolTipWidget::CalculateSize() */

void __thiscall ToolTipWidget::CalculateSize(ToolTipWidget *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  PrimeTypeface *pPVar9;
  ulong uVar10;
  float fVar11;
  int local_34;
  int local_30;
  int local_2c;
  int local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  FUN_05477b24(local_28,this);
  local_34 = Sexy::PrimeTypeface::StringWidth(uVar4,local_28);
  FUN_05476c50(local_28);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  FUN_05477b24(local_28,this + 0x10);
  local_30 = Sexy::PrimeTypeface::StringWidth(uVar4,local_28);
  FUN_05476c50(local_28);
  piVar5 = eastl::max_alt<int>(&local_30,&local_34);
  iVar1 = *piVar5;
  local_34 = iVar1;
  local_2c = FUN_044b2cec(100);
  local_28[0] = FUN_044b2cec(0x1e);
  local_28[0] = iVar1 - local_28[0];
  piVar5 = eastl::max_alt<int>(&local_2c,local_28);
  *(int *)(this + 0x34) = *piVar5;
  GetLines(this,(vector *)&local_20);
  for (uVar10 = 0; uVar7 = FUN_044b2cd8(local_20,local_18), uVar10 < uVar7; uVar10 = uVar10 + 1) {
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    uVar6 = FUN_044b2ce4(local_20,uVar10);
    FUN_05477b24(local_28,uVar6);
    local_2c = Sexy::PrimeTypeface::StringWidth(uVar4,local_28);
    FUN_05476c50(local_28);
    piVar5 = eastl::max_alt<int>(&local_34,&local_2c);
    local_34 = *piVar5;
  }
  iVar1 = FUN_044b2cec(6);
  lVar8 = FUN_054765c4(this);
  if (lVar8 != 0) {
    pPVar9 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    fVar11 = (float)Sexy::PrimeTypeface::GetAscent(pPVar9);
    iVar2 = FUN_044b2cec(2);
    iVar1 = (int)(fVar11 + (float)iVar1 + (float)iVar2);
  }
  lVar8 = FUN_054765c4(this + 0x10);
  if (lVar8 != 0) {
    pPVar9 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    fVar11 = (float)Sexy::PrimeTypeface::GetAscent(pPVar9);
    iVar2 = FUN_044b2cec(2);
    iVar1 = (int)(fVar11 + (float)iVar1 + (float)iVar2);
  }
  pPVar9 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  fVar11 = (float)Sexy::PrimeTypeface::GetAscent(pPVar9);
  uVar10 = FUN_044b2cd8(local_20,local_18);
  iVar2 = FUN_044b2cec(2);
  iVar3 = FUN_044b2cec(10);
  *(int *)(this + 0x20) = local_34 + iVar3;
  *(int *)(this + 0x24) = ((int)uVar10 + -1) * iVar2 + (int)((float)iVar1 + fVar11 * (float)uVar10);
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToolTipWidget::SetLabel(std::wstring const&) */

void __thiscall ToolTipWidget::SetLabel(ToolTipWidget *this,wstring *param_1)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(param_1);
  FUN_054766c8(this + 8,auStack_10);
  FUN_05476c50(auStack_10);
  CalculateSize(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToolTipWidget::SetTitle(std::wstring const&) */

void __thiscall ToolTipWidget::SetTitle(ToolTipWidget *this,wstring *param_1)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(param_1);
  FUN_054766c8(this,auStack_10);
  FUN_05476c50(auStack_10);
  CalculateSize(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToolTipWidget::SetWarningText(std::wstring const&) */

void __thiscall ToolTipWidget::SetWarningText(ToolTipWidget *this,wstring *param_1)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(param_1);
  FUN_054766c8(this + 0x10,auStack_10);
  FUN_05476c50(auStack_10);
  CalculateSize(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToolTipWidget::Draw(Sexy::Graphics*) */

void __thiscall ToolTipWidget::Draw(ToolTipWidget *this,Graphics *param_1)

{
  ToolTipWidget *pTVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  PrimeTypeface *pPVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  Color local_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x28] == (ToolTipWidget)0x0) goto LAB_044b3638;
  iVar9 = *(int *)(this + 0x18);
  if (this[0x29] != (ToolTipWidget)0x0) {
    iVar9 = iVar9 - *(int *)(this + 0x20) / 2;
  }
  fVar11 = *(float *)(param_1 + 0x10);
  if ((float)*(int *)(this + 0x2c) - fVar11 <= (float)iVar9) {
    if ((float)(*(int *)(this + 0x20) + iVar9) + fVar11 <= (float)*(int *)(gLawnApp + 0x724))
    goto LAB_044b342c;
    iVar8 = *(int *)(this + 0x1c);
    fVar12 = *(float *)(param_1 + 0x14);
    fVar13 = -fVar12;
    iVar9 = (*(int *)(gLawnApp + 0x724) - *(int *)(this + 0x20)) - (int)fVar11;
    if ((float)iVar8 < fVar13) goto LAB_044b3444;
LAB_044b36c0:
    if ((float)*(int *)(this + 0x30) < (float)(*(int *)(this + 0x24) + iVar8) + fVar12) {
      iVar8 = (*(int *)(this + 0x30) - *(int *)(this + 0x24)) - (int)fVar12;
    }
  }
  else {
    iVar9 = *(int *)(this + 0x2c) - (int)fVar11;
LAB_044b342c:
    iVar8 = *(int *)(this + 0x1c);
    fVar12 = *(float *)(param_1 + 0x14);
    fVar13 = -fVar12;
    if (fVar13 <= (float)iVar8) goto LAB_044b36c0;
LAB_044b3444:
    iVar8 = (int)fVar13;
  }
  Sexy::Insets::Insets((Insets *)&local_20,0xff,0xff,200,0xff);
  Sexy::Graphics::SetColor(param_1,(Color *)&local_20);
  Sexy::Graphics::FillRect(param_1,iVar9,iVar8,*(int *)(this + 0x20),*(int *)(this + 0x24));
  Sexy::Color::Color((Color *)&local_20,0);
  Sexy::Graphics::SetColor(param_1,(Color *)&local_20);
  Sexy::Graphics::DrawRect
            (param_1,iVar9,iVar8,*(int *)(this + 0x20) + -1,*(int *)(this + 0x24) + -1);
  iVar2 = FUN_044b2cec(1);
  iVar8 = iVar8 + iVar2;
  lVar4 = FUN_054765c4(this);
  if (lVar4 != 0) {
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    FUN_05477b24((Insets *)&local_20,this);
    iVar3 = Sexy::PrimeTypeface::StringWidth(uVar5,(Insets *)&local_20);
    FUN_05476c50((Insets *)&local_20);
    iVar2 = *(int *)(this + 0x20);
    pPVar6 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    fVar11 = (float)Sexy::PrimeTypeface::GetAscent(pPVar6);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    FUN_05477b24(local_30,this);
    Sexy::Color::Color((Color *)&local_20,0);
    Sexy::PrimeTypeface::DrawString_Simple
              ((PrimeTypeface *)(float)(iVar9 + (iVar2 - iVar3) / 2),
               (float)(int)(fVar11 + (float)iVar8),uVar5,param_1,local_30,(Insets *)&local_20,0);
    FUN_05476c50(local_30);
    pPVar6 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    fVar11 = (float)Sexy::PrimeTypeface::GetAscent(pPVar6);
    iVar8 = (int)((float)iVar8 + 2.0 + fVar11);
  }
  pTVar1 = this + 0x10;
  lVar4 = FUN_054765c4(pTVar1);
  if (lVar4 != 0) {
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    FUN_05477b24((Insets *)&local_20,pTVar1);
    iVar3 = Sexy::PrimeTypeface::StringWidth(uVar5,(Insets *)&local_20);
    FUN_05476c50((Insets *)&local_20);
    iVar2 = *(int *)(this + 0x20);
    pPVar6 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    fVar11 = (float)Sexy::PrimeTypeface::GetAscent(pPVar6);
    Sexy::Color::Color(local_30,0xff,0,0);
    if ((0 < *(int *)(this + 0x38)) && (*(int *)(this + 0x38) % 0x14 < 10)) {
      Sexy::Color::Color((Color *)&local_20,0,0,0);
    }
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    FUN_05477b24(auStack_38,pTVar1);
    Sexy::Insets::Insets((Insets *)&local_20,(Insets *)local_30);
    Sexy::PrimeTypeface::DrawString_Simple
              ((PrimeTypeface *)(float)(iVar9 + (iVar2 - iVar3) / 2),
               (float)(int)(fVar11 + (float)iVar8),uVar5,param_1,auStack_38,(Insets *)&local_20,0);
    FUN_05476c50(auStack_38);
    pPVar6 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    fVar11 = (float)Sexy::PrimeTypeface::GetAscent(pPVar6);
    iVar2 = FUN_044b2cec(2);
    iVar8 = (int)(fVar11 + (float)iVar8 + (float)iVar2);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  GetLines(this,(vector *)&local_20);
  for (uVar10 = 0; uVar5 = local_20, uVar7 = FUN_044b2cd8(local_20,local_18), uVar10 < uVar7;
      uVar10 = uVar10 + 1) {
    uVar5 = FUN_044b2ce4(uVar5,uVar10);
    FUN_05477b24(auStack_40,uVar5);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    FUN_05477b24(local_30,auStack_40);
    iVar3 = Sexy::PrimeTypeface::StringWidth(uVar5,local_30);
    FUN_05476c50(local_30);
    iVar2 = *(int *)(this + 0x20);
    pPVar6 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    fVar11 = (float)Sexy::PrimeTypeface::GetAscent(pPVar6);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    FUN_05477b24(auStack_38,auStack_40);
    Sexy::Color::Color(local_30,0);
    Sexy::PrimeTypeface::DrawString_Simple
              ((PrimeTypeface *)(float)(iVar9 + (iVar2 - iVar3) / 2),
               (float)(int)(fVar11 + (float)iVar8),uVar5,param_1,auStack_38,local_30,0);
    FUN_05476c50(auStack_38);
    pPVar6 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    fVar11 = (float)Sexy::PrimeTypeface::GetAscent(pPVar6);
    iVar2 = FUN_044b2cec(2);
    iVar8 = (int)(fVar11 + (float)iVar8 + (float)iVar2);
    FUN_05476c50(auStack_40);
  }
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)&local_20);
LAB_044b3638:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

