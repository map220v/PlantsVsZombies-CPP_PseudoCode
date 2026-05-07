// Class: GridItemGroundLavaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGroundLavaProps::StaticClassInit() */

void GridItemGroundLavaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemGroundLavaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0412210c,0x208,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGroundLavaProps::StaticGetClass() */

long * GridItemGroundLavaProps::StaticGetClass(void)

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
  uVar2 = GridItemLavaProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemGroundLavaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGroundLavaProps::GetClass() const */

long * GridItemGroundLavaProps::GetClass(void)

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
  uVar2 = GridItemLavaProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemGroundLavaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGroundLavaProps::GridItemGroundLavaProps() */

void __thiscall GridItemGroundLavaProps::GridItemGroundLavaProps(GridItemGroundLavaProps *this)

{
  GridItemLavaProps::GridItemLavaProps((GridItemLavaProps *)this);
  *(undefined ***)this = &PTR_GetClass_067ea520;
  return;
}


/* GridItemGroundLavaProps::StaticNew() */

GridItemGroundLavaProps * GridItemGroundLavaProps::StaticNew(void)

{
  GridItemGroundLavaProps *this;
  
  this = ::operator_new(0x208);
  GridItemGroundLavaProps(this);
  return this;
}


/* GridItemGroundLavaProps::~GridItemGroundLavaProps() */

void __thiscall GridItemGroundLavaProps::~GridItemGroundLavaProps(GridItemGroundLavaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067ea520;
  GridItemLavaProps::~GridItemLavaProps((GridItemLavaProps *)this);
  return;
}


/* GridItemGroundLavaProps::~GridItemGroundLavaProps() */

void __thiscall GridItemGroundLavaProps::~GridItemGroundLavaProps(GridItemGroundLavaProps *this)

{
  ~GridItemGroundLavaProps(this);
  AK::FreeHook(this);
  return;
}

