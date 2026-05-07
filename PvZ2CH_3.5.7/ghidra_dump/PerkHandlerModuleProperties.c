// Class: PerkHandlerModuleProperties


/* PerkHandlerModuleProperties::GetModuleClass() const */

long * PerkHandlerModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PerkHandlerModule::sClass != (long *)0x0) {
    return PerkHandlerModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PerkHandlerModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"PerkHandlerModule",uVar2,PerkHandlerModule::StaticNew);
  PerkHandlerModule::StaticClassInit();
  return PerkHandlerModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PerkHandlerModuleProperties::StaticClassInit() */

void PerkHandlerModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PerkHandlerModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036e3ae4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PerkHandlerModuleProperties::StaticGetClass() */

long * PerkHandlerModuleProperties::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PerkHandlerModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PerkHandlerModuleProperties::GetClass() const */

long * PerkHandlerModuleProperties::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PerkHandlerModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PerkHandlerModuleProperties::PerkHandlerModuleProperties() */

void __thiscall
PerkHandlerModuleProperties::PerkHandlerModuleProperties(PerkHandlerModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06685c40;
  return;
}


/* PerkHandlerModuleProperties::StaticNew() */

PerkHandlerModuleProperties * PerkHandlerModuleProperties::StaticNew(void)

{
  PerkHandlerModuleProperties *this;
  
  this = ::operator_new(0x40);
  PerkHandlerModuleProperties(this);
  return this;
}


/* PerkHandlerModuleProperties::~PerkHandlerModuleProperties() */

void __thiscall
PerkHandlerModuleProperties::~PerkHandlerModuleProperties(PerkHandlerModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06685c40;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* PerkHandlerModuleProperties::~PerkHandlerModuleProperties() */

void __thiscall
PerkHandlerModuleProperties::~PerkHandlerModuleProperties(PerkHandlerModuleProperties *this)

{
  ~PerkHandlerModuleProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PerkHandlerModuleProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
PerkHandlerModuleProperties::GatherResourceRequirements
          (PerkHandlerModuleProperties *this,set *param_1)

{
  bool bVar1;
  GridItemPoolEntry *pGVar2;
  long *plVar3;
  undefined8 local_40;
  undefined8 local_38;
  GridItemPoolEntry aGStack_30 [16];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModuleProperties::GatherResourceRequirements((LevelModuleProperties *)this,param_1);
  Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
  PennyPerkMgr::GetUnlockedPerkList();
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    pGVar2 = (GridItemPoolEntry *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    GridItemPoolEntry::GridItemPoolEntry(aGStack_30,pGVar2);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aGStack_30);
    (**(code **)(*plVar3 + 0x78))(plVar3,param_1);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aGStack_30);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_40);
  }
  std::vector<PerkData,std::allocator<PerkData>>::~vector
            ((vector<PerkData,std::allocator<PerkData>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

