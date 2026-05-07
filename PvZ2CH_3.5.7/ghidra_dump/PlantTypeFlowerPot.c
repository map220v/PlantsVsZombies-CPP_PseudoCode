// Class: PlantTypeFlowerPot


/* PlantTypeFlowerPot::PlantTypeFlowerPot() */

void __thiscall PlantTypeFlowerPot::PlantTypeFlowerPot(PlantTypeFlowerPot *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_0676fa50;
  return;
}


/* PlantTypeFlowerPot::StaticNew() */

PlantTypeFlowerPot * PlantTypeFlowerPot::StaticNew(void)

{
  PlantTypeFlowerPot *this;
  
  this = ::operator_new(0x138);
  PlantTypeFlowerPot(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeFlowerPot::StaticClassInit() */

void PlantTypeFlowerPot::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantTypeFlowerPot");
    (*pcVar2)(plVar1,asStack_10,FUN_03d70f24,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTypeFlowerPot::StaticGetClass() */

long * PlantTypeFlowerPot::StaticGetClass(void)

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
  uVar2 = PlantType::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTypeFlowerPot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTypeFlowerPot::GetClass() const */

long * PlantTypeFlowerPot::GetClass(void)

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
  uVar2 = PlantType::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTypeFlowerPot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTypeFlowerPot::~PlantTypeFlowerPot() */

void __thiscall PlantTypeFlowerPot::~PlantTypeFlowerPot(PlantTypeFlowerPot *this)

{
  *(undefined ***)this = &PTR_GetClass_0676fa50;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeFlowerPot::~PlantTypeFlowerPot() */

void __thiscall PlantTypeFlowerPot::~PlantTypeFlowerPot(PlantTypeFlowerPot *this)

{
  ~PlantTypeFlowerPot(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeFlowerPot::GatherPlantingRestrictions(Board*, Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) const */

void __thiscall
PlantTypeFlowerPot::GatherPlantingRestrictions
          (PlantTypeFlowerPot *this,Board *param_1,Point *param_2,vector *param_3)

{
  char cVar1;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Board::IsRoof(param_1,param_2);
  if (cVar1 == '\0') {
    local_c = 0x6a;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
               (PlantingReason *)&local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

