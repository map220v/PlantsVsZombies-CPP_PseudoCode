// Class: SkyCityIntro


/* SkyCityIntro::onCursorDestroyed(BaseCursor*) */

void SkyCityIntro::onCursorDestroyed(BaseCursor *param_1)

{
  return;
}


/* SkyCityIntro::OnLevelEnded() */

void __thiscall SkyCityIntro::OnLevelEnded(SkyCityIntro *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* SkyCityIntro::isInState(SCIState) const */

bool __thiscall SkyCityIntro::isInState(SkyCityIntro *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_03e56268(*(undefined4 *)(this + 0x68));
  return iVar1 == param_2;
}


/* SkyCityIntro::getSkyCityIntroStateSerialization() */

void __thiscall SkyCityIntro::getSkyCityIntroStateSerialization(SkyCityIntro *this)

{
  FUN_03e56268(*(undefined4 *)(this + 0x68));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityIntro::DrawRightHighlight(Sexy::Graphics*) */

void __thiscall SkyCityIntro::DrawRightHighlight(SkyCityIntro *this,Graphics *param_1)

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
  iVar1 = FUN_03e5661c(200);
  fVar9 = *(float *)(param_1 + 0x18);
  fVar11 = *(float *)(param_1 + 0x24);
  iVar2 = FUN_03e5661c(0xa0);
  fVar10 = *(float *)(param_1 + 0x1c);
  Sexy::Insets::Insets(aIStack_18,0xff,0xfc,0x5f,0x95);
  Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar7 = (float)FUN_03e56630((float)(iVar3 * 3) * *(float *)(param_1 + 0x18));
  BoardConstants::GRIDSQUARE_WIDTH();
  iVar3 = FUN_03e5661c();
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  fVar8 = *(float *)(param_1 + 0x18);
  iVar5 = BoardConstants::NUMBER_OF_ROWS();
  iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar5 = FUN_03e5661c(iVar5 * iVar6);
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


/* SkyCityIntro::OnUpdate() */

void __thiscall SkyCityIntro::OnUpdate(SkyCityIntro *this)

{
  StateMachine<SCIState>::UpdateState((StateMachine<SCIState> *)(this + 0x68));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityIntro::onAddToRenderQueue(RenderQueue*) */

void __thiscall SkyCityIntro::onAddToRenderQueue(SkyCityIntro *this,RenderQueue *param_1)

{
  char cVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isInState(this,1);
  if ((cVar1 != '\0') || (cVar1 = isInState(this,3), cVar1 != '\0')) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,DrawRightHighlight);
    Sexy::Delegate1<Sexy::Graphics*>::Delegate1<SkyCityIntro,void(SkyCityIntro::*)(Sexy::Graphics*)>
              (aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,0x61a81,aDStack_38);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* SkyCityIntro::SkyCityIntro() */

void __thiscall SkyCityIntro::SkyCityIntro(SkyCityIntro *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0678c220;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  StateMachine<SCIState>::StateMachine((StateMachine<SCIState> *)(this + 0x68));
  return;
}


/* SkyCityIntro::StaticNew() */

SkyCityIntro * SkyCityIntro::StaticNew(void)

{
  SkyCityIntro *this;
  
  this = ::operator_new(0x108);
  SkyCityIntro(this);
  return this;
}


/* SkyCityIntro::clearBouncingArrows() */

void __thiscall SkyCityIntro::clearBouncingArrows(SkyCityIntro *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x50);
    uVar2 = FUN_03e5626c(uVar4,*(undefined8 *)(this + 0x58));
    if (uVar2 <= uVar3) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e56278(uVar4,uVar3);
    plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar1 + 0x48))();
    uVar3 = uVar3 + 1;
  }
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  clear((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
         *)(this + 0x50));
  return;
}


/* SkyCityIntro::~SkyCityIntro() */

void __thiscall SkyCityIntro::~SkyCityIntro(SkyCityIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0678c220;
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x68));
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  ~vector((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
           *)(this + 0x50));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* SkyCityIntro::~SkyCityIntro() */

void __thiscall SkyCityIntro::~SkyCityIntro(SkyCityIntro *this)

{
  ~SkyCityIntro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityIntro::addBouncingArrow(Sexy::SexyVector2 const&) */

void __thiscall SkyCityIntro::addBouncingArrow(SkyCityIntro *this,SexyVector2 *param_1)

{
  Effect_BouncingArrow *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_BouncingArrow>(*(Board **)(gLawnApp + 0x9f0));
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06adec40);
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
/* SkyCityIntro::registerForEvents() */

void __thiscall SkyCityIntro::registerForEvents(SkyCityIntro *this)

{
  undefined *puVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  long lVar4;
  LevelModuleManager *pLVar5;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
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
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar2 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar3);
  if (cVar2 == '\0') {
    lVar4 = LevelModule::getManager();
    FUN_03e56250(lVar4 + 0x80);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnIntroStarted);
    Sexy::Delegate0::Delegate0<SkyCityIntro,void(SkyCityIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnIntroStarted(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnUpdate);
    Sexy::Delegate0::Delegate0<SkyCityIntro,void(SkyCityIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnUpdate(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnLevelEnded);
    Sexy::Delegate0::Delegate0<SkyCityIntro,void(SkyCityIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnLevelEnded(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAddToRenderQueue);
    Sexy::Delegate1<RenderQueue*>::Delegate1<SkyCityIntro,void(SkyCityIntro::*)(RenderQueue*)>
              ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterAddToRenderQueue(pLVar5,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onProgressMeterSetFlagCount);
    local_b0 = local_88;
    local_c0 = local_98;
    uStack_b8 = uStack_90;
    MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<SkyCityIntro,void(SkyCityIntro::*)(int)>>
              ((MessageRouter *)puVar1,Message::ProgressMeterSetFlagCount,&local_c0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCursorAdded);
    local_e0 = local_80;
    uStack_d8 = uStack_78;
    local_d0 = local_70;
    MessageRouter::
    Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<SkyCityIntro,void(SkyCityIntro::*)(BaseCursor*)>>
              ((MessageRouter *)puVar1,Message::CursorAdded,&local_e0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPlantPlanted);
    local_f0 = local_58;
    local_100 = local_68;
    uStack_f8 = uStack_60;
    MessageRouter::
    Subscribe<Plant*,Sexy::CBMemberTranslatorX<SkyCityIntro,void(SkyCityIntro::*)(Plant*)>>
              ((MessageRouter *)puVar1,Message::PlantPlanted,&local_100);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCursorDestroyed);
    local_e0 = local_50;
    uStack_d8 = uStack_48;
    local_d0 = local_40;
    MessageRouter::
    Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<SkyCityIntro,void(SkyCityIntro::*)(BaseCursor*)>>
              ((MessageRouter *)puVar1,Message::CursorDestroyed,&local_e0);
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
/* SkyCityIntro::StaticClassInit() */

void SkyCityIntro::StaticClassInit(void)

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
  Delegate1<SCIState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<SCIState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"SkyCityIntro");
      (*pcVar4)(plVar1,asStack_150,FUN_03e58260,0x108,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<SCIState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x100);
  Sexy::Delegate1<SCIState>::Delegate1<SkyCityIntro,void(SkyCityIntro::*)(SCIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x108);
  Sexy::Delegate0::Delegate0<SkyCityIntro,void(SkyCityIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x110);
  Sexy::Delegate1<SCIState>::Delegate1<SkyCityIntro,void(SkyCityIntro::*)(SCIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SCIState_START_TUTORIAL");
  StateDefinition<SCIState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e578b4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x118);
  Sexy::Delegate1<SCIState>::Delegate1<SkyCityIntro,void(SkyCityIntro::*)(SCIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x120);
  Sexy::Delegate0::Delegate0<SkyCityIntro,void(SkyCityIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x128);
  Sexy::Delegate1<SCIState>::Delegate1<SkyCityIntro,void(SkyCityIntro::*)(SCIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SCIState_SHOW_REGIONSKY");
  StateDefinition<SCIState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e578b4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x130);
  Sexy::Delegate1<SCIState>::Delegate1<SkyCityIntro,void(SkyCityIntro::*)(SCIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x138);
  Sexy::Delegate0::Delegate0<SkyCityIntro,void(SkyCityIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x140);
  Sexy::Delegate1<SCIState>::Delegate1<SkyCityIntro,void(SkyCityIntro::*)(SCIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SCIState_WAIT_PLANT_SELECT");
  StateDefinition<SCIState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e578b4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x148);
  Sexy::Delegate1<SCIState>::Delegate1<SkyCityIntro,void(SkyCityIntro::*)(SCIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x150);
  Sexy::Delegate0::Delegate0<SkyCityIntro,void(SkyCityIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x158);
  Sexy::Delegate1<SCIState>::Delegate1<SkyCityIntro,void(SkyCityIntro::*)(SCIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SCIState_WAIT_PLANTED");
  StateDefinition<SCIState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e578b4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x160);
  Sexy::Delegate1<SCIState>::Delegate1<SkyCityIntro,void(SkyCityIntro::*)(SCIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x168);
  Sexy::Delegate0::Delegate0<SkyCityIntro,void(SkyCityIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x170);
  Sexy::Delegate1<SCIState>::Delegate1<SkyCityIntro,void(SkyCityIntro::*)(SCIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SCIState_SHIP_HEALTH");
  StateDefinition<SCIState>::StateDefinition
            (aSStack_a8,4,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e578b4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x178);
  Sexy::Delegate1<SCIState>::Delegate1<SkyCityIntro,void(SkyCityIntro::*)(SCIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x180);
  Sexy::Delegate0::Delegate0<SkyCityIntro,void(SkyCityIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x188);
  Sexy::Delegate1<SCIState>::Delegate1<SkyCityIntro,void(SkyCityIntro::*)(SCIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SCIState_START_GAME");
  StateDefinition<SCIState>::StateDefinition
            (aSStack_a8,5,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e578b4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* SkyCityIntro::StaticGetClass() */

long * SkyCityIntro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SkyCityIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityIntro::setState(SCIState) */

void __thiscall SkyCityIntro::setState(SkyCityIntro *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<SCIState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<SCIState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<SCIState>::GetStateDefinition
                     ((StateMachineTable<SCIState> *)pSVar2,param_2);
  StateDefinition<SCIState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<SCIState>::SetContext(aSStack_a8,this);
  StateMachine<SCIState>::SetState
            ((StateMachine<SCIState> *)(this + 0x68),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkyCityIntro::OnIntroStarted() */

void __thiscall SkyCityIntro::OnIntroStarted(SkyCityIntro *this)

{
  Board *this_00;
  
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  this_00[0x97d] = (Board)0x0;
  Board::AddSunMoney(this_00,0x96);
  StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,1);
  setState(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityIntro::onPlantPlanted(Plant*) */

void SkyCityIntro::onPlantPlanted(Plant *param_1)

{
  char cVar1;
  long lVar2;
  Effect_BouncingArrow *this;
  CrazyNPCManager *pCVar3;
  float fVar4;
  float fVar5;
  undefined4 local_78;
  undefined4 local_74;
  Point aPStack_70 [8];
  TPoint aTStack_68 [8];
  int local_60;
  int local_5c;
  FastCurve aFStack_58 [8];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isInState((SkyCityIntro *)param_1,3);
  if (cVar1 != '\0') {
    setState((SkyCityIntro *)param_1,4);
    clearBouncingArrows((SkyCityIntro *)param_1);
    std::string::string((string *)&local_50,"UIAirshipProgress");
    lVar2 = UIWidget::GetWidgetBySheetName((string *)&local_50);
    std::string::~string((string *)&local_50);
    nop();
    if (lVar2 != 0) {
      UIWidget::GetDrawRect();
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_78,2.0,-10.0);
      fVar4 = (float)FUN_03e56640(local_78);
      fVar5 = (float)FUN_03e56640(local_74);
      Sexy::Point::Point(aPStack_70,(int)((float)(local_48 / 2) + (float)local_50 + fVar4),
                         (int)((float)local_44 + (float)local_4c + fVar5));
      Board::GetBoardBaseOffset();
      Sexy::TPoint<int>::operator-((TPoint<int> *)aPStack_70,aTStack_68);
      Sexy::Point::Point((Point *)&local_60,(TPoint *)aFStack_58);
      Board::TranslateScreenPositionToBoardPosition
                (*(Board **)(gLawnApp + 0x9f0),(Point *)&local_60);
      Sexy::FastCurve::SetOutRange(aFStack_58,(float)local_60,(float)local_5c);
      this = (Effect_BouncingArrow *)
             addBouncingArrow((SkyCityIntro *)param_1,(SexyVector2 *)aFStack_58);
      Effect_BouncingArrow::PointUp(this);
    }
    pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string((string *)&local_60,"SHOWSHIPHEALTH_INTRO");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,onShowShipHealthNarrationFinished);
    Sexy::Delegate0::Delegate0<SkyCityIntro,void(SkyCityIntro::*)()>(aDStack_38,(string *)&local_50)
    ;
    std::string::string((string *)aFStack_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar3,(string *)&local_60,aDStack_38,aFStack_58);
    std::string::~string((string *)aFStack_58);
    nop();
    std::string::~string((string *)&local_60);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityIntro::onCursorAdded(BaseCursor*) */

void __thiscall SkyCityIntro::onCursorAdded(SkyCityIntro *this,BaseCursor *param_1)

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
    setState(this,3);
    clearBouncingArrows(this);
    BoardTransforms::GridToBoardSpaceX(3);
    iVar3 = FUN_03e5661c();
    iVar4 = BoardTransforms::GridToBoardSpaceY(2);
    iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar4 = FUN_03e5661c(iVar4 - iVar5 / 2);
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
/* SkyCityIntro::startGame() */

void __thiscall SkyCityIntro::startGame(SkyCityIntro *this)

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
  
  iVar3 = 1;
  local_8 = ___stack_chk_guard;
  setState(this,5);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  clearBouncingArrows(this);
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 != (UINewPVPTopZombieQueue *)0x0) {
    for (; cVar1 = FUN_03e56248(this_00[0x199]), iVar3 < cVar1; iVar3 = iVar3 + 1) {
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
  this_03 = (SunDropperModule *)FUN_03e57318(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_03 != (SunDropperModule *)0x0) {
    SunDropperModule::SetPaused(this_03,false);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityIntro::onShowShipHealthNarrationFinished() */

void __thiscall SkyCityIntro::onShowShipHealthNarrationFinished(SkyCityIntro *this)

{
  char cVar1;
  bool bVar2;
  UINewPVPTopZombieQueue *this_00;
  SeedPacket *this_01;
  WaveManager *this_02;
  SunDropperModule *this_03;
  int iVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long lStack_8;
  
  iVar3 = 1;
  lStack_8 = ___stack_chk_guard;
  setState(this,5);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  clearBouncingArrows(this);
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 != (UINewPVPTopZombieQueue *)0x0) {
    for (; cVar1 = FUN_03e56248(this_00[0x199]), iVar3 < cVar1; iVar3 = iVar3 + 1) {
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
  this_03 = (SunDropperModule *)FUN_03e57318(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_03 != (SunDropperModule *)0x0) {
    SunDropperModule::SetPaused(this_03,false);
  }
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityIntro::onProgressMeterSetFlagCount(int) */

void SkyCityIntro::onProgressMeterSetFlagCount(int param_1)

{
  char cVar1;
  CrazyNPCManager *pCVar2;
  WaveManager *this;
  SunDropperModule *this_00;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar2 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  cVar1 = CrazyNPCManager::IsNarrationActive(pCVar2);
  if (cVar1 == '\0') {
    setState((SkyCityIntro *)(ulong)(uint)param_1,1);
    this = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
    if (this != (WaveManager *)0x0) {
      WaveManager::SetPause(this,true);
    }
    this_00 = (SunDropperModule *)FUN_03e57318(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
    ;
    if (this_00 != (SunDropperModule *)0x0) {
      SunDropperModule::SetPaused(this_00,true);
    }
    pCVar2 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string(asStack_60,"SHOWREGINSKY_INTRO");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)(ulong)(uint)param_1,onShowReginSkyNarrationFinished);
    Sexy::Delegate0::Delegate0<SkyCityIntro,void(SkyCityIntro::*)()>(aDStack_38,aCStack_50);
    std::string::string(asStack_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar2,asStack_60,aDStack_38,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityIntro::onShowReginSkyNarrationFinished() */

void __thiscall SkyCityIntro::onShowReginSkyNarrationFinished(SkyCityIntro *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  UINewPVPTopZombieQueue *this_00;
  FishingEnergyBar *this_01;
  SeedPacket *this_02;
  Effect_BouncingArrow *this_03;
  TPoint aTStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  int local_30;
  int local_2c;
  Point aPStack_28 [8];
  FastCurve aFStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  setState(this,2);
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 != (UINewPVPTopZombieQueue *)0x0) {
    Board::GetBoardBaseOffset();
    UINewPVPTopZombieQueue::gettItem(this_00,0);
    this_01 = (FishingEnergyBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    FishingEnergyBar::onGameUnpaused(this_01);
    for (iVar3 = 1; cVar1 = FUN_03e56248(this_00[0x199]), iVar3 < cVar1; iVar3 = iVar3 + 1) {
      UINewPVPTopZombieQueue::gettItem(this_00,iVar3);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_18);
      if (bVar2) {
        this_02 = (SeedPacket *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        SeedPacket::SetDisabled(this_02,true);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    UIWidget::GetDrawRect();
    Sexy::Point::Point(aPStack_28,local_18 + local_10,local_14 + local_c / 2);
    Sexy::TPoint<int>::operator-((TPoint<int> *)aPStack_28,aTStack_40);
    Sexy::Point::Point((Point *)&local_30,(TPoint *)aFStack_20);
    Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
    iVar3 = FUN_03e5661c(0x14);
    Sexy::FastCurve::SetOutRange(aFStack_20,(float)(local_30 + iVar3),(float)local_2c);
    this_03 = (Effect_BouncingArrow *)addBouncingArrow(this,(SexyVector2 *)aFStack_20);
    Effect_BouncingArrow::PointLeft(this_03);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityIntro::setSkyCityIntroStateSerialization(int) */

void __thiscall SkyCityIntro::setSkyCityIntroStateSerialization(SkyCityIntro *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<SCIState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((uint)param_1 < 6) {
    this_00 = (StateMachineTableBuilder *)
              Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
    pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
    pSVar2 = StateMachineTableBuilder::GetTable<SCIState>(this_00,pRVar1);
    pSVar3 = (StateDefinition *)
             StateMachineTable<SCIState>::GetStateDefinition
                       ((StateMachineTable<SCIState> *)pSVar2,param_1);
    StateDefinition<SCIState>::StateDefinition(aSStack_a8,pSVar3);
    StateDefinition<SCIState>::SetContext(aSStack_a8,this);
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

