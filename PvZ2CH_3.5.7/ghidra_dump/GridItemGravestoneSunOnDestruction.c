// Class: GridItemGravestoneSunOnDestruction


/* GridItemGravestoneSunOnDestruction::GridItemGravestoneSunOnDestruction() */

void __thiscall
GridItemGravestoneSunOnDestruction::GridItemGravestoneSunOnDestruction
          (GridItemGravestoneSunOnDestruction *this)

{
  GridItemGravestone::GridItemGravestone((GridItemGravestone *)this);
  *(undefined ***)this = &PTR_GetClass_0676b650;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGravestoneSunOnDestruction_0676b910;
  return;
}


/* GridItemGravestoneSunOnDestruction::StaticNew() */

GridItemGravestoneSunOnDestruction * GridItemGravestoneSunOnDestruction::StaticNew(void)

{
  GridItemGravestoneSunOnDestruction *this;
  
  this = ::operator_new(0x1e0);
  GridItemGravestoneSunOnDestruction(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestoneSunOnDestruction::StaticClassInit() */

void GridItemGravestoneSunOnDestruction::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemGravestoneSunOnDestruction");
    (*pcVar2)(plVar1,asStack_10,FUN_03d5d044,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGravestoneSunOnDestruction::StaticGetClass() */

long * GridItemGravestoneSunOnDestruction::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemGravestoneSunOnDestruction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGravestoneSunOnDestruction::GetClass() const */

long * GridItemGravestoneSunOnDestruction::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemGravestoneSunOnDestruction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGravestoneSunOnDestruction::onKilled() */

void __thiscall
GridItemGravestoneSunOnDestruction::onKilled(GridItemGravestoneSunOnDestruction *this)

{
  GridItemGravestoneSunOnDestructionPropertySheet *pGVar1;
  SexyVector3 *pSVar2;
  
  pGVar1 = GridItem::GetProps<GridItemGravestoneSunOnDestructionPropertySheet>();
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  Board::FanOutSun(*(Board **)(gLawnApp + 0x9f0),pSVar2,*(int *)(pGVar1 + 0x104),false,false,false,
                   false,false);
  return;
}


/* GridItemGravestoneSunOnDestruction::~GridItemGravestoneSunOnDestruction() */

void __thiscall
GridItemGravestoneSunOnDestruction::~GridItemGravestoneSunOnDestruction
          (GridItemGravestoneSunOnDestruction *this)

{
  *(undefined ***)this = &PTR_GetClass_0676b650;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGravestoneSunOnDestruction_0676b910;
  GridItemGravestone::~GridItemGravestone((GridItemGravestone *)this);
  return;
}


/* non-virtual thunk to GridItemGravestoneSunOnDestruction::~GridItemGravestoneSunOnDestruction() */

void __thiscall
GridItemGravestoneSunOnDestruction::~GridItemGravestoneSunOnDestruction
          (GridItemGravestoneSunOnDestruction *this)

{
  ~GridItemGravestoneSunOnDestruction(this + -0x10);
  return;
}


/* GridItemGravestoneSunOnDestruction::~GridItemGravestoneSunOnDestruction() */

void __thiscall
GridItemGravestoneSunOnDestruction::~GridItemGravestoneSunOnDestruction
          (GridItemGravestoneSunOnDestruction *this)

{
  ~GridItemGravestoneSunOnDestruction(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemGravestoneSunOnDestruction::~GridItemGravestoneSunOnDestruction() */

void __thiscall
GridItemGravestoneSunOnDestruction::~GridItemGravestoneSunOnDestruction
          (GridItemGravestoneSunOnDestruction *this)

{
  ~GridItemGravestoneSunOnDestruction(this + -0x10);
  return;
}

