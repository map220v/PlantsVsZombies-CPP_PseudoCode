// Class: PlantTypeOlivepit


/* PlantTypeOlivepit::StaticGetClass() */

long * PlantTypeOlivepit::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeOlivepit",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeOlivepit::GetClass() const */

long * PlantTypeOlivepit::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeOlivepit",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeOlivepit::PlantTypeOlivepit() */

void __thiscall PlantTypeOlivepit::PlantTypeOlivepit(PlantTypeOlivepit *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_069a3f90;
  return;
}


/* PlantTypeOlivepit::StaticNew() */

PlantTypeOlivepit * PlantTypeOlivepit::StaticNew(void)

{
  PlantTypeOlivepit *this;
  
  this = ::operator_new(0x138);
  PlantTypeOlivepit(this);
  return this;
}


/* PlantTypeOlivepit::~PlantTypeOlivepit() */

void __thiscall PlantTypeOlivepit::~PlantTypeOlivepit(PlantTypeOlivepit *this)

{
  *(undefined ***)this = &PTR_GetClass_069a3f90;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeOlivepit::~PlantTypeOlivepit() */

void __thiscall PlantTypeOlivepit::~PlantTypeOlivepit(PlantTypeOlivepit *this)

{
  ~PlantTypeOlivepit(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeOlivepit::GatherPlantingRestrictions(Board*, Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) const */

void __thiscall
PlantTypeOlivepit::GatherPlantingRestrictions
          (PlantTypeOlivepit *this,Board *param_1,Point *param_2,vector *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantType::GatherPlantingRestrictions((PlantType *)this,param_1,param_2,param_3);
  lVar1 = FUN_04cf1f00(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
  lVar2 = FUN_04cf1afc(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
  lVar3 = FUN_04cf1fe4(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
  lVar4 = FUN_04cf20c8(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
  if ((((lVar1 != 0) || (lVar2 != 0)) || (lVar3 != 0)) || (lVar4 != 0)) {
    local_c = 0x4b;
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

