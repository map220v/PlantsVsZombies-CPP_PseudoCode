// Class: TowerDefendModule


/* TowerDefendModule::onGamePlayStarted() */

void __thiscall TowerDefendModule::onGamePlayStarted(TowerDefendModule *this)

{
  this[0x2e8] = (TowerDefendModule)0x1;
  return;
}


/* TowerDefendModule::cancelTouch() */

void TowerDefendModule::cancelTouch(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendModule::StaticClassInit() */

void TowerDefendModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"TowerDefendModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03dde440,0x2f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TowerDefendModule::StaticGetClass() */

long * TowerDefendModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TowerDefendModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TowerDefendModule::placeRoads() */

void __thiscall TowerDefendModule::placeRoads(TowerDefendModule *this)

{
  int iVar1;
  int iVar2;
  TowerDefendModule *pTVar3;
  int iVar4;
  TowerDefendModule *pTVar5;
  
  iVar4 = 0;
  pTVar5 = this + 0x18;
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  if (0 < iVar1) {
    do {
      pTVar3 = pTVar5;
      iVar1 = 0;
      while( true ) {
        iVar2 = BoardConstants::NUMBER_OF_ROWS();
        if (iVar2 <= iVar1) break;
        Board::SetGridSquareType(*(Board **)(gLawnApp + 0x9f0),iVar4,iVar1,*(undefined4 *)pTVar3);
        pTVar3 = pTVar3 + 0x10;
        iVar1 = iVar1 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
      pTVar5 = pTVar5 + 0x50;
    } while (iVar4 < iVar1);
  }
  return;
}


/* TowerDefendModule::TowerDefendModule() */

void __thiscall TowerDefendModule::TowerDefendModule(TowerDefendModule *this)

{
  TowerDefendModule *pTVar1;
  TowerDefendModule *pTVar2;
  TowerDefendModule *this_00;
  
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0677e3f0;
  this_00 = this + 0x18;
  do {
    pTVar1 = this_00 + 0x50;
    do {
      pTVar2 = this_00 + 0x10;
      TDRoadData::TDRoadData((TDRoadData *)this_00);
      this_00 = pTVar2;
    } while (pTVar1 != pTVar2);
    this_00 = pTVar1;
  } while (pTVar1 != this + 0x2e8);
  this[0x2e8] = (TowerDefendModule)0x0;
  return;
}


/* TowerDefendModule::StaticNew() */

TowerDefendModule * TowerDefendModule::StaticNew(void)

{
  TowerDefendModule *this;
  
  this = ::operator_new(0x2f0);
  TowerDefendModule(this);
  return this;
}


/* TowerDefendModule::~TowerDefendModule() */

void __thiscall TowerDefendModule::~TowerDefendModule(TowerDefendModule *this)

{
  TowerDefendModule *this_00;
  
  this_00 = this + 0x2e8;
  *(undefined ***)this = &PTR_GetModuleClass_0677e3f0;
  do {
    this_00 = this_00 + -0x10;
    PakRecord::~PakRecord((PakRecord *)this_00);
  } while (this + 0x18 != this_00);
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* TowerDefendModule::~TowerDefendModule() */

void __thiscall TowerDefendModule::~TowerDefendModule(TowerDefendModule *this)

{
  ~TowerDefendModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendModule::onPlantDied(Plant*) */

void __thiscall TowerDefendModule::onPlantDied(TowerDefendModule *this,Plant *param_1)

{
  char cVar1;
  UIWidget *this_00;
  TPoint aTStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UITowerDefendUpgrade");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (((this_00 != (UIWidget *)0x0) && (param_1 != (Plant *)0x0)) &&
     (cVar1 = UIWidget::IsVisible(this_00), cVar1 != '\0')) {
    BoardEntity::CalcGridPosition();
    TowerDefendUpgradeUI::GetPlantGridPosition();
    cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)asStack_10,aTStack_18);
    if (cVar1 != '\0') {
      Sexy::Point::Point((Point *)asStack_10,-1,-1);
      ChallengeUI::SetIconOffset((ChallengeUI *)this_00,(Point *)asStack_10);
      UIWidget::SetVisible(this_00,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendModule::renderRoads(Sexy::Graphics*) */

void __thiscall TowerDefendModule::renderRoads(TowerDefendModule *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  InfoClass *pIVar6;
  ResourceInfo *pRVar7;
  TowerDefendModule *pTVar8;
  int iVar9;
  TowerDefendModule *pTVar10;
  float local_28;
  float local_24;
  Point aPStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  pTVar10 = this + 0x20;
  iVar9 = 0;
  local_8 = ___stack_chk_guard;
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  if (0 < iVar3) {
    do {
      pTVar8 = pTVar10;
      for (iVar3 = 0; iVar4 = BoardConstants::NUMBER_OF_ROWS(), iVar3 < iVar4; iVar3 = iVar3 + 1) {
        ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                  ((ResistenceValueInfo *)&local_28);
        local_28 = (float)FUN_03dde044((float)iVar1 * (float)iVar9 + 200.0);
        local_24 = (float)FUN_03dde044((float)iVar2 * (float)iVar3 + 160.0);
        Sexy::Point::Point(aPStack_20,0,0);
        iVar4 = Board::GetGridSquareType(*(Board **)(gLawnApp + 0x9f0),iVar9,iVar3);
        if (iVar4 == 7) {
          FUN_05475d88(asStack_18,pTVar8);
          lVar5 = FUN_05474184(asStack_18);
          if ((lVar5 == 0) ||
             (pIVar6 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                                 (*(ResourceManager **)(gLawnApp + 0x848),asStack_18),
             pIVar6 == (InfoClass *)0x0)) {
            std::string::~string(asStack_18);
          }
          else {
            Sexy::ResourceInfoTypes::FontRes::GetFont();
            pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            std::string::~string(asStack_18);
            if (pRVar7 != (ResourceInfo *)0x0) {
              Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)aRStack_10,param_1);
              *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) / *(float *)(param_1 + 0x18);
              *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) / *(float *)(param_1 + 0x1c);
              Sexy::Graphics::DrawImage(param_1,(Image *)pRVar7,(int)local_28,(int)local_24);
              Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)aRStack_10);
            }
          }
        }
        pTVar8 = pTVar8 + 0x10;
      }
      iVar9 = iVar9 + 1;
      iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
      pTVar10 = pTVar10 + 0x50;
    } while (iVar9 < iVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TowerDefendModule::onWinCondition() */

bool __thiscall TowerDefendModule::onWinCondition(TowerDefendModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  GridItem *this_00;
  float fVar2;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  this_00 = (GridItem *)
            Board::GetGridItemAt(*(Board **)(gLawnApp + 0x9f0),(string *)(pRVar1 + 0x50),1,4);
  if (this_00 != (GridItem *)0x0) {
    if (*(code **)(*(long *)this_00 + 0x1d8) == GridItem::GetHitpoints) {
      fVar2 = (float)GridItem::GetHitpoints(this_00);
    }
    else {
      fVar2 = (float)(**(code **)(*(long *)this_00 + 0x1d8))();
    }
    return 0.0 < fVar2;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendModule::onZombieAddedToBoard(Zombie*) */

void __thiscall TowerDefendModule::onZombieAddedToBoard(TowerDefendModule *this,Zombie *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  RtWeakPtrBase *pRVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  long lVar6;
  Board *pBVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    pRVar4 = (RtWeakPtrBase *)Zombie::GetType(param_1);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar4);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
    if (bVar1) {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      bVar1 = std::operator==((string *)(lVar6 + 8),"zombie_towerdefend_boss");
      if (bVar1) {
        Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
        pBVar7 = *(Board **)(gLawnApp + 0x9f0);
        FUN_05478178(auStack_10,L"[ADVICE_WOLF_BOSS_WAVE]",auStack_20);
        Board::DisplayAdviceAgain(pBVar7,auStack_10,0x11,0);
        FUN_05476c50(auStack_10);
        nop();
      }
    }
    pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    lVar6 = Board::GetWaveGenerator(*(Board **)(gLawnApp + 0x9f0));
    if ((pRVar5 != (ResilienceTutorialIntroProperties *)0x0) && (lVar6 != 0)) {
      iVar2 = FUN_03ddd53c(*(undefined4 *)(lVar6 + 0x20));
      fVar9 = *(float *)(pRVar5 + 0x40) * (float)iVar2 + 1.0;
      fVar8 = (float)FUN_03ddd548(*(undefined4 *)(param_1 + 0x284));
      Zombie::SetHitpoints(param_1,fVar9 * fVar8);
      fVar8 = (float)FUN_03ddd548(*(undefined4 *)(param_1 + 0x284));
      FUN_03ddd540(fVar9 * fVar8,param_1 + 0x284);
      uVar3 = FUN_03ddd54c(*(undefined4 *)(param_1 + 0xb0));
      fVar8 = (float)FUN_03ddd550(*(undefined4 *)(param_1 + 0x2ac));
      Zombie::setHelm((Zombie *)(fVar9 * fVar8),param_1,uVar3);
    }
    FUN_03dddb6c(param_1 + 0x54);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendModule::addToRenderQueue(RenderQueue*) */

void __thiscall TowerDefendModule::addToRenderQueue(TowerDefendModule *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,renderRoads);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<TowerDefendModule,void(TowerDefendModule::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,299999,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendModule::parseRoadDatas() */

void __thiscall TowerDefendModule::parseRoadDatas(TowerDefendModule *this)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  int *piVar6;
  TowerDefendModule *pTVar7;
  int iVar8;
  TowerDefendModule *pTVar9;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  pTVar9 = this + 0x18;
  iVar8 = 0;
  local_8 = ___stack_chk_guard;
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  if (0 < iVar3) {
    do {
      pTVar7 = pTVar9;
      for (iVar3 = 0; iVar4 = BoardConstants::NUMBER_OF_ROWS(), iVar3 < iVar4; iVar3 = iVar3 + 1) {
        *(undefined4 *)pTVar7 = 8;
        pTVar7 = pTVar7 + 0x10;
      }
      iVar8 = iVar8 + 1;
      iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
      pTVar9 = pTVar9 + 0x50;
    } while (iVar8 < iVar3);
  }
  local_18 = FUN_03ddf68c(*(undefined8 *)(pRVar5 + 0x58));
  local_10 = FUN_03ddf6dc(*(undefined8 *)(pRVar5 + 0x60));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    lVar1 = (long)*piVar6 * 5 + (long)piVar6[1] + 1;
    *(undefined4 *)(this + lVar1 * 0x10 + 8) = 7;
    thunk_FUN_05475e00(this + lVar1 * 0x10 + 0x10,piVar6 + 2);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendModule::onPostLoad() */

void __thiscall TowerDefendModule::onPostLoad(TowerDefendModule *this)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  int *piVar6;
  TowerDefendModule *pTVar7;
  int iVar8;
  TowerDefendModule *pTVar9;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  pTVar9 = this + 0x18;
  iVar8 = 0;
  lStack_8 = ___stack_chk_guard;
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  if (0 < iVar3) {
    do {
      pTVar7 = pTVar9;
      for (iVar3 = 0; iVar4 = BoardConstants::NUMBER_OF_ROWS(), iVar3 < iVar4; iVar3 = iVar3 + 1) {
        *(undefined4 *)pTVar7 = 8;
        pTVar7 = pTVar7 + 0x10;
      }
      iVar8 = iVar8 + 1;
      iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
      pTVar9 = pTVar9 + 0x50;
    } while (iVar8 < iVar3);
  }
  uStack_18 = FUN_03ddf68c(*(undefined8 *)(pRVar5 + 0x58));
  uStack_10 = FUN_03ddf6dc(*(undefined8 *)(pRVar5 + 0x60));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&uStack_18,(__normal_iterator *)&uStack_10), bVar2)
  {
    piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_18);
    lVar1 = (long)*piVar6 * 5 + (long)piVar6[1] + 1;
    *(undefined4 *)(this + lVar1 * 0x10 + 8) = 7;
    thunk_FUN_05475e00(this + lVar1 * 0x10 + 0x10,piVar6 + 2);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&uStack_18);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendModule::onLoadComplete() */

void __thiscall TowerDefendModule::onLoadComplete(TowerDefendModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  UIWidget *this_00;
  GridItemHouse *this_01;
  ResourceInfo *pRVar2;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  parseRoadDatas(this);
  placeRoads(this);
  Sexy::RtName::RtName(aRStack_18,L"UITowerDefendUpgrade");
  this_00 = (UIWidget *)UIWidget::CreateWidget(aRStack_18,0);
  Sexy::RtName::~RtName(aRStack_18);
  UIWidget::SetIgnoreParentVisibility(this_00,true);
  FUN_03dddb5c(this_00 + 0x81,this_00 + 0x82);
  UIWidget::SetVisible(this_00,false);
  Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),(string *)(pRVar1 + 0x50),1,4,1);
  nop();
  GetPAMByName((string *)(pRVar1 + 0x48));
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
  GridItemHouse::LawnHouseInitialize(this_01,(PopAnim *)pRVar2,4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TowerDefendModule::onUpdate() */

void __thiscall TowerDefendModule::onUpdate(TowerDefendModule *this)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  long lVar3;
  RichManUIMgr *this_00;
  
  cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
  if ((cVar1 != '\0') && (this[0x2e8] != (TowerDefendModule)0x0)) {
    pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    lVar3 = Board::GetGridItemAt(*(Board **)(gLawnApp + 0x9f0),(string *)(pRVar2 + 0x50),1,4);
    if ((lVar3 == 0) &&
       (cVar1 = Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),1), cVar1 != '\0')) {
      this_00 = (RichManUIMgr *)FUN_03de00b8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
      RichManUIMgr::SetPrevNode(this_00,0);
      this[0x2e8] = (TowerDefendModule)0x0;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendModule::GetPlantUpgradeSunSpend(Plant*) */

void TowerDefendModule::GetPlantUpgradeSunSpend(Plant *param_1)

{
  bool bVar1;
  char cVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  TowerDefendPlantUpgradeTree *pTVar4;
  UnlockSource *pUVar5;
  long lVar6;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  TowerDefendPlantUpgradeTree aTStack_38 [24];
  undefined4 local_20 [2];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
  local_60 = FUN_03ddf95c(*(undefined8 *)(pRVar3 + 0x70));
  local_58 = FUN_03ddf9ac(*(undefined8 *)(pRVar3 + 0x78));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_60,(__normal_iterator *)&local_58);
    if (!bVar1) {
      local_20[0] = 0;
LAB_03de0e68:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(local_20[0]);
    }
    pTVar4 = (TowerDefendPlantUpgradeTree *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    TowerDefendPlantUpgradeTree::TowerDefendPlantUpgradeTree(aTStack_38,pTVar4);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aTStack_38);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aTStack_38);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1)
    {
      pUVar5 = (UnlockSource *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      ArcadePropertySheetHelpers::UnlockSource::UnlockSource((UnlockSource *)local_20,pUVar5);
      Plant::GetType();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      cVar2 = std::operator==((string *)(lVar6 + 8),asStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      if (cVar2 != '\0') {
        PakRecord::~PakRecord((PakRecord *)local_20);
        TowerDefendPlantUpgradeTree::~TowerDefendPlantUpgradeTree(aTStack_38);
        goto LAB_03de0e68;
      }
      PakRecord::~PakRecord((PakRecord *)local_20);
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_50);
    }
    TowerDefendPlantUpgradeTree::~TowerDefendPlantUpgradeTree(aTStack_38);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_60);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendModule::GetPlantLaunchtimePercent(Plant*) */

void TowerDefendModule::GetPlantLaunchtimePercent(Plant *param_1)

{
  bool bVar1;
  char cVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  TowerDefendPlantUpgradeTree *pTVar4;
  UnlockSource *pUVar5;
  long lVar6;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  TowerDefendPlantUpgradeTree aTStack_38 [24];
  UnlockSource aUStack_20 [8];
  string asStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
  local_60 = FUN_03ddf95c(*(undefined8 *)(pRVar3 + 0x70));
  local_58 = FUN_03ddf9ac(*(undefined8 *)(pRVar3 + 0x78));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_60,(__normal_iterator *)&local_58);
    if (!bVar1) {
      local_10 = 0x3f800000;
LAB_03de0ffc:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(local_10);
    }
    pTVar4 = (TowerDefendPlantUpgradeTree *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    TowerDefendPlantUpgradeTree::TowerDefendPlantUpgradeTree(aTStack_38,pTVar4);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aTStack_38);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aTStack_38);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1)
    {
      pUVar5 = (UnlockSource *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      ArcadePropertySheetHelpers::UnlockSource::UnlockSource(aUStack_20,pUVar5);
      Plant::GetType();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      cVar2 = std::operator==((string *)(lVar6 + 8),asStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      if (cVar2 != '\0') {
        PakRecord::~PakRecord((PakRecord *)aUStack_20);
        TowerDefendPlantUpgradeTree::~TowerDefendPlantUpgradeTree(aTStack_38);
        goto LAB_03de0ffc;
      }
      PakRecord::~PakRecord((PakRecord *)aUStack_20);
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_50);
    }
    TowerDefendPlantUpgradeTree::~TowerDefendPlantUpgradeTree(aTStack_38);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_60);
  } while( true );
}


/* TowerDefendModule::onPlantPlanted(Plant*) */

void __thiscall TowerDefendModule::onPlantPlanted(TowerDefendModule *this,Plant *param_1)

{
  float fVar1;
  
  if (param_1 != (Plant *)0x0) {
    fVar1 = (float)GetPlantLaunchtimePercent((Plant *)this);
    Plant::UpdateLaunchInterval(param_1,fVar1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendModule::GetPlantUpgradeType(Plant*) */

void __thiscall TowerDefendModule::GetPlantUpgradeType(TowerDefendModule *this,Plant *param_1)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  TowerDefendPlantUpgradeTree *pTVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  string *in_x8;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_38 = FUN_03ddf95c(*(undefined8 *)(pRVar5 + 0x70));
  local_30 = FUN_03ddf9ac(*(undefined8 *)(pRVar5 + 0x78));
  do {
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    if (!bVar3) {
      std::string::string(in_x8,"");
      nop();
LAB_03de11b8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pTVar6 = (TowerDefendPlantUpgradeTree *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    TowerDefendPlantUpgradeTree::TowerDefendPlantUpgradeTree
              ((TowerDefendPlantUpgradeTree *)&local_20,pTVar6);
    uVar10 = 0;
    while( true ) {
      uVar2 = local_20;
      iVar1 = (int)uVar10;
      uVar9 = FUN_03ddd564(local_20,local_18);
      if (uVar9 <= uVar10) break;
      lVar7 = FUN_03ddd594(uVar2,uVar10);
      Plant::GetType();
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      cVar4 = std::operator==((string *)(lVar8 + 8),(string *)(lVar7 + 8));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      uVar10 = uVar10 + 1;
      if (cVar4 != '\0') {
        uVar9 = (ulong)(iVar1 + 1);
        uVar10 = FUN_03ddd564(local_20,local_18);
        if (uVar9 < uVar10) {
          FUN_03ddd594(local_20,uVar9);
          FUN_05475d88();
        }
        else {
          std::string::string(in_x8,"");
          nop();
        }
        TowerDefendPlantUpgradeTree::~TowerDefendPlantUpgradeTree
                  ((TowerDefendPlantUpgradeTree *)&local_20);
        goto LAB_03de11b8;
      }
    }
    TowerDefendPlantUpgradeTree::~TowerDefendPlantUpgradeTree
              ((TowerDefendPlantUpgradeTree *)&local_20);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_38);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendModule::handleTouch(Sexy::Touch const&) */

void __thiscall TowerDefendModule::handleTouch(TowerDefendModule *this,Touch *param_1)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  UIWidget *this_00;
  undefined8 *puVar6;
  Plant *pPVar7;
  TRect<int> *this_01;
  long lVar8;
  float fVar9;
  float fVar10;
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
  bVar2 = false;
  if (*(int *)(param_1 + 0x30) == 0) {
    fVar9 = (float)FUN_03dde054((float)*(int *)(param_1 + 0x10));
    fVar10 = (float)FUN_03dde054((float)*(int *)(param_1 + 0x14));
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
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)&local_60);
      if (!bVar2) break;
      puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68)
      ;
      pPVar7 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar6);
      if ((pPVar7 != (Plant *)0x0) && (this_00 != (UIWidget *)0x0)) {
        this_01 = (TRect<int> *)(**(code **)(*(long *)pPVar7 + 0x178))();
        cVar3 = Sexy::TRect<int>::Contains(this_01,(int)fVar9,(int)fVar10);
        if (cVar3 != '\0') {
          BoardEntity::CalcGridPosition();
          puVar1 = gMessageRouter;
          Sexy::Point::Point((Point *)&local_40,(TPoint *)&local_58);
          MessageRouter::Post<Sexy::Point_const&,Sexy::Point>
                    ((MessageRouter *)puVar1,Message::PlantTouch,(Point *)&local_40);
          GetPlantUpgradeType(this,pPVar7);
          iVar4 = GetPlantUpgradeSunSpend((Plant *)this);
          if ((0 < iVar4) && (lVar8 = FUN_05474184(asStack_50), lVar8 != 0)) {
            Sexy::Point::Point((Point *)&local_40,(TPoint *)&local_58);
            ChallengeUI::SetIconOffset((ChallengeUI *)this_00,(Point *)&local_40);
            TowerDefendUpgradeUI::SetSunCount((TowerDefendUpgradeUI *)this_00,iVar4);
            BoardTransforms::GridToBoardSpaceX(local_58);
            iVar4 = FUN_03dde030();
            BoardTransforms::GridToBoardSpaceY(local_54);
            iVar5 = FUN_03dde030();
            Sexy::Point::Point((Point *)&local_48,iVar4,iVar5);
            iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
            iVar4 = FUN_03dde030(iVar4 / 2);
            local_48 = local_48 - iVar4;
            BoardConstants::GRIDSQUARE_HEIGHT();
            iVar4 = FUN_03dde030();
            local_44 = local_44 - iVar4;
            Board::TranslateBoardPositionToScreenPosition
                      (*(Board **)(gLawnApp + 0x9f0),(Point *)&local_48);
            Board::GetBoardBaseOffset();
            Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_48,(TPoint *)&local_40);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,(float)local_48,(float)local_44);
            UIWidget::SetPositionOffset(local_40,local_3c,this_00);
            UIWidget::SetVisible(this_00,true);
            std::string::~string(asStack_50);
            goto LAB_03de1488;
          }
          std::string::~string(asStack_50);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
    }
    if ((this_00 == (UIWidget *)0x0) || (cVar3 = UIWidget::IsVisible(this_00), cVar3 == '\0')) {
      std::vector<Plant*,std::allocator<Plant*>>::~vector
                ((vector<Plant*,std::allocator<Plant*>> *)asStack_20);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
    }
    else {
      Sexy::Point::Point((Point *)&local_40,-1,-1);
      ChallengeUI::SetIconOffset((ChallengeUI *)this_00,(Point *)&local_40);
      UIWidget::SetVisible(this_00,bVar2);
LAB_03de1488:
      bVar2 = true;
      std::vector<Plant*,std::allocator<Plant*>>::~vector
                ((vector<Plant*,std::allocator<Plant*>> *)asStack_20);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendModule::onPlantUpgradeTouch(Sexy::Point const&) */

void __thiscall TowerDefendModule::onPlantUpgradeTouch(TowerDefendModule *this,Point *param_1)

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
  string *psVar9;
  undefined8 uVar10;
  Board *pBVar11;
  float fVar12;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  iVar6 = *(int *)param_1;
  local_8 = ___stack_chk_guard;
  pBVar11 = *(Board **)(gLawnApp + 0x9f0);
  iVar1 = *(int *)(param_1 + 4);
  std::string::string(asStack_10,"");
  pPVar7 = (Plant *)Board::GetPlantAt(pBVar11,iVar6,iVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar7 != (Plant *)0x0) {
    GetPlantUpgradeType(this,pPVar7);
    iVar6 = GetPlantUpgradeSunSpend((Plant *)this);
    if (((0 < iVar6) && (lVar8 = FUN_05474184(asStack_20), lVar8 != 0)) &&
       (cVar4 = Board::TakeSunMoney(*(Board **)(gLawnApp + 0x9f0),iVar6,false,false), cVar4 != '\0')
       ) {
      psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar9);
      bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
      if (bVar5) {
        Plant::KillPlant(pPVar7,1,1,1);
        pBVar11 = *(Board **)(gLawnApp + 0x9f0);
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        Board::LoadResourceGroupForGameplay(pBVar11,(string *)(lVar8 + 0x10));
        pBVar11 = *(Board **)(gLawnApp + 0x9f0);
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        Board::LoadResourceGroupsForGameplay(pBVar11,(vector *)(lVar8 + 0x80));
        uVar2 = *(undefined4 *)param_1;
        uVar10 = *(undefined8 *)(gLawnApp + 0x9f0);
        uVar3 = *(undefined4 *)(param_1 + 4);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
        pPVar7 = (Plant *)Board::AddPlant((Board *)0x0,uVar10,uVar2,uVar3,asStack_10,0,0,0xffffffff,
                                          0,1,1,0,0,0,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
        if (pPVar7 != (Plant *)0x0) {
          fVar12 = (float)GetPlantLaunchtimePercent((Plant *)this);
          Plant::UpdateLaunchInterval(pPVar7,fVar12);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall TowerDefendModule::AddResourceRequirements(TowerDefendModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
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
/* TowerDefendModule::registerForEvents() */

void __thiscall TowerDefendModule::registerForEvents(TowerDefendModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  Board *pBVar3;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined1 local_120 [16];
  undefined8 local_110;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_100 [8];
  CBMemberTranslatorX aCStack_f8 [24];
  CBMemberTranslatorX aCStack_e0 [40];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
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
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<TowerDefendModule,void(TowerDefendModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::
  Delegate1<TowerDefendModule,void(TowerDefendModule::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGamePlayStarted);
  Sexy::Delegate0::Delegate0<TowerDefendModule,void(TowerDefendModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWinCondition);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<TowerDefendModule,bool(TowerDefendModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterWinCondition(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<TowerDefendModule,void(TowerDefendModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantUpgradeTouch);
  local_110 = local_b8;
  MessageRouter::
  Subscribe<Sexy::Point_const&,Sexy::CBMemberTranslatorX<TowerDefendModule,void(TowerDefendModule::*)(Sexy::Point_const&)>>
            ((MessageRouter *)puVar1,Message::PlantUpgradeTouch,local_120);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantPlanted);
  local_140 = local_b0;
  uStack_138 = uStack_a8;
  local_130 = local_a0;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<TowerDefendModule,void(TowerDefendModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlanted,&local_140);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDied);
  local_130 = local_88;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<TowerDefendModule,void(TowerDefendModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_140);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieAddedToBoard);
  local_160 = local_80;
  uStack_158 = uStack_78;
  local_150 = local_70;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<TowerDefendModule,void(TowerDefendModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_160);
  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<TowerDefendModule,bool(TowerDefendModule::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_f8);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_100);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<TowerDefendModule,void(TowerDefendModule::*)()>(aDStack_38,aCStack_e0);
  Board::RegisterTouchGameplayObject(pBVar3,aDStack_68,4,a_Stack_100,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_100);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

