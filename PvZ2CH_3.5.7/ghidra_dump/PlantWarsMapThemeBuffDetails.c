// Class: PlantWarsMapThemeBuffDetails


/* PlantWarsMapThemeBuffDetails::~PlantWarsMapThemeBuffDetails() */

void __thiscall
PlantWarsMapThemeBuffDetails::~PlantWarsMapThemeBuffDetails(PlantWarsMapThemeBuffDetails *this)

{
  *(undefined ***)this = &PTR_GetClass_069bd1a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069bd4c8;
  FUN_05476c50(this + 0x100);
  FUN_05476c50(this + 0xf8);
  FUN_05476c50(this + 0xf0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantWarsMapThemeBuffDetails::~PlantWarsMapThemeBuffDetails() */

void __thiscall
PlantWarsMapThemeBuffDetails::~PlantWarsMapThemeBuffDetails(PlantWarsMapThemeBuffDetails *this)

{
  ~PlantWarsMapThemeBuffDetails(this);
  AK::FreeHook(this);
  return;
}


/* PlantWarsMapThemeBuffDetails::ButtonDepress(int) */

void __thiscall
PlantWarsMapThemeBuffDetails::ButtonDepress(PlantWarsMapThemeBuffDetails *this,int param_1)

{
  if (param_1 != 0x58) {
    return;
  }
  PlantWarsMapThemeBuffUI::CloseBuffDetailsUI(*(PlantWarsMapThemeBuffUI **)(this + 0x108));
  return;
}


/* non-virtual thunk to PlantWarsMapThemeBuffDetails::ButtonDepress(int) */

void __thiscall
PlantWarsMapThemeBuffDetails::ButtonDepress(PlantWarsMapThemeBuffDetails *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* PlantWarsMapThemeBuffDetails::PlantWarsMapThemeBuffDetails() */

void __thiscall
PlantWarsMapThemeBuffDetails::PlantWarsMapThemeBuffDetails(PlantWarsMapThemeBuffDetails *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_069bd1a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069bd4c8;
  Sexy::Insets::Insets((Insets *)(this + 0xe0));
  FUN_05476574(this + 0xf0);
  FUN_05476574(this + 0xf8);
  FUN_05476574(this + 0x100);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsMapThemeBuffDetails::Init(PlantWarsMapThemeBuffUI*) */

void __thiscall
PlantWarsMapThemeBuffDetails::Init
          (PlantWarsMapThemeBuffDetails *this,PlantWarsMapThemeBuffUI *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this_00;
  PVZ2UIButton *this_01;
  string asStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  *(PlantWarsMapThemeBuffUI **)(this + 0x108) = param_1;
  this[0x59] = (PlantWarsMapThemeBuffDetails)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  lVar2 = gLawnApp;
  iVar3 = FUN_04d9f494(600);
  iVar4 = FUN_04d9f494(400);
  Sexy::Insets::Insets
            ((Insets *)&local_40,(*(int *)(lVar2 + 0xd4) - iVar3) / 2,
             (*(int *)(lVar2 + 0xd8) - iVar4) / 2,iVar3,iVar4);
  *(undefined8 *)(this + 0xe0) = local_40;
  *(undefined8 *)(this + 0xe8) = uStack_38;
  this_00 = (hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  eastl::
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::get_allocator(this_00);
  TodStringTranslate(L"[PLANTWARS_WORLD_THEME_TITLE]");
  FUN_054766c8(this + 0xf0,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  iVar3 = Sexy::LazySingleton<RiftThemeMgr>::GetInstancePtr();
  RiftThemeMgr::GetThemeName(iVar3);
  Sexy::ToWString(asStack_80);
  TodStringTranslate(awStack_78);
  FUN_054766c8(this + 0xf8,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_80);
  iVar3 = Sexy::LazySingleton<RiftThemeMgr>::GetInstancePtr();
  RiftThemeMgr::GetThemeDescriptionDetails(iVar3);
  Sexy::ToWString(asStack_80);
  TodStringTranslate(awStack_78);
  FUN_054766c8(this + 0x100,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_80);
  FUN_05478178(awStack_78,&DAT_056f11a8,asStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  this_01 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_01,0x58,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b98da0,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b992f0,2);
  PVZ2UIButton::SetDialogStates(this_01,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  iVar3 = *(int *)(this + 0xe0);
  iVar4 = *(int *)(this + 0xe8);
  iVar5 = FUN_04d9f494(0x2d);
  iVar6 = FUN_04d9f494(6);
  iVar1 = *(int *)(this + 0xe4);
  uVar7 = FUN_04d9f494(0x35);
  uVar8 = FUN_04d9f494(0x37);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,(iVar3 + iVar4) - iVar5,iVar1 - iVar6,uVar7,uVar8)
  ;
  (**(code **)(*(long *)this + 0x60))(this,this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsMapThemeBuffDetails::Draw(Sexy::Graphics*) */

void __thiscall
PlantWarsMapThemeBuffDetails::Draw(PlantWarsMapThemeBuffDetails *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xe0));
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b98f70);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  Sexy::Graphics::Translate(param_1,*(int *)(this + 0xe0),*(int *)(this + 0xe4));
  iVar1 = FUN_04d9f494(0);
  iVar2 = FUN_04d9f494(0x46);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar1,*(int *)(this + 0xe8),iVar2);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xf0,aIStack_28,uVar6,aIStack_18,5,1);
  iVar1 = FUN_04d9f494(0);
  iVar2 = FUN_04d9f494(0x50);
  iVar3 = FUN_04d9f494(0x28);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,*(int *)(this + 0xe8),iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
  Sexy::Color::Color((Color *)aIStack_18,0x66,0x37,0);
  WriteWordInRect(param_1,this + 0xf8,aIStack_28,uVar6,aIStack_18,5,1);
  iVar2 = FUN_04d9f494(0x19);
  iVar3 = FUN_04d9f494(0x91);
  iVar4 = FUN_04d9f494(0x32);
  iVar1 = *(int *)(this + 0xe8);
  iVar5 = FUN_04d9f494(0x78);
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar3,iVar1 - iVar4,iVar5);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_18,0x66,0x37,0);
  WriteWordInRect(param_1,this + 0x100,aIStack_28,uVar6,aIStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

