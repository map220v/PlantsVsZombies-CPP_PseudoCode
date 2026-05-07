// Class: JoustSchedule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustSchedule::StaticClassInit() */

void JoustSchedule::StaticClassInit(void)

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
    std::string::string(asStack_10,"JoustTournamentDefinition");
    (*pcVar3)(plVar2,asStack_10,FUN_0388b4a4,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"JoustSchedule");
    (*pcVar3)(plVar2,asStack_10,FUN_0388c514,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustSchedule::StaticGetClass() */

long * JoustSchedule::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"JoustSchedule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustSchedule::GetClass() const */

long * JoustSchedule::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"JoustSchedule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustSchedule::GetTournamentDefinition(long) */

void __thiscall JoustSchedule::GetTournamentDefinition(JoustSchedule *this,long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  a_Stack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            (a_Stack_18,(__normal_iterator *)&local_10);
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)a_Stack_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)a_Stack_18);
    if ((plVar2 != (long *)0x0) && (*plVar2 == param_1)) goto LAB_0388b8c4;
    std::move_iterator<RappellingZombieInfo*>::operator++
              ((move_iterator<RappellingZombieInfo*> *)a_Stack_18);
  }
  uVar4 = *(undefined8 *)(this + 0x10);
  lVar3 = FUN_0388a6b8(uVar4,*(undefined8 *)(this + 0x18));
  if (lVar3 == 0) {
LAB_0388b8c4:
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else if (local_8 == ___stack_chk_guard) {
    FUN_0388a6e8(uVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustSchedule::JoustSchedule() */

void __thiscall JoustSchedule::JoustSchedule(JoustSchedule *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_066aefb0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* JoustSchedule::StaticNew() */

JoustSchedule * JoustSchedule::StaticNew(void)

{
  JoustSchedule *this;
  
  this = ::operator_new(0x28);
  JoustSchedule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustSchedule::GetSchedule() */

void JoustSchedule::GetSchedule(void)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,L"JoustSchedule");
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar1,0x6c,aRStack_18);
  uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* JoustSchedule::~JoustSchedule() */

void __thiscall JoustSchedule::~JoustSchedule(JoustSchedule *this)

{
  *(undefined ***)this = &PTR_GetClass_066aefb0;
  std::vector<JoustTournamentDefinition,std::allocator<JoustTournamentDefinition>>::~vector
            ((vector<JoustTournamentDefinition,std::allocator<JoustTournamentDefinition>> *)
             (this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* JoustSchedule::~JoustSchedule() */

void __thiscall JoustSchedule::~JoustSchedule(JoustSchedule *this)

{
  ~JoustSchedule(this);
  AK::FreeHook(this);
  return;
}

