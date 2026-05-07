// Class: EscapeRootSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EscapeRootSubSystem::StaticClassInit() */

void EscapeRootSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"EscapeRootSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_041a5c30,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EscapeRootSubSystem::StaticGetClass() */

long * EscapeRootSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EscapeRootSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EscapeRootSubSystem::GetClass() const */

long * EscapeRootSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"EscapeRootSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EscapeRootSubSystem::EscapeRootSubSystem() */

void __thiscall EscapeRootSubSystem::EscapeRootSubSystem(EscapeRootSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_067fe7c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* EscapeRootSubSystem::StaticNew() */

EscapeRootSubSystem * EscapeRootSubSystem::StaticNew(void)

{
  EscapeRootSubSystem *this;
  
  this = ::operator_new(0x28);
  EscapeRootSubSystem(this);
  return this;
}


/* EscapeRootSubSystem::~EscapeRootSubSystem() */

void __thiscall EscapeRootSubSystem::~EscapeRootSubSystem(EscapeRootSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_067fe7c0;
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x10))
  ;
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* EscapeRootSubSystem::~EscapeRootSubSystem() */

void __thiscall EscapeRootSubSystem::~EscapeRootSubSystem(EscapeRootSubSystem *this)

{
  ~EscapeRootSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EscapeRootSubSystem::AddPlant(Sexy::RtWeakPtr<Plant>) */

void __thiscall EscapeRootSubSystem::AddPlant(EscapeRootSubSystem *this,RtWeakPtrBase *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtMixedPtrBase *this_01;
  RtWeakPtrBase *pRVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
LAB_041a735c:
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  do {
    if (!bVar1) {
      std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
                ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)this_00,
                 (RtWeakPtr *)param_2);
      uVar4 = 1;
LAB_041a73e4:
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar4);
      }
      return;
    }
    this_01 = (RtMixedPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_01);
    if (cVar2 == '\0') break;
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar2 = Sexy::RtWeakPtrBase::operator==(param_2,pRVar3);
    if (cVar2 != '\0') {
      uVar4 = 0;
      goto LAB_041a73e4;
    }
    FUN_041a3420((__normal_iterator *)&local_18);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  } while( true );
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  local_18 = std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::erase
                       ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                        this_00,local_10);
  goto LAB_041a735c;
}

