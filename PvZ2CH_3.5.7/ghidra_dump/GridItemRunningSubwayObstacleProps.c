// Class: GridItemRunningSubwayObstacleProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRunningSubwayObstacleProps::StaticClassInit() */

void GridItemRunningSubwayObstacleProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemRunningSubwayObstacleProps");
    (*pcVar2)(plVar1,asStack_10,FUN_033eb99c,0x140,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRunningSubwayObstacleProps::StaticGetClass() */

long * GridItemRunningSubwayObstacleProps::StaticGetClass(void)

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
  uVar2 = GridItemRunningSubwayObjectProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRunningSubwayObstacleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRunningSubwayObstacleProps::GetClass() const */

long * GridItemRunningSubwayObstacleProps::GetClass(void)

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
  uVar2 = GridItemRunningSubwayObjectProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRunningSubwayObstacleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRunningSubwayObstacleProps::GridItemRunningSubwayObstacleProps() */

void __thiscall
GridItemRunningSubwayObstacleProps::GridItemRunningSubwayObstacleProps
          (GridItemRunningSubwayObstacleProps *this)

{
  GridItemRunningSubwayObjectProps::GridItemRunningSubwayObjectProps
            ((GridItemRunningSubwayObjectProps *)this);
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined ***)this = &PTR_GetClass_0661cd80;
  return;
}


/* GridItemRunningSubwayObstacleProps::StaticNew() */

GridItemRunningSubwayObstacleProps * GridItemRunningSubwayObstacleProps::StaticNew(void)

{
  GridItemRunningSubwayObstacleProps *this;
  
  this = ::operator_new(0x140);
  GridItemRunningSubwayObstacleProps(this);
  return this;
}


/* GridItemRunningSubwayObstacleProps::~GridItemRunningSubwayObstacleProps() */

void __thiscall
GridItemRunningSubwayObstacleProps::~GridItemRunningSubwayObstacleProps
          (GridItemRunningSubwayObstacleProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0661cd80;
  GridItemRunningSubwayObjectProps::~GridItemRunningSubwayObjectProps
            ((GridItemRunningSubwayObjectProps *)this);
  return;
}


/* GridItemRunningSubwayObstacleProps::~GridItemRunningSubwayObstacleProps() */

void __thiscall
GridItemRunningSubwayObstacleProps::~GridItemRunningSubwayObstacleProps
          (GridItemRunningSubwayObstacleProps *this)

{
  ~GridItemRunningSubwayObstacleProps(this);
  AK::FreeHook(this);
  return;
}

