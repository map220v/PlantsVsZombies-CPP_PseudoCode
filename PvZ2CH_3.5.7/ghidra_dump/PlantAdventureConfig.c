// Class: PlantAdventureConfig


/* PlantAdventureConfig::PlantAdventureConfig(PlantAdventureConfig const&) */

void __thiscall
PlantAdventureConfig::PlantAdventureConfig(PlantAdventureConfig *this,PlantAdventureConfig *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  this[8] = param_1[8];
  *(undefined ***)this = &PTR_GetClass_0682e320;
  *(undefined4 *)(this + 0xc) = uVar1;
  *(undefined4 *)(this + 0x10) = uVar2;
  std::vector<DungeonInfo,std::allocator<DungeonInfo>>::vector
            ((vector<DungeonInfo,std::allocator<DungeonInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<SurpriseInfo,std::allocator<SurpriseInfo>>::vector
            ((vector<SurpriseInfo,std::allocator<SurpriseInfo>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureConfig::StaticClassInit() */

void PlantAdventureConfig::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"AdventureBonusInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_042ccf6c,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SurpriseInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_042cd228,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WorldDungeonInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_042cdf8c,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DungeonInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_042ce56c,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantAdventureConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_042ce960,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAdventureConfig::StaticGetClass() */

long * PlantAdventureConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAdventureConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAdventureConfig::GetClass() const */

long * PlantAdventureConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAdventureConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAdventureConfig::PlantAdventureConfig() */

void __thiscall PlantAdventureConfig::PlantAdventureConfig(PlantAdventureConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0682e320;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  this[8] = (PlantAdventureConfig)0x0;
  *(undefined4 *)(this + 0xc) = 4;
  *(undefined4 *)(this + 0x10) = 1;
  std::vector<DungeonInfo,std::allocator<DungeonInfo>>::clear
            ((vector<DungeonInfo,std::allocator<DungeonInfo>> *)(this + 0x18));
  std::vector<SurpriseInfo,std::allocator<SurpriseInfo>>::clear
            ((vector<SurpriseInfo,std::allocator<SurpriseInfo>> *)(this + 0x30));
  return;
}


/* PlantAdventureConfig::StaticNew() */

PlantAdventureConfig * PlantAdventureConfig::StaticNew(void)

{
  PlantAdventureConfig *this;
  
  this = ::operator_new(0x48);
  PlantAdventureConfig(this);
  return this;
}


/* PlantAdventureConfig::~PlantAdventureConfig() */

void __thiscall PlantAdventureConfig::~PlantAdventureConfig(PlantAdventureConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0682e320;
  std::vector<SurpriseInfo,std::allocator<SurpriseInfo>>::~vector
            ((vector<SurpriseInfo,std::allocator<SurpriseInfo>> *)(this + 0x30));
  std::vector<DungeonInfo,std::allocator<DungeonInfo>>::~vector
            ((vector<DungeonInfo,std::allocator<DungeonInfo>> *)(this + 0x18));
  nop();
  return;
}


/* PlantAdventureConfig::~PlantAdventureConfig() */

void __thiscall PlantAdventureConfig::~PlantAdventureConfig(PlantAdventureConfig *this)

{
  ~PlantAdventureConfig(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureConfig::Refresh() */

void __thiscall PlantAdventureConfig::Refresh(PlantAdventureConfig *this)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 uVar3;
  RtObject *this_00;
  PlantAdventureConfig *pPVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x56);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
LAB_042cfe7c:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar2) {
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pPVar4 = Sexy::RtObject::Cast<PlantAdventureConfig>(this_00);
      if (pPVar4 != (PlantAdventureConfig *)0x0) {
        uVar1 = *(undefined4 *)(pPVar4 + 0x10);
        *(undefined4 *)(this + 0xc) = *(undefined4 *)(pPVar4 + 0xc);
        *(undefined4 *)(this + 0x10) = uVar1;
        std::vector<DungeonInfo,std::allocator<DungeonInfo>>::operator=
                  ((vector<DungeonInfo,std::allocator<DungeonInfo>> *)(this + 0x18),
                   (vector *)(pPVar4 + 0x18));
        std::vector<SurpriseInfo,std::allocator<SurpriseInfo>>::operator=
                  ((vector<SurpriseInfo,std::allocator<SurpriseInfo>> *)(this + 0x30),
                   (vector *)(pPVar4 + 0x30));
        this[8] = (PlantAdventureConfig)0x1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        goto LAB_042cfe7c;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureConfig::IsPlantAdventureDungenon(int) */

void __thiscall
PlantAdventureConfig::IsPlantAdventureDungenon(PlantAdventureConfig *this,int param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == -1) {
    bVar1 = false;
  }
  else {
    if (this[8] == (PlantAdventureConfig)0x0) {
      Refresh(this);
    }
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x18));
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x18));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
      if (!bVar1) break;
      lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(lVar2 + 0x20));
      while( true ) {
        lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(lVar2 + 0x20));
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
        if (!bVar1) break;
        lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        if (param_1 == *(int *)(lVar2 + 0xc)) goto LAB_042cff98;
        FUN_042cdbfc((exception_ptr *)&local_18);
      }
      FUN_042cdb9c((__normal_iterator *)&local_20);
    }
  }
LAB_042cff98:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* PlantAdventureConfig::GetDungeonListInfo() */

void PlantAdventureConfig::GetDungeonListInfo(void)

{
  PlantAdventureConfig *in_x0;
  vector<DungeonInfo,std::allocator<DungeonInfo>> *in_x8;
  
  if (in_x0[8] == (PlantAdventureConfig)0x0) {
    Refresh(in_x0);
  }
  std::vector<DungeonInfo,std::allocator<DungeonInfo>>::vector(in_x8,(vector *)(in_x0 + 0x18));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureConfig::GetDungeonBonus(int) */

void PlantAdventureConfig::GetDungeonBonus(int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  undefined4 uVar2;
  PlantAdventureConfig *this_00;
  long lVar3;
  int *piVar4;
  int in_w1;
  AdventureBonusResult *in_x8;
  undefined8 local_60;
  undefined8 local_58;
  ObstacleNonSpawnData aOStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [6];
  long local_8;
  
  this_00 = (PlantAdventureConfig *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (this_00[8] == (PlantAdventureConfig)0x0) {
    Refresh(this_00);
  }
  AdventureBonusResult::AdventureBonusResult(in_x8);
  if (in_w1 != -1) {
    this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)(this_00 + 0x18);
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this);
    local_38[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_60,(__normal_iterator *)local_38);
    if (bVar1) {
      do {
        lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
        local_58 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(lVar3 + 0x20));
LAB_042d00dc:
        lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
        local_38[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)(lVar3 + 0x20));
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)local_38);
        if (bVar1) {
          lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
          if (in_w1 != *(int *)(lVar3 + 0xc)) goto code_r0x042d00d4;
          ObstacleNonSpawnData::ObstacleNonSpawnData(aOStack_50);
          ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
                    ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)local_38);
          lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
          local_48 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)(lVar3 + 0x48));
          while( true ) {
            lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
            local_40 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)(lVar3 + 0x48));
            bVar1 = __gnu_cxx::operator!=
                              ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40);
            if (!bVar1) break;
            piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
            ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)local_38,piVar4[1],*piVar4);
            FUN_042cdc5c((exception_ptr *)&local_48);
          }
          uVar2 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)local_38);
          *(undefined4 *)(in_x8 + 8) = uVar2;
          std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
          thunk_FUN_05475e00();
          ProbabilitySet<int>::~ProbabilitySet((ProbabilitySet<int> *)local_38);
          FUN_042cdb9c((__normal_iterator *)&local_60);
        }
        else {
          FUN_042cdb9c((__normal_iterator *)&local_60);
        }
        local_38[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(this);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_60,(__normal_iterator *)local_38);
      } while (bVar1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x042d00d4:
  FUN_042cdbfc((exception_ptr *)&local_58);
  goto LAB_042d00dc;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureConfig::GetDungeonSurpriseBonus() */

void PlantAdventureConfig::GetDungeonSurpriseBonus(void)

{
  bool bVar1;
  int iVar2;
  PlantAdventureConfig *in_x0;
  long lVar3;
  SurpriseInfo *pSVar4;
  SurpriseInfo *in_x8;
  undefined8 local_60;
  undefined8 local_58;
  SurpriseInfo aSStack_50 [24];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x0[8] == (PlantAdventureConfig)0x0) {
    Refresh(in_x0);
  }
  SurpriseInfo::SurpriseInfo(aSStack_50);
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(in_x0 + 0x30));
  iVar2 = 0;
  while( true ) {
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(in_x0 + 0x30));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_60,(__normal_iterator *)&local_58);
    if (!bVar1) break;
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aPStack_38,iVar2,*(int *)(lVar3 + 4));
    FUN_042cdcbc((exception_ptr *)&local_60);
    iVar2 = iVar2 + 1;
  }
  iVar2 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)aPStack_38);
  pSVar4 = (SurpriseInfo *)FUN_042cd0c0(*(undefined8 *)(in_x0 + 0x30),(long)iVar2);
  SurpriseInfo::SurpriseInfo(in_x8,pSVar4);
  ProbabilitySet<int>::~ProbabilitySet((ProbabilitySet<int> *)aPStack_38);
  GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
            ((GridItemCardGameZombieActionData *)aSStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureConfig::GetDungeonBonusCoins(int) */

void __thiscall PlantAdventureConfig::GetDungeonBonusCoins(PlantAdventureConfig *this,int param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[8] == (PlantAdventureConfig)0x0) {
    Refresh(this);
  }
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
    uVar2 = (uint)bVar1;
    if (!bVar1) {
LAB_042d0418:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar2);
    }
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar3 + 0x20));
    while( true ) {
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar3 + 0x20));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar1) break;
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if (*(int *)(lVar3 + 0xc) == param_1) {
        uVar2 = *(uint *)(lVar3 + 4);
        goto LAB_042d0418;
      }
      FUN_042cdbfc((exception_ptr *)&local_18);
    }
    FUN_042cdb9c((__normal_iterator *)&local_20);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureConfig::GetDungeonMaxTimes(int) */

void __thiscall PlantAdventureConfig::GetDungeonMaxTimes(PlantAdventureConfig *this,int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[8] == (PlantAdventureConfig)0x0) {
    Refresh(this);
  }
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
    if (!bVar1) {
      uVar2 = 0xffffffff;
LAB_042d0528:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar2);
    }
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar3 + 0x20));
    while( true ) {
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar3 + 0x20));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar1) break;
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if (*(int *)(lVar3 + 0xc) == param_1) {
        uVar2 = *(undefined4 *)(lVar3 + 8);
        goto LAB_042d0528;
      }
      FUN_042cdbfc((exception_ptr *)&local_18);
    }
    FUN_042cdb9c((__normal_iterator *)&local_20);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureConfig::GetDungeonCDTime(int) */

void __thiscall PlantAdventureConfig::GetDungeonCDTime(PlantAdventureConfig *this,int param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[8] == (PlantAdventureConfig)0x0) {
    Refresh(this);
  }
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
    if (!bVar1) {
      iVar2 = -1;
LAB_042d0648:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar2);
    }
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar3 + 0x20));
    while( true ) {
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar3 + 0x20));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar1) break;
      piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if (piVar4[3] == param_1) {
        iVar2 = *piVar4 * 0x3c;
        goto LAB_042d0648;
      }
      FUN_042cdbfc((exception_ptr *)&local_18);
    }
    FUN_042cdb9c((__normal_iterator *)&local_20);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureConfig::GetDungeonIdByName(std::string) */

void __thiscall PlantAdventureConfig::GetDungeonIdByName(PlantAdventureConfig *this,string *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[8] == (PlantAdventureConfig)0x0) {
    Refresh(this);
  }
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
    if (!bVar1) {
      uVar3 = 0xffffffff;
LAB_042d0770:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar4 + 0x20));
    while( true ) {
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar4 + 0x20));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar1) break;
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar2 = std::operator==(param_2,(string *)(lVar4 + 0x20));
      if (cVar2 != '\0') {
        uVar3 = *(undefined4 *)(lVar4 + 0xc);
        goto LAB_042d0770;
      }
      FUN_042cdbfc((exception_ptr *)&local_18);
    }
    FUN_042cdb9c((__normal_iterator *)&local_20);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureConfig::IsPlantAdventureDungenon(std::string) */

void PlantAdventureConfig::IsPlantAdventureDungenon(PlantAdventureConfig *param_1)

{
  int iVar1;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10);
  iVar1 = GetDungeonIdByName(param_1,asStack_10);
  uVar2 = IsPlantAdventureDungenon(param_1,iVar1);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureConfig::GetDungeonBonus(std::string) */

void __thiscall PlantAdventureConfig::GetDungeonBonus(undefined8 param_1,PlantAdventureConfig *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10);
  GetDungeonIdByName(this,asStack_10);
  GetDungeonBonus((int)this);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureConfig::GetPlantRequire(int) */

void PlantAdventureConfig::GetPlantRequire(int param_1)

{
  bool bVar1;
  PlantAdventureConfig *this;
  long lVar2;
  int in_w1;
  vector<std::string,std::allocator<std::string>> *in_x8;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  this = (PlantAdventureConfig *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (this[8] == (PlantAdventureConfig)0x0) {
    Refresh(this);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
  do {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_28);
    if (!bVar1) {
      std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
                ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
                 in_x8,(vector *)avStack_20);
LAB_042d09b0:
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar2 + 0x20));
    while( true ) {
      lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar2 + 0x20));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
      if (!bVar1) break;
      lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      if (*(int *)(lVar2 + 0xc) == in_w1) {
        std::vector<std::string,std::allocator<std::string>>::vector(in_x8,(vector *)(lVar2 + 0x30))
        ;
        goto LAB_042d09b0;
      }
      FUN_042cdbfc((exception_ptr *)&local_30);
    }
    FUN_042cdb9c((__normal_iterator *)&local_38);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureConfig::GetPlantRequire(std::string) */

void __thiscall PlantAdventureConfig::GetPlantRequire(undefined8 param_1,PlantAdventureConfig *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10);
  GetDungeonIdByName(this,asStack_10);
  GetPlantRequire((int)this);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureConfig::GetDungeonNameById(int) */

void PlantAdventureConfig::GetDungeonNameById(int param_1)

{
  bool bVar1;
  PlantAdventureConfig *this;
  long lVar2;
  int in_w1;
  string *in_x8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this = (PlantAdventureConfig *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (this[8] == (PlantAdventureConfig)0x0) {
    Refresh(this);
  }
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
    if (!bVar1) {
      std::string::string(in_x8,"");
      nop();
LAB_042d0b74:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar2 + 0x20));
    while( true ) {
      lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar2 + 0x20));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar1) break;
      lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if (*(int *)(lVar2 + 0xc) == in_w1) {
        FUN_05475d88();
        goto LAB_042d0b74;
      }
      FUN_042cdbfc((exception_ptr *)&local_18);
    }
    FUN_042cdb9c((__normal_iterator *)&local_20);
  } while( true );
}


/* PlantAdventureConfig::GetMaxTeam() */

int __thiscall PlantAdventureConfig::GetMaxTeam(PlantAdventureConfig *this)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  int iVar3;
  
  if (this[8] == (PlantAdventureConfig)0x0) {
    Refresh(this);
  }
  iVar3 = *(int *)(this + 0xc);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar1 = PlayerInfo::IsMonthlyCardActivated(pPVar2,2);
  if (cVar1 != '\0') {
    iVar3 = iVar3 + *(int *)(this + 0x10);
  }
  return iVar3;
}


/* PlantAdventureConfig::TEMPNAMEPLACEHOLDERVALUE(PlantAdventureConfig const&) */

PlantAdventureConfig * __thiscall
PlantAdventureConfig::operator=(PlantAdventureConfig *this,PlantAdventureConfig *param_1)

{
  undefined4 uVar1;
  PlantAdventureConfig PVar2;
  
  PVar2 = param_1[8];
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  this[8] = PVar2;
  *(undefined4 *)(this + 0xc) = uVar1;
  std::vector<DungeonInfo,std::allocator<DungeonInfo>>::operator=
            ((vector<DungeonInfo,std::allocator<DungeonInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<SurpriseInfo,std::allocator<SurpriseInfo>>::operator=
            ((vector<SurpriseInfo,std::allocator<SurpriseInfo>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  return this;
}

