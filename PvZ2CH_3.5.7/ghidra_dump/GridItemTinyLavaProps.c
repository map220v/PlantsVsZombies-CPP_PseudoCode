// Class: GridItemTinyLavaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTinyLavaProps::StaticClassInit() */

void GridItemTinyLavaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemTinyLavaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04121ef8,0x208,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemTinyLavaProps::StaticGetClass() */

long * GridItemTinyLavaProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemTinyLavaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemTinyLavaProps::GetClass() const */

long * GridItemTinyLavaProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemTinyLavaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemTinyLavaProps::GridItemTinyLavaProps() */

void __thiscall GridItemTinyLavaProps::GridItemTinyLavaProps(GridItemTinyLavaProps *this)

{
  GridItemLavaProps::GridItemLavaProps((GridItemLavaProps *)this);
  *(undefined ***)this = &PTR_GetClass_067ea490;
  return;
}


/* GridItemTinyLavaProps::StaticNew() */

GridItemTinyLavaProps * GridItemTinyLavaProps::StaticNew(void)

{
  GridItemTinyLavaProps *this;
  
  this = ::operator_new(0x208);
  GridItemTinyLavaProps(this);
  return this;
}


/* GridItemTinyLavaProps::~GridItemTinyLavaProps() */

void __thiscall GridItemTinyLavaProps::~GridItemTinyLavaProps(GridItemTinyLavaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067ea490;
  GridItemLavaProps::~GridItemLavaProps((GridItemLavaProps *)this);
  return;
}


/* GridItemTinyLavaProps::~GridItemTinyLavaProps() */

void __thiscall GridItemTinyLavaProps::~GridItemTinyLavaProps(GridItemTinyLavaProps *this)

{
  ~GridItemTinyLavaProps(this);
  AK::FreeHook(this);
  return;
}

