// Class: StormZombieSpawnerProps


/* StormZombieSpawnerProps::GetActionClass() const */

long * StormZombieSpawnerProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StormZombieSpawner::sClass != (long *)0x0) {
    return StormZombieSpawner::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StormZombieSpawner::sClass = plVar1;
  uVar2 = ZombieSpawnerAction::StaticGetClass();
  (*pcVar3)(plVar1,"StormZombieSpawner",uVar2,StormZombieSpawner::StaticNew);
  StormZombieSpawner::StaticClassInit();
  return StormZombieSpawner::sClass;
}


/* StormZombieSpawnerProps::StormZombieSpawnerProps() */

void __thiscall StormZombieSpawnerProps::StormZombieSpawnerProps(StormZombieSpawnerProps *this)

{
  undefined4 uVar1;
  
  ZombieSpawnerActionProps::ZombieSpawnerActionProps((ZombieSpawnerActionProps *)this);
  *(undefined ***)this = &PTR_GetClass_06912bc0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 1;
  *(undefined4 *)(this + 0x60) = 0x3f800000;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x68) = 5;
  *(undefined4 *)(this + 0x6c) = 8;
  *(undefined4 *)(this + 100) = uVar1;
  return;
}


/* StormZombieSpawnerProps::StaticNew() */

StormZombieSpawnerProps * StormZombieSpawnerProps::StaticNew(void)

{
  StormZombieSpawnerProps *this;
  
  this = ::operator_new(0x78);
  StormZombieSpawnerProps(this);
  return this;
}


/* StormZombieSpawnerProps::~StormZombieSpawnerProps() */

void __thiscall StormZombieSpawnerProps::~StormZombieSpawnerProps(StormZombieSpawnerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06912bc0;
  std::vector<StormZombieInstruction,std::allocator<StormZombieInstruction>>::~vector
            ((vector<StormZombieInstruction,std::allocator<StormZombieInstruction>> *)(this + 0x40))
  ;
  ZombieSpawnerActionProps::~ZombieSpawnerActionProps((ZombieSpawnerActionProps *)this);
  return;
}


/* StormZombieSpawnerProps::~StormZombieSpawnerProps() */

void __thiscall StormZombieSpawnerProps::~StormZombieSpawnerProps(StormZombieSpawnerProps *this)

{
  ~StormZombieSpawnerProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StormZombieSpawnerProps::GatherSpawnedZombieTypes(std::set<ZombieType const*,
   std::less<ZombieType const*>, std::allocator<ZombieType const*> >&) */

void __thiscall
StormZombieSpawnerProps::GatherSpawnedZombieTypes(StormZombieSpawnerProps *this,set *param_1)

{
  bool bVar1;
  RtWeakPtr *this_00;
  undefined8 local_20;
  undefined8 local_18;
  ResourceInfo *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x40));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x40));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    local_10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    std::set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>::
    insert((set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>> *)
           param_1,(ZombieType **)&local_10);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StormZombieSpawnerProps::StaticClassInit() */

void StormZombieSpawnerProps::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"sandstorm",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"snowstorm",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"excoldstorm",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"StormType");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"StormZombieInstruction");
    (*pcVar3)(plVar2,avStack_20,FUN_0494579c,0x10,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"StormZombieSpawnerProps");
    (*pcVar3)(plVar2,avStack_20,FUN_049469ac,0x78,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StormZombieSpawnerProps::StaticGetClass() */

long * StormZombieSpawnerProps::StaticGetClass(void)

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
  uVar2 = ZombieSpawnerActionProps::StaticGetClass();
  (*pcVar3)(plVar1,"StormZombieSpawnerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StormZombieSpawnerProps::GetClass() const */

long * StormZombieSpawnerProps::GetClass(void)

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
  uVar2 = ZombieSpawnerActionProps::StaticGetClass();
  (*pcVar3)(plVar1,"StormZombieSpawnerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

