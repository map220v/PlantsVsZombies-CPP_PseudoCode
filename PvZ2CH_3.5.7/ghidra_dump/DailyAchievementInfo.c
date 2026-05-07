// Class: DailyAchievementInfo


/* DailyAchievementInfo::~DailyAchievementInfo() */

void __thiscall DailyAchievementInfo::~DailyAchievementInfo(DailyAchievementInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06803080;
  FinalPool::~FinalPool((FinalPool *)(this + 0x130));
  FinalPool::~FinalPool((FinalPool *)(this + 0x110));
  FinalPool::~FinalPool((FinalPool *)(this + 0xf0));
  FinalPool::~FinalPool((FinalPool *)(this + 0xd0));
  FinalPool::~FinalPool((FinalPool *)(this + 0xb0));
  std::vector<PoolContent,std::allocator<PoolContent>>::~vector
            ((vector<PoolContent,std::allocator<PoolContent>> *)(this + 0x98));
  std::vector<PoolContent,std::allocator<PoolContent>>::~vector
            ((vector<PoolContent,std::allocator<PoolContent>> *)(this + 0x80));
  std::vector<PoolContent,std::allocator<PoolContent>>::~vector
            ((vector<PoolContent,std::allocator<PoolContent>> *)(this + 0x68));
  std::vector<PoolContent,std::allocator<PoolContent>>::~vector
            ((vector<PoolContent,std::allocator<PoolContent>> *)(this + 0x50));
  std::vector<PoolContent,std::allocator<PoolContent>>::~vector
            ((vector<PoolContent,std::allocator<PoolContent>> *)(this + 0x38));
  std::vector<AchievementConfig,std::allocator<AchievementConfig>>::~vector
            ((vector<AchievementConfig,std::allocator<AchievementConfig>> *)(this + 0x20));
  std::vector<AchievementItem,std::allocator<AchievementItem>>::~vector
            ((vector<AchievementItem,std::allocator<AchievementItem>> *)(this + 8));
  nop();
  return;
}


/* DailyAchievementInfo::~DailyAchievementInfo() */

void __thiscall DailyAchievementInfo::~DailyAchievementInfo(DailyAchievementInfo *this)

{
  ~DailyAchievementInfo(this);
  AK::FreeHook(this);
  return;
}


/* DailyAchievementInfo::getSpecificPlantPool() */

DailyAchievementInfo * __thiscall
DailyAchievementInfo::getSpecificPlantPool(DailyAchievementInfo *this)

{
  return this + 0xd0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAchievementInfo::StaticClassInit() */

void DailyAchievementInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"RewardContent");
    (*pcVar3)(plVar2,asStack_10,FUN_041d88d8,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"AchievementConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_041d9728,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PoolContent");
    (*pcVar3)(plVar2,asStack_10,FUN_041d8714,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"AchievementItem");
    (*pcVar3)(plVar2,asStack_10,FUN_041d9fe8,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DailyAchievementInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_041da414,0x150,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DailyAchievementInfo::StaticGetClass() */

long * DailyAchievementInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DailyAchievementInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DailyAchievementInfo::GetClass() const */

long * DailyAchievementInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"DailyAchievementInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAchievementInfo::getRewardSkuByCertainPool(FinalPool&, std::string const&) */

void __thiscall
DailyAchievementInfo::getRewardSkuByCertainPool
          (DailyAchievementInfo *this,FinalPool *param_1,string *param_2)

{
  bool bVar1;
  int iVar2;
  PennyGiftBoxRankItemData *pPVar3;
  PoolResult *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::Rand(*(int *)(param_1 + 0x18));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_1);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      PoolResult::PoolResult(in_x8);
LAB_041d9af0:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pPVar3 = (PennyGiftBoxRankItemData *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((*(int *)(pPVar3 + 8) <= iVar2) && (iVar2 <= *(int *)(pPVar3 + 0xc))) {
      PennyGiftBoxRankItemData::PennyGiftBoxRankItemData((PennyGiftBoxRankItemData *)in_x8,pPVar3);
      goto LAB_041d9af0;
    }
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAchievementInfo::getAchievementConfigByDate(int) */

void __thiscall
DailyAchievementInfo::getAchievementConfigByDate(DailyAchievementInfo *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_041dac60(uVar2,uVar3,local_24);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
  }
  else {
    uVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAchievementInfo::getAchievementItemById(int) */

void __thiscall DailyAchievementInfo::getAchievementItemById(DailyAchievementInfo *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_041daee0(uVar2,uVar3,local_24);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
  }
  else {
    uVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* DailyAchievementInfo::DailyAchievementInfo() */

void __thiscall DailyAchievementInfo::DailyAchievementInfo(DailyAchievementInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06803080;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  FinalPool::FinalPool((FinalPool *)(this + 0xb0));
  FinalPool::FinalPool((FinalPool *)(this + 0xd0));
  FinalPool::FinalPool((FinalPool *)(this + 0xf0));
  FinalPool::FinalPool((FinalPool *)(this + 0x110));
  FinalPool::FinalPool((FinalPool *)(this + 0x130));
  return;
}


/* DailyAchievementInfo::StaticNew() */

DailyAchievementInfo * DailyAchievementInfo::StaticNew(void)

{
  DailyAchievementInfo *this;
  
  this = ::operator_new(0x150);
  DailyAchievementInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAchievementInfo::getRewardByConfig(int, int, std::string const&, int const&, std::string
   const&) */

void __thiscall
DailyAchievementInfo::getRewardByConfig
          (DailyAchievementInfo *this,int param_1,int param_2,string *param_3,int *param_4,
          string *param_5)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  LawnApp *this_01;
  bool bVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *pPVar4;
  PlayerInfo *this_02;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  undefined8 *puVar10;
  DownloadInfo *pDVar11;
  BoxOpenUI *pBVar12;
  NameMapperBase *this_03;
  ActivityConfig *pAVar13;
  long lVar14;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  string asStack_a8 [8];
  string asStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  DownloadInfo aDStack_88 [8];
  undefined1 auStack_80 [16];
  int local_70;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_68 [48];
  undefined8 local_38 [2];
  int local_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
  local_b4 = param_1;
  pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_b0 = FUN_041db160(uVar5,uVar6,&local_b4);
  local_38[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)local_38);
  if (!bVar1) goto LAB_041dc200;
  lVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
  uVar5 = *(undefined8 *)(lVar7 + 0x18);
  lVar8 = FUN_041d8554(uVar5,*(undefined8 *)(lVar7 + 0x20));
  lVar7 = 0;
  do {
    lVar14 = lVar7;
    if (lVar14 == lVar8) goto LAB_041dc200;
    piVar9 = (int *)FUN_041d8564(uVar5,lVar14);
    lVar7 = lVar14 + 1;
  } while (*piVar9 != param_2);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_68);
  puVar10 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
  pDVar11 = (DownloadInfo *)FUN_041d856c(*puVar10,lVar14);
  Lua::DownloadInfo::DownloadInfo(aDStack_88,pDVar11);
  FUN_05475d88(asStack_a8,auStack_80);
  bVar1 = std::operator==(asStack_a8,"gold");
  if (bVar1) {
    PlayerInfo::AddCoins(this_02,local_70);
  }
  else {
    bVar1 = std::operator==(asStack_a8,"gem");
    if (bVar1) {
      PlayerInfo::AddGems(this_02,local_70,true);
    }
    else {
      bVar1 = std::operator==(asStack_a8,"drop");
      if (!bVar1) {
        bVar1 = std::operator==(asStack_a8,"plant_piece");
        if (bVar1) {
          cVar2 = FUN_0547419c(param_5);
          if (cVar2 == '\0') {
            this_03 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
            iVar3 = NameMapperBase::GetIdForName(this_03,param_5);
            ProfileChangeItemAmount(iVar3,*param_4,false);
            GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
            piVar9 = (int *)std::
                            map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                            ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                          *)amStack_68,param_3);
            *piVar9 = *param_4;
          }
        }
        else {
          bVar1 = std::operator==(asStack_a8,"avatar_box");
          if (bVar1) {
            cVar2 = FUN_0547419c(param_3);
            if (cVar2 == '\0') {
              std::string::string((string *)local_38,"avatar_piece");
              PlayerInfo::AddRewardByTypeName(this_02,(string *)local_38,param_3,*param_4,false);
              std::string::~string((string *)local_38);
              nop();
              pAVar13 = (ActivityConfig *)LawnApp::GetActivityConfig();
              cVar2 = ActivityConfig::IsDailyAchievementActivated(pAVar13);
              if (cVar2 != '\0') {
                PlayerInfo::AddDailyAchievementRecord(this_02,0x27dc,-*param_4);
              }
LAB_041dc7c0:
              piVar9 = (int *)std::
                              map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                              ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                            *)amStack_68,param_3);
              *piVar9 = *param_4;
            }
            else if (0 < local_70) {
              iVar3 = 0;
              do {
                std::string::string((string *)&local_90,"avatar_box");
                getRewardSkuByCertainPool(this,(FinalPool *)(this + 0xf0),(string *)&local_90);
                std::string::~string((string *)&local_90);
                nop();
                if (local_28 != 0) {
                  std::string::string((string *)&local_90,"avatar_piece");
                  PlayerInfo::AddRewardByTypeName
                            (this_02,(string *)&local_90,(string *)local_38,local_28,false);
                  std::string::~string((string *)&local_90);
                  nop();
                  pAVar13 = (ActivityConfig *)LawnApp::GetActivityConfig();
                  cVar2 = ActivityConfig::IsDailyAchievementActivated(pAVar13);
                  if (cVar2 != '\0') {
                    PlayerInfo::AddDailyAchievementRecord(this_02,0x27dc,-local_28);
                  }
                  local_98 = std::
                             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                             ::find((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                     *)amStack_68,(string *)local_38);
                  local_90 = std::
                             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)amStack_68);
                  bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,
                                            (rbtree_iterator *)&local_90);
                  if (bVar1) {
                    piVar9 = (int *)std::
                                    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                    ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                                  *)amStack_68,(string *)local_38);
                    *piVar9 = *piVar9 + local_28;
                  }
                  else {
                    piVar9 = (int *)std::
                                    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                    ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                                  *)amStack_68,(string *)local_38);
                    *piVar9 = local_28;
                  }
                }
                iVar3 = iVar3 + 1;
                std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                          ((pair<std::string_const,Sexy::PILifeValueTable> *)local_38);
              } while (iVar3 < local_70);
            }
          }
          else {
            bVar1 = std::operator==(asStack_a8,"plant_box");
            if (bVar1) {
              cVar2 = FUN_0547419c(param_3);
              if (cVar2 == '\0') {
                std::string::string((string *)local_38,"plant_piece");
                PlayerInfo::AddRewardByTypeName(this_02,(string *)local_38,param_3,*param_4,false);
                std::string::~string((string *)local_38);
                nop();
                pAVar13 = (ActivityConfig *)LawnApp::GetActivityConfig();
                cVar2 = ActivityConfig::IsDailyAchievementActivated(pAVar13);
                if (cVar2 != '\0') {
                  PlayerInfo::AddDailyAchievementRecord(this_02,0x27d9,-*param_4);
                }
                goto LAB_041dc7c0;
              }
              if (0 < local_70) {
                local_b8 = 0;
                do {
                  std::string::string((string *)&local_90,"plant_box");
                  getRewardSkuByCertainPool(this,(FinalPool *)(this + 0x110),(string *)&local_90);
                  std::string::~string((string *)&local_90);
                  nop();
                  if (local_28 != 0) {
                    std::string::string((string *)&local_90,"plant_piece");
                    PlayerInfo::AddRewardByTypeName
                              (this_02,(string *)&local_90,(string *)local_38,local_28,false);
                    std::string::~string((string *)&local_90);
                    nop();
                    pAVar13 = (ActivityConfig *)LawnApp::GetActivityConfig();
                    cVar2 = ActivityConfig::IsDailyAchievementActivated(pAVar13);
                    if (cVar2 != '\0') {
                      PlayerInfo::AddDailyAchievementRecord(this_02,0x27d9,-local_28);
                    }
                    local_98 = std::
                               map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                               ::find((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                       *)amStack_68,(string *)local_38);
                    local_90 = std::
                               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      *)amStack_68);
                    bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,
                                              (rbtree_iterator *)&local_90);
                    if (bVar1) {
                      piVar9 = (int *)std::
                                      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                      ::operator[]((
                                                  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                                  *)amStack_68,(string *)local_38);
                      *piVar9 = *piVar9 + local_28;
                    }
                    else {
                      piVar9 = (int *)std::
                                      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                      ::operator[]((
                                                  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                                  *)amStack_68,(string *)local_38);
                      *piVar9 = local_28;
                    }
                  }
                  local_b8 = local_b8 + 1;
                  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                            ((pair<std::string_const,Sexy::PILifeValueTable> *)local_38);
                } while (local_b8 < local_70);
              }
            }
            else {
              bVar1 = std::operator==(asStack_a8,"accessory_box");
              if ((bVar1) && (0 < local_70)) {
                local_b8 = 0;
                do {
                  std::string::string((string *)&local_90,"accessory_box");
                  getRewardSkuByCertainPool(this,(FinalPool *)(this + 0x130),(string *)&local_90);
                  std::string::~string((string *)&local_90);
                  nop();
                  if (local_28 != 0) {
                    uVar5 = FUN_05474184((string *)local_38);
                    FUN_05475ffc((string *)&local_90,(string *)local_38,0x10,uVar5);
                    std::operator+((string *)&local_90,"_piece");
                    std::string::~string((string *)&local_90);
                    std::string::string((string *)&local_90,"accessory_piece");
                    PlayerInfo::AddRewardByTypeName
                              (this_02,(string *)&local_90,asStack_a0,local_28,false);
                    std::string::~string((string *)&local_90);
                    nop();
                    pAVar13 = (ActivityConfig *)LawnApp::GetActivityConfig();
                    cVar2 = ActivityConfig::IsDailyAchievementActivated(pAVar13);
                    if (cVar2 != '\0') {
                      PlayerInfo::AddDailyAchievementRecord(this_02,0x27da,-local_28);
                    }
                    local_98 = std::
                               map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                               ::find((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                       *)amStack_68,(string *)local_38);
                    local_90 = std::
                               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      *)amStack_68);
                    bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,
                                              (rbtree_iterator *)&local_90);
                    if (bVar1) {
                      piVar9 = (int *)std::
                                      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                      ::operator[]((
                                                  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                                  *)amStack_68,(string *)local_38);
                      *piVar9 = *piVar9 + local_28;
                    }
                    else {
                      piVar9 = (int *)std::
                                      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                      ::operator[]((
                                                  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                                  *)amStack_68,(string *)local_38);
                      *piVar9 = local_28;
                    }
                    std::string::~string(asStack_a0);
                  }
                  local_b8 = local_b8 + 1;
                  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                            ((pair<std::string_const,Sexy::PILifeValueTable> *)local_38);
                } while (local_b8 < local_70);
              }
            }
          }
        }
      }
    }
  }
  lVar7 = FUN_05474374(asStack_a8,&DAT_05624270,0);
  if ((lVar7 != -1) &&
     (lVar7 = std::
              map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
              ::size((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                      *)amStack_68), lVar7 != 0)) {
    lVar7 = FUN_05474184(asStack_a8);
    this_01 = gLawnApp;
    FUN_05475ffc((string *)local_38,asStack_a8,0,lVar7 + -4);
    LawnApp::ShowBoxOpenUI(this_01,(string *)local_38);
    std::string::~string((string *)local_38);
    pBVar12 = (BoxOpenUI *)LawnApp::getBoxOpenUI(gLawnApp);
    BoxOpenUI::SetContentList(pBVar12,(map *)amStack_68);
    pBVar12 = (BoxOpenUI *)LawnApp::getBoxOpenUI(gLawnApp);
    BoxOpenUI::StartPlayingAnimation(pBVar12);
  }
  PlayerInfo::FinishDailyAchievement(this_02,local_b4,param_2);
  pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::Save(pPVar4,false,false);
  MessageRouter::Post<int,int,int,int>
            ((MessageRouter *)gMessageRouter,Message::DailyAchievementReceived,local_b4,param_2);
  MessageRouter::Post<int,int,int,int>
            ((MessageRouter *)gMessageRouter,Message::DailyAchievement,local_b4,param_2);
  std::string::~string(asStack_a8);
  Lua::DownloadInfo::~DownloadInfo(aDStack_88);
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)amStack_68);
LAB_041dc200:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAchievementInfo::initSpecificAvatarPool() */

void __thiscall DailyAchievementInfo::initSpecificAvatarPool(DailyAchievementInfo *this)

{
  bool bVar1;
  int iVar2;
  ProfileMgr *this_00;
  string *psVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_58;
  undefined8 local_50;
  string asStack_48 [8];
  string asStack_40 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  PoolResult aPStack_20 [8];
  int local_18;
  int local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  psVar3 = (string *)ProfileMgr::GetCurrentProfile(this_00);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x38));
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x38));
  iVar6 = 0;
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1) {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    FUN_05475d88(asStack_48,lVar4);
    uVar5 = FUN_05474184(asStack_48);
    FUN_05475ffc(asStack_40,asStack_48,0xd,uVar5);
    iVar2 = PlayerInfo::GetPlantAvatar(psVar3,SUB81(asStack_40,0));
    if (iVar2 == 0) {
      std::string::~string(asStack_40);
      std::string::~string(asStack_48);
      iVar2 = iVar6;
    }
    else {
      PoolResult::PoolResult(aPStack_20);
      local_10 = *(undefined4 *)(lVar4 + 8);
      thunk_FUN_05475e00(aPStack_20,asStack_48);
      iVar2 = iVar6 + *(int *)(lVar4 + 0xc);
      local_18 = iVar6;
      local_14 = iVar2;
      std::vector<PoolResult,std::allocator<PoolResult>>::push_back
                ((vector<PoolResult,std::allocator<PoolResult>> *)avStack_38,aPStack_20);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aPStack_20);
      std::string::~string(asStack_40);
      std::string::~string(asStack_48);
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_58);
    iVar6 = iVar2;
  }
  std::vector<PoolResult,std::allocator<PoolResult>>::operator=
            ((vector<PoolResult,std::allocator<PoolResult>> *)(this + 0xb0),(vector *)avStack_38);
  *(int *)(this + 200) = iVar6;
  std::vector<PoolResult,std::allocator<PoolResult>>::~vector
            ((vector<PoolResult,std::allocator<PoolResult>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAchievementInfo::initSpecificPlantPool() */

void __thiscall DailyAchievementInfo::initSpecificPlantPool(DailyAchievementInfo *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar4;
  undefined8 uVar5;
  string *psVar6;
  PlantType *this_02;
  long lVar7;
  int iVar8;
  int iVar9;
  undefined8 local_60;
  undefined8 local_58;
  string asStack_50 [8];
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  PoolResult aPStack_20 [8];
  int local_18;
  int local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x50));
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x50));
  iVar9 = 0;
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_60,(__normal_iterator *)&local_58);
    if (!bVar1) {
      std::vector<PoolResult,std::allocator<PoolResult>>::operator=
                ((vector<PoolResult,std::allocator<PoolResult>> *)(this + 0xd0),(vector *)avStack_38
                );
      *(int *)(this + 0xe8) = iVar9;
      std::vector<PoolResult,std::allocator<PoolResult>>::~vector
                ((vector<PoolResult,std::allocator<PoolResult>> *)avStack_38);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    FUN_05475d88(asStack_50,lVar4);
    uVar5 = FUN_05474184(asStack_50);
    FUN_05475ffc(asStack_48,asStack_50,0xc,uVar5);
    psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
    cVar2 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_48);
    if (cVar2 == '\0') {
LAB_041dce44:
      PoolResult::PoolResult(aPStack_20);
      local_10 = *(undefined4 *)(lVar4 + 8);
      thunk_FUN_05475e00(aPStack_20,asStack_50);
      iVar8 = iVar9 + *(int *)(lVar4 + 0xc);
      local_18 = iVar9;
      local_14 = iVar8;
      std::vector<PoolResult,std::allocator<PoolResult>>::push_back
                ((vector<PoolResult,std::allocator<PoolResult>> *)avStack_38,aPStack_20);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aPStack_20);
    }
    else {
      iVar3 = PlayerInfo::GetPlantStarLevel(this_01,asStack_48,false);
      this_02 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      lVar7 = PlantType::GetProps(this_02);
      iVar8 = iVar9;
      if (iVar3 < *(int *)(lVar7 + 0x2c)) goto LAB_041dce44;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    std::string::~string(asStack_48);
    std::string::~string(asStack_50);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_60);
    iVar9 = iVar8;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAchievementInfo::initBoxAvatarPool() */

void __thiscall DailyAchievementInfo::initBoxAvatarPool(DailyAchievementInfo *this)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  undefined8 local_48;
  undefined8 local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  PoolResult aPStack_20 [8];
  int local_18;
  int local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x68));
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x68));
  iVar4 = 0;
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar2) {
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    PoolResult::PoolResult(aPStack_20);
    local_10 = *(undefined4 *)(lVar3 + 8);
    thunk_FUN_05475e00(aPStack_20,lVar3);
    iVar1 = iVar4 + *(int *)(lVar3 + 0xc);
    local_18 = iVar4;
    local_14 = iVar1;
    std::vector<PoolResult,std::allocator<PoolResult>>::push_back
              ((vector<PoolResult,std::allocator<PoolResult>> *)avStack_38,aPStack_20);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aPStack_20);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_48);
    iVar4 = iVar1;
  }
  std::vector<PoolResult,std::allocator<PoolResult>>::operator=
            ((vector<PoolResult,std::allocator<PoolResult>> *)(this + 0xf0),(vector *)avStack_38);
  *(int *)(this + 0x108) = iVar4;
  std::vector<PoolResult,std::allocator<PoolResult>>::~vector
            ((vector<PoolResult,std::allocator<PoolResult>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAchievementInfo::initBoxPlantPool() */

void __thiscall DailyAchievementInfo::initBoxPlantPool(DailyAchievementInfo *this)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  undefined8 local_48;
  undefined8 local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  PoolResult aPStack_20 [8];
  int local_18;
  int local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x80));
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x80));
  iVar4 = 0;
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar2) {
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    PoolResult::PoolResult(aPStack_20);
    local_10 = *(undefined4 *)(lVar3 + 8);
    thunk_FUN_05475e00(aPStack_20,lVar3);
    iVar1 = iVar4 + *(int *)(lVar3 + 0xc);
    local_18 = iVar4;
    local_14 = iVar1;
    std::vector<PoolResult,std::allocator<PoolResult>>::push_back
              ((vector<PoolResult,std::allocator<PoolResult>> *)avStack_38,aPStack_20);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aPStack_20);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_48);
    iVar4 = iVar1;
  }
  std::vector<PoolResult,std::allocator<PoolResult>>::operator=
            ((vector<PoolResult,std::allocator<PoolResult>> *)(this + 0x110),(vector *)avStack_38);
  *(int *)(this + 0x128) = iVar4;
  std::vector<PoolResult,std::allocator<PoolResult>>::~vector
            ((vector<PoolResult,std::allocator<PoolResult>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAchievementInfo::initBoxAccessoryPool() */

void __thiscall DailyAchievementInfo::initBoxAccessoryPool(DailyAchievementInfo *this)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  undefined8 local_48;
  undefined8 local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  PoolResult aPStack_20 [8];
  int local_18;
  int local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x98));
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x98));
  iVar4 = 0;
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar2) {
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    PoolResult::PoolResult(aPStack_20);
    local_10 = *(undefined4 *)(lVar3 + 8);
    thunk_FUN_05475e00(aPStack_20,lVar3);
    iVar1 = iVar4 + *(int *)(lVar3 + 0xc);
    local_18 = iVar4;
    local_14 = iVar1;
    std::vector<PoolResult,std::allocator<PoolResult>>::push_back
              ((vector<PoolResult,std::allocator<PoolResult>> *)avStack_38,aPStack_20);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aPStack_20);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_48);
    iVar4 = iVar1;
  }
  std::vector<PoolResult,std::allocator<PoolResult>>::operator=
            ((vector<PoolResult,std::allocator<PoolResult>> *)(this + 0x130),(vector *)avStack_38);
  *(int *)(this + 0x148) = iVar4;
  std::vector<PoolResult,std::allocator<PoolResult>>::~vector
            ((vector<PoolResult,std::allocator<PoolResult>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DailyAchievementInfo::initPool() */

void __thiscall DailyAchievementInfo::initPool(DailyAchievementInfo *this)

{
  char cVar1;
  
  initSpecificAvatarPool(this);
  cVar1 = std::vector<PoolResult,std::allocator<PoolResult>>::empty
                    ((vector<PoolResult,std::allocator<PoolResult>> *)(this + 0xb0));
  if (cVar1 != '\0') {
    initBoxAvatarPool(this);
  }
  initSpecificPlantPool(this);
  cVar1 = std::vector<PoolResult,std::allocator<PoolResult>>::empty
                    ((vector<PoolResult,std::allocator<PoolResult>> *)(this + 0xd0));
  if (cVar1 != '\0') {
    initBoxPlantPool(this);
  }
  initBoxAccessoryPool(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAchievementInfo::InitDate() */

void __thiscall DailyAchievementInfo::InitDate(DailyAchievementInfo *this)

{
  bool bVar1;
  undefined8 uVar2;
  RtObject *this_00;
  DailyAchievementInfo *pDVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x58);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_041dd8dc:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    pDVar3 = Sexy::RtObject::Cast<DailyAchievementInfo>(this_00);
    if (pDVar3 != (DailyAchievementInfo *)0x0) {
      std::vector<AchievementItem,std::allocator<AchievementItem>>::operator=
                ((vector<AchievementItem,std::allocator<AchievementItem>> *)(this + 8),
                 (vector *)(pDVar3 + 8));
      std::vector<AchievementConfig,std::allocator<AchievementConfig>>::operator=
                ((vector<AchievementConfig,std::allocator<AchievementConfig>> *)(this + 0x20),
                 (vector *)(pDVar3 + 0x20));
      std::vector<PoolContent,std::allocator<PoolContent>>::operator=
                ((vector<PoolContent,std::allocator<PoolContent>> *)(this + 0x38),
                 (vector *)(pDVar3 + 0x38));
      std::vector<PoolContent,std::allocator<PoolContent>>::operator=
                ((vector<PoolContent,std::allocator<PoolContent>> *)(this + 0x50),
                 (vector *)(pDVar3 + 0x50));
      std::vector<PoolContent,std::allocator<PoolContent>>::operator=
                ((vector<PoolContent,std::allocator<PoolContent>> *)(this + 0x68),
                 (vector *)(pDVar3 + 0x68));
      std::vector<PoolContent,std::allocator<PoolContent>>::operator=
                ((vector<PoolContent,std::allocator<PoolContent>> *)(this + 0x80),
                 (vector *)(pDVar3 + 0x80));
      std::vector<PoolContent,std::allocator<PoolContent>>::operator=
                ((vector<PoolContent,std::allocator<PoolContent>> *)(this + 0x98),
                 (vector *)(pDVar3 + 0x98));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_041dd8dc;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
  } while( true );
}


/* DailyAchievementInfo::AddAchievementConfig(AchievementConfig const&) */

void __thiscall
DailyAchievementInfo::AddAchievementConfig(DailyAchievementInfo *this,AchievementConfig *param_1)

{
  vector<int,std::allocator<int>> *this_00;
  
  this_00 = (vector<int,std::allocator<int>> *)
            getAchievementConfigByDate(this,*(int *)(param_1 + 0x20));
  if (this_00 != (vector<int,std::allocator<int>> *)0x0) {
    std::vector<int,std::allocator<int>>::operator=(this_00,(vector *)param_1);
    this_00[0x24] = *(vector<int,std::allocator<int>> *)(param_1 + 0x24);
    return;
  }
  std::vector<AchievementConfig,std::allocator<AchievementConfig>>::push_back
            ((vector<AchievementConfig,std::allocator<AchievementConfig>> *)(this + 0x20),param_1);
  return;
}

