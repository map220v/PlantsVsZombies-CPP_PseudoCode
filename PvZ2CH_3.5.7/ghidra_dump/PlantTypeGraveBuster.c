// Class: PlantTypeGraveBuster


/* PlantTypeGraveBuster::StaticGetClass() */

long * PlantTypeGraveBuster::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeGraveBuster",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeGraveBuster::GetClass() const */

long * PlantTypeGraveBuster::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeGraveBuster",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeGraveBuster::PlantTypeGraveBuster() */

void __thiscall PlantTypeGraveBuster::PlantTypeGraveBuster(PlantTypeGraveBuster *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_067ba700;
  return;
}


/* PlantTypeGraveBuster::StaticNew() */

PlantTypeGraveBuster * PlantTypeGraveBuster::StaticNew(void)

{
  PlantTypeGraveBuster *this;
  
  this = ::operator_new(0x138);
  PlantTypeGraveBuster(this);
  return this;
}


/* PlantTypeGraveBuster::~PlantTypeGraveBuster() */

void __thiscall PlantTypeGraveBuster::~PlantTypeGraveBuster(PlantTypeGraveBuster *this)

{
  *(undefined ***)this = &PTR_GetClass_067ba700;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeGraveBuster::~PlantTypeGraveBuster() */

void __thiscall PlantTypeGraveBuster::~PlantTypeGraveBuster(PlantTypeGraveBuster *this)

{
  ~PlantTypeGraveBuster(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeGraveBuster::GatherPlantingRestrictions(Board*, Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) const */

void __thiscall
PlantTypeGraveBuster::GatherPlantingRestrictions
          (PlantTypeGraveBuster *this,Board *param_1,Point *param_2,vector *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  RtObject *this_00;
  RtWeakPtr aRStack_18 [8];
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_04032f70(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
  iVar1 = *(int *)param_2;
  iVar2 = *(int *)(param_2 + 4);
  std::string::string((string *)local_10,"");
  lVar5 = Board::GetPlantAt(param_1,iVar1,iVar2,(string *)local_10);
  std::string::~string((string *)local_10);
  nop();
  if (lVar5 == 0) {
LAB_04033408:
    if (lVar4 != 0) goto LAB_0403340c;
  }
  else {
    Plant::GetType();
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (!bVar3) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      goto LAB_04033408;
    }
    Plant::GetType();
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    bVar3 = Sexy::RtObject::IsA<PlantTypeGraveBuster>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    if (!bVar3) goto LAB_04033408;
  }
  local_10[0] = 6;
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
             (PlantingReason *)local_10);
LAB_0403340c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

