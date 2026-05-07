// Class: PlantTypeFlattenedshroom


/* PlantTypeFlattenedshroom::StaticGetClass() */

long * PlantTypeFlattenedshroom::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeFlattenedshroom",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeFlattenedshroom::GetClass() const */

long * PlantTypeFlattenedshroom::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeFlattenedshroom",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeFlattenedshroom::PlantTypeFlattenedshroom() */

void __thiscall PlantTypeFlattenedshroom::PlantTypeFlattenedshroom(PlantTypeFlattenedshroom *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_06743310;
  return;
}


/* PlantTypeFlattenedshroom::StaticNew() */

PlantTypeFlattenedshroom * PlantTypeFlattenedshroom::StaticNew(void)

{
  PlantTypeFlattenedshroom *this;
  
  this = ::operator_new(0x138);
  PlantTypeFlattenedshroom(this);
  return this;
}


/* PlantTypeFlattenedshroom::~PlantTypeFlattenedshroom() */

void __thiscall PlantTypeFlattenedshroom::~PlantTypeFlattenedshroom(PlantTypeFlattenedshroom *this)

{
  *(undefined ***)this = &PTR_GetClass_06743310;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeFlattenedshroom::~PlantTypeFlattenedshroom() */

void __thiscall PlantTypeFlattenedshroom::~PlantTypeFlattenedshroom(PlantTypeFlattenedshroom *this)

{
  ~PlantTypeFlattenedshroom(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeFlattenedshroom::GatherPlantingRestrictions(Board*, Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) const */

void __thiscall
PlantTypeFlattenedshroom::GatherPlantingRestrictions
          (PlantTypeFlattenedshroom *this,Board *param_1,Point *param_2,vector *param_3)

{
  char cVar1;
  long lVar2;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_03bffcc4(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
  if ((lVar2 == 0) || (cVar1 = FUN_03bfea10(*(undefined4 *)(lVar2 + 0x194)), cVar1 == '\0')) {
    lVar2 = FUN_03bffda8(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
    if (lVar2 == 0) {
      local_c = 0x5d;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                 (PlantingReason *)&local_c);
      goto LAB_03c003a4;
    }
  }
  else {
    FUN_03bffda8(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
  }
  local_c = 0;
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
             (PlantingReason *)&local_c);
LAB_03c003a4:
  PlantType::GatherPlantingRestrictions((PlantType *)this,param_1,param_2,param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

