// Class: PlantTypeGoldLeaf


/* PlantTypeGoldLeaf::StaticGetClass() */

long * PlantTypeGoldLeaf::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeGoldLeaf",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeGoldLeaf::GetClass() const */

long * PlantTypeGoldLeaf::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeGoldLeaf",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeGoldLeaf::PlantTypeGoldLeaf() */

void __thiscall PlantTypeGoldLeaf::PlantTypeGoldLeaf(PlantTypeGoldLeaf *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_067e5ec0;
  return;
}


/* PlantTypeGoldLeaf::StaticNew() */

PlantTypeGoldLeaf * PlantTypeGoldLeaf::StaticNew(void)

{
  PlantTypeGoldLeaf *this;
  
  this = ::operator_new(0x138);
  PlantTypeGoldLeaf(this);
  return this;
}


/* PlantTypeGoldLeaf::~PlantTypeGoldLeaf() */

void __thiscall PlantTypeGoldLeaf::~PlantTypeGoldLeaf(PlantTypeGoldLeaf *this)

{
  *(undefined ***)this = &PTR_GetClass_067e5ec0;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeGoldLeaf::~PlantTypeGoldLeaf() */

void __thiscall PlantTypeGoldLeaf::~PlantTypeGoldLeaf(PlantTypeGoldLeaf *this)

{
  ~PlantTypeGoldLeaf(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeGoldLeaf::GatherPlantingRestrictions(Board*, Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) const */

void __thiscall
PlantTypeGoldLeaf::GatherPlantingRestrictions
          (PlantTypeGoldLeaf *this,Board *param_1,Point *param_2,vector *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = Board::IsShallowWater(param_1,param_2);
  if (cVar3 != '\0') {
    local_10[0] = 0x33;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
               (PlantingReason *)local_10);
  }
  lVar5 = FUN_04112930(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
  if ((((lVar5 != 0) ||
       (lVar5 = FUN_04112a14(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4)), lVar5 != 0)) ||
      (lVar5 = FUN_04112af8(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4)), lVar5 != 0)) ||
     (lVar5 = FUN_02fd4240(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4)), lVar5 != 0)) {
    local_10[0] = 5;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
               (PlantingReason *)local_10);
  }
  iVar1 = *(int *)param_2;
  iVar2 = *(int *)(param_2 + 4);
  std::string::string((string *)local_10,"");
  lVar5 = Board::GetPlantAt(param_1,iVar1,iVar2,(string *)local_10);
  std::string::~string((string *)local_10);
  nop();
  if (lVar5 != 0) {
    Plant::GetType();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    bVar4 = std::operator==((string *)(lVar5 + 8),"powerplant");
    if (bVar4) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      if (!bVar4) goto LAB_04112e50;
    }
    else {
      Plant::GetType();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      bVar4 = std::operator==((string *)(lVar5 + 8),"goldleaf");
      if (bVar4) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      }
      else {
        Plant::GetType();
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
        bVar4 = std::operator==((string *)(lVar5 + 8),"imitater");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      if (bVar4 == false) goto LAB_04112e50;
    }
    local_10[0] = 0x4d;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
               (PlantingReason *)local_10);
  }
LAB_04112e50:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

