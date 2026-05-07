// Class: IntroFishing


/* IntroFishing::onGameplayStarted() */

void IntroFishing::onGameplayStarted(void)

{
  return;
}


/* IntroFishing::onLevelEnded() */

void __thiscall IntroFishing::onLevelEnded(IntroFishing *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* IntroFishing::isInState(FIState) const */

bool __thiscall IntroFishing::isInState(IntroFishing *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_047c7858(*(undefined4 *)(this + 0x50));
  return iVar1 == param_2;
}


/* IntroFishing::onFishingTutorial_CheckTouch(Sexy::Touch const&, bool*) */

void __thiscall
IntroFishing::onFishingTutorial_CheckTouch(IntroFishing *this,Touch *param_1,bool *param_2)

{
  char cVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  if ((*(int *)(param_1 + 0x30) == 0) &&
     (iVar2 = FUN_047c7858(*(undefined4 *)(this + 0x50)), iVar2 < 3)) {
    if (param_2 != (bool *)0x0) {
      *param_2 = (bool)this[0x118];
    }
    cVar1 = isInState(this,2);
    if (cVar1 != '\0') {
      fVar4 = *(float *)(this + 0x110);
      fVar3 = (float)PVZ_EOT();
      if (fVar4 != fVar3) {
        *(undefined4 *)(this + 0x110) = 0;
        return;
      }
      if (fVar4 != *(float *)(this + 0x114)) {
        *(undefined4 *)(this + 0x114) = 0;
      }
    }
  }
  return;
}


/* IntroFishing::onUpdate() */

void __thiscall IntroFishing::onUpdate(IntroFishing *this)

{
  StateMachine<FIState>::UpdateState((StateMachine<FIState> *)(this + 0x50));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroFishing::onEnterState_CannonDesc(FIState) */

void IntroFishing::onEnterState_CannonDesc(long param_1)

{
  bool bVar1;
  StandaloneEffect *this;
  Board *pBVar2;
  float fVar3;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  *(undefined1 *)(param_1 + 0x118) = 0;
  local_8 = ___stack_chk_guard;
  this = (StandaloneEffect *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xf0))
  ;
  StandaloneEffect::SetVisibility(this,false);
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(auStack_10,L"[FISHING_INTRO_CANNONDESC]",auStack_18);
  Board::DisplayAdvice(pBVar2,auStack_10,6,0);
  FUN_05476c50(auStack_10);
  nop();
  fVar3 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(param_1 + 0x110) = fVar3 + 3.0;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroFishing::GetFishingModule() */

void IntroFishing::GetFishingModule(void)

{
  LevelModuleManager *this;
  
  this = (LevelModuleManager *)FUN_047c7840(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  LevelModuleManager::GetModuleByClass<FishingModule>(this);
  return;
}


/* IntroFishing::IntroFishing() */

void __thiscall IntroFishing::IntroFishing(IntroFishing *this)

{
  undefined4 uVar1;
  
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_068e46d0;
  StateMachine<FIState>::StateMachine((StateMachine<FIState> *)(this + 0x50));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  uVar1 = PVZ_EOT();
  this[0x118] = (IntroFishing)0x0;
  *(undefined4 *)(this + 0x110) = uVar1;
  *(undefined4 *)(this + 0x114) = uVar1;
  return;
}


/* IntroFishing::StaticNew() */

IntroFishing * IntroFishing::StaticNew(void)

{
  IntroFishing *this;
  
  this = ::operator_new(0x120);
  IntroFishing(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroFishing::onSkyCannonTypeSelected(int) */

void __thiscall IntroFishing::onSkyCannonTypeSelected(IntroFishing *this,int param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  char cVar2;
  int iVar3;
  FishingModule *this_01;
  StandaloneEffect *pSVar4;
  RtWeakPtrBase *pRVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  SalesProgressBar *this_03;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = isInState(this,1);
  if ((cVar2 != '\0') && (param_1 == 2)) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0);
    this_01 = (FishingModule *)GetFishingModule();
    FishingModule::SetCannonLevel(this_01,2);
    this[0x118] = (IntroFishing)0x1;
    pSVar4 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    StandaloneEffect::SetVisibility(pSVar4,false);
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    cVar2 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::empty
                      ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                       (this + 0xf8));
    if (cVar2 == '\0') {
      pRVar5 = (RtWeakPtrBase *)FUN_047c785c(*(undefined8 *)(this + 0xf8),0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar5);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
      if (cVar2 != '\0') {
        this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        puVar6 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(this_02);
        local_18 = *puVar6;
        local_10 = *(undefined4 *)(puVar6 + 1);
        plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        lVar8 = (**(code **)(*plVar7 + 0x178))();
        iVar1 = *(int *)(lVar8 + 4);
        this_03 = (SalesProgressBar *)
                  CachedResourcePtr<Sexy::Image>::operator->
                            ((CachedResourcePtr<Sexy::Image> *)&DAT_06b26810);
        iVar3 = SalesProgressBar::GetCurrentLevel(this_03);
        local_18 = CONCAT44((float)(iVar1 - iVar3),(undefined4)local_18);
        pSVar4 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        StandaloneEffect::SetBoardSpaceOrigin(pSVar4,(SexyVector3 *)&local_18,1000000);
        pSVar4 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        StandaloneEffect::SetVisibility(pSVar4,true);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroFishing::CheckZombiesDie() */

void __thiscall IntroFishing::CheckZombiesDie(IntroFishing *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  long *plVar4;
  undefined1 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xf8);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      uVar5 = 1;
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00)
      ;
LAB_047c8874:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar5);
    }
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar2 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      cVar2 = (**(code **)(*plVar4 + 0x328))();
      if (cVar2 == '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        uVar5 = 0;
        goto LAB_047c8874;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroFishing::ClearIntro() */

void __thiscall IntroFishing::ClearIntro(IntroFishing *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  long *plVar4;
  StandaloneEffect *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xf8);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar2 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      (**(code **)(*plVar4 + 0x48))();
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xf0));
  if (cVar2 != '\0') {
    this_01 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
    StandaloneEffect::SetVisibility(this_01,false);
  }
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  this[0x118] = (IntroFishing)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroFishing::onExitState_StartTutorial(FIState) */

void IntroFishing::onExitState_StartTutorial(long param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  long *plVar4;
  StandaloneEffect *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(param_1 + 0xf8);
  lStack_8 = ___stack_chk_guard;
  uStack_18 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this);
  uStack_10 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&uStack_18,(__normal_iterator *)&uStack_10), bVar1)
  {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar2 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      (**(code **)(*plVar4 + 0x48))();
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&uStack_18);
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0xf0));
  if (cVar2 != '\0') {
    this_00 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xf0));
    StandaloneEffect::SetVisibility(this_00,false);
  }
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  *(undefined1 *)(param_1 + 0x118) = 0;
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroFishing::onEnterState_StartGame(FIState) */

void IntroFishing::onEnterState_StartGame(IntroFishing *param_1)

{
  long lVar1;
  
  lVar1 = GetFishingModule();
  FUN_047c7848(lVar1 + 0x20,0);
  ClearIntro(param_1);
  StandardLevelIntro::startStandardIntro((StandardLevelIntro *)param_1,1);
  return;
}


/* IntroFishing::~IntroFishing() */

void __thiscall IntroFishing::~IntroFishing(IntroFishing *this)

{
  char cVar1;
  long *plVar2;
  RtMixedPtrBase *this_00;
  
  this_00 = (RtMixedPtrBase *)(this + 0xf0);
  *(undefined ***)this = &PTR_GetModuleClass_068e46d0;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0xf8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x50));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* IntroFishing::~IntroFishing() */

void __thiscall IntroFishing::~IntroFishing(IntroFishing *this)

{
  ~IntroFishing(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroFishing::SpawnZombie(Sexy::SexyVector3 const&) */

void IntroFishing::SpawnZombie(SexyVector3 *param_1)

{
  string *psVar1;
  Zombie *this;
  long *plVar2;
  code *pcVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_10,"skycity");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  std::string::~string(asStack_10);
  nop();
  plVar2 = *(long **)(gLawnApp + 0x9f0);
  pcVar3 = *(code **)(*plVar2 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
  this = (Zombie *)(*pcVar3)(plVar2,asStack_10,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  Zombie::SetZombieScale(this,0.5);
  BoardEntity::PlaceOnBoard((SexyVector3 *)this);
  (**(code **)(*(long *)this + 600))(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroFishing::onEnterState_StartTutorial(FIState) */

void IntroFishing::onEnterState_StartTutorial(SexyVector3 *param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  Effect_BouncingArrow *pEVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar6;
  SalesProgressBar *this_01;
  StandaloneEffect *pSVar7;
  Board *pBVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  this = (RtMixedPtrBase *)(param_1 + 0xf0);
  local_8 = ___stack_chk_guard;
  lVar4 = GetFishingModule();
  FUN_047c7848(lVar4 + 0x20,1);
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  pBVar8 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178((RtWeakPtr<Sexy::ResourceInfo> *)&local_18,L"[FISHING_INTRO_USECANNON1]",aRStack_20);
  Board::DisplayAdvice(pBVar8,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,6,0);
  FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 == '\0') {
    pEVar5 = Board::AddEffect<Effect_BouncingArrow>(*(Board **)(gLawnApp + 0x9f0));
    CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06b26810);
    Effect_BouncingArrow::SetArrowImage(pEVar5,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Effect_BouncingArrow::SetBounceHeightsBoardSpace(pEVar5,5.0,25.0);
    StandaloneEffect::SetVisibility((StandaloneEffect *)pEVar5,false);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  }
  iVar2 = BoardTransforms::GridToBoardSpaceX(4);
  iVar3 = BoardTransforms::GridToBoardSpaceY(2);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)iVar2,(float)iVar3,0.0);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)SpawnZombie(param_1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (param_1 + 0xf8),(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  pEVar5 = (Effect_BouncingArrow *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  Effect_BouncingArrow::PointDown(pEVar5);
  puVar6 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  local_18 = *puVar6;
  local_10 = *(undefined4 *)(puVar6 + 1);
  lVar4 = (**(code **)(*(long *)this_00 + 0x178))(this_00);
  iVar2 = *(int *)(lVar4 + 4);
  this_01 = (SalesProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06b26810);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_01);
  local_18 = CONCAT44((float)(iVar2 - iVar3),(undefined4)local_18);
  pSVar7 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar7,(SexyVector3 *)&local_18,1000000);
  pSVar7 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  StandaloneEffect::SetVisibility(pSVar7,true);
  param_1[0x118] = (SexyVector3)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroFishing::onEnterState_ChangeLaser(FIState) */

void IntroFishing::onEnterState_ChangeLaser
               (undefined1 param_1 [16],float param_2,undefined4 param_3,SexyVector3 *param_4)

{
  vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *this;
  bool bVar1;
  int iVar2;
  int iVar3;
  FishingModule *this_00;
  undefined8 *puVar4;
  SkyCannonTypeUI *pSVar5;
  StandaloneEffect *pSVar6;
  string *extraout_x1;
  Board *pBVar7;
  RtObject *this_01;
  float fVar8;
  int local_80;
  int local_7c;
  TPoint aTStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_50;
  float fStack_4c;
  undefined4 local_48;
  float local_40;
  float fStack_3c;
  undefined4 local_38;
  int local_30;
  int local_2c;
  int local_28;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)(param_4 + 0xf8)
  ;
  this_00 = (FishingModule *)GetFishingModule();
  fVar8 = (float)FishingModule::GetCannonFirePos(this_00,2);
  local_60 = fVar8;
  local_5c = param_2;
  local_58 = param_3;
  iVar2 = BoardTransforms::GridToBoardSpaceX(4);
  iVar3 = BoardTransforms::GridToBoardSpaceY(2);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_50,(float)iVar2,(float)iVar3,0.0);
  local_40 = local_50;
  local_38 = local_48;
  SpawnZombie(param_4);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)&local_30);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            (this,(RtWeakPtr *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  _local_40 = CONCAT44((fStack_4c - param_2) / ((local_50 - fVar8) / ((local_40 - 50.0) - fVar8)) +
                       param_2,local_40 - 50.0);
  SpawnZombie(param_4);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)&local_30);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            (this,(RtWeakPtr *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  _local_40 = CONCAT44((fStack_4c - param_2) / ((local_50 - fVar8) / ((local_40 + 100.0) - fVar8)) +
                       param_2,local_40 + 100.0);
  SpawnZombie(param_4);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)&local_30);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            (this,(RtWeakPtr *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  pBVar7 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(aRStack_20,L"[FISHING_INTRO_CHANGELASER]",(RtWeakPtr<Sexy::ResourceInfo> *)&local_30)
  ;
  Board::DisplayAdvice(pBVar7,aRStack_20,6,0);
  FUN_05476c50(aRStack_20);
  nop();
  std::string::string((string *)&local_30,"UISkyCannonType");
  UIWidget::GetWidgetGroupBySheetName((UIWidget *)&local_30,extraout_x1);
  std::string::~string((string *)&local_30);
  nop();
  Sexy::Point::Point((Point *)&local_80);
  Board::GetBoardBaseOffset();
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_20);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aRStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    this_01 = (RtObject *)*puVar4;
    if ((this_01 != (RtObject *)0x0) &&
       (bVar1 = Sexy::RtObject::IsA<SkyCannonTypeUI>(this_01), bVar1)) {
      pSVar5 = Sexy::RtObject::Cast<SkyCannonTypeUI>(this_01);
      iVar2 = FUN_047c7844(*(undefined4 *)(pSVar5 + 0x168));
      if (iVar2 == 2) {
        UIWidget::GetDrawRect();
        local_7c = local_2c;
        local_80 = local_30 + local_28 / 2;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_70);
  }
  Sexy::TPoint<int>::operator-=((TPoint<int> *)&local_80,aTStack_78);
  Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_80);
  pSVar6 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_4 + 0xf0));
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,(float)local_80,(float)local_7c);
  StandaloneEffect::SetScreenSpaceOrigin(pSVar6,(SexyVector2 *)&local_30,1000000);
  pSVar6 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_4 + 0xf0));
  StandaloneEffect::SetVisibility(pSVar6,true);
  param_4[0x118] = (SexyVector3)0x0;
  std::vector<UIWidget*,std::allocator<UIWidget*>>::~vector
            ((vector<UIWidget*,std::allocator<UIWidget*>> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroFishing::registerForEvents() */

void __thiscall IntroFishing::registerForEvents(IntroFishing *this)

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
  FUN_047c7834(lVar2 + 0x80);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onIntroStarted);
  Sexy::Delegate0::Delegate0<IntroFishing,void(IntroFishing::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnIntroStarted(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<IntroFishing,void(IntroFishing::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelEnded);
  Sexy::Delegate0::Delegate0<IntroFishing,void(IntroFishing::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar3,aDStack_38);
  pLVar3 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<IntroFishing,void(IntroFishing::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar3,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSkyCannonTypeSelected);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<IntroFishing,void(IntroFishing::*)(int)>>
            ((MessageRouter *)puVar1,Message::SkyCannonTypeSelected,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFishingTutorial_CheckTouch);
  local_b0 = local_50;
  uStack_a8 = uStack_48;
  local_a0 = local_40;
  MessageRouter::
  Subscribe<Sexy::Touch_const&,bool*,Sexy::CBMemberTranslatorX<IntroFishing,void(IntroFishing::*)(Sexy::Touch_const&,bool*)>>
            ((MessageRouter *)puVar1,Message::FishingTutorial_CheckTouch,&local_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroFishing::StaticClassInit() */

void IntroFishing::StaticClassInit(void)

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
  Delegate1<FIState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<FIState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"IntroFishing");
      (*pcVar4)(plVar1,asStack_150,FUN_047c9bfc,0x120,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<FIState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x100);
  Sexy::Delegate1<FIState>::Delegate1<IntroFishing,void(IntroFishing::*)(FIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x108);
  Sexy::Delegate0::Delegate0<IntroFishing,void(IntroFishing::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x110);
  Sexy::Delegate1<FIState>::Delegate1<IntroFishing,void(IntroFishing::*)(FIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"FIState_StartTutorial");
  StateDefinition<FIState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047c9654(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x118);
  Sexy::Delegate1<FIState>::Delegate1<IntroFishing,void(IntroFishing::*)(FIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x120);
  Sexy::Delegate0::Delegate0<IntroFishing,void(IntroFishing::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x128);
  Sexy::Delegate1<FIState>::Delegate1<IntroFishing,void(IntroFishing::*)(FIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"FIState_ChangeLaser");
  StateDefinition<FIState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047c9654(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x130);
  Sexy::Delegate1<FIState>::Delegate1<IntroFishing,void(IntroFishing::*)(FIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x138);
  Sexy::Delegate0::Delegate0<IntroFishing,void(IntroFishing::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x140);
  Sexy::Delegate1<FIState>::Delegate1<IntroFishing,void(IntroFishing::*)(FIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"FIState_CannonDesc");
  StateDefinition<FIState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047c9654(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x148);
  Sexy::Delegate1<FIState>::Delegate1<IntroFishing,void(IntroFishing::*)(FIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x150);
  Sexy::Delegate0::Delegate0<IntroFishing,void(IntroFishing::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x158);
  Sexy::Delegate1<FIState>::Delegate1<IntroFishing,void(IntroFishing::*)(FIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"FIState_StartGame");
  StateDefinition<FIState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047c9654(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* IntroFishing::StaticGetClass() */

long * IntroFishing::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"IntroFishing",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroFishing::setState(FIState) */

void __thiscall IntroFishing::setState(IntroFishing *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<FIState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<FIState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<FIState>::GetStateDefinition
                     ((StateMachineTable<FIState> *)pSVar2,param_2);
  StateDefinition<FIState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<FIState>::SetContext(aSStack_a8,this);
  StateMachine<FIState>::SetState
            ((StateMachine<FIState> *)(this + 0x50),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroFishing::onIntroStarted() */

void __thiscall IntroFishing::onIntroStarted(IntroFishing *this)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  FishingModule *pFVar3;
  
  Board::PutIntoTutorialMode(*(Board **)(gLawnApp + 0x9f0));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar1 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar2);
  if (cVar1 == '\0') {
    setState(this);
    pFVar3 = (FishingModule *)GetFishingModule();
    FishingModule::InvalidUI(pFVar3);
    return;
  }
  setState(this,3);
  pFVar3 = (FishingModule *)GetFishingModule();
  FishingModule::InvalidUI(pFVar3);
  return;
}


/* IntroFishing::updateState_StartTutorial() */

void __thiscall IntroFishing::updateState_StartTutorial(IntroFishing *this)

{
  char cVar1;
  
  this[0x118] = (IntroFishing)0x1;
  cVar1 = CheckZombiesDie(this);
  if (cVar1 == '\0') {
    return;
  }
  setState(this,1);
  return;
}


/* IntroFishing::updateState_ChangeLaser() */

void __thiscall IntroFishing::updateState_ChangeLaser(IntroFishing *this)

{
  char cVar1;
  
  cVar1 = CheckZombiesDie(this);
  if (cVar1 == '\0') {
    return;
  }
  setState(this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroFishing::updateState_CannonDesc() */

void __thiscall IntroFishing::updateState_CannonDesc(IntroFishing *this)

{
  Board *pBVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  fVar4 = *(float *)(this + 0x110);
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  if (fVar4 < fVar2) {
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x110) = uVar3;
    pBVar1 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(auStack_10,L"[FISHING_INTRO_WINCONDITION]",auStack_18);
    Board::DisplayAdvice(pBVar1,auStack_10,6,0);
    FUN_05476c50(auStack_10);
    nop();
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x114) = fVar2 + 3.0;
  }
  else {
    fVar4 = *(float *)(this + 0x114);
    fVar2 = (float)PVZ_T();
    if (fVar4 < fVar2) {
      uVar3 = PVZ_EOT();
      *(undefined4 *)(this + 0x114) = uVar3;
      setState(this,3);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

