// Class: GoldRoadRegion


/* GoldRoadRegion::StaticGetClass() */

long * GoldRoadRegion::StaticGetClass(void)

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
  uVar2 = BoardRegion::StaticGetClass();
  (*pcVar3)(plVar1,"GoldRoadRegion",uVar2,StaticNew);
  return sClass;
}


/* GoldRoadRegion::GetClass() const */

long * GoldRoadRegion::GetClass(void)

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
  uVar2 = BoardRegion::StaticGetClass();
  (*pcVar3)(plVar1,"GoldRoadRegion",uVar2,StaticNew);
  return sClass;
}


/* GoldRoadRegion::~GoldRoadRegion() */

void __thiscall GoldRoadRegion::~GoldRoadRegion(GoldRoadRegion *this)

{
  *(undefined ***)this = &PTR_GetClass_068524b0;
  BoardRegion::~BoardRegion((BoardRegion *)this);
  return;
}


/* GoldRoadRegion::~GoldRoadRegion() */

void __thiscall GoldRoadRegion::~GoldRoadRegion(GoldRoadRegion *this)

{
  ~GoldRoadRegion(this);
  AK::FreeHook(this);
  return;
}


/* GoldRoadRegion::GoldRoadRegion() */

void __thiscall GoldRoadRegion::GoldRoadRegion(GoldRoadRegion *this)

{
  BoardRegion::BoardRegion((BoardRegion *)this);
  *(undefined ***)this = &PTR_GetClass_068524b0;
  SporeshroomSubsystem::RecordSporeshroomLevel((SporeshroomSubsystem *)this,8);
  return;
}


/* GoldRoadRegion::StaticNew() */

GoldRoadRegion * GoldRoadRegion::StaticNew(void)

{
  GoldRoadRegion *this;
  
  this = ::operator_new(0x28);
  GoldRoadRegion(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldRoadRegion::GatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
GoldRoadRegion::GatherPlantingRestrictions
          (GoldRoadRegion *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  PlantNameMapperServerID *this_00;
  ResourceInfo *pRVar1;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != (PlantType *)0x0) {
    this_00 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
    PlantNameMapperServerID::GetIdForType(this_00,param_2);
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_2 + 0x28));
    if (pRVar1[0x24d] == (ResourceInfo)0x0) {
      local_c = 0x4b;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                 (PlantingReason *)&local_c);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

