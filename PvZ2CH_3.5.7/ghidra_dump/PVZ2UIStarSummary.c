// Class: PVZ2UIStarSummary


/* PVZ2UIStarSummary::Update() */

void __thiscall PVZ2UIStarSummary::Update(PVZ2UIStarSummary *this)

{
  PopAnimRig *this_00;
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = 0;
  if (0 < *(int *)(this + 0xd4)) {
    do {
      this_00 = *(PopAnimRig **)(this + (long)iVar1 * 8 + 0x128);
      iVar1 = iVar1 + 1;
      fVar2 = (float)PVZ_T();
      fVar3 = (float)PVZ_Dt();
      PopAnimRig::UpdateAnim(this_00,fVar2,fVar3);
    } while (iVar1 < *(int *)(this + 0xd4));
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIStarSummary::~PVZ2UIStarSummary() */

void __thiscall PVZ2UIStarSummary::~PVZ2UIStarSummary(PVZ2UIStarSummary *this)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  string asStack_10 [8];
  long local_8;
  
  iVar2 = 0;
  iVar1 = *(int *)(this + 0xd4);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0683c1b0;
  if (0 < iVar1) {
    do {
      if (*(long **)(this + (long)iVar2 * 8 + 0x128) != (long *)0x0) {
        (**(code **)(**(long **)(this + (long)iVar2 * 8 + 0x128) + 0x18))();
        *(undefined8 *)(this + (long)iVar2 * 8 + 0x128) = 0;
        iVar1 = *(int *)(this + 0xd4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::vector<bool,std::allocator<bool>>::~vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x100));
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0xe8));
  FUN_05476c50(this + 0xe0);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIStarSummary::~PVZ2UIStarSummary() */

void __thiscall PVZ2UIStarSummary::~PVZ2UIStarSummary(PVZ2UIStarSummary *this)

{
  ~PVZ2UIStarSummary(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIStarSummary::Draw(Sexy::Graphics*) */

void __thiscall PVZ2UIStarSummary::Draw(PVZ2UIStarSummary *this,Graphics *param_1)

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
  LotteryResultProgressBar *pLVar11;
  SalesProgressBar *this_00;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 uVar16;
  Image *pIVar17;
  wchar_t *pwVar18;
  ulong uVar19;
  undefined4 uVar20;
  PVZ2UIStarSummary *pPVar21;
  Point *pPVar22;
  float fVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  int local_cc;
  GraphicsAutoState aGStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  int local_b0;
  int local_ac;
  int local_a8;
  Insets aIStack_a0 [16];
  undefined4 local_90 [4];
  int local_80 [4];
  undefined1 local_70 [16];
  Point local_60 [4];
  undefined4 local_5c;
  int local_58;
  int local_54;
  Point aPStack_50 [8];
  undefined8 local_48 [3];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [3];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_c8,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  iVar4 = FUN_04389050(0);
  iVar10 = *(int *)(this + 0x50);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afed60);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar6 = FUN_04389050(0xffffffe2);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afed60);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afed60);
  iVar8 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Insets::Insets((Insets *)&local_b0,iVar4 + (iVar10 - iVar5) / 2,iVar6,iVar7,iVar8);
  iVar10 = local_b0 + local_a8 / 2;
  iVar4 = FUN_04389050(0xffffffa6);
  iVar5 = FUN_04389050(0x36);
  Sexy::Point::Point(local_60,iVar4 + iVar10,iVar5 + local_ac);
  iVar4 = FUN_04389050(0);
  iVar5 = FUN_04389050(0x26);
  Sexy::Point::Point((Point *)&local_58,iVar4 + iVar10,iVar5 + local_ac);
  iVar4 = FUN_04389050(0x5a);
  iVar5 = FUN_04389050(0x36);
  Sexy::Point::Point(aPStack_50,iVar4 + iVar10,iVar5 + local_ac);
  iVar4 = FUN_04389050(0);
  iVar10 = *(int *)(this + 0x50);
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_34_ThickOutline);
  iVar5 = FUN_04389050(0);
  iVar6 = FUN_04389050(0xffffff9c);
  iVar7 = FUN_04389050(0x32);
  FUN_05477b24((wstring *)local_70,this + 0xe0);
  Sexy::Color::Color((Color *)local_48,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)iVar5,(float)iVar6,(float)(iVar10 - iVar4),(float)iVar7,uVar12,
             param_1,(wstring *)local_70,1,1,
             (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_48,0);
  FUN_05476c50((wstring *)local_70);
  iVar5 = FUN_04389050(0xfffffff1);
  iVar10 = *(int *)(this + 0x54);
  iVar4 = FUN_04389050(0xf0);
  iVar4 = (iVar5 + iVar10) - iVar4;
  iVar5 = FUN_04389050(0x1e);
  iVar10 = *(int *)(this + 0x50);
  if (*(int *)(this + 0xd4) == 1) {
    uVar20 = 0xf;
    Sexy::Graphics::Translate(param_1,local_58,local_54);
    lVar13 = FUN_04388f74(*(undefined8 *)(*(long *)(this + 0x128) + 0x20));
    fVar23 = *(float *)(lVar13 + 0x28);
    iVar6 = *(int *)(lVar13 + 0x3c);
    iVar7 = *(int *)(lVar13 + 0x40);
    Sexy::SexyTransform2D::SexyTransform2D((SexyTransform2D *)&local_30);
    FUN_04388f58((float)-((int)((float)iVar6 * fVar23) / 2),
                 (float)-((int)((float)iVar7 * fVar23) / 2),local_28,auStack_1c);
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x128),param_1,(SexyTransform2D *)&local_30);
    Sexy::Graphics::Translate(param_1,-local_58,-local_54);
    uVar24 = 1;
LAB_04389a50:
    pIVar17 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afed88);
    iVar7 = FUN_04389050(uVar20);
    iVar6 = *(int *)(local_60 + (-(ulong)(uVar24 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar24 << 3)
                    );
    iVar8 = FUN_04389050(0xe);
    Sexy::Graphics::DrawImage(param_1,pIVar17,iVar6 - iVar7,iVar4 - iVar8);
    FUN_05476574();
    lVar13 = FUN_04388f78(*(undefined8 *)(this + 0xe8),*(undefined8 *)(this + 0xf0));
    if (lVar13 != 1) goto LAB_04389568;
LAB_04389abc:
    pwVar18 = L"[STARCHALLENGE_CHALLENGE_HEADER_SINGLE]";
  }
  else {
    uVar24 = *(uint *)(this + 0xd8);
    if (0 < *(int *)(this + 0xd4)) {
      iVar6 = 0;
      pPVar21 = this + 0x128;
      pPVar22 = local_60;
      do {
        iVar6 = iVar6 + 1;
        Sexy::Graphics::Translate(param_1,*(int *)pPVar22,*(int *)(pPVar22 + 4));
        lVar13 = FUN_04388f74(*(undefined8 *)(*(long *)pPVar21 + 0x20));
        fVar23 = *(float *)(lVar13 + 0x28);
        iVar7 = *(int *)(lVar13 + 0x3c);
        iVar8 = *(int *)(lVar13 + 0x40);
        Sexy::SexyTransform2D::SexyTransform2D((SexyTransform2D *)&local_30);
        FUN_04388f58((float)-((int)((float)iVar7 * fVar23) / 2),
                     (float)-((int)((float)iVar8 * fVar23) / 2),local_28,auStack_1c);
        PopAnimRig::Draw(*(PopAnimRig **)pPVar21,param_1,(SexyTransform2D *)&local_30);
        Sexy::Graphics::Translate(param_1,-*(int *)pPVar22,-*(int *)(pPVar22 + 4));
        pPVar21 = pPVar21 + 8;
        pPVar22 = pPVar22 + 8;
      } while (iVar6 < *(int *)(this + 0xd4));
    }
    local_30 = 8;
    local_2c = 0xf;
    local_28[0] = 0x17;
    if (0 < (int)uVar24) {
      uVar20 = *(undefined4 *)((SexyTransform2D *)&local_30 + (long)(int)uVar24 * 4);
      goto LAB_04389a50;
    }
    FUN_05476574();
    lVar13 = FUN_04388f78(*(undefined8 *)(this + 0xe8),*(undefined8 *)(this + 0xf0));
    if (lVar13 == 1) goto LAB_04389abc;
LAB_04389568:
    if (lVar13 != 2) {
      FUN_05478178((wstring *)local_70,L"[STARCHALLENGE_CHALLENGE_HEADER_MULTIPLE]",local_90);
      uVar12 = FUN_04388f78(*(undefined8 *)(this + 0xe8),*(undefined8 *)(this + 0xf0));
      Sexy::StrFormat(L"%d",(wstring *)local_80,uVar12);
      TodReplaceString((wstring *)local_70,L"{COUNT}",(wstring *)local_80);
      FUN_054766c8(auStack_c0,
                   (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_48);
      FUN_05476c50((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_48);
      FUN_05476c50((wstring *)local_80);
      FUN_05476c50((wstring *)local_70);
      nop();
      goto LAB_043895f0;
    }
    pwVar18 = L"[STARCHALLENGE_CHALLENGE_HEADER_DOUBLE]";
  }
  TodStringTranslate(pwVar18);
  FUN_054766c8(auStack_c0,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_48)
  ;
  FUN_05476c50((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_48);
LAB_043895f0:
  cVar2 = PVZ2UnchartedModeUtils::IsPlayingPVZ2UnchartedModeLevel();
  if ((cVar2 != '\0') || (cVar2 = CardGameUtils::IsPlayingCardGame(), cVar2 != '\0')) {
    TodStringTranslate(L"[CHALLENGE_PURPOSE]");
    FUN_054766c8(auStack_c0,
                 (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_48);
    FUN_05476c50((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_48);
  }
  iVar6 = 0;
  iVar7 = FUN_04389050(0x10);
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  iVar8 = FUN_04389050(0xf);
  iVar9 = FUN_04389050(0x41);
  FUN_05477b24((wstring *)local_70,auStack_c0);
  Sexy::Color::Color((Color *)local_48,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)iVar8,(float)(iVar4 - iVar7),(float)(iVar10 - iVar5),
             (float)iVar9,uVar12,param_1,(wstring *)local_70,1,1,
             (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_48,0);
  FUN_05476c50((wstring *)local_70);
  local_cc = 0;
  iVar7 = FUN_04389050(10);
  iVar7 = (iVar10 - iVar5) - iVar7;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_48);
  uVar19 = 0;
  while( true ) {
    uVar14 = FUN_04388f78(*(undefined8 *)(this + 0xe8),*(undefined8 *)(this + 0xf0));
    if (uVar14 <= uVar19) break;
    local_90[0] = 0;
    local_80[0] = 0;
    uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    uVar16 = FUN_04388f8c(*(undefined8 *)(this + 0xe8),uVar19);
    FUN_05477b24((wstring *)local_70,uVar16);
    Sexy::PrimeTypeface::SizeString_Paragraph
              ((float)iVar7,uVar12,(wstring *)local_70,(Color *)local_90,local_80);
    FUN_05476c50((wstring *)local_70);
    local_80[0] = local_80[0] + 1;
    iVar6 = iVar6 + local_80[0];
    piVar15 = eastl::max_alt<int>(&local_cc,(int *)local_90);
    local_cc = *piVar15;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)local_48,local_80);
    uVar19 = uVar19 + 1;
  }
  Sexy::Insets::Insets(aIStack_a0,(Insets *)&PrimeText_Game::Color_Description_Brown);
  Sexy::Color::Color((Color *)local_90,2);
  iVar10 = FUN_04389050(0x41);
  iVar5 = FUN_04389050(0x14);
  iVar8 = FUN_04389050(0xf0);
  iVar9 = FUN_04389050(0xf);
  iVar10 = ((iVar10 + iVar4) - iVar5) + ((iVar8 - iVar10) - iVar6) / 2;
  iVar4 = FUN_04389050(5);
  fVar23 = (float)local_cc;
  iVar7 = iVar7 - local_cc;
  uVar19 = 0;
  while( true ) {
    uVar14 = FUN_04388f78(*(undefined8 *)(this + 0xe8),*(undefined8 *)(this + 0xf0));
    if (uVar14 <= uVar19) break;
    auVar25 = FUN_04388ff4(*(undefined8 *)(this + 0x100),uVar19);
    local_70 = auVar25;
    bVar3 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_70);
    pIVar1 = (Insets *)local_90;
    if (!bVar3) {
      pIVar1 = aIStack_a0;
    }
    Sexy::Insets::Insets((Insets *)local_80,pIVar1);
    uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    piVar15 = (int *)FUN_04388f94(local_48[0],uVar19);
    iVar5 = *piVar15;
    uVar16 = FUN_04388f8c(*(undefined8 *)(this + 0xe8),uVar19);
    FUN_05477b24(auStack_b8,uVar16);
    Sexy::Insets::Insets((Insets *)local_70,(Insets *)local_80);
    Sexy::PrimeTypeface::DrawString_Paragraph
              ((PrimeTypeface *)(float)(iVar9 + iVar4 + iVar7 / 2),(float)iVar10,fVar23,(float)iVar5
               ,uVar12,param_1,auStack_b8,0,1,(wstring *)local_70,0);
    FUN_05476c50(auStack_b8);
    piVar15 = (int *)FUN_04388f94(local_48[0],uVar19);
    iVar10 = iVar10 + *piVar15;
    uVar19 = uVar19 + 1;
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_48);
  FUN_05476c50(auStack_c0);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_c8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIStarSummary::PVZ2UIStarSummary(PVZ2UIAwardScreen::ScreenEntry const&) */

void __thiscall PVZ2UIStarSummary::PVZ2UIStarSummary(PVZ2UIStarSummary *this,ScreenEntry *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  LawnApp *pLVar5;
  char cVar6;
  PrimeText *this_00;
  long lVar7;
  wstring *pwVar8;
  ulong uVar9;
  PopAnim *pPVar10;
  RtClass *pRVar11;
  PopAnimRig *pPVar12;
  WorldDataManager *this_01;
  string *psVar13;
  char *pcVar14;
  int iVar15;
  ulong uVar16;
  undefined8 uVar17;
  PVZ2UIStarSummary *pPVar18;
  undefined1 auStack_98 [8];
  wstring awStack_90 [8];
  wstring awStack_88 [8];
  char *local_80 [9];
  DummyInit aDStack_38 [48];
  long local_8;
  
  uVar16 = 0;
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0683c1b0;
  FUN_05476574(this + 0xe0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  std::vector<bool,std::allocator<bool>>::vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x100));
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  uVar2 = *(undefined4 *)(param_1 + 0x74);
  uVar3 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0xd8) = uVar2;
  *(undefined4 *)(this + 0xdc) = uVar3;
  TodStringTranslate(L"[STARCHALLENGE_BULLET_SYMBOL]");
  std::operator+(awStack_88,L" ");
  FUN_05476c50(awStack_88);
  thunk_FUN_05477b9c(this + 0xe0,param_1 + 0x10);
  uVar17 = *(undefined8 *)(param_1 + 0x80);
  lVar7 = FUN_04388f78(uVar17,*(undefined8 *)(param_1 + 0x88));
  if (lVar7 != 0) {
    do {
      pwVar8 = (wstring *)FUN_04388f84(uVar17,uVar16);
      TodStringTranslate(L"[STARCHALLENGE_RETAIN_MOWERS]");
      cVar6 = std::operator==(pwVar8,awStack_90);
      if (cVar6 == '\0') {
        FUN_05476c50(awStack_90);
LAB_04389c50:
        uVar17 = FUN_04388f84(*(undefined8 *)(param_1 + 0x80),uVar16);
        FUN_0342e660(awStack_88,auStack_98,uVar17);
        std::vector<std::wstring,std::allocator<std::wstring>>::push_back
                  ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0xe8),awStack_88);
        FUN_05476c50(awStack_88);
      }
      else {
        this_01 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
        pLVar5 = gLawnApp;
        psVar13 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
        lVar7 = WorldDataManager::FindWorldDataByLevelName(this_01,psVar13);
        FUN_05475d88(awStack_88,lVar7 + 0x38);
        cVar6 = LawnApp::IsWorldHaveMower(pLVar5,awStack_88);
        std::string::~string((string *)awStack_88);
        FUN_05476c50(awStack_90);
        if (cVar6 != '\0') goto LAB_04389c50;
      }
      uVar16 = uVar16 + 1;
      uVar17 = *(undefined8 *)(param_1 + 0x80);
      uVar9 = FUN_04388f78(uVar17,*(undefined8 *)(param_1 + 0x88));
    } while (uVar16 < uVar9);
  }
  std::vector<bool,std::allocator<bool>>::operator=
            ((vector<bool,std::allocator<bool>> *)(this + 0x100),(vector *)(param_1 + 0x98));
  pLVar5 = gLawnApp;
  std::string::string((string *)awStack_88,"UI_AwardDialog");
  LawnApp::LoadGroup(pLVar5,(string *)awStack_88);
  std::string::~string((string *)awStack_88);
  nop();
  local_80[0] = "star1_empty";
  local_80[1] = "star2_empty";
  local_80[2] = "star3_empty";
  local_80[3] = "star1_appear";
  local_80[4] = "star2_appear";
  local_80[5] = "star3_appear";
  local_80[6] = "star1_outline";
  local_80[7] = "star2_outline";
  local_80[8] = "star3_outline";
  if (0 < *(int *)(this + 0xd4)) {
    pPVar18 = this + 0x128;
    lVar7 = 0;
    do {
      pPVar10 = CachedUIResourcePtr::operator_cast_to_PopAnim_((CachedUIResourcePtr *)&DAT_06afece8)
      ;
      pRVar11 = (RtClass *)PopAnimRig::StaticGetClass();
      pPVar12 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable(pPVar10,pRVar11);
      *(PopAnimRig **)(this + lVar7 * 8 + 0x128) = pPVar12;
      iVar15 = (int)lVar7;
      if (iVar15 < *(int *)(this + 0xd8)) {
LAB_04389ef0:
        std::string::string((string *)awStack_88,local_80[lVar7 + 3]);
        Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
        PopAnimRig::PlayAndStop(pPVar12,awStack_88,0,aDStack_38);
        std::string::~string((string *)awStack_88);
        nop();
        PopAnimRig::AdvanceToLastFrameInAnimation(*(PopAnimRig **)pPVar18);
      }
      else {
        if (iVar15 == *(int *)(this + 0xd8)) {
          iVar4 = *(int *)(this + 0xdc);
          iVar1 = 1;
          if (*(int *)(this + 0xd4) != 1) {
            iVar1 = iVar15;
          }
          if (iVar4 == 1) {
            pcVar14 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
            AudioMgr::SendEvent(pcVar14,"Play_UI_StarAchieve_Success");
            pPVar12 = *(PopAnimRig **)(this + lVar7 * 8 + 0x128);
            pcVar14 = local_80[(long)iVar1 + 3];
          }
          else if (iVar4 == 3) {
            pcVar14 = local_80[(long)iVar1 + 6];
          }
          else {
            if (iVar4 == 2) goto LAB_04389ef0;
            pcVar14 = local_80[iVar1];
          }
        }
        else {
          pcVar14 = local_80[lVar7];
        }
        std::string::string((string *)awStack_88,pcVar14);
        Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
        PopAnimRig::PlayAndStop(pPVar12,awStack_88,0,aDStack_38);
        std::string::~string((string *)awStack_88);
        nop();
      }
      pPVar18 = pPVar18 + 8;
      lVar7 = lVar7 + 1;
    } while (iVar15 + 1 < *(int *)(this + 0xd4));
  }
  FUN_05476c50(auStack_98);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

