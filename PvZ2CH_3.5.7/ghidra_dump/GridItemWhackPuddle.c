// Class: GridItemWhackPuddle


/* GridItemWhackPuddle::~GridItemWhackPuddle() */

void __thiscall GridItemWhackPuddle::~GridItemWhackPuddle(GridItemWhackPuddle *this)

{
  *(undefined ***)this = &PTR_GetClass_067874a0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemWhackPuddle_06787758;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemWhackPuddle::~GridItemWhackPuddle() */

void __thiscall GridItemWhackPuddle::~GridItemWhackPuddle(GridItemWhackPuddle *this)

{
  ~GridItemWhackPuddle(this + -0x10);
  return;
}


/* GridItemWhackPuddle::~GridItemWhackPuddle() */

void __thiscall GridItemWhackPuddle::~GridItemWhackPuddle(GridItemWhackPuddle *this)

{
  ~GridItemWhackPuddle(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemWhackPuddle::~GridItemWhackPuddle() */

void __thiscall GridItemWhackPuddle::~GridItemWhackPuddle(GridItemWhackPuddle *this)

{
  ~GridItemWhackPuddle(this + -0x10);
  return;
}


/* GridItemWhackPuddle::GridItemWhackPuddle() */

void __thiscall GridItemWhackPuddle::GridItemWhackPuddle(GridItemWhackPuddle *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_067874a0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemWhackPuddle_06787758;
  return;
}


/* GridItemWhackPuddle::StaticNew() */

GridItemWhackPuddle * GridItemWhackPuddle::StaticNew(void)

{
  GridItemWhackPuddle *this;
  
  this = ::operator_new(0x1a8);
  GridItemWhackPuddle(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWhackPuddle::StaticClassInit() */

void GridItemWhackPuddle::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemWhackPuddle");
    (*pcVar2)(plVar1,asStack_10,FUN_03e28940,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemWhackPuddle::StaticGetClass() */

long * GridItemWhackPuddle::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemWhackPuddle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemWhackPuddle::GetClass() const */

long * GridItemWhackPuddle::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemWhackPuddle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemWhackPuddle::GetCantPlantReason() const */

undefined8 GridItemWhackPuddle::GetCantPlantReason(void)

{
  return 0x43;
}


/* GridItemWhackPuddle::onGridItemInitialize() */

void __thiscall GridItemWhackPuddle::onGridItemInitialize(GridItemWhackPuddle *this)

{
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  MessageRouter::Broadcast<BoardEntity*,GridItemWhackPuddle*>
            ((MessageRouter *)gMessageRouter,Message::PuddleSpawned,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWhackPuddle::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemWhackPuddle::GatherPlantingRestrictions
          (GridItemWhackPuddle *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  local_c = GetCantPlantReason();
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

