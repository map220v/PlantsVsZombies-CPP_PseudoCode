// Class: PlantWarsOutro


/* PlantWarsOutro::onUpdate() */

void __thiscall PlantWarsOutro::onUpdate(PlantWarsOutro *this)

{
  if (*(int *)(this + 0x18) == 1) {
    *(undefined4 *)(this + 0x18) = 2;
  }
  return;
}


/* PlantWarsOutro::gameStart() */

void PlantWarsOutro::gameStart(void)

{
  return;
}


/* PlantWarsOutro::onBoardFadeDone() */

void PlantWarsOutro::onBoardFadeDone(void)

{
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
  Board::DestroyAllCreatures();
  Board::EndLevel(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsOutro::StaticClassInit() */

void PlantWarsOutro::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWarsOutro");
    (*pcVar2)(plVar1,asStack_10,FUN_04d90154,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsOutro::StaticGetClass() */

long * PlantWarsOutro::StaticGetClass(void)

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
  uVar2 = OutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWarsOutro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsOutro::PlantWarsOutro() */

void __thiscall PlantWarsOutro::PlantWarsOutro(PlantWarsOutro *this)

{
  OutroModule::OutroModule((OutroModule *)this);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_069baeb0;
  return;
}


/* PlantWarsOutro::StaticNew() */

PlantWarsOutro * PlantWarsOutro::StaticNew(void)

{
  PlantWarsOutro *this;
  
  this = ::operator_new(0x20);
  PlantWarsOutro(this);
  return this;
}


/* PlantWarsOutro::~PlantWarsOutro() */

void __thiscall PlantWarsOutro::~PlantWarsOutro(PlantWarsOutro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_069baeb0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  OutroModule::~OutroModule((OutroModule *)this);
  return;
}


/* PlantWarsOutro::~PlantWarsOutro() */

void __thiscall PlantWarsOutro::~PlantWarsOutro(PlantWarsOutro *this)

{
  ~PlantWarsOutro(this);
  AK::FreeHook(this);
  return;
}


/* PlantWarsOutro::onGotoNextLevel(PlantWarsEndLevelUI*) */

void PlantWarsOutro::onGotoNextLevel(PlantWarsEndLevelUI *param_1)

{
  PlantWarsLevelSelectManager *this;
  
  this = (PlantWarsLevelSelectManager *)
         Sexy::LazySingleton<PlantWarsLevelSelectManager>::GetInstancePtr();
  PlantWarsLevelSelectManager::CloseEndLevelUI(this);
  PlantWarsUtils::GoToNextLevel();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsOutro::startBoardFade() */

void __thiscall PlantWarsOutro::startBoardFade(PlantWarsOutro *this)

{
  undefined8 uVar1;
  Insets aIStack_60 [16];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x18) = 3;
  local_8 = ___stack_chk_guard;
  uVar1 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Insets::Insets(aIStack_60,0xff,0xff,0xff,0xff);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBoardFadeDone);
  Sexy::Delegate0::Delegate0<PlantWarsOutro,void(PlantWarsOutro::*)()>(aDStack_38,aCStack_50);
  Board::StartBoardFade((Board *)0x3f800000,uVar1,aIStack_60,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsOutro::onResultsScreenDismissed(PlantWarsEndLevelUI*) */

void PlantWarsOutro::onResultsScreenDismissed(PlantWarsEndLevelUI *param_1)

{
  PlantWarsLevelSelectManager *this;
  
  this = (PlantWarsLevelSelectManager *)
         Sexy::LazySingleton<PlantWarsLevelSelectManager>::GetInstancePtr();
  PlantWarsLevelSelectManager::CloseEndLevelUI(this);
  startBoardFade((PlantWarsOutro *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsOutro::showResultsScreen(bool) */

void __thiscall PlantWarsOutro::showResultsScreen(PlantWarsOutro *this,bool param_1)

{
  PlantWarsLevelSelectManager *this_00;
  PlantWarsEndLevelUI *this_01;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<PlantWarsEndLevelUI*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlantWarsLevelSelectManager *)
            Sexy::LazySingleton<PlantWarsLevelSelectManager>::GetInstancePtr();
  this_01 = (PlantWarsEndLevelUI *)PlantWarsLevelSelectManager::ShowEndLevelUI(this_00,param_1,true)
  ;
  if (this_01 != (PlantWarsEndLevelUI *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onResultsScreenDismissed);
    Sexy::Delegate1<PlantWarsEndLevelUI*>::
    Delegate1<PlantWarsOutro,void(PlantWarsOutro::*)(PlantWarsEndLevelUI*)>(aDStack_38,aCStack_50);
    PlantWarsEndLevelUI::SetContinueCallBack(this_01,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsOutro::sendPostEndPlay() */

void PlantWarsOutro::sendPostEndPlay(void)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  PlantWarsUtils::GetCurrentLevelScoreList((vector *)avStack_38);
  std::vector<int,std::allocator<int>>::vector(avStack_20,(vector *)avStack_38);
  PlantWarsUtils::RequestEndPlayData(avStack_20);
  std::vector<int,std::allocator<int>>::~vector(avStack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsOutro::startWinOutro() */

void __thiscall PlantWarsOutro::startWinOutro(PlantWarsOutro *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  PlantWarsNetworkMgr *this_00;
  PlantWarsLevelSelectManager *this_01;
  PlantWarsEndLevelUI *this_02;
  float fVar5;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<PlantWarsEndLevelUI*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
  lVar4 = Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  PVZ_T();
  FUN_04d8c398(lVar4 + 0x124);
  lVar4 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  FUN_05475d88(asStack_58,lVar4 + 0xb0);
  FUN_05475d88(asStack_50,asStack_58);
  iVar2 = PlantWarsUtils::CalcNodeType(asStack_50);
  std::string::~string(asStack_50);
  lVar4 = Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  fVar5 = (float)FUN_04d8c3a0(*(undefined4 *)(lVar4 + 0x120),*(undefined4 *)(lVar4 + 0x124));
  lVar4 = Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  iVar3 = FUN_04d8c38c(*(undefined4 *)(lVar4 + 0xf8));
  this_00 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  PlantWarsNetworkMgr::SetLevelTime(this_00,iVar3,iVar2,fVar5);
  if (iVar2 == 0) {
    cVar1 = PlantWarsUtils::IsWonResult();
    if (cVar1 != '\0') {
      this_01 = (PlantWarsLevelSelectManager *)
                Sexy::LazySingleton<PlantWarsLevelSelectManager>::GetInstancePtr();
      this_02 = (PlantWarsEndLevelUI *)
                PlantWarsLevelSelectManager::ShowEndLevelUI(this_01,true,false);
      if (this_02 != (PlantWarsEndLevelUI *)0x0) {
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,onGotoNextLevel);
        Sexy::Delegate1<PlantWarsEndLevelUI*>::
        Delegate1<PlantWarsOutro,void(PlantWarsOutro::*)(PlantWarsEndLevelUI*)>
                  (aDStack_38,asStack_50);
        PlantWarsEndLevelUI::SetContinueCallBack(this_02,aDStack_38);
      }
      goto LAB_04d95f8c;
    }
  }
  else if (iVar2 != 1) goto LAB_04d95f8c;
  sendPostEndPlay();
LAB_04d95f8c:
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsOutro::onSuccessResponse() */

void __thiscall PlantWarsOutro::onSuccessResponse(PlantWarsOutro *this)

{
  PlantWarsNetworkMgr *this_00;
  PlantWarsEndOfPlayData *pPVar1;
  PlantWarsEndOfPlayData aPStack_58 [72];
  bool local_10;
  long local_8;
  
  *(undefined4 *)(this + 0x18) = 1;
  local_8 = ___stack_chk_guard;
  this_00 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  pPVar1 = (PlantWarsEndOfPlayData *)PlantWarsNetworkMgr::GetEndPlayData(this_00);
  PlantWarsEndOfPlayData::PlantWarsEndOfPlayData(aPStack_58,pPVar1);
  showResultsScreen(this,local_10);
  PlantWarsEndOfPlayData::~PlantWarsEndOfPlayData(aPStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsOutro::onPVZ1ModeNetworkResponse(int, int) */

void __thiscall
PlantWarsOutro::onPVZ1ModeNetworkResponse(PlantWarsOutro *this,int param_1,int param_2)

{
  Sexy::OutputDebugStrF((wchar_t *)"PlantWarsOutro::onPVZ1ModeNetworkResponse context=%d status=%d")
  ;
  if (param_1 == 3) {
    if (param_2 == 2) {
      onSuccessResponse(this);
      return;
    }
    if (param_2 == 5) {
      JoustUtils::ShowJoustNetworkIssuePopup(1,3);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsOutro::registerForEvents() */

void __thiscall PlantWarsOutro::registerForEvents(PlantWarsOutro *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,startWinOutro);
  Sexy::Delegate0::Delegate0<PlantWarsOutro,void(PlantWarsOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnWinOutroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<PlantWarsOutro,void(PlantWarsOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameStart);
  Sexy::Delegate0::Delegate0<PlantWarsOutro,void(PlantWarsOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPVZ1ModeNetworkResponse);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<PlantWarsOutro,void(PlantWarsOutro::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::PVZ1ModeNetworkResponseReceived,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

