// Class: CardGameBoardConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoardConfig::StaticClassInit() */

void CardGameBoardConfig::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TagColorValue");
    (*pcVar3)(plVar2,asStack_10,FUN_03568ea8,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TagData");
    (*pcVar3)(plVar2,asStack_10,FUN_0356965c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CardGameBoardConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_03569b2c,0xe8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameBoardConfig::StaticGetClass() */

long * CardGameBoardConfig::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameBoardConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameBoardConfig::GetClass() const */

long * CardGameBoardConfig::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameBoardConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameBoardConfig::GetTagColor(int) const */

long __thiscall CardGameBoardConfig::GetTagColor(CardGameBoardConfig *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_035690d4(*(undefined8 *)(this + 0xd0),(long)param_1);
  return lVar1 + 8;
}


/* CardGameBoardConfig::GetTagData(int) const */

void __thiscall CardGameBoardConfig::GetTagData(CardGameBoardConfig *this,int param_1)

{
  FUN_035690d4(*(undefined8 *)(this + 0xd0),(long)param_1);
  return;
}


/* CardGameBoardConfig::CardGameBoardConfig() */

void __thiscall CardGameBoardConfig::CardGameBoardConfig(CardGameBoardConfig *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_0665b790;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x10));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x40));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x70));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0xa0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd0));
  return;
}


/* CardGameBoardConfig::StaticNew() */

CardGameBoardConfig * CardGameBoardConfig::StaticNew(void)

{
  CardGameBoardConfig *this;
  
  this = ::operator_new(0xe8);
  CardGameBoardConfig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoardConfig::GetCommonConfigValue(std::string const&, float) const */

void __thiscall
CardGameBoardConfig::GetCommonConfigValue(CardGameBoardConfig *this,string *param_1,float param_2)

{
  bool bVar1;
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this_00;
  undefined8 uVar2;
  long lVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  uVar2 = eastl::
          hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
          ::get_allocator(this_00);
  FUN_05475d88(asStack_20,uVar2);
  bVar1 = std::operator==(asStack_20,"Normal");
  if (bVar1) {
    local_18 = std::
               map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
               ::find((map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
                       *)(this + 0x10),param_1);
  }
  else {
    bVar1 = std::operator==(asStack_20,"Large");
    if (bVar1) {
      local_18 = std::
                 map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
                 ::find((map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
                         *)(this + 0x40),param_1);
    }
    else {
      local_18 = std::
                 map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
                 ::find((map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
                         *)(this + 0x70),param_1);
    }
  }
  bVar1 = std::operator==(asStack_20,"Normal");
  if (bVar1) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x10));
  }
  else {
    bVar1 = std::operator==(asStack_20,"Large");
    if (bVar1) {
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)(this + 0x40));
    }
    else {
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)(this + 0x70));
    }
  }
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    param_2 = *(float *)(lVar3 + 8);
  }
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoardConfig::GetCardUIConfigValue(std::string const&, std::string) const */

void CardGameBoardConfig::GetCardUIConfigValue
               (undefined8 param_1_00,long param_1,string *param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::find((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                     *)(param_1 + 0xa0),param_3);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 0xa0));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    FUN_05475d88(param_1_00,lVar2 + 8);
  }
  else {
    FUN_05474148(param_1_00,param_4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* CardGameBoardConfig::~CardGameBoardConfig() */

void __thiscall CardGameBoardConfig::~CardGameBoardConfig(CardGameBoardConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0665b790;
  std::vector<TagData,std::allocator<TagData>>::~vector
            ((vector<TagData,std::allocator<TagData>> *)(this + 0xd0));
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)(this + 0xa0));
  std::
  map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>::
  ~map((map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
        *)(this + 0x70));
  std::
  map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>::
  ~map((map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
        *)(this + 0x40));
  std::
  map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>::
  ~map((map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
        *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* CardGameBoardConfig::~CardGameBoardConfig() */

void __thiscall CardGameBoardConfig::~CardGameBoardConfig(CardGameBoardConfig *this)

{
  ~CardGameBoardConfig(this);
  AK::FreeHook(this);
  return;
}

