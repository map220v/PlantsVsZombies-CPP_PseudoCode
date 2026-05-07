// Class: PlantWarsNetworkMgr


/* PlantWarsNetworkMgr::GetEndPlayData() */

PlantWarsNetworkMgr * __thiscall PlantWarsNetworkMgr::GetEndPlayData(PlantWarsNetworkMgr *this)

{
  return this + 0xa0;
}


/* PlantWarsNetworkMgr::GetPrefixWorld() */

PlantWarsNetworkMgr * __thiscall PlantWarsNetworkMgr::GetPrefixWorld(PlantWarsNetworkMgr *this)

{
  return this + 0x40;
}


/* PlantWarsNetworkMgr::GetCurrentLevel() const */

undefined8 PlantWarsNetworkMgr::GetCurrentLevel(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* PlantWarsNetworkMgr::SetCurrentLevel(std::string) */

void PlantWarsNetworkMgr::SetCurrentLevel(long param_1)

{
  thunk_FUN_05475e00(param_1 + 0xf0);
  return;
}


/* PlantWarsNetworkMgr::CalcNodeType(std::string) */

undefined4 __thiscall PlantWarsNetworkMgr::CalcNodeType(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_05474374(param_2,&DAT_055fcab0,0);
  if (lVar2 != -1) {
    return 0;
  }
  lVar2 = FUN_05474374(param_2,&DAT_055fca88,0);
  uVar1 = 1;
  if (lVar2 == -1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* PlantWarsNetworkMgr::ObtainLeaderBoardBonus(int, int) */

void __thiscall
PlantWarsNetworkMgr::ObtainLeaderBoardBonus(PlantWarsNetworkMgr *this,int param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(this + 0x50);
  lVar5 = 0;
  lVar1 = FUN_04d8c56c(uVar7,*(undefined8 *)(this + 0x58));
  if (lVar1 != 0) {
    do {
      lVar2 = FUN_04d8c59c(uVar7,lVar5);
      if (*(int *)(lVar2 + 8) == param_1) {
        uVar6 = *(undefined8 *)(lVar2 + 0x28);
        lVar3 = FUN_04d8c5f0(uVar6,*(undefined8 *)(lVar2 + 0x30));
        lVar2 = 0;
        while (lVar2 != lVar3) {
          piVar4 = (int *)FUN_04d8c620(uVar6,lVar2);
          lVar2 = lVar2 + 1;
          if (*piVar4 == param_2) {
            *(undefined1 *)(piVar4 + 8) = 1;
            return;
          }
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != lVar1);
  }
  return;
}


/* PlantWarsNetworkMgr::SetLevelTime(int, int, float) */

void __thiscall
PlantWarsNetworkMgr::SetLevelTime(PlantWarsNetworkMgr *this,int param_1,int param_2,float param_3)

{
  PlantWarsLevelTempData *this_00;
  
  this_00 = (PlantWarsLevelTempData *)FUN_04d8c62c(*(undefined8 *)(this + 0x100),(long)param_1);
  PlantWarsLevelTempData::SetLevelTime(this_00,param_2,param_3);
  return;
}


/* PlantWarsNetworkMgr::GetLevelTime(int, int) */

void __thiscall PlantWarsNetworkMgr::GetLevelTime(PlantWarsNetworkMgr *this,int param_1,int param_2)

{
  PlantWarsLevelTempData *this_00;
  
  this_00 = (PlantWarsLevelTempData *)FUN_04d8c62c(*(undefined8 *)(this + 0x100),(long)param_1);
  PlantWarsLevelTempData::GetLevelTime(this_00,param_2);
  return;
}


/* PlantWarsNetworkMgr::GetLevelTime(int) */

float __thiscall PlantWarsNetworkMgr::GetLevelTime(PlantWarsNetworkMgr *this,int param_1)

{
  PlantWarsLevelTempData *pPVar1;
  float fVar2;
  float fVar3;
  
  pPVar1 = (PlantWarsLevelTempData *)FUN_04d8c62c(*(undefined8 *)(this + 0x100),(long)param_1);
  fVar2 = (float)PlantWarsLevelTempData::GetLevelTime(pPVar1,0);
  pPVar1 = (PlantWarsLevelTempData *)FUN_04d8c62c(*(undefined8 *)(this + 0x100),(long)param_1);
  fVar3 = (float)PlantWarsLevelTempData::GetLevelTime(pPVar1,1);
  return fVar3 + fVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsNetworkMgr::SetCurrentLevelNodeScore(int) */

void __thiscall PlantWarsNetworkMgr::SetCurrentLevelNodeScore(PlantWarsNetworkMgr *this,int param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04d8c38c(*(undefined4 *)(this + 0xf8));
  uVar3 = FUN_04d8c674(*(undefined8 *)(this + 0x100),*(undefined8 *)(this + 0x108));
  if ((ulong)(long)iVar1 < uVar3) {
    uVar4 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    FUN_05475d88(asStack_18,uVar4);
    FUN_05475d88(asStack_10,asStack_18);
    iVar2 = PlantWarsUtils::CalcNodeType(asStack_10);
    std::string::~string(asStack_10);
    puVar5 = (undefined8 *)FUN_04d8c62c(*(undefined8 *)(this + 0x100),(long)iVar1);
    lVar6 = FUN_04d8c3b8(*puVar5,(long)iVar2);
    *(int *)(lVar6 + 0x1c) = param_1;
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsNetworkMgr::GetNodePlantPacket(int, int, int) */

void __thiscall
PlantWarsNetworkMgr::GetNodePlantPacket
          (PlantWarsNetworkMgr *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_04d8c62c(*(undefined8 *)(this + 0x100),(long)param_1);
  PlantWarsLevelTempData::GetNodePlantPacket(iVar1,param_2);
  return;
}


/* PlantWarsNetworkMgr::GetLeaderBoardBonusCurrentIndex(std::string) */

undefined4 __thiscall
PlantWarsNetworkMgr::GetLeaderBoardBonusCurrentIndex(PlantWarsNetworkMgr *this,string *param_2)

{
  char cVar1;
  long lVar2;
  string *psVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x50);
  lVar2 = FUN_04d8c56c(uVar5,*(undefined8 *)(this + 0x58));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return 0xffffffff;
    }
    psVar3 = (string *)FUN_04d8c59c(uVar5,lVar4);
    cVar1 = std::operator==(psVar3,param_2);
    lVar4 = lVar4 + 1;
  } while (cVar1 == '\0');
  return *(undefined4 *)(psVar3 + 0x40);
}


/* PlantWarsNetworkMgr::GetLevelStatus(std::string const&, int) */

undefined4 __thiscall
PlantWarsNetworkMgr::GetLevelStatus(PlantWarsNetworkMgr *this,string *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  string *psVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  
  uVar8 = *(undefined8 *)(this + 0x50);
  lVar7 = 0;
  lVar3 = FUN_04d8c56c(uVar8,*(undefined8 *)(this + 0x58));
  iVar10 = 0;
  if (lVar3 != 0) {
    do {
      psVar4 = (string *)FUN_04d8c59c(uVar8,lVar7);
      cVar1 = std::operator==(psVar4,param_1);
      if ((cVar1 != '\0') && (-1 < param_2)) {
        uVar9 = *(undefined8 *)(psVar4 + 0x10);
        uVar5 = FUN_04d8c5a8(uVar9,*(undefined8 *)(psVar4 + 0x18));
        if ((ulong)(long)param_2 < uVar5) {
          lVar6 = FUN_04d8c5d8(uVar9,(long)param_2);
          iVar10 = *(int *)(lVar6 + 0x68);
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != lVar3);
  }
  uVar2 = 2;
  if ((iVar10 != 1) && (uVar2 = 3, iVar10 != 2)) {
    uVar2 = 1;
  }
  return uVar2;
}


/* PlantWarsNetworkMgr::PlantWarsNetworkMgr() */

void __thiscall PlantWarsNetworkMgr::PlantWarsNetworkMgr(PlantWarsNetworkMgr *this)

{
  undefined *puVar1;
  size_t in_x2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<PlantWarsNetworkMgr>::LazySingleton
            ((LazySingleton<PlantWarsNetworkMgr> *)this);
  *(undefined ***)this = &PTR__PlantWarsNetworkMgr_069ba5c0;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x10));
  PlantWarsMainEntryData::PlantWarsMainEntryData((PlantWarsMainEntryData *)(this + 0x30));
  PlantWarsStartOfPlayData::PlantWarsStartOfPlayData((PlantWarsStartOfPlayData *)(this + 0x70));
  PlantWarsTransferOfPlayData::PlantWarsTransferOfPlayData
            ((PlantWarsTransferOfPlayData *)(this + 0x88));
  PlantWarsEndOfPlayData::PlantWarsEndOfPlayData((PlantWarsEndOfPlayData *)(this + 0xa0));
  Set8BytesTo0((string *)(this + 0xf0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x100));
  this[8] = (PlantWarsNetworkMgr)0x0;
  *(undefined4 *)(this + 0xf8) = 0;
  std::string::append((string *)(this + 0xf0),"",in_x2);
  this[0x118] = (PlantWarsNetworkMgr)0x0;
  *(undefined4 *)(this + 0x11c) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<PlantWarsNetworkMgr,void(PlantWarsNetworkMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsNetworkMgr::GetZombieTitleConfig(std::string const&) */

void PlantWarsNetworkMgr::GetZombieTitleConfig(string *param_1)

{
  undefined8 uVar1;
  string *in_x1;
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::ToWString(in_x1);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(uVar1,0xac,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsNetworkMgr::GetTitleIconImage(std::string const&) */

void __thiscall PlantWarsNetworkMgr::GetTitleIconImage(PlantWarsNetworkMgr *this,string *param_1)

{
  bool bVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetZombieTitleConfig((string *)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    ZombieTitleProperties::GetIconImage();
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8)
    ;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsNetworkMgr::GetTitleName(std::string const&) */

void __thiscall PlantWarsNetworkMgr::GetTitleName(PlantWarsNetworkMgr *this,string *param_1)

{
  bool bVar1;
  long *plVar2;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetZombieTitleConfig((string *)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    (**(code **)(*plVar2 + 0x88))();
  }
  else {
    FUN_05478178();
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsNetworkMgr::GetTitleDescription(std::string const&) */

void __thiscall PlantWarsNetworkMgr::GetTitleDescription(PlantWarsNetworkMgr *this,string *param_1)

{
  bool bVar1;
  long *plVar2;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetZombieTitleConfig((string *)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    (**(code **)(*plVar2 + 0x80))();
  }
  else {
    FUN_05478178();
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsNetworkMgr::GetLevelStarNumber(std::string const&, MapEventItem const*) */

void __thiscall
PlantWarsNetworkMgr::GetLevelStarNumber
          (PlantWarsNetworkMgr *this,string *param_1,MapEventItem *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  string *psVar7;
  ulong uVar8;
  char *pcVar9;
  MapEventItem *pMVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar12 = -1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  lVar4 = FUN_04d8c380(*(undefined8 *)(param_2 + 0xe8));
  WorldMapUtils::GetOrderedMainSpinePath((string *)(lVar4 + 0x38),(vector *)&local_20);
  lVar5 = FUN_04d8c638(local_20,local_18);
  lVar4 = 0;
  do {
    if (lVar4 == lVar5) break;
    puVar6 = (undefined8 *)FUN_04d8c644(local_20,lVar4);
    pMVar10 = (MapEventItem *)*puVar6;
    iVar3 = FUN_04d8c37c(*(undefined4 *)(pMVar10 + 0x14));
    if (iVar3 == 1) {
      iVar12 = iVar12 + 1;
    }
    lVar4 = lVar4 + 1;
  } while (param_2 != pMVar10);
  uVar11 = *(undefined8 *)(this + 0x50);
  lVar4 = 0;
  lVar5 = FUN_04d8c56c(uVar11,*(undefined8 *)(this + 0x58));
  do {
    if (lVar4 == lVar5) {
LAB_04d95158:
      iVar3 = 0;
LAB_04d9515c:
      std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
                ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)&local_20);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar3);
      }
      return;
    }
    psVar7 = (string *)FUN_04d8c59c(uVar11,lVar4);
    cVar2 = std::operator==(psVar7,param_1);
    if (cVar2 != '\0') {
      if (iVar12 != -1) {
        uVar11 = *(undefined8 *)(psVar7 + 0x10);
        iVar3 = 0;
        uVar8 = FUN_04d8c5a8(uVar11,*(undefined8 *)(psVar7 + 0x18));
        if ((ulong)(long)iVar12 < uVar8) {
          lVar4 = FUN_04d8c5d8(uVar11,(long)iVar12);
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
          iVar3 = 0;
          lVar5 = FUN_04d8c64c(uVar11,*(undefined8 *)(lVar4 + 0x38));
          lVar4 = 0;
          while (lVar4 != lVar5) {
            lVar1 = lVar4 + 1;
            pcVar9 = (char *)FUN_04d8c5e8(uVar11,lVar4);
            lVar4 = lVar1;
            if (*pcVar9 != '\0') {
              iVar3 = iVar3 + 1;
            }
          }
        }
        goto LAB_04d9515c;
      }
      goto LAB_04d95158;
    }
    lVar4 = lVar4 + 1;
  } while( true );
}


/* PlantWarsNetworkMgr::ClearNode(int, int) */

void __thiscall PlantWarsNetworkMgr::ClearNode(PlantWarsNetworkMgr *this,int param_1,int param_2)

{
  PlantWarsLevelTempData *this_00;
  
  this_00 = (PlantWarsLevelTempData *)FUN_04d8c62c(*(undefined8 *)(this + 0x100),(long)param_1);
  PlantWarsLevelTempData::ClearNode(this_00,param_2);
  return;
}


/* PlantWarsNetworkMgr::GetNodePlantPackets(int, int) */

void __thiscall
PlantWarsNetworkMgr::GetNodePlantPackets(PlantWarsNetworkMgr *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_04d8c62c(*(undefined8 *)(this + 0x100),(long)param_1);
  PlantWarsLevelTempData::GetNodePlantPackets(iVar1);
  return;
}


/* PlantWarsNetworkMgr::~PlantWarsNetworkMgr() */

void __thiscall PlantWarsNetworkMgr::~PlantWarsNetworkMgr(PlantWarsNetworkMgr *this)

{
  *(undefined ***)this = &PTR__PlantWarsNetworkMgr_069ba5c0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<PlantWarsLevelTempData,std::allocator<PlantWarsLevelTempData>>::~vector
            ((vector<PlantWarsLevelTempData,std::allocator<PlantWarsLevelTempData>> *)(this + 0x100)
            );
  std::string::~string((string *)(this + 0xf0));
  PlantWarsEndOfPlayData::~PlantWarsEndOfPlayData((PlantWarsEndOfPlayData *)(this + 0xa0));
  PlantWarsTransferOfPlayData::~PlantWarsTransferOfPlayData
            ((PlantWarsTransferOfPlayData *)(this + 0x88));
  PlantWarsStartOfPlayData::~PlantWarsStartOfPlayData((PlantWarsStartOfPlayData *)(this + 0x70));
  PlantWarsMainEntryData::~PlantWarsMainEntryData((PlantWarsMainEntryData *)(this + 0x30));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x10));
  Sexy::LazySingleton<PlantWarsNetworkMgr>::~LazySingleton
            ((LazySingleton<PlantWarsNetworkMgr> *)this);
  return;
}


/* PlantWarsNetworkMgr::~PlantWarsNetworkMgr() */

void __thiscall PlantWarsNetworkMgr::~PlantWarsNetworkMgr(PlantWarsNetworkMgr *this)

{
  ~PlantWarsNetworkMgr(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsNetworkMgr::GetCurrentWorldData() */

void __thiscall PlantWarsNetworkMgr::GetCurrentWorldData(PlantWarsNetworkMgr *this)

{
  char cVar1;
  string *psVar2;
  string *psVar3;
  ulong uVar4;
  PlantWarsWorldData *pPVar5;
  ulong uVar6;
  undefined8 uVar7;
  PlantWarsWorldData aPStack_a8 [160];
  long local_8;
  
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  PlantWarsWorldData::PlantWarsWorldData(aPStack_a8);
  do {
    uVar7 = *(undefined8 *)(this + 0x50);
    uVar4 = FUN_04d8c56c(uVar7,*(undefined8 *)(this + 0x58));
    pPVar5 = aPStack_a8;
    if (uVar4 <= uVar6) {
LAB_04d95b9c:
      PlantWarsWorldData::~PlantWarsWorldData(aPStack_a8);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(pPVar5);
      }
      return;
    }
    psVar2 = (string *)FUN_04d8c59c(uVar7,uVar6);
    psVar3 = (string *)GetPrefixWorld(this);
    cVar1 = std::operator==(psVar2,psVar3);
    if (cVar1 != '\0') {
      pPVar5 = (PlantWarsWorldData *)FUN_04d8c59c(*(undefined8 *)(this + 0x50),uVar6);
      goto LAB_04d95b9c;
    }
    uVar6 = uVar6 + 1;
  } while( true );
}


/* PlantWarsNetworkMgr::GetCurrentWorldId() */

undefined4 __thiscall PlantWarsNetworkMgr::GetCurrentWorldId(PlantWarsNetworkMgr *this)

{
  long lVar1;
  
  lVar1 = GetCurrentWorldData(this);
  return *(undefined4 *)(lVar1 + 8);
}


/* PlantWarsNetworkMgr::GetCurrentLevelInfo() */

long __thiscall PlantWarsNetworkMgr::GetCurrentLevelInfo(PlantWarsNetworkMgr *this)

{
  long lVar1;
  
  lVar1 = GetCurrentWorldData(this);
  return lVar1 + 0x10;
}


/* PlantWarsNetworkMgr::GetLevelScore(int, int) */

undefined4 __thiscall
PlantWarsNetworkMgr::GetLevelScore(PlantWarsNetworkMgr *this,int param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)GetCurrentLevelInfo(this);
  lVar2 = FUN_04d8c5d8(*puVar1,(long)param_1);
  lVar2 = FUN_04d8c3b8(*(undefined8 *)(lVar2 + 0x48),(long)param_2);
  return *(undefined4 *)(lVar2 + 0x1c);
}


/* PlantWarsNetworkMgr::GetLevelTotalScore(int) */

int __thiscall PlantWarsNetworkMgr::GetLevelTotalScore(PlantWarsNetworkMgr *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = GetLevelScore(this,param_1,0);
  iVar2 = GetLevelScore(this,param_1,1);
  return iVar1 + iVar2;
}


/* PlantWarsNetworkMgr::GetLevelTargetScore(int, int) */

undefined4 __thiscall
PlantWarsNetworkMgr::GetLevelTargetScore(PlantWarsNetworkMgr *this,int param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)GetCurrentLevelInfo(this);
  lVar2 = FUN_04d8c5d8(*puVar1,(long)param_1);
  lVar2 = FUN_04d8c3b8(*(undefined8 *)(lVar2 + 0x48),(long)param_2);
  return *(undefined4 *)(lVar2 + 0x18);
}


/* PlantWarsNetworkMgr::GetLevelTargetTotalScore(int) */

undefined4 __thiscall
PlantWarsNetworkMgr::GetLevelTargetTotalScore(PlantWarsNetworkMgr *this,int param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)GetCurrentLevelInfo(this);
  lVar2 = FUN_04d8c5d8(*puVar1,(long)param_1);
  return *(undefined4 *)(lVar2 + 0x70);
}


/* PlantWarsNetworkMgr::GetLevelTargetStatus(int) */

undefined1 __thiscall
PlantWarsNetworkMgr::GetLevelTargetStatus(PlantWarsNetworkMgr *this,int param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)GetCurrentLevelInfo(this);
  lVar2 = FUN_04d8c5d8(*puVar1,(long)param_1);
  return *(undefined1 *)(lVar2 + 0x6c);
}


/* PlantWarsNetworkMgr::GetLevelTargetStarInfoScore(int, int) */

undefined4 __thiscall
PlantWarsNetworkMgr::GetLevelTargetStarInfoScore(PlantWarsNetworkMgr *this,int param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)GetCurrentLevelInfo(this);
  lVar2 = FUN_04d8c5d8(*puVar1,(long)param_1);
  lVar2 = FUN_04d8c5e8(*(undefined8 *)(lVar2 + 0x30),(long)param_2);
  return *(undefined4 *)(lVar2 + 4);
}


/* PlantWarsNetworkMgr::GetLevelTargetStarInfoStatus(int, int) */

undefined1 __thiscall
PlantWarsNetworkMgr::GetLevelTargetStarInfoStatus(PlantWarsNetworkMgr *this,int param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  
  puVar1 = (undefined8 *)GetCurrentLevelInfo(this);
  lVar2 = FUN_04d8c5d8(*puVar1,(long)param_1);
  puVar3 = (undefined1 *)FUN_04d8c5e8(*(undefined8 *)(lVar2 + 0x30),(long)param_2);
  return *puVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsNetworkMgr::DeleteNodePlant(int, int, std::string) */

void __thiscall
PlantWarsNetworkMgr::DeleteNodePlant
          (PlantWarsNetworkMgr *this,int param_1,undefined4 param_2,undefined8 param_4)

{
  PlantWarsLevelTempData *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PlantWarsLevelTempData *)FUN_04d8c62c(*(undefined8 *)(this + 0x100),(long)param_1);
  FUN_05475d88(asStack_10,param_4);
  PlantWarsLevelTempData::DeleteNode(pPVar1,param_2,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsNetworkMgr::RequestMainEntryData(std::function<void ()>) */

void __thiscall
PlantWarsNetworkMgr::RequestMainEntryData(PlantWarsNetworkMgr *this,function *param_2)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  undefined1 auStack_28 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[8] == (PlantWarsNetworkMgr)0x0) {
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
              (avStack_20,&DAT_05755a90,1,auStack_28);
    INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_20,0,true);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_20);
    this[8] = (PlantWarsNetworkMgr)0x1;
    std::function<void()>::operator=((function<void()> *)(this + 0x10),param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsNetworkMgr::RequestNetwork() */

void PlantWarsNetworkMgr::RequestNetwork(void)

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
            (avStack_20,&DAT_05755aa0,1,auStack_28);
  INetworkMsgProcess::RequestActivityList(this_00,(vector *)avStack_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsNetworkMgr::AddNodePlant(int, int, std::string) */

void __thiscall
PlantWarsNetworkMgr::AddNodePlant
          (PlantWarsNetworkMgr *this,int param_1,undefined4 param_2,undefined8 param_4)

{
  PlantWarsLevelTempData *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PlantWarsLevelTempData *)FUN_04d8c62c(*(undefined8 *)(this + 0x100),(long)param_1);
  FUN_05475d88(asStack_10,param_4);
  PlantWarsLevelTempData::AddNode(pPVar1,param_2,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsNetworkMgr::GetCurrentLevelScoreList(std::vector<int, std::allocator<int> >&) */

void __thiscall
PlantWarsNetworkMgr::GetCurrentLevelScoreList(PlantWarsNetworkMgr *this,vector *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_04d8c38c(*(undefined4 *)(this + 0xf8));
  uVar6 = *(undefined8 *)(this + 0x100);
  uVar5 = (ulong)iVar1;
  uVar2 = FUN_04d8c674(uVar6,*(undefined8 *)(this + 0x108));
  if (uVar2 <= uVar5) {
    return;
  }
  puVar3 = (undefined8 *)FUN_04d8c62c(uVar6,uVar5);
  lVar4 = FUN_04d8c3b8(*puVar3,0);
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)param_1,(int *)(lVar4 + 0x1c));
  puVar3 = (undefined8 *)FUN_04d8c62c(*(undefined8 *)(this + 0x100),uVar5);
  lVar4 = FUN_04d8c3b8(*puVar3,1);
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)param_1,(int *)(lVar4 + 0x1c));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsNetworkMgr::syncWorldMapInfo(PlantWarsMainEntryData const&) */

void PlantWarsNetworkMgr::syncWorldMapInfo(PlantWarsMainEntryData *param_1)

{
  char cVar1;
  long lVar2;
  string *psVar3;
  string *psVar4;
  ulong uVar5;
  vector *pvVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  PlantWarsLevelTempData aPStack_38 [24];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar8 = 0;
  std::vector<PlantWarsLevelTempData,std::allocator<PlantWarsLevelTempData>>::clear
            ((vector<PlantWarsLevelTempData,std::allocator<PlantWarsLevelTempData>> *)
             (param_1 + 0x100));
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  lVar2 = FUN_04d8c56c(uVar9,*(undefined8 *)(param_1 + 0x58));
  if (lVar2 != 0) {
    do {
      psVar3 = (string *)FUN_04d8c59c(uVar9,uVar8);
      psVar4 = (string *)GetPrefixWorld((PlantWarsNetworkMgr *)param_1);
      cVar1 = std::operator==(psVar3,psVar4);
      if (cVar1 == '\0') {
        uVar9 = *(undefined8 *)(param_1 + 0x50);
      }
      else {
        uVar5 = 0;
        while( true ) {
          uVar9 = *(undefined8 *)(param_1 + 0x50);
          lVar2 = FUN_04d8c59c(uVar9,uVar8);
          uVar7 = FUN_04d8c5a8(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
          if (uVar7 <= uVar5) break;
          PlantWarsLevelTempData::PlantWarsLevelTempData(aPStack_38);
          lVar2 = FUN_04d8c59c(*(undefined8 *)(param_1 + 0x50),uVar8);
          lVar2 = FUN_04d8c5d8(*(undefined8 *)(lVar2 + 0x10),uVar5);
          pvVar6 = (vector *)FUN_04d8c3b8(*(undefined8 *)(lVar2 + 0x48),0);
          std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,pvVar6);
          PlantWarsLevelTempData::Assign(aPStack_38,0,avStack_20);
          std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
          lVar2 = FUN_04d8c59c(*(undefined8 *)(param_1 + 0x50),uVar8);
          lVar2 = FUN_04d8c5d8(*(undefined8 *)(lVar2 + 0x10),uVar5);
          pvVar6 = (vector *)FUN_04d8c3b8(*(undefined8 *)(lVar2 + 0x48),1);
          std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,pvVar6);
          PlantWarsLevelTempData::Assign(aPStack_38,1,avStack_20);
          std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
          std::vector<PlantWarsLevelTempData,std::allocator<PlantWarsLevelTempData>>::push_back
                    ((vector<PlantWarsLevelTempData,std::allocator<PlantWarsLevelTempData>> *)
                     (param_1 + 0x100),aPStack_38);
          PlantWarsLevelTempData::~PlantWarsLevelTempData(aPStack_38);
          uVar5 = uVar5 + 1;
        }
      }
      uVar8 = uVar8 + 1;
      uVar5 = FUN_04d8c56c(uVar9,*(undefined8 *)(param_1 + 0x58));
    } while (uVar8 < uVar5);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsNetworkMgr::GetCurrentLevelData() */

void PlantWarsNetworkMgr::GetCurrentLevelData(void)

{
  char cVar1;
  int iVar2;
  PlantWarsNetworkMgr *in_x0;
  long lVar3;
  string *psVar4;
  string *psVar5;
  ulong uVar6;
  PlantWarsLevelData *pPVar7;
  PlantWarsLevelData *in_x8;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  PlantWarsLevelData aPStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar9 = 0;
  PlantWarsLevelData::PlantWarsLevelData(aPStack_80);
  uVar8 = *(undefined8 *)(in_x0 + 0x50);
  lVar3 = FUN_04d8c56c(uVar8,*(undefined8 *)(in_x0 + 0x58));
  if (lVar3 != 0) {
    do {
      psVar4 = (string *)FUN_04d8c59c(uVar8,uVar9);
      psVar5 = (string *)GetPrefixWorld(in_x0);
      cVar1 = std::operator==(psVar4,psVar5);
      if (cVar1 == '\0') {
        uVar8 = *(undefined8 *)(in_x0 + 0x50);
      }
      else {
        iVar2 = FUN_04d8c38c(*(undefined4 *)(in_x0 + 0xf8));
        uVar8 = *(undefined8 *)(in_x0 + 0x50);
        lVar3 = FUN_04d8c59c(uVar8,uVar9);
        uVar10 = *(undefined8 *)(lVar3 + 0x10);
        uVar6 = FUN_04d8c5a8(uVar10,*(undefined8 *)(lVar3 + 0x18));
        if ((ulong)(long)iVar2 < uVar6) {
          pPVar7 = (PlantWarsLevelData *)FUN_04d8c5d8(uVar10,(long)iVar2);
          PlantWarsLevelData::PlantWarsLevelData(in_x8,pPVar7);
          goto LAB_04d97e98;
        }
      }
      uVar9 = uVar9 + 1;
      uVar6 = FUN_04d8c56c(uVar8,*(undefined8 *)(in_x0 + 0x58));
    } while (uVar9 < uVar6);
  }
  PlantWarsLevelData::PlantWarsLevelData(in_x8,aPStack_80);
LAB_04d97e98:
  PlantWarsLevelData::~PlantWarsLevelData(aPStack_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsNetworkMgr::syncMainEntryInfo() */

void __thiscall PlantWarsNetworkMgr::syncMainEntryInfo(PlantWarsNetworkMgr *this)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  PVZ2UIDialog *pPVar3;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  wstring awStack_118 [8];
  wstring awStack_110 [24];
  Delegate0 aDStack_f8 [48];
  PlantWarsMainEntryData aPStack_c8 [64];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_70 != '\0') {
    PlantWarsMainEntryData::PlantWarsMainEntryData(aPStack_c8);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aPStack_c8);
    this_00 = gLawnApp;
    if (cVar1 == '\0') {
      FUN_05478178(awStack_118,&DAT_056f11a8,auStack_128);
      FUN_05478178(awStack_110,L"[WECHAT_ACTIVITY_DATA_ERROR]",auStack_120);
      pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_118,awStack_110);
      FUN_05476c50(awStack_110);
      nop();
      FUN_05476c50(awStack_118);
      nop();
      FUN_05478178(awStack_118,L"[BUTTON_OK]",auStack_120);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_f8,awStack_110);
      PVZ2UIDialog::AddButton(pPVar3,awStack_118,aDStack_f8,1);
      FUN_05476c50(awStack_118);
      nop();
    }
    else {
      iVar2 = Sexy::LazySingleton<RiftThemeMgr>::GetInstance();
      RiftThemeMgr::SyncTheme(iVar2);
      PlantWarsMainEntryData::operator=((PlantWarsMainEntryData *)(this + 0x30),aPStack_c8);
      syncWorldMapInfo((PlantWarsMainEntryData *)this);
    }
    PlantWarsMainEntryData::~PlantWarsMainEntryData(aPStack_c8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsNetworkMgr::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
PlantWarsNetworkMgr::onNotifyRefreshActivityList
          (PlantWarsNetworkMgr *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (this[8] != (PlantWarsNetworkMgr)0x0)) {
    local_1c = 0x2a88;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      syncMainEntryInfo(this);
      this[8] = (PlantWarsNetworkMgr)0x0;
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
/* PlantWarsNetworkMgr::RequestEndPlayData(PlantWarsEndPlayParamData) */

void __thiscall
PlantWarsNetworkMgr::RequestEndPlayData
          (PlantWarsNetworkMgr *this,PlantWarsEndPlayParamData *param_2)

{
  undefined4 uVar1;
  string *psVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  DNetwork *this_00;
  string asStack_f18 [8];
  PlantPacketJsonConverter aPStack_f10 [32];
  function<bool(Sexy::Touch_const&)> afStack_ef0 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_ed0 [48];
  PlantWarsNetworkMgr *pPStack_ea0;
  PlantWarsEndPlayParamData aPStack_e98 [64];
  undefined1 auStack_e58 [16];
  undefined1 auStack_e48 [352];
  DString aDStack_ce8 [3216];
  string asStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_ed0);
  std::string::string((string *)&pPStack_ea0,"wi");
  psVar2 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_ed0,(string *)&pPStack_ea0);
  DString::DString(aDStack_ce8,*(int *)param_2);
  pcVar3 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar2,pcVar3,(size_t)psVar2);
  DString::~DString(aDStack_ce8);
  std::string::~string((string *)&pPStack_ea0);
  nop();
  std::string::string((string *)&pPStack_ea0,"li");
  psVar2 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_ed0,(string *)&pPStack_ea0);
  DString::DString(aDStack_ce8,*(int *)(param_2 + 4));
  pcVar3 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar2,pcVar3,(size_t)psVar2);
  DString::~DString(aDStack_ce8);
  std::string::~string((string *)&pPStack_ea0);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_e58,uVar1);
  std::string::string((string *)aDStack_ce8,"");
  FUN_05462980(auStack_e58,aDStack_ce8);
  std::string::~string((string *)aDStack_ce8);
  nop();
  puVar4 = (undefined4 *)FUN_04d8c544(*(undefined8 *)(param_2 + 8),0);
  uVar5 = FUN_0546065c(auStack_e48,*puVar4);
  uVar5 = FUN_054603b8(uVar5,&DAT_05593348);
  puVar4 = (undefined4 *)FUN_04d8c544(*(undefined8 *)(param_2 + 8),1);
  FUN_0546065c(uVar5,*puVar4);
  std::string::string((string *)&pPStack_ea0,"ss");
  uVar5 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_ed0,(string *)&pPStack_ea0);
  FUN_05462824(aDStack_ce8,auStack_e58);
  FUN_05474278(uVar5,aDStack_ce8);
  std::string::~string((string *)aDStack_ce8);
  std::string::~string((string *)&pPStack_ea0);
  nop();
  std::string::string((string *)&pPStack_ea0,"rt");
  psVar2 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_ed0,(string *)&pPStack_ea0);
  DString::DString(aDStack_ce8,*(int *)(this + 0x11c));
  pcVar3 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar2,pcVar3,(size_t)psVar2);
  DString::~DString(aDStack_ce8);
  std::string::~string((string *)&pPStack_ea0);
  nop();
  std::string::string((string *)&pPStack_ea0,"lct");
  psVar2 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_ed0,(string *)&pPStack_ea0);
  DString::DString(aDStack_ce8,*(int *)(param_2 + 0x38));
  pcVar3 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar2,pcVar3,(size_t)psVar2);
  DString::~DString(aDStack_ce8);
  std::string::~string((string *)&pPStack_ea0);
  nop();
  PlantPacketJsonConverter::PlantPacketJsonConverter(aPStack_f10);
  std::
  vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
  ::vector((vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
            *)aDStack_ce8,(vector *)(param_2 + 0x20));
  PlantPacketJsonConverter::FillData(aPStack_f10,aDStack_ce8);
  std::
  vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
  ::~vector((vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
             *)aDStack_ce8);
  std::string::string((string *)&pPStack_ea0,"ba");
  uVar5 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_ed0,(string *)&pPStack_ea0);
  PlantPacketJsonConverter::SerializeObj();
  FUN_05474278(uVar5,aDStack_ce8);
  std::string::~string((string *)aDStack_ce8);
  std::string::~string((string *)&pPStack_ea0);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  pPStack_ea0 = this;
  PlantWarsEndPlayParamData::PlantWarsEndPlayParamData(aPStack_e98,param_2);
  FUN_04d95004(afStack_ef0,(string *)&pPStack_ea0);
  std::string::string(asStack_f18,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_58,(map *)amStack_ed0,30.0,(function *)afStack_ef0,true,true,
             asStack_f18,0);
  std::string::~string(asStack_f18);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_ef0);
  FUN_04d955cc((string *)&pPStack_ea0);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  PlantPacketJsonConverter::~PlantPacketJsonConverter(aPStack_f10);
  FUN_054617bc(auStack_e58);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_ed0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsNetworkMgr::RequestStarReward(int, int, int) */

void __thiscall
PlantWarsNetworkMgr::RequestStarReward
          (PlantWarsNetworkMgr *this,int param_1,int param_2,int param_3)

{
  string *psVar1;
  char *pcVar2;
  DNetwork *this_00;
  undefined1 *__n;
  undefined1 *__n_00;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [3224];
  string asStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  __n_00 = auStack_d48;
  __n = __n_00;
  std::string::string(asStack_d40,"wi");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,param_1);
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"id");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,param_2);
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n_00);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_04d8da14(afStack_d38,this,param_3);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_50,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsNetworkMgr::RequestLeaderBoardBonus(int, int) */

void __thiscall
PlantWarsNetworkMgr::RequestLeaderBoardBonus(PlantWarsNetworkMgr *this,int param_1,int param_2)

{
  string *psVar1;
  char *pcVar2;
  DNetwork *this_00;
  undefined1 *__n;
  undefined1 *__n_00;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [3224];
  string asStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  __n_00 = auStack_d48;
  __n = __n_00;
  std::string::string(asStack_d40,"wi");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,param_1);
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"id");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,param_2);
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n_00);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_04d8da70(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_50,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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

