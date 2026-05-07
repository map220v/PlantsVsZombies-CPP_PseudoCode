// Class: NewPVPGameData


/* NewPVPGameData::HasData() const */

bool __thiscall NewPVPGameData::HasData(NewPVPGameData *this)

{
  long lVar1;
  
  lVar1 = FUN_034a5e50(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  return lVar1 != 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameData::StaticClassInit() */

void NewPVPGameData::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPGameEventPositionData");
    (*pcVar3)(plVar2,asStack_10,FUN_034a5e80,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewPVPGameEvent");
    (*pcVar3)(plVar2,asStack_10,FUN_034a7614,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewPVPPlayerPlantData");
    (*pcVar3)(plVar2,asStack_10,FUN_034a604c,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewPVPPlayerPlants");
    (*pcVar3)(plVar2,asStack_10,FUN_034a8a1c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewPVPGameData");
    (*pcVar3)(plVar2,asStack_10,FUN_034a8ba4,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPGameData::StaticGetClass() */

long * NewPVPGameData::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPGameData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPGameData::GetClass() const */

long * NewPVPGameData::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPGameData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPGameData::GetLastEvent(NewPVPGameEvent::EventType) */

int * __thiscall NewPVPGameData::GetLastEvent(NewPVPGameData *this,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(this + 8);
  iVar2 = FUN_034a5e50(uVar6,*(undefined8 *)(this + 0x10));
  uVar1 = iVar2 - 1;
  if (-1 < (int)uVar1) {
    lVar4 = (long)(int)uVar1;
    do {
      lVar5 = lVar4 + -1;
      piVar3 = (int *)FUN_034a6210(uVar6,lVar4);
      if (*piVar3 == param_2) {
        return piVar3;
      }
      lVar4 = lVar5;
    } while (lVar5 != ((long)(int)uVar1 + -1) - (ulong)uVar1);
  }
  return (int *)0x0;
}


/* NewPVPGameData::GetFirstEvent() */

undefined * __thiscall NewPVPGameData::GetFirstEvent(NewPVPGameData *this)

{
  char cVar1;
  undefined *puVar2;
  
  cVar1 = HasData(this);
  if (cVar1 != '\0') {
    puVar2 = (undefined *)FUN_034a6210(*(undefined8 *)(this + 8),0);
    return puVar2;
  }
  return &DAT_06aa3468;
}


/* NewPVPGameData::NewPVPGameData() */

void __thiscall NewPVPGameData::NewPVPGameData(NewPVPGameData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066464c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* NewPVPGameData::StaticNew() */

NewPVPGameData * NewPVPGameData::StaticNew(void)

{
  NewPVPGameData *this;
  
  this = ::operator_new(0x20);
  NewPVPGameData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameData::GetEvent(float) */

void __thiscall NewPVPGameData::GetEvent(NewPVPGameData *this,float param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined4 in_register_00005004;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_034a87f4(CONCAT44(in_register_00005004,param_1),uVar2,uVar3);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
  }
  else {
    puVar4 = &DAT_06aa3468;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


/* NewPVPGameData::Clear() */

void __thiscall NewPVPGameData::Clear(NewPVPGameData *this)

{
  std::vector<NewPVPGameEvent,std::allocator<NewPVPGameEvent>>::clear
            ((vector<NewPVPGameEvent,std::allocator<NewPVPGameEvent>> *)(this + 8));
  return;
}


/* NewPVPGameData::~NewPVPGameData() */

void __thiscall NewPVPGameData::~NewPVPGameData(NewPVPGameData *this)

{
  *(undefined ***)this = &PTR_GetClass_066464c0;
  std::vector<NewPVPGameEvent,std::allocator<NewPVPGameEvent>>::~vector
            ((vector<NewPVPGameEvent,std::allocator<NewPVPGameEvent>> *)(this + 8));
  nop();
  return;
}


/* NewPVPGameData::~NewPVPGameData() */

void __thiscall NewPVPGameData::~NewPVPGameData(NewPVPGameData *this)

{
  ~NewPVPGameData(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameData::RemoveEvent(int) */

void __thiscall NewPVPGameData::RemoveEvent(NewPVPGameData *this,int param_1)

{
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
  local_18 = __gnu_cxx::
             __normal_iterator<DangerRoomSpecialOfferExtraItemData*,std::vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>>
             ::operator+((__normal_iterator<DangerRoomSpecialOfferExtraItemData*,std::vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>>
                          *)&local_20,(long)param_1);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<NewPVPGameEvent,std::allocator<NewPVPGameEvent>>::erase
            ((vector<NewPVPGameEvent,std::allocator<NewPVPGameEvent>> *)(this + 8),local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPGameData::SortEvents() */

void __thiscall NewPVPGameData::SortEvents(NewPVPGameData *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 8));
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 8));
  std::
  sort<__gnu_cxx::__normal_iterator<NewPVPGameEvent*,std::vector<NewPVPGameEvent,std::allocator<NewPVPGameEvent>>>,bool(*)(NewPVPGameEvent_const&,NewPVPGameEvent_const&)>
            (uVar1,uVar2,sortByElapsedTime);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameData::AddEvent(int, NewPVPGameEvent::EventType, float, int, int, int, float, unsigned
   int, std::vector<float, std::allocator<float> > const&) */

void NewPVPGameData::AddEvent(undefined4 param_1,NewPVPGameEvent *param_2,long param_3)

{
  NewPVPGameEvent aNStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  NewPVPGameEvent::NewPVPGameEvent(param_2._0_4_,param_1,aNStack_48);
  std::vector<NewPVPGameEvent,std::allocator<NewPVPGameEvent>>::push_back
            ((vector<NewPVPGameEvent,std::allocator<NewPVPGameEvent>> *)(param_3 + 8),aNStack_48);
  NewPVPGameEvent::~NewPVPGameEvent(aNStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameData::AddEvent(int, NewPVPGameEvent::EventType, float, int, float, float, float,
   unsigned int, std::vector<float, std::allocator<float> > const&) */

void NewPVPGameData::AddEvent
               (undefined4 param_1,NewPVPGameEvent *param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  NewPVPGameEvent aNStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  NewPVPGameEvent::NewPVPGameEvent(param_2._0_4_,param_3,param_4,param_1,aNStack_48);
  std::vector<NewPVPGameEvent,std::allocator<NewPVPGameEvent>>::push_back
            ((vector<NewPVPGameEvent,std::allocator<NewPVPGameEvent>> *)(param_5 + 8),aNStack_48);
  NewPVPGameEvent::~NewPVPGameEvent(aNStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

