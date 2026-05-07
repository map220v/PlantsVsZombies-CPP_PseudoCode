// Class: PirateCannonTutorialIntro


/* PirateCannonTutorialIntro::onEndLevel() */

void __thiscall PirateCannonTutorialIntro::onEndLevel(PirateCannonTutorialIntro *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  AnimationMgr::Clear((AnimationMgr *)(this + 0x50));
  if (*(long **)(this + 0x80) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x80) + 0x18))();
    *(undefined8 *)(this + 0x80) = 0;
  }
  return;
}


/* PirateCannonTutorialIntro::addToRenderQueue(RenderQueue*) */

void __thiscall
PirateCannonTutorialIntro::addToRenderQueue(PirateCannonTutorialIntro *this,RenderQueue *param_1)

{
  AnimationMgr::AddToRenderQueue((AnimationMgr *)(this + 0x50),param_1);
  return;
}


/* PirateCannonTutorialIntro::StaticGetClass() */

long * PirateCannonTutorialIntro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PirateCannonTutorialIntro",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PirateCannonTutorialIntro::showTools(bool) */

void __thiscall PirateCannonTutorialIntro::showTools(PirateCannonTutorialIntro *this,bool param_1)

{
  bool bVar1;
  UIWidget *pUVar2;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  RtWeakPtr aRStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIShovel");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UIPlantfood");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_00);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UISunBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_01);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PirateCannonTutorialIntro::startGame() */

void __thiscall PirateCannonTutorialIntro::startGame(PirateCannonTutorialIntro *this)

{
  bool bVar1;
  WaveGenerator *this_00;
  WaveManager *this_01;
  UIWidget *pUVar2;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  float fVar3;
  RtWeakPtr aRStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::StartLevel(*(Board **)(gLawnApp + 0x9f0));
  Board::DestroyAllMowers();
  showTools(this,false);
  this_00 = (WaveGenerator *)Board::GetWaveGenerator(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 != (WaveGenerator *)0x0) {
    WaveGenerator::SpawnNextWaveIn(this_00,2.0);
  }
  this_01 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
  if (this_01 != (WaveManager *)0x0) {
    fVar3 = (float)PVZ_T();
    WaveManager::SetNextWaveTime(this_01,fVar3 + 2.0);
  }
  std::string::string(asStack_10,"UIPauseButton");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    UIWidget::SetVisible(pUVar2,true);
  }
  std::string::string(asStack_10,"UICoinBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_00);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    UIWidget::SetVisible(pUVar2,true);
  }
  std::string::string(asStack_10,"UIChangeSpeedButton");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_01);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    UIWidget::SetVisible(pUVar2,true);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PirateCannonTutorialIntro::setupDaveFailed() */

void __thiscall PirateCannonTutorialIntro::setupDaveFailed(PirateCannonTutorialIntro *this)

{
  CrazyNPCManager *pCVar1;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  std::string::string(asStack_60,"3900");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::Delegate0<PirateCannonTutorialIntro,void(PirateCannonTutorialIntro::*)()>
            (aDStack_38,aCStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar1,asStack_60,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
  Board::DestroyAllZombies(*(Board **)(gLawnApp + 0x9f0));
  AnimationMgr::Clear((AnimationMgr *)(this + 0x50));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PirateCannonTutorialIntro::onStartIntro() */

void __thiscall PirateCannonTutorialIntro::onStartIntro(PirateCannonTutorialIntro *this)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (pRVar2[0x78] == (ResilienceTutorialIntroProperties)0x0) {
    cVar1 = StandardLevelIntro::hasNarration();
  }
  else {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    cVar1 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar3);
    if (cVar1 == '\0') goto LAB_03f172e8;
    cVar1 = StandardLevelIntro::hasNarration();
  }
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0xe0))(this,0);
    return;
  }
LAB_03f172e8:
  (**(code **)(*(long *)this + 0xe8))(this,0,0);
  return;
}


/* PirateCannonTutorialIntro::PirateCannonTutorialIntro() */

void __thiscall
PirateCannonTutorialIntro::PirateCannonTutorialIntro(PirateCannonTutorialIntro *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06796a30;
  AnimationMgr::AnimationMgr((AnimationMgr *)(this + 0x50));
  return;
}


/* PirateCannonTutorialIntro::StaticNew() */

PirateCannonTutorialIntro * PirateCannonTutorialIntro::StaticNew(void)

{
  PirateCannonTutorialIntro *this;
  
  this = ::operator_new(0x88);
  PirateCannonTutorialIntro(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PirateCannonTutorialIntro::setupWaitForCannonFire() */

void __thiscall PirateCannonTutorialIntro::setupWaitForCannonFire(PirateCannonTutorialIntro *this)

{
  bool bVar1;
  string *psVar2;
  UIWidget *this_00;
  string *extraout_x1;
  Board *pBVar3;
  AnimationMgr *pAVar4;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_18,"seagull");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  Board::AddZombieInRow(pBVar3,aRStack_10,2,99,0,1,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  AnimationMgr::Clear((AnimationMgr *)(this + 0x50));
  FUN_03f168d4(this + 0x60);
  pAVar4 = (AnimationMgr *)FUN_03f168e0(*(undefined4 *)(this + 0x60));
  FUN_05478178(aRStack_10,L"[CANNON_TUTORIAL_1]",asStack_18);
  ShowAdvice::Create(aRStack_10,8);
  FUN_05476c50(aRStack_10);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)asStack_18);
  AnimationMgr::Add(pAVar4,(AnimationMgr *)(this + 0x50),aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  std::string::string((string *)aRStack_10,"UIPauseButton");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)aRStack_10,extraout_x1);
  std::string::~string((string *)aRStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_18);
  if (bVar1) {
    this_00 = (UIWidget *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    UIWidget::SetVisible(this_00,true);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PirateCannonTutorialIntro::setupDaveProlog(bool) */

void __thiscall
PirateCannonTutorialIntro::setupDaveProlog(PirateCannonTutorialIntro *this,bool param_1)

{
  bool bVar1;
  uint uVar2;
  string *psVar3;
  CrazyNPCManager *pCVar4;
  UIWidget *this_00;
  string *extraout_x1;
  undefined8 uVar5;
  Board *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_50,"coconutcannon");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  std::string::~string(asStack_50);
  nop();
  uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_50,(RtWeakPtrBase *)aRStack_68);
  Board::AddPlant((Board *)0x0,uVar5,1,2,asStack_50,1,1,0xffffffff,0,1,1,0,0,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  uVar2 = Board::GetPlantfoodMax(this_01);
  Board::SetPlantfoodCount(this_01,uVar2 & 0xff);
  if (param_1) {
    pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string(asStack_60,"4000");
  }
  else {
    pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string(asStack_60,"4000");
  }
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::Delegate0<PirateCannonTutorialIntro,void(PirateCannonTutorialIntro::*)()>
            (aDStack_38,asStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar4,asStack_60,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
  std::string::string(asStack_50,"UIPauseButton");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_50,extraout_x1);
  std::string::~string(asStack_50);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_58);
  if (bVar1) {
    this_00 = (UIWidget *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    UIWidget::SetVisible(this_00,false);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PirateCannonTutorialIntro::setupCannonFired() */

void __thiscall PirateCannonTutorialIntro::setupCannonFired(PirateCannonTutorialIntro *this)

{
  string *psVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_10,"coconutcannon");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
  std::string::~string(asStack_10);
  nop();
  FUN_05478178(asStack_10,L"[CANNON_TUTORIAL_2]",aRStack_18);
  ShowAdvice::Create(asStack_10,9);
  FUN_05476c50(asStack_10);
  nop();
  AnimationMgr::Clear((AnimationMgr *)(this + 0x50));
  FUN_03f168d4(this + 0x60);
  fVar2 = (float)FUN_03f168e0(*(undefined4 *)(this + 0x60));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
  AnimationMgr::Add((AnimationMgr *)(fVar2 + 0.5),(AnimationMgr *)(this + 0x50),asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Board::DestroyAllPlants();
  setState(this,9);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PirateCannonTutorialIntro::setState(PirateCannonTutorialIntro::State) */

void __thiscall PirateCannonTutorialIntro::setState(PirateCannonTutorialIntro *this,int param_2)

{
  int iVar1;
  ShowAdvice *pSVar2;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x4c);
  local_8 = ___stack_chk_guard;
  if (iVar1 != param_2) {
    if (iVar1 == 3) {
      pSVar2 = *(ShowAdvice **)(this + 0x80);
      FUN_05478178(auStack_10,&DAT_056f11a8,auStack_18);
      ShowAdvice::SetLabel(pSVar2,auStack_10,0);
      FUN_05476c50(auStack_10);
      nop();
      iVar1 = *(int *)(this + 0x4c);
      *(int *)(this + 0x4c) = param_2;
    }
    else {
      if (iVar1 == 8) {
        Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
        iVar1 = *(int *)(this + 0x4c);
      }
      *(int *)(this + 0x4c) = param_2;
    }
    if (param_2 - 2U < 8) {
                    /* WARNING: Could not recover jumptable at 0x03f17bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)*(short *)(&DAT_05752a5c + (ulong)(param_2 - 2) * 2) * 4 + 0x3f17bd0))(iVar1)
      ;
      return;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PirateCannonTutorialIntro::initializeModule() */

void __thiscall PirateCannonTutorialIntro::initializeModule(PirateCannonTutorialIntro *this)

{
  ShowAdvice *this_00;
  
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  setState(this,0);
  this_00 = ::operator_new(0x668);
  ShowAdvice::ShowAdvice(this_00);
  *(ShowAdvice **)(this + 0x80) = this_00;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PirateCannonTutorialIntro::startLevelIntro(StandardLevelIntro::PanType, bool) */

void PirateCannonTutorialIntro::startLevelIntro(PirateCannonTutorialIntro *param_1)

{
  bool bVar1;
  UIWidget *pUVar2;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  RtWeakPtr aRStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::PutIntoTutorialMode(*(Board **)(gLawnApp + 0x9f0));
  setState(param_1,1);
  std::string::string(asStack_10,"UIPauseButton");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UICoinBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_00);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UIChangeSpeedButton");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_01);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    UIWidget::SetVisible(pUVar2,false);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PirateCannonTutorialIntro::onUpdate() */

void __thiscall PirateCannonTutorialIntro::onUpdate(PirateCannonTutorialIntro *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  ProfileMgr *this_00;
  PlayerInfo *pPVar5;
  int iVar6;
  float fVar7;
  
  iVar6 = *(int *)(this + 0x4c);
  do {
    switch(iVar6) {
    case 1:
      pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      if (pRVar4[0x78] == (ResilienceTutorialIntroProperties)0x0) {
LAB_03f18098:
        fVar7 = (float)FUN_03f168e0(*(undefined4 *)(this + 0x60));
        if (1.5 < fVar7) {
          setState(this,6);
          iVar3 = *(int *)(this + 0x4c);
          goto LAB_03f18068;
        }
        goto LAB_03f18064;
      }
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      cVar2 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar5);
      if (cVar2 != '\0') goto LAB_03f18098;
      setState(this,2);
      iVar3 = *(int *)(this + 0x4c);
      goto LAB_03f18068;
    default:
      goto switchD_03f18018_caseD_2;
    case 6:
      fVar7 = (float)FUN_03f168e0(*(undefined4 *)(this + 0x60));
      if (0.5 < fVar7) {
        setState(this,7);
        goto switchD_03f18018_caseD_7;
      }
      break;
    case 7:
switchD_03f18018_caseD_7:
      fVar7 = (float)FUN_03f168e0(*(undefined4 *)(this + 0x60));
      break;
    case 8:
      goto switchD_03f18018_caseD_8;
    }
    if (1.0 < fVar7) {
      setState(this,8);
switchD_03f18018_caseD_8:
      fVar7 = (float)FUN_03f168e0(*(undefined4 *)(this + 0x60));
    }
    if (1.82 < fVar7) {
      setState(this,9);
    }
LAB_03f18064:
    iVar3 = *(int *)(this + 0x4c);
LAB_03f18068:
    bVar1 = iVar6 != iVar3;
    iVar6 = iVar3;
  } while (bVar1);
switchD_03f18018_caseD_2:
  AnimationMgr::Update((AnimationMgr *)(this + 0x50));
  return;
}


/* PirateCannonTutorialIntro::onNarrationFinished() */

void __thiscall PirateCannonTutorialIntro::onNarrationFinished(PirateCannonTutorialIntro *this)

{
  if (*(int *)(this + 0x4c) == 2) {
    setState(this,3);
    return;
  }
  if (*(int *)(this + 0x4c) != 5) {
    return;
  }
  setState(this,2);
  return;
}


/* PirateCannonTutorialIntro::onZombieDestroyed(Zombie*) */

void PirateCannonTutorialIntro::onZombieDestroyed(Zombie *param_1)

{
  if (*(int *)(param_1 + 0x4c) != 3) {
    return;
  }
  setState((PirateCannonTutorialIntro *)param_1,4);
  return;
}


/* PirateCannonTutorialIntro::onPlantDied(Plant*) */

void PirateCannonTutorialIntro::onPlantDied(Plant *param_1)

{
  if ((*(int *)(param_1 + 0x4c) != 4) && (*(int *)(param_1 + 0x4c) != 9)) {
    setState((PirateCannonTutorialIntro *)param_1,5);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PirateCannonTutorialIntro::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
PirateCannonTutorialIntro::AddResourceRequirements(PirateCannonTutorialIntro *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  std::string::string(asStack_10,"PlantCoconutCannon");
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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PirateCannonTutorialIntro::registerForEvents() */

void __thiscall PirateCannonTutorialIntro::registerForEvents(PirateCannonTutorialIntro *this)

{
  undefined *puVar1;
  long lVar2;
  LevelModuleManager *pLVar3;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
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
  
  local_8 = ___stack_chk_guard;
  lVar2 = LevelModule::getManager();
  FUN_03f168e4(lVar2 + 0x80);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onStartIntro);
  Sexy::Delegate0::Delegate0<PirateCannonTutorialIntro,void(PirateCannonTutorialIntro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnIntroStarted(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<PirateCannonTutorialIntro,void(PirateCannonTutorialIntro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onEndLevel);
  Sexy::Delegate0::Delegate0<PirateCannonTutorialIntro,void(PirateCannonTutorialIntro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::
  Delegate1<PirateCannonTutorialIntro,void(PirateCannonTutorialIntro::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar3,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDestroyed);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<PirateCannonTutorialIntro,void(PirateCannonTutorialIntro::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDied);
  local_b0 = local_50;
  uStack_a8 = uStack_48;
  local_a0 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PirateCannonTutorialIntro,void(PirateCannonTutorialIntro::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PirateCannonTutorialIntro::~PirateCannonTutorialIntro() */

void __thiscall
PirateCannonTutorialIntro::~PirateCannonTutorialIntro(PirateCannonTutorialIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06796a30;
  AnimationMgr::~AnimationMgr((AnimationMgr *)(this + 0x50));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* PirateCannonTutorialIntro::~PirateCannonTutorialIntro() */

void __thiscall
PirateCannonTutorialIntro::~PirateCannonTutorialIntro(PirateCannonTutorialIntro *this)

{
  ~PirateCannonTutorialIntro(this);
  AK::FreeHook(this);
  return;
}

