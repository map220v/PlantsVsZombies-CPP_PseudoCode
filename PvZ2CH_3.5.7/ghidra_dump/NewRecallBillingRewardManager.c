// Class: NewRecallBillingRewardManager


/* NewRecallBillingRewardManager::~NewRecallBillingRewardManager() */

void __thiscall
NewRecallBillingRewardManager::~NewRecallBillingRewardManager(NewRecallBillingRewardManager *this)

{
  *(undefined ***)this = &PTR__NewRecallBillingRewardManager_06611af0;
  std::string::~string((string *)(this + 8));
  Sexy::LazySingleton<NewRecallBillingRewardManager>::~LazySingleton
            ((LazySingleton<NewRecallBillingRewardManager> *)this);
  return;
}


/* NewRecallBillingRewardManager::~NewRecallBillingRewardManager() */

void __thiscall
NewRecallBillingRewardManager::~NewRecallBillingRewardManager(NewRecallBillingRewardManager *this)

{
  ~NewRecallBillingRewardManager(this);
  AK::FreeHook(this);
  return;
}


/* NewRecallBillingRewardManager::NewRecallBillingRewardManager() */

void __thiscall
NewRecallBillingRewardManager::NewRecallBillingRewardManager(NewRecallBillingRewardManager *this)

{
  Sexy::LazySingleton<NewRecallBillingRewardManager>::LazySingleton
            ((LazySingleton<NewRecallBillingRewardManager> *)this);
  *(undefined ***)this = &PTR__NewRecallBillingRewardManager_06611af0;
  Set8BytesTo0(this + 8);
  return;
}


/* NewRecallBillingRewardManager::GetNewRecallBundleIdBySku(std::string const&) */

undefined4 __thiscall
NewRecallBillingRewardManager::GetNewRecallBundleIdBySku
          (NewRecallBillingRewardManager *this,string *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = std::operator==("com.popcap.ios.chs.PVZ2.RecallGemBundle6",param_1);
  uVar2 = 0xb;
  if (!bVar1) {
    bVar1 = std::operator==("com.popcap.ios.chs.PVZ2.RecallGemBundle30",param_1);
    uVar2 = 0xc;
    if (!bVar1) {
      bVar1 = std::operator==("com.popcap.ios.chs.PVZ2.RecallGemBundle68",param_1);
      uVar2 = 0xd;
      if (!bVar1) {
        bVar1 = std::operator==("com.popcap.ios.chs.PVZ2.RecallLiquidBundle6",param_1);
        uVar2 = 0x15;
        if (!bVar1) {
          bVar1 = std::operator==("com.popcap.ios.chs.PVZ2.RecallLiquidBundle30",param_1);
          uVar2 = 0x16;
          if (!bVar1) {
            bVar1 = std::operator==("com.popcap.ios.chs.PVZ2.RecallLiquidBundle68",param_1);
            uVar2 = 0x17;
            if (!bVar1) {
              bVar1 = std::operator==("com.popcap.ios.chs.PVZ2.RecallPlantBundle6",param_1);
              uVar2 = 0x1f;
              if (!bVar1) {
                bVar1 = std::operator==("com.popcap.ios.chs.PVZ2.RecallPlantBundle30",param_1);
                uVar2 = 0x20;
                if (!bVar1) {
                  bVar1 = std::operator==("com.popcap.ios.chs.PVZ2.RecallPlantBundle68",param_1);
                  uVar2 = 0x21;
                  if (!bVar1) {
                    bVar1 = std::operator==("com.popcap.ios.chs.PVZ2.bearberryBundle128",param_1);
                    uVar2 = 0x29;
                    if (!bVar1) {
                      uVar2 = 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBillingRewardManager::LogBattleOrderPackage(std::string const&, int, int) */

void __thiscall
NewRecallBillingRewardManager::LogBattleOrderPackage
          (NewRecallBillingRewardManager *this,string *param_1,int param_2,int param_3)

{
  TGALogMgr *this_00;
  size_t __n;
  int local_68;
  int local_64;
  string asStack_60 [8];
  TGAAnniversaryTreasureData aTStack_58 [16];
  undefined1 auStack_48 [48];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  __n = (size_t)(uint)param_2;
  local_8 = ___stack_chk_guard;
  local_68 = param_3;
  local_64 = param_2;
  TGAAnniversaryTreasureData::TGAAnniversaryTreasureData(aTStack_58);
  std::string::append((string *)aTStack_58,"4",__n);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_68);
  FUN_05474278(auStack_48,asStack_60);
  std::string::~string(asStack_60);
  thunk_FUN_05475e00(auStack_18,param_1);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_64);
  FUN_05474278(auStack_10,asStack_60);
  std::string::~string(asStack_60);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogBattleOrderInfo(this_00,(TGABattleOrderData *)aTStack_58);
  TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData(aTStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBillingRewardManager::LogFightZodiac(std::vector<ChildrenDayItem,
   std::allocator<ChildrenDayItem> > const&) */

void __thiscall
NewRecallBillingRewardManager::LogFightZodiac(NewRecallBillingRewardManager *this,vector *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ulong uVar3;
  long lVar4;
  TGALogMgr *pTVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 local_1fc;
  TGAPlantWarsData aTStack_1f8 [8];
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [32];
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [8];
  string asStack_1b8 [64];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TGAPlantWarsData::TGAPlantWarsData(aTStack_1f8);
  local_1fc = 4;
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_1fc);
  FUN_05474278(aTStack_1f8,asStack_1b8);
  std::string::~string(asStack_1b8);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_1b8,"mat_fireworks");
  local_1fc = PlayerInfo::GetMaterialNum(this_01,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_1fc);
  FUN_05474278(auStack_1f0,asStack_1b8);
  std::string::~string(asStack_1b8);
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  std::string::string(asStack_1b8,"");
  FUN_05462980(auStack_178,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  uVar7 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)param_1;
    uVar3 = FUN_03a617d4(uVar6,*(undefined8 *)(param_1 + 8));
    if (uVar3 <= uVar7) break;
    lVar4 = FUN_03a617e0(uVar6,uVar7);
    iVar1 = *(int *)(lVar4 + 0x14);
    if (iVar1 == 0x59e5) {
      std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar4 + 0x18));
      FUN_05474278(auStack_1e8,asStack_1b8);
      std::string::~string(asStack_1b8);
      lVar4 = FUN_03a617e0(*(undefined8 *)param_1,uVar7);
      iVar1 = *(int *)(lVar4 + 0x14);
    }
    FUN_0546065c(auStack_168,iVar1);
    FUN_054603b8(auStack_168,&DAT_05593348);
    lVar4 = FUN_03a617e0(*(undefined8 *)param_1,uVar7);
    FUN_0546065c(auStack_168,*(undefined4 *)(lVar4 + 0x18));
    FUN_054603b8(auStack_168,&DAT_05594620);
    uVar7 = uVar7 + 1;
  }
  FUN_05462824(asStack_1b8,auStack_178);
  FUN_05474278(auStack_1c8,asStack_1b8);
  std::string::~string(asStack_1b8);
  thunk_FUN_05475e00(auStack_1c0,this + 8);
  pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogPurchaseData::TGALogPurchaseData
            ((TGALogPurchaseData *)asStack_1b8,(TGALogPurchaseData *)aTStack_1f8);
  TGALogMgr::LogFightZodiac(pTVar5,asStack_1b8);
  TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)asStack_1b8);
  FUN_054617bc(auStack_178);
  TGAPlantWarsData::~TGAPlantWarsData(aTStack_1f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBillingRewardManager::LogCallofWish(std::vector<ChildrenDayItem,
   std::allocator<ChildrenDayItem> > const&, int) */

void __thiscall
NewRecallBillingRewardManager::LogCallofWish
          (NewRecallBillingRewardManager *this,vector *param_1,int param_2)

{
  NewRecallBillingRewardManager *pNVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  TGALogMgr *pTVar6;
  string *__n;
  ulong uVar7;
  undefined8 uVar8;
  int local_1a4;
  string asStack_1a0 [8];
  string asStack_198 [8];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  pNVar1 = this + 8;
  local_8 = ___stack_chk_guard;
  local_1a4 = param_2;
  lVar3 = FUN_05474374(pNVar1,"Daily",0);
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  __n = asStack_1a0;
  std::string::string(asStack_198,"");
  FUN_05462980(auStack_178,asStack_198);
  std::string::~string(asStack_198);
  nop();
  uVar7 = 0;
  while( true ) {
    uVar8 = *(undefined8 *)param_1;
    uVar5 = FUN_03a617d4(uVar8,*(undefined8 *)(param_1 + 8));
    if (uVar5 <= uVar7) break;
    lVar4 = FUN_03a617e0(uVar8,uVar7);
    uVar8 = FUN_0546065c(auStack_168,*(undefined4 *)(lVar4 + 0x14));
    uVar8 = FUN_054603b8(uVar8,&DAT_05593348);
    lVar4 = FUN_03a617e0(*(undefined8 *)param_1,uVar7);
    uVar8 = FUN_0546065c(uVar8,*(undefined4 *)(lVar4 + 0x18));
    FUN_054603b8(uVar8,&DAT_05594620);
    uVar7 = uVar7 + 1;
  }
  if (lVar3 == -1) {
    TGAAccumulatedLoginData::TGAAccumulatedLoginData((TGAAccumulatedLoginData *)asStack_198);
    std::string::append(asStack_198,"2",(size_t)__n);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_1a4);
    FUN_05474278(auStack_190,asStack_1a0);
    std::string::~string(asStack_1a0);
    thunk_FUN_05475e00(auStack_188,pNVar1);
    FUN_05462824(asStack_1a0,auStack_178);
    FUN_05474278(auStack_180,asStack_1a0);
    std::string::~string(asStack_1a0);
    pTVar6 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogCallofWishLimit(pTVar6,(TGACallofWishLimit *)asStack_198);
    TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)asStack_198);
  }
  else {
    TGAAccumulatedLoginData::TGAAccumulatedLoginData((TGAAccumulatedLoginData *)asStack_198);
    std::string::append(asStack_198,"2",(size_t)__n);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_1a4);
    FUN_05474278(auStack_190,asStack_1a0);
    std::string::~string(asStack_1a0);
    thunk_FUN_05475e00(auStack_188,pNVar1);
    FUN_05462824(asStack_1a0,auStack_178);
    FUN_05474278(auStack_180,asStack_1a0);
    std::string::~string(asStack_1a0);
    pTVar6 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogCallofWishDaily(pTVar6,(TGACallofWishDaily *)asStack_198);
    TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)asStack_198);
  }
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBillingRewardManager::LogGrowthPackage(std::vector<ChildrenDayItem,
   std::allocator<ChildrenDayItem> > const&, int) */

void __thiscall
NewRecallBillingRewardManager::LogGrowthPackage
          (NewRecallBillingRewardManager *this,vector *param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  TGALogMgr *pTVar4;
  size_t __n;
  ulong uVar5;
  undefined8 uVar6;
  int local_1e4 [3];
  TGASecretStore aTStack_1d8 [16];
  string asStack_1c8 [8];
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [8];
  string asStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  __n = (size_t)(uint)param_2;
  local_8 = ___stack_chk_guard;
  local_1e4[0] = param_2;
  TGASecretStore::TGASecretStore(aTStack_1d8);
  std::string::append((string *)aTStack_1d8,"2",__n);
  if (local_1e4[0] == 1) {
    std::string::append(asStack_1c8,"1",1);
  }
  else if (local_1e4[0] == 6) {
    std::string::append(asStack_1c8,"8",6);
  }
  else if (local_1e4[0] == 0x1e) {
    std::string::append(asStack_1c8,"35",0x1e);
  }
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_1e4);
  FUN_05474278(auStack_1c0,asStack_1a8);
  std::string::~string(asStack_1a8);
  thunk_FUN_05475e00(auStack_1b8,this + 8);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_1a8,"");
  FUN_05462980(auStack_178,asStack_1a8);
  std::string::~string(asStack_1a8);
  nop();
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)param_1;
    uVar3 = FUN_03a617d4(uVar6,*(undefined8 *)(param_1 + 8));
    if (uVar3 <= uVar5) break;
    lVar2 = FUN_03a617e0(uVar6,uVar5);
    uVar6 = FUN_0546065c(auStack_168,*(undefined4 *)(lVar2 + 0x14));
    uVar6 = FUN_054603b8(uVar6,&DAT_05593348);
    lVar2 = FUN_03a617e0(*(undefined8 *)param_1,uVar5);
    uVar6 = FUN_0546065c(uVar6,*(undefined4 *)(lVar2 + 0x18));
    FUN_054603b8(uVar6,&DAT_05594620);
    uVar5 = uVar5 + 1;
  }
  FUN_05462824(asStack_1a8,auStack_178);
  FUN_05474278(auStack_1b0,asStack_1a8);
  std::string::~string(asStack_1a8);
  pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGASecretStore::TGASecretStore((TGASecretStore *)asStack_1a8,aTStack_1d8);
  TGALogMgr::LogGrowthPackage(pTVar4,asStack_1a8);
  DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_1a8);
  FUN_054617bc(auStack_178);
  DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_1d8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBillingRewardManager::LogLimitedSummonPackage(std::vector<ChildrenDayItem,
   std::allocator<ChildrenDayItem> > const&, std::string const&, int) */

void __thiscall
NewRecallBillingRewardManager::LogLimitedSummonPackage
          (NewRecallBillingRewardManager *this,vector *param_1,string *param_2,int param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  TGALogMgr *this_00;
  string *__n;
  ulong uVar4;
  undefined8 uVar5;
  int local_1c4 [5];
  string asStack_1b0 [8];
  TGASecretStore aTStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = param_2;
  local_1c4[0] = param_3;
  TGASecretStore::TGASecretStore(aTStack_1a8);
  std::string::append((string *)aTStack_1a8,"7",(size_t)__n);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_1c4);
  FUN_05474278(auStack_198,asStack_1b0);
  std::string::~string(asStack_1b0);
  thunk_FUN_05475e00(auStack_180,param_2);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)param_1;
    uVar3 = FUN_03a617d4(uVar5,*(undefined8 *)(param_1 + 8));
    if (uVar3 <= uVar4) break;
    lVar2 = FUN_03a617e0(uVar5,uVar4);
    uVar5 = FUN_0546065c(auStack_168,*(undefined4 *)(lVar2 + 0x14));
    uVar5 = FUN_054603b8(uVar5,&DAT_05593348);
    lVar2 = FUN_03a617e0(*(undefined8 *)param_1,uVar4);
    uVar5 = FUN_0546065c(uVar5,*(undefined4 *)(lVar2 + 0x18));
    FUN_054603b8(uVar5,&DAT_05594620);
    uVar4 = uVar4 + 1;
  }
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(auStack_188,asStack_1b0);
  std::string::~string(asStack_1b0);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogLimitedSummon(this_00,(TGALimitedSummonData *)aTStack_1a8);
  FUN_054617bc(auStack_178);
  DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_1a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBillingRewardManager::LogCarnival(std::vector<ChildrenDayItem,
   std::allocator<ChildrenDayItem> > const&, int) */

void __thiscall
NewRecallBillingRewardManager::LogCarnival
          (NewRecallBillingRewardManager *this,vector *param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  TGALogMgr *this_00;
  size_t __n;
  ulong uVar4;
  undefined8 uVar5;
  int local_1c4 [5];
  string asStack_1b0 [8];
  TGACarnivalData aTStack_1a8 [16];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  __n = (size_t)(uint)param_2;
  local_8 = ___stack_chk_guard;
  local_1c4[0] = param_2;
  TGACarnivalData::TGACarnivalData(aTStack_1a8);
  std::string::append((string *)aTStack_1a8,"2",__n);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_1c4);
  FUN_05474278(auStack_198,asStack_1b0);
  std::string::~string(asStack_1b0);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)param_1;
    uVar3 = FUN_03a617d4(uVar5,*(undefined8 *)(param_1 + 8));
    if (uVar3 <= uVar4) break;
    lVar2 = FUN_03a617e0(uVar5,uVar4);
    uVar5 = FUN_0546065c(auStack_168,*(undefined4 *)(lVar2 + 0x14));
    uVar5 = FUN_054603b8(uVar5,&DAT_05593348);
    lVar2 = FUN_03a617e0(*(undefined8 *)param_1,uVar4);
    uVar5 = FUN_0546065c(uVar5,*(undefined4 *)(lVar2 + 0x18));
    FUN_054603b8(uVar5,&DAT_05594620);
    uVar4 = uVar4 + 1;
  }
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(auStack_180,asStack_1b0);
  std::string::~string(asStack_1b0);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogCarnivalData(this_00,aTStack_1a8);
  FUN_054617bc(auStack_178);
  DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_1a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBillingRewardManager::LogNewYearGoods(std::vector<ChildrenDayItem,
   std::allocator<ChildrenDayItem> > const&, int) */

void __thiscall
NewRecallBillingRewardManager::LogNewYearGoods
          (NewRecallBillingRewardManager *this,vector *param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  TGALogMgr *this_00;
  size_t __n;
  ulong uVar4;
  undefined8 uVar5;
  int local_1a4 [3];
  string asStack_198 [8];
  TGATenYearsData aTStack_190 [8];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  __n = (size_t)(uint)param_2;
  local_8 = ___stack_chk_guard;
  local_1a4[0] = param_2;
  TGATenYearsData::TGATenYearsData(aTStack_190);
  std::string::append((string *)aTStack_190,"3",__n);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_1a4);
  FUN_05474278(auStack_188,asStack_198);
  std::string::~string(asStack_198);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_198,"");
  FUN_05462980(auStack_178,asStack_198);
  std::string::~string(asStack_198);
  nop();
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)param_1;
    uVar3 = FUN_03a617d4(uVar5,*(undefined8 *)(param_1 + 8));
    if (uVar3 <= uVar4) break;
    lVar2 = FUN_03a617e0(uVar5,uVar4);
    uVar5 = FUN_0546065c(auStack_168,*(undefined4 *)(lVar2 + 0x14));
    uVar5 = FUN_054603b8(uVar5,&DAT_05593348);
    lVar2 = FUN_03a617e0(*(undefined8 *)param_1,uVar4);
    uVar5 = FUN_0546065c(uVar5,*(undefined4 *)(lVar2 + 0x18));
    FUN_054603b8(uVar5,&DAT_05594620);
    uVar4 = uVar4 + 1;
  }
  FUN_05462824(asStack_198,auStack_178);
  FUN_05474278(auStack_180,asStack_198);
  std::string::~string(asStack_198);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogNewYearGoodsData(this_00,(TGANewYearGoodsData *)aTStack_190);
  FUN_054617bc(auStack_178);
  Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)aTStack_190);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBillingRewardManager::LogGeneFactor(std::vector<ChildrenDayItem,
   std::allocator<ChildrenDayItem> > const&) */

void __thiscall
NewRecallBillingRewardManager::LogGeneFactor(NewRecallBillingRewardManager *this,vector *param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  TGALogMgr *this_00;
  size_t in_x2;
  ulong uVar4;
  undefined8 uVar5;
  string asStack_1b8 [8];
  TGALuckyChestData aTStack_1b0 [48];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TGALuckyChestData::TGALuckyChestData(aTStack_1b0);
  std::string::append((string *)aTStack_1b0,"5",in_x2);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_1b8,"");
  FUN_05462980(auStack_178,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)param_1;
    uVar3 = FUN_03a617d4(uVar5,*(undefined8 *)(param_1 + 8));
    if (uVar3 <= uVar4) break;
    lVar2 = FUN_03a617e0(uVar5,uVar4);
    uVar5 = FUN_0546065c(auStack_168,*(undefined4 *)(lVar2 + 0x14));
    uVar5 = FUN_054603b8(uVar5,&DAT_05593348);
    lVar2 = FUN_03a617e0(*(undefined8 *)param_1,uVar4);
    uVar5 = FUN_0546065c(uVar5,*(undefined4 *)(lVar2 + 0x18));
    FUN_054603b8(uVar5,&DAT_05594620);
    uVar4 = uVar4 + 1;
  }
  FUN_05462824(asStack_1b8,auStack_178);
  FUN_05474278(auStack_180,asStack_1b8);
  std::string::~string(asStack_1b8);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogGeneEnhancementData(this_00,(TGAGeneEnhancementData *)aTStack_1b0);
  FUN_054617bc(auStack_178);
  TGALuckyChestData::~TGALuckyChestData(aTStack_1b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBillingRewardManager::LogWishingPool(std::vector<ChildrenDayItem,
   std::allocator<ChildrenDayItem> > const&, int) */

void __thiscall
NewRecallBillingRewardManager::LogWishingPool
          (NewRecallBillingRewardManager *this,vector *param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  TGALogMgr *this_00;
  string *__n;
  ulong uVar4;
  undefined8 uVar5;
  int local_1a4;
  string asStack_1a0 [8];
  string asStack_198 [8];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_1a4 = param_2;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  __n = asStack_1a0;
  std::string::string(asStack_198,"");
  FUN_05462980(auStack_178,asStack_198);
  std::string::~string(asStack_198);
  nop();
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)param_1;
    uVar3 = FUN_03a617d4(uVar5,*(undefined8 *)(param_1 + 8));
    if (uVar3 <= uVar4) break;
    lVar2 = FUN_03a617e0(uVar5,uVar4);
    uVar5 = FUN_0546065c(auStack_168,*(undefined4 *)(lVar2 + 0x14));
    uVar5 = FUN_054603b8(uVar5,&DAT_05593348);
    lVar2 = FUN_03a617e0(*(undefined8 *)param_1,uVar4);
    uVar5 = FUN_0546065c(uVar5,*(undefined4 *)(lVar2 + 0x18));
    FUN_054603b8(uVar5,&DAT_05594620);
    uVar4 = uVar4 + 1;
  }
  TGAAccumulatedLoginData::TGAAccumulatedLoginData((TGAAccumulatedLoginData *)asStack_198);
  std::string::append(asStack_198,"3",(size_t)__n);
  FUN_05462824(asStack_1a0,auStack_178);
  FUN_05474278(auStack_190,asStack_1a0);
  std::string::~string(asStack_1a0);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_1a4);
  FUN_05474278(auStack_188,asStack_1a0);
  std::string::~string(asStack_1a0);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogWishingPoolData(this_00,(TGAWishingPoolData *)asStack_198);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)asStack_198);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBillingRewardManager::LogGiftFoReturn(std::vector<ChildrenDayItem,
   std::allocator<ChildrenDayItem> > const&) */

void __thiscall
NewRecallBillingRewardManager::LogGiftFoReturn(NewRecallBillingRewardManager *this,vector *param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  TGALogMgr *this_00;
  string *__n;
  ulong uVar4;
  undefined8 uVar5;
  string asStack_1b0 [8];
  string asStack_1a8 [40];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  __n = asStack_1b0;
  std::string::string(asStack_1a8,"");
  FUN_05462980(auStack_178,asStack_1a8);
  std::string::~string(asStack_1a8);
  nop();
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)param_1;
    uVar3 = FUN_03a617d4(uVar5,*(undefined8 *)(param_1 + 8));
    if (uVar3 <= uVar4) break;
    lVar2 = FUN_03a617e0(uVar5,uVar4);
    uVar5 = FUN_0546065c(auStack_168,*(undefined4 *)(lVar2 + 0x14));
    uVar5 = FUN_054603b8(uVar5,&DAT_05593348);
    lVar2 = FUN_03a617e0(*(undefined8 *)param_1,uVar4);
    uVar5 = FUN_0546065c(uVar5,*(undefined4 *)(lVar2 + 0x18));
    FUN_054603b8(uVar5,&DAT_05594620);
    uVar4 = uVar4 + 1;
  }
  TGASecretStore::TGASecretStore((TGASecretStore *)asStack_1a8);
  std::string::append(asStack_1a8,"7",(size_t)__n);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(auStack_180,asStack_1b0);
  std::string::~string(asStack_1b0);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogGiftReturnData(this_00,(TGAGiftReturnData *)asStack_1a8);
  DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_1a8);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBillingRewardManager::LogToyNight(std::vector<ChildrenDayItem,
   std::allocator<ChildrenDayItem> > const&, std::string const&, int) */

void __thiscall
NewRecallBillingRewardManager::LogToyNight
          (NewRecallBillingRewardManager *this,vector *param_1,string *param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  TGALogMgr *this_02;
  string *__n;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  string asStack_1c8 [8];
  string asStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = operator|(0x10,8);
  uVar5 = 0;
  FUN_05462470(auStack_178,uVar1);
  uVar7 = 0;
  std::string::string(asStack_1c0,"");
  FUN_05462980(auStack_178,asStack_1c0);
  std::string::~string(asStack_1c0);
  nop();
  uVar6 = *(undefined8 *)param_1;
  lVar3 = FUN_03a617d4(uVar6,*(undefined8 *)(param_1 + 8));
  if (lVar3 != 0) {
    do {
      lVar3 = FUN_03a617e0(uVar6,uVar5);
      uVar6 = FUN_0546065c(auStack_168,*(undefined4 *)(lVar3 + 0x14));
      uVar6 = FUN_054603b8(uVar6,&DAT_05593348);
      lVar3 = FUN_03a617e0(*(undefined8 *)param_1,uVar5);
      uVar6 = FUN_0546065c(uVar6,*(undefined4 *)(lVar3 + 0x18));
      FUN_054603b8(uVar6,&DAT_05594620);
      uVar6 = *(undefined8 *)param_1;
      lVar3 = FUN_03a617e0(uVar6,uVar5);
      if (*(int *)(lVar3 + 0x14) == 0x5b35) {
        uVar7 = (ulong)(uint)((int)uVar7 + *(int *)(lVar3 + 0x18));
      }
      uVar5 = uVar5 + 1;
      uVar4 = FUN_03a617d4(uVar6,*(undefined8 *)(param_1 + 8));
    } while (uVar5 < uVar4);
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  __n = asStack_1c8;
  std::string::string(asStack_1c0,"mat_toy_clockwork");
  uVar2 = PlayerInfo::GetMaterialNum(this_01,asStack_1c0);
  std::string::~string(asStack_1c0);
  nop();
  TGATourismOctoberData::TGATourismOctoberData((TGATourismOctoberData *)asStack_1c0);
  std::string::append(asStack_1c0,"2",(size_t)__n);
  FUN_05462824(asStack_1c8,auStack_178);
  FUN_05474278(auStack_190,asStack_1c8);
  std::string::~string(asStack_1c8);
  thunk_FUN_05475e00(auStack_1b8,param_2);
  Sexy::StrFormat("%d",asStack_1c8,(ulong)(uint)param_3);
  FUN_05474278(auStack_1b0,asStack_1c8);
  std::string::~string(asStack_1c8);
  Sexy::StrFormat("%d, %d, %d",asStack_1c8,(ulong)uVar2,uVar7,(ulong)(uVar2 + (int)uVar7));
  FUN_05474278(auStack_1a8,asStack_1c8);
  std::string::~string(asStack_1c8);
  this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogToyNightData(this_02,(TGAToyNightData *)asStack_1c0);
  TGATourismOctoberData::~TGATourismOctoberData((TGATourismOctoberData *)asStack_1c0);
  FUN_054617bc(auStack_178);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBillingRewardManager::LogDaveKitchen(std::vector<ChildrenDayItem,
   std::allocator<ChildrenDayItem> > const&, std::string const&, int) */

void __thiscall
NewRecallBillingRewardManager::LogDaveKitchen
          (NewRecallBillingRewardManager *this,vector *param_1,string *param_2,int param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  TGALogMgr *this_00;
  string *__n;
  ulong uVar4;
  undefined8 uVar5;
  int local_1b4;
  string asStack_1b0 [8];
  string asStack_1a8 [16];
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_1b4 = param_3;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  __n = asStack_1b0;
  std::string::string(asStack_1a8,"");
  FUN_05462980(auStack_178,asStack_1a8);
  std::string::~string(asStack_1a8);
  nop();
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)param_1;
    uVar3 = FUN_03a617d4(uVar5,*(undefined8 *)(param_1 + 8));
    if (uVar3 <= uVar4) break;
    lVar2 = FUN_03a617e0(uVar5,uVar4);
    uVar5 = FUN_0546065c(auStack_168,*(undefined4 *)(lVar2 + 0x14));
    uVar5 = FUN_054603b8(uVar5,&DAT_05593348);
    lVar2 = FUN_03a617e0(*(undefined8 *)param_1,uVar4);
    uVar5 = FUN_0546065c(uVar5,*(undefined4 *)(lVar2 + 0x18));
    FUN_054603b8(uVar5,&DAT_05594620);
    uVar4 = uVar4 + 1;
  }
  TGASecretStore::TGASecretStore((TGASecretStore *)asStack_1a8);
  std::string::append(asStack_1a8,"3",(size_t)__n);
  thunk_FUN_05475e00(auStack_198,param_2);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_1b4);
  FUN_05474278(auStack_190,asStack_1b0);
  std::string::~string(asStack_1b0);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(auStack_180,asStack_1b0);
  std::string::~string(asStack_1b0);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogDaveKitchenData(this_00,(TGADaveKitchenData *)asStack_1a8);
  DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_1a8);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBillingRewardManager::LogDragonTreasure(std::vector<ChildrenDayItem,
   std::allocator<ChildrenDayItem> > const&, std::string const&, int) */

void __thiscall
NewRecallBillingRewardManager::LogDragonTreasure
          (NewRecallBillingRewardManager *this,vector *param_1,string *param_2,int param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  TGALogMgr *this_02;
  string *__n;
  ulong uVar4;
  undefined8 uVar5;
  int local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  string asStack_1c8 [8];
  string asStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [32];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_1d4 = param_3;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_1c0,"");
  FUN_05462980(auStack_178,asStack_1c0);
  std::string::~string(asStack_1c0);
  nop();
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)param_1;
    uVar3 = FUN_03a617d4(uVar5,*(undefined8 *)(param_1 + 8));
    if (uVar3 <= uVar4) break;
    lVar2 = FUN_03a617e0(uVar5,uVar4);
    uVar5 = FUN_0546065c(auStack_168,*(undefined4 *)(lVar2 + 0x14));
    uVar5 = FUN_054603b8(uVar5,&DAT_05593348);
    lVar2 = FUN_03a617e0(*(undefined8 *)param_1,uVar4);
    uVar5 = FUN_0546065c(uVar5,*(undefined4 *)(lVar2 + 0x18));
    FUN_054603b8(uVar5,&DAT_05594620);
    uVar4 = uVar4 + 1;
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_1c0,"mat_dragon_treasure_crystal");
  local_1d0 = PlayerInfo::GetMaterialNum(this_01,asStack_1c0);
  std::string::~string(asStack_1c0);
  nop();
  __n = asStack_1c8;
  std::string::string(asStack_1c0,"mat_dragon_treasure_integral");
  local_1cc = PlayerInfo::GetMaterialNum(this_01,asStack_1c0);
  std::string::~string(asStack_1c0);
  nop();
  TGATourismOctoberData::TGATourismOctoberData((TGATourismOctoberData *)asStack_1c0);
  std::string::append(asStack_1c0,"5",(size_t)__n);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_1d0);
  FUN_05474278(auStack_1b8,asStack_1c8);
  std::string::~string(asStack_1c8);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_1cc);
  FUN_05474278(auStack_1b0,asStack_1c8);
  std::string::~string(asStack_1c8);
  thunk_FUN_05475e00(auStack_190,param_2);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_1d4);
  FUN_05474278(auStack_188,asStack_1c8);
  std::string::~string(asStack_1c8);
  FUN_05462824(asStack_1c8,auStack_178);
  FUN_05474278(auStack_180,asStack_1c8);
  std::string::~string(asStack_1c8);
  this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogDragonTreasure(this_02,(TGADragonTreasureData *)asStack_1c0);
  TGATourismOctoberData::~TGATourismOctoberData((TGATourismOctoberData *)asStack_1c0);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBillingRewardManager::LogFoolData(std::vector<ChildrenDayItem,
   std::allocator<ChildrenDayItem> > const&, int) */

void __thiscall
NewRecallBillingRewardManager::LogFoolData
          (NewRecallBillingRewardManager *this,vector *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *pNVar3;
  RenaissanceChallengeNewManager *this_02;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  TGALogMgr *pTVar7;
  TGAAnniversaryTreasureData *__n;
  undefined8 uVar8;
  int local_224;
  undefined4 local_220;
  undefined4 local_21c;
  TGAAnniversaryTreasureData aTStack_218 [16];
  undefined1 auStack_208 [32];
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [16];
  string asStack_1c8 [80];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_224 = param_2;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_1c8,"mat_renaissance_challenge_statue");
  local_220 = PlayerInfo::GetMaterialNum(this_01,asStack_1c8);
  std::string::~string(asStack_1c8);
  nop();
  pNVar3 = (NameMapperBase *)MaterialItemMapper::GetInstance();
  std::string::string(asStack_1c8,"mat_renaissance_challenge_statue");
  NameMapperBase::GetIdForName(pNVar3,asStack_1c8);
  std::string::~string(asStack_1c8);
  nop();
  this_02 = (RenaissanceChallengeNewManager *)
            Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstance();
  uVar4 = RenaissanceChallengeNewManager::GetResourceId(this_02);
  Sexy::StrFormat("mat_renaissance_challenge_statue_%d",asStack_1c8,uVar4 & 0xffffffff);
  local_220 = PlayerInfo::GetMaterialNum(this_01,asStack_1c8);
  std::string::~string(asStack_1c8);
  pNVar3 = (NameMapperBase *)MaterialItemMapper::GetInstance();
  Sexy::StrFormat("mat_renaissance_challenge_statue_%d",asStack_1c8,uVar4 & 0xffffffff);
  iVar1 = NameMapperBase::GetIdForName(pNVar3,asStack_1c8);
  std::string::~string(asStack_1c8);
  local_21c = 0;
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  __n = aTStack_218;
  std::string::string(asStack_1c8,"");
  FUN_05462980(auStack_178,asStack_1c8);
  std::string::~string(asStack_1c8);
  nop();
  uVar4 = 0;
  while( true ) {
    uVar8 = *(undefined8 *)param_1;
    uVar5 = FUN_03a617d4(uVar8,*(undefined8 *)(param_1 + 8));
    if (uVar5 <= uVar4) break;
    lVar6 = FUN_03a617e0(uVar8,uVar4);
    if (iVar1 == *(int *)(lVar6 + 0x14)) {
      local_21c = *(undefined4 *)(lVar6 + 0x18);
    }
    lVar6 = FUN_03a617e0(uVar8,uVar4);
    FUN_0546065c(auStack_168,*(undefined4 *)(lVar6 + 0x14));
    FUN_054603b8(auStack_168,&DAT_05593348);
    uVar4 = uVar4 + 1;
  }
  TGAAnniversaryTreasureData::TGAAnniversaryTreasureData(aTStack_218);
  std::string::append((string *)aTStack_218,"4",(size_t)__n);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_220);
  FUN_05474278(auStack_208,asStack_1c8);
  std::string::~string(asStack_1c8);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_224);
  FUN_05474278(auStack_1e8,asStack_1c8);
  std::string::~string(asStack_1c8);
  FUN_05462824(asStack_1c8,auStack_178);
  FUN_05474278(auStack_1e0,asStack_1c8);
  std::string::~string(asStack_1c8);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_21c);
  FUN_05474278(auStack_1d8,asStack_1c8);
  std::string::~string(asStack_1c8);
  pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAAnniversaryTreasureData::TGAAnniversaryTreasureData
            ((TGAAnniversaryTreasureData *)asStack_1c8,aTStack_218);
  TGALogMgr::LogFoolChallenge(pTVar7,asStack_1c8);
  TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData((TGAAnniversaryTreasureData *)asStack_1c8)
  ;
  TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData(aTStack_218);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBillingRewardManager::showBundleReward(std::vector<PaymentBundleInfo,
   std::allocator<PaymentBundleInfo> > const&, bool) */

void __thiscall
NewRecallBillingRewardManager::showBundleReward
          (NewRecallBillingRewardManager *this,vector *param_1,bool param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_68 [48];
  GAME_ITEM_INFO aGStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_68);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  local_90 = FUN_03a63c58(*(undefined8 *)param_1);
  local_88 = FUN_03a63ca8(*(undefined8 *)(param_1 + 8));
  if (param_2) {
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1)
    {
      piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
      piVar3 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                      operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                  *)amStack_68,piVar2);
      *piVar3 = piVar2[1];
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_80,piVar2);
      ProfileChangeItemAmount(*piVar2,piVar2[1],false);
      GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
    }
  }
  else {
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1)
    {
      piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
      piVar3 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                      operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                  *)amStack_68,piVar2);
      *piVar3 = piVar2[1];
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_80,piVar2);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
    }
  }
  UIRedPacketResult::create((map *)amStack_68,(vector *)avStack_80,true);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_80);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_68);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBillingRewardManager::showBundleReward(std::vector<ChildrenDayItem,
   std::allocator<ChildrenDayItem> > const&, bool) */

void __thiscall
NewRecallBillingRewardManager::showBundleReward
          (NewRecallBillingRewardManager *this,vector *param_1,bool param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_68 [48];
  GAME_ITEM_INFO aGStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_68);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  local_90 = FUN_03a63894(*(undefined8 *)param_1);
  local_88 = FUN_03a638e4(*(undefined8 *)(param_1 + 8));
  if (param_2) {
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1)
    {
      lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
      puVar3 = (undefined4 *)
               std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
                         ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                          amStack_68,(int *)(lVar2 + 0x14));
      *puVar3 = *(undefined4 *)(lVar2 + 0x18);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_80,(int *)(lVar2 + 0x14));
      ProfileChangeItemAmount(*(int *)(lVar2 + 0x14),*(int *)(lVar2 + 0x18),false);
      GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_90);
    }
  }
  else {
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1)
    {
      lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
      puVar3 = (undefined4 *)
               std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
                         ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                          amStack_68,(int *)(lVar2 + 0x14));
      *puVar3 = *(undefined4 *)(lVar2 + 0x18);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_80,(int *)(lVar2 + 0x14));
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_90);
    }
  }
  UIRedPacketResult::create((map *)amStack_68,(vector *)avStack_80,true);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_80);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_68);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBillingRewardManager::LogTreasurePavilionAndShowBundleReward(std::vector<ChildrenDayItem,
   std::allocator<ChildrenDayItem> > const&, std::string const&, int) */

void __thiscall
NewRecallBillingRewardManager::LogTreasurePavilionAndShowBundleReward
          (NewRecallBillingRewardManager *this,vector *param_1,string *param_2,int param_3)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar2;
  ulong uVar3;
  TGALogMgr *this_02;
  string *__n;
  ulong uVar4;
  undefined8 uVar5;
  int local_1e4 [4];
  int local_1d4;
  int local_1d0;
  int local_1cc;
  string asStack_1c8 [8];
  string asStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_1e4[0] = param_3;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_1c0,"mat_treasure_pavilion_token");
  local_1d4 = PlayerInfo::GetMaterialNum(this_01,asStack_1c0);
  std::string::~string(asStack_1c0);
  nop();
  showBundleReward(this,param_1,true);
  std::string::string(asStack_1c0,"mat_treasure_pavilion_token");
  local_1d0 = PlayerInfo::GetMaterialNum(this_01,asStack_1c0);
  std::string::~string(asStack_1c0);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  __n = asStack_1c8;
  std::string::string(asStack_1c0,"");
  FUN_05462980(auStack_178,asStack_1c0);
  std::string::~string(asStack_1c0);
  nop();
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)param_1;
    uVar3 = FUN_03a617d4(uVar5,*(undefined8 *)(param_1 + 8));
    if (uVar3 <= uVar4) break;
    lVar2 = FUN_03a617e0(uVar5,uVar4);
    uVar5 = FUN_0546065c(auStack_168,*(undefined4 *)(lVar2 + 0x14));
    uVar5 = FUN_054603b8(uVar5,&DAT_05593348);
    lVar2 = FUN_03a617e0(*(undefined8 *)param_1,uVar4);
    uVar5 = FUN_0546065c(uVar5,*(undefined4 *)(lVar2 + 0x18));
    FUN_054603b8(uVar5,&DAT_05594620);
    uVar4 = uVar4 + 1;
  }
  TGATourismOctoberData::TGATourismOctoberData((TGATourismOctoberData *)asStack_1c0);
  std::string::append(asStack_1c0,"3",(size_t)__n);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_1d4);
  FUN_05474278(auStack_1b8,asStack_1c8);
  std::string::~string(asStack_1c8);
  local_1cc = local_1d0 - local_1d4;
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_1cc);
  FUN_05474278(auStack_1b0,asStack_1c8);
  std::string::~string(asStack_1c8);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_1d0);
  FUN_05474278(auStack_1a8,asStack_1c8);
  std::string::~string(asStack_1c8);
  thunk_FUN_05475e00(auStack_198,param_2);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_1e4);
  FUN_05474278(auStack_190,asStack_1c8);
  std::string::~string(asStack_1c8);
  FUN_05462824(asStack_1c8,auStack_178);
  FUN_05474278(auStack_180,asStack_1c8);
  std::string::~string(asStack_1c8);
  this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogTreasurePavilion(this_02,(TGATreasurePavilionData *)asStack_1c0);
  TGATourismOctoberData::~TGATourismOctoberData((TGATourismOctoberData *)asStack_1c0);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBillingRewardManager::LogAutumnHarvest(std::vector<ChildrenDayItem,
   std::allocator<ChildrenDayItem> > const&, std::string const&, int) */

void __thiscall
NewRecallBillingRewardManager::LogAutumnHarvest
          (NewRecallBillingRewardManager *this,vector *param_1,string *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar4;
  ulong uVar5;
  TGALogMgr *this_02;
  string *__n;
  ulong uVar6;
  undefined8 uVar7;
  int local_1c4 [3];
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_1c4[0] = param_3;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_1b0,"mat_autumn_harvest_ticket");
  uVar1 = PlayerInfo::GetMaterialNum(this_01,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  showBundleReward(this,param_1,true);
  std::string::string(asStack_1b0,"mat_autumn_harvest_ticket");
  uVar2 = PlayerInfo::GetMaterialNum(this_01,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  uVar3 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar3);
  __n = asStack_1b8;
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  uVar6 = 0;
  while( true ) {
    uVar7 = *(undefined8 *)param_1;
    uVar5 = FUN_03a617d4(uVar7,*(undefined8 *)(param_1 + 8));
    if (uVar5 <= uVar6) break;
    lVar4 = FUN_03a617e0(uVar7,uVar6);
    uVar7 = FUN_0546065c(auStack_168,*(undefined4 *)(lVar4 + 0x14));
    uVar7 = FUN_054603b8(uVar7,&DAT_05593348);
    lVar4 = FUN_03a617e0(*(undefined8 *)param_1,uVar6);
    uVar7 = FUN_0546065c(uVar7,*(undefined4 *)(lVar4 + 0x18));
    FUN_054603b8(uVar7,&DAT_05594620);
    uVar6 = uVar6 + 1;
  }
  TGALuckyChestData::TGALuckyChestData((TGALuckyChestData *)asStack_1b0);
  std::string::append(asStack_1b0,"2",(size_t)__n);
  thunk_FUN_05475e00(auStack_1a8,param_2);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_1c4);
  FUN_05474278(auStack_1a0,asStack_1b8);
  std::string::~string(asStack_1b8);
  Sexy::StrFormat("%d, %d, %d",asStack_1b8,(ulong)uVar1,(ulong)(uVar2 - uVar1),(ulong)uVar2);
  FUN_05474278(auStack_198,asStack_1b8);
  std::string::~string(asStack_1b8);
  FUN_05462824(asStack_1b8,auStack_178);
  FUN_05474278(auStack_180,asStack_1b8);
  std::string::~string(asStack_1b8);
  this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogAutumnHarvest(this_02,(TGAAutumnHarvestData *)asStack_1b0);
  TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)asStack_1b0);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBillingRewardManager::LogLevelPackage(std::vector<ChildrenDayItem,
   std::allocator<ChildrenDayItem> > const&) */

void __thiscall
NewRecallBillingRewardManager::LogLevelPackage(NewRecallBillingRewardManager *this,vector *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *__s;
  long lVar3;
  ulong uVar4;
  TGALogMgr *this_00;
  string *__n;
  ulong uVar5;
  undefined8 uVar6;
  string asStack_1d8 [8];
  string asStack_1d0 [8];
  string asStack_1c8 [8];
  string asStack_1c0 [8];
  DString aDStack_1b8 [16];
  TGASecretStore aTStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = asStack_1c0;
  TGASecretStore::TGASecretStore(aTStack_1a8);
  DString::DString(aDStack_1b8,3);
  __s = (char *)DString::c_str(aDStack_1b8);
  std::string::append((string *)aTStack_1a8,__s,(size_t)__n);
  DString::~DString(aDStack_1b8);
  iVar1 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::GetSegForId(iVar1,0x2786);
  iVar1 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::GetSegForId(iVar1,0x2786);
  iVar1 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::GetSegForId(iVar1,0x2786);
  iVar1 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::GetSegForId(iVar1,0x2786);
  thunk_FUN_05475e00(auStack_1a0,asStack_1d8);
  thunk_FUN_05475e00(auStack_190,asStack_1d0);
  thunk_FUN_05475e00(auStack_188,asStack_1c8);
  thunk_FUN_05475e00(auStack_180,asStack_1c0);
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  std::string::string((string *)aDStack_1b8,"");
  FUN_05462980(auStack_178,aDStack_1b8);
  std::string::~string((string *)aDStack_1b8);
  nop();
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)param_1;
    uVar4 = FUN_03a617d4(uVar6,*(undefined8 *)(param_1 + 8));
    if (uVar4 <= uVar5) break;
    lVar3 = FUN_03a617e0(uVar6,uVar5);
    uVar6 = FUN_0546065c(auStack_168,*(undefined4 *)(lVar3 + 0x14));
    uVar6 = FUN_054603b8(uVar6,&DAT_05593348);
    lVar3 = FUN_03a617e0(*(undefined8 *)param_1,uVar5);
    uVar6 = FUN_0546065c(uVar6,*(undefined4 *)(lVar3 + 0x18));
    FUN_054603b8(uVar6,&DAT_05594620);
    uVar5 = uVar5 + 1;
  }
  FUN_05462824(aDStack_1b8,auStack_178);
  FUN_05474278(auStack_198,aDStack_1b8);
  std::string::~string((string *)aDStack_1b8);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogLevelPackageData(this_00,(TGALevelPackageData *)aTStack_1a8);
  FUN_054617bc(auStack_178);
  std::string::~string(asStack_1c0);
  std::string::~string(asStack_1c8);
  std::string::~string(asStack_1d0);
  std::string::~string(asStack_1d8);
  DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_1a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBillingRewardManager::LogLevelPackage(std::vector<PaymentBundleInfo,
   std::allocator<PaymentBundleInfo> > const&) */

void __thiscall
NewRecallBillingRewardManager::LogLevelPackage(NewRecallBillingRewardManager *this,vector *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *__s;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  TGALogMgr *this_00;
  string *__n;
  ulong uVar6;
  undefined8 uVar7;
  string asStack_1d8 [8];
  string asStack_1d0 [8];
  string asStack_1c8 [8];
  string asStack_1c0 [8];
  DString aDStack_1b8 [16];
  TGASecretStore aTStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = asStack_1c0;
  TGASecretStore::TGASecretStore(aTStack_1a8);
  DString::DString(aDStack_1b8,3);
  __s = (char *)DString::c_str(aDStack_1b8);
  std::string::append((string *)aTStack_1a8,__s,(size_t)__n);
  DString::~DString(aDStack_1b8);
  iVar1 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::GetSegForId(iVar1,0x2786);
  iVar1 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::GetSegForId(iVar1,0x2786);
  iVar1 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::GetSegForId(iVar1,0x2786);
  iVar1 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::GetSegForId(iVar1,0x2786);
  thunk_FUN_05475e00(auStack_1a0,asStack_1d8);
  thunk_FUN_05475e00(auStack_190,asStack_1d0);
  thunk_FUN_05475e00(auStack_188,asStack_1c8);
  thunk_FUN_05475e00(auStack_180,asStack_1c0);
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  std::string::string((string *)aDStack_1b8,"");
  FUN_05462980(auStack_178,aDStack_1b8);
  std::string::~string((string *)aDStack_1b8);
  nop();
  uVar6 = 0;
  while( true ) {
    uVar7 = *(undefined8 *)param_1;
    uVar5 = FUN_03a617e8(uVar7,*(undefined8 *)(param_1 + 8));
    if (uVar5 <= uVar6) break;
    puVar3 = (undefined4 *)FUN_03a617f4(uVar7,uVar6);
    uVar7 = FUN_0546065c(auStack_168,*puVar3);
    uVar7 = FUN_054603b8(uVar7,&DAT_05593348);
    lVar4 = FUN_03a617f4(*(undefined8 *)param_1,uVar6);
    uVar7 = FUN_0546065c(uVar7,*(undefined4 *)(lVar4 + 4));
    FUN_054603b8(uVar7,&DAT_05594620);
    uVar6 = uVar6 + 1;
  }
  FUN_05462824(aDStack_1b8,auStack_178);
  FUN_05474278(auStack_198,aDStack_1b8);
  std::string::~string((string *)aDStack_1b8);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogLevelPackageData(this_00,(TGALevelPackageData *)aTStack_1a8);
  FUN_054617bc(auStack_178);
  std::string::~string(asStack_1c0);
  std::string::~string(asStack_1c8);
  std::string::~string(asStack_1d0);
  std::string::~string(asStack_1d8);
  DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_1a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBillingRewardManager::LogPennyGiftBox(std::vector<ChildrenDayItem,
   std::allocator<ChildrenDayItem> > const&, std::string const&, int) */

void __thiscall
NewRecallBillingRewardManager::LogPennyGiftBox
          (NewRecallBillingRewardManager *this,vector *param_1,string *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  char *__s;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ulong uVar4;
  long lVar5;
  TGALogMgr *this_02;
  undefined1 *__n;
  undefined8 uVar6;
  string asStack_1c8 [16];
  string asStack_1b8 [8];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [8];
  string asStack_190 [16];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_1b8,"");
  FUN_05462980(auStack_178,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  uVar4 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)param_1;
    uVar3 = FUN_03a617d4(uVar6,*(undefined8 *)(param_1 + 8));
    if (uVar3 <= uVar4) break;
    lVar5 = FUN_03a617e0(uVar6,uVar4);
    uVar6 = FUN_0546065c(auStack_168,*(undefined4 *)(lVar5 + 0x14));
    uVar6 = FUN_054603b8(uVar6,&DAT_05593348);
    lVar5 = FUN_03a617e0(*(undefined8 *)param_1,uVar4);
    uVar6 = FUN_0546065c(uVar6,*(undefined4 *)(lVar5 + 0x18));
    FUN_054603b8(uVar6,&DAT_05594620);
    uVar4 = uVar4 + 1;
  }
  uVar3 = 0;
  TGAPlantWarsData::TGAPlantWarsData((TGAPlantWarsData *)asStack_1b8);
  __n = auStack_168;
  std::string::append(asStack_1b8,"2",(size_t)auStack_168);
  FUN_05462824(asStack_1c8,auStack_178);
  FUN_05474278(auStack_180,asStack_1c8);
  std::string::~string(asStack_1c8);
  thunk_FUN_05475e00(auStack_198,param_2);
  DString::DString((DString *)asStack_1c8,param_3);
  __s = (char *)DString::c_str((DString *)asStack_1c8);
  std::string::append(asStack_190,__s,(size_t)__n);
  DString::~DString((DString *)asStack_1c8);
  std::string::string(asStack_1c8,"");
  FUN_05462980(auStack_178,asStack_1c8);
  std::string::~string(asStack_1c8);
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_1c8,"mat_penny_gift_token");
  iVar2 = PlayerInfo::GetMaterialNum(this_01,asStack_1c8);
  std::string::~string(asStack_1c8);
  nop();
  uVar6 = *(undefined8 *)param_1;
  uVar4 = FUN_03a617d4(uVar6,*(undefined8 *)(param_1 + 8));
  if (uVar4 != 0) {
    do {
      lVar5 = FUN_03a617e0(uVar6,uVar3);
      if (*(int *)(lVar5 + 0x14) == 0x5b3c) {
        uVar6 = FUN_0546065c(auStack_168,iVar2);
        uVar6 = FUN_054603b8(uVar6,&DAT_05593348);
        lVar5 = FUN_03a617e0(*(undefined8 *)param_1,uVar3);
        uVar6 = FUN_0546065c(uVar6,*(undefined4 *)(lVar5 + 0x18));
        uVar6 = FUN_054603b8(uVar6,&DAT_05593348);
        lVar5 = FUN_03a617e0(*(undefined8 *)param_1,uVar3);
        uVar6 = FUN_0546065c(uVar6,iVar2 + *(int *)(lVar5 + 0x18));
        FUN_054603b8(uVar6,&DAT_05594620);
        uVar6 = *(undefined8 *)param_1;
        uVar4 = FUN_03a617d4(uVar6,*(undefined8 *)(param_1 + 8));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  FUN_05462824(asStack_1c8,auStack_178);
  FUN_05474278(auStack_1b0,asStack_1c8);
  std::string::~string(asStack_1c8);
  this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogPennyGiftBox(this_02,(TGAPennyGiftBoxData *)asStack_1b8);
  TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)asStack_1b8);
  FUN_054617bc(auStack_178);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBillingRewardManager::LogLuckyChestBox(std::vector<ChildrenDayItem,
   std::allocator<ChildrenDayItem> > const&, std::string const&, int) */

void __thiscall
NewRecallBillingRewardManager::LogLuckyChestBox
          (NewRecallBillingRewardManager *this,vector *param_1,string *param_2,int param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  char *__s;
  TGALogMgr *this_00;
  string *__n;
  ulong uVar4;
  undefined8 uVar5;
  string asStack_1a8 [16];
  string asStack_198 [8];
  undefined1 auStack_190 [8];
  string asStack_188 [8];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  __n = asStack_1a8;
  std::string::string(asStack_198,"");
  FUN_05462980(auStack_178,asStack_198);
  std::string::~string(asStack_198);
  nop();
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)param_1;
    uVar3 = FUN_03a617d4(uVar5,*(undefined8 *)(param_1 + 8));
    if (uVar3 <= uVar4) break;
    lVar2 = FUN_03a617e0(uVar5,uVar4);
    uVar5 = FUN_0546065c(auStack_168,*(undefined4 *)(lVar2 + 0x14));
    uVar5 = FUN_054603b8(uVar5,&DAT_05593348);
    lVar2 = FUN_03a617e0(*(undefined8 *)param_1,uVar4);
    uVar5 = FUN_0546065c(uVar5,*(undefined4 *)(lVar2 + 0x18));
    FUN_054603b8(uVar5,&DAT_05594620);
    uVar4 = uVar4 + 1;
  }
  TGAAccumulatedLoginData::TGAAccumulatedLoginData((TGAAccumulatedLoginData *)asStack_198);
  std::string::append(asStack_198,"2",(size_t)__n);
  FUN_05462824(asStack_1a8,auStack_178);
  FUN_05474278(auStack_180,asStack_1a8);
  std::string::~string(asStack_1a8);
  thunk_FUN_05475e00(auStack_190,param_2);
  DString::DString((DString *)asStack_1a8,param_3);
  __s = (char *)DString::c_str((DString *)asStack_1a8);
  std::string::append(asStack_188,__s,(size_t)__n);
  DString::~DString((DString *)asStack_1a8);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogLuckyChestShop(this_00,(TGALuckyChestShopData *)asStack_198);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)asStack_198);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* NewRecallBillingRewardManager::androidBillingReward(Sexy::RtWeakPtr<MagentoProductProps>,
   std::vector<PaymentBundleInfo, std::allocator<PaymentBundleInfo> > const&) */

void __thiscall
NewRecallBillingRewardManager::androidBillingReward
          (NewRecallBillingRewardManager *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,
          vector *param_3)

{
  undefined *this_00;
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  wchar_t wVar10;
  long lVar11;
  ProfileMgr *pPVar12;
  PlayerInfo *pPVar13;
  NameMapperBase *pNVar14;
  RenaissanceChallengeNewManager *this_01;
  ulong uVar15;
  undefined4 *puVar16;
  ulong uVar17;
  int *piVar18;
  TGALogMgr *pTVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  PartyAssistMainData *pPVar23;
  NetworkMgr *pNVar24;
  INetworkMsgProcess *pIVar25;
  char *pcVar26;
  vector *__n;
  TGAAnniversaryTreasureData *__n_00;
  size_t sVar27;
  size_t sVar28;
  string *psVar29;
  DString *__n_01;
  __normal_iterator *p_Var30;
  undefined8 uVar31;
  int local_37c;
  int local_378;
  int local_374;
  uint local_370 [6];
  undefined8 local_358;
  undefined1 auStack_350 [8];
  undefined1 auStack_348 [8];
  undefined1 auStack_340 [8];
  undefined1 auStack_338 [8];
  ulong local_330 [2];
  undefined1 auStack_320 [8];
  undefined1 auStack_318 [8];
  undefined1 auStack_310 [8];
  undefined8 local_308;
  undefined1 auStack_300 [8];
  string asStack_2f8 [8];
  undefined1 auStack_2f0 [8];
  undefined1 auStack_2e8 [8];
  undefined1 auStack_2e0 [8];
  undefined1 auStack_2d8 [8];
  undefined1 auStack_2d0 [8];
  undefined1 auStack_2c8 [80];
  undefined8 local_278;
  string asStack_270 [8];
  string asStack_268 [4];
  undefined4 local_264;
  undefined4 local_260 [2];
  string asStack_258 [8];
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  string asStack_230 [184];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [88];
  undefined1 auStack_110 [264];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = param_3;
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  bVar1 = std::operator==((string *)(lVar11 + 0x78),"newrecall_bank");
  if (bVar1) goto LAB_03a662ec;
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  bVar1 = std::operator==((string *)(lVar11 + 0x78),"liondance");
  if (!bVar1) {
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    bVar2 = std::operator==((string *)(lVar11 + 0x78),"easteregg");
    if (!bVar2) {
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      bVar1 = std::operator==((string *)(lVar11 + 0x78),"callofwish");
      if (bVar1) {
        showBundleReward(this,param_3,true);
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                "com.popcap.ios.chs.PVZ2.CallofWishLimit30");
        iVar4 = 1;
        if (bVar1) {
LAB_03a66e80:
          MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyCallofWish,iVar4)
          ;
        }
        else {
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                  "com.popcap.ios.chs.PVZ2.CallofWishLimit68");
          iVar4 = 2;
          if (bVar1) goto LAB_03a66e80;
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                  "com.popcap.ios.chs.PVZ2.CallofWishLimit128");
          iVar4 = 3;
          if (bVar1) goto LAB_03a66e80;
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                  "com.popcap.ios.chs.PVZ2.CallofWishDaily6");
          iVar4 = 4;
          if (bVar1) goto LAB_03a66e80;
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                  "com.popcap.ios.chs.PVZ2.CallofWishDaily12");
          iVar4 = 5;
          if (bVar1) goto LAB_03a66e80;
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                  "com.popcap.ios.chs.PVZ2.CallofWishDaily30");
          if (bVar1) {
            iVar4 = 6;
            goto LAB_03a66e80;
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        lVar11 = FUN_05474374(lVar11 + 0x10,"Daily",0);
        uVar5 = operator|(0x10,8);
        FUN_05462470(auStack_178,uVar5);
        psVar29 = (string *)&local_308;
        std::string::string((string *)&local_278,"");
        FUN_05462980(auStack_178,(string *)&local_278);
        std::string::~string((string *)&local_278);
        nop();
        uVar15 = 0;
        while( true ) {
          uVar31 = *(undefined8 *)param_3;
          uVar17 = FUN_03a617e8(uVar31,*(undefined8 *)(param_3 + 8));
          if (uVar17 <= uVar15) break;
          puVar16 = (undefined4 *)FUN_03a617f4(uVar31,uVar15);
          uVar31 = FUN_0546065c(auStack_168,*puVar16);
          uVar31 = FUN_054603b8(uVar31,&DAT_05593348);
          lVar20 = FUN_03a617f4(*(undefined8 *)param_3,uVar15);
          uVar31 = FUN_0546065c(uVar31,*(undefined4 *)(lVar20 + 4));
          FUN_054603b8(uVar31,&DAT_05594620);
          uVar15 = uVar15 + 1;
        }
        if (lVar11 == -1) {
          TGAAccumulatedLoginData::TGAAccumulatedLoginData((TGAAccumulatedLoginData *)&local_278);
          std::string::append((string *)&local_278,"2",(size_t)psVar29);
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          cVar3 = std::
                  vector<MagentoProductProps::TierPrice,std::allocator<MagentoProductProps::TierPrice>>
                  ::empty((vector<MagentoProductProps::TierPrice,std::allocator<MagentoProductProps::TierPrice>>
                           *)(lVar11 + 0xb0));
          if (cVar3 == '\0') {
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            lVar11 = FUN_03a619d8(*(undefined8 *)(lVar11 + 0xb0));
            std::to_string<float>((float *)(lVar11 + 8));
            FUN_05474278(asStack_270,(string *)&local_308);
            std::string::~string((string *)&local_308);
          }
          else {
            std::string::string((string *)&local_308,"0");
            FUN_05474278(asStack_270,(string *)&local_308);
            std::string::~string((string *)&local_308);
            nop();
          }
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          thunk_FUN_05475e00(asStack_268,lVar11 + 0x10);
          FUN_05462824((string *)&local_308,auStack_178);
          FUN_05474278(local_260,(string *)&local_308);
          std::string::~string((string *)&local_308);
          pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
          TGALogMgr::LogCallofWishLimit(pTVar19,(TGACallofWishLimit *)&local_278);
          TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)&local_278);
        }
        else {
          TGAAccumulatedLoginData::TGAAccumulatedLoginData((TGAAccumulatedLoginData *)&local_278);
          std::string::append((string *)&local_278,"2",(size_t)psVar29);
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          cVar3 = std::
                  vector<MagentoProductProps::TierPrice,std::allocator<MagentoProductProps::TierPrice>>
                  ::empty((vector<MagentoProductProps::TierPrice,std::allocator<MagentoProductProps::TierPrice>>
                           *)(lVar11 + 0xb0));
          if (cVar3 == '\0') {
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            lVar11 = FUN_03a619d8(*(undefined8 *)(lVar11 + 0xb0));
            std::to_string<float>((float *)(lVar11 + 8));
            FUN_05474278(asStack_270,(string *)&local_308);
            std::string::~string((string *)&local_308);
          }
          else {
            std::string::string((string *)&local_308,"0");
            FUN_05474278(asStack_270,(string *)&local_308);
            std::string::~string((string *)&local_308);
            nop();
          }
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          thunk_FUN_05475e00(asStack_268,lVar11 + 0x10);
          FUN_05462824((string *)&local_308,auStack_178);
          FUN_05474278(local_260,(string *)&local_308);
          std::string::~string((string *)&local_308);
          pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
          TGALogMgr::LogCallofWishDaily(pTVar19,(TGACallofWishDaily *)&local_278);
          TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)&local_278);
        }
      }
      else {
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        bVar2 = std::operator==((string *)(lVar11 + 0x78),"wishingpool");
        if (!bVar2) {
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          bVar1 = std::operator==((string *)(lVar11 + 0x78),"futuregift");
          if (bVar1) {
            showBundleReward(this,param_3,true);
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                    "com.popcap.ios.chs.PVZ2.FutureGiftBox6");
            iVar4 = 1;
            if (!bVar1) {
              lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                      "com.popcap.ios.chs.PVZ2.FutureGiftBox30");
              if (bVar1) {
                iVar4 = 2;
              }
              else {
                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                        "com.popcap.ios.chs.PVZ2.FutureGiftBox98");
                iVar4 = 3;
                if (!bVar1) {
                  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                          "com.popcap.ios.chs.PVZ2.FutureGiftBox128");
                  iVar4 = 4;
                  if (!bVar1) goto LAB_03a662ec;
                }
              }
            }
            MessageRouter::Post<int,int>
                      ((MessageRouter *)gMessageRouter,Message::BuyFutureGiftBox,iVar4);
            goto LAB_03a662ec;
          }
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          bVar1 = std::operator==((string *)(lVar11 + 0x78),"pennygift");
          if (bVar1) {
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                    "com.popcap.ios.chs.PVZ2.PennyGiftBox30");
            if (bVar1) {
              uVar6 = 0x1e;
              iVar4 = 0;
            }
            else {
              lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                      "com.popcap.ios.chs.PVZ2.PennyGiftBox68");
              if (bVar1) {
                iVar4 = 1;
                uVar6 = 0x44;
              }
              else {
                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                        "com.popcap.ios.chs.PVZ2.PennyGiftBox198");
                if (bVar1) {
                  iVar4 = 2;
                  uVar6 = 0xc6;
                }
                else {
                  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                          "com.popcap.ios.chs.PVZ2.PennyGiftBox328");
                  if (bVar1) {
                    iVar4 = 3;
                    uVar6 = 0x148;
                  }
                  else {
                    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                    bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                            "com.popcap.ios.chs.PVZ2.PennyGiftBox648");
                    if (bVar1) {
                      iVar4 = 4;
                      uVar6 = 0x288;
                    }
                    else {
                      uVar6 = (uint)bVar1;
                      iVar4 = 0;
                    }
                  }
                }
              }
            }
            std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                      ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_308);
            local_358 = FUN_03a63c58(*(undefined8 *)param_3);
            local_330[0] = FUN_03a63ca8(*(undefined8 *)(param_3 + 8));
            while (bVar1 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_358,(__normal_iterator *)local_330
                                     ), bVar1) {
              puVar16 = (undefined4 *)
                        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_358);
              ChildrenDayItem::ChildrenDayItem((ChildrenDayItem *)&local_278);
              local_264 = *puVar16;
              local_260[0] = puVar16[1];
              std::vector<ChildrenDayItem,std::allocator<ChildrenDayItem>>::push_back
                        ((vector<ChildrenDayItem,std::allocator<ChildrenDayItem>> *)&local_308,
                         (ChildrenDayItem *)&local_278);
              ChildrenDayItem::~ChildrenDayItem((ChildrenDayItem *)&local_278);
              eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                        ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_358);
            }
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            LogPennyGiftBox(this,(vector *)&local_308,(string *)(lVar11 + 0x10),uVar6);
            showBundleReward(this,param_3,true);
            MessageRouter::Post<int,int>
                      ((MessageRouter *)gMessageRouter,Message::BuyPennyGiftBox,iVar4);
            std::vector<ChildrenDayItem,std::allocator<ChildrenDayItem>>::~vector
                      ((vector<ChildrenDayItem,std::allocator<ChildrenDayItem>> *)&local_308);
            goto LAB_03a662ec;
          }
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          bVar1 = std::operator==((string *)(lVar11 + 0x78),"toy_night");
          if (bVar1) {
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                    "com.popcap.ios.chs.PVZ2.WonderfulNight6");
            if (bVar1) {
              uVar6 = 6;
              iVar4 = 0;
            }
            else {
              lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                      "com.popcap.ios.chs.PVZ2.WonderfulNight30");
              if (bVar1) {
                iVar4 = 1;
                uVar6 = 0x1e;
              }
              else {
                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                        "com.popcap.ios.chs.PVZ2.WonderfulNight45");
                if (bVar1) {
                  iVar4 = 3;
                  uVar6 = 0x2d;
                }
                else {
                  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                          "com.popcap.ios.chs.PVZ2.WonderfulNight98");
                  if (bVar1) {
                    iVar4 = 2;
                    uVar6 = 0x62;
                  }
                  else {
                    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                    bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                            "com.popcap.ios.chs.PVZ2.WonderfulNight198");
                    if (bVar1) {
                      iVar4 = 4;
                      uVar6 = 0xc6;
                    }
                    else {
                      uVar6 = (uint)bVar1;
                      iVar4 = 0;
                    }
                  }
                }
              }
            }
            std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                      ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_308);
            local_358 = FUN_03a63c58(*(undefined8 *)param_3);
            local_330[0] = FUN_03a63ca8(*(undefined8 *)(param_3 + 8));
            while (bVar1 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_358,(__normal_iterator *)local_330
                                     ), bVar1) {
              puVar16 = (undefined4 *)
                        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_358);
              ChildrenDayItem::ChildrenDayItem((ChildrenDayItem *)&local_278);
              local_264 = *puVar16;
              local_260[0] = puVar16[1];
              std::vector<ChildrenDayItem,std::allocator<ChildrenDayItem>>::push_back
                        ((vector<ChildrenDayItem,std::allocator<ChildrenDayItem>> *)&local_308,
                         (ChildrenDayItem *)&local_278);
              ChildrenDayItem::~ChildrenDayItem((ChildrenDayItem *)&local_278);
              eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                        ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_358);
            }
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            LogToyNight(this,(vector *)&local_308,(string *)(lVar11 + 0x10),uVar6);
            showBundleReward(this,param_3,true);
            MessageRouter::Post<int,int>
                      ((MessageRouter *)gMessageRouter,Message::OnBuyToyNight,iVar4);
            std::vector<ChildrenDayItem,std::allocator<ChildrenDayItem>>::~vector
                      ((vector<ChildrenDayItem,std::allocator<ChildrenDayItem>> *)&local_308);
            goto LAB_03a662ec;
          }
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          bVar1 = std::operator==((string *)(lVar11 + 0x78),"autumnHarvest");
          if (bVar1) {
            local_330[0] = local_330[0] & 0xffffffff00000000;
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                    "com.popcap.ios.chs.PVZ2.HarvestBattle6");
            if (bVar1) {
              iVar4 = 0;
              local_330[0] = CONCAT44(local_330[0]._4_4_,6);
            }
            else {
              lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                      "com.popcap.ios.chs.PVZ2.HarvestBattle30");
              if (bVar1) {
                iVar4 = 1;
                    /* WARNING: Ignoring partial resolution of indirect */
                local_330[0]._0_4_ = L'\x1e';
              }
              else {
                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                        "com.popcap.ios.chs.PVZ2.HarvestBattle98");
                if (bVar1) {
                  iVar4 = 2;
                    /* WARNING: Ignoring partial resolution of indirect */
                  local_330[0]._0_4_ = L'b';
                }
                else {
                  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                          "com.popcap.ios.chs.PVZ2.HarvestBattle45");
                  if (bVar1) {
                    iVar4 = 3;
                    /* WARNING: Ignoring partial resolution of indirect */
                    local_330[0]._0_4_ = L'-';
                  }
                  else {
                    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                    bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                            "com.popcap.ios.chs.PVZ2.HarvestBattle68");
                    iVar4 = 0;
                    if (bVar1) {
                      iVar4 = 4;
                    /* WARNING: Ignoring partial resolution of indirect */
                      local_330[0]._0_4_ = L'D';
                    }
                  }
                }
              }
            }
            pPVar12 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
            pPVar13 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar12);
            std::string::string((string *)&local_278,"mat_autumn_harvest_ticket");
            uVar6 = PlayerInfo::GetMaterialNum(pPVar13,(string *)&local_278);
            std::string::~string((string *)&local_278);
            nop();
            showBundleReward(this,param_3,true);
            std::string::string((string *)&local_278,"mat_autumn_harvest_ticket");
            uVar7 = PlayerInfo::GetMaterialNum(pPVar13,(string *)&local_278);
            std::string::~string((string *)&local_278);
            nop();
            uVar5 = operator|(0x10,8);
            FUN_05462470(auStack_178,uVar5);
            psVar29 = (string *)&local_308;
            std::string::string((string *)&local_278,"");
            FUN_05462980(auStack_178,(string *)&local_278);
            std::string::~string((string *)&local_278);
            nop();
            uVar15 = 0;
            while( true ) {
              uVar31 = *(undefined8 *)param_3;
              uVar17 = FUN_03a617e8(uVar31,*(undefined8 *)(param_3 + 8));
              if (uVar17 <= uVar15) break;
              puVar16 = (undefined4 *)FUN_03a617f4(uVar31,uVar15);
              uVar31 = FUN_0546065c(auStack_168,*puVar16);
              uVar31 = FUN_054603b8(uVar31,&DAT_05593348);
              lVar11 = FUN_03a617f4(*(undefined8 *)param_3,uVar15);
              uVar31 = FUN_0546065c(uVar31,*(undefined4 *)(lVar11 + 4));
              FUN_054603b8(uVar31,&DAT_05594620);
              uVar15 = uVar15 + 1;
            }
            TGALuckyChestData::TGALuckyChestData((TGALuckyChestData *)&local_278);
            std::string::append((string *)&local_278,"2",(size_t)psVar29);
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            thunk_FUN_05475e00(asStack_270,lVar11 + 0x10);
            std::to_string<ActivityTypeID>((ActivityTypeID *)local_330);
            FUN_05474278(asStack_268,(string *)&local_308);
            std::string::~string((string *)&local_308);
            Sexy::StrFormat("%d, %d, %d",(string *)&local_308,(ulong)uVar6,(ulong)(uVar7 - uVar6),
                            (ulong)uVar7);
            FUN_05474278(local_260,(string *)&local_308);
            std::string::~string((string *)&local_308);
            FUN_05462824((string *)&local_308,auStack_178);
            FUN_05474278(auStack_248,(string *)&local_308);
            std::string::~string((string *)&local_308);
            pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
            TGALogMgr::LogAutumnHarvest(pTVar19,(TGAAutumnHarvestData *)&local_278);
            MessageRouter::Post<int,int>
                      ((MessageRouter *)gMessageRouter,Message::BuyAutumnHarvest,iVar4);
            TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)&local_278);
            FUN_054617bc(auStack_178);
            goto LAB_03a662ec;
          }
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          bVar1 = std::operator==((string *)(lVar11 + 0x78),"giftforeturn");
          if (!bVar1) {
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            bVar1 = std::operator==((string *)(lVar11 + 0x78),"luckBox");
            if (!bVar1) {
              lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              bVar1 = std::operator==((string *)(lVar11 + 0x78),"daveKitchen");
              if (bVar1 != 0) {
                showBundleReward(this,param_3,true);
                local_330[0] = local_330[0] & 0xffffffff00000000;
                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                        "com.popcap.ios.chs.PVZ2.DaveKitchen6");
                if (bVar1) {
                  MessageRouter::Post<int,int>
                            ((MessageRouter *)gMessageRouter,Message::BuyDaveKitchen,1);
                    /* WARNING: Ignoring partial resolution of indirect */
                  local_330[0]._0_4_ = L'\x06';
                }
                else {
                  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                          "com.popcap.ios.chs.PVZ2.DaveKitchen68");
                  if (bVar1) {
                    MessageRouter::Post<int,int>
                              ((MessageRouter *)gMessageRouter,Message::BuyDaveKitchen,2);
                    /* WARNING: Ignoring partial resolution of indirect */
                    local_330[0]._0_4_ = L'D';
                  }
                }
                uVar5 = operator|(0x10,8);
                FUN_05462470(auStack_178,uVar5);
                psVar29 = (string *)&local_308;
                std::string::string((string *)&local_278,"");
                FUN_05462980(auStack_178,(string *)&local_278);
                std::string::~string((string *)&local_278);
                nop();
                uVar15 = 0;
                while( true ) {
                  uVar31 = *(undefined8 *)param_3;
                  uVar17 = FUN_03a617e8(uVar31,*(undefined8 *)(param_3 + 8));
                  if (uVar17 <= uVar15) break;
                  puVar16 = (undefined4 *)FUN_03a617f4(uVar31,uVar15);
                  uVar31 = FUN_0546065c(auStack_168,*puVar16);
                  uVar31 = FUN_054603b8(uVar31,&DAT_05593348);
                  lVar11 = FUN_03a617f4(*(undefined8 *)param_3,uVar15);
                  uVar31 = FUN_0546065c(uVar31,*(undefined4 *)(lVar11 + 4));
                  FUN_054603b8(uVar31,&DAT_05594620);
                  uVar15 = uVar15 + 1;
                }
                TGASecretStore::TGASecretStore((TGASecretStore *)&local_278);
                std::string::append((string *)&local_278,"3",(size_t)psVar29);
                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                thunk_FUN_05475e00(asStack_268,lVar11 + 0x10);
                std::to_string<ActivityTypeID>((ActivityTypeID *)local_330);
                FUN_05474278(local_260,(string *)&local_308);
                std::string::~string((string *)&local_308);
                FUN_05462824((string *)&local_308,auStack_178);
                FUN_05474278(auStack_250,(string *)&local_308);
                std::string::~string((string *)&local_308);
                pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
                TGALogMgr::LogDaveKitchenData(pTVar19,(TGADaveKitchenData *)&local_278);
                DropGroupNode::~DropGroupNode((DropGroupNode *)&local_278);
                FUN_054617bc(auStack_178);
                goto LAB_03a662ec;
              }
              lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              bVar2 = std::operator==((string *)(lVar11 + 0x78),"dragonTreasure");
              if (bVar2) {
                showBundleReward(this,param_3,true);
                local_370[0] = (uint)bVar1;
                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                bVar2 = std::operator==((string *)(lVar11 + 0x10),
                                        "com.popcap.ios.chs.PVZ2.DragonClanTreasures45");
                if (bVar2) {
                  MessageRouter::Post<int,int>
                            ((MessageRouter *)gMessageRouter,Message::BuyDragonTreasure,(uint)bVar1)
                  ;
                  local_370[0] = 0x2d;
                }
                else {
                  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                          "com.popcap.ios.chs.PVZ2.DragonClanTreasures68");
                  if (bVar1) {
                    MessageRouter::Post<int,int>
                              ((MessageRouter *)gMessageRouter,Message::BuyDragonTreasure,1);
                    local_370[0] = 0x44;
                  }
                  else {
                    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                    bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                            "com.popcap.ios.chs.PVZ2.DragonClanTreasures30");
                    if (bVar1) {
                      MessageRouter::Post<int,int>
                                ((MessageRouter *)gMessageRouter,Message::BuyDragonTreasure,2);
                      local_370[0] = 0x1e;
                    }
                    else {
                      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                      bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                              "com.popcap.ios.chs.PVZ2.DragonClanTreasures60");
                      if (bVar1) {
                        MessageRouter::Post<int,int>
                                  ((MessageRouter *)gMessageRouter,Message::BuyDragonTreasure,3);
                        local_370[0] = 0x3c;
                      }
                      else {
                        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                        bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                                "com.popcap.ios.chs.PVZ2.DragonClanTreasures128");
                        if (bVar1) {
                          MessageRouter::Post<int,int>
                                    ((MessageRouter *)gMessageRouter,Message::BuyDragonTreasure,4);
                          local_370[0] = 0x80;
                        }
                      }
                    }
                  }
                }
                uVar5 = operator|(0x10,8);
                FUN_05462470(auStack_178,uVar5);
                std::string::string((string *)&local_278,"");
                FUN_05462980(auStack_178,(string *)&local_278);
                std::string::~string((string *)&local_278);
                nop();
                uVar31 = *(undefined8 *)param_3;
                lVar11 = FUN_03a617e8(uVar31,*(undefined8 *)(param_3 + 8));
                uVar15 = 0;
                if (lVar11 != 0) {
                  do {
                    puVar16 = (undefined4 *)FUN_03a617f4(uVar31,uVar15);
                    uVar31 = FUN_0546065c(auStack_168,*puVar16);
                    uVar31 = FUN_054603b8(uVar31,&DAT_05593348);
                    uVar17 = uVar15 + 1;
                    lVar11 = FUN_03a617f4(*(undefined8 *)param_3,uVar15);
                    uVar31 = FUN_0546065c(uVar31,*(undefined4 *)(lVar11 + 4));
                    FUN_054603b8(uVar31,&DAT_05594620);
                    uVar31 = *(undefined8 *)param_3;
                    uVar21 = FUN_03a617e8(uVar31,*(undefined8 *)(param_3 + 8));
                    uVar15 = uVar17;
                  } while (uVar17 < uVar21);
                }
                pPVar12 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
                pPVar13 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar12);
                std::string::string((string *)&local_278,"mat_dragon_treasure_crystal");
                uVar5 = PlayerInfo::GetMaterialNum(pPVar13,(string *)&local_278);
                local_358 = CONCAT44(local_358._4_4_,uVar5);
                std::string::~string((string *)&local_278);
                nop();
                psVar29 = (string *)&local_308;
                std::string::string((string *)&local_278,"mat_dragon_treasure_integral");
                uVar5 = PlayerInfo::GetMaterialNum(pPVar13,(string *)&local_278);
                local_330[0] = CONCAT44(local_330[0]._4_4_,uVar5);
                std::string::~string((string *)&local_278);
                nop();
                TGATourismOctoberData::TGATourismOctoberData((TGATourismOctoberData *)&local_278);
                std::string::append((string *)&local_278,"5",(size_t)psVar29);
                std::to_string<ActivityTypeID>((ActivityTypeID *)&local_358);
                FUN_05474278(asStack_270,(string *)&local_308);
                std::string::~string((string *)&local_308);
                std::to_string<ActivityTypeID>((ActivityTypeID *)local_330);
                FUN_05474278(asStack_268,(string *)&local_308);
                std::string::~string((string *)&local_308);
                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                thunk_FUN_05475e00(auStack_248,lVar11 + 0x10);
                std::to_string<ActivityTypeID>((ActivityTypeID *)local_370);
                FUN_05474278(auStack_240,(string *)&local_308);
                std::string::~string((string *)&local_308);
                FUN_05462824((string *)&local_308,auStack_178);
                FUN_05474278(auStack_238,(string *)&local_308);
                std::string::~string((string *)&local_308);
                pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
                TGALogMgr::LogDragonTreasure(pTVar19,(TGADragonTreasureData *)&local_278);
                TGATourismOctoberData::~TGATourismOctoberData((TGATourismOctoberData *)&local_278);
                FUN_054617bc(auStack_178);
                goto LAB_03a662ec;
              }
              lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              bVar1 = std::operator==((string *)(lVar11 + 0x78),"treasure_pavilion");
              if (bVar1) {
                pPVar12 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
                pPVar13 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar12);
                std::string::string((string *)&local_278,"mat_treasure_pavilion_token");
                local_374 = PlayerInfo::GetMaterialNum(pPVar13,(string *)&local_278);
                std::string::~string((string *)&local_278);
                nop();
                showBundleReward(this,param_3,true);
                std::string::string((string *)&local_278,"mat_treasure_pavilion_token");
                local_370[0] = PlayerInfo::GetMaterialNum(pPVar13,(string *)&local_278);
                std::string::~string((string *)&local_278);
                nop();
                    /* WARNING: Ignoring partial resolution of indirect */
                local_358._0_4_ = L'\0';
                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                        "com.popcap.ios.chs.PVZ2.JuBaoPavilion30");
                if (bVar1) {
                  MessageRouter::Post<int,int>
                            ((MessageRouter *)gMessageRouter,Message::BuyTreasurePavilion,0);
                    /* WARNING: Ignoring partial resolution of indirect */
                  local_358._0_4_ = L'\x1e';
                }
                else {
                  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                          "com.popcap.ios.chs.PVZ2.JuBaoPavilion98");
                  if (bVar1) {
                    MessageRouter::Post<int,int>
                              ((MessageRouter *)gMessageRouter,Message::BuyTreasurePavilion,1);
                    /* WARNING: Ignoring partial resolution of indirect */
                    local_358._0_4_ = L'b';
                  }
                  else {
                    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                    bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                            "com.popcap.ios.chs.PVZ2.JuBaoPavilion328");
                    if (bVar1) {
                      MessageRouter::Post<int,int>
                                ((MessageRouter *)gMessageRouter,Message::BuyTreasurePavilion,2);
                    /* WARNING: Ignoring partial resolution of indirect */
                      local_358._0_4_ = L'ň';
                    }
                    else {
                      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                      bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                              "com.popcap.ios.chs.PVZ2.JuBaoPavilion648");
                      if (bVar1) {
                        MessageRouter::Post<int,int>
                                  ((MessageRouter *)gMessageRouter,Message::BuyTreasurePavilion,3);
                    /* WARNING: Ignoring partial resolution of indirect */
                        local_358._0_4_ = L'ʈ';
                      }
                    }
                  }
                }
                uVar5 = operator|(0x10,8);
                FUN_05462470(auStack_178,uVar5);
                std::string::string((string *)&local_278,"");
                FUN_05462980(auStack_178,(string *)&local_278);
                std::string::~string((string *)&local_278);
                nop();
                uVar15 = 0;
                while( true ) {
                  sVar27 = *(size_t *)param_3;
                  uVar17 = FUN_03a617e8(sVar27,*(undefined8 *)(param_3 + 8));
                  if (uVar17 <= uVar15) break;
                  puVar16 = (undefined4 *)FUN_03a617f4(sVar27,uVar15);
                  uVar31 = FUN_0546065c(auStack_168,*puVar16);
                  uVar31 = FUN_054603b8(uVar31,&DAT_05593348);
                  lVar11 = FUN_03a617f4(*(undefined8 *)param_3,uVar15);
                  uVar31 = FUN_0546065c(uVar31,*(undefined4 *)(lVar11 + 4));
                  FUN_054603b8(uVar31,&DAT_05594620);
                  uVar15 = uVar15 + 1;
                }
                TGATourismOctoberData::TGATourismOctoberData((TGATourismOctoberData *)&local_278);
                std::string::append((string *)&local_278,"3",sVar27);
                std::to_string<ActivityTypeID>((ActivityTypeID *)&local_374);
                FUN_05474278(asStack_270,(string *)&local_308);
                std::string::~string((string *)&local_308);
                local_330[0] = CONCAT44(local_330[0]._4_4_,local_370[0] - local_374);
                std::to_string<ActivityTypeID>((ActivityTypeID *)local_330);
                FUN_05474278(asStack_268,(string *)&local_308);
                std::string::~string((string *)&local_308);
                std::to_string<ActivityTypeID>((ActivityTypeID *)local_370);
                FUN_05474278(local_260,(string *)&local_308);
                std::string::~string((string *)&local_308);
                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                thunk_FUN_05475e00(auStack_250,lVar11 + 0x10);
                std::to_string<ActivityTypeID>((ActivityTypeID *)&local_358);
                FUN_05474278(auStack_248,(string *)&local_308);
                std::string::~string((string *)&local_308);
                FUN_05462824((string *)&local_308,auStack_178);
                FUN_05474278(auStack_238,(string *)&local_308);
                std::string::~string((string *)&local_308);
                pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
                TGALogMgr::LogTreasurePavilion(pTVar19,(TGATreasurePavilionData *)&local_278);
                TGATourismOctoberData::~TGATourismOctoberData((TGATourismOctoberData *)&local_278);
                FUN_054617bc(auStack_178);
                goto LAB_03a662ec;
              }
              lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              bVar1 = std::operator==((string *)(lVar11 + 0x78),"plantcultivate");
              if (bVar1) {
                showBundleReward(this,param_3,true);
                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                        "com.popcap.ios.chs.PVZ2.PlantCultivate20");
                if (bVar1) {
                  MessageRouter::Post<int,int>
                            ((MessageRouter *)gMessageRouter,Message::BuyPlantCultivate,0);
                }
                uVar5 = operator|(0x10,8);
                FUN_05462470(auStack_178,uVar5);
                psVar29 = (string *)&local_308;
                std::string::string((string *)&local_278,"");
                FUN_05462980(auStack_178,(string *)&local_278);
                std::string::~string((string *)&local_278);
                nop();
                uVar15 = 0;
                while( true ) {
                  uVar31 = *(undefined8 *)param_3;
                  uVar17 = FUN_03a617e8(uVar31,*(undefined8 *)(param_3 + 8));
                  if (uVar17 <= uVar15) break;
                  puVar16 = (undefined4 *)FUN_03a617f4(uVar31,uVar15);
                  uVar31 = FUN_0546065c(auStack_168,*puVar16);
                  uVar31 = FUN_054603b8(uVar31,&DAT_05593348);
                  lVar11 = FUN_03a617f4(*(undefined8 *)param_3,uVar15);
                  uVar31 = FUN_0546065c(uVar31,*(undefined4 *)(lVar11 + 4));
                  FUN_054603b8(uVar31,&DAT_05594620);
                  uVar15 = uVar15 + 1;
                }
                TGALuckyChestData::TGALuckyChestData((TGALuckyChestData *)&local_278);
                std::string::append((string *)&local_278,"6",(size_t)psVar29);
                std::string::append(asStack_258,"com.popcap.ios.chs.PVZ2.PlantCultivate20",
                                    (size_t)psVar29);
                FUN_05462824((string *)&local_308,auStack_178);
                FUN_05474278(auStack_248,(string *)&local_308);
                std::string::~string((string *)&local_308);
                pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
                TGALogMgr::LogAnniversaryNurturingData
                          (pTVar19,(TGAAnniversaryNurturingData *)&local_278);
                TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)&local_278);
                FUN_054617bc(auStack_178);
                goto LAB_03a662ec;
              }
              lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              bVar1 = std::operator==((string *)(lVar11 + 0x78),"limitedsummon");
              if (bVar1) {
                showBundleReward(this,param_3,true);
                local_330[0] = local_330[0] & 0xffffffff00000000;
                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                        "com.popcap.ios.chs.PVZ2.LimitedSummonVIP30");
                sVar27 = (size_t)bVar1;
                if (bVar1) {
                  sVar27 = 0xffffffff;
                  MessageRouter::Post<int,int>
                            ((MessageRouter *)gMessageRouter,Message::BuyLimitedSummon,-1);
                  TGASecretStore::TGASecretStore((TGASecretStore *)&local_278);
                  std::string::append((string *)&local_278,"2",sVar27);
                  std::string::append(asStack_268,"30",sVar27);
                  pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
                  TGALogMgr::LogLimitedSummon(pTVar19,(TGALimitedSummonData *)&local_278);
                  DropGroupNode::~DropGroupNode((DropGroupNode *)&local_278);
                }
                else {
                  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                          "com.popcap.ios.chs.PVZ2.LimitedSummon6");
                  if (bVar1) {
                    MessageRouter::Post<int,int>
                              ((MessageRouter *)gMessageRouter,Message::BuyLimitedSummon,0);
                    /* WARNING: Ignoring partial resolution of indirect */
                    local_330[0]._0_4_ = L'\x06';
                  }
                  else {
                    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                    bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                            "com.popcap.ios.chs.PVZ2.LimitedSummon30");
                    if (bVar1) {
                      sVar27 = 1;
                      MessageRouter::Post<int,int>
                                ((MessageRouter *)gMessageRouter,Message::BuyLimitedSummon,1);
                    /* WARNING: Ignoring partial resolution of indirect */
                      local_330[0]._0_4_ = L'\x1e';
                    }
                    else {
                      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                      bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                              "com.popcap.ios.chs.PVZ2.LimitedSummon98");
                      if (bVar1) {
                        sVar27 = 2;
                        MessageRouter::Post<int,int>
                                  ((MessageRouter *)gMessageRouter,Message::BuyLimitedSummon,2);
                    /* WARNING: Ignoring partial resolution of indirect */
                        local_330[0]._0_4_ = L'b';
                      }
                      else {
                        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                        bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                                "com.popcap.ios.chs.PVZ2.LimitedSummon328");
                        if (bVar1) {
                          sVar27 = 3;
                          MessageRouter::Post<int,int>
                                    ((MessageRouter *)gMessageRouter,Message::BuyLimitedSummon,3);
                    /* WARNING: Ignoring partial resolution of indirect */
                          local_330[0]._0_4_ = L'ň';
                        }
                      }
                    }
                  }
                  TGASecretStore::TGASecretStore((TGASecretStore *)&local_278);
                  std::string::append((string *)&local_278,"7",sVar27);
                  std::to_string<ActivityTypeID>((ActivityTypeID *)local_330);
                  FUN_05474278(asStack_268,(string *)&local_308);
                  std::string::~string((string *)&local_308);
                  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  thunk_FUN_05475e00(auStack_250,lVar11 + 0x10);
                  uVar5 = operator|(0x10,8);
                  FUN_05462470(auStack_178,uVar5);
                  std::string::string((string *)&local_308,"");
                  FUN_05462980(auStack_178,(string *)&local_308);
                  std::string::~string((string *)&local_308);
                  nop();
                  uVar15 = 0;
                  while( true ) {
                    uVar31 = *(undefined8 *)param_3;
                    uVar17 = FUN_03a617e8(uVar31,*(undefined8 *)(param_3 + 8));
                    if (uVar17 <= uVar15) break;
                    puVar16 = (undefined4 *)FUN_03a617f4(uVar31,uVar15);
                    uVar31 = FUN_0546065c(auStack_168,*puVar16);
                    uVar31 = FUN_054603b8(uVar31,&DAT_05593348);
                    lVar11 = FUN_03a617f4(*(undefined8 *)param_3,uVar15);
                    uVar31 = FUN_0546065c(uVar31,*(undefined4 *)(lVar11 + 4));
                    FUN_054603b8(uVar31,&DAT_05594620);
                    uVar15 = uVar15 + 1;
                  }
                  FUN_05462824((string *)&local_308,auStack_178);
                  FUN_05474278(asStack_258,(string *)&local_308);
                  std::string::~string((string *)&local_308);
                  pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
                  TGALogMgr::LogLimitedSummon(pTVar19,(TGALimitedSummonData *)&local_278);
                  FUN_054617bc(auStack_178);
                  DropGroupNode::~DropGroupNode((DropGroupNode *)&local_278);
                }
                goto LAB_03a662ec;
              }
              lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              bVar1 = std::operator==((string *)(lVar11 + 0x78),"carnival");
              sVar27 = (size_t)bVar1;
              if (!bVar1) {
                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                bVar1 = std::operator==((string *)(lVar11 + 0x78),"newyeargoods");
                if (!bVar1) {
                  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  bVar1 = std::operator==((string *)(lVar11 + 0x78),"genefactor");
                  if (!bVar1) {
                    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                    bVar1 = std::operator==((string *)(lVar11 + 0x78),"smashGoldenEggs");
                    if (bVar1) {
                      showBundleReward(this,param_3,true);
                      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                      bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                              "com.popcap.ios.chs.PVZ2.SmashGoldenEggs6");
                      iVar4 = 0;
                      if (!bVar1) {
                        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                        bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                                "com.popcap.ios.chs.PVZ2.SmashGoldenEggs30");
                        if (bVar1) {
                          iVar4 = 1;
                        }
                        else {
                          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                          bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                                  "com.popcap.ios.chs.PVZ2.SmashGoldenEggs68");
                          iVar4 = 2;
                          if (!bVar1) {
                            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                            bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                                    "com.popcap.ios.chs.PVZ2.SmashGoldenEggs128");
                            iVar4 = 3;
                            if (!bVar1) goto LAB_03a662ec;
                          }
                        }
                      }
                      MessageRouter::Post<int,int>
                                ((MessageRouter *)gMessageRouter,Message::BuyGoldenEgg,iVar4);
                      goto LAB_03a662ec;
                    }
                    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                    bVar1 = std::operator==((string *)(lVar11 + 0x78),"arbordaykettle");
                    sVar27 = (size_t)bVar1;
                    if (!bVar1) {
                      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                      bVar2 = std::operator==((string *)(lVar11 + 0x78),"growthpackage");
                      if (bVar2) {
                        sVar28 = 1;
                        showBundleReward(this,param_3,true);
                        local_330[0] = local_330[0] & 0xffffffff00000000;
                        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                        bVar2 = std::operator==((string *)(lVar11 + 0x10),
                                                "com.popcap.ios.chs.PVZ2.GrowthPackage1");
                        if (bVar2) {
                          MessageRouter::Post<int,int>
                                    ((MessageRouter *)gMessageRouter,Message::BuyGrowthPackage,
                                     (uint)bVar1);
                    /* WARNING: Ignoring partial resolution of indirect */
                          local_330[0]._0_4_ = L'\x01';
                          sVar28 = sVar27;
                        }
                        else {
                          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                          bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                                  "com.popcap.ios.chs.PVZ2.GrowthPackage6");
                          if (bVar1) {
                            sVar28 = 1;
                            MessageRouter::Post<int,int>
                                      ((MessageRouter *)gMessageRouter,Message::BuyGrowthPackage,1);
                    /* WARNING: Ignoring partial resolution of indirect */
                            local_330[0]._0_4_ = L'\x06';
                          }
                          else {
                            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                            bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                                    "com.popcap.ios.chs.PVZ2.GrowthPackage30");
                            if (bVar1) {
                              sVar28 = 2;
                              MessageRouter::Post<int,int>
                                        ((MessageRouter *)gMessageRouter,Message::BuyGrowthPackage,2
                                        );
                    /* WARNING: Ignoring partial resolution of indirect */
                              local_330[0]._0_4_ = L'\x1e';
                            }
                          }
                        }
                        TGASecretStore::TGASecretStore((TGASecretStore *)&local_308);
                        std::string::append((string *)&local_308,"2",sVar28);
                        if ((wchar_t)local_330[0] == L'\x01') {
                          std::string::append(asStack_2f8,"1",sVar28);
                        }
                        else if ((wchar_t)local_330[0] == L'\x06') {
                          std::string::append(asStack_2f8,"8",sVar28);
                        }
                        else if ((wchar_t)local_330[0] == L'\x1e') {
                          std::string::append(asStack_2f8,"35",sVar28);
                        }
                        std::to_string<ActivityTypeID>((ActivityTypeID *)local_330);
                        FUN_05474278(auStack_2f0,(string *)&local_278);
                        std::string::~string((string *)&local_278);
                        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                        thunk_FUN_05475e00(auStack_2e8,lVar11 + 0x10);
                        uVar5 = operator|(0x10,8);
                        FUN_05462470(auStack_178,uVar5);
                        std::string::string((string *)&local_278,"");
                        FUN_05462980(auStack_178,(string *)&local_278);
                        std::string::~string((string *)&local_278);
                        nop();
                        uVar15 = 0;
                        while( true ) {
                          uVar31 = *(undefined8 *)param_3;
                          uVar17 = FUN_03a617e8(uVar31,*(undefined8 *)(param_3 + 8));
                          if (uVar17 <= uVar15) break;
                          puVar16 = (undefined4 *)FUN_03a617f4(uVar31,uVar15);
                          uVar31 = FUN_0546065c(auStack_168,*puVar16);
                          uVar31 = FUN_054603b8(uVar31,&DAT_05593348);
                          lVar11 = FUN_03a617f4(*(undefined8 *)param_3,uVar15);
                          uVar31 = FUN_0546065c(uVar31,*(undefined4 *)(lVar11 + 4));
                          FUN_054603b8(uVar31,&DAT_05594620);
                          uVar15 = uVar15 + 1;
                        }
                        FUN_05462824((string *)&local_278,auStack_178);
                        FUN_05474278(auStack_2e0,(string *)&local_278);
                        std::string::~string((string *)&local_278);
                        pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
                        TGASecretStore::TGASecretStore
                                  ((TGASecretStore *)&local_278,(TGASecretStore *)&local_308);
                        TGALogMgr::LogGrowthPackage(pTVar19,(string *)&local_278);
                        DropGroupNode::~DropGroupNode((DropGroupNode *)&local_278);
                        FUN_054617bc(auStack_178);
                        DropGroupNode::~DropGroupNode((DropGroupNode *)&local_308);
                      }
                      else {
                        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                        bVar1 = std::operator==((string *)(lVar11 + 0x78),"battleorder");
                        if (bVar1) {
                          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                          bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                                  "com.popcap.ios.chs.PVZ2.summercamp68");
                          sVar27 = (size_t)bVar1;
                          if (bVar1) {
                            MessageRouter::Post((_func_void *)gMessageRouter);
                            TGAAnniversaryTreasureData::TGAAnniversaryTreasureData
                                      ((TGAAnniversaryTreasureData *)&local_278);
                            std::string::append((string *)&local_278,"6",sVar27);
                            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                            thunk_FUN_05475e00(auStack_238,lVar11 + 0x10);
                            std::string::append(asStack_230,"68",sVar27);
                            pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
                            TGALogMgr::LogBattleOrderInfo(pTVar19,(TGABattleOrderData *)&local_278);
                            TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData
                                      ((TGAAnniversaryTreasureData *)&local_278);
                          }
                          else {
                            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                            bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                                    "com.popcap.ios.chs.PVZ2.summercamp6");
                            if (bVar1) {
                              MessageRouter::Post<int,int>
                                        ((MessageRouter *)gMessageRouter,
                                         Message::BuyBattleOrderBundle,0);
                              lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                              LogBattleOrderPackage(this,(string *)(lVar11 + 0x10),6,0x4b0);
                            }
                            else {
                              lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                              bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                                      "com.popcap.ios.chs.PVZ2.summercamp8");
                              if (bVar1) {
                                MessageRouter::Post<int,int>
                                          ((MessageRouter *)gMessageRouter,
                                           Message::BuyBattleOrderBundle,1);
                                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                LogBattleOrderPackage(this,(string *)(lVar11 + 0x10),8,2000);
                              }
                              else {
                                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                                        "com.popcap.ios.chs.PVZ2.summercamp18");
                                if (bVar1) {
                                  MessageRouter::Post<int,int>
                                            ((MessageRouter *)gMessageRouter,
                                             Message::BuyBattleOrderBundle,2);
                                  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                  LogBattleOrderPackage(this,(string *)(lVar11 + 0x10),0x12,5000);
                                }
                                else {
                                  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                  bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                                          "com.popcap.ios.chs.PVZ2.summercamp45");
                                  if (bVar1) {
                                    MessageRouter::Post<int,int>
                                              ((MessageRouter *)gMessageRouter,
                                               Message::BuyBattleOrderBundle,3);
                                    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                    LogBattleOrderPackage(this,(string *)(lVar11 + 0x10),0x2d,15000)
                                    ;
                                  }
                                  else {
                                    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                    bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                                            "com.popcap.ios.chs.PVZ2.summercamp78");
                                    if (bVar1) {
                                      MessageRouter::Post<int,int>
                                                ((MessageRouter *)gMessageRouter,
                                                 Message::BuyBattleOrderBundle,4);
                                      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                      LogBattleOrderPackage
                                                (this,(string *)(lVar11 + 0x10),0x4e,30000);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else {
                          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                          bVar1 = std::operator==((string *)(lVar11 + 0x78),"avatar_ticket");
                          if (bVar1) {
                            local_330[0] = local_330[0] & 0xffffffff00000000;
                            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                            bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                                    "com.popcap.ios.chs.PVZ2.DressShop6");
                            if (bVar1) {
                              local_330[0] = CONCAT44(local_330[0]._4_4_,6);
                            }
                            else {
                              lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                              bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                                      "com.popcap.ios.chs.PVZ2.DressShop30");
                              if (bVar1) {
                    /* WARNING: Ignoring partial resolution of indirect */
                                local_330[0]._0_4_ = L'\x1e';
                              }
                              else {
                                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                                        "com.popcap.ios.chs.PVZ2.DressShop68");
                                if (bVar1) {
                    /* WARNING: Ignoring partial resolution of indirect */
                                  local_330[0]._0_4_ = L'D';
                                }
                                else {
                                  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                  bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                                          "com.popcap.ios.chs.PVZ2.DressShop128");
                                  if (bVar1) {
                    /* WARNING: Ignoring partial resolution of indirect */
                                    local_330[0]._0_4_ = L'\x80';
                                  }
                                  else {
                                    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                    bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                                            "com.popcap.ios.chs.PVZ2.DressShop328");
                                    if (bVar1) {
                    /* WARNING: Ignoring partial resolution of indirect */
                                      local_330[0]._0_4_ = L'ň';
                                    }
                                    else {
                                      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                      bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                                              "com.popcap.ios.chs.PVZ2.DressShop648"
                                                             );
                                      if (bVar1) {
                    /* WARNING: Ignoring partial resolution of indirect */
                                        local_330[0]._0_4_ = L'ʈ';
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            pPVar12 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
                            pPVar13 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar12);
                            std::string::string((string *)&local_278,"mat_avatar_ticket");
                            uVar6 = PlayerInfo::GetMaterialNum(pPVar13,(string *)&local_278);
                            std::string::~string((string *)&local_278);
                            nop();
                            showBundleReward(this,param_3,true);
                            std::string::string((string *)&local_278,"mat_avatar_ticket");
                            iVar4 = PlayerInfo::GetMaterialNum(pPVar13,(string *)&local_278);
                            std::string::~string((string *)&local_278);
                            nop();
                            uVar5 = operator|(0x10,8);
                            FUN_05462470(auStack_178,uVar5);
                            __n_01 = (DString *)&local_308;
                            std::string::string((string *)&local_278,"");
                            FUN_05462980(auStack_178,(string *)&local_278);
                            std::string::~string((string *)&local_278);
                            nop();
                            uVar15 = 0;
                            while( true ) {
                              uVar31 = *(undefined8 *)param_3;
                              uVar17 = FUN_03a617e8(uVar31,*(undefined8 *)(param_3 + 8));
                              if (uVar17 <= uVar15) break;
                              puVar16 = (undefined4 *)FUN_03a617f4(uVar31,uVar15);
                              uVar31 = FUN_0546065c(auStack_168,*puVar16);
                              uVar31 = FUN_054603b8(uVar31,&DAT_05593348);
                              lVar11 = FUN_03a617f4(*(undefined8 *)param_3,uVar15);
                              uVar31 = FUN_0546065c(uVar31,*(undefined4 *)(lVar11 + 4));
                              FUN_054603b8(uVar31,&DAT_05594620);
                              uVar15 = uVar15 + 1;
                            }
                            TGAAnniversaryTreasureData::TGAAnniversaryTreasureData
                                      ((TGAAnniversaryTreasureData *)&local_278);
                            std::string::append((string *)&local_278,"3",(size_t)__n_01);
                            DString::DString((DString *)&local_308,iVar4);
                            pcVar26 = (char *)DString::c_str((DString *)&local_308);
                            std::string::append(asStack_270,pcVar26,(size_t)__n_01);
                            DString::~DString((DString *)&local_308);
                            sVar27 = (size_t)uVar6;
                            DString::DString((DString *)&local_308,iVar4 - uVar6);
                            pcVar26 = (char *)DString::c_str((DString *)&local_308);
                            std::string::append(asStack_268,pcVar26,sVar27);
                            DString::~DString((DString *)&local_308);
                            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                            thunk_FUN_05475e00(auStack_240,lVar11 + 0x10);
                            std::to_string<ActivityTypeID>((ActivityTypeID *)local_330);
                            FUN_05474278(auStack_238,(DString *)&local_308);
                            std::string::~string((string *)&local_308);
                            FUN_05462824((DString *)&local_308,auStack_178);
                            FUN_05474278(asStack_230,(DString *)&local_308);
                            std::string::~string((string *)&local_308);
                            pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
                            TGALogMgr::LogExchangeAvatar
                                      (pTVar19,(TGAExchangeAvatarData *)&local_278);
                            TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData
                                      ((TGAAnniversaryTreasureData *)&local_278);
                            FUN_054617bc(auStack_178);
                          }
                          else {
                            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                            bVar1 = std::operator==((string *)(lVar11 + 0x78),"newpvpbattlepass");
                            if (bVar1) {
                              lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                              bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                                      "com.popcap.ios.chs.PVZ2.newpvpbattlepass68");
                              if (!bVar1) {
                                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                bVar2 = std::operator==((string *)(lVar11 + 0x10),
                                                        "com.popcap.ios.chs.PVZ2.newpvpbattlepass6")
                                ;
                                uVar6 = (uint)bVar1;
                                if (!bVar2) {
                                  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                  bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                                                                                                    
                                                  "com.popcap.ios.chs.PVZ2.newpvpbattlepass8");
                                  if (bVar1) {
                                    uVar6 = 1;
                                  }
                                  else {
                                    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                    bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                                                                                                        
                                                  "com.popcap.ios.chs.PVZ2.newpvpbattlepass18");
                                    uVar6 = 2;
                                    if (!bVar1) {
                                      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                      bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                                                                                                            
                                                  "com.popcap.ios.chs.PVZ2.newpvpbattlepass45");
                                      uVar6 = 3;
                                      if (!bVar1) {
                                        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                        bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                                                                                                                
                                                  "com.popcap.ios.chs.PVZ2.newpvpbattlepass78");
                                        uVar6 = 4;
                                        if (!bVar1) goto LAB_03a662ec;
                                      }
                                    }
                                  }
                                }
                                MessageRouter::Post<int,int>
                                          ((MessageRouter *)gMessageRouter,
                                           Message::NewPVPBattlePassBuyBundle,uVar6);
                              }
                            }
                            else {
                              lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                              bVar1 = std::operator==((string *)(lVar11 + 0x78),"newpvpchest");
                              if (!bVar1) {
                                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                bVar1 = std::operator==((string *)(lVar11 + 0x78),"pennyshandbook");
                                if (bVar1) {
                                  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>
                                  ::vector((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>
                                            *)local_330);
                                  local_358._0_4_ = L'⨳';
                                  local_308 = CONCAT44(local_308._4_4_,1);
                                  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
                                            ((pair<wchar_t_const,wchar_t> *)&local_278,
                                             (wchar_t *)&local_358,(wchar_t *)&local_308);
                                  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                  ::push_back((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                               *)local_330,(pair *)&local_278);
                                  pNVar24 = (NetworkMgr *)NetworkMgr::Instance();
                                  pIVar25 = (INetworkMsgProcess *)
                                            NetworkMgr::GetNewNetWorkProcess(pNVar24);
                                  INetworkMsgProcess::RequestActivityList
                                            (pIVar25,(vector *)local_330,0,true);
                                  MessageRouter::Post((_func_void *)gMessageRouter);
                                  TGAPennyPursuitData::TGAPennyPursuitData
                                            ((TGAPennyPursuitData *)&local_308);
                                  local_358 = CONCAT44(local_358._4_4_,7);
                                  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_358);
                                  FUN_05474278((TGAPennyPursuitData *)&local_308,
                                               (pair<wchar_t_const,wchar_t> *)&local_278);
                                  std::string::~string((string *)&local_278);
                                  pTVar19 = (TGALogMgr *)
                                            Sexy::LazySingleton<TGALogMgr>::GetInstance();
                                  TGAPennyPursuitData::TGAPennyPursuitData
                                            ((TGAPennyPursuitData *)&local_278,
                                             (TGAPennyPursuitData *)&local_308);
                                  TGALogMgr::LogPennyPursuit
                                            (pTVar19,(pair<wchar_t_const,wchar_t> *)&local_278);
                                  TGAPennyPursuitData::~TGAPennyPursuitData
                                            ((TGAPennyPursuitData *)&local_278);
                                  TGAPennyPursuitData::~TGAPennyPursuitData
                                            ((TGAPennyPursuitData *)&local_308);
                                  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                  ::~vector((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                             *)local_330);
                                }
                                else {
                                  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                  bVar1 = std::operator==((string *)(lVar11 + 0x78),
                                                          "newrecall_bundle");
                                  if (bVar1) {
                                    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                    local_378 = GetNewRecallBundleIdBySku
                                                          (this,(string *)(lVar11 + 0x10));
                                    uVar5 = operator|(0x10,8);
                                    FUN_05462470(auStack_178,uVar5);
                                    FUN_0544a0a4(auStack_110,0);
                                    std::
                                    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                                    ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                                           *)&local_308);
                                    std::
                                    vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::
                                    vector((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>
                                            *)local_370);
                                    local_358 = FUN_03a63c58(*(undefined8 *)param_3);
                                    local_330[0] = FUN_03a63ca8(*(undefined8 *)(param_3 + 8));
                                    while (bVar1 = __gnu_cxx::operator!=
                                                             ((__normal_iterator *)&local_358,
                                                              (__normal_iterator *)local_330), bVar1
                                          ) {
                                      piVar18 = (int *)std::__exception_ptr::exception_ptr::_M_get
                                                                 ((exception_ptr *)&local_358);
                                      piVar22 = (int *)std::
                                                  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                                  ::operator[]((
                                                  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                                  *)&local_308,piVar18);
                                      *piVar22 = piVar18[1];
                                      std::vector<int,std::allocator<int>>::push_back
                                                ((vector<int,std::allocator<int>> *)local_370,
                                                 piVar18);
                                      ProfileChangeItemAmount(*piVar18,piVar18[1],false);
                                      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_278);
                                      uVar31 = FUN_0546065c(auStack_168,*piVar18);
                                      uVar31 = FUN_054603b8(uVar31,&DAT_05593348);
                                      uVar31 = FUN_0546065c(uVar31,piVar18[1]);
                                      FUN_054603b8(uVar31,&DAT_05594620);
                                      if (*piVar18 == 0xbc0) {
                                        local_37c = piVar18[1];
                                      }
                                      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::
                                      operator++((generic_iterator<EA::Text::BmpTextureInfo**,void>
                                                  *)&local_358);
                                    }
                                    UIRedPacketResult::create
                                              ((map *)&local_308,(vector *)local_370,true);
                                    this_00 = gMessageRouter;
                                    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                    iVar4 = GetNewRecallBundleIdBySku
                                                      (this,(string *)(lVar11 + 0x10));
                                    MessageRouter::Post<int,int>
                                              ((MessageRouter *)this_00,Message::BundleBuySuccess,
                                               iVar4);
                                    TGANFSLinkageData::TGANFSLinkageData
                                              ((TGANFSLinkageData *)&local_358);
                    /* WARNING: Ignoring partial resolution of indirect */
                                    local_330[0]._0_4_ = L'\x02';
                                    std::to_string<ActivityTypeID>((ActivityTypeID *)local_330);
                                    FUN_05474278((__normal_iterator *)&local_358,
                                                 (GAME_ITEM_INFO *)&local_278);
                                    std::string::~string((string *)&local_278);
                                    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_378);
                                    FUN_05474278(auStack_350,(GAME_ITEM_INFO *)&local_278);
                                    std::string::~string((string *)&local_278);
                                    FUN_05462824((GAME_ITEM_INFO *)&local_278,auStack_178);
                                    FUN_05474278(auStack_348,(GAME_ITEM_INFO *)&local_278);
                                    std::string::~string((string *)&local_278);
                                    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_37c);
                                    FUN_05474278(auStack_340,(GAME_ITEM_INFO *)&local_278);
                                    std::string::~string((string *)&local_278);
                                    if (((local_378 == 0x15 || local_378 == 0xb) ||
                                        (local_378 == 0x1f)) || (local_378 == 0x29)) {
                                      std::to_string<ActivityTypeID>((ActivityTypeID *)local_330);
                                      FUN_05474278(auStack_338,(GAME_ITEM_INFO *)&local_278);
                                      std::string::~string((string *)&local_278);
                                    }
                                    pTVar19 = (TGALogMgr *)
                                              Sexy::LazySingleton<TGALogMgr>::GetInstance();
                                    TGAArtifactPresentData::TGAArtifactPresentData
                                              ((TGAArtifactPresentData *)&local_278,
                                               (TGAArtifactPresentData *)&local_358);
                                    TGALogMgr::LogNewRecallBundle
                                              (pTVar19,(GAME_ITEM_INFO *)&local_278);
                                    TGANFSLinkageData::~TGANFSLinkageData
                                              ((TGANFSLinkageData *)&local_278);
                                    TGANFSLinkageData::TGANFSLinkageData
                                              ((TGANFSLinkageData *)local_330);
                                    local_374 = 3;
                                    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_374);
                                    FUN_05474278((ActivityTypeID *)local_330,
                                                 (GAME_ITEM_INFO *)&local_278);
                                    std::string::~string((string *)&local_278);
                                    FUN_05462824((GAME_ITEM_INFO *)&local_278,auStack_178);
                                    FUN_05474278(auStack_320,(GAME_ITEM_INFO *)&local_278);
                                    std::string::~string((string *)&local_278);
                                    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_37c);
                                    FUN_05474278(auStack_318,(GAME_ITEM_INFO *)&local_278);
                                    std::string::~string((string *)&local_278);
                                    thunk_FUN_05475e00(auStack_310,auStack_338);
                                    pTVar19 = (TGALogMgr *)
                                              Sexy::LazySingleton<TGALogMgr>::GetInstance();
                                    TGAArtifactPresentData::TGAArtifactPresentData
                                              ((TGAArtifactPresentData *)&local_278,
                                               (TGAArtifactPresentData *)local_330);
                                    TGALogMgr::LogNewRecallBundle
                                              (pTVar19,(GAME_ITEM_INFO *)&local_278);
                                    TGANFSLinkageData::~TGANFSLinkageData
                                              ((TGANFSLinkageData *)&local_278);
                                    TGANFSLinkageData::~TGANFSLinkageData
                                              ((TGANFSLinkageData *)local_330);
                                    TGANFSLinkageData::~TGANFSLinkageData
                                              ((TGANFSLinkageData *)&local_358);
                                    std::vector<int,std::allocator<int>>::~vector
                                              ((vector<int,std::allocator<int>> *)local_370);
                                    std::
                                    map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                    ::~map((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                            *)&local_308);
                                    FUN_054617bc(auStack_178);
                                  }
                                  else {
                                    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                    bVar1 = std::operator==((string *)(lVar11 + 0x78),
                                                            "uncharted_festival_reward_activate");
                                    if (bVar1) {
                                      TGAUnchartedData::TGAUnchartedData
                                                ((TGAUnchartedData *)&local_308);
                                      DString::DString((DString *)&local_278,5);
                                      pcVar26 = (char *)DString::c_str((DString *)&local_278);
                                      std::string::append((string *)&local_308,pcVar26,(size_t)__n);
                                      DString::~DString((DString *)&local_278);
                                      pTVar19 = (TGALogMgr *)
                                                Sexy::LazySingleton<TGALogMgr>::GetInstance();
                                      TGAUnchartedData::TGAUnchartedData
                                                ((TGAUnchartedData *)&local_278,
                                                 (TGAUnchartedData *)&local_308);
                                      TGALogMgr::LogUncharted(pTVar19,(DString *)&local_278);
                                      TGAUnchartedData::~TGAUnchartedData
                                                ((TGAUnchartedData *)&local_278);
                                      Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr()
                                      ;
                                      UnchartedModeNetworkMgr::RequestNetwork();
                                      TGAUnchartedData::~TGAUnchartedData
                                                ((TGAUnchartedData *)&local_308);
                                    }
                                    else {
                                      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                      bVar1 = std::operator==((string *)(lVar11 + 0x78),
                                                              "new_player_special_gift_activate");
                                      if (bVar1) {
                                        std::
                                        vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>
                                        ::vector((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>
                                                  *)&local_278);
                                        local_330[0] = CONCAT44(local_330[0]._4_4_,1);
                                        local_358 = CONCAT44(local_358._4_4_,0x2a7d);
                                        std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
                                                  ((pair<wchar_t_const,wchar_t> *)&local_308,
                                                   (wchar_t *)&local_358,(wchar_t *)local_330);
                                        std::
                                        vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                        ::push_back((
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  *)&local_278,(pair *)&local_308);
                                        pNVar24 = (NetworkMgr *)NetworkMgr::Instance();
                                        pIVar25 = (INetworkMsgProcess *)
                                                  NetworkMgr::GetNewNetWorkProcess(pNVar24);
                                        INetworkMsgProcess::RequestActivityList
                                                  (pIVar25,(vector *)&local_278,0,true);
                                        std::
                                        vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                        ::~vector((
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  *)&local_278);
                                      }
                                      else {
                                        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                        bVar1 = std::operator==((string *)(lVar11 + 0x78),
                                                                "world_level_package");
                                        if (bVar1) {
                                          showBundleReward(this,param_3,true);
                                          LogLevelPackage(this,param_3);
                                        }
                                        else {
                                          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2)
                                          ;
                                          bVar1 = std::operator==((string *)(lVar11 + 0x78),
                                                                  "cornucopia_treasure_bowl");
                                          if (bVar1) {
                                            showBundleReward(this,param_3,true);
                                            uVar5 = operator|(0x10,8);
                                            FUN_05462470(auStack_178,uVar5);
                                            p_Var30 = (__normal_iterator *)&local_308;
                                            std::string::string((string *)&local_278,"");
                                            FUN_05462980(auStack_178,(string *)&local_278);
                                            std::string::~string((string *)&local_278);
                                            nop();
                                            local_308 = FUN_03a63c58(*(undefined8 *)param_3);
                                            local_278 = FUN_03a63ca8(*(undefined8 *)(param_3 + 8));
                                            while (bVar1 = __gnu_cxx::operator!=
                                                                     ((__normal_iterator *)
                                                                      &local_308,
                                                                      (__normal_iterator *)
                                                                      &local_278), bVar1) {
                                              puVar16 = (undefined4 *)
                                                        std::__exception_ptr::exception_ptr::_M_get
                                                                  ((exception_ptr *)&local_308);
                                              uVar31 = FUN_0546065c(auStack_168,*puVar16);
                                              uVar31 = FUN_054603b8(uVar31,&DAT_05593348);
                                              uVar31 = FUN_0546065c(uVar31,puVar16[1]);
                                              FUN_054603b8(uVar31,&DAT_05594620);
                                              eastl::
                                              generic_iterator<EA::Text::BmpTextureInfo**,void>::
                                              operator++((
                                                  generic_iterator<EA::Text::BmpTextureInfo**,void>
                                                  *)&local_308);
                                            }
                                            TGALuckyChestData::TGALuckyChestData
                                                      ((TGALuckyChestData *)&local_278);
                                            DString::DString((DString *)&local_308,3);
                                            pcVar26 = (char *)DString::c_str((DString *)&local_308);
                                            std::string::append((string *)&local_278,pcVar26,
                                                                (size_t)p_Var30);
                                            DString::~DString((DString *)&local_308);
                                            FUN_05462824((__normal_iterator *)&local_308,auStack_178
                                                        );
                                            FUN_05474278(auStack_248,(__normal_iterator *)&local_308
                                                        );
                                            std::string::~string((string *)&local_308);
                                            pTVar19 = (TGALogMgr *)
                                                      Sexy::LazySingleton<TGALogMgr>::GetInstance();
                                            TGALogMgr::LogCornucopiaData
                                                      (pTVar19,(TGACornucopiaData *)&local_278);
                                            TGALuckyChestData::~TGALuckyChestData
                                                      ((TGALuckyChestData *)&local_278);
                                            FUN_054617bc(auStack_178);
                                          }
                                          else {
                                            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                               (param_2);
                                            bVar1 = std::operator==((string *)(lVar11 + 0x78),
                                                                    "piggybank");
                                            if (bVar1) {
                                              std::
                                              vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>
                                              ::vector((
                                                  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>
                                                  *)&local_278);
                                              local_330[0] = CONCAT44(local_330[0]._4_4_,1);
                                              local_358 = CONCAT44(local_358._4_4_,0x2a44);
                                              std::pair<wchar_t_const,wchar_t>::
                                              pair<wchar_t,wchar_t,void>
                                                        ((pair<wchar_t_const,wchar_t> *)&local_308,
                                                         (wchar_t *)&local_358,(wchar_t *)local_330)
                                              ;
                                              std::
                                              vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                              ::push_back((
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  *)&local_278,(pair *)&local_308);
                                              pNVar24 = (NetworkMgr *)NetworkMgr::Instance();
                                              pIVar25 = (INetworkMsgProcess *)
                                                        NetworkMgr::GetNewNetWorkProcess(pNVar24);
                                              INetworkMsgProcess::RequestActivityList
                                                        (pIVar25,(vector *)&local_278,0,true);
                                              std::
                                              vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                              ::~vector((
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  *)&local_278);
                                            }
                                            else {
                                              lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                                 (param_2);
                                              bVar1 = std::operator==((string *)(lVar11 + 0x78),
                                                                      "PartyEpsActivity");
                                              if (bVar1) {
                                                showBundleReward(this,param_3,true);
                                                uVar5 = operator|(0x10,8);
                                                FUN_05462470(auStack_178,uVar5);
                                                p_Var30 = (__normal_iterator *)&local_308;
                                                std::string::string((string *)&local_278,"");
                                                FUN_05462980(auStack_178,(string *)&local_278);
                                                std::string::~string((string *)&local_278);
                                                nop();
                                                local_308 = FUN_03a63c58(*(undefined8 *)param_3);
                                                local_278 = FUN_03a63ca8(*(undefined8 *)
                                                                          (param_3 + 8));
                                                while (bVar1 = __gnu_cxx::operator!=
                                                                         ((__normal_iterator *)
                                                                          &local_308,
                                                                          (__normal_iterator *)
                                                                          &local_278), bVar1) {
                                                  puVar16 = (undefined4 *)
                                                            std::__exception_ptr::exception_ptr::
                                                            _M_get((exception_ptr *)&local_308);
                                                  uVar31 = FUN_0546065c(auStack_168,*puVar16);
                                                  uVar31 = FUN_054603b8(uVar31,&DAT_05593348);
                                                  uVar31 = FUN_0546065c(uVar31,puVar16[1]);
                                                  FUN_054603b8(uVar31,&DAT_05594620);
                                                  eastl::
                                                  generic_iterator<EA::Text::BmpTextureInfo**,void>
                                                  ::operator++((
                                                  generic_iterator<EA::Text::BmpTextureInfo**,void>
                                                  *)&local_308);
                                                }
                                                this_02 = (
                                                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)Sexy::LazySingleton<PartyAssistMgr>::
                                                    GetInstancePtr();
                                                pPVar23 = (PartyAssistMainData *)
                                                          std::
                                                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::_M_end(this_02);
                                                PartyAssistMainData::PartyAssistMainData
                                                          ((PartyAssistMainData *)&local_278,pPVar23
                                                          );
                                                TGASecretStore::TGASecretStore
                                                          ((TGASecretStore *)&local_308);
                                                std::string::append((string *)&local_308,"4",
                                                                    (size_t)p_Var30);
                                                thunk_FUN_05475e00(auStack_2f0,this + 8);
                                                FUN_05462824((string *)local_330,auStack_178);
                                                FUN_05474278(auStack_2e0,(string *)local_330);
                                                std::string::~string((string *)local_330);
                                                pTVar19 = (TGALogMgr *)
                                                          Sexy::LazySingleton<TGALogMgr>::
                                                          GetInstance();
                                                TGALogMgr::LogPartyAssistData
                                                          (pTVar19,(TGAPartyAssistData *)&local_308)
                                                ;
                                                DropGroupNode::~DropGroupNode
                                                          ((DropGroupNode *)&local_308);
                                                PartyAssistMainData::~PartyAssistMainData
                                                          ((PartyAssistMainData *)&local_278);
                                                FUN_054617bc(auStack_178);
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      goto LAB_03a662ec;
                    }
                    showBundleReward(this,param_3,true);
                    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                    bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                            "com.popcap.ios.chs.PVZ2.ArborDayKettle1");
                    iVar4 = 0;
                    if (bVar1) {
LAB_03a697fc:
                      MessageRouter::Post<int,int>
                                ((MessageRouter *)gMessageRouter,Message::BuyArborDayKettle,iVar4);
                    }
                    else {
                      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                      bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                              "com.popcap.ios.chs.PVZ2.ArborDayKettle6");
                      iVar4 = 1;
                      if (bVar1) goto LAB_03a697fc;
                      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                      bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                              "com.popcap.ios.chs.PVZ2.ArborDayKettle30");
                      iVar4 = 2;
                      if (bVar1) goto LAB_03a697fc;
                      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                      bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                              "com.popcap.ios.chs.PVZ2.ArborDayKettle68");
                      if (bVar1) {
                        iVar4 = 3;
                        goto LAB_03a697fc;
                      }
                    }
                    pNVar14 = (NameMapperBase *)MaterialItemMapper::GetInstance();
                    std::string::string((string *)&local_278,"mat_arborday_kettle");
                    psVar29 = asStack_268;
                    iVar4 = NameMapperBase::GetIdForName(pNVar14,(string *)&local_278);
                    std::string::~string((string *)&local_278);
                    nop();
                    TGAPlantWarsData::TGAPlantWarsData((TGAPlantWarsData *)&local_278);
                    std::string::append((string *)&local_278,"6",(size_t)psVar29);
                    uVar5 = operator|(0x10,8);
                    FUN_05462470(auStack_178,uVar5);
                    std::string::string((string *)&local_308,"");
                    FUN_05462980(auStack_178,(string *)&local_308);
                    std::string::~string((string *)&local_308);
                    nop();
                    uVar15 = 0;
                    while( true ) {
                      uVar31 = *(undefined8 *)param_3;
                      uVar17 = FUN_03a617e8(uVar31,*(undefined8 *)(param_3 + 8));
                      if (uVar17 <= uVar15) break;
                      piVar18 = (int *)FUN_03a617f4(uVar31,uVar15);
                      if (iVar4 == *piVar18) {
                        std::to_string<ActivityTypeID>((ActivityTypeID *)(piVar18 + 1));
                        FUN_05474278(asStack_268,(string *)&local_308);
                        std::string::~string((string *)&local_308);
                      }
                      puVar16 = (undefined4 *)FUN_03a617f4(*(undefined8 *)param_3,uVar15);
                      uVar31 = FUN_0546065c(auStack_168,*puVar16);
                      uVar31 = FUN_054603b8(uVar31,&DAT_05593348);
                      lVar11 = FUN_03a617f4(*(undefined8 *)param_3,uVar15);
                      uVar31 = FUN_0546065c(uVar31,*(undefined4 *)(lVar11 + 4));
                      FUN_054603b8(uVar31,&DAT_05594620);
                      uVar15 = uVar15 + 1;
                    }
                    FUN_05462824((string *)&local_308,auStack_178);
                    FUN_05474278(local_260,(string *)&local_308);
                    std::string::~string((string *)&local_308);
                    pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
                    TGALogMgr::LogArborDay(pTVar19,(TGAArborDay *)&local_278);
                    FUN_054617bc(auStack_178);
                    TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)&local_278);
                    goto LAB_03a662ec;
                  }
                  showBundleReward(this,param_3,true);
                  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                          "com.popcap.ios.chs.PVZ2.GeneCultivate6");
                  sVar27 = 0;
                  if (bVar1) {
LAB_03a69494:
                    MessageRouter::Post<int,int>
                              ((MessageRouter *)gMessageRouter,Message::BuyGeneFactor,(int)sVar27);
                  }
                  else {
                    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                    bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                            "com.popcap.ios.chs.PVZ2.GeneCultivate30");
                    sVar27 = 1;
                    if (bVar1) goto LAB_03a69494;
                    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                    bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                            "com.popcap.ios.chs.PVZ2.GeneCultivate68");
                    sVar27 = 2;
                    if (bVar1) goto LAB_03a69494;
                    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                    bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                            "com.popcap.ios.chs.PVZ2.GeneCultivate128");
                    sVar27 = 3;
                    if (bVar1) goto LAB_03a69494;
                    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                    bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                            "com.popcap.ios.chs.PVZ2.GeneCultivate328");
                    sVar27 = 4;
                    if (bVar1) goto LAB_03a69494;
                    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                    bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                            "com.popcap.ios.chs.PVZ2.GeneCultivate648");
                    if (bVar1) {
                      sVar27 = 5;
                      goto LAB_03a69494;
                    }
                  }
                  TGALuckyChestData::TGALuckyChestData((TGALuckyChestData *)&local_278);
                  std::string::append((string *)&local_278,"5",sVar27);
                  uVar5 = operator|(0x10,8);
                  FUN_05462470(auStack_178,uVar5);
                  std::string::string((string *)&local_308,"");
                  FUN_05462980(auStack_178,(string *)&local_308);
                  std::string::~string((string *)&local_308);
                  nop();
                  uVar15 = 0;
                  while( true ) {
                    uVar31 = *(undefined8 *)param_3;
                    uVar17 = FUN_03a617e8(uVar31,*(undefined8 *)(param_3 + 8));
                    if (uVar17 <= uVar15) break;
                    puVar16 = (undefined4 *)FUN_03a617f4(uVar31,uVar15);
                    uVar31 = FUN_0546065c(auStack_168,*puVar16);
                    uVar31 = FUN_054603b8(uVar31,&DAT_05593348);
                    lVar11 = FUN_03a617f4(*(undefined8 *)param_3,uVar15);
                    uVar31 = FUN_0546065c(uVar31,*(undefined4 *)(lVar11 + 4));
                    FUN_054603b8(uVar31,&DAT_05594620);
                    uVar15 = uVar15 + 1;
                  }
                  FUN_05462824((string *)&local_308,auStack_178);
                  FUN_05474278(auStack_248,(string *)&local_308);
                  std::string::~string((string *)&local_308);
                  pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
                  TGALogMgr::LogGeneEnhancementData(pTVar19,(TGAGeneEnhancementData *)&local_278);
                  FUN_054617bc(auStack_178);
                  TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)&local_278);
                  goto LAB_03a662ec;
                }
                sVar28 = 1;
                showBundleReward(this,param_3,true);
                local_330[0] = local_330[0] & 0xffffffff00000000;
                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                        "com.popcap.ios.chs.PVZ2.NewYearGoods6");
                if (bVar1) {
                  wVar10 = L'\x06';
LAB_03a68ebc:
                    /* WARNING: Ignoring partial resolution of indirect */
                  local_330[0]._0_4_ = wVar10;
                  MessageRouter::Post<int,int>
                            ((MessageRouter *)gMessageRouter,Message::BuyNewYearGoods,(int)sVar27);
                  sVar28 = sVar27;
                }
                else {
                  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                          "com.popcap.ios.chs.PVZ2.NewYearGoods30");
                  if (bVar1) {
                    sVar27 = 1;
                    wVar10 = L'\x1e';
                    goto LAB_03a68ebc;
                  }
                  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                          "com.popcap.ios.chs.PVZ2.NewYearGoods68");
                  if (bVar1) {
                    sVar27 = 2;
                    wVar10 = L'D';
                    goto LAB_03a68ebc;
                  }
                  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                          "com.popcap.ios.chs.PVZ2.NewYearGoods128");
                  if (bVar1) {
                    sVar27 = 3;
                    wVar10 = L'\x80';
                    goto LAB_03a68ebc;
                  }
                  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                          "com.popcap.ios.chs.PVZ2.NewYearGoods328");
                  if (bVar1) {
                    sVar27 = 4;
                    wVar10 = L'ň';
                    goto LAB_03a68ebc;
                  }
                  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                          "com.popcap.ios.chs.PVZ2.NewYearGoods648");
                  if (bVar1) {
                    sVar27 = 5;
                    wVar10 = L'ʈ';
                    goto LAB_03a68ebc;
                  }
                }
                TGATenYearsData::TGATenYearsData((TGATenYearsData *)&local_278);
                std::string::append((string *)&local_278,"3",sVar28);
                std::to_string<ActivityTypeID>((ActivityTypeID *)local_330);
                FUN_05474278(asStack_270,(string *)&local_308);
                std::string::~string((string *)&local_308);
                uVar5 = operator|(0x10,8);
                FUN_05462470(auStack_178,uVar5);
                std::string::string((string *)&local_308,"");
                FUN_05462980(auStack_178,(string *)&local_308);
                std::string::~string((string *)&local_308);
                nop();
                uVar15 = 0;
                while( true ) {
                  uVar31 = *(undefined8 *)param_3;
                  uVar17 = FUN_03a617e8(uVar31,*(undefined8 *)(param_3 + 8));
                  if (uVar17 <= uVar15) break;
                  puVar16 = (undefined4 *)FUN_03a617f4(uVar31,uVar15);
                  uVar31 = FUN_0546065c(auStack_168,*puVar16);
                  uVar31 = FUN_054603b8(uVar31,&DAT_05593348);
                  lVar11 = FUN_03a617f4(*(undefined8 *)param_3,uVar15);
                  uVar31 = FUN_0546065c(uVar31,*(undefined4 *)(lVar11 + 4));
                  FUN_054603b8(uVar31,&DAT_05594620);
                  uVar15 = uVar15 + 1;
                }
                FUN_05462824((string *)&local_308,auStack_178);
                FUN_05474278(asStack_268,(string *)&local_308);
                std::string::~string((string *)&local_308);
                pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
                TGALogMgr::LogNewYearGoodsData(pTVar19,(TGANewYearGoodsData *)&local_278);
                FUN_054617bc(auStack_178);
                Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)&local_278);
                goto LAB_03a662ec;
              }
              pPVar12 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
              pPVar13 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar12);
              std::string::string((string *)&local_278,"mat_carnival_ticket");
              iVar8 = PlayerInfo::GetMaterialNum(pPVar13,(string *)&local_278);
              std::string::~string((string *)&local_278);
              nop();
              showBundleReward(this,param_3,true);
              std::string::string((string *)&local_278,"mat_carnival_ticket");
              iVar9 = PlayerInfo::GetMaterialNum(pPVar13,(string *)&local_278);
              std::string::~string((string *)&local_278);
              nop();
              lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                      "com.popcap.ios.chs.PVZ2.HappyFiesta6");
              iVar4 = 0;
              if (bVar1) {
LAB_03a68d24:
                MessageRouter::Post<int,int>
                          ((MessageRouter *)gMessageRouter,Message::BuyCarnivalPacket,iVar4);
              }
              else {
                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                        "com.popcap.ios.chs.PVZ2.HappyFiesta30");
                if (bVar1) {
                  iVar4 = 1;
                  goto LAB_03a68d24;
                }
                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                        "com.popcap.ios.chs.PVZ2.HappyFiesta68");
                iVar4 = 2;
                if (bVar1) goto LAB_03a68d24;
                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                        "com.popcap.ios.chs.PVZ2.HappyFiesta128");
                iVar4 = 3;
                if (bVar1) {
LAB_03a690cc:
                  MessageRouter::Post<int,int>
                            ((MessageRouter *)gMessageRouter,Message::BuyCarnivalPacket,iVar4);
                }
                else {
                  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                          "com.popcap.ios.chs.PVZ2.HappyFiesta328");
                  iVar4 = 4;
                  if (bVar1) goto LAB_03a690cc;
                  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                          "com.popcap.ios.chs.PVZ2.HappyFiesta648");
                  if (bVar1) {
                    iVar4 = 5;
                    goto LAB_03a690cc;
                  }
                }
              }
              TGACarnivalData::TGACarnivalData((TGACarnivalData *)&local_278);
              std::string::append((string *)&local_278,"2",(size_t)auStack_168);
              local_330[0] = CONCAT44(local_330[0]._4_4_,iVar9 - iVar8);
              std::to_string<ActivityTypeID>((ActivityTypeID *)local_330);
              FUN_05474278(asStack_268,(string *)&local_308);
              std::string::~string((string *)&local_308);
              uVar5 = operator|(0x10,8);
              FUN_05462470(auStack_178,uVar5);
              std::string::string((string *)&local_308,"");
              FUN_05462980(auStack_178,(string *)&local_308);
              std::string::~string((string *)&local_308);
              nop();
              uVar15 = 0;
              while( true ) {
                uVar31 = *(undefined8 *)param_3;
                uVar17 = FUN_03a617e8(uVar31,*(undefined8 *)(param_3 + 8));
                if (uVar17 <= uVar15) break;
                puVar16 = (undefined4 *)FUN_03a617f4(uVar31,uVar15);
                uVar31 = FUN_0546065c(auStack_168,*puVar16);
                uVar31 = FUN_054603b8(uVar31,&DAT_05593348);
                lVar11 = FUN_03a617f4(*(undefined8 *)param_3,uVar15);
                uVar31 = FUN_0546065c(uVar31,*(undefined4 *)(lVar11 + 4));
                FUN_054603b8(uVar31,&DAT_05594620);
                uVar15 = uVar15 + 1;
              }
              FUN_05462824((string *)&local_308,auStack_178);
              FUN_05474278(auStack_250,(string *)&local_308);
              std::string::~string((string *)&local_308);
              pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
              TGALogMgr::LogCarnivalData(pTVar19,(TGACarnivalData *)&local_278);
              FUN_054617bc(auStack_178);
              DropGroupNode::~DropGroupNode((DropGroupNode *)&local_278);
              goto LAB_03a662ec;
            }
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            bVar1 = std::operator==((string *)(lVar11 + 0x10),"com.popcap.ios.chs.PVZ2.01luckBox68")
            ;
            if (bVar1) {
LAB_03a67a6c:
              iVar4 = 0x3c;
            }
            else {
              lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                      "com.popcap.ios.chs.PVZ2.02luckBox68");
              if (bVar1) goto LAB_03a67a6c;
              lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                      "com.popcap.ios.chs.PVZ2.03luckBox68");
              if (bVar1) goto LAB_03a67a6c;
              lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                      "com.popcap.ios.chs.PVZ2.04luckBox68");
              iVar4 = 0;
              if (bVar1) {
                iVar4 = 0x3c;
              }
            }
            std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                      ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_308);
            local_358 = FUN_03a63c58(*(undefined8 *)param_3);
            local_330[0] = FUN_03a63ca8(*(undefined8 *)(param_3 + 8));
            while (bVar1 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_358,(__normal_iterator *)local_330
                                     ), bVar1) {
              puVar16 = (undefined4 *)
                        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_358);
              ChildrenDayItem::ChildrenDayItem((ChildrenDayItem *)&local_278);
              local_264 = *puVar16;
              local_260[0] = puVar16[1];
              std::vector<ChildrenDayItem,std::allocator<ChildrenDayItem>>::push_back
                        ((vector<ChildrenDayItem,std::allocator<ChildrenDayItem>> *)&local_308,
                         (ChildrenDayItem *)&local_278);
              ChildrenDayItem::~ChildrenDayItem((ChildrenDayItem *)&local_278);
              eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                        ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_358);
            }
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            LogLuckyChestBox(this,(vector *)&local_308,(string *)(lVar11 + 0x10),iVar4);
            showBundleReward(this,param_3,true);
            MessageRouter::Post((_func_void *)gMessageRouter);
            std::vector<ChildrenDayItem,std::allocator<ChildrenDayItem>>::~vector
                      ((vector<ChildrenDayItem,std::allocator<ChildrenDayItem>> *)&local_308);
            goto LAB_03a662ec;
          }
          showBundleReward(this,param_3,true);
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          bVar1 = std::operator==((string *)(lVar11 + 0x10),"com.popcap.ios.chs.PVZ2.GiftFoReturn1")
          ;
          iVar4 = 0;
          if (bVar1) {
LAB_03a67bf8:
            MessageRouter::Post<int,int>
                      ((MessageRouter *)gMessageRouter,Message::BuyGiftFoReturn,iVar4);
          }
          else {
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                    "com.popcap.ios.chs.PVZ2.GiftFoReturn2");
            iVar4 = 1;
            if (bVar1) goto LAB_03a67bf8;
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                    "com.popcap.ios.chs.PVZ2.GiftFoReturn3");
            iVar4 = 2;
            if (bVar1) goto LAB_03a67bf8;
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                    "com.popcap.ios.chs.PVZ2.GiftFoReturn4");
            iVar4 = 3;
            if (bVar1) goto LAB_03a67bf8;
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                    "com.popcap.ios.chs.PVZ2.GiftFoReturn5");
            iVar4 = 4;
            if (bVar1) goto LAB_03a67bf8;
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                    "com.popcap.ios.chs.PVZ2.GiftFoReturn6");
            iVar4 = 5;
            if (bVar1) goto LAB_03a67bf8;
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                    "com.popcap.ios.chs.PVZ2.GiftFoReturn7");
            iVar4 = 6;
            if (bVar1) goto LAB_03a67bf8;
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                    "com.popcap.ios.chs.PVZ2.GiftFoReturn8");
            iVar4 = 7;
            if (bVar1) goto LAB_03a67bf8;
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                    "com.popcap.ios.chs.PVZ2.GiftFoReturn9");
            iVar4 = 8;
            if (bVar1) goto LAB_03a67bf8;
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                    "com.popcap.ios.chs.PVZ2.GiftFoReturn10");
            iVar4 = 9;
            if (bVar1) goto LAB_03a67bf8;
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                    "com.popcap.ios.chs.PVZ2.GiftFoReturn11");
            iVar4 = 10;
            if (bVar1) goto LAB_03a67bf8;
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                    "com.popcap.ios.chs.PVZ2.GiftFoReturn12");
            if (bVar1) {
              iVar4 = 0xb;
              goto LAB_03a67bf8;
            }
          }
          uVar5 = operator|(0x10,8);
          FUN_05462470(auStack_178,uVar5);
          psVar29 = (string *)&local_308;
          std::string::string((string *)&local_278,"");
          FUN_05462980(auStack_178,(string *)&local_278);
          std::string::~string((string *)&local_278);
          nop();
          uVar15 = 0;
          while( true ) {
            uVar31 = *(undefined8 *)param_3;
            uVar17 = FUN_03a617e8(uVar31,*(undefined8 *)(param_3 + 8));
            if (uVar17 <= uVar15) break;
            puVar16 = (undefined4 *)FUN_03a617f4(uVar31,uVar15);
            uVar31 = FUN_0546065c(auStack_168,*puVar16);
            uVar31 = FUN_054603b8(uVar31,&DAT_05593348);
            lVar11 = FUN_03a617f4(*(undefined8 *)param_3,uVar15);
            uVar31 = FUN_0546065c(uVar31,*(undefined4 *)(lVar11 + 4));
            FUN_054603b8(uVar31,&DAT_05594620);
            uVar15 = uVar15 + 1;
          }
          TGASecretStore::TGASecretStore((TGASecretStore *)&local_278);
          std::string::append((string *)&local_278,"7",(size_t)psVar29);
          FUN_05462824((string *)&local_308,auStack_178);
          FUN_05474278(auStack_250,(string *)&local_308);
          std::string::~string((string *)&local_308);
          pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
          TGALogMgr::LogGiftReturnData(pTVar19,(TGAGiftReturnData *)&local_278);
          DropGroupNode::~DropGroupNode((DropGroupNode *)&local_278);
          FUN_054617bc(auStack_178);
          goto LAB_03a662ec;
        }
        showBundleReward(this,param_3,true);
        local_330[0] = local_330[0] & 0xffffffff00000000;
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        bVar2 = std::operator==((string *)(lVar11 + 0x10),"com.popcap.ios.chs.PVZ2.TreviFountain06")
        ;
        if (bVar2) {
          MessageRouter::Post<int,int>
                    ((MessageRouter *)gMessageRouter,Message::BuyWishingPool,(uint)bVar1);
                    /* WARNING: Ignoring partial resolution of indirect */
          local_330[0]._0_4_ = L'\x06';
        }
        else {
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                  "com.popcap.ios.chs.PVZ2.TreviFountain68");
          if (bVar1) {
            MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyWishingPool,1);
                    /* WARNING: Ignoring partial resolution of indirect */
            local_330[0]._0_4_ = L'D';
          }
          else {
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                    "com.popcap.ios.chs.PVZ2.TreviFountain328");
            if (bVar1) {
              MessageRouter::Post<int,int>
                        ((MessageRouter *)gMessageRouter,Message::BuyWishingPool,2);
                    /* WARNING: Ignoring partial resolution of indirect */
              local_330[0]._0_4_ = L'ň';
            }
            else {
              lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                      "com.popcap.ios.chs.PVZ2.TreviFountain648");
              if (bVar1) {
                MessageRouter::Post<int,int>
                          ((MessageRouter *)gMessageRouter,Message::BuyWishingPool,3);
                    /* WARNING: Ignoring partial resolution of indirect */
                local_330[0]._0_4_ = L'ʈ';
              }
            }
          }
        }
        uVar5 = operator|(0x10,8);
        FUN_05462470(auStack_178,uVar5);
        psVar29 = (string *)&local_308;
        std::string::string((string *)&local_278,"");
        FUN_05462980(auStack_178,(string *)&local_278);
        std::string::~string((string *)&local_278);
        nop();
        uVar15 = 0;
        while( true ) {
          uVar31 = *(undefined8 *)param_3;
          uVar17 = FUN_03a617e8(uVar31,*(undefined8 *)(param_3 + 8));
          if (uVar17 <= uVar15) break;
          puVar16 = (undefined4 *)FUN_03a617f4(uVar31,uVar15);
          uVar31 = FUN_0546065c(auStack_168,*puVar16);
          uVar31 = FUN_054603b8(uVar31,&DAT_05593348);
          lVar11 = FUN_03a617f4(*(undefined8 *)param_3,uVar15);
          uVar31 = FUN_0546065c(uVar31,*(undefined4 *)(lVar11 + 4));
          FUN_054603b8(uVar31,&DAT_05594620);
          uVar15 = uVar15 + 1;
        }
        TGAAccumulatedLoginData::TGAAccumulatedLoginData((TGAAccumulatedLoginData *)&local_278);
        std::string::append((string *)&local_278,"3",(size_t)psVar29);
        FUN_05462824((string *)&local_308,auStack_178);
        FUN_05474278(asStack_270,(string *)&local_308);
        std::string::~string((string *)&local_308);
        std::to_string<ActivityTypeID>((ActivityTypeID *)local_330);
        FUN_05474278(asStack_268,(string *)&local_308);
        std::string::~string((string *)&local_308);
        pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGALogMgr::LogWishingPoolData(pTVar19,(TGAWishingPoolData *)&local_278);
        TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)&local_278);
      }
      FUN_054617bc(auStack_178);
      goto LAB_03a662ec;
    }
    pPVar12 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar13 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar12);
    std::string::string((string *)&local_278,"mat_renaissance_challenge_statue");
    local_370[0] = PlayerInfo::GetMaterialNum(pPVar13,(string *)&local_278);
    std::string::~string((string *)&local_278);
    nop();
    pNVar14 = (NameMapperBase *)MaterialItemMapper::GetInstance();
    std::string::string((string *)&local_278,"mat_renaissance_challenge_statue");
    NameMapperBase::GetIdForName(pNVar14,(string *)&local_278);
    std::string::~string((string *)&local_278);
    nop();
    this_01 = (RenaissanceChallengeNewManager *)
              Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstance();
    uVar15 = RenaissanceChallengeNewManager::GetResourceId(this_01);
    Sexy::StrFormat("mat_renaissance_challenge_statue_%d",(string *)&local_278,uVar15 & 0xffffffff);
    local_370[0] = PlayerInfo::GetMaterialNum(pPVar13,(string *)&local_278);
    std::string::~string((string *)&local_278);
    pNVar14 = (NameMapperBase *)MaterialItemMapper::GetInstance();
    Sexy::StrFormat("mat_renaissance_challenge_statue_%d",(string *)&local_278,uVar15 & 0xffffffff);
    iVar4 = NameMapperBase::GetIdForName(pNVar14,(string *)&local_278);
    std::string::~string((string *)&local_278);
                    /* WARNING: Ignoring partial resolution of indirect */
    local_358._0_4_ = L'\0';
                    /* WARNING: Ignoring partial resolution of indirect */
    local_330[0]._0_4_ = (uint)bVar1;
    uVar5 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar5);
    __n_00 = (TGAAnniversaryTreasureData *)&local_308;
    std::string::string((string *)&local_278,"");
    FUN_05462980(auStack_178,(string *)&local_278);
    std::string::~string((string *)&local_278);
    nop();
    uVar15 = 0;
    while( true ) {
      uVar31 = *(undefined8 *)param_3;
      uVar17 = FUN_03a617e8(uVar31,*(undefined8 *)(param_3 + 8));
      if (uVar17 <= uVar15) break;
      piVar18 = (int *)FUN_03a617f4(uVar31,uVar15);
      if (iVar4 == *piVar18) {
                    /* WARNING: Ignoring partial resolution of indirect */
        local_358._0_4_ = piVar18[1];
      }
      puVar16 = (undefined4 *)FUN_03a617f4(uVar31,uVar15);
      FUN_0546065c(auStack_168,*puVar16);
      FUN_054603b8(auStack_168,&DAT_05593348);
      uVar15 = uVar15 + 1;
    }
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    bVar1 = std::operator==((string *)(lVar11 + 0x10),
                            "com.popcap.ios.chs.PVZ2.LevelofTheDayNewyear1");
    if (bVar1) {
                    /* WARNING: Ignoring partial resolution of indirect */
      local_330[0]._0_4_ = L'\x01';
    }
    else {
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      bVar1 = std::operator==((string *)(lVar11 + 0x10),
                              "com.popcap.ios.chs.PVZ2.LevelofTheDayNewyear6");
      if (bVar1) {
                    /* WARNING: Ignoring partial resolution of indirect */
        local_330[0]._0_4_ = L'\x06';
      }
      else {
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                "com.popcap.ios.chs.PVZ2.LevelofTheDayNewyear30");
        if (bVar1) {
                    /* WARNING: Ignoring partial resolution of indirect */
          local_330[0]._0_4_ = L'\x1e';
        }
        else {
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          bVar1 = std::operator==((string *)(lVar11 + 0x10),
                                  "com.popcap.ios.chs.PVZ2.LevelofTheDayNewyear68");
          if (bVar1) {
                    /* WARNING: Ignoring partial resolution of indirect */
            local_330[0]._0_4_ = L'D';
          }
        }
      }
    }
    TGAAnniversaryTreasureData::TGAAnniversaryTreasureData((TGAAnniversaryTreasureData *)&local_308)
    ;
    std::string::append((string *)&local_308,"4",(size_t)__n_00);
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_370);
    FUN_05474278(asStack_2f8,(string *)&local_278);
    std::string::~string((string *)&local_278);
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_330);
    FUN_05474278(auStack_2d8,(string *)&local_278);
    std::string::~string((string *)&local_278);
    FUN_05462824((string *)&local_278,auStack_178);
    FUN_05474278(auStack_2d0,(string *)&local_278);
    std::string::~string((string *)&local_278);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_358);
    FUN_05474278(auStack_2c8,(string *)&local_278);
    std::string::~string((string *)&local_278);
    pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGAAnniversaryTreasureData::TGAAnniversaryTreasureData
              ((TGAAnniversaryTreasureData *)&local_278,(TGAAnniversaryTreasureData *)&local_308);
    TGALogMgr::LogFoolChallenge(pTVar19,(string *)&local_278);
    TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData
              ((TGAAnniversaryTreasureData *)&local_278);
    showBundleReward(this,param_3,true);
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    bVar1 = std::operator==((string *)(lVar11 + 0x10),
                            "com.popcap.ios.chs.PVZ2.LevelofTheDayNewyear1");
    iVar4 = 0;
    if (bVar1) {
LAB_03a669c4:
      MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyRenaiEgg,iVar4);
    }
    else {
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      bVar1 = std::operator==((string *)(lVar11 + 0x10),
                              "com.popcap.ios.chs.PVZ2.LevelofTheDayNewyear6");
      iVar4 = 1;
      if (bVar1) goto LAB_03a669c4;
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      bVar1 = std::operator==((string *)(lVar11 + 0x10),
                              "com.popcap.ios.chs.PVZ2.LevelofTheDayNewyear30");
      iVar4 = 2;
      if (bVar1) goto LAB_03a669c4;
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      bVar1 = std::operator==((string *)(lVar11 + 0x10),
                              "com.popcap.ios.chs.PVZ2.LevelofTheDayNewyear68");
      if (bVar1) {
        iVar4 = 3;
        goto LAB_03a669c4;
      }
    }
    TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData
              ((TGAAnniversaryTreasureData *)&local_308);
    FUN_054617bc(auStack_178);
    goto LAB_03a662ec;
  }
  TGAPlantWarsData::TGAPlantWarsData((TGAPlantWarsData *)&local_308);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_330);
  FUN_05474278((TGAPlantWarsData *)&local_308,(string *)&local_278);
  std::string::~string((string *)&local_278);
  pPVar12 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar13 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar12);
  std::string::string((string *)&local_278,"mat_fireworks");
  uVar5 = PlayerInfo::GetMaterialNum(pPVar13,(string *)&local_278);
  local_330[0] = CONCAT44((int)(local_330[0] >> 0x20),uVar5);
  std::string::~string((string *)&local_278);
  nop();
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_330);
  FUN_05474278(auStack_300,(string *)&local_278);
  std::string::~string((string *)&local_278);
  uVar5 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar5);
  std::string::string((string *)&local_278,"");
  FUN_05462980(auStack_178,(string *)&local_278);
  std::string::~string((string *)&local_278);
  nop();
  uVar15 = 0;
  while( true ) {
    uVar31 = *(undefined8 *)param_3;
    uVar17 = FUN_03a617e8(uVar31,*(undefined8 *)(param_3 + 8));
    if (uVar17 <= uVar15) break;
    piVar18 = (int *)FUN_03a617f4(uVar31,uVar15);
    iVar4 = *piVar18;
    if (iVar4 == 0x59e5) {
      std::to_string<ActivityTypeID>((ActivityTypeID *)(piVar18 + 1));
      FUN_05474278(asStack_2f8,(string *)&local_278);
      std::string::~string((string *)&local_278);
      piVar18 = (int *)FUN_03a617f4(*(undefined8 *)param_3,uVar15);
      iVar4 = *piVar18;
    }
    FUN_0546065c(auStack_168,iVar4);
    FUN_054603b8(auStack_168,&DAT_05593348);
    lVar11 = FUN_03a617f4(*(undefined8 *)param_3,uVar15);
    FUN_0546065c(auStack_168,*(undefined4 *)(lVar11 + 4));
    FUN_054603b8(auStack_168,&DAT_05594620);
    uVar15 = uVar15 + 1;
  }
  FUN_05462824((string *)&local_278,auStack_178);
  FUN_05474278(auStack_2d8,(string *)&local_278);
  std::string::~string((string *)&local_278);
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  thunk_FUN_05475e00(auStack_2d0,lVar11 + 0x10);
  pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogPurchaseData::TGALogPurchaseData
            ((TGALogPurchaseData *)&local_278,(TGALogPurchaseData *)&local_308);
  TGALogMgr::LogFightZodiac(pTVar19,(string *)&local_278);
  TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)&local_278);
  showBundleReward(this,param_3,true);
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  bVar1 = std::operator==((string *)(lVar11 + 0x10),"com.popcap.ios.chs.PVZ2.NewYearLionDance01");
  iVar4 = 1;
  if (bVar1) {
LAB_03a66810:
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyLionDanceGacha,iVar4);
  }
  else {
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    bVar1 = std::operator==((string *)(lVar11 + 0x10),"com.popcap.ios.chs.PVZ2.NewYearLionDance6");
    iVar4 = 0;
    if (bVar1) goto LAB_03a66810;
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    bVar1 = std::operator==((string *)(lVar11 + 0x10),"com.popcap.ios.chs.PVZ2.NewYearLionDance30");
    iVar4 = 2;
    if (bVar1) goto LAB_03a66810;
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    bVar1 = std::operator==((string *)(lVar11 + 0x10),"com.popcap.ios.chs.PVZ2.NewYearLionDance68");
    if (bVar1) {
      iVar4 = 3;
      goto LAB_03a66810;
    }
  }
  FUN_054617bc(auStack_178);
  TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)&local_308);
LAB_03a662ec:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBillingRewardManager::LogAvatarTicketAndShowBundleReward(std::vector<ChildrenDayItem,
   std::allocator<ChildrenDayItem> > const&, std::string const&, int) */

void __thiscall
NewRecallBillingRewardManager::LogAvatarTicketAndShowBundleReward
          (NewRecallBillingRewardManager *this,vector *param_1,string *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  TGALogMgr *this_02;
  DString *__n;
  size_t __n_00;
  ulong uVar7;
  undefined8 uVar8;
  int local_1e4 [3];
  DString aDStack_1d8 [16];
  string asStack_1c8 [8];
  string asStack_1c0 [8];
  string asStack_1b8 [40];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_1e4[0] = param_3;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_1c8,"mat_avatar_ticket");
  uVar1 = PlayerInfo::GetMaterialNum(this_01,asStack_1c8);
  std::string::~string(asStack_1c8);
  nop();
  showBundleReward(this,param_1,true);
  std::string::string(asStack_1c8,"mat_avatar_ticket");
  iVar2 = PlayerInfo::GetMaterialNum(this_01,asStack_1c8);
  std::string::~string(asStack_1c8);
  nop();
  uVar3 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar3);
  __n = aDStack_1d8;
  std::string::string(asStack_1c8,"");
  FUN_05462980(auStack_178,asStack_1c8);
  std::string::~string(asStack_1c8);
  nop();
  uVar7 = 0;
  while( true ) {
    uVar8 = *(undefined8 *)param_1;
    uVar5 = FUN_03a617d4(uVar8,*(undefined8 *)(param_1 + 8));
    if (uVar5 <= uVar7) break;
    lVar4 = FUN_03a617e0(uVar8,uVar7);
    uVar8 = FUN_0546065c(auStack_168,*(undefined4 *)(lVar4 + 0x14));
    uVar8 = FUN_054603b8(uVar8,&DAT_05593348);
    lVar4 = FUN_03a617e0(*(undefined8 *)param_1,uVar7);
    uVar8 = FUN_0546065c(uVar8,*(undefined4 *)(lVar4 + 0x18));
    FUN_054603b8(uVar8,&DAT_05594620);
    uVar7 = uVar7 + 1;
  }
  TGAAnniversaryTreasureData::TGAAnniversaryTreasureData((TGAAnniversaryTreasureData *)asStack_1c8);
  std::string::append(asStack_1c8,"3",(size_t)__n);
  DString::DString(aDStack_1d8,iVar2);
  pcVar6 = (char *)DString::c_str(aDStack_1d8);
  std::string::append(asStack_1c0,pcVar6,(size_t)__n);
  DString::~DString(aDStack_1d8);
  __n_00 = (size_t)uVar1;
  DString::DString(aDStack_1d8,iVar2 - uVar1);
  pcVar6 = (char *)DString::c_str(aDStack_1d8);
  std::string::append(asStack_1b8,pcVar6,__n_00);
  DString::~DString(aDStack_1d8);
  thunk_FUN_05475e00(auStack_190,param_2);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_1e4);
  FUN_05474278(auStack_188,aDStack_1d8);
  std::string::~string((string *)aDStack_1d8);
  FUN_05462824(aDStack_1d8,auStack_178);
  FUN_05474278(auStack_180,aDStack_1d8);
  std::string::~string((string *)aDStack_1d8);
  this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogExchangeAvatar(this_02,(TGAExchangeAvatarData *)asStack_1c8);
  TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData((TGAAnniversaryTreasureData *)asStack_1c8)
  ;
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBillingRewardManager::iosBillingReward(std::vector<ChildrenDayItem,
   std::allocator<ChildrenDayItem> > const&) */

void __thiscall
NewRecallBillingRewardManager::iosBillingReward(NewRecallBillingRewardManager *this,vector *param_1)

{
  undefined *puVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  TGALogMgr *pTVar8;
  WorldLevelPackageManager *pWVar9;
  char *pcVar10;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PartyAssistMainData *pPVar11;
  NetworkMgr *pNVar12;
  INetworkMsgProcess *pIVar13;
  ChildrenDayItem *pCVar14;
  ProfileMgr *pPVar15;
  PlayerInfo *pPVar16;
  undefined4 *puVar17;
  string *psVar18;
  __normal_iterator *p_Var19;
  size_t sVar20;
  ulong uVar21;
  undefined8 uVar22;
  int local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined8 local_370 [3];
  undefined8 local_358;
  undefined1 auStack_350 [8];
  undefined1 auStack_348 [8];
  undefined1 auStack_340 [8];
  undefined1 auStack_338 [8];
  undefined8 local_330;
  undefined1 auStack_320 [8];
  undefined1 auStack_318 [8];
  undefined1 auStack_310 [8];
  undefined8 local_308 [3];
  undefined1 auStack_2f0 [16];
  undefined1 auStack_2e0 [104];
  undefined8 local_278 [2];
  string asStack_268 [4];
  undefined4 local_264;
  int local_260;
  string asStack_258 [16];
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [8];
  string asStack_230 [184];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [88];
  undefined1 auStack_110 [264];
  size_t local_8;
  
  psVar18 = (string *)(this + 8);
  local_8 = ___stack_chk_guard;
  sVar20 = ___stack_chk_guard;
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.NewRecallBank18");
  if (bVar2) {
    TGANFSLinkageData::TGANFSLinkageData((TGANFSLinkageData *)local_308);
    local_330 = CONCAT44(local_330._4_4_,2);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_330);
    FUN_05474278((TGANFSLinkageData *)local_308,(string *)local_278);
    std::string::~string((string *)local_278);
    pTVar8 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGAArtifactPresentData::TGAArtifactPresentData
              ((TGAArtifactPresentData *)local_278,(TGAArtifactPresentData *)local_308);
    TGALogMgr::LogNewRecallBank(pTVar8,(string *)local_278);
    TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)local_278);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_278);
    local_358 = CONCAT44(local_358._4_4_,1);
    local_370[0] = CONCAT44(local_370[0]._4_4_,0x2a29);
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
              ((pair<wchar_t_const,wchar_t> *)&local_330,(wchar_t *)local_370,(wchar_t *)&local_358)
    ;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_278,
               (pair *)&local_330);
    pNVar12 = (NetworkMgr *)NetworkMgr::Instance();
    pIVar13 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar12);
    INetworkMsgProcess::RequestActivityList(pIVar13,(vector *)local_278,0,true);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_278);
    TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)local_308);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.Pennyshandbook");
  if (bVar2) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_330);
    local_358._0_4_ = L'⨳';
    local_308[0] = CONCAT44(local_308[0]._4_4_,1);
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
              ((pair<wchar_t_const,wchar_t> *)local_278,(wchar_t *)&local_358,(wchar_t *)local_308);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)&local_330,
               (pair *)local_278);
    pNVar12 = (NetworkMgr *)NetworkMgr::Instance();
    pIVar13 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar12);
    INetworkMsgProcess::RequestActivityList(pIVar13,(vector *)&local_330,0,true);
    MessageRouter::Post((_func_void *)gMessageRouter);
    TGAPennyPursuitData::TGAPennyPursuitData((TGAPennyPursuitData *)local_308);
    local_358 = CONCAT44(local_358._4_4_,7);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_358);
    FUN_05474278((TGAPennyPursuitData *)local_308,(pair<wchar_t_const,wchar_t> *)local_278);
    std::string::~string((string *)local_278);
    pTVar8 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGAPennyPursuitData::TGAPennyPursuitData
              ((TGAPennyPursuitData *)local_278,(TGAPennyPursuitData *)local_308);
    TGALogMgr::LogPennyPursuit(pTVar8,(pair<wchar_t_const,wchar_t> *)local_278);
    TGAPennyPursuitData::~TGAPennyPursuitData((TGAPennyPursuitData *)local_278);
    TGAPennyPursuitData::~TGAPennyPursuitData((TGAPennyPursuitData *)local_308);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)&local_330);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.NewYearLionDance01");
  if (bVar2) {
    LogFightZodiac(this,param_1);
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyLionDanceGacha,1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.NewYearLionDance6");
  if (bVar2) {
    LogFightZodiac(this,param_1);
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyLionDanceGacha,0);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.NewYearLionDance30");
  if (bVar2) {
    LogFightZodiac(this,param_1);
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyLionDanceGacha,2);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.NewYearLionDance68");
  if (bVar2) {
    LogFightZodiac(this,param_1);
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyLionDanceGacha,3);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.LevelofTheDayNewyear1");
  if (bVar2) {
    LogFoolData(this,param_1,1);
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyRenaiEgg,0);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.LevelofTheDayNewyear6");
  if (bVar2) {
    LogFoolData(this,param_1,6);
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyRenaiEgg,1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.LevelofTheDayNewyear30");
  if (bVar2) {
    LogFoolData(this,param_1,0x1e);
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyRenaiEgg,2);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.LevelofTheDayNewyear68");
  if (bVar2) {
    LogFoolData(this,param_1,0x44);
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyRenaiEgg,3);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.CallofWishLimit30");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyCallofWish,1);
    LogCallofWish(this,param_1,0x1e);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.CallofWishLimit68");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyCallofWish,2);
    LogCallofWish(this,param_1,0x44);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.CallofWishLimit128");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyCallofWish,3);
    LogCallofWish(this,param_1,0x80);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.CallofWishDaily6");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyCallofWish,4);
    LogCallofWish(this,param_1,6);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.CallofWishDaily12");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyCallofWish,5);
    LogCallofWish(this,param_1,0xc);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.CallofWishDaily30");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyCallofWish,6);
    LogCallofWish(this,param_1,0x1e);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.TreviFountain06");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyWishingPool,0);
    LogWishingPool(this,param_1,6);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.TreviFountain68");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyWishingPool,1);
    LogWishingPool(this,param_1,0x44);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.TreviFountain328");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyWishingPool,2);
    LogWishingPool(this,param_1,0x148);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.TreviFountain648");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyWishingPool,3);
    LogWishingPool(this,param_1,0x288);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.FutureGiftBox6");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyFutureGiftBox,1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.FutureGiftBox30");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyFutureGiftBox,2);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.FutureGiftBox98");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyFutureGiftBox,3);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.FutureGiftBox128");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyFutureGiftBox,4);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.PennyGiftBox30");
  if (bVar2) {
    LogPennyGiftBox(this,param_1,psVar18,0x1e);
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyPennyGiftBox,0);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.PennyGiftBox68");
  if (bVar2) {
    LogPennyGiftBox(this,param_1,psVar18,0x44);
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyPennyGiftBox,1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.PennyGiftBox198");
  if (bVar2) {
    LogPennyGiftBox(this,param_1,psVar18,0xc6);
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyPennyGiftBox,2);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.PennyGiftBox328");
  if (bVar2) {
    LogPennyGiftBox(this,param_1,psVar18,0x148);
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyPennyGiftBox,3);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.PennyGiftBox648");
  if (bVar2) {
    LogPennyGiftBox(this,param_1,psVar18,0x288);
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyPennyGiftBox,4);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.WonderfulNight6");
  if (bVar2) {
    LogToyNight(this,param_1,psVar18,6);
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::OnBuyToyNight,0);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.WonderfulNight30");
  if (bVar2) {
    LogToyNight(this,param_1,psVar18,0x1e);
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::OnBuyToyNight,1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.WonderfulNight98");
  if (bVar2) {
    LogToyNight(this,param_1,psVar18,0x62);
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::OnBuyToyNight,2);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.WonderfulNight45");
  if (bVar2) {
    LogToyNight(this,param_1,psVar18,0x2d);
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::OnBuyToyNight,3);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.WonderfulNight198");
  if (bVar2) {
    LogToyNight(this,param_1,psVar18,0xc6);
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::OnBuyToyNight,4);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.HarvestBattle6");
  if (bVar2) {
    LogAutumnHarvest(this,param_1,psVar18,6);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyAutumnHarvest,0);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.HarvestBattle30");
  if (bVar2) {
    LogAutumnHarvest(this,param_1,psVar18,0x1e);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyAutumnHarvest,1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.HarvestBattle98");
  if (bVar2) {
    LogAutumnHarvest(this,param_1,psVar18,0x62);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyAutumnHarvest,2);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.HarvestBattle45");
  if (bVar2) {
    LogAutumnHarvest(this,param_1,psVar18,0x2d);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyAutumnHarvest,3);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.HarvestBattle68");
  if (bVar2) {
    LogAutumnHarvest(this,param_1,psVar18,0x44);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyAutumnHarvest,4);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.GiftFoReturn1");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyGiftFoReturn,0);
    LogGiftFoReturn(this,param_1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.GiftFoReturn2");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyGiftFoReturn,1);
    LogGiftFoReturn(this,param_1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.GiftFoReturn3");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyGiftFoReturn,2);
    LogGiftFoReturn(this,param_1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.GiftFoReturn4");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyGiftFoReturn,3);
    LogGiftFoReturn(this,param_1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.GiftFoReturn5");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyGiftFoReturn,4);
    LogGiftFoReturn(this,param_1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.GiftFoReturn6");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyGiftFoReturn,5);
    LogGiftFoReturn(this,param_1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.GiftFoReturn7");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyGiftFoReturn,6);
    LogGiftFoReturn(this,param_1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.GiftFoReturn8");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyGiftFoReturn,7);
    LogGiftFoReturn(this,param_1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.GiftFoReturn9");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyGiftFoReturn,8);
    LogGiftFoReturn(this,param_1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.GiftFoReturn10");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyGiftFoReturn,9);
    LogGiftFoReturn(this,param_1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.GiftFoReturn11");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyGiftFoReturn,10);
    LogGiftFoReturn(this,param_1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.GiftFoReturn12");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyGiftFoReturn,0xb);
    LogGiftFoReturn(this,param_1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.DaveKitchen6");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyDaveKitchen,1);
    LogDaveKitchen(this,param_1,psVar18,6);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.DaveKitchen68");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyDaveKitchen,2);
    LogDaveKitchen(this,param_1,psVar18,0x44);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.DragonClanTreasures45");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyDragonTreasure,0);
    LogDragonTreasure(this,param_1,psVar18,0x2d);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.DragonClanTreasures68");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyDragonTreasure,1);
    LogDragonTreasure(this,param_1,psVar18,0x44);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.DragonClanTreasures30");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyDragonTreasure,2);
    LogDragonTreasure(this,param_1,psVar18,0x1e);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.DragonClanTreasures60");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyDragonTreasure,3);
    LogDragonTreasure(this,param_1,psVar18,0x3c);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.DragonClanTreasures128");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyDragonTreasure,4);
    LogDragonTreasure(this,param_1,psVar18,0x80);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.JuBaoPavilion30");
  if (bVar2) {
    LogTreasurePavilionAndShowBundleReward(this,param_1,psVar18,0x1e);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyTreasurePavilion,0);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.JuBaoPavilion98");
  if (bVar2) {
    LogTreasurePavilionAndShowBundleReward(this,param_1,psVar18,0x62);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyTreasurePavilion,1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.JuBaoPavilion328");
  if (bVar2) {
    LogTreasurePavilionAndShowBundleReward(this,param_1,psVar18,0x148);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyTreasurePavilion,2);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.JuBaoPavilion648");
  if (bVar2) {
    LogTreasurePavilionAndShowBundleReward(this,param_1,psVar18,0x288);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyTreasurePavilion,3);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.DressShop6");
  if (bVar2) {
    LogAvatarTicketAndShowBundleReward(this,param_1,psVar18,6);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.DressShop30");
  if (bVar2) {
    LogAvatarTicketAndShowBundleReward(this,param_1,psVar18,0x1e);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.DressShop68");
  if (bVar2) {
    LogAvatarTicketAndShowBundleReward(this,param_1,psVar18,0x44);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.DressShop128");
  if (bVar2) {
    LogAvatarTicketAndShowBundleReward(this,param_1,psVar18,0x80);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.DressShop328");
  if (bVar2) {
    LogAvatarTicketAndShowBundleReward(this,param_1,psVar18,0x148);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.DressShop648");
  if (bVar2) {
    LogAvatarTicketAndShowBundleReward(this,param_1,psVar18,0x288);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.PlantCultivate20");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyPlantCultivate,0);
    uVar3 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar3);
    psVar18 = (string *)local_308;
    std::string::string((string *)local_278,"");
    FUN_05462980(auStack_178,(string *)local_278);
    std::string::~string((string *)local_278);
    nop();
    uVar21 = 0;
    while( true ) {
      uVar22 = *(undefined8 *)param_1;
      uVar6 = FUN_03a617d4(uVar22,*(undefined8 *)(param_1 + 8));
      if (uVar6 <= uVar21) break;
      lVar7 = FUN_03a617e0(uVar22,uVar21);
      uVar22 = FUN_0546065c(auStack_168,*(undefined4 *)(lVar7 + 0x14));
      uVar22 = FUN_054603b8(uVar22,&DAT_05593348);
      lVar7 = FUN_03a617e0(*(undefined8 *)param_1,uVar21);
      uVar22 = FUN_0546065c(uVar22,*(undefined4 *)(lVar7 + 0x18));
      FUN_054603b8(uVar22,&DAT_05594620);
      uVar21 = uVar21 + 1;
    }
    TGALuckyChestData::TGALuckyChestData((TGALuckyChestData *)local_278);
    std::string::append((string *)local_278,"6",(size_t)psVar18);
    std::string::append(asStack_258,"com.popcap.ios.chs.PVZ2.PlantCultivate20",(size_t)psVar18);
    FUN_05462824((string *)local_308,auStack_178);
    FUN_05474278(auStack_248,(string *)local_308);
    std::string::~string((string *)local_308);
    pTVar8 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogAnniversaryNurturingData(pTVar8,(TGAAnniversaryNurturingData *)local_278);
    TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)local_278);
    FUN_054617bc(auStack_178);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.LimitedSummonVIP30");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    sVar20 = 0xffffffff;
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyLimitedSummon,-1);
    TGASecretStore::TGASecretStore((TGASecretStore *)local_278);
    std::string::append((string *)local_278,"2",sVar20);
    std::string::append(asStack_268,"30",sVar20);
    pTVar8 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogLimitedSummon(pTVar8,(TGALimitedSummonData *)local_278);
    DropGroupNode::~DropGroupNode((DropGroupNode *)local_278);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.LimitedSummon6");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyLimitedSummon,0);
    LogLimitedSummonPackage(this,param_1,psVar18,6);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.LimitedSummon30");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyLimitedSummon,1);
    LogLimitedSummonPackage(this,param_1,psVar18,0x1e);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.LimitedSummon98");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyLimitedSummon,2);
    LogLimitedSummonPackage(this,param_1,psVar18,0x62);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.LimitedSummon328");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyLimitedSummon,3);
    LogLimitedSummonPackage(this,param_1,psVar18,0x148);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.TimeMystery45");
  if (bVar2) {
    TGAUnchartedData::TGAUnchartedData((TGAUnchartedData *)local_308);
    DString::DString((DString *)local_278,5);
    pcVar10 = (char *)DString::c_str((DString *)local_278);
    std::string::append((string *)local_308,pcVar10,sVar20);
    DString::~DString((DString *)local_278);
    pTVar8 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGAUnchartedData::TGAUnchartedData((TGAUnchartedData *)local_278,(TGAUnchartedData *)local_308);
    TGALogMgr::LogUncharted(pTVar8,(DString *)local_278);
    TGAUnchartedData::~TGAUnchartedData((TGAUnchartedData *)local_278);
    Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
    UnchartedModeNetworkMgr::RequestNetwork();
    TGAUnchartedData::~TGAUnchartedData((TGAUnchartedData *)local_308);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.EasterEgg06");
  if (bVar2) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_278);
    local_330 = CONCAT44(local_330._4_4_,1);
    local_358 = CONCAT44(local_358._4_4_,0x2a7d);
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
              ((pair<wchar_t_const,wchar_t> *)local_308,(wchar_t *)&local_358,(wchar_t *)&local_330)
    ;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_278,
               (pair *)local_308);
    pNVar12 = (NetworkMgr *)NetworkMgr::Instance();
    pIVar13 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar12);
    INetworkMsgProcess::RequestActivityList(pIVar13,(vector *)local_278,0,true);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_278);
    goto LAB_03a6b7e0;
  }
  lVar7 = FUN_05474374(psVar18,"com.popcap.ios.chs.PVZ2.LevelPackage_",0);
  if (lVar7 != -1) {
    showBundleReward(this,param_1,true);
    LogLevelPackage(this,param_1);
    pWVar9 = (WorldLevelPackageManager *)
             Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
    WorldLevelPackageManager::ResetInitRequest(pWVar9);
    pWVar9 = (WorldLevelPackageManager *)
             Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
    WorldLevelPackageManager::RequestNetwork(pWVar9,true);
    goto LAB_03a6b7e0;
  }
  lVar7 = FUN_05474374(psVar18,"com.popcap.ios.chs.PVZ2.TreasureBowl",0);
  if (lVar7 != -1) {
    showBundleReward(this,param_1,true);
    Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
    CornucopiaMgr::RequestNetwork();
    uVar3 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar3);
    p_Var19 = (__normal_iterator *)local_308;
    std::string::string((string *)local_278,"");
    FUN_05462980(auStack_178,(string *)local_278);
    std::string::~string((string *)local_278);
    nop();
    local_308[0] = FUN_03a63894(*(undefined8 *)param_1);
    local_278[0] = FUN_03a638e4(*(undefined8 *)(param_1 + 8));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_308,(__normal_iterator *)local_278), bVar2)
    {
      lVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_308);
      uVar22 = FUN_0546065c(auStack_168,*(undefined4 *)(lVar7 + 0x14));
      uVar22 = FUN_054603b8(uVar22,&DAT_05593348);
      uVar22 = FUN_0546065c(uVar22,*(undefined4 *)(lVar7 + 0x18));
      FUN_054603b8(uVar22,&DAT_05594620);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)local_308);
    }
    TGALuckyChestData::TGALuckyChestData((TGALuckyChestData *)local_278);
    DString::DString((DString *)local_308,3);
    pcVar10 = (char *)DString::c_str((DString *)local_308);
    std::string::append((string *)local_278,pcVar10,(size_t)p_Var19);
    DString::~DString((DString *)local_308);
    FUN_05462824((__normal_iterator *)local_308,auStack_178);
    FUN_05474278(auStack_248,(__normal_iterator *)local_308);
    std::string::~string((string *)local_308);
    pTVar8 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogCornucopiaData(pTVar8,(TGACornucopiaData *)local_278);
    TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)local_278);
    FUN_054617bc(auStack_178);
    goto LAB_03a6b7e0;
  }
  lVar7 = FUN_05474374(psVar18,"com.popcap.ios.chs.PVZ2.PartyEpsActivity",0);
  if (lVar7 != -1) {
    showBundleReward(this,param_1,true);
    Sexy::LazySingleton<PartyAssistMgr>::GetInstancePtr();
    PartyAssistMgr::RequestNetwork();
    uVar3 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar3);
    p_Var19 = (__normal_iterator *)local_308;
    std::string::string((string *)local_278,"");
    FUN_05462980(auStack_178,(string *)local_278);
    std::string::~string((string *)local_278);
    nop();
    local_308[0] = FUN_03a63894(*(undefined8 *)param_1);
    local_278[0] = FUN_03a638e4(*(undefined8 *)(param_1 + 8));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_308,(__normal_iterator *)local_278), bVar2)
    {
      lVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_308);
      uVar22 = FUN_0546065c(auStack_168,*(undefined4 *)(lVar7 + 0x14));
      uVar22 = FUN_054603b8(uVar22,&DAT_05593348);
      uVar22 = FUN_0546065c(uVar22,*(undefined4 *)(lVar7 + 0x18));
      FUN_054603b8(uVar22,&DAT_05594620);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)local_308);
    }
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<PartyAssistMgr>::GetInstancePtr();
    pPVar11 = (PartyAssistMainData *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_end(this_00);
    PartyAssistMainData::PartyAssistMainData((PartyAssistMainData *)local_278,pPVar11);
    TGASecretStore::TGASecretStore((TGASecretStore *)local_308);
    std::string::append((string *)local_308,"4",(size_t)p_Var19);
    thunk_FUN_05475e00(auStack_2f0,psVar18);
    FUN_05462824((string *)&local_330,auStack_178);
    FUN_05474278(auStack_2e0,(string *)&local_330);
    std::string::~string((string *)&local_330);
    pTVar8 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogPartyAssistData(pTVar8,(TGAPartyAssistData *)local_308);
    DropGroupNode::~DropGroupNode((DropGroupNode *)local_308);
    PartyAssistMainData::~PartyAssistMainData((PartyAssistMainData *)local_278);
    FUN_054617bc(auStack_178);
    goto LAB_03a6b7e0;
  }
  sVar20 = 0;
  lVar7 = FUN_05474374(psVar18,"com.popcap.ios.chs.PVZ2.Bank30");
  if (lVar7 != -1) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_278);
    local_330 = CONCAT44(local_330._4_4_,1);
    local_358 = CONCAT44(local_358._4_4_,0x2a44);
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
              ((pair<wchar_t_const,wchar_t> *)local_308,(wchar_t *)&local_358,(wchar_t *)&local_330)
    ;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_278,
               (pair *)local_308);
    pNVar12 = (NetworkMgr *)NetworkMgr::Instance();
    pIVar13 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar12);
    INetworkMsgProcess::RequestActivityList(pIVar13,(vector *)local_278,0,true);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_278);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.HappyFiesta6");
  if (bVar2) {
    pPVar15 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar16 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar15);
    std::string::string((string *)local_278,"mat_carnival_ticket");
    iVar4 = PlayerInfo::GetMaterialNum(pPVar16,(string *)local_278);
    std::string::~string((string *)local_278);
    nop();
    showBundleReward(this,param_1,true);
    std::string::string((string *)local_278,"mat_carnival_ticket");
    iVar5 = PlayerInfo::GetMaterialNum(pPVar16,(string *)local_278);
    std::string::~string((string *)local_278);
    nop();
    LogCarnival(this,param_1,iVar5 - iVar4);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyCarnivalPacket,0);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.HappyFiesta30");
  if (bVar2) {
    pPVar15 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar16 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar15);
    std::string::string((string *)local_278,"mat_carnival_ticket");
    iVar4 = PlayerInfo::GetMaterialNum(pPVar16,(string *)local_278);
    std::string::~string((string *)local_278);
    nop();
    showBundleReward(this,param_1,true);
    std::string::string((string *)local_278,"mat_carnival_ticket");
    iVar5 = PlayerInfo::GetMaterialNum(pPVar16,(string *)local_278);
    std::string::~string((string *)local_278);
    nop();
    LogCarnival(this,param_1,iVar5 - iVar4);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyCarnivalPacket,1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.HappyFiesta68");
  if (bVar2) {
    pPVar15 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar16 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar15);
    std::string::string((string *)local_278,"mat_carnival_ticket");
    iVar4 = PlayerInfo::GetMaterialNum(pPVar16,(string *)local_278);
    std::string::~string((string *)local_278);
    nop();
    showBundleReward(this,param_1,true);
    std::string::string((string *)local_278,"mat_carnival_ticket");
    iVar5 = PlayerInfo::GetMaterialNum(pPVar16,(string *)local_278);
    std::string::~string((string *)local_278);
    nop();
    LogCarnival(this,param_1,iVar5 - iVar4);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyCarnivalPacket,2);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.HappyFiesta128");
  if (bVar2) {
    pPVar15 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar16 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar15);
    std::string::string((string *)local_278,"mat_carnival_ticket");
    iVar4 = PlayerInfo::GetMaterialNum(pPVar16,(string *)local_278);
    std::string::~string((string *)local_278);
    nop();
    showBundleReward(this,param_1,true);
    std::string::string((string *)local_278,"mat_carnival_ticket");
    iVar5 = PlayerInfo::GetMaterialNum(pPVar16,(string *)local_278);
    std::string::~string((string *)local_278);
    nop();
    LogCarnival(this,param_1,iVar5 - iVar4);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyCarnivalPacket,3);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.HappyFiesta328");
  if (bVar2) {
    pPVar15 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar16 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar15);
    std::string::string((string *)local_278,"mat_carnival_ticket");
    iVar4 = PlayerInfo::GetMaterialNum(pPVar16,(string *)local_278);
    std::string::~string((string *)local_278);
    nop();
    showBundleReward(this,param_1,true);
    std::string::string((string *)local_278,"mat_carnival_ticket");
    iVar5 = PlayerInfo::GetMaterialNum(pPVar16,(string *)local_278);
    std::string::~string((string *)local_278);
    nop();
    LogCarnival(this,param_1,iVar5 - iVar4);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyCarnivalPacket,4);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.HappyFiesta648");
  if (bVar2) {
    pPVar15 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar16 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar15);
    std::string::string((string *)local_278,"mat_carnival_ticket");
    iVar4 = PlayerInfo::GetMaterialNum(pPVar16,(string *)local_278);
    std::string::~string((string *)local_278);
    nop();
    showBundleReward(this,param_1,true);
    std::string::string((string *)local_278,"mat_carnival_ticket");
    iVar5 = PlayerInfo::GetMaterialNum(pPVar16,(string *)local_278);
    std::string::~string((string *)local_278);
    nop();
    LogCarnival(this,param_1,iVar5 - iVar4);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyCarnivalPacket,5);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.NewYearGoods6");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyNewYearGoods,0);
    LogNewYearGoods(this,param_1,6);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.NewYearGoods30");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyNewYearGoods,1);
    LogNewYearGoods(this,param_1,0x1e);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.NewYearGoods68");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyNewYearGoods,2);
    LogNewYearGoods(this,param_1,0x44);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.NewYearGoods128");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyNewYearGoods,3);
    LogNewYearGoods(this,param_1,0x80);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.NewYearGoods328");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyNewYearGoods,4);
    LogNewYearGoods(this,param_1,0x148);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.NewYearGoods648");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyNewYearGoods,5);
    LogNewYearGoods(this,param_1,0x288);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.GeneCultivate6");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyGeneFactor,0);
    LogGeneFactor(this,param_1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.GeneCultivate30");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyGeneFactor,1);
    LogGeneFactor(this,param_1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.GeneCultivate68");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyGeneFactor,2);
    LogGeneFactor(this,param_1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.GeneCultivate128");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyGeneFactor,3);
    LogGeneFactor(this,param_1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.GeneCultivate328");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyGeneFactor,4);
    LogGeneFactor(this,param_1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.GeneCultivate648");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyGeneFactor,5);
    LogGeneFactor(this,param_1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.SmashGoldenEggs6");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyGoldenEgg,0);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.SmashGoldenEggs30");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyGoldenEgg,1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.SmashGoldenEggs68");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyGoldenEgg,2);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.SmashGoldenEggs128");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyGoldenEgg,3);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.ArborDayKettle1");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyArborDayKettle,0);
    LogArborDayInfo(param_1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.ArborDayKettle6");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyArborDayKettle,1);
    LogArborDayInfo(param_1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.ArborDayKettle30");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyArborDayKettle,2);
    LogArborDayInfo(param_1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.ArborDayKettle68");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyArborDayKettle,3);
    LogArborDayInfo(param_1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.GrowthPackage1");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyGrowthPackage,0);
    LogGrowthPackage(this,param_1,1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.GrowthPackage6");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyGrowthPackage,1);
    LogGrowthPackage(this,param_1,6);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.GrowthPackage30");
  if (bVar2) {
    showBundleReward(this,param_1,true);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyGrowthPackage,2);
    LogGrowthPackage(this,param_1,0x1e);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.summercamp68");
  if (bVar2) {
    MessageRouter::Post((_func_void *)gMessageRouter);
    TGAAnniversaryTreasureData::TGAAnniversaryTreasureData((TGAAnniversaryTreasureData *)local_278);
    std::string::append((string *)local_278,"6",sVar20);
    thunk_FUN_05475e00(auStack_238,psVar18);
    std::string::append(asStack_230,"68",sVar20);
    pTVar8 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogBattleOrderInfo(pTVar8,(TGABattleOrderData *)local_278);
    TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData((TGAAnniversaryTreasureData *)local_278)
    ;
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.summercamp6");
  if (bVar2) {
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyBattleOrderBundle,0);
    LogBattleOrderPackage(this,psVar18,6,0x4b0);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.summercamp8");
  if (bVar2) {
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyBattleOrderBundle,1);
    LogBattleOrderPackage(this,psVar18,8,2000);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.summercamp18");
  if (bVar2) {
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyBattleOrderBundle,2);
    LogBattleOrderPackage(this,psVar18,0x12,5000);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.summercamp45");
  if (bVar2) {
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyBattleOrderBundle,3);
    LogBattleOrderPackage(this,psVar18,0x2d,15000);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.summercamp78");
  if (bVar2) {
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BuyBattleOrderBundle,4);
    LogBattleOrderPackage(this,psVar18,0x4e,30000);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.newpvpbattlepass68");
  if (bVar2) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_308);
    local_370[0] = FUN_03a63894(*(undefined8 *)param_1);
    local_358 = FUN_03a638e4(*(undefined8 *)(param_1 + 8));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_370,(__normal_iterator *)&local_358),
          puVar1 = gMessageRouter, bVar2) {
      pCVar14 = (ChildrenDayItem *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_370);
      ChildrenDayItem::ChildrenDayItem((ChildrenDayItem *)local_278,pCVar14);
      Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_330);
      local_330 = CONCAT44(local_260,local_264);
      std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
                ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_308,
                 (S2C_BonusInfo *)&local_330);
      ChildrenDayItem::~ChildrenDayItem((ChildrenDayItem *)local_278);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)local_370);
    }
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_278,(vector *)local_308)
    ;
    MessageRouter::
    Post<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>
              ((MessageRouter *)puVar1,Message::NewPVPBattlePassBuyPrivilege,
               (ChildrenDayItem *)local_278);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_278);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_308);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.newpvpbattlepass6");
  if (bVar2) {
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::NewPVPBattlePassBuyBundle,0);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.newpvpbattlepass8");
  if (bVar2) {
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::NewPVPBattlePassBuyBundle,1);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.newpvpbattlepass18");
  if (bVar2) {
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::NewPVPBattlePassBuyBundle,2);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.newpvpbattlepass45");
  if (bVar2) {
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::NewPVPBattlePassBuyBundle,3);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_308);
    local_370[0] = FUN_03a63894(*(undefined8 *)param_1);
    local_358 = FUN_03a638e4(*(undefined8 *)(param_1 + 8));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_370,(__normal_iterator *)&local_358),
          puVar1 = gMessageRouter, bVar2) {
      pCVar14 = (ChildrenDayItem *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_370);
      ChildrenDayItem::ChildrenDayItem((ChildrenDayItem *)local_278,pCVar14);
      if (local_260 == 0) {
        ChildrenDayItem::~ChildrenDayItem((ChildrenDayItem *)local_278);
      }
      else {
        Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_330);
        local_330 = CONCAT44(local_260,local_264);
        std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
                  ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_308,
                   (S2C_BonusInfo *)&local_330);
        ChildrenDayItem::~ChildrenDayItem((ChildrenDayItem *)local_278);
      }
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)local_370);
    }
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_278,(vector *)local_308)
    ;
    MessageRouter::
    Post<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&,int,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,int>
              ((MessageRouter *)puVar1,Message::NewPVPBattlePassExtrarewards,
               (ChildrenDayItem *)local_278,3);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_278);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_308);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.newpvpbattlepass78");
  if (bVar2) {
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::NewPVPBattlePassBuyBundle,4);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_308);
    local_370[0] = FUN_03a63894(*(undefined8 *)param_1);
    local_358 = FUN_03a638e4(*(undefined8 *)(param_1 + 8));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_370,(__normal_iterator *)&local_358),
          puVar1 = gMessageRouter, bVar2) {
      pCVar14 = (ChildrenDayItem *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_370);
      ChildrenDayItem::ChildrenDayItem((ChildrenDayItem *)local_278,pCVar14);
      if (local_260 == 0) {
        ChildrenDayItem::~ChildrenDayItem((ChildrenDayItem *)local_278);
      }
      else {
        Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_330);
        local_330 = CONCAT44(local_260,local_264);
        std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
                  ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_308,
                   (S2C_BonusInfo *)&local_330);
        ChildrenDayItem::~ChildrenDayItem((ChildrenDayItem *)local_278);
      }
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)local_370);
    }
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_278,(vector *)local_308)
    ;
    MessageRouter::
    Post<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&,int,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,int>
              ((MessageRouter *)puVar1,Message::NewPVPBattlePassExtrarewards,
               (ChildrenDayItem *)local_278,4);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_278);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_308);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.01luckBox68");
  if (bVar2) {
    LogLuckyChestBox(this,param_1,psVar18,0x44);
    showBundleReward(this,param_1,true);
    MessageRouter::Post((_func_void *)gMessageRouter);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.02luckBox68");
  if (bVar2) {
    LogLuckyChestBox(this,param_1,psVar18,0x44);
    showBundleReward(this,param_1,true);
    MessageRouter::Post((_func_void *)gMessageRouter);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.03luckBox68");
  if (bVar2) {
    LogLuckyChestBox(this,param_1,psVar18,0x44);
    showBundleReward(this,param_1,true);
    MessageRouter::Post((_func_void *)gMessageRouter);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.04luckBox68");
  if (bVar2) {
    LogLuckyChestBox(this,param_1,psVar18,0x44);
    showBundleReward(this,param_1,true);
    MessageRouter::Post((_func_void *)gMessageRouter);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.DuelChest3");
  if (bVar2) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_308);
    local_370[0] = FUN_03a63894(*(undefined8 *)param_1);
    local_358 = FUN_03a638e4(*(undefined8 *)(param_1 + 8));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_370,(__normal_iterator *)&local_358),
          puVar1 = gMessageRouter, bVar2) {
      pCVar14 = (ChildrenDayItem *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_370);
      ChildrenDayItem::ChildrenDayItem((ChildrenDayItem *)local_278,pCVar14);
      Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_330);
      local_330 = CONCAT44(local_260,local_264);
      std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
                ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_308,
                 (S2C_BonusInfo *)&local_330);
      ChildrenDayItem::~ChildrenDayItem((ChildrenDayItem *)local_278);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)local_370);
    }
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_278,(vector *)local_308)
    ;
    MessageRouter::
    Post<int,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>&,int,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>
              ((MessageRouter *)puVar1,Message::NewPVPShopBuyChest,1,(ChildrenDayItem *)local_278);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_278);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_308);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.DuelChest4");
  if (bVar2) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_308);
    local_370[0] = FUN_03a63894(*(undefined8 *)param_1);
    local_358 = FUN_03a638e4(*(undefined8 *)(param_1 + 8));
    while( true ) {
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)local_370,(__normal_iterator *)&local_358);
      puVar1 = gMessageRouter;
      if (!bVar2) break;
      pCVar14 = (ChildrenDayItem *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_370);
      ChildrenDayItem::ChildrenDayItem((ChildrenDayItem *)local_278,pCVar14);
      Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_330);
      local_330 = CONCAT44(local_260,local_264);
      std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
                ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_308,
                 (S2C_BonusInfo *)&local_330);
      ChildrenDayItem::~ChildrenDayItem((ChildrenDayItem *)local_278);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)local_370);
    }
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_278,(vector *)local_308)
    ;
    MessageRouter::
    Post<int,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>&,int,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>
              ((MessageRouter *)puVar1,Message::NewPVPShopBuyChest,bVar2,
               (ChildrenDayItem *)local_278);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_278);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_308);
    goto LAB_03a6b7e0;
  }
  bVar2 = std::operator==(psVar18,"com.popcap.ios.chs.PVZ2.CucumberBomb01");
  if (bVar2) {
    lVar7 = UICukePackage::get();
    if (lVar7 == 0) {
      pPVar15 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar16 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar15);
      PlayerInfo::setHasPurchaseCukePkg(pPVar16,true);
      lVar7 = LawnApp::GetActivityConfig();
      iVar4 = FUN_02fd3c70(*(undefined4 *)(lVar7 + 0xc));
      std::string::string((string *)local_278,"poweruptacticalcuke");
      PlayerInfo::ModifyPowerupUses(pPVar16,(string *)local_278,iVar4);
      std::string::~string((string *)local_278);
      nop();
    }
    MessageRouter::Post((_func_void *)gMessageRouter);
    goto LAB_03a6b7e0;
  }
  local_37c = GetNewRecallBundleIdBySku(this,psVar18);
  if (local_37c == 0) goto LAB_03a6b7e0;
  uVar3 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar3);
  FUN_0544a0a4(auStack_110,0);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)local_308);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_370);
  local_358 = FUN_03a63894(*(undefined8 *)param_1);
  local_330 = FUN_03a638e4(*(undefined8 *)(param_1 + 8));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_358,(__normal_iterator *)&local_330), bVar2)
  {
    lVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_358);
    puVar17 = (undefined4 *)
              std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
                        ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                         local_308,(int *)(lVar7 + 0x14));
    *puVar17 = *(undefined4 *)(lVar7 + 0x18);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)local_370,(int *)(lVar7 + 0x14));
    if (*(int *)(lVar7 + 0x14) == 0xbc0) {
      pPVar15 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar16 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar15);
      iVar4 = PlayerInfo::GetNumGems(pPVar16,false);
      PlayerInfo::SetGems(pPVar16,iVar4 + *(int *)(lVar7 + 0x18));
      local_378 = *(undefined4 *)(lVar7 + 0x18);
    }
    else {
      ProfileChangeItemAmount(*(int *)(lVar7 + 0x14),*(int *)(lVar7 + 0x18),false);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_278);
    }
    uVar22 = FUN_0546065c(auStack_168,*(undefined4 *)(lVar7 + 0x14));
    uVar22 = FUN_054603b8(uVar22,&DAT_05593348);
    uVar22 = FUN_0546065c(uVar22,*(undefined4 *)(lVar7 + 0x18));
    FUN_054603b8(uVar22,&DAT_05594620);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_358);
  }
  UIRedPacketResult::create((map *)local_308,(vector *)local_370,true);
  MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::BundleBuySuccess,local_37c);
  TGANFSLinkageData::TGANFSLinkageData((TGANFSLinkageData *)&local_358);
  local_330 = CONCAT44(local_330._4_4_,2);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_330);
  FUN_05474278((__normal_iterator *)&local_358,(GAME_ITEM_INFO *)local_278);
  std::string::~string((string *)local_278);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_37c);
  FUN_05474278(auStack_350,(GAME_ITEM_INFO *)local_278);
  std::string::~string((string *)local_278);
  FUN_05462824((GAME_ITEM_INFO *)local_278,auStack_178);
  FUN_05474278(auStack_348,(GAME_ITEM_INFO *)local_278);
  std::string::~string((string *)local_278);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_378);
  FUN_05474278(auStack_340,(GAME_ITEM_INFO *)local_278);
  std::string::~string((string *)local_278);
  if ((local_37c == 0x15 || local_37c == 0xb) || (local_37c == 0x1f)) {
    uVar3 = 6;
LAB_03a6e8d0:
    local_330 = CONCAT44(local_330._4_4_,uVar3);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_330);
    FUN_05474278(auStack_338,(GAME_ITEM_INFO *)local_278);
    std::string::~string((string *)local_278);
  }
  else {
    if ((local_37c == 0x16 || local_37c == 0xc) || (local_37c == 0x20)) {
      uVar3 = 0x1e;
      goto LAB_03a6e8d0;
    }
    if ((local_37c == 0x17 || local_37c == 0xd) || (local_37c == 0x21)) {
      uVar3 = 0x44;
      goto LAB_03a6e8d0;
    }
    if (local_37c == 0x29) {
      uVar3 = 0x80;
      goto LAB_03a6e8d0;
    }
  }
  pTVar8 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAArtifactPresentData::TGAArtifactPresentData
            ((TGAArtifactPresentData *)local_278,(TGAArtifactPresentData *)&local_358);
  TGALogMgr::LogNewRecallBundle(pTVar8,(GAME_ITEM_INFO *)local_278);
  TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)local_278);
  TGANFSLinkageData::TGANFSLinkageData((TGANFSLinkageData *)&local_330);
  local_374 = 3;
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_374);
  FUN_05474278((ActivityTypeID *)&local_330,(GAME_ITEM_INFO *)local_278);
  std::string::~string((string *)local_278);
  FUN_05462824((GAME_ITEM_INFO *)local_278,auStack_178);
  FUN_05474278(auStack_320,(GAME_ITEM_INFO *)local_278);
  std::string::~string((string *)local_278);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_378);
  FUN_05474278(auStack_318,(GAME_ITEM_INFO *)local_278);
  std::string::~string((string *)local_278);
  thunk_FUN_05475e00(auStack_310,auStack_338);
  pTVar8 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAArtifactPresentData::TGAArtifactPresentData
            ((TGAArtifactPresentData *)local_278,(TGAArtifactPresentData *)&local_330);
  TGALogMgr::LogNewRecallBundle(pTVar8,(GAME_ITEM_INFO *)local_278);
  TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)local_278);
  TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)&local_330);
  TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)&local_358);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_370);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)local_308);
  FUN_054617bc(auStack_178);
LAB_03a6b7e0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

