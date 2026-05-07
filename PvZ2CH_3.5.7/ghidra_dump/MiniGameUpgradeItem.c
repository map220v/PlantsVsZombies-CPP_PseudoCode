// Class: MiniGameUpgradeItem


/* MiniGameUpgradeItem::~MiniGameUpgradeItem() */

void __thiscall MiniGameUpgradeItem::~MiniGameUpgradeItem(MiniGameUpgradeItem *this)

{
  *(undefined ***)this = &PTR_GetClass_066b4db0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066b50d8;
  FUN_05476c50(this + 0xf0);
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* MiniGameUpgradeItem::~MiniGameUpgradeItem() */

void __thiscall MiniGameUpgradeItem::~MiniGameUpgradeItem(MiniGameUpgradeItem *this)

{
  ~MiniGameUpgradeItem(this);
  AK::FreeHook(this);
  return;
}


/* MiniGameUpgradeItem::MiniGameUpgradeItem() */

void __thiscall MiniGameUpgradeItem::MiniGameUpgradeItem(MiniGameUpgradeItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066b4db0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066b50d8;
  FUN_05476574(this + 0xe8);
  FUN_05476574(this + 0xf0);
  Sexy::Insets::Insets((Insets *)(this + 0x118));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameUpgradeItem::Draw(Sexy::Graphics*) */

void __thiscall MiniGameUpgradeItem::Draw(MiniGameUpgradeItem *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  Image *pIVar10;
  int local_3c;
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab6dd0);
  Draw9SliceImage(param_1,aIStack_18,uVar9);
  pIVar10 = *(Image **)(this + 0xf8);
  if (pIVar10 != (Image *)0x0) {
    iVar2 = FUN_038b4cfc(10);
    iVar3 = FUN_038b4cfc(0x50);
    Sexy::Graphics::DrawImage(param_1,pIVar10,iVar2,iVar2,iVar3,iVar3);
  }
  iVar2 = FUN_038b4cfc(100);
  iVar3 = FUN_038b4cfc(10);
  iVar4 = FUN_038b4cfc(0x78);
  iVar5 = FUN_038b4cfc(0x23);
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar3,iVar4,iVar5);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  Sexy::Color::Color((Color *)aIStack_18,0x66,0x37,0);
  WriteWordInRect(param_1,this + 0xe8,aIStack_28,uVar9,aIStack_18,3,1);
  iVar2 = FUN_038b4cfc(0xf0);
  iVar3 = FUN_038b4cfc(6);
  iVar4 = FUN_038b4cfc(0x28);
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar3,iVar2,iVar4);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_18,0x21,99,0);
  WriteWordInRect(param_1,this + 0xf0,aIStack_28,uVar9,aIStack_18,3,1);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab6d50);
  iVar2 = FUN_038b4cfc(100);
  iVar3 = FUN_038b4cfc(0x41);
  iVar4 = FUN_038b4cfc(0x140);
  iVar5 = FUN_038b4cfc(0xc);
  Sexy::Graphics::DrawImage(param_1,pIVar10,iVar2,iVar3,iVar4,iVar5);
  if (0 < *(int *)(this + 0x11c)) {
    iVar2 = 1;
    do {
      while (iVar3 = iVar2 + -1, *(int *)(this + 0x120) <= iVar3) {
        pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab6fd0);
        iVar4 = FUN_038b4cfc(100);
        iVar5 = FUN_038b4cfc(0x3c);
        iVar6 = FUN_038b4cfc(0x32);
        iVar7 = FUN_038b4cfc(0x23);
        iVar8 = FUN_038b4cfc(0x28);
        Sexy::Graphics::DrawImage(param_1,pIVar10,iVar4 + iVar5 * iVar3,iVar6,iVar7,iVar8);
        bVar1 = *(int *)(this + 0x11c) <= iVar2;
        iVar2 = iVar2 + 1;
        if (bVar1) goto LAB_038b8e38;
      }
      pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab6e30);
      iVar4 = FUN_038b4cfc(100);
      iVar5 = FUN_038b4cfc(0x3c);
      iVar6 = FUN_038b4cfc(0x32);
      iVar7 = FUN_038b4cfc(0x23);
      iVar8 = FUN_038b4cfc(0x28);
      Sexy::Graphics::DrawImage(param_1,pIVar10,iVar4 + iVar5 * iVar3,iVar6,iVar7,iVar8);
      local_3c = iVar2;
      std::to_string<ActivityTypeID>((ActivityTypeID *)&local_3c);
      Sexy::ToWString(asStack_38);
      iVar4 = FUN_038b4cfc(100);
      iVar5 = FUN_038b4cfc(0x3c);
      iVar6 = FUN_038b4cfc(0x32);
      iVar7 = FUN_038b4cfc(0x23);
      iVar8 = FUN_038b4cfc(0x28);
      Sexy::Insets::Insets(aIStack_28,iVar4 + iVar5 * iVar3,iVar6,iVar7,iVar8);
      uVar9 = PrimeText_PotentialTypeface::Typeface
                        (PrimeText_Game::Typeface_CafeteriaBlack_26_HardShadow);
      Sexy::Color::Color((Color *)aIStack_18,1);
      WriteWordInRect(param_1,auStack_30,aIStack_28,uVar9,aIStack_18,5,1);
      FUN_05476c50(auStack_30);
      std::string::~string(asStack_38);
      bVar1 = iVar2 < *(int *)(this + 0x11c);
      iVar2 = iVar2 + 1;
    } while (bVar1);
  }
LAB_038b8e38:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameUpgradeItem::RefreshUI() */

void __thiscall MiniGameUpgradeItem::RefreshUI(MiniGameUpgradeItem *this)

{
  int iVar1;
  string *psVar2;
  UIMiniGameCollection *this_00;
  long *plVar3;
  undefined8 uVar4;
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<MiniGamePerkMgr>::GetInstance();
  iVar1 = MiniGamePerkMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar1);
  MiniGamePerkMgr::GetDescriptionForLevel(psVar2,(int)asStack_18);
  FUN_054766c8(this + 0xf0,auStack_10);
  FUN_05476c50(auStack_10);
  std::string::~string(asStack_18);
  uVar4 = *(undefined8 *)(this + 0x108);
  Sexy::StrFormat("x%d",asStack_18,(ulong)*(uint *)(this + 0x124));
  Sexy::ToWString(asStack_18);
  PuzzleTip::SetTip(uVar4,auStack_10);
  FUN_05476c50(auStack_10);
  std::string::~string(asStack_18);
  plVar3 = *(long **)(this + 0x110);
  if (*(int *)(this + 0x120) < *(int *)(this + 0x11c)) {
    (**(code **)(*plVar3 + 0x158))(plVar3,0);
    (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),1);
  }
  else {
    (**(code **)(*plVar3 + 0x158))(plVar3,1);
    (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),0);
  }
  this_00 = (UIMiniGameCollection *)UISingletonDialog<UIMiniGameCollection>::GetSingletonPtr();
  UIMiniGameCollection::UpdateTokenUI(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameUpgradeItem::SetData(MiniGameBufferData const&) */

void __thiscall MiniGameUpgradeItem::SetData(MiniGameUpgradeItem *this,MiniGameBufferData *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  string *psVar8;
  UIWidgetText *pUVar9;
  PVZ2UIButton *pPVar10;
  UIWidgetImage *this_00;
  long lVar11;
  long lVar12;
  long *plVar13;
  code *pcVar14;
  undefined1 auStack_80 [8];
  string asStack_78 [56];
  undefined4 local_40 [14];
  long local_8;
  
  uVar7 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x118) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x120) = uVar7;
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("IMAGE_UI_MINIGAME_COLLECTION_BUFFER_%d",(string *)local_40,
                  (ulong)*(uint *)param_1);
  uVar7 = StringHelper::ToImage((string *)local_40,false);
  *(undefined8 *)(this + 0xf8) = uVar7;
  std::string::~string((string *)local_40);
  psVar8 = (string *)Sexy::LazySingleton<MiniGamePerkMgr>::GetInstance();
  iVar1 = MiniGamePerkMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar1);
  MiniGamePerkMgr::GetPerkName(psVar8);
  FUN_054766c8(this + 0xe8,(string *)local_40);
  FUN_05476c50((string *)local_40);
  std::string::~string(asStack_78);
  TodStringTranslate(L"[ALREADY_MAX_LEVEL]");
  pUVar9 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar9,(wstring *)local_40);
  *(UIWidgetText **)(this + 0x110) = pUVar9;
  FUN_05476c50((string *)local_40);
  plVar13 = *(long **)(this + 0x110);
  iVar2 = FUN_038b4cfc(0x8c);
  iVar1 = *(int *)(this + 0x50);
  uVar3 = FUN_038b4cfc(0x1a);
  uVar4 = FUN_038b4cfc(0x78);
  uVar5 = FUN_038b4cfc(0x3c);
  (**(code **)(*plVar13 + 0x198))(plVar13,iVar1 - iVar2,uVar3,uVar4,uVar5);
  plVar13 = *(long **)(this + 0x110);
  pcVar14 = *(code **)(*plVar13 + 0x170);
  Sexy::Color::Color((Color *)local_40,0x42,0xb4,0x42);
  (*pcVar14)(plVar13,0,(string *)local_40);
  FUN_038b3938(*(long *)(this + 0x110) + 0xe0,5);
  UIWidgetText::SetFontIndex(*(UIWidgetText **)(this + 0x110),10);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x110));
  FUN_05478178(asStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar10,0x640,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar10;
  FUN_05476c50(asStack_78);
  nop();
  pPVar10 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ab7010,5);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ab7188,5);
  PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)local_40);
  plVar13 = *(long **)(this + 0x100);
  iVar2 = FUN_038b4cfc(0x8c);
  iVar1 = *(int *)(this + 0x50);
  uVar3 = FUN_038b4cfc(0x1a);
  uVar4 = FUN_038b4cfc(0x78);
  uVar5 = FUN_038b4cfc(0x3c);
  (**(code **)(*plVar13 + 0x198))(plVar13,iVar1 - iVar2,uVar3,uVar4,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  std::string::string((string *)local_40,"IMAGE_UI_FRAGMENT_MATERIAL_MAT_MINIGAME_COIN");
  this_00 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_00,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  uVar3 = FUN_038b4cfc(0x37);
  uVar4 = FUN_038b4cfc(0xf);
  uVar5 = FUN_038b4cfc(0x1e);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar3,uVar4,uVar5,uVar5);
  local_40[0] = 2;
  UIWidgetImage::SetImageType(this_00,(string *)local_40,0.0);
  plVar13 = *(long **)(this + 0x100);
  this_00[0x6d] = (UIWidgetImage)0x0;
  (**(code **)(*plVar13 + 0x60))(plVar13,this_00);
  TodStringTranslate(L"[RECONSTRUCTION_CONSUME]");
  pUVar9 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar9,(wstring *)local_40);
  FUN_05476c50((string *)local_40);
  uVar3 = FUN_038b4cfc(6);
  uVar4 = FUN_038b4cfc(0xf);
  uVar5 = FUN_038b4cfc(0x32);
  uVar6 = FUN_038b4cfc(0x1e);
  (**(code **)(*(long *)pUVar9 + 0x198))(pUVar9,uVar3,uVar4,uVar5,uVar6);
  pcVar14 = *(code **)(*(long *)pUVar9 + 0x170);
  Sexy::Color::Color((Color *)local_40,1);
  (*pcVar14)(pUVar9,0,(string *)local_40);
  FUN_038b3938(pUVar9 + 0xe0,5);
  UIWidgetText::SetFontIndex(pUVar9,0x7c);
  plVar13 = *(long **)(this + 0x100);
  pUVar9[0x6d] = (UIWidgetText)0x0;
  (**(code **)(*plVar13 + 0x60))(plVar13,pUVar9);
  std::string::string(asStack_78,"x2");
  Sexy::ToWString(asStack_78);
  pUVar9 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar9,(wstring *)local_40);
  *(UIWidgetText **)(this + 0x108) = pUVar9;
  FUN_05476c50((string *)local_40);
  std::string::~string(asStack_78);
  nop();
  plVar13 = *(long **)(this + 0x108);
  uVar3 = FUN_038b4cfc(0x41);
  uVar4 = FUN_038b4cfc(0xe);
  uVar5 = FUN_038b4cfc(0x23);
  uVar6 = FUN_038b4cfc(0x1e);
  (**(code **)(*plVar13 + 0x198))(plVar13,uVar3,uVar4,uVar5,uVar6);
  plVar13 = *(long **)(this + 0x108);
  pcVar14 = *(code **)(*plVar13 + 0x170);
  Sexy::Color::Color((Color *)local_40,1);
  (*pcVar14)(plVar13,0,(string *)local_40);
  FUN_038b3938(*(long *)(this + 0x108) + 0xe0,4);
  UIWidgetText::SetFontIndex(*(UIWidgetText **)(this + 0x108),0xd);
  plVar13 = *(long **)(this + 0x100);
  lVar11 = *(long *)(this + 0x108);
  lVar12 = *plVar13;
  *(undefined1 *)(lVar11 + 0x6d) = 0;
  (**(code **)(lVar12 + 0x60))(plVar13,lVar11);
  RefreshUI(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameUpgradeItem::OnSteadySuccess(int) */

void __thiscall MiniGameUpgradeItem::OnSteadySuccess(MiniGameUpgradeItem *this,int param_1)

{
  MiniGameCollectionNetworkMgr *this_00;
  
  *(int *)(this + 0x124) = param_1;
  *(int *)(this + 0x120) = *(int *)(this + 0x120) + 1;
  this_00 = (MiniGameCollectionNetworkMgr *)
            Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
  MiniGameCollectionNetworkMgr::UpgradeBuffer(this_00,*(int *)(this + 0x118),param_1);
  RefreshUI(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameUpgradeItem::Steady() */

void __thiscall MiniGameUpgradeItem::Steady(MiniGameUpgradeItem *this)

{
  string *this_00;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [3288];
  string asStack_10 [8];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"id");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,*(int *)(this + 0x118));
  __s = (char *)DString::c_str(aDStack_ce8);
  std::string::append(this_00,__s,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_038b4ca0(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_10,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameUpgradeItem::ButtonDepress(int) */

void __thiscall MiniGameUpgradeItem::ButtonDepress(MiniGameUpgradeItem *this,int param_1)

{
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this_00;
  long lVar1;
  UIMessageBox *this_01;
  Image *pIVar2;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x640) {
    this_00 = (hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
               *)Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
    lVar1 = eastl::
            hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
            ::get_allocator(this_00);
    if (*(int *)(lVar1 + 0x60) < *(int *)(this + 0x124)) {
      this_01 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_01 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_01,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[MATERIAL_NOT_ENOUGH]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(this_01,awStack_20,awStack_28);
        std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar2 = (Image *)StringHelper::ToImage(asStack_10,false);
        UIMessageBox::SetBackground(this_01,pIVar2);
        std::string::~string(asStack_10);
        nop();
        lVar1 = UIMessageBox::GetButtonCancel(this_01);
        thunk_FUN_05477b9c(lVar1 + 0xd8,auStack_18);
        FUN_05476c50(auStack_18);
        FUN_05476c50(awStack_20);
        FUN_05476c50(awStack_28);
      }
    }
    else {
      Steady(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to MiniGameUpgradeItem::ButtonDepress(int) */

void __thiscall MiniGameUpgradeItem::ButtonDepress(MiniGameUpgradeItem *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

