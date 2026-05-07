// Class: SpawnGravestonesWaveActionProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnGravestonesWaveActionProps::StaticClassInit() */

void SpawnGravestonesWaveActionProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpawnGravestonesWaveActionProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04935aa0,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpawnGravestonesWaveActionProps::StaticGetClass() */

long * SpawnGravestonesWaveActionProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SpawnGravestonesWaveActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnGravestonesWaveActionProps::GetClass() const */

long * SpawnGravestonesWaveActionProps::GetClass(void)

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
  (*pcVar3)(plVar1,"SpawnGravestonesWaveActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnGravestonesWaveActionProps::GetActionClass() const */

long * SpawnGravestonesWaveActionProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SpawnGravestonesWaveAction::sClass != (long *)0x0) {
    return SpawnGravestonesWaveAction::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SpawnGravestonesWaveAction::sClass = plVar1;
  uVar2 = SpawnGridItemsWaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnGravestonesWaveAction",uVar2,SpawnGravestonesWaveAction::StaticNew);
  SpawnGravestonesWaveAction::StaticClassInit();
  return SpawnGravestonesWaveAction::sClass;
}


/* SpawnGravestonesWaveActionProps::SpawnGravestonesWaveActionProps() */

void __thiscall
SpawnGravestonesWaveActionProps::SpawnGravestonesWaveActionProps
          (SpawnGravestonesWaveActionProps *this)

{
  SpawnGridItemsWaveActionProps::SpawnGridItemsWaveActionProps
            ((SpawnGridItemsWaveActionProps *)this);
  *(undefined ***)this = &PTR_GetClass_069115f0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  Sexy::Insets::Insets((Insets *)(this + 0x88));
  return;
}


/* SpawnGravestonesWaveActionProps::StaticNew() */

SpawnGravestonesWaveActionProps * SpawnGravestonesWaveActionProps::StaticNew(void)

{
  SpawnGravestonesWaveActionProps *this;
  
  this = ::operator_new(0x98);
  SpawnGravestonesWaveActionProps(this);
  return this;
}


/* SpawnGravestonesWaveActionProps::~SpawnGravestonesWaveActionProps() */

void __thiscall
SpawnGravestonesWaveActionProps::~SpawnGravestonesWaveActionProps
          (SpawnGravestonesWaveActionProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069115f0;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x70));
  std::vector<GridItemPoolEntry,std::allocator<GridItemPoolEntry>>::~vector
            ((vector<GridItemPoolEntry,std::allocator<GridItemPoolEntry>> *)(this + 0x58));
  SpawnGridItemsWaveActionProps::~SpawnGridItemsWaveActionProps
            ((SpawnGridItemsWaveActionProps *)this);
  return;
}


/* SpawnGravestonesWaveActionProps::~SpawnGravestonesWaveActionProps() */

void __thiscall
SpawnGravestonesWaveActionProps::~SpawnGravestonesWaveActionProps
          (SpawnGravestonesWaveActionProps *this)

{
  ~SpawnGravestonesWaveActionProps(this);
  AK::FreeHook(this);
  return;
}

