// Class: TutorialLevel2


/* TutorialLevel2::onGameWon() */

void TutorialLevel2::onGameWon(void)

{
  ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(0xe);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel2::StaticClassInit() */

void TutorialLevel2::StaticClassInit(void)

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
    std::string::string(asStack_10,"TutorialLevel2");
    (*pcVar2)(plVar1,asStack_10,FUN_044c412c,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TutorialLevel2::StaticGetClass() */

long * TutorialLevel2::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TutorialLevel2",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TutorialLevel2::TutorialLevel2() */

void __thiscall TutorialLevel2::TutorialLevel2(TutorialLevel2 *this)

{
  IntroModule::IntroModule((IntroModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06853f90;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x60));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x68));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x70));
  return;
}


/* TutorialLevel2::StaticNew() */

TutorialLevel2 * TutorialLevel2::StaticNew(void)

{
  TutorialLevel2 *this;
  
  this = ::operator_new(0x78);
  TutorialLevel2(this);
  return this;
}


/* TutorialLevel2::~TutorialLevel2() */

void __thiscall TutorialLevel2::~TutorialLevel2(TutorialLevel2 *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06853f90;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  IntroModule::~IntroModule((IntroModule *)this);
  return;
}


/* TutorialLevel2::~TutorialLevel2() */

void __thiscall TutorialLevel2::~TutorialLevel2(TutorialLevel2 *this)

{
  ~TutorialLevel2(this);
  AK::FreeHook(this);
  return;
}


/* TutorialLevel2::onEndLevel() */

void __thiscall TutorialLevel2::onEndLevel(TutorialLevel2 *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtMixedPtrBase *this_01;
  char cVar1;
  AnimationMgr *this_02;
  long *plVar2;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58);
  this_01 = (RtMixedPtrBase *)(this + 0x60);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_02 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  AnimationMgr::Clear(this_02);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_01);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel2::showUI(bool) */

void __thiscall TutorialLevel2::showUI(TutorialLevel2 *this,bool param_1)

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
    FUN_044c294c(extraout_x0 + 0x179);
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


/* TutorialLevel2::startGame() */

void __thiscall TutorialLevel2::startGame(TutorialLevel2 *this)

{
  Board *this_00;
  WaveGenerator *this_01;
  long lVar1;
  
  this_00 = (Board *)ResilienceTutorialIntro::getBoard();
  Board::DestroyCutsceneZombies();
  Board::StartLevel(this_00);
  showUI(this,true);
  this_01 = (WaveGenerator *)Board::GetWaveGenerator(this_00);
  if (this_01 != (WaveGenerator *)0x0) {
    WaveGenerator::PauseNextWave(this_01,true);
  }
  lVar1 = Board::GetWaveManager(this_00);
  if (lVar1 != 0) {
    WaveManager::SetForceSpawnMode(SUB81(lVar1,0));
    return;
  }
  return;
}


/* TutorialLevel2::onGameplayEnded() */

void __thiscall TutorialLevel2::onGameplayEnded(TutorialLevel2 *this)

{
  bool bVar1;
  AnimationController *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x60));
  if (!bVar1) {
    return;
  }
  this_00 = (AnimationController *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60))
  ;
  AnimationController::SetDuration(this_00,0.0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel2::setupTutorialAdvice() */

void __thiscall TutorialLevel2::setupTutorialAdvice(TutorialLevel2 *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  AnimationMgr *pAVar1;
  long lVar2;
  AnimationMgr *pAVar3;
  AnimationController *pAVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  RtWeakPtrBase aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58);
  local_8 = ___stack_chk_guard;
  pAVar1 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  AnimationMgr::Clear(pAVar1);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  FUN_044c2930(lVar2 + 0x10);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  pAVar1 = (AnimationMgr *)FUN_044c293c(*(undefined4 *)(lVar2 + 0x10));
  switch(*(undefined4 *)(this + 0x48)) {
  case 3:
    pAVar3 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pwVar6 = L"[ADVICE_PLANT_SUNFLOWER1]";
    break;
  default:
    goto switchD_044c3588_caseD_4;
  case 6:
    pAVar3 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pwVar6 = L"[ADVICE_PLANT_SUNFLOWER2]";
    break;
  case 8:
    pAVar3 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    FUN_05478178(aRStack_10,L"[ADVICE_MORE_SUNFLOWERS]",aRStack_18);
    pAVar4 = (AnimationController *)ShowAdvice::Create(aRStack_10,2);
    AnimationMgr::Add(pAVar3,pAVar4,(float)pAVar1);
    FUN_05476c50(aRStack_10);
    nop();
    goto switchD_044c3588_caseD_4;
  case 9:
    pAVar3 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    FUN_05478178(aRStack_10,L"[ADVICE_PLANT_SUNFLOWER4]",aRStack_18);
    pAVar4 = (AnimationController *)ShowAdvice::Create(aRStack_10,2);
    AnimationMgr::Add(pAVar3,pAVar4,(float)pAVar1);
    FUN_05476c50(aRStack_10);
    nop();
    pAVar4 = (AnimationController *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
    AnimationController::SetDuration(pAVar4,10000.0);
    uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,aRStack_18);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pAVar1 = (AnimationMgr *)FUN_044c293c(*(undefined4 *)(lVar2 + 0x10));
    goto LAB_044c3634;
  }
  FUN_05478178(aRStack_10,pwVar6,aRStack_18);
  pAVar4 = (AnimationController *)ShowAdvice::Create(aRStack_10,2);
  AnimationMgr::Add(pAVar3,pAVar4,(float)pAVar1);
  FUN_05476c50(aRStack_10);
  nop();
  pAVar4 = (AnimationController *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  AnimationController::SetDuration(pAVar4,10000.0);
  uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,aRStack_18);
LAB_044c3634:
  AnimationMgr::Add(pAVar1,uVar5,(RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
switchD_044c3588_caseD_4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel2::initializeModule() */

void __thiscall TutorialLevel2::initializeModule(TutorialLevel2 *this)

{
  undefined4 uVar1;
  long lVar2;
  Point aPStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x48) = 0xffffffff;
  local_8 = ___stack_chk_guard;
  uVar1 = Board::MakeRenderOrder(900000,0,1);
  Sexy::Point::Point(aPStack_18,0,0);
  FUN_044c379c(aPStack_18,uVar1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x60),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  FUN_044c2954(lVar2 + 0x1c);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x50) = uVar1;
  *(undefined4 *)(this + 0x54) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x68),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x70),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  AnimationMgr::Create();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x58),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel2::addToRenderQueue(RenderQueue*) */

void __thiscall TutorialLevel2::addToRenderQueue(TutorialLevel2 *this,RenderQueue *param_1)

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
            ((ReceivedDataCallback *)this,drawLawnOverlays);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<TutorialLevel2,void(TutorialLevel2::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,0x493e1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel2::setupSodRollout() */

void __thiscall TutorialLevel2::setupSodRollout(TutorialLevel2 *this)

{
  Effect_PopAnim *pEVar1;
  ResourceInfo *pRVar2;
  int in_w4;
  float fVar3;
  string asStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_T();
  *(float *)(this + 0x4c) = fVar3;
  *(float *)(this + 0x50) = fVar3 + 2.0;
  pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,1,1,1,in_w4);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_18,(float)(int)local_28 - 14.0,(float)local_28._4_4_ - 115.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar1,(SexyVector3 *)&local_18,-1);
  std::string::string(asStack_30,"POPANIM_EFFECTS_SODROLL");
  GetPAMByName(asStack_30);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_30);
  nop();
  std::string::string((string *)&local_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(pEVar1,(Vec3 *)&local_18,0);
  std::string::~string((string *)&local_18);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x68),(RtWeakPtrBase *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,3,1,1,in_w4);
  local_20 = local_10;
  local_28 = local_18;
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_18,(float)(int)local_18 - 14.0,
             (float)(int)((ulong)local_18 >> 0x20) - 115.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar1,(SexyVector3 *)&local_18,-1);
  std::string::string(asStack_30,"POPANIM_EFFECTS_SODROLL");
  GetPAMByName(asStack_30);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_30);
  nop();
  std::string::string((string *)&local_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(pEVar1,(Vec3 *)&local_18,0);
  std::string::~string((string *)&local_18);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x70),(RtWeakPtrBase *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel2::drawLawnOverlays(Sexy::Graphics*) */

void TutorialLevel2::drawLawnOverlays(Graphics *param_1)

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
  undefined4 local_4c;
  undefined4 local_48 [2];
  int local_40 [4];
  SexyMatrix3 aSStack_30 [8];
  float local_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar6 = (float)PVZ_EOT();
  if ((*(float *)(param_1 + 0x50) == fVar6) ||
     (bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x68)), bVar1)) {
    pIVar5 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0d218);
    iVar3 = FUN_044c2b84(0xab);
    iVar4 = FUN_044c2b84(0x12d);
    Sexy::Graphics::DrawImage(in_x1,pIVar5,iVar3,iVar4);
  }
  if (fVar6 != *(float *)(param_1 + 0x50)) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x68));
    if (bVar1) {
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x68));
      this_00 = Sexy::RtObject::Cast<Effect_PopAnim>(this);
      this_01 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_00);
      std::string::string((string *)local_40,"SodRoll");
      cVar2 = PopAnimRig::CalcLayerTransformScreenSpace(this_01,(string *)local_40,aSStack_30);
      std::string::~string((string *)local_40);
      nop();
      if (cVar2 != '\0') {
        BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,0,1,1,in_w4);
        uVar9 = *(undefined4 *)(param_1 + 0x4c);
        uVar8 = *(undefined4 *)(param_1 + 0x50);
        uVar7 = PVZ_T();
        local_4c = 0x10;
        local_48[0] = 5;
        iVar3 = CurveLerp<int>(uVar9,uVar8,uVar7,&local_4c,local_48,1);
        fVar6 = (float)FUN_044c2b98((float)local_40[0] - 14.0);
        iVar3 = FUN_044c2b84(iVar3);
        iVar4 = FUN_044c2b84(600);
        Sexy::Graphics::SetClipRect(in_x1,0,0,(int)(fVar6 + local_28 + (float)iVar3),iVar4);
      }
    }
    pIVar5 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0d148);
    iVar3 = FUN_044c2b84(200);
    iVar4 = FUN_044c2b84(0xe0);
    Sexy::Graphics::DrawImage(in_x1,pIVar5,iVar3,iVar4);
    Sexy::Graphics::ClearClipRect(in_x1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel2::setupLawnPreview() */

void __thiscall TutorialLevel2::setupLawnPreview(TutorialLevel2 *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  long lVar2;
  ResourceInfo *this_00;
  AnimationController *pAVar3;
  AnimationController *pAVar4;
  AnimationController *pAVar5;
  AnimationController *pAVar6;
  AnimationController *pAVar7;
  AnimationController *pAVar8;
  AnimationController *pAVar9;
  code *pcVar10;
  float fVar11;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  RtMixedPtr aRStack_60 [8];
  float local_58 [2];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  lVar2 = ResilienceTutorialIntro::getBoard();
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar2 + 0x898));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  fVar11 = (float)FUN_044c293c(*(undefined4 *)(lVar2 + 0x10));
  StandardLevelIntro::GetPanLocations(0,&local_70,&local_6c);
  pAVar3 = (AnimationController *)
           MoveBoard::Create(*(undefined4 *)(pRVar1 + 0x48),local_70,local_6c,0,0,4);
  std::string::string(asStack_50,"Play_UI_Game_Intro_Cam_Pan");
  pAVar4 = (AnimationController *)AnimMgrSendAudioEvent::Create(asStack_50);
  std::string::~string(asStack_50);
  nop();
  StandardLevelIntro::GetPanLocations(3,&local_68,&local_64);
  pAVar5 = (AnimationController *)
           MoveBoard::Create(*(undefined4 *)(pRVar1 + 0x4c),local_68,local_64,0,0,4);
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
  std::string::string(asStack_50,"PlaceLawnItems");
  pAVar9 = (AnimationController *)IntroBoardDispatch::Create(asStack_50);
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar9,fVar11);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"PlaceStreetZombies");
  pAVar9 = (AnimationController *)IntroBoardDispatch::Create(asStack_50);
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar9,fVar11);
  std::string::~string(asStack_50);
  nop();
  pAVar9 = (AnimationController *)StandardLevelIntro::CreateLevelNameStringAdvice();
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar9,fVar11 + 1.0);
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar3,fVar11 + 2.0,local_58);
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar4,fVar11 + 2.0);
  std::string::string(asStack_50,"EnableGridItems");
  pAVar3 = (AnimationController *)IntroBoardDispatch::Create(asStack_50);
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar3,fVar11 + 2.5);
  std::string::~string(asStack_50);
  nop();
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar5,local_58[0],local_58);
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar7,local_58[0]);
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar8,local_58[0] + 2.0);
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar6,local_58[0],local_58);
  std::string::string(asStack_50,"ShowLawnItems");
  pAVar3 = (AnimationController *)IntroBoardDispatch::Create(asStack_50);
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar3,local_58[0],local_58);
  std::string::~string(asStack_50);
  nop();
  pcVar10 = *(code **)(*(long *)this + 0xa0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLawnPreviewComplete);
  Sexy::Delegate0::Delegate0<TutorialLevel2,void(TutorialLevel2::*)()>(aDStack_38,asStack_50);
  (*pcVar10)(this,this_00,(RtId *)local_58,aDStack_38,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel2::setState(TutorialLevel2::State) */

void __thiscall TutorialLevel2::setState(TutorialLevel2 *this,int param_2)

{
  int iVar1;
  int iVar2;
  Board *pBVar3;
  UINewPVPTopZombieQueue *this_00;
  AnimationController *this_01;
  long lVar4;
  SeedPacket *pSVar5;
  WaveGenerator *this_02;
  WaveManager *this_03;
  float fVar6;
  TPoint aTStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  Point aPStack_30 [8];
  TPoint aTStack_28 [8];
  undefined8 local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x48) == param_2) goto switchD_044c4c3c_caseD_44c4bf8;
  pBVar3 = (Board *)ResilienceTutorialIntro::getBoard();
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(pBVar3);
  switch(*(undefined4 *)(this + 0x48)) {
  case 1:
    showUI(this,true);
    Board::GetBoardBaseOffset();
    SeedBankNew::SetPacketsOnDisplay((SeedBankNew *)this_00,false);
    (**(code **)(*(long *)this_00 + 0x1a0))(this_00);
    UINewPVPTopZombieQueue::gettItem(this_00,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    UIWidget::GetDrawRect();
    UINewPVPTopZombieQueue::gettItem(this_00,0);
    pSVar5 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    SeedPacket::SetDisabled(pSVar5,true);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60))
    ;
    iVar1 = FUN_044c2b84(0x1e);
    iVar2 = FUN_044c2b84(0);
    Sexy::Point::Point(aPStack_30,local_18 + local_10 + iVar1,local_14 + local_c / 2 + iVar2);
    Sexy::TPoint<int>::operator-((TPoint<int> *)aPStack_30,aTStack_48);
    Sexy::Point::Point((Point *)&local_20,aTStack_28);
    *(undefined8 *)(lVar4 + 0x30) = local_20;
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60))
    ;
    *(undefined4 *)(lVar4 + 0x3c) = 0x10e;
    startGame(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    *(int *)(this + 0x48) = param_2;
    break;
  default:
    *(int *)(this + 0x48) = param_2;
    break;
  case 3:
  case 6:
  case 9:
    UINewPVPTopZombieQueue::gettItem(this_00,1);
    pSVar5 = (SeedPacket *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    SeedPacket::SetIsFlashing(pSVar5,false);
    this_01 = (AnimationController *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
    AnimationController::SetDuration(this_01,0.0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    *(int *)(this + 0x48) = param_2;
  }
  if (10 < param_2 - 1U) goto switchD_044c4c3c_caseD_44c4bf8;
  switch((long)(short)(&switchD_044c4c3c::switchdataD_05753d30)[param_2 - 1] * 4 + 0x44c4c40) {
  case 0x44c4e04:
LAB_044c4e14:
    UINewPVPTopZombieQueue::gettItem(this_00,1);
    pSVar5 = (SeedPacket *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    SeedPacket::SetIsFlashing(pSVar5,true);
    setupTutorialAdvice(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    break;
  case 0x44c4e3c:
    pBVar3 = (Board *)ResilienceTutorialIntro::getBoard();
    this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(pBVar3);
    goto LAB_044c4e14;
  case 0x44c4e58:
    setupLawnPreview(this);
    break;
  case 0x44c4e64:
    UINewPVPTopZombieQueue::gettItem(this_00,0);
    pSVar5 = (SeedPacket *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    SeedPacket::SetDisabled(pSVar5,false);
    setupTutorialAdvice(this);
    this_02 = (WaveGenerator *)Board::GetWaveGenerator(pBVar3);
    if (this_02 != (WaveGenerator *)0x0) {
      WaveGenerator::PauseNextWave(this_02,false);
      WaveGenerator::SpawnNextWaveIn(this_02,10.0);
    }
    this_03 = (WaveManager *)Board::GetWaveManager(pBVar3);
    if (this_03 != (WaveManager *)0x0) {
      WaveManager::SetForceSpawnMode(SUB81(this_03,0));
      fVar6 = (float)PVZ_T();
      WaveManager::SetNextWaveTime(this_03,fVar6 + 10.0);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    break;
  case 0x44c4eec:
    setupTutorialAdvice(this);
  }
switchD_044c4c3c_caseD_44c4bf8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TutorialLevel2::startIntro() */

void __thiscall TutorialLevel2::startIntro(TutorialLevel2 *this)

{
  uint uVar1;
  Board *pBVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  Board *pBVar7;
  int iVar8;
  
  pBVar2 = (Board *)ResilienceTutorialIntro::getBoard();
  piVar3 = (int *)Board::GetBoardPanLocations(pBVar2);
  (**(code **)(*(long *)pBVar2 + 0x1a8))(pBVar2,-*piVar3,0);
  iVar4 = *(int *)(pBVar2 + 0xf8);
  if (0 < iVar4) {
    iVar5 = *(int *)(pBVar2 + 0xfc);
    iVar8 = 0;
    do {
      if (0 < iVar5) {
        if (iVar8 == 0) {
          pBVar7 = pBVar2 + 0x1c0;
          uVar6 = 0;
          do {
            while( true ) {
              if ((uVar6 & 0xfffffffb) != 0) break;
              uVar1 = uVar6 + 1;
              Board::SetGridSquareType(pBVar2,uVar6 & 0xfffffffb,uVar6,2);
              iVar5 = *(int *)(pBVar2 + 0xfc);
              *(uint *)pBVar7 = uVar6 & 0xfffffffb;
              pBVar7 = pBVar7 + 4;
              uVar6 = uVar1;
              if (iVar5 <= (int)uVar1) goto LAB_044c4fac;
            }
            uVar6 = uVar6 + 1;
            pBVar7 = pBVar7 + 4;
          } while ((int)uVar6 < iVar5);
        }
        else {
          uVar6 = 0;
          do {
            if ((uVar6 & 0xfffffffb) == 0) {
              Board::SetGridSquareType(pBVar2,iVar8,uVar6,2);
              iVar5 = *(int *)(pBVar2 + 0xfc);
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < iVar5);
        }
LAB_044c4fac:
        iVar4 = *(int *)(pBVar2 + 0xf8);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar4);
  }
  pBVar2 = (Board *)ResilienceTutorialIntro::getBoard();
  Board::PutIntoTutorialMode(pBVar2);
  showUI(this,false);
  setState(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel2::onUpdate() */

void __thiscall TutorialLevel2::onUpdate(TutorialLevel2 *this)

{
  int iVar1;
  char cVar2;
  AnimationMgr *this_00;
  Board *this_01;
  UINewPVPTopZombieQueue *this_02;
  long *plVar3;
  SeedPacket *this_03;
  int iVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)(this + 0x48);
  do {
    iVar4 = iVar1;
    if (iVar4 != 0) break;
    setState(this,1);
    iVar1 = *(int *)(this + 0x48);
  } while (*(int *)(this + 0x48) != 0);
  if (((iVar4 == 2) || (iVar4 == 5)) || (iVar4 == 8)) {
    this_01 = (Board *)ResilienceTutorialIntro::getBoard();
    this_02 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(this_01);
    UINewPVPTopZombieQueue::gettItem(this_02,1);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    cVar2 = (**(code **)(*plVar3 + 400))();
    if (cVar2 != '\0') {
      this_03 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      if (*(code **)(*(long *)this_03 + 0x1c0) == SeedPacket::IsAffordable) {
        cVar2 = SeedPacket::IsAffordable(this_03);
      }
      else {
        cVar2 = (**(code **)(*(long *)this_03 + 0x1c0))();
      }
      if (cVar2 != '\0') {
        setState(this,*(int *)(this + 0x48) + 1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        goto LAB_044c506c;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
LAB_044c506c:
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58))
  ;
  AnimationMgr::Update(this_00);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel2::onPlantPlanted(Plant*) */

void TutorialLevel2::onPlantPlanted(Plant *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  Board *this;
  UINewPVPTopZombieQueue *this_00;
  long *plVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x48) == 0xb) goto LAB_044c51d8;
  Plant::GetType();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  bVar1 = std::operator!=((string *)(lVar4 + 8),"sunflower");
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (!bVar1) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (iVar3 == 4) {
      setState((TutorialLevel2 *)param_1,5);
      ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(0xd);
    }
    else if (iVar3 == 7) {
      setState((TutorialLevel2 *)param_1,8);
    }
    else if (iVar3 == 10) {
      setState((TutorialLevel2 *)param_1,0xb);
    }
    goto LAB_044c51d8;
  }
  this = (Board *)ResilienceTutorialIntro::getBoard();
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(this);
  UINewPVPTopZombieQueue::gettItem(this_00,1);
  plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  cVar2 = (**(code **)(*plVar5 + 400))();
  if (cVar2 == '\0') {
LAB_044c5234:
    iVar3 = *(int *)(param_1 + 0x48);
    if ((iVar3 == 6 || iVar3 == 3) || (iVar3 == 9)) {
      setState((TutorialLevel2 *)param_1,iVar3 + -1);
    }
  }
  else {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    cVar2 = (**(code **)(*plVar5 + 400))();
    if ((cVar2 != '\0') && (iVar3 = Board::GetSunCurrency(this), iVar3 < 0x96)) goto LAB_044c5234;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
LAB_044c51d8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel2::onCursorAdded(BaseCursor*) */

void __thiscall TutorialLevel2::onCursorAdded(TutorialLevel2 *this,BaseCursor *param_1)

{
  int iVar1;
  bool bVar2;
  PlantCursor *pPVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 != (BaseCursor *)0x0) && (*(int *)(this + 0x48) != 0xb)) &&
     (pPVar3 = Sexy::RtObject::Cast<PlantCursor>((RtObject *)param_1), pPVar3 != (PlantCursor *)0x0)
     ) {
    ArtifactEvolutionCursor::GetPlantType();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    bVar2 = std::operator!=((string *)(lVar4 + 8),"sunflower");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (!bVar2) {
      iVar1 = *(int *)(this + 0x48);
      if (iVar1 == 3) {
        setState(this,4);
      }
      else if (iVar1 - 5U < 2) {
        setState(this,7);
      }
      else if (iVar1 - 8U < 2) {
        setState(this,10);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TutorialLevel2::onLawnPreviewComplete() */

void __thiscall TutorialLevel2::onLawnPreviewComplete(TutorialLevel2 *this)

{
  setState(this,2);
  ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(0xc);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel2::registerForEvents() */

void __thiscall TutorialLevel2::registerForEvents(TutorialLevel2 *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  CBMemberTranslatorX aCStack_80 [24];
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
  Sexy::Delegate0::Delegate0<TutorialLevel2,void(TutorialLevel2::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnIntroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onEndLevel);
  Sexy::Delegate0::Delegate0<TutorialLevel2,void(TutorialLevel2::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<TutorialLevel2,void(TutorialLevel2::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::Delegate1<TutorialLevel2,void(TutorialLevel2::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCursorAdded);
  local_90 = local_58;
  local_a0 = local_68;
  uStack_98 = uStack_60;
  MessageRouter::
  Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<TutorialLevel2,void(TutorialLevel2::*)(BaseCursor*)>>
            ((MessageRouter *)puVar1,Message::CursorAdded,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantPlanted);
  local_c0 = local_50;
  uStack_b8 = uStack_48;
  local_b0 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<TutorialLevel2,void(TutorialLevel2::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlanted,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<TutorialLevel2,void(TutorialLevel2::*)()>(aDStack_38,aCStack_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayEnded,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameWon);
  Sexy::Delegate0::Delegate0<TutorialLevel2,void(TutorialLevel2::*)()>(aDStack_38,aCStack_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameWon,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

