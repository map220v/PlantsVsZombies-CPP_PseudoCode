// Class: LootHelpers


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LootHelpers::LevelNameToWorldName(std::string const&) */

void __thiscall LootHelpers::LevelNameToWorldName(LootHelpers *this,string *param_1)

{
  long lVar1;
  WorldDataManager *this_00;
  long lVar2;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  lVar2 = WorldDataManager::FindWorldDataByLevelName(this_00,(string *)this);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LootHelpers::GetLootSaveDataPath() */

void __thiscall LootHelpers::GetLootSaveDataPath(LootHelpers *this)

{
  long lVar1;
  ulong uVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = ProfileUtils::Profile();
  GetFolder(asStack_18,3);
  uVar2 = FUN_03e8e64c(*(undefined4 *)(lVar1 + 0x600));
  Sexy::StrFormat("loot_%d",asStack_10,uVar2 & 0xffffffff);
  std::operator+(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LootHelpers::GetLootTable() */

void LootHelpers::GetLootTable(void)

{
  ResourceInfo *pRVar1;
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  RtName aRStack_28 [16];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = gDownloadedLootTable;
  if (gDownloadedLootTable == (ResourceInfo *)0x0) {
    Sexy::RtName::RtName(aRStack_28,L"DefaultLootTable");
    Sexy::RtName::RtName(aRStack_18,L"LevelModules");
    Sexy::RtId::RtId(aRStack_38,aRStack_28,aRStack_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_38);
    Sexy::RtName::~RtName(aRStack_18);
    Sexy::RtName::~RtName(aRStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LootHelpers::SaveLocalLootState() */

void LootHelpers::SaveLocalLootState(void)

{
  LootHelpers *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (LootHelpers *)Sexy::LazySingleton<PVZDB>::GetInstance();
  GetLootSaveDataPath(this);
  PVZDB::SavePackageForTableToFile((PVZDB *)this,0x3d,asStack_10,0,1);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LootHelpers::GetLootSaveData() */

void LootHelpers::GetLootSaveData(void)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ResourceInfo *pRVar7;
  long lVar8;
  long extraout_x0;
  PVZDB *pPVar9;
  RtDbTable *this;
  LootHelpers *pLVar10;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_40 [8];
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_40);
  uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar6,0x3d);
  bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
  if (bVar2) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_40,(RtWeakPtr *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_38);
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_40);
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_30);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_40,(RtWeakPtr *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_40);
  }
  if (cVar3 != '\0') {
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
    iVar1 = *(int *)(lVar8 + 8);
    lVar8 = ProfileUtils::Profile();
    iVar4 = FUN_03e8e64c(*(undefined4 *)(lVar8 + 0x600));
    if (iVar1 != iVar4) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aIStack_28);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_40,(RtWeakPtr *)aIStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_28);
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_40);
      goto joined_r0x03e8f9c4;
    }
  }
  cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_40);
joined_r0x03e8f9c4:
  pLVar10 = gLawnApp;
  if (cVar3 == '\0') {
    GetLootSaveDataPath(gLawnApp);
    cVar3 = Sexy::SexyAppBase::FileExists((SexyAppBase *)pLVar10,(string *)aIStack_28);
    std::string::~string((string *)aIStack_28);
    if (cVar3 != '\0') {
      pLVar10 = (LootHelpers *)Sexy::LazySingleton<PVZDB>::GetInstance();
      GetLootSaveDataPath(pLVar10);
      PVZDB::LoadPackageForTableFromFile((PVZDB *)pLVar10,0x3d,aIStack_28,0,1);
      std::string::~string((string *)aIStack_28);
      uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable(aIStack_28,uVar6,0x3d);
      bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
      if (bVar2) {
        Sexy::RtDbTable::Iterator::operator*(aIStack_28);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_40,(RtWeakPtr *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        Sexy::RtId::~RtId(aRStack_38);
      }
      else {
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_30);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_40,(RtWeakPtr *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
    }
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_40);
    if (cVar3 == '\0') {
      lVar8 = LootSaveData::StaticGetClass();
      FUN_03e8e584(*(undefined8 *)(lVar8 + 0x18));
      nop();
      lVar8 = ProfileUtils::Profile();
      uVar5 = FUN_03e8e64c(*(undefined4 *)(lVar8 + 0x600));
      *(undefined4 *)(extraout_x0 + 8) = uVar5;
      pPVar9 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
      this = (RtDbTable *)PVZDB::GetTable(pPVar9,0x3d);
      Sexy::RtDbTable::Reset(this,false);
      Sexy::RtDbTable::AllocId(aIStack_28,this,extraout_x0,1,1,0);
      Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                ((RtWeakPtr<CthulhuPropertySheet> *)a_Stack_40,(RtId *)aIStack_28);
      Sexy::RtId::~RtId((RtId *)aIStack_28);
    }
  }
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LootHelpers::LootToCoinValue(Loot) */

void LootHelpers::LootToCoinValue(int param_1,undefined8 param_2,size_t param_3)

{
  string *psVar1;
  long extraout_x0;
  undefined4 uVar2;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar2 = 0;
  local_8 = ___stack_chk_guard;
  if (param_1 - 1U < 3) {
    Set8BytesTo0(asStack_18);
    if ((param_1 == 2) || (param_1 == 3)) {
      std::string::append(asStack_18,"coin_gold",param_3);
    }
    else {
      std::string::append(asStack_18,"coin_silver",param_3);
    }
    psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    uVar2 = *(undefined4 *)(extraout_x0 + 0x94);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LootHelpers::Drop(Loot, Sexy::SexyVector3 const&) */

void LootHelpers::Drop(int param_1,string *param_2)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte *__n;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  SexyVector3 *pSVar6;
  bool local_41;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  DVec3 aDStack_30 [4];
  undefined4 local_2c;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = &switchD_03e90508::switchdataD_0575296c;
  switch(param_1) {
  case 1:
  case 2:
  case 3:
    Set8BytesTo0((string *)&local_20);
    if ((param_1 == 2) || (param_1 == 3)) {
      std::string::append((string *)&local_20,"coin_gold",(size_t)__n);
    }
    else {
      std::string::append((string *)&local_20,"coin_silver",(size_t)__n);
    }
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Board::AddCoin(*(SexyVector3 **)(gLawnApp + 0x9f0),param_2);
    std::string::~string((string *)&local_20);
    break;
  default:
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)0x0;
    goto LAB_03e904c8;
  case 0xe:
  case 0xf:
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Board::AddPresent(*(Board **)(gLawnApp + 0x9f0),(SexyVector3 *)param_2,param_1 == 0xe)
    ;
    break;
  case 0x10:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    cVar2 = LawnApp::HasPlayerUnlockedFeature(gLawnApp,0x1e);
    if (cVar2 != '\0') {
      std::string::string((string *)aDStack_30,"powerupwizardfinger");
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)&local_20,(string *)aDStack_30);
      std::string::~string((string *)aDStack_30);
      nop();
    }
    cVar2 = LawnApp::HasPlayerUnlockedFeature(gLawnApp,0x20);
    if (cVar2 != '\0') {
      std::string::string((string *)aDStack_30,"poweruppinchzombie");
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)&local_20,(string *)aDStack_30);
      std::string::~string((string *)aDStack_30);
      nop();
    }
    cVar2 = LawnApp::HasPlayerUnlockedFeature(gLawnApp,0x1f);
    if (cVar2 != '\0') {
      std::string::string((string *)aDStack_30,"powerupflickzombie");
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)&local_20,(string *)aDStack_30);
      std::string::~string((string *)aDStack_30);
      nop();
    }
    cVar2 = LawnApp::HasPlayerUnlockedFeature(gLawnApp,0x22);
    if (cVar2 != '\0') {
      std::string::string((string *)aDStack_30,"poweruptacticalcuke");
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)&local_20,(string *)aDStack_30);
      std::string::~string((string *)aDStack_30);
      nop();
    }
    pSVar6 = *(SexyVector3 **)(gLawnApp + 0x9f0);
    iVar3 = Sexy::Rand();
    uVar4 = FUN_03e8e6e4(local_20,local_18);
    uVar1 = 0;
    if (uVar4 != 0) {
      uVar1 = (ulong)(long)iVar3 / uVar4;
    }
    FUN_03e8e6f0(local_20,(long)iVar3 - uVar1 * uVar4);
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Board::AddPowerupCollectable(pSVar6,param_2);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)&local_20);
  }
  if ((this != (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)0x0) &&
     (puVar5 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this), 490.0 <= *(float *)((long)puVar5 + 4))) {
    local_38 = *(undefined4 *)(puVar5 + 1);
    _local_40 = CONCAT44(0x43f50000,(int)*puVar5);
    (**(code **)(*(long *)this + 0x78))(this,&local_40);
    iVar3 = FUN_03e8e650(*(undefined4 *)(this + 0x188));
    if (iVar3 == 1) {
      DVec3::DVec3(aDStack_30);
      DVec3::DVec3((DVec3 *)&local_20);
      Collectable::GetMotionNewtonianValues
                ((Collectable *)this,(SexyVector3 *)aDStack_30,(SexyVector3 *)&local_20,&local_41);
      local_2c = 0;
      Collectable::SetMotionNewtonian
                ((Collectable *)this,(SexyVector3 *)aDStack_30,(SexyVector3 *)&local_20,local_41);
    }
  }
LAB_03e904c8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LootHelpers::GetLootEntriesForLevel(std::string const&, std::vector<LootTableEntry const*,
   std::allocator<LootTableEntry const*> >&) */

void LootHelpers::GetLootEntriesForLevel(string *param_1,vector *param_2)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  LootTableEntry *pLVar5;
  ulong uVar6;
  ProfileMgr *this;
  PlayerInfo *pPVar7;
  ulong uVar8;
  undefined8 uVar9;
  string asStack_18 [8];
  LootTableEntry *local_10;
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  uVar8 = 0;
  LevelNameToWorldName((LootHelpers *)param_1,___stack_chk_guard);
  lVar3 = GetLootTable();
  uVar9 = *(undefined8 *)(lVar3 + 8);
  lVar4 = FUN_03e8e694(uVar9,*(undefined8 *)(lVar3 + 0x10));
  if (lVar4 != 0) {
    do {
      pLVar5 = (LootTableEntry *)FUN_03e8e6c4(uVar9,uVar8);
      bVar1 = std::operator==((string *)(pLVar5 + 0x20),"");
      if ((bVar1) || (cVar2 = std::operator==((string *)(pLVar5 + 0x20),asStack_18), cVar2 != '\0'))
      {
        bVar1 = std::operator==((string *)(pLVar5 + 0x28),"");
        if (!bVar1) {
          this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
          cVar2 = ProfileUtils::HasCompletedLevel((string *)(pLVar5 + 0x28),false,pPVar7);
          if (cVar2 == '\0') goto LAB_03e914b8;
        }
        local_10 = pLVar5;
        std::vector<LootTableEntry_const*,std::allocator<LootTableEntry_const*>>::push_back
                  ((vector<LootTableEntry_const*,std::allocator<LootTableEntry_const*>> *)param_2,
                   &local_10);
      }
LAB_03e914b8:
      uVar8 = uVar8 + 1;
      uVar9 = *(undefined8 *)(lVar3 + 8);
      uVar6 = FUN_03e8e694(uVar9,*(undefined8 *)(lVar3 + 0x10));
    } while (uVar8 < uVar6);
  }
  std::string::~string(asStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LootHelpers::GenerateLootForLevel(std::string const&, double, std::vector<Loot,
   std::allocator<Loot> >&) */

void LootHelpers::GenerateLootForLevel(string *param_1,double param_2,vector *param_3)

{
  bool bVar1;
  int iVar2;
  LootSaveData *this;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  string *psVar9;
  float fVar10;
  double dVar11;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (LootSaveData *)GetLootSaveData();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  GetLootEntriesForLevel(param_1,(vector *)&local_20);
  uVar8 = 0;
  while( true ) {
    uVar7 = local_20;
    uVar3 = FUN_03e8e6d0(local_20,local_18);
    if (uVar3 <= uVar8) break;
    puVar4 = (undefined8 *)FUN_03e8e6dc(uVar7,uVar8);
    lVar5 = LootSaveData::GetLootEntryData(this,(string *)*puVar4);
    *(double *)(lVar5 + 8) = *(double *)(lVar5 + 8) + param_2;
    uVar8 = uVar8 + 1;
  }
  do {
    bVar1 = false;
    for (uVar8 = 0; uVar8 < uVar3; uVar8 = uVar8 + 1) {
      puVar4 = (undefined8 *)FUN_03e8e6dc(uVar7,uVar8);
      psVar9 = (string *)*puVar4;
      lVar5 = LootSaveData::GetLootEntryData(this,psVar9);
      if (*(double *)(lVar5 + 8) <= *(double *)(lVar5 + 0x10)) {
        if (*(double *)(lVar5 + 0x18) < *(double *)(lVar5 + 8)) goto LAB_03e91694;
      }
      else {
        iVar6 = 0;
        iVar2 = RandRangeInt(*(int *)(psVar9 + 0xc),*(int *)(psVar9 + 0x10));
        if (0 < iVar2) {
          do {
            iVar6 = iVar6 + 1;
            std::vector<Loot,std::allocator<Loot>>::push_back
                      ((vector<Loot,std::allocator<Loot>> *)param_3,(Loot *)(psVar9 + 8));
          } while (iVar6 != iVar2);
        }
        *(undefined8 *)(lVar5 + 0x10) = 0x47efffffe0000000;
        if (*(double *)(lVar5 + 0x18) < *(double *)(lVar5 + 8)) {
LAB_03e91694:
          bVar1 = true;
          fVar10 = (float)RandRangeFloat(0.0,(float)*(double *)(psVar9 + 0x18));
          dVar11 = *(double *)(psVar9 + 0x18);
          *(double *)(lVar5 + 0x10) = (double)fVar10 + *(double *)(lVar5 + 0x18);
          *(double *)(lVar5 + 0x18) = dVar11 + *(double *)(lVar5 + 0x18);
        }
      }
      uVar7 = local_20;
      uVar3 = FUN_03e8e6d0(local_20,local_18);
    }
    if (!bVar1) {
      SaveLocalLootState();
      std::vector<LootTableEntry_const*,std::allocator<LootTableEntry_const*>>::~vector
                ((vector<LootTableEntry_const*,std::allocator<LootTableEntry_const*>> *)&local_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}

