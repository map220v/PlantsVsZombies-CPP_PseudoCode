// Class: PlantTypeCobcannon


/* PlantTypeCobcannon::StaticGetClass() */

long * PlantTypeCobcannon::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeCobcannon",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeCobcannon::GetClass() const */

long * PlantTypeCobcannon::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeCobcannon",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeCobcannon::PlantTypeCobcannon() */

void __thiscall PlantTypeCobcannon::PlantTypeCobcannon(PlantTypeCobcannon *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_067eec10;
  return;
}


/* PlantTypeCobcannon::StaticNew() */

PlantTypeCobcannon * PlantTypeCobcannon::StaticNew(void)

{
  PlantTypeCobcannon *this;
  
  this = ::operator_new(0x138);
  PlantTypeCobcannon(this);
  return this;
}


/* PlantTypeCobcannon::~PlantTypeCobcannon() */

void __thiscall PlantTypeCobcannon::~PlantTypeCobcannon(PlantTypeCobcannon *this)

{
  *(undefined ***)this = &PTR_GetClass_067eec10;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeCobcannon::~PlantTypeCobcannon() */

void __thiscall PlantTypeCobcannon::~PlantTypeCobcannon(PlantTypeCobcannon *this)

{
  ~PlantTypeCobcannon(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeCobcannon::GatherPlantingRestrictions(Board*, Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) const */

void __thiscall
PlantTypeCobcannon::GatherPlantingRestrictions
          (PlantTypeCobcannon *this,Board *param_1,Point *param_2,vector *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)(param_2 + 4);
  iVar2 = *(int *)param_2;
  std::string::string((string *)local_10,"");
  lVar5 = Board::GetPlantAt(param_1,iVar2,iVar1,(string *)local_10);
  std::string::~string((string *)local_10);
  nop();
  iVar1 = *(int *)(param_2 + 4);
  iVar2 = *(int *)param_2;
  std::string::string((string *)local_10,"");
  lVar6 = Board::GetPlantAt(param_1,iVar2 + 1,iVar1,(string *)local_10);
  std::string::~string((string *)local_10);
  nop();
  if (lVar5 == 0) {
LAB_0414ef2c:
    lVar5 = Board::GetPlantGroupAt(param_1,*(int *)param_2,*(int *)(param_2 + 4));
    lVar6 = Board::GetPlantGroupAt(param_1,*(int *)param_2 + 1,*(int *)(param_2 + 4));
    if ((lVar6 == 0) || (lVar5 == 0)) {
LAB_0414efcc:
      local_10[0] = 0x51;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                 (PlantingReason *)local_10);
      PlantType::GatherPlantingRestrictions((PlantType *)this,param_1,param_2,param_3);
      goto LAB_0414eef4;
    }
    PlantGroup::GetPlantAtLayer(aRStack_18,lVar5,0);
    cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18);
    if (cVar4 != '\0') goto LAB_0414ef80;
    PlantGroup::GetPlantAtLayer((string *)local_10,lVar6);
    cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    if (cVar4 == '\0') goto LAB_0414efcc;
  }
  else {
    Plant::GetType();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    bVar3 = std::operator==("kernelpult",(string *)(lVar5 + 8));
    if ((!bVar3) || (lVar6 == 0)) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      goto LAB_0414ef2c;
    }
    Plant::GetType();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    bVar3 = std::operator==("kernelpult",(string *)(lVar5 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    if (!bVar3) goto LAB_0414ef2c;
    lVar5 = FUN_04149fe0(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
    if ((lVar5 != 0) ||
       (lVar5 = FUN_04149fe0(*(int *)param_2 + 1,*(undefined4 *)(param_2 + 4)), lVar5 != 0)) {
      local_10[0] = 0x50;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                 (PlantingReason *)local_10);
      goto LAB_0414eef4;
    }
    lVar5 = Board::GetPlantGroupAt(param_1,*(int *)param_2,*(int *)(param_2 + 4));
    lVar6 = Board::GetPlantGroupAt(param_1,*(int *)param_2 + 1,*(int *)(param_2 + 4));
    if ((lVar6 == 0) || (lVar5 == 0)) {
LAB_0414f090:
      local_10[0] = 0;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                 (PlantingReason *)local_10);
      goto LAB_0414eef4;
    }
    PlantGroup::GetPlantAtLayer(aRStack_18,lVar5,0);
    cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18);
    if (cVar4 == '\0') {
      PlantGroup::GetPlantAtLayer((string *)local_10,lVar6);
      cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      if (cVar4 == '\0') goto LAB_0414f090;
      goto LAB_0414ef88;
    }
LAB_0414ef80:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
LAB_0414ef88:
  local_10[0] = 0x52;
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
             (PlantingReason *)local_10);
LAB_0414eef4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

