// Class: ScrollingCounter


/* ScrollingCounter::SetTextColor(Sexy::Color const&) */

void __thiscall ScrollingCounter::SetTextColor(ScrollingCounter *this,Color *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


/* ScrollingCounter::SetRect(int, int, int, int) */

void __thiscall
ScrollingCounter::SetRect(ScrollingCounter *this,int param_1,int param_2,int param_3,int param_4)

{
  *(int *)(this + 100) = param_1;
  *(int *)(this + 0x68) = param_2;
  *(int *)(this + 0x6c) = param_3;
  *(int *)(this + 0x70) = param_4;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ScrollingCounter::SetFont(Sexy::PrimeTypeface*, int) */

void __thiscall ScrollingCounter::SetFont(ScrollingCounter *this,PrimeTypeface *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(PrimeTypeface **)this = param_1;
  if (-1 < param_2) {
    *(int *)(this + 0x5c) = param_2;
  }
  iVar2 = 0x30;
  while( true ) {
    iVar2 = iVar2 + 1;
    fVar3 = (float)Sexy::PrimeTypeface::CharWidth((wchar_t)param_1);
    local_c = (int)fVar3;
    piVar1 = eastl::max_alt<int>((int *)(this + 0x5c),&local_c);
    *(int *)(this + 0x5c) = *piVar1;
    if (iVar2 == 0x3a) break;
    param_1 = *(PrimeTypeface **)this;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ScrollingCounter::calculateDigits(int, std::vector<int, std::allocator<int> >&) */

void __thiscall
ScrollingCounter::calculateDigits(ScrollingCounter *this,int param_1,vector *param_2)

{
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)param_2);
  do {
    local_c = param_1 % 10;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)param_2,&local_c);
    param_1 = param_1 / 10;
  } while (param_1 != 0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ScrollingCounter::SetInitialValue(int) */

void __thiscall ScrollingCounter::SetInitialValue(ScrollingCounter *this,int param_1)

{
  *(int *)(this + 0x18) = param_1;
  calculateDigits(this,param_1,(vector *)(this + 0x20));
  calculateDigits(this,*(int *)(this + 0x18),(vector *)(this + 0x38));
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x04413724 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ScrollingCounter::nextScroll() */

void __thiscall ScrollingCounter::nextScroll(ScrollingCounter *this)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  uVar3 = 0xffffffff;
  if (*(int *)(this + 0x18) <= *(int *)(this + 0x1c)) {
    uVar3 = 1;
  }
  *(undefined4 *)(this + 0x50) = uVar3;
  local_8 = ___stack_chk_guard;
  calculateDigits(this,*(int *)(this + 0x18),(vector *)(this + 0x20));
  calculateDigits(this,*(int *)(this + 0x18) + *(int *)(this + 0x50),(vector *)(this + 0x38));
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x54) = uVar3;
  auVar5 = PVZ_T();
  uVar1 = *(int *)(this + 0x18) - *(int *)(this + 0x1c);
  local_10 = 0x3e800000;
  local_c = 0x3a83126f;
  fVar4 = CurveLerp<float>(auVar5,0x42c80000,
                           (float)(int)((uVar1 ^ (int)uVar1 >> 0x3f) - ((int)uVar1 >> 0x1f)),
                           &local_10,&local_c,2);
  *(float *)(this + 0x58) = fVar4 + auVar5._0_4_;
  uVar1 = *(int *)(this + 0x18) - *(int *)(this + 0x1c) >> 0x1f;
  iVar2 = (*(int *)(this + 0x18) - *(int *)(this + 0x1c) ^ uVar1) - uVar1;
  if (iVar2 < 0x70) {
    if (iVar2 < 0xc) {
      *(undefined4 *)(this + 0x60) = 1;
    }
    else {
      *(undefined4 *)(this + 0x60) = 0xb;
    }
  }
  else {
    *(undefined4 *)(this + 0x60) = 0x6f;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ScrollingCounter::SetValue(int) */

void __thiscall ScrollingCounter::SetValue(ScrollingCounter *this,int param_1)

{
  float fVar1;
  
  *(int *)(this + 0x1c) = param_1;
  if ((param_1 != *(int *)(this + 0x18)) &&
     (fVar1 = (float)PVZ_EOT(), *(float *)(this + 0x58) == fVar1)) {
    nextScroll(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ScrollingCounter::Draw(Sexy::Graphics*) */

void __thiscall ScrollingCounter::Draw(ScrollingCounter *this,Graphics *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  undefined8 uVar9;
  ulong uVar10;
  int iVar11;
  undefined8 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  GraphicsAutoState aGStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  Sexy::Graphics::Translate(param_1,*(int *)(this + 100),*(int *)(this + 0x68));
  Sexy::Graphics::SetClipRect(param_1,-0x32,0,*(int *)(this + 0x6c) + 0x32,*(int *)(this + 0x70));
  cVar2 = std::vector<int,std::allocator<int>>::empty
                    ((vector<int,std::allocator<int>> *)(this + 0x20));
  if (cVar2 == '\0') {
    iVar11 = *(int *)(this + 0x6c);
    FUN_05478178(auStack_28,&DAT_0570f658,aIStack_18);
    nop();
    for (uVar10 = 0; uVar6 = FUN_044134b4(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28))
        , uVar10 < uVar6; uVar10 = uVar10 + 1) {
      piVar7 = (int *)FUN_05476f5c(auStack_28,0);
      piVar8 = (int *)FUN_044134c0(*(undefined8 *)(this + 0x20),uVar10);
      uVar12 = *(undefined8 *)(this + 0x38);
      uVar9 = *(undefined8 *)(this + 0x40);
      *piVar7 = *piVar8 + 0x30;
      iVar3 = *(int *)(this + 0x5c);
      uVar6 = FUN_044134b4(uVar12,uVar9);
      iVar11 = iVar11 - iVar3;
      if ((uVar10 < uVar6) &&
         (piVar7 = (int *)FUN_044134c0(uVar12,uVar10),
         iVar5 = Sexy::PrimeTypeface::ParagraphHeightUnlimited, *piVar8 == *piVar7)) {
        uVar9 = *(undefined8 *)this;
        iVar4 = *(int *)(this + 0x70) + -8;
        FUN_05477b24(auStack_20,auStack_28);
        Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 8));
      }
      else {
        iVar3 = *(int *)(this + 0x50);
        iVar5 = *(int *)(this + 0x70);
        local_40 = iVar5 + -8;
        fVar13 = (float)Sexy::PrimeTypeface::GetHeight(*(PrimeTypeface **)this);
        iVar4 = *(int *)(this + 0x50);
        iVar1 = *(int *)(this + 0x70);
        local_3c = (int)((float)(iVar5 + -8) - (float)iVar3 * fVar13);
        local_38 = iVar1 + -8;
        fVar13 = (float)Sexy::PrimeTypeface::GetHeight(*(PrimeTypeface **)this);
        uVar9 = *(undefined8 *)this;
        uVar16 = *(undefined4 *)(this + 0x54);
        uVar15 = *(undefined4 *)(this + 0x58);
        local_34 = (int)((float)(iVar1 + -8) + (float)iVar4 * fVar13);
        uVar14 = PVZ_T();
        iVar5 = CurveLerp<int>(uVar16,uVar15,uVar14,&local_40,&local_3c,1);
        iVar3 = *(int *)(this + 0x5c);
        fVar13 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
        FUN_05477b24(auStack_20,auStack_28);
        Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 8));
        Sexy::PrimeTypeface::DrawString_Paragraph
                  ((PrimeTypeface *)(float)iVar11,(float)iVar5,(float)iVar3,fVar13,uVar9,param_1,
                   auStack_20,0,0,aIStack_18,0);
        FUN_05476c50(auStack_20);
        piVar7 = (int *)FUN_05476f5c(auStack_28,0);
        uVar9 = *(undefined8 *)(this + 0x38);
        uVar6 = FUN_044134b4(uVar9,*(undefined8 *)(this + 0x40));
        if (uVar10 < uVar6) {
          piVar8 = (int *)FUN_044134c0(uVar9,uVar10);
          iVar3 = *piVar8 + 0x30;
        }
        else {
          iVar3 = 0x20;
        }
        uVar16 = *(undefined4 *)(this + 0x54);
        uVar9 = *(undefined8 *)this;
        uVar15 = *(undefined4 *)(this + 0x58);
        *piVar7 = iVar3;
        uVar14 = PVZ_T();
        iVar4 = CurveLerp<int>(uVar16,uVar15,uVar14,&local_34,&local_38,1);
        iVar5 = Sexy::PrimeTypeface::ParagraphHeightUnlimited;
        iVar3 = *(int *)(this + 0x5c);
        FUN_05477b24(auStack_20,auStack_28);
        Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 8));
      }
      Sexy::PrimeTypeface::DrawString_Paragraph
                ((PrimeTypeface *)(float)iVar11,(float)iVar4,(float)iVar3,(float)iVar5,uVar9,param_1
                 ,auStack_20,0,0,aIStack_18,0);
      FUN_05476c50(auStack_20);
    }
    FUN_05476c50(auStack_28);
  }
  fVar13 = (float)PVZ_T();
  if (*(float *)(this + 0x58) <= fVar13) {
    iVar11 = *(int *)(this + 0x18) + *(int *)(this + 0x50) * *(int *)(this + 0x60);
    *(int *)(this + 0x18) = iVar11;
    if (iVar11 == *(int *)(this + 0x1c)) {
      uVar14 = PVZ_EOT();
      *(undefined4 *)(this + 0x58) = uVar14;
      *(undefined4 *)(this + 0x54) = uVar14;
      calculateDigits(this,iVar11,(vector *)(this + 0x20));
      calculateDigits(this,*(int *)(this + 0x18),(vector *)(this + 0x38));
    }
    else {
      nextScroll(this);
    }
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

