// Class: CustomLevelItemWidget


/* CustomLevelItemWidget::LoadData(CustomNetworkPreviewData const&) */

void __thiscall
CustomLevelItemWidget::LoadData(CustomLevelItemWidget *this,CustomNetworkPreviewData *param_1)

{
  CustomNetworkPreviewData::operator=((CustomNetworkPreviewData *)(this + 600),param_1);
  return;
}


/* CustomLevelItemWidget::~CustomLevelItemWidget() */

void __thiscall CustomLevelItemWidget::~CustomLevelItemWidget(CustomLevelItemWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06662480;
  CustomNetworkPreviewData::~CustomNetworkPreviewData((CustomNetworkPreviewData *)(this + 600));
  FUN_05476c50(this + 0x210);
  FUN_05476c50(this + 0x1f8);
  FUN_05476c50(this + 0x1e0);
  FUN_05476c50(this + 0x1c8);
  FUN_05476c50(this + 0x1b0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* CustomLevelItemWidget::~CustomLevelItemWidget() */

void __thiscall CustomLevelItemWidget::~CustomLevelItemWidget(CustomLevelItemWidget *this)

{
  ~CustomLevelItemWidget(this);
  AK::FreeHook(this);
  return;
}


/* CustomLevelItemWidget::GetData() const */

CustomNetworkPreviewData * CustomLevelItemWidget::GetData(void)

{
  long in_x0;
  CustomNetworkPreviewData *in_x8;
  
  CustomNetworkPreviewData::CustomNetworkPreviewData
            (in_x8,(CustomNetworkPreviewData *)(in_x0 + 600));
  return in_x8;
}


/* CustomLevelItemWidget::RegisterTouchCallBackFunc(Sexy::Delegate2<CustomNetworkPreviewData const&,
   int const&>) */

void __thiscall
CustomLevelItemWidget::RegisterTouchCallBackFunc(CustomLevelItemWidget *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x228),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelItemWidget::GetCurrentMainImage(int, int) */

void __thiscall
CustomLevelItemWidget::GetCurrentMainImage(CustomLevelItemWidget *this,int param_1,int param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"");
  nop();
  if (param_2 < 3) {
    pcVar1 = "IMAGE_UI_CUSTOM_LEVEL_BANNER_WORLD_%d";
    param_2 = param_1;
  }
  else {
    pcVar1 = "IMAGE_UI_CUSTOM_LEVEL_BANNER_LEVELMODE_%d";
  }
  Sexy::StrFormat(pcVar1,asStack_10,(ulong)(uint)param_2);
  FUN_05474278(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  uVar2 = StringHelper::ToImage(asStack_18,false);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelItemWidget::CalcStatisticValueString(int) */

void CustomLevelItemWidget::CalcStatisticValueString(int param_1)

{
  uint in_w1;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_18,&DAT_056f11a8,awStack_10);
  nop();
  if ((int)in_w1 < 100000) {
    Sexy::StrFormat(L"%d",(ulong)in_w1);
  }
  else {
    Sexy::StrFormat(L"%d",awStack_10,(ulong)(uint)((int)in_w1 / 10000));
    FUN_054766c8(awStack_18,awStack_10);
    FUN_05476c50(awStack_10);
    FUN_05478178(awStack_10,L"[CUSTOM_LEVEL_CHOOSE_LEVEL_LIKE_NUM]",auStack_20);
    TodReplaceString(awStack_10,L"{NUMS}",awStack_18);
    FUN_05476c50(awStack_10);
    nop();
  }
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelItemWidget::CustomLevelItemWidget(int) */

void __thiscall
CustomLevelItemWidget::CustomLevelItemWidget(CustomLevelItemWidget *this,int param_1)

{
  long lVar1;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06662480;
  Sexy::Insets::Insets((Insets *)(this + 0xe8));
  Sexy::Insets::Insets((Insets *)(this + 0x100));
  Sexy::Insets::Insets((Insets *)(this + 0x118));
  Sexy::Insets::Insets((Insets *)(this + 0x130));
  Sexy::Insets::Insets((Insets *)(this + 0x148));
  Sexy::Insets::Insets((Insets *)(this + 0x160));
  Sexy::Insets::Insets((Insets *)(this + 0x170));
  Sexy::Insets::Insets((Insets *)(this + 0x198));
  FUN_05476574(this + 0x1b0);
  Sexy::Insets::Insets((Insets *)(this + 0x1b8));
  FUN_05476574(this + 0x1c8);
  Sexy::Insets::Insets((Insets *)(this + 0x1d0));
  FUN_05476574(this + 0x1e0);
  Sexy::Insets::Insets((Insets *)(this + 0x1e8));
  FUN_05476574(this + 0x1f8);
  Sexy::Insets::Insets((Insets *)(this + 0x200));
  FUN_05476574(this + 0x210);
  Sexy::Insets::Insets((Insets *)(this + 0x218));
  Sexy::Delegate2<CustomNetworkPreviewData_const&,int_const&>::Delegate2
            ((DummyInit *)(this + 0x228));
  CustomNetworkPreviewData::CustomNetworkPreviewData((CustomNetworkPreviewData *)(this + 600));
  *(undefined4 *)(this + 0xd4) = 0xffffffff;
  Sexy::Delegate2<CustomNetworkPreviewData_const&,int_const&>::Delegate2(aDStack_38);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x228),(Delegate2 *)aDStack_38);
  *(int *)(this + 0xd8) = param_1;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  FUN_054772c4(this + 0x1b0,&DAT_056f11a8);
  FUN_054772c4(this + 0x1c8,&DAT_056f11a8);
  FUN_054772c4(this + 0x1e0,&DAT_056f11a8);
  FUN_054772c4(this + 0x1f8,&DAT_056f11a8);
  FUN_054772c4(this + 0x210,&DAT_056f11a8);
  lVar1 = ___stack_chk_guard;
  this[0x2a8] = (CustomLevelItemWidget)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelItemWidget::TouchEnded(Sexy::Touch const&) */

void __thiscall CustomLevelItemWidget::TouchEnded(CustomLevelItemWidget *this,Touch *param_1)

{
  int iVar1;
  
  if ((*(int *)(this + 0xd4) == (int)*(undefined8 *)param_1) &&
     (iVar1 = FUN_035e5c44(*(undefined8 *)(this + 0x230),*(undefined8 *)(this + 0x240)), iVar1 != 0)
     ) {
    Sexy::Delegate2<char_const*,char_const*>::operator()
              ((char *)(this + 0x228),(char *)(this + 600));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelItemWidget::Draw(Sexy::Graphics*) */

void __thiscall CustomLevelItemWidget::Draw(CustomLevelItemWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Image *pIVar6;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (*(long *)(this + 0xe0) != 0) {
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xe8));
    Draw9SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0xe0));
  }
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x1b0,this + 0x1b8,uVar5,aIStack_18,5,1);
  if (*(Image **)(this + 0xf8) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xf8),*(int *)(this + 0x100),*(int *)(this + 0x104),
               *(int *)(this + 0x108),*(int *)(this + 0x10c));
  }
  if (*(Image **)(this + 0x110) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x110),*(int *)(this + 0x118),*(int *)(this + 0x11c),
               *(int *)(this + 0x120),*(int *)(this + 0x124));
  }
  if ((*(Image **)(this + 0x128) != (Image *)0x0) && (this[0x2a8] != (CustomLevelItemWidget)0x0)) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x128),*(int *)(this + 0x130),*(int *)(this + 0x134),
               *(int *)(this + 0x138),*(int *)(this + 0x13c));
  }
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa7c70);
  Sexy::Graphics::DrawImage
            (param_1,pIVar6,*(int *)(this + 0x170),*(int *)(this + 0x174),*(int *)(this + 0x178),
             *(int *)(this + 0x17c));
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x210,this + 0x218,uVar5,aIStack_18,5,1);
  if (*(Image **)(this + 0x140) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x140),*(int *)(this + 0x148),*(int *)(this + 0x14c),
               *(int *)(this + 0x150),*(int *)(this + 0x154));
  }
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x1c8,this + 0x1d0,uVar5,aIStack_18,5,1);
  if (*(Image **)(this + 0x158) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x158),*(int *)(this + 0x160),*(int *)(this + 0x164),
               *(int *)(this + 0x168),*(int *)(this + 0x16c));
  }
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x1e0,this + 0x1e8,uVar5,aIStack_18,5,1);
  if (*(long *)(this + 0x180) != 0) {
    if (*(long *)(this + 400) != 0) {
      Sexy::Insets::Insets
                (aIStack_18,*(int *)(this + 0x198),*(int *)(this + 0x19c),*(int *)(this + 0x1a0),
                 *(int *)(this + 0x1a4));
      DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 400));
    }
    if (*(long *)(this + 0x188) != 0) {
      Sexy::Insets::Insets
                (aIStack_18,*(int *)(this + 0x198),*(int *)(this + 0x19c),*(int *)(this + 0x1a0),
                 *(int *)(this + 0x1a4));
      DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0x188));
    }
    iVar3 = FUN_035e74e0(10);
    iVar1 = *(int *)(this + 0x198);
    iVar2 = *(int *)(this + 0x19c);
    iVar4 = FUN_035e74e0(0x14);
    Sexy::Insets::Insets
              (aIStack_18,iVar3 + iVar1,iVar3 + iVar2,*(int *)(this + 0x1a0) - iVar4,
               *(int *)(this + 0x1a4) - iVar4);
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0x180));
  }
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x1f8,this + 0x200,uVar5,aIStack_18,3,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelItemWidget::InitHead(int) */

void __thiscall CustomLevelItemWidget::InitHead(CustomLevelItemWidget *this,int param_1)

{
  int iVar1;
  undefined8 uVar2;
  DIniFile *this_00;
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [16];
  string asStack_58 [16];
  DString aDStack_48 [16];
  int local_38 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetGameItemInfo(param_1,0x7fffffff,0);
  if (local_38[0] != 0) {
    uVar2 = StringHelper::ToImage(asStack_18,false);
    *(undefined8 *)(this + 0x180) = uVar2;
    DSingleton<HeadshotConfig>::getInstance();
    nop();
    DString::DString(aDStack_48,param_1);
    DString::operator_cast_to_string(aDStack_48);
    std::string::string(asStack_58,"frame");
    iVar1 = DIniFile::getItemInt(this_00,asStack_68,asStack_58,1);
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_68);
    DString::~DString(aDStack_48);
    DString::DString((DString *)asStack_68,iVar1);
    ::operator+("IMAGE_UI_HEADSHOTFRAME_LV",(DString *)asStack_68);
    ::operator+((DString *)asStack_58,"_1");
    DString::operator_cast_to_string(aDStack_48);
    DString::~DString(aDStack_48);
    DString::~DString((DString *)asStack_58);
    DString::~DString((DString *)asStack_68);
    uVar2 = StringHelper::ToImage(asStack_78,false);
    *(undefined8 *)(this + 0x188) = uVar2;
    DString::DString((DString *)asStack_68,iVar1);
    ::operator+("IMAGE_UI_HEADSHOTFRAME_LV",(DString *)asStack_68);
    ::operator+((DString *)asStack_58,"_2");
    DString::operator_cast_to_string(aDStack_48);
    DString::~DString(aDStack_48);
    DString::~DString((DString *)asStack_58);
    DString::~DString((DString *)asStack_68);
    uVar2 = StringHelper::ToImage(asStack_70,false);
    *(undefined8 *)(this + 400) = uVar2;
    std::string::~string(asStack_70);
    std::string::~string(asStack_78);
  }
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelItemWidget::InitView(bool) */

void CustomLevelItemWidget::InitView(bool param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  CustomLevelItemWidget *this;
  LotteryResultProgressBar *pLVar13;
  SalesProgressBar *pSVar14;
  undefined8 uVar15;
  CustomLevelMgr *pCVar16;
  string *extraout_x1;
  int iVar17;
  string asStack_28 [8];
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  this = (CustomLevelItemWidget *)(ulong)param_1;
  iVar1 = *(int *)(this + 0x50);
  local_8 = ___stack_chk_guard;
  iVar12 = *(int *)(this + 0x54) / 6;
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa8308);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa8308);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar14);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa8178);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa8178);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar14);
  iVar9 = FUN_035e74e0(10);
  iVar2 = *(int *)(this + 0x54);
  iVar3 = *(int *)(this + 0x50);
  iVar11 = iVar3 + iVar9 * -2;
  iVar17 = (int)((float)iVar2 * 0.6);
  iVar10 = FUN_035e74e0(0x14);
  uVar15 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa81b0);
  *(undefined8 *)(this + 0xe0) = uVar15;
  iVar2 = (iVar2 - iVar12) - iVar17;
  Sexy::Insets::Insets((Insets *)&local_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  *(undefined8 *)(this + 0xe8) = local_18;
  *(undefined8 *)(this + 0xf0) = uStack_10;
  Sexy::Insets::Insets((Insets *)&local_18,0,0,iVar1,iVar12);
  *(undefined8 *)(this + 0x1b8) = local_18;
  *(undefined8 *)(this + 0x1c0) = uStack_10;
  FUN_05475d88(asStack_28,this + 0x260);
  pCVar16 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::FilterLevelName(pCVar16,asStack_28);
  Sexy::UTF8StringToWString((Sexy *)asStack_28,extraout_x1);
  FUN_054766c8(this + 0x1b0,(Insets *)&local_18);
  FUN_05476c50((Insets *)&local_18);
  uVar15 = GetCurrentMainImage(this,*(int *)(this + 0x268),*(int *)(this + 0x288));
  *(undefined8 *)(this + 0xf8) = uVar15;
  Sexy::Insets::Insets((Insets *)&local_18,iVar9,iVar12,iVar11,iVar17);
  *(undefined8 *)(this + 0x100) = local_18;
  *(undefined8 *)(this + 0x108) = uStack_10;
  if (*(int *)(this + 0x278) != 0) {
    uVar15 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa8308);
    *(undefined8 *)(this + 0x110) = uVar15;
  }
  Sexy::Insets::Insets((Insets *)&local_18,iVar9,iVar12,iVar5,iVar6);
  *(undefined8 *)(this + 0x118) = local_18;
  *(undefined8 *)(this + 0x120) = uStack_10;
  pCVar16 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  cVar4 = CustomLevelMgr::IsMyFavourite(pCVar16,*(int *)(this + 600));
  if (cVar4 != '\0') {
    uVar15 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa8178);
    *(undefined8 *)(this + 0x128) = uVar15;
    Sexy::Insets::Insets((Insets *)&local_18,*(int *)(this + 0x50) - iVar7,0,iVar7,iVar8);
    *(undefined8 *)(this + 0x130) = local_18;
    *(undefined8 *)(this + 0x138) = uStack_10;
  }
  Sexy::Insets::Insets((Insets *)&local_18,iVar9,(iVar12 + iVar17) - iVar10,iVar11,iVar10);
  *(undefined8 *)(this + 0x170) = local_18;
  *(undefined8 *)(this + 0x178) = uStack_10;
  uVar15 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa83a8);
  *(undefined8 *)(this + 0x140) = uVar15;
  Sexy::Insets::Insets
            ((Insets *)&local_18,*(int *)(this + 0x170),*(int *)(this + 0x174),iVar10,iVar10);
  iVar1 = *(int *)(this + 0x170);
  *(undefined8 *)(this + 0x148) = local_18;
  *(undefined8 *)(this + 0x150) = uStack_10;
  iVar11 = FUN_035e74e0(2);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar10 + iVar1,iVar11 + *(int *)(this + 0x174),
             *(int *)(this + 0x178) / 2 - iVar10,*(int *)(this + 0x17c));
  *(undefined8 *)(this + 0x1d0) = local_18;
  *(undefined8 *)(this + 0x1d8) = uStack_10;
  CalcStatisticValueString((uint)param_1);
  FUN_054766c8(this + 0x1c8,(Insets *)&local_18);
  FUN_05476c50((Insets *)&local_18);
  uVar15 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa7c98);
  *(undefined8 *)(this + 0x158) = uVar15;
  Sexy::Insets::Insets
            ((Insets *)&local_18,*(int *)(this + 0x170) + *(int *)(this + 0x178) / 2,
             *(int *)(this + 0x174),iVar10,iVar10);
  iVar1 = *(int *)(this + 0x170);
  iVar11 = *(int *)(this + 0x178);
  *(undefined8 *)(this + 0x160) = local_18;
  *(undefined8 *)(this + 0x168) = uStack_10;
  iVar12 = FUN_035e74e0(2);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar10 + iVar11 / 2 + iVar1,iVar12 + *(int *)(this + 0x174),
             iVar11 / 2 - iVar10,*(int *)(this + 0x17c));
  *(undefined8 *)(this + 0x1e8) = local_18;
  *(undefined8 *)(this + 0x1f0) = uStack_10;
  CalcStatisticValueString((uint)param_1);
  FUN_054766c8(this + 0x1e0,(Insets *)&local_18);
  FUN_05476c50((Insets *)&local_18);
  Sexy::Insets::Insets((Insets *)&local_18,0,*(int *)(this + 0x54) - iVar2,iVar2,iVar2);
  *(undefined8 *)(this + 0x198) = local_18;
  *(undefined8 *)(this + 0x1a0) = uStack_10;
  if (*(int *)(this + 0x27c) != 0) {
    InitHead(this,*(int *)(this + 0x27c));
  }
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar2 + *(int *)(this + 0x198),*(int *)(this + 0x19c),
             (iVar3 + iVar2 * -2) - iVar9,iVar2);
  *(undefined8 *)(this + 0x200) = local_18;
  *(undefined8 *)(this + 0x208) = uStack_10;
  Sexy::UTF8StringToWString((Sexy *)(this + 0x280),(string *)(this + 0x200));
  FUN_054766c8(this + 0x1f8,(Insets *)&local_18);
  FUN_05476c50((Insets *)&local_18);
  Sexy::StrFormat("[CUSTOM_LEVEL_LEVEL_MODE_TYPE_%d]",asStack_20,(ulong)*(uint *)(this + 0x288));
  StringHelper::ToStringValue(asStack_20);
  FUN_054766c8(this + 0x210,(Insets *)&local_18);
  FUN_05476c50((Insets *)&local_18);
  Sexy::Insets::Insets
            ((Insets *)&local_18,*(int *)(this + 0x170),
             *(int *)(this + 0x174) - *(int *)(this + 0x17c),*(int *)(this + 0x178),
             *(int *)(this + 0x17c));
  *(undefined8 *)(this + 0x218) = local_18;
  *(undefined8 *)(this + 0x220) = uStack_10;
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

