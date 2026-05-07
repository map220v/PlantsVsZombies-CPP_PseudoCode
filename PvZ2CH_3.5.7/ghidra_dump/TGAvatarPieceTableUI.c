// Class: TGAvatarPieceTableUI


/* TGAvatarPieceTableUI::TGAvatarPieceTableUI() */

void __thiscall TGAvatarPieceTableUI::TGAvatarPieceTableUI(TGAvatarPieceTableUI *this)

{
  TGPieceTableUI::TGPieceTableUI((TGPieceTableUI *)this);
  *(undefined ***)this = &PTR_GetClass_0697b820;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_0697bbc0;
  *(undefined ***)(this + 0x128) = &PTR__TGAvatarPieceTableUI_0697bc08;
  return;
}


/* TGAvatarPieceTableUI::DeleteFromSelectBoxs(int) */

void __thiscall TGAvatarPieceTableUI::DeleteFromSelectBoxs(TGAvatarPieceTableUI *this,int param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(this + 0x138);
  lVar4 = (long)param_1;
  puVar2 = (undefined8 *)FUN_04bc48a8(uVar7,lVar4);
  piVar6 = (int *)*puVar2;
  if ((piVar6 != (int *)0x0) && (*piVar6 != 0)) {
    *piVar6 = 0;
    if (param_1 < 2) {
      lVar5 = lVar4 + 1;
      do {
        lVar1 = lVar5 + 1;
        puVar2 = (undefined8 *)FUN_04bc48a8(uVar7,lVar5);
        piVar3 = (int *)*puVar2;
        *piVar6 = *piVar3;
        lVar5 = lVar1;
        piVar6 = piVar3;
      } while (lVar1 != lVar4 + 2 + (ulong)(1 - param_1));
    }
    puVar2 = (undefined8 *)FUN_04bc48a8(uVar7,2);
    *(undefined4 *)*puVar2 = 0;
  }
  return;
}


/* TGAvatarPieceTableUI::CanSelectBoxAdd() */

bool __thiscall TGAvatarPieceTableUI::CanSelectBoxAdd(TGAvatarPieceTableUI *this)

{
  int iVar1;
  
  iVar1 = TGPieceTableUI::GetInsertIndex((TGPieceTableUI *)this);
  return iVar1 < 3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGAvatarPieceTableUI::CanStartTrans() */

void __thiscall TGAvatarPieceTableUI::CanStartTrans(TGAvatarPieceTableUI *this)

{
  bool bVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x138));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x138));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (0 < *(int *)*puVar2) {
      iVar3 = iVar3 + 1;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3 == 3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGAvatarPieceTableUI::Draw(Sexy::Graphics*) */

void __thiscall TGAvatarPieceTableUI::Draw(TGAvatarPieceTableUI *this,Graphics *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  Insets aIStack_50 [16];
  Insets aIStack_40 [8];
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x130] != (TGAvatarPieceTableUI)0x0) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b0d8);
    PopingWidget::GetMainRect();
    PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b178);
    Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x1a8));
    PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8aee8);
    Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x198));
    PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ab30);
    Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x1c8));
    PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
    TGPieceTableUI::DrawSelectBoxs((TGPieceTableUI *)this,param_1);
    cVar1 = FUN_04bc47f4(this[0x115]);
    if (cVar1 == '\0') {
      uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow)
      ;
      Sexy::Color::Color((Color *)aIStack_40,1);
      WriteWordInRect(param_1,this + 0x180,this + 0x188,uVar2,aIStack_40,5,1);
      FUN_05478178(aIStack_50,&DAT_056f11a8,auStack_58);
      uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow)
      ;
      Sexy::Color::Color((Color *)aIStack_40,1);
      WriteWordInRect(param_1,aIStack_50,(Insets *)(this + 0x1c8),uVar2,aIStack_40,5,1);
      FUN_05476c50(aIStack_50);
      nop();
    }
    else {
      if (*(long *)(this + 0x208) != 0) {
        PVZ2UIButton::GetImageNormal();
        uVar2 = local_38;
        Sexy::Insets::Insets(aIStack_50,(Insets *)(this + 0x1b8));
        PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_50);
      }
      if (*(long *)(this + 0x210) != 0) {
        PVZ2UIButton::GetImageNormal();
        Sexy::Insets::Insets(aIStack_50,(Insets *)(this + 0x1f8));
        PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,local_38,aIStack_50);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TGAvatarPieceTableUI::~TGAvatarPieceTableUI() */

void __thiscall TGAvatarPieceTableUI::~TGAvatarPieceTableUI(TGAvatarPieceTableUI *this)

{
  *(undefined ***)this = &PTR_GetClass_0697b820;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_0697bbc0;
  *(undefined ***)(this + 0x128) = &PTR__TGAvatarPieceTableUI_0697bc08;
  TGPieceTableUI::~TGPieceTableUI((TGPieceTableUI *)this);
  return;
}


/* non-virtual thunk to TGAvatarPieceTableUI::~TGAvatarPieceTableUI() */

void __thiscall TGAvatarPieceTableUI::~TGAvatarPieceTableUI(TGAvatarPieceTableUI *this)

{
  ~TGAvatarPieceTableUI(this + -0x128);
  return;
}


/* TGAvatarPieceTableUI::~TGAvatarPieceTableUI() */

void __thiscall TGAvatarPieceTableUI::~TGAvatarPieceTableUI(TGAvatarPieceTableUI *this)

{
  ~TGAvatarPieceTableUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TGAvatarPieceTableUI::~TGAvatarPieceTableUI() */

void __thiscall TGAvatarPieceTableUI::~TGAvatarPieceTableUI(TGAvatarPieceTableUI *this)

{
  ~TGAvatarPieceTableUI(this + -0x128);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGAvatarPieceTableUI::ReturnToTGMain() */

void __thiscall TGAvatarPieceTableUI::ReturnToTGMain(TGAvatarPieceTableUI *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int local_44;
  undefined8 local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x138));
  local_20[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x138));
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)local_20)
        , bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    if ((int *)*puVar2 != (int *)0x0) {
      local_44 = *(int *)*puVar2;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_38,&local_44);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  uVar3 = LawnApp::GetTransGenosisUI(gLawnApp);
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)local_20,(vector *)avStack_38);
  TransGenosisUI::SetAvatarSelectBoxs(uVar3,(vector<int,std::allocator<int>> *)local_20,1);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
  LawnApp::KillTGAvatarPieceTableUI(gLawnApp);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGAvatarPieceTableUI::InitView() */

void __thiscall TGAvatarPieceTableUI::InitView(TGAvatarPieceTableUI *this)

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
  int iVar10;
  int iVar11;
  int iVar12;
  LotteryResultProgressBar *pLVar13;
  SalesProgressBar *pSVar14;
  undefined8 uVar15;
  long *plVar16;
  code *pcVar17;
  PVZ2UIButton *pPVar18;
  undefined1 auStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  this[0x59] = (TGAvatarPieceTableUI)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  iVar2 = FUN_04bc5564(0x2c6);
  iVar3 = FUN_04bc5564(0x208);
  iVar12 = *(int *)(this + 0x50) - iVar2 >> 1;
  iVar1 = iVar2 / 2 + iVar12;
  iVar7 = *(int *)(this + 0x54) - iVar3 >> 1;
  Sexy::Insets::Insets((Insets *)&local_40,iVar12,iVar7,iVar2,iVar3);
  PopingWidget::SetMainRect((PopingWidget *)this,(Insets *)&local_40);
  iVar4 = FUN_04bc5564(0x46);
  iVar3 = iVar7 + iVar4;
  Sexy::Insets::Insets((Insets *)&local_40,iVar1 - iVar2 / 2,iVar7,iVar2,iVar4);
  *(undefined8 *)(this + 0x188) = local_40;
  *(undefined8 *)(this + 400) = uStack_38;
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b178);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b178);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar14);
  iVar7 = FUN_04bc5564(6);
  iVar7 = iVar5 + iVar7 * 2;
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8aad0);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar14);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8af10);
  iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8af10);
  iVar10 = SalesProgressBar::GetCurrentLevel(pSVar14);
  iVar11 = FUN_04bc5564(6);
  iVar4 = (((iVar2 - iVar7) - iVar9) - iVar11) / 2;
  iVar12 = iVar12 + iVar4;
  Sexy::Insets::Insets((Insets *)&local_40,iVar12,iVar3,iVar7,iVar8);
  *(undefined8 *)(this + 0x198) = local_40;
  *(undefined8 *)(this + 0x1a0) = uStack_38;
  Sexy::Insets::Insets((Insets *)&local_40,iVar11 + iVar12,iVar11 + iVar3,iVar5,iVar6);
  *(undefined8 *)(this + 0x1a8) = local_40;
  *(undefined8 *)(this + 0x1b0) = uStack_38;
  iVar5 = FUN_04bc5564(6);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar12 + iVar7 + iVar5,iVar11 + iVar3 + (iVar6 - iVar10) / 2,iVar9,
             iVar10);
  pPVar18 = *(PVZ2UIButton **)(this + 0x208);
  *(undefined8 *)(this + 0x1b8) = local_40;
  *(undefined8 *)(this + 0x1c0) = uStack_38;
  if (pPVar18 == (PVZ2UIButton *)0x0) {
    FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_80);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar18 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar18,0xc9,(ButtonListener *)(this + 0x120),(wstring *)aPStack_78,
               (Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x208) = pPVar18;
    FUN_05476c50(aPStack_78);
    nop();
    pPVar18 = *(PVZ2UIButton **)(this + 0x208);
    if (pPVar18 != (PVZ2UIButton *)0x0) goto LAB_04bd6d84;
  }
  else {
LAB_04bd6d84:
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b8af10,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8ab80,3);
    PVZ2UIButton::SetDialogStates(pPVar18,aPStack_78,(PVZ2UIImage *)&local_40);
    (**(code **)(**(long **)(this + 0x208) + 0x1a0))(*(long **)(this + 0x208),this + 0x1b8);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x208));
  }
  iVar7 = FUN_04bc5564(10);
  iVar7 = iVar3 + iVar8 + iVar7;
  iVar2 = iVar2 + iVar4 * -2;
  iVar5 = FUN_04bc5564(0xf0);
  Sexy::Insets::Insets((Insets *)&local_40,iVar12,iVar7,iVar2,iVar5);
  *(undefined8 *)(this + 0x1c8) = local_40;
  *(undefined8 *)(this + 0x1d0) = uStack_38;
  iVar3 = FUN_04bc5564(5);
  iVar6 = FUN_04bc5564(10);
  Sexy::Insets::Insets((Insets *)&local_40,iVar12 + iVar3,iVar7 + iVar3,iVar2 - iVar6,iVar5 - iVar6)
  ;
  *(undefined8 *)(this + 0x1d8) = local_40;
  *(undefined8 *)(this + 0x1e0) = uStack_38;
  iVar2 = FUN_04bc5564(5);
  iVar3 = FUN_04bc5564(10);
  iVar3 = iVar7 + iVar5 + iVar3;
  iVar7 = FUN_04bc5564(0x1c7);
  iVar5 = FUN_04bc5564(0x46);
  Sexy::Insets::Insets((Insets *)&local_40,iVar12 - iVar2,iVar3,iVar7,iVar5);
  *(undefined8 *)(this + 0x1e8) = local_40;
  *(undefined8 *)(this + 0x1f0) = uStack_38;
  iVar7 = FUN_04bc5564(0xaa);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8afd8);
  iVar12 = SalesProgressBar::GetCurrentLevel(pSVar14);
  iVar2 = FUN_04bc5564(5);
  Sexy::Insets::Insets((Insets *)&local_40,((iVar1 - iVar7 / 2) - iVar4) + iVar2,iVar3,iVar7,iVar12)
  ;
  plVar16 = *(long **)(this + 0x210);
  *(undefined8 *)(this + 0x1f8) = local_40;
  *(undefined8 *)(this + 0x200) = uStack_38;
  if (plVar16 == (long *)0x0) {
    FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_80);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar18 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar18,0xca,(ButtonListener *)(this + 0x120),(wstring *)aPStack_78,
               (Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x210) = pPVar18;
    FUN_05476c50(aPStack_78);
    nop();
    plVar16 = *(long **)(this + 0x210);
    if (plVar16 == (long *)0x0) goto LAB_04bd6fcc;
  }
  pcVar17 = *(code **)(*plVar16 + 800);
  uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  (*pcVar17)(plVar16,uVar15);
  pPVar18 = *(PVZ2UIButton **)(this + 0x210);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b8afd8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8add8,3);
  PVZ2UIButton::SetDialogStates(pPVar18,aPStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x210) + 0x1a0))(*(long **)(this + 0x210),this + 0x1f8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x210));
LAB_04bd6fcc:
  TodStringTranslate(L"[TRANS_GENOSIS_PIECES_TABLE_TITLE]");
  FUN_054766c8(this + 0x180,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  (**(code **)(*(long *)this + 0x350))(this);
  TGPieceTableUI::InitSummary((TGPieceTableUI *)this);
  (**(code **)(*(long *)this + 0x318))(this);
  this[0x130] = (TGAvatarPieceTableUI)0x1;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGAvatarPieceTableUI::InitSelectBoxs() */

void __thiscall TGAvatarPieceTableUI::InitSelectBoxs(TGAvatarPieceTableUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LawnApp *this_00;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  SelectBox *this_03;
  PVZ2UIButton *this_04;
  uint uVar10;
  int iVar11;
  undefined1 auStack_50 [8];
  SelectBox *local_48;
  PVZ2UIButton *local_40;
  wstring awStack_38 [24];
  undefined8 local_20;
  undefined8 uStack_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar11 = 0;
  TGPieceTableUI::ClearSelectBoxs((TGPieceTableUI *)this);
  uVar10 = 0;
  this_01 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ad60);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  this_02 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ad60);
  iVar7 = SalesProgressBar::GetCurrentLevel(this_02);
  iVar1 = *(int *)(this + 0x1a4);
  iVar2 = *(int *)(this + 0x19c);
  iVar3 = *(int *)(this + 0x1a0);
  iVar8 = FUN_04bc5564(0x28);
  iVar4 = *(int *)(this + 0x198);
  do {
    if ((uVar10 & 0xfffffffd) != 1) {
      iVar9 = FUN_04bc5564(0x28);
      this_03 = ::operator_new(0x24);
      *(undefined4 *)this_03 = 0;
      *(undefined4 *)(this_03 + 4) = 0;
      *(undefined4 *)(this_03 + 8) = 0;
      *(undefined4 *)(this_03 + 0xc) = 0;
      *(undefined4 *)(this_03 + 0x10) = 0;
      *(undefined4 *)(this_03 + 0x14) = 0;
      *(undefined4 *)(this_03 + 0x18) = 0;
      *(undefined4 *)(this_03 + 0x1c) = 0;
      *(undefined4 *)(this_03 + 0x20) = 0;
      SelectBox::SelectBox(this_03);
      *(undefined4 *)this_03 = 0;
      local_48 = this_03;
      Sexy::Insets::Insets
                ((Insets *)&local_20,
                 iVar4 + (iVar3 + iVar6 * -5 + iVar8 * -4) / 2 + (iVar9 + iVar6) * uVar10,
                 iVar2 + (iVar1 - iVar7) / 2,iVar6,iVar7);
      *(undefined8 *)(this_03 + 4) = local_20;
      *(undefined8 *)(this_03 + 0xc) = uStack_18;
      FUN_05478178(awStack_38,&DAT_056f11a8,auStack_50);
      Sexy::Color::Color((Color *)&local_20,1);
      this_04 = ::operator_new(0x300);
      iVar9 = iVar11 + 1000;
      iVar11 = iVar11 + 1;
      PVZ2UIButton::PVZ2UIButton
                (this_04,iVar9,(ButtonListener *)(this + 0x120),awStack_38,(Color *)&local_20);
      local_40 = this_04;
      FUN_05476c50(awStack_38);
      nop();
      (**(code **)(*(long *)local_40 + 0x1a0))(local_40,local_48 + 4);
      (**(code **)(*(long *)this + 0x60))(this,local_40);
      std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
                ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x168),&local_40);
      std::vector<SelectBox*,std::allocator<SelectBox*>>::push_back
                ((vector<SelectBox*,std::allocator<SelectBox*>> *)(this + 0x138),&local_48);
    }
    this_00 = gLawnApp;
    uVar10 = uVar10 + 1;
  } while (uVar10 != 5);
  cVar5 = LawnApp::IsTransGenosisUIValid(gLawnApp);
  if (cVar5 != '\0') {
    LawnApp::GetTransGenosisUI(this_00);
    TransGenosisUI::GetAvatarSelectedBoxIDs();
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)&local_20,(vector *)awStack_38);
    TGPieceTableUI::SetSelectBoxs
              ((TGPieceTableUI *)this,(vector<int,std::allocator<int>> *)&local_20);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)awStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGAvatarPieceTableUI::AutoSelecting() */

void __thiscall TGAvatarPieceTableUI::AutoSelecting(TGAvatarPieceTableUI *this)

{
  bool bVar1;
  TransGenosisUI *this_00;
  int iVar2;
  bool local_69;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  int local_50 [6];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (TransGenosisUI *)LawnApp::GetTransGenosisUI(gLawnApp);
  if (this_00 != (TransGenosisUI *)0x0) {
    iVar2 = 0;
    bVar1 = false;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_38);
    TransGenosisUI::CalcAvatarChipsForAS(this_00,(map *)amStack_38);
    local_69 = false;
    do {
      if (bVar1) {
        local_50[0] = 0;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_68,local_50);
      }
      else {
        local_50[0] = TransGenosisUI::DoAvatarAutoSelect(this_00,(map *)amStack_38,iVar2,&local_69);
        bVar1 = local_50[0] == 0;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_68,local_50);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 3);
    if (local_69 == false) {
      std::vector<int,std::allocator<int>>::vector
                ((vector<int,std::allocator<int>> *)local_50,(vector *)avStack_68);
      TGPieceTableUI::SetSelectBoxs
                ((TGPieceTableUI *)this,(vector<int,std::allocator<int>> *)local_50);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_50);
    }
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_38);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

