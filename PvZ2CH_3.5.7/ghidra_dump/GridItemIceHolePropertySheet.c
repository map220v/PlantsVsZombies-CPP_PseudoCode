// Class: GridItemIceHolePropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIceHolePropertySheet::StaticClassInit() */

void GridItemIceHolePropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemIceHolePropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_03e268c0,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemIceHolePropertySheet::StaticGetClass() */

long * GridItemIceHolePropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemIceHolePropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemIceHolePropertySheet::GetClass() const */

long * GridItemIceHolePropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemIceHolePropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemIceHolePropertySheet::GridItemIceHolePropertySheet() */

void __thiscall
GridItemIceHolePropertySheet::GridItemIceHolePropertySheet(GridItemIceHolePropertySheet *this)

{
  GridItemPropertySheet::GridItemPropertySheet((GridItemPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06786ce0;
  Set8BytesTo0(this + 0x98);
  return;
}


/* GridItemIceHolePropertySheet::StaticNew() */

GridItemIceHolePropertySheet * GridItemIceHolePropertySheet::StaticNew(void)

{
  GridItemIceHolePropertySheet *this;
  
  this = ::operator_new(0xa0);
  GridItemIceHolePropertySheet(this);
  return this;
}


/* GridItemIceHolePropertySheet::~GridItemIceHolePropertySheet() */

void __thiscall
GridItemIceHolePropertySheet::~GridItemIceHolePropertySheet(GridItemIceHolePropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06786ce0;
  std::string::~string((string *)(this + 0x98));
  GridItemPropertySheet::~GridItemPropertySheet((GridItemPropertySheet *)this);
  return;
}


/* GridItemIceHolePropertySheet::~GridItemIceHolePropertySheet() */

void __thiscall
GridItemIceHolePropertySheet::~GridItemIceHolePropertySheet(GridItemIceHolePropertySheet *this)

{
  ~GridItemIceHolePropertySheet(this);
  AK::FreeHook(this);
  return;
}

