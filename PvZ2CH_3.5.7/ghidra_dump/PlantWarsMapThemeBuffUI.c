// Class: PlantWarsMapThemeBuffUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsMapThemeBuffUI::StaticClassInit() */

void PlantWarsMapThemeBuffUI::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"PlantWarsMapThemeBuffUI");
    (*pcVar2)(plVar1,asStack_10,FUN_04d9fff0,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsMapThemeBuffUI::StaticGetClass() */

long * PlantWarsMapThemeBuffUI::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWarsMapThemeBuffUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsMapThemeBuffUI::GetClass() const */

long * PlantWarsMapThemeBuffUI::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWarsMapThemeBuffUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsMapThemeBuffUI::CloseBuffDetailsUI() */

void __thiscall PlantWarsMapThemeBuffUI::CloseBuffDetailsUI(PlantWarsMapThemeBuffUI *this)

{
  (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))
            ((long *)gLawnApp[0x6c],*(undefined8 *)(this + 0x1e0));
  Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x1e0));
  (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x1e0));
  *(undefined8 *)(this + 0x1e0) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsMapThemeBuffUI::Draw(Sexy::Graphics*) */

void __thiscall PlantWarsMapThemeBuffUI::Draw(PlantWarsMapThemeBuffUI *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  GraphicsAutoState aGStack_38 [8];
  TimeUtil aTStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::Draw((UIEasyButtonWidget *)this,param_1);
  cVar1 = UIWidget::IsVisible((UIWidget *)this);
  if (cVar1 != '\0') {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
    UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
    iVar2 = FUN_04d9f494(0x28);
    iVar3 = FUN_04d9f494(0x19);
    iVar4 = FUN_04d9f494(200);
    iVar5 = FUN_04d9f494(0x1e);
    Sexy::Insets::Insets(aIStack_28,iVar2,iVar3,iVar4,iVar5);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x1d0,aIStack_28,uVar6,aCStack_18,2,1);
    iVar2 = FUN_04d9f494(0x28);
    iVar3 = FUN_04d9f494(0x2f);
    iVar4 = FUN_04d9f494(200);
    iVar5 = FUN_04d9f494(0x1e);
    Sexy::Insets::Insets(aIStack_28,iVar2,iVar3,iVar4,iVar5);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x1d8,aIStack_28,uVar6,aCStack_18,2,1);
    TimeUtil::GetTimeCountdown(3,0x2a88);
    TimeUtil::GetTimeCountdownFormat(aTStack_30,0);
    iVar2 = FUN_04d9f494(0x41);
    iVar3 = FUN_04d9f494(0x43);
    iVar4 = FUN_04d9f494(0x50);
    iVar5 = FUN_04d9f494(0x14);
    Sexy::Insets::Insets(aIStack_28,iVar2,iVar3,iVar4,iVar5);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,aTStack_30,aIStack_28,uVar6,aCStack_18,5,1);
    FUN_05476c50(aTStack_30);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PlantWarsMapThemeBuffUI::Draw(Sexy::Graphics*) */

void __thiscall PlantWarsMapThemeBuffUI::Draw(PlantWarsMapThemeBuffUI *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* PlantWarsMapThemeBuffUI::~PlantWarsMapThemeBuffUI() */

void __thiscall PlantWarsMapThemeBuffUI::~PlantWarsMapThemeBuffUI(PlantWarsMapThemeBuffUI *this)

{
  *(undefined ***)this = &PTR_GetClass_069bd510;
  *(undefined ***)(this + 0x10) = &PTR__PlantWarsMapThemeBuffUI_069bd6b8;
  FUN_05476c50(this + 0x1d8);
  FUN_05476c50(this + 0x1d0);
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to PlantWarsMapThemeBuffUI::~PlantWarsMapThemeBuffUI() */

void __thiscall PlantWarsMapThemeBuffUI::~PlantWarsMapThemeBuffUI(PlantWarsMapThemeBuffUI *this)

{
  ~PlantWarsMapThemeBuffUI(this + -0x10);
  return;
}


/* PlantWarsMapThemeBuffUI::~PlantWarsMapThemeBuffUI() */

void __thiscall PlantWarsMapThemeBuffUI::~PlantWarsMapThemeBuffUI(PlantWarsMapThemeBuffUI *this)

{
  ~PlantWarsMapThemeBuffUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantWarsMapThemeBuffUI::~PlantWarsMapThemeBuffUI() */

void __thiscall PlantWarsMapThemeBuffUI::~PlantWarsMapThemeBuffUI(PlantWarsMapThemeBuffUI *this)

{
  ~PlantWarsMapThemeBuffUI(this + -0x10);
  return;
}


/* PlantWarsMapThemeBuffUI::ShowBuffDetailsUI() */

PlantWarsMapThemeBuffDetails * __thiscall
PlantWarsMapThemeBuffUI::ShowBuffDetailsUI(PlantWarsMapThemeBuffUI *this)

{
  PlantWarsMapThemeBuffDetails *this_00;
  
  this_00 = ::operator_new(0x110);
  PlantWarsMapThemeBuffDetails::PlantWarsMapThemeBuffDetails(this_00);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  PlantWarsMapThemeBuffDetails::Init(this_00,this);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),this_00);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))(*(long **)(gLawnApp + 0x360),this_00);
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(gLawnApp + 0x360),(Widget *)this_00);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))(*(long **)(gLawnApp + 0x360),this_00);
  *(PlantWarsMapThemeBuffDetails **)(this + 0x1e0) = this_00;
  return this_00;
}


/* PlantWarsMapThemeBuffUI::onButtonClicked() */

PlantWarsMapThemeBuffDetails * __thiscall
PlantWarsMapThemeBuffUI::onButtonClicked(PlantWarsMapThemeBuffUI *this)

{
  PlantWarsMapThemeBuffDetails *this_00;
  
  this_00 = ::operator_new(0x110);
  PlantWarsMapThemeBuffDetails::PlantWarsMapThemeBuffDetails(this_00);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  PlantWarsMapThemeBuffDetails::Init(this_00,this);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),this_00);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))(*(long **)(gLawnApp + 0x360),this_00);
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(gLawnApp + 0x360),(Widget *)this_00);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))(*(long **)(gLawnApp + 0x360),this_00);
  *(PlantWarsMapThemeBuffDetails **)(this + 0x1e0) = this_00;
  return this_00;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsMapThemeBuffUI::PlantWarsMapThemeBuffUI() */

void __thiscall PlantWarsMapThemeBuffUI::PlantWarsMapThemeBuffUI(PlantWarsMapThemeBuffUI *this)

{
  int iVar1;
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this_00;
  undefined1 auStack_40 [8];
  wstring awStack_38 [8];
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_069bd510;
  *(undefined ***)(this + 0x10) = &PTR__PlantWarsMapThemeBuffUI_069bd6b8;
  FUN_05476574(this + 0x1d0);
  FUN_05476574(this + 0x1d8);
  std::string::string(asStack_30,"Play_UI_Menu_Button_Continue_Press");
  DEditorNode::setRootName((string *)this);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"Play_UI_Rift_Perks_Panel_Open");
  UIEasyButtonWidget::SetSoundReleased((string *)this);
  std::string::~string(asStack_30);
  nop();
  *(undefined8 *)(this + 0x1e0) = 0;
  this_00 = (hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  eastl::
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::get_allocator(this_00);
  iVar1 = Sexy::LazySingleton<RiftThemeMgr>::GetInstancePtr();
  RiftThemeMgr::GetThemeName(iVar1);
  Sexy::ToWString(asStack_30);
  TodStringTranslate(awStack_38);
  FUN_054766c8(this + 0x1d0,auStack_40);
  FUN_05476c50(auStack_40);
  FUN_05476c50(awStack_38);
  std::string::~string(asStack_30);
  iVar1 = Sexy::LazySingleton<RiftThemeMgr>::GetInstancePtr();
  RiftThemeMgr::GetThemeDescription(iVar1);
  Sexy::ToWString(asStack_30);
  TodStringTranslate(awStack_38);
  FUN_054766c8(this + 0x1d8,auStack_40);
  FUN_05476c50(auStack_40);
  FUN_05476c50(awStack_38);
  std::string::~string(asStack_30);
  iVar1 = Sexy::LazySingleton<RiftThemeMgr>::GetInstancePtr();
  RiftThemeMgr::GetThemeIcon(iVar1);
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_30);
  std::string::~string(asStack_30);
  iVar1 = Sexy::LazySingleton<RiftThemeMgr>::GetInstancePtr();
  RiftThemeMgr::GetThemeIcon(iVar1);
  UIEasyButtonWidget::SetImagePressed((UIEasyButtonWidget *)this,asStack_30);
  std::string::~string(asStack_30);
  FUN_04d9f2f0(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsMapThemeBuffUI::StaticNew() */

PlantWarsMapThemeBuffUI * PlantWarsMapThemeBuffUI::StaticNew(void)

{
  PlantWarsMapThemeBuffUI *this;
  
  this = ::operator_new(0x1e8);
  PlantWarsMapThemeBuffUI(this);
  return this;
}

