// Class: BananaTutorialModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BananaTutorialModule::startNarration(StandardLevelIntro::PanType) */

void __thiscall BananaTutorialModule::startNarration(BananaTutorialModule *this,undefined4 param_2)

{
  LawnApp *pLVar1;
  char cVar2;
  CrazyNPCManager *pCVar3;
  long lVar4;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long lStack_8;
  
  *(undefined4 *)(this + 0x48) = param_2;
  lStack_8 = ___stack_chk_guard;
  cVar2 = StandardLevelIntro::hasNarration();
  if (cVar2 != '\0') {
    cVar2 = StandardLevelIntro::isFirstPlaythrough();
    pLVar1 = gLawnApp;
    if (cVar2 == '\0') {
      pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      lVar4 = Board::GetLevelDefinition(*(Board **)(pLVar1 + 0x9f0));
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0xf8);
      Sexy::Delegate0::Delegate0<StandardLevelIntro,void(StandardLevelIntro::*)()>
                (aDStack_38,aCStack_50);
      std::string::string(asStack_58,"");
      lVar4 = lVar4 + 0xf0;
    }
    else {
      pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      lVar4 = Board::GetLevelDefinition(*(Board **)(pLVar1 + 0x9f0));
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0xf8);
      Sexy::Delegate0::Delegate0<StandardLevelIntro,void(StandardLevelIntro::*)()>
                (aDStack_38,aCStack_50);
      std::string::string(asStack_58,"");
      lVar4 = lVar4 + 0xe8;
    }
    CrazyNPCManager::StartNarrativeID(pCVar3,lVar4,aDStack_38,asStack_58);
    std::string::~string(asStack_58);
    nop();
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BananaTutorialModule::onLevelEnded() */

void __thiscall BananaTutorialModule::onLevelEnded(BananaTutorialModule *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x60);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BananaTutorialModule::pointArrowAtZombie() */

void __thiscall BananaTutorialModule::pointArrowAtZombie(BananaTutorialModule *this)

{
  StandaloneEffect *pSVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *this_01;
  undefined4 uVar2;
  undefined4 uVar3;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar1 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  StandaloneEffect::SetVisibility(pSVar1,true);
  uVar2 = 0;
  uVar3 = 0x43020000;
  EATextSquish::Vec3::Vec3(aVStack_28,-20.0,0.0,130.0);
  pSVar1 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(this_00);
  local_18 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aVStack_28);
  local_14 = uVar2;
  local_10 = uVar3;
  StandaloneEffect::SetBoardSpaceOrigin(pSVar1,(SexyVector3 *)&local_18,900000);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BananaTutorialModule::onBananaTappedWhileCoolingDown() */

void __thiscall BananaTutorialModule::onBananaTappedWhileCoolingDown(BananaTutorialModule *this)

{
  Board *pBVar1;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x4c] == (BananaTutorialModule)0x0) {
    pBVar1 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(auStack_10,L"[ADVICE_BANANA_TUTORIAL_COOLDOWN]",auStack_18);
    Board::DisplayAdviceAgain(pBVar1,auStack_10,7,2);
    FUN_05476c50(auStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BananaTutorialModule::StaticClassInit() */

void BananaTutorialModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"BananaTutorialModule");
    (*pcVar2)(plVar1,asStack_10,FUN_041f09d0,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BananaTutorialModule::StaticGetClass() */

long * BananaTutorialModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BananaTutorialModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BananaTutorialModule::BananaTutorialModule() */

void __thiscall BananaTutorialModule::BananaTutorialModule(BananaTutorialModule *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06805a40;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x60));
  return;
}


/* BananaTutorialModule::StaticNew() */

BananaTutorialModule * BananaTutorialModule::StaticNew(void)

{
  BananaTutorialModule *this;
  
  this = ::operator_new(0x68);
  BananaTutorialModule(this);
  return this;
}


/* BananaTutorialModule::~BananaTutorialModule() */

void __thiscall BananaTutorialModule::~BananaTutorialModule(BananaTutorialModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06805a40;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* BananaTutorialModule::~BananaTutorialModule() */

void __thiscall BananaTutorialModule::~BananaTutorialModule(BananaTutorialModule *this)

{
  ~BananaTutorialModule(this);
  AK::FreeHook(this);
  return;
}


/* BananaTutorialModule::onBananaLaunched() */

void __thiscall BananaTutorialModule::onBananaLaunched(BananaTutorialModule *this)

{
  StandaloneEffect *this_00;
  
  if (this[0x4c] == (BananaTutorialModule)0x0) {
    return;
  }
  this_00 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60))
  ;
  StandaloneEffect::SetVisibility(this_00,false);
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BananaTutorialModule::pointArrowAtBanana() */

void __thiscall BananaTutorialModule::pointArrowAtBanana(BananaTutorialModule *this)

{
  StandaloneEffect *pSVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *this_01;
  undefined4 uVar2;
  undefined4 uVar3;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar1 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  StandaloneEffect::SetVisibility(pSVar1,true);
  uVar3 = 0x42b40000;
  uVar2 = 0;
  EATextSquish::Vec3::Vec3(aVStack_28,0.0,0.0,90.0);
  pSVar1 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(this_00);
  local_18 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aVStack_28);
  local_14 = uVar2;
  local_10 = uVar3;
  StandaloneEffect::SetBoardSpaceOrigin(pSVar1,(SexyVector3 *)&local_18,900000);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BananaTutorialModule::onBananaSelected() */

void __thiscall BananaTutorialModule::onBananaSelected(BananaTutorialModule *this)

{
  Board *pBVar1;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x4c] != (BananaTutorialModule)0x0) {
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    pBVar1 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(auStack_10,L"[ADVICE_BANANA_TUTORIAL_SHOOT]",auStack_18);
    Board::DisplayAdviceAgain(pBVar1,auStack_10,8,0);
    FUN_05476c50(auStack_10);
    nop();
    pointArrowAtZombie(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BananaTutorialModule::onTutorialFinished() */

void __thiscall BananaTutorialModule::onTutorialFinished(BananaTutorialModule *this)

{
  char cVar1;
  long extraout_x0;
  
  this[0x4c] = (BananaTutorialModule)0x0;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x58));
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
    nop();
    FUN_041ed4b8(extraout_x0 + 0x29,0);
  }
  StandardLevelIntro::setupIntro((StandardLevelIntro *)this,5,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BananaTutorialModule::registerForEvents() */

void __thiscall BananaTutorialModule::registerForEvents(BananaTutorialModule *this)

{
  undefined *puVar1;
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
  StandardLevelIntro::registerForEvents((StandardLevelIntro *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBananaSelected);
  Sexy::Delegate0::Delegate0<BananaTutorialModule,void(BananaTutorialModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::BananaSelected,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBananaLaunched);
  Sexy::Delegate0::Delegate0<BananaTutorialModule,void(BananaTutorialModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::BananaLaunched,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDestroyed);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<BananaTutorialModule,void(BananaTutorialModule::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBananaTappedWhileCoolingDown);
  Sexy::Delegate0::Delegate0<BananaTutorialModule,void(BananaTutorialModule::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::BananaTappedOnCooldown,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BananaTutorialModule::onZombieDestroyed(Zombie*, DamageInfo const*) */

void BananaTutorialModule::onZombieDestroyed(Zombie *param_1,DamageInfo *param_2)

{
  ResourceInfo *pRVar1;
  StandaloneEffect *this;
  long extraout_x0;
  AnimationController *pAVar2;
  AnimationController *pAVar3;
  float fVar4;
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0x50));
  if (param_2 == (DamageInfo *)pRVar1) {
    this = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x60));
    StandaloneEffect::SetVisibility(this,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x58));
    nop();
    FUN_041ed4b0(extraout_x0 + 0x28,0);
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                       ((RtWeakPtr *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
    fVar4 = (float)FUN_041ed464(*(undefined4 *)(pRVar1 + 0x10));
    FUN_05478178(asStack_10,L"[ADVICE_BANANA_TUTORIAL_GOOD_JOB]",aRStack_18);
    pAVar2 = (AnimationController *)ShowAdvice::Create(asStack_10,8);
    FUN_05476c50(asStack_10);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
    std::string::string(asStack_10,"onTutorialFinished");
    pAVar3 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    Sexy::RtId::~RtId(aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    AnimationMgr::Add((AnimationMgr *)pRVar1,pAVar2,fVar4);
    AnimationMgr::Add((AnimationMgr *)pRVar1,pAVar3,fVar4 + 2.0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BananaTutorialModule::startLevelIntro(StandardLevelIntro::PanType, bool) */

void BananaTutorialModule::startLevelIntro(LevelModule *param_1,undefined4 param_2)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  string *psVar4;
  long extraout_x0;
  long extraout_x0_00;
  Effect_BouncingArrow *this_01;
  StandaloneEffect *pSVar5;
  Zombie *this_02;
  ResourceInfo *this_03;
  ResilienceTutorialIntroProperties *pRVar6;
  AnimationController *pAVar7;
  AnimationController *pAVar8;
  AnimationController *pAVar9;
  AnimationController *pAVar10;
  Board *pBVar11;
  undefined8 uVar12;
  float fVar13;
  undefined4 local_30;
  undefined4 local_2c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  string asStack_20 [8];
  float local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar11 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_20,"");
  this = (RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x58);
  Board::GetPlantAt(pBVar11,1,2,asStack_20);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this,(RtWeakPtrBase *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  std::string::~string(asStack_20);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this);
  if (cVar1 == '\0') {
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string((string *)local_18,"banana");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
    std::string::~string((string *)local_18);
    nop();
    uVar12 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_20,(RtWeakPtrBase *)aRStack_28);
    Board::AddPlant((Board *)0x0,uVar12,1,2,asStack_20,1,1,0xffffffff,0,1,1,0,0,0,0);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this,(RtWeakPtrBase *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  }
  cVar1 = StandardLevelIntro::hasNarration();
  if (cVar1 == '\0') {
    param_1[0x4c] = (LevelModule)0x0;
    StandardLevelIntro::startLevelIntro((StandardLevelIntro *)param_1,param_2);
  }
  else {
    this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    nop();
    FUN_041ed4b0(extraout_x0 + 0x28,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    nop();
    FUN_041ed4b8(extraout_x0_00 + 0x29,1);
    StandaloneEffect::CreateEffect<Effect_BouncingArrow>();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    this_01 = (Effect_BouncingArrow *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Effect_BouncingArrow::PointDown(this_01);
    pSVar5 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    StandaloneEffect::SetVisibility(pSVar5,false);
    pSVar5 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    StandaloneEffect::SetIsScreenSpaceEffect(pSVar5,false);
    pBVar11 = *(Board **)(gLawnApp + 0x9f0);
    Board::GetStage(pBVar11);
    StageModule::GetBasicZombieType();
    this_02 = (Zombie *)
              Board::AddZombieInRow(pBVar11,(RtWeakPtr<Sexy::ResourceInfo> *)local_18,3,0,0,1,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    iVar2 = BoardTransforms::GridToBoardSpaceX(6);
    iVar3 = BoardTransforms::GridToBoardSpaceY(3);
    EATextSquish::Vec3::Vec3((Vec3 *)local_18,(float)iVar2,(float)iVar3,0.0);
    Zombie::RiseFromGround(this_02,(SexyVector3 *)local_18,false);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x50),(RtWeakPtrBase *)asStack_20)
    ;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
    this_03 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                        ((RtWeakPtr *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
    fVar13 = (float)FUN_041ed464(*(undefined4 *)(this_03 + 0x10));
    pRVar6 = LevelModule::getProps<ResilienceTutorialIntroProperties>(param_1);
    StandardLevelIntro::GetPanLocations(7,&local_30,&local_2c);
    pAVar7 = (AnimationController *)
             MoveBoard::Create(*(undefined4 *)(pRVar6 + 0x48),local_30,local_2c,0,0,4);
    std::string::string((string *)local_18,"Play_UI_Game_Intro_Cam_Pan");
    pAVar8 = (AnimationController *)AnimMgrSendAudioEvent::Create((string *)local_18);
    std::string::~string((string *)local_18);
    nop();
    FUN_05478178((RtWeakPtr<Sexy::ResourceInfo> *)local_18,L"[ADVICE_BANANA_TUTORIAL_SELECT]",
                 asStack_20);
    pAVar9 = (AnimationController *)ShowAdvice::Create((RtWeakPtr<Sexy::ResourceInfo> *)local_18,8);
    FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aRStack_28);
    std::string::string((string *)local_18,"pointArrowAtBanana");
    pAVar10 = (AnimationController *)
              TimeEvent::Create(asStack_20,(RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    std::string::~string((string *)local_18);
    nop();
    Sexy::RtId::~RtId((RtId *)asStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    AnimationMgr::Add((AnimationMgr *)this_03,pAVar7,fVar13,local_18);
    AnimationMgr::Add((AnimationMgr *)this_03,pAVar8,fVar13);
    AnimationMgr::Add((AnimationMgr *)this_03,pAVar9,local_18[0]);
    AnimationMgr::Add((AnimationMgr *)this_03,pAVar10,local_18[0]);
    param_1[0x4c] = (LevelModule)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

