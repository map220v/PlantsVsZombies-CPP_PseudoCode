// Class: eastl::fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,4ul,5ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>


/* eastl::fixed_hash_map<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >, 4ul, 5ul, true, eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, false,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::get_overflow_allocator() */

void __thiscall
eastl::
fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,4ul,5ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::get_overflow_allocator
          (fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,4ul,5ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this)

{
  std::
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  ::_M_rightmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)(this + 0x30));
  return;
}


/* eastl::fixed_hash_map<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >, EA::Text::FontServer::Face,
   8ul, 9ul, true, eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, false,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::~fixed_hash_map() */

void __thiscall
eastl::
fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,EA::Text::FontServer::Face,8ul,9ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::~fixed_hash_map(fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,EA::Text::FontServer::Face,8ul,9ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                  *this)

{
  hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::clear((hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           *)this);
  hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::DoFreeBuckets((hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                   *)this,*(hash_node ***)(this + 8),*(ulong *)(this + 0x10));
  return;
}


/* eastl::fixed_hash_map<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >, 4ul, 5ul, true, eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, false,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::~fixed_hash_map() */

void __thiscall
eastl::
fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,4ul,5ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::~fixed_hash_map(fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,4ul,5ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                  *this)

{
  hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::clear((hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           *)this);
  hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::DoFreeBuckets((hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                   *)this,*(hash_node ***)(this + 8),*(ulong *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_hash_map<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >, EA::Text::FontServer::Face,
   8ul, 9ul, true, eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, false,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::fixed_hash_map(EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void __thiscall
eastl::
fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,EA::Text::FontServer::Face,8ul,9ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::fixed_hash_map(fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,EA::Text::FontServer::Face,8ul,9ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 *this,CoreAllocatorAdapter *param_1)

{
  ulong uVar1;
  equal_to aeStack_58 [8];
  fixed_hashtable_allocator afStack_50 [8];
  fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  afStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = prime_rehash_policy::GetPrevBucketCountOnly(9);
  fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::fixed_hashtable_allocator(afStack_48,(void *)0x0,this + 0x70,param_1);
  hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,EA::Text::FontServer::Face,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,false>
  ::hash_map((ulong)this,(string_hash *)(uVar1 & 0xffffffff),aeStack_58,afStack_50);
  rehash_base<eastl::prime_rehash_policy,eastl::hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>>
  ::set_max_load_factor
            ((rehash_base<eastl::prime_rehash_policy,eastl::hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>>
              *)this,10000.0);
  fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::reset((fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *)(this + 0x30),this + 0xc0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_hash_map<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >, 4ul, 5ul, true, eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, false,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::fixed_hash_map(EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void __thiscall
eastl::
fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,4ul,5ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::fixed_hash_map(fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,4ul,5ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 *this,CoreAllocatorAdapter *param_1)

{
  ulong uVar1;
  equal_to aeStack_58 [8];
  fixed_hashtable_allocator afStack_50 [8];
  fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  afStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = prime_rehash_policy::GetPrevBucketCountOnly(5);
  fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::fixed_hashtable_allocator(afStack_48,(void *)0x0,this + 0x70,param_1);
  hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,false>
  ::hash_map((ulong)this,(string_hash *)(uVar1 & 0xffffffff),aeStack_58,afStack_50);
  rehash_base<eastl::prime_rehash_policy,eastl::hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>>
  ::set_max_load_factor
            ((rehash_base<eastl::prime_rehash_policy,eastl::hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>>
              *)this,10000.0);
  fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::reset((fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *)(this + 0x30),this + 0xa0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::fixed_hash_map<unsigned int, EA::Text::StyleManager::TextStyleEx*, 8ul, 9ul, true,
   eastl::hash<unsigned int>, eastl::equal_to<unsigned int>, false,
   eastl::allocator>::~fixed_hash_map() */

void __thiscall
eastl::
fixed_hash_map<unsigned_int,EA::Text::StyleManager::TextStyleEx*,8ul,9ul,true,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_int>,false,eastl::allocator>
::~fixed_hash_map(fixed_hash_map<unsigned_int,EA::Text::StyleManager::TextStyleEx*,8ul,9ul,true,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_int>,false,eastl::allocator>
                  *this)

{
  hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::clear((hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           *)this);
  hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::DoFreeBuckets((hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                   *)this,*(hash_node ***)(this + 8),*(ulong *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_hash_map<unsigned int, EA::Text::StyleManager::TextStyleEx*, 8ul, 9ul, true,
   eastl::hash<unsigned int>, eastl::equal_to<unsigned int>, false,
   eastl::allocator>::fixed_hash_map(eastl::hash<unsigned int> const&, eastl::equal_to<unsigned int>
   const&) */

void __thiscall
eastl::
fixed_hash_map<unsigned_int,EA::Text::StyleManager::TextStyleEx*,8ul,9ul,true,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_int>,false,eastl::allocator>
::fixed_hash_map(fixed_hash_map<unsigned_int,EA::Text::StyleManager::TextStyleEx*,8ul,9ul,true,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_int>,false,eastl::allocator>
                 *this,hash *param_1,equal_to *param_2)

{
  ulong uVar1;
  fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator> afStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = prime_rehash_policy::GetPrevBucketCountOnly(9);
  fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>::fixed_hashtable_allocator
            (afStack_40,(void *)0x0,this + 0x68);
  hash_map<unsigned_int,EA::Text::StyleManager::TextStyleEx*,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_int>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,false>
  ::hash_map((ulong)this,(hash *)(uVar1 & 0xffffffff),(equal_to *)param_1,
             (fixed_hashtable_allocator *)param_2);
  rehash_base<eastl::prime_rehash_policy,eastl::hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>>
  ::set_max_load_factor
            ((rehash_base<eastl::prime_rehash_policy,eastl::hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>>
              *)this,10000.0);
  fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>::reset
            ((fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator> *)(this + 0x30)
             ,this + 0xb8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

