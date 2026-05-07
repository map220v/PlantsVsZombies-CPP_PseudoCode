// Class: GridItemGravestoneCoinOnDestructionPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestoneCoinOnDestructionPropertySheet::StaticClassInit() */

void GridItemGravestoneCoinOnDestructionPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemGravestoneCoinOnDestructionPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_03d5d258,0x108,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGravestoneCoinOnDestructionPropertySheet::StaticGetClass() */

long * GridItemGravestoneCoinOnDestructionPropertySheet::StaticGetClass(void)

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
  uVar2 = GridItemGravestonePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemGravestoneCoinOnDestructionPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGravestoneCoinOnDestructionPropertySheet::GetClass() const */

long * GridItemGravestoneCoinOnDestructionPropertySheet::GetClass(void)

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
  uVar2 = GridItemGravestonePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemGravestoneCoinOnDestructionPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGravestoneCoinOnDestructionPropertySheet::GridItemGravestoneCoinOnDestructionPropertySheet()
    */

void __thiscall
GridItemGravestoneCoinOnDestructionPropertySheet::GridItemGravestoneCoinOnDestructionPropertySheet
          (GridItemGravestoneCoinOnDestructionPropertySheet *this)

{
  GridItemGravestonePropertySheet::GridItemGravestonePropertySheet
            ((GridItemGravestonePropertySheet *)this);
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined ***)this = &PTR_GetClass_0676b940;
  return;
}


/* GridItemGravestoneCoinOnDestructionPropertySheet::StaticNew() */

GridItemGravestoneCoinOnDestructionPropertySheet *
GridItemGravestoneCoinOnDestructionPropertySheet::StaticNew(void)

{
  GridItemGravestoneCoinOnDestructionPropertySheet *this;
  
  this = ::operator_new(0x108);
  GridItemGravestoneCoinOnDestructionPropertySheet(this);
  return this;
}


/* GridItemGravestoneCoinOnDestructionPropertySheet::~GridItemGravestoneCoinOnDestructionPropertySheet()
    */

void __thiscall
GridItemGravestoneCoinOnDestructionPropertySheet::~GridItemGravestoneCoinOnDestructionPropertySheet
          (GridItemGravestoneCoinOnDestructionPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_0676b940;
  GridItemGravestonePropertySheet::~GridItemGravestonePropertySheet
            ((GridItemGravestonePropertySheet *)this);
  return;
}


/* GridItemGravestoneCoinOnDestructionPropertySheet::~GridItemGravestoneCoinOnDestructionPropertySheet()
    */

void __thiscall
GridItemGravestoneCoinOnDestructionPropertySheet::~GridItemGravestoneCoinOnDestructionPropertySheet
          (GridItemGravestoneCoinOnDestructionPropertySheet *this)

{
  ~GridItemGravestoneCoinOnDestructionPropertySheet(this);
  AK::FreeHook(this);
  return;
}

