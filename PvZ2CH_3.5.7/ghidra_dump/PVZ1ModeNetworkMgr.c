// Class: PVZ1ModeNetworkMgr


/* PVZ1ModeNetworkMgr::GetServerPlantBanList() const */

PVZ1ModeNetworkMgr * __thiscall PVZ1ModeNetworkMgr::GetServerPlantBanList(PVZ1ModeNetworkMgr *this)

{
  return this + 0x170;
}


/* PVZ1ModeNetworkMgr::GetCurrentLevel() const */

undefined8 PVZ1ModeNetworkMgr::GetCurrentLevel(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* PVZ1ModeNetworkMgr::GetEndPlayInfo() */

PVZ1ModeNetworkMgr * __thiscall PVZ1ModeNetworkMgr::GetEndPlayInfo(PVZ1ModeNetworkMgr *this)

{
  return this + 0xe8;
}


/* PVZ1ModeNetworkMgr::GetHardEliteLevelNumber() */

undefined4 __thiscall PVZ1ModeNetworkMgr::GetHardEliteLevelNumber(PVZ1ModeNetworkMgr *this)

{
  return *(undefined4 *)(this + 0xc0);
}


/* PVZ1ModeNetworkMgr::AddTimeEnergy(int) */

void __thiscall PVZ1ModeNetworkMgr::AddTimeEnergy(PVZ1ModeNetworkMgr *this,int param_1)

{
  *(int *)(this + 0x40) = *(int *)(this + 0x40) + param_1;
  return;
}


/* PVZ1ModeNetworkMgr::SetCurrentLevel(std::string) */

void PVZ1ModeNetworkMgr::SetCurrentLevel(long param_1)

{
  undefined8 uVar1;
  
  thunk_FUN_05475e00(param_1 + 0x150);
  uVar1 = FUN_0547429c(param_1 + 0x150);
  Sexy::OutputDebugStrF((wchar_t *)"pvz1mode set level = %s",uVar1);
  return;
}


/* PVZ1ModeNetworkMgr::SetCurrentLevelIndex(int) */

void __thiscall PVZ1ModeNetworkMgr::SetCurrentLevelIndex(PVZ1ModeNetworkMgr *this,int param_1)

{
  *(int *)(this + 0x158) = param_1;
  return;
}


/* PVZ1ModeNetworkMgr::GetCurrentLevelFuel(bool, int) */

undefined4 __thiscall
PVZ1ModeNetworkMgr::GetCurrentLevelFuel(PVZ1ModeNetworkMgr *this,bool param_1,int param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1) {
    uVar4 = *(undefined8 *)(this + 0x60);
    uVar2 = FUN_04c722a4(uVar4,*(undefined8 *)(this + 0x68));
    uVar1 = 0;
    if ((ulong)(long)param_2 < uVar2) {
      lVar3 = FUN_04c722e0(uVar4,(long)param_2);
      uVar1 = *(undefined4 *)(lVar3 + 0x48);
    }
  }
  else {
    uVar4 = *(undefined8 *)(this + 0x48);
    uVar2 = FUN_04c722a4(uVar4,*(undefined8 *)(this + 0x50));
    uVar1 = 0;
    if ((ulong)(long)param_2 < uVar2) {
      lVar3 = FUN_04c722e0(uVar4,(long)param_2);
      return *(undefined4 *)(lVar3 + 0x48);
    }
  }
  return uVar1;
}


/* PVZ1ModeNetworkMgr::GetCurrentLevelFirstReward(bool, int) */

undefined4 __thiscall
PVZ1ModeNetworkMgr::GetCurrentLevelFirstReward(PVZ1ModeNetworkMgr *this,bool param_1,int param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1) {
    uVar4 = *(undefined8 *)(this + 0x60);
    uVar2 = FUN_04c722a4(uVar4,*(undefined8 *)(this + 0x68));
    uVar1 = 0;
    if ((ulong)(long)param_2 < uVar2) {
      lVar3 = FUN_04c722e0(uVar4,(long)param_2);
      uVar1 = *(undefined4 *)(lVar3 + 0x4c);
    }
  }
  else {
    uVar4 = *(undefined8 *)(this + 0x48);
    uVar2 = FUN_04c722a4(uVar4,*(undefined8 *)(this + 0x50));
    uVar1 = 0;
    if ((ulong)(long)param_2 < uVar2) {
      lVar3 = FUN_04c722e0(uVar4,(long)param_2);
      return *(undefined4 *)(lVar3 + 0x4c);
    }
  }
  return uVar1;
}


/* PVZ1ModeNetworkMgr::syncWorldMapInfo(PVZ1ModeMainEntryData const&) */

void __thiscall
PVZ1ModeNetworkMgr::syncWorldMapInfo(PVZ1ModeNetworkMgr *this,PVZ1ModeMainEntryData *param_1)

{
  bool bVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar6 = 1;
  PlayerInfo::ClearPVZ1LevelProgress(this_01,false);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = FUN_04c722a4(uVar7,*(undefined8 *)(param_1 + 0x48));
  uVar4 = 0;
  uVar5 = 1;
  if (uVar2 != 0) {
    do {
      lVar3 = FUN_04c722d4(uVar7,uVar4);
      if (*(int *)(lVar3 + 0x4c) == 1) {
        PlayerInfo::SetPVZ1LevelComplete(this_01,iVar6,false);
        uVar7 = *(undefined8 *)(param_1 + 0x40);
        uVar2 = FUN_04c722a4(uVar7,*(undefined8 *)(param_1 + 0x48));
      }
      iVar6 = iVar6 + 1;
      bVar1 = uVar5 < uVar2;
      uVar4 = uVar5;
      uVar5 = uVar5 + 1;
    } while (bVar1);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  iVar6 = 1;
  uVar2 = FUN_04c722a4(uVar7,*(undefined8 *)(param_1 + 0x60));
  uVar4 = 0;
  uVar5 = 1;
  if (uVar2 != 0) {
    do {
      lVar3 = FUN_04c722d4(uVar7,uVar4);
      if (*(int *)(lVar3 + 0x4c) == 1) {
        PlayerInfo::SetPVZ1LevelComplete(this_01,iVar6,true);
        uVar7 = *(undefined8 *)(param_1 + 0x58);
        uVar2 = FUN_04c722a4(uVar7,*(undefined8 *)(param_1 + 0x60));
      }
      iVar6 = iVar6 + 1;
      bVar1 = uVar5 < uVar2;
      uVar4 = uVar5;
      uVar5 = uVar5 + 1;
    } while (bVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeNetworkMgr::GetChooseChallengeList() */

void __thiscall PVZ1ModeNetworkMgr::GetChooseChallengeList(PVZ1ModeNetworkMgr *this)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  for (uVar3 = 0;
      uVar2 = std::vector<bool,std::allocator<bool>>::size
                        ((vector<bool,std::allocator<bool>> *)(this + 0x128)), uVar3 < uVar2;
      uVar3 = uVar3 + 1) {
    auVar4 = FUN_04c7256c(*(undefined8 *)(this + 0x128),uVar3);
    local_18 = auVar4;
    bVar1 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_18);
    Sexy::OutputDebugStrF
              ((wchar_t *)"m_chooseChallengeList %d : %d",uVar3 & 0xffffffff,(ulong)bVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((vector<bool,std::allocator<bool>> *)(this + 0x128));
}


/* PVZ1ModeNetworkMgr::PVZ1ModeNetworkMgr() */

void __thiscall PVZ1ModeNetworkMgr::PVZ1ModeNetworkMgr(PVZ1ModeNetworkMgr *this)

{
  undefined *puVar1;
  size_t in_x2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<PVZ1ModeNetworkMgr>::LazySingleton((LazySingleton<PVZ1ModeNetworkMgr> *)this);
  *(undefined ***)this = &PTR__PVZ1ModeNetworkMgr_06991bc0;
  PVZ1ModeMainEntryData::PVZ1ModeMainEntryData((PVZ1ModeMainEntryData *)(this + 8));
  PVZ1ModeStartOfPlayData::PVZ1ModeStartOfPlayData((PVZ1ModeStartOfPlayData *)(this + 200));
  PVZ1ModeEndOfPlayData::PVZ1ModeEndOfPlayData((PVZ1ModeEndOfPlayData *)(this + 0xe8));
  std::vector<bool,std::allocator<bool>>::vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x128));
  Set8BytesTo0((string *)(this + 0x150));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x170));
  this[0x120] = (PVZ1ModeNetworkMgr)0x0;
  std::vector<bool,std::allocator<bool>>::clear((vector<bool,std::allocator<bool>> *)(this + 0x128))
  ;
  std::string::append((string *)(this + 0x150),"",in_x2);
  *(undefined4 *)(this + 0x158) = 0;
  this[0x15c] = (PVZ1ModeNetworkMgr)0x0;
  this[0x15d] = (PVZ1ModeNetworkMgr)0x0;
  this[0x168] = (PVZ1ModeNetworkMgr)0x0;
  this[0x169] = (PVZ1ModeNetworkMgr)0x0;
  this[0x16a] = (PVZ1ModeNetworkMgr)0x0;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x160) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<PVZ1ModeNetworkMgr,void(PVZ1ModeNetworkMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* PVZ1ModeNetworkMgr::~PVZ1ModeNetworkMgr() */

void __thiscall PVZ1ModeNetworkMgr::~PVZ1ModeNetworkMgr(PVZ1ModeNetworkMgr *this)

{
  *(undefined ***)this = &PTR__PVZ1ModeNetworkMgr_06991bc0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x170));
  std::string::~string((string *)(this + 0x150));
  std::vector<bool,std::allocator<bool>>::~vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x128));
  PVZ1ModeEndOfPlayData::~PVZ1ModeEndOfPlayData((PVZ1ModeEndOfPlayData *)(this + 0xe8));
  PVZ1ModeStartOfPlayData::~PVZ1ModeStartOfPlayData((PVZ1ModeStartOfPlayData *)(this + 200));
  PVZ1ModeMainEntryData::~PVZ1ModeMainEntryData((PVZ1ModeMainEntryData *)(this + 8));
  Sexy::LazySingleton<PVZ1ModeNetworkMgr>::~LazySingleton((LazySingleton<PVZ1ModeNetworkMgr> *)this)
  ;
  return;
}


/* PVZ1ModeNetworkMgr::~PVZ1ModeNetworkMgr() */

void __thiscall PVZ1ModeNetworkMgr::~PVZ1ModeNetworkMgr(PVZ1ModeNetworkMgr *this)

{
  ~PVZ1ModeNetworkMgr(this);
  AK::FreeHook(this);
  return;
}


/* PVZ1ModeNetworkMgr::GetHardLevelTheme(int) */

void PVZ1ModeNetworkMgr::GetHardLevelTheme(int param_1)

{
  vector *pvVar1;
  int in_w1;
  vector<int,std::allocator<int>> *in_x8;
  
  pvVar1 = (vector *)FUN_04c72300(*(undefined8 *)((ulong)(uint)param_1 + 0xa8),(long)in_w1);
  std::vector<int,std::allocator<int>>::vector(in_x8,pvVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeNetworkMgr::GetChallengeStatus(int) */

void PVZ1ModeNetworkMgr::GetChallengeStatus(int param_1)

{
  int iVar1;
  vector *pvVar2;
  int in_w1;
  vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *in_x8;
  undefined8 uVar3;
  undefined4 local_24;
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  uVar3 = *(undefined8 *)((ulong)(uint)param_1 + 0x90);
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04c722ec(uVar3,*(undefined8 *)((ulong)(uint)param_1 + 0x98));
  if (in_w1 < iVar1) {
    pvVar2 = (vector *)FUN_04c72300(uVar3,(long)in_w1);
    std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)in_x8,pvVar2);
  }
  else {
    local_24 = 0;
    std::vector<int,std::allocator<int>>::vector
              ((ulong)avStack_20,(int *)0x3,(allocator *)&local_24);
    std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
              (in_x8,(vector *)avStack_20);
    std::vector<int,std::allocator<int>>::~vector(avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeNetworkMgr::RequestGetMainEntryData(bool) */

void __thiscall PVZ1ModeNetworkMgr::RequestGetMainEntryData(PVZ1ModeNetworkMgr *this,bool param_1)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  undefined1 auStack_28 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x120] == (PVZ1ModeNetworkMgr)0x0) {
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
              (avStack_20,&DAT_057556e0,1,auStack_28);
    INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_20,0,false);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_20);
    this[0x120] = (PVZ1ModeNetworkMgr)0x1;
  }
  this[0x15c] = (PVZ1ModeNetworkMgr)param_1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeNetworkMgr::GetLevelBonus(bool, int) */

void PVZ1ModeNetworkMgr::GetLevelBonus(bool param_1,int param_2)

{
  ulong uVar1;
  vector *pvVar2;
  int in_w2;
  vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *in_x8;
  undefined8 uVar3;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  uVar1 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  if ((param_2 & 0xffU) == 0) {
    uVar3 = *(undefined8 *)(uVar1 + 0x48);
    uVar1 = FUN_04c722a4(uVar3,*(undefined8 *)(uVar1 + 0x50));
    if ((ulong)(long)in_w2 < uVar1) goto LAB_04c74f74;
  }
  else {
    uVar3 = *(undefined8 *)(uVar1 + 0x60);
    uVar1 = FUN_04c722a4(uVar3,*(undefined8 *)(uVar1 + 0x68));
    if ((ulong)(long)in_w2 < uVar1) {
LAB_04c74f74:
      pvVar2 = (vector *)FUN_04c722e0(uVar3,(long)in_w2);
      std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::vector
                ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)in_x8,
                 pvVar2);
      goto LAB_04c74f30;
    }
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            (in_x8,(vector *)avStack_20);
  std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::~vector
            ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)avStack_20);
LAB_04c74f30:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeNetworkMgr::GetLevelFirstRewardBonus(bool, int) */

void PVZ1ModeNetworkMgr::GetLevelFirstRewardBonus(bool param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  int in_w2;
  vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *in_x8;
  undefined8 uVar3;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  uVar1 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  if ((param_2 & 0xffU) == 0) {
    uVar3 = *(undefined8 *)(uVar1 + 0x48);
    uVar1 = FUN_04c722a4(uVar3,*(undefined8 *)(uVar1 + 0x50));
    if ((ulong)(long)in_w2 < uVar1) goto LAB_04c75040;
  }
  else {
    uVar3 = *(undefined8 *)(uVar1 + 0x60);
    uVar1 = FUN_04c722a4(uVar3,*(undefined8 *)(uVar1 + 0x68));
    if ((ulong)(long)in_w2 < uVar1) {
LAB_04c75040:
      lVar2 = FUN_04c722e0(uVar3,(long)in_w2);
      std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::vector
                ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)in_x8,
                 (vector *)(lVar2 + 0x18));
      goto LAB_04c74ffc;
    }
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            (in_x8,(vector *)avStack_20);
  std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::~vector
            ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)avStack_20);
LAB_04c74ffc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeNetworkMgr::GetCurrentLevelChallengeBonus(bool, int) */

void PVZ1ModeNetworkMgr::GetCurrentLevelChallengeBonus(bool param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  int in_w2;
  vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *in_x8;
  undefined8 uVar3;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  uVar1 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  if ((param_2 & 0xffU) == 0) {
    uVar3 = *(undefined8 *)(uVar1 + 0x48);
    uVar1 = FUN_04c722a4(uVar3,*(undefined8 *)(uVar1 + 0x50));
    if ((ulong)(long)in_w2 < uVar1) goto LAB_04c75304;
  }
  else {
    uVar3 = *(undefined8 *)(uVar1 + 0x60);
    uVar1 = FUN_04c722a4(uVar3,*(undefined8 *)(uVar1 + 0x68));
    if ((ulong)(long)in_w2 < uVar1) {
LAB_04c75304:
      lVar2 = FUN_04c722e0(uVar3,(long)in_w2);
      std::
      vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
      ::vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
                *)in_x8,(vector *)(lVar2 + 0x30));
      goto LAB_04c752c0;
    }
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            (in_x8,(vector *)avStack_20);
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)avStack_20);
LAB_04c752c0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeNetworkMgr::initTestData() */

void __thiscall PVZ1ModeNetworkMgr::initTestData(PVZ1ModeNetworkMgr *this)

{
  int iVar1;
  size_t in_x2;
  PVZ1ModeMainEntryData aPStack_c8 [8];
  string asStack_c0 [16];
  undefined1 local_b0;
  undefined4 local_ac;
  undefined4 local_90;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ1ModeMainEntryData::PVZ1ModeMainEntryData(aPStack_c8);
  std::string::append(asStack_c0,"pvz1_w1",in_x2);
  local_ac = 0;
  local_b0 = 1;
  local_90 = 999;
  iVar1 = Sexy::LazySingleton<RiftThemeMgr>::GetInstance();
  RiftThemeMgr::SyncTheme(iVar1);
  PVZ1ModeMainEntryData::operator=((PVZ1ModeMainEntryData *)(this + 8),aPStack_c8);
  MessageRouter::Broadcast<int,int,int,int>
            ((MessageRouter *)gMessageRouter,Message::PVZ1ModeNetworkResponseReceived,1,2);
  PVZ1ModeMainEntryData::~PVZ1ModeMainEntryData(aPStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeNetworkMgr::syncMainEntryInfo() */

void __thiscall PVZ1ModeNetworkMgr::syncMainEntryInfo(PVZ1ModeNetworkMgr *this)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  PVZ2UIDialog *pPVar3;
  RiftThemeMgr *this_01;
  int iVar4;
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  wstring awStack_198 [8];
  wstring awStack_190 [24];
  Delegate0 aDStack_178 [48];
  ActiveItem aAStack_148 [24];
  char local_130;
  PVZ1ModeMainEntryData aPStack_c8 [32];
  vector avStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = 5;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_130 != '\0') {
    PVZ1ModeMainEntryData::PVZ1ModeMainEntryData(aPStack_c8);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_148,(RtObject *)aPStack_c8);
    this_00 = gLawnApp;
    if (cVar1 == '\0') {
      FUN_05478178(awStack_198,&DAT_056f11a8,auStack_1a8);
      FUN_05478178(awStack_190,L"[WECHAT_ACTIVITY_DATA_ERROR]",auStack_1a0);
      pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_198,awStack_190);
      FUN_05476c50(awStack_190);
      nop();
      FUN_05476c50(awStack_198);
      nop();
      FUN_05478178(awStack_198,L"[BUTTON_OK]",auStack_1a0);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_178,awStack_190);
      PVZ2UIDialog::AddButton(pPVar3,awStack_198,aDStack_178,1);
      FUN_05476c50(awStack_198);
      nop();
    }
    else {
      this_01 = (RiftThemeMgr *)Sexy::LazySingleton<RiftThemeMgr>::GetInstance();
      iVar4 = 2;
      RiftThemeMgr::SyncTheme(this_01,avStack_a8);
      syncWorldMapInfo(this,aPStack_c8);
      PVZ1ModeMainEntryData::operator=((PVZ1ModeMainEntryData *)(this + 8),aPStack_c8);
    }
    PVZ1ModeMainEntryData::~PVZ1ModeMainEntryData(aPStack_c8);
  }
  MessageRouter::Broadcast<int,int,int,int>
            ((MessageRouter *)gMessageRouter,Message::PVZ1ModeNetworkResponseReceived,1,iVar4);
  ActiveItem::~ActiveItem(aAStack_148);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeNetworkMgr::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
PVZ1ModeNetworkMgr::onNotifyRefreshActivityList(PVZ1ModeNetworkMgr *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (this[0x120] != (PVZ1ModeNetworkMgr)0x0)) {
    local_1c = 0x2a54;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      NetworkHelper::MakeServerPlantBanList(0x2a54,this + 0x170);
      syncMainEntryInfo(this);
      this[0x120] = (PVZ1ModeNetworkMgr)0x0;
      LocalProfileSaveData::UpdatePVZ1TipsTime();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeNetworkMgr::RequestStartPlayData(PVZ1ModeStartPlayParamData) */

void __thiscall PVZ1ModeNetworkMgr::RequestStartPlayData(PVZ1ModeNetworkMgr *this,ulong param_2)

{
  string *psVar1;
  char *pcVar2;
  DNetwork *this_00;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2192];
  string asStack_458 [1104];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_ce8,"tp");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_ce8);
  if ((param_2 & 0xff) == 0) {
    pcVar2 = "1";
  }
  else {
    pcVar2 = "2";
  }
  std::string::append(psVar1,pcVar2,0x5594000);
  __n = auStack_d48;
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_d40,"gl");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString((DString *)asStack_ce8,(int)(param_2 >> 0x20));
  pcVar2 = (char *)DString::c_str((DString *)asStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n);
  DString::~DString((DString *)asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_04c72960(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_458,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
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
/* PVZ1ModeNetworkMgr::RequestEndPlayData(PVZ1ModeEndPlayParamData) */

void __thiscall PVZ1ModeNetworkMgr::RequestEndPlayData(PVZ1ModeNetworkMgr *this,byte *param_2)

{
  string *psVar1;
  char *pcVar2;
  undefined8 uVar3;
  DNetwork *this_00;
  undefined1 *__n;
  undefined1 *__n_00;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2200];
  string asStack_450 [1096];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_ce8,"tp");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_ce8);
  if (*param_2 == 0) {
    pcVar2 = "1";
  }
  else {
    pcVar2 = "2";
  }
  std::string::append(psVar1,pcVar2,0x5594000);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_ce8,"wi");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_ce8);
  if (param_2[1] == 0) {
    pcVar2 = "0";
  }
  else {
    pcVar2 = "1";
  }
  std::string::append(psVar1,pcVar2,0x5594000);
  __n_00 = auStack_d48;
  std::string::~string(asStack_ce8);
  nop();
  __n = __n_00;
  std::string::string(asStack_d40,"gl");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString((DString *)asStack_ce8,*(int *)(param_2 + 4));
  pcVar2 = (char *)DString::c_str((DString *)asStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n);
  DString::~DString((DString *)asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_ce8,"tgt");
  uVar3 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_ce8);
  thunk_FUN_05475e00(uVar3,param_2 + 8);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_d40,"r");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString((DString *)asStack_ce8,*(int *)(param_2 + 0x10));
  pcVar2 = (char *)DString::c_str((DString *)asStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n_00);
  DString::~DString((DString *)asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  uVar3 = FUN_0547429c(param_2 + 8);
  Sexy::OutputDebugStrF
            ((wchar_t *)
             "PVZ1ModeNetworkMgr::RequestEndPlayData tp = %d, wi = %d, gl = %d, tgt = %s, r = %d",
             (ulong)*param_2,(ulong)param_2[1],(ulong)*(uint *)(param_2 + 4),uVar3,
             (ulong)*(uint *)(param_2 + 0x10));
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_04c729bc(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_450,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,5);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
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

