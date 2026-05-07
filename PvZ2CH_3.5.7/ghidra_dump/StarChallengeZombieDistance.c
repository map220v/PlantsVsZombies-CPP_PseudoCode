// Class: StarChallengeZombieDistance


/* StarChallengeZombieDistance::gameplayEnded() */

void __thiscall StarChallengeZombieDistance::gameplayEnded(StarChallengeZombieDistance *this)

{
  char cVar1;
  
  cVar1 = FUN_0447ec84(*(undefined4 *)(this + 0x1c));
  if (cVar1 == '\0') {
    return;
  }
  Challenge::Complete((Challenge *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeZombieDistance::StaticClassInit() */

void StarChallengeZombieDistance::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeZombieDistance");
    (*pcVar2)(plVar1,asStack_10,FUN_0447f808,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeZombieDistance::StaticGetClass() */

long * StarChallengeZombieDistance::StaticGetClass(void)

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
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeZombieDistance",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeZombieDistance::failed(float) */

bool StarChallengeZombieDistance::failed(float param_1)

{
  return DAT_06b0a848 * -0.5 <= param_1 && param_1 <= 2.5;
}


/* StarChallengeZombieDistance::proximityAlert(float) */

bool StarChallengeZombieDistance::proximityAlert(float param_1)

{
  return DAT_06b0a848 * -0.5 <= param_1 && param_1 < DAT_06b0a848;
}


/* StarChallengeZombieDistance::playFlowerAnimation(std::string const&, bool) */

void __thiscall
StarChallengeZombieDistance::playFlowerAnimation
          (StarChallengeZombieDistance *this,string *param_1,bool param_2)

{
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar2;
  Effect_PopAnim *pEVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar6 = 0;
  if (param_2) {
    uVar5 = *(undefined8 *)(this + 0x30);
    lVar1 = FUN_0447ed64(uVar5,*(undefined8 *)(this + 0x38));
    if (lVar1 != 0) {
      do {
        pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0447ed5c(uVar5,uVar6);
        uVar6 = uVar6 + 1;
        pEVar3 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
        PVZ_EOT();
        Effect_PopAnim::PlayLoopingAnimation(pEVar3,param_1,0);
        uVar5 = *(undefined8 *)(this + 0x30);
        uVar4 = FUN_0447ed64(uVar5,*(undefined8 *)(this + 0x38));
      } while (uVar6 < uVar4);
      return;
    }
  }
  else {
    uVar5 = *(undefined8 *)(this + 0x30);
    lVar1 = FUN_0447ed64(uVar5,*(undefined8 *)(this + 0x38));
    if (lVar1 != 0) {
      do {
        pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0447ed5c(uVar5,uVar6);
        uVar6 = uVar6 + 1;
        pEVar3 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
        Effect_PopAnim::PlaySingleAnimation(pEVar3,param_1,0);
        uVar5 = *(undefined8 *)(this + 0x30);
        uVar4 = FUN_0447ed64(uVar5,*(undefined8 *)(this + 0x38));
      } while (uVar6 < uVar4);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeZombieDistance::onAnimStopped(StandaloneEffect*) */

void __thiscall
StarChallengeZombieDistance::onAnimStopped
          (StarChallengeZombieDistance *this,StandaloneEffect *param_1)

{
  bool bVar1;
  UIWidget *this_00;
  long lVar2;
  char *__s;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  lVar2 = UIWidget::GetAtlasImage(this_00);
  lVar2 = FUN_0447ed4c(*(undefined8 *)(lVar2 + 0x20));
  FUN_05475d88(asStack_18,lVar2 + 0x48);
  bVar1 = std::operator==(asStack_18,"fail");
  if (bVar1) {
    __s = "fail_idle";
  }
  else {
    bVar1 = std::operator==(asStack_18,"zombies");
    if (bVar1) {
      __s = "zombies_idle";
    }
    else {
      bVar1 = std::operator==(asStack_18,"win");
      if (!bVar1) goto LAB_0447f410;
      __s = "win_idle";
    }
  }
  std::string::string(asStack_10,__s);
  playFlowerAnimation(this,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
LAB_0447f410:
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeZombieDistance::StarChallengeZombieDistance() */

void __thiscall
StarChallengeZombieDistance::StarChallengeZombieDistance(StarChallengeZombieDistance *this)

{
  string *psVar1;
  undefined4 extraout_s0;
  undefined4 uVar2;
  
  Challenge::Challenge((Challenge *)this);
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_0684ed40;
  psVar1 = (string *)PVZ_EOT();
  *(undefined4 *)(this + 0x24) = extraout_s0;
  uVar2 = CheatManager::GetVariableValue(psVar1);
  *(undefined4 *)(this + 0x28) = uVar2;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* StarChallengeZombieDistance::StaticNew() */

StarChallengeZombieDistance * StarChallengeZombieDistance::StaticNew(void)

{
  StarChallengeZombieDistance *this;
  
  this = ::operator_new(0x48);
  StarChallengeZombieDistance(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeZombieDistance::levelEnded() */

void __thiscall StarChallengeZombieDistance::levelEnded(StarChallengeZombieDistance *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar1;
  RtWeakPtr<PowerPropertySheet> *this_01;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x30);
    uVar2 = FUN_0447ed64(uVar4,*(undefined8 *)(this + 0x38));
    if (uVar2 <= uVar3) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0447ed5c(uVar4,uVar3);
    plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar1 + 0x48))();
    this_01 = (RtWeakPtr<PowerPropertySheet> *)FUN_0447ed5c(*(undefined8 *)(this + 0x30),uVar3);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_01,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    uVar3 = uVar3 + 1;
  }
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  clear((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *)
        (this + 0x30));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeZombieDistance::~StarChallengeZombieDistance() */

void __thiscall
StarChallengeZombieDistance::~StarChallengeZombieDistance(StarChallengeZombieDistance *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0684ed40;
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  ~vector((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *
          )(this + 0x30));
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* StarChallengeZombieDistance::~StarChallengeZombieDistance() */

void __thiscall
StarChallengeZombieDistance::~StarChallengeZombieDistance(StarChallengeZombieDistance *this)

{
  ~StarChallengeZombieDistance(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeZombieDistance::winOutroStarted() */

void __thiscall StarChallengeZombieDistance::winOutroStarted(StarChallengeZombieDistance *this)

{
  char *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Game_Objective_Success_Flower");
  std::string::string(asStack_10,"win");
  playFlowerAnimation(this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeZombieDistance::createFlowers() */

void __thiscall StarChallengeZombieDistance::createFlowers(StarChallengeZombieDistance *this)

{
  int iVar1;
  LawnApp *this_00;
  char cVar2;
  int iVar3;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  StandaloneEffect *pSVar5;
  Board *this_03;
  Board *this_04;
  int iVar6;
  float fVar7;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_60,"StarChallengeFlower");
  cVar2 = LawnApp::IsGroupLoadComplete(this_00,asStack_60);
  std::string::~string(asStack_60);
  nop();
  if (cVar2 == '\0') {
    this_03 = *(Board **)(gLawnApp + 0x9f0);
    this_04 = (Board *)0x0;
    if (this_03 == (Board *)0x0) goto LAB_0447fc48;
    std::string::string(asStack_60,"StarChallengeFlower");
    Board::LoadResourceGroupForGameplay(this_03,asStack_60);
    std::string::~string(asStack_60);
    nop();
  }
  this_04 = *(Board **)(gLawnApp + 0x9f0);
LAB_0447fc48:
  iVar1 = *(int *)(this_04 + 0xfc);
  if (0 < iVar1) {
    iVar6 = 0;
    while( true ) {
      this_01 = Board::AddEffect<Effect_PopAnim>(this_04);
      std::string::string(asStack_68,"POPANIM_EFFECTS_STAR_OBJECTIVE_FLOWER");
      GetPAMByName(asStack_68);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_60);
      Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar4,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
      std::string::~string(asStack_68);
      nop();
      fVar7 = (float)ArenaBattleModule::calcGoalX((ArenaBattleModule *)this);
      iVar3 = BoardTransforms::GridToBoardSpaceY(iVar6);
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_60,fVar7 - 97.5,(float)iVar3 - 130.0,0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_01,(SexyVector3 *)asStack_60,-1);
      FUN_0447ed70(this_01 + 0x1c);
      StandaloneEffect::SetKeepAlive((StandaloneEffect *)this_01,true);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_60,(RtWeakPtrBase *)asStack_68);
      std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
      push_back((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>
                 *)(this + 0x30),(RtWeakPtr *)asStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
      if (iVar6 + 1 == iVar1) break;
      this_04 = *(Board **)(gLawnApp + 0x9f0);
      iVar6 = iVar6 + 1;
    }
  }
  this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0447ed5c(*(undefined8 *)(this + 0x30),0);
  pSVar5 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_68,
             asStack_60);
  StandaloneEffect::SetCompletionCallback(pSVar5,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeZombieDistance::registerForEvents() */

void __thiscall StarChallengeZombieDistance::registerForEvents(StarChallengeZombieDistance *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Challenge::registerForEvents((Challenge *)this);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,levelStarted);
  Sexy::Delegate0::Delegate0<StarChallengeZombieDistance,void(StarChallengeZombieDistance::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnIntroStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayUpdate);
  Sexy::Delegate0::Delegate0<StarChallengeZombieDistance,void(StarChallengeZombieDistance::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,levelEnded);
  Sexy::Delegate0::Delegate0<StarChallengeZombieDistance,void(StarChallengeZombieDistance::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,winOutroStarted);
  Sexy::Delegate0::Delegate0<StarChallengeZombieDistance,void(StarChallengeZombieDistance::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnWinOutroStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayEnded);
  Sexy::Delegate0::Delegate0<StarChallengeZombieDistance,void(StarChallengeZombieDistance::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeZombieDistance::setState(StarChallengeZombieDistance::GoalState) */

void __thiscall StarChallengeZombieDistance::setState(StarChallengeZombieDistance *this,int param_2)

{
  char cVar1;
  char *pcVar2;
  TGALogMgr *this_00;
  size_t __n;
  undefined4 uVar3;
  DString aDStack_68 [16];
  string asStack_58 [8];
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 1) {
    std::string::string(asStack_58,"zombies");
    playFlowerAnimation(this,asStack_58,false);
    std::string::~string(asStack_58);
    nop();
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Game_Objective_Flash");
  }
  else if (param_2 == 0) {
    std::string::string(asStack_58,"idle");
    playFlowerAnimation(this,asStack_58,true);
    std::string::~string(asStack_58);
    nop();
  }
  else if (param_2 == 2) {
    std::string::string(asStack_58,"fail");
    __n = 0;
    playFlowerAnimation(this,asStack_58,false);
    std::string::~string(asStack_58);
    nop();
    cVar1 = FUN_0447eccc(*(undefined4 *)(this + 0x1c));
    if (cVar1 == '\0') {
      Challenge::Fail();
      cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
      if (cVar1 != '\0') {
        TGAPVZ1ModeData::TGAPVZ1ModeData((TGAPVZ1ModeData *)asStack_58);
        DString::DString(aDStack_68,2);
        pcVar2 = (char *)DString::c_str(aDStack_68);
        std::string::append(asStack_58,pcVar2,__n);
        DString::~DString(aDStack_68);
        Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
        PVZ1ModeNetworkMgr::GetCurrentLevel();
        FUN_05474278(auStack_50,aDStack_68);
        std::string::~string((string *)aDStack_68);
        cVar1 = PVZ1ModeUtils::IsHardMode();
        if (cVar1 == '\0') {
          pcVar2 = "0";
        }
        else {
          pcVar2 = "1";
        }
        std::string::append(asStack_48,pcVar2,__n);
        std::string::append(asStack_40,"4",__n);
        this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGALogMgr::LogPVZ1Mode(this_00,(TGAPVZ1ModeData *)asStack_58);
        TGAPVZ1ModeData::~TGAPVZ1ModeData((TGAPVZ1ModeData *)asStack_58);
      }
    }
  }
  *(int *)(this + 0x20) = param_2;
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x24) = uVar3;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeZombieDistance::onFail() */

void __thiscall StarChallengeZombieDistance::onFail(StarChallengeZombieDistance *this)

{
  setState(this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeZombieDistance::gameplayUpdate() */

void __thiscall StarChallengeZombieDistance::gameplayUpdate(StarChallengeZombieDistance *this)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  ResourceInfo *this_00;
  float *pfVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long *plVar5;
  int iVar6;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  int extraout_w1_03;
  int extraout_w1_04;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [12];
  undefined8 local_38;
  undefined8 local_30;
  float local_28 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  fVar7 = (float)CheatManager::GetVariableValue(___stack_chk_guard);
  fVar8 = (float)ArenaBattleModule::calcGoalX((ArenaBattleModule *)this);
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable((Iterator *)local_28,uVar3,0x29);
  fVar10 = ABS(fVar7);
  fVar11 = fVar7;
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)local_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*((Iterator *)local_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)&local_38);
    this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    Sexy::RtId::~RtId((RtId *)&local_38);
    cVar2 = BoardEntity::IntersectsGrid((BoardEntity *)this_00);
    iVar6 = extraout_w1;
    if (((((cVar2 != '\0') &&
          (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), iVar6 = extraout_w1_00,
          cVar2 == '\0')) &&
         (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), iVar6 = extraout_w1_01,
         cVar2 == '\0')) &&
        ((cVar2 = Zombie::IsFlying((Zombie *)this_00), iVar6 = extraout_w1_02, cVar2 == '\0' &&
         (cVar2 = RealObject::IsOnTeam(this_00,2), iVar6 = extraout_w1_03, cVar2 != '\0')))) &&
       (cVar2 = FUN_0447f274(*(undefined4 *)(this_00 + 0xcc)), iVar6 = extraout_w1_04, cVar2 == '\0'
       )) {
      auVar12 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)this_00);
      iVar6 = auVar12._8_4_;
      fVar9 = *auVar12._0_8_ - fVar8;
      if (ABS(fVar9) < fVar10) {
        fVar7 = fVar9;
        fVar10 = ABS(fVar9);
      }
      if ((fVar9 < fVar11) && (DAT_06b0a848 * -0.5 < fVar9)) {
        fVar11 = fVar9;
      }
    }
    Sexy::RtDbTable::Iterator::operator++((Iterator *)local_28,iVar6);
  }
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)local_28);
  local_28[0] = fVar10;
  pfVar4 = eastl::min_alt<float>((float *)(this + 0x28),local_28);
  iVar6 = *(int *)(this + 0x20);
  *(float *)(this + 0x28) = *pfVar4;
  if (iVar6 == 1) {
    cVar2 = failed(fVar7);
    if (cVar2 == '\0') {
      cVar2 = proximityAlert(fVar11);
      if (cVar2 == '\0') {
        setState(this);
      }
    }
    else {
      setState(this,2);
    }
  }
  else if (iVar6 == 0) {
    cVar2 = proximityAlert(fVar11);
    if (cVar2 != '\0') {
      setState(this,1);
    }
  }
  else if (iVar6 == 2) {
    fVar7 = (float)PVZ_T();
    local_28[0] = 1.0;
    local_30 = CONCAT44(local_30._4_4_,(fVar7 - *(float *)(this + 0x24)) * 0.2);
    pfVar4 = eastl::min_alt<float>((float *)&local_30,local_28);
    Sexy::Color::Color((Color *)local_28,0xffffff,(int)((1.0 - *pfVar4) * 255.0));
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x30));
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1)
    {
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      (**(code **)(*plVar5 + 0x78))(plVar5,(Iterator *)local_28);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeZombieDistance::levelStarted() */

void __thiscall StarChallengeZombieDistance::levelStarted(StarChallengeZombieDistance *this)

{
  createFlowers(this);
  setState(this,0);
  return;
}

