// Class: BoardRegionDrySand


/* BoardRegionDrySand::~BoardRegionDrySand() */

void __thiscall BoardRegionDrySand::~BoardRegionDrySand(BoardRegionDrySand *this)

{
  *(undefined ***)this = &PTR_GetClass_06835070;
  BoardRegion::~BoardRegion((BoardRegion *)this);
  return;
}


/* BoardRegionDrySand::~BoardRegionDrySand() */

void __thiscall BoardRegionDrySand::~BoardRegionDrySand(BoardRegionDrySand *this)

{
  ~BoardRegionDrySand(this);
  AK::FreeHook(this);
  return;
}


/* BoardRegionDrySand::StaticGetClass() */

long * BoardRegionDrySand::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BoardRegionDrySand",uVar2,StaticNew);
  return sClass;
}


/* BoardRegionDrySand::GetClass() const */

long * BoardRegionDrySand::GetClass(void)

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
  (*pcVar3)(plVar1,"BoardRegionDrySand",uVar2,StaticNew);
  return sClass;
}


/* BoardRegionDrySand::BoardRegionDrySand() */

void __thiscall BoardRegionDrySand::BoardRegionDrySand(BoardRegionDrySand *this)

{
  BoardRegion::BoardRegion((BoardRegion *)this);
  *(undefined ***)this = &PTR_GetClass_06835070;
  return;
}


/* BoardRegionDrySand::StaticNew() */

BoardRegionDrySand * BoardRegionDrySand::StaticNew(void)

{
  BoardRegionDrySand *this;
  
  this = ::operator_new(0x28);
  BoardRegionDrySand(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardRegionDrySand::GatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
BoardRegionDrySand::GatherPlantingRestrictions
          (BoardRegionDrySand *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  bool bVar1;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != (PlantType *)0x0) {
    bVar1 = std::operator==((string *)(param_2 + 8),"lilypad");
    if (bVar1) {
      local_c = 9;
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

