// Class: MinigameCopycatsTutorialIntro


/* MinigameCopycatsTutorialIntro::onGameplayStarted() */

void MinigameCopycatsTutorialIntro::onGameplayStarted(void)

{
  return;
}


/* MinigameCopycatsTutorialIntro::drawLawnOverlays(Sexy::Graphics*) */

void __thiscall
MinigameCopycatsTutorialIntro::drawLawnOverlays
          (MinigameCopycatsTutorialIntro *this,Graphics *param_1)

{
  TutorialFinger::Draw((TutorialFinger *)(this + 0x60),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MinigameCopycatsTutorialIntro::StaticClassInit() */

void MinigameCopycatsTutorialIntro::StaticClassInit(void)

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
    std::string::string(asStack_10,"MinigameCopycatsTutorialIntro");
    (*pcVar2)(plVar1,asStack_10,FUN_04f62aa0,0xb0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MinigameCopycatsTutorialIntro::StaticGetClass() */

long * MinigameCopycatsTutorialIntro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MinigameCopycatsTutorialIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MinigameCopycatsTutorialIntro::MinigameCopycatsTutorialIntro() */

void __thiscall
MinigameCopycatsTutorialIntro::MinigameCopycatsTutorialIntro(MinigameCopycatsTutorialIntro *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06a212f0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  TutorialFinger::TutorialFinger((TutorialFinger *)(this + 0x60));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  return;
}


/* MinigameCopycatsTutorialIntro::StaticNew() */

MinigameCopycatsTutorialIntro * MinigameCopycatsTutorialIntro::StaticNew(void)

{
  MinigameCopycatsTutorialIntro *this;
  
  this = ::operator_new(0xb0);
  MinigameCopycatsTutorialIntro(this);
  return this;
}


/* MinigameCopycatsTutorialIntro::~MinigameCopycatsTutorialIntro() */

void __thiscall
MinigameCopycatsTutorialIntro::~MinigameCopycatsTutorialIntro(MinigameCopycatsTutorialIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06a212f0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  TutorialFinger::~TutorialFinger((TutorialFinger *)(this + 0x60));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* MinigameCopycatsTutorialIntro::~MinigameCopycatsTutorialIntro() */

void __thiscall
MinigameCopycatsTutorialIntro::~MinigameCopycatsTutorialIntro(MinigameCopycatsTutorialIntro *this)

{
  ~MinigameCopycatsTutorialIntro(this);
  AK::FreeHook(this);
  return;
}


/* MinigameCopycatsTutorialIntro::onEndLevel() */

void __thiscall MinigameCopycatsTutorialIntro::onEndLevel(MinigameCopycatsTutorialIntro *this)

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
/* MinigameCopycatsTutorialIntro::onPlantPlanted(Plant*) */

void MinigameCopycatsTutorialIntro::onPlantPlanted(Plant *param_1)

{
  char cVar1;
  Board *this;
  UINewPVPTopZombieQueue *this_00;
  SeedPacket *pSVar2;
  int iVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TutorialFinger::StopCurvingTutorialFinger((TutorialFinger *)(param_1 + 0x60));
  LawnApp::KillGameMaskUI(gLawnApp);
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  this = (Board *)ResilienceTutorialIntro::getBoard();
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(this);
  for (iVar3 = 0; cVar1 = FUN_04f604fc(this_00[0x199]), iVar3 < cVar1; iVar3 = iVar3 + 1) {
    UINewPVPTopZombieQueue::gettItem(this_00,iVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    SeedPacket::GetPlantType();
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
    if (cVar1 != '\0') {
      pSVar2 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      SeedPacket::setAffordable(pSVar2,false);
      pSVar2 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      SeedPacket::SetIsFlashing(pSVar2,false);
      pSVar2 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      SeedPacket::SetDisabled(pSVar2,false);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MinigameCopycatsTutorialIntro::showUI(bool) */

void __thiscall
MinigameCopycatsTutorialIntro::showUI(MinigameCopycatsTutorialIntro *this,bool param_1)

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
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_40);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UIShovel");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_00);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_38);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UICoinBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_01);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_30);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UIGemBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_02);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
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
    FUN_04f60534(extraout_x0 + 0x179);
  }
  std::string::string(asStack_10,"UIChangeSpeedButton");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_04);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UISunBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_05);
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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MinigameCopycatsTutorialIntro::setupTutorialAdvice(int) */

void MinigameCopycatsTutorialIntro::setupTutorialAdvice(int param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  char cVar1;
  AnimationMgr *pAVar2;
  long lVar3;
  AnimationController *pAVar4;
  float fVar5;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574(auStack_10);
  if (*(int *)((ulong)(uint)param_1 + 0x4c) == 4) {
    FUN_054772c4(auStack_10,L"[ADVICE_COPYCATS]");
  }
  cVar1 = FUN_054765e8(auStack_10);
  if (cVar1 == '\0') {
    this = (RtWeakPtr<Sexy::ResourceInfo> *)((ulong)(uint)param_1 + 0x58);
    pAVar2 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    AnimationMgr::Clear(pAVar2);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    FUN_04f604e0(lVar3 + 0x10);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    fVar5 = (float)FUN_04f604ec(*(undefined4 *)(lVar3 + 0x10));
    pAVar2 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    pAVar4 = (AnimationController *)ShowAdvice::Create(auStack_10,2);
    AnimationMgr::Add(pAVar2,pAVar4,fVar5);
  }
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MinigameCopycatsTutorialIntro::initializeModule() */

void __thiscall MinigameCopycatsTutorialIntro::initializeModule(MinigameCopycatsTutorialIntro *this)

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
     (cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar2,0x4f), cVar1 == '\0')) {
    *(undefined4 *)(this + 0x4c) = 0xffffffff;
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x50) = uVar3;
    AnimationMgr::Create();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x58),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    *(undefined4 *)(this + 0xa0) = uVar3;
    *(undefined4 *)(this + 0x98) = 0;
    *(undefined4 *)(this + 0xa4) = 0xbf800000;
    *(undefined4 *)(this + 0x9c) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MinigameCopycatsTutorialIntro::StartNarrativeID(std::string const&) */

void __thiscall
MinigameCopycatsTutorialIntro::StartNarrativeID(MinigameCopycatsTutorialIntro *this,string *param_1)

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
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::Delegate0<MinigameCopycatsTutorialIntro,void(MinigameCopycatsTutorialIntro::*)()>
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
/* MinigameCopycatsTutorialIntro::introduceDave() */

void __thiscall MinigameCopycatsTutorialIntro::introduceDave(MinigameCopycatsTutorialIntro *this)

{
  CrazyNPCManager *pCVar1;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  std::string::string(asStack_60,"COPYCATS1");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::Delegate0<MinigameCopycatsTutorialIntro,void(MinigameCopycatsTutorialIntro::*)()>
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
/* MinigameCopycatsTutorialIntro::addToRenderQueue(RenderQueue*) */

void __thiscall
MinigameCopycatsTutorialIntro::addToRenderQueue
          (MinigameCopycatsTutorialIntro *this,RenderQueue *param_1)

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
  Delegate1<MinigameCopycatsTutorialIntro,void(MinigameCopycatsTutorialIntro::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,0xdbba1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MinigameCopycatsTutorialIntro::setupDaveProlog() */

void __thiscall MinigameCopycatsTutorialIntro::setupDaveProlog(MinigameCopycatsTutorialIntro *this)

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
  FUN_04f604e0(lVar1 + 0x10);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar3 = (float)FUN_04f604ec(*(undefined4 *)(lVar1 + 0x10));
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
/* MinigameCopycatsTutorialIntro::setState(MinigameCopycatsTutorialIntro::State) */

void __thiscall
MinigameCopycatsTutorialIntro::setState(MinigameCopycatsTutorialIntro *this,int param_2)

{
  RtMixedPtr<Sexy::Image> *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Board *this_01;
  SeedBankNew *this_02;
  SeedPacket *pSVar5;
  ProfileMgr *this_03;
  PlayerInfo *pPVar6;
  ResilienceTutorialIntroProperties *pRVar7;
  long lVar8;
  TPoint aTStack_38 [8];
  int local_30;
  int local_2c;
  TPoint<int> aTStack_28 [8];
  int local_20;
  int local_1c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x4c) != param_2) {
    *(int *)(this + 0x4c) = param_2;
    setupTutorialAdvice((int)this);
    switch(*(undefined4 *)(this + 0x4c)) {
    case 1:
      setupDaveProlog(this);
      ResilienceTutorialIntro::enablePlantfood((ResilienceTutorialIntro *)this,false,false);
      break;
    case 2:
      std::string::string((string *)aRStack_18,"COPYCATS2");
      StartNarrativeID(this,(string *)aRStack_18);
      std::string::~string((string *)aRStack_18);
      nop();
      break;
    case 4:
      this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0xa8);
      LawnApp::KillGameMaskUI(gLawnApp);
      this_01 = (Board *)ResilienceTutorialIntro::getBoard();
      this_02 = (SeedBankNew *)Board::GetSeedBank(this_01);
      SeedBankNew::SetPacketsOnDisplay(this_02,false);
      for (iVar3 = 0; cVar1 = FUN_04f604fc(this_02[0x199]), iVar3 < cVar1; iVar3 = iVar3 + 1) {
        UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this_02,iVar3);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
        SeedPacket::GetPlantType();
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18);
        if (cVar1 != '\0') {
          cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
          if (cVar1 != '\0') {
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
            bVar2 = std::operator==((string *)(lVar8 + 8),"minigame_imitater");
            if (bVar2) {
              pSVar5 = (SeedPacket *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
              SeedPacket::SetDisabled(pSVar5,false);
              pSVar5 = (SeedPacket *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
              SeedPacket::setAffordable(pSVar5,true);
              pSVar5 = (SeedPacket *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
              SeedPacket::SetIsFlashing(pSVar5,true);
              Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                        ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)&local_20);
              goto LAB_04f62724;
            }
          }
          pSVar5 = (SeedPacket *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
          SeedPacket::SetDisabled(pSVar5,true);
        }
LAB_04f62724:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      }
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
      if (cVar1 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        UIWidget::GetDrawRect();
        ResilienceTutorialIntro::getBoard();
        Board::GetBoardBaseOffset();
        Sexy::TRect<int>::GetCenter();
        Sexy::TPoint<int>::operator-(aTStack_28,aTStack_38);
        Sexy::Point::Point((Point *)&local_30,(TPoint *)&local_20);
        Board::TranslateScreenPositionToBoardPosition
                  (*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
        pRVar7 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
        Sexy::Point::Point((Point *)&local_20,(TPoint *)(pRVar7 + 0x78));
        BoardTransforms::GridToBoardSpaceX(local_20);
        iVar3 = FUN_04f60934();
        BoardTransforms::GridToBoardSpaceY(local_1c);
        iVar4 = FUN_04f60934();
        TutorialFinger::SetCurvingTutorialFinger
                  ((TutorialFinger *)(this + 0x60),(float)local_30,(float)local_2c,(float)iVar3,
                   (float)iVar4,1.0);
        TutorialFinger::StartCurvingTutorialFinger((TutorialFinger *)(this + 0x60));
      }
      break;
    case 5:
      this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_03);
      if (pPVar6 != (PlayerInfo *)0x0) {
        PlayerInfo::CompleteTutorial(pPVar6,0x4f);
      }
      StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MinigameCopycatsTutorialIntro::startIntro() */

void __thiscall MinigameCopycatsTutorialIntro::startIntro(MinigameCopycatsTutorialIntro *this)

{
  showUI(this,true);
  setState(this,0);
  return;
}


/* MinigameCopycatsTutorialIntro::onUpdate() */

void __thiscall MinigameCopycatsTutorialIntro::onUpdate(MinigameCopycatsTutorialIntro *this)

{
  bool bVar1;
  AnimationMgr *pAVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(this + 0x4c);
  do {
    if (iVar4 == 0) {
      Board::PutIntoTutorialMode(*(Board **)(gLawnApp + 0x9f0));
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
      TutorialFinger::Update((TutorialFinger *)(this + 0x60));
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


/* MinigameCopycatsTutorialIntro::onNarrationFinished() */

void __thiscall
MinigameCopycatsTutorialIntro::onNarrationFinished(MinigameCopycatsTutorialIntro *this)

{
  float fVar1;
  
  if (*(int *)(this + 0x4c) == 1) {
    fVar1 = (float)PVZ_T();
    *(float *)(this + 0x50) = fVar1 + 0.5;
    setState(this,2);
    return;
  }
  if (*(int *)(this + 0x4c) == 2) {
    setState(this,4);
    return;
  }
  return;
}


/* MinigameCopycatsTutorialIntro::onCopycatsSpawn(Sexy::Point const&, int) */

void MinigameCopycatsTutorialIntro::onCopycatsSpawn(Point *param_1,int param_2)

{
  if (*(int *)(param_1 + 0x4c) != 5) {
    setState((MinigameCopycatsTutorialIntro *)param_1,5);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MinigameCopycatsTutorialIntro::gatherPlantlessPlantingRestrictions(Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
MinigameCopycatsTutorialIntro::gatherPlantlessPlantingRestrictions
          (MinigameCopycatsTutorialIntro *this,Point *param_1,vector *param_2)

{
  ResilienceTutorialIntroProperties *pRVar1;
  undefined4 local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x4c) == 4) {
    pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    Sexy::Point::Point((Point *)&local_10,(TPoint *)(pRVar1 + 0x78));
    if ((*(int *)param_1 != local_10) || (*(int *)(param_1 + 4) != local_c)) {
      local_14 = 0x4c;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
                 (PlantingReason *)&local_14);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MinigameCopycatsTutorialIntro::registerForEvents() */

void __thiscall
MinigameCopycatsTutorialIntro::registerForEvents(MinigameCopycatsTutorialIntro *this)

{
  undefined *puVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  long lVar4;
  LevelModuleManager *pLVar5;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
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
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if ((pPVar3 == (PlayerInfo *)0x0) ||
     (cVar2 = PlayerInfo::PlayerHasCompletedTutorial(pPVar3,0x4f), cVar2 == '\0')) {
    lVar4 = LevelModule::getManager();
    FUN_04f604f0(lVar4 + 0x80);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,startIntro);
    Sexy::Delegate0::
    Delegate0<MinigameCopycatsTutorialIntro,void(MinigameCopycatsTutorialIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnIntroStarted(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onEndLevel);
    Sexy::Delegate0::
    Delegate0<MinigameCopycatsTutorialIntro,void(MinigameCopycatsTutorialIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnLevelEnded(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onUpdate);
    Sexy::Delegate0::
    Delegate0<MinigameCopycatsTutorialIntro,void(MinigameCopycatsTutorialIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnUpdate(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,addToRenderQueue);
    Sexy::Delegate1<RenderQueue*>::
    Delegate1<MinigameCopycatsTutorialIntro,void(MinigameCopycatsTutorialIntro::*)(RenderQueue*)>
              ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterAddToRenderQueue(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onGameplayStarted);
    Sexy::Delegate0::
    Delegate0<MinigameCopycatsTutorialIntro,void(MinigameCopycatsTutorialIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnGameplayStarted(pLVar5,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPlantPlanted);
    local_a0 = local_80;
    uStack_98 = uStack_78;
    local_90 = local_70;
    MessageRouter::
    Subscribe<Plant*,Sexy::CBMemberTranslatorX<MinigameCopycatsTutorialIntro,void(MinigameCopycatsTutorialIntro::*)(Plant*)>>
              ((MessageRouter *)puVar1,Message::PlantPlanted,&local_a0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,gatherPlantlessPlantingRestrictions);
    local_b0 = local_58;
    local_c0 = local_68;
    uStack_b8 = uStack_60;
    MessageRouter::
    Subscribe<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<MinigameCopycatsTutorialIntro,void(MinigameCopycatsTutorialIntro::*)(Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
              ((MessageRouter *)puVar1,Message::GatherPlantlessPlantingRestrictions,&local_c0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCopycatsSpawn);
    local_e0 = local_50;
    uStack_d8 = uStack_48;
    local_d0 = local_40;
    MessageRouter::
    Subscribe<Sexy::Point_const&,int,Sexy::CBMemberTranslatorX<MinigameCopycatsTutorialIntro,void(MinigameCopycatsTutorialIntro::*)(Sexy::Point_const&,int)>>
              ((MessageRouter *)puVar1,Message::CopycatsSpawn,&local_e0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

