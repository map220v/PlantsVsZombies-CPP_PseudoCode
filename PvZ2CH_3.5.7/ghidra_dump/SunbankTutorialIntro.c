// Class: SunbankTutorialIntro


/* SunbankTutorialIntro::initializeModule() */

void __thiscall SunbankTutorialIntro::initializeModule(SunbankTutorialIntro *this)

{
  StandardLevelIntro::initializeModule((StandardLevelIntro *)this);
  this[0x4c] = (SunbankTutorialIntro)0x1;
  return;
}


/* SunbankTutorialIntro::onEndLevel() */

void __thiscall SunbankTutorialIntro::onEndLevel(SunbankTutorialIntro *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* SunbankTutorialIntro::SunbankTutorialIntro() */

void __thiscall SunbankTutorialIntro::SunbankTutorialIntro(SunbankTutorialIntro *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06851bc0;
  return;
}


/* SunbankTutorialIntro::StaticNew() */

SunbankTutorialIntro * SunbankTutorialIntro::StaticNew(void)

{
  SunbankTutorialIntro *this;
  
  this = ::operator_new(0x50);
  SunbankTutorialIntro(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunbankTutorialIntro::StaticClassInit() */

void SunbankTutorialIntro::StaticClassInit(void)

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
    std::string::string(asStack_10,"SunbankTutorialIntro");
    (*pcVar2)(plVar1,asStack_10,FUN_0449c010,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SunbankTutorialIntro::StaticGetClass() */

long * SunbankTutorialIntro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SunbankTutorialIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SunbankTutorialIntro::~SunbankTutorialIntro() */

void __thiscall SunbankTutorialIntro::~SunbankTutorialIntro(SunbankTutorialIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06851bc0;
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* SunbankTutorialIntro::~SunbankTutorialIntro() */

void __thiscall SunbankTutorialIntro::~SunbankTutorialIntro(SunbankTutorialIntro *this)

{
  ~SunbankTutorialIntro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunbankTutorialIntro::showUI(bool) */

void __thiscall SunbankTutorialIntro::showUI(SunbankTutorialIntro *this,bool param_1)

{
  bool bVar1;
  UIWidget *pUVar2;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  string *extraout_x1_04;
  string *extraout_x1_05;
  RtWeakPtr aRStack_48 [8];
  RtWeakPtr aRStack_40 [8];
  RtWeakPtr aRStack_38 [8];
  RtWeakPtr aRStack_30 [8];
  RtWeakPtr aRStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pUVar2 = (UIWidget *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
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
  std::string::string(asStack_10,"UIPauseButton");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_01);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_38);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UICoinBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_02);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_30);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UIGemBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_03);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UISunBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_04);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    UIWidget::SetVisible(pUVar2,param_1);
  }
  std::string::string(asStack_10,"UIChangeSpeedButton");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_05);
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
/* SunbankTutorialIntro::onUpdate() */

void __thiscall SunbankTutorialIntro::onUpdate(SunbankTutorialIntro *this)

{
  bool bVar1;
  char cVar2;
  long extraout_x0;
  string *extraout_x1;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x4c] == (SunbankTutorialIntro)0x0) {
    std::string::string(asStack_10,"UISunBank");
    UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1);
    std::string::~string(asStack_10);
    nop();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      nop();
      cVar2 = FUN_0449bb6c(*(undefined1 *)(extraout_x0 + 0x17b));
      if (cVar2 == '\0') {
        this[0x4c] = (SunbankTutorialIntro)0x1;
        StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,1);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunbankTutorialIntro::onFakeGemBanked(int) */

void SunbankTutorialIntro::onFakeGemBanked(int param_1)

{
  bool bVar1;
  int iVar2;
  SunBank *this;
  GemBank *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  string *extraout_x1;
  string *extraout_x1_00;
  Board *pBVar3;
  undefined1 auStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIGemBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    nop();
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    iVar2 = PlayerInfo::GetNumGems(this_02,false);
    GemBank::SetFakeCurrencyAmount(this_00,iVar2 + 10);
  }
  std::string::string(asStack_10,"UISunBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1_00);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    nop();
    SunBank::SetIsTutorial(this,true);
    FUN_0449bb88(this + 0x179);
    *(undefined1 *)((ulong)(uint)param_1 + 0x4c) = 0;
  }
  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(asStack_10,L"[ADVICE_SUNBANK_TUTORIAL_FAKEGEM]",auStack_28);
  Board::DisplayAdvice(pBVar3,asStack_10,0xf,0);
  FUN_05476c50(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunbankTutorialIntro::onStartIntro() */

void __thiscall SunbankTutorialIntro::onStartIntro(SunbankTutorialIntro *this)

{
  bool bVar1;
  UIWidget *pUVar2;
  CrazyNPCManager *pCVar3;
  string *extraout_x1;
  string *extraout_x1_00;
  RtWeakPtr aRStack_70 [8];
  RtWeakPtr aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::PutIntoTutorialMode(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_50,"UIGemBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_50,extraout_x1);
  std::string::~string(asStack_50);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_70);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    UIWidget::SetVisible(pUVar2,true);
  }
  std::string::string(asStack_50,"UISunBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_50,extraout_x1_00);
  std::string::~string(asStack_50);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_68);
  if (bVar1) {
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    UIWidget::SetVisible(pUVar2,true);
  }
  pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  std::string::string(asStack_60,"SUNBANK_TUTORIAL");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::Delegate0<SunbankTutorialIntro,void(SunbankTutorialIntro::*)()>
            (aDStack_38,asStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar3,asStack_60,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunbankTutorialIntro::registerForEvents() */

void __thiscall SunbankTutorialIntro::registerForEvents(SunbankTutorialIntro *this)

{
  undefined *puVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  long lVar4;
  LevelModuleManager *pLVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar2 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar3);
  if (cVar2 == '\0') {
    lVar4 = LevelModule::getManager();
    FUN_0449bb60(lVar4 + 0x80);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onStartIntro);
    Sexy::Delegate0::Delegate0<SunbankTutorialIntro,void(SunbankTutorialIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnIntroStarted(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onEndLevel);
    Sexy::Delegate0::Delegate0<SunbankTutorialIntro,void(SunbankTutorialIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnLevelEnded(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onUpdate);
    Sexy::Delegate0::Delegate0<SunbankTutorialIntro,void(SunbankTutorialIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnUpdate(pLVar5,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onFakeGemBanked);
    local_70 = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
    MessageRouter::
    Subscribe<int,Sexy::CBMemberTranslatorX<SunbankTutorialIntro,void(SunbankTutorialIntro::*)(int)>>
              ((MessageRouter *)puVar1,Message::GemCurrencyFakeBanked,&local_70);
  }
  else {
    StandardLevelIntro::registerForEvents((StandardLevelIntro *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunbankTutorialIntro::onNarrationFinished() */

void SunbankTutorialIntro::onNarrationFinished(void)

{
  undefined8 uVar1;
  Collectable *extraout_x0;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  SexyVector3 *pSVar6;
  Collectable *local_40;
  string asStack_38 [8];
  Vec3 aVStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_30,240.0,400.0,0.0);
  iVar5 = 5;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  do {
    pSVar6 = *(SexyVector3 **)(gLawnApp + 0x9f0);
    std::string::string(asStack_38,"gem_fake");
    Board::AddGemFake(pSVar6,(string *)aVStack_30);
    nop();
    local_40 = extraout_x0;
    std::string::~string(asStack_38);
    nop();
    Collectable::SetDisableTouch(local_40,true);
    Collectable::StartCollectAfterMotion(local_40);
    std::vector<Collectable*,std::allocator<Collectable*>>::push_back
              ((vector<Collectable*,std::allocator<Collectable*>> *)&local_20,&local_40);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  Board::FanOutCollectables
            (*(Board **)(gLawnApp + 0x9f0),(vector *)&local_20,(SexyVector3 *)aVStack_30);
  uVar4 = 0;
  while( true ) {
    uVar1 = local_20;
    uVar3 = FUN_0449bb74(local_20,local_18);
    if (uVar3 <= uVar4) break;
    puVar2 = (undefined8 *)FUN_0449bb80(uVar1,uVar4);
    Collectable::SetKeepOnBoard((Collectable *)*puVar2,false);
    uVar4 = uVar4 + 1;
  }
  std::vector<Collectable*,std::allocator<Collectable*>>::~vector
            ((vector<Collectable*,std::allocator<Collectable*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

