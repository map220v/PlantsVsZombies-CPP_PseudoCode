// Class: WorldCupConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldCupConfig::StaticClassInit() */

void WorldCupConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"ObstacleNonSpawnData");
    (*pcVar3)(plVar2,asStack_10,FUN_04c3d094,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlayerSet");
    (*pcVar3)(plVar2,asStack_10,FUN_04c3d988,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WorldCupConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_04c3db80,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldCupConfig::StaticGetClass() */

long * WorldCupConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldCupConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldCupConfig::GetClass() const */

long * WorldCupConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldCupConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldCupConfig::WorldCupConfig() */

void __thiscall WorldCupConfig::WorldCupConfig(WorldCupConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06985680;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  this[8] = (WorldCupConfig)0x0;
  return;
}


/* WorldCupConfig::StaticNew() */

WorldCupConfig * WorldCupConfig::StaticNew(void)

{
  WorldCupConfig *this;
  
  this = ::operator_new(0x28);
  WorldCupConfig(this);
  return this;
}


/* WorldCupConfig::~WorldCupConfig() */

void __thiscall WorldCupConfig::~WorldCupConfig(WorldCupConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_06985680;
  std::vector<PlayerSet,std::allocator<PlayerSet>>::~vector
            ((vector<PlayerSet,std::allocator<PlayerSet>> *)(this + 0x10));
  nop();
  return;
}


/* WorldCupConfig::~WorldCupConfig() */

void __thiscall WorldCupConfig::~WorldCupConfig(WorldCupConfig *this)

{
  ~WorldCupConfig(this);
  AK::FreeHook(this);
  return;
}


/* WorldCupConfig::GetPlayerSetList() */

vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *
WorldCupConfig::GetPlayerSetList(void)

{
  long in_x0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  
  if (*(char *)(in_x0 + 8) == '\0') {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
    return in_x8;
  }
  std::vector<PlayerSet,std::allocator<PlayerSet>>::vector
            ((vector<PlayerSet,std::allocator<PlayerSet>> *)in_x8,(vector *)(in_x0 + 0x10));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldCupConfig::GetTargetSetLocations(int) */

void WorldCupConfig::GetTargetSetLocations(int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  int *piVar2;
  int in_w1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(char *)((ulong)(uint)param_1 + 8) != '\0') {
    this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)((ulong)(uint)param_1 + 0x10);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if (*piVar2 == in_w1) {
        std::vector<ObstacleNonSpawnData,std::allocator<ObstacleNonSpawnData>>::vector
                  ((vector<ObstacleNonSpawnData,std::allocator<ObstacleNonSpawnData>> *)in_x8,
                   (vector *)(piVar2 + 2));
        goto LAB_04c3e26c;
      }
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
    }
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
LAB_04c3e26c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldCupConfig::Refresh() */

void __thiscall WorldCupConfig::Refresh(WorldCupConfig *this)

{
  bool bVar1;
  undefined8 uVar2;
  RtObject *this_00;
  WorldCupConfig *pWVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x69);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
LAB_04c3e970:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pWVar3 = Sexy::RtObject::Cast<WorldCupConfig>(this_00);
      if (pWVar3 != (WorldCupConfig *)0x0) {
        std::vector<PlayerSet,std::allocator<PlayerSet>>::operator=
                  ((vector<PlayerSet,std::allocator<PlayerSet>> *)(this + 0x10),
                   (vector *)(pWVar3 + 0x10));
        this[8] = (WorldCupConfig)0x1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        goto LAB_04c3e970;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
  } while( true );
}

