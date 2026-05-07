// Class: DinosaurDangerModule


/* DinosaurDangerModule::OnLoadComplete() */

void DinosaurDangerModule::OnLoadComplete(void)

{
  return;
}


/* DinosaurDangerModule::GameplayStarted() */

void DinosaurDangerModule::GameplayStarted(void)

{
  return;
}


/* DinosaurDangerModule::GameplayEnded() */

void DinosaurDangerModule::GameplayEnded(void)

{
  return;
}


/* DinosaurDangerModule::Draw(Sexy::Graphics*) */

void DinosaurDangerModule::Draw(Graphics *param_1)

{
  return;
}


/* DinosaurDangerModule::Update() */

void DinosaurDangerModule::Update(void)

{
  return;
}


/* DinosaurDangerModule::OnPlantAdded(Plant*) */

void DinosaurDangerModule::OnPlantAdded(Plant *param_1)

{
  return;
}


/* DinosaurDangerModule::OnLevelEnded() */

void DinosaurDangerModule::OnLevelEnded(void)

{
  return;
}


/* DinosaurDangerModule::OnErrorOK() */

void DinosaurDangerModule::OnErrorOK(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurDangerModule::StaticClassInit() */

void DinosaurDangerModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinosaurDangerModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04bb9fa8,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurDangerModule::StaticGetClass() */

long * DinosaurDangerModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurDangerModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurDangerModule::IsInDinosaurDangerBattle() */

void DinosaurDangerModule::IsInDinosaurDangerBattle(void)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) {
    bVar1 = false;
  }
  else {
    uVar2 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    FUN_05475d88(asStack_10,uVar2);
    lVar3 = FUN_05474374(asStack_10,"DinosaurDanger",0);
    bVar1 = lVar3 != -1;
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* DinosaurDangerModule::DinosaurDangerModule() */

void __thiscall DinosaurDangerModule::DinosaurDangerModule(DinosaurDangerModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_06978120;
  return;
}


/* DinosaurDangerModule::StaticNew() */

DinosaurDangerModule * DinosaurDangerModule::StaticNew(void)

{
  DinosaurDangerModule *this;
  
  this = ::operator_new(0x20);
  DinosaurDangerModule(this);
  return this;
}


/* DinosaurDangerModule::~DinosaurDangerModule() */

void __thiscall DinosaurDangerModule::~DinosaurDangerModule(DinosaurDangerModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06978120;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* DinosaurDangerModule::~DinosaurDangerModule() */

void __thiscall DinosaurDangerModule::~DinosaurDangerModule(DinosaurDangerModule *this)

{
  ~DinosaurDangerModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurDangerModule::OnCollectableTryToCollect(Collectable*) */

void __thiscall
DinosaurDangerModule::OnCollectableTryToCollect(DinosaurDangerModule *this,Collectable *param_1)

{
  char cVar1;
  int iVar2;
  NameMapperBase *this_00;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
  if (cVar1 != '\0') {
    this_00 = (NameMapperBase *)MaterialItemMapper::GetInstance();
    TwinsAssistPerson::GetPopAnimRig();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    iVar2 = NameMapperBase::GetIdForName(this_00,(string *)(lVar3 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    if (iVar2 - 0x59ddU < 2) {
      DVec3::DVec3((DVec3 *)&local_18);
      std::string::string((string *)&local_20,"UIGemBank");
      plVar4 = (long *)UIWidget::GetWidgetBySheetName((string *)&local_20);
      std::string::~string((string *)&local_20);
      nop();
      if (plVar4 == (long *)0x0) {
        fVar6 = (float)Sexy::Rand(0.2);
        fVar7 = (float)Sexy::Rand(0.2);
        iVar2 = *(int *)(gLawnApp + 0x724);
        Board::GetBoardBaseOffset();
        local_18 = (float)FUN_04bb9b58((fVar6 + 0.4) * (float)iVar2 - (float)local_20);
        iVar2 = *(int *)(gLawnApp + 0x728);
        Board::GetBoardBaseOffset();
        local_14 = (float)FUN_04bb9b58((fVar7 + 0.4) * (float)iVar2 - (float)local_1c);
      }
      else {
        (**(code **)(*plVar4 + 0xb0))((Point *)&local_28,plVar4);
        Board::TranslateUIWidgetPositionToBoardPosition
                  (*(Board **)(gLawnApp + 0x9f0),(Point *)&local_28);
        Board::GetBoardBaseOffset();
        iVar2 = FUN_04bb9b44(local_28 - local_20);
        local_18 = (float)iVar2;
        Board::GetBoardBaseOffset();
        iVar2 = FUN_04bb9b44(local_24 - local_1c);
        local_14 = (float)iVar2;
      }
      uVar5 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)param_1);
      Collectable::SetMotionInterpolateAndScale
                ((Collectable *)0x3f800000,0x3e4ccccd,0x3fc00000,param_1,uVar5,
                 (RtWeakPtr<Sexy::ResourceInfo> *)&local_18,5);
      Collectable::StartCollect(param_1,true);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurDangerModule::ShowErrorDialog(std::wstring const&) */

void __thiscall DinosaurDangerModule::ShowErrorDialog(DinosaurDangerModule *this,wstring *param_1)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this_00 = gLawnApp;
  FUN_05478178(awStack_50,L"[SUMMARY_NOTICE]",auStack_58);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_50,param_1);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(auStack_58,L"[BUTTON_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnErrorOK);
  Sexy::Delegate0::Delegate0<DinosaurDangerModule,void(DinosaurDangerModule::*)()>
            (aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,auStack_58,aDStack_38,1);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurDangerModule::onZombieDropLoot(Zombie*) */

void __thiscall DinosaurDangerModule::onZombieDropLoot(DinosaurDangerModule *this,Zombie *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  SexyVector3 *pSVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
  if ((cVar1 != '\0') && (uVar2 = Sexy::Rand(100), (int)uVar2 < 0x33)) {
    pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    if (((uVar2 & 1) == 0) && (*(int *)(this + 0x18) < *(int *)(pRVar4 + 0x44))) {
      iVar3 = MaterialItemMapper::GetInstance();
      NameMapperBase::GetNameForId(iVar3);
      pSVar5 = (SexyVector3 *)Board::AddCollectable(*(string **)(gLawnApp + 0x9f0));
      std::
      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_1);
      BoardEntity::PlaceOnBoard(pSVar5);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
      std::string::~string(asStack_10);
    }
    else if (((int)uVar2 % 2 == 1) && (*(int *)(this + 0x1c) < *(int *)(pRVar4 + 0x40))) {
      iVar3 = MaterialItemMapper::GetInstance();
      NameMapperBase::GetNameForId(iVar3);
      pSVar5 = (SexyVector3 *)Board::AddCollectable(*(string **)(gLawnApp + 0x9f0));
      std::
      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_1);
      BoardEntity::PlaceOnBoard(pSVar5);
      *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
      std::string::~string(asStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurDangerModule::AddToRenderQueue(RenderQueue*) */

void __thiscall
DinosaurDangerModule::AddToRenderQueue(DinosaurDangerModule *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,Draw);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<DinosaurDangerModule,void(DinosaurDangerModule::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,900000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurDangerModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
DinosaurDangerModule::AddResourceRequirements(DinosaurDangerModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  std::string::string(asStack_10,"UI_Fragment_Material");
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
/* DinosaurDangerModule::onShowEndLevelUI() */

void __thiscall DinosaurDangerModule::onShowEndLevelUI(DinosaurDangerModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  EndLevelUI *pEVar2;
  MetricsCollector *this_00;
  NetworkMgr *this_01;
  INetworkMsgProcess *this_02;
  undefined4 local_30;
  undefined4 local_2c;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  pEVar2 = (EndLevelUI *)LawnApp::GetEndLevelUI(gLawnApp);
  if (pEVar2 != (EndLevelUI *)0x0) {
    EndLevelUI::setNormalAwardCoinCount(pEVar2,0);
    pEVar2 = (EndLevelUI *)LawnApp::GetEndLevelUI(gLawnApp);
    EndLevelUI::setOtherReward(pEVar2,0x59dd,*(int *)(pRVar1 + 0x44));
    pEVar2 = (EndLevelUI *)LawnApp::GetEndLevelUI(gLawnApp);
    EndLevelUI::setOtherReward(pEVar2,0x59de,*(int *)(pRVar1 + 0x40));
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_30);
    local_2c = *(undefined4 *)(pRVar1 + 0x44);
    local_30 = 0x59dd;
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)avStack_20,
               (S2C_BonusInfo *)&local_30);
    local_2c = *(undefined4 *)(pRVar1 + 0x40);
    local_30 = 0x59de;
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)avStack_20,
               (S2C_BonusInfo *)&local_30);
    this_00 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
    MetricsCollector::SendBattleResultWithDinosuarDanger(this_00,(vector *)avStack_20);
    this_01 = (NetworkMgr *)NetworkMgr::Instance();
    this_02 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
    INetworkMsgProcess::RequestDinosaurDanger(this_02,2);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurDangerModule::registerForEvents() */

void __thiscall DinosaurDangerModule::registerForEvents(DinosaurDangerModule *this)

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
  CBMemberTranslatorX aCStack_98 [24];
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
            ((ReceivedDataCallback *)this,OnLoadComplete);
  Sexy::Delegate0::Delegate0<DinosaurDangerModule,void(DinosaurDangerModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GameplayStarted);
  Sexy::Delegate0::Delegate0<DinosaurDangerModule,void(DinosaurDangerModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GameplayEnded);
  Sexy::Delegate0::Delegate0<DinosaurDangerModule,void(DinosaurDangerModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,AddToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::
  Delegate1<DinosaurDangerModule,void(DinosaurDangerModule::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,Update);
  Sexy::Delegate0::Delegate0<DinosaurDangerModule,void(DinosaurDangerModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLevelEnded);
  Sexy::Delegate0::Delegate0<DinosaurDangerModule,void(DinosaurDangerModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantAdded);
  local_c0 = local_80;
  uStack_b8 = uStack_78;
  local_b0 = local_70;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<DinosaurDangerModule,void(DinosaurDangerModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantAdded,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCollectableTryToCollect);
  local_d0 = local_58;
  local_e0 = local_68;
  uStack_d8 = uStack_60;
  MessageRouter::
  Subscribe<Collectable*,Sexy::CBMemberTranslatorX<DinosaurDangerModule,void(DinosaurDangerModule::*)(Collectable*)>>
            ((MessageRouter *)puVar1,Message::CollectableTryToCollect,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDropLoot);
  local_100 = local_50;
  uStack_f8 = uStack_48;
  local_f0 = local_40;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<DinosaurDangerModule,void(DinosaurDangerModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDropLoot,&local_100);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onShowEndLevelUI);
  Sexy::Delegate0::Delegate0<DinosaurDangerModule,void(DinosaurDangerModule::*)()>
            (aDStack_38,aCStack_98);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::OnEndLevelShow,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

