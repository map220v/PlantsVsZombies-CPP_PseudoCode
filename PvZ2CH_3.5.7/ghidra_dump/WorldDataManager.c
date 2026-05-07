// Class: WorldDataManager


/* WorldDataManager::GetWorldDataCount() const */

void __thiscall WorldDataManager::GetWorldDataCount(WorldDataManager *this)

{
  FUN_0451a5f8(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  return;
}


/* WorldDataManager::GetWorldDataByIdx(int) const */

undefined8 __thiscall WorldDataManager::GetWorldDataByIdx(WorldDataManager *this,int param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0451a60c(*(undefined8 *)(this + 8),(long)param_1);
  return *puVar1;
}


/* WorldDataManager::FindWorldDataByEvent(MapEventItem const*) const */

long __thiscall WorldDataManager::FindWorldDataByEvent(WorldDataManager *this,MapEventItem *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  MapEventItem *pMVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(this + 8);
  lVar8 = 0;
  lVar1 = FUN_0451a5f8(uVar9,*(undefined8 *)(this + 0x10));
  if (lVar1 != 0) {
    do {
      plVar2 = (long *)FUN_0451a60c(uVar9,lVar8);
      lVar7 = *plVar2;
      if (lVar7 != 0) {
        uVar6 = *(undefined8 *)(lVar7 + 0x20);
        lVar3 = FUN_0451a5b0(uVar6,*(undefined8 *)(lVar7 + 0x28));
        lVar5 = 0;
        while (lVar5 != lVar3) {
          pMVar4 = (MapEventItem *)FUN_0451a5ec(uVar6,lVar5);
          lVar5 = lVar5 + 1;
          if (param_1 == pMVar4) {
            return lVar7;
          }
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != lVar1);
  }
  return 0;
}


/* WorldDataManager::ReplaceWorldDataByName(std::string const&, WorldData*) */

void __thiscall
WorldDataManager::ReplaceWorldDataByName(WorldDataManager *this,string *param_1,WorldData *param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(this + 8);
  uVar4 = 0;
  uVar2 = FUN_0451a5f8(uVar6,*(undefined8 *)(this + 0x10));
  if (uVar2 != 0) {
    do {
      puVar3 = (undefined8 *)FUN_0451a604(uVar6,uVar4);
      plVar5 = (long *)*puVar3;
      cVar1 = std::operator==((string *)(plVar5 + 7),param_1);
      if (cVar1 != '\0') {
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
          puVar3 = (undefined8 *)FUN_0451a604(*(undefined8 *)(this + 8),uVar4);
        }
        *puVar3 = param_2;
        uVar6 = *(undefined8 *)(this + 8);
        uVar2 = FUN_0451a5f8(uVar6,*(undefined8 *)(this + 0x10));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return;
}


/* WorldDataManager::IsValidWorldName(std::string) */

bool __thiscall WorldDataManager::IsValidWorldName(undefined8 param_1,string *param_2)

{
  WorldMapList *this;
  long lVar1;
  
  this = (WorldMapList *)WorldMapUtils::GetWorldMapList();
  if (this != (WorldMapList *)0x0) {
    lVar1 = WorldMapList::GetMapListNodeByName(this,param_2);
    return lVar1 != 0;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldDataManager::GetWorldIdByName(std::string) */

void __thiscall WorldDataManager::GetWorldIdByName(WorldDataManager *this,string *param_2)

{
  char cVar1;
  undefined4 uVar2;
  WorldMapList *this_00;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10);
  cVar1 = IsValidWorldName(this,asStack_10);
  std::string::~string(asStack_10);
  uVar2 = 0;
  if (cVar1 != '\0') {
    this_00 = (WorldMapList *)WorldMapUtils::GetWorldMapList();
    lVar3 = WorldMapList::GetMapListNodeByName(this_00,param_2);
    uVar2 = *(undefined4 *)(lVar3 + 0x3c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WorldDataManager::IsValidWorldId(int) */

bool __thiscall WorldDataManager::IsValidWorldId(WorldDataManager *this,int param_1)

{
  WorldMapList *this_00;
  long lVar1;
  int local_4;
  
  local_4 = param_1;
  this_00 = (WorldMapList *)WorldMapUtils::GetWorldMapList();
  if (this_00 != (WorldMapList *)0x0) {
    lVar1 = WorldMapList::GetMapListNodeById(this_00,&local_4);
    return lVar1 != 0;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldDataManager::GetWorldNameById(int) */

void WorldDataManager::GetWorldNameById(int param_1)

{
  char cVar1;
  WorldMapList *this;
  int in_w1;
  string *in_x8;
  int local_14 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_14[0] = in_w1;
  std::string::string(in_x8,"");
  nop();
  cVar1 = IsValidWorldId((WorldDataManager *)(ulong)(uint)param_1,local_14[0]);
  if (cVar1 != '\0') {
    this = (WorldMapList *)WorldMapUtils::GetWorldMapList();
    WorldMapList::GetMapListNodeById(this,local_14);
    thunk_FUN_05475e00();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldDataManager::FindWorldDataByWorldID(int) const */

void __thiscall WorldDataManager::FindWorldDataByWorldID(WorldDataManager *this,int param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_0451dbc4(*(undefined8 *)(this + 8));
  local_10 = FUN_0451dc14(*(undefined8 *)(this + 0x10));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    lVar3 = *plVar2;
    if ((uint)*(byte *)(lVar3 + 0x5c) == param_1) goto LAB_0451dcec;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  lVar3 = 0;
LAB_0451dcec:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldDataManager::GetWorldDataByWorldID(int) const */

void __thiscall WorldDataManager::GetWorldDataByWorldID(WorldDataManager *this,int param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uStack_18 = FUN_0451dbc4(*(undefined8 *)(this + 8));
  uStack_10 = FUN_0451dc14(*(undefined8 *)(this + 0x10));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&uStack_18,(__normal_iterator *)&uStack_10), bVar1)
  {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_18);
    lVar3 = *plVar2;
    if ((uint)*(byte *)(lVar3 + 0x5c) == param_1) goto LAB_0451dcec;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&uStack_18);
  }
  lVar3 = 0;
LAB_0451dcec:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldDataManager::FindWorldDataByWorldName(std::string const&) const */

void __thiscall WorldDataManager::FindWorldDataByWorldName(WorldDataManager *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_0451dbc4(*(undefined8 *)(this + 8));
  local_10 = FUN_0451dc14(*(undefined8 *)(this + 0x10));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    lVar4 = *plVar3;
    cVar1 = std::operator==((string *)(lVar4 + 0x38),param_1);
    if (cVar1 != '\0') goto LAB_0451ddac;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  lVar4 = 0;
LAB_0451ddac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


/* WorldDataManager::FindWorldDataByIndexInMapList(int) const */

void __thiscall WorldDataManager::FindWorldDataByIndexInMapList(WorldDataManager *this,int param_1)

{
  long lVar1;
  string *psVar2;
  
  lVar1 = WorldMapUtils::GetWorldMapList();
  psVar2 = (string *)FUN_0451a614(*(undefined8 *)(lVar1 + 8),(long)param_1);
  FindWorldDataByWorldName(this,psVar2);
  return;
}


/* WorldDataManager::GetWorldDataByIndexInMapList(int) const */

void __thiscall WorldDataManager::GetWorldDataByIndexInMapList(WorldDataManager *this,int param_1)

{
  long lVar1;
  string *psVar2;
  
  lVar1 = WorldMapUtils::GetWorldMapList();
  psVar2 = (string *)FUN_0451a614(*(undefined8 *)(lVar1 + 8),(long)param_1);
  FindWorldDataByWorldName(this,psVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldDataManager::GetWorldDataByWorldName(std::string const&) const */

void __thiscall WorldDataManager::GetWorldDataByWorldName(WorldDataManager *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uStack_18 = FUN_0451dbc4(*(undefined8 *)(this + 8));
  uStack_10 = FUN_0451dc14(*(undefined8 *)(this + 0x10));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&uStack_18,(__normal_iterator *)&uStack_10), bVar2)
  {
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_18);
    lVar4 = *plVar3;
    cVar1 = std::operator==((string *)(lVar4 + 0x38),param_1);
    if (cVar1 != '\0') goto LAB_0451ddac;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&uStack_18);
  }
  lVar4 = 0;
LAB_0451ddac:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldDataManager::FindEventOfTypeByName(MapEventType, std::string const&) const */

void __thiscall
WorldDataManager::FindEventOfTypeByName
          (WorldDataManager *this,undefined4 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_0451dbc4(*(undefined8 *)(this + 8));
  local_10 = FUN_0451dc14(*(undefined8 *)(this + 0x10));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    lVar3 = WorldData::FindEventOfTypeByName((WorldData *)*puVar2,param_2,param_3);
    if (lVar3 != 0) goto LAB_0451deb0;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  lVar3 = 0;
LAB_0451deb0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


/* WorldDataManager::FindEventByName(std::string const&) const */

void __thiscall WorldDataManager::FindEventByName(WorldDataManager *this,string *param_1)

{
  FindEventOfTypeByName(this,0,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldDataManager::FindEventOfTypeByDataName(MapEventType, std::string const&) const */

void __thiscall
WorldDataManager::FindEventOfTypeByDataName
          (WorldDataManager *this,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(param_3);
  if (cVar1 == '\0') {
    local_18 = FUN_0451dbc4(*(undefined8 *)(this + 8));
    local_10 = FUN_0451dc14(*(undefined8 *)(this + 0x10));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      lVar4 = WorldData::FindEventOfTypeByDataName((WorldData *)*puVar3,param_2,param_3);
      if (lVar4 != 0) goto LAB_0451df88;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  lVar4 = 0;
LAB_0451df88:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


/* WorldDataManager::FindEventByDataName(std::string const&) const */

void __thiscall WorldDataManager::FindEventByDataName(WorldDataManager *this,string *param_1)

{
  FindEventOfTypeByDataName(this,0,param_1);
  return;
}


/* WorldDataManager::FindEventByLevelName(std::string const&) const */

void __thiscall WorldDataManager::FindEventByLevelName(WorldDataManager *this,string *param_1)

{
  FindEventOfTypeByDataName(this,1,param_1);
  return;
}


/* WorldDataManager::FindWorldDataByLevelName(std::string const&) const */

void __thiscall WorldDataManager::FindWorldDataByLevelName(WorldDataManager *this,string *param_1)

{
  MapEventItem *pMVar1;
  
  pMVar1 = (MapEventItem *)FindEventByLevelName(this,param_1);
  if (pMVar1 != (MapEventItem *)0x0) {
    FindWorldDataByEvent(this,pMVar1);
    return;
  }
  return;
}


/* WorldDataManager::GetEventIDsByLevelName(std::string const&, int&, int&) const */

undefined8 __thiscall
WorldDataManager::GetEventIDsByLevelName
          (WorldDataManager *this,string *param_1,int *param_2,int *param_3)

{
  WorldDataManager *pWVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  pWVar1 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  lVar2 = FindEventByLevelName(pWVar1,param_1);
  pWVar1 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  lVar3 = FindWorldDataByLevelName(pWVar1,param_1);
  if (lVar3 != 0) {
    if (lVar2 != 0) {
      *param_2 = (uint)*(byte *)(lVar3 + 0x5c);
      *param_3 = (uint)*(ushort *)(lVar2 + 0x8e);
      return 1;
    }
  }
  uVar4 = FUN_0547429c(param_1);
  Sexy::OutputDebugStrF((wchar_t *)"Unable to find world data & event data for %s\n",uVar4);
  return 0;
}


/* WorldDataManager::FindEvent(std::string const&) const */

long __thiscall WorldDataManager::FindEvent(WorldDataManager *this,string *param_1)

{
  char cVar1;
  long lVar2;
  
  cVar1 = FUN_0547419c(param_1);
  if (cVar1 != '\0') {
    return 0;
  }
  lVar2 = FindEventByLevelName(this,param_1);
  if (lVar2 != 0) {
    return lVar2;
  }
  lVar2 = FindEventByName(this,param_1);
  return lVar2;
}


/* WorldDataManager::WorldDataManager() */

void __thiscall WorldDataManager::WorldDataManager(WorldDataManager *this)

{
  *(undefined ***)this = &PTR__WorldDataManager_06857ab0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* WorldDataManager::clearData() */

void __thiscall WorldDataManager::clearData(WorldDataManager *this)

{
  LawnApp *this_00;
  long *plVar1;
  ulong uVar2;
  string *psVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  do {
    uVar6 = *(undefined8 *)(this + 8);
    uVar2 = FUN_0451a5f8(uVar6,*(undefined8 *)(this + 0x10));
    uVar4 = uVar5;
    do {
      uVar5 = uVar4 + 1;
      if (uVar2 <= uVar4) {
        std::vector<WorldData*,std::allocator<WorldData*>>::clear
                  ((vector<WorldData*,std::allocator<WorldData*>> *)(this + 8));
        uVar5 = 0;
        while( true ) {
          uVar6 = *(undefined8 *)(this + 0x20);
          uVar4 = FUN_0451a624(uVar6,*(undefined8 *)(this + 0x28));
          this_00 = gLawnApp;
          if (uVar4 <= uVar5) break;
          psVar3 = (string *)FUN_0451a630(uVar6,uVar5);
          LawnApp::DeleteGroup(this_00,psVar3);
          uVar5 = uVar5 + 1;
        }
        std::vector<std::string,std::allocator<std::string>>::clear
                  ((vector<std::string,std::allocator<std::string>> *)(this + 0x20));
        return;
      }
      plVar1 = (long *)FUN_0451a604(uVar6,uVar4);
      plVar1 = (long *)*plVar1;
      uVar4 = uVar5;
    } while (plVar1 == (long *)0x0);
    (**(code **)(*plVar1 + 0x18))(plVar1);
  } while( true );
}


/* WorldDataManager::~WorldDataManager() */

void __thiscall WorldDataManager::~WorldDataManager(WorldDataManager *this)

{
  *(undefined ***)this = &PTR__WorldDataManager_06857ab0;
  clearData(this);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x20));
  std::vector<WorldData*,std::allocator<WorldData*>>::~vector
            ((vector<WorldData*,std::allocator<WorldData*>> *)(this + 8));
  return;
}


/* WorldDataManager::~WorldDataManager() */

void __thiscall WorldDataManager::~WorldDataManager(WorldDataManager *this)

{
  ~WorldDataManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldDataManager::RemapWorldMapEvents() */

void __thiscall WorldDataManager::RemapWorldMapEvents(WorldDataManager *this)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  WorldMapList *this_00;
  ulong uVar4;
  MapEventItem *pMVar5;
  string *psVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this_01;
  ulong uVar12;
  string asStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  uVar12 = 0;
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_58);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  uVar10 = *(undefined8 *)(this + 8);
  lVar2 = FUN_0451a5f8(uVar10,*(undefined8 *)(this + 0x10));
  if (lVar2 != 0) {
    do {
      plVar3 = (long *)FUN_0451a604(uVar10,uVar12);
      lVar11 = *plVar3;
      this_00 = (WorldMapList *)WorldMapUtils::GetWorldMapList();
      lVar2 = WorldMapList::GetMapListNodeByName(this_00,(string *)(lVar11 + 0x38));
      *(long *)(lVar11 + 0xb0) = lVar2 + 0x50;
      uVar7 = 0;
      while( true ) {
        uVar10 = *(undefined8 *)(lVar11 + 8);
        uVar4 = FUN_0451a5b0(uVar10,*(undefined8 *)(lVar11 + 0x10));
        if (uVar4 <= uVar7) break;
        pMVar5 = (MapEventItem *)FUN_0451a5ec(uVar10,uVar7);
        MapEventItem::ResetPointers(pMVar5);
        FUN_0451a2f4(pMVar5 + 0xe8,lVar11);
        psVar6 = (string *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)pMVar5);
        puVar8 = (undefined8 *)
                 std::
                 map<std::string,MapEventItem*,std::less<std::string>,std::allocator<std::pair<std::string_const,MapEventItem*>>>
                 ::operator[]((map<std::string,MapEventItem*,std::less<std::string>,std::allocator<std::pair<std::string_const,MapEventItem*>>>
                               *)amStack_38,psVar6);
        *puVar8 = pMVar5;
        uVar7 = uVar7 + 1;
      }
      uVar7 = 0;
      while( true ) {
        uVar10 = *(undefined8 *)(lVar11 + 0x20);
        uVar4 = FUN_0451a5b0(uVar10,*(undefined8 *)(lVar11 + 0x28));
        if (uVar4 <= uVar7) break;
        pMVar5 = (MapEventItem *)FUN_0451a5ec(uVar10,uVar7);
        MapEventItem::ResetPointers(pMVar5);
        FUN_0451a2f4(pMVar5 + 0xe8,lVar11);
        psVar6 = (string *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)pMVar5);
        puVar8 = (undefined8 *)
                 std::
                 map<std::string,MapEventItem*,std::less<std::string>,std::allocator<std::pair<std::string_const,MapEventItem*>>>
                 ::operator[]((map<std::string,MapEventItem*,std::less<std::string>,std::allocator<std::pair<std::string_const,MapEventItem*>>>
                               *)amStack_38,psVar6);
        *puVar8 = pMVar5;
        uVar7 = uVar7 + 1;
      }
      uVar10 = *(undefined8 *)(this + 8);
      uVar12 = uVar12 + 1;
      uVar7 = FUN_0451a5f8(uVar10,*(undefined8 *)(this + 0x10));
    } while (uVar12 < uVar7);
  }
  local_50 = std::
             map<std::string,MapEventItem*,std::less<std::string>,std::allocator<std::pair<std::string_const,MapEventItem*>>>
             ::begin((map<std::string,MapEventItem*,std::less<std::string>,std::allocator<std::pair<std::string_const,MapEventItem*>>>
                      *)amStack_38);
  do {
    local_40 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)amStack_38);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_50,(rbtree_iterator *)&local_40);
    if (!bVar1) {
      local_50 = std::
                 map<std::string,MapEventItem*,std::less<std::string>,std::allocator<std::pair<std::string_const,MapEventItem*>>>
                 ::begin((map<std::string,MapEventItem*,std::less<std::string>,std::allocator<std::pair<std::string_const,MapEventItem*>>>
                          *)amStack_38);
      while( true ) {
        local_40 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)amStack_38);
        bVar1 = eastl::operator!=((rbtree_iterator *)&local_50,(rbtree_iterator *)&local_40);
        if (!bVar1) break;
        lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
        lVar11 = *(long *)(lVar2 + 8);
        lVar2 = FUN_0451a2ec(*(undefined8 *)(lVar11 + 0xb0));
        if ((lVar2 != 0) && (lVar9 = FUN_0451a2e8(*(undefined8 *)(lVar11 + 0xd0)), lVar9 == 0)) {
          uVar10 = FUN_0451a2dc(*(undefined8 *)(lVar2 + 0xd8));
          FUN_0451a2e0(lVar11 + 0xd0,uVar10);
        }
        std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
      }
      std::
      map<std::string,MapEventItem*,std::less<std::string>,std::allocator<std::pair<std::string_const,MapEventItem*>>>
      ::~map((map<std::string,MapEventItem*,std::less<std::string>,std::allocator<std::pair<std::string_const,MapEventItem*>>>
              *)amStack_38);
      std::string::~string(asStack_58);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
    this_01 = *(hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                **)(lVar2 + 8);
    uVar10 = GachaConfig::GetGachaPlantRewardList((GachaConfig *)this_01);
    thunk_FUN_05475e00(asStack_58,uVar10);
    lVar2 = FUN_05474178(asStack_58);
    if (lVar2 == 0) {
LAB_04522594:
      uVar10 = eastl::
               hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
               ::get_allocator(this_01);
      thunk_FUN_05475e00(asStack_58,uVar10);
      lVar2 = FUN_05474178(asStack_58);
      if (lVar2 == 0) goto LAB_045225b4;
LAB_04522690:
      local_48 = std::
                 map<std::string,MapEventItem*,std::less<std::string>,std::allocator<std::pair<std::string_const,MapEventItem*>>>
                 ::find((map<std::string,MapEventItem*,std::less<std::string>,std::allocator<std::pair<std::string_const,MapEventItem*>>>
                         *)amStack_38,asStack_58);
      local_40 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)amStack_38);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40);
      if (!bVar1) {
        std::string::string((string *)&local_40,"");
        AuthMgr::SetCharacterId((string *)this_01);
        std::string::~string((string *)&local_40);
        nop();
        goto LAB_045225b4;
      }
      puVar8 = (undefined8 *)
               std::
               map<std::string,MapEventItem*,std::less<std::string>,std::allocator<std::pair<std::string_const,MapEventItem*>>>
               ::operator[]((map<std::string,MapEventItem*,std::less<std::string>,std::allocator<std::pair<std::string_const,MapEventItem*>>>
                             *)amStack_38,asStack_58);
      FUN_0451a2d4(this_01 + 0xd8,*puVar8);
      uVar10 = PlantWarsNetworkMgr::GetPrefixWorld((PlantWarsNetworkMgr *)this_01);
      thunk_FUN_05475e00(asStack_58,uVar10);
      lVar2 = FUN_05474178(asStack_58);
    }
    else {
      local_48 = std::
                 map<std::string,MapEventItem*,std::less<std::string>,std::allocator<std::pair<std::string_const,MapEventItem*>>>
                 ::find((map<std::string,MapEventItem*,std::less<std::string>,std::allocator<std::pair<std::string_const,MapEventItem*>>>
                         *)amStack_38,asStack_58);
      local_40 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)amStack_38);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40);
      if (!bVar1) {
        std::string::string((string *)&local_40,"");
        AuthMgr::SetToken((string *)this_01);
        std::string::~string((string *)&local_40);
        nop();
        goto LAB_04522594;
      }
      puVar8 = (undefined8 *)
               std::
               map<std::string,MapEventItem*,std::less<std::string>,std::allocator<std::pair<std::string_const,MapEventItem*>>>
               ::operator[]((map<std::string,MapEventItem*,std::less<std::string>,std::allocator<std::pair<std::string_const,MapEventItem*>>>
                             *)amStack_38,asStack_58);
      FUN_0451a2e0(this_01 + 0xd0,*puVar8);
      uVar10 = eastl::
               hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
               ::get_allocator(this_01);
      thunk_FUN_05475e00(asStack_58,uVar10);
      lVar2 = FUN_05474178(asStack_58);
      if (lVar2 != 0) goto LAB_04522690;
LAB_045225b4:
      uVar10 = PlantWarsNetworkMgr::GetPrefixWorld((PlantWarsNetworkMgr *)this_01);
      thunk_FUN_05475e00(asStack_58,uVar10);
      lVar2 = FUN_05474178(asStack_58);
    }
    if (lVar2 != 0) {
      local_48 = std::
                 map<std::string,MapEventItem*,std::less<std::string>,std::allocator<std::pair<std::string_const,MapEventItem*>>>
                 ::find((map<std::string,MapEventItem*,std::less<std::string>,std::allocator<std::pair<std::string_const,MapEventItem*>>>
                         *)amStack_38,asStack_58);
      local_40 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)amStack_38);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40);
      if (bVar1) {
        puVar8 = (undefined8 *)
                 std::
                 map<std::string,MapEventItem*,std::less<std::string>,std::allocator<std::pair<std::string_const,MapEventItem*>>>
                 ::operator[]((map<std::string,MapEventItem*,std::less<std::string>,std::allocator<std::pair<std::string_const,MapEventItem*>>>
                               *)amStack_38,asStack_58);
        MapEventItem::SetParentEventPtr((MapEventItem *)this_01,(MapEventItem *)*puVar8);
        lVar2 = FUN_0451a2dc(*(undefined8 *)(this_01 + 0xd8));
        if (lVar2 == 0) {
          uVar10 = FUN_0451a2ec(*(undefined8 *)(this_01 + 0xb0));
          FUN_0451a2d4(this_01 + 0xd8,uVar10);
        }
      }
      else {
        std::string::string((string *)&local_40,"");
        MapEventItem::SetParentEvent((string *)this_01);
        std::string::~string((string *)&local_40);
        nop();
      }
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldDataManager::FindEventsUnlockedByEvent(MapEventItem const*, std::vector<MapEventItem*,
   std::allocator<MapEventItem*> >&) const */

void __thiscall
WorldDataManager::FindEventsUnlockedByEvent
          (WorldDataManager *this,MapEventItem *param_1,vector *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  MapEventItem *pMVar4;
  MapEventItem *pMVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  MapEventItem *local_10;
  long local_8;
  
  uVar8 = 0;
  uVar9 = *(undefined8 *)(this + 8);
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0451a5f8(uVar9,*(undefined8 *)(this + 0x10));
  if (lVar1 != 0) {
    do {
      uVar6 = 0;
      plVar2 = (long *)FUN_0451a60c(uVar9,uVar8);
      uVar7 = *(undefined8 *)(*plVar2 + 0x20);
      uVar3 = FUN_0451a5b0(uVar7,*(undefined8 *)(*plVar2 + 0x28));
      if (uVar3 != 0) {
        do {
          pMVar4 = (MapEventItem *)FUN_0451a5ec(uVar7,uVar6);
          pMVar5 = (MapEventItem *)FUN_0451a2dc(*(undefined8 *)(pMVar4 + 0xd8));
          if (param_1 == pMVar5) {
            local_10 = pMVar4;
            std::vector<MapEventItem*,std::allocator<MapEventItem*>>::push_back
                      ((vector<MapEventItem*,std::allocator<MapEventItem*>> *)param_2,&local_10);
            uVar9 = *(undefined8 *)(this + 8);
            plVar2 = (long *)FUN_0451a60c(uVar9,uVar8);
            uVar7 = *(undefined8 *)(*plVar2 + 0x20);
            uVar3 = FUN_0451a5b0(uVar7,*(undefined8 *)(*plVar2 + 0x28));
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar3);
      }
      uVar8 = uVar8 + 1;
      uVar3 = FUN_0451a5f8(uVar9,*(undefined8 *)(this + 0x10));
    } while (uVar8 < uVar3);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldDataManager::RebuildWorldData() */

void __thiscall WorldDataManager::RebuildWorldData(WorldDataManager *this)

{
  bool bVar1;
  char cVar2;
  WorldMapList *this_00;
  string *psVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_28;
  undefined8 local_20;
  string asStack_18 [8];
  WorldData *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  clearData(this);
  this_00 = (WorldMapList *)WorldMapUtils::GetWorldMapList();
  local_28 = FUN_0451d7cc(*(undefined8 *)(this_00 + 8));
  local_20 = FUN_0451d81c(*(undefined8 *)(this_00 + 0x10));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    cVar2 = WorldMapList::IsWorldEnabled(this_00,psVar3);
    if (cVar2 != '\0') {
      uVar4 = FUN_0547429c(psVar3);
      Sexy::StrFormat("WorldPackages_%s",asStack_18,uVar4);
      lVar5 = Sexy::ResourceManager::GetResourceGroupNamed
                        (*(ResourceManager **)(gLawnApp + 0x848),asStack_18);
      if (lVar5 != 0) {
        LawnApp::LoadGroup(gLawnApp,asStack_18);
        std::vector<std::string,std::allocator<std::string>>::push_back
                  ((vector<std::string,std::allocator<std::string>> *)(this + 0x20),asStack_18);
      }
      local_10 = (WorldData *)WorldMapUtils::LoadSerializedMapData(psVar3,0);
      std::vector<WorldData*,std::allocator<WorldData*>>::push_back
                ((vector<WorldData*,std::allocator<WorldData*>> *)(this + 8),&local_10);
      std::string::~string(asStack_18);
    }
    eastl::generic_iterator<EA::Text::FeatureLookup*,void>::operator++
              ((generic_iterator<EA::Text::FeatureLookup*,void> *)&local_28);
  }
  RemapWorldMapEvents(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldDataManager::AppendNewWorldData(WorldData*) */

void __thiscall WorldDataManager::AppendNewWorldData(WorldDataManager *this,WorldData *param_1)

{
  WorldData *local_8;
  
  local_8 = param_1;
  std::vector<WorldData*,std::allocator<WorldData*>>::push_back
            ((vector<WorldData*,std::allocator<WorldData*>> *)(this + 8),&local_8);
  return;
}

