// Class: RiftSchedule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftSchedule::StaticClassInit() */

void RiftSchedule::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftSubEventDefinition");
    (*pcVar3)(plVar2,asStack_10,FUN_036ae1e8,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RiftEventDefinition");
    (*pcVar3)(plVar2,asStack_10,FUN_036b0d6c,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RiftSchedule");
    (*pcVar3)(plVar2,asStack_10,FUN_036b1344,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftSchedule::StaticGetClass() */

long * RiftSchedule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftSchedule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftSchedule::GetClass() const */

long * RiftSchedule::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftSchedule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftSchedule::GetRiftEventDefinitionFromIndex(int) */

undefined8 __thiscall RiftSchedule::GetRiftEventDefinitionFromIndex(RiftSchedule *this,int param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (-1 < param_1) {
    uVar2 = *(undefined8 *)(this + 0x10);
    uVar1 = FUN_036adf3c(uVar2,*(undefined8 *)(this + 0x18));
    if ((ulong)(long)param_1 < uVar1) {
      uVar2 = FUN_036adf2c(uVar2);
      return uVar2;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftSchedule::FindRiftEventDefinition(long) */

void __thiscall RiftSchedule::FindRiftEventDefinition(RiftSchedule *this,long param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  a_Stack_18 [8];
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            (a_Stack_18,(__normal_iterator *)&local_10);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)a_Stack_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      uVar3 = 0xffffffff;
LAB_036af66c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)a_Stack_18);
    if ((plVar2 != (long *)0x0) && (*plVar2 == param_1)) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_00);
      uVar3 = __gnu_cxx::operator-((__normal_iterator *)a_Stack_18,(__normal_iterator *)&local_10);
      goto LAB_036af66c;
    }
    FUN_036af578(a_Stack_18);
  } while( true );
}


/* RiftSchedule::GetRiftEventDefinition(long) */

undefined8 __thiscall RiftSchedule::GetRiftEventDefinition(RiftSchedule *this,long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FindRiftEventDefinition(this,param_1);
  if (-1 < iVar1) {
    uVar2 = FUN_036adf2c(*(undefined8 *)(this + 0x10));
    return uVar2;
  }
  return 0;
}


/* RiftSchedule::RiftSchedule() */

void __thiscall RiftSchedule::RiftSchedule(RiftSchedule *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_06680bd0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* RiftSchedule::StaticNew() */

RiftSchedule * RiftSchedule::StaticNew(void)

{
  RiftSchedule *this;
  
  this = ::operator_new(0x28);
  RiftSchedule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftSchedule::FindActiveRiftEventDefinition(long) */

void __thiscall RiftSchedule::FindActiveRiftEventDefinition(RiftSchedule *this,long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  undefined1 auStack_30 [24];
  reverse_iterator<__gnu_cxx::__normal_iterator<RiftEventDefinition*,std::vector<RiftEventDefinition,std::allocator<RiftEventDefinition>>>>
  arStack_18 [8];
  reverse_iterator arStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  vector<ZombiePushGriditemActionHandler::PushInProgress,std::allocator<ZombiePushGriditemActionHandler::PushInProgress>>
  ::rbegin();
  do {
    std::
    vector<ZombiePushGriditemActionHandler::PushInProgress,std::allocator<ZombiePushGriditemActionHandler::PushInProgress>>
    ::rend();
    bVar1 = std::operator!=(arStack_18,arStack_10);
    if (!bVar1) {
      iVar2 = -1;
LAB_036afa48:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar2);
    }
    puVar4 = (ulong *)std::
                      reverse_iterator<__gnu_cxx::__normal_iterator<RiftEventDefinition*,std::vector<RiftEventDefinition,std::allocator<RiftEventDefinition>>>>
                      ::operator*(arStack_18);
    if (((puVar4 != (ulong *)0x0) && (*puVar4 <= (ulong)param_1)) && ((ulong)param_1 < puVar4[1])) {
      std::
      vector<ZombiePushGriditemActionHandler::PushInProgress,std::allocator<ZombiePushGriditemActionHandler::PushInProgress>>
      ::rbegin();
      iVar2 = std::operator-((reverse_iterator *)arStack_18,arStack_10);
      iVar3 = FUN_036adf3c(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
      iVar2 = (iVar3 + -1) - iVar2;
      goto LAB_036afa48;
    }
    FUN_036af484(auStack_30,arStack_18);
  } while( true );
}


/* RiftSchedule::GetCurrentRiftEvent(long) */

undefined8 __thiscall RiftSchedule::GetCurrentRiftEvent(RiftSchedule *this,long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FindActiveRiftEventDefinition(this,param_1);
  if (-1 < iVar1) {
    uVar2 = GetRiftEventDefinitionFromIndex(this,iVar1);
    return uVar2;
  }
  return 0;
}


/* RiftSchedule::CalculateEpochTimeFromCurrentEventDelta(long, long) */

long __thiscall
RiftSchedule::CalculateEpochTimeFromCurrentEventDelta(RiftSchedule *this,long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)GetCurrentRiftEvent(this,param_2);
  if (plVar1 == (long *)0x0) {
    lVar2 = -1;
  }
  else {
    lVar2 = *plVar1 + param_1 * 0x15180;
  }
  return lVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftSchedule::GetSchedule() */

void RiftSchedule::GetSchedule(void)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,L"RiftSchedule");
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar1,0x72,aRStack_18);
  uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftSchedule::GetRiftEventDefinitionFromWorld(std::string const&) */

void __thiscall RiftSchedule::GetRiftEventDefinitionFromWorld(RiftSchedule *this,string *param_1)

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
  FUN_05475d88((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10,param_1);
  local_18 = FUN_036b169c(uVar2,uVar3,(pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
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


/* RiftSchedule::~RiftSchedule() */

void __thiscall RiftSchedule::~RiftSchedule(RiftSchedule *this)

{
  *(undefined ***)this = &PTR_GetClass_06680bd0;
  std::vector<RiftEventDefinition,std::allocator<RiftEventDefinition>>::~vector
            ((vector<RiftEventDefinition,std::allocator<RiftEventDefinition>> *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* RiftSchedule::~RiftSchedule() */

void __thiscall RiftSchedule::~RiftSchedule(RiftSchedule *this)

{
  ~RiftSchedule(this);
  AK::FreeHook(this);
  return;
}

