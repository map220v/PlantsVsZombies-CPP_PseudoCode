// Class: ResilienceTutorialIntro


/* ResilienceTutorialIntro::unregisterForEvents() */

void __thiscall ResilienceTutorialIntro::unregisterForEvents(ResilienceTutorialIntro *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* ResilienceTutorialIntro::getBoard() */

undefined8 ResilienceTutorialIntro::getBoard(void)

{
  return *(undefined8 *)(gLawnApp + 0x9f0);
}


/* ResilienceTutorialIntro::startGame() */

void __thiscall ResilienceTutorialIntro::startGame(ResilienceTutorialIntro *this)

{
  StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResilienceTutorialIntro::enablePlantfood(bool, bool) */

void __thiscall
ResilienceTutorialIntro::enablePlantfood(ResilienceTutorialIntro *this,bool param_1,bool param_2)

{
  bool bVar1;
  UIWidget *pUVar2;
  string *extraout_x1;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIPlantfood");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    UIWidget::SetVisible(pUVar2,param_1);
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    UIWidget::SetClickable(pUVar2,param_2);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResilienceTutorialIntro::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
ResilienceTutorialIntro::AddResourceRequirements(ResilienceTutorialIntro *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"PlantPeashooter");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantPeashooterAudio");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"NewTutorial_Effect");
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


/* ResilienceTutorialIntro::drawHighlight(Sexy::Graphics*) */

void ResilienceTutorialIntro::drawHighlight(Graphics *param_1)

{
  return;
}


/* ResilienceTutorialIntro::drawLawnOverlays(Sexy::Graphics*) */

void __thiscall
ResilienceTutorialIntro::drawLawnOverlays(ResilienceTutorialIntro *this,Graphics *param_1)

{
  TutorialFinger::Draw((TutorialFinger *)(this + 0x80),param_1);
  return;
}


/* ResilienceTutorialIntro::onPlantPlanted(Plant*) */

void ResilienceTutorialIntro::onPlantPlanted(Plant *param_1)

{
  TutorialFinger::StopCurvingTutorialFinger((TutorialFinger *)(param_1 + 0x80));
  return;
}


/* ResilienceTutorialIntro::onOk() */

void ResilienceTutorialIntro::onOk(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  LawnApp::KillGameMaskUI(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResilienceTutorialIntro::StaticClassInit() */

void ResilienceTutorialIntro::StaticClassInit(void)

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
    std::string::string(asStack_10,"ResilienceTutorialIntro");
    (*pcVar2)(plVar1,asStack_10,FUN_04f67238,0xf0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ResilienceTutorialIntro::StaticGetClass() */

long * ResilienceTutorialIntro::StaticGetClass(void)

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
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"ResilienceTutorialIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ResilienceTutorialIntro::onEndLevel() */

void __thiscall ResilienceTutorialIntro::onEndLevel(ResilienceTutorialIntro *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  AnimationMgr *this_01;
  long *plVar2;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58);
  this_01 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  AnimationMgr::Clear(this_01);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResilienceTutorialIntro::onZombieAddedToBoard(Zombie*) */

void ResilienceTutorialIntro::onZombieAddedToBoard(Zombie *param_1)

{
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(param_1 + 0xd8));
  if (cVar1 != '\0') {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0xd8),(RtWeakPtrBase *)aRStack_10)
    ;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResilienceTutorialIntro::showUI(bool) */

void __thiscall ResilienceTutorialIntro::showUI(ResilienceTutorialIntro *this,bool param_1)

{
  bool bVar1;
  Board *this_00;
  UIWidget *pUVar2;
  long extraout_x0;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  string *extraout_x1_04;
  string *extraout_x1_05;
  string *extraout_x1_06;
  RtWeakPtr aRStack_48 [8];
  RtWeakPtr aRStack_40 [8];
  RtWeakPtr aRStack_38 [8];
  RtWeakPtr aRStack_30 [8];
  RtWeakPtr aRStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Board *)getBoard();
  pUVar2 = (UIWidget *)Board::GetSeedBank(this_00);
  UIWidget::SetVisible(pUVar2,param_1);
  std::string::string(asStack_10,"UIPlantfood");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_48);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UIShovel");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_00);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_40);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UICoinBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_01);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_38);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UIGemBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_02);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_30);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_18,"UISunBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_18,extraout_x1_03);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (extraout_x0 != 0) {
    FUN_04f639c0(extraout_x0 + 0x179,param_1);
  }
  std::string::string(asStack_10,"UIChangeSpeedButton");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_04);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UIArtifactIcon");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_05);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UISunBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_06);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_18);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResilienceTutorialIntro::initializeModule() */

void __thiscall ResilienceTutorialIntro::initializeModule(ResilienceTutorialIntro *this)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  undefined4 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StandardLevelIntro::initializeModule((StandardLevelIntro *)this);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if ((pPVar2 == (PlayerInfo *)0x0) ||
     (cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar2,0x4e), cVar1 == '\0')) {
    this[0x60] = (ResilienceTutorialIntro)0x0;
    *(undefined4 *)(this + 0x4c) = 0xffffffff;
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x50) = uVar3;
    AnimationMgr::Create();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x58),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    this[200] = (ResilienceTutorialIntro)0x0;
    *(undefined4 *)(this + 0xcc) = 0;
    *(undefined4 *)(this + 0xc0) = uVar3;
    *(undefined4 *)(this + 0xc4) = 0xbf800000;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0xd8),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0xe0),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    this[0xc9] = (ResilienceTutorialIntro)0x0;
    *(undefined4 *)(this + 0xd0) = 0;
    *(undefined4 *)(this + 0xb8) = 0;
    *(undefined4 *)(this + 0xbc) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResilienceTutorialIntro::setupDavePFEpilog() */

void __thiscall ResilienceTutorialIntro::setupDavePFEpilog(ResilienceTutorialIntro *this)

{
  AnimationMgr *this_00;
  CrazyNPCManager *pCVar1;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58))
  ;
  AnimationMgr::Clear(this_00);
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  showUI(this,false);
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  std::string::string(asStack_60,"FRESHINTRO_PLANTFOOD_INTRO");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::Delegate0<ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)()>
            (aDStack_38,aCStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar1,asStack_60,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResilienceTutorialIntro::setupDaveEpilog() */

void __thiscall ResilienceTutorialIntro::setupDaveEpilog(ResilienceTutorialIntro *this)

{
  AnimationMgr *this_00;
  CrazyNPCManager *pCVar1;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58))
  ;
  AnimationMgr::Clear(this_00);
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  showUI(this,false);
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  std::string::string(asStack_60,"3800");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::Delegate0<ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)()>
            (aDStack_38,aCStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar1,asStack_60,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResilienceTutorialIntro::setupDaveFailed() */

void __thiscall ResilienceTutorialIntro::setupDaveFailed(ResilienceTutorialIntro *this)

{
  CrazyNPCManager *pCVar1;
  Board *pBVar2;
  AnimationMgr *this_00;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  showUI(this,false);
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  std::string::string(asStack_60,"3900");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::Delegate0<ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)()>
            (aDStack_38,aCStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar1,asStack_60,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
  enablePlantfood(this,false,false);
  pBVar2 = (Board *)getBoard();
  Board::DestroyAllZombies(pBVar2);
  pBVar2 = (Board *)getBoard();
  Board::ClearCursors(pBVar2);
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58))
  ;
  AnimationMgr::Clear(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResilienceTutorialIntro::StartNarrativeID(std::string const&) */

void __thiscall
ResilienceTutorialIntro::StartNarrativeID(ResilienceTutorialIntro *this,string *param_1)

{
  AnimationMgr *this_00;
  CrazyNPCManager *pCVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58))
  ;
  AnimationMgr::Clear(this_00);
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  showUI(this,false);
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::Delegate0<ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)()>
            (aDStack_38,aCStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar1,param_1,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResilienceTutorialIntro::SetNextDialog() */

void __thiscall ResilienceTutorialIntro::SetNextDialog(ResilienceTutorialIntro *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"RESILIENCE7");
  StartNarrativeID(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResilienceTutorialIntro::introduceDave() */

void __thiscall ResilienceTutorialIntro::introduceDave(ResilienceTutorialIntro *this)

{
  CrazyNPCManager *pCVar1;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  showUI(this,false);
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  std::string::string(asStack_60,"RESILIENCE1");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::Delegate0<ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)()>
            (aDStack_38,aCStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar1,asStack_60,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResilienceTutorialIntro::addToRenderQueue(RenderQueue*) */

void __thiscall
ResilienceTutorialIntro::addToRenderQueue(ResilienceTutorialIntro *this,RenderQueue *param_1)

{
  AnimationMgr *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58))
  ;
  AnimationMgr::AddToRenderQueue(this_00,param_1);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,drawHighlight);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,400000,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,drawLawnOverlays);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,0xdbba1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResilienceTutorialIntro::initZombies() */

void __thiscall ResilienceTutorialIntro::initZombies(ResilienceTutorialIntro *this)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ResilienceEntity *pRVar3;
  Zombie *this_00;
  int iVar4;
  Board *pBVar5;
  code *pcVar6;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  int local_34;
  string asStack_30 [16];
  ResilienceEntity aRStack_20 [8];
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (pRVar2 != (ResilienceTutorialIntroProperties *)0x0) {
    local_48 = FUN_04f655cc(*(undefined8 *)(pRVar2 + 0x90));
    local_40 = FUN_04f6561c(*(undefined8 *)(pRVar2 + 0x98));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1)
    {
      pRVar3 = (ResilienceEntity *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      ResilienceEntity::ResilienceEntity(aRStack_20,pRVar3);
      pBVar5 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05475d88(asStack_30,aRStack_20);
      this_00 = (Zombie *)Board::AddZombie(pBVar5,asStack_30,1,local_14,local_18);
      std::string::~string(asStack_30);
      if (this_00 != (Zombie *)0x0) {
        (**(code **)(*(long *)this_00 + 600))(this_00);
        Zombie::SetMaxResilienceValue(this_00,(float)local_c);
        Zombie::SetCurrentResilienceValue(this_00,(float)local_c);
        FUN_04f639b8((float)local_10,this_00 + 0x284);
        iVar4 = local_10;
        Zombie::SetHitpoints(this_00,(float)local_10);
        BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(ulong)local_14,local_18,iVar4);
        pcVar6 = *(code **)(*(long *)this_00 + 0x78);
        EATextSquish::Vec3::Vec3((Vec3 *)asStack_30,(float)local_38,(float)local_34,0.0);
        (*pcVar6)(this_00,asStack_30);
      }
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_20);
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_48);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ResilienceTutorialIntro::ResilienceTutorialIntro() */

void __thiscall ResilienceTutorialIntro::ResilienceTutorialIntro(ResilienceTutorialIntro *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06a214d0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  TutorialFinger::TutorialFinger((TutorialFinger *)(this + 0x80));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe8));
  return;
}


/* ResilienceTutorialIntro::StaticNew() */

ResilienceTutorialIntro * ResilienceTutorialIntro::StaticNew(void)

{
  ResilienceTutorialIntro *this;
  
  this = ::operator_new(0xf0);
  ResilienceTutorialIntro(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResilienceTutorialIntro::createTutorialDialog(std::string const&, std::string const&,
   std::wstring const&) */

void __thiscall
ResilienceTutorialIntro::createTutorialDialog
          (ResilienceTutorialIntro *this,string *param_1,string *param_2,wstring *param_3)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  PVZ2NewTutorialDialog *this_01;
  PVZ2UIDialog *this_02;
  ResourceInfo *pRVar5;
  LotteryResultProgressBar *this_03;
  undefined1 auStack_60 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_58 [8];
  Point aPStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = ::operator_new(0x1f0);
  PVZ2NewTutorialDialog::PVZ2NewTutorialDialog(this_01,param_1,param_2);
  this_00 = gLawnApp;
  iVar2 = FUN_04f642a0(0x28a);
  iVar3 = FUN_04f642a0(0x1fe);
  this_02 = (PVZ2UIDialog *)
            LawnApp::ShowPVZ2Dialog(this_00,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)this_01);
  FUN_05478178(aPStack_50,L"[ADVICE_TUTORIAL_TITLE]",a_Stack_58);
  PVZ2UIDialog::SetHeaderLabel(this_02,(wstring *)aPStack_50);
  FUN_05476c50(aPStack_50);
  nop();
  FUN_05478178(a_Stack_58,L"[DIALOG_YES_SKIP_TUTORIAL]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onOk);
  Sexy::Delegate0::Delegate0<ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)()>
            (aDStack_38,aPStack_50);
  PVZ2UIDialog::AddButton(this_02,a_Stack_58,aDStack_38,0);
  FUN_05476c50(a_Stack_58);
  nop();
  cVar1 = FUN_0547419c(param_1);
  if (cVar1 != '\0') {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_58);
    if (*(int *)(this + 0x4c) == 4) {
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06ba6c08);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_58,(RtWeakPtr *)aPStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_50);
    }
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_58);
    if (cVar1 != '\0') {
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_58);
      iVar2 = *(int *)(this_02 + 0x50);
      this_03 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba6c08);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_03);
      iVar4 = FUN_04f642a0(0x44);
      Sexy::Point::Point(aPStack_50,(iVar2 - iVar3) / 2,iVar4);
      PVZ2UIDialog::SetImage(this_02,pRVar5,aPStack_50);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
  }
  iVar2 = FUN_04f642a0(0x50);
  PVZ2UIDialog::SetHeaderHeight(this_02,iVar2);
  PVZ2UIDialog::SetFooterLabel(this_02,param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResilienceTutorialIntro::setupDaveProlog() */

void __thiscall ResilienceTutorialIntro::setupDaveProlog(ResilienceTutorialIntro *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar1;
  AnimationMgr *this_01;
  AnimationController *pAVar2;
  float fVar3;
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58);
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  FUN_04f639a8(lVar1 + 0x10);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar3 = (float)FUN_04f639b4(*(undefined4 *)(lVar1 + 0x10));
  this_01 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"introduceDave");
  pAVar2 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add(this_01,pAVar2,fVar3 + 1.0);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResilienceTutorialIntro::pauseEntities(bool, bool) */

void __thiscall
ResilienceTutorialIntro::pauseEntities(ResilienceTutorialIntro *this,bool param_1,bool param_2)

{
  Plant PVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  Plant *pPVar5;
  undefined8 *puVar6;
  Zombie *pZVar7;
  RtObject *this_00;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar4 = operator|(2,1);
  EntityFinder::GetEntitiesOnBoard(avStack_20,uVar4);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    this_00 = (RtObject *)*puVar6;
    bVar2 = Sexy::RtObject::IsA<Plant>(this_00);
    if (bVar2) {
      pPVar5 = Sexy::RtObject::Cast<Plant>(this_00);
      bVar2 = Sexy::RtObject::IsA<PlantSunflower>(*(RtObject **)(pPVar5 + 0xa8));
      PVar1 = (Plant)!param_1;
      if (bVar2) {
        PVar1 = (Plant)param_2;
      }
      pPVar5[0x158] = PVar1;
    }
    else {
      bVar2 = Sexy::RtObject::IsA<Zombie>(this_00);
      if (bVar2) {
        pZVar7 = Sexy::RtObject::Cast<Zombie>(this_00);
        cVar3 = (**(code **)(*(long *)pZVar7 + 0x328))();
        if (cVar3 == '\0') {
          (**(code **)(*(long *)pZVar7 + 600))(pZVar7);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ResilienceTutorialIntro::onGameplayStarted() */

void __thiscall ResilienceTutorialIntro::onGameplayStarted(ResilienceTutorialIntro *this)

{
  pauseEntities(this,false,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResilienceTutorialIntro::setState(ResilienceTutorialIntro::State) */

void __thiscall ResilienceTutorialIntro::setState(ResilienceTutorialIntro *this,int param_2)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  LawnApp *pLVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ResilienceTutorialIntroProperties *pRVar6;
  string *psVar7;
  ResilienceIntroWidget *this_01;
  SeedBankNew *this_02;
  undefined8 *puVar8;
  Plant *pPVar9;
  long lVar10;
  ProfileMgr *this_03;
  PlayerInfo *pPVar11;
  Board *pBVar12;
  WaveManager *pWVar13;
  UINewPVPTopZombieQueue *pUVar14;
  SeedPacket *pSVar15;
  UIWidget *pUVar16;
  char *pcVar17;
  RtObject *this_04;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  TPoint aTStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [3];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x4c) == param_2) goto switchD_04f6625c_caseD_7;
  *(int *)(this + 0x4c) = param_2;
  switch(param_2) {
  case 1:
    setupDaveProlog(this);
    enablePlantfood(this,false,false);
    pBVar12 = (Board *)getBoard();
    Board::SetSunMoney(pBVar12,300);
    pBVar12 = (Board *)getBoard();
    pWVar13 = (WaveManager *)Board::GetWaveManager(pBVar12);
    WaveManager::SetPause(pWVar13,true);
    initZombies(this);
    showUI(this,false);
    cVar3 = RiftUtils::IsRiftTimedLevel();
    if (cVar3 == '\0') {
      pcVar17 = "UINextWaveButton";
    }
    else {
      pcVar17 = "UINextWaveInstantButton";
    }
    std::string::string((string *)local_50,pcVar17);
    pUVar16 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)local_50);
    std::string::~string((string *)local_50);
    nop();
    if ((pUVar16 != (UIWidget *)0x0) && (cVar3 = NewPVPUtils::IsPlayingNewPVP(), cVar3 == '\0')) {
      UIWidget::SetClickable(pUVar16,false);
    }
    break;
  case 2:
    pcVar17 = "RESILIENCE2";
    goto LAB_04f66278;
  case 3:
    pcVar17 = "RESILIENCE3";
    goto LAB_04f66278;
  case 4:
    this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0xe8);
    pBVar12 = (Board *)getBoard();
    this_02 = (SeedBankNew *)Board::GetSeedBank(pBVar12);
    SeedBankNew::SetPacketsOnDisplay(this_02,false);
    for (iVar5 = 0; cVar3 = FUN_04f639c8(this_02[0x199]), iVar5 < cVar3; iVar5 = iVar5 + 1) {
      UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this_02,iVar5);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
      SeedPacket::GetPlantType();
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_50);
      if (cVar3 != '\0') {
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_50)
        ;
        bVar2 = std::operator==((string *)(lVar10 + 8),"peashooter");
        if (bVar2) {
          pSVar15 = (SeedPacket *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
          SeedPacket::SetDisabled(pSVar15,false);
          pSVar15 = (SeedPacket *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
          SeedPacket::setAffordable(pSVar15,true);
          pSVar15 = (SeedPacket *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
          SeedPacket::SetIsFlashing(pSVar15,true);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_58);
        }
        else {
          pSVar15 = (SeedPacket *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
          SeedPacket::SetDisabled(pSVar15,true);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    }
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
    if ((cVar3 != '\0') &&
       (pRVar6 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this),
       pRVar6 != (ResilienceTutorialIntroProperties *)0x0)) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      UIWidget::GetDrawRect();
      getBoard();
      Board::GetBoardBaseOffset();
      Sexy::TRect<int>::GetCenter();
      Sexy::TPoint<int>::operator-((TPoint<int> *)&local_60,aTStack_70);
      Sexy::Point::Point((Point *)&local_68,(TPoint *)&local_58);
      Board::TranslateScreenPositionToBoardPosition
                (*(Board **)(gLawnApp + 0x9f0),(Point *)&local_68);
      BoardTransforms::GridToBoardSpaceX(*(int *)(pRVar6 + 0xa8));
      iVar5 = FUN_04f6427c();
      BoardTransforms::GridToBoardSpaceY(*(int *)(pRVar6 + 0xac));
      iVar4 = FUN_04f6427c();
      TutorialFinger::SetCurvingTutorialFinger
                ((TutorialFinger *)(this + 0x80),(float)(int)local_68,(float)local_68._4_4_,
                 (float)iVar5,(float)iVar4,1.0);
      TutorialFinger::StartCurvingTutorialFinger((TutorialFinger *)(this + 0x80));
    }
    break;
  case 5:
    std::string::string((string *)local_50,"RESILIENCE4");
    StartNarrativeID(this,(string *)local_50);
    std::string::~string((string *)local_50);
    nop();
    pBVar12 = (Board *)getBoard();
    pUVar14 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(pBVar12);
    for (iVar5 = 0; cVar3 = FUN_04f639c8(pUVar14[0x199]), iVar5 < cVar3; iVar5 = iVar5 + 1) {
      UINewPVPTopZombieQueue::gettItem(pUVar14,iVar5);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
      SeedPacket::GetPlantType();
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_50);
      if (cVar3 != '\0') {
        pSVar15 = (SeedPacket *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        SeedPacket::setAffordable(pSVar15,false);
        pSVar15 = (SeedPacket *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        SeedPacket::SetIsFlashing(pSVar15,false);
        pSVar15 = (SeedPacket *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        SeedPacket::SetDisabled(pSVar15,false);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    }
    break;
  case 6:
    pcVar17 = "RESILIENCE5";
    goto LAB_04f66278;
  case 8:
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
    uVar21 = *(undefined4 *)(lVar10 + 0x1c);
    uVar18 = FUN_04f63ddc(*(undefined4 *)(lVar10 + 0x18),uVar21,*(undefined4 *)(lVar10 + 0x20));
    Board::GetBoardBaseOffset();
    pLVar1 = gLawnApp;
    fVar19 = (float)FUN_04f64290(uVar18);
    iVar5 = FUN_04f6427c(0x4b);
    fVar22 = (float)(int)local_60;
    fVar20 = (float)FUN_04f64290(uVar21);
    iVar4 = FUN_04f6427c(0x14);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_58,(fVar19 + fVar22) - (float)iVar5,
               (fVar20 + (float)local_60._4_4_) - (float)iVar4);
    uVar18 = FUN_04f6427c(0x55);
    std::string::string((string *)local_50,"");
    LawnApp::ShowGameMaskUI((undefined4)local_58,local_58._4_4_,pLVar1,uVar18,0,(string *)local_50);
    std::string::~string((string *)local_50);
    nop();
    lVar10 = LawnApp::GetGameMaskUI(gLawnApp);
    FUN_04f63dd4(lVar10 + 0x110);
    this_01 = ::operator_new(0x110);
    memset(this_01,0,0x110);
    ResilienceIntroWidget::ResilienceIntroWidget(this_01);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,SetNextDialog);
    Sexy::Delegate0::Delegate0<ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)()>
              (aDStack_38,(string *)local_50);
    ResilienceIntroWidget::Init(this_01,aDStack_38);
    break;
  case 9:
    pRVar6 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    local_58 = FUN_04f65814(*(undefined8 *)(pRVar6 + 0x78));
    local_50[0] = FUN_04f65864(*(undefined8 *)(pRVar6 + 0x80));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)local_50), bVar2)
    {
      psVar7 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      if (*(int *)(psVar7 + 8) == 1) {
        Board::AddPlant(*(Board **)(gLawnApp + 0x9f0),*(int *)(psVar7 + 0x10),*(int *)(psVar7 + 0xc)
                        ,psVar7,1,false,false,false,false);
      }
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_58);
    }
    pauseEntities(this,true,false);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
    uVar21 = *(undefined4 *)(lVar10 + 0x1c);
    uVar18 = FUN_04f63ddc(*(undefined4 *)(lVar10 + 0x18),uVar21,*(undefined4 *)(lVar10 + 0x20));
    Board::GetBoardBaseOffset();
    pLVar1 = gLawnApp;
    fVar19 = (float)FUN_04f64290(uVar18);
    fVar22 = (float)(int)local_60;
    fVar20 = (float)FUN_04f64290(uVar21);
    iVar5 = FUN_04f6427c(0x14);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_58,fVar19 + fVar22,
               (fVar20 + (float)local_60._4_4_) - (float)iVar5);
    uVar18 = FUN_04f6427c(0xa0);
    std::string::string((string *)local_50,"");
    LawnApp::ShowGameMaskUI((undefined4)local_58,local_58._4_4_,pLVar1,uVar18,0,(string *)local_50);
    std::string::~string((string *)local_50);
    nop();
    lVar10 = LawnApp::GetGameMaskUI(gLawnApp);
    FUN_04f63dd4(lVar10 + 0x110);
    pauseEntities(this,false,false);
    break;
  case 10:
    pcVar17 = "RESILIENCE8";
    goto LAB_04f66278;
  case 0xb:
    pcVar17 = "RESILIENCE9";
    goto LAB_04f66278;
  case 0xc:
    pcVar17 = "RESILIENCE10";
LAB_04f66278:
    std::string::string((string *)local_50,pcVar17);
    StartNarrativeID(this,(string *)local_50);
    std::string::~string((string *)local_50);
    nop();
    break;
  case 0xd:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
    EntityFinder::GetEntitiesOnBoard
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50,1);
    local_68 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_50);
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_50);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60), bVar2)
    {
      puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68)
      ;
      this_04 = (RtObject *)*puVar8;
      bVar2 = Sexy::RtObject::IsA<Plant>(this_04);
      if (bVar2) {
        pPVar9 = Sexy::RtObject::Cast<Plant>(this_04);
        Plant::GetType();
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        bVar2 = std::operator!=((string *)(lVar10 + 8),"peashooter");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        if (bVar2) {
          (**(code **)(*(long *)pPVar9 + 0x48))(pPVar9);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
    }
    LawnApp::KillGameMaskUI(gLawnApp);
    this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar11 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_03);
    if (pPVar11 != (PlayerInfo *)0x0) {
      PlayerInfo::CompleteTutorial(pPVar11,0x4e);
    }
    showUI(this,true);
    pBVar12 = (Board *)getBoard();
    pWVar13 = (WaveManager *)Board::GetWaveManager(pBVar12);
    WaveManager::SetPause(pWVar13,false);
    pBVar12 = (Board *)getBoard();
    pUVar14 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(pBVar12);
    for (iVar5 = 0; cVar3 = FUN_04f639c8(pUVar14[0x199]), iVar5 < cVar3; iVar5 = iVar5 + 1) {
      UINewPVPTopZombieQueue::gettItem(pUVar14,iVar5);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
      SeedPacket::GetPlantType();
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_58);
      if (cVar3 != '\0') {
        pSVar15 = (SeedPacket *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
        SeedPacket::setAffordable(pSVar15,true);
        pSVar15 = (SeedPacket *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
        SeedPacket::SetIsFlashing(pSVar15,false);
        pSVar15 = (SeedPacket *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
        SeedPacket::SetDisabled(pSVar15,false);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
    }
    cVar3 = RiftUtils::IsRiftTimedLevel();
    if (cVar3 == '\0') {
      pcVar17 = "UINextWaveButton";
    }
    else {
      pcVar17 = "UINextWaveInstantButton";
    }
    std::string::string((string *)&local_58,pcVar17);
    pUVar16 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_58);
    std::string::~string((string *)&local_58);
    nop();
    if ((pUVar16 != (UIWidget *)0x0) && (cVar3 = NewPVPUtils::IsPlayingNewPVP(), cVar3 == '\0')) {
      UIWidget::SetClickable(pUVar16,true);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_50);
  }
switchD_04f6625c_caseD_7:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ResilienceTutorialIntro::startIntro() */

void __thiscall ResilienceTutorialIntro::startIntro(ResilienceTutorialIntro *this)

{
  setState(this,0);
  return;
}


/* ResilienceTutorialIntro::onUpdate() */

void __thiscall ResilienceTutorialIntro::onUpdate(ResilienceTutorialIntro *this)

{
  bool bVar1;
  AnimationMgr *pAVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(this + 0x4c);
  do {
    if (iVar4 == 0) {
      setState(this,1);
      iVar3 = *(int *)(this + 0x4c);
    }
    else {
      if (iVar4 != 4) {
        pAVar2 = (AnimationMgr *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
        AnimationMgr::Update(pAVar2);
        return;
      }
      TutorialFinger::Update((TutorialFinger *)(this + 0x80));
      iVar3 = *(int *)(this + 0x4c);
    }
    bVar1 = iVar4 != iVar3;
    iVar4 = iVar3;
  } while (bVar1);
  pAVar2 = (AnimationMgr *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  AnimationMgr::Update(pAVar2);
  return;
}


/* ResilienceTutorialIntro::onZombieDied(Zombie*, DamageInfo const*) */

void ResilienceTutorialIntro::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  if (*(int *)(param_1 + 0x4c) != 0xd) {
    setState((ResilienceTutorialIntro *)param_1,0xb);
    return;
  }
  return;
}


/* ResilienceTutorialIntro::onZombieDamageTaken(Zombie*, DamageInfo const&) */

void ResilienceTutorialIntro::onZombieDamageTaken(Zombie *param_1,DamageInfo *param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x4c) == 4) &&
     (iVar1 = *(int *)(param_1 + 0xd0), *(int *)(param_1 + 0xd0) = iVar1 + 1, 2 < iVar1 + 1)) {
    pauseEntities((ResilienceTutorialIntro *)param_1,true,false);
    setState((ResilienceTutorialIntro *)param_1,5);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResilienceTutorialIntro::onZombieResilienceEnterBreak(Zombie*) */

void ResilienceTutorialIntro::onZombieResilienceEnterBreak(Zombie *param_1)

{
  char cVar1;
  Board *this;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  cVar1 = Sexy::RtWeakPtrBase::operator==
                    ((RtWeakPtrBase *)(param_1 + 0xd8),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (cVar1 != '\0') {
    LawnApp::KillGameMaskUI(gLawnApp);
    setState((ResilienceTutorialIntro *)param_1,10);
    this = (Board *)getBoard();
    Board::SetGameplayObjectPause(this,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResilienceTutorialIntro::onNarrationFinished() */

void __thiscall ResilienceTutorialIntro::onNarrationFinished(ResilienceTutorialIntro *this)

{
  bool bVar1;
  Board *pBVar2;
  WaveManager *this_00;
  undefined8 *puVar3;
  Plant *pPVar4;
  RtObject *this_01;
  float fVar5;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  showUI(this,true);
  switch(*(undefined4 *)(this + 0x4c)) {
  case 1:
    fVar5 = (float)PVZ_T();
    *(float *)(this + 0x50) = fVar5 + 0.5;
    setState(this,2);
    break;
  case 2:
    setState(this,3);
    break;
  case 3:
    setState(this,4);
    break;
  case 5:
    setState(this,6);
    break;
  case 6:
    setState(this,8);
    break;
  case 8:
    setState(this,9);
    break;
  case 10:
    pBVar2 = (Board *)getBoard();
    Board::SetGameplayObjectPause(pBVar2,false);
    pBVar2 = (Board *)getBoard();
    this_00 = (WaveManager *)Board::GetWaveManager(pBVar2);
    WaveManager::SetPause(this_00,true);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    EntityFinder::GetEntitiesOnBoard(avStack_20,1);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      this_01 = (RtObject *)*puVar3;
      bVar1 = Sexy::RtObject::IsA<Plant>(this_01);
      if (bVar1) {
        pPVar4 = Sexy::RtObject::Cast<Plant>(this_01);
        (**(code **)(**(long **)(pPVar4 + 0xa8) + 0x220))(*(long **)(pPVar4 + 0xa8));
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    break;
  case 0xb:
    setState(this,0xc);
    break;
  case 0xc:
    setState(this,0xd);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ResilienceTutorialIntro::~ResilienceTutorialIntro() */

void __thiscall ResilienceTutorialIntro::~ResilienceTutorialIntro(ResilienceTutorialIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06a214d0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  TutorialFinger::~TutorialFinger((TutorialFinger *)(this + 0x80));
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  ~vector((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
           *)(this + 0x68));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* ResilienceTutorialIntro::~ResilienceTutorialIntro() */

void __thiscall ResilienceTutorialIntro::~ResilienceTutorialIntro(ResilienceTutorialIntro *this)

{
  ~ResilienceTutorialIntro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResilienceTutorialIntro::gatherPlantlessPlantingRestrictions(Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
ResilienceTutorialIntro::gatherPlantlessPlantingRestrictions
          (ResilienceTutorialIntro *this,Point *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x4c) == 4) {
    if (*(int *)param_1 == 5) {
      if (*(int *)(param_1 + 4) != 2) {
        local_c = 0x4c;
        std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                  ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
                   (PlantingReason *)&local_c);
      }
    }
    else {
      local_c = 0x4c;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
                 (PlantingReason *)&local_c);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResilienceTutorialIntro::registerForEvents() */

void __thiscall ResilienceTutorialIntro::registerForEvents(ResilienceTutorialIntro *this)

{
  undefined *puVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  LevelModuleManager *pLVar4;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 uStack_c0;
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
  StandardLevelIntro::registerForEvents((StandardLevelIntro *)this);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if ((pPVar3 == (PlayerInfo *)0x0) ||
     (cVar2 = PlayerInfo::PlayerHasCompletedTutorial(pPVar3,0x4e), cVar2 == '\0')) {
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,startIntro);
    Sexy::Delegate0::Delegate0<ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnGameplayStarted(pLVar4,aDStack_38);
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onEndLevel);
    Sexy::Delegate0::Delegate0<ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnLevelEnded(pLVar4,aDStack_38);
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onUpdate);
    Sexy::Delegate0::Delegate0<ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnUpdate(pLVar4,aDStack_38);
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,addToRenderQueue);
    Sexy::Delegate1<RenderQueue*>::
    Delegate1<ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)(RenderQueue*)>
              ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterAddToRenderQueue(pLVar4,aDStack_38);
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onGameplayStarted);
    Sexy::Delegate0::Delegate0<ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnGameplayStarted(pLVar4,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPlantPlanted);
    local_f0 = local_c8;
    uStack_e8 = uStack_c0;
    local_e0 = local_b8;
    MessageRouter::
    Subscribe<Plant*,Sexy::CBMemberTranslatorX<ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)(Plant*)>>
              ((MessageRouter *)puVar1,Message::PlantPlanted,&local_f0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onZombieDied);
    local_110 = local_b0;
    uStack_108 = uStack_a8;
    local_100 = local_a0;
    MessageRouter::
    Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)(Zombie*,DamageInfo_const*)>>
              ((MessageRouter *)puVar1,Message::ZombieDied,&local_110);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,gatherPlantlessPlantingRestrictions);
    local_120 = local_88;
    local_130 = local_98;
    uStack_128 = uStack_90;
    MessageRouter::
    Subscribe<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)(Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
              ((MessageRouter *)puVar1,Message::GatherPlantlessPlantingRestrictions,&local_130);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onZombieDamageTaken);
    local_150 = local_80;
    uStack_148 = uStack_78;
    local_140 = local_70;
    MessageRouter::
    Subscribe<Zombie*,DamageInfo_const&,Sexy::CBMemberTranslatorX<ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)(Zombie*,DamageInfo_const&)>>
              ((MessageRouter *)puVar1,Message::ZombieDamageTaken,&local_150);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onZombieAddedToBoard);
    local_160 = local_58;
    local_170 = local_68;
    uStack_168 = uStack_60;
    MessageRouter::
    Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)(Zombie*)>>
              ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_170);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onZombieResilienceEnterBreak);
    local_170 = local_50;
    uStack_168 = uStack_48;
    local_160 = local_40;
    MessageRouter::
    Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)(Zombie*)>>
              ((MessageRouter *)puVar1,Message::ZombieResilienceEnterBreak,&local_170);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

