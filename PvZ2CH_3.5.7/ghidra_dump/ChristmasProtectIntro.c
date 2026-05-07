// Class: ChristmasProtectIntro


/* ChristmasProtectIntro::onCursorDestroyed(BaseCursor*) */

void ChristmasProtectIntro::onCursorDestroyed(BaseCursor *param_1)

{
  return;
}


/* ChristmasProtectIntro::OnLevelEnded() */

void __thiscall ChristmasProtectIntro::OnLevelEnded(ChristmasProtectIntro *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* ChristmasProtectIntro::isInState(CMPState) const */

bool __thiscall ChristmasProtectIntro::isInState(ChristmasProtectIntro *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_03e594cc(*(undefined4 *)(this + 0x68));
  return iVar1 == param_2;
}


/* ChristmasProtectIntro::getChristmasProtectIntroStateSerialization() */

void __thiscall
ChristmasProtectIntro::getChristmasProtectIntroStateSerialization(ChristmasProtectIntro *this)

{
  FUN_03e594cc(*(undefined4 *)(this + 0x68));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasProtectIntro::DrawRightHighlight(Sexy::Graphics*) */

void __thiscall
ChristmasProtectIntro::DrawRightHighlight(ChristmasProtectIntro *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  GraphicsAutoState aGStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  fVar12 = *(float *)(param_1 + 0x20);
  iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c);
  *(float *)(param_1 + 0x10) = (float)*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48);
  *(float *)(param_1 + 0x14) = (float)iVar1;
  iVar1 = FUN_03e59934(200);
  fVar9 = *(float *)(param_1 + 0x18);
  fVar11 = *(float *)(param_1 + 0x24);
  iVar2 = FUN_03e59934(0xa0);
  fVar10 = *(float *)(param_1 + 0x1c);
  Sexy::Insets::Insets(aIStack_18,0xff,0xfc,0x5f,0x95);
  Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar7 = (float)FUN_03e59948((float)(iVar3 * 3) * *(float *)(param_1 + 0x18));
  BoardConstants::GRIDSQUARE_WIDTH();
  iVar3 = FUN_03e59934();
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  fVar8 = *(float *)(param_1 + 0x18);
  iVar5 = BoardConstants::NUMBER_OF_ROWS();
  iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar5 = FUN_03e59934(iVar5 * iVar6);
  Sexy::Insets::Insets
            (aIStack_18,
             (int)((float)(int)((float)(int)(((float)iVar1 - fVar12) * fVar9) + fVar12) + fVar7),
             (int)((float)(int)(((float)iVar2 - fVar11) * fVar10) + fVar11),
             (int)((float)(iVar3 * (iVar4 + -3)) * fVar8),
             (int)((float)iVar5 * *(float *)(param_1 + 0x1c)));
  Sexy::Graphics::FillRect(param_1,(TRect *)aIStack_18);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChristmasProtectIntro::OnUpdate() */

void __thiscall ChristmasProtectIntro::OnUpdate(ChristmasProtectIntro *this)

{
  StateMachine<CMPState>::UpdateState((StateMachine<CMPState> *)(this + 0x68));
  return;
}


/* ChristmasProtectIntro::initializeModule() */

void __thiscall ChristmasProtectIntro::initializeModule(ChristmasProtectIntro *this)

{
  FestivalManager *this_00;
  
  StandardLevelIntro::initializeModule((StandardLevelIntro *)this);
  this_00 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
  FestivalManager::LoadChristmasProtectGroups(this_00);
  return;
}


/* ChristmasProtectIntro::GetIntroPlant() */

void ChristmasProtectIntro::GetIntroPlant(void)

{
  LevelModule *in_x0;
  
  LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  FUN_05475d88();
  return;
}


/* ChristmasProtectIntro::ChristmasProtectIntro() */

void __thiscall ChristmasProtectIntro::ChristmasProtectIntro(ChristmasProtectIntro *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0678c4d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  StateMachine<CMPState>::StateMachine((StateMachine<CMPState> *)(this + 0x68));
  return;
}


/* ChristmasProtectIntro::StaticNew() */

ChristmasProtectIntro * ChristmasProtectIntro::StaticNew(void)

{
  ChristmasProtectIntro *this;
  
  this = ::operator_new(0x108);
  ChristmasProtectIntro(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasProtectIntro::onProgressMeterSetFlagCount(int) */

void ChristmasProtectIntro::onProgressMeterSetFlagCount(int param_1)

{
  char cVar1;
  bool bVar2;
  CrazyNPCManager *pCVar3;
  UINewPVPTopZombieQueue *this;
  SeedPacket *this_00;
  WaveManager *this_01;
  SunDropperModule *this_02;
  int iVar4;
  string asStack_60 [8];
  string asStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  cVar1 = CrazyNPCManager::IsNarrationActive(pCVar3);
  if (cVar1 == '\0') {
    this = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
    iVar4 = 0;
    if (this != (UINewPVPTopZombieQueue *)0x0) {
      for (; cVar1 = FUN_03e594a8(this[0x199]), iVar4 < cVar1; iVar4 = iVar4 + 1) {
        UINewPVPTopZombieQueue::gettItem(this,iVar4);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_50);
        if (bVar2) {
          this_00 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
          SeedPacket::SetDisabled(this_00,true);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
      }
    }
    this_01 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
    if (this_01 != (WaveManager *)0x0) {
      WaveManager::SetPause(this_01,true);
    }
    this_02 = (SunDropperModule *)FUN_03e5a6e4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
    ;
    if (this_02 != (SunDropperModule *)0x0) {
      SunDropperModule::SetPaused(this_02,true);
    }
    pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string(asStack_60,"PROTECT_INTRO");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)(ulong)(uint)param_1,onTipNarrationFinished);
    Sexy::Delegate0::Delegate0<ChristmasProtectIntro,void(ChristmasProtectIntro::*)()>
              (aDStack_38,aRStack_50);
    std::string::string(asStack_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar3,asStack_60,aDStack_38,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ChristmasProtectIntro::clearBouncingArrows() */

void __thiscall ChristmasProtectIntro::clearBouncingArrows(ChristmasProtectIntro *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x50);
    uVar2 = FUN_03e594d0(uVar4,*(undefined8 *)(this + 0x58));
    if (uVar2 <= uVar3) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e594dc(uVar4,uVar3);
    plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar1 + 0x48))();
    uVar3 = uVar3 + 1;
  }
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  clear((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
         *)(this + 0x50));
  return;
}


/* ChristmasProtectIntro::~ChristmasProtectIntro() */

void __thiscall ChristmasProtectIntro::~ChristmasProtectIntro(ChristmasProtectIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0678c4d0;
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x68));
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  ~vector((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
           *)(this + 0x50));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* ChristmasProtectIntro::~ChristmasProtectIntro() */

void __thiscall ChristmasProtectIntro::~ChristmasProtectIntro(ChristmasProtectIntro *this)

{
  ~ChristmasProtectIntro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasProtectIntro::addBouncingArrow(Sexy::SexyVector2 const&) */

void __thiscall
ChristmasProtectIntro::addBouncingArrow(ChristmasProtectIntro *this,SexyVector2 *param_1)

{
  Effect_BouncingArrow *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_BouncingArrow>(*(Board **)(gLawnApp + 0x9f0));
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06adee30);
  Effect_BouncingArrow::SetArrowImage(this_00,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Effect_BouncingArrow::SetBounceHeightsBoardSpace(this_00,20.0,40.0);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this_00,true);
  StandaloneEffect::SetScreenSpaceOrigin((StandaloneEffect *)this_00,param_1,1000000);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  push_back((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
             *)(this + 0x50),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasProtectIntro::onCursorAdded(BaseCursor*) */

void __thiscall
ChristmasProtectIntro::onCursorAdded(ChristmasProtectIntro *this,BaseCursor *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 != (BaseCursor *)0x0) && (cVar1 = isInState(this,2), cVar1 != '\0')) &&
     (bVar2 = Sexy::RtObject::IsA<PlantCursor>((RtObject *)param_1), bVar2)) {
    clearBouncingArrows(this);
    BoardTransforms::GridToBoardSpaceX(0);
    iVar3 = FUN_03e59934();
    iVar4 = BoardTransforms::GridToBoardSpaceY(2);
    iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar4 = FUN_03e59934(iVar4 - iVar5 / 2);
    Sexy::FastCurve::SetOutRange(aFStack_10,(float)iVar3,(float)iVar4);
    addBouncingArrow(this,(SexyVector2 *)aFStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasProtectIntro::registerForEvents() */

void __thiscall ChristmasProtectIntro::registerForEvents(ChristmasProtectIntro *this)

{
  undefined *puVar1;
  char cVar2;
  ProfileMgr *pPVar3;
  PlayerInfo *pPVar4;
  long lVar5;
  LevelModuleManager *pLVar6;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
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
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  if ((pPVar4 == (PlayerInfo *)0x0) ||
     (cVar2 = PlayerInfo::GameFeatureIsUnlocked(pPVar4,0x40), cVar2 == '\0')) {
    pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
    cVar2 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar4);
    if (cVar2 == '\0') {
      lVar5 = LevelModule::getManager();
      FUN_03e594b0(lVar5 + 0x80);
      pLVar6 = (LevelModuleManager *)LevelModule::getManager();
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnIntroStarted);
      Sexy::Delegate0::Delegate0<ChristmasProtectIntro,void(ChristmasProtectIntro::*)()>
                (aDStack_38,(CBMemberTranslatorX *)&local_50);
      LevelModuleManager::RegisterOnIntroStarted(pLVar6,aDStack_38);
      pLVar6 = (LevelModuleManager *)LevelModule::getManager();
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnUpdate);
      Sexy::Delegate0::Delegate0<ChristmasProtectIntro,void(ChristmasProtectIntro::*)()>
                (aDStack_38,(CBMemberTranslatorX *)&local_50);
      LevelModuleManager::RegisterOnUpdate(pLVar6,aDStack_38);
      pLVar6 = (LevelModuleManager *)LevelModule::getManager();
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnLevelEnded);
      Sexy::Delegate0::Delegate0<ChristmasProtectIntro,void(ChristmasProtectIntro::*)()>
                (aDStack_38,(CBMemberTranslatorX *)&local_50);
      LevelModuleManager::RegisterOnLevelEnded(pLVar6,aDStack_38);
      puVar1 = gMessageRouter;
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onProgressMeterSetFlagCount);
      local_e0 = local_b8;
      local_f0 = local_c8;
      uStack_e8 = uStack_c0;
      MessageRouter::
      Subscribe<int,Sexy::CBMemberTranslatorX<ChristmasProtectIntro,void(ChristmasProtectIntro::*)(int)>>
                ((MessageRouter *)puVar1,Message::ProgressMeterSetFlagCount,&local_f0);
      puVar1 = gMessageRouter;
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onCursorAdded);
      local_110 = local_b0;
      uStack_108 = uStack_a8;
      local_100 = local_a0;
      MessageRouter::
      Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<ChristmasProtectIntro,void(ChristmasProtectIntro::*)(BaseCursor*)>>
                ((MessageRouter *)puVar1,Message::CursorAdded,&local_110);
      puVar1 = gMessageRouter;
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onPlantPlanted);
      local_120 = local_88;
      local_130 = local_98;
      uStack_128 = uStack_90;
      MessageRouter::
      Subscribe<Plant*,Sexy::CBMemberTranslatorX<ChristmasProtectIntro,void(ChristmasProtectIntro::*)(Plant*)>>
                ((MessageRouter *)puVar1,Message::PlantPlanted,&local_130);
      puVar1 = gMessageRouter;
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onCursorDestroyed);
      local_110 = local_80;
      uStack_108 = uStack_78;
      local_100 = local_70;
      MessageRouter::
      Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<ChristmasProtectIntro,void(ChristmasProtectIntro::*)(BaseCursor*)>>
                ((MessageRouter *)puVar1,Message::CursorDestroyed,&local_110);
      puVar1 = gMessageRouter;
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onCollectableHitGround);
      local_150 = local_68;
      uStack_148 = uStack_60;
      local_140 = local_58;
      MessageRouter::
      Subscribe<Collectable*,Sexy::CBMemberTranslatorX<ChristmasProtectIntro,void(ChristmasProtectIntro::*)(Collectable*)>>
                ((MessageRouter *)puVar1,Message::CollectableHitGround,&local_150);
      puVar1 = gMessageRouter;
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,gatherPlantlessPlantingRestrictions);
      local_170 = local_50;
      uStack_168 = uStack_48;
      local_160 = local_40;
      MessageRouter::
      Subscribe<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<ChristmasProtectIntro,void(ChristmasProtectIntro::*)(Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
                ((MessageRouter *)puVar1,Message::GatherPlantlessPlantingRestrictions,&local_170);
      goto LAB_03e5ade0;
    }
  }
  StandardLevelIntro::registerForEvents((StandardLevelIntro *)this);
LAB_03e5ade0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasProtectIntro::gatherPlantlessPlantingRestrictions(Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
ChristmasProtectIntro::gatherPlantlessPlantingRestrictions
          (ChristmasProtectIntro *this,Point *param_1,vector *param_2)

{
  char cVar1;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isInState(this,2);
  if ((cVar1 != '\0') && ((*(int *)param_1 != 0 || (*(int *)(param_1 + 4) != 2)))) {
    local_c = 4;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
               (PlantingReason *)&local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasProtectIntro::StaticClassInit() */

void ChristmasProtectIntro::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<CMPState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<CMPState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ChristmasProtectIntro");
      (*pcVar4)(plVar1,asStack_150,FUN_03e5b89c,0x108,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<CMPState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x100);
  Sexy::Delegate1<CMPState>::
  Delegate1<ChristmasProtectIntro,void(ChristmasProtectIntro::*)(CMPState)>(aDStack_138,aCStack_180)
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x108);
  Sexy::Delegate0::Delegate0<ChristmasProtectIntro,void(ChristmasProtectIntro::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x110);
  Sexy::Delegate1<CMPState>::
  Delegate1<ChristmasProtectIntro,void(ChristmasProtectIntro::*)(CMPState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CMPState_START_TUTORIAL");
  StateDefinition<CMPState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e5b270(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x118);
  Sexy::Delegate1<CMPState>::
  Delegate1<ChristmasProtectIntro,void(ChristmasProtectIntro::*)(CMPState)>(aDStack_138,aCStack_180)
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x120);
  Sexy::Delegate0::Delegate0<ChristmasProtectIntro,void(ChristmasProtectIntro::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x128);
  Sexy::Delegate1<CMPState>::
  Delegate1<ChristmasProtectIntro,void(ChristmasProtectIntro::*)(CMPState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CMPState_WAIT_STEAL");
  StateDefinition<CMPState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e5b270(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x130);
  Sexy::Delegate1<CMPState>::
  Delegate1<ChristmasProtectIntro,void(ChristmasProtectIntro::*)(CMPState)>(aDStack_138,aCStack_180)
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x138);
  Sexy::Delegate0::Delegate0<ChristmasProtectIntro,void(ChristmasProtectIntro::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x140);
  Sexy::Delegate1<CMPState>::
  Delegate1<ChristmasProtectIntro,void(ChristmasProtectIntro::*)(CMPState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CMPState_WAIT_PLANTED");
  StateDefinition<CMPState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e5b270(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x148);
  Sexy::Delegate1<CMPState>::
  Delegate1<ChristmasProtectIntro,void(ChristmasProtectIntro::*)(CMPState)>(aDStack_138,aCStack_180)
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x150);
  Sexy::Delegate0::Delegate0<ChristmasProtectIntro,void(ChristmasProtectIntro::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x158);
  Sexy::Delegate1<CMPState>::
  Delegate1<ChristmasProtectIntro,void(ChristmasProtectIntro::*)(CMPState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CMPState_START_GAME");
  StateDefinition<CMPState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e5b270(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ChristmasProtectIntro::StaticGetClass() */

long * ChristmasProtectIntro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ChristmasProtectIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasProtectIntro::setState(CMPState) */

void __thiscall ChristmasProtectIntro::setState(ChristmasProtectIntro *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<CMPState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<CMPState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<CMPState>::GetStateDefinition
                     ((StateMachineTable<CMPState> *)pSVar2,param_2);
  StateDefinition<CMPState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<CMPState>::SetContext(aSStack_a8,this);
  StateMachine<CMPState>::SetState
            ((StateMachine<CMPState> *)(this + 0x68),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChristmasProtectIntro::OnIntroStarted() */

void __thiscall ChristmasProtectIntro::OnIntroStarted(ChristmasProtectIntro *this)

{
  *(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x97d) = 0;
  StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,1);
  setState(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasProtectIntro::startGame() */

void __thiscall ChristmasProtectIntro::startGame(ChristmasProtectIntro *this)

{
  char cVar1;
  bool bVar2;
  UINewPVPTopZombieQueue *this_00;
  SeedPacket *this_01;
  WaveManager *this_02;
  SunDropperModule *this_03;
  int iVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  setState(this,3);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  clearBouncingArrows(this);
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 != (UINewPVPTopZombieQueue *)0x0) {
    for (; cVar1 = FUN_03e594a8(this_00[0x199]), iVar3 < cVar1; iVar3 = iVar3 + 1) {
      UINewPVPTopZombieQueue::gettItem(this_00,iVar3);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
      if (bVar2) {
        this_01 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        SeedPacket::SetDisabled(this_01,false);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
  }
  this_02 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
  if (this_02 != (WaveManager *)0x0) {
    WaveManager::SetPause(this_02,false);
  }
  this_03 = (SunDropperModule *)FUN_03e5a6e4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_03 != (SunDropperModule *)0x0) {
    SunDropperModule::SetPaused(this_03,false);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ChristmasProtectIntro::onPlantPlanted(Plant*) */

void ChristmasProtectIntro::onPlantPlanted(Plant *param_1)

{
  char cVar1;
  
  cVar1 = isInState((ChristmasProtectIntro *)param_1,2);
  if (cVar1 == '\0') {
    return;
  }
  clearBouncingArrows((ChristmasProtectIntro *)param_1);
  startGame((ChristmasProtectIntro *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasProtectIntro::onTipNarrationFinished() */

void __thiscall ChristmasProtectIntro::onTipNarrationFinished(ChristmasProtectIntro *this)

{
  string *psVar1;
  ZombieType *this_00;
  Board *pBVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  setState(this,1);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_10,"feastivus_swashbuckler");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  std::string::~string(asStack_10);
  nop();
  this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
  Board::AddZombieInRow(pBVar2,asStack_10,2,0xfffffffb,0,1,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasProtectIntro::onCollectableHitGround(Collectable*) */

void __thiscall
ChristmasProtectIntro::onCollectableHitGround(ChristmasProtectIntro *this,Collectable *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isInState(this,1);
  if (((cVar1 != '\0') && (param_1 != (Collectable *)0x0)) &&
     (bVar2 = Sexy::RtObject::IsA<CollectableSeedPacketPlantable>((RtObject *)param_1), bVar2)) {
    setState(this,2);
    puVar3 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    fVar4 = (float)FUN_03e59948(*puVar3);
    fVar5 = (float)FUN_03e59948(puVar3[1]);
    Sexy::FastCurve::SetOutRange(aFStack_10,fVar4,fVar5);
    addBouncingArrow(this,(SexyVector2 *)aFStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasProtectIntro::setChristmasProtectIntroStateSerialization(int) */

void __thiscall
ChristmasProtectIntro::setChristmasProtectIntroStateSerialization
          (ChristmasProtectIntro *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<CMPState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((uint)param_1 < 4) {
    this_00 = (StateMachineTableBuilder *)
              Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
    pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
    pSVar2 = StateMachineTableBuilder::GetTable<CMPState>(this_00,pRVar1);
    pSVar3 = (StateDefinition *)
             StateMachineTable<CMPState>::GetStateDefinition
                       ((StateMachineTable<CMPState> *)pSVar2,param_1);
    StateDefinition<CMPState>::StateDefinition(aSStack_a8,pSVar3);
    StateDefinition<CMPState>::SetContext(aSStack_a8,this);
    StateMachine<DPEState>::SetStateNoTransition
              ((StateMachine<DPEState> *)(this + 0x68),(StateDefinition *)aSStack_a8);
    StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

