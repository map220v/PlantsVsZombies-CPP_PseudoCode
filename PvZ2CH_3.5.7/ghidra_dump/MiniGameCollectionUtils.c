// Class: MiniGameCollectionUtils


/* MiniGameCollectionUtils::IsPlayingMiniGameCollectionLevel() */

undefined1 MiniGameCollectionUtils::IsPlayingMiniGameCollectionLevel(void)

{
  bool bVar1;
  long lVar2;
  RtObject *this;
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar2 != 0)) {
    lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(lVar2 + 0x70));
    if (bVar1) {
      lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar2 + 0x70));
      bVar1 = Sexy::RtObject::IsA<MiniGameCollectionOutroProperties>(this);
      if (bVar1) {
        return 1;
      }
    }
  }
  return 0;
}


/* MiniGameCollectionUtils::GetMiniGameCollectionType() */

void MiniGameCollectionUtils::GetMiniGameCollectionType(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
  FUN_038b3908(*(undefined4 *)(lVar1 + 0xd0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionUtils::GetTotalScore() */

void MiniGameCollectionUtils::GetTotalScore(void)

{
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this;
  MiniGameCollectionMainEntryData *pMVar1;
  MiniGameCollectionMainEntryData aMStack_70 [100];
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
          *)Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
  pMVar1 = (MiniGameCollectionMainEntryData *)
           eastl::
           hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           ::get_allocator(this);
  MiniGameCollectionMainEntryData::MiniGameCollectionMainEntryData(aMStack_70,pMVar1);
  MiniGameCollectionMainEntryData::~MiniGameCollectionMainEntryData(aMStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_c);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionUtils::GetTotalToken() */

void MiniGameCollectionUtils::GetTotalToken(void)

{
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this;
  MiniGameCollectionMainEntryData *pMVar1;
  MiniGameCollectionMainEntryData aMStack_70 [96];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
          *)Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
  pMVar1 = (MiniGameCollectionMainEntryData *)
           eastl::
           hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           ::get_allocator(this);
  MiniGameCollectionMainEntryData::MiniGameCollectionMainEntryData(aMStack_70,pMVar1);
  MiniGameCollectionMainEntryData::~MiniGameCollectionMainEntryData(aMStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionUtils::GetIndexByMiniGameType(MiniGameType) */

void MiniGameCollectionUtils::GetIndexByMiniGameType(int param_1)

{
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this;
  MiniGameCollectionMainEntryData *pMVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  MiniGameCollectionMainEntryData aMStack_70 [24];
  undefined8 local_58;
  undefined8 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
          *)Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
  pMVar1 = (MiniGameCollectionMainEntryData *)
           eastl::
           hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           ::get_allocator(this);
  MiniGameCollectionMainEntryData::MiniGameCollectionMainEntryData(aMStack_70,pMVar1);
  uVar2 = FUN_038b3ecc(local_58,local_50);
  uVar4 = 0;
  do {
    uVar5 = uVar4 & 0xffffffff;
    if (uVar4 == uVar2) {
      uVar5 = 0xffffffff;
      break;
    }
    piVar3 = (int *)FUN_038b3e88(local_58,uVar4);
    uVar4 = uVar4 + 1;
  } while (*piVar3 != param_1);
  MiniGameCollectionMainEntryData::~MiniGameCollectionMainEntryData(aMStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionUtils::IsLevelUnlock(MiniGameType, bool) */

void MiniGameCollectionUtils::IsLevelUnlock(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this;
  MiniGameCollectionMainEntryData *pMVar2;
  MiniGameData *pMVar3;
  long lVar4;
  MiniGameData aMStack_90 [8];
  undefined8 local_88;
  MiniGameCollectionMainEntryData aMStack_70 [24];
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
          *)Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
  pMVar2 = (MiniGameCollectionMainEntryData *)
           eastl::
           hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           ::get_allocator(this);
  MiniGameCollectionMainEntryData::MiniGameCollectionMainEntryData(aMStack_70,pMVar2);
  iVar1 = GetIndexByMiniGameType(param_1);
  pMVar3 = (MiniGameData *)FUN_038b3e88(local_58,(long)iVar1);
  MiniGameData::MiniGameData(aMStack_90,pMVar3);
  lVar4 = FUN_038b3e90(local_88,param_2);
  iVar1 = *(int *)(lVar4 + 8);
  MiniGameData::~MiniGameData(aMStack_90);
  MiniGameCollectionMainEntryData::~MiniGameCollectionMainEntryData(aMStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionUtils::GetLevelScore(MiniGameType) */

void MiniGameCollectionUtils::GetLevelScore(undefined4 param_1)

{
  long lVar1;
  int iVar2;
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this;
  MiniGameCollectionMainEntryData *pMVar3;
  MiniGameData *pMVar4;
  int *piVar5;
  long lVar6;
  int iVar7;
  MiniGameData aMStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  MiniGameCollectionMainEntryData aMStack_70 [24];
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
          *)Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
  pMVar3 = (MiniGameCollectionMainEntryData *)
           eastl::
           hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           ::get_allocator(this);
  MiniGameCollectionMainEntryData::MiniGameCollectionMainEntryData(aMStack_70,pMVar3);
  iVar2 = GetIndexByMiniGameType(param_1);
  pMVar4 = (MiniGameData *)FUN_038b3e88(local_58,(long)iVar2);
  MiniGameData::MiniGameData(aMStack_90,pMVar4);
  iVar2 = FUN_038b3e9c(local_88,local_80);
  if (iVar2 < 1) {
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    lVar6 = 0;
    do {
      lVar1 = lVar6 + 1;
      piVar5 = (int *)FUN_038b3e90(local_88,lVar6);
      iVar7 = iVar7 + *piVar5;
      lVar6 = lVar1;
    } while ((int)lVar1 < iVar2);
  }
  MiniGameData::~MiniGameData(aMStack_90);
  MiniGameCollectionMainEntryData::~MiniGameCollectionMainEntryData(aMStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar7);
}


/* MiniGameCollectionUtils::CalcTimeScore(MiniGameType, bool, float) */

void MiniGameCollectionUtils::CalcTimeScore
               (MiniGameCollectionNetworkMgr *param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  uVar1 = Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
  MiniGameCollectionNetworkMgr::GetLevelTimeScore(param_1,uVar1,param_2,param_3);
  return;
}

