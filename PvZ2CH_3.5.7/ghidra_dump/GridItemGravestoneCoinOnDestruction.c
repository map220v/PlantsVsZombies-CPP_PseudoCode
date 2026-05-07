// Class: GridItemGravestoneCoinOnDestruction


/* GridItemGravestoneCoinOnDestruction::GridItemGravestoneCoinOnDestruction() */

void __thiscall
GridItemGravestoneCoinOnDestruction::GridItemGravestoneCoinOnDestruction
          (GridItemGravestoneCoinOnDestruction *this)

{
  GridItemGravestone::GridItemGravestone((GridItemGravestone *)this);
  *(undefined ***)this = &PTR_GetClass_0676b9d0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGravestoneCoinOnDestruction_0676bc90;
  return;
}


/* GridItemGravestoneCoinOnDestruction::StaticNew() */

GridItemGravestoneCoinOnDestruction * GridItemGravestoneCoinOnDestruction::StaticNew(void)

{
  GridItemGravestoneCoinOnDestruction *this;
  
  this = ::operator_new(0x1e0);
  GridItemGravestoneCoinOnDestruction(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestoneCoinOnDestruction::StaticClassInit() */

void GridItemGravestoneCoinOnDestruction::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemGravestoneCoinOnDestruction");
    (*pcVar2)(plVar1,asStack_10,FUN_03d5d550,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGravestoneCoinOnDestruction::StaticGetClass() */

long * GridItemGravestoneCoinOnDestruction::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemGravestoneCoinOnDestruction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGravestoneCoinOnDestruction::GetClass() const */

long * GridItemGravestoneCoinOnDestruction::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemGravestoneCoinOnDestruction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGravestoneCoinOnDestruction::onKilled() */

void __thiscall
GridItemGravestoneCoinOnDestruction::onKilled(GridItemGravestoneCoinOnDestruction *this)

{
  MessageRouter::Post<GridItemGravestoneCoinOnDestruction*,GridItemGravestoneCoinOnDestruction*>
            ((MessageRouter *)gMessageRouter,Message::OnGridItemGravestoneCoinOnDestructionKilled,
             this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestoneCoinOnDestruction::GatherPlantingRestrictions(PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemGravestoneCoinOnDestruction::GatherPlantingRestrictions
          (GridItemGravestoneCoinOnDestruction *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_c = 0x2d;
  local_8 = ___stack_chk_guard;
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGravestoneCoinOnDestruction::~GridItemGravestoneCoinOnDestruction() */

void __thiscall
GridItemGravestoneCoinOnDestruction::~GridItemGravestoneCoinOnDestruction
          (GridItemGravestoneCoinOnDestruction *this)

{
  *(undefined ***)this = &PTR_GetClass_0676b9d0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGravestoneCoinOnDestruction_0676bc90;
  GridItemGravestone::~GridItemGravestone((GridItemGravestone *)this);
  return;
}


/* non-virtual thunk to GridItemGravestoneCoinOnDestruction::~GridItemGravestoneCoinOnDestruction()
    */

void __thiscall
GridItemGravestoneCoinOnDestruction::~GridItemGravestoneCoinOnDestruction
          (GridItemGravestoneCoinOnDestruction *this)

{
  ~GridItemGravestoneCoinOnDestruction(this + -0x10);
  return;
}


/* GridItemGravestoneCoinOnDestruction::~GridItemGravestoneCoinOnDestruction() */

void __thiscall
GridItemGravestoneCoinOnDestruction::~GridItemGravestoneCoinOnDestruction
          (GridItemGravestoneCoinOnDestruction *this)

{
  ~GridItemGravestoneCoinOnDestruction(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemGravestoneCoinOnDestruction::~GridItemGravestoneCoinOnDestruction()
    */

void __thiscall
GridItemGravestoneCoinOnDestruction::~GridItemGravestoneCoinOnDestruction
          (GridItemGravestoneCoinOnDestruction *this)

{
  ~GridItemGravestoneCoinOnDestruction(this + -0x10);
  return;
}

