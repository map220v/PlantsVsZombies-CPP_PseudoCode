// Class: TGProduct


/* TGProduct::SetRevise(bool) */

void __thiscall TGProduct::SetRevise(TGProduct *this,bool param_1)

{
  this[0xf9] = (TGProduct)param_1;
  return;
}


/* TGProduct::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall TGProduct::DrawAll(TGProduct *this,ModalFlags *param_1,Graphics *param_2)

{
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.75);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGProduct::GetProductDes(int, int) */

void TGProduct::GetProductDes(int param_1,int param_2)

{
  uint in_w2;
  undefined1 auStack_40 [8];
  int local_38 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178();
  nop();
  GetGameItemInfo(param_2,0x7fffffff,0);
  if (local_38[0] != 0) {
    thunk_FUN_05477b9c();
    Sexy::StrFormat(L" x %d",auStack_40,(ulong)in_w2);
    thunk_FUN_05477668();
    FUN_05476c50(auStack_40);
  }
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGProduct::InitView() */

void __thiscall TGProduct::InitView(TGProduct *this)

{
  EffectAnim_UIAnim *this_00;
  EffectAnim_UIAnim *this_01;
  EffectAnim_UIAnim *this_02;
  EffectAnim_UIAnim *this_03;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LotteryResultProgressBar *pLVar8;
  SalesProgressBar *pSVar9;
  undefined8 uVar10;
  char *pcVar11;
  int iVar12;
  long *plVar13;
  PVZ2UIButton *pPVar14;
  code *pcVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  this_00 = (EffectAnim_UIAnim *)(this + 0x1a8);
  this_01 = (EffectAnim_UIAnim *)(this + 0x1d8);
  local_8 = ___stack_chk_guard;
  EffectAnim_UIAnim::SafeRelease(this_00);
  this_02 = (EffectAnim_UIAnim *)(this + 0x208);
  this_03 = (EffectAnim_UIAnim *)(this + 0x238);
  EffectAnim_UIAnim::SafeRelease(this_01);
  EffectAnim_UIAnim::SafeRelease(this_02);
  EffectAnim_UIAnim::SafeRelease(this_03);
  this[0x59] = (TGProduct)0x0;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b008);
  LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b008);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar9);
  iVar3 = FUN_04bc5564(0x2ee);
  iVar4 = FUN_04bc5564(0x24e);
  iVar7 = *(int *)(this + 0x50) - iVar3 >> 1;
  fVar17 = (float)(iVar7 + iVar3 / 2);
  iVar5 = FUN_04bc5564(0x46);
  fVar16 = (float)((iVar2 << 1) / 3 + (*(int *)(this + 0x54) - iVar4 >> 1) + iVar4 / 2) -
           (float)iVar5;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,fVar17,fVar16);
  *(undefined8 *)(this + 0x1a0) = local_40;
  std::string::string((string *)&local_40,"POPANIM_EFFECTS_PLANTBACK_LIGHT_WHITE");
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_78,(float)(*(int *)(this + 0x50) / 3),fVar16);
  pcVar11 = (char *)0x1;
  EffectAnim_UIAnim::InitUIAnim(0x3ecccccd,local_78,local_74,this_00,(FastCurve *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  cVar1 = EffectAnim_UIAnim::IsValid(this_00);
  if (cVar1 != '\0') {
    EA::Thread::MutexParameters::MutexParameters((MutexParameters *)this_00,false,pcVar11);
  }
  std::string::string((string *)&local_40,"POPANIM_EFFECTS_PLANTBACK_LIGHT_WHITE");
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_78,(float)(*(int *)(this + 0x50) / 2),fVar16);
  pcVar11 = (char *)0x1;
  EffectAnim_UIAnim::InitUIAnim(0x3ecccccd,local_78,local_74,this_01,(FastCurve *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  cVar1 = EffectAnim_UIAnim::IsValid(this_01);
  if (cVar1 != '\0') {
    EA::Thread::MutexParameters::MutexParameters((MutexParameters *)this_01,false,pcVar11);
  }
  std::string::string((string *)&local_40,"POPANIM_EFFECTS_PLANTBACK_LIGHT_WHITE");
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_78,(float)((*(int *)(this + 0x50) << 1) / 3),fVar16);
  pcVar11 = (char *)0x1;
  EffectAnim_UIAnim::InitUIAnim(0x3ecccccd,local_78,local_74,this_02,(FastCurve *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  cVar1 = EffectAnim_UIAnim::IsValid(this_02);
  if (cVar1 != '\0') {
    EA::Thread::MutexParameters::MutexParameters((MutexParameters *)this_02,false,pcVar11);
  }
  std::string::string((string *)&local_40,"POPANIM_EFFECTS_TRANSGENOSIS_OPEN");
  pcVar11 = (char *)0x1;
  EffectAnim_UIAnim::InitUIAnim
            (0x3f800000,*(undefined4 *)(this + 0x1a0),*(undefined4 *)(this + 0x1a4),this_03,
             (FastCurve *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  cVar1 = EffectAnim_UIAnim::IsValid(this_03);
  if (cVar1 != '\0') {
    EA::Thread::MutexParameters::MutexParameters((MutexParameters *)this_03,false,pcVar11);
  }
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b488);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar2 = -(iVar5 / 2);
  fVar18 = (float)(iVar5 / 2);
  iVar12 = (int)(fVar16 - fVar18);
  Sexy::Insets::Insets((Insets *)&local_40,*(int *)(this + 0x50) / 3 + iVar2,iVar12,iVar5,iVar5);
  *(undefined8 *)(this + 0x118) = local_40;
  *(undefined8 *)(this + 0x120) = uStack_38;
  Sexy::Insets::Insets((Insets *)&local_40,(int)(fVar17 - fVar18),iVar12,iVar5,iVar5);
  *(undefined8 *)(this + 0x128) = local_40;
  *(undefined8 *)(this + 0x130) = uStack_38;
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar2 + (*(int *)(this + 0x50) << 1) / 3,iVar12,iVar5,iVar5);
  *(undefined8 *)(this + 0x138) = local_40;
  *(undefined8 *)(this + 0x140) = uStack_38;
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ae90);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar4 = FUN_04bc5564(0x96);
  iVar6 = FUN_04bc5564(100);
  Sexy::Insets::Insets
            ((Insets *)&local_40,(int)(fVar17 - (float)(iVar2 / 2)),iVar12 - iVar4,iVar3,iVar6);
  *(undefined8 *)(this + 0x108) = local_40;
  *(undefined8 *)(this + 0x110) = uStack_38;
  iVar2 = FUN_04bc5564(0x32);
  iVar2 = iVar5 + iVar12 + iVar2;
  iVar4 = *(int *)(this + 0x50);
  iVar6 = FUN_04bc5564(0x3c);
  Sexy::Insets::Insets((Insets *)&local_40,iVar4 / 3 + -(iVar3 / 2),iVar2,iVar3,iVar6);
  *(undefined8 *)(this + 0x148) = local_40;
  *(undefined8 *)(this + 0x150) = uStack_38;
  iVar4 = FUN_04bc5564(0x3c);
  Sexy::Insets::Insets((Insets *)&local_40,iVar7,iVar2,iVar3,iVar4);
  iVar7 = *(int *)(this + 0x50);
  *(undefined8 *)(this + 0x158) = local_40;
  *(undefined8 *)(this + 0x160) = uStack_38;
  iVar4 = FUN_04bc5564(0x3c);
  Sexy::Insets::Insets((Insets *)&local_40,-(iVar3 / 2) + (iVar7 << 1) / 3,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0x168) = local_40;
  *(undefined8 *)(this + 0x170) = uStack_38;
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8afd8);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8afd8);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar9);
  iVar3 = FUN_04bc5564(0x78);
  Sexy::Insets::Insets
            ((Insets *)&local_40,(int)(fVar17 - (float)((int)((float)iVar7 * 3.0) / 2)),
             iVar5 + iVar12 + iVar3,(int)((float)iVar7 * 3.0),iVar2);
  plVar13 = *(long **)(this + 0x100);
  *(undefined8 *)(this + 0x178) = local_40;
  *(undefined8 *)(this + 0x180) = uStack_38;
  if (plVar13 == (long *)0x0) {
    TodStringTranslate(L"[SALES_REWARD_BOX_CLOSE]");
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar14 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar14,0x6b,(ButtonListener *)(this + 0xd8),(wstring *)&local_78,(Color *)&local_40)
    ;
    *(PVZ2UIButton **)(this + 0x100) = pPVar14;
    FUN_05476c50((FastCurve *)&local_78);
    plVar13 = *(long **)(this + 0x100);
    if (plVar13 == (long *)0x0) goto LAB_04bcc02c;
  }
  pcVar15 = *(code **)(*plVar13 + 800);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  (*pcVar15)(plVar13,uVar10);
  pPVar14 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b8afd8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8add8,3);
  PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x100) + 0x1a0))(*(long **)(this + 0x100),this + 0x178);
  (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),0);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
LAB_04bcc02c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGProduct::TGProduct() */

void __thiscall TGProduct::TGProduct(TGProduct *this)

{
  Insets *this_00;
  LawnApp *this_01;
  TGProduct *this_02;
  TGProduct *this_03;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_0697a600;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0697a928;
  *(undefined8 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  this[0xf8] = (TGProduct)0x0;
  this[0xf9] = (TGProduct)0x0;
  this[0xfa] = (TGProduct)0x0;
  *(undefined8 *)(this + 0x100) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x108));
  this_02 = this + 0x118;
  do {
    this_03 = this_02 + 0x10;
    Sexy::Insets::Insets((Insets *)this_02);
    this_02 = this_03;
  } while (this_03 != this + 0x148);
  do {
    this_00 = (Insets *)(this_03 + 0x10);
    Sexy::Insets::Insets((Insets *)this_03);
    this_03 = (TGProduct *)this_00;
  } while (this_00 != (Insets *)(this + 0x178));
  Sexy::Insets::Insets(this_00);
  FUN_05478178(this + 0x188,&DAT_056f11a8,asStack_10);
  nop();
  FUN_05478178(this + 400,&DAT_056f11a8,asStack_10);
  nop();
  FUN_05478178(this + 0x198,&DAT_056f11a8,asStack_10);
  nop();
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1a0));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1a8));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1d8));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x208));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x238));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x268));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x280));
  this_01 = gLawnApp;
  std::string::string(asStack_10,"Plantback");
  LawnApp::LoadGroup(this_01,asStack_10);
  std::string::~string(asStack_10);
  nop();
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGProduct::Draw(Sexy::Graphics*) */

void TGProduct::Draw(Graphics *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Image *pIVar4;
  wchar16 *pwVar5;
  Graphics *in_x1;
  int iVar6;
  LineBreakCategory *pLVar7;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0xfa] == (Graphics)0x0) {
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(param_1 + 0x268));
    local_18[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(param_1 + 0x268));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)local_18), bVar1)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20)
      ;
      if ((Effect_Whirlpool *)*puVar3 != (Effect_Whirlpool *)0x0) {
        Effect_Whirlpool::OnDraw((Effect_Whirlpool *)*puVar3,in_x1);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    }
    goto LAB_04bcd3e0;
  }
  cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x1a8));
  if (cVar2 == '\0') {
LAB_04bcd42c:
    cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x1d8));
    if (cVar2 == '\0') goto LAB_04bcd440;
LAB_04bcd59c:
    pwVar5 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar7 = (LineBreakCategory *)&local_20;
    std::string::string((string *)local_18,"HideAnim");
    cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar5,(wchar16 *)local_18,pLVar7,in_x3,in_x4);
    std::string::~string((string *)local_18);
    nop();
    if (cVar2 != '\0') goto LAB_04bcd440;
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(param_1 + 0x1d8),in_x1);
    cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x208));
    if (cVar2 != '\0') goto LAB_04bcd604;
LAB_04bcd454:
    cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x238));
  }
  else {
    pwVar5 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar7 = (LineBreakCategory *)&local_20;
    std::string::string((string *)local_18,"HideAnim");
    cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar5,(wchar16 *)local_18,pLVar7,in_x3,in_x4);
    std::string::~string((string *)local_18);
    nop();
    if (cVar2 != '\0') goto LAB_04bcd42c;
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(param_1 + 0x1a8),in_x1);
    cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x1d8));
    if (cVar2 != '\0') goto LAB_04bcd59c;
LAB_04bcd440:
    cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x208));
    if (cVar2 == '\0') goto LAB_04bcd454;
LAB_04bcd604:
    pwVar5 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar7 = (LineBreakCategory *)&local_20;
    std::string::string((string *)local_18,"HideAnim");
    cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar5,(wchar16 *)local_18,pLVar7,in_x3,in_x4);
    std::string::~string((string *)local_18);
    nop();
    if (cVar2 != '\0') goto LAB_04bcd454;
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(param_1 + 0x208),in_x1);
    cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x238));
  }
  if (cVar2 != '\0') {
    pwVar5 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar7 = (LineBreakCategory *)&local_20;
    std::string::string((string *)local_18,"HideAnim");
    cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar5,(wchar16 *)local_18,pLVar7,in_x3,in_x4);
    std::string::~string((string *)local_18);
    nop();
    if (cVar2 == '\0') {
      EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(param_1 + 0x238),in_x1);
    }
  }
  PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
  iVar6 = *(int *)(param_1 + 0xe0);
  if (*(int *)(param_1 + 0xe8) == 0 || (*(int *)(param_1 + 0xe4) == 0 || iVar6 == 0)) {
    PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Shaded);
    iVar6 = *(int *)(param_1 + 0xe0);
    if (iVar6 == 0) goto LAB_04bcd4a8;
LAB_04bcd670:
    LawnApp::DrawPiecesInRect(gLawnApp,in_x1,iVar6,(TRect *)(param_1 + 0x118));
    Sexy::Color::Color((Color *)local_18,0xfd,0xdc,0x75);
    WriteWordInRect();
    iVar6 = *(int *)(param_1 + 0xe4);
    if (iVar6 == 0) goto LAB_04bcd4b0;
LAB_04bcd6cc:
    LawnApp::DrawPiecesInRect(gLawnApp,in_x1,iVar6,(TRect *)(param_1 + 0x128));
    Sexy::Color::Color((Color *)local_18,0xfd,0xdc,0x75);
    WriteWordInRect();
    iVar6 = *(int *)(param_1 + 0xe8);
  }
  else {
    if (iVar6 != 0) goto LAB_04bcd670;
LAB_04bcd4a8:
    iVar6 = *(int *)(param_1 + 0xe4);
    if (iVar6 != 0) goto LAB_04bcd6cc;
LAB_04bcd4b0:
    iVar6 = *(int *)(param_1 + 0xe8);
  }
  if (iVar6 != 0) {
    LawnApp::DrawPiecesInRect(gLawnApp,in_x1,iVar6,(TRect *)(param_1 + 0x138));
    Sexy::Color::Color((Color *)local_18,0xfd,0xdc,0x75);
    WriteWordInRect();
  }
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ae90);
  Sexy::Graphics::DrawImage(in_x1,pIVar4,*(int *)(param_1 + 0x108),*(int *)(param_1 + 0x10c));
LAB_04bcd3e0:
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGProduct::~TGProduct() */

void __thiscall TGProduct::~TGProduct(TGProduct *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  LawnApp *this_01;
  bool bVar1;
  long *plVar2;
  TGProduct *pTVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0697a600;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0697a928;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x268);
  EffectAnim_UIAnim::SafeRelease((EffectAnim_UIAnim *)(this + 0x1a8));
  EffectAnim_UIAnim::SafeRelease((EffectAnim_UIAnim *)(this + 0x1d8));
  EffectAnim_UIAnim::SafeRelease((EffectAnim_UIAnim *)(this + 0x208));
  EffectAnim_UIAnim::SafeRelease((EffectAnim_UIAnim *)(this + 0x238));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 0x18))();
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  pTVar3 = this + 0x1a0;
  std::vector<Effect_Whirlpool*,std::allocator<Effect_Whirlpool*>>::clear
            ((vector<Effect_Whirlpool*,std::allocator<Effect_Whirlpool*>> *)this_00);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_01 = gLawnApp;
  std::string::string((string *)&local_10,"Plantback");
  LawnApp::DeleteGroup(this_01,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x280));
  std::vector<Effect_Whirlpool*,std::allocator<Effect_Whirlpool*>>::~vector
            ((vector<Effect_Whirlpool*,std::allocator<Effect_Whirlpool*>> *)this_00);
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x238));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x208));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1d8));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1a8));
  do {
    pTVar3 = pTVar3 + -8;
    FUN_05476c50(pTVar3);
  } while (this + 0x188 != pTVar3);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TGProduct::~TGProduct() */

void __thiscall TGProduct::~TGProduct(TGProduct *this)

{
  ~TGProduct(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGProduct::StartEffect() */

void __thiscall TGProduct::StartEffect(TGProduct *this)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined8 *puVar4;
  FilesystemSaveGameContext *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_UI_Transgene_Synthesize");
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x268));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x268));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (FilesystemSaveGameContext *)*puVar4;
    if ((this_00 != (FilesystemSaveGameContext *)0x0) &&
       (cVar1 = Sexy::FilesystemSaveGameContext::HasError(this_00), cVar1 == '\0')) {
      Effect_Whirlpool::StartEffect((Effect_Whirlpool *)this_00);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGProduct::ShowProduct(S2C_BonusInfo, int) */

void TGProduct::ShowProduct(long param_1,int param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  NameMapperBase *pNVar3;
  string *psVar4;
  EffectAnim_UIAnim *this;
  string asStack_38 [8];
  string asStack_30 [8];
  RtMixedPtrBase aRStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  this = (EffectAnim_UIAnim *)(param_1 + 0x1a8);
  local_8 = ___stack_chk_guard;
  if (((param_4 != 0) && (this = (EffectAnim_UIAnim *)(param_1 + 0x1d8), param_4 != 1)) &&
     (this = (EffectAnim_UIAnim *)(param_1 + 0x208), param_4 != 2)) {
    this = (EffectAnim_UIAnim *)0x0;
  }
  cVar1 = LawnApp::IsNameMapperContainsId(gLawnApp,param_2);
  if (cVar1 != '\0') {
    pNVar3 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar3,param_2);
    if (cVar1 == '\0') {
      pNVar3 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
      cVar1 = NameMapperBase::ContainsId(pNVar3,param_2);
      if (cVar1 == '\0') {
        LawnApp::GetNameMapperInfo((int)gLawnApp);
        FUN_05475d88(asStack_38,(pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_28);
        psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_30);
        if (cVar1 != '\0') {
          if ((this != (EffectAnim_UIAnim *)0x0) &&
             (cVar1 = EffectAnim_UIAnim::IsValid(this), cVar1 != '\0')) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
            PlantType::GetRareColor();
            EffectAnim_UIAnim::SetColor(this,aCStack_18);
          }
          cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x238));
          if (cVar1 != '\0') {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
            PlantType::GetRareColor();
            EffectAnim_UIAnim::SetColor((EffectAnim_UIAnim *)(param_1 + 0x238),aCStack_18);
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30)
        ;
        std::string::~string(asStack_38);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_28);
        goto LAB_04bcf594;
      }
      iVar2 = AvatarChipNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar2);
    }
    else {
      NewAvatar::GetPlantNameByAvatarPieceID(param_2);
    }
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
    if (cVar1 != '\0') {
      if ((this != (EffectAnim_UIAnim *)0x0) &&
         (cVar1 = EffectAnim_UIAnim::IsValid(this), cVar1 != '\0')) {
        Sexy::Color::Color(aCStack_18,0x30,0xf7,0xf5);
        EffectAnim_UIAnim::SetColor(this,aCStack_18);
      }
      cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x238));
      if (cVar1 != '\0') {
        Sexy::Color::Color(aCStack_18,0x30,0xf7,0xf5);
        EffectAnim_UIAnim::SetColor((EffectAnim_UIAnim *)(param_1 + 0x238),aCStack_18);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    std::string::~string(asStack_30);
  }
LAB_04bcf594:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGProduct::ShowTGProducts() */

void TGProduct::ShowTGProducts(void)

{
  EffectAnim_UIAnim *pEVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  long in_x0;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  int *piVar9;
  undefined8 uVar10;
  string *in_x2;
  string *psVar11;
  string *psVar12;
  undefined8 uVar13;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pEVar1 = (EffectAnim_UIAnim *)(in_x0 + 0x1a8);
  local_8 = ___stack_chk_guard;
  cVar4 = EffectAnim_UIAnim::IsValid(pEVar1);
  psVar12 = in_x2;
  if ((cVar4 != '\0') &&
     (lVar6 = FUN_04bc4888(*(undefined8 *)(in_x0 + 0x280),*(undefined8 *)(in_x0 + 0x288)),
     psVar12 = in_x2, lVar6 - 2U < 2)) {
    psVar12 = asStack_18;
    EA::Thread::MutexParameters::MutexParameters((MutexParameters *)pEVar1,true,(char *)in_x2);
    std::string::string(asStack_10,"anim");
    EffectAnim_UIAnim::PlayLoop(pEVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  pEVar1 = (EffectAnim_UIAnim *)(in_x0 + 0x1d8);
  cVar4 = EffectAnim_UIAnim::IsValid(pEVar1);
  psVar11 = psVar12;
  if (cVar4 != '\0') {
    uVar7 = FUN_04bc4888(*(undefined8 *)(in_x0 + 0x280),*(undefined8 *)(in_x0 + 0x288));
    psVar11 = psVar12;
    if ((uVar7 & 0xfffffffffffffffd) == 1) {
      psVar11 = asStack_18;
      EA::Thread::MutexParameters::MutexParameters((MutexParameters *)pEVar1,true,(char *)psVar12);
      std::string::string(asStack_10,"anim");
      EffectAnim_UIAnim::PlayLoop(pEVar1,asStack_10);
      std::string::~string(asStack_10);
      nop();
    }
  }
  pEVar1 = (EffectAnim_UIAnim *)(in_x0 + 0x208);
  cVar4 = EffectAnim_UIAnim::IsValid(pEVar1);
  iVar5 = (int)in_x0;
  psVar12 = psVar11;
  if ((cVar4 == '\0') ||
     (lVar6 = FUN_04bc4888(*(undefined8 *)(in_x0 + 0x280),*(undefined8 *)(in_x0 + 0x288)),
     psVar12 = psVar11, 1 < lVar6 - 2U)) {
    cVar4 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(in_x0 + 0x238));
    if (cVar4 == '\0') goto LAB_04bcf858;
LAB_04bcf920:
    EA::Thread::MutexParameters::MutexParameters
              ((MutexParameters *)(in_x0 + 0x238),true,(char *)psVar12);
    std::string::string(asStack_18,"effect_on");
    std::string::string(asStack_10,"effect_fullscreen_star");
    EffectAnim_UIAnim::PlayOnceThenLoop((EffectAnim_UIAnim *)(in_x0 + 0x238),asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    uVar13 = *(undefined8 *)(in_x0 + 0x280);
    lVar6 = FUN_04bc4888(uVar13,*(undefined8 *)(in_x0 + 0x288));
    if (lVar6 == 1) goto LAB_04bcf9b0;
LAB_04bcf874:
    if (lVar6 != 2) {
      if (lVar6 == 3) {
        piVar9 = (int *)FUN_04bc489c(uVar13,0);
        iVar2 = piVar9[1];
        iVar3 = *piVar9;
        *(int *)(in_x0 + 0xe0) = iVar3;
        *(int *)(in_x0 + 0xec) = iVar2;
        GetProductDes(iVar5,iVar3);
        FUN_054766c8(in_x0 + 0x188,asStack_10);
        FUN_05476c50(asStack_10);
        piVar9 = (int *)FUN_04bc489c(*(undefined8 *)(in_x0 + 0x280),1);
        iVar2 = piVar9[1];
        iVar3 = *piVar9;
        *(int *)(in_x0 + 0xe4) = iVar3;
        *(int *)(in_x0 + 0xf0) = iVar2;
        GetProductDes(iVar5,iVar3);
        FUN_054766c8(in_x0 + 400,asStack_10);
        FUN_05476c50(asStack_10);
        piVar9 = (int *)FUN_04bc489c(*(undefined8 *)(in_x0 + 0x280),2);
        iVar2 = piVar9[1];
        iVar3 = *piVar9;
        *(int *)(in_x0 + 0xe8) = iVar3;
        *(int *)(in_x0 + 0xf4) = iVar2;
        GetProductDes(iVar5,iVar3);
        FUN_054766c8(in_x0 + 0x198,asStack_10);
        FUN_05476c50(asStack_10);
        FUN_04bc489c(*(undefined8 *)(in_x0 + 0x280),0);
        ShowProduct();
        FUN_04bc489c(*(undefined8 *)(in_x0 + 0x280),1);
        ShowProduct();
        FUN_04bc489c(*(undefined8 *)(in_x0 + 0x280),2);
        ShowProduct();
      }
      goto LAB_04bcf884;
    }
    piVar9 = (int *)FUN_04bc489c(uVar13,0);
    iVar2 = piVar9[1];
    iVar3 = *piVar9;
    *(int *)(in_x0 + 0xe0) = iVar3;
    *(int *)(in_x0 + 0xec) = iVar2;
    GetProductDes(iVar5,iVar3);
    FUN_054766c8(in_x0 + 0x188,asStack_10);
    FUN_05476c50(asStack_10);
    piVar9 = (int *)FUN_04bc489c(*(undefined8 *)(in_x0 + 0x280),1);
    iVar2 = piVar9[1];
    iVar3 = *piVar9;
    *(int *)(in_x0 + 0xe8) = iVar3;
    *(int *)(in_x0 + 0xf4) = iVar2;
    GetProductDes(iVar5,iVar3);
    FUN_054766c8(in_x0 + 0x198,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_04bc489c(*(undefined8 *)(in_x0 + 0x280),0);
    ShowProduct();
    uVar13 = *(undefined8 *)(in_x0 + 0x280);
    uVar10 = 1;
  }
  else {
    psVar12 = asStack_18;
    EA::Thread::MutexParameters::MutexParameters((MutexParameters *)pEVar1,true,(char *)psVar11);
    std::string::string(asStack_10,"anim");
    EffectAnim_UIAnim::PlayLoop(pEVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
    cVar4 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(in_x0 + 0x238));
    if (cVar4 != '\0') goto LAB_04bcf920;
LAB_04bcf858:
    uVar13 = *(undefined8 *)(in_x0 + 0x280);
    lVar6 = FUN_04bc4888(uVar13,*(undefined8 *)(in_x0 + 0x288));
    if (lVar6 != 1) goto LAB_04bcf874;
LAB_04bcf9b0:
    piVar9 = (int *)FUN_04bc489c(uVar13,0);
    iVar2 = piVar9[1];
    iVar3 = *piVar9;
    *(int *)(in_x0 + 0xe4) = iVar3;
    *(int *)(in_x0 + 0xf0) = iVar2;
    GetProductDes(iVar5,iVar3);
    FUN_054766c8(in_x0 + 400,asStack_10);
    FUN_05476c50(asStack_10);
    uVar13 = *(undefined8 *)(in_x0 + 0x280);
    uVar10 = 0;
  }
  FUN_04bc489c(uVar13,uVar10);
  ShowProduct();
LAB_04bcf884:
  plVar8 = *(long **)(in_x0 + 0x100);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x158))(plVar8,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGProduct::Update() */

void __thiscall TGProduct::Update(TGProduct *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  CrazyNPCManager *pCVar6;
  Effect_Whirlpool *pEVar7;
  undefined8 local_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xfa] != (TGProduct)0x0) {
    cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1a8));
    if (cVar2 != '\0') {
      EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x1a8));
    }
    cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1d8));
    if (cVar2 != '\0') {
      EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x1d8));
    }
    cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x208));
    if (cVar2 != '\0') {
      EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x208));
    }
    cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x238));
    if (cVar2 != '\0') {
      EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x238));
    }
    if (this[0xfa] != (TGProduct)0x0) goto LAB_04bcfd80;
  }
  lVar4 = FUN_04bc487c(*(undefined8 *)(this + 0x268),*(undefined8 *)(this + 0x270));
  if (lVar4 != 0) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x268);
    bVar3 = true;
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48)
      ;
      pEVar7 = (Effect_Whirlpool *)*puVar5;
      if (pEVar7 != (Effect_Whirlpool *)0x0) {
        Effect_Whirlpool::OnUpdate(pEVar7);
        cVar2 = Sexy::FilesystemSaveGameContext::HasError((FilesystemSaveGameContext *)pEVar7);
        if (cVar2 == '\0') {
          bVar3 = false;
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
    }
    if (bVar3) {
      local_48 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_00);
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40),
            bVar3) {
        puVar5 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
        pEVar7 = (Effect_Whirlpool *)*puVar5;
        if (((pEVar7 != (Effect_Whirlpool *)0x0) &&
            (cVar2 = Effect_Whirlpool::IsActive(pEVar7), cVar2 != '\0')) &&
           (cVar2 = Effect_Whirlpool::IsEnd(pEVar7), cVar2 == '\0')) goto LAB_04bcfd80;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
      }
      ShowTGProducts();
      this[0xfa] = (TGProduct)0x1;
      if (this[0xf8] != (TGProduct)0x0) {
        pCVar6 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
        std::string::string((string *)&local_48,"TRANS_GENOSIS_SELECT_END_TUTORIAL");
        Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
        std::string::string((string *)&local_40,"");
        CrazyNPCManager::StartNarrativeID
                  (pCVar6,(exception_ptr *)&local_48,aDStack_38,(string *)&local_40);
        std::string::~string((string *)&local_40);
        nop();
        std::string::~string((string *)&local_48);
        nop();
      }
    }
  }
LAB_04bcfd80:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* TGProduct::ButtonDepress(int) */

TGProduct * __thiscall TGProduct::ButtonDepress(TGProduct *this,int param_1)

{
  LawnApp *this_00;
  byte bVar1;
  TransGenosisUI *this_01;
  TGProduct *pTVar2;
  
  this_00 = gLawnApp;
  if (param_1 == 0x6b) {
    bVar1 = LawnApp::IsTransGenosisUIValid(gLawnApp);
    this = (TGProduct *)(ulong)bVar1;
    if (bVar1 != 0) {
      this_01 = (TransGenosisUI *)LawnApp::GetTransGenosisUI(this_00);
      pTVar2 = (TGProduct *)TransGenosisUI::CloseProductUI(this_01);
      return pTVar2;
    }
  }
  return this;
}


/* non-virtual thunk to TGProduct::ButtonDepress(int) */

void __thiscall TGProduct::ButtonDepress(TGProduct *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGProduct::SetSource(std::vector<int, std::allocator<int> >) */

void __thiscall
TGProduct::SetSource
          (TGProduct *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2)

{
  bool bVar1;
  int *piVar2;
  Effect_Whirlpool *pEVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 local_20;
  undefined8 local_18;
  Effect_Whirlpool *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = 0;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_2);
  local_10 = (Effect_Whirlpool *)
             std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_2);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 != 0) {
      iVar4 = iVar4 + 1;
    }
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
  }
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_2);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_2);
  iVar5 = 0;
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    if (*piVar2 != 0) {
      uVar6 = *(undefined8 *)(this + 0x1a0);
      pEVar3 = ::operator_new(0x38);
      fVar7 = (float)iVar5;
      iVar5 = iVar5 + 1;
      Effect_Whirlpool::Effect_Whirlpool
                ((Effect_Whirlpool *)uVar6,(int)((ulong)uVar6 >> 0x20),0x44af0000,
                 fVar7 * (6.2831855 / (float)iVar4),0x3fc00000,pEVar3,*(undefined4 *)(this + 0x130),
                 *piVar2,this[0xf9]);
      local_10 = pEVar3;
      Effect_Whirlpool::SetSpeedOfAng(-3.1415927);
      Effect_Whirlpool::SetSpeedOfRadius(local_10,-2000.0);
      Effect_Whirlpool::SetSpeedOfScale(local_10,-0.5);
      std::vector<Effect_Whirlpool*,std::allocator<Effect_Whirlpool*>>::push_back
                ((vector<Effect_Whirlpool*,std::allocator<Effect_Whirlpool*>> *)(this + 0x268),
                 &local_10);
    }
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGProduct::AddTGProducts(std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >, bool) */

void TGProduct::AddTGProducts
               (long param_1,
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *param_2,char param_3,LineBreakCategory *param_4,LineBreakCategory *param_5)

{
  PlayerInfo *pPVar1;
  char cVar2;
  bool bVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  NetworkMgr *this_01;
  long lVar4;
  wchar16 *pwVar5;
  undefined4 *puVar6;
  NetworkCacheQueue *pNVar7;
  char *__s;
  exception_ptr *peVar8;
  string asStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    pPVar1 = this_00 + 0x350;
    *(char *)(param_1 + 0xf8) = param_3;
    FUN_04bc4848(pPVar1,0);
    if (param_3 == '\0') {
      std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
                ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_20,(vector *)param_2)
      ;
      PlayerInfo::AddCommonGachaRewardList
                (this_00,(vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_20,0);
      std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
                ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_20);
      FUN_04bc4848(pPVar1,1);
      PlayerInfo::SAVE_PROFILE(this_00);
      std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
                ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(param_1 + 0x280),
                 (vector *)param_2);
    }
    else {
      this_01 = (NetworkMgr *)NetworkMgr::Instance();
      lVar4 = NetworkMgr::GetNewNetWorkProcess(this_01);
      if (lVar4 != 0) {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
        pwVar5 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
        peVar8 = (exception_ptr *)&local_48;
        std::string::string((string *)&local_20,"TGTutorial");
        cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                          (pwVar5,(wchar16 *)&local_20,(LineBreakCategory *)peVar8,param_4,param_5);
        if (cVar2 == '\0') {
          __s = "TG_Tutorial";
        }
        else {
          __s = "";
        }
        std::string::string(asStack_50,__s);
        nop();
        std::string::~string((string *)&local_20);
        nop();
        local_48 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(param_2);
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(param_2);
        while (bVar3 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40),
              bVar3) {
          puVar6 = (undefined4 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
          local_20 = *puVar6;
          local_1c = puVar6[1];
          FUN_05475d88(auStack_18,asStack_50);
          std::vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>>::push_back
                    ((vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>> *)avStack_38,
                     (NetworkCacheObjects *)&local_20);
          PakRecord::~PakRecord((PakRecord *)&local_20);
          __gnu_cxx::
          __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
          ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                        *)&local_48);
        }
        pNVar7 = (NetworkCacheQueue *)INetworkMsgProcess::GetNetworkCacheQueue();
        std::vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>>::vector
                  ((vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>> *)&local_20,
                   (vector *)avStack_38);
        NetworkCacheQueue::insertCachedObject(pNVar7,(string *)&local_20);
        std::vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>>::~vector
                  ((vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>> *)&local_20);
        INetworkMsgProcess::SaveCache();
        pNVar7 = (NetworkCacheQueue *)INetworkMsgProcess::GetNetworkCacheQueue();
        NetworkCacheQueue::flush(pNVar7);
        std::string::~string(asStack_50);
        std::vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>>::~vector
                  ((vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>> *)avStack_38);
      }
      PlayerInfo::CompleteTutorial(this_00,0x29);
      MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::TGTutorial,2);
      FUN_04bc4848(pPVar1,1);
      PlayerInfo::SAVE_PROFILE(this_00);
      std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
                ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(param_1 + 0x280),
                 (vector *)param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

