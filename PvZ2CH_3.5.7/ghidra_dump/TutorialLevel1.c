// Class: TutorialLevel1


/* TutorialLevel1::onGameWon() */

void TutorialLevel1::onGameWon(void)

{
  ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(9);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel1::StaticClassInit() */

void TutorialLevel1::StaticClassInit(void)

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
    std::string::string(asStack_10,"TutorialLevel1");
    (*pcVar2)(plVar1,asStack_10,FUN_044c0bd0,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TutorialLevel1::StaticGetClass() */

long * TutorialLevel1::StaticGetClass(void)

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
  uVar2 = IntroModule::StaticGetClass();
  (*pcVar3)(plVar1,"TutorialLevel1",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TutorialLevel1::onSunExpired(Collectable*) */

void TutorialLevel1::onSunExpired(Collectable *param_1)

{
  Board *this;
  
  if (1 < *(int *)(param_1 + 0x48) - 5U) {
    return;
  }
  this = (Board *)ResilienceTutorialIntro::getBoard();
  Board::SpawnSunFromSky(this);
  return;
}


/* TutorialLevel1::~TutorialLevel1() */

void __thiscall TutorialLevel1::~TutorialLevel1(TutorialLevel1 *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06853e10;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  IntroModule::~IntroModule((IntroModule *)this);
  return;
}


/* TutorialLevel1::~TutorialLevel1() */

void __thiscall TutorialLevel1::~TutorialLevel1(TutorialLevel1 *this)

{
  ~TutorialLevel1(this);
  AK::FreeHook(this);
  return;
}


/* TutorialLevel1::TutorialLevel1() */

void __thiscall TutorialLevel1::TutorialLevel1(TutorialLevel1 *this)

{
  IntroModule::IntroModule((IntroModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06853e10;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x60));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x68));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x70));
  return;
}


/* TutorialLevel1::StaticNew() */

TutorialLevel1 * TutorialLevel1::StaticNew(void)

{
  TutorialLevel1 *this;
  
  this = ::operator_new(0x78);
  TutorialLevel1(this);
  return this;
}


/* TutorialLevel1::onEndLevel() */

void __thiscall TutorialLevel1::onEndLevel(TutorialLevel1 *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtMixedPtrBase *this_01;
  char cVar1;
  AnimationMgr *this_02;
  long *plVar2;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_02 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  AnimationMgr::Clear(this_02);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  this_01 = (RtMixedPtrBase *)(this + 0x68);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_01);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel1::showUI(bool) */

void __thiscall TutorialLevel1::showUI(TutorialLevel1 *this,bool param_1)

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
  this_00 = (Board *)ResilienceTutorialIntro::getBoard();
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
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UIShovel");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_00);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_40);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UICoinBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_01);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_38);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UIGemBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_02);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_30);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_18,"UISunBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_18,extraout_x1_03);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (extraout_x0 != 0) {
    FUN_044bf17c(extraout_x0 + 0x179);
  }
  std::string::string(asStack_10,"UIChangeSpeedButton");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_04);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UIPauseButton");
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
/* TutorialLevel1::startGame() */

void __thiscall TutorialLevel1::startGame(TutorialLevel1 *this)

{
  Board *this_00;
  WaveGenerator *this_01;
  WaveManager *this_02;
  float fVar1;
  
  this_00 = (Board *)ResilienceTutorialIntro::getBoard();
  Board::DestroyCutsceneZombies();
  Board::StartLevel(this_00);
  showUI(this,true);
  this_01 = (WaveGenerator *)Board::GetWaveGenerator(this_00);
  if (this_01 != (WaveGenerator *)0x0) {
    WaveGenerator::SpawnNextWaveIn(this_01,_FUN_044bfe20);
  }
  this_02 = (WaveManager *)Board::GetWaveManager(this_00);
  if (this_02 != (WaveManager *)0x0) {
    fVar1 = (float)PVZ_T();
    WaveManager::SetNextWaveTime(this_02,fVar1 + _FUN_044bfe20);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel1::setupTutorialAdvice() */

void __thiscall TutorialLevel1::setupTutorialAdvice(TutorialLevel1 *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  AnimationMgr *pAVar1;
  long lVar2;
  undefined8 uVar3;
  Board *this_01;
  UINewPVPTopZombieQueue *this_02;
  SeedPacket *this_03;
  AnimationMgr *pAVar4;
  AnimationController *pAVar5;
  wchar_t *pwVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60);
  local_8 = ___stack_chk_guard;
  pAVar1 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  AnimationMgr::Clear(pAVar1);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  FUN_044bf15c(lVar2 + 0x10);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  pAVar1 = (AnimationMgr *)FUN_044bf168(*(undefined4 *)(lVar2 + 0x10));
  switch(*(undefined4 *)(this + 0x48)) {
  case 2:
    pAVar4 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pwVar6 = L"[ADVICE_CLICK_SEED_PACKET]";
    goto LAB_044bff58;
  case 3:
    pAVar4 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pwVar6 = L"[ADVICE_CLICK_ON_GRASS]";
    break;
  case 4:
    pAVar4 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pwVar6 = L"[ADVICE_PLANTED_PEASHOOTER]";
    goto LAB_044c0060;
  case 5:
    pAVar4 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pwVar6 = L"[ADVICE_COLLECT_SUN]";
    break;
  case 6:
    pAVar4 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pwVar6 = L"[ADVICE_COLLECTED_SUN]";
    break;
  case 7:
    pAVar4 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pwVar6 = L"[ADVICE_ENOUGH_SUN]";
LAB_044c0060:
    FUN_05478178(aRStack_10,pwVar6,aRStack_18);
    pAVar5 = (AnimationController *)ShowAdvice::Create(aRStack_10,2);
    AnimationMgr::Add(pAVar4,pAVar5,(float)pAVar1);
    FUN_05476c50(aRStack_10);
    nop();
    fVar7 = (float)PVZ_T();
    *(float *)(this + 0x58) = fVar7 + 5.0;
    goto switchD_044bfeac_caseD_9;
  case 8:
    pAVar4 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pwVar6 = L"[ADVICE_CLICK_PEASHOOTER]";
LAB_044bff58:
    FUN_05478178(aRStack_10,pwVar6,aRStack_18);
    pAVar5 = (AnimationController *)ShowAdvice::Create(aRStack_10,2);
    AnimationMgr::Add(pAVar4,pAVar5,(float)pAVar1);
    FUN_05476c50(aRStack_10);
    nop();
    pAVar5 = (AnimationController *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
    AnimationController::SetDuration(pAVar5,10000.0);
    uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    AnimationMgr::Add(pAVar1,uVar3,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    this_01 = (Board *)ResilienceTutorialIntro::getBoard();
    this_02 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(this_01);
    UINewPVPTopZombieQueue::gettItem(this_02,0);
    this_03 = (SeedPacket *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    SeedPacket::SetIsFlashing(this_03,true);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  default:
    goto switchD_044bfeac_caseD_9;
  case 10:
    pAVar4 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    FUN_05478178(aRStack_10,L"[ADVICE_ZOMBIE_ONSLAUGHT]",aRStack_18);
    pAVar5 = (AnimationController *)ShowAdvice::Create(aRStack_10,2);
    AnimationMgr::Add(pAVar4,pAVar5,(float)pAVar1);
    FUN_05476c50(aRStack_10);
    nop();
    fVar7 = (float)PVZ_T();
    *(float *)(this + 0x58) = fVar7 + 3.0;
    goto switchD_044bfeac_caseD_9;
  }
  FUN_05478178(aRStack_10,pwVar6,aRStack_18);
  pAVar5 = (AnimationController *)ShowAdvice::Create(aRStack_10,2);
  AnimationMgr::Add(pAVar4,pAVar5,(float)pAVar1);
  FUN_05476c50(aRStack_10);
  nop();
switchD_044bfeac_caseD_9:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel1::initializeModule() */

void __thiscall TutorialLevel1::initializeModule(TutorialLevel1 *this)

{
  undefined4 uVar1;
  long lVar2;
  wstring *pwVar3;
  Point aPStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x48) = 0xffffffff;
  local_8 = ___stack_chk_guard;
  uVar1 = Board::MakeRenderOrder(900000,0,1);
  Sexy::Point::Point(aPStack_18,0,0);
  FUN_044c0184(aPStack_18,uVar1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x68),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  FUN_044bf18c(lVar2 + 0x1c);
  AnimationMgr::Create();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x60),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x54) = uVar1;
  *(undefined4 *)(this + 0x58) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x70),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pwVar3 = *(wstring **)(gLawnApp + 0x9f0);
  FUN_05478178(aRStack_10,L"[PLAYERS_HOUSE]",aPStack_18);
  Board::SetLevelNameOverride(pwVar3);
  FUN_05476c50(aRStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel1::addToRenderQueue(RenderQueue*) */

void __thiscall TutorialLevel1::addToRenderQueue(TutorialLevel1 *this,RenderQueue *param_1)

{
  AnimationMgr *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60))
  ;
  AnimationMgr::AddToRenderQueue(this_00,param_1);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,drawLawnOverlays);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<TutorialLevel1,void(TutorialLevel1::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,0x493e1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel1::setupSodRollout() */

void __thiscall TutorialLevel1::setupSodRollout(TutorialLevel1 *this)

{
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  int in_w4;
  float fVar2;
  string asStack_30 [8];
  Vec3 aVStack_28 [16];
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x50) = fVar2;
  *(float *)(this + 0x54) = fVar2 + 2.0;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,2,1,1,in_w4);
  EATextSquish::Vec3::Vec3(aVStack_28,(float)local_18 - 14.0,(float)local_14 - 108.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_28,-1);
  std::string::string(asStack_30,"POPANIM_EFFECTS_SODROLL");
  GetPAMByName(asStack_30);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aVStack_28);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_28);
  std::string::~string(asStack_30);
  nop();
  std::string::string((string *)aVStack_28,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_00,aVStack_28,0);
  std::string::~string((string *)aVStack_28);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x70),(RtWeakPtrBase *)aVStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel1::drawLawnOverlays(Sexy::Graphics*) */

void TutorialLevel1::drawLawnOverlays(Graphics *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  RtObject *this;
  Effect_PopAnim *this_00;
  PopAnimRig *this_01;
  Graphics *in_x1;
  int in_w4;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  GraphicsAutoState aGStack_68 [8];
  undefined4 local_60 [4];
  undefined4 local_50 [4];
  int local_40 [4];
  SexyMatrix3 aSStack_30 [8];
  float local_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar6 = (float)PVZ_EOT();
  if (*(float *)(param_1 + 0x54) != fVar6) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_68,in_x1);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x70));
    if (bVar1) {
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x70));
      this_00 = Sexy::RtObject::Cast<Effect_PopAnim>(this);
      this_01 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_00);
      std::string::string((string *)local_40,"SodRoll");
      cVar2 = PopAnimRig::CalcLayerTransformScreenSpace(this_01,(string *)local_40,aSStack_30);
      std::string::~string((string *)local_40);
      nop();
      if (cVar2 != '\0') {
        BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,2,1,1,in_w4);
        uVar9 = *(undefined4 *)(param_1 + 0x50);
        uVar8 = *(undefined4 *)(param_1 + 0x54);
        uVar7 = PVZ_T();
        local_60[0] = 0x10;
        local_50[0] = 5;
        iVar3 = CurveLerp<int>(uVar9,uVar8,uVar7,local_60,local_50,1);
        fVar6 = (float)FUN_044bf4b8((float)local_40[0] - 14.0);
        iVar3 = FUN_044bf4a4(iVar3);
        iVar4 = FUN_044bf4a4(600);
        Sexy::Graphics::SetClipRect(in_x1,0,0,(int)(fVar6 + local_28 + (float)iVar3),iVar4);
      }
    }
    if ((*(int *)(param_1 + 0x48) == 9) || (*(int *)(param_1 + 0x48) == 3)) {
      fVar6 = (float)PVZ_T();
      fVar6 = fmodf(fVar6 - *(float *)(param_1 + 0x4c),0.8);
      local_40[0] = 0x3f266666;
      local_50[0] = 0;
      fVar6 = CurveEvaluate<float>(fVar6 * 1.25,(Color *)local_50,(Color *)local_40,9);
      Sexy::Color::Color((Color *)local_50,1);
      Sexy::Color::Color((Color *)local_40,0);
      Sexy::ColorLerp((Sexy *)local_60,fVar6,(Color *)local_50,(Color *)local_40);
      Sexy::Graphics::SetColor(in_x1,(Color *)local_60);
      Sexy::Graphics::SetColorizeImages(in_x1,true);
    }
    pIVar5 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0d040);
    iVar3 = FUN_044bf4a4(0xab);
    iVar4 = FUN_044bf4a4(0x12d);
    Sexy::Graphics::DrawImage(in_x1,pIVar5,iVar3,iVar4);
    Sexy::Graphics::ClearClipRect(in_x1);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel1::onSkip() */

void TutorialLevel1::onSkip(void)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  long lVar2;
  string *psVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"egypt_level_1");
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  ProfileUtils::CompleteToEvent(asStack_10,false,false,pPVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_18,"egypt_level_1");
  nop();
  lVar2 = FUN_05474374(asStack_18,"egypt",0);
  if (lVar2 == 0) {
    psVar3 = (string *)ProfileUtils::Profile();
    std::string::string(asStack_10,"egypt1");
    PlayerInfo::SetCurrentLevel(psVar3);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    pPVar1 = (PlayerInfo *)ProfileUtils::Profile();
    PlayerInfo::SetActiveTutorial(pPVar1,9);
    pPVar1 = (PlayerInfo *)ProfileUtils::Profile();
    PlayerInfo::CompleteTutorial(pPVar1,9);
  }
  gSkippedTutorial = 1;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  Board::Quit(*(Board **)(gLawnApp + 0x9f0));
  GameStateMgr::WaitForNetworkLoad(gGameStateMgr);
  MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::ToturiIgnore,1);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel1::onDontSkip() */

void TutorialLevel1::onDontSkip(void)

{
  GameStateMgr *pGVar1;
  LawnApp *pLVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  WorldDataManager *pWVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  LevelModuleManager *this_01;
  wstring *pwVar8;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(5);
  pwVar8 = *(wstring **)(gLawnApp + 0x9f0);
  FUN_05478178(asStack_10,&DAT_056f11a8,auStack_18);
  Board::SetLevelNameOverride(pwVar8);
  FUN_05476c50(asStack_10);
  nop();
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  std::string::string(asStack_10,"sunflower");
  PlayerInfo::UnlockPlant(this_00,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"wallnut");
  PlayerInfo::UnlockPlant(this_00,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"potatomine");
  PlayerInfo::UnlockPlant(this_00,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"sunflower");
  PlayerInfo::AddPlantStartLevel(this_00,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"wallnut");
  PlayerInfo::AddPlantStartLevel(this_00,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"potatomine");
  PlayerInfo::AddPlantStartLevel(this_00,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  pWVar3 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  std::string::string(asStack_10,"tutorial1");
  p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)WorldDataManager::FindEventByLevelName(pWVar3,asStack_10);
  std::string::~string(asStack_10);
  nop();
  uVar5 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_rightmost(p_Var4);
  uVar6 = Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)p_Var4);
  PlayerInfo::SetWorldMapEventStatus(this_00,uVar5,uVar6,3,1);
  std::string::string(asStack_10,"tutorial1");
  PlayerInfo::IncrementWorldMapEventCompletionCount(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pWVar3 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  std::string::string(asStack_10,"tutorial2");
  p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)WorldDataManager::FindEventByLevelName(pWVar3,asStack_10);
  std::string::~string(asStack_10);
  nop();
  uVar5 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_rightmost(p_Var4);
  uVar6 = Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)p_Var4);
  PlayerInfo::SetWorldMapEventStatus(this_00,uVar5,uVar6,3,1);
  std::string::string(asStack_10,"tutorial2");
  PlayerInfo::IncrementWorldMapEventCompletionCount(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pWVar3 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  std::string::string(asStack_10,"tutorial3");
  p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)WorldDataManager::FindEventByLevelName(pWVar3,asStack_10);
  std::string::~string(asStack_10);
  nop();
  uVar5 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_rightmost(p_Var4);
  uVar6 = Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)p_Var4);
  PlayerInfo::SetWorldMapEventStatus(this_00,uVar5,uVar6,3,1);
  std::string::string(asStack_10,"tutorial3");
  PlayerInfo::IncrementWorldMapEventCompletionCount(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  PlayerInfo::UnlockGameFeature(this_00,0);
  lVar7 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  FUN_044bf184(lVar7 + 0xb8);
  this_01 = (LevelModuleManager *)FUN_044bf16c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  LevelModuleManager::IncreaseRefCounts(this_01);
  pLVar2 = gLawnApp;
  std::string::string(asStack_10,"LevelCommon");
  LawnApp::LoadGroup(pLVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_10,"LevelCommon2");
  LawnApp::LoadGroup(pLVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_10,"LevelImage");
  LawnApp::LoadGroup(pLVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_10,"AudioCommon");
  LawnApp::LoadGroup(pLVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_10,"Keys");
  LawnApp::LoadGroup(pLVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  gSkippedTutorial = 1;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  Board::Quit(*(Board **)(gLawnApp + 0x9f0));
  pGVar1 = (GameStateMgr *)(gLawnApp + 0x9f8);
  std::string::string(asStack_10,"tutorial4");
  GameStateMgr::StartLevel(pGVar1,&DAT_06b0cef0,asStack_10,0xffffffff,0,0,0);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::ToturiIgnore,1);
  MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::TutorialFTUE,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel1::setupLawnPreview() */

void __thiscall TutorialLevel1::setupLawnPreview(TutorialLevel1 *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  long lVar2;
  AnimationController *pAVar3;
  AnimationController *pAVar4;
  AnimationController *pAVar5;
  AnimationController *pAVar6;
  AnimationController *pAVar7;
  AnimationController *pAVar8;
  AnimationMgr *pAVar9;
  AnimationController *pAVar10;
  ResourceInfo *pRVar11;
  code *pcVar12;
  float fVar13;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  RtMixedPtr aRStack_60 [8];
  float local_58 [2];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  lVar2 = ResilienceTutorialIntro::getBoard();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)(lVar2 + 0x898));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  fVar13 = (float)FUN_044bf168(*(undefined4 *)(lVar2 + 0x10));
  StandardLevelIntro::GetPanLocations(0,&local_78,&local_74);
  pAVar3 = (AnimationController *)
           MoveBoard::Create(*(undefined4 *)(pRVar1 + 0x48),local_78,local_74,0,0,4);
  std::string::string(asStack_50,"Play_UI_Game_Intro_Cam_Pan");
  pAVar4 = (AnimationController *)AnimMgrSendAudioEvent::Create(asStack_50);
  std::string::~string(asStack_50);
  nop();
  StandardLevelIntro::GetPanLocations(3,&local_70,&local_6c);
  pAVar5 = (AnimationController *)
           MoveBoard::Create(*(undefined4 *)(pRVar1 + 0x4c),local_70,local_6c,0,0,4);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_60);
  std::string::string(asStack_50,"setupSodRollout");
  pAVar6 = (AnimationController *)TimeEvent::Create((RtId *)local_58,asStack_50);
  std::string::~string(asStack_50);
  nop();
  Sexy::RtId::~RtId((RtId *)local_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  std::string::string(asStack_50,"Play_UI_Map_Lawn_Start");
  pAVar7 = (AnimationController *)AnimMgrSendAudioEvent::Create(asStack_50);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"Stop_UI_Map_Lawn_Stop");
  pAVar8 = (AnimationController *)AnimMgrSendAudioEvent::Create(asStack_50);
  std::string::~string(asStack_50);
  nop();
  pAVar9 = (AnimationMgr *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::string(asStack_50,"PlaceLawnItems");
  pAVar10 = (AnimationController *)IntroBoardDispatch::Create(asStack_50);
  AnimationMgr::Add(pAVar9,pAVar10,fVar13);
  std::string::~string(asStack_50);
  nop();
  pAVar9 = (AnimationMgr *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::string(asStack_50,"PlaceStreetZombies");
  pAVar10 = (AnimationController *)IntroBoardDispatch::Create(asStack_50);
  AnimationMgr::Add(pAVar9,pAVar10,fVar13);
  std::string::~string(asStack_50);
  nop();
  pAVar9 = (AnimationMgr *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  pAVar10 = (AnimationController *)StandardLevelIntro::CreateLevelNameStringAdvice();
  AnimationMgr::Add(pAVar9,pAVar10,fVar13 + 1.0);
  pAVar9 = (AnimationMgr *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  AnimationMgr::Add(pAVar9,pAVar3,fVar13 + 2.0,local_58);
  pAVar9 = (AnimationMgr *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  AnimationMgr::Add(pAVar9,pAVar4,fVar13 + 2.0);
  pAVar9 = (AnimationMgr *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::string(asStack_50,"EnableGridItems");
  pAVar3 = (AnimationController *)IntroBoardDispatch::Create(asStack_50);
  AnimationMgr::Add(pAVar9,pAVar3,fVar13 + 2.5);
  std::string::~string(asStack_50);
  nop();
  pAVar9 = (AnimationMgr *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  AnimationMgr::Add(pAVar9,pAVar5,local_58[0],local_58);
  pAVar9 = (AnimationMgr *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  AnimationMgr::Add(pAVar9,pAVar7,local_58[0]);
  pAVar9 = (AnimationMgr *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  AnimationMgr::Add(pAVar9,pAVar8,local_58[0] + 2.0);
  pAVar9 = (AnimationMgr *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  AnimationMgr::Add(pAVar9,pAVar6,local_58[0],local_58);
  pAVar9 = (AnimationMgr *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::string(asStack_50,"ShowLawnItems");
  pAVar3 = (AnimationController *)IntroBoardDispatch::Create(asStack_50);
  AnimationMgr::Add(pAVar9,pAVar3,local_58[0],local_58);
  std::string::~string(asStack_50);
  nop();
  pcVar12 = *(code **)(*(long *)this + 0xa0);
  pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLawnPreviewComplete);
  Sexy::Delegate0::Delegate0<TutorialLevel1,void(TutorialLevel1::*)()>(aDStack_38,asStack_50);
  (*pcVar12)(this,pRVar11,(RtId *)local_58,aDStack_38,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel1::setState(TutorialLevel1::State) */

void __thiscall TutorialLevel1::setState(TutorialLevel1 *this,int param_2)

{
  LawnApp *this_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  Board *this_01;
  UINewPVPTopZombieQueue *this_02;
  SeedPacket *this_03;
  AnimationController *this_04;
  PVZ2UIDialog *this_05;
  FishingEnergyBar *this_06;
  long lVar4;
  undefined4 uVar5;
  TPoint aTStack_80 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  Point aPStack_70 [8];
  TPoint aTStack_68 [8];
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined8 local_50 [3];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x48) == param_2) goto LAB_044c1e2c;
  this_01 = (Board *)ResilienceTutorialIntro::getBoard();
  this_02 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(this_01);
  switch(*(undefined4 *)(this + 0x48)) {
  case 1:
    showUI(this,true);
    Board::GetBoardBaseOffset();
    SeedBankNew::SetPacketsOnDisplay((SeedBankNew *)this_02,false);
    (**(code **)(*(long *)this_02 + 0x1a0))(this_02);
    UINewPVPTopZombieQueue::gettItem(this_02,0);
    this_06 = (FishingEnergyBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    FishingEnergyBar::onGameUnpaused(this_06);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    UIWidget::GetDrawRect();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68))
    ;
    iVar2 = FUN_044bf4a4(0x1e);
    iVar3 = FUN_044bf4a4(0);
    Sexy::Point::Point(aPStack_70,local_60 + local_58 + iVar2,local_5c + local_54 / 2 + iVar3);
    Sexy::TPoint<int>::operator-((TPoint<int> *)aPStack_70,aTStack_80);
    Sexy::Point::Point((Point *)local_50,aTStack_68);
    *(undefined8 *)(lVar4 + 0x30) = local_50[0];
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68))
    ;
    *(undefined4 *)(lVar4 + 0x3c) = 0x10e;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    *(int *)(this + 0x48) = param_2;
    uVar5 = PVZ_T();
    uVar1 = *(uint *)(this + 0x48);
    *(undefined4 *)(this + 0x4c) = uVar5;
    break;
  case 2:
  case 8:
    UINewPVPTopZombieQueue::gettItem(this_02,0);
    this_03 = (SeedPacket *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    SeedPacket::SetIsFlashing(this_03,false);
    this_04 = (AnimationController *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
    AnimationController::SetDuration(this_04,0.0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    *(int *)(this + 0x48) = param_2;
    uVar5 = PVZ_T();
    uVar1 = *(uint *)(this + 0x48);
    *(undefined4 *)(this + 0x4c) = uVar5;
    break;
  default:
    *(int *)(this + 0x48) = param_2;
    uVar5 = PVZ_T();
    uVar1 = *(uint *)(this + 0x48);
    *(undefined4 *)(this + 0x4c) = uVar5;
    goto joined_r0x044c2078;
  case 4:
    Board::SpawnSunFromSky(*(Board **)(gLawnApp + 0x9f0));
    *(int *)(this + 0x48) = param_2;
    uVar5 = PVZ_T();
    uVar1 = *(uint *)(this + 0x48);
    *(undefined4 *)(this + 0x4c) = uVar5;
joined_r0x044c2078:
    if (0xb < uVar1) goto LAB_044c1e2c;
    goto LAB_044c1e5c;
  }
  if (uVar1 < 0xc) {
LAB_044c1e5c:
    this_00 = gLawnApp;
    switch(uVar1) {
    case 0:
      iVar2 = FUN_044bf4c8(500);
      iVar3 = FUN_044bf4c8(0x172);
      this_05 = (PVZ2UIDialog *)
                LawnApp::ShowPVZ2Dialog(this_00,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
      FUN_05478178((wstring *)local_50,L"[DIALOG_SKIP_TUTORIAL]",aTStack_68);
      PVZ2UIDialog::SetHeaderLabel(this_05,(wstring *)local_50);
      FUN_05476c50((wstring *)local_50);
      nop();
      FUN_05478178(aTStack_68,L"[DIALOG_YES_SKIP_TUTORIAL]",aPStack_70);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onSkip);
      Sexy::Delegate0::Delegate0<TutorialLevel1,void(TutorialLevel1::*)()>
                (aDStack_38,(wstring *)local_50);
      PVZ2UIDialog::AddButton(this_05,aTStack_68,aDStack_38,1);
      FUN_05476c50(aTStack_68);
      nop();
      FUN_05478178(aTStack_68,L"[DIALOG_NO_DONT_SKIP]",aPStack_70);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onDontSkip);
      Sexy::Delegate0::Delegate0<TutorialLevel1,void(TutorialLevel1::*)()>
                (aDStack_38,(wstring *)local_50);
      PVZ2UIDialog::AddButton(this_05,aTStack_68,aDStack_38,0);
      FUN_05476c50(aTStack_68);
      nop();
      iVar2 = FUN_044bf4c8(0x50);
      PVZ2UIDialog::SetHeaderHeight(this_05,iVar2);
      break;
    case 1:
      setupLawnPreview(this);
      break;
    default:
      setupTutorialAdvice(this);
      break;
    case 0xb:
      startGame(this);
    }
  }
LAB_044c1e2c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TutorialLevel1::startIntro() */

void __thiscall TutorialLevel1::startIntro(TutorialLevel1 *this)

{
  int iVar1;
  Board *pBVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  Board *pBVar6;
  int iVar7;
  
  pBVar2 = (Board *)ResilienceTutorialIntro::getBoard();
  piVar3 = (int *)Board::GetBoardPanLocations(pBVar2);
  (**(code **)(*(long *)pBVar2 + 0x1a8))(pBVar2,-*piVar3,0);
  iVar4 = *(int *)(pBVar2 + 0xf8);
  if (0 < iVar4) {
    iVar5 = *(int *)(pBVar2 + 0xfc);
    iVar7 = 0;
    do {
      if (0 < iVar5) {
        if (iVar7 == 0) {
          pBVar6 = pBVar2 + 0x1c0;
          iVar4 = 0;
          do {
            iVar1 = iVar4 + 1;
            if (iVar4 != 2) {
              Board::SetGridSquareType(pBVar2,0,iVar4);
              iVar5 = *(int *)(pBVar2 + 0xfc);
              *(undefined4 *)pBVar6 = 0;
            }
            pBVar6 = pBVar6 + 4;
            iVar4 = iVar1;
          } while (iVar1 < iVar5);
        }
        else {
          iVar4 = 0;
          do {
            iVar1 = iVar4 + 1;
            if (iVar4 != 2) {
              Board::SetGridSquareType(pBVar2,iVar7,iVar4);
              iVar5 = *(int *)(pBVar2 + 0xfc);
            }
            iVar4 = iVar1;
          } while (iVar1 < iVar5);
        }
        iVar4 = *(int *)(pBVar2 + 0xf8);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  pBVar2 = (Board *)ResilienceTutorialIntro::getBoard();
  Board::PutIntoTutorialMode(pBVar2);
  showUI(this,false);
  setState(this,0);
  return;
}


/* TutorialLevel1::onUpdate() */

void __thiscall TutorialLevel1::onUpdate(TutorialLevel1 *this)

{
  bool bVar1;
  AnimationMgr *this_00;
  Board *this_01;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  
  iVar3 = *(int *)(this + 0x48);
  do {
    switch(iVar3) {
    case 4:
      fVar4 = (float)PVZ_T();
      if (fVar4 < *(float *)(this + 0x58)) break;
      setState(this,5);
      iVar2 = *(int *)(this + 0x48);
      goto LAB_044c231c;
    default:
      goto switchD_044c2304_caseD_5;
    case 6:
      fVar4 = (float)PVZ_T();
      if (*(float *)(this + 0x58) <= fVar4) {
        uVar5 = PVZ_EOT();
        *(undefined4 *)(this + 0x58) = uVar5;
        this_01 = (Board *)ResilienceTutorialIntro::getBoard();
        Board::SpawnSunFromSky(this_01);
        iVar2 = *(int *)(this + 0x48);
        goto LAB_044c231c;
      }
      break;
    case 7:
      fVar4 = (float)PVZ_T();
      if (*(float *)(this + 0x58) <= fVar4) {
        setState(this,8);
        iVar2 = *(int *)(this + 0x48);
        goto LAB_044c231c;
      }
      break;
    case 10:
      fVar4 = (float)PVZ_T();
      if (*(float *)(this + 0x58) <= fVar4) {
        setState(this,0xb);
      }
    }
    iVar2 = *(int *)(this + 0x48);
LAB_044c231c:
    bVar1 = iVar3 != iVar2;
    iVar3 = iVar2;
  } while (bVar1);
switchD_044c2304_caseD_5:
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60))
  ;
  AnimationMgr::Update(this_00);
  return;
}


/* TutorialLevel1::onSunClicked(CollectableSun*, int) */

void TutorialLevel1::onSunClicked(CollectableSun *param_1,int param_2)

{
  int iVar1;
  Board *pBVar2;
  float fVar3;
  
  if (*(int *)(param_1 + 0x48) == 5) {
    setState((TutorialLevel1 *)param_1,6);
    fVar3 = (float)PVZ_T();
    *(float *)(param_1 + 0x58) = fVar3 + 3.0;
    ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(8);
    return;
  }
  if (*(int *)(param_1 + 0x48) != 6) {
    return;
  }
  pBVar2 = (Board *)ResilienceTutorialIntro::getBoard();
  iVar1 = Board::GetSunCurrency(pBVar2);
  if (iVar1 < 0x4b) {
    pBVar2 = (Board *)ResilienceTutorialIntro::getBoard();
    Board::SpawnSunFromSky(pBVar2);
    return;
  }
  setState((TutorialLevel1 *)param_1,7);
  return;
}


/* TutorialLevel1::onPlantPlanted(Plant*) */

void TutorialLevel1::onPlantPlanted(Plant *param_1)

{
  if (*(int *)(param_1 + 0x48) == 3) {
    setState((TutorialLevel1 *)param_1,4);
    ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(7);
    return;
  }
  if (*(int *)(param_1 + 0x48) != 9) {
    return;
  }
  setState((TutorialLevel1 *)param_1,10);
  return;
}


/* TutorialLevel1::onCursorAdded(BaseCursor*) */

void __thiscall TutorialLevel1::onCursorAdded(TutorialLevel1 *this,BaseCursor *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x48);
  if ((param_1 != (BaseCursor *)0x0) && (iVar2 == 2)) {
    bVar1 = Sexy::RtObject::IsA<PlantCursor>((RtObject *)param_1);
    if (bVar1) {
      setState(this,3);
      return;
    }
    iVar2 = *(int *)(this + 0x48);
  }
  if (((iVar2 - 7U < 2) && (param_1 != (BaseCursor *)0x0)) &&
     (bVar1 = Sexy::RtObject::IsA<PlantCursor>((RtObject *)param_1), bVar1)) {
    setState(this,9);
    return;
  }
  return;
}


/* TutorialLevel1::onCursorDestroyed(BaseCursor*) */

void __thiscall TutorialLevel1::onCursorDestroyed(TutorialLevel1 *this,BaseCursor *param_1)

{
  bool bVar1;
  
  if ((param_1 != (BaseCursor *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<PlantCursor>((RtObject *)param_1), bVar1)) {
    if (*(int *)(this + 0x48) == 3) {
      setState(this,2);
      return;
    }
    if (*(int *)(this + 0x48) == 9) {
      setState(this,7);
      return;
    }
  }
  return;
}


/* TutorialLevel1::onLawnPreviewComplete() */

void __thiscall TutorialLevel1::onLawnPreviewComplete(TutorialLevel1 *this)

{
  setState(this,2);
  ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(6);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel1::registerForEvents() */

void __thiscall TutorialLevel1::registerForEvents(TutorialLevel1 *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
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
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  IntroModule::registerForEvents();
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,startIntro);
  Sexy::Delegate0::Delegate0<TutorialLevel1,void(TutorialLevel1::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnIntroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onEndLevel);
  Sexy::Delegate0::Delegate0<TutorialLevel1,void(TutorialLevel1::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<TutorialLevel1,void(TutorialLevel1::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::Delegate1<TutorialLevel1,void(TutorialLevel1::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCursorAdded);
  local_f0 = local_b0;
  uStack_e8 = uStack_a8;
  local_e0 = local_a0;
  MessageRouter::
  Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<TutorialLevel1,void(TutorialLevel1::*)(BaseCursor*)>>
            ((MessageRouter *)puVar1,Message::CursorAdded,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSunClicked);
  local_100 = local_88;
  local_110 = local_98;
  uStack_108 = uStack_90;
  MessageRouter::
  Subscribe<CollectableSun*,int,Sexy::CBMemberTranslatorX<TutorialLevel1,void(TutorialLevel1::*)(CollectableSun*,int)>>
            ((MessageRouter *)puVar1,Message::SunClicked,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSunExpired);
  local_130 = local_80;
  uStack_128 = uStack_78;
  local_120 = local_70;
  MessageRouter::
  Subscribe<Collectable*,Sexy::CBMemberTranslatorX<TutorialLevel1,void(TutorialLevel1::*)(Collectable*)>>
            ((MessageRouter *)puVar1,Message::CollectableExpired,&local_130);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantPlanted);
  local_140 = local_58;
  local_150 = local_68;
  uStack_148 = uStack_60;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<TutorialLevel1,void(TutorialLevel1::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlanted,&local_150);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCursorDestroyed);
  local_f0 = local_50;
  uStack_e8 = uStack_48;
  local_e0 = local_40;
  MessageRouter::
  Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<TutorialLevel1,void(TutorialLevel1::*)(BaseCursor*)>>
            ((MessageRouter *)puVar1,Message::CursorDestroyed,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameWon);
  Sexy::Delegate0::Delegate0<TutorialLevel1,void(TutorialLevel1::*)()>(aDStack_38,aCStack_c8);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameWon,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

