// Class: MiniGameCollectionNetworkMgr


/* MiniGameCollectionNetworkMgr::GetLevelScore(MiniGameType) */

undefined4 __thiscall
MiniGameCollectionNetworkMgr::GetLevelScore(MiniGameCollectionNetworkMgr *this,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_038b3f14(*(undefined8 *)(this + 0xe0),(long)param_2);
  return *puVar1;
}


/* MiniGameCollectionNetworkMgr::SetLevelScore(MiniGameType, int) */

void __thiscall
MiniGameCollectionNetworkMgr::SetLevelScore
          (MiniGameCollectionNetworkMgr *this,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_038b3f14(*(undefined8 *)(this + 0xe0),(long)param_2);
  *puVar1 = param_3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionNetworkMgr::GetMiniGamePrefixLevel(MiniGameType) */

void MiniGameCollectionNetworkMgr::GetMiniGamePrefixLevel
               (string *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  char *__s;
  
  lVar1 = ___stack_chk_guard;
  if (param_3 == 0) {
    __s = "minigame_copycat";
  }
  else if (param_3 == 1) {
    __s = "minigame_klotski";
  }
  else if (param_3 == 2) {
    __s = "minigame_camelcard";
  }
  else if (param_3 == 3) {
    __s = "minigame_bowling";
  }
  else {
    __s = "";
  }
  std::string::string(param_1,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* MiniGameCollectionNetworkMgr::UpgradeBuffer(int, int) */

void __thiscall
MiniGameCollectionNetworkMgr::UpgradeBuffer
          (MiniGameCollectionNetworkMgr *this,int param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x78);
  lVar2 = FUN_038b3f1c(uVar5,*(undefined8 *)(this + 0x80));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return;
    }
    piVar3 = (int *)FUN_038b3f44(uVar5,lVar4);
    lVar4 = lVar4 + 1;
  } while (*piVar3 != param_1);
  iVar1 = piVar3[2];
  *(int *)(this + 0x90) = *(int *)(this + 0x90) - piVar3[3];
  piVar3[3] = param_2;
  piVar3[2] = iVar1 + 1;
  return;
}


/* MiniGameCollectionNetworkMgr::GetBowlingTurnSpeed() */

undefined4 __thiscall
MiniGameCollectionNetworkMgr::GetBowlingTurnSpeed(MiniGameCollectionNetworkMgr *this)

{
  if (this[0xf8] == (MiniGameCollectionNetworkMgr)0x0) {
    return 0x3f800000;
  }
  return 0x3e99999a;
}


/* MiniGameCollectionNetworkMgr::ObtainReward(int) */

void __thiscall
MiniGameCollectionNetworkMgr::ObtainReward(MiniGameCollectionNetworkMgr *this,int param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x60);
  lVar1 = FUN_038b3f4c(uVar3,*(undefined8 *)(this + 0x68));
  lVar2 = 0;
  while( true ) {
    if (lVar2 == lVar1) {
      return;
    }
    if (lVar2 == param_1) break;
    lVar2 = lVar2 + 1;
  }
  lVar2 = FUN_038b3f7c(uVar3);
  *(undefined4 *)(lVar2 + 0x20) = 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionNetworkMgr::GetMiniGameRealLevel(MiniGameType, bool) */

void MiniGameCollectionNetworkMgr::GetMiniGameRealLevel
               (undefined8 param_1,undefined8 param_2,int param_3,char param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  char *pcVar3;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetMiniGamePrefixLevel(asStack_20);
  uVar1 = 5;
  if (param_3 != 1) {
    uVar1 = 3;
  }
  uVar2 = FUN_038b4240(uVar1);
  Sexy::StrFormat("_%d",asStack_18,uVar2 & 0xffffffff);
  std::operator+(asStack_20,asStack_18);
  if (param_4 == '\0') {
    pcVar3 = "_n";
  }
  else {
    pcVar3 = "_h";
  }
  std::operator+(asStack_10,pcVar3);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* MiniGameCollectionNetworkMgr::GetPlantCooldownSpeed() */

undefined1  [16] __thiscall
MiniGameCollectionNetworkMgr::GetPlantCooldownSpeed(MiniGameCollectionNetworkMgr *this)

{
  PVZ1CopycatsModule *this_00;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if ((this[0xf8] != (MiniGameCollectionNetworkMgr)0x0) &&
     (this_00 = BoardHelpers::GetLevelModuleByClass<PVZ1CopycatsModule>(),
     this_00 != (PVZ1CopycatsModule *)0x0)) {
    PVZ1CopycatsModule::GetPlantCooldownSpeed(this_00);
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0);
}


/* MiniGameCollectionNetworkMgr::~MiniGameCollectionNetworkMgr() */

void __thiscall
MiniGameCollectionNetworkMgr::~MiniGameCollectionNetworkMgr(MiniGameCollectionNetworkMgr *this)

{
  *(undefined ***)this = &PTR__MiniGameCollectionNetworkMgr_066b4650;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xe0));
  std::string::~string((string *)(this + 0xc0));
  MiniGameCollectionEndOfPlayData::~MiniGameCollectionEndOfPlayData
            ((MiniGameCollectionEndOfPlayData *)(this + 0x98));
  MiniGameCollectionMainEntryData::~MiniGameCollectionMainEntryData
            ((MiniGameCollectionMainEntryData *)(this + 0x30));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x10));
  Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::~LazySingleton
            ((LazySingleton<MiniGameCollectionNetworkMgr> *)this);
  return;
}


/* MiniGameCollectionNetworkMgr::~MiniGameCollectionNetworkMgr() */

void __thiscall
MiniGameCollectionNetworkMgr::~MiniGameCollectionNetworkMgr(MiniGameCollectionNetworkMgr *this)

{
  ~MiniGameCollectionNetworkMgr(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionNetworkMgr::RequestMainEntryData(std::function<void ()>) */

void __thiscall
MiniGameCollectionNetworkMgr::RequestMainEntryData
          (MiniGameCollectionNetworkMgr *this,function *param_2)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  undefined1 auStack_28 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[8] == (MiniGameCollectionNetworkMgr)0x0) {
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
              (avStack_20,&DAT_05751ca0,1,auStack_28);
    INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_20,0,true);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_20);
    this[8] = (MiniGameCollectionNetworkMgr)0x1;
    std::function<void()>::operator=((function<void()> *)(this + 0x10),param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionNetworkMgr::RequestNetwork() */

void MiniGameCollectionNetworkMgr::RequestNetwork(void)

{
  NetworkMgr *this;
  INetworkMsgProcess *this_00;
  undefined1 auStack_28 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (NetworkMgr *)NetworkMgr::Instance();
  this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            (avStack_20,&DAT_05751cb0,1,auStack_28);
  INetworkMsgProcess::RequestActivityList(this_00,(vector *)avStack_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionNetworkMgr::MiniGameCollectionNetworkMgr() */

void __thiscall
MiniGameCollectionNetworkMgr::MiniGameCollectionNetworkMgr(MiniGameCollectionNetworkMgr *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_00;
  undefined *puVar1;
  size_t in_x2;
  int iVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  int local_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0);
  iVar2 = 4;
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::LazySingleton
            ((LazySingleton<MiniGameCollectionNetworkMgr> *)this);
  *(undefined ***)this = &PTR__MiniGameCollectionNetworkMgr_066b4650;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x10));
  MiniGameCollectionMainEntryData::MiniGameCollectionMainEntryData
            ((MiniGameCollectionMainEntryData *)(this + 0x30));
  MiniGameCollectionEndOfPlayData::MiniGameCollectionEndOfPlayData
            ((MiniGameCollectionEndOfPlayData *)(this + 0x98));
  Set8BytesTo0((string *)(this + 0xc0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_00);
  this[8] = (MiniGameCollectionNetworkMgr)0x0;
  *(undefined4 *)(this + 200) = 0;
  std::string::append((string *)(this + 0xc0),"",in_x2);
  *(undefined4 *)(this + 0xcc) = 0;
  this[0xf8] = (MiniGameCollectionNetworkMgr)0x0;
  *(undefined4 *)(this + 0xd0) = 0xffffffff;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)this_00);
  do {
    local_20 = 0;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)this_00,&local_20);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined8 *)(this + 0x100) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_40 = CONCAT44(uStack_1c,local_20);
  local_30 = local_10;
  uStack_38 = uStack_18;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<MiniGameCollectionNetworkMgr,void(MiniGameCollectionNetworkMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionNetworkMgr::GetLevelTimeScore(MiniGameType, bool, float) */

void __thiscall
MiniGameCollectionNetworkMgr::GetLevelTimeScore
          (float param_1,MiniGameCollectionNetworkMgr *this,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  MiniGameCollectionMainEntryData *pMVar2;
  MiniGameData *pMVar3;
  long lVar4;
  float fVar5;
  MiniGameData aMStack_90 [8];
  undefined8 local_88;
  MiniGameCollectionMainEntryData aMStack_70 [24];
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pMVar2 = (MiniGameCollectionMainEntryData *)
           eastl::
           hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           ::get_allocator((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                            *)this);
  MiniGameCollectionMainEntryData::MiniGameCollectionMainEntryData(aMStack_70,pMVar2);
  iVar1 = MiniGameCollectionUtils::GetIndexByMiniGameType(param_3);
  pMVar3 = (MiniGameData *)FUN_038b3e88(local_58,(long)iVar1);
  MiniGameData::MiniGameData(aMStack_90,pMVar3);
  lVar4 = FUN_038b3e90(local_88,param_4);
  fVar5 = *(float *)(lVar4 + 0xc);
  iVar1 = *(int *)(lVar4 + 4);
  if (param_1 < fVar5) {
    iVar1 = (int)(((fVar5 - param_1) / (fVar5 - *(float *)(lVar4 + 0x10))) *
                 (float)*(int *)(lVar4 + 0x14)) + iVar1;
  }
  MiniGameData::~MiniGameData(aMStack_90);
  MiniGameCollectionMainEntryData::~MiniGameCollectionMainEntryData(aMStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionNetworkMgr::TestData() */

void __thiscall MiniGameCollectionNetworkMgr::TestData(MiniGameCollectionNetworkMgr *this)

{
  vector<MiniGameData,std::allocator<MiniGameData>> *this_00;
  vector<MiniGameRewardData,std::allocator<MiniGameRewardData>> *this_01;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_50;
  undefined1 local_4c;
  vector<MiniGameLevelData,std::allocator<MiniGameLevelData>> avStack_48 [24];
  undefined4 local_30 [2];
  vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> avStack_28 [24];
  undefined4 local_10;
  long local_8;
  
  this_00 = (vector<MiniGameData,std::allocator<MiniGameData>> *)(this + 0x48);
  this_01 = (vector<MiniGameRewardData,std::allocator<MiniGameRewardData>> *)(this + 0x60);
  local_8 = ___stack_chk_guard;
  std::vector<MiniGameData,std::allocator<MiniGameData>>::clear(this_00);
  std::vector<MiniGameRewardData,std::allocator<MiniGameRewardData>>::clear(this_01);
  std::vector<MiniGameBufferData,std::allocator<MiniGameBufferData>>::clear
            ((vector<MiniGameBufferData,std::allocator<MiniGameBufferData>> *)(this + 0x78));
  *(undefined4 *)(this + 0x94) = 1000;
  *(undefined4 *)(this + 0x90) = 10000;
  SpecialGameLevelGroup::SpecialGameLevelGroup((SpecialGameLevelGroup *)&local_50);
  local_4c = 1;
  local_50 = 0;
  MiniGameLevelData::MiniGameLevelData((MiniGameLevelData *)local_68);
  local_68[0] = 1000;
  local_60 = 1;
  std::vector<MiniGameLevelData,std::allocator<MiniGameLevelData>>::push_back
            (avStack_48,(MiniGameLevelData *)local_68);
  std::vector<MiniGameLevelData,std::allocator<MiniGameLevelData>>::push_back
            (avStack_48,(MiniGameLevelData *)local_68);
  std::vector<MiniGameData,std::allocator<MiniGameData>>::push_back
            (this_00,(MiniGameData *)&local_50);
  local_50 = 1;
  local_4c = 1;
  std::vector<MiniGameData,std::allocator<MiniGameData>>::push_back
            (this_00,(MiniGameData *)&local_50);
  local_4c = 0;
  local_50 = 2;
  std::vector<MiniGameData,std::allocator<MiniGameData>>::push_back
            (this_00,(MiniGameData *)&local_50);
  local_4c = 1;
  local_50 = 3;
  std::vector<MiniGameData,std::allocator<MiniGameData>>::push_back
            (this_00,(MiniGameData *)&local_50);
  MiniGameRewardData::MiniGameRewardData((MiniGameRewardData *)local_30);
  local_30[0] = 10;
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_78);
  local_78 = 0xbc0;
  local_74 = 10;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
            (avStack_28,(S2C_BonusInfo *)&local_78);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
            (avStack_28,(S2C_BonusInfo *)&local_78);
  local_10 = 0;
  std::vector<MiniGameRewardData,std::allocator<MiniGameRewardData>>::push_back
            (this_01,(MiniGameRewardData *)local_30);
  std::vector<MiniGameRewardData,std::allocator<MiniGameRewardData>>::push_back
            (this_01,(MiniGameRewardData *)local_30);
  std::vector<MiniGameRewardData,std::allocator<MiniGameRewardData>>::push_back
            (this_01,(MiniGameRewardData *)local_30);
  std::vector<MiniGameRewardData,std::allocator<MiniGameRewardData>>::push_back
            (this_01,(MiniGameRewardData *)local_30);
  std::vector<MiniGameRewardData,std::allocator<MiniGameRewardData>>::push_back
            (this_01,(MiniGameRewardData *)local_30);
  std::vector<MiniGameRewardData,std::allocator<MiniGameRewardData>>::push_back
            (this_01,(MiniGameRewardData *)local_30);
  std::vector<MiniGameRewardData,std::allocator<MiniGameRewardData>>::push_back
            (this_01,(MiniGameRewardData *)local_30);
  std::vector<MiniGameRewardData,std::allocator<MiniGameRewardData>>::push_back
            (this_01,(MiniGameRewardData *)local_30);
  std::vector<MiniGameRewardData,std::allocator<MiniGameRewardData>>::push_back
            (this_01,(MiniGameRewardData *)local_30);
  PlantWarsStarRewardData::~PlantWarsStarRewardData((PlantWarsStarRewardData *)local_30);
  MiniGameData::~MiniGameData((MiniGameData *)&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionNetworkMgr::syncMainEntryInfo() */

void __thiscall MiniGameCollectionNetworkMgr::syncMainEntryInfo(MiniGameCollectionNetworkMgr *this)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  PVZ2UIDialog *pPVar3;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  wstring awStack_140 [8];
  wstring awStack_138 [24];
  Delegate0 aDStack_120 [48];
  MiniGameCollectionMainEntryData aMStack_f0 [104];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_70 != '\0') {
    MiniGameCollectionMainEntryData::MiniGameCollectionMainEntryData(aMStack_f0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aMStack_f0);
    this_00 = gLawnApp;
    if (cVar1 == '\0') {
      FUN_05478178(awStack_140,&DAT_056f11a8,auStack_150);
      FUN_05478178(awStack_138,L"[WECHAT_ACTIVITY_DATA_ERROR]",auStack_148);
      pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_140,awStack_138);
      FUN_05476c50(awStack_138);
      nop();
      FUN_05476c50(awStack_140);
      nop();
      FUN_05478178(awStack_140,L"[BUTTON_OK]",auStack_148);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_120,awStack_138);
      PVZ2UIDialog::AddButton(pPVar3,awStack_140,aDStack_120,1);
      FUN_05476c50(awStack_140);
      nop();
    }
    else {
      MiniGameCollectionMainEntryData::operator=
                ((MiniGameCollectionMainEntryData *)(this + 0x30),aMStack_f0);
    }
    MiniGameCollectionMainEntryData::~MiniGameCollectionMainEntryData(aMStack_f0);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionNetworkMgr::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
MiniGameCollectionNetworkMgr::onNotifyRefreshActivityList
          (MiniGameCollectionNetworkMgr *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (this[8] != (MiniGameCollectionNetworkMgr)0x0)) {
    local_1c = 0x2a8d;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      syncMainEntryInfo(this);
      this[8] = (MiniGameCollectionNetworkMgr)0x0;
      bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x10));
      if (bVar1) {
        std::function<void()>::operator()((function<void()> *)(this + 0x10));
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionNetworkMgr::RequestEndPlayData(MiniGameCollectionEndPlayParamData) */

void MiniGameCollectionNetworkMgr::RequestEndPlayData
               (undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  string *psVar3;
  char *pcVar4;
  DNetwork *this;
  undefined8 local_d90;
  undefined8 uStack_d88;
  undefined8 local_d80;
  undefined8 local_d70;
  int local_d68;
  string asStack_d58 [8];
  undefined8 local_d50;
  int local_d48;
  int local_d44;
  int local_d40;
  undefined4 uStack_d3c;
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [3272];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_d70._0_4_ = (int)param_2;
  iVar1 = (int)local_d70;
  local_d70._4_4_ = (int)((ulong)param_2 >> 0x20);
  iVar2 = local_d70._4_4_;
  local_d70 = param_2;
  local_d68 = param_3;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string((string *)&local_d50,"id");
  psVar3 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,(string *)&local_d50);
  DString::DString(aDStack_ce8,iVar1);
  pcVar4 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar3,pcVar4,(size_t)psVar3);
  DString::~DString(aDStack_ce8);
  std::string::~string((string *)&local_d50);
  nop();
  std::string::string((string *)&local_d50,"type");
  psVar3 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,(string *)&local_d50);
  DString::DString(aDStack_ce8,iVar2);
  pcVar4 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar3,pcVar4,(size_t)psVar3);
  DString::~DString(aDStack_ce8);
  std::string::~string((string *)&local_d50);
  nop();
  std::string::string((string *)&local_d50,"score");
  psVar3 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,(string *)&local_d50);
  DString::DString(aDStack_ce8,param_3);
  pcVar4 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar3,pcVar4,(size_t)psVar3);
  DString::~DString(aDStack_ce8);
  std::string::~string((string *)&local_d50);
  nop();
  this = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  local_d48 = iVar1;
  local_d44 = iVar2;
  local_d80 = CONCAT44(uStack_d3c,param_3);
  local_d90 = param_1;
  uStack_d88 = param_2;
  local_d50 = param_1;
  local_d40 = param_3;
  FUN_038b4be4(afStack_d38,&local_d90);
  std::string::string(asStack_d58,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this,asStack_20,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,asStack_d58,0
            );
  std::string::~string(asStack_d58);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionNetworkMgr::RequestReward(int) */

void __thiscall
MiniGameCollectionNetworkMgr::RequestReward(MiniGameCollectionNetworkMgr *this,int param_1)

{
  string *this_00;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [3280];
  string asStack_18 [16];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"id");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,param_1);
  __s = (char *)DString::c_str(aDStack_ce8);
  std::string::append(this_00,__s,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_038b4c44(afStack_d38,this,param_1);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_18,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameCollectionNetworkMgr::ShowEndLevelUI(bool, bool) */

long __thiscall
MiniGameCollectionNetworkMgr::ShowEndLevelUI
          (MiniGameCollectionNetworkMgr *this,bool param_1,bool param_2)

{
  MiniGameCollectionEndLevelUI *this_00;
  
  if (*(long *)(this + 0x100) != 0) {
    return *(long *)(this + 0x100);
  }
  this_00 = ::operator_new(0x128);
  MiniGameCollectionEndLevelUI::MiniGameCollectionEndLevelUI(this_00);
  *(MiniGameCollectionEndLevelUI **)(this + 0x100) = this_00;
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  MiniGameCollectionEndLevelUI::Init
            (*(MiniGameCollectionEndLevelUI **)(this + 0x100),param_1,param_2);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x100));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x100));
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal
            (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x100));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x100));
  MiniGameCollectionEndLevelUI::ShowReward(*(MiniGameCollectionEndLevelUI **)(this + 0x100));
  return *(long *)(this + 0x100);
}

