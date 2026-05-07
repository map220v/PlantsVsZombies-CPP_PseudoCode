// Class: GridItemCavalryGun


/* GridItemCavalryGun::onGridItemInitialize() */

void __thiscall GridItemCavalryGun::onGridItemInitialize(GridItemCavalryGun *this)

{
  GridItemGravestone::onGridItemInitialize((GridItemGravestone *)this);
  GridItemGravestone::setState((GridItemGravestone *)this,3);
  return;
}


/* GridItemCavalryGun::GridItemCavalryGun() */

void __thiscall GridItemCavalryGun::GridItemCavalryGun(GridItemCavalryGun *this)

{
  GridItemGravestone::GridItemGravestone((GridItemGravestone *)this);
  *(undefined ***)this = &PTR_GetClass_06898b20;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCavalryGun_06898de0;
  return;
}


/* GridItemCavalryGun::StaticNew() */

GridItemCavalryGun * GridItemCavalryGun::StaticNew(void)

{
  GridItemCavalryGun *this;
  
  this = ::operator_new(0x1e0);
  GridItemCavalryGun(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCavalryGun::StaticClassInit() */

void GridItemCavalryGun::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCavalryGun");
    (*pcVar2)(plVar1,asStack_10,FUN_046787f4,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCavalryGun::StaticGetClass() */

long * GridItemCavalryGun::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCavalryGun",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCavalryGun::GetClass() const */

long * GridItemCavalryGun::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCavalryGun",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCavalryGun::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemCavalryGun::GatherPlantingRestrictions
          (GridItemCavalryGun *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemGravestone::GatherPlantingRestrictions((GridItemGravestone *)this,param_1,param_2);
  local_c = 0x3b;
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCavalryGun::~GridItemCavalryGun() */

void __thiscall GridItemCavalryGun::~GridItemCavalryGun(GridItemCavalryGun *this)

{
  *(undefined ***)this = &PTR_GetClass_06898b20;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCavalryGun_06898de0;
  GridItemGravestone::~GridItemGravestone((GridItemGravestone *)this);
  return;
}


/* non-virtual thunk to GridItemCavalryGun::~GridItemCavalryGun() */

void __thiscall GridItemCavalryGun::~GridItemCavalryGun(GridItemCavalryGun *this)

{
  ~GridItemCavalryGun(this + -0x10);
  return;
}


/* GridItemCavalryGun::~GridItemCavalryGun() */

void __thiscall GridItemCavalryGun::~GridItemCavalryGun(GridItemCavalryGun *this)

{
  ~GridItemCavalryGun(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemCavalryGun::~GridItemCavalryGun() */

void __thiscall GridItemCavalryGun::~GridItemCavalryGun(GridItemCavalryGun *this)

{
  ~GridItemCavalryGun(this + -0x10);
  return;
}

