// Class: JoustGameModule


/* JoustGameModule::preventSave() */

undefined8 JoustGameModule::preventSave(void)

{
  return 1;
}


/* JoustGameModule::onLastStandInit() */

void __thiscall JoustGameModule::onLastStandInit(JoustGameModule *this)

{
  this[0x2d] = (JoustGameModule)0x1;
  return;
}


/* JoustGameModule::onLastStandStart() */

void __thiscall JoustGameModule::onLastStandStart(JoustGameModule *this)

{
  this[0x2d] = (JoustGameModule)0x0;
  return;
}


/* JoustGameModule::onGameplayEnded() */

void JoustGameModule::onGameplayEnded(void)

{
  return;
}


/* JoustGameModule::onScoreUpdated(int, float) */

void JoustGameModule::onScoreUpdated(int param_1,float param_2)

{
  int in_w1;
  
  if (*(AdaptorJoustPlayMeterHUD **)((ulong)(uint)param_1 + 0x18) != (AdaptorJoustPlayMeterHUD *)0x0
     ) {
    AdaptorJoustPlayMeterHUD::SetLeftScore
              (*(AdaptorJoustPlayMeterHUD **)((ulong)(uint)param_1 + 0x18),in_w1);
    return;
  }
  return;
}


/* JoustGameModule::onReplayScoreUpdated(int, float) */

void JoustGameModule::onReplayScoreUpdated(int param_1,float param_2)

{
  int in_w1;
  
  if (*(AdaptorJoustPlayMeterHUD **)((ulong)(uint)param_1 + 0x18) != (AdaptorJoustPlayMeterHUD *)0x0
     ) {
    AdaptorJoustPlayMeterHUD::SetRightScore
              (*(AdaptorJoustPlayMeterHUD **)((ulong)(uint)param_1 + 0x18),in_w1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustGameModule::drawJoustMeter(Sexy::Graphics*) */

void __thiscall JoustGameModule::drawJoustMeter(JoustGameModule *this,Graphics *param_1)

{
  JoustGameModule JVar1;
  HotUIAdaptor *this_00;
  long *plVar2;
  undefined4 local_18;
  undefined4 local_14;
  JoustGameModule local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)(this + 0x18) != 0) && (JVar1 = this[0x2d], JVar1 == (JoustGameModule)0x0)) {
    Sexy::Graphics::PushState(param_1);
    this_00 = *(HotUIAdaptor **)(this + 0x18);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    plVar2 = (long *)HotUIAdaptor::GetEntryPointWidget(this_00);
    Sexy::Graphics::Translate(param_1,(int)plVar2[9],*(int *)((long)plVar2 + 0x4c));
    local_18 = 0xc;
    local_14 = 0xc;
    local_10 = JVar1;
    (**(code **)(*plVar2 + 0x130))(plVar2,&local_18,param_1);
    Sexy::Graphics::PopState(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustGameModule::StaticClassInit() */

void JoustGameModule::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantPowerData");
    (*pcVar3)(plVar2,asStack_10,FUN_0387a2c4,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"JoustGameModule");
    (*pcVar3)(plVar2,asStack_10,FUN_0387b7a8,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustGameModule::StaticGetClass() */

long * JoustGameModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"JoustGameModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustGameModule::AddTime(float) */

void __thiscall JoustGameModule::AddTime(JoustGameModule *this,float param_1)

{
  float fVar1;
  
  if (this[0x20] != (JoustGameModule)0x0) {
    fVar1 = *(float *)(this + 0x24);
    *(float *)(this + 0x24) = param_1 + fVar1;
    AdaptorJoustPlayMeterHUD::SetTimer
              (*(AdaptorJoustPlayMeterHUD **)(this + 0x18),(int)(param_1 + fVar1));
    *(undefined4 *)(this + 0x30) = 0x41200000;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustGameModule::hideCoinBank() */

void JoustGameModule::hideCoinBank(void)

{
  UIWidget *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UICoinBank");
  this = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this != (UIWidget *)0x0) {
    UIWidget::SetVisible(this,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustGameModule::onSeedChooserFinalized() */

void JoustGameModule::onSeedChooserFinalized(void)

{
  UIWidget *this;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UICoinBank");
  this = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this != (UIWidget *)0x0) {
    UIWidget::SetVisible(this,false);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustGameModule::ForfeitLevel() */

void JoustGameModule::ForfeitLevel(void)

{
  LevelScoringSubsystem *this;
  
  this = (LevelScoringSubsystem *)JoustUtils::GetScoringSystem();
  LevelScoringSubsystem::ClearCurrentScore(this);
  nop();
  Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),0);
  return;
}


/* JoustGameModule::endLevel() */

void JoustGameModule::endLevel(void)

{
  char cVar1;
  long in_x0;
  
  nop();
  cVar1 = FUN_0387a220(*(undefined4 *)(*(long *)(in_x0 + 0x18) + 0x120),
                       *(undefined4 *)(*(long *)(in_x0 + 0x18) + 0x124));
  if (cVar1 == '\0') {
    nop();
    Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),0);
    return;
  }
  nop();
  Board::PlayerWon(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* JoustGameModule::CheatLoseLevel() */

void __thiscall JoustGameModule::CheatLoseLevel(JoustGameModule *this)

{
  LevelReplaySubsystem *this_00;
  
  *(undefined4 *)(this + 0x24) = 0;
  this[0x2c] = (JoustGameModule)0x1;
  this_00 = (LevelReplaySubsystem *)JoustUtils::GetOpponentReplay();
  if (this_00 != (LevelReplaySubsystem *)0x0) {
    (**(code **)(*(long *)this_00 + 0x98))();
    LevelReplaySubsystem::CheatSetCurrentScore(this_00,0x92f130);
  }
  endLevel();
  return;
}


/* JoustGameModule::CheatWinLevel(float) */

void __thiscall JoustGameModule::CheatWinLevel(JoustGameModule *this,float param_1)

{
  int iVar1;
  LevelReplaySubsystem *this_00;
  LevelScoringSubsystem *this_01;
  
  this[0x2c] = (JoustGameModule)0x1;
  *(undefined4 *)(this + 0x24) = 0;
  this_00 = (LevelReplaySubsystem *)JoustUtils::GetOpponentReplay();
  if (this_00 != (LevelReplaySubsystem *)0x0) {
    (**(code **)(*(long *)this_00 + 0x98))();
    LevelReplaySubsystem::CheatSetCurrentScore(this_00,1000);
  }
  this_01 = (LevelScoringSubsystem *)JoustUtils::GetScoringSystem();
  iVar1 = FUN_0387a2a4(*(undefined4 *)(this_01 + 0x14));
  if (0 < iVar1) {
    endLevel();
    return;
  }
  LevelScoringSubsystem::CheatAddScore(this_01,(int)((param_1 + 1.0) * 1000.0 + 1.0));
  endLevel();
  return;
}


/* JoustGameModule::GetMaxLevelTime() */

long __thiscall JoustGameModule::GetMaxLevelTime(JoustGameModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return (long)*(float *)(pRVar1 + 0x40);
}


/* JoustGameModule::initLevelTimer() */

void __thiscall JoustGameModule::initLevelTimer(JoustGameModule *this)

{
  long lVar1;
  float fVar2;
  
  lVar1 = GetMaxLevelTime(this);
  fVar2 = (float)lVar1;
  *(float *)(this + 0x24) = fVar2;
  this[0x20] = (JoustGameModule)(0.0 < fVar2);
  AdaptorJoustPlayMeterHUD::SetTimerVisible(*(AdaptorJoustPlayMeterHUD **)(this + 0x18),0.0 < fVar2)
  ;
  if (this[0x20] == (JoustGameModule)0x0) {
    return;
  }
  AdaptorJoustPlayMeterHUD::SetTimer
            (*(AdaptorJoustPlayMeterHUD **)(this + 0x18),(int)*(float *)(this + 0x24));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustGameModule::addToUIRenderQueue(RenderQueue*) */

void __thiscall JoustGameModule::addToUIRenderQueue(JoustGameModule *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,drawJoustMeter);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<JoustGameModule,void(JoustGameModule::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,700000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustGameModule::CalcTotalPlantPower() */

void __thiscall JoustGameModule::CalcTotalPlantPower(JoustGameModule *this)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  JoustPlantPowerConfig *this_00;
  int iVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar4 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x38));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x38));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (JoustPlantPowerConfig *)LawnApp::GetJoustPlantPowerConfig(gLawnApp);
    iVar2 = JoustPlantPowerConfig::GetTargetPlantPower(this_00,piVar3[1],*piVar3,SUB41(piVar3[2],0))
    ;
    iVar4 = iVar4 + iVar2;
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


/* JoustGameModule::JoustGameModule() */

void __thiscall JoustGameModule::JoustGameModule(JoustGameModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  this[0x20] = (JoustGameModule)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x2c] = (JoustGameModule)0x0;
  *(undefined ***)this = &PTR_GetModuleClass_066ae010;
  this[0x2d] = (JoustGameModule)0x0;
  *(undefined4 *)(this + 0x24) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  return;
}


/* JoustGameModule::StaticNew() */

JoustGameModule * JoustGameModule::StaticNew(void)

{
  JoustGameModule *this;
  
  this = ::operator_new(0x50);
  JoustGameModule(this);
  return this;
}


/* JoustGameModule::~JoustGameModule() */

void __thiscall JoustGameModule::~JoustGameModule(JoustGameModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066ae010;
  if (*(long *)(this + 0x18) != 0) {
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x68))(*(long **)(gLawnApp + 0x360));
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 0x18))();
      *(undefined8 *)(this + 0x18) = 0;
    }
  }
  std::vector<PlantPowerData,std::allocator<PlantPowerData>>::~vector
            ((vector<PlantPowerData,std::allocator<PlantPowerData>> *)(this + 0x38));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* JoustGameModule::~JoustGameModule() */

void __thiscall JoustGameModule::~JoustGameModule(JoustGameModule *this)

{
  ~JoustGameModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustGameModule::initializeModule() */

void JoustGameModule::initializeModule(void)

{
  char cVar1;
  int iVar2;
  JoustGameModule *in_x0;
  LevelReplaySubsystem *pLVar3;
  undefined8 uVar4;
  wchar16 *pwVar5;
  GeneratedLevelReplaySubsystem *pGVar6;
  LineBreakCategory *pLVar7;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  *(undefined8 *)(in_x0 + 0x18) = 0;
  *(undefined4 *)(in_x0 + 0x30) = 0x41200000;
  local_8 = ___stack_chk_guard;
  Board::CreateGameSubSystem<LevelRecordSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  cVar1 = JoustUtils::HasLevelHumanReplay();
  if (cVar1 != '\0') {
    pwVar5 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar7 = aLStack_18;
    std::string::string(asStack_10,"ForceGeneratedPlayback");
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar5,(wchar16 *)asStack_10,pLVar7,in_x3,in_x4);
    std::string::~string(asStack_10);
    nop();
    if (cVar1 == '\0') {
      Board::CreateGameSubSystem<SavedLevelReplaySubsystem>(*(Board **)(gLawnApp + 0x9f0));
      goto LAB_0387b638;
    }
  }
  Board::CreateGameSubSystem<GeneratedLevelReplaySubsystem>(*(Board **)(gLawnApp + 0x9f0));
  iVar2 = JoustUtils::PlayerGetLeague();
  if (iVar2 < 2) {
    pGVar6 = Board::FindGameSubSystem<GeneratedLevelReplaySubsystem>(*(Board **)(gLawnApp + 0x9f0));
    FUN_0387a53c(pGVar6 + 0xa4);
  }
LAB_0387b638:
  pLVar3 = Board::FindGameSubSystem<LevelReplaySubsystem>(*(Board **)(gLawnApp + 0x9f0));
  uVar4 = GetMaxLevelTime(in_x0);
  FUN_0387a2a8(pLVar3 + 0x20,uVar4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustGameModule::playCountdownSound(int) */

void __thiscall JoustGameModule::playCountdownSound(JoustGameModule *this,int param_1)

{
  string *psVar1;
  
  psVar1 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(psVar1,&DAT_06ab5720 + (long)param_1 * 8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustGameModule::onGameplayUpdate() */

void JoustGameModule::onGameplayUpdate(void)

{
  char cVar1;
  JoustGameModule *in_x0;
  wchar16 *pwVar2;
  float *pfVar3;
  LineBreakCategory *pLVar4;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  float fVar5;
  LineBreakCategory aLStack_38 [8];
  LineBreakCategory aLStack_30 [8];
  LineBreakCategory aLStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((in_x0[0x20] != (JoustGameModule)0x0) &&
     (cVar1 = FUN_0387a2a0(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x887)), cVar1 != '\0')) {
    fVar5 = (float)PVZ_Dt();
    *(float *)(in_x0 + 0x24) = *(float *)(in_x0 + 0x24) - fVar5;
    local_10[0] = 0.0;
    pfVar3 = eastl::max_alt<float>(local_10,(float *)(in_x0 + 0x24));
    fVar5 = *pfVar3;
    *(float *)(in_x0 + 0x24) = fVar5;
    AdaptorJoustPlayMeterHUD::SetTimer(*(AdaptorJoustPlayMeterHUD **)(in_x0 + 0x18),(int)fVar5);
    if (*(float *)(in_x0 + 0x24) <= 0.0) {
      endLevel();
    }
    else if (*(float *)(in_x0 + 0x24) <= *(float *)(in_x0 + 0x30)) {
      playCountdownSound(in_x0,(int)(10.0 - *(float *)(in_x0 + 0x30)));
      *(float *)(in_x0 + 0x30) = *(float *)(in_x0 + 0x30) - 1.0;
    }
  }
  pwVar2 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  pLVar4 = aLStack_38;
  std::string::string(asStack_20,"FreePlanting");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar2,(wchar16 *)asStack_20,pLVar4,in_x3,in_x4);
  if (cVar1 == '\0') {
    pwVar2 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar4 = aLStack_30;
    std::string::string(asStack_18,"InvinciblePlants");
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar2,(wchar16 *)asStack_18,pLVar4,in_x3,in_x4);
    if (cVar1 == '\0') {
      pwVar2 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
      pLVar4 = aLStack_28;
      std::string::string((string *)local_10,"UnlimitedPlantfood");
      cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                        (pwVar2,(wchar16 *)local_10,pLVar4,in_x3,in_x4);
      std::string::~string((string *)local_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      std::string::~string(asStack_20);
      nop();
      if (cVar1 == '\0') goto LAB_0387bbdc;
    }
    else {
      std::string::~string(asStack_18);
      nop();
      std::string::~string(asStack_20);
      nop();
    }
  }
  else {
    std::string::~string(asStack_20);
    nop();
  }
  in_x0[0x2c] = (JoustGameModule)0x1;
LAB_0387bbdc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustGameModule::savePlantPowerData() */

void __thiscall JoustGameModule::savePlantPowerData(JoustGameModule *this)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  UINewPVPTopZombieQueue *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar5;
  int iVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  int local_18;
  int local_14;
  undefined1 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<PlantPowerData,std::allocator<PlantPowerData>>::clear
            ((vector<PlantPowerData,std::allocator<PlantPowerData>> *)(this + 0x38));
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 != (UINewPVPTopZombieQueue *)0x0) {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    cVar2 = FUN_0387a2b4(this_00[0x199]);
    if (0 < cVar2) {
      iVar6 = 0;
      do {
        iVar1 = iVar6 + 1;
        UINewPVPTopZombieQueue::gettItem(this_00,iVar6);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        SeedPacket::GetPlantType();
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18)
        ;
        iVar6 = *(int *)(lVar5 + 0xd0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        if (iVar6 < 0) {
          iVar6 = 0;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        SeedPacket::GetPlantType();
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18)
        ;
        iVar4 = PlayerInfo::GetPlantStarLevel(this_02,(string *)(lVar5 + 8),false);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        if (iVar4 < 1) {
          iVar4 = 1;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        SeedPacket::GetPlantType();
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18)
        ;
        uVar3 = PlayerInfo::IsPlantAvatarUnLocked(this_02,lVar5 + 8,0,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        DaveClubBonus::DaveClubBonus((DaveClubBonus *)&local_18);
        local_18 = iVar6;
        local_14 = iVar4;
        local_10 = uVar3;
        std::vector<PlantPowerData,std::allocator<PlantPowerData>>::push_back
                  ((vector<PlantPowerData,std::allocator<PlantPowerData>> *)(this + 0x38),
                   (PlantPowerData *)&local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        iVar6 = iVar1;
      } while (cVar2 != iVar1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustGameModule::onGameplayStarted() */

void __thiscall JoustGameModule::onGameplayStarted(JoustGameModule *this)

{
  int iVar1;
  bool bVar2;
  UIWidget *pUVar3;
  AdaptorJoustPlayMeterHUD *pAVar4;
  long lVar5;
  long *plVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  hideCoinBank();
  std::string::string(asStack_10,"UIPowerupHolder");
  pUVar3 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  UIWidget::SetVisible(pUVar3,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIGemBank");
  pUVar3 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  UIWidget::SetVisible(pUVar3,false);
  std::string::~string(asStack_10);
  nop();
  pAVar4 = ::operator_new(0x148);
  AdaptorJoustPlayMeterHUD::AdaptorJoustPlayMeterHUD(pAVar4);
  *(AdaptorJoustPlayMeterHUD **)(this + 0x18) = pAVar4;
  HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)pAVar4);
  AdaptorJoustPlayMeterHUD::SetLeftScore(*(AdaptorJoustPlayMeterHUD **)(this + 0x18),0);
  AdaptorJoustPlayMeterHUD::SetRightScore(*(AdaptorJoustPlayMeterHUD **)(this + 0x18),0);
  pAVar4 = *(AdaptorJoustPlayMeterHUD **)(this + 0x18);
  lVar5 = JoustUtils::GetLocalPlayerData();
  iVar1 = *(int *)(lVar5 + 0xc);
  lVar5 = JoustUtils::GetCurrentMatch();
  AdaptorJoustPlayMeterHUD::SetAvatarIndices(pAVar4,iVar1,*(int *)(lVar5 + 0x38));
  plVar6 = (long *)HotUIAdaptor::GetEntryPointWidget(*(HotUIAdaptor **)(this + 0x18));
  (**(code **)(*plVar6 + 0x158))(plVar6,0);
  initLevelTimer(this);
  std::string::string(asStack_10,"UIProgressBar");
  plVar6 = (long *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (plVar6 != (long *)0x0) {
    ToolPacketData::GetProps();
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    if (bVar2) {
      (**(code **)(*plVar6 + 0x48))(plVar6);
    }
  }
  std::string::string(asStack_10,"UIRenaiProgressBar");
  plVar6 = (long *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (plVar6 != (long *)0x0) {
    ToolPacketData::GetProps();
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    if (bVar2) {
      (**(code **)(*plVar6 + 0x48))(plVar6);
    }
  }
  savePlantPowerData(this);
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustGameModule::registerForEvents() */

void __thiscall JoustGameModule::registerForEvents(JoustGameModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSeedChooserFinalized);
  Sexy::Delegate0::Delegate0<JoustGameModule,void(JoustGameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::SeedChooserSelectionFinalized,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<JoustGameModule,void(JoustGameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<JoustGameModule,void(JoustGameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayUpdate);
  Sexy::Delegate0::Delegate0<JoustGameModule,void(JoustGameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayUpdate(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLastStandInit);
  Sexy::Delegate0::Delegate0<JoustGameModule,void(JoustGameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LastStandLevelInitializing,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLastStandStart);
  Sexy::Delegate0::Delegate0<JoustGameModule,void(JoustGameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LastStandLevelStarting,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addToUIRenderQueue);
  Sexy::Delegate1<RenderQueue*>::Delegate1<JoustGameModule,void(JoustGameModule::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterAddToUIRenderQueue(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,preventSave);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<JoustGameModule,bool(JoustGameModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterCanPreventSave(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onScoreUpdated);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<int,float,Sexy::CBMemberTranslatorX<JoustGameModule,void(JoustGameModule::*)(int,float)>>
            ((MessageRouter *)puVar1,Message::ScoreUpdated,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReplayScoreUpdated);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<int,float,Sexy::CBMemberTranslatorX<JoustGameModule,void(JoustGameModule::*)(int,float)>>
            ((MessageRouter *)puVar1,Message::ReplayScoreUpdated,&local_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

