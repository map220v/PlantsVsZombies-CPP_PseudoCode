// Class: GridItemEightiesArcadeCabinetProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEightiesArcadeCabinetProps::StaticClassInit() */

void GridItemEightiesArcadeCabinetProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemEightiesArcadeCabinetProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03e36d78,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemEightiesArcadeCabinetProps::StaticGetClass() */

long * GridItemEightiesArcadeCabinetProps::StaticGetClass(void)

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
  uVar2 = GridItemBreakableTargetProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemEightiesArcadeCabinetProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemEightiesArcadeCabinetProps::GetClass() const */

long * GridItemEightiesArcadeCabinetProps::GetClass(void)

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
  uVar2 = GridItemBreakableTargetProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemEightiesArcadeCabinetProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEightiesArcadeCabinetProps::GridItemEightiesArcadeCabinetProps() */

void __thiscall
GridItemEightiesArcadeCabinetProps::GridItemEightiesArcadeCabinetProps
          (GridItemEightiesArcadeCabinetProps *this)

{
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBreakableTargetProps::GridItemBreakableTargetProps((GridItemBreakableTargetProps *)this);
  *(undefined ***)this = &PTR_GetClass_06789ff0;
  std::string::string((string *)(this + 0x138),"jam_8bit");
  nop();
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x140));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x148));
  *(undefined4 *)(this + 0x150) = 0x3f800000;
  *(undefined4 *)(this + 0x154) = 0xc2a00000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  DVec2::DVec2((DVec2 *)&local_10,10.0,12.0);
  *(undefined8 *)(this + 0x140) = local_10;
  DVec2::DVec2((DVec2 *)&local_10,1.0,2.0);
  *(undefined8 *)(this + 0x148) = local_10;
  std::vector<BasicZombieWeights,std::allocator<BasicZombieWeights>>::clear
            ((vector<BasicZombieWeights,std::allocator<BasicZombieWeights>> *)(this + 0x158));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemEightiesArcadeCabinetProps::StaticNew() */

GridItemEightiesArcadeCabinetProps * GridItemEightiesArcadeCabinetProps::StaticNew(void)

{
  GridItemEightiesArcadeCabinetProps *this;
  
  this = ::operator_new(0x170);
  GridItemEightiesArcadeCabinetProps(this);
  return this;
}


/* GridItemEightiesArcadeCabinetProps::~GridItemEightiesArcadeCabinetProps() */

void __thiscall
GridItemEightiesArcadeCabinetProps::~GridItemEightiesArcadeCabinetProps
          (GridItemEightiesArcadeCabinetProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06789ff0;
  std::vector<BasicZombieWeights,std::allocator<BasicZombieWeights>>::~vector
            ((vector<BasicZombieWeights,std::allocator<BasicZombieWeights>> *)(this + 0x158));
  std::string::~string((string *)(this + 0x138));
  GridItemBreakableTargetProps::~GridItemBreakableTargetProps((GridItemBreakableTargetProps *)this);
  return;
}


/* GridItemEightiesArcadeCabinetProps::~GridItemEightiesArcadeCabinetProps() */

void __thiscall
GridItemEightiesArcadeCabinetProps::~GridItemEightiesArcadeCabinetProps
          (GridItemEightiesArcadeCabinetProps *this)

{
  ~GridItemEightiesArcadeCabinetProps(this);
  AK::FreeHook(this);
  return;
}

