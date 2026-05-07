// Class: PlantTypePowerPlant


/* PlantTypePowerPlant::StaticGetClass() */

long * PlantTypePowerPlant::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypePowerPlant",uVar2,StaticNew);
  return sClass;
}


/* PlantTypePowerPlant::GetClass() const */

long * PlantTypePowerPlant::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypePowerPlant",uVar2,StaticNew);
  return sClass;
}


/* PlantTypePowerPlant::PlantTypePowerPlant() */

void __thiscall PlantTypePowerPlant::PlantTypePowerPlant(PlantTypePowerPlant *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_067cca50;
  return;
}


/* PlantTypePowerPlant::StaticNew() */

PlantTypePowerPlant * PlantTypePowerPlant::StaticNew(void)

{
  PlantTypePowerPlant *this;
  
  this = ::operator_new(0x138);
  PlantTypePowerPlant(this);
  return this;
}


/* PlantTypePowerPlant::~PlantTypePowerPlant() */

void __thiscall PlantTypePowerPlant::~PlantTypePowerPlant(PlantTypePowerPlant *this)

{
  *(undefined ***)this = &PTR_GetClass_067cca50;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypePowerPlant::~PlantTypePowerPlant() */

void __thiscall PlantTypePowerPlant::~PlantTypePowerPlant(PlantTypePowerPlant *this)

{
  ~PlantTypePowerPlant(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypePowerPlant::GetCost(PlantAvatarType) const */

void PlantTypePowerPlant::GetCost(PlantType *param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  PowerTileSubsystem *pPVar7;
  string *psVar8;
  undefined8 uVar9;
  ResourceInfo *pRVar10;
  long extraout_x0;
  long extraout_x0_00;
  long extraout_x0_01;
  PlantNameMapperServerID *this;
  int extraout_w1;
  int iVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = PlantType::GetCost();
  if (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) goto LAB_0408ba6c;
  pPVar7 = Board::GetGameSubSystem<PowerTileSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  iVar12 = 0;
  iVar5 = PowerTileSubsystem::GetPowerTileCount(pPVar7,4);
  psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_28,"imitater");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
  std::string::~string(asStack_28);
  nop();
  uVar9 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(asStack_28,uVar9,0x2c);
  while( true ) {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)asStack_28);
    uVar13 = (uint)bVar2;
    if (!bVar2) break;
    Sexy::RtDbTable::Iterator::operator*((Iterator *)asStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    Plant::GetType();
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
    if (param_1 == (PlantType *)pRVar10) {
      uVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      cVar3 = Plant::HasCondition(uVar9,0x22);
      if (cVar3 != '\0') goto LAB_0408b9e4;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      nop();
      cVar3 = FUN_0408ad64(*(undefined1 *)(extraout_x0_00 + 0x28));
      if (cVar3 == '\0') {
        iVar12 = iVar12 + 1;
      }
    }
    else {
LAB_0408b9e4:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      Plant::GetType();
      cVar3 = Sexy::RtWeakPtrBase::operator==
                        ((RtWeakPtrBase *)aRStack_30,(RtWeakPtrBase *)aRStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      if (cVar3 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        nop();
        PlantImitater::GetImitatedPlant();
        pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
        if ((param_1 == (PlantType *)pRVar10) &&
           (cVar3 = FUN_0408ad60(*(undefined1 *)(extraout_x0 + 0x30)), cVar3 == '\0')) {
          iVar12 = iVar12 + 1;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        }
        else {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++((Iterator *)asStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)asStack_28);
  iVar5 = iVar5 + iVar12;
  if (iVar5 != 0) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
    nop();
    iVar12 = *(int *)(extraout_x0_01 + 0x2b8);
    fVar14 = (float)GeneEnhancement::GetGeneEnhancementSkillBoost(0x38,0);
    iVar12 = (int)((1.0 - fVar14) * (float)iVar12);
    this = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
    uVar6 = PlantNameMapperServerID::GetIdForType(this,param_1);
    uVar9 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
    fVar14 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar9,uVar6,9,uVar13);
    iVar15 = iVar12;
    if (1 < iVar5) {
      uVar1 = (iVar5 - 5U >> 2) + 1;
      iVar11 = iVar5 + -1;
      if (0xb < iVar5 - 2U) {
        iVar15 = 1;
        iVar16 = 1;
        iVar17 = 1;
        iVar18 = 1;
        do {
          uVar13 = uVar13 + 1;
          iVar15 = iVar15 * 2;
          iVar16 = iVar16 * 2;
          iVar17 = iVar17 * 2;
          iVar18 = iVar18 * 2;
        } while (uVar13 < uVar1);
        iVar5 = iVar5 + uVar1 * -4;
        iVar12 = iVar12 * iVar18 * iVar17 * iVar16 * iVar15;
        iVar15 = iVar12;
        if (uVar1 * 4 == iVar11) goto LAB_0408bc40;
        iVar11 = iVar5 + -1;
      }
      iVar15 = iVar12 << 1;
      if ((((((1 < iVar11) && (iVar15 = iVar12 << 2, iVar5 != 3)) &&
            (iVar15 = iVar12 << 3, iVar5 != 4)) &&
           ((iVar15 = iVar12 << 4, iVar5 != 5 && (iVar15 = iVar12 << 5, iVar5 != 6)))) &&
          ((iVar15 = iVar12 << 6, iVar5 != 7 &&
           ((iVar15 = iVar12 << 7, iVar5 != 8 && (iVar15 = iVar12 << 8, iVar5 != 9)))))) &&
         ((iVar15 = iVar12 << 9, iVar5 != 10 && (iVar15 = iVar12 << 10, iVar5 != 0xb)))) {
        iVar15 = iVar12 << 0xc;
        if (iVar5 == 0xc) {
          iVar15 = iVar12 << 0xb;
        }
      }
    }
LAB_0408bc40:
    iVar4 = (iVar15 + iVar4) - (int)fVar14;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
LAB_0408ba6c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypePowerPlant::GatherPlantingRestrictions(Board*, Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) const */

void __thiscall
PlantTypePowerPlant::GatherPlantingRestrictions
          (PlantTypePowerPlant *this,Board *param_1,Point *param_2,vector *param_3)

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
  lVar5 = FUN_0408b614(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
  if ((((lVar5 != 0) ||
       (lVar5 = FUN_0408b6f8(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4)), lVar5 != 0)) ||
      (lVar5 = FUN_0408b7dc(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4)), lVar5 != 0)) ||
     (lVar5 = FUN_02fd4130(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4)), lVar5 != 0)) {
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
      if (!bVar4) goto LAB_0408bd84;
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
      if (bVar4 == false) goto LAB_0408bd84;
    }
    local_10[0] = 0x4d;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
               (PlantingReason *)local_10);
  }
LAB_0408bd84:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

