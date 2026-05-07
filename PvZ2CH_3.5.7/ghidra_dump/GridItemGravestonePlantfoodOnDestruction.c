// Class: GridItemGravestonePlantfoodOnDestruction


/* GridItemGravestonePlantfoodOnDestruction::onKilled() */

void __thiscall
GridItemGravestonePlantfoodOnDestruction::onKilled(GridItemGravestonePlantfoodOnDestruction *this)

{
  SexyVector3 *pSVar1;
  
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  Board::AddPlantfood(*(Board **)(gLawnApp + 0x9f0),pSVar1,0);
  return;
}


/* GridItemGravestonePlantfoodOnDestruction::GridItemGravestonePlantfoodOnDestruction() */

void __thiscall
GridItemGravestonePlantfoodOnDestruction::GridItemGravestonePlantfoodOnDestruction
          (GridItemGravestonePlantfoodOnDestruction *this)

{
  GridItemGravestone::GridItemGravestone((GridItemGravestone *)this);
  *(undefined ***)this = &PTR_GetClass_0676d400;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGravestonePlantfoodOnDestruction_0676d6c0;
  return;
}


/* GridItemGravestonePlantfoodOnDestruction::StaticNew() */

GridItemGravestonePlantfoodOnDestruction * GridItemGravestonePlantfoodOnDestruction::StaticNew(void)

{
  GridItemGravestonePlantfoodOnDestruction *this;
  
  this = ::operator_new(0x1e0);
  GridItemGravestonePlantfoodOnDestruction(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestonePlantfoodOnDestruction::StaticClassInit() */

void GridItemGravestonePlantfoodOnDestruction::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemGravestonePlantfoodOnDestruction");
    (*pcVar2)(plVar1,asStack_10,FUN_03d652b0,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGravestonePlantfoodOnDestruction::StaticGetClass() */

long * GridItemGravestonePlantfoodOnDestruction::StaticGetClass(void)

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
  uVar2 = GridItemGravestone::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemGravestonePlantfoodOnDestruction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGravestonePlantfoodOnDestruction::GetClass() const */

long * GridItemGravestonePlantfoodOnDestruction::GetClass(void)

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
  uVar2 = GridItemGravestone::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemGravestonePlantfoodOnDestruction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGravestonePlantfoodOnDestruction::~GridItemGravestonePlantfoodOnDestruction() */

void __thiscall
GridItemGravestonePlantfoodOnDestruction::~GridItemGravestonePlantfoodOnDestruction
          (GridItemGravestonePlantfoodOnDestruction *this)

{
  *(undefined ***)this = &PTR_GetClass_0676d400;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGravestonePlantfoodOnDestruction_0676d6c0;
  GridItemGravestone::~GridItemGravestone((GridItemGravestone *)this);
  return;
}


/* non-virtual thunk to
   GridItemGravestonePlantfoodOnDestruction::~GridItemGravestonePlantfoodOnDestruction() */

void __thiscall
GridItemGravestonePlantfoodOnDestruction::~GridItemGravestonePlantfoodOnDestruction
          (GridItemGravestonePlantfoodOnDestruction *this)

{
  ~GridItemGravestonePlantfoodOnDestruction(this + -0x10);
  return;
}


/* GridItemGravestonePlantfoodOnDestruction::~GridItemGravestonePlantfoodOnDestruction() */

void __thiscall
GridItemGravestonePlantfoodOnDestruction::~GridItemGravestonePlantfoodOnDestruction
          (GridItemGravestonePlantfoodOnDestruction *this)

{
  ~GridItemGravestonePlantfoodOnDestruction(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   GridItemGravestonePlantfoodOnDestruction::~GridItemGravestonePlantfoodOnDestruction() */

void __thiscall
GridItemGravestonePlantfoodOnDestruction::~GridItemGravestonePlantfoodOnDestruction
          (GridItemGravestonePlantfoodOnDestruction *this)

{
  ~GridItemGravestonePlantfoodOnDestruction(this + -0x10);
  return;
}

