// Class: ComponentRunner


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentDamageRadius* ComponentRunner::Add<ComponentDamageRadius>(Sexy::RtWeakPtr<BoardEntity>,
   std::string const&) */

ComponentDamageRadius * __thiscall
ComponentRunner::Add<ComponentDamageRadius>
          (ComponentRunner *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  ComponentDamageRadius *pCVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = GameObject::Create<ComponentDamageRadius>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  Add(this,pCVar1,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentWarmingRadius*
   ComponentRunner::Add<ComponentWarmingRadius>(Sexy::RtWeakPtr<BoardEntity>, std::string const&) */

ComponentWarmingRadius * __thiscall
ComponentRunner::Add<ComponentWarmingRadius>
          (ComponentRunner *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  ComponentWarmingRadius *pCVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = GameObject::Create<ComponentWarmingRadius>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  Add(this,pCVar1,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentRunner::Size() const */

void __thiscall ComponentRunner::Size(ComponentRunner *this)

{
  FUN_03b865a4(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentRunner::StaticClassInit() */

void ComponentRunner::StaticClassInit(void)

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
    std::string::string(asStack_10,"ComponentRunner");
    (*pcVar2)(plVar1,asStack_10,FUN_03b87594,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentRunner::StaticGetClass() */

long * ComponentRunner::StaticGetClass(void)

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
  uVar2 = ComponentRunnerBase::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentRunner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentRunner::GetClass() const */

long * ComponentRunner::GetClass(void)

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
  uVar2 = ComponentRunnerBase::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentRunner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentRunner::onDraw(Sexy::Graphics*) */

void __thiscall ComponentRunner::onDraw(ComponentRunner *this,Graphics *param_1)

{
  bool bVar1;
  char cVar2;
  wchar_t wVar3;
  RtWeakPtrBase *pRVar4;
  long lVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_18 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    pRVar4 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,pRVar4);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    cVar2 = FUN_03b86534(*(undefined4 *)(lVar5 + 0x18));
    if (cVar2 != '\0') {
      wVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      Sexy::Font::CharWidthKern(wVar3,(wchar_t)param_1);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentRunner::EndAll() */

void __thiscall ComponentRunner::EndAll(ComponentRunner *this)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  long lVar4;
  ComponentBase *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x30));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar2 != '\0') {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      cVar2 = FUN_03b86540(*(undefined4 *)(lVar4 + 0x18));
      if (cVar2 == '\0') {
        this_00 = (ComponentBase *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        ComponentBase::End(this_00);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentRunner::OnPostLoad() */

void __thiscall ComponentRunner::OnPostLoad(ComponentRunner *this)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  ComponentBase *pCVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x30));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,pRVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar2 == '\0') {
      pCVar4 = (ComponentBase *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      ComponentBase::End(pCVar4);
    }
    else {
      pCVar4 = (ComponentBase *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      ComponentBase::Initialize(pCVar4);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentRunner::ComponentRunner() */

void __thiscall ComponentRunner::ComponentRunner(ComponentRunner *this)

{
  ComponentRunnerBase::ComponentRunnerBase((ComponentRunnerBase *)this);
  *(undefined ***)this = &PTR_GetClass_06735790;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* ComponentRunner::StaticNew() */

ComponentRunner * ComponentRunner::StaticNew(void)

{
  ComponentRunner *this;
  
  this = ::operator_new(0x48);
  ComponentRunner(this);
  return this;
}


/* ComponentRunner::IsEmpty() const */

void __thiscall ComponentRunner::IsEmpty(ComponentRunner *this)

{
  std::vector<Sexy::RtWeakPtr<ComponentBase>,std::allocator<Sexy::RtWeakPtr<ComponentBase>>>::empty
            ((vector<Sexy::RtWeakPtr<ComponentBase>,std::allocator<Sexy::RtWeakPtr<ComponentBase>>>
              *)(this + 0x30));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentRunner::Clear() */

void __thiscall ComponentRunner::Clear(ComponentRunner *this)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  long *plVar4;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0xb0))();
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
  std::vector<Sexy::RtWeakPtr<ComponentBase>,std::allocator<Sexy::RtWeakPtr<ComponentBase>>>::clear
            ((vector<Sexy::RtWeakPtr<ComponentBase>,std::allocator<Sexy::RtWeakPtr<ComponentBase>>>
              *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentRunner::~ComponentRunner() */

void __thiscall ComponentRunner::~ComponentRunner(ComponentRunner *this)

{
  *(undefined ***)this = &PTR_GetClass_06735790;
  Clear(this);
  std::vector<Sexy::RtWeakPtr<ComponentBase>,std::allocator<Sexy::RtWeakPtr<ComponentBase>>>::
  ~vector((vector<Sexy::RtWeakPtr<ComponentBase>,std::allocator<Sexy::RtWeakPtr<ComponentBase>>> *)
          (this + 0x30));
  ComponentRunnerBase::~ComponentRunnerBase((ComponentRunnerBase *)this);
  return;
}


/* ComponentRunner::~ComponentRunner() */

void __thiscall ComponentRunner::~ComponentRunner(ComponentRunner *this)

{
  ~ComponentRunner(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentRunner::processActions() */

void __thiscall ComponentRunner::processActions(ComponentRunner *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  long lVar4;
  ComponentBase *this_01;
  _JNIEnv *this_02;
  undefined8 local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x30);
  local_20 = 0;
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
    if (!bVar1) {
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,pRVar3);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    cVar2 = FUN_03b86528(*(undefined4 *)(lVar4 + 0x18));
    if (cVar2 == '\0') {
      this_01 = (ComponentBase *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      ComponentBase::Begin(this_01);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      cVar2 = FUN_03b86534(*(undefined4 *)(lVar4 + 0x18));
      if (cVar2 != '\0') goto LAB_03b87bac;
LAB_03b87b14:
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      cVar2 = FUN_03b86540(*(undefined4 *)(lVar4 + 0x18));
      if (cVar2 == '\0') goto LAB_03b87b2c;
LAB_03b87bd0:
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_20);
      local_20 = std::
                 vector<Sexy::RtWeakPtr<ComponentBase>,std::allocator<Sexy::RtWeakPtr<ComponentBase>>>
                 ::erase((vector<Sexy::RtWeakPtr<ComponentBase>,std::allocator<Sexy::RtWeakPtr<ComponentBase>>>
                          *)this_00,local_10);
    }
    else {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      cVar2 = FUN_03b86534(*(undefined4 *)(lVar4 + 0x18));
      if (cVar2 == '\0') goto LAB_03b87b14;
LAB_03b87bac:
      this_02 = (_JNIEnv *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      _JNIEnv::ExceptionDescribe(this_02);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      cVar2 = FUN_03b86540(*(undefined4 *)(lVar4 + 0x18));
      if (cVar2 != '\0') goto LAB_03b87bd0;
LAB_03b87b2c:
      FUN_03b86e6c((__normal_iterator *)&local_20);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentRunner::onUpdate() */

void __thiscall ComponentRunner::onUpdate(ComponentRunner *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  long lVar4;
  ComponentBase *this_01;
  _JNIEnv *this_02;
  undefined8 uStack_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined8 uStack_10;
  long lStack_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x30);
  uStack_20 = 0;
  lStack_8 = ___stack_chk_guard;
  uStack_20 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
  do {
    uStack_10 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&uStack_20,(__normal_iterator *)&uStack_10);
    if (!bVar1) {
      if (lStack_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,pRVar3);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    cVar2 = FUN_03b86528(*(undefined4 *)(lVar4 + 0x18));
    if (cVar2 == '\0') {
      this_01 = (ComponentBase *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      ComponentBase::Begin(this_01);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      cVar2 = FUN_03b86534(*(undefined4 *)(lVar4 + 0x18));
      if (cVar2 != '\0') goto LAB_03b87bac;
LAB_03b87b14:
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      cVar2 = FUN_03b86540(*(undefined4 *)(lVar4 + 0x18));
      if (cVar2 == '\0') goto LAB_03b87b2c;
LAB_03b87bd0:
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&uStack_10,(__normal_iterator *)&uStack_20);
      uStack_20 = std::
                  vector<Sexy::RtWeakPtr<ComponentBase>,std::allocator<Sexy::RtWeakPtr<ComponentBase>>>
                  ::erase((vector<Sexy::RtWeakPtr<ComponentBase>,std::allocator<Sexy::RtWeakPtr<ComponentBase>>>
                           *)this_00,uStack_10);
    }
    else {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      cVar2 = FUN_03b86534(*(undefined4 *)(lVar4 + 0x18));
      if (cVar2 == '\0') goto LAB_03b87b14;
LAB_03b87bac:
      this_02 = (_JNIEnv *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      _JNIEnv::ExceptionDescribe(this_02);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      cVar2 = FUN_03b86540(*(undefined4 *)(lVar4 + 0x18));
      if (cVar2 != '\0') goto LAB_03b87bd0;
LAB_03b87b2c:
      FUN_03b86e6c((__normal_iterator *)&uStack_20);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentRunner::Add(ComponentBase*, Sexy::RtWeakPtr<BoardEntity>, std::string const&) */

void __thiscall
ComponentRunner::Add(ComponentRunner *this,string *param_1,RtWeakPtrBase *param_3,string *param_4)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::IPurchaseAdapter::RequestPay(param_1,param_4);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  ComponentBase::SetOwner((ComponentBase *)param_1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ComponentBase::Begin((ComponentBase *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<ComponentBase>,std::allocator<Sexy::RtWeakPtr<ComponentBase>>>::
  push_back((vector<Sexy::RtWeakPtr<ComponentBase>,std::allocator<Sexy::RtWeakPtr<ComponentBase>>> *
            )(this + 0x30),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentVisualStretcher*
   ComponentRunner::Add<ComponentVisualStretcher>(Sexy::RtWeakPtr<BoardEntity>, std::string const&)
    */

ComponentVisualStretcher * __thiscall
ComponentRunner::Add<ComponentVisualStretcher>
          (ComponentRunner *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  ComponentVisualStretcher *pCVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = GameObject::Create<ComponentVisualStretcher>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  Add(this,pCVar1,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentDamageTossRadius*
   ComponentRunner::Add<ComponentDamageTossRadius>(Sexy::RtWeakPtr<BoardEntity>, std::string const&)
    */

ComponentDamageTossRadius * __thiscall
ComponentRunner::Add<ComponentDamageTossRadius>
          (ComponentRunner *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  ComponentDamageTossRadius *pCVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = GameObject::Create<ComponentDamageTossRadius>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  Add(this,pCVar1,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentConditionRadius*
   ComponentRunner::Add<ComponentConditionRadius>(Sexy::RtWeakPtr<BoardEntity>, std::string const&)
    */

ComponentConditionRadius * __thiscall
ComponentRunner::Add<ComponentConditionRadius>
          (ComponentRunner *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  ComponentConditionRadius *pCVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = GameObject::Create<ComponentConditionRadius>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  Add(this,pCVar1,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentProjectileConverter*
   ComponentRunner::Add<ComponentProjectileConverter>(Sexy::RtWeakPtr<BoardEntity>, std::string
   const&) */

ComponentProjectileConverter * __thiscall
ComponentRunner::Add<ComponentProjectileConverter>
          (ComponentRunner *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  ComponentProjectileConverter *pCVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = GameObject::Create<ComponentProjectileConverter>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  Add(this,pCVar1,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentObjectImpactor*
   ComponentRunner::Add<ComponentObjectImpactor>(Sexy::RtWeakPtr<BoardEntity>, std::string const&)
    */

ComponentObjectImpactor * __thiscall
ComponentRunner::Add<ComponentObjectImpactor>
          (ComponentRunner *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  ComponentObjectImpactor *pCVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = GameObject::Create<ComponentObjectImpactor>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  Add(this,pCVar1,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentLinearBurst* ComponentRunner::Add<ComponentLinearBurst>(Sexy::RtWeakPtr<BoardEntity>,
   std::string const&) */

ComponentLinearBurst * __thiscall
ComponentRunner::Add<ComponentLinearBurst>
          (ComponentRunner *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  ComponentLinearBurst *pCVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = GameObject::Create<ComponentLinearBurst>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  Add(this,pCVar1,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentWarmingRadiusForHeroPlant*
   ComponentRunner::Add<ComponentWarmingRadiusForHeroPlant>(Sexy::RtWeakPtr<BoardEntity>,
   std::string const&) */

ComponentWarmingRadiusForHeroPlant * __thiscall
ComponentRunner::Add<ComponentWarmingRadiusForHeroPlant>
          (ComponentRunner *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  ComponentWarmingRadiusForHeroPlant *pCVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = GameObject::Create<ComponentWarmingRadiusForHeroPlant>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  Add(this,pCVar1,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentZombieMovement*
   ComponentRunner::Add<ComponentZombieMovement>(Sexy::RtWeakPtr<BoardEntity>, std::string const&)
    */

ComponentZombieMovement * __thiscall
ComponentRunner::Add<ComponentZombieMovement>
          (ComponentRunner *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  ComponentZombieMovement *pCVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = GameObject::Create<ComponentZombieMovement>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  Add(this,pCVar1,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentOnDeath_SpawnZombie*
   ComponentRunner::Add<ComponentOnDeath_SpawnZombie>(Sexy::RtWeakPtr<BoardEntity>, std::string
   const&) */

ComponentOnDeath_SpawnZombie * __thiscall
ComponentRunner::Add<ComponentOnDeath_SpawnZombie>
          (ComponentRunner *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  ComponentOnDeath_SpawnZombie *pCVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = GameObject::Create<ComponentOnDeath_SpawnZombie>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  Add(this,pCVar1,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentZombieWhackTouch*
   ComponentRunner::Add<ComponentZombieWhackTouch>(Sexy::RtWeakPtr<BoardEntity>, std::string const&)
    */

ComponentZombieWhackTouch * __thiscall
ComponentRunner::Add<ComponentZombieWhackTouch>
          (ComponentRunner *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  ComponentZombieWhackTouch *pCVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = GameObject::Create<ComponentZombieWhackTouch>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  Add(this,pCVar1,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentLightingDamageRadius*
   ComponentRunner::Add<ComponentLightingDamageRadius>(Sexy::RtWeakPtr<BoardEntity>, std::string
   const&) */

ComponentLightingDamageRadius * __thiscall
ComponentRunner::Add<ComponentLightingDamageRadius>
          (ComponentRunner *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  ComponentLightingDamageRadius *pCVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = GameObject::Create<ComponentLightingDamageRadius>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  Add(this,pCVar1,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

