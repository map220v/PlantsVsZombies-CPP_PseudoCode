// Class: RunningSubwayStage


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayStage::onLevelLoaded() */

void __thiscall RunningSubwayStage::onLevelLoaded(RunningSubwayStage *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  InfoClass *pIVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  thunk_FUN_05475e00(this + 0x50,pRVar1 + 0x40);
  FUN_05475d88(asStack_40,pRVar1 + 0x48);
  uVar2 = FUN_0547429c(asStack_40);
  uVar3 = FUN_0547429c(pRVar1 + 0x58);
  Sexy::StrFormat("%s_%s",asStack_28,uVar2,uVar3);
  pIVar4 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                     (*(ResourceManager **)(gLawnApp + 0x848),asStack_28);
  if (pIVar4 != (InfoClass *)0x0) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x60),(RtWeakPtr *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  std::string::~string(asStack_28);
  uVar2 = FUN_0547429c(asStack_40);
  uVar3 = FUN_0547429c(pRVar1 + 0x60);
  Sexy::StrFormat("%s_%s",asStack_28,uVar2,uVar3);
  pIVar4 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                     (*(ResourceManager **)(gLawnApp + 0x848),asStack_28);
  if (pIVar4 != (InfoClass *)0x0) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x68),(RtWeakPtr *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  std::string::~string(asStack_28);
  uVar2 = FUN_0547429c(asStack_40);
  uVar3 = FUN_0547429c(pRVar1 + 0x50);
  Sexy::StrFormat("%s_%s",asStack_28,uVar2,uVar3);
  pIVar4 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                     (*(ResourceManager **)(gLawnApp + 0x848),asStack_28);
  if (pIVar4 != (InfoClass *)0x0) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x70),(RtWeakPtr *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  uVar8 = 0;
  std::string::~string(asStack_28);
  lVar5 = FUN_04467fac(*(undefined8 *)(pRVar1 + 0x70),*(undefined8 *)(pRVar1 + 0x78));
  if (lVar5 != 0) {
    do {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
      uVar2 = FUN_04467fb8(*(undefined8 *)(pRVar1 + 0x70),uVar8);
      FUN_05475d88(asStack_38,uVar2);
      uVar2 = FUN_0547429c(asStack_38);
      Sexy::StrFormat("%s_UNDAMAGED",asStack_30,uVar2);
      pIVar4 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                         (*(ResourceManager **)(gLawnApp + 0x848),asStack_30);
      if (pIVar4 != (InfoClass *)0x0) {
        Sexy::ResourceInfoTypes::FontRes::GetFont();
        std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::
        push_back((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>
                   *)aRStack_20,(RtWeakPtr *)asStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28)
        ;
      }
      uVar7 = 1;
      std::string::~string(asStack_30);
      while( true ) {
        uVar2 = FUN_0547429c(asStack_38);
        Sexy::StrFormat("%s_DAMAGE%d",asStack_30,uVar2,(ulong)uVar7);
        pIVar4 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                           (*(ResourceManager **)(gLawnApp + 0x848),asStack_30);
        if (pIVar4 == (InfoClass *)0x0) break;
        uVar7 = uVar7 + 1;
        Sexy::ResourceInfoTypes::FontRes::GetFont();
        std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::
        push_back((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>
                   *)aRStack_20,(RtWeakPtr *)asStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28)
        ;
        std::string::~string(asStack_30);
      }
      uVar8 = uVar8 + 1;
      std::string::~string(asStack_30);
      std::
      vector<std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>,std::allocator<std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>>>
      ::push_back((vector<std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>,std::allocator<std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>>>
                   *)(this + 0x78),(vector *)aRStack_20);
      std::string::~string(asStack_38);
      std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::
      ~vector((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
              aRStack_20);
      uVar6 = FUN_04467fac(*(undefined8 *)(pRVar1 + 0x70),*(undefined8 *)(pRVar1 + 0x78));
    } while (uVar8 < uVar6);
  }
  std::string::~string(asStack_40);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayStage::StaticClassInit() */

void RunningSubwayStage::StaticClassInit(void)

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
    std::string::string(asStack_10,"RunningSubwayStage");
    (*pcVar2)(plVar1,asStack_10,FUN_033ea35c,0xf0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RunningSubwayStage::StaticGetClass() */

long * RunningSubwayStage::StaticGetClass(void)

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
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"RunningSubwayStage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RunningSubwayStage::RunningSubwayStage() */

void __thiscall RunningSubwayStage::RunningSubwayStage(RunningSubwayStage *this)

{
  StageModule::StageModule((StageModule *)this);
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_0661c120;
  *(undefined4 *)(this + 0xe8) = 0;
  return;
}


/* RunningSubwayStage::StaticNew() */

RunningSubwayStage * RunningSubwayStage::StaticNew(void)

{
  RunningSubwayStage *this;
  
  this = ::operator_new(0xf0);
  RunningSubwayStage(this);
  return this;
}


/* RunningSubwayStage::updateGridSquare(Sexy::TRect<int>) */

void __thiscall RunningSubwayStage::updateGridSquare(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_2[2];
  iVar5 = *param_2;
  if (iVar5 < iVar4) {
    iVar2 = param_2[1];
    iVar3 = param_2[3];
    do {
      iVar1 = iVar2;
      if (iVar2 < iVar2 + iVar3) {
        do {
          iVar4 = iVar1 + 1;
          Board::SetGridSquareType(*(Board **)(gLawnApp + 0x9f0),iVar5,iVar1,0xd);
          iVar2 = param_2[1];
          iVar3 = param_2[3];
          iVar1 = iVar4;
        } while (iVar4 < iVar2 + iVar3);
        iVar4 = param_2[2];
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayStage::generateDisabledRegion() */

void __thiscall RunningSubwayStage::generateDisabledRegion(RunningSubwayStage *this)

{
  int iVar1;
  int iVar2;
  BoardRegionDisabledArea *pBVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar1 = iVar1 + 1;
  pBVar3 = Board::AddRegion<BoardRegionDisabledArea>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::Insets::Insets(aIStack_18,-1,0,iVar1,1);
  BoardRegion::SetRegionFromGridSquares((BoardRegion *)pBVar3,(TRect *)aIStack_18);
  Sexy::Insets::Insets(aIStack_18,-1,0,iVar1,1);
  updateGridSquare(this,aIStack_18);
  iVar2 = BoardConstants::NUMBER_OF_ROWS();
  pBVar3 = Board::AddRegion<BoardRegionDisabledArea>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::Insets::Insets(aIStack_18,-1,iVar2 + -1,iVar1,1);
  BoardRegion::SetRegionFromGridSquares((BoardRegion *)pBVar3,(TRect *)aIStack_18);
  Sexy::Insets::Insets(aIStack_18,-1,iVar2 + -1,iVar1,1);
  updateGridSquare(this,aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayStage::onGameplayStarted() */

void __thiscall RunningSubwayStage::onGameplayStarted(RunningSubwayStage *this)

{
  int iVar1;
  int iVar2;
  BoardRegionDisabledArea *pBVar3;
  Insets aIStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar1 = iVar1 + 1;
  pBVar3 = Board::AddRegion<BoardRegionDisabledArea>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::Insets::Insets(aIStack_18,-1,0,iVar1,1);
  BoardRegion::SetRegionFromGridSquares((BoardRegion *)pBVar3,(TRect *)aIStack_18);
  Sexy::Insets::Insets(aIStack_18,-1,0,iVar1,1);
  updateGridSquare(this,aIStack_18);
  iVar2 = BoardConstants::NUMBER_OF_ROWS();
  pBVar3 = Board::AddRegion<BoardRegionDisabledArea>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::Insets::Insets(aIStack_18,-1,iVar2 + -1,iVar1,1);
  BoardRegion::SetRegionFromGridSquares((BoardRegion *)pBVar3,(TRect *)aIStack_18);
  Sexy::Insets::Insets(aIStack_18,-1,iVar2 + -1,iVar1,1);
  updateGridSquare(this,aIStack_18);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayStage::addBackgroundToRenderQueue(RenderQueue*) */

void __thiscall
RunningSubwayStage::addBackgroundToRenderQueue(RunningSubwayStage *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,renderRunBackground);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<RunningSubwayStage,void(RunningSubwayStage::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,0x1869e,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RunningSubwayStage::onNotifySpeedChanged(float) */

void __thiscall RunningSubwayStage::onNotifySpeedChanged(RunningSubwayStage *this,float param_1)

{
  *(float *)(this + 0xe8) = param_1;
  RunningSubwayUtils::SetSpeedValue(param_1);
  return;
}


/* RunningSubwayStage::renderRunBackground(Sexy::Graphics*) */

void __thiscall RunningSubwayStage::renderRunBackground(RunningSubwayStage *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  long lVar4;
  
  iVar2 = FUN_033e9e70(0xffffff9c);
  pIVar3 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06a9eb80);
  Sexy::Graphics::DrawImage(param_1,pIVar3,iVar2 + *(int *)(this + 0xe4),0);
  pIVar3 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06a9eb80);
  iVar1 = *(int *)(this + 0xe4);
  lVar4 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06a9eb80);
  Sexy::Graphics::DrawImage(param_1,pIVar3,iVar2 + iVar1 + *(int *)(lVar4 + 0x38),0);
  pIVar3 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06a9eb80);
  iVar1 = *(int *)(this + 0xe4);
  lVar4 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06a9eb80);
  Sexy::Graphics::DrawImage(param_1,pIVar3,iVar2 + iVar1 + *(int *)(lVar4 + 0x38) * 2,0);
  return;
}


/* RunningSubwayStage::onUpdate() */

void __thiscall RunningSubwayStage::onUpdate(RunningSubwayStage *this)

{
  long lVar1;
  int iVar2;
  
  if (*(float *)(this + 0xe8) <= 0.0) {
    iVar2 = *(int *)(this + 0xe4);
  }
  else {
    iVar2 = (int)((float)*(int *)(this + 0xe4) - *(float *)(this + 0xe8));
    *(int *)(this + 0xe4) = iVar2;
  }
  lVar1 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06a9eb80);
  if ((double)iVar2 <= -(double)*(int *)(lVar1 + 0x38)) {
    *(undefined4 *)(this + 0xe4) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayStage::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall RunningSubwayStage::AddResourceRequirements(RunningSubwayStage *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StageModule::AddResourceRequirements((StageModule *)this,param_1);
  std::string::string(asStack_10,"skycity_cannon");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"thunder");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantCoconutCannonAudio");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantPotatomineAudio");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantCherryBombAudio");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"ZombieIceAgeDodoGroup");
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


/* RunningSubwayStage::~RunningSubwayStage() */

void __thiscall RunningSubwayStage::~RunningSubwayStage(RunningSubwayStage *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0661c120;
  StageModule::~StageModule((StageModule *)this);
  return;
}


/* RunningSubwayStage::~RunningSubwayStage() */

void __thiscall RunningSubwayStage::~RunningSubwayStage(RunningSubwayStage *this)

{
  ~RunningSubwayStage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayStage::registerForEvents() */

void __thiscall RunningSubwayStage::registerForEvents(RunningSubwayStage *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate1<RenderQueue*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StageModule::registerForEvents((StageModule *)this);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addBackgroundToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::
  Delegate1<RunningSubwayStage,void(RunningSubwayStage::*)(RenderQueue*)>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<RunningSubwayStage,void(RunningSubwayStage::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<RunningSubwayStage,void(RunningSubwayStage::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifySpeedChanged);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<float,Sexy::CBMemberTranslatorX<RunningSubwayStage,void(RunningSubwayStage::*)(float)>>
            ((MessageRouter *)puVar1,Message::NotifySpeedChanged,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

