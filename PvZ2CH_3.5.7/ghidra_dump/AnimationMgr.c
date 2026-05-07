// Class: AnimationMgr


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationMgr::Add(Sexy::RtWeakPtr<AnimationController>, float) */

void __thiscall AnimationMgr::Add(AnimationMgr *param_1,AnimationMgr *this,RtWeakPtrBase *param_3)

{
  undefined1 auStack_14 [4];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  Add(param_1,this,aRStack_10,auStack_14);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationMgr::Add(Sexy::RtWeakPtr<AnimationController>) */

void __thiscall AnimationMgr::Add(AnimationMgr *this,RtWeakPtrBase *param_2)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
                    /* WARNING: Load size is inaccurate */
  Add(*(AnimationMgr **)(this + 0x10),this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnimationMgr::Create() */

void AnimationMgr::Create(void)

{
  GameObject::Create<AnimationMgr>();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationMgr::Add(AnimationController*, float) */

void __thiscall AnimationMgr::Add(AnimationMgr *this,AnimationController *param_1,float param_2)

{
  float fStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Add(this,param_1,param_2,&fStack_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnimationMgr::AnimationMgr() */

void __thiscall AnimationMgr::AnimationMgr(AnimationMgr *this)

{
  GameObject::GameObject((GameObject *)this);
  this[0x14] = (AnimationMgr)0x0;
  this[0x15] = (AnimationMgr)0x0;
  *(undefined ***)this = &PTR_GetClass_06733d00;
  *(undefined4 *)(this + 0x10) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* AnimationMgr::~AnimationMgr() */

void __thiscall AnimationMgr::~AnimationMgr(AnimationMgr *this)

{
  *(undefined ***)this = &PTR_GetClass_06733d00;
  std::
  vector<Sexy::RtWeakPtr<AnimationController>,std::allocator<Sexy::RtWeakPtr<AnimationController>>>
  ::~vector((vector<Sexy::RtWeakPtr<AnimationController>,std::allocator<Sexy::RtWeakPtr<AnimationController>>>
             *)(this + 0x18));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* AnimationMgr::~AnimationMgr() */

void __thiscall AnimationMgr::~AnimationMgr(AnimationMgr *this)

{
  ~AnimationMgr(this);
  AK::FreeHook(this);
  return;
}


/* AnimationMgr::onInitialized() */

void __thiscall AnimationMgr::onInitialized(AnimationMgr *this)

{
  this[0x14] = (AnimationMgr)0x0;
  this[0x15] = (AnimationMgr)0x0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationMgr::Serialize(Sexy::RtSerializeContext const&) */

void __thiscall AnimationMgr::Serialize(AnimationMgr *this,RtSerializeContext *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  RtSerialRtonKey aRStack_40 [8];
  RtSerializeContext aRStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar2 = FUN_03d43a9c(*(undefined8 *)(param_1 + 8));
  Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_40,"objdata");
  Sexy::RtSerializeContext::RtSerializeContext(aRStack_38,uVar2,aRStack_40,0);
  Sexy::RtObject::Serialize((RtObject *)this,aRStack_38);
  Sexy::RtSerializeContext::~RtSerializeContext(aRStack_38);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_40);
  lVar3 = FUN_03d43a9c(*(undefined8 *)(param_1 + 8));
  cVar1 = FUN_03d43a98(*(undefined1 *)(lVar3 + 0x10));
  if (cVar1 != '\0') {
    MessageRouter::Broadcast<GameObject*,GameObject*>
              ((MessageRouter *)gMessageRouter,Message::GameObjectSerializedIn,(GameObject *)this);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationMgr::StaticClassInit() */

void AnimationMgr::StaticClassInit(void)

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
    std::string::string(asStack_10,"AnimationMgr");
    (*pcVar2)(plVar1,asStack_10,FUN_03b5cce4,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnimationMgr::StaticGetClass() */

long * AnimationMgr::StaticGetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"AnimationMgr",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnimationMgr::GetClass() const */

long * AnimationMgr::GetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"AnimationMgr",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationMgr::AddToRenderQueue(RenderQueue*) */

void __thiscall AnimationMgr::AddToRenderQueue(AnimationMgr *this,RenderQueue *param_1)

{
  bool bVar1;
  char cVar2;
  RtWeakPtr *this_00;
  ResourceInfo *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x14] == (AnimationMgr)0x0) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x18));
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x18));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar1) break;
      this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      cVar2 = AnimationController::ShouldUpdate
                        ((AnimationController *)this_01,*(float *)(this + 0x10));
      if ((cVar2 != '\0') &&
         (*(code **)(*(long *)this_01 + 0x88) != AnimationController::AddToRenderQueue)) {
        (**(code **)(*(long *)this_01 + 0x88))(this_01,param_1);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationMgr::InnerDraw(Sexy::Graphics*) */

void __thiscall AnimationMgr::InnerDraw(AnimationMgr *this,Graphics *param_1)

{
  bool bVar1;
  char cVar2;
  RtWeakPtr *this_00;
  ResourceInfo *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x14] == (AnimationMgr)0x0) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x18));
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x18));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar1) break;
      this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      cVar2 = AnimationController::ShouldUpdate
                        ((AnimationController *)this_01,*(float *)(this + 0x10));
      if ((cVar2 != '\0') && (*(code **)(*(long *)this_01 + 0x90) != AnimationController::InnerDraw)
         ) {
        (**(code **)(*(long *)this_01 + 0x90))(this_01,param_1);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnimationMgr::StaticNew() */

AnimationMgr * AnimationMgr::StaticNew(void)

{
  AnimationMgr *this;
  
  this = ::operator_new(0x30);
  AnimationMgr(this);
  return this;
}


/* AnimationMgr::Clear() */

void __thiscall AnimationMgr::Clear(AnimationMgr *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x18);
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  FUN_03b5c5bc(uVar1,uVar2);
  std::
  vector<Sexy::RtWeakPtr<AnimationController>,std::allocator<Sexy::RtWeakPtr<AnimationController>>>
  ::clear((vector<Sexy::RtWeakPtr<AnimationController>,std::allocator<Sexy::RtWeakPtr<AnimationController>>>
           *)this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationMgr::Update() */

void __thiscall AnimationMgr::Update(AnimationMgr *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  RtWeakPtr *this_01;
  ResourceInfo *this_02;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x14] == (AnimationMgr)0x0) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x18);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar2) break;
      this_01 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      this_02 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
      if (this_02 != (ResourceInfo *)0x0) {
        fVar6 = *(float *)(this + 0x10);
        cVar1 = AnimationController::ShouldUpdate((AnimationController *)this_02,fVar6);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)this_02 + 0x80))(fVar6,this_02);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    lVar3 = FUN_03b5b80c(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
    if (lVar3 != 0) {
      this[0x15] = (AnimationMgr)0x1;
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      GuessRatio::GuessRatio((GuessRatio *)&local_10,*(float *)(this + 0x10));
      local_28 = std::
                 remove_if<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<AnimationController>*,std::vector<Sexy::RtWeakPtr<AnimationController>,std::allocator<Sexy::RtWeakPtr<AnimationController>>>>,RemovePredicate>
                           ((undefined4)local_10,uVar4,uVar5);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
      if (bVar2) {
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_18,(__normal_iterator *)&local_28);
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_20);
        std::
        vector<Sexy::RtWeakPtr<AnimationController>,std::allocator<Sexy::RtWeakPtr<AnimationController>>>
        ::erase((vector<Sexy::RtWeakPtr<AnimationController>,std::allocator<Sexy::RtWeakPtr<AnimationController>>>
                 *)this_00,local_18,local_10);
        this[0x15] = (AnimationMgr)0x0;
      }
      else {
        this[0x15] = (AnimationMgr)0x0;
      }
    }
    lVar3 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    fVar6 = (float)FUN_03b5b73c(*(undefined4 *)(lVar3 + 0x28));
    *(float *)(this + 0x10) = *(float *)(this + 0x10) + fVar6;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationMgr::Add(Sexy::RtWeakPtr<AnimationController>, float, float&) */

void __thiscall
AnimationMgr::Add(float param_1,AnimationMgr *this,RtWeakPtr<Sexy::ResourceInfo> *param_3,
                 undefined4 *param_4)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  AnimationController *this_01;
  long lVar4;
  undefined4 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<AnimationController>*,std::vector<Sexy::RtWeakPtr<AnimationController>,std::allocator<Sexy::RtWeakPtr<AnimationController>>>>,Sexy::RtWeakPtr<AnimationController>>
                       (uVar2,uVar3,param_3);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    this_01 = (AnimationController *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
    AnimationController::SetStartTime(this_01,param_1);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
    uVar5 = FUN_03b5b7b4(*(undefined4 *)(lVar4 + 0x14));
    lVar4 = ___stack_chk_guard;
    *param_4 = uVar5;
    if (local_8 == lVar4) {
      std::
      vector<Sexy::RtWeakPtr<AnimationController>,std::allocator<Sexy::RtWeakPtr<AnimationController>>>
      ::push_back((vector<Sexy::RtWeakPtr<AnimationController>,std::allocator<Sexy::RtWeakPtr<AnimationController>>>
                   *)this_00,(RtWeakPtr *)param_3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationMgr::Add(AnimationController*, float, float&) */

void __thiscall
AnimationMgr::Add(AnimationMgr *this,AnimationController *param_1,float param_2,float *param_3)

{
  undefined4 in_register_00005004;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  Add((AnimationMgr *)CONCAT44(in_register_00005004,param_2),this,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* AnimationMgr::Add(AnimationController*) */

void __thiscall AnimationMgr::Add(AnimationMgr *this,AnimationController *param_1)

{
  Add(this,param_1,*(float *)(this + 0x10));
  return;
}

