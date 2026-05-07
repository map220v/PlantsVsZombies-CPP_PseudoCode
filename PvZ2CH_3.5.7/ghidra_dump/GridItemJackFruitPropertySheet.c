// Class: GridItemJackFruitPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemJackFruitPropertySheet::StaticClassInit() */

void GridItemJackFruitPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemJackFruitPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_049a8a2c,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemJackFruitPropertySheet::StaticGetClass() */

long * GridItemJackFruitPropertySheet::StaticGetClass(void)

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
  uVar2 = GridItemPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemJackFruitPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemJackFruitPropertySheet::GetClass() const */

long * GridItemJackFruitPropertySheet::GetClass(void)

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
  uVar2 = GridItemPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemJackFruitPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemJackFruitPropertySheet::GridItemJackFruitPropertySheet() */

void __thiscall
GridItemJackFruitPropertySheet::GridItemJackFruitPropertySheet(GridItemJackFruitPropertySheet *this)

{
  GridItemPropertySheet::GridItemPropertySheet((GridItemPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06923d70;
  return;
}


/* GridItemJackFruitPropertySheet::StaticNew() */

GridItemJackFruitPropertySheet * GridItemJackFruitPropertySheet::StaticNew(void)

{
  GridItemJackFruitPropertySheet *this;
  
  this = ::operator_new(0x98);
  GridItemJackFruitPropertySheet(this);
  return this;
}


/* GridItemJackFruitPropertySheet::~GridItemJackFruitPropertySheet() */

void __thiscall
GridItemJackFruitPropertySheet::~GridItemJackFruitPropertySheet
          (GridItemJackFruitPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06923d70;
  GridItemPropertySheet::~GridItemPropertySheet((GridItemPropertySheet *)this);
  return;
}


/* GridItemJackFruitPropertySheet::~GridItemJackFruitPropertySheet() */

void __thiscall
GridItemJackFruitPropertySheet::~GridItemJackFruitPropertySheet
          (GridItemJackFruitPropertySheet *this)

{
  ~GridItemJackFruitPropertySheet(this);
  AK::FreeHook(this);
  return;
}

