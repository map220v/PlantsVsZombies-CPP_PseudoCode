// Class: SpawnZombiesFromGridItemSpawnerProps


/* SpawnZombiesFromGridItemSpawnerProps::GetActionClass() const */

long * SpawnZombiesFromGridItemSpawnerProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SpawnZombiesFromGridItemWaveAction::sClass != (long *)0x0) {
    return SpawnZombiesFromGridItemWaveAction::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SpawnZombiesFromGridItemWaveAction::sClass = plVar1;
  uVar2 = SpawnZombiesJitteredWaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnZombiesFromGridItemWaveAction",uVar2,
            SpawnZombiesFromGridItemWaveAction::StaticNew);
  SpawnZombiesFromGridItemWaveAction::StaticClassInit();
  return SpawnZombiesFromGridItemWaveAction::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnZombiesFromGridItemSpawnerProps::StaticClassInit() */

void SpawnZombiesFromGridItemSpawnerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpawnZombiesFromGridItemSpawnerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0493d040,0xc0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpawnZombiesFromGridItemSpawnerProps::GetWaveStartMessage() const */

void SpawnZombiesFromGridItemSpawnerProps::GetWaveStartMessage(void)

{
  long in_x0;
  
  Sexy::ToWString((string *)(in_x0 + 0xb0));
  return;
}


/* SpawnZombiesFromGridItemSpawnerProps::SpawnZombiesFromGridItemSpawnerProps() */

void __thiscall
SpawnZombiesFromGridItemSpawnerProps::SpawnZombiesFromGridItemSpawnerProps
          (SpawnZombiesFromGridItemSpawnerProps *this)

{
  size_t in_x2;
  
  SpawnZombiesJitteredWaveActionProps::SpawnZombiesJitteredWaveActionProps
            ((SpawnZombiesJitteredWaveActionProps *)this);
  *(undefined ***)this = &PTR_GetClass_06911e90;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  Set8BytesTo0((string *)(this + 0xb0));
  std::string::append((string *)(this + 0xb0),"[WARNING_GRAVESTONE_SPAWN]",in_x2);
  this[0xbc] = (SpawnZombiesFromGridItemSpawnerProps)0x1;
  *(undefined4 *)(this + 0xb8) = 0;
  return;
}


/* SpawnZombiesFromGridItemSpawnerProps::StaticNew() */

SpawnZombiesFromGridItemSpawnerProps * SpawnZombiesFromGridItemSpawnerProps::StaticNew(void)

{
  SpawnZombiesFromGridItemSpawnerProps *this;
  
  this = ::operator_new(0xc0);
  SpawnZombiesFromGridItemSpawnerProps(this);
  return this;
}


/* SpawnZombiesFromGridItemSpawnerProps::~SpawnZombiesFromGridItemSpawnerProps() */

void __thiscall
SpawnZombiesFromGridItemSpawnerProps::~SpawnZombiesFromGridItemSpawnerProps
          (SpawnZombiesFromGridItemSpawnerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06911e90;
  std::string::~string((string *)(this + 0xb0));
  std::
  vector<Sexy::RtWeakPtr<GridItemType_const>,std::allocator<Sexy::RtWeakPtr<GridItemType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<GridItemType_const>,std::allocator<Sexy::RtWeakPtr<GridItemType_const>>>
           *)(this + 0x98));
  SpawnZombiesJitteredWaveActionProps::~SpawnZombiesJitteredWaveActionProps
            ((SpawnZombiesJitteredWaveActionProps *)this);
  return;
}


/* SpawnZombiesFromGridItemSpawnerProps::~SpawnZombiesFromGridItemSpawnerProps() */

void __thiscall
SpawnZombiesFromGridItemSpawnerProps::~SpawnZombiesFromGridItemSpawnerProps
          (SpawnZombiesFromGridItemSpawnerProps *this)

{
  ~SpawnZombiesFromGridItemSpawnerProps(this);
  AK::FreeHook(this);
  return;
}


/* SpawnZombiesFromGridItemSpawnerProps::StaticGetClass() */

long * SpawnZombiesFromGridItemSpawnerProps::StaticGetClass(void)

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
  uVar2 = SpawnZombiesJitteredWaveActionProps::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnZombiesFromGridItemSpawnerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnZombiesFromGridItemSpawnerProps::GetClass() const */

long * SpawnZombiesFromGridItemSpawnerProps::GetClass(void)

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
  uVar2 = SpawnZombiesJitteredWaveActionProps::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnZombiesFromGridItemSpawnerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

