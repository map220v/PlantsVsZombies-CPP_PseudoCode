// Class: NewPVPGameModule


/* NewPVPGameModule::checkWin() */

NewPVPGameModule __thiscall NewPVPGameModule::checkWin(NewPVPGameModule *this)

{
  return this[0x18];
}


/* NewPVPGameModule::~NewPVPGameModule() */

void __thiscall NewPVPGameModule::~NewPVPGameModule(NewPVPGameModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06646fb0;
  ScaledBoardModule::~ScaledBoardModule((ScaledBoardModule *)this);
  return;
}


/* NewPVPGameModule::~NewPVPGameModule() */

void __thiscall NewPVPGameModule::~NewPVPGameModule(NewPVPGameModule *this)

{
  ~NewPVPGameModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameModule::StaticClassInit() */

void NewPVPGameModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPGameModule");
    (*pcVar2)(plVar1,asStack_10,FUN_034b904c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPGameModule::StaticGetClass() */

long * NewPVPGameModule::StaticGetClass(void)

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
  uVar2 = ScaledBoardModule::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPGameModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPGameModule::NewPVPGameModule() */

void __thiscall NewPVPGameModule::NewPVPGameModule(NewPVPGameModule *this)

{
  ScaledBoardModule::ScaledBoardModule((ScaledBoardModule *)this);
  this[0x18] = (NewPVPGameModule)0x0;
  this[0x19] = (NewPVPGameModule)0x0;
  this[0x1a] = (NewPVPGameModule)0x0;
  *(undefined ***)this = &PTR_GetModuleClass_06646fb0;
  return;
}


/* NewPVPGameModule::StaticNew() */

NewPVPGameModule * NewPVPGameModule::StaticNew(void)

{
  NewPVPGameModule *this;
  
  this = ::operator_new(0x20);
  NewPVPGameModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameModule::generateFPSCounter() */

void NewPVPGameModule::generateFPSCounter(void)

{
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UINewPVPFPSCounter");
  UIWidget::CreateWidget(aRStack_18,0);
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameModule::generatePlantNumCounter() */

void NewPVPGameModule::generatePlantNumCounter(void)

{
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UIChallengePlantSurviveNewPVP");
  UIWidget::CreateWidget(aRStack_18,0);
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameModule::onZombieAddedToBoard(Zombie*) */

void __thiscall NewPVPGameModule::onZombieAddedToBoard(NewPVPGameModule *this,Zombie *param_1)

{
  char cVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x290))(asStack_18,param_1);
  cVar1 = std::operator==(asStack_18,(string *)&DAT_06aa3d28);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1 + 0x290))(asStack_10,param_1);
    cVar1 = std::operator==(asStack_10,(string *)&DAT_06aa3e60);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    if (cVar1 == '\0') goto LAB_034c2f00;
  }
  else {
    std::string::~string(asStack_18);
  }
  if (*(code **)(*(long *)param_1 + 0x280) != Zombie::StartJamming) {
    (**(code **)(*(long *)param_1 + 0x280))(param_1);
  }
LAB_034c2f00:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* NewPVPGameModule::initializeModule() */

void NewPVPGameModule::initializeModule(void)

{
  Board::CreateGameSubSystem<NewPVPDataSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  Board::CreateGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* NewPVPGameModule::onGameplayEnded() */

void NewPVPGameModule::onGameplayEnded(void)

{
  NewPVPDataSubsystem *this;
  
  this = Board::GetGameSubSystem<NewPVPDataSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  ZombieActionHandler::StartAction((ZombieActionHandler *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameModule::generateTestUpgrade() */

void NewPVPGameModule::generateTestUpgrade(void)

{
  int iVar1;
  int iVar2;
  RtObject *pRVar3;
  NewPVPTestButton *pNVar4;
  undefined1 auStack_28 [8];
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpaceX(3);
  iVar1 = FUN_034b73dc();
  BoardTransforms::GridToBoardSpaceY(7);
  iVar2 = FUN_034b73dc();
  Sexy::Point::Point((Point *)&local_20,iVar1,iVar2);
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar1 = FUN_034b73dc(iVar1 / 2 + 0x18);
  local_1c = local_1c - iVar1;
  Board::TranslateBoardPositionToScreenPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_20);
  Board::GetBoardBaseOffset();
  Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_20,(TPoint *)&local_18);
  Sexy::RtName::RtName((RtName *)&local_18,L"UINewPVPTestButton");
  pRVar3 = (RtObject *)UIWidget::CreateWidget((RtName *)&local_18,0);
  pNVar4 = Sexy::RtObject::Cast<NewPVPTestButton>(pRVar3);
  Sexy::RtName::~RtName((RtName *)&local_18);
  NewPVPTestButton::SetType(pNVar4,1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)local_20,(float)local_1c);
  UIWidget::SetPositionOffset(local_18,local_14,pNVar4);
  FUN_05478178((RtName *)&local_18,L"[NEW_PVP_UPGRADE_TEST_BUTTON_HP]",auStack_28);
  ArenaOccupyQuitButton::SetLabel((wstring *)pNVar4);
  FUN_05476c50((RtName *)&local_18);
  nop();
  UIWidget::SetClickable((UIWidget *)pNVar4,false);
  iVar1 = FUN_034ad7d0(*(undefined4 *)(pNVar4 + 0x38));
  local_20 = local_20 + iVar1;
  Sexy::RtName::RtName((RtName *)&local_18,L"UINewPVPTestButton");
  pRVar3 = (RtObject *)UIWidget::CreateWidget((RtName *)&local_18,0);
  pNVar4 = Sexy::RtObject::Cast<NewPVPTestButton>(pRVar3);
  Sexy::RtName::~RtName((RtName *)&local_18);
  NewPVPTestButton::SetType(pNVar4,3);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)local_20,(float)local_1c);
  UIWidget::SetPositionOffset(local_18,local_14,pNVar4);
  FUN_05478178((RtName *)&local_18,L"[NEW_PVP_UPGRADE_TEST_BUTTON_ATTACK]",auStack_28);
  ArenaOccupyQuitButton::SetLabel((wstring *)pNVar4);
  FUN_05476c50((RtName *)&local_18);
  nop();
  UIWidget::SetClickable((UIWidget *)pNVar4,false);
  iVar1 = FUN_034ad7d0(*(undefined4 *)(pNVar4 + 0x38));
  local_20 = local_20 + iVar1;
  Sexy::RtName::RtName((RtName *)&local_18,L"UINewPVPTestButton");
  pRVar3 = (RtObject *)UIWidget::CreateWidget((RtName *)&local_18,0);
  pNVar4 = Sexy::RtObject::Cast<NewPVPTestButton>(pRVar3);
  Sexy::RtName::~RtName((RtName *)&local_18);
  NewPVPTestButton::SetType(pNVar4,4);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)local_20,(float)local_1c);
  UIWidget::SetPositionOffset(local_18,local_14,pNVar4);
  FUN_05478178((RtName *)&local_18,L"[NEW_PVP_UPGRADE_TEST_BUTTON_INVISIBLE]",auStack_28);
  ArenaOccupyQuitButton::SetLabel((wstring *)pNVar4);
  FUN_05476c50((RtName *)&local_18);
  nop();
  UIWidget::SetClickable((UIWidget *)pNVar4,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameModule::onZombieCloseToHouse(Zombie*) */

void __thiscall NewPVPGameModule::onZombieCloseToHouse(NewPVPGameModule *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  NewPVPGameSubsystem *pNVar7;
  SexyVector3 *pSVar8;
  code *pcVar9;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (Zombie *)0x0) || (cVar1 = FUN_034ad7c0(param_1[0xa0]), cVar1 == '\0')) {
    iVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
    iVar5 = SharkMinion::getRow((SharkMinion *)param_1);
    pNVar7 = Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    cVar1 = NewPVPGameSubsystem::IsSpawnedZombie((Zombie *)pNVar7);
    if (cVar1 != '\0') {
      pNVar7 = Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      iVar6 = NewPVPGameSubsystem::GetZombieCost(pNVar7,param_1);
      if (0 < iVar6) {
        pSVar8 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)param_1);
        Board::FanOutSun(*(Board **)(gLawnApp + 0x9f0),pSVar8,iVar6,false,false,true,false,false);
      }
    }
    pcVar9 = *(code **)(*(long *)param_1 + 0x120);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,aDStack_68,4,0,aPStack_78,0);
    (*pcVar9)(param_1,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
    bVar2 = Sexy::RtObject::IsA<ZombiePirateBarrel>((RtObject *)param_1);
    if (!bVar2) {
      Sexy::Point::Point((Point *)&local_70,iVar4,iVar5);
      cVar1 = NewPVPUtils::IsConcreteRegion((Point *)&local_70);
      bVar3 = 0;
      if (cVar1 == '\0') {
        Sexy::Point::Point((Point *)aDStack_68,iVar4,iVar5);
        bVar3 = NewPVPUtils::IsOppoentRegion((Point *)aDStack_68);
        bVar3 = bVar3 ^ 1;
      }
      pNVar7 = Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aDStack_68);
      NewPVPGameSubsystem::TriggerEvent
                ((NewPVPGameSubsystem *)0xbf800000,pNVar7,0,bVar3,10,0xffffffff,0xffffffff,
                 0xffffffff,0,aDStack_68);
      std::vector<float,std::allocator<float>>::~vector
                ((vector<float,std::allocator<float>> *)aDStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPGameModule::onNewPVPCompleteTask(int) */

void __thiscall NewPVPGameModule::onNewPVPCompleteTask(NewPVPGameModule *this,int param_1)

{
  char cVar1;
  NewPVPGameModule NVar2;
  long lVar3;
  NewPVPMgr *pNVar4;
  
  lVar3 = Sexy::LazySingleton<NewPVPTaskManager>::GetInstancePtr();
  lVar3 = HappyVaseBreakerTaskManager::GetTaskByID
                    ((HappyVaseBreakerTaskManager *)(lVar3 + 8),param_1);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 0x20));
  if (*(int *)(lVar3 + 0xc) == 1) {
    cVar1 = NewPVPUtils::IsPlayingNewPVPTutorial();
    if (cVar1 == '\0') {
      pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      NVar2 = (NewPVPGameModule)NewPVPMgr::IsThirdSeason(pNVar4);
      this[0x19] = NVar2;
    }
    else {
      this[0x19] = (NewPVPGameModule)0x0;
    }
    return;
  }
  if (*(int *)(lVar3 + 0xc) != 2) {
    return;
  }
  cVar1 = NewPVPUtils::IsPlayingNewPVPTutorial();
  if (cVar1 == '\0') {
    pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    NVar2 = (NewPVPGameModule)NewPVPMgr::IsThirdSeason(pNVar4);
    this[0x1a] = NVar2;
  }
  else {
    this[0x1a] = (NewPVPGameModule)0x0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameModule::initializeAreas() */

void NewPVPGameModule::initializeAreas(void)

{
  bool bVar1;
  _Head_base *p_Var2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  long *extraout_x0;
  code *pcVar6;
  _Head_base<1ul,Sexy::RtWeakPtr<PlantType_const>,false> a_Stack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<NewPVPMgr>::GetInstance();
  NewPVPMgr::GetAreaList();
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    p_Var2 = (_Head_base *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    std::_Head_base<1ul,Sexy::RtWeakPtr<PlantType_const>,false>::_Head_base(a_Stack_40,p_Var2);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
    pcVar4 = (char *)FUN_0547429c(lVar3 + 0x18);
    uVar5 = Sexy::RtClass::StaticGetClassNamed(pcVar4);
    GameObject::Create(uVar5,0x85);
    nop();
    pcVar6 = *(code **)(*extraout_x0 + 0x78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)a_Stack_40);
    (*pcVar6)(extraout_x0,aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    (**(code **)(*extraout_x0 + 0x80))(extraout_x0);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)a_Stack_40);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<AreaData,std::allocator<AreaData>>::~vector
            ((vector<AreaData,std::allocator<AreaData>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameModule::onInit() */

void NewPVPGameModule::onInit(void)

{
  bool bVar1;
  _Head_base *p_Var2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  long *extraout_x0;
  code *pcVar6;
  _Head_base<1ul,Sexy::RtWeakPtr<PlantType_const>,false> a_Stack_40 [8];
  undefined8 uStack_38;
  undefined8 uStack_30;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Sexy::LazySingleton<NewPVPMgr>::GetInstance();
  NewPVPMgr::GetAreaList();
  uStack_38 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(avStack_20);
  uStack_30 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&uStack_38,(__normal_iterator *)&uStack_30), bVar1)
  {
    p_Var2 = (_Head_base *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_38);
    std::_Head_base<1ul,Sexy::RtWeakPtr<PlantType_const>,false>::_Head_base(a_Stack_40,p_Var2);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
    pcVar4 = (char *)FUN_0547429c(lVar3 + 0x18);
    uVar5 = Sexy::RtClass::StaticGetClassNamed(pcVar4);
    GameObject::Create(uVar5,0x85);
    nop();
    pcVar6 = *(code **)(*extraout_x0 + 0x78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)a_Stack_40);
    (*pcVar6)(extraout_x0,aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    (**(code **)(*extraout_x0 + 0x80))(extraout_x0);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)a_Stack_40);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&uStack_38);
  }
  std::vector<AreaData,std::allocator<AreaData>>::~vector
            ((vector<AreaData,std::allocator<AreaData>> *)avStack_20);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameModule::generateHealthBars() */

void NewPVPGameModule::generateHealthBars(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  NewPVPMgr *pNVar7;
  Network_PlayerSyncData *pNVar8;
  SecretGachaMgr *this;
  RtObject *pRVar9;
  NewPVPHealthBar *pNVar10;
  ProfileMgr *this_00;
  long lVar11;
  wstring *extraout_x1;
  wstring *pwVar12;
  string *extraout_x1_00;
  wstring *extraout_x1_01;
  uint uVar13;
  string asStack_150 [8];
  int local_148;
  int local_144;
  Sexy aSStack_140 [8];
  undefined1 auStack_138 [8];
  int local_130;
  int local_12c;
  undefined4 local_128;
  undefined4 local_124;
  Network_PlayerSyncData aNStack_118 [24];
  int local_100;
  Network_PlayerSyncData aNStack_90 [16];
  Sexy aSStack_80 [8];
  int local_78;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar7 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  pNVar8 = (Network_PlayerSyncData *)NewPVPMgr::GetSelfPlayerData(pNVar7);
  Network_PlayerSyncData::Network_PlayerSyncData(aNStack_118,pNVar8);
  pNVar7 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  pNVar8 = (Network_PlayerSyncData *)NewPVPMgr::GetOppoentPlayerData(pNVar7);
  this = (SecretGachaMgr *)Network_PlayerSyncData::Network_PlayerSyncData(aNStack_90,pNVar8);
  SecretGachaMgr::GetScreenType(this);
  cVar1 = (**(code **)(*gLawnApp + 0x360))(gLawnApp);
  if (cVar1 == '\0') {
    bVar2 = std::operator==(asStack_150,"Large");
    uVar13 = bVar2 ^ 1;
    bVar2 = std::operator==(asStack_150,"Large");
    iVar6 = 7;
    iVar3 = 0;
    if (!bVar2) {
      iVar6 = 8;
    }
  }
  else {
    uVar13 = 0;
    iVar6 = 7;
    (**(code **)(*gLawnApp + 0x368))(gLawnApp);
    iVar3 = FUN_034b73dc();
  }
  BoardTransforms::GridToBoardSpaceX(uVar13);
  iVar4 = FUN_034b73dc();
  BoardTransforms::GridToBoardSpaceY(3);
  iVar5 = FUN_034b73dc();
  Sexy::Point::Point((Point *)&local_148,iVar4,iVar5);
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar4 = FUN_034b73dc(iVar4 / 2);
  local_148 = local_148 - iVar4;
  iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar4 = FUN_034b73dc(iVar4 / 2 + 0x18);
  local_144 = local_144 - iVar4;
  Board::TranslateBoardPositionToScreenPosition((Board *)gLawnApp[0x13e],(Point *)&local_148);
  Board::GetBoardBaseOffset();
  Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_148,(TPoint *)&local_128);
  Sexy::RtName::RtName((RtName *)&local_128,L"UINewPVPHealthBar");
  pRVar9 = (RtObject *)UIWidget::CreateWidget((RtName *)&local_128,0);
  pNVar10 = Sexy::RtObject::Cast<NewPVPHealthBar>(pRVar9);
  Sexy::RtName::~RtName((RtName *)&local_128);
  FUN_034ad92c(pNVar10 + 0x170,0);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_128,(float)(local_148 - iVar3),(float)local_144);
  UIWidget::SetPositionOffset(local_128,local_124,pNVar10);
  NewPVPHealthBar::SetHeadShotID(pNVar10,local_100);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar11 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar11 == 0) {
    FUN_05478178(aSStack_140,L"-invalid-",(RtName *)&local_128);
    nop();
    pwVar12 = extraout_x1_01;
  }
  else {
    PlayerInfo::AM_GetName();
    pwVar12 = extraout_x1;
  }
  Sexy::ToWString(aSStack_140,pwVar12);
  FUN_05477b24((RtName *)&local_128,auStack_138);
  NewPVPHealthBar::SetPlayerNameSexyStr(pNVar10,(RtName *)&local_128);
  FUN_05476c50((RtName *)&local_128);
  BoardTransforms::GridToBoardSpaceX(iVar6);
  iVar6 = FUN_034b73dc();
  BoardTransforms::GridToBoardSpaceY(3);
  iVar4 = FUN_034b73dc();
  Sexy::Point::Point((Point *)&local_130,iVar6,iVar4);
  BoardConstants::GRIDSQUARE_WIDTH();
  iVar6 = FUN_034b73dc();
  local_130 = local_130 + iVar6;
  iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar6 = FUN_034b73dc(iVar6 / 2 + 0x18);
  local_12c = local_12c - iVar6;
  Board::TranslateBoardPositionToScreenPosition((Board *)gLawnApp[0x13e],(Point *)&local_130);
  Board::GetBoardBaseOffset();
  Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_130,(TPoint *)&local_128);
  Sexy::RtName::RtName((RtName *)&local_128,L"UINewPVPHealthBar");
  pRVar9 = (RtObject *)UIWidget::CreateWidget((RtName *)&local_128,0);
  pNVar10 = Sexy::RtObject::Cast<NewPVPHealthBar>(pRVar9);
  Sexy::RtName::~RtName((RtName *)&local_128);
  FUN_034ad92c(pNVar10 + 0x170,1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_128,(float)(local_130 - iVar3),(float)local_12c);
  UIWidget::SetPositionOffset(local_128,local_124,pNVar10);
  NewPVPHealthBar::SetHeadShotID(pNVar10,local_78);
  Sexy::UTF8StringToWString(aSStack_80,extraout_x1_00);
  NewPVPHealthBar::SetPlayerNameSexyStr(pNVar10,(RtName *)&local_128);
  FUN_05476c50((RtName *)&local_128);
  FUN_05476c50(auStack_138);
  FUN_05476c50(aSStack_140);
  std::string::~string(asStack_150);
  Network_PlayerSyncData::~Network_PlayerSyncData(aNStack_90);
  Network_PlayerSyncData::~Network_PlayerSyncData(aNStack_118);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* NewPVPGameModule::onLoadComplete() */

void NewPVPGameModule::onLoadComplete(void)

{
  generateHealthBars();
  generateFPSCounter();
  generatePlantNumCounter();
  return;
}


/* NewPVPGameModule::onUpdate() */

void __thiscall NewPVPGameModule::onUpdate(NewPVPGameModule *this)

{
  char cVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  WaveManager *this_01;
  NewPVPGameSubsystem *pNVar3;
  NewPVPMgr *pNVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  lVar6 = *(long *)(gLawnApp + 0x9f0);
  iVar2 = FUN_034ad7e8(*(undefined4 *)(lVar6 + 0x104));
  if (iVar2 == 5) {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)FUN_034d3bac(*(undefined8 *)(lVar6 + 0xad8));
    if (this_00 !=
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         *)0x0) {
      this_01 = (WaveManager *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost(this_00);
      cVar1 = WaveManager::IsDone(this_01);
      if (cVar1 == '\0') {
        Board::CountZombiesOnScreen(*(Board **)(gLawnApp + 0x9f0),false);
        return;
      }
    }
    iVar2 = Board::CountZombiesOnScreen(*(Board **)(gLawnApp + 0x9f0),false);
    if (iVar2 == 0) {
      pNVar3 = Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      fVar7 = (float)FUN_034ad840(*(undefined4 *)(pNVar3 + 0xb0));
      pNVar3 = Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      fVar8 = (float)FUN_034ad844(*(undefined4 *)(pNVar3 + 0xbc));
      if (fVar7 <= fVar8) {
        if (fVar7 < fVar8) {
          pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
          uVar5 = 2;
        }
        else {
          pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
          uVar5 = 3;
        }
        NewPVPMgr::SetCurrentGameResult(pNVar4,uVar5);
        Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),9);
        return;
      }
      if (this[0x18] == (NewPVPGameModule)0x0) {
        this[0x18] = (NewPVPGameModule)0x1;
        pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
        NewPVPMgr::SetCurrentGameResult(pNVar4,1);
        return;
      }
    }
  }
  return;
}


/* NewPVPGameModule::onNotifyHealthEmpty(bool) */

void __thiscall NewPVPGameModule::onNotifyHealthEmpty(NewPVPGameModule *this,bool param_1)

{
  NewPVPMgr *pNVar1;
  
  if (!param_1) {
    this[0x18] = (NewPVPGameModule)0x1;
    pNVar1 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    NewPVPMgr::SetCurrentGameResult(pNVar1,1);
    return;
  }
  pNVar1 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  NewPVPMgr::SetCurrentGameResult(pNVar1,2);
  Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),9);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameModule::registerForEvents() */

void __thiscall NewPVPGameModule::registerForEvents(NewPVPGameModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
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
  ScaledBoardModule::registerForEvents((ScaledBoardModule *)this);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<NewPVPGameModule,void(NewPVPGameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,checkWin);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<NewPVPGameModule,bool(NewPVPGameModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterWinCondition(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieCloseToHouse);
  local_b0 = local_88;
  local_c0 = local_98;
  uStack_b8 = uStack_90;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<NewPVPGameModule,void(NewPVPGameModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieCloseToHouse,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyHealthEmpty);
  local_e0 = local_80;
  uStack_d8 = uStack_78;
  local_d0 = local_70;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<NewPVPGameModule,void(NewPVPGameModule::*)(bool)>>
            ((MessageRouter *)puVar1,Message::NotifyHealthEmpty,&local_e0);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onInit);
  Sexy::Delegate0::Delegate0<NewPVPGameModule,void(NewPVPGameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelInit(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<NewPVPGameModule,void(NewPVPGameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<NewPVPGameModule,void(NewPVPGameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNewPVPCompleteTask);
  local_f0 = local_58;
  local_100 = local_68;
  uStack_f8 = uStack_60;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<NewPVPGameModule,void(NewPVPGameModule::*)(int)>>
            ((MessageRouter *)puVar1,Message::NewPVPCompleteTask,&local_100);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieAddedToBoard);
  local_c0 = local_50;
  uStack_b8 = uStack_48;
  local_b0 = local_40;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<NewPVPGameModule,void(NewPVPGameModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

