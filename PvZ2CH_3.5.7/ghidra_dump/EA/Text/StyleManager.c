// Class: EA::Text::StyleManager


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::StyleManager::EnumerateStyles(unsigned int*, unsigned int) const */

void __thiscall
EA::Text::StyleManager::EnumerateStyles(StyleManager *this,uint *param_1,uint param_2)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint uVar6;
  AutoFutex aAStack_20 [8];
  undefined1 local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_20,(Futex *)(this + 0x1a8));
  uVar3 = FUN_0536c488(*(undefined8 *)(this + 0x28));
  if (param_1 != (uint *)0x0) {
    uVar6 = uVar3;
    if (param_2 < uVar3) {
      uVar6 = param_2;
    }
    local_18 = FUN_0536dec4(*(undefined8 *)(this + 0x18));
    while( true ) {
      uVar5 = FUN_0536de74(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
      uVar1 = local_18._0_8_;
      cVar2 = FUN_0536c464(local_18._0_8_,uVar5);
      if ((uVar6 == 0) || (cVar2 == '\0')) break;
      uVar6 = uVar6 - 1;
      puVar4 = (uint *)FUN_0536c480(uVar1);
      *param_1 = *puVar4;
      eastl::
      hashtable_iterator<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,true,false>
      ::operator++((hashtable_iterator<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,true,false>
                    *)local_18);
      param_1 = param_1 + 1;
    }
  }
  Thread::AutoFutex::~AutoFutex(aAStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::StyleManager::GetStyle(unsigned int, EA::Text::TextStyle*) const */

void __thiscall EA::Text::StyleManager::GetStyle(StyleManager *this,uint param_1,TextStyle *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  TextStyle *pTVar5;
  uint local_14;
  AutoFutex aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_14 = param_1;
  Thread::AutoFutex::AutoFutex(aAStack_10,(Futex *)(this + 0x1a8));
  uVar2 = FUN_0536e01c(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20),&local_14);
  uVar3 = FUN_0536de74(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
  cVar1 = FUN_0536c474(uVar2,uVar3);
  if (cVar1 == '\0') {
    lVar4 = FUN_0536c480(uVar2);
    pTVar5 = *(TextStyle **)(lVar4 + 8);
    if (param_2 != (TextStyle *)0x0) {
      TextStyle::operator=(param_2,pTVar5);
      pTVar5 = param_2;
    }
  }
  else {
    pTVar5 = (TextStyle *)0x0;
  }
  Thread::AutoFutex::~AutoFutex(aAStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pTVar5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::StyleManager::GetUniqueStyleId() */

void __thiscall EA::Text::StyleManager::GetUniqueStyleId(StyleManager *this)

{
  char cVar1;
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  while( true ) {
    FUN_0536e2d4(local_28,*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20),this + 0x1a0);
    FUN_0536de4c(local_18,*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
    cVar1 = FUN_0536c464(local_28[0],local_18[0]);
    if (cVar1 == '\0') break;
    *(int *)(this + 0x1a0) = *(int *)(this + 0x1a0) + 1;
  }
  *(int *)(this + 0x1a0) = *(int *)(this + 0x1a0) + 1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::StyleManager::~StyleManager() */

void __thiscall EA::Text::StyleManager::~StyleManager(StyleManager *this)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  EntryFindData *pEVar5;
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__StyleManager_06a36b00;
  FUN_0536de00((hashtable_iterator<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,true,false>
                *)local_28,*(undefined8 *)(this + 0x18));
  while( true ) {
    FUN_0536de4c(local_18,*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
    uVar2 = local_28[0];
    cVar3 = FUN_0536c464(local_28[0],local_18[0]);
    if (cVar3 == '\0') break;
    lVar4 = FUN_0536c470(uVar2);
    pEVar5 = *(EntryFindData **)(lVar4 + 8);
    iVar1 = *(int *)(pEVar5 + 700);
    *(int *)(pEVar5 + 700) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      IO::Internal::Free<EA::IO::EntryFindData>(*(ICoreAllocator **)(this + 8),pEVar5);
      lVar4 = FUN_0536c470(local_28[0]);
    }
    *(undefined8 *)(lVar4 + 8) = 0;
    eastl::
    hashtable_iterator<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,true,false>
    ::operator++((hashtable_iterator<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,true,false>
                  *)local_28);
  }
  Thread::Futex::~Futex((Futex *)(this + 0x1a8));
  eastl::
  fixed_hash_map<unsigned_int,EA::Text::StyleManager::TextStyleEx*,8ul,9ul,true,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_int>,false,eastl::allocator>
  ::~fixed_hash_map((fixed_hash_map<unsigned_int,EA::Text::StyleManager::TextStyleEx*,8ul,9ul,true,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_int>,false,eastl::allocator>
                     *)(this + 0x10));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::StyleManager::~StyleManager() */

void __thiscall EA::Text::StyleManager::~StyleManager(StyleManager *this)

{
  ~StyleManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::StyleManager::RemoveStyle(unsigned int) */

void __thiscall EA::Text::StyleManager::RemoveStyle(StyleManager *this,uint param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  EntryFindData *pEVar5;
  undefined1 auStack_50 [28];
  uint local_34;
  AutoFutex aAStack_30 [8];
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_34 = param_1;
  Thread::AutoFutex::AutoFutex(aAStack_30,(Futex *)(this + 0x1a8));
  if (local_34 == 0xffffffff) {
    FUN_0536de00((hashtable_iterator<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,true,false>
                  *)local_28,*(undefined8 *)(this + 0x18));
    while( true ) {
      FUN_0536de4c(local_18,*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
      uVar2 = local_28[0];
      cVar3 = FUN_0536c464(local_28[0],local_18[0]);
      if (cVar3 == '\0') break;
      lVar4 = FUN_0536c484(uVar2);
      pEVar5 = *(EntryFindData **)(lVar4 + 8);
      iVar1 = *(int *)(pEVar5 + 700);
      *(int *)(pEVar5 + 700) = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        IO::Internal::Free<EA::IO::EntryFindData>(*(ICoreAllocator **)(this + 8),pEVar5);
      }
      eastl::
      hashtable_iterator<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,true,false>
      ::operator++((hashtable_iterator<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,true,false>
                    *)local_28);
    }
    eastl::
    hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
    ::clear((hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *)(this + 0x10),true);
  }
  else {
    FUN_0536e2d4((hashtable_iterator *)local_28,*(undefined8 *)(this + 0x18),
                 *(undefined8 *)(this + 0x20),&local_34);
    FUN_0536de4c((hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
                  *)local_18,*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
    cVar3 = FUN_0536c464(local_28[0],local_18[0]);
    if (cVar3 != '\0') {
      lVar4 = FUN_0536c484(local_28[0]);
      pEVar5 = *(EntryFindData **)(lVar4 + 8);
      iVar1 = *(int *)(pEVar5 + 700);
      *(int *)(pEVar5 + 700) = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        IO::Internal::Free<EA::IO::EntryFindData>(*(ICoreAllocator **)(this + 8),pEVar5);
      }
      eastl::
      hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
      ::hashtable_iterator
                ((hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
                  *)local_18,(hashtable_iterator *)local_28);
      eastl::
      hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
      ::erase(auStack_50,this + 0x10,
              (hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
               *)local_18);
    }
  }
  Thread::AutoFutex::~AutoFutex(aAStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::StyleManager::Shutdown() */

void __thiscall EA::Text::StyleManager::Shutdown(StyleManager *this)

{
  RemoveStyle(this,0xffffffff);
  *(undefined4 *)(this + 0x1a0) = 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::StyleManager::StyleManager(EA::Allocator::ICoreAllocator*) */

void __thiscall EA::Text::StyleManager::StyleManager(StyleManager *this,ICoreAllocator *param_1)

{
  hash ahStack_18 [8];
  equal_to aeStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__StyleManager_06a36b00;
  if (param_1 == (ICoreAllocator *)0x0) {
    param_1 = (ICoreAllocator *)GetAllocator();
  }
  *(ICoreAllocator **)(this + 8) = param_1;
  eastl::
  fixed_hash_map<unsigned_int,EA::Text::StyleManager::TextStyleEx*,8ul,9ul,true,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_int>,false,eastl::allocator>
  ::fixed_hash_map((fixed_hash_map<unsigned_int,EA::Text::StyleManager::TextStyleEx*,8ul,9ul,true,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_int>,false,eastl::allocator>
                    *)(this + 0x10),ahStack_18,aeStack_10);
  *(undefined4 *)(this + 0x1a0) = 1;
  Thread::Futex::Futex((Futex *)(this + 0x1a8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::StyleManager::AddStyle(unsigned int, EA::Text::TextStyle const&) */

void __thiscall EA::Text::StyleManager::AddStyle(StyleManager *this,uint param_1,TextStyle *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  uint *puVar6;
  TextStyleEx *this_00;
  EntryFindData *pEVar7;
  TextStyle *pTVar8;
  uint local_54 [3];
  AutoFutex aAStack_48 [8];
  TextStyleEx *local_40;
  undefined8 local_38 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_54[0] = param_1;
  Thread::AutoFutex::AutoFutex(aAStack_48,(Futex *)(this + 0x1a8));
  FUN_0536de4c((hashtable_iterator *)local_38,*(undefined8 *)(this + 0x18),
               *(undefined8 *)(this + 0x20));
  eastl::
  hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
  ::hashtable_iterator
            ((hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
              *)&local_28,(hashtable_iterator *)local_38);
  local_40 = (TextStyleEx *)0x0;
  if (local_54[0] != 0xfffffffe) {
    FUN_0536e2d4(&local_18,*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20),local_54);
    local_28 = local_18;
    uStack_20 = uStack_10;
  }
  uVar3 = local_28;
  cVar4 = FUN_0536c474(local_28,local_38[0]);
  if (cVar4 == '\0') {
    lVar5 = FUN_0536c470(uVar3);
    cVar4 = Text::operator==(*(TextStyle **)(lVar5 + 8),param_2);
    pTVar8 = (TextStyle *)local_40;
    if (cVar4 != '\0') goto LAB_0536f0a8;
  }
  FUN_0536de00((hashtable_iterator<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,true,false>
                *)&local_18,*(undefined8 *)(this + 0x18));
  while (uVar3 = local_18, cVar4 = FUN_0536c464(local_18,local_38[0]),
        pTVar8 = (TextStyle *)local_40, cVar4 != '\0') {
    lVar5 = FUN_0536c484(uVar3);
    pTVar8 = *(TextStyle **)(lVar5 + 8);
    cVar4 = Text::operator==(pTVar8,param_2);
    if (cVar4 != '\0') {
      local_40 = (TextStyleEx *)pTVar8;
      if (local_54[0] == 0xfffffffe) {
        puVar6 = (uint *)FUN_0536c484(local_18);
        local_54[0] = *puVar6;
      }
      break;
    }
    eastl::
    hashtable_iterator<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,true,false>
    ::operator++((hashtable_iterator<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,true,false>
                  *)&local_18);
  }
LAB_0536f0a8:
  if (pTVar8 == (TextStyle *)0x0) {
    this_00 = (TextStyleEx *)FUN_0536c54c(*(undefined8 *)(this + 8));
    TextStyleEx::TextStyleEx(this_00,param_2);
    local_40 = this_00;
  }
  uVar3 = local_28;
  cVar4 = FUN_0536c474(local_28,local_38[0]);
  if (cVar4 == '\0') {
    lVar5 = FUN_0536c470(uVar3);
    pEVar7 = *(EntryFindData **)(lVar5 + 8);
    *(int *)(local_40 + 700) = *(int *)(local_40 + 700) + 1;
    *(TextStyleEx **)(lVar5 + 8) = local_40;
    iVar1 = *(int *)(pEVar7 + 700);
    *(int *)(pEVar7 + 700) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      IO::Internal::Free<EA::IO::EntryFindData>(*(ICoreAllocator **)(this + 8),pEVar7);
    }
  }
  else {
    if (local_54[0] == 0xfffffffe) {
      local_54[0] = GetUniqueStyleId(this);
    }
    *(int *)(local_40 + 700) = *(int *)(local_40 + 700) + 1;
    eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>::pair
              ((pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*> *)&local_18,local_54,
               &local_40);
    eastl::
    hashtable<unsigned_int,eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,eastl::fixed_hashtable_allocator<10ul,24ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_first<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>>,eastl::equal_to<unsigned_int>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
    ::insert((pair *)(this + 0x10));
  }
  uVar2 = local_54[0];
  Thread::AutoFutex::~AutoFutex(aAStack_48);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

