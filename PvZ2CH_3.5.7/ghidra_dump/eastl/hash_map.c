// Class: eastl::hash_map<std::string,unsigned_int,eastl::string_hash<std::string>,eastl::equal_to<std::string>,eastl::allocator,false>


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::hash_map<std::string, unsigned int, eastl::string_hash<std::string >,
   eastl::equal_to<std::string >, eastl::allocator, false>::hash_map(eastl::allocator const&) */

void eastl::
     hash_map<std::string,unsigned_int,eastl::string_hash<std::string>,eastl::equal_to<std::string>,eastl::allocator,false>
     ::hash_map(allocator *param_1)

{
  mod_range_hashing amStack_30 [8];
  default_ranged_hash adStack_28 [8];
  equal_to aeStack_20 [8];
  use_first auStack_18 [8];
  allocator aaStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  hashtable<std::string,eastl::pair<std::string_const,unsigned_int>,eastl::allocator,eastl::use_first<eastl::pair<std::string_const,unsigned_int>>,eastl::equal_to<std::string>,eastl::string_hash<std::string>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::hashtable((ulong)param_1,(string_hash *)0x0,amStack_30,adStack_28,aeStack_20,auStack_18,
              aaStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::hash_map<std::wstring, unsigned int, eastl::string_hash<std::wstring >,
   eastl::equal_to<std::wstring >, eastl::allocator, false>::hash_map(eastl::allocator const&) */

void eastl::
     hash_map<std::wstring,unsigned_int,eastl::string_hash<std::wstring>,eastl::equal_to<std::wstring>,eastl::allocator,false>
     ::hash_map(allocator *param_1)

{
  mod_range_hashing amStack_30 [8];
  default_ranged_hash adStack_28 [8];
  equal_to aeStack_20 [8];
  use_first auStack_18 [8];
  allocator aaStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  hashtable<std::wstring,eastl::pair<std::wstring_const,unsigned_int>,eastl::allocator,eastl::use_first<eastl::pair<std::wstring_const,unsigned_int>>,eastl::equal_to<std::wstring>,eastl::string_hash<std::wstring>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::hashtable((ulong)param_1,(string_hash *)0x0,amStack_30,adStack_28,aeStack_20,auStack_18,
              aaStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::hash_map<std::string, unsigned int, eastl::string_hash<std::string >,
   eastl::equal_to<std::string >, eastl::allocator, false>::~hash_map() */

void __thiscall
eastl::
hash_map<std::string,unsigned_int,eastl::string_hash<std::string>,eastl::equal_to<std::string>,eastl::allocator,false>
::~hash_map(hash_map<std::string,unsigned_int,eastl::string_hash<std::string>,eastl::equal_to<std::string>,eastl::allocator,false>
            *this)

{
  hashtable<std::string,eastl::pair<std::string_const,unsigned_int>,eastl::allocator,eastl::use_first<eastl::pair<std::string_const,unsigned_int>>,eastl::equal_to<std::string>,eastl::string_hash<std::string>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::clear((hashtable<std::string,eastl::pair<std::string_const,unsigned_int>,eastl::allocator,eastl::use_first<eastl::pair<std::string_const,unsigned_int>>,eastl::equal_to<std::string>,eastl::string_hash<std::string>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           *)this);
  FUN_03f096b8(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  return;
}


/* eastl::hash_map<std::wstring, unsigned int, eastl::string_hash<std::wstring >,
   eastl::equal_to<std::wstring >, eastl::allocator, false>::~hash_map() */

void __thiscall
eastl::
hash_map<std::wstring,unsigned_int,eastl::string_hash<std::wstring>,eastl::equal_to<std::wstring>,eastl::allocator,false>
::~hash_map(hash_map<std::wstring,unsigned_int,eastl::string_hash<std::wstring>,eastl::equal_to<std::wstring>,eastl::allocator,false>
            *this)

{
  hashtable<std::wstring,eastl::pair<std::wstring_const,unsigned_int>,eastl::allocator,eastl::use_first<eastl::pair<std::wstring_const,unsigned_int>>,eastl::equal_to<std::wstring>,eastl::string_hash<std::wstring>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::clear((hashtable<std::wstring,eastl::pair<std::wstring_const,unsigned_int>,eastl::allocator,eastl::use_first<eastl::pair<std::wstring_const,unsigned_int>>,eastl::equal_to<std::wstring>,eastl::string_hash<std::wstring>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           *)this);
  FUN_03f096c8(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::hash_map<std::string, unsigned int, eastl::string_hash<std::string >,
   eastl::equal_to<std::string >, eastl::allocator, false>::operator[](std::string const&) */

void eastl::
     hash_map<std::string,unsigned_int,eastl::string_hash<std::string>,eastl::equal_to<std::string>,eastl::allocator,false>
     ::operator[](string *param_1)

{
  long lVar1;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_051cb364(local_20);
  lVar1 = FUN_051c69dc(local_20[0]);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1 + 8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::hash_map<std::wstring, unsigned int, eastl::string_hash<std::wstring >,
   eastl::equal_to<std::wstring >, eastl::allocator, false>::operator[](std::wstring const&) */

void eastl::
     hash_map<std::wstring,unsigned_int,eastl::string_hash<std::wstring>,eastl::equal_to<std::wstring>,eastl::allocator,false>
     ::operator[](wstring *param_1)

{
  long lVar1;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_051cb64c(local_20);
  lVar1 = FUN_051c69e4(local_20[0]);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1 + 8);
}


/* eastl::hash_map<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >, EA::Text::FontServer::Face,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::fixed_hashtable_allocator<10ul, 1992ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >, false>::~hash_map() */

void __thiscall
eastl::
hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,EA::Text::FontServer::Face,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,false>
::~hash_map(hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,EA::Text::FontServer::Face,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,false>
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


/* eastl::hash_map<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >, eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::fixed_hashtable_allocator<6ul, 88ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >, false>::~hash_map() */

void __thiscall
eastl::
hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,false>
::~hash_map(hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,false>
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
/* eastl::hash_map<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >, EA::Text::FontServer::Face,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::fixed_hashtable_allocator<10ul, 1992ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >, false>::hash_map(unsigned
   long, eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > > const&,
   eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > > const&,
   eastl::fixed_hashtable_allocator<10ul, 1992ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

void eastl::
     hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,EA::Text::FontServer::Face,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,false>
     ::hash_map(ulong param_1,string_hash *param_2,equal_to *param_3,
               fixed_hashtable_allocator *param_4)

{
  default_ranged_hash adStack_20 [8];
  equal_to aeStack_18 [8];
  fixed_hashtable_allocator afStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::hashtable(param_1,param_2,(mod_range_hashing *)param_3,adStack_20,aeStack_18,
              (use_first *)param_4,afStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::hash_map<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >, eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::fixed_hashtable_allocator<6ul, 88ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >, false>::hash_map(unsigned
   long, eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > > const&,
   eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > > const&,
   eastl::fixed_hashtable_allocator<6ul, 88ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

void eastl::
     hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,false>
     ::hash_map(ulong param_1,string_hash *param_2,equal_to *param_3,
               fixed_hashtable_allocator *param_4)

{
  default_ranged_hash adStack_20 [8];
  equal_to aeStack_18 [8];
  fixed_hashtable_allocator afStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::hashtable(param_1,param_2,(mod_range_hashing *)param_3,adStack_20,aeStack_18,
              (use_first *)param_4,afStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::hash_map<unsigned short, EA::Text::GlyphMetrics, eastl::hash<unsigned int>,
   eastl::equal_to<unsigned short>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   false>::hash_map(EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void eastl::
     hash_map<unsigned_short,EA::Text::GlyphMetrics,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_short>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
     ::hash_map(CoreAllocatorAdapter *param_1)

{
  mod_range_hashing amStack_30 [8];
  default_ranged_hash adStack_28 [8];
  equal_to aeStack_20 [8];
  use_first auStack_18 [8];
  CoreAllocatorAdapter aCStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::hashtable((ulong)param_1,(hash *)0x0,amStack_30,adStack_28,aeStack_20,auStack_18,aCStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::hash_map<unsigned short, EA::Text::GlyphMetrics, eastl::hash<unsigned int>,
   eastl::equal_to<unsigned short>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>, false>::~hash_map() */

void __thiscall
eastl::
hash_map<unsigned_short,EA::Text::GlyphMetrics,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_short>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
::~hash_map(hash_map<unsigned_short,EA::Text::GlyphMetrics,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_short>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
            *this)

{
  hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::clear((hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           *)this);
  hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::DoFreeBuckets((hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                   *)this,*(hash_node ***)(this + 8),*(ulong *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::hash_map<unsigned short, EA::Text::GlyphMetrics, eastl::hash<unsigned int>,
   eastl::equal_to<unsigned short>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>, false>::operator[](unsigned
   short const&) */

void eastl::
     hash_map<unsigned_short,EA::Text::GlyphMetrics,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_short>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
     ::operator[](ushort *param_1)

{
  long lVar1;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_053676a8(local_20);
  lVar1 = FUN_05365088(local_20[0]);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1 + 4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::hash_map<unsigned short, EA::Text::PolygonGlyphPtr, eastl::hash<unsigned int>,
   eastl::equal_to<unsigned short>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   false>::hash_map(EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void eastl::
     hash_map<unsigned_short,EA::Text::PolygonGlyphPtr,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_short>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
     ::hash_map(CoreAllocatorAdapter *param_1)

{
  mod_range_hashing amStack_30 [8];
  default_ranged_hash adStack_28 [8];
  equal_to aeStack_20 [8];
  use_first auStack_18 [8];
  CoreAllocatorAdapter aCStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::hashtable((ulong)param_1,(hash *)0x0,amStack_30,adStack_28,aeStack_20,auStack_18,aCStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::hash_map<unsigned short, EA::Text::PolygonGlyphPtr, eastl::hash<unsigned int>,
   eastl::equal_to<unsigned short>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>, false>::~hash_map() */

void __thiscall
eastl::
hash_map<unsigned_short,EA::Text::PolygonGlyphPtr,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_short>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
::~hash_map(hash_map<unsigned_short,EA::Text::PolygonGlyphPtr,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_short>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
            *this)

{
  hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::clear((hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           *)this);
  hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::DoFreeBuckets((hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                   *)this,*(hash_node ***)(this + 8),*(ulong *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::hash_map<unsigned short, EA::Text::PolygonGlyphPtr, eastl::hash<unsigned int>,
   eastl::equal_to<unsigned short>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>, false>::operator[](unsigned
   short const&) */

void eastl::
     hash_map<unsigned_short,EA::Text::PolygonGlyphPtr,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_short>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
     ::operator[](ushort *param_1)

{
  long lVar1;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_0536a9e4(local_20);
  lVar1 = FUN_053685d0(local_20[0]);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1 + 8);
}


/* eastl::hash_map<unsigned int, EA::Text::StyleManager::TextStyleEx*, eastl::hash<unsigned int>,
   eastl::equal_to<unsigned int>, eastl::fixed_hashtable_allocator<10ul, 24ul, 8ul, 8ul, 0ul, true,
   eastl::allocator>, false>::~hash_map() */

void __thiscall
eastl::
hash_map<unsigned_int,EA::Text::StyleManager::TextStyleEx*,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_int>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,false>
::~hash_map(hash_map<unsigned_int,EA::Text::StyleManager::TextStyleEx*,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_int>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,false>
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
/* eastl::hash_map<unsigned int, EA::Text::StyleManager::TextStyleEx*, eastl::hash<unsigned int>,
   eastl::equal_to<unsigned int>, eastl::fixed_hashtable_allocator<10ul, 24ul, 8ul, 8ul, 0ul, true,
   eastl::allocator>, false>::hash_map(unsigned long, eastl::hash<unsigned int> const&,
   eastl::equal_to<unsigned int> const&, eastl::fixed_hashtable_allocator<10ul, 24ul, 8ul, 8ul, 0ul,
   true, eastl::allocator> const&) */

void eastl::
     hash_map<unsigned_int,EA::Text::StyleManager::TextStyleEx*,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_int>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,false>
     ::hash_map(ulong param_1,hash *param_2,equal_to *param_3,fixed_hashtable_allocator *param_4)

{
  default_ranged_hash adStack_20 [8];
  equal_to aeStack_18 [8];
  fixed_hashtable_allocator afStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::hashtable(param_1,param_2,(mod_range_hashing *)param_3,adStack_20,aeStack_18,
              (use_first *)param_4,afStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::hash_map<unsigned short, EA::Text::BmpGlyphMetrics, eastl::hash<unsigned int>,
   eastl::equal_to<unsigned short>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   false>::hash_map(EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void eastl::
     hash_map<unsigned_short,EA::Text::BmpGlyphMetrics,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_short>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
     ::hash_map(CoreAllocatorAdapter *param_1)

{
  mod_range_hashing amStack_30 [8];
  default_ranged_hash adStack_28 [8];
  equal_to aeStack_20 [8];
  use_first auStack_18 [8];
  CoreAllocatorAdapter aCStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::hashtable((ulong)param_1,(hash *)0x0,amStack_30,adStack_28,aeStack_20,auStack_18,aCStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::hash_map<unsigned short, EA::Text::BmpGlyphMetrics, eastl::hash<unsigned int>,
   eastl::equal_to<unsigned short>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>, false>::~hash_map() */

void __thiscall
eastl::
hash_map<unsigned_short,EA::Text::BmpGlyphMetrics,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_short>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
::~hash_map(hash_map<unsigned_short,EA::Text::BmpGlyphMetrics,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_short>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
            *this)

{
  hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::clear((hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           *)this);
  hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::DoFreeBuckets((hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                   *)this,*(hash_node ***)(this + 8),*(ulong *)(this + 0x10));
  return;
}


/* eastl::hash_map<EA::Text::GlyphCache::GlyphInfo, EA::Text::GlyphTextureInfo,
   EA::Text::GlyphCache::GlyphInfoHash, eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>, false>::~hash_map() */

void __thiscall
eastl::
hash_map<EA::Text::GlyphCache::GlyphInfo,EA::Text::GlyphTextureInfo,EA::Text::GlyphCache::GlyphInfoHash,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
::~hash_map(hash_map<EA::Text::GlyphCache::GlyphInfo,EA::Text::GlyphTextureInfo,EA::Text::GlyphCache::GlyphInfoHash,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
            *this)

{
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::clear((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           *)this);
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::DoFreeBuckets((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                   *)this,*(hash_node ***)(this + 8),*(ulong *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::hash_map<EA::Text::GlyphCache::GlyphInfo, EA::Text::GlyphTextureInfo,
   EA::Text::GlyphCache::GlyphInfoHash, eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   false>::hash_map(EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void eastl::
     hash_map<EA::Text::GlyphCache::GlyphInfo,EA::Text::GlyphTextureInfo,EA::Text::GlyphCache::GlyphInfoHash,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
     ::hash_map(CoreAllocatorAdapter *param_1)

{
  mod_range_hashing amStack_30 [8];
  default_ranged_hash adStack_28 [8];
  equal_to aeStack_20 [8];
  use_first auStack_18 [8];
  CoreAllocatorAdapter aCStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::hashtable((ulong)param_1,(GlyphInfoHash *)0x0,amStack_30,adStack_28,aeStack_20,auStack_18,
              aCStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::hash_map<EA::Text::GlyphCache::GlyphInfo, EA::Text::GlyphTextureInfo,
   EA::Text::GlyphCache::GlyphInfoHash, eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   false>::operator[](EA::Text::GlyphCache::GlyphInfo const&) */

void eastl::
     hash_map<EA::Text::GlyphCache::GlyphInfo,EA::Text::GlyphTextureInfo,EA::Text::GlyphCache::GlyphInfoHash,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
     ::operator[](GlyphInfo *param_1)

{
  long lVar1;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05416cd4(local_20);
  lVar1 = FUN_0541435c(local_20[0]);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1 + 0x10);
}

