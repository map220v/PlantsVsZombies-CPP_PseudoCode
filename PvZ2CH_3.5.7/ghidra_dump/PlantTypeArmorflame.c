// Class: PlantTypeArmorflame


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeArmorflame::GatherPlantingRestrictions(Board*, Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) const */

void __thiscall
PlantTypeArmorflame::GatherPlantingRestrictions
          (PlantTypeArmorflame *this,Board *param_1,Point *param_2,vector *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  long lVar5;
  PlantGroup *this_00;
  string asStack_18 [8];
  undefined4 auStack_10 [2];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar1 = *(int *)(param_2 + 4);
  iVar2 = *(int *)param_2;
  std::string::string((string *)auStack_10,"");
  lVar5 = Board::GetPlantAt(param_1,iVar2,iVar1,(string *)auStack_10);
  std::string::~string((string *)auStack_10);
  nop();
  if (lVar5 != 0) {
    Plant::GetType();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)auStack_10);
    bVar3 = std::operator==((string *)(lVar5 + 8),"coffeebean");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)auStack_10);
    if (!bVar3) goto LAB_03fa7cf8;
  }
  Sexy::Point::Point((Point *)auStack_10,*(int *)param_2 + -1,*(int *)(param_2 + 4));
  this_00 = (PlantGroup *)Board::GetPlantGroupAt((Point *)param_1);
  if (this_00 != (PlantGroup *)0x0) {
    std::string::string(asStack_18,"cobcannon");
    cVar4 = PlantGroup::HasPlant(this_00,asStack_18);
    if (cVar4 == '\0') {
      std::string::string((string *)auStack_10,"armorflame");
      cVar4 = PlantGroup::HasPlant(this_00,(string *)auStack_10);
      std::string::~string((string *)auStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      if (cVar4 == '\0') goto LAB_03fa7cf8;
    }
    else {
      std::string::~string(asStack_18);
      nop();
    }
    auStack_10[0] = 0x4d;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
               (PlantingReason *)auStack_10);
  }
LAB_03fa7cf8:
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantTypeArmorflame::StaticGetClass() */

long * PlantTypeArmorflame::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeArmorflame",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeArmorflame::GetClass() const */

long * PlantTypeArmorflame::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeArmorflame",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeArmorflame::PlantTypeArmorflame() */

void __thiscall PlantTypeArmorflame::PlantTypeArmorflame(PlantTypeArmorflame *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_0682c9a0;
  return;
}


/* PlantTypeArmorflame::StaticNew() */

PlantTypeArmorflame * PlantTypeArmorflame::StaticNew(void)

{
  PlantTypeArmorflame *this;
  
  this = ::operator_new(0x138);
  PlantTypeArmorflame(this);
  return this;
}


/* PlantTypeArmorflame::~PlantTypeArmorflame() */

void __thiscall PlantTypeArmorflame::~PlantTypeArmorflame(PlantTypeArmorflame *this)

{
  *(undefined ***)this = &PTR_GetClass_0682c9a0;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeArmorflame::~PlantTypeArmorflame() */

void __thiscall PlantTypeArmorflame::~PlantTypeArmorflame(PlantTypeArmorflame *this)

{
  ~PlantTypeArmorflame(this);
  AK::FreeHook(this);
  return;
}

