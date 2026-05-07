// Class: IntroEvilDave


/* IntroEvilDave::onStartIntro() */

void __thiscall IntroEvilDave::onStartIntro(IntroEvilDave *this)

{
  StandardLevelIntro::startLevelIntro((StandardLevelIntro *)this,1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroEvilDave::onPlantDied(Plant*) */

void IntroEvilDave::onPlantDied(Plant *param_1)

{
  Board *pBVar1;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x61] == (Plant)0x0) {
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    pBVar1 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(auStack_10,L"[EVIL_DAVE_TUTORIAL_3]",auStack_18);
    Board::DisplayAdvice(pBVar1,auStack_10,7,0);
    FUN_05476c50(auStack_10);
    nop();
    param_1[0x61] = (Plant)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroEvilDave::onZombiePlanted(Zombie*) */

void IntroEvilDave::onZombiePlanted(Zombie *param_1)

{
  Board *pBVar1;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x60] == (Zombie)0x0) {
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    pBVar1 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(auStack_10,L"[EVIL_DAVE_TUTORIAL_2]",auStack_18);
    Board::DisplayAdvice(pBVar1,auStack_10,7,0);
    FUN_05476c50(auStack_10);
    nop();
    param_1[0x60] = (Zombie)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroEvilDave::StaticClassInit() */

void IntroEvilDave::StaticClassInit(void)

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
    std::string::string(asStack_10,"IntroEvilDave");
    (*pcVar2)(plVar1,asStack_10,FUN_03e48a50,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroEvilDave::StaticGetClass() */

long * IntroEvilDave::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"IntroEvilDave",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntroEvilDave::IntroEvilDave() */

void __thiscall IntroEvilDave::IntroEvilDave(IntroEvilDave *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0678b430;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  return;
}


/* IntroEvilDave::StaticNew() */

IntroEvilDave * IntroEvilDave::StaticNew(void)

{
  IntroEvilDave *this;
  
  this = ::operator_new(0x80);
  IntroEvilDave(this);
  return this;
}


/* IntroEvilDave::clearBouncingArrows() */

void __thiscall IntroEvilDave::clearBouncingArrows(IntroEvilDave *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x68);
    uVar2 = FUN_03e48348(uVar4,*(undefined8 *)(this + 0x70));
    if (uVar2 <= uVar3) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e48354(uVar4,uVar3);
    plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar1 + 0x48))();
    uVar3 = uVar3 + 1;
  }
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  clear((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
         *)(this + 0x68));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroEvilDave::initializeModule() */

void __thiscall IntroEvilDave::initializeModule(IntroEvilDave *this)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StandardLevelIntro::initializeModule((StandardLevelIntro *)this);
  AnimationMgr::Create();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x58),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this[0x60] = (IntroEvilDave)0x0;
  this[0x61] = (IntroEvilDave)0x0;
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  *(undefined4 *)(this + 0x50) = 0;
  clearBouncingArrows(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroEvilDave::onEndLevel() */

void __thiscall IntroEvilDave::onEndLevel(IntroEvilDave *this)

{
  AnimationMgr *this_00;
  
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58))
  ;
  AnimationMgr::Clear(this_00);
  clearBouncingArrows(this);
  return;
}


/* IntroEvilDave::~IntroEvilDave() */

void __thiscall IntroEvilDave::~IntroEvilDave(IntroEvilDave *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0678b430;
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  ~vector((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
           *)(this + 0x68));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* IntroEvilDave::~IntroEvilDave() */

void __thiscall IntroEvilDave::~IntroEvilDave(IntroEvilDave *this)

{
  ~IntroEvilDave(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroEvilDave::addBouncingArrow(Sexy::SexyVector2 const&) */

void __thiscall IntroEvilDave::addBouncingArrow(IntroEvilDave *this,SexyVector2 *param_1)

{
  Effect_BouncingArrow *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = StandaloneEffect::CreateEffect<Effect_BouncingArrow>();
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06ade2e8);
  Effect_BouncingArrow::SetArrowImage(this_00,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Effect_BouncingArrow::SetBounceHeightsBoardSpace(this_00,5.0,25.0);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this_00,true);
  Effect_BouncingArrow::SetTransX(this_00,true);
  StandaloneEffect::SetScreenSpaceOrigin((StandaloneEffect *)this_00,param_1,1000000);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  push_back((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
             *)(this + 0x68),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroEvilDave::setState(IntroEvilDave::State) */

void __thiscall IntroEvilDave::setState(IntroEvilDave *this,int param_2)

{
  long lVar1;
  long lVar2;
  Board *pBVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  Point aPStack_40 [8];
  TPoint aTStack_38 [8];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  string asStack_18 [12];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x4c) != param_2) {
    *(int *)(this + 0x4c) = param_2;
    *(undefined4 *)(this + 0x50) = 0;
    if (param_2 == 1) {
      std::string::string(asStack_18,"UISeedBank");
      lVar1 = UIWidget::GetWidgetBySheetName(asStack_18);
      std::string::~string(asStack_18);
      nop();
      std::string::string(asStack_18,"UISeedBankPacket");
      lVar2 = UIWidget::GetWidgetBySheetName(asStack_18);
      std::string::~string(asStack_18);
      nop();
      if ((lVar2 != 0) && (lVar1 != 0)) {
        UIWidget::GetDrawRect();
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_48,0.0,0.0);
        fVar4 = (float)FUN_03e484a4(local_48);
        UIWidget::GetDrawRect();
        fVar5 = (float)FUN_03e484a4(local_44);
        Sexy::Point::Point(aPStack_40,(int)(fVar4 + (float)(local_28 + local_20)),
                           (int)(fVar5 + (float)(local_24 + local_c / 2)));
        Board::GetBoardBaseOffset();
        Sexy::TPoint<int>::operator-((TPoint<int> *)aPStack_40,aTStack_38);
        Sexy::Point::Point((Point *)&local_30,(TPoint *)asStack_18);
        Board::TranslateScreenPositionToBoardPosition
                  (*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
        Sexy::FastCurve::SetOutRange((FastCurve *)asStack_18,(float)local_30,(float)local_2c);
        addBouncingArrow(this,(SexyVector2 *)asStack_18);
        pBVar3 = *(Board **)(gLawnApp + 0x9f0);
        FUN_05478178(asStack_18,L"[EVIL_DAVE_TUTORIAL_1]",auStack_50);
        Board::DisplayAdviceAgain(pBVar3,asStack_18,10,0);
        FUN_05476c50(asStack_18);
        nop();
      }
    }
    else if (param_2 == 2) {
      Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
      clearBouncingArrows(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroEvilDave::onGameplayStarted() */

void __thiscall IntroEvilDave::onGameplayStarted(IntroEvilDave *this)

{
  setState(this,0);
  return;
}


/* IntroEvilDave::onUpdate() */

void __thiscall IntroEvilDave::onUpdate(IntroEvilDave *this)

{
  bool bVar1;
  AnimationMgr *this_00;
  int iVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = (float)PVZ_Dt();
  *(float *)(this + 0x50) = *(float *)(this + 0x50) + fVar4;
  iVar3 = *(int *)(this + 0x4c);
  do {
    if (iVar3 == 0) {
      setState(this,1);
      iVar2 = *(int *)(this + 0x4c);
    }
    else {
      if ((iVar3 != 1) || (*(float *)(this + 0x50) <= 3.0)) break;
      setState(this,2);
      iVar2 = *(int *)(this + 0x4c);
    }
    bVar1 = iVar3 != iVar2;
    iVar3 = iVar2;
  } while (bVar1);
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58))
  ;
  AnimationMgr::Update(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroEvilDave::registerForEvents() */

void __thiscall IntroEvilDave::registerForEvents(IntroEvilDave *this)

{
  undefined *puVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  long lVar4;
  LevelModuleManager *pLVar5;
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
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar2 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar3);
  if (cVar2 == '\0') {
    lVar4 = LevelModule::getManager();
    FUN_03e48330(lVar4 + 0x80);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onStartIntro);
    Sexy::Delegate0::Delegate0<IntroEvilDave,void(IntroEvilDave::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnIntroStarted(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onGameplayStarted);
    Sexy::Delegate0::Delegate0<IntroEvilDave,void(IntroEvilDave::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnGameplayStarted(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onEndLevel);
    Sexy::Delegate0::Delegate0<IntroEvilDave,void(IntroEvilDave::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnLevelEnded(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onUpdate);
    Sexy::Delegate0::Delegate0<IntroEvilDave,void(IntroEvilDave::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnUpdate(pLVar5,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPlantDied);
    local_80 = local_58;
    local_90 = local_68;
    uStack_88 = uStack_60;
    MessageRouter::
    Subscribe<Plant*,Sexy::CBMemberTranslatorX<IntroEvilDave,void(IntroEvilDave::*)(Plant*)>>
              ((MessageRouter *)puVar1,Message::PlantDied,&local_90);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onZombiePlanted);
    local_b0 = local_50;
    uStack_a8 = uStack_48;
    local_a0 = local_40;
    MessageRouter::
    Subscribe<Zombie*,Sexy::CBMemberTranslatorX<IntroEvilDave,void(IntroEvilDave::*)(Zombie*)>>
              ((MessageRouter *)puVar1,Message::ZombiePlanted,&local_b0);
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

