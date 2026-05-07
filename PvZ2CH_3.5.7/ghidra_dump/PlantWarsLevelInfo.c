// Class: PlantWarsLevelInfo


/* PlantWarsLevelInfo::ScrollTargetReached(Sexy::ScrollWidget*) */

void PlantWarsLevelInfo::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PlantWarsLevelInfo::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
PlantWarsLevelInfo::ScrollTargetReached(PlantWarsLevelInfo *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* PlantWarsLevelInfo::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PlantWarsLevelInfo::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PlantWarsLevelInfo::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
PlantWarsLevelInfo::ScrollTargetInterrupted(PlantWarsLevelInfo *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* PlantWarsLevelInfo::~PlantWarsLevelInfo() */

void __thiscall PlantWarsLevelInfo::~PlantWarsLevelInfo(PlantWarsLevelInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_069bb210;
  *(undefined ***)(this + 0xd8) = &PTR__PlantWarsLevelInfo_069bb540;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to PlantWarsLevelInfo::~PlantWarsLevelInfo() */

void __thiscall PlantWarsLevelInfo::~PlantWarsLevelInfo(PlantWarsLevelInfo *this)

{
  ~PlantWarsLevelInfo(this + -0xd8);
  return;
}


/* PlantWarsLevelInfo::~PlantWarsLevelInfo() */

void __thiscall PlantWarsLevelInfo::~PlantWarsLevelInfo(PlantWarsLevelInfo *this)

{
  ~PlantWarsLevelInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantWarsLevelInfo::~PlantWarsLevelInfo() */

void __thiscall PlantWarsLevelInfo::~PlantWarsLevelInfo(PlantWarsLevelInfo *this)

{
  ~PlantWarsLevelInfo(this + -0xd8);
  return;
}


/* PlantWarsLevelInfo::PlantWarsLevelInfo() */

void __thiscall PlantWarsLevelInfo::PlantWarsLevelInfo(PlantWarsLevelInfo *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_069bb210;
  *(undefined ***)(this + 0xd8) = &PTR__PlantWarsLevelInfo_069bb540;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsLevelInfo::Init() */

void __thiscall PlantWarsLevelInfo::Init(PlantWarsLevelInfo *this)

{
  char *__s;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  UIWidgetText *pUVar9;
  long lVar10;
  PlantWarsNetworkMgr *pPVar11;
  UIWidgetImage *pUVar12;
  PVZ2UIScrollingWidget *this_00;
  Image *pIVar13;
  Image *pIVar14;
  Widget *this_01;
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this_02;
  PrimeTypeface *pPVar15;
  undefined8 uVar16;
  ulong uVar17;
  UIWidgetImage *pUVar18;
  int *piVar19;
  long *plVar20;
  ulong uVar21;
  code *pcVar22;
  float fVar23;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [4];
  int local_bc;
  undefined1 auStack_b8 [4];
  int local_b4;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  string asStack_a0 [8];
  string asStack_98 [8];
  undefined4 local_90 [4];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  char local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[LEVEL_SCORE]");
  pUVar9 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar9,(wstring *)&local_80);
  FUN_05476c50((wstring *)&local_80);
  uVar1 = FUN_04d9f494(0);
  uVar2 = FUN_04d9f494(5);
  uVar3 = FUN_04d9f494(0x1e);
  (**(code **)(*(long *)pUVar9 + 0x198))(pUVar9,uVar1,uVar2,*(undefined4 *)(this + 0x50),uVar3);
  UIWidgetText::SetFontIndex(pUVar9,0x7d);
  pcVar22 = *(code **)(*(long *)pUVar9 + 0x170);
  Sexy::Color::Color((Color *)&local_80,1);
  (*pcVar22)(pUVar9,0,(wstring *)&local_80);
  FUN_04d9e724(pUVar9 + 0xe0,5);
  (**(code **)(*(long *)this + 0x60))(this,pUVar9);
  lVar10 = Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  iVar4 = FUN_04d9e730(*(undefined4 *)(lVar10 + 0xf8));
  pPVar11 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  iVar5 = PlantWarsNetworkMgr::GetLevelTotalScore(pPVar11,iVar4);
  pPVar11 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  iVar6 = PlantWarsNetworkMgr::GetLevelScore(pPVar11,iVar4,0);
  pPVar11 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  iVar7 = PlantWarsNetworkMgr::GetLevelScore(pPVar11,iVar4,1);
  pPVar11 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  PlantWarsNetworkMgr::GetLevelTargetTotalScore(pPVar11,iVar4);
  std::string::string((string *)&local_80,"IMAGE_UI_GENERIC_GRAY_TRANSPARENT_BG");
  pUVar12 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(pUVar12,(string *)&local_80);
  std::string::~string((string *)&local_80);
  nop();
  uVar1 = FUN_04d9f494(2);
  uVar2 = FUN_04d9f494(0x23);
  iVar8 = FUN_04d9f494(4);
  iVar4 = *(int *)(this + 0x50);
  uVar3 = FUN_04d9f494(0x14);
  (**(code **)(*(long *)pUVar12 + 0x198))(pUVar12,uVar1,uVar2,iVar4 - iVar8,uVar3);
  local_80 = 3;
  UIWidgetImage::SetImageType(pUVar12,(wstring *)&local_80,0.0);
  (**(code **)(*(long *)this + 0x60))(this,pUVar12);
  FUN_05478178((wstring *)local_90,L"[PLANTWARS_WORLD_SCORE_DESC]",asStack_98);
  TodReplaceNumberString((wstring *)local_90,L"{NUMS}",iVar5);
  pUVar9 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar9,(wstring *)&local_80);
  FUN_05476c50((wstring *)&local_80);
  FUN_05476c50((wstring *)local_90);
  nop();
  uVar1 = FUN_04d9f494(0);
  uVar2 = FUN_04d9f494(0x24);
  uVar3 = FUN_04d9f494(0x14);
  (**(code **)(*(long *)pUVar9 + 0x198))(pUVar9,uVar1,uVar2,*(int *)(this + 0x50) / 3,uVar3);
  UIWidgetText::SetFontIndex(pUVar9,0x81);
  pcVar22 = *(code **)(*(long *)pUVar9 + 0x170);
  Sexy::Color::Color((Color *)&local_80,4);
  (*pcVar22)(pUVar9,0,(wstring *)&local_80);
  FUN_04d9e724(pUVar9 + 0xe0,5);
  (**(code **)(*(long *)this + 0x60))(this,pUVar9);
  FUN_05478178((wstring *)local_90,L"[NODE_ONE_SCORE]",asStack_98);
  TodReplaceNumberString((wstring *)local_90,L"{NUM}",iVar6);
  pUVar9 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar9,(wstring *)&local_80);
  FUN_05476c50((wstring *)&local_80);
  FUN_05476c50((wstring *)local_90);
  nop();
  uVar1 = FUN_04d9f494(0x24);
  iVar4 = *(int *)(this + 0x50);
  uVar2 = FUN_04d9f494(0x14);
  (**(code **)(*(long *)pUVar9 + 0x198))(pUVar9,iVar4 / 3,uVar1,iVar4 / 3,uVar2);
  UIWidgetText::SetFontIndex(pUVar9,0x81);
  pcVar22 = *(code **)(*(long *)pUVar9 + 0x170);
  Sexy::Color::Color((Color *)&local_80,1);
  (*pcVar22)(pUVar9,0,(wstring *)&local_80);
  FUN_04d9e724(pUVar9 + 0xe0,5);
  (**(code **)(*(long *)this + 0x60))(this,pUVar9);
  FUN_05478178((wstring *)local_90,L"[NODE_TWO_SCORE]",asStack_98);
  TodReplaceNumberString((wstring *)local_90,L"{NUM}",iVar7);
  pUVar9 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar9,(wstring *)&local_80);
  FUN_05476c50((wstring *)&local_80);
  FUN_05476c50((wstring *)local_90);
  nop();
  iVar4 = *(int *)(this + 0x50);
  uVar1 = FUN_04d9f494(0x24);
  uVar2 = FUN_04d9f494(0x14);
  (**(code **)(*(long *)pUVar9 + 0x198))(pUVar9,(iVar4 << 1) / 3,uVar1,iVar4 / 3,uVar2);
  UIWidgetText::SetFontIndex(pUVar9,0x81);
  pcVar22 = *(code **)(*(long *)pUVar9 + 0x170);
  Sexy::Color::Color((Color *)&local_80,1);
  (*pcVar22)(pUVar9,0,(wstring *)&local_80);
  FUN_04d9e724(pUVar9 + 0xe0,5);
  (**(code **)(*(long *)this + 0x60))(this,pUVar9);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xd8));
  uVar1 = FUN_04d9f494(0);
  uVar2 = FUN_04d9f494(0x41);
  uVar3 = FUN_04d9f494(0x96);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,*(undefined4 *)(this + 0x50),uVar3);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b98f98);
  pIVar14 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99120);
  Sexy::ScrollWidget::EnableIndicators((ScrollWidget *)this_00,pIVar13,pIVar14);
  Sexy::ScrollWidget::SetPermanentIndicators((ScrollWidget *)this_00,true);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  this_02 = (hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  eastl::
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::get_allocator(this_02);
  iVar4 = Sexy::LazySingleton<RiftThemeMgr>::GetInstancePtr();
  RiftThemeMgr::GetThemeDescription(iVar4);
  Sexy::ToWString(asStack_98);
  TodStringTranslate((wstring *)local_90);
  pUVar9 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar9,(wstring *)&local_80);
  FUN_05476c50((wstring *)&local_80);
  FUN_05476c50((wstring *)local_90);
  std::string::~string(asStack_98);
  UIWidgetText::SetFontIndex(pUVar9,0xc);
  pcVar22 = *(code **)(*(long *)pUVar9 + 0x170);
  Sexy::Insets::Insets((Insets *)&local_80,0x66,0x37,0,0xff);
  (*pcVar22)(pUVar9,0,(wstring *)&local_80);
  FUN_04d9e724(pUVar9 + 0xe0,0);
  pPVar15 = (PrimeTypeface *)FUN_04d9e720(*(undefined8 *)(pUVar9 + 0xe8));
  uVar16 = UIWidgetImage::GetPVZ2Image((UIWidgetImage *)pUVar9);
  FUN_05477b24(auStack_b0,uVar16);
  FUN_05477b24((wstring *)&local_80,auStack_b0);
  iVar4 = FUN_04d9f494(0x14);
  Sexy::PrimeTypeface::SizeString_Paragraph
            ((float)(*(int *)(this + 0x50) - iVar4),pPVar15,(wstring *)&local_80,auStack_c0,
             &local_bc);
  FUN_05476c50((wstring *)&local_80);
  pcVar22 = *(code **)(*(long *)pUVar9 + 0x198);
  uVar1 = FUN_04d9f494(10);
  uVar2 = FUN_04d9f494(0);
  iVar6 = FUN_04d9f494(0x14);
  iVar4 = *(int *)(this + 0x50);
  fVar23 = (float)Sexy::PrimeTypeface::GetHeight(pPVar15);
  (*pcVar22)(pUVar9,uVar1,uVar2,iVar4 - iVar6,(int)(fVar23 + (float)local_bc));
  (**(code **)(*(long *)this_01 + 0x60))(this_01,pUVar9);
  iVar7 = *(int *)(pUVar9 + 0x54);
  std::string::string((string *)&local_80,"IMAGE_UI_GENERIC_GRAY_TRANSPARENT_BG");
  pUVar12 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(pUVar12,(string *)&local_80);
  std::string::~string((string *)&local_80);
  nop();
  uVar1 = FUN_04d9f494(2);
  iVar6 = FUN_04d9f494(5);
  iVar4 = *(int *)(this + 0x50);
  uVar2 = FUN_04d9f494(0x14);
  (**(code **)(*(long *)pUVar12 + 0x198))(pUVar12,uVar1,iVar7,iVar4 - iVar6,uVar2);
  local_80 = 3;
  UIWidgetImage::SetImageType(pUVar12,(wstring *)&local_80,0.0);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,pUVar12);
  TodStringTranslate(L"[LEVEL_PASS_TOGAL]");
  pUVar9 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar9,(wstring *)&local_80);
  FUN_05476c50((wstring *)&local_80);
  uVar1 = FUN_04d9f494(0);
  uVar2 = FUN_04d9f494(0x14);
  (**(code **)(*(long *)pUVar9 + 0x198))(pUVar9,uVar1,iVar7,*(undefined4 *)(this + 0x50),uVar2);
  UIWidgetText::SetFontIndex(pUVar9,0x81);
  pcVar22 = *(code **)(*(long *)pUVar9 + 0x170);
  Sexy::Color::Color((Color *)&local_80,1);
  (*pcVar22)(pUVar9,0,(wstring *)&local_80);
  FUN_04d9e724(pUVar9 + 0xe0,5);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,pUVar9);
  iVar6 = *(int *)(pUVar12 + 0x54);
  iVar4 = FUN_04d9f494(10);
  iVar4 = iVar7 + iVar6 + iVar4;
  TodStringTranslate(L"[PLANTWARS_WORLD_LEVEL_PASS_CONDITION]");
  pUVar9 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar9,(wstring *)&local_80);
  FUN_05476c50((wstring *)&local_80);
  UIWidgetText::SetFontIndex(pUVar9,0xc);
  pcVar22 = *(code **)(*(long *)pUVar9 + 0x170);
  Sexy::Insets::Insets((Insets *)&local_80,0x66,0x37,0,0xff);
  (*pcVar22)(pUVar9,0,(wstring *)&local_80);
  FUN_04d9e724(pUVar9 + 0xe0,0);
  pPVar15 = (PrimeTypeface *)FUN_04d9e720(*(undefined8 *)(pUVar9 + 0xe8));
  uVar16 = UIWidgetImage::GetPVZ2Image((UIWidgetImage *)pUVar9);
  FUN_05477b24(auStack_a8,uVar16);
  FUN_05477b24((wstring *)&local_80,auStack_a8);
  iVar6 = FUN_04d9f494(0x14);
  Sexy::PrimeTypeface::SizeString_Paragraph
            ((float)(*(int *)(this + 0x50) - iVar6),pPVar15,(wstring *)&local_80,auStack_b8,
             &local_b4);
  FUN_05476c50((wstring *)&local_80);
  pcVar22 = *(code **)(*(long *)pUVar9 + 0x198);
  uVar1 = FUN_04d9f494(10);
  iVar7 = FUN_04d9f494(0x14);
  iVar6 = *(int *)(this + 0x50);
  fVar23 = (float)Sexy::PrimeTypeface::GetHeight(pPVar15);
  (*pcVar22)(pUVar9,uVar1,iVar4,iVar6 - iVar7,(int)(fVar23 + (float)local_b4));
  (**(code **)(*(long *)this_01 + 0x60))(this_01,pUVar9);
  iVar7 = *(int *)(pUVar9 + 0x54);
  iVar6 = FUN_04d9f494(10);
  iVar6 = iVar4 + iVar7 + iVar6;
  std::string::string((string *)&local_80,"IMAGE_UI_GENERIC_GRAY_TRANSPARENT_BG");
  pUVar12 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(pUVar12,(string *)&local_80);
  std::string::~string((string *)&local_80);
  nop();
  uVar1 = FUN_04d9f494(2);
  iVar7 = FUN_04d9f494(5);
  iVar4 = *(int *)(this + 0x50);
  uVar2 = FUN_04d9f494(0x14);
  (**(code **)(*(long *)pUVar12 + 0x198))(pUVar12,uVar1,iVar6,iVar4 - iVar7,uVar2);
  local_80 = 3;
  UIWidgetImage::SetImageType(pUVar12,(wstring *)&local_80,0.0);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,pUVar12);
  TodStringTranslate(L"[STAR_TOGAL]");
  pUVar9 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar9,(wstring *)&local_80);
  FUN_05476c50((wstring *)&local_80);
  uVar1 = FUN_04d9f494(0);
  uVar2 = FUN_04d9f494(0x14);
  (**(code **)(*(long *)pUVar9 + 0x198))(pUVar9,uVar1,iVar6,*(undefined4 *)(this + 0x50),uVar2);
  UIWidgetText::SetFontIndex(pUVar9,0x81);
  pcVar22 = *(code **)(*(long *)pUVar9 + 0x170);
  Sexy::Color::Color((Color *)&local_80,1);
  (*pcVar22)(pUVar9,0,(wstring *)&local_80);
  FUN_04d9e724(pUVar9 + 0xe0,5);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,pUVar9);
  iVar7 = *(int *)(pUVar12 + 0x54);
  iVar4 = FUN_04d9f494(10);
  iVar4 = iVar6 + iVar7 + iVar4;
  Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  PlantWarsNetworkMgr::GetCurrentLevelData();
  uVar21 = 0;
  while( true ) {
    uVar16 = local_50;
    uVar17 = FUN_04d9e768(local_50,local_48);
    if (uVar17 <= uVar21) break;
    lVar10 = FUN_04d9e774(uVar16,uVar21);
    __s = "IMAGE_UI_HUD_INGAME_ARENA_STAR_ON";
    if (iVar5 < *(int *)(lVar10 + 4)) {
      __s = "IMAGE_UI_HUD_INGAME_ARENA_STAR_OFF";
    }
    std::string::string(asStack_a0,__s);
    nop();
    pUVar18 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(pUVar18,asStack_a0);
    uVar1 = FUN_04d9f494(0x1e);
    (**(code **)(*(long *)pUVar18 + 0x198))(pUVar18,uVar1,iVar4,uVar1,uVar1);
    local_90[0] = 2;
    UIWidgetImage::SetImageType(pUVar18,(wstring *)local_90,0.0);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,pUVar18);
    FUN_05478178(asStack_98,L"[GET_TARGET_SCORE]",auStack_c8);
    lVar10 = FUN_04d9e774(local_50,uVar21);
    TodReplaceNumberString((wstring *)asStack_98,L"{NUM}",*(int *)(lVar10 + 4));
    pUVar9 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(pUVar9,(wstring *)local_90);
    FUN_05476c50((wstring *)local_90);
    FUN_05476c50(asStack_98);
    nop();
    uVar1 = FUN_04d9f494(0x28);
    iVar7 = FUN_04d9f494(0x32);
    iVar6 = *(int *)(this + 0x50);
    uVar2 = FUN_04d9f494(0x1e);
    (**(code **)(*(long *)pUVar9 + 0x198))(pUVar9,uVar1,iVar4,iVar6 - iVar7,uVar2);
    UIWidgetText::SetFontIndex(pUVar9,0x81);
    pcVar22 = *(code **)(*(long *)pUVar9 + 0x170);
    Sexy::Color::Color((Color *)local_90,1);
    (*pcVar22)(pUVar9,0,(wstring *)local_90);
    FUN_04d9e724(pUVar9 + 0xe0,5);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,pUVar9);
    iVar6 = FUN_04d9f494(0x1e);
    iVar7 = FUN_04d9f494(5);
    iVar4 = iVar4 + iVar6 + iVar7;
    std::string::~string(asStack_a0);
    uVar21 = uVar21 + 1;
  }
  uVar21 = 0;
  iVar6 = FUN_04d9f494(5);
  iVar6 = iVar6 + iVar4;
  std::string::string((string *)local_90,"IMAGE_UI_GENERIC_GRAY_TRANSPARENT_BG");
  pUVar18 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(pUVar18,(string *)local_90);
  std::string::~string((string *)local_90);
  nop();
  uVar1 = FUN_04d9f494(2);
  iVar7 = FUN_04d9f494(5);
  iVar4 = *(int *)(this + 0x50);
  uVar2 = FUN_04d9f494(0x14);
  (**(code **)(*(long *)pUVar18 + 0x198))(pUVar18,uVar1,iVar6,iVar4 - iVar7,uVar2);
  local_90[0] = 3;
  UIWidgetImage::SetImageType(pUVar18,(wstring *)local_90,0.0);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,pUVar18);
  TodStringTranslate(L"[RIFT_LEVEL_SETUP_BONUS]");
  pUVar9 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar9,(wstring *)local_90);
  FUN_05476c50((wstring *)local_90);
  uVar1 = FUN_04d9f494(0);
  uVar2 = FUN_04d9f494(0x14);
  (**(code **)(*(long *)pUVar9 + 0x198))(pUVar9,uVar1,iVar6,*(undefined4 *)(this + 0x50),uVar2);
  UIWidgetText::SetFontIndex(pUVar9,0x81);
  pcVar22 = *(code **)(*(long *)pUVar9 + 0x170);
  Sexy::Color::Color((Color *)local_90,1);
  (*pcVar22)(pUVar9,0,(wstring *)local_90);
  FUN_04d9e724(pUVar9 + 0xe0,5);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,pUVar9);
  iVar7 = *(int *)(pUVar12 + 0x54);
  iVar4 = FUN_04d9f494(10);
  iVar4 = iVar6 + iVar7 + iVar4;
  std::string::string((string *)local_90,"IMAGE_UI_DIALOG_ASSET_GRAY_BG_OUTER");
  pUVar12 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(pUVar12,(string *)local_90);
  std::string::~string((string *)local_90);
  nop();
  uVar1 = FUN_04d9f494(10);
  iVar7 = FUN_04d9f494(0x14);
  iVar6 = *(int *)(this + 0x50);
  uVar2 = FUN_04d9f494(0x46);
  (**(code **)(*(long *)pUVar12 + 0x198))(pUVar12,uVar1,iVar4,iVar6 - iVar7,uVar2);
  local_90[0] = 5;
  UIWidgetImage::SetImageType(pUVar12,(wstring *)local_90,0.0);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,pUVar12);
  iVar6 = FUN_04d9f494(0x19);
  while( true ) {
    uVar16 = local_68;
    uVar17 = FUN_04d9e77c(local_68,local_60);
    if (uVar17 <= uVar21) break;
    piVar19 = (int *)FUN_04d9e790(uVar16,uVar21);
    plVar20 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar19,piVar19[1],true);
    iVar6 = FUN_04d9f494(0x19);
    iVar7 = FUN_04d9f494(0x37);
    uVar1 = FUN_04d9f494(10);
    uVar2 = FUN_04d9f494(0x32);
    iVar5 = (int)uVar21;
    uVar21 = uVar21 + 1;
    (**(code **)(*plVar20 + 0x198))(plVar20,iVar6 + iVar7 * iVar5,uVar1,uVar2,uVar2);
    (**(code **)(*(long *)pUVar12 + 0x60))(pUVar12,plVar20);
    iVar6 = FUN_04d9f494(0x37);
    iVar6 = iVar6 + (int)plVar20[9];
  }
  uVar21 = 0;
  while( true ) {
    uVar16 = CONCAT44(uStack_7c,local_80);
    uVar17 = FUN_04d9e77c(uVar16,local_78);
    if (uVar17 <= uVar21) break;
    piVar19 = (int *)FUN_04d9e790(uVar16,uVar21);
    plVar20 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar19,piVar19[1],true);
    iVar7 = FUN_04d9f494(0x37);
    uVar1 = FUN_04d9f494(10);
    uVar2 = FUN_04d9f494(0x32);
    (**(code **)(*plVar20 + 0x198))(plVar20,iVar6 + iVar7 * (int)uVar21,uVar1,uVar2,uVar2);
    (**(code **)(*(long *)pUVar12 + 0x60))(pUVar12,plVar20);
    *(undefined1 *)((long)plVar20 + 0x59) = 0;
    if (local_14 == '\0') {
      TodStringTranslate(L"[FIRST_REWARD_TITLE]");
      pUVar9 = ::operator_new(0x108);
      UIWidgetText::UIWidgetText(pUVar9,(wstring *)local_90);
      FUN_05476c50((wstring *)local_90);
      iVar7 = FUN_04d9f494(10);
      uVar1 = FUN_04d9f494(0x32);
      uVar2 = FUN_04d9f494(0x14);
      (**(code **)(*(long *)pUVar9 + 0x198))(pUVar9,0,-iVar7,uVar1,uVar2);
      UIWidgetText::SetFontIndex(pUVar9,0);
      pcVar22 = *(code **)(*(long *)pUVar9 + 0x170);
      Sexy::Color::Color((Color *)local_90,1);
      (*pcVar22)(pUVar9,0,(wstring *)local_90);
      FUN_04d9e724(pUVar9 + 0xe0,5);
    }
    else {
      std::string::string((string *)local_90,"IMAGE_UI_GENERIC_CHECK_MARK");
      pUVar9 = ::operator_new(0x118);
      UIWidgetImage::UIWidgetImage((UIWidgetImage *)pUVar9,(string *)local_90);
      std::string::~string((string *)local_90);
      nop();
      uVar1 = FUN_04d9f494(10);
      iVar7 = FUN_04d9f494(0x14);
      (**(code **)(*(long *)pUVar9 + 0x198))
                (pUVar9,uVar1,uVar1,(int)plVar20[10] - iVar7,*(int *)((long)plVar20 + 0x54) - iVar7)
      ;
      local_90[0] = 9;
      UIWidgetImage::SetImageType((UIWidgetImage *)pUVar9,(wstring *)local_90,0.0);
    }
    uVar21 = uVar21 + 1;
    (**(code **)(*plVar20 + 0x60))(plVar20,pUVar9);
  }
  iVar6 = FUN_04d9f494(0x46);
  iVar7 = FUN_04d9f494(10);
  lVar10 = *(long *)this_00;
  *(int *)(this_01 + 0x54) = iVar4 + iVar6 + iVar7;
  (**(code **)(lVar10 + 0x60))(this_00,this_01);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  PlantWarsLevelData::~PlantWarsLevelData((PlantWarsLevelData *)&local_80);
  FUN_05476c50(auStack_a8);
  FUN_05476c50(auStack_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

