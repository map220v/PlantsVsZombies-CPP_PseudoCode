// Class: DangerRoomSpecialOfferConfig


/* DangerRoomSpecialOfferConfig::DangerRoomSpecialOfferConfig(DangerRoomSpecialOfferConfig&&) */

void __thiscall
DangerRoomSpecialOfferConfig::DangerRoomSpecialOfferConfig
          (DangerRoomSpecialOfferConfig *this,DangerRoomSpecialOfferConfig *param_1)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &PTR_GetClass_069895a0;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  DangerRoomSpecialOfferBonus::DangerRoomSpecialOfferBonus
            ((DangerRoomSpecialOfferBonus *)(this + 0x28),
             (DangerRoomSpecialOfferBonus *)(param_1 + 0x28));
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  return;
}


/* DangerRoomSpecialOfferConfig::DangerRoomSpecialOfferConfig(DangerRoomSpecialOfferConfig const&)
    */

void __thiscall
DangerRoomSpecialOfferConfig::DangerRoomSpecialOfferConfig
          (DangerRoomSpecialOfferConfig *this,DangerRoomSpecialOfferConfig *param_1)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &PTR_GetClass_069895a0;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x10),(vector *)(param_1 + 0x10));
  DangerRoomSpecialOfferBonus::DangerRoomSpecialOfferBonus
            ((DangerRoomSpecialOfferBonus *)(this + 0x28),
             (DangerRoomSpecialOfferBonus *)(param_1 + 0x28));
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  return;
}


/* DangerRoomSpecialOfferConfig::~DangerRoomSpecialOfferConfig() */

void __thiscall
DangerRoomSpecialOfferConfig::~DangerRoomSpecialOfferConfig(DangerRoomSpecialOfferConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_069895a0;
  DangerRoomSpecialOfferBonus::~DangerRoomSpecialOfferBonus
            ((DangerRoomSpecialOfferBonus *)(this + 0x28));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x10));
  nop();
  return;
}


/* DangerRoomSpecialOfferConfig::~DangerRoomSpecialOfferConfig() */

void __thiscall
DangerRoomSpecialOfferConfig::~DangerRoomSpecialOfferConfig(DangerRoomSpecialOfferConfig *this)

{
  ~DangerRoomSpecialOfferConfig(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferConfig::StaticClassInit() */

void DangerRoomSpecialOfferConfig::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"DangerRoomSpecialOfferConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_04c4d118,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomSpecialOfferConfig::StaticGetClass() */

long * DangerRoomSpecialOfferConfig::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomSpecialOfferConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomSpecialOfferConfig::GetClass() const */

long * DangerRoomSpecialOfferConfig::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomSpecialOfferConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomSpecialOfferConfig::IsInLevelLimit(int) */

bool __thiscall
DangerRoomSpecialOfferConfig::IsInLevelLimit(DangerRoomSpecialOfferConfig *this,int param_1)

{
  ulong uVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x10);
  uVar1 = FUN_04c4ca60(uVar4,*(undefined8 *)(this + 0x18));
  if (1 < uVar1) {
    piVar2 = (int *)FUN_04c4cc30(uVar4,0);
    piVar3 = (int *)FUN_04c4cc30(uVar4,1);
    return param_1 <= *piVar3 && *piVar2 <= param_1;
  }
  return false;
}


/* DangerRoomSpecialOfferConfig::GetBonus() */

undefined1  [16] __thiscall
DangerRoomSpecialOfferConfig::GetBonus(DangerRoomSpecialOfferConfig *this)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uVar3 = *(undefined8 *)(this + 0x48);
  lVar1 = FUN_04c4cc38(uVar3,*(undefined8 *)(this + 0x50));
  if (lVar1 == 0) {
    local_10 = 0;
    uStack_c = 0;
    local_8 = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_04c4cc4c(uVar3,0);
    local_8 = *(undefined4 *)(puVar2 + 1);
    local_10 = (undefined4)*puVar2;
    uStack_c = (undefined4)((ulong)*puVar2 >> 0x20);
  }
  auVar4._4_4_ = uStack_c;
  auVar4._0_4_ = local_10;
  auVar4._8_4_ = local_8;
  auVar4._12_4_ = 0;
  return auVar4;
}


/* DangerRoomSpecialOfferConfig::DangerRoomSpecialOfferConfig() */

void __thiscall
DangerRoomSpecialOfferConfig::DangerRoomSpecialOfferConfig(DangerRoomSpecialOfferConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_069895a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  DangerRoomSpecialOfferBonus::DangerRoomSpecialOfferBonus
            ((DangerRoomSpecialOfferBonus *)(this + 0x28));
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x10));
  return;
}


/* DangerRoomSpecialOfferConfig::StaticNew() */

DangerRoomSpecialOfferConfig * DangerRoomSpecialOfferConfig::StaticNew(void)

{
  DangerRoomSpecialOfferConfig *this;
  
  this = ::operator_new(0x68);
  DangerRoomSpecialOfferConfig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferConfig::GetPlant() */

void __thiscall DangerRoomSpecialOfferConfig::GetPlant(DangerRoomSpecialOfferConfig *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  PlayerInfo *this_00;
  vector *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  string asStack_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  pvVar5 = (vector *)
           eastl::
           hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           ::get_allocator((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                            *)this);
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::vector
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)&local_20,pvVar5);
  uVar8 = local_20;
  iVar2 = FUN_04c4cc38(local_20,local_18);
  iVar3 = FUN_04c4ca5c(*(undefined4 *)(this + 8));
  if ((iVar2 == 0) || (iVar3 == 0)) {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    if (0 < iVar2) {
      lVar9 = 0;
      do {
        lVar6 = FUN_04c4cc4c(uVar8,lVar9);
        iVar3 = *(int *)(lVar6 + 4);
        iVar4 = PlantNameMapperServerID::GetInstance();
        NameMapperBase::GetNameForId(iVar4);
        cVar1 = PlayerInfo::GetIsPlantUnlocked(this_00,asStack_38);
        if ((cVar1 == '\0') ||
           (iVar4 = PlayerInfo::GetPlantStarLevel(this_00,asStack_38,false), iVar4 < iVar3)) {
          puVar7 = (undefined8 *)FUN_04c4cc4c(local_20,lVar9);
          local_30 = *puVar7;
          local_28 = *(undefined4 *)(puVar7 + 1);
          std::string::~string(asStack_38);
          goto LAB_04c4d814;
        }
        lVar9 = lVar9 + 1;
        std::string::~string(asStack_38);
        uVar8 = local_20;
      } while ((int)lVar9 < iVar2);
    }
    puVar7 = (undefined8 *)FUN_04c4cc4c(uVar8,0);
    local_30 = *puVar7;
    local_28 = *(undefined4 *)(puVar7 + 1);
  }
LAB_04c4d814:
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30,local_28);
}

