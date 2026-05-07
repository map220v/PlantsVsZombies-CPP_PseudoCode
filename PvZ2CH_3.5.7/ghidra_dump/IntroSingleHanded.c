// Class: IntroSingleHanded


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroSingleHanded::onPlantUpgradeSpawned(CollectablePlantUpgrade*) */

void IntroSingleHanded::onPlantUpgradeSpawned(CollectablePlantUpgrade *param_1)

{
  Board *pBVar1;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x60] == (CollectablePlantUpgrade)0x0) {
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    pBVar1 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(auStack_10,L"[SINGLE_HANDED_TUTORIAL_2]",auStack_18);
    Board::DisplayAdvice(pBVar1,auStack_10,7,0);
    FUN_05476c50(auStack_10);
    nop();
    param_1[0x60] = (CollectablePlantUpgrade)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroSingleHanded::onFireSingleHandedRockets() */

void __thiscall IntroSingleHanded::onFireSingleHandedRockets(IntroSingleHanded *this)

{
  Board *pBVar1;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x61] == (IntroSingleHanded)0x0) {
    pBVar1 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(auStack_10,L"[SINGLE_HANDED_TUTORIAL_3]",auStack_18);
    Board::DisplayAdviceAgain(pBVar1,auStack_10,0x11,0);
    FUN_05476c50(auStack_10);
    nop();
    this[0x61] = (IntroSingleHanded)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroSingleHanded::StaticClassInit() */

void IntroSingleHanded::StaticClassInit(void)

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
    std::string::string(asStack_10,"IntroSingleHanded");
    (*pcVar2)(plVar1,asStack_10,FUN_03e47670,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroSingleHanded::StaticGetClass() */

long * IntroSingleHanded::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"IntroSingleHanded",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntroSingleHanded::GetWaveForStartRocket() */

undefined4 __thiscall IntroSingleHanded::GetWaveForStartRocket(IntroSingleHanded *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return *(undefined4 *)(pRVar1 + 0x78);
}


/* IntroSingleHanded::IntroSingleHanded() */

void __thiscall IntroSingleHanded::IntroSingleHanded(IntroSingleHanded *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0678b250;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  return;
}


/* IntroSingleHanded::StaticNew() */

IntroSingleHanded * IntroSingleHanded::StaticNew(void)

{
  IntroSingleHanded *this;
  
  this = ::operator_new(0x80);
  IntroSingleHanded(this);
  return this;
}


/* IntroSingleHanded::clearBouncingArrows() */

void __thiscall IntroSingleHanded::clearBouncingArrows(IntroSingleHanded *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x68);
    uVar2 = FUN_03e46ed4(uVar4,*(undefined8 *)(this + 0x70));
    if (uVar2 <= uVar3) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e46ee0(uVar4,uVar3);
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
/* IntroSingleHanded::initializeModule() */

void __thiscall IntroSingleHanded::initializeModule(IntroSingleHanded *this)

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
  this[0x60] = (IntroSingleHanded)0x0;
  this[0x61] = (IntroSingleHanded)0x0;
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  *(undefined4 *)(this + 0x50) = 0;
  clearBouncingArrows(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroSingleHanded::onEndLevel() */

void __thiscall IntroSingleHanded::onEndLevel(IntroSingleHanded *this)

{
  AnimationMgr *this_00;
  
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58))
  ;
  AnimationMgr::Clear(this_00);
  clearBouncingArrows(this);
  return;
}


/* IntroSingleHanded::~IntroSingleHanded() */

void __thiscall IntroSingleHanded::~IntroSingleHanded(IntroSingleHanded *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0678b250;
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  ~vector((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
           *)(this + 0x68));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* IntroSingleHanded::~IntroSingleHanded() */

void __thiscall IntroSingleHanded::~IntroSingleHanded(IntroSingleHanded *this)

{
  ~IntroSingleHanded(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroSingleHanded::addBouncingArrow(Sexy::SexyVector2 const&) */

void __thiscall IntroSingleHanded::addBouncingArrow(IntroSingleHanded *this,SexyVector2 *param_1)

{
  Effect_BouncingArrow *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = StandaloneEffect::CreateEffect<Effect_BouncingArrow>();
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06ade1b0);
  Effect_BouncingArrow::SetArrowImage(this_00,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Effect_BouncingArrow::SetBounceHeightsBoardSpace(this_00,5.0,25.0);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this_00,true);
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
/* IntroSingleHanded::setState(IntroSingleHanded::State) */

void __thiscall IntroSingleHanded::setState(IntroSingleHanded *this,int param_2)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar1;
  StandaloneEffect *this_01;
  Board *pBVar2;
  undefined1 auStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x4c) != param_2) {
    *(int *)(this + 0x4c) = param_2;
    *(undefined4 *)(this + 0x50) = 0;
    if (param_2 == 1) {
      pBVar2 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_18,"");
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Board::GetPlantAt(pBVar2,0,0,asStack_18);
      std::string::~string(asStack_18);
      nop();
      if (this_00 !=
          (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           *)0x0) {
        pfVar1 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(this_00);
        Sexy::FastCurve::SetOutRange((FastCurve *)asStack_18,*pfVar1,pfVar1[1]);
        this_01 = (StandaloneEffect *)addBouncingArrow(this,(SexyVector2 *)asStack_18);
        EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,-62.0,0.0);
        StandaloneEffect::SetAttached(this_01,(RealObject *)this_00,(SexyVector3 *)asStack_18,1);
      }
      pBVar2 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05478178(asStack_18,L"[SINGLE_HANDED_TUTORIAL_1]",auStack_20);
      Board::DisplayAdviceAgain(pBVar2,asStack_18,10,0);
      FUN_05476c50(asStack_18);
      nop();
    }
    else if (param_2 == 2) {
      Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
      clearBouncingArrows(this);
      StandardLevelIntro::startLevelIntro((StandardLevelIntro *)this,1,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroSingleHanded::startIntro() */

void __thiscall IntroSingleHanded::startIntro(IntroSingleHanded *this)

{
  Board::PutIntoTutorialMode(*(Board **)(gLawnApp + 0x9f0));
  setState(this,0);
  return;
}


/* IntroSingleHanded::onUpdate() */

void __thiscall IntroSingleHanded::onUpdate(IntroSingleHanded *this)

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
/* IntroSingleHanded::registerForEvents() */

void __thiscall IntroSingleHanded::registerForEvents(IntroSingleHanded *this)

{
  undefined *puVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  long lVar4;
  LevelModuleManager *pLVar5;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
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
    FUN_03e46ebc(lVar4 + 0x80);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,startIntro);
    Sexy::Delegate0::Delegate0<IntroSingleHanded,void(IntroSingleHanded::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnIntroStarted(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onEndLevel);
    Sexy::Delegate0::Delegate0<IntroSingleHanded,void(IntroSingleHanded::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnLevelEnded(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onUpdate);
    Sexy::Delegate0::Delegate0<IntroSingleHanded,void(IntroSingleHanded::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnUpdate(pLVar5,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPlantUpgradeSpawned);
    local_90 = local_50;
    uStack_88 = uStack_48;
    local_80 = local_40;
    MessageRouter::
    Subscribe<CollectablePlantUpgrade*,Sexy::CBMemberTranslatorX<IntroSingleHanded,void(IntroSingleHanded::*)(CollectablePlantUpgrade*)>>
              ((MessageRouter *)puVar1,Message::PlantUpgradeSpawned,&local_90);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onFireSingleHandedRockets);
    Sexy::Delegate0::Delegate0<IntroSingleHanded,void(IntroSingleHanded::*)()>
              (aDStack_38,aCStack_68);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::FireSingleHandedRockets,aDStack_38);
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

