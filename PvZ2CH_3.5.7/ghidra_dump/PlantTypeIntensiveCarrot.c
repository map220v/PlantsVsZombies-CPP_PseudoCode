// Class: PlantTypeIntensiveCarrot


/* PlantTypeIntensiveCarrot::StaticGetClass() */

long * PlantTypeIntensiveCarrot::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeIntensiveCarrot",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeIntensiveCarrot::GetClass() const */

long * PlantTypeIntensiveCarrot::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeIntensiveCarrot",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeIntensiveCarrot::PlantTypeIntensiveCarrot() */

void __thiscall PlantTypeIntensiveCarrot::PlantTypeIntensiveCarrot(PlantTypeIntensiveCarrot *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_067f3d70;
  return;
}


/* PlantTypeIntensiveCarrot::StaticNew() */

PlantTypeIntensiveCarrot * PlantTypeIntensiveCarrot::StaticNew(void)

{
  PlantTypeIntensiveCarrot *this;
  
  this = ::operator_new(0x138);
  PlantTypeIntensiveCarrot(this);
  return this;
}


/* PlantTypeIntensiveCarrot::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) const */

void __thiscall
PlantTypeIntensiveCarrot::AddResourceRequirements(PlantTypeIntensiveCarrot *this,set *param_1)

{
  PlantType::AddResourceRequirements((PlantType *)this,param_1);
  Board::GetGameSubSystem<IntensiveCarrotRevivalSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* PlantTypeIntensiveCarrot::~PlantTypeIntensiveCarrot() */

void __thiscall PlantTypeIntensiveCarrot::~PlantTypeIntensiveCarrot(PlantTypeIntensiveCarrot *this)

{
  *(undefined ***)this = &PTR_GetClass_067f3d70;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeIntensiveCarrot::~PlantTypeIntensiveCarrot() */

void __thiscall PlantTypeIntensiveCarrot::~PlantTypeIntensiveCarrot(PlantTypeIntensiveCarrot *this)

{
  ~PlantTypeIntensiveCarrot(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeIntensiveCarrot::GatherPlantingRestrictions(Board*, Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) const */

void __thiscall
PlantTypeIntensiveCarrot::GatherPlantingRestrictions
          (PlantTypeIntensiveCarrot *this,Board *param_1,Point *param_2,vector *param_3)

{
  char cVar1;
  IntensiveCarrotRevivalSubsystem *pIVar2;
  long *plVar3;
  undefined4 local_1c;
  RtMixedPtrBase aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar2 = Board::GetGameSubSystem<IntensiveCarrotRevivalSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  IntensiveCarrotRevivalSubsystem::GetPlantLastPlantedAt((int)pIVar2,*(int *)param_2);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
  if (cVar1 == '\0') {
    local_1c = 0x4f;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
               (PlantingReason *)&local_1c);
  }
  else {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    (**(code **)(*plVar3 + 0x58))(plVar3,param_1,param_2,param_3);
  }
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

