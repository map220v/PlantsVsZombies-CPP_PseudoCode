// Class: GridItemFireWallPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFireWallPropertySheet::StaticClassInit() */

void GridItemFireWallPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemFireWallPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_03e24a38,0xb0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFireWallPropertySheet::StaticGetClass() */

long * GridItemFireWallPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemFireWallPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemFireWallPropertySheet::GetClass() const */

long * GridItemFireWallPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemFireWallPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemFireWallPropertySheet::GridItemFireWallPropertySheet() */

void __thiscall
GridItemFireWallPropertySheet::GridItemFireWallPropertySheet(GridItemFireWallPropertySheet *this)

{
  GridItemPropertySheet::GridItemPropertySheet((GridItemPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06786950;
  Set8BytesTo0(this + 0x98);
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  return;
}


/* GridItemFireWallPropertySheet::StaticNew() */

GridItemFireWallPropertySheet * GridItemFireWallPropertySheet::StaticNew(void)

{
  GridItemFireWallPropertySheet *this;
  
  this = ::operator_new(0xb0);
  GridItemFireWallPropertySheet(this);
  return this;
}


/* GridItemFireWallPropertySheet::~GridItemFireWallPropertySheet() */

void __thiscall
GridItemFireWallPropertySheet::~GridItemFireWallPropertySheet(GridItemFireWallPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06786950;
  std::string::~string((string *)(this + 0x98));
  GridItemPropertySheet::~GridItemPropertySheet((GridItemPropertySheet *)this);
  return;
}


/* GridItemFireWallPropertySheet::~GridItemFireWallPropertySheet() */

void __thiscall
GridItemFireWallPropertySheet::~GridItemFireWallPropertySheet(GridItemFireWallPropertySheet *this)

{
  ~GridItemFireWallPropertySheet(this);
  AK::FreeHook(this);
  return;
}

