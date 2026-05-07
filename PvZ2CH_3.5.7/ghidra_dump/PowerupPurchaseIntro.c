// Class: PowerupPurchaseIntro


/* PowerupPurchaseIntro::initializeModule() */

void __thiscall PowerupPurchaseIntro::initializeModule(PowerupPurchaseIntro *this)

{
  StandardLevelIntro::initializeModule((StandardLevelIntro *)this);
  this[0x4c] = (PowerupPurchaseIntro)0x0;
  return;
}


/* PowerupPurchaseIntro::suppressReadySetGo() const */

byte PowerupPurchaseIntro::suppressReadySetGo(void)

{
  byte bVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  bVar1 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar2);
  return bVar1 ^ 1;
}


/* PowerupPurchaseIntro::onLevelEnded() */

void PowerupPurchaseIntro::onLevelEnded(void)

{
  return;
}


/* PowerupPurchaseIntro::onHijackedReadySetPlantFinished() */

void PowerupPurchaseIntro::onHijackedReadySetPlantFinished(void)

{
  Board::StartLevel(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* PowerupPurchaseIntro::PowerupPurchaseIntro() */

void __thiscall PowerupPurchaseIntro::PowerupPurchaseIntro(PowerupPurchaseIntro *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06832340;
  return;
}


/* PowerupPurchaseIntro::StaticNew() */

PowerupPurchaseIntro * PowerupPurchaseIntro::StaticNew(void)

{
  PowerupPurchaseIntro *this;
  
  this = ::operator_new(0x58);
  PowerupPurchaseIntro(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupPurchaseIntro::StaticClassInit() */

void PowerupPurchaseIntro::StaticClassInit(void)

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
    std::string::string(asStack_10,"PowerupPurchaseIntro");
    (*pcVar2)(plVar1,asStack_10,FUN_0430bca8,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupPurchaseIntro::StaticGetClass() */

long * PowerupPurchaseIntro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PowerupPurchaseIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupPurchaseIntro::~PowerupPurchaseIntro() */

void __thiscall PowerupPurchaseIntro::~PowerupPurchaseIntro(PowerupPurchaseIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06832340;
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* PowerupPurchaseIntro::~PowerupPurchaseIntro() */

void __thiscall PowerupPurchaseIntro::~PowerupPurchaseIntro(PowerupPurchaseIntro *this)

{
  ~PowerupPurchaseIntro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupPurchaseIntro::onDraw(Sexy::Graphics*) */

void __thiscall PowerupPurchaseIntro::onDraw(PowerupPurchaseIntro *this,Graphics *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  int local_28;
  int local_24;
  GraphicsAutoState aGStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  fVar3 = *(float *)(this + 0x50);
  local_28 = 0x7f;
  if (this[0x4d] != (PowerupPurchaseIntro)0x0) {
    local_28 = 0;
  }
  local_24 = 0;
  if (this[0x4d] != (PowerupPurchaseIntro)0x0) {
    local_24 = 0x7f;
  }
  uVar2 = PVZ_T();
  iVar1 = CurveLerp<int>(fVar3,fVar3 + 0.5,uVar2,&local_28,&local_24,5);
  Sexy::Insets::Insets(aIStack_18,0,0,0,iVar1);
  Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
  Sexy::Graphics::PushState(param_1);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  Sexy::Graphics::FillRect(param_1,(TRect *)(gLawnApp + 0x71c));
  Sexy::Graphics::PopState(param_1);
  if ((iVar1 == local_24) && (this[0x4d] == (PowerupPurchaseIntro)0x0)) {
    this[0x4c] = (PowerupPurchaseIntro)0x0;
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupPurchaseIntro::begin() */

void __thiscall PowerupPurchaseIntro::begin(PowerupPurchaseIntro *this)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIWidget *pUVar1;
  CrazyNPCManager *pCVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  Board *this_02;
  undefined4 uVar4;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::PutIntoTutorialMode(*(Board **)(gLawnApp + 0x9f0));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_50,"powerupwizardfinger");
  PlayerInfo::SetPowerupUnlockState(this_01,asStack_50,true);
  std::string::~string(asStack_50);
  nop();
  this_02 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_50,"powerupwizardfinger");
  Board::AddPowerup(this_02,asStack_50);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"UIPowerupHolder");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
  UIWidget::SetVisible(pUVar1,false);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"UIGemBank");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
  std::string::~string(asStack_50);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,true);
    UIWidget::SetClickable(pUVar1,false);
  }
  std::string::string(asStack_50,"UIPauseButton");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
  std::string::~string(asStack_50);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetClickable(pUVar1,false);
  }
  std::string::string(asStack_50,"UIChangeSpeedButton");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
  std::string::~string(asStack_50);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,true);
    UIWidget::SetClickable(pUVar1,false);
  }
  pCVar2 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTutNarrationFinished);
  Sexy::Delegate0::Delegate0<PowerupPurchaseIntro,void(PowerupPurchaseIntro::*)()>
            (aDStack_38,asStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar2,pRVar3 + 0x78,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  this[0x4c] = (PowerupPurchaseIntro)0x1;
  this[0x4d] = (PowerupPurchaseIntro)0x1;
  uVar4 = PVZ_T();
  *(undefined4 *)(this + 0x50) = uVar4;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupPurchaseIntro::onStandardIntroComplete() */

void __thiscall PowerupPurchaseIntro::onStandardIntroComplete(PowerupPurchaseIntro *this)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar1 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar2);
  if (cVar1 == '\0') {
    begin(this);
    return;
  }
  StandardLevelIntro::onStandardIntroComplete();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupPurchaseIntro::addToRenderQueue(RenderQueue*) */

void __thiscall
PowerupPurchaseIntro::addToRenderQueue(PowerupPurchaseIntro *this,RenderQueue *param_1)

{
  undefined4 uVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x4c] != (PowerupPurchaseIntro)0x0) {
    uVar1 = Board::MakeRenderOrder(600000,0,0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onDraw);
    Sexy::Delegate1<Sexy::Graphics*>::
    Delegate1<PowerupPurchaseIntro,void(PowerupPurchaseIntro::*)(Sexy::Graphics*)>
              (aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,uVar1,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupPurchaseIntro::onTutNarrationFinished() */

void __thiscall PowerupPurchaseIntro::onTutNarrationFinished(PowerupPurchaseIntro *this)

{
  ResourceInfo *pRVar1;
  UIWidget *pUVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 local_54;
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                     ((RtWeakPtr *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
  local_54 = FUN_0430b680(*(undefined4 *)(pRVar1 + 0x10));
  pcVar3 = *(code **)(*(long *)this + 0xa0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onHijackedReadySetPlantFinished);
  Sexy::Delegate0::Delegate0<PowerupPurchaseIntro,void(PowerupPurchaseIntro::*)()>
            (aDStack_38,asStack_50);
  (*pcVar3)(this,pRVar1,&local_54,aDStack_38,0);
  this[0x4d] = (PowerupPurchaseIntro)0x0;
  uVar4 = PVZ_T();
  *(undefined4 *)(this + 0x50) = uVar4;
  std::string::string(asStack_50,"UIPowerupHolder");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
  UIWidget::SetVisible(pUVar2,true);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"UIGemBank");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
  std::string::~string(asStack_50);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetClickable(pUVar2,true);
  }
  std::string::string(asStack_50,"UIPauseButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
  std::string::~string(asStack_50);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetClickable(pUVar2,true);
  }
  std::string::string(asStack_50,"UIChangeSpeedButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
  std::string::~string(asStack_50);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetClickable(pUVar2,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupPurchaseIntro::registerForEvents() */

void __thiscall PowerupPurchaseIntro::registerForEvents(PowerupPurchaseIntro *this)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  LevelModuleManager *pLVar3;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StandardLevelIntro::registerForEvents((StandardLevelIntro *)this);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar1 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar2);
  if (cVar1 == '\0') {
    pLVar3 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onLevelEnded);
    Sexy::Delegate0::Delegate0<PowerupPurchaseIntro,void(PowerupPurchaseIntro::*)()>
              (aDStack_38,aCStack_50);
    LevelModuleManager::RegisterOnLevelEnded(pLVar3,aDStack_38);
    pLVar3 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,addToRenderQueue);
    Sexy::Delegate1<RenderQueue*>::
    Delegate1<PowerupPurchaseIntro,void(PowerupPurchaseIntro::*)(RenderQueue*)>
              ((Delegate1<RenderQueue*> *)aDStack_38,aCStack_50);
    LevelModuleManager::RegisterAddToRenderQueue(pLVar3,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

