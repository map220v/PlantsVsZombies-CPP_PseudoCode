// Class: PVZ2UILevelSummary


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UILevelSummary::Draw(Sexy::Graphics*) */

void __thiscall PVZ2UILevelSummary::Draw(PVZ2UILevelSummary *this,Graphics *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  GraphicsAutoState aGStack_28 [8];
  undefined1 auStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_28,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  iVar3 = FUN_0367cf6c(0);
  iVar1 = *(int *)(this + 0x50);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_34_ThickOutline);
  iVar4 = FUN_0367cf6c(0);
  iVar5 = FUN_0367cf6c(0xffffff9c);
  iVar6 = FUN_0367cf6c(0x32);
  FUN_05477b24(auStack_20,this + 0xd8);
  Sexy::Color::Color(aCStack_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)iVar4,(float)iVar5,(float)(iVar1 - iVar3),(float)iVar6,uVar7,
             param_1,auStack_20,1,1,aCStack_18,0);
  FUN_05476c50(auStack_20);
  if (this[0x161] == (PVZ2UILevelSummary)0x0) {
    if (this[0x162] == (PVZ2UILevelSummary)0x0) {
      if (this[0x160] == (PVZ2UILevelSummary)0x0) {
        cVar2 = std::vector<std::wstring,std::allocator<std::wstring>>::empty
                          ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x120));
        if (cVar2 != '\0') {
          (**(code **)(*(long *)this + 0x310))(this,param_1);
          goto LAB_0367d1a8;
        }
        if (this[0x160] == (PVZ2UILevelSummary)0x0) {
          (**(code **)(*(long *)this + 0x318))(this,param_1);
          goto LAB_0367d1a8;
        }
      }
      (**(code **)(*(long *)this + 800))(this,param_1);
    }
    else {
      (**(code **)(*(long *)this + 0x330))(this,param_1);
    }
  }
  else {
    (**(code **)(*(long *)this + 0x328))(this,param_1);
  }
LAB_0367d1a8:
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UILevelSummary::DrawBasicLevelObjectiveScreen(Sexy::Graphics*) */

void __thiscall
PVZ2UILevelSummary::DrawBasicLevelObjectiveScreen(PVZ2UILevelSummary *this,Graphics *param_1)

{
  Insets *pIVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  Image *pIVar12;
  PrimeTypeface *pPVar13;
  ulong uVar14;
  int *piVar15;
  wchar_t *pwVar16;
  undefined8 uVar17;
  ulong uVar18;
  float fVar19;
  undefined1 auVar20 [16];
  int local_88;
  int local_84;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  Insets aIStack_70 [16];
  Color aCStack_60 [16];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  wstring awStack_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_70,(Insets *)&PrimeText_Game::Color_Description_Brown);
  Sexy::Color::Color(aCStack_60,2);
  FUN_05476574(auStack_80);
  lVar10 = FUN_0367ce84(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
  if (lVar10 == 1) {
    pwVar16 = L"[OBJECTIVE_CHALLENGE_HEADER_SINGLE]";
  }
  else {
    if (lVar10 != 2) {
      FUN_05478178((wstring *)local_30,L"[OBJECTIVE_CHALLENGE_HEADER_MULTIPLE]",&local_50);
      uVar11 = FUN_0367ce84(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
      Sexy::StrFormat(L"%d",awStack_40,uVar11);
      TodReplaceString((wstring *)local_30,L"{COUNT}",awStack_40);
      FUN_054766c8(auStack_80,local_20);
      FUN_05476c50(local_20);
      FUN_05476c50(awStack_40);
      FUN_05476c50((wstring *)local_30);
      nop();
      goto LAB_0367d388;
    }
    pwVar16 = L"[OBJECTIVE_CHALLENGE_HEADER_DOUBLE]";
  }
  TodStringTranslate(pwVar16);
  FUN_054766c8(auStack_80,local_20);
  FUN_05476c50(local_20);
LAB_0367d388:
  uVar18 = 0;
  iVar4 = FUN_0367cf6c(0xfffffff1);
  iVar7 = *(int *)(this + 0x54);
  iVar5 = FUN_0367cf6c(0xf0);
  iVar5 = (iVar4 + iVar7) - iVar5;
  iVar6 = FUN_0367cf6c(0x1e);
  iVar4 = *(int *)(this + 0x50);
  Sexy::Color::Color((Color *)&local_50);
  local_50 = 0x26;
  local_4c = 0x65;
  local_48 = 7;
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32);
  iVar7 = FUN_0367cf6c(0xf);
  iVar8 = FUN_0367cf6c(0x41);
  FUN_05477b24((_Bit_reference *)local_30,auStack_80);
  Sexy::Insets::Insets((Insets *)local_20,(Insets *)&local_50);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)iVar7,(float)iVar5,(float)(iVar4 - iVar6),(float)iVar8,uVar11,
             param_1,(_Bit_reference *)local_30,1,1,(Insets *)local_20,0);
  FUN_05476c50((_Bit_reference *)local_30);
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaf50);
  iVar7 = FUN_0367cf6c(0xf);
  Sexy::Graphics::DrawImage(param_1,pIVar12,iVar7,iVar5);
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaf50);
  iVar7 = FUN_0367cf6c(0xf);
  iVar8 = FUN_0367cf6c(0x3c);
  Sexy::Graphics::DrawImageMirror(param_1,pIVar12,iVar7 + iVar8,iVar5,true);
  lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaef0);
  iVar7 = FUN_0367cf6c(0xf);
  iVar7 = iVar7 + *(int *)(lVar10 + 0x38);
  iVar8 = FUN_0367cf6c(0x1e);
  local_88 = 0;
  local_84 = 0;
  iVar6 = ((iVar4 - iVar6) - iVar8) - iVar7;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  pPVar13 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  iVar4 = FUN_0367cf6c(0x9e);
  uVar11 = GetSizedFontForStrings
                     (pPVar13,(vector *)(this + 0xe0),iVar6,iVar4,&local_88,&local_84,
                      (vector *)local_20);
  iVar8 = FUN_0367cf6c(0x41);
  iVar4 = FUN_0367cf6c(0xf0);
  iVar4 = (iVar4 - iVar8) - local_84;
  iVar9 = FUN_0367cf6c(0xf);
  iVar4 = iVar8 + iVar5 + iVar4 / 2;
  uVar17 = *(undefined8 *)(this + 0xe0);
  iVar5 = (iVar6 - local_88) / 2 + iVar9 * 2;
  uVar14 = FUN_0367ce84(uVar17,*(undefined8 *)(this + 0xe8));
  if (uVar14 != 0) {
    do {
      FUN_0367ce98(uVar17,uVar18);
      cVar2 = FUN_054765e8();
      if (cVar2 == '\0') {
        pPVar13 = (PrimeTypeface *)
                  PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
        fVar19 = (float)Sexy::PrimeTypeface::GetLineHeight(pPVar13);
        lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaef0);
        iVar6 = (int)((float)iVar4 + (fVar19 - (float)*(int *)(lVar10 + 0x3c)) * 0.5);
        pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaef0);
        Sexy::Graphics::DrawImage(param_1,pIVar12,iVar5,iVar6);
        if (*(int *)(this + 0xd4) == 1) {
          pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaf18);
          iVar8 = FUN_0367cf6c(0xfffffffa);
          iVar9 = FUN_0367cf6c(0xfffffff1);
          Sexy::Graphics::DrawImage(param_1,pIVar12,iVar8 + iVar5,iVar9 + iVar6);
        }
        auVar20 = FUN_0367cf10(*(undefined8 *)(this + 0xf8),uVar18);
        local_30 = auVar20;
        bVar3 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_30);
        pIVar1 = (Insets *)aCStack_60;
        if (!bVar3) {
          pIVar1 = aIStack_70;
        }
        Sexy::Insets::Insets((Insets *)awStack_40,pIVar1);
        fVar19 = (float)local_88;
        piVar15 = (int *)FUN_0367cea0(local_20[0],uVar18);
        iVar6 = *piVar15;
        uVar17 = FUN_0367ce98(*(undefined8 *)(this + 0xe0),uVar18);
        FUN_05477b24(auStack_78,uVar17);
        Sexy::Insets::Insets((Insets *)local_30,(Insets *)awStack_40);
        Sexy::PrimeTypeface::DrawString_Paragraph
                  ((PrimeTypeface *)(float)(iVar5 + iVar7),(float)iVar4,fVar19,(float)iVar6,uVar11,
                   param_1,auStack_78,0,1,(_Bit_reference *)local_30,0);
        FUN_05476c50(auStack_78);
        piVar15 = (int *)FUN_0367cea0(local_20[0],uVar18);
        iVar6 = FUN_0367cf6c(5);
        uVar17 = *(undefined8 *)(this + 0xe0);
        iVar4 = iVar4 + iVar6 + *piVar15;
        uVar14 = FUN_0367ce84(uVar17,*(undefined8 *)(this + 0xe8));
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar14);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
  FUN_05476c50(auStack_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UILevelSummary::DrawSplitLevelObjectiveScreen(Sexy::Graphics*) */

void __thiscall
PVZ2UILevelSummary::DrawSplitLevelObjectiveScreen(PVZ2UILevelSummary *this,Graphics *param_1)

{
  Insets *pIVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  SalesProgressBar *pSVar13;
  Image *pIVar14;
  LotteryResultProgressBar *pLVar15;
  PrimeTypeface *pPVar16;
  undefined8 uVar17;
  ulong uVar18;
  int *piVar19;
  wchar_t *pwVar20;
  undefined8 uVar21;
  ulong uVar22;
  float fVar23;
  undefined1 auVar24 [16];
  Insets *local_f0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *local_e8;
  int local_b0 [4];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  Insets aIStack_88 [16];
  Color aCStack_78 [16];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  Insets aIStack_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38 [3];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_88,(Insets *)&PrimeText_Game::Color_Description_Brown);
  Sexy::Color::Color(aCStack_78,2);
  FUN_05476574(auStack_a0);
  lVar11 = FUN_0367ce84(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
  if (lVar11 == 1) {
    pwVar20 = L"[OBJECTIVE_CHALLENGE_HEADER_SINGLE]";
  }
  else {
    if (lVar11 != 2) {
      FUN_05478178((wstring *)local_38,L"[OBJECTIVE_CHALLENGE_HEADER_MULTIPLE]",aIStack_58);
      uVar12 = FUN_0367ce84(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
      Sexy::StrFormat(L"%d",(wstring *)local_48,uVar12);
      TodReplaceString((wstring *)local_38,L"{COUNT}",(wstring *)local_48);
      FUN_054766c8(auStack_a0,local_20);
      FUN_05476c50(local_20);
      FUN_05476c50((wstring *)local_48);
      FUN_05476c50((wstring *)local_38);
      nop();
      goto LAB_0367d970;
    }
    pwVar20 = L"[OBJECTIVE_CHALLENGE_HEADER_DOUBLE]";
  }
  TodStringTranslate(pwVar20);
  FUN_054766c8(auStack_a0,local_20);
  FUN_05476c50(local_20);
LAB_0367d970:
  local_e8 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38;
  local_f0 = (Insets *)local_20;
  uVar22 = 0;
  TodStringTranslate(L"[OBJECTIVE_BONUS_CHALLENGE_HEADER]");
  iVar4 = FUN_0367cf6c(0x1e);
  iVar8 = *(int *)(this + 0x54);
  iVar4 = *(int *)(this + 0x50) - iVar4;
  iVar5 = FUN_0367cf6c(0xffffff79);
  iVar6 = FUN_0367cf6c(0x82);
  iVar5 = (iVar8 + iVar5) - iVar6;
  iVar7 = FUN_0367cf6c(0xfffffffb);
  iVar6 = (iVar8 + iVar7) - iVar6;
  Sexy::Color::Color((Color *)&local_68);
  local_68 = 0x26;
  local_64 = 0x65;
  local_60 = 7;
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32);
  iVar8 = FUN_0367cf6c(0xf);
  iVar7 = FUN_0367cf6c(0x41);
  FUN_05477b24(local_e8,auStack_a0);
  Sexy::Insets::Insets(local_f0,(Insets *)&local_68);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)iVar8,(float)iVar5,(float)iVar4,(float)iVar7,uVar12,param_1,
             local_e8,1,1,local_f0,0);
  FUN_05476c50(local_e8);
  iVar8 = FUN_0367cf6c(0x41);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaf50);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar13);
  iVar9 = FUN_0367cf6c(0x23);
  pIVar14 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaf50);
  iVar10 = FUN_0367cf6c(0xf);
  iVar8 = iVar5 + (iVar8 - iVar7) / 2;
  Sexy::Graphics::DrawImage(param_1,pIVar14,iVar10 + iVar9,iVar8);
  pIVar14 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaf50);
  iVar7 = FUN_0367cf6c(0xf);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaf50);
  iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  Sexy::Graphics::DrawImageMirror(param_1,pIVar14,((iVar7 + iVar4) - iVar10) - iVar9,iVar8,true);
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32);
  iVar8 = FUN_0367cf6c(0xf);
  iVar7 = FUN_0367cf6c(0x41);
  FUN_05477b24(local_e8,auStack_98);
  Sexy::Insets::Insets(local_f0,(Insets *)&local_68);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)iVar8,(float)iVar6,(float)iVar4,(float)iVar7,uVar12,param_1,
             local_e8,1,1,local_f0,0);
  FUN_05476c50(local_e8);
  iVar8 = FUN_0367cf6c(0x41);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaf50);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar13);
  pIVar14 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaf50);
  iVar10 = FUN_0367cf6c(0xf);
  iVar8 = iVar6 + (iVar8 - iVar7) / 2;
  Sexy::Graphics::DrawImage(param_1,pIVar14,iVar10 + iVar9,iVar8);
  pIVar14 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaf50);
  iVar7 = FUN_0367cf6c(0xf);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaf50);
  iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  Sexy::Graphics::DrawImageMirror(param_1,pIVar14,((iVar7 + iVar4) - iVar10) - iVar9,iVar8,true);
  lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaef0);
  iVar8 = FUN_0367cf6c(0xf);
  iVar8 = iVar8 + *(int *)(lVar11 + 0x38);
  iVar7 = FUN_0367cf6c(10);
  local_b0[0] = 0;
  local_b0[1] = 0;
  iVar7 = (iVar4 - iVar7) - iVar8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(local_e8);
  pPVar16 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  iVar4 = FUN_0367cf6c(0x3c);
  uVar12 = GetSizedFontForStrings
                     (pPVar16,(vector *)(this + 0xe0),iVar7,iVar4,local_b0,local_b0 + 1,
                      (vector *)local_e8);
  local_b0[2] = 0;
  local_b0[3] = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_f0);
  pPVar16 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  iVar4 = FUN_0367cf6c(0x3c);
  uVar17 = GetSizedFontForStrings
                     (pPVar16,(vector *)(this + 0x120),iVar7,iVar4,local_b0 + 2,local_b0 + 3,
                      (vector *)local_f0);
  iVar4 = FUN_0367cf6c(0x41);
  iVar4 = iVar4 + iVar5;
  iVar5 = FUN_0367cf6c(0xf);
  iVar9 = FUN_0367cf6c(5);
  uVar21 = *(undefined8 *)(this + 0xe0);
  iVar5 = iVar5 + iVar9 + (iVar7 - local_b0[0]) / 2;
  uVar18 = FUN_0367ce84(uVar21,*(undefined8 *)(this + 0xe8));
  if (uVar18 != 0) {
    do {
      FUN_0367ce98(uVar21,uVar22);
      cVar2 = FUN_054765e8();
      if (cVar2 == '\0') {
        pPVar16 = (PrimeTypeface *)
                  PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
        fVar23 = (float)Sexy::PrimeTypeface::GetLineHeight(pPVar16);
        lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaef0);
        iVar7 = (int)((float)iVar4 + (fVar23 - (float)*(int *)(lVar11 + 0x3c)) * 0.5);
        pIVar14 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaef0);
        Sexy::Graphics::DrawImage(param_1,pIVar14,iVar5,iVar7);
        if (*(int *)(this + 0xd4) == 1) {
          pIVar14 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaf18);
          iVar9 = FUN_0367cf6c(0xfffffffa);
          iVar10 = FUN_0367cf6c(0xfffffff1);
          Sexy::Graphics::DrawImage(param_1,pIVar14,iVar9 + iVar5,iVar10 + iVar7);
        }
        auVar24 = FUN_0367cf10(*(undefined8 *)(this + 0xf8),uVar22);
        local_48 = auVar24;
        bVar3 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_48);
        pIVar1 = (Insets *)aCStack_78;
        if (!bVar3) {
          pIVar1 = aIStack_88;
        }
        Sexy::Insets::Insets(aIStack_58,pIVar1);
        fVar23 = (float)local_b0[0];
        piVar19 = (int *)FUN_0367cea0(local_38[0],uVar22);
        iVar7 = *piVar19;
        uVar21 = FUN_0367ce98(*(undefined8 *)(this + 0xe0),uVar22);
        FUN_05477b24(auStack_90,uVar21);
        Sexy::Insets::Insets((Insets *)local_48,aIStack_58);
        Sexy::PrimeTypeface::DrawString_Paragraph
                  ((PrimeTypeface *)(float)(iVar5 + iVar8),(float)iVar4,fVar23,(float)iVar7,uVar12,
                   param_1,auStack_90,0,1,(_Bit_reference *)local_48,0);
        FUN_05476c50(auStack_90);
        piVar19 = (int *)FUN_0367cea0(local_38[0],uVar22);
        iVar7 = FUN_0367cf6c(5);
        uVar21 = *(undefined8 *)(this + 0xe0);
        iVar4 = iVar4 + iVar7 + *piVar19;
        uVar18 = FUN_0367ce84(uVar21,*(undefined8 *)(this + 0xe8));
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar18);
  }
  iVar4 = FUN_0367cf6c(0x41);
  iVar4 = iVar4 + iVar6;
  uVar18 = 0;
  while( true ) {
    uVar22 = FUN_0367ce84(*(undefined8 *)(this + 0x120),*(undefined8 *)(this + 0x128));
    if (uVar22 <= uVar18) break;
    pPVar16 = (PrimeTypeface *)
              PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    fVar23 = (float)Sexy::PrimeTypeface::GetLineHeight(pPVar16);
    lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaef0);
    iVar6 = (int)((float)iVar4 + (fVar23 - (float)*(int *)(lVar11 + 0x3c)) * 0.5);
    pIVar14 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaef0);
    Sexy::Graphics::DrawImage(param_1,pIVar14,iVar5,iVar6);
    if (*(int *)(this + 0xd4) == 1) {
      pIVar14 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaf18);
      iVar7 = FUN_0367cf6c(0xfffffffa);
      iVar9 = FUN_0367cf6c(0xfffffff1);
      Sexy::Graphics::DrawImage(param_1,pIVar14,iVar5 + iVar7,iVar9 + iVar6);
    }
    auVar24 = FUN_0367cf10(*(undefined8 *)(this + 0x138),uVar18);
    local_48 = auVar24;
    bVar3 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_48);
    pIVar1 = (Insets *)aCStack_78;
    if (!bVar3) {
      pIVar1 = aIStack_88;
    }
    Sexy::Insets::Insets(aIStack_58,pIVar1);
    fVar23 = (float)local_b0[2];
    piVar19 = (int *)FUN_0367cea0(local_20[0],uVar18);
    iVar6 = *piVar19;
    uVar12 = FUN_0367ce98(*(undefined8 *)(this + 0x120),uVar18);
    FUN_05477b24(auStack_90,uVar12);
    Sexy::Insets::Insets((Insets *)local_48,aIStack_58);
    Sexy::PrimeTypeface::DrawString_Paragraph
              ((PrimeTypeface *)(float)(iVar8 + iVar5),(float)iVar4,fVar23,(float)iVar6,uVar17,
               param_1,auStack_90,0,1,(_Bit_reference *)local_48,0);
    FUN_05476c50(auStack_90);
    piVar19 = (int *)FUN_0367cea0(local_20[0],uVar18);
    iVar6 = FUN_0367cf6c(5);
    iVar4 = iVar4 + iVar6 + *piVar19;
    uVar18 = uVar18 + 1;
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_f0);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_e8);
  FUN_05476c50(auStack_98);
  FUN_05476c50(auStack_a0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UILevelSummary::DrawUnchartedModeTipsScreen(Sexy::Graphics*) */

void __thiscall
PVZ2UILevelSummary::DrawUnchartedModeTipsScreen(PVZ2UILevelSummary *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  Image *pIVar9;
  LotteryResultProgressBar *this_00;
  long lVar10;
  PrimeTypeface *pPVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  undefined8 uVar15;
  float fVar16;
  int local_78;
  int local_74;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  Insets aIStack_60 [16];
  Color aCStack_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  Insets aIStack_30 [16];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar14 = 0;
  Sexy::Insets::Insets(aIStack_60,(Insets *)&PrimeText_Game::Color_Description_Brown);
  Sexy::Color::Color(aCStack_50,2);
  TodStringTranslate(L"[UNCHARTED_WORLD_BOARD_SCREEN_TIPS]");
  iVar2 = FUN_0367cf6c(0xfffffff1);
  iVar4 = *(int *)(this + 0x54);
  iVar3 = FUN_0367cf6c(0xf0);
  iVar3 = (iVar2 + iVar4) - iVar3;
  iVar2 = FUN_0367cf6c(0x1e);
  iVar2 = *(int *)(this + 0x50) - iVar2;
  iVar4 = FUN_0367cf6c(0x41);
  Sexy::Color::Color((Color *)&local_40);
  local_40 = 0x26;
  local_3c = 0x65;
  local_38 = 7;
  iVar4 = iVar3 + iVar4 / 2;
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32);
  iVar5 = FUN_0367cf6c(0xf);
  iVar6 = FUN_0367cf6c(0x41);
  FUN_05477b24(aIStack_30,auStack_70);
  Sexy::Insets::Insets((Insets *)local_20,(Insets *)&local_40);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)iVar5,(float)iVar3,(float)iVar2,(float)iVar6,uVar8,param_1,
             aIStack_30,1,1,(Insets *)local_20,0);
  FUN_05476c50(aIStack_30);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaf50);
  iVar5 = FUN_0367cf6c(0xf);
  Sexy::Graphics::DrawImage(param_1,pIVar9,iVar5,iVar4);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaf50);
  iVar5 = FUN_0367cf6c(0xf);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaf50);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  Sexy::Graphics::DrawImageMirror(param_1,pIVar9,(iVar5 + iVar2) - iVar6,iVar4,true);
  lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaef0);
  iVar4 = FUN_0367cf6c(0xf);
  iVar4 = iVar4 + *(int *)(lVar10 + 0x38);
  iVar5 = FUN_0367cf6c(0x1e);
  local_78 = 0;
  local_74 = 0;
  iVar2 = (iVar2 - iVar5) - iVar4;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  pPVar11 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  iVar5 = FUN_0367cf6c(0x9e);
  uVar8 = GetSizedFontForStrings
                    (pPVar11,(vector *)(this + 0x168),iVar2,iVar5,&local_78,&local_74,
                     (vector *)local_20);
  iVar6 = FUN_0367cf6c(0x41);
  iVar5 = FUN_0367cf6c(0xf0);
  iVar5 = (iVar5 - iVar6) - local_74;
  iVar7 = FUN_0367cf6c(0xf);
  iVar3 = iVar6 + iVar3 + iVar5 / 2;
  uVar15 = *(undefined8 *)(this + 0x168);
  iVar2 = (iVar2 - local_78) / 2 + iVar7 * 2;
  uVar12 = FUN_0367ce84(uVar15,*(undefined8 *)(this + 0x170));
  if (uVar12 != 0) {
    do {
      FUN_0367ce98(uVar15,uVar14);
      cVar1 = FUN_054765e8();
      if (cVar1 == '\0') {
        pPVar11 = (PrimeTypeface *)
                  PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
        fVar16 = (float)Sexy::PrimeTypeface::GetLineHeight(pPVar11);
        lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaef0);
        iVar5 = *(int *)(lVar10 + 0x3c);
        pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaef0);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar9,iVar2,(int)((float)iVar3 + (fVar16 - (float)iVar5) * 0.5));
        fVar16 = (float)local_78;
        piVar13 = (int *)FUN_0367cea0(local_20[0],uVar14);
        iVar5 = *piVar13;
        uVar15 = FUN_0367ce98(*(undefined8 *)(this + 0x168),uVar14);
        FUN_05477b24(auStack_68,uVar15);
        Sexy::Insets::Insets(aIStack_30,aIStack_60);
        Sexy::PrimeTypeface::DrawString_Paragraph
                  ((PrimeTypeface *)(float)(iVar2 + iVar4),(float)iVar3,fVar16,(float)iVar5,uVar8,
                   param_1,auStack_68,0,1,aIStack_30,0);
        FUN_05476c50(auStack_68);
        piVar13 = (int *)FUN_0367cea0(local_20[0],uVar14);
        iVar5 = FUN_0367cf6c(5);
        uVar15 = *(undefined8 *)(this + 0x168);
        iVar3 = iVar3 + iVar5 + *piVar13;
        uVar12 = FUN_0367ce84(uVar15,*(undefined8 *)(this + 0x170));
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar12);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
  FUN_05476c50(auStack_70);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UILevelSummary::DrawUnchartedModeDifficultyTipsScreen(Sexy::Graphics*) */

void __thiscall
PVZ2UILevelSummary::DrawUnchartedModeDifficultyTipsScreen
          (PVZ2UILevelSummary *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  Image *pIVar9;
  LotteryResultProgressBar *this_00;
  long lVar10;
  PrimeTypeface *pPVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  undefined8 uVar15;
  float fVar16;
  int local_78;
  int local_74;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  Insets aIStack_60 [16];
  Color aCStack_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  Insets aIStack_30 [16];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar14 = 0;
  Sexy::Insets::Insets(aIStack_60,(Insets *)&PrimeText_Game::Color_Description_Brown);
  Sexy::Color::Color(aCStack_50,2);
  TodStringTranslate(L"[UNCHARTED_WORLD_DIFFICULTY_ADD_TIPS]");
  iVar2 = FUN_0367cf6c(0xfffffff1);
  iVar4 = *(int *)(this + 0x54);
  iVar3 = FUN_0367cf6c(0xf0);
  iVar3 = (iVar2 + iVar4) - iVar3;
  iVar2 = FUN_0367cf6c(0x1e);
  iVar2 = *(int *)(this + 0x50) - iVar2;
  iVar4 = FUN_0367cf6c(0x41);
  Sexy::Color::Color((Color *)&local_40);
  local_40 = 0x26;
  local_3c = 0x65;
  local_38 = 7;
  iVar4 = iVar3 + iVar4 / 2;
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32);
  iVar5 = FUN_0367cf6c(0xf);
  iVar6 = FUN_0367cf6c(0x41);
  FUN_05477b24(aIStack_30,auStack_70);
  Sexy::Insets::Insets((Insets *)local_20,(Insets *)&local_40);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)iVar5,(float)iVar3,(float)iVar2,(float)iVar6,uVar8,param_1,
             aIStack_30,1,1,(Insets *)local_20,0);
  FUN_05476c50(aIStack_30);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaf50);
  iVar5 = FUN_0367cf6c(0xf);
  Sexy::Graphics::DrawImage(param_1,pIVar9,iVar5,iVar4);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaf50);
  iVar5 = FUN_0367cf6c(0xf);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaf50);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  Sexy::Graphics::DrawImageMirror(param_1,pIVar9,(iVar5 + iVar2) - iVar6,iVar4,true);
  lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaef0);
  iVar4 = FUN_0367cf6c(0xf);
  iVar4 = iVar4 + *(int *)(lVar10 + 0x38);
  iVar5 = FUN_0367cf6c(0x1e);
  local_78 = 0;
  local_74 = 0;
  iVar2 = (iVar2 - iVar5) - iVar4;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  pPVar11 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  iVar5 = FUN_0367cf6c(0x9e);
  uVar8 = GetSizedFontForStrings
                    (pPVar11,(vector *)(this + 0x180),iVar2,iVar5,&local_78,&local_74,
                     (vector *)local_20);
  iVar6 = FUN_0367cf6c(0x41);
  iVar5 = FUN_0367cf6c(0xf0);
  iVar5 = (iVar5 - iVar6) - local_74;
  iVar7 = FUN_0367cf6c(0xf);
  iVar3 = iVar6 + iVar3 + iVar5 / 2;
  uVar15 = *(undefined8 *)(this + 0x180);
  iVar2 = (iVar2 - local_78) / 2 + iVar7 * 2;
  uVar12 = FUN_0367ce84(uVar15,*(undefined8 *)(this + 0x188));
  if (uVar12 != 0) {
    do {
      FUN_0367ce98(uVar15,uVar14);
      cVar1 = FUN_054765e8();
      if (cVar1 == '\0') {
        pPVar11 = (PrimeTypeface *)
                  PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
        fVar16 = (float)Sexy::PrimeTypeface::GetLineHeight(pPVar11);
        lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaef0);
        iVar5 = *(int *)(lVar10 + 0x3c);
        pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaef0);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar9,iVar2,(int)((float)iVar3 + (fVar16 - (float)iVar5) * 0.5));
        fVar16 = (float)local_78;
        piVar13 = (int *)FUN_0367cea0(local_20[0],uVar14);
        iVar5 = *piVar13;
        uVar15 = FUN_0367ce98(*(undefined8 *)(this + 0x180),uVar14);
        FUN_05477b24(auStack_68,uVar15);
        Sexy::Insets::Insets(aIStack_30,aIStack_60);
        Sexy::PrimeTypeface::DrawString_Paragraph
                  ((PrimeTypeface *)(float)(iVar2 + iVar4),(float)iVar3,fVar16,(float)iVar5,uVar8,
                   param_1,auStack_68,0,1,aIStack_30,0);
        FUN_05476c50(auStack_68);
        piVar13 = (int *)FUN_0367cea0(local_20[0],uVar14);
        iVar5 = FUN_0367cf6c(5);
        uVar15 = *(undefined8 *)(this + 0x180);
        iVar3 = iVar3 + iVar5 + *piVar13;
        uVar12 = FUN_0367ce84(uVar15,*(undefined8 *)(this + 0x188));
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar12);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
  FUN_05476c50(auStack_70);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UILevelSummary::~PVZ2UILevelSummary() */

void __thiscall PVZ2UILevelSummary::~PVZ2UILevelSummary(PVZ2UILevelSummary *this)

{
  LawnApp *pLVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0667a7d0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  cVar2 = RiftUtils::IsPlayingRiftLevel();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"UI_Rift_Common");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x180));
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x168));
  std::vector<bool,std::allocator<bool>>::~vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x138));
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x120));
  std::vector<bool,std::allocator<bool>>::~vector
            ((vector<bool,std::allocator<bool>> *)(this + 0xf8));
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0xe0));
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UILevelSummary::~PVZ2UILevelSummary() */

void __thiscall PVZ2UILevelSummary::~PVZ2UILevelSummary(PVZ2UILevelSummary *this)

{
  ~PVZ2UILevelSummary(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UILevelSummary::PVZ2UILevelSummary(PVZ2UIAwardScreen::ScreenEntry const&) */

void __thiscall
PVZ2UILevelSummary::PVZ2UILevelSummary(PVZ2UILevelSummary *this,ScreenEntry *param_1)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_00;
  vector<bool,std::allocator<bool>> *this_01;
  int iVar1;
  LawnApp *pLVar2;
  char cVar3;
  PrimeText *this_02;
  ulong uVar4;
  wstring *pwVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0);
  this_01 = (vector<bool,std::allocator<bool>> *)(this + 0xf8);
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0667a7d0;
  FUN_05476574(this + 0xd8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_00);
  std::vector<bool,std::allocator<bool>>::vector(this_01);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x120));
  std::vector<bool,std::allocator<bool>>::vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x138));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x180));
  this_02 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_02);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0x100);
  this[0x160] = (PVZ2UILevelSummary)0x0;
  thunk_FUN_05477b9c(this + 0xd8,param_1 + 0x10);
  uVar6 = 0;
  while( true ) {
    uVar7 = *(undefined8 *)(param_1 + 0x80);
    uVar4 = FUN_0367ce84(uVar7,*(undefined8 *)(param_1 + 0x88));
    if (uVar4 <= uVar6) break;
    pwVar5 = (wstring *)FUN_0367ce90(uVar7,uVar6);
    std::vector<std::wstring,std::allocator<std::wstring>>::push_back
              ((vector<std::wstring,std::allocator<std::wstring>> *)this_00,pwVar5);
    uVar6 = uVar6 + 1;
  }
  uVar6 = 0;
  while( true ) {
    uVar7 = *(undefined8 *)(param_1 + 0xc0);
    uVar4 = FUN_0367ce84(uVar7,*(undefined8 *)(param_1 + 200));
    if (uVar4 <= uVar6) break;
    pwVar5 = (wstring *)FUN_0367ce90(uVar7,uVar6);
    std::vector<std::wstring,std::allocator<std::wstring>>::push_back
              ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x120),pwVar5);
    uVar6 = uVar6 + 1;
  }
  std::vector<bool,std::allocator<bool>>::operator=(this_01,(vector *)(param_1 + 0x98));
  std::vector<bool,std::allocator<bool>>::operator=
            ((vector<bool,std::allocator<bool>> *)(this + 0x138),(vector *)(param_1 + 0xd8));
  iVar1 = *(int *)param_1;
  this[0x161] = (PVZ2UILevelSummary)(iVar1 == 9);
  this[0x162] = (PVZ2UILevelSummary)(iVar1 == 10);
  uVar6 = 0;
  while( true ) {
    uVar7 = *(undefined8 *)(param_1 + 0x140);
    uVar4 = FUN_0367ce84(uVar7,*(undefined8 *)(param_1 + 0x148));
    if (uVar4 <= uVar6) break;
    pwVar5 = (wstring *)FUN_0367ce90(uVar7,uVar6);
    std::vector<std::wstring,std::allocator<std::wstring>>::push_back
              ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x168),pwVar5);
    uVar6 = uVar6 + 1;
  }
  uVar6 = 0;
  while( true ) {
    uVar7 = *(undefined8 *)(param_1 + 0x158);
    uVar4 = FUN_0367ce84(uVar7,*(undefined8 *)(param_1 + 0x160));
    if (uVar4 <= uVar6) break;
    pwVar5 = (wstring *)FUN_0367ce90(uVar7,uVar6);
    std::vector<std::wstring,std::allocator<std::wstring>>::push_back
              ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x180),pwVar5);
    uVar6 = uVar6 + 1;
  }
  cVar3 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if (((cVar3 == '\0') && (this[0x161] == (PVZ2UILevelSummary)0x0)) &&
     (this[0x162] == (PVZ2UILevelSummary)0x0)) {
    cVar3 = std::vector<std::wstring,std::allocator<std::wstring>>::empty
                      ((vector<std::wstring,std::allocator<std::wstring>> *)this_00);
    if (cVar3 != '\0') {
      FUN_05478178((wstring *)asStack_10,L"[BEAT_THE_LEVEL]",auStack_18);
      std::vector<std::wstring,std::allocator<std::wstring>>::push_back
                ((vector<std::wstring,std::allocator<std::wstring>> *)this_00,(wstring *)asStack_10)
      ;
      FUN_05476c50((wstring *)asStack_10);
      nop();
      std::vector<bool,std::allocator<bool>>::push_back(this_01,false);
    }
  }
  pLVar2 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::LoadGroup(pLVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  cVar3 = RiftUtils::IsPlayingRiftLevel();
  pLVar2 = gLawnApp;
  if (cVar3 != '\0') {
    std::string::string(asStack_10,"UI_Rift_Common");
    LawnApp::LoadGroup(pLVar2,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UILevelSummary::DrawChooseLevelObjectiveScreen(Sexy::Graphics*) */

void __thiscall
PVZ2UILevelSummary::DrawChooseLevelObjectiveScreen(PVZ2UILevelSummary *this,Graphics *param_1)

{
  Insets *pIVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  SalesProgressBar *this_00;
  Image *pIVar11;
  LotteryResultProgressBar *this_01;
  long lVar12;
  PrimeTypeface *pPVar13;
  ulong uVar14;
  int *piVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  undefined1 auVar20 [16];
  int local_b0;
  int local_ac [3];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  Insets aIStack_88 [16];
  Color aCStack_78 [16];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  Insets aIStack_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38 [3];
  Insets aIStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_88,(Insets *)&PrimeText_Game::Color_Description_Brown);
  Sexy::Color::Color(aCStack_78,2);
  FUN_05476574(auStack_a0);
  TodStringTranslate(L"[CHALLENGE_PURPOSE]");
  FUN_054766c8(auStack_a0,aIStack_20);
  FUN_05476c50(aIStack_20);
  TodStringTranslate(L"[OBJECTIVE_BONUS_CHALLENGE_HEADER]");
  iVar4 = FUN_0367cf6c(0x1e);
  iVar4 = *(int *)(this + 0x50) - iVar4;
  iVar5 = FUN_0367cf6c(0xffffff79);
  iVar7 = *(int *)(this + 0x54);
  iVar6 = FUN_0367cf6c(0x82);
  iVar6 = (iVar5 + iVar7) - iVar6;
  Sexy::Color::Color((Color *)&local_68);
  local_68 = 0x26;
  local_64 = 0x65;
  local_60 = 7;
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32);
  iVar7 = FUN_0367cf6c(0xf);
  iVar5 = FUN_0367cf6c(0x41);
  FUN_05477b24((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38,auStack_a0)
  ;
  Sexy::Insets::Insets(aIStack_20,(Insets *)&local_68);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)iVar7,(float)iVar6,(float)iVar4,(float)iVar5,uVar10,param_1,
             (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38,1,1,
             aIStack_20,0);
  FUN_05476c50((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38);
  iVar7 = FUN_0367cf6c(0x41);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaf50);
  iVar5 = SalesProgressBar::GetCurrentLevel(this_00);
  iVar8 = FUN_0367cf6c(0x23);
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaf50);
  iVar9 = FUN_0367cf6c(0xf);
  iVar7 = iVar6 + (iVar7 - iVar5) / 2;
  Sexy::Graphics::DrawImage(param_1,pIVar11,iVar9 + iVar8,iVar7);
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaf50);
  iVar5 = FUN_0367cf6c(0xf);
  this_01 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaf50);
  iVar9 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  Sexy::Graphics::DrawImageMirror(param_1,pIVar11,((iVar5 + iVar4) - iVar9) - iVar8,iVar7,true);
  lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaef0);
  iVar7 = FUN_0367cf6c(0xf);
  iVar7 = iVar7 + *(int *)(lVar12 + 0x38);
  iVar5 = FUN_0367cf6c(10);
  local_b0 = 0;
  local_ac[0] = 0;
  iVar4 = (iVar4 - iVar5) - iVar7;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38);
  pPVar13 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  iVar5 = FUN_0367cf6c(0x78);
  uVar10 = GetSizedFontForStrings
                     (pPVar13,(vector *)(this + 0xe0),iVar4,iVar5,&local_b0,local_ac,
                      (vector *)local_38);
  lVar12 = FUN_0367ce84(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
  if (lVar12 == 0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aIStack_20);
    TodStringTranslate(L"[PVZ1_MODE_NO_CHALLENGE_CHOOSE]");
    std::vector<std::wstring,std::allocator<std::wstring>>::push_back
              ((vector<std::wstring,std::allocator<std::wstring>> *)aIStack_20,(wstring *)local_48);
    FUN_05476c50((wstring *)local_48);
    pPVar13 = (PrimeTypeface *)
              PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    iVar5 = FUN_0367cf6c(0x78);
    uVar10 = GetSizedFontForStrings
                       (pPVar13,(vector *)aIStack_20,iVar4,iVar5,&local_b0,local_ac,
                        (vector *)local_38);
    std::vector<std::wstring,std::allocator<std::wstring>>::~vector
              ((vector<std::wstring,std::allocator<std::wstring>> *)aIStack_20);
  }
  local_ac[1] = 0;
  local_ac[2] = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aIStack_20);
  pPVar13 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  iVar5 = FUN_0367cf6c(0x78);
  GetSizedFontForStrings
            (pPVar13,(vector *)(this + 0x120),iVar4,iVar5,local_ac + 1,local_ac + 2,
             (vector *)aIStack_20);
  iVar5 = FUN_0367cf6c(0x41);
  iVar5 = iVar5 + iVar6;
  iVar8 = FUN_0367cf6c(0xf);
  iVar9 = FUN_0367cf6c(5);
  iVar6 = local_b0;
  uVar17 = *(undefined8 *)(this + 0xe0);
  uVar18 = *(undefined8 *)(this + 0xe8);
  iVar4 = iVar8 + iVar9 + (iVar4 - local_b0) / 2;
  uVar14 = FUN_0367ce84(uVar17,uVar18);
  if (uVar14 == 0) {
    fVar19 = (float)local_ac[0];
    TodStringTranslate(L"[PVZ1_MODE_NO_CHALLENGE_CHOOSE]");
    Sexy::Insets::Insets((Insets *)local_48,aIStack_88);
    Sexy::PrimeTypeface::DrawString_Paragraph
              ((PrimeTypeface *)(float)(iVar4 + iVar7 / 2),(float)iVar5,(float)iVar6,fVar19,uVar10,
               param_1,aIStack_58,1,1,(Insets *)local_48,0);
    FUN_05476c50(aIStack_58);
    uVar17 = *(undefined8 *)(this + 0xe0);
    uVar18 = *(undefined8 *)(this + 0xe8);
    uVar14 = FUN_0367ce84(uVar17,uVar18);
  }
  for (uVar16 = 0; uVar16 < uVar14; uVar16 = uVar16 + 1) {
    FUN_0367ce98(uVar17,uVar16);
    cVar2 = FUN_054765e8();
    if (cVar2 == '\0') {
      pPVar13 = (PrimeTypeface *)
                PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
      fVar19 = (float)Sexy::PrimeTypeface::GetLineHeight(pPVar13);
      lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaef0);
      iVar6 = (int)((float)iVar5 + (fVar19 - (float)*(int *)(lVar12 + 0x3c)) * 0.5);
      pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaef0);
      Sexy::Graphics::DrawImage(param_1,pIVar11,iVar4,iVar6);
      if (*(int *)(this + 0xd4) == 1) {
        pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aaaf18);
        iVar8 = FUN_0367cf6c(0xfffffffa);
        iVar9 = FUN_0367cf6c(0xfffffff1);
        Sexy::Graphics::DrawImage(param_1,pIVar11,iVar8 + iVar4,iVar9 + iVar6);
      }
      auVar20 = FUN_0367cf10(*(undefined8 *)(this + 0xf8),uVar16);
      local_48 = auVar20;
      bVar3 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_48);
      pIVar1 = (Insets *)aCStack_78;
      if (!bVar3) {
        pIVar1 = aIStack_88;
      }
      Sexy::Insets::Insets(aIStack_58,pIVar1);
      fVar19 = (float)local_b0;
      piVar15 = (int *)FUN_0367cea0(local_38[0],uVar16);
      iVar6 = *piVar15;
      uVar17 = FUN_0367ce98(*(undefined8 *)(this + 0xe0),uVar16);
      FUN_05477b24(auStack_90,uVar17);
      Sexy::Insets::Insets((Insets *)local_48,aIStack_58);
      Sexy::PrimeTypeface::DrawString_Paragraph
                ((PrimeTypeface *)(float)(iVar4 + iVar7),(float)iVar5,fVar19,(float)iVar6,uVar10,
                 param_1,auStack_90,0,1,(_Bit_reference *)local_48,0);
      FUN_05476c50(auStack_90);
      piVar15 = (int *)FUN_0367cea0(local_38[0],uVar16);
      iVar6 = FUN_0367cf6c(5);
      uVar18 = *(undefined8 *)(this + 0xe8);
      uVar17 = *(undefined8 *)(this + 0xe0);
      iVar5 = iVar5 + iVar6 + *piVar15;
    }
    uVar14 = FUN_0367ce84(uVar17,uVar18);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)aIStack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_38);
  FUN_05476c50(auStack_98);
  FUN_05476c50(auStack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

