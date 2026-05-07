// Class: SpawnPumpkinScarecrowWaveActionProps


/* SpawnPumpkinScarecrowWaveActionProps::GetGridItemPool() const */

vector<GridItemPoolEntry,std::allocator<GridItemPoolEntry>> *
SpawnPumpkinScarecrowWaveActionProps::GetGridItemPool(void)

{
  long in_x0;
  vector<GridItemPoolEntry,std::allocator<GridItemPoolEntry>> *in_x8;
  
  std::vector<GridItemPoolEntry,std::allocator<GridItemPoolEntry>>::vector
            (in_x8,(vector *)(in_x0 + 0x58));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnPumpkinScarecrowWaveActionProps::GetSpawnPositionsPool() const */

void SpawnPumpkinScarecrowWaveActionProps::GetSpawnPositionsPool(void)

{
  int iVar1;
  int iVar2;
  long in_x0;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *in_x8;
  Point aPStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x90) < 1) {
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)in_x8,(vector *)(in_x0 + 0x70));
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    iVar5 = *(int *)(in_x0 + 0x88);
    iVar6 = *(int *)(in_x0 + 0x90);
    if (iVar5 <= iVar5 + iVar6) {
      iVar3 = *(int *)(in_x0 + 0x8c);
      iVar4 = *(int *)(in_x0 + 0x94);
      iVar1 = iVar5;
      do {
        iVar2 = iVar3;
        if (iVar3 <= iVar3 + iVar4) {
          do {
            iVar5 = iVar2 + 1;
            Sexy::Point::Point(aPStack_28,iVar1,iVar2);
            std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                      ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20,aPStack_28);
            iVar3 = *(int *)(in_x0 + 0x8c);
            iVar4 = *(int *)(in_x0 + 0x94);
            iVar2 = iVar5;
          } while (iVar5 <= iVar3 + iVar4);
          iVar6 = *(int *)(in_x0 + 0x90);
          iVar5 = *(int *)(in_x0 + 0x88);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 <= iVar5 + iVar6);
    }
    std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
              (in_x8,(vector *)avStack_20);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpawnPumpkinScarecrowWaveActionProps::GetActionClass() const */

long * SpawnPumpkinScarecrowWaveActionProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SpawnPumpkinScarecrowWaveAction::sClass != (long *)0x0) {
    return SpawnPumpkinScarecrowWaveAction::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SpawnPumpkinScarecrowWaveAction::sClass = plVar1;
  uVar2 = SpawnGridItemsWaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnPumpkinScarecrowWaveAction",uVar2,
            SpawnPumpkinScarecrowWaveAction::StaticNew);
  SpawnPumpkinScarecrowWaveAction::StaticClassInit();
  return SpawnPumpkinScarecrowWaveAction::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnPumpkinScarecrowWaveActionProps::StaticClassInit() */

void SpawnPumpkinScarecrowWaveActionProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpawnPumpkinScarecrowWaveActionProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04c99364,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpawnPumpkinScarecrowWaveActionProps::StaticGetClass() */

long * SpawnPumpkinScarecrowWaveActionProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SpawnPumpkinScarecrowWaveActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnPumpkinScarecrowWaveActionProps::GetClass() const */

long * SpawnPumpkinScarecrowWaveActionProps::GetClass(void)

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
  (*pcVar3)(plVar1,"SpawnPumpkinScarecrowWaveActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnPumpkinScarecrowWaveActionProps::SpawnPumpkinScarecrowWaveActionProps() */

void __thiscall
SpawnPumpkinScarecrowWaveActionProps::SpawnPumpkinScarecrowWaveActionProps
          (SpawnPumpkinScarecrowWaveActionProps *this)

{
  SpawnGridItemsWaveActionProps::SpawnGridItemsWaveActionProps
            ((SpawnGridItemsWaveActionProps *)this);
  *(undefined ***)this = &PTR_GetClass_069966c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  Sexy::Insets::Insets((Insets *)(this + 0x88));
  *(undefined4 *)(this + 0x9c) = 1;
  *(undefined4 *)(this + 0x98) = 0;
  return;
}


/* SpawnPumpkinScarecrowWaveActionProps::StaticNew() */

SpawnPumpkinScarecrowWaveActionProps * SpawnPumpkinScarecrowWaveActionProps::StaticNew(void)

{
  SpawnPumpkinScarecrowWaveActionProps *this;
  
  this = ::operator_new(0xa0);
  SpawnPumpkinScarecrowWaveActionProps(this);
  return this;
}


/* SpawnPumpkinScarecrowWaveActionProps::~SpawnPumpkinScarecrowWaveActionProps() */

void __thiscall
SpawnPumpkinScarecrowWaveActionProps::~SpawnPumpkinScarecrowWaveActionProps
          (SpawnPumpkinScarecrowWaveActionProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069966c0;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x70));
  std::vector<GridItemPoolEntry,std::allocator<GridItemPoolEntry>>::~vector
            ((vector<GridItemPoolEntry,std::allocator<GridItemPoolEntry>> *)(this + 0x58));
  SpawnGridItemsWaveActionProps::~SpawnGridItemsWaveActionProps
            ((SpawnGridItemsWaveActionProps *)this);
  return;
}


/* SpawnPumpkinScarecrowWaveActionProps::~SpawnPumpkinScarecrowWaveActionProps() */

void __thiscall
SpawnPumpkinScarecrowWaveActionProps::~SpawnPumpkinScarecrowWaveActionProps
          (SpawnPumpkinScarecrowWaveActionProps *this)

{
  ~SpawnPumpkinScarecrowWaveActionProps(this);
  AK::FreeHook(this);
  return;
}

