// Class: PlantTypeTangleKelp


/* PlantTypeTangleKelp::StaticGetClass() */

long * PlantTypeTangleKelp::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeTangleKelp",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeTangleKelp::GetClass() const */

long * PlantTypeTangleKelp::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeTangleKelp",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeTangleKelp::PlantTypeTangleKelp() */

void __thiscall PlantTypeTangleKelp::PlantTypeTangleKelp(PlantTypeTangleKelp *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_06804f60;
  return;
}


/* PlantTypeTangleKelp::StaticNew() */

PlantTypeTangleKelp * PlantTypeTangleKelp::StaticNew(void)

{
  PlantTypeTangleKelp *this;
  
  this = ::operator_new(0x138);
  PlantTypeTangleKelp(this);
  return this;
}


/* PlantTypeTangleKelp::~PlantTypeTangleKelp() */

void __thiscall PlantTypeTangleKelp::~PlantTypeTangleKelp(PlantTypeTangleKelp *this)

{
  *(undefined ***)this = &PTR_GetClass_06804f60;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeTangleKelp::~PlantTypeTangleKelp() */

void __thiscall PlantTypeTangleKelp::~PlantTypeTangleKelp(PlantTypeTangleKelp *this)

{
  ~PlantTypeTangleKelp(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeTangleKelp::GatherPlantingRestrictions(Board*, Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) const */

void __thiscall
PlantTypeTangleKelp::GatherPlantingRestrictions
          (PlantTypeTangleKelp *this,Board *param_1,Point *param_2,vector *param_3)

{
  char cVar1;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantType::GatherPlantingRestrictions((PlantType *)this,param_1,param_2,param_3);
  cVar1 = Board::IsShallowWater(param_1,param_2);
  if (cVar1 == '\0') {
    local_c = 0x34;
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

