// Class: OliveOilSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OliveOilSystem::StaticClassInit() */

void OliveOilSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"OliveOilSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_0425fb7c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OliveOilSystem::StaticGetClass() */

long * OliveOilSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"OliveOilSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OliveOilSystem::GetClass() const */

long * OliveOilSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"OliveOilSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OliveOilSystem::IsThereOil(Sexy::Point) */

void __thiscall OliveOilSystem::IsThereOil(OliveOilSystem *this,TPoint *param_2)

{
  char cVar1;
  long lVar2;
  RtMixedPtrBase *this_00;
  ulong uVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  OliveOilUnit *pOVar4;
  ulong uVar5;
  undefined8 uVar6;
  Point aPStack_10 [8];
  long local_8;
  
  uVar6 = *(undefined8 *)(this + 0x10);
  uVar5 = 0;
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_0425c5c4(uVar6,*(undefined8 *)(this + 0x18));
  if (lVar2 != 0) {
    do {
      this_00 = (RtMixedPtrBase *)FUN_0425c5ec(uVar6,uVar5);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
      if (cVar1 != '\0') {
        this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0425c5ec(*(undefined8 *)(this + 0x10),uVar5);
        pOVar4 = (OliveOilUnit *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        Sexy::Point::Point(aPStack_10,param_2);
        cVar1 = OliveOilUnit::IsThereOil(pOVar4,aPStack_10);
        if (cVar1 != '\0') goto LAB_0425d808;
      }
      uVar5 = uVar5 + 1;
      uVar6 = *(undefined8 *)(this + 0x10);
      uVar3 = FUN_0425c5c4(uVar6,*(undefined8 *)(this + 0x18));
    } while (uVar5 < uVar3);
  }
  cVar1 = '\0';
LAB_0425d808:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* OliveOilSystem::OliveOilSystem() */

void __thiscall OliveOilSystem::OliveOilSystem(OliveOilSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_0681c5f0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* OliveOilSystem::StaticNew() */

OliveOilSystem * OliveOilSystem::StaticNew(void)

{
  OliveOilSystem *this;
  
  this = ::operator_new(0x28);
  OliveOilSystem(this);
  return this;
}


/* OliveOilSystem::~OliveOilSystem() */

void __thiscall OliveOilSystem::~OliveOilSystem(OliveOilSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_0681c5f0;
  std::vector<Sexy::RtWeakPtr<OliveOilUnit>,std::allocator<Sexy::RtWeakPtr<OliveOilUnit>>>::~vector
            ((vector<Sexy::RtWeakPtr<OliveOilUnit>,std::allocator<Sexy::RtWeakPtr<OliveOilUnit>>> *)
             (this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* OliveOilSystem::~OliveOilSystem() */

void __thiscall OliveOilSystem::~OliveOilSystem(OliveOilSystem *this)

{
  ~OliveOilSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OliveOilSystem::RemoveUnit(Sexy::RtWeakPtr<OliveOilUnit>) */

void __thiscall OliveOilSystem::RemoveUnit(OliveOilSystem *this,undefined8 param_2)

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
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<OliveOilUnit>*,std::vector<Sexy::RtWeakPtr<OliveOilUnit>,std::allocator<Sexy::RtWeakPtr<OliveOilUnit>>>>,Sexy::RtWeakPtr<OliveOilUnit>>
                       (uVar2,uVar3,param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<Sexy::RtWeakPtr<OliveOilUnit>,std::allocator<Sexy::RtWeakPtr<OliveOilUnit>>>::erase
              ((vector<Sexy::RtWeakPtr<OliveOilUnit>,std::allocator<Sexy::RtWeakPtr<OliveOilUnit>>>
                *)this_00,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OliveOilSystem::Update() */

void __thiscall OliveOilSystem::Update(OliveOilSystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtMixedPtrBase *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  OliveOilUnit *this_02;
  long *plVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
LAB_0425ff14:
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  do {
    if (!bVar1) {
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_01 = (RtMixedPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_01);
    if (cVar2 != '\0') {
      pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      this_02 = (OliveOilUnit *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
      cVar2 = OliveOilUnit::CanDestroy(this_02);
      if (cVar2 == '\0') break;
      pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
      (**(code **)(*plVar4 + 0x48))();
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    local_18 = std::
               vector<Sexy::RtWeakPtr<OliveOilUnit>,std::allocator<Sexy::RtWeakPtr<OliveOilUnit>>>::
               erase((vector<Sexy::RtWeakPtr<OliveOilUnit>,std::allocator<Sexy::RtWeakPtr<OliveOilUnit>>>
                      *)this_00,local_10);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  } while( true );
  FUN_0425da74((__normal_iterator *)&local_18);
  goto LAB_0425ff14;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OliveOilSystem::CreateOliveUnit(Sexy::Point) */

void __thiscall OliveOilSystem::CreateOliveUnit(OliveOilSystem *this,TPoint *param_2)

{
  bool bVar1;
  char cVar2;
  OliveOilUnit *pOVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameObject::Create<OliveOilUnit>();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
  if ((bVar1) &&
     (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18), cVar2 != '\0')) {
    pOVar3 = (OliveOilUnit *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Sexy::Point::Point((Point *)aRStack_10,param_2);
    OliveOilUnit::InitUint(pOVar3,aRStack_10);
    std::vector<Sexy::RtWeakPtr<OliveOilUnit>,std::allocator<Sexy::RtWeakPtr<OliveOilUnit>>>::
    push_back((vector<Sexy::RtWeakPtr<OliveOilUnit>,std::allocator<Sexy::RtWeakPtr<OliveOilUnit>>> *
              )(this + 0x10),(RtWeakPtr *)aRStack_18);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

