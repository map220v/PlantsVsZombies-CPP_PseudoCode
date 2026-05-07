// Class: RichmanTileEvent_Reward


/* RichmanTileEvent_Reward::ExecuteEventPost() */

void RichmanTileEvent_Reward::ExecuteEventPost(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* RichmanTileEvent_Reward::PostEventMessage() */

void RichmanTileEvent_Reward::PostEventMessage(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* RichmanTileEvent_Reward::~RichmanTileEvent_Reward() */

void __thiscall RichmanTileEvent_Reward::~RichmanTileEvent_Reward(RichmanTileEvent_Reward *this)

{
  *(undefined ***)this = &PTR__RichmanTileEvent_Reward_06987f00;
  RichmanTileEventBase::~RichmanTileEventBase((RichmanTileEventBase *)this);
  return;
}


/* RichmanTileEvent_Reward::~RichmanTileEvent_Reward() */

void __thiscall RichmanTileEvent_Reward::~RichmanTileEvent_Reward(RichmanTileEvent_Reward *this)

{
  ~RichmanTileEvent_Reward(this);
  AK::FreeHook(this);
  return;
}


/* RichmanTileEvent_Reward::RichmanTileEvent_Reward(RichmanTileEventConfig&) */

void __thiscall
RichmanTileEvent_Reward::RichmanTileEvent_Reward
          (RichmanTileEvent_Reward *this,RichmanTileEventConfig *param_1)

{
  RichmanTileEventBase::RichmanTileEventBase((RichmanTileEventBase *)this,param_1);
  *(undefined ***)this = &PTR__RichmanTileEvent_Reward_06987f00;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichmanTileEvent_Reward::ExecuteEvent() */

void __thiscall RichmanTileEvent_Reward::ExecuteEvent(RichmanTileEvent_Reward *this)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  CommonUIManager *this_00;
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this_01;
  vector *pvVar6;
  ulong uVar7;
  char *__s;
  ulong uVar8;
  undefined8 local_58;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  undefined8 local_38 [3];
  int local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RichmanTileEventBase::ExecuteEvent((RichmanTileEventBase *)this);
  iVar4 = ProfileUtils::Profile();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x38));
  local_38[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x38));
  do {
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)local_38);
    if (!bVar3) {
      this_00 = (CommonUIManager *)Sexy::LazySingleton<CommonUIManager>::GetInstance();
      CommonUIManager::ShowBonusRedPachet(this_00,(vector *)avStack_50);
LAB_04c49bc0:
      (**(code **)(*(long *)this + 0x18))(this);
      std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
                ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_50);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    local_18 = 0;
    iVar1 = *piVar5;
    iStack_1c = piVar5[1];
    local_20 = iVar1;
    if ((iVar1 - 0xcc40U < 2) || (iVar1 == 0x5a02)) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38);
      this_01 = (hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                 *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
      pvVar6 = (vector *)
               eastl::
               hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
               ::get_allocator(this_01);
      std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::vector
                ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)&local_20,pvVar6);
      uVar8 = 0;
      while( true ) {
        uVar2 = CONCAT44(iStack_1c,local_20);
        uVar7 = FUN_04c4561c(uVar2,CONCAT44(uStack_14,local_18));
        if (uVar7 <= uVar8) break;
        piVar5 = (int *)FUN_04c45628(uVar2,uVar8);
        local_58 = *(undefined8 *)piVar5;
        PlayerInfo::AddCommonGachaReward(iVar4,*piVar5,SUB41(piVar5[1],0),false);
        std::vector<ChestAwardContent,std::allocator<ChestAwardContent>>::push_back
                  ((vector<ChestAwardContent,std::allocator<ChestAwardContent>> *)local_38,
                   (ChestAwardContent *)&local_58);
        uVar8 = uVar8 + 1;
      }
      if (iVar1 == 0xcc40) {
        __s = "effects/ChestAvatarLevel_Chest";
      }
      else {
        __s = "effects/ChestHardLevel_Chest";
      }
      std::string::string((string *)&local_58,__s);
      UIChestAward::create
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38,
                 (exception_ptr *)&local_58);
      std::string::~string((string *)&local_58);
      nop();
      std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::~vector
                ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)&local_20);
      std::vector<ChestAwardContent,std::allocator<ChestAwardContent>>::~vector
                ((vector<ChestAwardContent,std::allocator<ChestAwardContent>> *)local_38);
      goto LAB_04c49bc0;
    }
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_50,
               (LotteryBonus *)&local_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  } while( true );
}

