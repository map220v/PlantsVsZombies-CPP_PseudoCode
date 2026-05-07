// Class: eastl::hash_set<char16_t,EA::Text::FontServer::CharHash,eastl::equal_to<char16_t>,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,false>


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::hash_set<char16_t, EA::Text::FontServer::CharHash, eastl::equal_to<char16_t>,
   eastl::fixed_hashtable_allocator<42ul, 16ul, 41ul, 2ul, 0ul, false, eastl::allocator>,
   false>::hash_set(unsigned long, EA::Text::FontServer::CharHash const&, eastl::equal_to<char16_t>
   const&, eastl::fixed_hashtable_allocator<42ul, 16ul, 41ul, 2ul, 0ul, false, eastl::allocator>
   const&) */

void eastl::
     hash_set<char16_t,EA::Text::FontServer::CharHash,eastl::equal_to<char16_t>,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,false>
     ::hash_set(ulong param_1,CharHash *param_2,equal_to *param_3,fixed_hashtable_allocator *param_4
               )

{
  default_ranged_hash adStack_20 [8];
  equal_to aeStack_18 [8];
  fixed_hashtable_allocator afStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
  ::hashtable(param_1,param_2,(mod_range_hashing *)param_3,adStack_20,aeStack_18,(use_self *)param_4
              ,afStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::hash_set<char16_t, EA::Text::FontServer::CharHash, eastl::equal_to<char16_t>,
   eastl::fixed_hashtable_allocator<42ul, 16ul, 41ul, 2ul, 0ul, false, eastl::allocator>,
   false>::~hash_set() */

void __thiscall
eastl::
hash_set<char16_t,EA::Text::FontServer::CharHash,eastl::equal_to<char16_t>,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,false>
::~hash_set(hash_set<char16_t,EA::Text::FontServer::CharHash,eastl::equal_to<char16_t>,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,false>
            *this)

{
  hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
  ::clear((hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
           *)this);
  hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
  ::DoFreeBuckets((hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
                   *)this,*(hash_node ***)(this + 8),*(ulong *)(this + 0x10));
  return;
}

