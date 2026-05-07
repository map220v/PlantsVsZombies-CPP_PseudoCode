// Class: BoardRegionSky


/* BoardRegionSky::StaticGetClass() */

long * BoardRegionSky::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BoardRegionSky",uVar2,StaticNew);
  return sClass;
}


/* BoardRegionSky::GetClass() const */

long * BoardRegionSky::GetClass(void)

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
  (*pcVar3)(plVar1,"BoardRegionSky",uVar2,StaticNew);
  return sClass;
}


/* BoardRegionSky::~BoardRegionSky() */

void __thiscall BoardRegionSky::~BoardRegionSky(BoardRegionSky *this)

{
  *(undefined ***)this = &PTR_GetClass_06762160;
  BoardRegion::~BoardRegion((BoardRegion *)this);
  return;
}


/* BoardRegionSky::~BoardRegionSky() */

void __thiscall BoardRegionSky::~BoardRegionSky(BoardRegionSky *this)

{
  ~BoardRegionSky(this);
  AK::FreeHook(this);
  return;
}


/* BoardRegionSky::BoardRegionSky() */

void __thiscall BoardRegionSky::BoardRegionSky(BoardRegionSky *this)

{
  BoardRegion::BoardRegion((BoardRegion *)this);
  *(undefined ***)this = &PTR_GetClass_06762160;
  SporeshroomSubsystem::RecordSporeshroomLevel((SporeshroomSubsystem *)this,4);
  return;
}


/* BoardRegionSky::StaticNew() */

BoardRegionSky * BoardRegionSky::StaticNew(void)

{
  BoardRegionSky *this;
  
  this = ::operator_new(0x28);
  BoardRegionSky(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardRegionSky::GatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
BoardRegionSky::GatherPlantingRestrictions
          (BoardRegionSky *this,Point *param_1,PlantType *param_2,vector *param_3)

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
      local_c = 0x38;
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

