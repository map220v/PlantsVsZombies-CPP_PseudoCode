// Class: eastl::hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>


/* eastl::hashtable<EA::Text::GlyphCache::GlyphInfo, eastl::pair<EA::Text::GlyphCache::GlyphInfo
   const, EA::Text::GlyphTextureInfo>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo const, EA::Text::GlyphTextureInfo>
   >, eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>, EA::Text::GlyphCache::GlyphInfoHash,
   eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::get_allocator() */

hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
* __thiscall
eastl::
hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::get_allocator(hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                *this)

{
  return this + 0x30;
}


/* WARNING: Removing unreachable block (ram,0x03f09de8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::hashtable<EA::Text::GlyphCache::GlyphInfo, eastl::pair<EA::Text::GlyphCache::GlyphInfo
   const, EA::Text::GlyphTextureInfo>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo const, EA::Text::GlyphTextureInfo>
   >, eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>, EA::Text::GlyphCache::GlyphInfoHash,
   eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::reset_lose_memory() */

void __thiscall
eastl::
hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::reset_lose_memory(hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                    *this)

{
  *(undefined8 *)(this + 0x10) = 1;
  *(undefined1 **)(this + 8) = gpEmptyBucketArray;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


/* eastl::hashtable<std::string, eastl::pair<std::string const, unsigned int>, eastl::allocator,
   eastl::use_first<eastl::pair<std::string const, unsigned int> >, eastl::equal_to<std::string >,
   eastl::string_hash<std::string >, eastl::mod_range_hashing, eastl::default_ranged_hash,
   eastl::prime_rehash_policy, false, true, true>::hashtable(unsigned long,
   eastl::string_hash<std::string > const&, eastl::mod_range_hashing const&,
   eastl::default_ranged_hash const&, eastl::equal_to<std::string > const&,
   eastl::use_first<eastl::pair<std::string const, unsigned int> > const&, eastl::allocator const&)
    */

void eastl::
     hashtable<std::string,eastl::pair<std::string_const,unsigned_int>,eastl::allocator,eastl::use_first<eastl::pair<std::string_const,unsigned_int>>,eastl::equal_to<std::string>,eastl::string_hash<std::string>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
     ::hashtable(ulong param_1,string_hash *param_2,mod_range_hashing *param_3,
                default_ranged_hash *param_4,equal_to *param_5,use_first *param_6,allocator *param_7
                )

{
  ulong uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  prime_rehash_policy::prime_rehash_policy((prime_rehash_policy *)(param_1 + 0x20),1.0);
  if ((string_hash *)0x1 < param_2) {
    uVar1 = prime_rehash_policy::GetNextBucketCount
                      ((prime_rehash_policy *)(param_1 + 0x20),(uint)param_2);
    *(ulong *)(param_1 + 0x10) = uVar1 & 0xffffffff;
    uVar2 = FUN_03f096d8(uVar1 & 0xffffffff);
    *(undefined8 *)(param_1 + 8) = uVar2;
    return;
  }
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::reset_lose_memory((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                       *)param_1);
  return;
}


/* eastl::hashtable<std::wstring, eastl::pair<std::wstring const, unsigned int>, eastl::allocator,
   eastl::use_first<eastl::pair<std::wstring const, unsigned int> >, eastl::equal_to<std::wstring >,
   eastl::string_hash<std::wstring >, eastl::mod_range_hashing, eastl::default_ranged_hash,
   eastl::prime_rehash_policy, false, true, true>::hashtable(unsigned long,
   eastl::string_hash<std::wstring > const&, eastl::mod_range_hashing const&,
   eastl::default_ranged_hash const&, eastl::equal_to<std::wstring > const&,
   eastl::use_first<eastl::pair<std::wstring const, unsigned int> > const&, eastl::allocator const&)
    */

void eastl::
     hashtable<std::wstring,eastl::pair<std::wstring_const,unsigned_int>,eastl::allocator,eastl::use_first<eastl::pair<std::wstring_const,unsigned_int>>,eastl::equal_to<std::wstring>,eastl::string_hash<std::wstring>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
     ::hashtable(ulong param_1,string_hash *param_2,mod_range_hashing *param_3,
                default_ranged_hash *param_4,equal_to *param_5,use_first *param_6,allocator *param_7
                )

{
  ulong uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  prime_rehash_policy::prime_rehash_policy((prime_rehash_policy *)(param_1 + 0x20),1.0);
  if ((string_hash *)0x1 < param_2) {
    uVar1 = prime_rehash_policy::GetNextBucketCount
                      ((prime_rehash_policy *)(param_1 + 0x20),(uint)param_2);
    *(ulong *)(param_1 + 0x10) = uVar1 & 0xffffffff;
    uVar2 = FUN_03f0971c(uVar1 & 0xffffffff);
    *(undefined8 *)(param_1 + 8) = uVar2;
    return;
  }
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::reset_lose_memory((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                       *)param_1);
  return;
}


/* eastl::hashtable<std::string, eastl::pair<std::string const, unsigned int>, eastl::allocator,
   eastl::use_first<eastl::pair<std::string const, unsigned int> >, eastl::equal_to<std::string >,
   eastl::string_hash<std::string >, eastl::mod_range_hashing, eastl::default_ranged_hash,
   eastl::prime_rehash_policy, false, true, true>::clear() */

void __thiscall
eastl::
hashtable<std::string,eastl::pair<std::string_const,unsigned_int>,eastl::allocator,eastl::use_first<eastl::pair<std::string_const,unsigned_int>>,eastl::equal_to<std::string>,eastl::string_hash<std::string>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::clear(hashtable<std::string,eastl::pair<std::string_const,unsigned_int>,eastl::allocator,eastl::use_first<eastl::pair<std::string_const,unsigned_int>>,eastl::equal_to<std::string>,eastl::string_hash<std::string>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
        *this)

{
  FUN_03f0a02c(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* eastl::hashtable<std::string, eastl::pair<std::string const, unsigned int>, eastl::allocator,
   eastl::use_first<eastl::pair<std::string const, unsigned int> >, eastl::equal_to<std::string >,
   eastl::string_hash<std::string >, eastl::mod_range_hashing, eastl::default_ranged_hash,
   eastl::prime_rehash_policy, false, true, true>::~hashtable() */

void __thiscall
eastl::
hashtable<std::string,eastl::pair<std::string_const,unsigned_int>,eastl::allocator,eastl::use_first<eastl::pair<std::string_const,unsigned_int>>,eastl::equal_to<std::string>,eastl::string_hash<std::string>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::~hashtable(hashtable<std::string,eastl::pair<std::string_const,unsigned_int>,eastl::allocator,eastl::use_first<eastl::pair<std::string_const,unsigned_int>>,eastl::equal_to<std::string>,eastl::string_hash<std::string>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *this)

{
  clear(this);
  FUN_03f096b8(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  return;
}


/* eastl::hashtable<std::wstring, eastl::pair<std::wstring const, unsigned int>, eastl::allocator,
   eastl::use_first<eastl::pair<std::wstring const, unsigned int> >, eastl::equal_to<std::wstring >,
   eastl::string_hash<std::wstring >, eastl::mod_range_hashing, eastl::default_ranged_hash,
   eastl::prime_rehash_policy, false, true, true>::clear() */

void __thiscall
eastl::
hashtable<std::wstring,eastl::pair<std::wstring_const,unsigned_int>,eastl::allocator,eastl::use_first<eastl::pair<std::wstring_const,unsigned_int>>,eastl::equal_to<std::wstring>,eastl::string_hash<std::wstring>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::clear(hashtable<std::wstring,eastl::pair<std::wstring_const,unsigned_int>,eastl::allocator,eastl::use_first<eastl::pair<std::wstring_const,unsigned_int>>,eastl::equal_to<std::wstring>,eastl::string_hash<std::wstring>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
        *this)

{
  FUN_03f0a100(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* eastl::hashtable<std::wstring, eastl::pair<std::wstring const, unsigned int>, eastl::allocator,
   eastl::use_first<eastl::pair<std::wstring const, unsigned int> >, eastl::equal_to<std::wstring >,
   eastl::string_hash<std::wstring >, eastl::mod_range_hashing, eastl::default_ranged_hash,
   eastl::prime_rehash_policy, false, true, true>::~hashtable() */

void __thiscall
eastl::
hashtable<std::wstring,eastl::pair<std::wstring_const,unsigned_int>,eastl::allocator,eastl::use_first<eastl::pair<std::wstring_const,unsigned_int>>,eastl::equal_to<std::wstring>,eastl::string_hash<std::wstring>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::~hashtable(hashtable<std::wstring,eastl::pair<std::wstring_const,unsigned_int>,eastl::allocator,eastl::use_first<eastl::pair<std::wstring_const,unsigned_int>>,eastl::equal_to<std::wstring>,eastl::string_hash<std::wstring>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *this)

{
  clear(this);
  FUN_03f096c8(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  return;
}


/* eastl::hashtable<char16_t, char16_t, eastl::fixed_hashtable_allocator<42ul, 16ul, 41ul, 2ul, 0ul,
   false, eastl::allocator>, eastl::use_self<char16_t>, eastl::equal_to<char16_t>,
   EA::Text::FontServer::CharHash, eastl::mod_range_hashing, eastl::default_ranged_hash,
   eastl::prime_rehash_policy, false, false, true>::DoFreeBuckets(eastl::hash_node<char16_t,
   false>**, unsigned long) */

void __thiscall
eastl::
hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
::DoFreeBuckets(hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
                *this,hash_node **param_1,ulong param_2)

{
  if (1 < param_2) {
    FUN_0535a614(this + 0x30);
    return;
  }
  return;
}


/* eastl::hashtable<char16_t, char16_t, eastl::fixed_hashtable_allocator<42ul, 16ul, 41ul, 2ul, 0ul,
   false, eastl::allocator>, eastl::use_self<char16_t>, eastl::equal_to<char16_t>,
   EA::Text::FontServer::CharHash, eastl::mod_range_hashing, eastl::default_ranged_hash,
   eastl::prime_rehash_policy, false, false, true>::DoAllocateNode(char16_t const&) */

long __thiscall
eastl::
hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
::DoAllocateNode(hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
                 *this,wchar16 *param_1)

{
  long lVar1;
  wchar16 *pwVar2;
  
  lVar1 = FUN_0535a9d0(this + 0x30);
  pwVar2 = (wchar16 *)FUN_0535a408();
  if (pwVar2 != (wchar16 *)0x0) {
    *pwVar2 = *param_1;
  }
  *(undefined8 *)(lVar1 + 8) = 0;
  return lVar1;
}


/* eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>, eastl::fixed_hashtable_allocator<10ul, 1992ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face> >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoFreeBuckets(eastl::hash_node<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>, false>**, unsigned long) */

void __thiscall
eastl::
hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoFreeBuckets(hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                *this,hash_node **param_1,ulong param_2)

{
  if (1 < param_2) {
    FUN_0535c948(this + 0x30);
    return;
  }
  return;
}


/* eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > >, eastl::fixed_hashtable_allocator<6ul, 88ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > > >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoFreeBuckets(eastl::hash_node<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > >, false>**, unsigned long) */

void __thiscall
eastl::
hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoFreeBuckets(hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                *this,hash_node **param_1,ulong param_2)

{
  if (1 < param_2) {
    FUN_0535c970(this + 0x30);
    return;
  }
  return;
}


/* eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>, eastl::fixed_hashtable_allocator<10ul, 1992ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face> >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoFreeNode(eastl::hash_node<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>, false>*) */

void __thiscall
eastl::
hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoFreeNode(hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *this,hash_node *param_1)

{
  hash_node<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,false>
  ::~hash_node((hash_node<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,false>
                *)param_1);
  FUN_0535c948(this + 0x30,param_1);
  return;
}


/* eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>, eastl::fixed_hashtable_allocator<10ul, 1992ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face> >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoFreeNodes(eastl::hash_node<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>, false>**, unsigned long) */

void __thiscall
eastl::
hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoFreeNodes(hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
              *this,hash_node **param_1,ulong param_2)

{
  hash_node *phVar1;
  hash_node *phVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      phVar1 = param_1[uVar3];
      while (phVar1 != (hash_node *)0x0) {
        phVar2 = *(hash_node **)(phVar1 + 0x7c0);
        DoFreeNode(this,phVar1);
        phVar1 = phVar2;
      }
      param_1[uVar3] = (hash_node *)0x0;
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_2);
  }
  return;
}


/* eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>, eastl::fixed_hashtable_allocator<10ul, 1992ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face> >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::clear() */

void __thiscall
eastl::
hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::clear(hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
        *this)

{
  DoFreeNodes(this,*(hash_node ***)(this + 8),*(ulong *)(this + 0x10));
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>, eastl::fixed_hashtable_allocator<10ul, 1992ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face> >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::~hashtable() */

void __thiscall
eastl::
hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::~hashtable(hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *this)

{
  clear(this);
  DoFreeBuckets(this,*(hash_node ***)(this + 8),*(ulong *)(this + 0x10));
  return;
}


/* eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>, eastl::fixed_hashtable_allocator<10ul, 1992ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face> >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::erase(eastl::hashtable_iterator<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>, false, false>) */

hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
* eastl::
  hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::erase(hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
          *param_1,
         hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
         *param_2,hashtable_iterator *param_3)

{
  hash_node *phVar1;
  hash_node *phVar2;
  hash_node *phVar3;
  hash_node *phVar4;
  
  hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
  ::hashtable_iterator(param_1,param_3);
  hashtable_iterator<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,true,false>
  ::operator++((hashtable_iterator<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,true,false>
                *)param_1);
  phVar3 = *(hash_node **)param_3;
  phVar2 = (hash_node *)**(long **)(param_3 + 8);
  if (phVar2 == phVar3) {
    **(long **)(param_3 + 8) = *(long *)(phVar3 + 0x7c0);
  }
  else {
    phVar4 = phVar3;
    phVar1 = *(hash_node **)(phVar2 + 0x7c0);
    while (phVar3 != phVar1) {
      phVar4 = *(hash_node **)(phVar1 + 0x7c0);
      phVar2 = phVar1;
      phVar1 = phVar4;
    }
    *(undefined8 *)(phVar2 + 0x7c0) = *(undefined8 *)(phVar4 + 0x7c0);
  }
  DoFreeNode(param_2,phVar3);
  *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x18) + -1;
  return param_1;
}


/* eastl::hashtable<char16_t, char16_t, eastl::fixed_hashtable_allocator<42ul, 16ul, 41ul, 2ul, 0ul,
   false, eastl::allocator>, eastl::use_self<char16_t>, eastl::equal_to<char16_t>,
   EA::Text::FontServer::CharHash, eastl::mod_range_hashing, eastl::default_ranged_hash,
   eastl::prime_rehash_policy, false, false, true>::DoAllocateBuckets(unsigned long) */

void * __thiscall
eastl::
hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
::DoAllocateBuckets(hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
                    *this,ulong param_1)

{
  void *__s;
  
  __s = (void *)FUN_0535a9c0(this + 0x30,0x400000);
  memset(__s,0,param_1 * 8);
  *(undefined8 *)((long)__s + param_1 * 8) = 0xffffffffffffffff;
  return __s;
}


/* eastl::hashtable<char16_t, char16_t, eastl::fixed_hashtable_allocator<42ul, 16ul, 41ul, 2ul, 0ul,
   false, eastl::allocator>, eastl::use_self<char16_t>, eastl::equal_to<char16_t>,
   EA::Text::FontServer::CharHash, eastl::mod_range_hashing, eastl::default_ranged_hash,
   eastl::prime_rehash_policy, false, false, true>::hashtable(unsigned long,
   EA::Text::FontServer::CharHash const&, eastl::mod_range_hashing const&,
   eastl::default_ranged_hash const&, eastl::equal_to<char16_t> const&, eastl::use_self<char16_t>
   const&, eastl::fixed_hashtable_allocator<42ul, 16ul, 41ul, 2ul, 0ul, false, eastl::allocator>
   const&) */

void eastl::
     hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
     ::hashtable(ulong param_1,CharHash *param_2,mod_range_hashing *param_3,
                default_ranged_hash *param_4,equal_to *param_5,use_self *param_6,
                fixed_hashtable_allocator *param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  fixed_hashtable_allocator *in_x7;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  prime_rehash_policy::prime_rehash_policy((prime_rehash_policy *)(param_1 + 0x20),1.0);
  fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>::
  fixed_hashtable_allocator
            ((fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator> *)
             (param_1 + 0x30),in_x7);
  if ((CharHash *)0x1 < param_2) {
    uVar1 = prime_rehash_policy::GetNextBucketCount
                      ((prime_rehash_policy *)(param_1 + 0x20),(uint)param_2);
    *(ulong *)(param_1 + 0x10) = uVar1 & 0xffffffff;
    uVar2 = DoAllocateBuckets((hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
                               *)param_1,uVar1 & 0xffffffff);
    *(undefined8 *)(param_1 + 8) = uVar2;
    return;
  }
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::reset_lose_memory((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                       *)param_1);
  return;
}


/* eastl::hashtable<char16_t, char16_t, eastl::fixed_hashtable_allocator<42ul, 16ul, 41ul, 2ul, 0ul,
   false, eastl::allocator>, eastl::use_self<char16_t>, eastl::equal_to<char16_t>,
   EA::Text::FontServer::CharHash, eastl::mod_range_hashing, eastl::default_ranged_hash,
   eastl::prime_rehash_policy, false, false, true>::DoRehash(unsigned long) */

void __thiscall
eastl::
hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
::DoRehash(hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
           *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  hash_node **pphVar3;
  ulong uVar4;
  hash_node *phVar5;
  ulong uVar6;
  
  lVar2 = DoAllocateBuckets(this,param_1);
  uVar4 = *(ulong *)(this + 0x10);
  pphVar3 = *(hash_node ***)(this + 8);
  if (uVar4 != 0) {
    uVar6 = 0;
    do {
      phVar5 = pphVar3[uVar6];
      if (phVar5 != (hash_node *)0x0) {
        do {
          uVar4 = FUN_0535a6cc(phVar5,param_1 & 0xffffffff);
          lVar1 = (uVar4 & 0xffffffff) * 8;
          pphVar3[uVar6] = *(hash_node **)(phVar5 + 8);
          *(undefined8 *)(phVar5 + 8) = *(undefined8 *)(lVar2 + lVar1);
          *(hash_node **)(lVar2 + lVar1) = phVar5;
          pphVar3 = *(hash_node ***)(this + 8);
          phVar5 = pphVar3[uVar6];
        } while (phVar5 != (hash_node *)0x0);
        uVar4 = *(ulong *)(this + 0x10);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  DoFreeBuckets(this,pphVar3,uVar4);
  *(ulong *)(this + 0x10) = param_1;
  *(long *)(this + 8) = lVar2;
  return;
}


/* eastl::hashtable<char16_t, char16_t, eastl::fixed_hashtable_allocator<42ul, 16ul, 41ul, 2ul, 0ul,
   false, eastl::allocator>, eastl::use_self<char16_t>, eastl::equal_to<char16_t>,
   EA::Text::FontServer::CharHash, eastl::mod_range_hashing, eastl::default_ranged_hash,
   eastl::prime_rehash_policy, false, false, true>::rehash_policy(eastl::prime_rehash_policy const&)
    */

void __thiscall
eastl::
hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
::rehash_policy(hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
                *this,prime_rehash_policy *param_1)

{
  ulong uVar1;
  
  *(undefined8 *)(this + 0x20) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 8);
  uVar1 = prime_rehash_policy::GetBucketCount(param_1,*(uint *)(this + 0x18));
  if ((uVar1 & 0xffffffff) <= *(ulong *)(this + 0x10)) {
    return;
  }
  DoRehash(this,uVar1 & 0xffffffff);
  return;
}


/* eastl::hashtable<char16_t, char16_t, eastl::fixed_hashtable_allocator<42ul, 16ul, 41ul, 2ul, 0ul,
   false, eastl::allocator>, eastl::use_self<char16_t>, eastl::equal_to<char16_t>,
   EA::Text::FontServer::CharHash, eastl::mod_range_hashing, eastl::default_ranged_hash,
   eastl::prime_rehash_policy, false, false, true>::insert(char16_t const&) */

void eastl::
     hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
     ::insert(wchar16 *param_1)

{
  FUN_0535d428();
  return;
}


/* eastl::hashtable<char16_t, char16_t, eastl::fixed_hashtable_allocator<42ul, 16ul, 41ul, 2ul, 0ul,
   false, eastl::allocator>, eastl::use_self<char16_t>, eastl::equal_to<char16_t>,
   EA::Text::FontServer::CharHash, eastl::mod_range_hashing, eastl::default_ranged_hash,
   eastl::prime_rehash_policy, false, false, true>::DoFreeNode(eastl::hash_node<char16_t, false>*)
    */

void eastl::
     hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
     ::DoFreeNode(hash_node *param_1)

{
  FUN_0535a614(param_1 + 0x30);
  return;
}


/* eastl::hashtable<char16_t, char16_t, eastl::fixed_hashtable_allocator<42ul, 16ul, 41ul, 2ul, 0ul,
   false, eastl::allocator>, eastl::use_self<char16_t>, eastl::equal_to<char16_t>,
   EA::Text::FontServer::CharHash, eastl::mod_range_hashing, eastl::default_ranged_hash,
   eastl::prime_rehash_policy, false, false, true>::DoFreeNodes(eastl::hash_node<char16_t, false>**,
   unsigned long) */

void __thiscall
eastl::
hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
::DoFreeNodes(hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
              *this,hash_node **param_1,ulong param_2)

{
  hash_node *phVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      phVar1 = param_1[uVar2];
      while (phVar1 != (hash_node *)0x0) {
        phVar1 = *(hash_node **)(phVar1 + 8);
        DoFreeNode((hash_node *)this);
      }
      param_1[uVar2] = (hash_node *)0x0;
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_2);
  }
  return;
}


/* eastl::hashtable<char16_t, char16_t, eastl::fixed_hashtable_allocator<42ul, 16ul, 41ul, 2ul, 0ul,
   false, eastl::allocator>, eastl::use_self<char16_t>, eastl::equal_to<char16_t>,
   EA::Text::FontServer::CharHash, eastl::mod_range_hashing, eastl::default_ranged_hash,
   eastl::prime_rehash_policy, false, false, true>::clear() */

void __thiscall
eastl::
hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
::clear(hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
        *this)

{
  DoFreeNodes(this,*(hash_node ***)(this + 8),*(ulong *)(this + 0x10));
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* eastl::hashtable<char16_t, char16_t, eastl::fixed_hashtable_allocator<42ul, 16ul, 41ul, 2ul, 0ul,
   false, eastl::allocator>, eastl::use_self<char16_t>, eastl::equal_to<char16_t>,
   EA::Text::FontServer::CharHash, eastl::mod_range_hashing, eastl::default_ranged_hash,
   eastl::prime_rehash_policy, false, false, true>::~hashtable() */

void __thiscall
eastl::
hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
::~hashtable(hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
             *this)

{
  clear(this);
  DoFreeBuckets(this,*(hash_node ***)(this + 8),*(ulong *)(this + 0x10));
  return;
}


/* eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > >, eastl::fixed_hashtable_allocator<6ul, 88ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > > >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoFreeNode(eastl::hash_node<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > >, false>*) */

void __thiscall
eastl::
hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoFreeNode(hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *this,hash_node *param_1)

{
  hash_node<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false>
  ::~hash_node((hash_node<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false>
                *)param_1);
  FUN_0535c970(this + 0x30,param_1);
  return;
}


/* eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > >, eastl::fixed_hashtable_allocator<6ul, 88ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > > >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoFreeNodes(eastl::hash_node<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > >, false>**, unsigned long) */

void __thiscall
eastl::
hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoFreeNodes(hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
              *this,hash_node **param_1,ulong param_2)

{
  hash_node *phVar1;
  hash_node *phVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      phVar1 = param_1[uVar3];
      while (phVar1 != (hash_node *)0x0) {
        phVar2 = *(hash_node **)(phVar1 + 0x50);
        DoFreeNode(this,phVar1);
        phVar1 = phVar2;
      }
      param_1[uVar3] = (hash_node *)0x0;
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_2);
  }
  return;
}


/* eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > >, eastl::fixed_hashtable_allocator<6ul, 88ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > > >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::clear() */

void __thiscall
eastl::
hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::clear(hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
        *this)

{
  DoFreeNodes(this,*(hash_node ***)(this + 8),*(ulong *)(this + 0x10));
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > >, eastl::fixed_hashtable_allocator<6ul, 88ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > > >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::~hashtable() */

void __thiscall
eastl::
hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::~hashtable(hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *this)

{
  clear(this);
  DoFreeBuckets(this,*(hash_node ***)(this + 8),*(ulong *)(this + 0x10));
  return;
}


/* eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>, eastl::fixed_hashtable_allocator<10ul, 1992ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face> >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoAllocateBuckets(unsigned long) */

void * __thiscall
eastl::
hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoAllocateBuckets(hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                    *this,ulong param_1)

{
  void *__s;
  
  __s = (void *)FUN_0535e114(this + 0x30,0x400000);
  memset(__s,0,param_1 * 8);
  *(undefined8 *)((long)__s + param_1 * 8) = 0xffffffffffffffff;
  return __s;
}


/* eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>, eastl::fixed_hashtable_allocator<10ul, 1992ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face> >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::hashtable(unsigned
   long, eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > > const&,
   eastl::mod_range_hashing const&, eastl::default_ranged_hash const&,
   eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > > const&,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face> > const&, eastl::fixed_hashtable_allocator<10ul, 1992ul, 8ul, 8ul,
   0ul, true, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

void eastl::
     hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
     ::hashtable(ulong param_1,string_hash *param_2,mod_range_hashing *param_3,
                default_ranged_hash *param_4,equal_to *param_5,use_first *param_6,
                fixed_hashtable_allocator *param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  fixed_hashtable_allocator *in_x7;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  prime_rehash_policy::prime_rehash_policy((prime_rehash_policy *)(param_1 + 0x20),1.0);
  fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::fixed_hashtable_allocator
            ((fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(param_1 + 0x30),in_x7);
  if ((string_hash *)0x1 < param_2) {
    uVar1 = prime_rehash_policy::GetNextBucketCount
                      ((prime_rehash_policy *)(param_1 + 0x20),(uint)param_2);
    *(ulong *)(param_1 + 0x10) = uVar1 & 0xffffffff;
    uVar2 = DoAllocateBuckets((hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                               *)param_1,uVar1 & 0xffffffff);
    *(undefined8 *)(param_1 + 8) = uVar2;
    return;
  }
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::reset_lose_memory((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                       *)param_1);
  return;
}


/* eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>, eastl::fixed_hashtable_allocator<10ul, 1992ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face> >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::DoRehash(unsigned
   long) */

void __thiscall
eastl::
hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoRehash(hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  hash_node **pphVar3;
  ulong uVar4;
  hash_node *phVar5;
  ulong uVar6;
  
  lVar2 = DoAllocateBuckets(this,param_1);
  uVar4 = *(ulong *)(this + 0x10);
  pphVar3 = *(hash_node ***)(this + 8);
  if (uVar4 != 0) {
    uVar6 = 0;
    do {
      phVar5 = pphVar3[uVar6];
      if (phVar5 != (hash_node *)0x0) {
        do {
          uVar4 = FUN_0535a7b8(phVar5,param_1 & 0xffffffff);
          lVar1 = (uVar4 & 0xffffffff) * 8;
          pphVar3[uVar6] = *(hash_node **)(phVar5 + 0x7c0);
          *(undefined8 *)(phVar5 + 0x7c0) = *(undefined8 *)(lVar2 + lVar1);
          *(hash_node **)(lVar2 + lVar1) = phVar5;
          pphVar3 = *(hash_node ***)(this + 8);
          phVar5 = pphVar3[uVar6];
        } while (phVar5 != (hash_node *)0x0);
        uVar4 = *(ulong *)(this + 0x10);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  DoFreeBuckets(this,pphVar3,uVar4);
  *(ulong *)(this + 0x10) = param_1;
  *(long *)(this + 8) = lVar2;
  return;
}


/* eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>, eastl::fixed_hashtable_allocator<10ul, 1992ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face> >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::rehash_policy(eastl::prime_rehash_policy const&) */

void __thiscall
eastl::
hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::rehash_policy(hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                *this,prime_rehash_policy *param_1)

{
  ulong uVar1;
  
  *(undefined8 *)(this + 0x20) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 8);
  uVar1 = prime_rehash_policy::GetBucketCount(param_1,*(uint *)(this + 0x18));
  if ((uVar1 & 0xffffffff) <= *(ulong *)(this + 0x10)) {
    return;
  }
  DoRehash(this,uVar1 & 0xffffffff);
  return;
}


/* eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > >, eastl::fixed_hashtable_allocator<6ul, 88ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > > >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoAllocateBuckets(unsigned long) */

void * __thiscall
eastl::
hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoAllocateBuckets(hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                    *this,ulong param_1)

{
  void *__s;
  
  __s = (void *)FUN_0535e470(this + 0x30,0x400000);
  memset(__s,0,param_1 * 8);
  *(undefined8 *)((long)__s + param_1 * 8) = 0xffffffffffffffff;
  return __s;
}


/* eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > >, eastl::fixed_hashtable_allocator<6ul, 88ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > > >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::hashtable(unsigned
   long, eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > > const&,
   eastl::mod_range_hashing const&, eastl::default_ranged_hash const&,
   eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > > const&,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > > > const&, eastl::fixed_hashtable_allocator<6ul, 88ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

void eastl::
     hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
     ::hashtable(ulong param_1,string_hash *param_2,mod_range_hashing *param_3,
                default_ranged_hash *param_4,equal_to *param_5,use_first *param_6,
                fixed_hashtable_allocator *param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  fixed_hashtable_allocator *in_x7;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  prime_rehash_policy::prime_rehash_policy((prime_rehash_policy *)(param_1 + 0x20),1.0);
  fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::fixed_hashtable_allocator
            ((fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(param_1 + 0x30),in_x7);
  if ((string_hash *)0x1 < param_2) {
    uVar1 = prime_rehash_policy::GetNextBucketCount
                      ((prime_rehash_policy *)(param_1 + 0x20),(uint)param_2);
    *(ulong *)(param_1 + 0x10) = uVar1 & 0xffffffff;
    uVar2 = DoAllocateBuckets((hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                               *)param_1,uVar1 & 0xffffffff);
    *(undefined8 *)(param_1 + 8) = uVar2;
    return;
  }
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::reset_lose_memory((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                       *)param_1);
  return;
}


/* eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > >, eastl::fixed_hashtable_allocator<6ul, 88ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > > >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::DoRehash(unsigned
   long) */

void __thiscall
eastl::
hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoRehash(hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  hash_node **pphVar3;
  ulong uVar4;
  hash_node *phVar5;
  ulong uVar6;
  
  lVar2 = DoAllocateBuckets(this,param_1);
  uVar4 = *(ulong *)(this + 0x10);
  pphVar3 = *(hash_node ***)(this + 8);
  if (uVar4 != 0) {
    uVar6 = 0;
    do {
      phVar5 = pphVar3[uVar6];
      if (phVar5 != (hash_node *)0x0) {
        do {
          uVar4 = FUN_0535a808(phVar5,param_1 & 0xffffffff);
          lVar1 = (uVar4 & 0xffffffff) * 8;
          pphVar3[uVar6] = *(hash_node **)(phVar5 + 0x50);
          *(undefined8 *)(phVar5 + 0x50) = *(undefined8 *)(lVar2 + lVar1);
          *(hash_node **)(lVar2 + lVar1) = phVar5;
          pphVar3 = *(hash_node ***)(this + 8);
          phVar5 = pphVar3[uVar6];
        } while (phVar5 != (hash_node *)0x0);
        uVar4 = *(ulong *)(this + 0x10);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  DoFreeBuckets(this,pphVar3,uVar4);
  *(ulong *)(this + 0x10) = param_1;
  *(long *)(this + 8) = lVar2;
  return;
}


/* eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > >, eastl::fixed_hashtable_allocator<6ul, 88ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > > >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::rehash_policy(eastl::prime_rehash_policy const&) */

void __thiscall
eastl::
hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::rehash_policy(hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                *this,prime_rehash_policy *param_1)

{
  ulong uVar1;
  
  *(undefined8 *)(this + 0x20) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 8);
  uVar1 = prime_rehash_policy::GetBucketCount(param_1,*(uint *)(this + 0x18));
  if ((uVar1 & 0xffffffff) <= *(ulong *)(this + 0x10)) {
    return;
  }
  DoRehash(this,uVar1 & 0xffffffff);
  return;
}


/* eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > >, eastl::fixed_hashtable_allocator<6ul, 88ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > > >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoAllocateNode(eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > > const&) */

long __thiscall
eastl::
hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoAllocateNode(hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                 *this,pair *param_1)

{
  long lVar1;
  pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
  *this_00;
  
  lVar1 = FUN_0535ea64(this + 0x30);
  this_00 = (pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
             *)FUN_0535a408();
  if (this_00 !=
      (pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
       *)0x0) {
    pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
    ::pair(this_00,param_1);
  }
  *(undefined8 *)(lVar1 + 0x50) = 0;
  return lVar1;
}


/* eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > >, eastl::fixed_hashtable_allocator<6ul, 88ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > > >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::insert(eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > > const&) */

void eastl::
     hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
     ::insert(pair *param_1)

{
  FUN_0535eaac();
  return;
}


/* eastl::hashtable_iterator<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>, false, false> eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>, eastl::fixed_hashtable_allocator<10ul, 1992ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face> >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find_as<char16_t
   [32]>(char16_t const (&) [32]) */

void eastl::
     hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
     ::find_as<char16_t[32]>(wchar16 *param_1)

{
  wchar16 *in_x1;
  
  hashtable_find<eastl::hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>,char16_t_const*>
            ((hashtable *)param_1,in_x1);
  return;
}


/* eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>, eastl::fixed_hashtable_allocator<10ul, 1992ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face> >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoAllocateNode(eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face> const&) */

long __thiscall
eastl::
hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoAllocateNode(hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                 *this,pair *param_1)

{
  long lVar1;
  pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>
  *this_00;
  
  lVar1 = FUN_0535e468(this + 0x30);
  this_00 = (pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>
             *)FUN_0535a408();
  if (this_00 !=
      (pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>
       *)0x0) {
    pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>
    ::pair(this_00,param_1);
  }
  *(undefined8 *)(lVar1 + 0x7c0) = 0;
  return lVar1;
}


/* eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>, eastl::fixed_hashtable_allocator<10ul, 1992ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face> >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::insert(eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face> const&) */

void eastl::
     hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
     ::insert(pair *param_1)

{
  FUN_05360474();
  return;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::GlyphMetrics>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::GlyphMetrics> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoFreeBuckets(eastl::hash_node<eastl::pair<unsigned short const, EA::Text::GlyphMetrics>,
   false>**, unsigned long) */

void __thiscall
eastl::
hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoFreeBuckets(hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                *this,hash_node **param_1,ulong param_2)

{
  if (1 < param_2) {
    FUN_0536508c(*(undefined8 *)(this + 0x30),param_1,(param_2 + 1) * 8);
    return;
  }
  return;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::GlyphMetrics>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::GlyphMetrics> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoAllocateBuckets(unsigned long) */

void * __thiscall
eastl::
hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoAllocateBuckets(hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                    *this,ulong param_1)

{
  void *__s;
  size_t __n;
  
  __n = (param_1 + 1) * 8 - 8;
  __s = (void *)FUN_053650b8(*(undefined8 *)(this + 0x30),*(undefined4 *)(this + 0x38));
  memset(__s,0,__n);
  *(undefined8 *)((long)__s + __n) = 0xffffffffffffffff;
  return __s;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::GlyphMetrics>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::GlyphMetrics> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::hashtable(unsigned
   long, eastl::hash<unsigned int> const&, eastl::mod_range_hashing const&,
   eastl::default_ranged_hash const&, eastl::equal_to<unsigned short> const&,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::GlyphMetrics> > const&,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void eastl::
     hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
     ::hashtable(ulong param_1,hash *param_2,mod_range_hashing *param_3,default_ranged_hash *param_4
                ,equal_to *param_5,use_first *param_6,CoreAllocatorAdapter *param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  EAIOEASTLCoreAllocator *in_x7;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  prime_rehash_policy::prime_rehash_policy((prime_rehash_policy *)(param_1 + 0x20),1.0);
  EA::Allocator::EAIOEASTLCoreAllocator::EAIOEASTLCoreAllocator
            ((EAIOEASTLCoreAllocator *)(param_1 + 0x30),in_x7);
  if ((hash *)0x1 < param_2) {
    uVar1 = prime_rehash_policy::GetNextBucketCount
                      ((prime_rehash_policy *)(param_1 + 0x20),(uint)param_2);
    *(ulong *)(param_1 + 0x10) = uVar1 & 0xffffffff;
    uVar2 = DoAllocateBuckets((hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                               *)param_1,uVar1 & 0xffffffff);
    *(undefined8 *)(param_1 + 8) = uVar2;
    return;
  }
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::reset_lose_memory((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                       *)param_1);
  return;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::GlyphMetrics>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::GlyphMetrics> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::DoRehash(unsigned
   long) */

void __thiscall
eastl::
hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoRehash(hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  hash_node **pphVar3;
  ulong uVar4;
  hash_node *phVar5;
  ulong uVar6;
  
  lVar2 = DoAllocateBuckets(this,param_1);
  uVar4 = *(ulong *)(this + 0x10);
  pphVar3 = *(hash_node ***)(this + 8);
  if (uVar4 != 0) {
    uVar6 = 0;
    do {
      phVar5 = pphVar3[uVar6];
      if (phVar5 != (hash_node *)0x0) {
        do {
          uVar4 = FUN_053650e8(phVar5,param_1 & 0xffffffff);
          lVar1 = (uVar4 & 0xffffffff) * 8;
          pphVar3[uVar6] = *(hash_node **)(phVar5 + 0x18);
          *(undefined8 *)(phVar5 + 0x18) = *(undefined8 *)(lVar2 + lVar1);
          *(hash_node **)(lVar2 + lVar1) = phVar5;
          pphVar3 = *(hash_node ***)(this + 8);
          phVar5 = pphVar3[uVar6];
        } while (phVar5 != (hash_node *)0x0);
        uVar4 = *(ulong *)(this + 0x10);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  DoFreeBuckets(this,pphVar3,uVar4);
  *(ulong *)(this + 0x10) = param_1;
  *(long *)(this + 8) = lVar2;
  return;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::GlyphMetrics>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::GlyphMetrics> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoFreeNode(eastl::hash_node<eastl::pair<unsigned short const, EA::Text::GlyphMetrics>,
   false>*) */

void __thiscall
eastl::
hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoFreeNode(hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *this,hash_node *param_1)

{
  FUN_0536508c(*(undefined8 *)(this + 0x30),param_1,0x20);
  return;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::GlyphMetrics>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::GlyphMetrics> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoFreeNodes(eastl::hash_node<eastl::pair<unsigned short const, EA::Text::GlyphMetrics>,
   false>**, unsigned long) */

void __thiscall
eastl::
hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoFreeNodes(hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
              *this,hash_node **param_1,ulong param_2)

{
  hash_node *phVar1;
  hash_node *phVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      phVar1 = param_1[uVar3];
      while (phVar1 != (hash_node *)0x0) {
        phVar2 = *(hash_node **)(phVar1 + 0x18);
        DoFreeNode(this,phVar1);
        phVar1 = phVar2;
      }
      param_1[uVar3] = (hash_node *)0x0;
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_2);
  }
  return;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::GlyphMetrics>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::GlyphMetrics> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::clear() */

void __thiscall
eastl::
hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::clear(hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
        *this)

{
  DoFreeNodes(this,*(hash_node ***)(this + 8),*(ulong *)(this + 0x10));
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::GlyphMetrics>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::GlyphMetrics> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::~hashtable() */

void __thiscall
eastl::
hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::~hashtable(hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *this)

{
  clear(this);
  DoFreeBuckets(this,*(hash_node ***)(this + 8),*(ulong *)(this + 0x10));
  return;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::GlyphMetrics>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::GlyphMetrics> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoAllocateNode(eastl::pair<unsigned short const, EA::Text::GlyphMetrics> const&) */

void * __thiscall
eastl::
hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoAllocateNode(hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                 *this,pair *param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  pvVar2 = allocate_memory<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                     ((CoreAllocatorAdapter *)(this + 0x30),0x20,4,0);
  puVar3 = (undefined8 *)FUN_0536501c();
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *puVar3 = *(undefined8 *)param_1;
    puVar3[1] = uVar1;
    puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  }
  *(undefined8 *)((long)pvVar2 + 0x18) = 0;
  return pvVar2;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::GlyphMetrics>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::GlyphMetrics> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::insert(eastl::pair<unsigned short const, EA::Text::GlyphMetrics> const&) */

void eastl::
     hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
     ::insert(pair *param_1)

{
  FUN_053670a8();
  return;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::GlyphMetrics>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::GlyphMetrics> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoAllocateNodeFromKey(unsigned short const&) */

void * __thiscall
eastl::
hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoAllocateNodeFromKey
          (hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           *this,ushort *param_1)

{
  void *pvVar1;
  pair<unsigned_short_const,EA::Text::GlyphMetrics> *this_00;
  
  pvVar1 = allocate_memory<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                     ((CoreAllocatorAdapter *)(this + 0x30),0x20,4,0);
  this_00 = (pair<unsigned_short_const,EA::Text::GlyphMetrics> *)FUN_0536501c();
  if (this_00 != (pair<unsigned_short_const,EA::Text::GlyphMetrics> *)0x0) {
    pair<unsigned_short_const,EA::Text::GlyphMetrics>::pair(this_00,param_1);
  }
  *(undefined8 *)((long)pvVar1 + 0x18) = 0;
  return pvVar1;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::PolygonGlyphPtr>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::PolygonGlyphPtr> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoFreeBuckets(eastl::hash_node<eastl::pair<unsigned short const,
   EA::Text::PolygonGlyphPtr>, false>**, unsigned long) */

void __thiscall
eastl::
hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoFreeBuckets(hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                *this,hash_node **param_1,ulong param_2)

{
  if (1 < param_2) {
    FUN_0536869c(*(undefined8 *)(this + 0x30),param_1,(param_2 + 1) * 8);
    return;
  }
  return;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::PolygonGlyphPtr>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::PolygonGlyphPtr> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoAllocateBuckets(unsigned long) */

void * __thiscall
eastl::
hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoAllocateBuckets(hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                    *this,ulong param_1)

{
  void *__s;
  size_t __n;
  
  __n = (param_1 + 1) * 8 - 8;
  __s = (void *)FUN_053686dc(*(undefined8 *)(this + 0x30),*(undefined4 *)(this + 0x38));
  memset(__s,0,__n);
  *(undefined8 *)((long)__s + __n) = 0xffffffffffffffff;
  return __s;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::PolygonGlyphPtr>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::PolygonGlyphPtr> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::hashtable(unsigned
   long, eastl::hash<unsigned int> const&, eastl::mod_range_hashing const&,
   eastl::default_ranged_hash const&, eastl::equal_to<unsigned short> const&,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::PolygonGlyphPtr> > const&,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void eastl::
     hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
     ::hashtable(ulong param_1,hash *param_2,mod_range_hashing *param_3,default_ranged_hash *param_4
                ,equal_to *param_5,use_first *param_6,CoreAllocatorAdapter *param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  EAIOEASTLCoreAllocator *in_x7;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  prime_rehash_policy::prime_rehash_policy((prime_rehash_policy *)(param_1 + 0x20),1.0);
  EA::Allocator::EAIOEASTLCoreAllocator::EAIOEASTLCoreAllocator
            ((EAIOEASTLCoreAllocator *)(param_1 + 0x30),in_x7);
  if ((hash *)0x1 < param_2) {
    uVar1 = prime_rehash_policy::GetNextBucketCount
                      ((prime_rehash_policy *)(param_1 + 0x20),(uint)param_2);
    *(ulong *)(param_1 + 0x10) = uVar1 & 0xffffffff;
    uVar2 = DoAllocateBuckets((hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                               *)param_1,uVar1 & 0xffffffff);
    *(undefined8 *)(param_1 + 8) = uVar2;
    return;
  }
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::reset_lose_memory((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                       *)param_1);
  return;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::PolygonGlyphPtr>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::PolygonGlyphPtr> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::DoRehash(unsigned
   long) */

void __thiscall
eastl::
hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoRehash(hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  hash_node **pphVar3;
  ulong uVar4;
  hash_node *phVar5;
  ulong uVar6;
  
  lVar2 = DoAllocateBuckets(this,param_1);
  uVar4 = *(ulong *)(this + 0x10);
  pphVar3 = *(hash_node ***)(this + 8);
  if (uVar4 != 0) {
    uVar6 = 0;
    do {
      phVar5 = pphVar3[uVar6];
      if (phVar5 != (hash_node *)0x0) {
        do {
          uVar4 = FUN_05368824(phVar5,param_1 & 0xffffffff);
          lVar1 = (uVar4 & 0xffffffff) * 8;
          pphVar3[uVar6] = *(hash_node **)(phVar5 + 0x10);
          *(undefined8 *)(phVar5 + 0x10) = *(undefined8 *)(lVar2 + lVar1);
          *(hash_node **)(lVar2 + lVar1) = phVar5;
          pphVar3 = *(hash_node ***)(this + 8);
          phVar5 = pphVar3[uVar6];
        } while (phVar5 != (hash_node *)0x0);
        uVar4 = *(ulong *)(this + 0x10);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  DoFreeBuckets(this,pphVar3,uVar4);
  *(ulong *)(this + 0x10) = param_1;
  *(long *)(this + 8) = lVar2;
  return;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::PolygonGlyphPtr>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::PolygonGlyphPtr> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoFreeNode(eastl::hash_node<eastl::pair<unsigned short const, EA::Text::PolygonGlyphPtr>,
   false>*) */

void __thiscall
eastl::
hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoFreeNode(hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *this,hash_node *param_1)

{
  FUN_0536869c(*(undefined8 *)(this + 0x30),param_1,0x18);
  return;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::PolygonGlyphPtr>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::PolygonGlyphPtr> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoFreeNodes(eastl::hash_node<eastl::pair<unsigned short const, EA::Text::PolygonGlyphPtr>,
   false>**, unsigned long) */

void __thiscall
eastl::
hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoFreeNodes(hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
              *this,hash_node **param_1,ulong param_2)

{
  hash_node *phVar1;
  hash_node *phVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      phVar1 = param_1[uVar3];
      while (phVar1 != (hash_node *)0x0) {
        phVar2 = *(hash_node **)(phVar1 + 0x10);
        DoFreeNode(this,phVar1);
        phVar1 = phVar2;
      }
      param_1[uVar3] = (hash_node *)0x0;
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_2);
  }
  return;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::PolygonGlyphPtr>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::PolygonGlyphPtr> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::clear() */

void __thiscall
eastl::
hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::clear(hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
        *this)

{
  DoFreeNodes(this,*(hash_node ***)(this + 8),*(ulong *)(this + 0x10));
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::PolygonGlyphPtr>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::PolygonGlyphPtr> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::~hashtable() */

void __thiscall
eastl::
hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::~hashtable(hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *this)

{
  clear(this);
  DoFreeBuckets(this,*(hash_node ***)(this + 8),*(ulong *)(this + 0x10));
  return;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::PolygonGlyphPtr>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::PolygonGlyphPtr> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoAllocateNodeFromKey(unsigned short const&) */

void * __thiscall
eastl::
hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoAllocateNodeFromKey
          (hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           *this,ushort *param_1)

{
  void *pvVar1;
  pair<unsigned_short_const,EA::Text::PolygonGlyphPtr> *this_00;
  
  pvVar1 = allocate_memory<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                     ((CoreAllocatorAdapter *)(this + 0x30),0x18,8,0);
  this_00 = (pair<unsigned_short_const,EA::Text::PolygonGlyphPtr> *)FUN_0536853c();
  if (this_00 != (pair<unsigned_short_const,EA::Text::PolygonGlyphPtr> *)0x0) {
    pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>::pair(this_00,param_1);
  }
  *(undefined8 *)((long)pvVar1 + 0x10) = 0;
  return pvVar1;
}


/* eastl::hashtable<unsigned int, eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*>, eastl::fixed_hashtable_allocator<10ul, 24ul, 8ul, 8ul,
   0ul, true, eastl::allocator>, eastl::use_first<eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*> >, eastl::equal_to<unsigned int>, eastl::hash<unsigned
   int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
   true, true>::DoFreeBuckets(eastl::hash_node<eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*>, false>**, unsigned long) */

void __thiscall
eastl::
hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoFreeBuckets(hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                *this,hash_node **param_1,ulong param_2)

{
  if (1 < param_2) {
    FUN_0536e4e0(this + 0x30);
    return;
  }
  return;
}


/* eastl::hashtable<unsigned int, eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*>, eastl::fixed_hashtable_allocator<10ul, 24ul, 8ul, 8ul,
   0ul, true, eastl::allocator>, eastl::use_first<eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*> >, eastl::equal_to<unsigned int>, eastl::hash<unsigned
   int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
   true, true>::DoFreeNode(eastl::hash_node<eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*>, false>*) */

void eastl::
     hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
     ::DoFreeNode(hash_node *param_1)

{
  FUN_0536e4e0(param_1 + 0x30);
  return;
}


/* eastl::hashtable<unsigned int, eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*>, eastl::fixed_hashtable_allocator<10ul, 24ul, 8ul, 8ul,
   0ul, true, eastl::allocator>, eastl::use_first<eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*> >, eastl::equal_to<unsigned int>, eastl::hash<unsigned
   int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
   true, true>::DoFreeNodes(eastl::hash_node<eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*>, false>**, unsigned long) */

void __thiscall
eastl::
hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoFreeNodes(hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
              *this,hash_node **param_1,ulong param_2)

{
  hash_node *phVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      phVar1 = param_1[uVar2];
      while (phVar1 != (hash_node *)0x0) {
        phVar1 = *(hash_node **)(phVar1 + 0x10);
        DoFreeNode((hash_node *)this);
      }
      param_1[uVar2] = (hash_node *)0x0;
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_2);
  }
  return;
}


/* eastl::hashtable<unsigned int, eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*>, eastl::fixed_hashtable_allocator<10ul, 24ul, 8ul, 8ul,
   0ul, true, eastl::allocator>, eastl::use_first<eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*> >, eastl::equal_to<unsigned int>, eastl::hash<unsigned
   int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
   true, true>::clear() */

void __thiscall
eastl::
hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::clear(hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
        *this)

{
  DoFreeNodes(this,*(hash_node ***)(this + 8),*(ulong *)(this + 0x10));
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* eastl::hashtable<unsigned int, eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*>, eastl::fixed_hashtable_allocator<10ul, 24ul, 8ul, 8ul,
   0ul, true, eastl::allocator>, eastl::use_first<eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*> >, eastl::equal_to<unsigned int>, eastl::hash<unsigned
   int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
   true, true>::~hashtable() */

void __thiscall
eastl::
hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::~hashtable(hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *this)

{
  clear(this);
  DoFreeBuckets(this,*(hash_node ***)(this + 8),*(ulong *)(this + 0x10));
  return;
}


/* eastl::hashtable<unsigned int, eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*>, eastl::fixed_hashtable_allocator<10ul, 24ul, 8ul, 8ul,
   0ul, true, eastl::allocator>, eastl::use_first<eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*> >, eastl::equal_to<unsigned int>, eastl::hash<unsigned
   int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
   true, true>::clear(bool) */

void __thiscall
eastl::
hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::clear(hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
        *this,bool param_1)

{
  DoFreeNodes(this,*(hash_node ***)(this + 8),*(ulong *)(this + 0x10));
  if (param_1) {
    DoFreeBuckets(this,*(hash_node ***)(this + 8),*(ulong *)(this + 0x10));
    hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
    ::reset_lose_memory((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                         *)this);
  }
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* eastl::hashtable<unsigned int, eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*>, eastl::fixed_hashtable_allocator<10ul, 24ul, 8ul, 8ul,
   0ul, true, eastl::allocator>, eastl::use_first<eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*> >, eastl::equal_to<unsigned int>, eastl::hash<unsigned
   int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
   true, true>::erase(eastl::hashtable_iterator<eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*>, false, false>) */

hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
* eastl::
  hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::erase(hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
          *param_1,hash_node *param_2,hashtable_iterator *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
  ::hashtable_iterator(param_1,param_3);
  hashtable_iterator<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,true,false>
  ::operator++((hashtable_iterator<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,true,false>
                *)param_1);
  lVar3 = *(long *)param_3;
  lVar2 = **(long **)(param_3 + 8);
  if (lVar2 == lVar3) {
    **(long **)(param_3 + 8) = *(long *)(lVar3 + 0x10);
  }
  else {
    lVar4 = lVar3;
    lVar1 = *(long *)(lVar2 + 0x10);
    while (lVar3 != lVar1) {
      lVar4 = *(long *)(lVar1 + 0x10);
      lVar2 = lVar1;
      lVar1 = lVar4;
    }
    *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar4 + 0x10);
  }
  DoFreeNode(param_2);
  *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x18) + -1;
  return param_1;
}


/* eastl::hashtable<unsigned int, eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*>, eastl::fixed_hashtable_allocator<10ul, 24ul, 8ul, 8ul,
   0ul, true, eastl::allocator>, eastl::use_first<eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*> >, eastl::equal_to<unsigned int>, eastl::hash<unsigned
   int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
   true, true>::DoAllocateBuckets(unsigned long) */

void * __thiscall
eastl::
hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoAllocateBuckets(hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                    *this,ulong param_1)

{
  void *__s;
  
  __s = (void *)FUN_0536e9d4(this + 0x30,0x400000);
  memset(__s,0,param_1 * 8);
  *(undefined8 *)((long)__s + param_1 * 8) = 0xffffffffffffffff;
  return __s;
}


/* eastl::hashtable<unsigned int, eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*>, eastl::fixed_hashtable_allocator<10ul, 24ul, 8ul, 8ul,
   0ul, true, eastl::allocator>, eastl::use_first<eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*> >, eastl::equal_to<unsigned int>, eastl::hash<unsigned
   int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
   true, true>::hashtable(unsigned long, eastl::hash<unsigned int> const&, eastl::mod_range_hashing
   const&, eastl::default_ranged_hash const&, eastl::equal_to<unsigned int> const&,
   eastl::use_first<eastl::pair<unsigned int const, EA::Text::StyleManager::TextStyleEx*> > const&,
   eastl::fixed_hashtable_allocator<10ul, 24ul, 8ul, 8ul, 0ul, true, eastl::allocator> const&) */

void eastl::
     hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
     ::hashtable(ulong param_1,hash *param_2,mod_range_hashing *param_3,default_ranged_hash *param_4
                ,equal_to *param_5,use_first *param_6,fixed_hashtable_allocator *param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  fixed_hashtable_allocator *in_x7;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  prime_rehash_policy::prime_rehash_policy((prime_rehash_policy *)(param_1 + 0x20),1.0);
  fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>::fixed_hashtable_allocator
            ((fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator> *)
             (param_1 + 0x30),in_x7);
  if ((hash *)0x1 < param_2) {
    uVar1 = prime_rehash_policy::GetNextBucketCount
                      ((prime_rehash_policy *)(param_1 + 0x20),(uint)param_2);
    *(ulong *)(param_1 + 0x10) = uVar1 & 0xffffffff;
    uVar2 = DoAllocateBuckets((hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                               *)param_1,uVar1 & 0xffffffff);
    *(undefined8 *)(param_1 + 8) = uVar2;
    return;
  }
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::reset_lose_memory((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                       *)param_1);
  return;
}


/* eastl::hashtable<unsigned int, eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*>, eastl::fixed_hashtable_allocator<10ul, 24ul, 8ul, 8ul,
   0ul, true, eastl::allocator>, eastl::use_first<eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*> >, eastl::equal_to<unsigned int>, eastl::hash<unsigned
   int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
   true, true>::DoRehash(unsigned long) */

void __thiscall
eastl::
hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoRehash(hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  hash_node **pphVar3;
  ulong uVar4;
  hash_node *phVar5;
  ulong uVar6;
  
  lVar2 = DoAllocateBuckets(this,param_1);
  uVar4 = *(ulong *)(this + 0x10);
  pphVar3 = *(hash_node ***)(this + 8);
  if (uVar4 != 0) {
    uVar6 = 0;
    do {
      phVar5 = pphVar3[uVar6];
      if (phVar5 != (hash_node *)0x0) {
        do {
          uVar4 = FUN_0536c528(phVar5,param_1 & 0xffffffff);
          lVar1 = (uVar4 & 0xffffffff) * 8;
          pphVar3[uVar6] = *(hash_node **)(phVar5 + 0x10);
          *(undefined8 *)(phVar5 + 0x10) = *(undefined8 *)(lVar2 + lVar1);
          *(hash_node **)(lVar2 + lVar1) = phVar5;
          pphVar3 = *(hash_node ***)(this + 8);
          phVar5 = pphVar3[uVar6];
        } while (phVar5 != (hash_node *)0x0);
        uVar4 = *(ulong *)(this + 0x10);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  DoFreeBuckets(this,pphVar3,uVar4);
  *(ulong *)(this + 0x10) = param_1;
  *(long *)(this + 8) = lVar2;
  return;
}


/* eastl::hashtable<unsigned int, eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*>, eastl::fixed_hashtable_allocator<10ul, 24ul, 8ul, 8ul,
   0ul, true, eastl::allocator>, eastl::use_first<eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*> >, eastl::equal_to<unsigned int>, eastl::hash<unsigned
   int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
   true, true>::rehash_policy(eastl::prime_rehash_policy const&) */

void __thiscall
eastl::
hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::rehash_policy(hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                *this,prime_rehash_policy *param_1)

{
  ulong uVar1;
  
  *(undefined8 *)(this + 0x20) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 8);
  uVar1 = prime_rehash_policy::GetBucketCount(param_1,*(uint *)(this + 0x18));
  if ((uVar1 & 0xffffffff) <= *(ulong *)(this + 0x10)) {
    return;
  }
  DoRehash(this,uVar1 & 0xffffffff);
  return;
}


/* eastl::hashtable<unsigned int, eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*>, eastl::fixed_hashtable_allocator<10ul, 24ul, 8ul, 8ul,
   0ul, true, eastl::allocator>, eastl::use_first<eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*> >, eastl::equal_to<unsigned int>, eastl::hash<unsigned
   int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
   true, true>::DoAllocateNode(eastl::pair<unsigned int const, EA::Text::StyleManager::TextStyleEx*>
   const&) */

long __thiscall
eastl::
hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoAllocateNode(hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                 *this,pair *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_0536edbc(this + 0x30);
  puVar3 = (undefined8 *)FUN_0536c44c();
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *puVar3 = *(undefined8 *)param_1;
    puVar3[1] = uVar1;
  }
  *(undefined8 *)(lVar2 + 0x10) = 0;
  return lVar2;
}


/* eastl::hashtable<unsigned int, eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*>, eastl::fixed_hashtable_allocator<10ul, 24ul, 8ul, 8ul,
   0ul, true, eastl::allocator>, eastl::use_first<eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*> >, eastl::equal_to<unsigned int>, eastl::hash<unsigned
   int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
   true, true>::insert(eastl::pair<unsigned int const, EA::Text::StyleManager::TextStyleEx*> const&)
    */

void eastl::
     hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
     ::insert(pair *param_1)

{
  FUN_0536ee08();
  return;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoFreeBuckets(eastl::hash_node<eastl::pair<unsigned short const,
   EA::Text::BmpGlyphMetrics>, false>**, unsigned long) */

void __thiscall
eastl::
hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoFreeBuckets(hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                *this,hash_node **param_1,ulong param_2)

{
  if (1 < param_2) {
    FUN_0540ee5c(*(undefined8 *)(this + 0x30),param_1,(param_2 + 1) * 8);
    return;
  }
  return;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoAllocateBuckets(unsigned long) */

void * __thiscall
eastl::
hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoAllocateBuckets(hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                    *this,ulong param_1)

{
  void *__s;
  size_t __n;
  
  __n = (param_1 + 1) * 8 - 8;
  __s = (void *)FUN_0540eed8(*(undefined8 *)(this + 0x30),*(undefined4 *)(this + 0x38));
  memset(__s,0,__n);
  *(undefined8 *)((long)__s + __n) = 0xffffffffffffffff;
  return __s;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::hashtable(unsigned
   long, eastl::hash<unsigned int> const&, eastl::mod_range_hashing const&,
   eastl::default_ranged_hash const&, eastl::equal_to<unsigned short> const&,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics> > const&,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void eastl::
     hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
     ::hashtable(ulong param_1,hash *param_2,mod_range_hashing *param_3,default_ranged_hash *param_4
                ,equal_to *param_5,use_first *param_6,CoreAllocatorAdapter *param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  EAIOEASTLCoreAllocator *in_x7;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  prime_rehash_policy::prime_rehash_policy((prime_rehash_policy *)(param_1 + 0x20),1.0);
  EA::Allocator::EAIOEASTLCoreAllocator::EAIOEASTLCoreAllocator
            ((EAIOEASTLCoreAllocator *)(param_1 + 0x30),in_x7);
  if ((hash *)0x1 < param_2) {
    uVar1 = prime_rehash_policy::GetNextBucketCount
                      ((prime_rehash_policy *)(param_1 + 0x20),(uint)param_2);
    *(ulong *)(param_1 + 0x10) = uVar1 & 0xffffffff;
    uVar2 = DoAllocateBuckets((hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                               *)param_1,uVar1 & 0xffffffff);
    *(undefined8 *)(param_1 + 8) = uVar2;
    return;
  }
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::reset_lose_memory((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                       *)param_1);
  return;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::DoRehash(unsigned
   long) */

void __thiscall
eastl::
hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoRehash(hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  hash_node **pphVar3;
  ulong uVar4;
  hash_node *phVar5;
  ulong uVar6;
  
  lVar2 = DoAllocateBuckets(this,param_1);
  uVar4 = *(ulong *)(this + 0x10);
  pphVar3 = *(hash_node ***)(this + 8);
  if (uVar4 != 0) {
    uVar6 = 0;
    do {
      phVar5 = pphVar3[uVar6];
      if (phVar5 != (hash_node *)0x0) {
        do {
          uVar4 = FUN_0540ef08(phVar5,param_1 & 0xffffffff);
          lVar1 = (uVar4 & 0xffffffff) * 8;
          pphVar3[uVar6] = *(hash_node **)(phVar5 + 0x20);
          *(undefined8 *)(phVar5 + 0x20) = *(undefined8 *)(lVar2 + lVar1);
          *(hash_node **)(lVar2 + lVar1) = phVar5;
          pphVar3 = *(hash_node ***)(this + 8);
          phVar5 = pphVar3[uVar6];
        } while (phVar5 != (hash_node *)0x0);
        uVar4 = *(ulong *)(this + 0x10);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  DoFreeBuckets(this,pphVar3,uVar4);
  *(ulong *)(this + 0x10) = param_1;
  *(long *)(this + 8) = lVar2;
  return;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoFreeNode(eastl::hash_node<eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics>,
   false>*) */

void __thiscall
eastl::
hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoFreeNode(hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *this,hash_node *param_1)

{
  FUN_0540ee5c(*(undefined8 *)(this + 0x30),param_1,0x28);
  return;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoFreeNodes(eastl::hash_node<eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics>,
   false>**, unsigned long) */

void __thiscall
eastl::
hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoFreeNodes(hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
              *this,hash_node **param_1,ulong param_2)

{
  hash_node *phVar1;
  hash_node *phVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      phVar1 = param_1[uVar3];
      while (phVar1 != (hash_node *)0x0) {
        phVar2 = *(hash_node **)(phVar1 + 0x20);
        DoFreeNode(this,phVar1);
        phVar1 = phVar2;
      }
      param_1[uVar3] = (hash_node *)0x0;
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_2);
  }
  return;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::clear() */

void __thiscall
eastl::
hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::clear(hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
        *this)

{
  DoFreeNodes(this,*(hash_node ***)(this + 8),*(ulong *)(this + 0x10));
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::~hashtable() */

void __thiscall
eastl::
hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::~hashtable(hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *this)

{
  clear(this);
  DoFreeBuckets(this,*(hash_node ***)(this + 8),*(ulong *)(this + 0x10));
  return;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoAllocateNode(eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics> const&) */

void * __thiscall
eastl::
hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoAllocateNode(hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                 *this,pair *param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  pvVar2 = allocate_memory<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                     ((CoreAllocatorAdapter *)(this + 0x30),0x28,4,0);
  puVar3 = (undefined8 *)FUN_0540ec74();
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *puVar3 = *(undefined8 *)param_1;
    puVar3[1] = uVar1;
    puVar3[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_1 + 0x18);
  }
  *(undefined8 *)((long)pvVar2 + 0x20) = 0;
  return pvVar2;
}


/* eastl::hashtable<unsigned short, eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics> >,
   eastl::equal_to<unsigned short>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::insert(eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics> const&) */

void eastl::
     hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
     ::insert(pair *param_1)

{
  FUN_05411068();
  return;
}


/* eastl::hashtable<EA::Text::GlyphCache::GlyphInfo, eastl::pair<EA::Text::GlyphCache::GlyphInfo
   const, EA::Text::GlyphTextureInfo>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo const, EA::Text::GlyphTextureInfo>
   >, eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>, EA::Text::GlyphCache::GlyphInfoHash,
   eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoFreeBuckets(eastl::hash_node<eastl::pair<EA::Text::GlyphCache::GlyphInfo const,
   EA::Text::GlyphTextureInfo>, false>**, unsigned long) */

void __thiscall
eastl::
hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoFreeBuckets(hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                *this,hash_node **param_1,ulong param_2)

{
  if (1 < param_2) {
    FUN_0541437c(*(undefined8 *)(this + 0x30),param_1,(param_2 + 1) * 8);
    return;
  }
  return;
}


/* eastl::hashtable<EA::Text::GlyphCache::GlyphInfo, eastl::pair<EA::Text::GlyphCache::GlyphInfo
   const, EA::Text::GlyphTextureInfo>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo const, EA::Text::GlyphTextureInfo>
   >, eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>, EA::Text::GlyphCache::GlyphInfoHash,
   eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoFreeNode(eastl::hash_node<eastl::pair<EA::Text::GlyphCache::GlyphInfo const,
   EA::Text::GlyphTextureInfo>, false>*) */

void __thiscall
eastl::
hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoFreeNode(hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *this,hash_node *param_1)

{
  FUN_0541437c(*(undefined8 *)(this + 0x30),param_1,0x30);
  return;
}


/* eastl::hashtable<EA::Text::GlyphCache::GlyphInfo, eastl::pair<EA::Text::GlyphCache::GlyphInfo
   const, EA::Text::GlyphTextureInfo>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo const, EA::Text::GlyphTextureInfo>
   >, eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>, EA::Text::GlyphCache::GlyphInfoHash,
   eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoFreeNodes(eastl::hash_node<eastl::pair<EA::Text::GlyphCache::GlyphInfo const,
   EA::Text::GlyphTextureInfo>, false>**, unsigned long) */

void __thiscall
eastl::
hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoFreeNodes(hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
              *this,hash_node **param_1,ulong param_2)

{
  hash_node *phVar1;
  hash_node *phVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      phVar1 = param_1[uVar3];
      while (phVar1 != (hash_node *)0x0) {
        phVar2 = *(hash_node **)(phVar1 + 0x28);
        DoFreeNode(this,phVar1);
        phVar1 = phVar2;
      }
      param_1[uVar3] = (hash_node *)0x0;
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_2);
  }
  return;
}


/* eastl::hashtable<EA::Text::GlyphCache::GlyphInfo, eastl::pair<EA::Text::GlyphCache::GlyphInfo
   const, EA::Text::GlyphTextureInfo>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo const, EA::Text::GlyphTextureInfo>
   >, eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>, EA::Text::GlyphCache::GlyphInfoHash,
   eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::clear() */

void __thiscall
eastl::
hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::clear(hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
        *this)

{
  DoFreeNodes(this,*(hash_node ***)(this + 8),*(ulong *)(this + 0x10));
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* eastl::hashtable<EA::Text::GlyphCache::GlyphInfo, eastl::pair<EA::Text::GlyphCache::GlyphInfo
   const, EA::Text::GlyphTextureInfo>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo const, EA::Text::GlyphTextureInfo>
   >, eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>, EA::Text::GlyphCache::GlyphInfoHash,
   eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::~hashtable() */

void __thiscall
eastl::
hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::~hashtable(hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *this)

{
  clear(this);
  DoFreeBuckets(this,*(hash_node ***)(this + 8),*(ulong *)(this + 0x10));
  return;
}


/* eastl::hashtable<EA::Text::GlyphCache::GlyphInfo, eastl::pair<EA::Text::GlyphCache::GlyphInfo
   const, EA::Text::GlyphTextureInfo>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo const, EA::Text::GlyphTextureInfo>
   >, eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>, EA::Text::GlyphCache::GlyphInfoHash,
   eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::erase(eastl::hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo const,
   EA::Text::GlyphTextureInfo>, false, false>) */

hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
* eastl::
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::erase(hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
          *param_1,
         hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
         *param_2,hashtable_iterator *param_3)

{
  hash_node *phVar1;
  hash_node *phVar2;
  hash_node *phVar3;
  hash_node *phVar4;
  
  hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
  ::hashtable_iterator(param_1,param_3);
  hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
  ::operator++(param_1);
  phVar3 = *(hash_node **)param_3;
  phVar2 = (hash_node *)**(long **)(param_3 + 8);
  if (phVar2 == phVar3) {
    **(long **)(param_3 + 8) = *(long *)(phVar3 + 0x28);
  }
  else {
    phVar4 = phVar3;
    phVar1 = *(hash_node **)(phVar2 + 0x28);
    while (phVar3 != phVar1) {
      phVar4 = *(hash_node **)(phVar1 + 0x28);
      phVar2 = phVar1;
      phVar1 = phVar4;
    }
    *(undefined8 *)(phVar2 + 0x28) = *(undefined8 *)(phVar4 + 0x28);
  }
  DoFreeNode(param_2,phVar3);
  *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x18) + -1;
  return param_1;
}


/* eastl::hashtable<EA::Text::GlyphCache::GlyphInfo, eastl::pair<EA::Text::GlyphCache::GlyphInfo
   const, EA::Text::GlyphTextureInfo>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo const, EA::Text::GlyphTextureInfo>
   >, eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>, EA::Text::GlyphCache::GlyphInfoHash,
   eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoAllocateBuckets(unsigned long) */

void * __thiscall
eastl::
hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoAllocateBuckets(hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                    *this,ulong param_1)

{
  void *__s;
  size_t __n;
  
  __n = (param_1 + 1) * 8 - 8;
  __s = (void *)FUN_054143ac(*(undefined8 *)(this + 0x30),*(undefined4 *)(this + 0x38));
  memset(__s,0,__n);
  *(undefined8 *)((long)__s + __n) = 0xffffffffffffffff;
  return __s;
}


/* eastl::hashtable<EA::Text::GlyphCache::GlyphInfo, eastl::pair<EA::Text::GlyphCache::GlyphInfo
   const, EA::Text::GlyphTextureInfo>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo const, EA::Text::GlyphTextureInfo>
   >, eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>, EA::Text::GlyphCache::GlyphInfoHash,
   eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::hashtable(unsigned long, EA::Text::GlyphCache::GlyphInfoHash const&,
   eastl::mod_range_hashing const&, eastl::default_ranged_hash const&,
   eastl::equal_to<EA::Text::GlyphCache::GlyphInfo> const&,
   eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo const, EA::Text::GlyphTextureInfo> >
   const&, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void eastl::
     hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
     ::hashtable(ulong param_1,GlyphInfoHash *param_2,mod_range_hashing *param_3,
                default_ranged_hash *param_4,equal_to *param_5,use_first *param_6,
                CoreAllocatorAdapter *param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  EAIOEASTLCoreAllocator *in_x7;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  prime_rehash_policy::prime_rehash_policy((prime_rehash_policy *)(param_1 + 0x20),1.0);
  EA::Allocator::EAIOEASTLCoreAllocator::EAIOEASTLCoreAllocator
            ((EAIOEASTLCoreAllocator *)(param_1 + 0x30),in_x7);
  if ((GlyphInfoHash *)0x1 < param_2) {
    uVar1 = prime_rehash_policy::GetNextBucketCount
                      ((prime_rehash_policy *)(param_1 + 0x20),(uint)param_2);
    *(ulong *)(param_1 + 0x10) = uVar1 & 0xffffffff;
    uVar2 = DoAllocateBuckets((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                               *)param_1,uVar1 & 0xffffffff);
    *(undefined8 *)(param_1 + 8) = uVar2;
    return;
  }
  reset_lose_memory((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                     *)param_1);
  return;
}


/* eastl::hashtable<EA::Text::GlyphCache::GlyphInfo, eastl::pair<EA::Text::GlyphCache::GlyphInfo
   const, EA::Text::GlyphTextureInfo>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo const, EA::Text::GlyphTextureInfo>
   >, eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>, EA::Text::GlyphCache::GlyphInfoHash,
   eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoRehash(unsigned long) */

void __thiscall
eastl::
hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoRehash(hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  hash_node **pphVar3;
  ulong uVar4;
  hash_node *phVar5;
  ulong uVar6;
  
  lVar2 = DoAllocateBuckets(this,param_1);
  uVar4 = *(ulong *)(this + 0x10);
  pphVar3 = *(hash_node ***)(this + 8);
  if (uVar4 != 0) {
    uVar6 = 0;
    do {
      phVar5 = pphVar3[uVar6];
      if (phVar5 != (hash_node *)0x0) {
        do {
          uVar4 = FUN_054143e0(phVar5,param_1 & 0xffffffff);
          lVar1 = (uVar4 & 0xffffffff) * 8;
          pphVar3[uVar6] = *(hash_node **)(phVar5 + 0x28);
          *(undefined8 *)(phVar5 + 0x28) = *(undefined8 *)(lVar2 + lVar1);
          *(hash_node **)(lVar2 + lVar1) = phVar5;
          pphVar3 = *(hash_node ***)(this + 8);
          phVar5 = pphVar3[uVar6];
        } while (phVar5 != (hash_node *)0x0);
        uVar4 = *(ulong *)(this + 0x10);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  DoFreeBuckets(this,pphVar3,uVar4);
  *(ulong *)(this + 0x10) = param_1;
  *(long *)(this + 8) = lVar2;
  return;
}


/* eastl::hashtable<EA::Text::GlyphCache::GlyphInfo, eastl::pair<EA::Text::GlyphCache::GlyphInfo
   const, EA::Text::GlyphTextureInfo>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo const, EA::Text::GlyphTextureInfo>
   >, eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>, EA::Text::GlyphCache::GlyphInfoHash,
   eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
   true>::DoAllocateNodeFromKey(EA::Text::GlyphCache::GlyphInfo const&) */

void * __thiscall
eastl::
hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
::DoAllocateNodeFromKey
          (hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           *this,GlyphInfo *param_1)

{
  void *pvVar1;
  pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo> *this_00;
  
  pvVar1 = allocate_memory<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                     ((CoreAllocatorAdapter *)(this + 0x30),0x30,8,0);
  this_00 = (pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo> *)FUN_0541424c()
  ;
  if (this_00 != (pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo> *)0x0) {
    pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>::pair(this_00,param_1);
  }
  *(undefined8 *)((long)pvVar1 + 0x28) = 0;
  return pvVar1;
}

