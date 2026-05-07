// Class: PartyAssistMgr


/* PartyAssistMgr::ShouldChooseFinalBonus() */

PartyAssistMgr __thiscall PartyAssistMgr::ShouldChooseFinalBonus(PartyAssistMgr *this)

{
  long lVar1;
  int *piVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0xa8);
  lVar1 = FUN_04ea236c(uVar3,*(undefined8 *)(this + 0xb0));
  if (lVar1 == 0) {
    return this[0xec];
  }
  piVar2 = (int *)FUN_04ea2394(uVar3,0);
  return (PartyAssistMgr)(*piVar2 == 0);
}


/* PartyAssistMgr::RequestNetwork() */

void PartyAssistMgr::RequestNetwork(void)

{
  ActivityManager *this;
  
  this = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this,0x2a79,true,0);
  return;
}


/* PartyAssistMgr::~PartyAssistMgr() */

void __thiscall PartyAssistMgr::~PartyAssistMgr(PartyAssistMgr *this)

{
  *(undefined ***)this = &PTR__PartyAssistMgr_069f0410;
  PartyAssistMainData::~PartyAssistMainData((PartyAssistMainData *)(this + 8));
  Sexy::LazySingleton<PartyAssistMgr>::~LazySingleton((LazySingleton<PartyAssistMgr> *)this);
  return;
}


/* PartyAssistMgr::~PartyAssistMgr() */

void __thiscall PartyAssistMgr::~PartyAssistMgr(PartyAssistMgr *this)

{
  ~PartyAssistMgr(this);
  AK::FreeHook(this);
  return;
}


/* PartyAssistMgr::PartyAssistMgr() */

void __thiscall PartyAssistMgr::PartyAssistMgr(PartyAssistMgr *this)

{
  Sexy::LazySingleton<PartyAssistMgr>::LazySingleton((LazySingleton<PartyAssistMgr> *)this);
  *(undefined ***)this = &PTR__PartyAssistMgr_069f0410;
  PartyAssistMainData::PartyAssistMainData((PartyAssistMainData *)(this + 8));
  return;
}


/* PartyAssistMgr::LoadData(PartyAssistMainData const&) */

void __thiscall PartyAssistMgr::LoadData(PartyAssistMgr *this,PartyAssistMainData *param_1)

{
  PartyAssistMainData::operator=((PartyAssistMainData *)(this + 8),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PartyAssistMgr::TestData() */

void __thiscall PartyAssistMgr::TestData(PartyAssistMgr *this)

{
  vector<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>,std::allocator<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>>>
  *this_00;
  vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *this_01;
  vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>> *this_02;
  vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>> *this_03;
  vector<PartyTaskInfo,std::allocator<PartyTaskInfo>> *this_04;
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  *this_05;
  undefined1 auStack_a8 [8];
  PartyAssistWishBonusInfo aPStack_a0 [16];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  PartyAssistBonusInfo aPStack_60 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> avStack_38 [24];
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_14;
  undefined4 local_c;
  long local_8;
  
  this_00 = (vector<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>,std::allocator<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>>>
             *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1c) = 1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x70) = 100;
  this_01 = (vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x78);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  this_02 = (vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>> *)(this + 0x90);
  this_03 = (vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>> *)(this + 0xa8);
  this_04 = (vector<PartyTaskInfo,std::allocator<PartyTaskInfo>> *)(this + 0x58);
  PartyAssistWishBonusInfo::PartyAssistWishBonusInfo(aPStack_a0);
  this_05 = (vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)(this + 0xd0);
  PartyAssistBonusInfo::PartyAssistBonusInfo(aPStack_60);
  std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>::push_back
            ((vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>> *)avStack_50
             ,aPStack_a0);
  std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>::push_back
            ((vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>> *)avStack_50
             ,aPStack_a0);
  std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>::push_back
            ((vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>> *)avStack_50
             ,aPStack_a0);
  std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>::push_back
            ((vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>> *)avStack_50
             ,aPStack_a0);
  std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>::push_back
            ((vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>> *)avStack_50
             ,aPStack_a0);
  std::
  vector<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>,std::allocator<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>>>
  ::push_back(this_00,(vector *)avStack_50);
  std::
  vector<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>,std::allocator<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>>>
  ::push_back(this_00,(vector *)avStack_50);
  std::
  vector<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>,std::allocator<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>>>
  ::push_back(this_00,(vector *)avStack_50);
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_90);
  local_90 = 0xbc0;
  local_8c = 100;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
            (this_01,(S2C_BonusInfo *)&local_90);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
            (this_01,(S2C_BonusInfo *)&local_90);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
            (this_01,(S2C_BonusInfo *)&local_90);
  std::vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>>::push_back
            (this_02,aPStack_60);
  std::vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>>::push_back
            (this_02,aPStack_60);
  std::vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>>::push_back
            (this_02,aPStack_60);
  std::vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>>::push_back
            (this_03,aPStack_60);
  std::vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>>::push_back
            (this_03,aPStack_60);
  std::vector<PartyAssistBonusInfo,std::allocator<PartyAssistBonusInfo>>::push_back
            (this_03,aPStack_60);
  local_80 = 0xbc0;
  local_7c = 100;
  local_78 = 0;
  std::vector<PartyTaskInfo,std::allocator<PartyTaskInfo>>::push_back
            (this_04,(PartyTaskInfo *)&local_80);
  local_78 = 1;
  std::vector<PartyTaskInfo,std::allocator<PartyTaskInfo>>::push_back
            (this_04,(PartyTaskInfo *)&local_80);
  local_78 = 2;
  std::vector<PartyTaskInfo,std::allocator<PartyTaskInfo>>::push_back
            (this_04,(PartyTaskInfo *)&local_80);
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_70);
  local_70 = 0xbc0;
  uStack_6c = 100;
  local_20 = 0x6400000bc0;
  local_18 = local_68;
  local_c = local_68;
  local_14 = local_20;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            (avStack_38,&local_20,2,auStack_a8);
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::push_back(this_05,(vector *)avStack_38);
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::push_back(this_05,(vector *)avStack_38);
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::push_back(this_05,(vector *)avStack_38);
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::push_back(this_05,(vector *)avStack_38);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector(avStack_38);
  std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>::~vector
            ((vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>> *)avStack_50
            );
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

