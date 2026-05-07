// Class: GridItemBarrelProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBarrelProps::StaticClassInit() */

void GridItemBarrelProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemBarrelProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04c78468,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBarrelProps::StaticGetClass() */

long * GridItemBarrelProps::StaticGetClass(void)

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
  uVar2 = GridItemBoardEntityConditionTargetProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemBarrelProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemBarrelProps::GetClass() const */

long * GridItemBarrelProps::GetClass(void)

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
  uVar2 = GridItemBoardEntityConditionTargetProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemBarrelProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBarrelProps::GridItemBarrelProps() */

void __thiscall GridItemBarrelProps::GridItemBarrelProps(GridItemBarrelProps *this)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBoardEntityConditionTargetProps::GridItemBoardEntityConditionTargetProps
            ((GridItemBoardEntityConditionTargetProps *)this);
  *(undefined ***)this = &PTR_GetClass_06991c40;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x138) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x140) = 0x42480000;
  std::vector<float,std::allocator<float>>::vector
            ((vector<float,std::allocator<float>> *)(this + 0x148),&DAT_057556f0,2,auStack_10);
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x160),&DAT_05755700,2,auStack_10);
  std::vector<float,std::allocator<float>>::vector
            ((vector<float,std::allocator<float>> *)(this + 0x178),&DAT_05755710,2,auStack_10);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 400));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBarrelProps::StaticNew() */

GridItemBarrelProps * GridItemBarrelProps::StaticNew(void)

{
  GridItemBarrelProps *this;
  
  this = ::operator_new(0x1a8);
  GridItemBarrelProps(this);
  return this;
}


/* GridItemBarrelProps::~GridItemBarrelProps() */

void __thiscall GridItemBarrelProps::~GridItemBarrelProps(GridItemBarrelProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06991c40;
  std::vector<GriditemBarrelZombieDes,std::allocator<GriditemBarrelZombieDes>>::~vector
            ((vector<GriditemBarrelZombieDes,std::allocator<GriditemBarrelZombieDes>> *)(this + 400)
            );
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x178));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x160));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x148));
  GridItemBoardEntityConditionTargetProps::~GridItemBoardEntityConditionTargetProps
            ((GridItemBoardEntityConditionTargetProps *)this);
  return;
}


/* GridItemBarrelProps::~GridItemBarrelProps() */

void __thiscall GridItemBarrelProps::~GridItemBarrelProps(GridItemBarrelProps *this)

{
  ~GridItemBarrelProps(this);
  AK::FreeHook(this);
  return;
}

