// Class: GridItemCthulhuActiniaTentacleProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacleProps::StaticClassInit() */

void GridItemCthulhuActiniaTentacleProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCthulhuActiniaTentacleProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04d5930c,0xf0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCthulhuActiniaTentacleProps::StaticGetClass() */

long * GridItemCthulhuActiniaTentacleProps::StaticGetClass(void)

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
  uVar2 = GridItemAnimControllerProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCthulhuActiniaTentacleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCthulhuActiniaTentacleProps::GetClass() const */

long * GridItemCthulhuActiniaTentacleProps::GetClass(void)

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
  uVar2 = GridItemAnimControllerProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCthulhuActiniaTentacleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCthulhuActiniaTentacleProps::GridItemCthulhuActiniaTentacleProps() */

void __thiscall
GridItemCthulhuActiniaTentacleProps::GridItemCthulhuActiniaTentacleProps
          (GridItemCthulhuActiniaTentacleProps *this)

{
  GridItemAnimControllerProps::GridItemAnimControllerProps((GridItemAnimControllerProps *)this);
  *(undefined ***)this = &PTR_GetClass_069b3bb0;
  return;
}


/* GridItemCthulhuActiniaTentacleProps::StaticNew() */

GridItemCthulhuActiniaTentacleProps * GridItemCthulhuActiniaTentacleProps::StaticNew(void)

{
  GridItemCthulhuActiniaTentacleProps *this;
  
  this = ::operator_new(0xf0);
  GridItemCthulhuActiniaTentacleProps(this);
  return this;
}


/* GridItemCthulhuActiniaTentacleProps::~GridItemCthulhuActiniaTentacleProps() */

void __thiscall
GridItemCthulhuActiniaTentacleProps::~GridItemCthulhuActiniaTentacleProps
          (GridItemCthulhuActiniaTentacleProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069b3bb0;
  GridItemAnimControllerProps::~GridItemAnimControllerProps((GridItemAnimControllerProps *)this);
  return;
}


/* GridItemCthulhuActiniaTentacleProps::~GridItemCthulhuActiniaTentacleProps() */

void __thiscall
GridItemCthulhuActiniaTentacleProps::~GridItemCthulhuActiniaTentacleProps
          (GridItemCthulhuActiniaTentacleProps *this)

{
  ~GridItemCthulhuActiniaTentacleProps(this);
  AK::FreeHook(this);
  return;
}

