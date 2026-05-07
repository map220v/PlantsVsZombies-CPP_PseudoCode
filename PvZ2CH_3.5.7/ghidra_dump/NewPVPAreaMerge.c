// Class: NewPVPAreaMerge


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaMerge::StaticClassInit() */

void NewPVPAreaMerge::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"MergeGroup");
    (*pcVar3)(plVar2,asStack_10,FUN_034d8d04,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewPVPAreaMerge");
    (*pcVar3)(plVar2,asStack_10,FUN_034e0300,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPAreaMerge::StaticGetClass() */

long * NewPVPAreaMerge::StaticGetClass(void)

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
  uVar2 = NewPVPArea::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPAreaMerge",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPAreaMerge::GetClass() const */

long * NewPVPAreaMerge::GetClass(void)

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
  uVar2 = NewPVPArea::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPAreaMerge",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPAreaMerge::NewPVPAreaMerge() */

void __thiscall NewPVPAreaMerge::NewPVPAreaMerge(NewPVPAreaMerge *this)

{
  NewPVPArea::NewPVPArea((NewPVPArea *)this);
  *(undefined ***)this = &PTR_GetClass_0664d420;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* NewPVPAreaMerge::StaticNew() */

NewPVPAreaMerge * NewPVPAreaMerge::StaticNew(void)

{
  NewPVPAreaMerge *this;
  
  this = ::operator_new(0x38);
  NewPVPAreaMerge(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaMerge::FindSameGroup(Sexy::RtWeakPtr<Zombie>) */

void __thiscall NewPVPAreaMerge::FindSameGroup(NewPVPAreaMerge *this,RtWeakPtrBase *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_10,param_2);
  local_18 = FUN_034e0634(uVar2,uVar3,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_10);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
  }
  else {
    uVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* NewPVPAreaMerge::~NewPVPAreaMerge() */

void __thiscall NewPVPAreaMerge::~NewPVPAreaMerge(NewPVPAreaMerge *this)

{
  *(undefined ***)this = &PTR_GetClass_0664d420;
  std::vector<MergeGroup,std::allocator<MergeGroup>>::~vector
            ((vector<MergeGroup,std::allocator<MergeGroup>> *)(this + 0x20));
  NewPVPArea::~NewPVPArea((NewPVPArea *)this);
  return;
}


/* NewPVPAreaMerge::~NewPVPAreaMerge() */

void __thiscall NewPVPAreaMerge::~NewPVPAreaMerge(NewPVPAreaMerge *this)

{
  ~NewPVPAreaMerge(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaMerge::onZombieDestroyed(Zombie*) */

void NewPVPAreaMerge::onZombieDestroyed(Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  MergeGroup *pMVar3;
  undefined8 local_28;
  undefined8 local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x20));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_1 + 0x20));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar2) {
    pMVar3 = (MergeGroup *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    cVar1 = MergeGroup::Remove(pMVar3,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    if (cVar1 != '\0') break;
    std::move_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*>::operator++
              ((move_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaMerge::addToGroup(Zombie*) */

void NewPVPAreaMerge::addToGroup(Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  char cVar2;
  MergeGroup *pMVar3;
  long extraout_x0;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [48];
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(param_1 + 0x20);
  local_8 = ___stack_chk_guard;
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1) {
    pMVar3 = (MergeGroup *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
    cVar2 = MergeGroup::Find(pMVar3,aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    if (cVar2 != '\0') goto LAB_034f58ec;
    std::move_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*>::operator++
              ((move_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*> *)&local_50);
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
  pMVar3 = (MergeGroup *)FindSameGroup((NewPVPAreaMerge *)param_1,aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  if (pMVar3 == (MergeGroup *)0x0) {
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1)
    {
      pMVar3 = (MergeGroup *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50)
      ;
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
      cVar2 = MergeGroup::AddToEmptyGroup(pMVar3,aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      if (cVar2 != '\0') goto LAB_034f58ec;
      std::move_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*>::operator++
                ((move_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*> *)&local_50);
    }
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    MergeGroup::MergeGroup
              ((MergeGroup *)aRStack_38,*(int *)(extraout_x0 + 0x48),*(float *)(extraout_x0 + 0x4c))
    ;
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)&local_48);
    MergeGroup::AddToEmptyGroup((MergeGroup *)aRStack_38,aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    std::vector<MergeGroup,std::allocator<MergeGroup>>::push_back
              ((vector<MergeGroup,std::allocator<MergeGroup>> *)this,(MergeGroup *)aRStack_38);
    MergeGroup::~MergeGroup((MergeGroup *)aRStack_38);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
    MergeGroup::AddDirectly(pMVar3,aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  }
LAB_034f58ec:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaMerge::updateMerges() */

void __thiscall NewPVPAreaMerge::updateMerges(NewPVPAreaMerge *this)

{
  Zombie *pZVar1;
  bool bVar2;
  char cVar3;
  Zombie *extraout_x0;
  long lVar4;
  float fVar5;
  undefined8 local_50;
  undefined8 local_48;
  Zombie *local_40;
  undefined8 local_38;
  undefined8 local_30;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,2);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar2) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    nop();
    local_40 = extraout_x0;
    if ((((((extraout_x0 != (Zombie *)0x0) &&
           (cVar3 = (**(code **)(*(long *)extraout_x0 + 0x328))(), cVar3 == '\0')) &&
          (cVar3 = (**(code **)(*(long *)local_40 + 0x330))(local_40), cVar3 == '\0')) &&
         ((cVar3 = Zombie::HasCondition(local_40,0x7b), cVar3 == '\0' &&
          (cVar3 = RealObject::IsOnTeam(local_40,1), cVar3 == '\0')))) &&
        ((cVar3 = Zombie::IsControlled(local_40), pZVar1 = local_40, cVar3 == '\0' &&
         ((fVar5 = (float)FUN_034ad7f8(*(undefined4 *)(local_40 + 0x280)), fVar5 != 0.0 &&
          (cVar3 = FUN_034c2d98(*(undefined4 *)(pZVar1 + 0x28)), cVar3 == '\0')))))) &&
       (cVar3 = FUN_034c34cc(*(undefined4 *)(pZVar1 + 0xcc)), cVar3 == '\0')) {
      std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                ((vector<Zombie*,std::allocator<Zombie*>> *)&local_38,&local_40);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  lVar4 = FUN_034b0594(local_38,local_30);
  if (lVar4 != 0) {
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_38);
    local_40 = (Zombie *)
               std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_38);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar2)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      addToGroup((Zombie *)this);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPAreaMerge::Activate() */

void __thiscall NewPVPAreaMerge::Activate(NewPVPAreaMerge *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  NewPVPArea::Activate((NewPVPArea *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDestroyed);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<NewPVPAreaMerge,void(NewPVPAreaMerge::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaMerge::updateMergeGroups() */

void __thiscall NewPVPAreaMerge::updateMergeGroups(NewPVPAreaMerge *this)

{
  bool bVar1;
  MergeGroup *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x20));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x20));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (MergeGroup *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    MergeGroup::Update(this_00);
    std::move_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*>::operator++
              ((move_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPAreaMerge::Update() */

void __thiscall NewPVPAreaMerge::Update(NewPVPAreaMerge *this)

{
  updateMerges(this);
  updateMergeGroups(this);
  return;
}

