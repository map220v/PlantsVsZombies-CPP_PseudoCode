// Class: SpawnModernPortalsWaveActionProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnModernPortalsWaveActionProps::StaticClassInit() */

void SpawnModernPortalsWaveActionProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpawnModernPortalsWaveActionProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04934bfc,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpawnModernPortalsWaveActionProps::StaticGetClass() */

long * SpawnModernPortalsWaveActionProps::StaticGetClass(void)

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
  uVar2 = SpawnGridItemsWaveActionProps::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnModernPortalsWaveActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnModernPortalsWaveActionProps::GetClass() const */

long * SpawnModernPortalsWaveActionProps::GetClass(void)

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
  uVar2 = SpawnGridItemsWaveActionProps::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnModernPortalsWaveActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnModernPortalsWaveActionProps::GetActionClass() const */

long * SpawnModernPortalsWaveActionProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SpawnModernPortalsWaveAction::sClass != (long *)0x0) {
    return SpawnModernPortalsWaveAction::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SpawnModernPortalsWaveAction::sClass = plVar1;
  uVar2 = SpawnGridItemsWaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnModernPortalsWaveAction",uVar2,SpawnModernPortalsWaveAction::StaticNew);
  SpawnModernPortalsWaveAction::StaticClassInit();
  return SpawnModernPortalsWaveAction::sClass;
}


/* SpawnModernPortalsWaveActionProps::SpawnModernPortalsWaveActionProps() */

void __thiscall
SpawnModernPortalsWaveActionProps::SpawnModernPortalsWaveActionProps
          (SpawnModernPortalsWaveActionProps *this)

{
  SpawnGridItemsWaveActionProps::SpawnGridItemsWaveActionProps
            ((SpawnGridItemsWaveActionProps *)this);
  *(undefined ***)this = &PTR_GetClass_06911770;
  Set8BytesTo0(this + 0x60);
  *(undefined4 *)(this + 0x68) = 0xffffffff;
  *(undefined4 *)(this + 0x6c) = 0xffffffff;
  *(undefined4 *)(this + 0x70) = 0xffffffff;
  return;
}


/* SpawnModernPortalsWaveActionProps::StaticNew() */

SpawnModernPortalsWaveActionProps * SpawnModernPortalsWaveActionProps::StaticNew(void)

{
  SpawnModernPortalsWaveActionProps *this;
  
  this = ::operator_new(0x78);
  SpawnModernPortalsWaveActionProps(this);
  return this;
}


/* SpawnModernPortalsWaveActionProps::~SpawnModernPortalsWaveActionProps() */

void __thiscall
SpawnModernPortalsWaveActionProps::~SpawnModernPortalsWaveActionProps
          (SpawnModernPortalsWaveActionProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06911770;
  std::string::~string((string *)(this + 0x60));
  SpawnGridItemsWaveActionProps::~SpawnGridItemsWaveActionProps
            ((SpawnGridItemsWaveActionProps *)this);
  return;
}


/* SpawnModernPortalsWaveActionProps::~SpawnModernPortalsWaveActionProps() */

void __thiscall
SpawnModernPortalsWaveActionProps::~SpawnModernPortalsWaveActionProps
          (SpawnModernPortalsWaveActionProps *this)

{
  ~SpawnModernPortalsWaveActionProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnModernPortalsWaveActionProps::GetGridItemPool() const */

void SpawnModernPortalsWaveActionProps::GetGridItemPool(void)

{
  long in_x0;
  string *psVar1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  FUN_031f5e7c(asStack_18,"zombieportal_",in_x0 + 0x60);
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar1);
  std::string::~string(asStack_18);
  GridItemPoolEntry::GridItemPoolEntry((GridItemPoolEntry *)asStack_18);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)asStack_18,(RtWeakPtr *)aRStack_20);
  local_10 = 1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  std::vector<GridItemPoolEntry,std::allocator<GridItemPoolEntry>>::push_back
            ((vector<GridItemPoolEntry,std::allocator<GridItemPoolEntry>> *)in_x8,
             (GridItemPoolEntry *)asStack_18);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnModernPortalsWaveActionProps::GetSpawnPositionsPool() const */

void SpawnModernPortalsWaveActionProps::GetSpawnPositionsPool(void)

{
  long in_x0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_10,*(int *)(in_x0 + 0x58),*(int *)(in_x0 + 0x54));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)in_x8,aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

