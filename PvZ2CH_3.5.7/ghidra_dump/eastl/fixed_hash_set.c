// Class: eastl::fixed_hash_set<char16_t,41ul,41ul,false,EA::Text::FontServer::CharHash,eastl::equal_to<char16_t>,false,eastl::allocator>


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_hash_set<char16_t, 41ul, 41ul, false, EA::Text::FontServer::CharHash,
   eastl::equal_to<char16_t>, false,
   eastl::allocator>::fixed_hash_set(EA::Text::FontServer::CharHash const&,
   eastl::equal_to<char16_t> const&) */

void __thiscall
eastl::
fixed_hash_set<char16_t,41ul,41ul,false,EA::Text::FontServer::CharHash,eastl::equal_to<char16_t>,false,eastl::allocator>
::fixed_hash_set(fixed_hash_set<char16_t,41ul,41ul,false,EA::Text::FontServer::CharHash,eastl::equal_to<char16_t>,false,eastl::allocator>
                 *this,CharHash *param_1,equal_to *param_2)

{
  ulong uVar1;
  fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator> afStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = prime_rehash_policy::GetPrevBucketCountOnly(0x29);
  fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>::
  fixed_hashtable_allocator(afStack_30,(void *)0x0,this + 0x58);
  hash_set<char16_t,EA::Text::FontServer::CharHash,eastl::equal_to<char16_t>,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,false>
  ::hash_set((ulong)this,(CharHash *)(uVar1 & 0xffffffff),(equal_to *)param_1,
             (fixed_hashtable_allocator *)param_2);
  rehash_base<eastl::prime_rehash_policy,eastl::hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>>
  ::set_max_load_factor
            ((rehash_base<eastl::prime_rehash_policy,eastl::hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>>
              *)this,10000.0);
  fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>::reset
            ((fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator> *)
             (this + 0x30),this + 0x1a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::fixed_hash_set<char16_t, 41ul, 41ul, false, EA::Text::FontServer::CharHash,
   eastl::equal_to<char16_t>, false, eastl::allocator>::~fixed_hash_set() */

void __thiscall
eastl::
fixed_hash_set<char16_t,41ul,41ul,false,EA::Text::FontServer::CharHash,eastl::equal_to<char16_t>,false,eastl::allocator>
::~fixed_hash_set(fixed_hash_set<char16_t,41ul,41ul,false,EA::Text::FontServer::CharHash,eastl::equal_to<char16_t>,false,eastl::allocator>
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

