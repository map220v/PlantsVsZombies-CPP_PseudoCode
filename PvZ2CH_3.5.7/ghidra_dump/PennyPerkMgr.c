// Class: PennyPerkMgr


/* PennyPerkMgr::GetTotalCostOfSelectedPerks() */

undefined4 __thiscall PennyPerkMgr::GetTotalCostOfSelectedPerks(PennyPerkMgr *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_036bbcbc(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28));
  if (2 < iVar1) {
    return 10;
  }
  uVar2 = 5;
  if (iVar1 != 2) {
    uVar2 = 0;
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkMgr::CheatGetPerkInfoString() */

void PennyPerkMgr::CheatGetPerkInfoString(void)

{
  bool bVar1;
  long in_x0;
  GridItemPoolEntry *pGVar2;
  long lVar3;
  undefined8 uVar4;
  string *in_x8;
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [8];
  GridItemPoolEntry aGStack_18 [8];
  uint local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"Unlocked Perks: ");
  nop();
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(in_x0 + 8));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(in_x0 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    pGVar2 = (GridItemPoolEntry *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    GridItemPoolEntry::GridItemPoolEntry(aGStack_18,pGVar2);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aGStack_18);
    uVar4 = FUN_0547429c(lVar3 + 0x10);
    Sexy::StrFormat("%s lv %d, ",asStack_20,uVar4,(ulong)local_10);
    thunk_FUN_054757c0();
    std::string::~string(asStack_20);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aGStack_18);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_30);
  }
  FUN_05475ad8();
  FUN_05475ad8();
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(in_x0 + 0x20));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(in_x0 + 0x20));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    pGVar2 = (GridItemPoolEntry *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    GridItemPoolEntry::GridItemPoolEntry(aGStack_18,pGVar2);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aGStack_18);
    uVar4 = FUN_0547429c(lVar3 + 0x10);
    Sexy::StrFormat("%s lv %d, ",asStack_20,uVar4,(ulong)local_10);
    thunk_FUN_054757c0();
    std::string::~string(asStack_20);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aGStack_18);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkMgr::PennyPerkMgr() */

void __thiscall PennyPerkMgr::PennyPerkMgr(PennyPerkMgr *this)

{
  Sexy::LazySingleton<PennyPerkMgr>::LazySingleton((LazySingleton<PennyPerkMgr> *)this);
  *(undefined ***)this = &PTR__PennyPerkMgr_06680eb0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkMgr::GetSelectedPerkWarnings(MapEventSubType) */

void __thiscall PennyPerkMgr::GetSelectedPerkWarnings(undefined8 param_1,PennyPerkMgr *this)

{
  char cVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<PerkData,std::allocator<PerkData>>::empty
                    ((vector<PerkData,std::allocator<PerkData>> *)(this + 0x20));
  if (cVar1 == '\0') {
    FUN_05478178(param_1,&DAT_056f11a8,auStack_10);
    nop();
  }
  else {
    FUN_05478178(param_1,L"[PERK_SELECTION_NO_PERKS_WARNING]",auStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkMgr::CreatePerkData(std::string, int) */

void PennyPerkMgr::CreatePerkData
               (PerkData *param_1,undefined8 param_2,string *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PerkData::PerkData(param_1);
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::ToWString(param_3);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar1,0x73,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)param_1,(RtWeakPtr *)aRStack_28);
  *(undefined4 *)(param_1 + 8) = param_4;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* PennyPerkMgr::GetUnlockedPerkList() */

vector<PerkData,std::allocator<PerkData>> * PennyPerkMgr::GetUnlockedPerkList(void)

{
  long in_x0;
  vector<PerkData,std::allocator<PerkData>> *in_x8;
  
  std::vector<PerkData,std::allocator<PerkData>>::vector(in_x8,(vector *)(in_x0 + 8));
  return in_x8;
}


/* PennyPerkMgr::GetSelectedPerks() */

vector<PerkData,std::allocator<PerkData>> * PennyPerkMgr::GetSelectedPerks(void)

{
  long in_x0;
  vector<PerkData,std::allocator<PerkData>> *in_x8;
  
  std::vector<PerkData,std::allocator<PerkData>>::vector(in_x8,(vector *)(in_x0 + 0x20));
  return in_x8;
}


/* PennyPerkMgr::~PennyPerkMgr() */

void __thiscall PennyPerkMgr::~PennyPerkMgr(PennyPerkMgr *this)

{
  *(undefined ***)this = &PTR__PennyPerkMgr_06680eb0;
  std::vector<PerkData,std::allocator<PerkData>>::clear
            ((vector<PerkData,std::allocator<PerkData>> *)(this + 8));
  std::vector<PerkData,std::allocator<PerkData>>::clear
            ((vector<PerkData,std::allocator<PerkData>> *)(this + 0x20));
  std::vector<PerkData,std::allocator<PerkData>>::~vector
            ((vector<PerkData,std::allocator<PerkData>> *)(this + 0x20));
  std::vector<PerkData,std::allocator<PerkData>>::~vector
            ((vector<PerkData,std::allocator<PerkData>> *)(this + 8));
  Sexy::LazySingleton<PennyPerkMgr>::~LazySingleton((LazySingleton<PennyPerkMgr> *)this);
  return;
}


/* PennyPerkMgr::~PennyPerkMgr() */

void __thiscall PennyPerkMgr::~PennyPerkMgr(PennyPerkMgr *this)

{
  ~PennyPerkMgr(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkMgr::CalcNextPerkLevelThreshold(std::string) */

void __thiscall PennyPerkMgr::CalcNextPerkLevelThreshold(undefined8 param_1,string *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  GroupInfo *pGVar5;
  string *psVar6;
  long lVar7;
  undefined4 uVar8;
  reverse_iterator<__gnu_cxx::__normal_iterator<PerkProgressionReward*,std::vector<PerkProgressionReward,std::allocator<PerkProgressionReward>>>>
  arStack_38 [8];
  pair<std::string_const,Sexy::PILifeValueTable> apStack_30 [12];
  int local_24;
  vector<PerkProgressionReward,std::allocator<PerkProgressionReward>> avStack_20 [24];
  RiftUtils *local_8;
  
  uVar8 = 0xffffffff;
  local_8 = ___stack_chk_guard;
  RiftUtils::GetCurrentEventPerkProgression(___stack_chk_guard);
  ProfileUtils::Profile();
  std::
  vector<ZombiePushGriditemActionHandler::PushInProgress,std::allocator<ZombiePushGriditemActionHandler::PushInProgress>>
  ::rbegin();
  do {
    std::
    vector<ZombiePushGriditemActionHandler::PushInProgress,std::allocator<ZombiePushGriditemActionHandler::PushInProgress>>
    ::rend();
    bVar2 = std::operator!=(arStack_38,apStack_30);
    if (!bVar2) {
LAB_036bce7c:
      std::vector<PerkProgressionReward,std::allocator<PerkProgressionReward>>::~vector(avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar8);
    }
    pGVar5 = (GroupInfo *)
             std::
             reverse_iterator<__gnu_cxx::__normal_iterator<PerkProgressionReward*,std::vector<PerkProgressionReward,std::allocator<PerkProgressionReward>>>>
             ::operator*(arStack_38);
    Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo((GroupInfo *)apStack_30,pGVar5);
    iVar1 = local_24;
    iVar4 = GridItemRenaiStatue::GetCantPlantReason();
    if (iVar1 <= iVar4) {
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_30);
      goto LAB_036bce7c;
    }
    psVar6 = (string *)
             std::
             reverse_iterator<__gnu_cxx::__normal_iterator<PerkProgressionReward*,std::vector<PerkProgressionReward,std::allocator<PerkProgressionReward>>>>
             ::operator->(arStack_38);
    cVar3 = std::operator==(psVar6,param_2);
    if (cVar3 != '\0') {
      lVar7 = std::
              reverse_iterator<__gnu_cxx::__normal_iterator<PerkProgressionReward*,std::vector<PerkProgressionReward,std::allocator<PerkProgressionReward>>>>
              ::operator->(arStack_38);
      uVar8 = *(undefined4 *)(lVar7 + 0xc);
    }
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_30);
    std::
    reverse_iterator<__gnu_cxx::__normal_iterator<PerkProgressionReward*,std::vector<PerkProgressionReward,std::allocator<PerkProgressionReward>>>>
    ::operator++(arStack_38);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkMgr::IsPerkSupportedInLevelType(Sexy::RtWeakPtr<PennyPerkProperties>, MapEventSubType)
    */

void __thiscall
PennyPerkMgr::IsPerkSupportedInLevelType
          (undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  vector *pvVar8;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_34 = param_3;
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    if (lVar3 != 0) {
      uVar4 = FUN_036bbe98(*(undefined8 *)(lVar3 + 400));
      uVar5 = FUN_036bbee8(*(undefined8 *)(lVar3 + 0x198));
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      local_28 = std::
                 find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                           (uVar4,uVar5,lVar6 + 0x10);
      local_20[0] = FUN_036bbee8(*(undefined8 *)(lVar3 + 0x198));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)local_20);
      if (bVar1) {
        bVar1 = false;
        goto LAB_036bd13c;
      }
      iVar2 = RiftUtils::GetDifficultyForNextLevel();
      uVar7 = FUN_036bbc9c(*(undefined8 *)(lVar3 + 0x1a8),*(undefined8 *)(lVar3 + 0x1b0));
      if ((ulong)(long)iVar2 < uVar7) {
        iVar2 = RiftUtils::GetDifficultyForNextLevel();
        pvVar8 = (vector *)FUN_036bbcb0(*(undefined8 *)(lVar3 + 0x1a8),(long)iVar2);
        std::vector<std::string,std::allocator<std::string>>::vector
                  ((vector<std::string,std::allocator<std::string>> *)local_20,pvVar8);
        uVar4 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)local_20);
        uVar5 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)local_20);
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        local_30 = std::
                   find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                             (uVar4,uVar5,lVar3 + 0x10);
        local_28 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)local_20);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28)
        ;
        if (bVar1) {
          std::vector<std::string,std::allocator<std::string>>::~vector
                    ((vector<std::string,std::allocator<std::string>> *)local_20);
          bVar1 = false;
          goto LAB_036bd13c;
        }
        std::vector<std::string,std::allocator<std::string>>::~vector
                  ((vector<std::string,std::allocator<std::string>> *)local_20);
      }
    }
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(lVar3 + 0x30));
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(lVar3 + 0x30));
    local_28 = std::
               find<__gnu_cxx::__normal_iterator<MapEventSubType*,std::vector<MapEventSubType,std::allocator<MapEventSubType>>>,MapEventSubType>
                         (uVar4,uVar5,&local_34);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    local_20[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(lVar3 + 0x30));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)local_20);
    if (!bVar1) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(lVar3 + 0x48));
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(lVar3 + 0x48));
      std::
      find<__gnu_cxx::__normal_iterator<MapEventSubType*,std::vector<MapEventSubType,std::allocator<MapEventSubType>>>,MapEventSubType>
                (uVar4,uVar5,&local_34);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      std::
      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(lVar3 + 0x48));
      goto LAB_036bd13c;
    }
  }
  bVar1 = true;
LAB_036bd13c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkMgr::DeselectPerk(std::string) */

void PennyPerkMgr::DeselectPerk
               (wchar16 *param_1,string *param_2,LineBreakCategory *param_3,
               LineBreakCategory *param_4,LineBreakCategory *param_5)

{
  undefined *puVar1;
  char cVar2;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = 0;
  do {
    uVar6 = uVar5;
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = FUN_036bbcbc(uVar7,*(undefined8 *)(param_1 + 0x14));
    if (uVar5 <= uVar6) goto LAB_036bd4c8;
    pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_036bbcc8(uVar7,uVar6);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
    cVar2 = std::operator==((string *)(lVar4 + 0x10),param_2);
    uVar5 = uVar6 + 1;
  } while (cVar2 == '\0');
  pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_036bbcc8(*(undefined8 *)(param_1 + 0x10),uVar6);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
  FUN_05475d88((string *)&local_10,lVar4 + 0x18);
  cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (param_1,(wchar16 *)&local_10,param_3,param_4,param_5);
  std::string::~string((string *)&local_10);
  if (cVar2 == '\0') {
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(param_1 + 0x10));
    local_18 = __gnu_cxx::
               __normal_iterator<Sexy::RtInvokeVariant*,std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>>
               ::operator+((__normal_iterator<Sexy::RtInvokeVariant*,std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>>
                            *)&local_20,(long)(int)uVar6);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<PerkData,std::allocator<PerkData>>::erase
              ((vector<PerkData,std::allocator<PerkData>> *)(param_1 + 0x10),local_10);
    puVar1 = gMessageRouter;
    FUN_05475d88((string *)&local_10,param_2);
    MessageRouter::Broadcast<std::string&,std::string>
              ((MessageRouter *)puVar1,Message::PerkDeselected,(string *)&local_10);
    std::string::~string((string *)&local_10);
  }
LAB_036bd4c8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkMgr::DeselectAllPerks() */

void PennyPerkMgr::DeselectAllPerks(void)

{
  uint uVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  wchar16 *in_x0;
  wchar16 *pwVar5;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar6;
  long lVar7;
  __normal_iterator *p_Var8;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  string asStack_30 [8];
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar9 = *(undefined8 *)(in_x0 + 0x10);
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_036bbcbc(uVar9,*(undefined8 *)(in_x0 + 0x14));
  uVar1 = iVar4 - 1;
  if (-1 < (int)uVar1) {
    lVar10 = (long)(int)uVar1 + -1;
    p_Var8 = (__normal_iterator *)&local_18;
    lVar7 = lVar10;
    lVar12 = (long)(int)uVar1;
    while( true ) {
      lVar11 = lVar7;
      pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_036bbcc8(uVar9,lVar12);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
      FUN_05475d88(asStack_30,lVar7 + 0x18);
      FUN_05475d88((string *)&local_10,asStack_30);
      cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                        (in_x0,(wchar16 *)&local_10,(LineBreakCategory *)p_Var8,in_x3,in_x4);
      std::string::~string((string *)&local_10);
      if (cVar3 == '\0') {
        pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_036bbcc8(*(undefined8 *)(in_x0 + 0x10),lVar12)
        ;
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
        FUN_05475d88(asStack_28,lVar7 + 0x10);
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(in_x0 + 0x10));
        local_18 = __gnu_cxx::
                   __normal_iterator<Sexy::RtInvokeVariant*,std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>>
                   ::operator+((__normal_iterator<Sexy::RtInvokeVariant*,std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>>
                                *)&local_20,lVar12);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::vector<PerkData,std::allocator<PerkData>>::erase
                  ((vector<PerkData,std::allocator<PerkData>> *)(in_x0 + 0x10),local_10);
        puVar2 = gMessageRouter;
        FUN_05475d88((string *)&local_10,asStack_28);
        p_Var8 = (__normal_iterator *)&local_10;
        MessageRouter::Broadcast<std::string&,std::string>
                  ((MessageRouter *)puVar2,Message::PerkDeselected);
        std::string::~string((string *)&local_10);
        std::string::~string(asStack_28);
        std::string::~string(asStack_30);
      }
      else {
        uVar9 = FUN_0547429c(asStack_30);
        Sexy::StrFormat("Toggle%s",(string *)&local_10,uVar9);
        pwVar5 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
        EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                  (pwVar5,(wchar16 *)&local_10,(LineBreakCategory *)p_Var8,in_x3,in_x4);
        std::string::~string((string *)&local_10);
        std::string::~string(asStack_30);
      }
      if (lVar11 == lVar10 - (ulong)uVar1) break;
      uVar9 = *(undefined8 *)(in_x0 + 0x10);
      lVar7 = lVar11 + -1;
      lVar12 = lVar11;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkMgr::SelectPerk(std::string, bool, Sexy::Point) */

void __thiscall
PennyPerkMgr::SelectPerk(PennyPerkMgr *this,string *param_2,undefined1 param_3,TPoint *param_4)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  ulong uVar4;
  GridItemPoolEntry *pGVar5;
  long lVar6;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  GridItemPoolEntry aGStack_18 [16];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar2) {
    pGVar5 = (GridItemPoolEntry *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    GridItemPoolEntry::GridItemPoolEntry(aGStack_18,pGVar5);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aGStack_18);
    cVar3 = std::operator==((string *)(lVar6 + 0x10),param_2);
    if (cVar3 != '\0') goto LAB_036bd92c;
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aGStack_18);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_28);
  }
  uVar4 = FUN_036bbcbc(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28));
  if (uVar4 < 3) {
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 8));
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar2)
    {
      pGVar5 = (GridItemPoolEntry *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      GridItemPoolEntry::GridItemPoolEntry(aGStack_18,pGVar5);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aGStack_18);
      cVar3 = std::operator==((string *)(lVar6 + 0x10),param_2);
      if (cVar3 != '\0') {
        std::vector<PerkData,std::allocator<PerkData>>::push_back
                  ((vector<PerkData,std::allocator<PerkData>> *)this_00,(PerkData *)aGStack_18);
        puVar1 = gMessageRouter;
        FUN_05475d88((exception_ptr *)&local_28,param_2);
        Sexy::Point::Point((Point *)&local_20,param_4);
        MessageRouter::Broadcast<std::string&,bool,Sexy::Point&,std::string,bool,Sexy::Point>
                  ((MessageRouter *)puVar1,Message::PerkSelected,(exception_ptr *)&local_28,param_3,
                   (Point *)&local_20);
        std::string::~string((string *)&local_28);
LAB_036bd92c:
        std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aGStack_18);
        break;
      }
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aGStack_18);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_38);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkMgr::addUnlockedPerk(std::string, int) */

void __thiscall PennyPerkMgr::addUnlockedPerk(PennyPerkMgr *this,string *param_2,undefined4 param_3)

{
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  do {
    uVar5 = *(undefined8 *)(this + 8);
    uVar3 = FUN_036bbcbc(uVar5,*(undefined8 *)(this + 0x10));
    if (uVar3 <= uVar4) {
      FUN_05475d88(asStack_20,param_2);
      CreatePerkData(aRStack_18,this,asStack_20,param_3);
      std::vector<PerkData,std::allocator<PerkData>>::push_back
                ((vector<PerkData,std::allocator<PerkData>> *)(this + 8),(PerkData *)aRStack_18);
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_18);
      std::string::~string(asStack_20);
      break;
    }
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_036bbcc8(uVar5,uVar4);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    cVar1 = std::operator==(param_2,(string *)(lVar2 + 0x10));
    uVar4 = uVar4 + 1;
  } while (cVar1 == '\0');
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkMgr::SyncPerkList(std::vector<RiftPerkData, std::allocator<RiftPerkData> > const&) */

void __thiscall PennyPerkMgr::SyncPerkList(PennyPerkMgr *this,vector *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 local_28;
  undefined8 local_20;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<PerkData,std::allocator<PerkData>>::clear
            ((vector<PerkData,std::allocator<PerkData>> *)(this + 8));
  local_28 = FUN_036bc208(*(undefined8 *)param_1);
  local_20 = FUN_036bc258(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    uVar2 = ClampInt(*(int *)(lVar4 + 4) + -1,0,10);
    iVar3 = PerkMapper::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    FUN_05475d88(asStack_10,asStack_18);
    addUnlockedPerk(this,asStack_10,uVar2);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkMgr::createUnlockedPerkList(int) */

void PennyPerkMgr::createUnlockedPerkList(int param_1)

{
  bool bVar1;
  GridItemPoolEntry *pGVar2;
  long lVar3;
  reverse_iterator<__gnu_cxx::__normal_iterator<PerkProgressionReward*,std::vector<PerkProgressionReward,std::allocator<PerkProgressionReward>>>>
  arStack_40 [8];
  string asStack_38 [8];
  GridItemPoolEntry aGStack_30 [8];
  undefined4 local_28;
  vector<PerkData,std::allocator<PerkData>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<PerkData,std::allocator<PerkData>>::clear
            ((vector<PerkData,std::allocator<PerkData>> *)((PennyPerkMgr *)(ulong)(uint)param_1 + 8)
            );
  Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
  GetUnlockedPerkList();
  ProfileUtils::Profile();
  std::
  vector<ZombiePushGriditemActionHandler::PushInProgress,std::allocator<ZombiePushGriditemActionHandler::PushInProgress>>
  ::rbegin();
  while( true ) {
    std::
    vector<ZombiePushGriditemActionHandler::PushInProgress,std::allocator<ZombiePushGriditemActionHandler::PushInProgress>>
    ::rend();
    bVar1 = std::operator!=(arStack_40,aGStack_30);
    if (!bVar1) break;
    pGVar2 = (GridItemPoolEntry *)
             std::
             reverse_iterator<__gnu_cxx::__normal_iterator<PerkProgressionReward*,std::vector<PerkProgressionReward,std::allocator<PerkProgressionReward>>>>
             ::operator*(arStack_40);
    GridItemPoolEntry::GridItemPoolEntry(aGStack_30,pGVar2);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aGStack_30);
    FUN_05475d88(asStack_38,lVar3 + 0x10);
    addUnlockedPerk((PennyPerkMgr *)(ulong)(uint)param_1,asStack_38,local_28);
    std::string::~string(asStack_38);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aGStack_30);
    std::
    reverse_iterator<__gnu_cxx::__normal_iterator<PerkProgressionReward*,std::vector<PerkProgressionReward,std::allocator<PerkProgressionReward>>>>
    ::operator++(arStack_40);
  }
  std::vector<PerkData,std::allocator<PerkData>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

