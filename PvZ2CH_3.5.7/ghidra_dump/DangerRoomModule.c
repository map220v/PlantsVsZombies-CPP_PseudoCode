// Class: DangerRoomModule


/* DangerRoomModule::HandleSuperFSMAction_DangerRoomState(DangerRoomState, StateAction) */

void DangerRoomModule::HandleSuperFSMAction_DangerRoomState(void)

{
  return;
}


/* DangerRoomModule::onLevelEnded() */

void DangerRoomModule::onLevelEnded(void)

{
  return;
}


/* DangerRoomModule::setState_DangerRoomState(DangerRoomState) */

void __thiscall DangerRoomModule::setState_DangerRoomState(DangerRoomModule *this,int param_2)

{
  if (*(int *)(this + 0x110) != -1) {
    (**(code **)(*(long *)this + 0xa0))(this,*(int *)(this + 0x110),3);
  }
  *(int *)(this + 0x110) = param_2;
  if (param_2 != -1) {
    (**(code **)(*(long *)this + 0xa0))(this,param_2,1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModule::StaticClassInit() */

void DangerRoomModule::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"DangerRoomModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03c95e88,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomModule::StaticGetClass() */

long * DangerRoomModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomModule::GetState() */

void __thiscall DangerRoomModule::GetState(DangerRoomModule *this)

{
  FUN_03c9330c(*(undefined4 *)(this + 0x110));
  return;
}


/* DangerRoomModule::GetBossLevel(std::string const&) */

void DangerRoomModule::GetBossLevel(string *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0547429c();
  Sexy::StrFormat("%s_Boss",uVar1);
  return;
}


/* DangerRoomModule::CheckCheating(std::vector<DangerRoomNewPlantInfo,
   std::allocator<DangerRoomNewPlantInfo> > const&) */

undefined8 __thiscall DangerRoomModule::CheckCheating(DangerRoomModule *this,vector *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)param_1;
  lVar1 = FUN_03c93334(uVar4,*(undefined8 *)(param_1 + 8));
  lVar3 = 0;
  do {
    if (lVar3 == lVar1) {
      return 0;
    }
    lVar2 = FUN_03c93348(uVar4,lVar3);
    lVar3 = lVar3 + 1;
  } while (*(int *)(lVar2 + 8) < 6);
  return 1;
}


/* DangerRoomModule::onPlantfoodUsed(PlantGroup*) */

void DangerRoomModule::onPlantfoodUsed(PlantGroup *param_1)

{
  char cVar1;
  DangerRoomManager *this;
  
  this = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  cVar1 = DangerRoomManager::IsTrainingMode(this);
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
  }
  return;
}


/* DangerRoomModule::onLaunchCuke(bool, int, int) */

void DangerRoomModule::onLaunchCuke(bool param_1,int param_2,int param_3)

{
  char cVar1;
  DangerRoomManager *this;
  
  this = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  cVar1 = DangerRoomManager::IsTrainingMode(this);
  if (cVar1 == '\0') {
    *(int *)((ulong)param_1 + 0xf0) = *(int *)((ulong)param_1 + 0xf0) + 1;
  }
  return;
}


/* DangerRoomModule::OnBoostEnd() */

void DangerRoomModule::OnBoostEnd(void)

{
  int iVar1;
  DangerRoomManager *pDVar2;
  Board *pBVar3;
  
  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
  pDVar2 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  iVar1 = DangerRoomManager::GetPlantfoodNum(pDVar2);
  Board::SetPlantfoodCount(pBVar3,iVar1);
  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
  pDVar2 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  iVar1 = DangerRoomManager::GetSunNum(pDVar2);
  Board::SetSunMoney(pBVar3,iVar1);
  return;
}


/* DangerRoomModule::GetDangerRoomPropertySheet() */

void DangerRoomModule::GetDangerRoomPropertySheet(void)

{
  DangerRoomManager *this;
  
  this = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  DangerRoomManager::GetProps(this);
  return;
}


/* DangerRoomModule::CalcSunAdd(int) */

int DangerRoomModule::CalcSunAdd(int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = GetDangerRoomPropertySheet();
  iVar1 = *(int *)(lVar3 + 0x1a8);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = param_1 / iVar1;
  }
  if (param_1 != iVar2 * iVar1) {
    return *(int *)(lVar3 + 0x198) + (param_1 + -1) * *(int *)(lVar3 + 0x19c);
  }
  return *(int *)(lVar3 + 0x1a0) + (iVar2 + -1) * *(int *)(lVar3 + 0x1a4);
}


/* DangerRoomModule::CalcSunAdd(int, int) */

int DangerRoomModule::CalcSunAdd(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1 + param_2;
  iVar3 = 0;
  for (; param_1 <= iVar1; param_1 = param_1 + 1) {
    iVar2 = CalcSunAdd(param_1);
    iVar3 = iVar3 + iVar2;
  }
  return iVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModule::GetLevelName(std::string const&, int) */

void __thiscall DangerRoomModule::GetLevelName(DangerRoomModule *this,string *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  string *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = GetDangerRoomPropertySheet();
  uVar4 = FUN_0547429c(this);
  Sexy::StrFormat("%s_dangerroom",uVar4);
  iVar1 = *(int *)(lVar3 + 0x1a8);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (int)param_1 / iVar1;
  }
  if ((int)param_1 == iVar2 * iVar1) {
    GetBossLevel(in_x8);
    FUN_05474278();
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModule::StartDangerRoomLevel(std::string const&, bool) */

void __thiscall
DangerRoomModule::StartDangerRoomLevel(DangerRoomModule *this,string *param_1,bool param_2)

{
  DangerRoomManager *pDVar1;
  ulong uVar2;
  uint uVar3;
  string asStack_10 [8];
  long local_8;
  
  uVar3 = (uint)param_2;
  local_8 = ___stack_chk_guard;
  if (((ulong)param_1 & 0xff) == 0) {
    uVar3 = (uint)param_2;
    pDVar1 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    uVar2 = DangerRoomManager::GetNextLevel(pDVar1);
  }
  else {
    pDVar1 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    uVar2 = DangerRoomManager::GetNextTrainingLevel(pDVar1);
  }
  GetLevelName(this,(string *)(uVar2 & 0xffffffff),uVar3);
  FUN_03c94428(gGameStateMgr + 0x1eb1);
  GameStateMgr::StartLevel(gGameStateMgr,this,asStack_10,0xffffffff,5,5,0);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModule::onNetworkError(int, std::string const&) */

void __thiscall DangerRoomModule::onNetworkError(DangerRoomModule *this,int param_1,string *param_2)

{
  LawnApp *this_00;
  char cVar1;
  DangerRoomManager *this_01;
  string asStack_cf0 [8];
  _PacketId a_Stack_ce8 [1328];
  string asStack_7b8 [1968];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _PacketId::_PacketId(a_Stack_ce8);
  cVar1 = std::operator==(param_2,asStack_7b8);
  if ((cVar1 == '\0') && (cVar1 = FUN_0547419c(param_2), cVar1 == '\0')) {
    _PacketId::~_PacketId(a_Stack_ce8);
  }
  else {
    _PacketId::~_PacketId(a_Stack_ce8);
    this_01 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    DangerRoomManager::ShowEndLevel(this_01,true);
    this_00 = gLawnApp;
    std::string::string(asStack_cf0,"[NETWORK_NOT_CONNECTED_TITLE]");
    std::string::string((string *)a_Stack_ce8,"[NETWORK_NOT_CONNECTED_TEXT]");
    LawnApp::ShowMessageDialogNoCallback(this_00,asStack_cf0,(string *)a_Stack_ce8);
    std::string::~string((string *)a_Stack_ce8);
    nop();
    std::string::~string(asStack_cf0);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModule::GetPlantFoodBuyCount() */

void DangerRoomModule::GetPlantFoodBuyCount(void)

{
  PlantfoodUI *this;
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIPlantfood");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this == (PlantfoodUI *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = PlantfoodUI::GetBuyCount(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* DangerRoomModule::Update() */

void __thiscall DangerRoomModule::Update(DangerRoomModule *this)

{
  bool bVar1;
  NetworkMgr *this_00;
  float fVar2;
  
  if (((0.0 < *(float *)(this + 0x114)) && (*(int *)(this + 0x118) < 6)) &&
     (fVar2 = (float)PVZ_T(), *(float *)(this + 0x114) < fVar2)) {
    fVar2 = (float)PVZ_T();
    *(int *)(this + 0x118) = *(int *)(this + 0x118) + 1;
    *(float *)(this + 0x114) = fVar2 + 10.0;
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    bVar1 = (bool)NetworkMgr::GetNewNetWorkProcess(this_00);
    INetworkMsgProcess::RequestDangerRoomEndLevel
              (bVar1,(uint)(byte)this[0x11c],
               (S2C_DangerRoomConsumeData *)(ulong)*(uint *)(this + 0x120),
               (bool)((char)this + -0x28));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModule::initializeModule() */

void __thiscall DangerRoomModule::initializeModule(DangerRoomModule *this)

{
  bool bVar1;
  undefined4 uVar2;
  ulong uVar3;
  DangerRoomManager *this_00;
  ResilienceTutorialIntroProperties *pRVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 local_13b0;
  undefined8 local_13a8;
  MTRand aMStack_13a0 [5016];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = CalcRandomSeed(1);
  Sexy::MTRand::MTRand(aMStack_13a0,uVar3 & 0xffffffff);
  this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  uVar2 = DangerRoomManager::GetCurrentNextLevel(this_00);
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_13b0 = FUN_03c96308(*(undefined8 *)(pRVar4 + 0x48));
  local_13a8 = FUN_03c96358(*(undefined8 *)(pRVar4 + 0x50));
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_13b0,(__normal_iterator *)&local_13a8)
    ;
    if (!bVar1) break;
    this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_13b0);
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    pcVar7 = *(code **)(*plVar5 + 0xa0);
    uVar6 = FUN_03c93304(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if (pcVar7 != DangerRoomLevelDesigner::GenerateExtraModules) {
      (*pcVar7)(plVar5,uVar2,aMStack_13a0,uVar6);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_13b0);
  }
  *(undefined4 *)(this + 0x110) = 0xffffffff;
  setState_DangerRoomState(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomModule::GetWorldSpecificPropertySheet() const */

void DangerRoomModule::GetWorldSpecificPropertySheet(void)

{
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(pRVar1 + 0x40));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModule::HandleStateMachine_DangerRoomState(DangerRoomState, StateAction) */

void __thiscall
DangerRoomModule::HandleStateMachine_DangerRoomState
          (DangerRoomModule *this,uint param_2,int param_3)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate2<DangerRoomState,StateAction> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,HandleSuperFSMAction_DangerRoomState);
  Sexy::Delegate2<DangerRoomState,StateAction>::
  Delegate2<DangerRoomModule,void(DangerRoomModule::*)(DangerRoomState,StateAction)>
            (aDStack_38,aCStack_50);
  if ((param_2 != 0xffffffff) || (param_3 != 0)) {
    Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)(ulong)param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomModule::GetBossRetreatColumn() */

void DangerRoomModule::GetBossRetreatColumn(void)

{
  LevelModuleManager *pLVar1;
  ZombossBattleModule *this;
  ZombossLastStandMinigameModule *this_00;
  
  pLVar1 = (LevelModuleManager *)FUN_03c93304(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  this = LevelModuleManager::GetModuleByClass<ZombossBattleModule>(pLVar1);
  if (this != (ZombossBattleModule *)0x0) {
    ZombossBattleModule::GetRetreatColumn(this);
    return;
  }
  pLVar1 = (LevelModuleManager *)FUN_03c93304(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  this_00 = LevelModuleManager::GetModuleByClass<ZombossLastStandMinigameModule>(pLVar1);
  if (this_00 != (ZombossLastStandMinigameModule *)0x0) {
    ZombossLastStandMinigameModule::GetRetreatColumn(this_00);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModule::GetWorldSpecificPropertySheetByWorldName(std::string const&) */

void __thiscall
DangerRoomModule::GetWorldSpecificPropertySheetByWorldName(DangerRoomModule *this,string *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  string asStack_38 [8];
  string asStack_30 [8];
  RtId aRStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StringToLower((Sexy *)this,___stack_chk_guard);
  puVar2 = (undefined1 *)FUN_05474ee8(asStack_38,0);
  pbVar3 = (byte *)FUN_05474ee8(asStack_38,0);
  iVar1 = toupper((uint)*pbVar3);
  *puVar2 = (char)iVar1;
  uVar4 = FUN_0547429c(asStack_38);
  Sexy::StrFormat("%sDangerRoomProps",asStack_30,uVar4);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::ToWString(asStack_30);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::GetIdByAlias(aRStack_28,uVar4,5,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_28);
  Sexy::RtId::~RtId(aRStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModule::GetBossStage() */

void DangerRoomModule::GetBossStage(void)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  Zombie *this;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x29);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      uVar3 = 0;
LAB_03c9748c:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    this = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    if ((this != (Zombie *)0x0) && (cVar1 = Zombie::IsBoss(this), cVar1 != '\0')) {
      uVar3 = Zombie::GetBossStage(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      goto LAB_03c9748c;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModule::checkInvalidPlants() */

void DangerRoomModule::checkInvalidPlants(void)

{
  bool bVar1;
  undefined8 *puVar2;
  Plant *this;
  long lVar3;
  Board *pBVar4;
  undefined8 local_48;
  undefined8 local_40;
  string asStack_38 [8];
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntities(avStack_20,1);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    if ((((RtObject *)*puVar2 != (RtObject *)0x0) &&
        (bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)*puVar2), bVar1)) &&
       (nop(), this != (Plant *)0x0)) {
      Plant::GetType();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      bVar1 = std::operator==((string *)(lVar3 + 8),"flattenedshroom");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      if (bVar1) {
        pBVar4 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string(asStack_38,"SmokeManhole");
        lVar3 = Board::GetGridItemAt
                          (pBVar4,asStack_38,*(int *)(this + 0x114),*(int *)(this + 0x110));
        if (lVar3 == 0) {
          pBVar4 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string(asStack_30,"PipelineStart");
          lVar3 = Board::GetGridItemAt
                            (pBVar4,asStack_30,*(int *)(this + 0x114),*(int *)(this + 0x110));
          if (lVar3 == 0) {
            pBVar4 = *(Board **)(gLawnApp + 0x9f0);
            std::string::string((string *)aRStack_28,"PipelineEnd");
            lVar3 = Board::GetGridItemAt
                              (pBVar4,(string *)aRStack_28,*(int *)(this + 0x114),
                               *(int *)(this + 0x110));
            std::string::~string((string *)aRStack_28);
            nop();
            std::string::~string(asStack_30);
            nop();
            std::string::~string(asStack_38);
            nop();
            if (lVar3 == 0) {
              Plant::beThrown(this);
            }
          }
          else {
            std::string::~string(asStack_30);
            nop();
            std::string::~string(asStack_38);
            nop();
          }
        }
        else {
          std::string::~string(asStack_38);
          nop();
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomModule::DangerRoomModule() */

void __thiscall DangerRoomModule::DangerRoomModule(DangerRoomModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0675ba20;
  DangerRoomInfo::DangerRoomInfo((DangerRoomInfo *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xc0));
  S2C_DangerRoomConsumeData::S2C_DangerRoomConsumeData((S2C_DangerRoomConsumeData *)(this + 0xd8));
  *(undefined4 *)(this + 0x118) = 0;
  this[0x11c] = (DangerRoomModule)0x0;
  *(undefined4 *)(this + 0x120) = 0;
  this[0x124] = (DangerRoomModule)0x0;
  *(undefined4 *)(this + 0x114) = 0;
  return;
}


/* DangerRoomModule::StaticNew() */

DangerRoomModule * DangerRoomModule::StaticNew(void)

{
  DangerRoomModule *this;
  
  this = ::operator_new(0x128);
  DangerRoomModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModule::initStoredPlants(DangerRoomInfo&) */

void __thiscall DangerRoomModule::initStoredPlants(DangerRoomModule *this,DangerRoomInfo *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  PlantNameMapperServerID *this_00;
  undefined8 uVar9;
  Board *this_01;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  Point aPStack_28 [8];
  vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar7 = Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  FUN_03c94408(lVar7 + 0x20);
  lVar7 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  cVar3 = *(char *)(lVar7 + 0x113);
  iVar6 = GetBossRetreatColumn();
  std::vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>>::vector
            (avStack_20,(vector *)(param_1 + 0x90));
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar4 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar4) {
    piVar8 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this_00 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
    PlantNameMapperServerID::GetTypeForID(this_00,piVar8[3]);
    bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_30);
    if ((bVar4) && ((cVar3 == '\0' || (piVar8[1] < iVar6)))) {
      this_01 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::Point::Point(aPStack_28,piVar8[1],*piVar8);
      cVar5 = Board::IsPitOfDoom(this_01,aPStack_28);
      if (cVar5 == '\0') {
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
        bVar4 = std::operator==((string *)(lVar7 + 8),"bitpeashooter");
        if (!bVar4) {
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
          bVar4 = std::operator==((string *)(lVar7 + 8),"frog");
          if (!bVar4) {
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
            bVar4 = std::operator==((string *)(lVar7 + 8),"magicbeans");
            if (!bVar4) {
              lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
              bVar4 = std::operator==((string *)(lVar7 + 8),"hollybarrierleaf");
              if (!bVar4) {
                iVar1 = *piVar8;
                iVar2 = piVar8[1];
                uVar9 = *(undefined8 *)(gLawnApp + 0x9f0);
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)aPStack_28,(RtWeakPtrBase *)aRStack_30)
                ;
                Board::AddPlant((Board *)0x0,uVar9,iVar2,iVar1,aPStack_28,1,1,0xffffffff,bVar4,1,1,
                                bVar4,bVar4,bVar4,bVar4);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_28);
              }
            }
          }
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_40);
  }
  std::vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModule::onLoadComplete() */

void __thiscall DangerRoomModule::onLoadComplete(DangerRoomModule *this)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  ulong uVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar6;
  DangerRoomManager *pDVar7;
  DangerRoomInfo *pDVar8;
  long extraout_x0;
  PlantfoodUI *this_01;
  string *extraout_x1;
  undefined8 local_14a0;
  undefined8 uStack_1498;
  undefined8 local_1490;
  string asStack_1470 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_1468 [8];
  undefined8 local_1460;
  undefined8 uStack_1458;
  undefined8 local_1450;
  undefined8 local_1448 [21];
  MTRand aMStack_13a0 [5016];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = ProfileUtils::CalculateDangerRoomRandomSeed((DangerRoomInfo *)0x0);
  Sexy::MTRand::MTRand(aMStack_13a0,uVar4);
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_1460 = FUN_03c96308(*(undefined8 *)(pRVar5 + 0x48));
  local_1448[0] = FUN_03c96358(*(undefined8 *)(pRVar5 + 0x50));
  while( true ) {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_1460,(__normal_iterator *)local_1448);
    if (!bVar2) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1460);
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar6 + 0x98))(plVar6,*(undefined4 *)(this + 0x20),aMStack_13a0);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_1460);
  }
  pDVar7 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  pDVar8 = (DangerRoomInfo *)DangerRoomManager::GetCurrentDangerRoomInfo(pDVar7);
  DangerRoomInfo::DangerRoomInfo((DangerRoomInfo *)local_1448,pDVar8);
  initStoredPlants(this,(DangerRoomInfo *)local_1448);
  FUN_03c932fc(*(long *)(gLawnApp + 0x9f0) + 0x887,0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantAdded);
  local_1490 = local_1450;
  local_14a0 = local_1460;
  uStack_1498 = uStack_1458;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<DangerRoomModule,void(DangerRoomModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantAdded,&local_14a0);
  pDVar7 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  cVar3 = DangerRoomManager::IsTrainingMode(pDVar7);
  if (cVar3 != '\0') {
    std::string::string(asStack_1470,"UISunBank");
    UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_1470,extraout_x1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_1468);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_1468);
    std::string::~string(asStack_1470);
    nop();
    if (extraout_x0 != 0) {
      FUN_03c94414(extraout_x0 + 0x179);
    }
    std::string::string((string *)aRStack_1468,"UIPlantfood");
    UIWidget::GetWidgetBySheetName((string *)aRStack_1468);
    nop();
    std::string::~string((string *)aRStack_1468);
    nop();
    if (this_01 != (PlantfoodUI *)0x0) {
      PlantfoodUI::SetFreePlantfoodAddition(this_01,true);
    }
  }
  DangerRoomInfo::~DangerRoomInfo((DangerRoomInfo *)local_1448);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModule::postInitialize() */

void __thiscall DangerRoomModule::postInitialize(DangerRoomModule *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  DangerRoomManager *pDVar5;
  DangerRoomInfo *pDVar6;
  RechargeRewardConfig *this_00;
  vector *pvVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 extraout_x0;
  ResilienceTutorialIntroProperties *pRVar10;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar11;
  long *plVar12;
  WaveManager *this_02;
  long lVar13;
  ResourceInfo *pRVar14;
  Board *pBVar15;
  undefined8 local_1458;
  undefined8 local_1450;
  DangerRoomInfo aDStack_1448 [168];
  MTRand aMStack_13a0 [5016];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar5 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  pDVar6 = (DangerRoomInfo *)DangerRoomManager::GetCurrentDangerRoomInfo(pDVar5);
  DangerRoomInfo::DangerRoomInfo(aDStack_1448,pDVar6);
  pDVar5 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  iVar2 = DangerRoomManager::GetCurrentNextLevel(pDVar5);
  pBVar15 = *(Board **)(gLawnApp + 0x9f0);
  pDVar5 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  iVar3 = DangerRoomManager::GetPlantfoodNum(pDVar5);
  Board::SetPlantfoodCount(pBVar15,iVar3);
  Board::SetLevelNumber(*(Board **)(gLawnApp + 0x9f0),iVar2);
  pBVar15 = *(Board **)(gLawnApp + 0x9f0);
  pDVar5 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  iVar3 = DangerRoomManager::GetSunNum(pDVar5);
  Board::SetSunMoney(pBVar15,iVar3);
  FUN_03c9441c(*(long *)(gLawnApp + 0x9f0) + 0xc24);
  pDVar5 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  this_00 = (RechargeRewardConfig *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  pvVar7 = (vector *)RechargeRewardConfig::getDefaultBanner(this_00);
  DangerRoomManager::SetCachePlantNumList(pDVar5,pvVar7);
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)FUN_03c97210(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_01 !=
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    uVar8 = CalcRandomSeed(1);
    Sexy::MTRand::MTRand(aMStack_13a0,uVar8 & 0xffffffff);
    uVar9 = WaveManagerProperties::StaticGetClass();
    GameObject::Create(uVar9,0x35);
    nop();
    pRVar10 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    local_1458 = FUN_03c96308(*(undefined8 *)(pRVar10 + 0x48));
    local_1450 = FUN_03c96358(*(undefined8 *)(pRVar10 + 0x50));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_1458,(__normal_iterator *)&local_1450),
          bVar1) {
      pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1458);
      plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
      if (*(code **)(*plVar12 + 0x80) != DangerRoomLevelDesigner::ModifyBoardLayout) {
        (**(code **)(*plVar12 + 0x80))(plVar12,iVar2,aMStack_13a0);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_1458);
    }
    local_1458 = FUN_03c96308(*(undefined8 *)(pRVar10 + 0x48));
    local_1450 = FUN_03c96358(*(undefined8 *)(pRVar10 + 0x50));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_1458,(__normal_iterator *)&local_1450),
          bVar1) {
      pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1458);
      plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
      (**(code **)(*plVar12 + 0x88))(plVar12,iVar2,aMStack_13a0,extraout_x0);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_1458);
    }
    local_1458 = FUN_03c96308(*(undefined8 *)(pRVar10 + 0x48));
    local_1450 = FUN_03c96358(*(undefined8 *)(pRVar10 + 0x50));
    while( true ) {
      bVar1 = __gnu_cxx::operator!=
                        ((__normal_iterator *)&local_1458,(__normal_iterator *)&local_1450);
      if (!bVar1) break;
      pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1458);
      plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
      if (*(code **)(*plVar12 + 0x90) != DangerRoomLevelDesigner::GenerateEvents) {
        (**(code **)(*plVar12 + 0x90))(plVar12,iVar2,aMStack_13a0,extraout_x0);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_1458);
    }
    this_02 = (WaveManager *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(this_01);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_1450,(RtWeakPtrBase *)&local_1458);
    lVar13 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar13 + 0xa0));
    WaveManager::Initialize(this_02,(RtWeakPtr<Sexy::SoundResource> *)&local_1450,pRVar14,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_1450);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_1458);
    uVar4 = CalcRandomSeed(1);
    WaveManager::ReseedRandomness(this_02,uVar4);
  }
  DangerRoomInfo::operator=((DangerRoomInfo *)(this + 0x18),aDStack_1448);
  DangerRoomInfo::~DangerRoomInfo(aDStack_1448);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModule::AddPacketCount(int) */

void DangerRoomModule::AddPacketCount(int param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  ResourceInfo *pRVar4;
  ulong uVar5;
  int *piVar6;
  DangerRoomManager *pDVar7;
  ulong uVar8;
  int iVar9;
  undefined8 uVar10;
  LevelEditorCardPlantInterface aLStack_28 [8];
  int local_20;
  int local_1c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = GetDangerRoomPropertySheet();
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_28);
  while (bVar1 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                           ((ObjectTypeDirectoryIterator *)aLStack_28), bVar1) {
    ObjectTypeDirectoryIterator<PlantType>::operator*
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_28);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
    if ((pRVar4 == (ResourceInfo *)0x0) || (pRVar4[0x30] == (ResourceInfo)0x0)) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
    else {
      FUN_05475d88(asStack_10,pRVar4 + 8);
      cVar2 = PlayerInfo::GetIsPlantUnlocked(this_00,asStack_10);
      if (cVar2 != '\0') {
        local_20 = 0x7fffffff;
        if (*(int *)(pRVar4 + 0xd0) < 0) {
          iVar9 = 0;
        }
        else {
          uVar10 = *(undefined8 *)(lVar3 + 0x128);
          uVar8 = (ulong)*(int *)(pRVar4 + 0xd0);
          uVar5 = FUN_03c93328(uVar10,*(undefined8 *)(lVar3 + 0x130));
          if (uVar8 < uVar5) {
            piVar6 = (int *)FUN_03c93340(uVar10,uVar8);
            iVar9 = param_1 * *piVar6;
          }
          else {
            iVar9 = 0;
          }
          uVar10 = *(undefined8 *)(lVar3 + 0x110);
          uVar5 = FUN_03c93328(uVar10,*(undefined8 *)(lVar3 + 0x118));
          if (uVar8 < uVar5) {
            piVar6 = (int *)FUN_03c93340(uVar10,uVar8);
            local_20 = *piVar6;
          }
        }
        pDVar7 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstance();
        local_1c = DangerRoomManager::GetPlantNum(pDVar7,asStack_10);
        local_1c = iVar9 + local_1c;
        piVar6 = eastl::min_alt<int>(&local_1c,&local_20);
        iVar9 = *piVar6;
        pDVar7 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstance();
        DangerRoomManager::SetPlantOnBoard(pDVar7,asStack_10,iVar9);
      }
      std::string::~string(asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
    ObjectTypeDirectoryIterator<PlantType>::operator++
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModule::SkipLevel(int) */

void __thiscall DangerRoomModule::SkipLevel(DangerRoomModule *this,int param_1)

{
  long lVar1;
  int *piVar2;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = GetDangerRoomPropertySheet();
  local_c = CalcSunAdd(*(int *)(this + 0x20),param_1);
  local_c = *(int *)(this + 0xa0) + local_c;
  piVar2 = eastl::min_alt<int>(&local_c,(int *)(lVar1 + 0x194));
  lVar1 = ___stack_chk_guard;
  *(int *)(this + 0xa0) = *piVar2;
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + param_1;
  if (local_8 == lVar1) {
    AddPacketCount(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModule::setupMowerInformation() */

void __thiscall DangerRoomModule::setupMowerInformation(DangerRoomModule *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uchar local_9;
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<unsigned_char,std::allocator<unsigned_char>>::empty
                    ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0xc0));
  if (cVar1 != '\0') {
    for (; iVar2 = BoardConstants::NUMBER_OF_ROWS(), iVar3 < iVar2; iVar3 = iVar3 + 1) {
      local_9 = *(uchar *)(*(long *)(gLawnApp + 0x9f0) + (long)iVar3 + 0x850);
      std::vector<unsigned_char,std::allocator<unsigned_char>>::push_back
                ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0xc0),&local_9);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModule::initGamePlay() */

void __thiscall DangerRoomModule::initGamePlay(DangerRoomModule *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uchar uStack_9;
  long lStack_8;
  
  iVar3 = 0;
  lStack_8 = ___stack_chk_guard;
  cVar1 = std::vector<unsigned_char,std::allocator<unsigned_char>>::empty
                    ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0xc0));
  if (cVar1 != '\0') {
    for (; iVar2 = BoardConstants::NUMBER_OF_ROWS(), iVar3 < iVar2; iVar3 = iVar3 + 1) {
      uStack_9 = *(uchar *)(*(long *)(gLawnApp + 0x9f0) + (long)iVar3 + 0x850);
      std::vector<unsigned_char,std::allocator<unsigned_char>>::push_back
                ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0xc0),&uStack_9);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomModule::onGameplayStarted() */

void __thiscall DangerRoomModule::onGameplayStarted(DangerRoomModule *this)

{
  long lVar1;
  
  initGamePlay(this);
  lVar1 = FUN_03c96790(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (lVar1 != 0) {
    checkInvalidPlants();
    return;
  }
  FUN_03c932fc(*(long *)(gLawnApp + 0x9f0) + 0x887,1);
  checkInvalidPlants();
  return;
}


/* DangerRoomModule::onMowerTriggered(LawnMower*) */

void __thiscall DangerRoomModule::onMowerTriggered(DangerRoomModule *this,LawnMower *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  setupMowerInformation(this);
  iVar1 = FUN_03c93310(*(undefined4 *)(param_1 + 200));
  puVar2 = (undefined1 *)FUN_03c93764(*(undefined8 *)(this + 0xc0),(long)iVar1);
  *puVar2 = 0;
  return;
}


/* DangerRoomModule::onMowerCreated(LawnMower*) */

void __thiscall DangerRoomModule::onMowerCreated(DangerRoomModule *this,LawnMower *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  setupMowerInformation(this);
  iVar1 = FUN_03c93310(*(undefined4 *)(param_1 + 200));
  puVar2 = (undefined1 *)FUN_03c93764(*(undefined8 *)(this + 0xc0),(long)iVar1);
  *puVar2 = 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModule::registerForEvents() */

void __thiscall DangerRoomModule::registerForEvents(DangerRoomModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  CBMemberTranslatorX aCStack_f8 [24];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<DangerRoomModule,void(DangerRoomModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<DangerRoomModule,void(DangerRoomModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<DangerRoomModule,void(DangerRoomModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelEnded);
  Sexy::Delegate0::Delegate0<DangerRoomModule,void(DangerRoomModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMowerTriggered);
  local_120 = local_e0;
  uStack_118 = uStack_d8;
  local_110 = local_d0;
  MessageRouter::
  Subscribe<LawnMower*,Sexy::CBMemberTranslatorX<DangerRoomModule,void(DangerRoomModule::*)(LawnMower*)>>
            ((MessageRouter *)puVar1,Message::MowerTriggered,&local_120);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMowerCreated);
  local_110 = local_b8;
  MessageRouter::
  Subscribe<LawnMower*,Sexy::CBMemberTranslatorX<DangerRoomModule,void(DangerRoomModule::*)(LawnMower*)>>
            ((MessageRouter *)puVar1,Message::MowerInitialized,&local_120);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SkipLevel);
  local_140 = local_b0;
  uStack_138 = uStack_a8;
  local_130 = local_a0;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<DangerRoomModule,void(DangerRoomModule::*)(int)>>
            ((MessageRouter *)puVar1,Message::DangerRoomSkipLevel,&local_140);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBoostEnd);
  Sexy::Delegate0::Delegate0<DangerRoomModule,void(DangerRoomModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::DangerRoomBoostEnd,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNetworkError);
  local_150 = local_88;
  local_160 = local_98;
  uStack_158 = uStack_90;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<DangerRoomModule,void(DangerRoomModule::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,&local_160);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLaunchCuke);
  local_180 = local_80;
  uStack_178 = uStack_78;
  local_170 = local_70;
  MessageRouter::
  Subscribe<bool,int,int,Sexy::CBMemberTranslatorX<DangerRoomModule,void(DangerRoomModule::*)(bool,int,int)>>
            ((MessageRouter *)puVar1,Message::LaunchCuke,&local_180);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantfoodUsed);
  local_190 = local_58;
  local_1a0 = local_68;
  uStack_198 = uStack_60;
  MessageRouter::
  Subscribe<PlantGroup*,Sexy::CBMemberTranslatorX<DangerRoomModule,void(DangerRoomModule::*)(PlantGroup*)>>
            ((MessageRouter *)puVar1,Message::ToolAppliedPlantfood,&local_1a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDangerRoomEnd);
  local_1c0 = local_50;
  uStack_1b8 = uStack_48;
  local_1b0 = local_40;
  MessageRouter::
  Subscribe<int,S2C_DangerRoomEndLevel_const*,Sexy::CBMemberTranslatorX<DangerRoomModule,void(DangerRoomModule::*)(int,S2C_DangerRoomEndLevel_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyDangerRoomEnd,&local_1c0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,Update);
  Sexy::Delegate0::Delegate0<DangerRoomModule,void(DangerRoomModule::*)()>(aDStack_38,aCStack_f8);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModule::StoredPlantInfos() */

void __thiscall DangerRoomModule::StoredPlantInfos(DangerRoomModule *this)

{
  int iVar1;
  ResourceInfo *pRVar2;
  bool bVar3;
  char cVar4;
  long lVar5;
  ResourceInfo *pRVar6;
  long lVar7;
  ResourceInfo *pRVar8;
  PlantNameMapperServerID *pPVar9;
  string *psVar10;
  long *plVar11;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  int iVar12;
  Board *pBVar13;
  int iVar14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  iVar14 = 0;
  lVar5 = GetDangerRoomPropertySheet();
  pBVar13 = *(Board **)(gLawnApp + 0x9f0);
  if (0 < *(int *)(pBVar13 + 0xf8)) {
    do {
      if (0 < *(int *)(pBVar13 + 0xfc)) {
        iVar12 = 0;
        do {
          while( true ) {
            std::string::string((string *)&local_18,"");
            pRVar6 = (ResourceInfo *)Board::GetPlantAt(pBVar13,iVar14,iVar12,(string *)&local_18);
            std::string::~string((string *)&local_18);
            nop();
            if (pRVar6 == (ResourceInfo *)0x0) break;
            Plant::GetType();
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
            bVar3 = std::operator==((string *)(lVar7 + 8),"bitpeashooter");
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
            if (!bVar3) {
              Plant::GetType();
              lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
              bVar3 = std::operator==((string *)(lVar7 + 8),"frog");
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
              if (!bVar3) {
                Plant::GetType();
                lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
                bVar3 = std::operator==((string *)(lVar7 + 8),"magicbeans");
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
                if (!bVar3) {
                  Plant::GetType();
                  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
                  bVar3 = std::operator==((string *)(lVar7 + 8),"hollybarrierleaf");
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
                  if (!bVar3) {
                    Plant::GetType();
                    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
                    bVar3 = std::operator==((string *)(lVar7 + 8),"pumpkin");
                    pRVar2 = pRVar6;
                    if (bVar3) {
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
LAB_03c9c4e0:
                      lVar7 = Board::FindPlantGroup(*(Plant **)(gLawnApp + 0x9f0));
                      if (lVar7 == 0) goto LAB_03c9c5f0;
                      PlantGroup::GetPlantAtLayer((string *)&local_18,lVar7,1);
                      pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                                         ((RtWeakPtr *)&local_18);
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
                      if (((pRVar8 == (ResourceInfo *)0x0) || (pRVar2 = pRVar8, lVar5 == 0)) ||
                         (cVar4 = PlantRestrictionSet::IsIncluded((Plant *)(lVar5 + 0x1c0)),
                         cVar4 == '\0')) goto LAB_03c9c5f0;
                      DangerRoomNewPlantInfo::DangerRoomNewPlantInfo
                                ((DangerRoomNewPlantInfo *)&local_18);
                      pPVar9 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
                      Plant::GetType();
                      local_c = PlantNameMapperServerID::GetIdForType(pPVar9,aRStack_20);
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
                      local_18 = iVar12;
                      local_14 = iVar14;
                      local_10 = FUN_03c932f0(*(undefined4 *)(pRVar6 + 0x50));
                      std::vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>>::
                      push_back((vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>>
                                 *)in_x8,(DangerRoomNewPlantInfo *)&local_18);
                    }
                    else {
                      Plant::GetType();
                      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
                      bVar3 = std::operator==((string *)(lVar7 + 8),"powervine");
                      if (bVar3) {
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
                        goto LAB_03c9c4e0;
                      }
                      Plant::GetType();
                      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
                      cVar4 = std::operator==((string *)(lVar7 + 8),"peavine");
                      if (!(bool)cVar4) {
                        Plant::GetType();
                        plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
                        if (*(code **)(*plVar11 + 0xa0) == PlantType::IsVine) {
                          cVar4 = PlantType::IsVine();
                        }
                        else {
                          cVar4 = (**(code **)(*plVar11 + 0xa0))();
                        }
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
                      }
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
                      if (cVar4 != '\0') goto LAB_03c9c4e0;
LAB_03c9c5f0:
                      pRVar8 = pRVar2;
                      if (lVar5 == 0) break;
                    }
                    cVar4 = PlantRestrictionSet::IsIncluded((Plant *)(lVar5 + 0x1c0));
                    if (cVar4 != '\0') {
                      DangerRoomNewPlantInfo::DangerRoomNewPlantInfo
                                ((DangerRoomNewPlantInfo *)&local_18);
                      pPVar9 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
                      Plant::GetType();
                      local_c = PlantNameMapperServerID::GetIdForType(pPVar9,aRStack_20);
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
                      local_18 = iVar12;
                      local_14 = iVar14;
                      local_10 = FUN_03c932f0(*(undefined4 *)(pRVar8 + 0x50));
                      std::vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>>::
                      push_back((vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>>
                                 *)in_x8,(DangerRoomNewPlantInfo *)&local_18);
                    }
                    break;
                  }
                }
              }
            }
LAB_03c9c384:
            iVar12 = iVar12 + 1;
            pBVar13 = *(Board **)(gLawnApp + 0x9f0);
            if (*(int *)(pBVar13 + 0xfc) <= iVar12) goto LAB_03c9c7f0;
          }
          lVar7 = FUN_03c977b0(iVar14,iVar12);
          if (lVar7 != 0) {
            DangerRoomNewPlantInfo::DangerRoomNewPlantInfo((DangerRoomNewPlantInfo *)&local_18);
            pPVar9 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
            psVar10 = (string *)
                      Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
            std::string::string(asStack_28,"powerplant");
            ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
            local_c = PlantNameMapperServerID::GetIdForType(pPVar9,aRStack_20);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
            std::string::~string(asStack_28);
            nop();
            local_10 = 1;
            local_18 = iVar12;
            local_14 = iVar14;
            std::vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>>::push_back
                      ((vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>> *)
                       in_x8,(DangerRoomNewPlantInfo *)&local_18);
          }
          pBVar13 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string((string *)&local_18,"lilypad");
          lVar7 = Board::GetGridItemAt(pBVar13,(string *)&local_18,iVar14,iVar12);
          std::string::~string((string *)&local_18);
          nop();
          if (lVar7 == 0) goto LAB_03c9c384;
          DangerRoomNewPlantInfo::DangerRoomNewPlantInfo((DangerRoomNewPlantInfo *)&local_18);
          pPVar9 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
          psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          std::string::string(asStack_28,"lilypad");
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
          local_c = PlantNameMapperServerID::GetIdForType(pPVar9,aRStack_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
          std::string::~string(asStack_28);
          nop();
          local_10 = 1;
          iVar1 = iVar12 + 1;
          local_18 = iVar12;
          local_14 = iVar14;
          std::vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>>::push_back
                    ((vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>> *)in_x8,
                     (DangerRoomNewPlantInfo *)&local_18);
          pBVar13 = *(Board **)(gLawnApp + 0x9f0);
          iVar12 = iVar1;
        } while (iVar1 < *(int *)(pBVar13 + 0xfc));
      }
LAB_03c9c7f0:
      iVar14 = iVar14 + 1;
    } while (iVar14 < *(int *)(pBVar13 + 0xf8));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModule::onDangerRoomEnd(int, S2C_DangerRoomEndLevel const*) */

void __thiscall
DangerRoomModule::onDangerRoomEnd
          (DangerRoomModule *this,int param_1,S2C_DangerRoomEndLevel *param_2)

{
  DangerRoomManager *this_00;
  vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>> avStack_20 [24];
  long local_8;
  
  *(undefined4 *)(this + 0x114) = 0;
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_2 + 0x3c);
    StoredPlantInfos(this);
    std::vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>>::operator=
              ((vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>> *)
               (this + 0xa8),(vector *)avStack_20);
    std::vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>>::~vector(avStack_20);
    this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    DangerRoomManager::SetDangerRoomInfo(this_00,(DangerRoomInfo *)(this + 0x18),false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomModule::~DangerRoomModule() */

void __thiscall DangerRoomModule::~DangerRoomModule(DangerRoomModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0675ba20;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  S2C_DangerRoomConsumeData::~S2C_DangerRoomConsumeData((S2C_DangerRoomConsumeData *)(this + 0xd8));
  std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0xc0));
  DangerRoomInfo::~DangerRoomInfo((DangerRoomInfo *)(this + 0x18));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* DangerRoomModule::~DangerRoomModule() */

void __thiscall DangerRoomModule::~DangerRoomModule(DangerRoomModule *this)

{
  ~DangerRoomModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModule::onGameplayEnded() */

void __thiscall DangerRoomModule::onGameplayEnded(DangerRoomModule *this)

{
  LawnApp *this_00;
  DangerRoomModule DVar1;
  char cVar2;
  bool bVar3;
  DangerRoomModule DVar4;
  int iVar5;
  undefined4 uVar6;
  Board *this_01;
  DangerRoomManager *pDVar7;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_04;
  S2C_DangerRoomRecord *pSVar8;
  byte *pbVar9;
  int *piVar10;
  PowerupManager *pPVar11;
  long lVar12;
  string *psVar13;
  long lVar14;
  WorldMapCamera *this_05;
  DangerRoomInfo *pDVar15;
  NetworkMgr *this_06;
  WaveManager *this_07;
  uint *puVar16;
  S2C_DangerRoomConsumeData *pSVar17;
  Board *this_08;
  undefined8 uVar18;
  float fVar19;
  uint local_1b4;
  string local_1b0 [8];
  string local_1a8 [8];
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198 [12];
  uint local_168 [36];
  vector avStack_d8 [24];
  S2C_DangerRoomRecord aSStack_c0 [32];
  undefined8 local_a0;
  int local_88;
  undefined4 local_84;
  undefined4 local_58;
  undefined4 local_4c;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  local_8 = ___stack_chk_guard;
  iVar5 = Board::GetBoardResult(this_01);
  if (iVar5 == 5) goto LAB_03c9cd4c;
  pDVar7 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  cVar2 = DangerRoomManager::IsTrainingMode(pDVar7);
  if (cVar2 != '\0') {
    StoredPlantInfos(this);
    std::vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>>::operator=
              ((vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>> *)
               (this + 0xa8),(vector *)aSStack_c0);
    std::vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>>::~vector
              ((vector<DangerRoomNewPlantInfo,std::allocator<DangerRoomNewPlantInfo>> *)aSStack_c0);
    pDVar7 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    DangerRoomManager::HandleLevelEnd(pDVar7,(DangerRoomInfo *)(this + 0x18));
    pDVar7 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    DangerRoomManager::ShowEndLevel(pDVar7,false);
    goto LAB_03c9cd4c;
  }
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  pDVar7 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  DangerRoomManager::SetDangerRoomInfo(pDVar7,(DangerRoomInfo *)(this + 0x18),false);
  this_04 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  pSVar8 = (S2C_DangerRoomRecord *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_04);
  S2C_DangerRoomRecord::S2C_DangerRoomRecord(aSStack_c0,pSVar8);
  this_08 = *(Board **)(gLawnApp + 0x9f0);
  local_58 = Board::GetSunCurrency(this_08);
  local_198[0] = 0;
  local_1b0[0] = (string)Board::GetPlantfoodCount(this_08);
  local_1a8[0] = (string)Board::GetPlantfoodMax(this_08);
  pbVar9 = std::min<unsigned_char>((uchar *)local_1b0,(uchar *)local_1a8);
  local_168[0] = (uint)*pbVar9;
  piVar10 = eastl::max_alt<int>((int *)local_198,(int *)local_168);
  local_88 = *piVar10;
  local_84 = GetPlantFoodBuyCount();
  pPVar11 = Board::GetGameSubSystem<PowerupManager>(*(Board **)(gLawnApp + 0x9f0));
  local_4c = FUN_03c93314(*(undefined4 *)(pPVar11 + 0x44));
  uVar18 = *(undefined8 *)(this + 0xc0);
  lVar12 = FUN_03c9331c(uVar18,*(undefined8 *)(this + 200));
  lVar14 = 0;
  while (lVar14 + 1 != lVar12 + 1) {
    puVar16 = (uint *)FUN_03c9375c(local_a0,lVar14);
    pbVar9 = (byte *)FUN_03c93764(uVar18,lVar14);
    *puVar16 = (uint)*pbVar9;
    lVar14 = lVar14 + 1;
  }
  Board::GetGameSubSystem<CthulhuSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  CthulhuSubSystem::GenerateDangerroomInfo();
  bVar3 = std::operator!=(local_1a8,"");
  if (bVar3) {
    lVar12 = FUN_03c9376c(local_20,local_18);
    lVar14 = 0;
    do {
      if (lVar14 == lVar12) {
        std::vector<CthulhuDangerroomInfo,std::allocator<CthulhuDangerroomInfo>>::push_back
                  ((vector<CthulhuDangerroomInfo,std::allocator<CthulhuDangerroomInfo>> *)&local_20,
                   (CthulhuDangerroomInfo *)local_1a8);
        goto LAB_03c9cc38;
      }
      psVar13 = (string *)FUN_03c93778(local_20,lVar14);
      cVar2 = std::operator==(local_1a8,psVar13);
      lVar14 = lVar14 + 1;
    } while (cVar2 == '\0');
    *(undefined4 *)(psVar13 + 8) = local_1a0;
    *(undefined4 *)(psVar13 + 0xc) = local_19c;
  }
LAB_03c9cc38:
  pDVar7 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  DangerRoomManager::SetRecord(pDVar7,aSStack_c0);
  iVar5 = Board::GetBoardResult(this_01);
  DVar1 = (DangerRoomModule)(iVar5 == 1);
  local_1b4 = 0;
  if (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) {
LAB_03c9cdcc:
    pSVar17 = (S2C_DangerRoomConsumeData *)0x0;
  }
  else {
    lVar14 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    if ((lVar14 == 0) ||
       (lVar14 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
       *(char *)(lVar14 + 0x113) == '\0')) {
      lVar14 = Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
      if (lVar14 == 0) goto LAB_03c9cdcc;
      lVar14 = Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
      local_1b4 = FUN_03c932f8(*(undefined4 *)(lVar14 + 0x28));
      this_07 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
      iVar5 = WaveManager::GetWaveCount(this_07);
      local_168[0] = iVar5 - 1;
      puVar16 = (uint *)eastl::min_alt<int>((int *)&local_1b4,(int *)local_168);
      local_1b4 = *puVar16;
      pSVar17 = (S2C_DangerRoomConsumeData *)(ulong)local_1b4;
    }
    else {
      local_1b4 = GetBossStage();
      pSVar17 = (S2C_DangerRoomConsumeData *)(ulong)local_1b4;
    }
  }
  uVar6 = PlayerInfo::GetNumGems(this_03,false);
  *(undefined4 *)(this + 0xec) = uVar6;
  this_05 = (WorldMapCamera *)Sexy::LazySingleton<DaveTaskManager>::GetInstancePtr();
  WorldMapCamera::SetUseClipViewport(this_05,(bool)DVar1);
  pDVar7 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  pDVar15 = (DangerRoomInfo *)DangerRoomManager::GetDangerRoomInfo(pDVar7,false);
  DangerRoomInfo::DangerRoomInfo((DangerRoomInfo *)local_168,pDVar15);
  DVar4 = (DangerRoomModule)CheckCheating(this,avStack_d8);
  this_00 = gLawnApp;
  if (DVar4 != (DangerRoomModule)0x0) {
    std::string::string(local_1b0,"[REVIVE_TIP]");
    std::string::string((string *)local_198,"[YOU_ARE_CHEATING_NOW]");
    LawnApp::ShowMessageDialogNoCallback(this_00,local_1b0,(string *)local_198);
    std::string::~string((string *)local_198);
    nop();
    std::string::~string(local_1b0);
    nop();
  }
  this_06 = (NetworkMgr *)NetworkMgr::Instance();
  bVar3 = (bool)NetworkMgr::GetNewNetWorkProcess(this_06);
  cVar2 = INetworkMsgProcess::RequestDangerRoomEndLevel
                    (bVar3,(uint)(byte)DVar1,pSVar17,(bool)((char)this + -0x28));
  if (cVar2 == '\0') {
    pDVar7 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    DangerRoomManager::ShowEndLevel(pDVar7,true);
    INetworkErrorData::INetworkErrorData((INetworkErrorData *)local_198,0x4e21);
    INetworkMsgProcess::ShowErrorMessage((INetworkErrorData *)local_198);
    INetworkErrorData::~INetworkErrorData((INetworkErrorData *)local_198);
  }
  else {
    cVar2 = LawnApp::IsServiceAvailable(gLawnApp,0x1000000);
    if (cVar2 != '\0') {
      this[0x11c] = DVar1;
      *(int *)(this + 0x120) = (int)pSVar17;
      this[0x124] = DVar4;
      fVar19 = (float)PVZ_T();
      *(float *)(this + 0x114) = fVar19 + 10.0;
    }
  }
  DangerRoomInfo::~DangerRoomInfo((DangerRoomInfo *)local_168);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)local_1a8);
  S2C_DangerRoomRecord::~S2C_DangerRoomRecord(aSStack_c0);
LAB_03c9cd4c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModule::onPlantAdded(Plant*) */

void __thiscall DangerRoomModule::onPlantAdded(DangerRoomModule *this,Plant *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  DangerRoomManager *this_01;
  long lVar4;
  RtWeakPtr aRStack_40 [8];
  string asStack_38 [8];
  undefined8 local_30;
  undefined8 local_28 [2];
  int local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  cVar1 = DangerRoomManager::IsTrainingMode(this_01);
  if ((cVar1 != '\0') || (cVar1 = FUN_03c932f4(param_1[0x18a]), cVar1 != '\0')) goto LAB_03c9f6a8;
  Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
  ArtifactMgr::GetActivatedArtifact();
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_40);
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    EntityComponent_GroundEffect::GetEffect();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
    bVar2 = std::operator==((string *)(lVar4 + 0x10),"artifact_evolution");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
    if (!bVar2) goto LAB_03c9f6f8;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_28,(RtWeakPtrBase *)aRStack_40);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
    cVar1 = FUN_03c93318(*(undefined1 *)(lVar4 + 0xb0));
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
      goto LAB_03c9f6f8;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
  }
  else {
LAB_03c9f6f8:
    Plant::GetType();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
    FUN_05475d88(asStack_38,lVar4 + 8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
    bVar2 = std::operator==(asStack_38,"carrotmissile");
    if ((((!bVar2) && (bVar2 = std::operator==(asStack_38,"smallChestnut"), !bVar2)) &&
        (bVar2 = std::operator==(asStack_38,"smallcherry"), !bVar2)) &&
       ((bVar2 = std::operator==(asStack_38,"smallcactus"), !bVar2 &&
        (bVar2 = std::operator==(asStack_38,"hollybarrierleaf"), !bVar2)))) {
      ServerPlantID::ServerPlantID((ServerPlantID *)local_28,asStack_38);
      iVar3 = ImageLib::Image::GetWidth((Image *)local_28);
      if (iVar3 != 0) {
        this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0xf8);
        local_30 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(this_00);
        local_28[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(this_00);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_30,(__normal_iterator *)local_28),
              bVar2) {
          lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
          if (*(int *)(lVar4 + 0x14) == iVar3) {
            *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
            goto LAB_03c9f73c;
          }
          std::move_iterator<SexyURL::KeyedValue*>::operator++
                    ((move_iterator<SexyURL::KeyedValue*> *)&local_30);
        }
        S2C_DangerRoomPlantNum::S2C_DangerRoomPlantNum((S2C_DangerRoomPlantNum *)local_28);
        local_10 = 1;
        local_14 = iVar3;
        std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::push_back
                  ((vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)this_00,
                   (S2C_DangerRoomPlantNum *)local_28);
        S2C_DangerRoomPlantNum::~S2C_DangerRoomPlantNum((S2C_DangerRoomPlantNum *)local_28);
      }
    }
LAB_03c9f73c:
    std::string::~string(asStack_38);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
LAB_03c9f6a8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

