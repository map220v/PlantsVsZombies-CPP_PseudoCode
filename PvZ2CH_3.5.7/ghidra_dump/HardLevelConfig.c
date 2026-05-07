// Class: HardLevelConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HardLevelConfig::StaticClassInit() */

void HardLevelConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"HardLevelData");
    (*pcVar3)(plVar2,asStack_10,FUN_0495ef84,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"HardLevelConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_0495f928,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HardLevelConfig::StaticGetClass() */

long * HardLevelConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HardLevelConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HardLevelConfig::GetClass() const */

long * HardLevelConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"HardLevelConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HardLevelConfig::GetDifficulty(int, int) */

void __thiscall HardLevelConfig::GetDifficulty(HardLevelConfig *this,int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 8));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      iVar3 = 0x40800000;
LAB_0495f50c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar3);
    }
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((*piVar2 == param_1) && (piVar2[1] == param_2)) {
      iVar3 = piVar2[2];
      goto LAB_0495f50c;
    }
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HardLevelConfig::GetDifficulty(std::string const&) */

void __thiscall HardLevelConfig::GetDifficulty(HardLevelConfig *this,string *param_1)

{
  int iVar1;
  uchar uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  WorldDataManager *pWVar7;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 *puVar8;
  ulong uVar9;
  string *psVar10;
  byte *pbVar11;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_18);
  cVar3 = FUN_0547419c(param_1);
  if ((cVar3 == '\0') || (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0)) {
    thunk_FUN_05475e00(asStack_18,param_1);
    psVar10 = (string *)Sexy::LazySingleton<LevelUtils>::GetInstance();
    LevelUtils::LoadLevelDefinition(psVar10,SUB81(asStack_18,0));
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    iVar1 = *(int *)(lVar6 + 0x30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    pWVar7 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    lVar6 = WorldDataManager::FindEventByLevelName(pWVar7,asStack_18);
  }
  else {
    uVar5 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    thunk_FUN_05475e00(asStack_18,uVar5);
    lVar6 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    iVar1 = *(int *)(lVar6 + 0x30);
    pWVar7 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    lVar6 = WorldDataManager::FindEventByLevelName(pWVar7,asStack_18);
  }
  if ((lVar6 == 0) || (lVar6 = FUN_0495ef68(*(undefined8 *)(lVar6 + 0xe8)), lVar6 == 0)) {
    uVar5 = 0x40800000;
  }
  else {
    uVar2 = *(uchar *)(lVar6 + 0x5c);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar4 = PlayerInfo::RecordHardWorld(this_01,uVar2,false);
    puVar8 = (undefined8 *)PlayerInfo::GetHardWorldOrder(this_01);
    if (-1 < iVar4) {
      uVar5 = *puVar8;
      uVar9 = FUN_0495ef6c(uVar5,puVar8[1]);
      if ((ulong)(long)iVar4 < uVar9) {
        pbVar11 = (byte *)FUN_0495ef74(uVar5,(long)iVar4);
        uVar5 = GetDifficulty(this,(uint)*pbVar11,iVar1);
        goto LAB_0495f620;
      }
    }
    uVar5 = 0x3f800000;
  }
LAB_0495f620:
  std::string::~string(asStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HardLevelConfig::GetZombieLevelCreate(std::string const&) */

void __thiscall HardLevelConfig::GetZombieLevelCreate(HardLevelConfig *this,string *param_1)

{
  float fVar1;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)GetDifficulty(this,param_1);
  GuessRatio::GuessRatio((GuessRatio *)local_10,fVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10[0]);
}


/* HardLevelConfig::HardLevelConfig() */

void __thiscall HardLevelConfig::HardLevelConfig(HardLevelConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_069159b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* HardLevelConfig::StaticNew() */

HardLevelConfig * HardLevelConfig::StaticNew(void)

{
  HardLevelConfig *this;
  
  this = ::operator_new(0x20);
  HardLevelConfig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HardLevelConfig::GetConfig() */

void HardLevelConfig::GetConfig(void)

{
  PVZDB *pPVar1;
  RtName *this;
  undefined8 extraout_x0;
  RtId aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  this = (RtName *)PVZDB::GetTable(pPVar1,0x5f);
  Sexy::RtName::RtName(aRStack_18,L"HardLevelConfig");
  Sexy::RtDbTable::GetIdForAlias(this);
  Sexy::RtDbTable::GetObjectForId((RtDbTable *)this,aRStack_20);
  nop();
  Sexy::RtId::~RtId(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(extraout_x0);
}


/* HardLevelConfig::~HardLevelConfig() */

void __thiscall HardLevelConfig::~HardLevelConfig(HardLevelConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_069159b0;
  std::vector<HardLevelData,std::allocator<HardLevelData>>::~vector
            ((vector<HardLevelData,std::allocator<HardLevelData>> *)(this + 8));
  nop();
  return;
}


/* HardLevelConfig::~HardLevelConfig() */

void __thiscall HardLevelConfig::~HardLevelConfig(HardLevelConfig *this)

{
  ~HardLevelConfig(this);
  AK::FreeHook(this);
  return;
}

