// Class: PVPZombieChooser


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieChooser::GetScrollOffset() const */

void __thiscall PVPZombieChooser::GetScrollOffset(PVPZombieChooser *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  uint *puVar8;
  int local_24;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_04afd4ec(*(undefined8 *)(this + 0xe8));
  local_10 = FUN_04afd53c(*(undefined8 *)(this + 0xf0));
  do {
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    uVar4 = (uint)bVar3;
    if (!bVar3) {
LAB_04afd624:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
    plVar5 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar5 + 0x198));
    cVar2 = std::operator==((string *)(lVar6 + 8),(string *)(this + 0xe0));
    if (cVar2 != '\0') {
      local_24 = 0;
      iVar1 = *(int *)(*(long *)(this + 0x20) + 0x50);
      local_20 = (-*(int *)(*plVar5 + 0x48) - *(int *)(*plVar5 + 0x50) / 2) + iVar1 / 2;
      piVar7 = eastl::min_alt<int>(&local_24,&local_20);
      local_1c = iVar1 - *(int *)(this + 0x50);
      puVar8 = (uint *)eastl::max_alt<int>(piVar7,&local_1c);
      uVar4 = *puVar8;
      goto LAB_04afd624;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* PVPZombieChooser::PVPZombieChooser(std::string const&) */

void __thiscall PVPZombieChooser::PVPZombieChooser(PVPZombieChooser *this,string *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06951f00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06952230;
  FUN_05475d88(this + 0xe0,param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  return;
}


/* PVPZombieChooser::~PVPZombieChooser() */

void __thiscall PVPZombieChooser::~PVPZombieChooser(PVPZombieChooser *this)

{
  *(undefined ***)this = &PTR_GetClass_06951f00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06952230;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  std::vector<PVPZombieItemButton*,std::allocator<PVPZombieItemButton*>>::~vector
            ((vector<PVPZombieItemButton*,std::allocator<PVPZombieItemButton*>> *)(this + 0xe8));
  std::string::~string((string *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PVPZombieChooser::~PVPZombieChooser() */

void __thiscall PVPZombieChooser::~PVPZombieChooser(PVPZombieChooser *this)

{
  ~PVPZombieChooser(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieChooser::Initialize(int, int, int, int) */

void __thiscall
PVPZombieChooser::Initialize(PVPZombieChooser *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  SalesProgressBar *pSVar6;
  LotteryResultProgressBar *pLVar7;
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this_00;
  map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
  *this_01;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 *local_80;
  PVPZombieChooser *pPStack_78;
  Insets *local_70;
  undefined4 *puStack_68;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58 [4];
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  PVPZombieChooser *local_20;
  Insets *local_18;
  undefined4 *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04afce4c(0xd,___stack_chk_guard,param_2,param_3);
  pSVar6 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82d48);
  SalesProgressBar::GetCurrentLevel(pSVar6);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82d48);
  LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  local_60 = FUN_04afce4c(0x13);
  this_00 = (hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  this_01 = (map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
             *)eastl::
               hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
               ::get_allocator(this_00);
  pSVar6 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82a88);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar6);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82a88);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  pSVar6 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82a88);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar6);
  pSVar6 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82d20);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar6);
  Sexy::Insets::Insets((Insets *)local_58,iVar1,(param_4 - iVar2) / 2,iVar3,iVar4 + iVar5 / 2);
  local_5c = 0;
  uVar8 = std::
          map<std::string,PVPZombieData,std::less<std::string>,std::allocator<std::pair<std::string_const,PVPZombieData>>>
          ::begin(this_01);
  uVar9 = std::
          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
          end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)this_01);
  local_80 = &local_5c;
  puStack_68 = &local_60;
  pPStack_78 = this;
  local_70 = (Insets *)local_58;
  local_28 = local_80;
  local_20 = this;
  local_18 = (Insets *)local_58;
  local_10 = puStack_68;
  FUN_04aff658(auStack_48,uVar8,uVar9,&local_80);
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,iVar1 + local_58[0],param_4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieChooser::ButtonDepress(int) */

void __thiscall PVPZombieChooser::ButtonDepress(PVPZombieChooser *this,int param_1)

{
  string *psVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  undefined8 uVar9;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar9 = *(undefined8 *)(this + 0xe8);
  uVar8 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  uVar4 = FUN_04afcc50(uVar9,*(undefined8 *)(this + 0xf0));
  if (uVar8 < uVar4) {
    psVar1 = (string *)(this + 0xe0);
    plVar5 = (long *)FUN_04afcc5c(uVar9,uVar8);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar5 + 0x198));
    cVar2 = std::operator==(psVar1,(string *)(lVar6 + 8));
    if (cVar2 == '\0') {
      pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar7,"Play_UI_Button_Almanac_Tab_Small");
      plVar5 = (long *)FUN_04afcc5c(*(undefined8 *)(this + 0xe8),uVar8);
      cVar2 = FUN_04afcc34(*(undefined1 *)(*plVar5 + 0x1a8));
      if (cVar2 == '\0') {
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (a_Stack_20);
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0xe8));
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0xe8));
        while (bVar3 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
              bVar3) {
          plVar5 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          if (*(int *)(*plVar5 + 0xd4) == param_1) {
            pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
            AudioMgr::SendEvent(pcVar7,"Play_UI_Menu_Tab_Scroll");
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)a_Stack_20,(RtWeakPtr *)(*plVar5 + 0x198));
            FUN_04afcc38(*plVar5 + 0x1a8,1);
          }
          else {
            FUN_04afcc38(*plVar5 + 0x1a8,0);
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
        }
        plVar5 = (long *)FUN_04afcc5c(*(undefined8 *)(this + 0xe8),uVar8);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar5 + 0x198));
        thunk_FUN_05475e00(psVar1,lVar6 + 8);
        PVPZombieLevelUpMain::RefreshMainView(DAT_06b82c58,psVar1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20)
        ;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PVPZombieChooser::ButtonDepress(int) */

void __thiscall PVPZombieChooser::ButtonDepress(PVPZombieChooser *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

