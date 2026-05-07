// Class: eastl::rehash_base<eastl::prime_rehash_policy,eastl::hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>>


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::rehash_base<eastl::prime_rehash_policy, eastl::hashtable<char16_t, char16_t,
   eastl::fixed_hashtable_allocator<42ul, 16ul, 41ul, 2ul, 0ul, false, eastl::allocator>,
   eastl::use_self<char16_t>, eastl::equal_to<char16_t>, EA::Text::FontServer::CharHash,
   eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, false,
   true> >::set_max_load_factor(float) */

void __thiscall
eastl::
rehash_base<eastl::prime_rehash_policy,eastl::hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>>
::set_max_load_factor
          (rehash_base<eastl::prime_rehash_policy,eastl::hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>>
           *this,float param_1)

{
  prime_rehash_policy apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  prime_rehash_policy::prime_rehash_policy(apStack_18,param_1);
  hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
  ::rehash_policy((hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
                   *)this,apStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::rehash_base<eastl::prime_rehash_policy, eastl::hashtable<eastl::basic_string<char16_t,
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
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>
   >::set_max_load_factor(float) */

void __thiscall
eastl::
rehash_base<eastl::prime_rehash_policy,eastl::hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>>
::set_max_load_factor
          (rehash_base<eastl::prime_rehash_policy,eastl::hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>>
           *this,float param_1)

{
  prime_rehash_policy apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  prime_rehash_policy::prime_rehash_policy(apStack_18,param_1);
  hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::rehash_policy((hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                   *)this,apStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::rehash_base<eastl::prime_rehash_policy, eastl::hashtable<eastl::basic_string<char16_t,
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
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>
   >::set_max_load_factor(float) */

void __thiscall
eastl::
rehash_base<eastl::prime_rehash_policy,eastl::hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>>
::set_max_load_factor
          (rehash_base<eastl::prime_rehash_policy,eastl::hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>>
           *this,float param_1)

{
  prime_rehash_policy apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  prime_rehash_policy::prime_rehash_policy(apStack_18,param_1);
  hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::rehash_policy((hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                   *)this,apStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::rehash_base<eastl::prime_rehash_policy, eastl::hashtable<unsigned int,
   eastl::pair<unsigned int const, EA::Text::StyleManager::TextStyleEx*>,
   eastl::fixed_hashtable_allocator<10ul, 24ul, 8ul, 8ul, 0ul, true, eastl::allocator>,
   eastl::use_first<eastl::pair<unsigned int const, EA::Text::StyleManager::TextStyleEx*> >,
   eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>
   >::set_max_load_factor(float) */

void __thiscall
eastl::
rehash_base<eastl::prime_rehash_policy,eastl::hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>>
::set_max_load_factor
          (rehash_base<eastl::prime_rehash_policy,eastl::hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>>
           *this,float param_1)

{
  prime_rehash_policy apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  prime_rehash_policy::prime_rehash_policy(apStack_18,param_1);
  hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::rehash_policy((hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                   *)this,apStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

