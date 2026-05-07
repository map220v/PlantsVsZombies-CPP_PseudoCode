// Class: GridItemGlidingProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGlidingProps::StaticClassInit() */

void GridItemGlidingProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemGlidingProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04ee5260,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGlidingProps::StaticGetClass() */

long * GridItemGlidingProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemGlidingProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGlidingProps::GetClass() const */

long * GridItemGlidingProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemGlidingProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGlidingProps::GridItemGlidingProps() */

void __thiscall GridItemGlidingProps::GridItemGlidingProps(GridItemGlidingProps *this)

{
  GridItemGravestonePropertySheet::GridItemGravestonePropertySheet
            ((GridItemGravestonePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069fefb0;
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x108));
  return;
}


/* GridItemGlidingProps::StaticNew() */

GridItemGlidingProps * GridItemGlidingProps::StaticNew(void)

{
  GridItemGlidingProps *this;
  
  this = ::operator_new(0x130);
  GridItemGlidingProps(this);
  return this;
}


/* GridItemGlidingProps::~GridItemGlidingProps() */

void __thiscall GridItemGlidingProps::~GridItemGlidingProps(GridItemGlidingProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069fefb0;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x108));
  GridItemGravestonePropertySheet::~GridItemGravestonePropertySheet
            ((GridItemGravestonePropertySheet *)this);
  return;
}


/* GridItemGlidingProps::~GridItemGlidingProps() */

void __thiscall GridItemGlidingProps::~GridItemGlidingProps(GridItemGlidingProps *this)

{
  ~GridItemGlidingProps(this);
  AK::FreeHook(this);
  return;
}

