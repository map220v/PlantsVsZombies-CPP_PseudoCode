// Class: PoolBoardRegionDeepWater


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoolBoardRegionDeepWater::StaticClassInit() */

void PoolBoardRegionDeepWater::StaticClassInit(void)

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
    std::string::string(asStack_10,"PoolBoardRegionDeepWater");
    (*pcVar2)(plVar1,asStack_10,FUN_03f1d928,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PoolBoardRegionDeepWater::StaticGetClass() */

long * PoolBoardRegionDeepWater::StaticGetClass(void)

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
  uVar2 = BoardRegion::StaticGetClass();
  (*pcVar3)(plVar1,"PoolBoardRegionDeepWater",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PoolBoardRegionDeepWater::GetClass() const */

long * PoolBoardRegionDeepWater::GetClass(void)

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
  uVar2 = BoardRegion::StaticGetClass();
  (*pcVar3)(plVar1,"PoolBoardRegionDeepWater",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PoolBoardRegionDeepWater::~PoolBoardRegionDeepWater() */

void __thiscall PoolBoardRegionDeepWater::~PoolBoardRegionDeepWater(PoolBoardRegionDeepWater *this)

{
  *(undefined ***)this = &PTR_GetClass_06797240;
  BoardRegion::~BoardRegion((BoardRegion *)this);
  return;
}


/* PoolBoardRegionDeepWater::~PoolBoardRegionDeepWater() */

void __thiscall PoolBoardRegionDeepWater::~PoolBoardRegionDeepWater(PoolBoardRegionDeepWater *this)

{
  ~PoolBoardRegionDeepWater(this);
  AK::FreeHook(this);
  return;
}


/* PoolBoardRegionDeepWater::PoolBoardRegionDeepWater() */

void __thiscall PoolBoardRegionDeepWater::PoolBoardRegionDeepWater(PoolBoardRegionDeepWater *this)

{
  BoardRegion::BoardRegion((BoardRegion *)this);
  *(undefined ***)this = &PTR_GetClass_06797240;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  SporeshroomSubsystem::RecordSporeshroomLevel((SporeshroomSubsystem *)this,2);
  return;
}


/* PoolBoardRegionDeepWater::StaticNew() */

PoolBoardRegionDeepWater * PoolBoardRegionDeepWater::StaticNew(void)

{
  PoolBoardRegionDeepWater *this;
  
  this = ::operator_new(0x30);
  PoolBoardRegionDeepWater(this);
  return this;
}

