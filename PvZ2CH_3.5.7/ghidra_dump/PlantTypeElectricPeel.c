// Class: PlantTypeElectricPeel


/* PlantTypeElectricPeel::StaticGetClass() */

long * PlantTypeElectricPeel::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeElectricPeel",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeElectricPeel::GetClass() const */

long * PlantTypeElectricPeel::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeElectricPeel",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeElectricPeel::PlantTypeElectricPeel() */

void __thiscall PlantTypeElectricPeel::PlantTypeElectricPeel(PlantTypeElectricPeel *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_069ae190;
  return;
}


/* PlantTypeElectricPeel::StaticNew() */

PlantTypeElectricPeel * PlantTypeElectricPeel::StaticNew(void)

{
  PlantTypeElectricPeel *this;
  
  this = ::operator_new(0x138);
  PlantTypeElectricPeel(this);
  return this;
}


/* PlantTypeElectricPeel::~PlantTypeElectricPeel() */

void __thiscall PlantTypeElectricPeel::~PlantTypeElectricPeel(PlantTypeElectricPeel *this)

{
  *(undefined ***)this = &PTR_GetClass_069ae190;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeElectricPeel::~PlantTypeElectricPeel() */

void __thiscall PlantTypeElectricPeel::~PlantTypeElectricPeel(PlantTypeElectricPeel *this)

{
  ~PlantTypeElectricPeel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeElectricPeel::GatherPlantingRestrictions(Board*, Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) const */

void __thiscall
PlantTypeElectricPeel::GatherPlantingRestrictions
          (PlantTypeElectricPeel *this,Board *param_1,Point *param_2,vector *param_3)

{
  bool bVar1;
  long lVar2;
  string asStack_18 [8];
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantType::GatherPlantingRestrictions((PlantType *)this,param_1,param_2,param_3);
  lVar2 = Board::GetPlantGroupAt
                    (*(Board **)(gLawnApp + 0x9f0),*(int *)param_2,*(int *)(param_2 + 4));
  if (lVar2 != 0) {
    std::string::string(asStack_18,"PlantLilyPad");
    PlantGroup::GetPlantOfClass((RtWeakPtr *)local_10,lVar2,asStack_18);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    std::string::~string(asStack_18);
    nop();
    if (bVar1) {
      local_10[0] = 0x80;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                 (PlantingReason *)local_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

