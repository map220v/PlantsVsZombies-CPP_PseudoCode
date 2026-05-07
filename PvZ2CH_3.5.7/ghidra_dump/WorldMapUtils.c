// Class: WorldMapUtils


/* WorldMapUtils::GetWorldDataForEdit() */

undefined8 WorldMapUtils::GetWorldDataForEdit(void)

{
  return DAT_06b0f4e0;
}


/* WorldMapUtils::DestroyWorldData() */

void WorldMapUtils::DestroyWorldData(void)

{
  if (DAT_06b0f4e0 != (long *)0x0) {
    (**(code **)(*DAT_06b0f4e0 + 8))();
    DAT_06b0f4e0 = (long *)0x0;
  }
  DAT_06b0f538 = 0;
  return;
}


/* WorldMapUtils::LevelIsOnSpine(std::string const&) */

undefined8 WorldMapUtils::LevelIsOnSpine(string *param_1)

{
  int iVar1;
  WorldDataManager *this;
  long lVar2;
  
  this = (WorldDataManager *)GetWorldDataForEdit();
  lVar2 = WorldDataManager::FindEventByLevelName(this,param_1);
  while( true ) {
    if (lVar2 == 0) {
      return 1;
    }
    iVar1 = FUN_0450ead8(*(undefined4 *)(lVar2 + 0x14));
    if (iVar1 == 8) break;
    lVar2 = FUN_0450eae4(*(undefined8 *)(lVar2 + 0xb0));
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapUtils::TranslateWorldKeyToName(std::string const&) */

void __thiscall WorldMapUtils::TranslateWorldKeyToName(WorldMapUtils *this,string *param_1)

{
  undefined8 uVar1;
  string *extraout_x1;
  Sexy aSStack_20 [8];
  undefined1 auStack_18 [8];
  wstring awStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StringToUpper((Sexy *)this,___stack_chk_guard);
  Sexy::UTF8StringToWString(aSStack_20,extraout_x1);
  uVar1 = FUN_054766ec(auStack_18);
  Sexy::StrFormat(L"[%ls]",awStack_10,uVar1);
  TodStringTranslate(awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(auStack_18);
  std::string::~string((string *)aSStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapUtils::GetWorldDataById(unsigned char) */

long WorldMapUtils::GetWorldDataById(uchar param_1)

{
  int iVar1;
  int iVar2;
  WorldDataManager *this;
  int iVar3;
  long lVar4;
  
  lVar4 = 0;
  this = (WorldDataManager *)GetWorldDataForEdit();
  iVar3 = 0;
  do {
    iVar2 = WorldDataManager::GetWorldDataCount(this);
    iVar1 = iVar3 + 1;
    if (iVar2 <= iVar3) {
      return lVar4;
    }
    lVar4 = WorldDataManager::GetWorldDataByIdx(this,iVar3);
    iVar3 = iVar1;
  } while ((lVar4 == 0) || (*(uchar *)(lVar4 + 0x5c) != param_1));
  return lVar4;
}


/* WorldMapUtils::GetWorldMapEventByIds(unsigned char, unsigned short) */

MapEventItem * WorldMapUtils::GetWorldMapEventByIds(uchar param_1,ushort param_2)

{
  ushort uVar1;
  long lVar2;
  MapEventItem *this;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar2 = GetWorldDataById(param_1);
  uVar4 = 0;
  if (lVar2 != 0) {
    while( true ) {
      uVar5 = *(undefined8 *)(lVar2 + 0x20);
      uVar3 = FUN_0450eb0c(uVar5,*(undefined8 *)(lVar2 + 0x28));
      if (uVar3 <= uVar4) break;
      this = (MapEventItem *)FUN_0450eb2c(uVar5,uVar4);
      uVar1 = MapEventItem::GetEventId(this);
      uVar4 = uVar4 + 1;
      if (param_2 == uVar1) {
        return this;
      }
    }
  }
  return (MapEventItem *)0x0;
}


/* WorldMapUtils::GetIndexOfEventOnPath(MapEventItem const*, std::vector<MapEventItem const*,
   std::allocator<MapEventItem const*> > const&) */

ulong WorldMapUtils::GetIndexOfEventOnPath(MapEventItem *param_1,vector *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)param_2;
  uVar1 = FUN_0450eb38(uVar5,*(undefined8 *)(param_2 + 8));
  uVar3 = 0;
  do {
    uVar4 = uVar3 & 0xffffffff;
    if (uVar3 == uVar1) {
      return 0xffffffff;
    }
    puVar2 = (undefined8 *)FUN_0450eb44(uVar5,uVar3);
    uVar3 = uVar3 + 1;
  } while ((MapEventItem *)*puVar2 != param_1);
  return uVar4;
}


/* WorldMapUtils::IsMapEventToggledOff(MapEventItem const*) */

undefined8 WorldMapUtils::IsMapEventToggledOff(MapEventItem *param_1)

{
  char cVar1;
  long lVar2;
  Toggles *this;
  string *psVar3;
  
  Reflection::CRefSymbolDb::GetClasses((CRefSymbolDb *)param_1);
  lVar2 = FUN_05474184();
  if (lVar2 != 0) {
    this = (Toggles *)Toggles::GetInstance();
    psVar3 = (string *)Reflection::CRefSymbolDb::GetClasses((CRefSymbolDb *)param_1);
    cVar1 = Toggles::IsEnabled(this,psVar3);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}


/* WorldMapUtils::CalculateBossNodeCompletionIndex(MapEventItem const*, int) */

int WorldMapUtils::CalculateBossNodeCompletionIndex(MapEventItem *param_1,int param_2)

{
  MapEventItem *pMVar1;
  uint uVar2;
  int iVar3;
  
  while ((param_1 != (MapEventItem *)0x0 &&
         (iVar3 = FUN_0450eadc(*(undefined4 *)(param_1 + 0x78)), iVar3 - 3U < 2))) {
    pMVar1 = param_1 + 0xf2;
    param_1 = *(MapEventItem **)(param_1 + 0xd8);
    uVar2 = FUN_0450eaec(*pMVar1);
    param_2 = param_2 + (uVar2 & 0xff);
  }
  return param_2;
}


/* WorldMapUtils::CalculateBossNodeUnlockIndex(MapEventItem const*, int) */

int WorldMapUtils::CalculateBossNodeUnlockIndex(MapEventItem *param_1,int param_2)

{
  MapEventItem *pMVar1;
  uint uVar2;
  int iVar3;
  
  while ((param_1 != (MapEventItem *)0x0 &&
         (iVar3 = FUN_0450eadc(*(undefined4 *)(param_1 + 0x78)), iVar3 - 3U < 2))) {
    pMVar1 = param_1 + 0xf1;
    param_1 = *(MapEventItem **)(param_1 + 0xd8);
    uVar2 = FUN_0450eae8(*pMVar1);
    param_2 = param_2 + (uVar2 & 0xff);
  }
  return param_2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapUtils::GetLocalizedWorldName(std::string const&) */

void __thiscall WorldMapUtils::GetLocalizedWorldName(WorldMapUtils *this,string *param_1)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StringToUpper((Sexy *)this,___stack_chk_guard);
  uVar1 = FUN_0547429c(asStack_10);
  Sexy::StrFormat("[WORLD_NAME_%s]",asStack_18,uVar1);
  std::string::~string(asStack_10);
  Sexy::ToWString(asStack_18);
  pwVar2 = (wchar_t *)FUN_054766ec(asStack_10);
  TodStringTranslate(pwVar2);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapUtils::WorldHasHardModule(unsigned char) */

bool WorldMapUtils::WorldHasHardModule(uchar param_1)

{
  return 1 < param_1;
}


/* WorldMapUtils::WorldHasHardModule(std::string const&) */

void WorldMapUtils::WorldHasHardModule(string *param_1)

{
  WorldDataManager *this;
  long lVar1;
  
  this = (WorldDataManager *)GetWorldDataForEdit();
  lVar1 = WorldDataManager::GetWorldDataByWorldName(this,param_1);
  WorldHasHardModule(*(uchar *)(lVar1 + 0x5c));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapUtils::FindGateMagentoInformation(MapEventItem const*) */

void __thiscall WorldMapUtils::FindGateMagentoInformation(WorldMapUtils *this,MapEventItem *param_1)

{
  string *psVar1;
  string *in_x4;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  if (this != (WorldMapUtils *)0x0) {
    std::string::string(asStack_28,"iOS PvZ2 Map Store");
    std::string::string(asStack_20,"Gates");
    std::string::string(asStack_18,"stargate");
    psVar1 = (string *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_rightmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
    Magento::FindStoreProduct((Magento *)asStack_28,asStack_20,asStack_18,psVar1,in_x4);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)in_x8,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    std::string::~string(asStack_28);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapUtils::GetNextWorldId() */

void WorldMapUtils::GetNextWorldId(void)

{
  int iVar1;
  WorldDataManager *this;
  long lVar2;
  byte *pbVar3;
  int iVar4;
  byte local_9;
  long local_8;
  
  local_9 = 0;
  local_8 = ___stack_chk_guard;
  this = (WorldDataManager *)GetWorldDataForEdit();
  for (iVar4 = 0; iVar1 = WorldDataManager::GetWorldDataCount(this), iVar4 < iVar1;
      iVar4 = iVar4 + 1) {
    lVar2 = WorldDataManager::GetWorldDataByIdx(this,iVar4);
    pbVar3 = std::max<unsigned_char>(&local_9,(uchar *)(lVar2 + 0x5c));
    local_9 = *pbVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_9 + 1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapUtils::GachaIsOpen() */

void WorldMapUtils::GachaIsOpen(void)

{
  bool bVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 == (PlayerInfo *)0x0) {
    bVar1 = false;
  }
  else {
    std::string::string(asStack_10,"egypt4");
    iVar2 = PlayerInfo::GetWorldMapEventStatus(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    bVar1 = 2 < iVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapUtils::UniverseIsOpen() */

void WorldMapUtils::UniverseIsOpen(void)

{
  bool bVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 == (PlayerInfo *)0x0) {
    bVar1 = false;
  }
  else {
    std::string::string(asStack_10,"egypt15");
    iVar2 = PlayerInfo::GetWorldMapEventStatus(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    bVar1 = 2 < iVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WorldMapUtils::UnlockStargate(MapEventItem const*, bool) */

void WorldMapUtils::UnlockStargate(MapEventItem *param_1,bool param_2)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  undefined8 uVar2;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  uVar2 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_rightmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  PlayerInfo::SetWorldMapEventStatus(pPVar1,uVar2,uVar2,3,1);
  MessageRouter::Broadcast<MapEventItem_const*,MapEventItem_const*>
            ((MessageRouter *)gMessageRouter,Message::PurchaseWorld,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapUtils::GetDangerRoomUnlockedFromLevelOrEventName(std::string const&) */

void WorldMapUtils::GetDangerRoomUnlockedFromLevelOrEventName(string *param_1)

{
  char cVar1;
  int iVar2;
  WorldDataManager *pWVar3;
  MapEventItem *pMVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  FilesystemSaveGameContext *this;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c();
  if (cVar1 == '\0') {
    pWVar3 = (WorldDataManager *)GetWorldDataForEdit();
    pMVar4 = (MapEventItem *)WorldDataManager::FindEventByLevelName(pWVar3,param_1);
    if (pMVar4 == (MapEventItem *)0x0) {
      pWVar3 = (WorldDataManager *)GetWorldDataForEdit();
      pMVar4 = (MapEventItem *)WorldDataManager::FindEventByName(pWVar3,param_1);
    }
    uVar8 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    pWVar3 = (WorldDataManager *)GetWorldDataForEdit();
    WorldDataManager::FindEventsUnlockedByEvent(pWVar3,pMVar4,(vector *)&local_20);
    uVar9 = local_20;
    uVar5 = FUN_0450eaf8(local_20,local_18);
    if (uVar5 != 0) {
      do {
        puVar6 = (undefined8 *)FUN_0450eb04(uVar9,uVar8);
        this = (FilesystemSaveGameContext *)*puVar6;
        iVar2 = FUN_0450ead8(*(undefined4 *)(this + 0x14));
        if (iVar2 == 1) {
          uVar9 = Sexy::FilesystemSaveGameContext::GetBuffer(this);
          lVar7 = FUN_05474374(uVar9,"dangerroom",0);
          uVar9 = local_20;
          if (lVar7 != -1) {
            puVar6 = (undefined8 *)FUN_0450eb04(local_20,uVar8);
            uVar9 = *puVar6;
            goto LAB_0451099c;
          }
          uVar5 = FUN_0450eaf8(local_20,local_18);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar5);
    }
    uVar9 = 0;
LAB_0451099c:
    std::vector<MapEventItem*,std::allocator<MapEventItem*>>::~vector
              ((vector<MapEventItem*,std::allocator<MapEventItem*>> *)&local_20);
  }
  else {
    uVar9 = 0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapUtils::GetLastCompletedLevelNodeOnPath(std::vector<MapEventItem const*,
   std::allocator<MapEventItem const*> > const&, PlayerInfo*) */

void WorldMapUtils::GetLastCompletedLevelNodeOnPath(vector *param_1,PlayerInfo *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  reverse_iterator<__gnu_cxx::__normal_iterator<DTransformNode*const*,std::vector<DTransformNode*,std::allocator<DTransformNode*>>>>
  arStack_20 [8];
  undefined1 auStack_18 [8];
  move_iterator amStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::rbegin();
  std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::rend();
  FUN_04510df8(arStack_20,auStack_18,amStack_10,param_2);
  std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::rend();
  bVar1 = std::operator==(arStack_20,amStack_10);
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)
             std::
             reverse_iterator<__gnu_cxx::__normal_iterator<DTransformNode*const*,std::vector<DTransformNode*,std::allocator<DTransformNode*>>>>
             ::operator*(arStack_20);
    uVar3 = *puVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapUtils::GetAllEventsOfType(MapEventType, std::vector<MapEventItem const*,
   std::allocator<MapEventItem const*> >&) */

void WorldMapUtils::GetAllEventsOfType
               (int param_1,vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *param_2
               )

{
  bool bVar1;
  int iVar2;
  int iVar3;
  WorldDataManager *this;
  long lVar4;
  MapEventItem *pMVar5;
  int iVar6;
  undefined8 local_20;
  undefined8 local_18;
  MapEventItem *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (WorldDataManager *)GetWorldDataForEdit();
  iVar2 = WorldDataManager::GetWorldDataCount(this);
  if (0 < iVar2) {
    iVar6 = 0;
    do {
      lVar4 = WorldDataManager::GetWorldDataByIdx(this,iVar6);
      local_20 = FUN_0450fbf8(*(undefined8 *)(lVar4 + 0x20));
      local_18 = FUN_0450fc48(*(undefined8 *)(lVar4 + 0x28));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18),
            bVar1) {
        pMVar5 = (MapEventItem *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        iVar3 = FUN_0450ead8(*(undefined4 *)(pMVar5 + 0x14));
        if (iVar3 == param_1) {
          local_10 = pMVar5;
          std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::push_back
                    (param_2,&local_10);
        }
        std::move_iterator<MapEventItem*>::operator++((move_iterator<MapEventItem*> *)&local_20);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapUtils::GetOrderedPathToEvent(MapEventItem const*, std::vector<MapEventItem const*,
   std::allocator<MapEventItem const*> >&) */

void WorldMapUtils::GetOrderedPathToEvent(MapEventItem *param_1,vector *param_2)

{
  char cVar1;
  int iVar2;
  MapEventItem **ppMVar3;
  stack<MapEventItem_const*,std::deque<MapEventItem_const*,std::allocator<MapEventItem_const*>>>
  asStack_a8 [80];
  MapEventItem *local_58 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::deque<MapEventItem_const*,std::allocator<MapEventItem_const*>>::deque();
  std::
  stack<MapEventItem_const*,std::deque<MapEventItem_const*,std::allocator<MapEventItem_const*>>>::
  stack(asStack_a8,(deque *)local_58);
  std::deque<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~deque
            ((deque<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)local_58);
  local_58[0] = param_1;
  while ((local_58[0] != (MapEventItem *)0x0 &&
         (iVar2 = FUN_0450ead8(*(undefined4 *)(local_58[0] + 0x14)), iVar2 != 7))) {
    std::
    stack<MapEventItem_const*,std::deque<MapEventItem_const*,std::allocator<MapEventItem_const*>>>::
    push((MapEventItem **)asStack_a8);
    local_58[0] = (MapEventItem *)FUN_0450eae4(*(undefined8 *)(local_58[0] + 0xb0));
  }
  std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::clear
            ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)param_2);
  while (cVar1 = std::
                 stack<MapEventItem_const*,std::deque<MapEventItem_const*,std::allocator<MapEventItem_const*>>>
                 ::empty(asStack_a8), cVar1 == '\0') {
    ppMVar3 = (MapEventItem **)
              std::
              stack<MapEventItem_const*,std::deque<MapEventItem_const*,std::allocator<MapEventItem_const*>>>
              ::top();
    std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::push_back
              ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)param_2,ppMVar3);
    std::
    stack<MapEventItem_const*,std::deque<MapEventItem_const*,std::allocator<MapEventItem_const*>>>::
    pop(asStack_a8);
  }
  std::
  stack<MapEventItem_const*,std::deque<MapEventItem_const*,std::allocator<MapEventItem_const*>>>::
  ~stack(asStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WorldMapUtils::LoadWorldMapData() */

void WorldMapUtils::LoadWorldMapData(void)

{
  loadWorldMapData();
  WorldDataManager::RebuildWorldData(DAT_06b0f4e0);
  return;
}


/* WorldMapUtils::GetWorldMapListForEdit() */

long WorldMapUtils::GetWorldMapListForEdit(void)

{
  if (DAT_06b0f538 != 0) {
    return DAT_06b0f538;
  }
  LoadWorldMapData();
  return DAT_06b0f538;
}


/* WorldMapUtils::GetWorldMapList() */

long WorldMapUtils::GetWorldMapList(void)

{
  if (DAT_06b0f538 != 0) {
    return DAT_06b0f538;
  }
  LoadWorldMapData();
  return DAT_06b0f538;
}


/* WorldMapUtils::WorldIsPurchasable(std::string const&) */

bool WorldMapUtils::WorldIsPurchasable(string *param_1)

{
  int iVar1;
  WorldMapList *this;
  long lVar2;
  WorldDataManager *pWVar3;
  FilesystemSaveGameContext *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  string *psVar4;
  
  this = (WorldMapList *)GetWorldMapList();
  lVar2 = WorldMapList::GetMapListNodeByName(this,param_1);
  pWVar3 = (WorldDataManager *)GetWorldDataForEdit();
  lVar2 = WorldDataManager::FindEventByName(pWVar3,(string *)(lVar2 + 8));
  pWVar3 = (WorldDataManager *)GetWorldDataForEdit();
  this_00 = (FilesystemSaveGameContext *)
            WorldDataManager::FindEventByName(pWVar3,(string *)(lVar2 + 0x30));
  if (this_00 != (FilesystemSaveGameContext *)0x0) {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    psVar4 = (string *)Sexy::FilesystemSaveGameContext::GetBuffer(this_00);
    iVar1 = PlayerInfo::GetWorldMapEventStatus(this_02,psVar4);
    return iVar1 == 3;
  }
  return false;
}


/* WorldMapUtils::UnlockStargateForWorld(std::string const&, bool) */

void WorldMapUtils::UnlockStargateForWorld(string *param_1,bool param_2)

{
  WorldMapList *this;
  long lVar1;
  long lVar2;
  WorldDataManager *this_00;
  MapEventItem *pMVar3;
  
  this = (WorldMapList *)GetWorldMapList();
  lVar1 = WorldMapList::GetMapListNodeByName(this,param_1);
  if (lVar1 != 0) {
    lVar2 = FUN_05474184((string *)(lVar1 + 8));
    if (lVar2 != 0) {
      this_00 = (WorldDataManager *)GetWorldDataForEdit();
      pMVar3 = (MapEventItem *)WorldDataManager::FindEventByName(this_00,(string *)(lVar1 + 8));
      if (pMVar3 != (MapEventItem *)0x0) {
        UnlockStargate(pMVar3,param_2);
        return;
      }
    }
  }
  return;
}


/* WorldMapUtils::FindLastPlayableEventInWorld(std::string const&) */

MapEventItem * WorldMapUtils::FindLastPlayableEventInWorld(string *param_1)

{
  char cVar1;
  int iVar2;
  WorldMapList *this;
  long lVar3;
  string *psVar4;
  WorldDataManager *this_00;
  MapEventItem *pMVar5;
  
  this = (WorldMapList *)GetWorldMapList();
  lVar3 = WorldMapList::GetMapListNodeByName(this,param_1);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0xa9) == 0) {
      psVar4 = (string *)
               std::vector<std::string,std::allocator<std::string>>::back
                         ((vector<std::string,std::allocator<std::string>> *)(lVar3 + 0x18));
    }
    else {
      psVar4 = (string *)
               FUN_0450eb4c(*(undefined8 *)(lVar3 + 0x18),(long)(*(char *)(lVar3 + 0xa9) + -1));
    }
    this_00 = (WorldDataManager *)GetWorldDataForEdit();
    for (pMVar5 = (MapEventItem *)WorldDataManager::FindEventByLevelName(this_00,psVar4);
        pMVar5 != (MapEventItem *)0x0;
        pMVar5 = (MapEventItem *)FUN_0450eae4(*(undefined8 *)(pMVar5 + 0xb0))) {
      iVar2 = FUN_0450ead8(*(undefined4 *)(pMVar5 + 0x14));
      if ((iVar2 == 1) && (cVar1 = IsMapEventToggledOff(pMVar5), cVar1 == '\0')) {
        return pMVar5;
      }
    }
  }
  return (MapEventItem *)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapUtils::GetOrderedMainSpinePath(std::string const&, std::vector<MapEventItem const*,
   std::allocator<MapEventItem const*> >&) */

void WorldMapUtils::GetOrderedMainSpinePath(string *param_1,vector *param_2)

{
  char cVar1;
  int iVar2;
  WorldDataManager *this;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  MapEventItem *local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = (MapEventItem *)FindLastPlayableEventInWorld(param_1);
  uVar3 = 0;
  if (local_28 != (MapEventItem *)0x0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    this = (WorldDataManager *)GetWorldDataForEdit();
    WorldDataManager::FindEventsUnlockedByEvent(this,local_28,(vector *)avStack_20);
    cVar1 = std::vector<MapEventItem*,std::allocator<MapEventItem*>>::empty
                      ((vector<MapEventItem*,std::allocator<MapEventItem*>> *)avStack_20);
    if ((cVar1 == '\0') &&
       (plVar5 = (long *)std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                 *)avStack_20),
       *(long *)(*plVar5 + 0xe8) == *(long *)(local_28 + 0xe8))) {
      plVar5 = (long *)std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)avStack_20);
      iVar2 = FUN_0450ead8(*(undefined4 *)(*plVar5 + 0x14));
      if (iVar2 != 7) {
        plVar5 = (long *)std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                 *)avStack_20);
        local_28 = (MapEventItem *)*plVar5;
      }
    }
    std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::clear
              ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)param_2);
    while ((local_28 != (MapEventItem *)0x0 &&
           (iVar2 = FUN_0450ead8(*(undefined4 *)(local_28 + 0x14)), iVar2 != 7))) {
      std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::push_back
                ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)param_2,
                 &local_28);
      local_28 = (MapEventItem *)FUN_0450eae4(*(undefined8 *)(local_28 + 0xb0));
    }
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)param_2);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)param_2);
    std::
    reverse<__gnu_cxx::__normal_iterator<MapEventItem_const**,std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>>>
              (uVar3,uVar4);
    std::vector<MapEventItem*,std::allocator<MapEventItem*>>::~vector
              ((vector<MapEventItem*,std::allocator<MapEventItem*>> *)avStack_20);
    uVar3 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapUtils::FindZombossNodeInWorld(std::string const&) */

void WorldMapUtils::FindZombossNodeInWorld(string *param_1)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  GetOrderedMainSpinePath(param_1,(vector *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    lVar4 = *plVar3;
    iVar2 = FUN_0450ead8(*(undefined4 *)(lVar4 + 0x14));
    if ((iVar2 == 1) && (iVar2 = FUN_0450eadc(*(undefined4 *)(lVar4 + 0x78)), iVar2 == 3))
    goto LAB_0451433c;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  lVar4 = 0;
LAB_0451433c:
  std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
            ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapUtils::CalculatePositionAlongSpine(MapEventItem*) */

void WorldMapUtils::CalculatePositionAlongSpine(MapEventItem *param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  uVar2 = 1;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  lVar3 = FUN_0450eaf0(*(undefined8 *)(param_1 + 0xe8));
  cVar1 = GetOrderedMainSpinePath((string *)(lVar3 + 0x38),(vector *)avStack_20);
  if (cVar1 != '\0') {
    uVar2 = GetIndexOfEventOnPath(param_1,(vector *)avStack_20);
  }
  std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
            ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapUtils::GetFirstLevelInWorld(std::string const&) */

void __thiscall WorldMapUtils::GetFirstLevelInWorld(WorldMapUtils *this,string *param_1)

{
  long lVar1;
  WorldMapList *this_00;
  long lVar2;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  this_00 = (WorldMapList *)GetWorldMapList();
  lVar2 = WorldMapList::GetMapListNodeByName(this_00,(string *)this);
  if (lVar2 == 0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    FUN_05475d88();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapUtils::IsRiftWorld(std::string const&) */

undefined1 WorldMapUtils::IsRiftWorld(string *param_1)

{
  WorldMapList *this;
  long lVar1;
  
  this = (WorldMapList *)GetWorldMapList();
  lVar1 = WorldMapList::GetMapListNodeByName(this,param_1);
  return *(undefined1 *)(lVar1 + 0xaa);
}


/* WorldMapUtils::IsPVZ1World(std::string const&) */

undefined1 WorldMapUtils::IsPVZ1World(string *param_1)

{
  WorldMapList *this;
  long lVar1;
  
  this = (WorldMapList *)GetWorldMapList();
  lVar1 = WorldMapList::GetMapListNodeByName(this,param_1);
  return *(undefined1 *)(lVar1 + 0xab);
}


/* WorldMapUtils::IsUnchartedWorld(std::string const&) */

undefined1 WorldMapUtils::IsUnchartedWorld(string *param_1)

{
  WorldMapList *this;
  long lVar1;
  
  this = (WorldMapList *)GetWorldMapList();
  lVar1 = WorldMapList::GetMapListNodeByName(this,param_1);
  return *(undefined1 *)(lVar1 + 0xac);
}


/* WorldMapUtils::IsCardGameWorld(std::string const&) */

undefined1 WorldMapUtils::IsCardGameWorld(string *param_1)

{
  WorldMapList *this;
  long lVar1;
  
  this = (WorldMapList *)GetWorldMapList();
  lVar1 = WorldMapList::GetMapListNodeByName(this,param_1);
  return *(undefined1 *)(lVar1 + 0xad);
}


/* WorldMapUtils::IsPlantWarsWorld(std::string const&) */

undefined1 WorldMapUtils::IsPlantWarsWorld(string *param_1)

{
  WorldMapList *this;
  long lVar1;
  
  this = (WorldMapList *)GetWorldMapList();
  lVar1 = WorldMapList::GetMapListNodeByName(this,param_1);
  return *(undefined1 *)(lVar1 + 0xae);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapUtils::GetVisualMapEventStatus(MapEventItem const*, PlayerInfo*) */

void WorldMapUtils::GetVisualMapEventStatus(MapEventItem *param_1,PlayerInfo *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  string *psVar10;
  undefined8 uVar11;
  long lVar12;
  MapEventItem *pMVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar9 = 1;
  cVar1 = IsMapEventToggledOff(param_1);
  if (cVar1 != '\0') goto LAB_045145a0;
  cVar1 = IsRiftWorld((string *)(*(long *)(param_1 + 0xe8) + 0x38));
  cVar2 = IsPVZ1World((string *)(*(long *)(param_1 + 0xe8) + 0x38));
  cVar3 = IsUnchartedWorld((string *)(*(long *)(param_1 + 0xe8) + 0x38));
  cVar4 = IsCardGameWorld((string *)(*(long *)(param_1 + 0xe8) + 0x38));
  cVar5 = IsPlantWarsWorld((string *)(*(long *)(param_1 + 0xe8) + 0x38));
  if ((((cVar1 == '\0') && (cVar2 == '\0')) && (cVar3 == '\0')) && (cVar4 == '\0')) {
    psVar10 = (string *)MapEventItem::GetPlayerProfileStatusString(param_1);
    iVar7 = PlayerInfo::GetWorldMapEventStatus(param_2,psVar10);
    cVar6 = MapEventItem::DoesPlayerOwnReward(param_1,param_2);
    if ((2 < iVar7) || (cVar6 != '\0')) {
      uVar9 = 3;
      goto LAB_045145a0;
    }
    uVar11 = Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)param_1);
    lVar12 = FUN_05474374(uVar11,"dangerroom",0);
    if (((lVar12 != -1) &&
        (pMVar13 = (MapEventItem *)FUN_0450eae0(*(undefined8 *)(param_1 + 0xd8)),
        pMVar13 != (MapEventItem *)0x0)) && (param_1 != pMVar13)) {
      iVar7 = GetVisualMapEventStatus(pMVar13,param_2);
      uVar9 = 2;
      if (iVar7 != 3) {
        uVar9 = 1;
      }
      goto LAB_045145a0;
    }
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  lVar12 = FUN_0450eaf0(*(undefined8 *)(param_1 + 0xe8));
  cVar6 = GetOrderedMainSpinePath((string *)(lVar12 + 0x38),(vector *)&local_20);
  if ((cVar6 == '\0') || (iVar7 = GetIndexOfEventOnPath(param_1,(vector *)&local_20), iVar7 == -1))
  {
    uVar9 = 0;
  }
  else if (cVar1 == '\0') {
    if (cVar2 == '\0') {
      if (cVar3 == '\0') {
        if (cVar4 == '\0') {
          if (cVar5 == '\0') {
            if (iVar7 == 0) {
LAB_0451471c:
              uVar9 = 2;
            }
            else {
              pMVar13 = (MapEventItem *)GetLastCompletedLevelNodeOnPath((vector *)&local_20,param_2)
              ;
              if (pMVar13 == (MapEventItem *)0x0) {
                uVar9 = 1;
              }
              else {
                iVar8 = GetIndexOfEventOnPath(pMVar13,(vector *)&local_20);
                if (iVar7 < iVar8) goto LAB_0451471c;
                iVar8 = iVar8 + 1;
                uVar14 = FUN_0450eb38(local_20,local_18);
                uVar16 = (long)iVar8;
                while (uVar16 < uVar14) {
                  plVar15 = (long *)FUN_0450eb54(local_20,uVar16);
                  if (*(int *)(*plVar15 + 0x14) == 1) {
                    if (iVar7 == iVar8) goto LAB_0451471c;
                    if (iVar8 != -1) {
                      uVar9 = 1;
                      if (iVar7 < iVar8) {
                        uVar9 = 3;
                      }
                      goto LAB_045146e0;
                    }
                    break;
                  }
                  iVar8 = iVar8 + 1;
                  uVar16 = uVar16 + 1;
                }
                uVar9 = 3;
              }
            }
          }
          else {
            iVar7 = GetIndexOfLevelEventOnPath(param_1,(vector *)&local_20);
            uVar9 = getPlantWarsEventVisualStatus(iVar7);
          }
        }
        else {
          iVar7 = GetIndexOfLevelEventOnPath(param_1,(vector *)&local_20);
          uVar9 = getCardGameEventVisualStatus(iVar7);
        }
      }
      else {
        iVar7 = GetIndexOfLevelEventOnPath(param_1,(vector *)&local_20);
        uVar9 = getUnchartedEventVisualStatus(iVar7);
      }
    }
    else {
      uVar9 = getPVZ1EventVisualStatus(iVar7);
    }
  }
  else {
    uVar9 = getRiftEventVisualStatus(iVar7);
  }
LAB_045146e0:
  std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
            ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)&local_20);
LAB_045145a0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapUtils::GetNextWorldEventOfType(std::string const&, std::vector<MapEventType,
   std::allocator<MapEventType> > const&, unsigned int) */

void WorldMapUtils::GetNextWorldEventOfType(string *param_1,vector *param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  WorldDataManager *this;
  MapEventItem *pMVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ProfileMgr *this_00;
  PlayerInfo *pPVar8;
  uint local_60;
  int local_44;
  undefined8 local_40;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [8];
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (WorldDataManager *)GetWorldDataForEdit();
  pMVar4 = (MapEventItem *)WorldDataManager::FindEventByName(this,param_1);
  if (pMVar4 == (MapEventItem *)0x0) {
    pMVar4 = (MapEventItem *)WorldDataManager::FindEventByLevelName(this,param_1);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    if (pMVar4 == (MapEventItem *)0x0) goto LAB_045148e4;
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  }
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_28,(__normal_iterator *)&local_40);
  MapEventItem::GetChildren(pMVar4);
  std::vector<MapEventItem*,std::allocator<MapEventItem*>>::rbegin();
  std::vector<MapEventItem*,std::allocator<MapEventItem*>>::rend();
  std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::
  insert<std::reverse_iterator<__gnu_cxx::__normal_iterator<MapEventItem*const*,std::vector<MapEventItem*,std::allocator<MapEventItem*>>>>,void>
            ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)avStack_20,local_28,
             auStack_38,&local_30);
LAB_045148e4:
  local_60 = param_3 >> 1 & 1;
  while (cVar1 = std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::empty
                           ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)
                            avStack_20), cVar1 == '\0') {
    while( true ) {
      puVar5 = (undefined8 *)
               std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
      pMVar4 = (MapEventItem *)*puVar5;
      FUN_0450eba4(auStack_18);
      local_44 = FUN_0450ead8(*(undefined4 *)(pMVar4 + 0x14));
      uVar6 = FUN_0450fb08(*(undefined8 *)param_2);
      uVar7 = FUN_0450fb58(*(undefined8 *)(param_2 + 8));
      local_30 = std::
                 find<__gnu_cxx::__normal_iterator<MapEventType_const*,std::vector<MapEventType,std::allocator<MapEventType>>>,MapEventType>
                           (uVar6,uVar7,&local_44);
      local_28 = FUN_0450fb58(*(undefined8 *)(param_2 + 8));
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
      if (bVar2) {
        if ((param_3 & 6) == 0) goto LAB_04514a28;
        this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar8 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
        uVar3 = GetVisualMapEventStatus(pMVar4,pPVar8);
        if (((uVar3 != 3) || ((param_3 >> 2 & 1) == 0)) && ((uVar3 < 2 & local_60) == 0))
        goto LAB_04514a28;
      }
      if ((local_44 == 8) && ((param_3 & 1) == 0)) break;
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_28,(__normal_iterator *)&local_40);
      MapEventItem::GetChildren(pMVar4);
      std::vector<MapEventItem*,std::allocator<MapEventItem*>>::rbegin();
      std::vector<MapEventItem*,std::allocator<MapEventItem*>>::rend();
      std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::
      insert<std::reverse_iterator<__gnu_cxx::__normal_iterator<MapEventItem*const*,std::vector<MapEventItem*,std::allocator<MapEventItem*>>>>,void>
                ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)avStack_20,
                 local_28,auStack_38,(__normal_iterator *)&local_30);
      cVar1 = std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::empty
                        ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)
                         avStack_20);
      if (cVar1 != '\0') goto LAB_04514a24;
    }
  }
LAB_04514a24:
  pMVar4 = (MapEventItem *)0x0;
LAB_04514a28:
  std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
            ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pMVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapUtils::GetNextWorldEventOfType(std::string const&, MapEventType, unsigned int) */

void WorldMapUtils::GetNextWorldEventOfType(string *param_1,undefined4 param_2,uint param_3)

{
  undefined8 uVar1;
  undefined4 local_24;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24 = param_2;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<MapEventType,std::allocator<MapEventType>>::push_back
            ((vector<MapEventType,std::allocator<MapEventType>> *)avStack_20,
             (MapEventType *)&local_24);
  uVar1 = GetNextWorldEventOfType(param_1,(vector *)avStack_20,param_3);
  std::vector<MapEventType,std::allocator<MapEventType>>::~vector
            ((vector<MapEventType,std::allocator<MapEventType>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapUtils::GetNextLevelOnPath(std::string const&) */

void __thiscall WorldMapUtils::GetNextLevelOnPath(WorldMapUtils *this,string *param_1)

{
  long lVar1;
  FilesystemSaveGameContext *this_00;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  this_00 = (FilesystemSaveGameContext *)GetNextWorldEventOfType(this,1,1);
  std::string::string(in_x8,"");
  nop();
  if (this_00 != (FilesystemSaveGameContext *)0x0) {
    Sexy::FilesystemSaveGameContext::GetBuffer(this_00);
    thunk_FUN_05475e00();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapUtils::GetLastUnlockedNodeOnPath(std::vector<MapEventItem const*,
   std::allocator<MapEventItem const*> > const&, PlayerInfo*) */

MapEventItem * WorldMapUtils::GetLastUnlockedNodeOnPath(vector *param_1,PlayerInfo *param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  MapEventItem *pMVar7;
  MapEventItem *pMVar8;
  
  uVar5 = 0;
  pMVar7 = (MapEventItem *)0x0;
  do {
    pMVar8 = pMVar7;
    uVar6 = *(undefined8 *)param_1;
    uVar3 = FUN_0450eb38(uVar6,*(undefined8 *)(param_1 + 8));
    uVar1 = uVar5 + 1;
    if (uVar3 <= uVar5) {
      return pMVar8;
    }
    puVar4 = (undefined8 *)FUN_0450eb44(uVar6,uVar5);
    pMVar7 = (MapEventItem *)*puVar4;
    iVar2 = GetVisualMapEventStatus(pMVar7,param_2);
    uVar5 = uVar1;
  } while ((iVar2 - 2U < 2) || (pMVar7 = pMVar8, iVar2 != 1));
  return pMVar8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapUtils::CalculateProgressAlongSpine(std::string&) */

void WorldMapUtils::CalculateProgressAlongSpine(string *param_1)

{
  char cVar1;
  undefined4 uVar2;
  PlayerInfo *pPVar3;
  MapEventItem *pMVar4;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  uVar2 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  cVar1 = GetOrderedMainSpinePath(param_1,(vector *)avStack_20);
  if (cVar1 != '\0') {
    pPVar3 = (PlayerInfo *)ProfileUtils::Profile();
    pMVar4 = (MapEventItem *)GetLastUnlockedNodeOnPath((vector *)avStack_20,pPVar3);
    uVar2 = GetIndexOfEventOnPath(pMVar4,(vector *)avStack_20);
  }
  std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
            ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapUtils::CalculateLevelCountUntilPositionAlongSpine(MapEventItem*) */

void WorldMapUtils::CalculateLevelCountUntilPositionAlongSpine(MapEventItem *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  PlayerInfo *pPVar6;
  MapEventItem *this;
  long *plVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (MapEventItem *)0x0) {
    iVar10 = -1;
    goto LAB_04514d70;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  lVar5 = FUN_0450eaf0(*(undefined8 *)(param_1 + 0xe8));
  cVar1 = GetOrderedMainSpinePath((string *)(lVar5 + 0x38),(vector *)local_20);
  if (cVar1 == '\0') {
    iVar10 = -1;
    std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
              ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)local_20);
    goto LAB_04514d70;
  }
  pPVar6 = (PlayerInfo *)ProfileUtils::Profile();
  this = (MapEventItem *)GetLastUnlockedNodeOnPath((vector *)local_20,pPVar6);
  iVar2 = GetIndexOfEventOnPath(this,(vector *)local_20);
  iVar3 = GetIndexOfEventOnPath(param_1,(vector *)local_20);
  if (iVar3 < iVar2) {
LAB_04514d64:
    iVar10 = 0;
  }
  else {
    if (iVar3 == iVar2) {
      pPVar6 = (PlayerInfo *)ProfileUtils::Profile();
      cVar1 = MapEventItem::IsEventComplete(this,pPVar6);
      if (cVar1 != '\0') goto LAB_04514d64;
    }
    lVar5 = (long)iVar2 + 1;
    iVar10 = 0;
    lVar8 = (long)iVar2;
    lVar9 = lVar5;
    while( true ) {
      plVar7 = (long *)FUN_0450eb54(local_20[0],lVar8);
      iVar4 = FUN_0450ead8(*(undefined4 *)(*plVar7 + 0x14));
      if (iVar4 == 1) {
        iVar10 = iVar10 + 1;
      }
      if (lVar9 == lVar5 + (ulong)(uint)(iVar3 - iVar2)) break;
      lVar8 = lVar9;
      lVar9 = lVar9 + 1;
    }
  }
  std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
            ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)local_20);
LAB_04514d70:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar10);
  }
  return;
}


/* WorldMapUtils::GetLevelToCenterOnInWorld(std::string const&) */

long WorldMapUtils::GetLevelToCenterOnInWorld(string *param_1)

{
  bool bVar1;
  WorldMapList *this;
  long lVar2;
  long lVar3;
  WorldDataManager *this_00;
  
  bVar1 = std::operator!=(param_1,"");
  if (bVar1) {
    this = (WorldMapList *)GetWorldMapList();
    lVar2 = WorldMapList::GetMapListNodeByName(this,param_1);
    if (lVar2 != 0) {
      lVar3 = GetNextWorldEventOfType((string *)(lVar2 + 0x10),1,6);
      if (lVar3 != 0) {
        return lVar3;
      }
      this_00 = (WorldDataManager *)GetWorldDataForEdit();
      lVar2 = WorldDataManager::FindEventByName(this_00,(string *)(lVar2 + 0x10));
      return lVar2;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapUtils::LoadSerializedMapData(std::string const&, WorldMapUtils::FilterSelection) */

void WorldMapUtils::LoadSerializedMapData(Sexy *param_1)

{
  char cVar1;
  bool bVar2;
  PVZDB *pPVar3;
  RtDbTable *pRVar4;
  char *__s;
  undefined8 uVar5;
  RtObject *pRVar6;
  WorldData *pWVar7;
  WorldMapList *this;
  long lVar8;
  WorldData *pWVar9;
  undefined8 uVar10;
  int extraout_w1;
  int extraout_w1_00;
  string *extraout_x1;
  string asStack_60 [8];
  string asStack_58 [8];
  RtMixedPtrBase aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  pRVar4 = (RtDbTable *)PVZDB::GetTable(pPVar3,0x22);
  Sexy::RtDbTable::Reset(pRVar4,true);
  Sexy::Upper(param_1,extraout_x1);
  __s = (char *)FUN_0547429c((string *)&local_38);
  std::string::string(asStack_28,__s);
  FUN_0450e9cc(asStack_60,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  std::string::~string((string *)&local_38);
  Sexy::ResourceManager::GetResourceForStringIdT<Sexy::GenericResFile>
            (*(string **)(gLawnApp + 0x848),SUB81(asStack_60,0));
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_38);
  if (cVar1 == '\0') {
    pWVar7 = (WorldData *)0x0;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  }
  else {
    pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_28,(RtWeakPtrBase *)&local_38);
    PVZDB::LoadPackageForTable(pPVar3,0x22,asStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(asStack_28,uVar5,0x22);
    while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)asStack_28), bVar2)
    {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)asStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)&local_38);
      Sexy::RtId::~RtId((RtId *)&local_38);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_40);
      if (bVar2) {
        pRVar6 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        pWVar7 = Sexy::RtObject::Cast<WorldData>(pRVar6);
        if (pWVar7 != (WorldData *)0x0) {
          pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
          pRVar4 = (RtDbTable *)PVZDB::GetTable(pPVar3,0x22);
          Sexy::RtMixedPtrBase::GetId();
          Sexy::RtDbTable::SetObjectDeletionMode(pRVar4,(string *)&local_38,2);
          Sexy::RtId::~RtId((RtId *)&local_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          goto LAB_04515068;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      Sexy::RtDbTable::Iterator::operator++((Iterator *)asStack_28,extraout_w1);
    }
    pWVar7 = (WorldData *)0x0;
LAB_04515068:
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)asStack_28);
    pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    pRVar4 = (RtDbTable *)PVZDB::GetTable(pPVar3,0x22);
    Sexy::RtDbTable::Reset(pRVar4,false);
    this = (WorldMapList *)GetWorldMapList();
    lVar8 = WorldMapList::GetMapListNodeByName(this,(string *)param_1);
    if ((lVar8 != 0) && ('\x01' < *(char *)(lVar8 + 0xa8))) {
      cVar1 = *(char *)(lVar8 + 0xa9);
      Set8BytesTo0(asStack_58);
      FUN_0450e9cc(asStack_28,param_1,(int)cVar1);
      FUN_05474278(asStack_58,asStack_28);
      std::string::~string(asStack_28);
      Sexy::ResourceManager::GetResourceForStringIdT<Sexy::GenericResFile>
                (*(string **)(gLawnApp + 0x848),SUB81(asStack_58,0));
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_50);
      if (cVar1 == '\0') {
        pWVar7 = (WorldData *)0x0;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50)
        ;
        std::string::~string(asStack_58);
      }
      else {
        pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_28,(RtWeakPtrBase *)aRStack_50);
        PVZDB::LoadPackageForTable(pPVar3,0,asStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28)
        ;
        uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
        PVZDB::GetObjectIteratorForTable(asStack_28,uVar5,0);
        while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)asStack_28),
              bVar2) {
          Sexy::RtDbTable::Iterator::operator*((Iterator *)asStack_28);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_48,(RtWeakPtrBase *)&local_38);
          Sexy::RtId::~RtId((RtId *)&local_38);
          bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_48);
          if (bVar2) {
            pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
            pWVar9 = Sexy::RtObject::Cast<WorldData>(pRVar6);
            if (pWVar9 != (WorldData *)0x0) {
              local_40 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)(pWVar7 + 8));
              __gnu_cxx::
              __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              ::__normal_iterator<Sexy::RenderStateManager::Context**>
                        ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)&local_38,(__normal_iterator *)&local_40);
              uVar5 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)(pWVar9 + 8));
              uVar10 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)(pWVar9 + 8));
              std::vector<MapEventItem,std::allocator<MapEventItem>>::
              insert<__gnu_cxx::__normal_iterator<MapEventItem*,std::vector<MapEventItem,std::allocator<MapEventItem>>>,void>
                        ((vector<MapEventItem,std::allocator<MapEventItem>> *)(pWVar7 + 8),local_38,
                         uVar5,uVar10);
              local_40 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)(pWVar7 + 0x20));
              __gnu_cxx::
              __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              ::__normal_iterator<Sexy::RenderStateManager::Context**>
                        ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)&local_38,(__normal_iterator *)&local_40);
              uVar5 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)(pWVar9 + 0x20));
              uVar10 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)(pWVar9 + 0x20));
              std::vector<MapEventItem,std::allocator<MapEventItem>>::
              insert<__gnu_cxx::__normal_iterator<MapEventItem*,std::vector<MapEventItem,std::allocator<MapEventItem>>>,void>
                        ((vector<MapEventItem,std::allocator<MapEventItem>> *)(pWVar7 + 0x20),
                         local_38,uVar5,uVar10);
              if (*(int *)(pWVar9 + 0x54) != 0) {
                Sexy::TRect<int>::Union((TRect *)(pWVar7 + 0x4c));
                *(undefined8 *)(pWVar7 + 0x4c) = local_38;
                *(undefined8 *)(pWVar7 + 0x54) = uStack_30;
              }
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
              break;
            }
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
          Sexy::RtDbTable::Iterator::operator++((Iterator *)asStack_28,extraout_w1_00);
        }
        Sexy::RtDbTable::Iterator::~Iterator((Iterator *)asStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50)
        ;
        std::string::~string(asStack_58);
      }
    }
  }
  std::string::~string(asStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pWVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapUtils::GetNextWorldResourceDataId() */

void WorldMapUtils::GetNextWorldResourceDataId(void)

{
  bool bVar1;
  long lVar2;
  MapListNode *pMVar3;
  ushort *puVar4;
  ushort local_ca;
  undefined8 local_c8;
  undefined8 local_c0;
  MapListNode aMStack_b8 [88];
  ushort auStack_60 [44];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = GetWorldMapList();
  local_ca = 0;
  local_c8 = FUN_0450fd7c(*(undefined8 *)(lVar2 + 8));
  local_c0 = FUN_0450fdcc(*(undefined8 *)(lVar2 + 0x10));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_c8,(__normal_iterator *)&local_c0), bVar1) {
    pMVar3 = (MapListNode *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c8);
    MapListNode::MapListNode(aMStack_b8,pMVar3);
    puVar4 = std::max<unsigned_short>(&local_ca,auStack_60);
    local_ca = *puVar4;
    MapListNode::~MapListNode(aMStack_b8);
    eastl::generic_iterator<EA::Text::FeatureLookup*,void>::operator++
              ((generic_iterator<EA::Text::FeatureLookup*,void> *)&local_c8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((byte)local_ca + 1);
}

