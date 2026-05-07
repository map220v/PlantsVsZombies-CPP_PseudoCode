// Class: GridItemMoltenPoolProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMoltenPoolProps::StaticClassInit() */

void GridItemMoltenPoolProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemMoltenPoolProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04d492f4,0x208,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMoltenPoolProps::StaticGetClass() */

long * GridItemMoltenPoolProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemMoltenPoolProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMoltenPoolProps::GetClass() const */

long * GridItemMoltenPoolProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemMoltenPoolProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMoltenPoolProps::GridItemMoltenPoolProps() */

void __thiscall GridItemMoltenPoolProps::GridItemMoltenPoolProps(GridItemMoltenPoolProps *this)

{
  GridItemLavaProps::GridItemLavaProps((GridItemLavaProps *)this);
  *(undefined ***)this = &PTR_GetClass_069b1650;
  return;
}


/* GridItemMoltenPoolProps::StaticNew() */

GridItemMoltenPoolProps * GridItemMoltenPoolProps::StaticNew(void)

{
  GridItemMoltenPoolProps *this;
  
  this = ::operator_new(0x208);
  GridItemMoltenPoolProps(this);
  return this;
}


/* GridItemMoltenPoolProps::~GridItemMoltenPoolProps() */

void __thiscall GridItemMoltenPoolProps::~GridItemMoltenPoolProps(GridItemMoltenPoolProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069b1650;
  GridItemLavaProps::~GridItemLavaProps((GridItemLavaProps *)this);
  return;
}


/* GridItemMoltenPoolProps::~GridItemMoltenPoolProps() */

void __thiscall GridItemMoltenPoolProps::~GridItemMoltenPoolProps(GridItemMoltenPoolProps *this)

{
  ~GridItemMoltenPoolProps(this);
  AK::FreeHook(this);
  return;
}

