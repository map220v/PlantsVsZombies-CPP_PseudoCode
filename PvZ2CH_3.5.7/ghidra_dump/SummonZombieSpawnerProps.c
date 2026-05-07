// Class: SummonZombieSpawnerProps


/* SummonZombieSpawnerProps::GetActionClass() const */

long * SummonZombieSpawnerProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SummonZombieSpawner::sClass != (long *)0x0) {
    return SummonZombieSpawner::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SummonZombieSpawner::sClass = plVar1;
  uVar2 = ZombieSpawnerAction::StaticGetClass();
  (*pcVar3)(plVar1,"SummonZombieSpawner",uVar2,SummonZombieSpawner::StaticNew);
  SummonZombieSpawner::StaticClassInit();
  return SummonZombieSpawner::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummonZombieSpawnerProps::StaticClassInit() */

void SummonZombieSpawnerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SummonZombieSpawnerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04945e48,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SummonZombieSpawnerProps::StaticGetClass() */

long * SummonZombieSpawnerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SummonZombieSpawnerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SummonZombieSpawnerProps::GetClass() const */

long * SummonZombieSpawnerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"SummonZombieSpawnerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SummonZombieSpawnerProps::SummonZombieSpawnerProps() */

void __thiscall SummonZombieSpawnerProps::SummonZombieSpawnerProps(SummonZombieSpawnerProps *this)

{
  ZombieSpawnerActionProps::ZombieSpawnerActionProps((ZombieSpawnerActionProps *)this);
  *(undefined ***)this = &PTR_GetClass_06912d30;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 8;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 4;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 1;
  return;
}


/* SummonZombieSpawnerProps::StaticNew() */

SummonZombieSpawnerProps * SummonZombieSpawnerProps::StaticNew(void)

{
  SummonZombieSpawnerProps *this;
  
  this = ::operator_new(0x70);
  SummonZombieSpawnerProps(this);
  return this;
}


/* SummonZombieSpawnerProps::~SummonZombieSpawnerProps() */

void __thiscall SummonZombieSpawnerProps::~SummonZombieSpawnerProps(SummonZombieSpawnerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06912d30;
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
           *)(this + 0x40));
  ZombieSpawnerActionProps::~ZombieSpawnerActionProps((ZombieSpawnerActionProps *)this);
  return;
}


/* SummonZombieSpawnerProps::~SummonZombieSpawnerProps() */

void __thiscall SummonZombieSpawnerProps::~SummonZombieSpawnerProps(SummonZombieSpawnerProps *this)

{
  ~SummonZombieSpawnerProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummonZombieSpawnerProps::GatherSpawnedZombieTypes(std::set<ZombieType const*,
   std::less<ZombieType const*>, std::allocator<ZombieType const*> >&) */

void __thiscall
SummonZombieSpawnerProps::GatherSpawnedZombieTypes(SummonZombieSpawnerProps *this,set *param_1)

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
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

