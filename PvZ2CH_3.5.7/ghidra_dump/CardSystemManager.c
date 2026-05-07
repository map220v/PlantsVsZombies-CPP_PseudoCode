// Class: CardSystemManager


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardSystemManager::StaticClassInit() */

void CardSystemManager::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardSystemManager");
    (*pcVar2)(plVar1,asStack_10,FUN_035fae28,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardSystemManager::StaticGetClass() */

long * CardSystemManager::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"CardSystemManager",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardSystemManager::GetClass() const */

long * CardSystemManager::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"CardSystemManager",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardSystemManager::RegisterAura(Sexy::RtWeakPtr<InfluenceAuraProperty>) */

void CardSystemManager::RegisterAura
               (RtWeakPtr<Sexy::SoundResource> *param_1,long param_2,
               RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  lVar2 = (**(code **)(*plVar1 + 0x48))();
  if (lVar2 == 0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)param_1);
  }
  else {
    GameObject::Create(lVar2,0xa2);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    pcVar3 = *(code **)(*plVar1 + 0x78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)param_3);
    (*pcVar3)(plVar1,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_20);
    InfluenceAuraManager::RegisterAura(aRStack_10,param_2 + 0x28,aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,(RtWeakPtrBase *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* CardSystemManager::CardSystemManager() */

void __thiscall CardSystemManager::CardSystemManager(CardSystemManager *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_06666220;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x28));
  return;
}


/* CardSystemManager::StaticNew() */

CardSystemManager * CardSystemManager::StaticNew(void)

{
  CardSystemManager *this;
  
  this = ::operator_new(0x40);
  CardSystemManager(this);
  return this;
}


/* CardSystemManager::~CardSystemManager() */

void __thiscall CardSystemManager::~CardSystemManager(CardSystemManager *this)

{
  *(undefined ***)this = &PTR_GetClass_06666220;
  InfluenceAuraManager::~InfluenceAuraManager((InfluenceAuraManager *)(this + 0x28));
  std::vector<Sexy::RtWeakPtr<CardObject>,std::allocator<Sexy::RtWeakPtr<CardObject>>>::~vector
            ((vector<Sexy::RtWeakPtr<CardObject>,std::allocator<Sexy::RtWeakPtr<CardObject>>> *)
             (this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* CardSystemManager::~CardSystemManager() */

void __thiscall CardSystemManager::~CardSystemManager(CardSystemManager *this)

{
  ~CardSystemManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardSystemManager::DeleteCard(Sexy::RtWeakPtr<CardObject>) */

void __thiscall CardSystemManager::DeleteCard(CardSystemManager *this,RtWeakPtrBase *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *this_01;
  long *plVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
LAB_035fc654:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_01 = (RtWeakPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_01,param_2);
    if (cVar1 != '\0') {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<Sexy::RtWeakPtr<CardObject>,std::allocator<Sexy::RtWeakPtr<CardObject>>>::erase
                ((vector<Sexy::RtWeakPtr<CardObject>,std::allocator<Sexy::RtWeakPtr<CardObject>>> *)
                 this_00,local_10);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_2);
      if (cVar1 != '\0') {
        plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        (**(code **)(*plVar3 + 0x48))();
      }
      Sexy::RtWeakPtrBase::ClearId(param_2);
      goto LAB_035fc654;
    }
    FUN_035fb578((exception_ptr *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardSystemManager::CreateCardByID(int) */

void CardSystemManager::CreateCardByID(int param_1)

{
  undefined8 uVar1;
  uint in_w1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined1 auVar2 [12];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = CardObject::StaticGetClass();
  GameObject::Create(uVar1,0xa2);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  auVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)in_x8);
  CardUtils::GetCardType((CardUtils *)(ulong)in_w1,auVar2._8_4_);
  CardObject::initializeCardObject(auVar2._0_8_,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::vector<Sexy::RtWeakPtr<CardObject>,std::allocator<Sexy::RtWeakPtr<CardObject>>>::push_back
            ((vector<Sexy::RtWeakPtr<CardObject>,std::allocator<Sexy::RtWeakPtr<CardObject>>> *)
             ((ulong)(uint)param_1 + 0x10),(RtWeakPtr *)in_x8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardSystemManager::CreateCardByType(Sexy::RtWeakPtr<CardObject>) */

void CardSystemManager::CreateCardByType
               (RtWeakPtr<Sexy::SoundResource> *param_1,long param_2,RtWeakPtrBase *param_3)

{
  undefined8 uVar1;
  CardObject *pCVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = CardObject::StaticGetClass();
  GameObject::Create(uVar1,0xa2);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pCVar2 = (CardObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,param_3);
  CardObject::initializeCardObject(pCVar2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::vector<Sexy::RtWeakPtr<CardObject>,std::allocator<Sexy::RtWeakPtr<CardObject>>>::push_back
            ((vector<Sexy::RtWeakPtr<CardObject>,std::allocator<Sexy::RtWeakPtr<CardObject>>> *)
             (param_2 + 0x10),(RtWeakPtr *)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}

