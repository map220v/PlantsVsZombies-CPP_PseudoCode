// Class: GridItemFakeMold


/* GridItemFakeMold::~GridItemFakeMold() */

void __thiscall GridItemFakeMold::~GridItemFakeMold(GridItemFakeMold *this)

{
  *(undefined ***)this = &PTR_GetClass_0661ede0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemFakeMold_0661f098;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemFakeMold::~GridItemFakeMold() */

void __thiscall GridItemFakeMold::~GridItemFakeMold(GridItemFakeMold *this)

{
  ~GridItemFakeMold(this + -0x10);
  return;
}


/* GridItemFakeMold::~GridItemFakeMold() */

void __thiscall GridItemFakeMold::~GridItemFakeMold(GridItemFakeMold *this)

{
  ~GridItemFakeMold(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemFakeMold::~GridItemFakeMold() */

void __thiscall GridItemFakeMold::~GridItemFakeMold(GridItemFakeMold *this)

{
  ~GridItemFakeMold(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFakeMold::StaticClassInit() */

void GridItemFakeMold::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemFakeMold");
    (*pcVar2)(plVar1,asStack_10,FUN_033fdbfc,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFakeMold::StaticGetClass() */

long * GridItemFakeMold::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemFakeMold",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemFakeMold::GetClass() const */

long * GridItemFakeMold::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemFakeMold",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemFakeMold::GridItemFakeMold() */

void __thiscall GridItemFakeMold::GridItemFakeMold(GridItemFakeMold *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_0661ede0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemFakeMold_0661f098;
  return;
}


/* GridItemFakeMold::StaticNew() */

GridItemFakeMold * GridItemFakeMold::StaticNew(void)

{
  GridItemFakeMold *this;
  
  this = ::operator_new(0x1a8);
  GridItemFakeMold(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFakeMold::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemFakeMold::GatherPlantingRestrictions
          (GridItemFakeMold *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  local_c = DungeonWidget::GetAddChanceGemCost();
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

