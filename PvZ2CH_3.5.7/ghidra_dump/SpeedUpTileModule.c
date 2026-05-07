// Class: SpeedUpTileModule


/* SpeedUpTileModule::onUpdate() */

void SpeedUpTileModule::onUpdate(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpeedUpTileModule::StaticClassInit() */

void SpeedUpTileModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpeedUpTileModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03dde894,0x2e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpeedUpTileModule::StaticGetClass() */

long * SpeedUpTileModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SpeedUpTileModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpeedUpTileModule::GetSpeedUpTileDirection(int, int) */

void __thiscall
SpeedUpTileModule::GetSpeedUpTileDirection(SpeedUpTileModule *this,int param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  int local_18 [2];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GriditemBarrelZombieDes::GriditemBarrelZombieDes
            ((GriditemBarrelZombieDes *)local_18,
             (GriditemBarrelZombieDes *)(this + ((long)param_1 * 5 + (long)param_2) * 0x10 + 0x18));
  if (local_18[0] == 7) {
    uVar2 = 0;
    lVar1 = FUN_05474374(auStack_10,"SPEED_UP_TILE_UP",0);
    if (lVar1 == -1) {
      uVar2 = 1;
      lVar1 = FUN_05474374(auStack_10,"SPEED_UP_TILE_DOWN",0);
      if (lVar1 == -1) {
        uVar2 = 2;
        lVar1 = FUN_05474374(auStack_10,"SPEED_UP_TILE_LEFT",0);
        if (lVar1 == -1) {
          lVar1 = FUN_05474374(auStack_10,"SPEED_UP_TILE_RIGHT",0);
          uVar2 = 3;
          if (lVar1 == -1) {
            uVar2 = 0xffffffff;
          }
        }
      }
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  PakRecord::~PakRecord((PakRecord *)local_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* SpeedUpTileModule::placeRoads() */

void __thiscall SpeedUpTileModule::placeRoads(SpeedUpTileModule *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  if (0 < iVar1) {
    do {
      iVar1 = 0;
      while( true ) {
        iVar2 = BoardConstants::NUMBER_OF_ROWS();
        if (iVar2 <= iVar1) break;
        Board::SetGridSquareType
                  (*(Board **)(gLawnApp + 0x9f0),iVar3,iVar1,
                   *(undefined4 *)(this + ((long)iVar3 * 5 + (long)iVar1) * 0x10 + 0x18));
        iVar1 = iVar1 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
    } while (iVar3 < iVar1);
  }
  return;
}


/* SpeedUpTileModule::SpeedUpTileModule() */

void __thiscall SpeedUpTileModule::SpeedUpTileModule(SpeedUpTileModule *this)

{
  SpeedUpTileModule *pSVar1;
  SpeedUpTileModule *pSVar2;
  SpeedUpTileModule *this_00;
  
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0677e550;
  this_00 = this + 0x18;
  do {
    pSVar1 = this_00 + 0x50;
    do {
      pSVar2 = this_00 + 0x10;
      TDRoadData::TDRoadData((TDRoadData *)this_00);
      this_00 = pSVar2;
    } while (pSVar1 != pSVar2);
    this_00 = pSVar1;
  } while (pSVar1 != this + 0x2e8);
  return;
}


/* SpeedUpTileModule::StaticNew() */

SpeedUpTileModule * SpeedUpTileModule::StaticNew(void)

{
  SpeedUpTileModule *this;
  
  this = ::operator_new(0x2e8);
  SpeedUpTileModule(this);
  return this;
}


/* SpeedUpTileModule::~SpeedUpTileModule() */

void __thiscall SpeedUpTileModule::~SpeedUpTileModule(SpeedUpTileModule *this)

{
  SpeedUpTileModule *this_00;
  
  this_00 = this + 0x2e8;
  *(undefined ***)this = &PTR_GetModuleClass_0677e550;
  do {
    this_00 = this_00 + -0x10;
    PakRecord::~PakRecord((PakRecord *)this_00);
  } while (this + 0x18 != this_00);
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* SpeedUpTileModule::~SpeedUpTileModule() */

void __thiscall SpeedUpTileModule::~SpeedUpTileModule(SpeedUpTileModule *this)

{
  ~SpeedUpTileModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpeedUpTileModule::renderRoads(Sexy::Graphics*) */

void __thiscall SpeedUpTileModule::renderRoads(SpeedUpTileModule *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  InfoClass *pIVar6;
  ResourceInfo *pRVar7;
  SpeedUpTileModule *pSVar8;
  int iVar9;
  SpeedUpTileModule *pSVar10;
  float local_28;
  float local_24;
  Point aPStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  pSVar10 = this + 0x20;
  iVar9 = 0;
  local_8 = ___stack_chk_guard;
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  if (0 < iVar3) {
    do {
      pSVar8 = pSVar10;
      for (iVar3 = 0; iVar4 = BoardConstants::NUMBER_OF_ROWS(), iVar3 < iVar4; iVar3 = iVar3 + 1) {
        ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                  ((ResistenceValueInfo *)&local_28);
        local_28 = (float)FUN_03dde044((float)iVar1 * (float)iVar9 + 200.0);
        local_24 = (float)FUN_03dde044((float)iVar2 * (float)iVar3 + 160.0);
        Sexy::Point::Point(aPStack_20,0,0);
        iVar4 = Board::GetGridSquareType(*(Board **)(gLawnApp + 0x9f0),iVar9,iVar3);
        if (iVar4 == 7) {
          FUN_05475d88(asStack_18,pSVar8);
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
        pSVar8 = pSVar8 + 0x10;
      }
      iVar9 = iVar9 + 1;
      iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
      pSVar10 = pSVar10 + 0x50;
    } while (iVar9 < iVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpeedUpTileModule::addToRenderQueue(RenderQueue*) */

void __thiscall SpeedUpTileModule::addToRenderQueue(SpeedUpTileModule *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,renderRoads);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<SpeedUpTileModule,void(SpeedUpTileModule::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,0x186a1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpeedUpTileModule::parseRoadDatas() */

void __thiscall SpeedUpTileModule::parseRoadDatas(SpeedUpTileModule *this)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  int *piVar6;
  int iVar7;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar7 = 0;
  local_8 = ___stack_chk_guard;
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  if (0 < iVar3) {
    do {
      for (iVar3 = 0; iVar4 = BoardConstants::NUMBER_OF_ROWS(), iVar3 < iVar4; iVar3 = iVar3 + 1) {
        *(undefined4 *)(this + ((long)iVar7 * 5 + (long)iVar3) * 0x10 + 0x18) = 8;
      }
      iVar7 = iVar7 + 1;
      iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    } while (iVar7 < iVar3);
  }
  local_18 = FUN_03ddf68c(*(undefined8 *)(pRVar5 + 0x40));
  local_10 = FUN_03ddf6dc(*(undefined8 *)(pRVar5 + 0x48));
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
/* SpeedUpTileModule::onPostLoad() */

void __thiscall SpeedUpTileModule::onPostLoad(SpeedUpTileModule *this)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  int *piVar6;
  int iVar7;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  iVar7 = 0;
  lStack_8 = ___stack_chk_guard;
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  if (0 < iVar3) {
    do {
      for (iVar3 = 0; iVar4 = BoardConstants::NUMBER_OF_ROWS(), iVar3 < iVar4; iVar3 = iVar3 + 1) {
        *(undefined4 *)(this + ((long)iVar7 * 5 + (long)iVar3) * 0x10 + 0x18) = 8;
      }
      iVar7 = iVar7 + 1;
      iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    } while (iVar7 < iVar3);
  }
  uStack_18 = FUN_03ddf68c(*(undefined8 *)(pRVar5 + 0x40));
  uStack_10 = FUN_03ddf6dc(*(undefined8 *)(pRVar5 + 0x48));
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


/* SpeedUpTileModule::onLoadComplete() */

void __thiscall SpeedUpTileModule::onLoadComplete(SpeedUpTileModule *this)

{
  parseRoadDatas(this);
  placeRoads(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpeedUpTileModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall SpeedUpTileModule::AddResourceRequirements(SpeedUpTileModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  std::string::string(asStack_10,"UI_SpeedUpTile");
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
/* SpeedUpTileModule::registerForEvents() */

void __thiscall SpeedUpTileModule::registerForEvents(SpeedUpTileModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<SpeedUpTileModule,void(SpeedUpTileModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::
  Delegate1<SpeedUpTileModule,void(SpeedUpTileModule::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,aCStack_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<SpeedUpTileModule,void(SpeedUpTileModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

