// Class: BesiegeModule


/* BesiegeModule::preventSave() */

undefined8 BesiegeModule::preventSave(void)

{
  return 1;
}


/* BesiegeModule::levelStarted() */

void BesiegeModule::levelStarted(void)

{
  return;
}


/* BesiegeModule::onZombieKilled(Zombie*, DamageInfo const*) */

void BesiegeModule::onZombieKilled(Zombie *param_1,DamageInfo *param_2)

{
  return;
}


/* BesiegeModule::cancelTouch() */

void BesiegeModule::cancelTouch(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeModule::StaticClassInit() */

void BesiegeModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"BesiegeModule");
    (*pcVar2)(plVar1,asStack_10,FUN_0478cf34,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BesiegeModule::StaticGetClass() */

long * BesiegeModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BesiegeModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BesiegeModule::SetTutorial(bool) */

void __thiscall BesiegeModule::SetTutorial(BesiegeModule *this,bool param_1)

{
  this[0x1f] = (BesiegeModule)param_1;
  return;
}


/* BesiegeModule::IsInTutorial() */

BesiegeModule __thiscall BesiegeModule::IsInTutorial(BesiegeModule *this)

{
  return this[0x1f];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeModule::loadComplete() */

void BesiegeModule::loadComplete(void)

{
  UIWidget *this;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UITowerDefendUpgrade");
  this = (UIWidget *)UIWidget::CreateWidget(aRStack_18,0);
  Sexy::RtName::~RtName(aRStack_18);
  UIWidget::SetIgnoreParentVisibility(this,true);
  FUN_0478af84(this + 0x81,this + 0x82);
  UIWidget::SetVisible(this,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeModule::SolveBesiegeIntro(Sexy::Touch const&) */

void __thiscall BesiegeModule::SolveBesiegeIntro(BesiegeModule *this,Touch *param_1)

{
  char cVar1;
  long *plVar2;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIShovel");
  plVar2 = (long *)UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (plVar2 != (long *)0x0) {
    UIWidget::GetDrawRect();
    cVar1 = Sexy::TRect<int>::Contains
                      ((TRect<int> *)asStack_18,*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14));
    if (cVar1 != '\0') {
      (**(code **)(*plVar2 + 0xa0))(plVar2,param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BesiegeModule::onUpdate() */

void __thiscall BesiegeModule::onUpdate(BesiegeModule *this)

{
  float fVar1;
  undefined4 uVar2;
  
  if ((this[0x1d] == (BesiegeModule)0x0) &&
     (fVar1 = (float)PVZ_T(), *(float *)(this + 0x24) < fVar1)) {
    uVar2 = PVZ_EOT();
    this[0x1e] = (BesiegeModule)0x1;
    *(undefined4 *)(this + 0x24) = uVar2;
    LawnApp::ShowReviveUI(gLawnApp,0xb);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeModule::calcNextGrid(int, int, int, bool) */

void BesiegeModule::calcNextGrid(int param_1,int param_2,int param_3,bool param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CRefSymbolDb *this;
  BesiegeMazeMap *this_00;
  char in_w4;
  Point *in_x8;
  undefined4 uVar4;
  Point aPStack_10 [8];
  long local_8;
  
  this = (CRefSymbolDb *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_10,param_2,param_3);
  this_00 = (BesiegeMazeMap *)Reflection::CRefSymbolDb::GetClasses(this);
  iVar1 = BesiegeMazeMap::calcGridHeight(this_00,param_2,param_3);
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  if (iVar2 < param_2) {
    iVar2 = param_2 + -1;
  }
  else {
    if (iVar1 == 0) {
      if (in_w4 != '\0') {
        iVar1 = *(int *)(this + 0x18) - (uint)param_4;
        *(int *)(this + 0x18) = iVar1;
        if (iVar1 < 0) {
          *(undefined4 *)(this + 0x18) = 0;
        }
        else if (iVar1 != 0) goto LAB_0478c6c4;
        uVar4 = PVZ_T();
        *(undefined4 *)(this + 0x24) = uVar4;
      }
LAB_0478c6c4:
      Sexy::Point::Point(in_x8,-100,-100);
      goto LAB_0478c678;
    }
    iVar2 = param_2 + -1;
    iVar1 = iVar1 + -1;
    iVar3 = BesiegeMazeMap::calcGridHeight(this_00,iVar2,param_3);
    if (iVar1 != iVar3) {
      iVar2 = param_2 + 1;
      iVar3 = BesiegeMazeMap::calcGridHeight(this_00,iVar2,param_3);
      if (iVar1 != iVar3) {
        iVar2 = BesiegeMazeMap::calcGridHeight(this_00,param_2,param_3 + -1);
        if (iVar1 == iVar2) {
          Sexy::Point::Point(in_x8,param_2,param_3 + -1);
        }
        else {
          iVar2 = BesiegeMazeMap::calcGridHeight(this_00,param_2,param_3 + 1);
          if (iVar1 == iVar2) {
            Sexy::Point::Point(in_x8,param_2,param_3 + 1);
          }
          else {
            Sexy::Point::Point(in_x8,param_2,param_3);
          }
        }
        goto LAB_0478c678;
      }
    }
  }
  Sexy::Point::Point(in_x8,iVar2,param_3);
LAB_0478c678:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BesiegeModule::onZombieSpawned(Zombie*) */

void __thiscall BesiegeModule::onZombieSpawned(BesiegeModule *this,Zombie *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  if (param_1 == (Zombie *)0x0) {
    return;
  }
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  lVar4 = Board::GetWaveGenerator(*(Board **)(gLawnApp + 0x9f0));
  if ((pRVar3 != (ResilienceTutorialIntroProperties *)0x0) && (lVar4 != 0)) {
    iVar1 = FUN_0478aaac(*(undefined4 *)(lVar4 + 0x20));
    fVar6 = *(float *)(pRVar3 + 0x4c) * (float)iVar1 + 1.0;
    fVar5 = (float)FUN_0478aab8(*(undefined4 *)(param_1 + 0x284));
    Zombie::SetHitpoints(param_1,fVar6 * fVar5);
    fVar5 = (float)FUN_0478aab8(*(undefined4 *)(param_1 + 0x284));
    FUN_0478aab0(fVar6 * fVar5,param_1 + 0x284);
    uVar2 = FUN_0478aabc(*(undefined4 *)(param_1 + 0xb0));
    fVar5 = (float)FUN_0478aac0(*(undefined4 *)(param_1 + 0x2ac));
    Zombie::setHelm((Zombie *)(fVar6 * fVar5),param_1,uVar2);
    FUN_0478af78(param_1 + 0x54);
    return;
  }
  FUN_0478af78(param_1 + 0x54);
  return;
}


/* BesiegeModule::onReviveOK() */

void __thiscall BesiegeModule::onReviveOK(BesiegeModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(pRVar1 + 0x48);
  this[0x1e] = (BesiegeModule)0x0;
  return;
}


/* BesiegeModule::BesiegeModule() */

void __thiscall BesiegeModule::BesiegeModule(BesiegeModule *this)

{
  undefined4 uVar1;
  
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_068d96a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  Sexy::Point::Point((Point *)(this + 0x48));
  BesiegeMazeMap::BesiegeMazeMap((BesiegeMazeMap *)(this + 0x50));
  *(undefined4 *)(this + 0x18) = 0;
  this[0x1f] = (BesiegeModule)0x0;
  this[0x20] = (BesiegeModule)0x0;
  this[0x1c] = (BesiegeModule)0x0;
  this[0x1d] = (BesiegeModule)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x1e] = (BesiegeModule)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x24) = uVar1;
  LawnApp::AddModuleInfo(gLawnApp,4);
  return;
}


/* BesiegeModule::StaticNew() */

BesiegeModule * BesiegeModule::StaticNew(void)

{
  BesiegeModule *this;
  
  this = ::operator_new(0x1b0);
  BesiegeModule(this);
  return this;
}


/* BesiegeModule::~BesiegeModule() */

void __thiscall BesiegeModule::~BesiegeModule(BesiegeModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_068d96a0;
  LawnApp::RemoveModuleInfo(gLawnApp,4);
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 0x18))();
  }
  BesiegeMazeMap::~BesiegeMazeMap((BesiegeMazeMap *)(this + 0x50));
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x30));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* BesiegeModule::~BesiegeModule() */

void __thiscall BesiegeModule::~BesiegeModule(BesiegeModule *this)

{
  ~BesiegeModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeModule::onReviveCancel() */

void __thiscall BesiegeModule::onReviveCancel(BesiegeModule *this)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  this[0x1e] = (BesiegeModule)0x0;
  local_8 = ___stack_chk_guard;
  cVar1 = Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),0);
  if (cVar1 != '\0') {
    plVar2 = (long *)FUN_0478df14(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    pcVar3 = *(code **)(*plVar2 + 0xa0);
    FUN_05478178(auStack_10,L"[BESIEGE_FAILED_TIP]",auStack_18);
    (*pcVar3)(plVar2,auStack_10);
    FUN_05476c50(auStack_10);
    nop();
    this[0x1c] = (BesiegeModule)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeModule::IsStartPoint(Sexy::Point) */

void __thiscall BesiegeModule::IsStartPoint(BesiegeModule *this,undefined8 param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                       (uVar2,uVar3,param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_10,(__normal_iterator *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeModule::TestIfCanPlantBesiegeBoxOn(int, int) */

void __thiscall
BesiegeModule::TestIfCanPlantBesiegeBoxOn(BesiegeModule *this,int param_1,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float *pfVar7;
  int *piVar8;
  int extraout_w1;
  float fVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_198 [8];
  undefined8 local_190;
  undefined8 local_188 [4];
  BesiegeMazeMap aBStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x30);
  BesiegeMazeMap::BesiegeMazeMap(aBStack_168);
  BesiegeMazeMap::SetTestBox(aBStack_168,param_1,param_2);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_188,(vector *)this_00);
  Sexy::Point::Point((Point *)&local_190,(TPoint *)(this + 0x48));
  BesiegeMazeMap::InitMazeMap
            (aBStack_168,(vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_188,
             (Point *)&local_190,1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_188);
  uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_188,uVar6,0x29);
  while( true ) {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)local_188);
    if (!bVar1) break;
    Sexy::RtDbTable::Iterator::operator*((Iterator *)local_188);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_198,(RtWeakPtrBase *)&local_190);
    Sexy::RtId::~RtId((RtId *)&local_190);
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Zombie>::GetPtr((RtWeakPtr<Zombie> *)aRStack_198);
    pfVar7 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_01);
    fVar9 = pfVar7[1];
    iVar5 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar7);
    iVar3 = BoardTransforms::BoardSpaceToGridYUnbounded(fVar9);
    iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
    if ((iVar5 + 1 <= iVar4) &&
       (iVar5 = BesiegeMazeMap::calcGridHeight(aBStack_168,iVar5 + 1,iVar3 + 1), iVar5 == 1000)) {
      bVar1 = false;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_198);
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)local_188);
      goto LAB_0478ed40;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_198);
    Sexy::RtDbTable::Iterator::operator++((Iterator *)local_188,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)local_188);
  local_190 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
  while( true ) {
    local_188[0] = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_190,(__normal_iterator *)local_188);
    if (!bVar2) break;
    piVar8 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_190);
    iVar5 = BesiegeMazeMap::calcGridHeight(aBStack_168,*piVar8 + 1,piVar8[1] + 1);
    if (iVar5 == 1000) goto LAB_0478ed40;
    FUN_0478c724((Point *)&local_190);
  }
  bVar1 = true;
LAB_0478ed40:
  BesiegeMazeMap::~BesiegeMazeMap(aBStack_168);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeModule::GetPlantUpgradeSunSpend(Plant*) */

void BesiegeModule::GetPlantUpgradeSunSpend(Plant *param_1)

{
  bool bVar1;
  char cVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  TowerDefendPlantUpgradeTree *pTVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  TowerDefendPlantUpgradeTree aTStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
  local_40 = FUN_0478d5d0(*(undefined8 *)(pRVar3 + 0x50));
  local_38 = FUN_0478d620(*(undefined8 *)(pRVar3 + 0x58));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar1) {
      uVar8 = 0;
LAB_0478eee8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar8);
    }
    pTVar4 = (TowerDefendPlantUpgradeTree *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    TowerDefendPlantUpgradeTree::TowerDefendPlantUpgradeTree(aTStack_20,pTVar4);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aTStack_20);
    while( true ) {
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aTStack_20);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
      if (!bVar1) break;
      Plant::GetType();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      cVar2 = std::operator==((string *)(lVar5 + 8),(string *)(lVar6 + 8));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      if (cVar2 != '\0') {
        FUN_0478d670((exception_ptr *)&local_30);
        uVar8 = 0;
        local_28 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aTStack_20);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28)
        ;
        if (bVar1) {
          puVar7 = (undefined4 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
          uVar8 = *puVar7;
        }
        TowerDefendPlantUpgradeTree::~TowerDefendPlantUpgradeTree(aTStack_20);
        goto LAB_0478eee8;
      }
      FUN_0478d670((exception_ptr *)&local_30);
    }
    TowerDefendPlantUpgradeTree::~TowerDefendPlantUpgradeTree(aTStack_20);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_40);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeModule::GetPlantLaunchtimePercent(Plant*) */

void BesiegeModule::GetPlantLaunchtimePercent(Plant *param_1)

{
  bool bVar1;
  char cVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  TowerDefendPlantUpgradeTree *pTVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  TowerDefendPlantUpgradeTree aTStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
  local_40 = FUN_0478d5d0(*(undefined8 *)(pRVar3 + 0x50));
  local_38 = FUN_0478d620(*(undefined8 *)(pRVar3 + 0x58));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar1) {
      uVar7 = 0x3f800000;
LAB_0478f04c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar7);
    }
    pTVar4 = (TowerDefendPlantUpgradeTree *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    TowerDefendPlantUpgradeTree::TowerDefendPlantUpgradeTree(aTStack_20,pTVar4);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aTStack_20);
    while( true ) {
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aTStack_20);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
      if (!bVar1) break;
      Plant::GetType();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      cVar2 = std::operator==((string *)(lVar5 + 8),(string *)(lVar6 + 8));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      if (cVar2 != '\0') {
        lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        uVar7 = *(undefined4 *)(lVar5 + 0x10);
        TowerDefendPlantUpgradeTree::~TowerDefendPlantUpgradeTree(aTStack_20);
        goto LAB_0478f04c;
      }
      FUN_0478d670();
    }
    TowerDefendPlantUpgradeTree::~TowerDefendPlantUpgradeTree(aTStack_20);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_40);
  } while( true );
}


/* BesiegeModule::onPlantPlanted(Plant*) */

void __thiscall BesiegeModule::onPlantPlanted(BesiegeModule *this,Plant *param_1)

{
  bool bVar1;
  PlantCoconutCannon *pPVar2;
  float fVar3;
  
  if (param_1 != (Plant *)0x0) {
    fVar3 = (float)GetPlantLaunchtimePercent((Plant *)this);
    Plant::UpdateLaunchInterval(param_1,fVar3);
    bVar1 = Sexy::RtObject::IsA<PlantCoconutCannon>((RtObject *)param_1);
    if (bVar1) {
      pPVar2 = Sexy::RtObject::Cast<PlantCoconutCannon>((RtObject *)param_1);
      FUN_0478aaec(fVar3,pPVar2 + 0x38);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeModule::GetPlantUpgradeType(Plant*) */

void __thiscall BesiegeModule::GetPlantUpgradeType(BesiegeModule *this,Plant *param_1)

{
  bool bVar1;
  char cVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  TowerDefendPlantUpgradeTree *pTVar4;
  UnlockSource *pUVar5;
  long lVar6;
  string *in_x8;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  TowerDefendPlantUpgradeTree aTStack_38 [24];
  undefined8 local_20;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_58 = FUN_0478d5d0(*(undefined8 *)(pRVar3 + 0x50));
  local_50 = FUN_0478d620(*(undefined8 *)(pRVar3 + 0x58));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
    if (!bVar1) {
      std::string::string(in_x8,"");
      nop();
LAB_0478f278:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pTVar4 = (TowerDefendPlantUpgradeTree *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    TowerDefendPlantUpgradeTree::TowerDefendPlantUpgradeTree(aTStack_38,pTVar4);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aTStack_38);
    while( true ) {
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aTStack_38);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_20);
      if (!bVar1) break;
      pUVar5 = (UnlockSource *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      ArcadePropertySheetHelpers::UnlockSource::UnlockSource((UnlockSource *)&local_20,pUVar5);
      Plant::GetType();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      cVar2 = std::operator==((string *)(lVar6 + 8),asStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      if (cVar2 != '\0') {
        FUN_0478d670((exception_ptr *)&local_48);
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aTStack_38);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_40)
        ;
        if (bVar1) {
          std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
          FUN_05475d88();
        }
        else {
          std::string::string(in_x8,"");
          nop();
        }
        PakRecord::~PakRecord((PakRecord *)&local_20);
        TowerDefendPlantUpgradeTree::~TowerDefendPlantUpgradeTree(aTStack_38);
        goto LAB_0478f278;
      }
      PakRecord::~PakRecord((PakRecord *)&local_20);
      FUN_0478d670((exception_ptr *)&local_48);
    }
    TowerDefendPlantUpgradeTree::~TowerDefendPlantUpgradeTree(aTStack_38);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_58);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeModule::handleTouch(Sexy::Touch const&) */

void __thiscall BesiegeModule::handleTouch(BesiegeModule *this,Touch *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  UIWidget *this_00;
  undefined8 *puVar5;
  Plant *pPVar6;
  TRect<int> *this_01;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  int local_54;
  string asStack_50 [8];
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EASquaredImpl::IsEnabledForUser((EASquaredImpl *)this);
  if (cVar1 == '\0') {
    bVar2 = false;
    if (*(int *)(param_1 + 0x30) == 0) {
      fVar8 = (float)FUN_0478b2c0((float)*(int *)(param_1 + 0x10));
      fVar9 = (float)FUN_0478b2c0((float)*(int *)(param_1 + 0x14));
      std::string::string(asStack_20,"UITowerDefendUpgrade");
      UIWidget::GetWidgetBySheetName(asStack_20);
      nop();
      std::string::~string(asStack_20);
      nop();
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
      EntityFinder::GetEntities(avStack_38,1);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
      local_68 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_38);
      local_60 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_38);
      while( true ) {
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)&local_60)
        ;
        if (!bVar2) break;
        puVar5 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
        pPVar6 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar5);
        if ((pPVar6 != (Plant *)0x0) && (this_00 != (UIWidget *)0x0)) {
          this_01 = (TRect<int> *)(**(code **)(*(long *)pPVar6 + 0x178))();
          cVar1 = Sexy::TRect<int>::Contains(this_01,(int)fVar8,(int)fVar9);
          if (cVar1 != '\0') {
            BoardEntity::CalcGridPosition();
            GetPlantUpgradeType(this,pPVar6);
            iVar3 = GetPlantUpgradeSunSpend((Plant *)this);
            if ((0 < iVar3) && (lVar7 = FUN_05474184(asStack_50), lVar7 != 0)) {
              Sexy::Point::Point((Point *)&local_40,(TPoint *)&local_58);
              ChallengeUI::SetIconOffset((ChallengeUI *)this_00,(Point *)&local_40);
              TowerDefendUpgradeUI::SetSunCount((TowerDefendUpgradeUI *)this_00,iVar3);
              BoardTransforms::GridToBoardSpaceX(local_58);
              iVar3 = FUN_0478b29c();
              BoardTransforms::GridToBoardSpaceY(local_54);
              iVar4 = FUN_0478b29c();
              Sexy::Point::Point((Point *)&local_48,iVar3,iVar4);
              iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
              iVar3 = FUN_0478b29c(iVar3 / 2);
              local_48 = local_48 - iVar3;
              BoardConstants::GRIDSQUARE_HEIGHT();
              iVar3 = FUN_0478b29c();
              local_44 = local_44 - iVar3;
              Board::TranslateBoardPositionToScreenPosition
                        (*(Board **)(gLawnApp + 0x9f0),(Point *)&local_48);
              Board::GetBoardBaseOffset();
              Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_48,(TPoint *)&local_40);
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,(float)local_48,(float)local_44);
              UIWidget::SetPositionOffset(local_40,local_3c,this_00);
              UIWidget::SetVisible(this_00,true);
              std::string::~string(asStack_50);
              goto LAB_0478f50c;
            }
            std::string::~string(asStack_50);
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
      }
      if ((this_00 == (UIWidget *)0x0) || (cVar1 = UIWidget::IsVisible(this_00), cVar1 == '\0')) {
        std::vector<Plant*,std::allocator<Plant*>>::~vector
                  ((vector<Plant*,std::allocator<Plant*>> *)asStack_20);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
      }
      else {
        Sexy::Point::Point((Point *)&local_40,-1,-1);
        ChallengeUI::SetIconOffset((ChallengeUI *)this_00,(Point *)&local_40);
        UIWidget::SetVisible(this_00,bVar2);
LAB_0478f50c:
        bVar2 = true;
        std::vector<Plant*,std::allocator<Plant*>>::~vector
                  ((vector<Plant*,std::allocator<Plant*>> *)asStack_20);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
      }
    }
  }
  else {
    bVar2 = false;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeModule::InitModule() */

void __thiscall BesiegeModule::InitModule(BesiegeModule *this)

{
  vector<Sexy::Point,std::allocator<Sexy::Point>> *this_00;
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  UIWidget *this_01;
  long lVar5;
  int *piVar6;
  TowerDefendPlantUpgradeTree *pTVar7;
  long lVar8;
  string *psVar9;
  Board *pBVar10;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  int iStack_1c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_20,"UISkyCannon");
  this_01 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  if (this_01 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_01,false);
  }
  this_00 = (vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x30);
  lVar5 = PooyanModule::GetPooyanProps();
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear(this_00);
  local_30 = FUN_0478cdbc(*(undefined8 *)(lVar5 + 0x68));
  local_28 = FUN_0478ce0c(*(undefined8 *)(lVar5 + 0x70));
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar3) {
    piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    iVar1 = *piVar6;
    iVar2 = piVar6[1];
    Sexy::Point::Point((Point *)&local_20);
    local_20 = iVar1 + -1;
    iStack_1c = iVar2 + -1;
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(this_00,(Point *)&local_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  Sexy::Point::Point((Point *)&local_20,*(int *)(lVar5 + 0x80) + -1,*(int *)(lVar5 + 0x84) + -1);
  *(ulong *)(this + 0x48) = CONCAT44(iStack_1c,local_20);
  pBVar10 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string((string *)&local_20,"BesiegeBox");
  Board::AddGridItem(pBVar10,(string *)&local_20,*(int *)(this + 0x48),*(int *)(this + 0x4c),1);
  std::string::~string((string *)&local_20);
  nop();
  local_30 = FUN_0478cdbc(*(undefined8 *)(lVar5 + 0x88));
  local_28 = FUN_0478ce0c(*(undefined8 *)(lVar5 + 0x90));
  while( true ) {
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar3) break;
    piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    iVar1 = *piVar6;
    iVar2 = piVar6[1];
    pBVar10 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)&local_20,"BesiegeBox");
    Board::AddGridItem(pBVar10,(string *)&local_20,iVar1 + -1,iVar2 + -1,1);
    std::string::~string((string *)&local_20);
    nop();
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(vector *)this_00);
  Sexy::Point::Point((Point *)&local_28,(TPoint *)(this + 0x48));
  BesiegeMazeMap::InitMazeMap
            ((BesiegeMazeMap *)(this + 0x50),(string *)&local_20,(Point *)&local_28,0);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
  local_40 = FUN_0478d5d0(*(undefined8 *)(lVar5 + 0x50));
  local_38 = FUN_0478d620(*(undefined8 *)(lVar5 + 0x58));
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar3) {
    pTVar7 = (TowerDefendPlantUpgradeTree *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    TowerDefendPlantUpgradeTree::TowerDefendPlantUpgradeTree
              ((TowerDefendPlantUpgradeTree *)&local_20,pTVar7);
    lVar8 = FUN_0478ac5c(CONCAT44(iStack_1c,local_20),0);
    FUN_05475d88((exception_ptr *)&local_30,lVar8 + 8);
    psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar9);
    cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_28);
    if (cVar4 != '\0') {
      pBVar10 = *(Board **)(gLawnApp + 0x9f0);
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      Board::LoadResourceGroupForGameplay(pBVar10,(string *)(lVar8 + 0x10));
      pBVar10 = *(Board **)(gLawnApp + 0x9f0);
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      Board::LoadResourceGroupsForGameplay(pBVar10,(vector *)(lVar8 + 0x80));
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    std::string::~string((string *)&local_30);
    TowerDefendPlantUpgradeTree::~TowerDefendPlantUpgradeTree
              ((TowerDefendPlantUpgradeTree *)&local_20);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_40);
  }
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(lVar5 + 0x48);
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    Board::PausePlantGrowthAndDecay(*(Board **)(gLawnApp + 0x9f0),true);
  }
  this[0x1c] = (BesiegeModule)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeModule::gameplayStarted() */

void __thiscall BesiegeModule::gameplayStarted(BesiegeModule *this)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  UINewPVPTopZombieQueue *this_00;
  FishingEnergyBar *this_01;
  int iVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  iVar4 = 0;
  local_8 = ___stack_chk_guard;
  InitModule(this);
  lVar3 = PooyanModule::GetPooyanProps();
  Board::AddSunMoney(*(Board **)(gLawnApp + 0x9f0),*(int *)(lVar3 + 0x40));
  Board::SetPlantfoodCount(*(Board **)(gLawnApp + 0x9f0),*(int *)(lVar3 + 0x44));
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 != (UINewPVPTopZombieQueue *)0x0) {
    for (; cVar2 = FUN_0478aae8(this_00[0x199]), iVar4 < cVar2; iVar4 = iVar4 + 1) {
      UINewPVPTopZombieQueue::gettItem(this_00,iVar4);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
      if (bVar1) {
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        FUN_0478af70(lVar3 + 0x198);
        this_01 = (FishingEnergyBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        FishingEnergyBar::onGameUnpaused(this_01);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
  }
  cVar2 = IsInTutorial(this);
  if (cVar2 != '\0') {
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeModule::onPlantUpgradeTouch(Sexy::Point const&) */

void __thiscall BesiegeModule::onPlantUpgradeTouch(BesiegeModule *this,Point *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  Plant *pPVar7;
  long lVar8;
  ChallengeUI *this_00;
  wchar16 *pwVar9;
  string *psVar10;
  RtWeakPtr *pRVar11;
  LineBreakCategory *pLVar12;
  undefined8 uVar13;
  Board *pBVar14;
  float fVar15;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  iVar6 = *(int *)param_1;
  local_8 = ___stack_chk_guard;
  pBVar14 = *(Board **)(gLawnApp + 0x9f0);
  iVar1 = *(int *)(param_1 + 4);
  pLVar12 = gLawnApp;
  std::string::string(asStack_10,"");
  pPVar7 = (Plant *)Board::GetPlantAt(pBVar14,iVar6,iVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar7 != (Plant *)0x0) {
    GetPlantUpgradeType(this,pPVar7);
    iVar6 = GetPlantUpgradeSunSpend((Plant *)this);
    if ((0 < iVar6) && (lVar8 = FUN_05474184(asStack_20), lVar8 != 0)) {
      MessageRouter::Post((_func_void *)gMessageRouter);
      pwVar9 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
      pRVar11 = aRStack_18;
      std::string::string(asStack_10,"FreePlanting");
      cVar4 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                        (pwVar9,(wchar16 *)asStack_10,(LineBreakCategory *)pRVar11,
                         (LineBreakCategory *)pwVar9,pLVar12);
      std::string::~string(asStack_10);
      nop();
      if ((cVar4 != '\0') ||
         (cVar4 = Board::TakeSunMoney(*(Board **)(gLawnApp + 0x9f0),iVar6,false,false),
         cVar4 != '\0')) {
        psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
        bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
        if (bVar5) {
          Plant::KillPlant(pPVar7,1,1,1);
          pBVar14 = *(Board **)(gLawnApp + 0x9f0);
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          Board::LoadResourceGroupForGameplay(pBVar14,(string *)(lVar8 + 0x10));
          bVar5 = std::operator!=(asStack_20,"xshot");
          if (bVar5) {
            pBVar14 = *(Board **)(gLawnApp + 0x9f0);
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
            Board::LoadResourceGroupsForGameplay(pBVar14,(vector *)(lVar8 + 0x80));
          }
          uVar2 = *(undefined4 *)(param_1 + 4);
          uVar3 = *(undefined4 *)param_1;
          uVar13 = *(undefined8 *)(gLawnApp + 0x9f0);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
          pPVar7 = (Plant *)Board::AddPlant((Board *)0x0,uVar13,uVar3,uVar2,asStack_10,0,0,
                                            0xffffffff,0,1,1,0,0,0,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
          if (pPVar7 != (Plant *)0x0) {
            fVar15 = (float)GetPlantLaunchtimePercent((Plant *)this);
            Plant::UpdateLaunchInterval(pPVar7,fVar15);
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
      }
    }
    std::string::~string(asStack_20);
  }
  std::string::string(asStack_10,"UITowerDefendUpgrade");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (ChallengeUI *)0x0) {
    Sexy::Point::Point((Point *)asStack_10,-1,-1);
    ChallengeUI::SetIconOffset(this_00,(Point *)asStack_10);
    UIWidget::SetVisible((UIWidget *)this_00,false);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall BesiegeModule::AddResourceRequirements(BesiegeModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  std::string::string(asStack_10,"ZombieSkyCityBattlePlaneGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Besiege");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Tower_Defend_Group");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeModule::registerForEvents() */

void __thiscall BesiegeModule::registerForEvents(BesiegeModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  Board *pBVar3;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_e8 [8];
  CBMemberTranslatorX aCStack_e0 [24];
  CBMemberTranslatorX aCStack_c8 [24];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,loadComplete);
  Sexy::Delegate0::Delegate0<BesiegeModule,void(BesiegeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,levelStarted);
  Sexy::Delegate0::Delegate0<BesiegeModule,void(BesiegeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnIntroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<BesiegeModule,void(BesiegeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<BesiegeModule,void(BesiegeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,preventSave);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<BesiegeModule,bool(BesiegeModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterCanPreventSave(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieKilled);
  local_110 = local_b0;
  uStack_108 = uStack_a8;
  local_100 = local_a0;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<BesiegeModule,void(BesiegeModule::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieSpawned);
  local_120 = local_88;
  local_130 = local_98;
  uStack_128 = uStack_90;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<BesiegeModule,void(BesiegeModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_130);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReviveOK);
  Sexy::Delegate0::Delegate0<BesiegeModule,void(BesiegeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ReviveSucceed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReviveCancel);
  Sexy::Delegate0::Delegate0<BesiegeModule,void(BesiegeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ReviveClose,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantUpgradeTouch);
  local_150 = local_80;
  uStack_148 = uStack_78;
  local_140 = local_70;
  MessageRouter::
  Subscribe<Sexy::Point_const&,Sexy::CBMemberTranslatorX<BesiegeModule,void(BesiegeModule::*)(Sexy::Point_const&)>>
            ((MessageRouter *)puVar1,Message::PlantUpgradeTouch,&local_150);
  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<BesiegeModule,bool(BesiegeModule::*)(Sexy::Touch_const&)>(aDStack_68,aCStack_e0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_e8);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<BesiegeModule,void(BesiegeModule::*)()>(aDStack_38,aCStack_c8);
  Board::RegisterTouchGameplayObject(pBVar3,aDStack_68,4,a_Stack_e8,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_e8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

