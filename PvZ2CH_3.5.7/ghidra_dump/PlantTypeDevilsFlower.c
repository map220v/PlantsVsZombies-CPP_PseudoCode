// Class: PlantTypeDevilsFlower


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeDevilsFlower::GetRefundSunCount() const */

void __thiscall PlantTypeDevilsFlower::GetRefundSunCount(PlantTypeDevilsFlower *this)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ResourceInfo *pRVar7;
  int extraout_w1;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = PlantType::GetCost((PlantType *)this,0xfffffffe);
  iVar9 = iVar4;
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
    iVar10 = 0;
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar6,0x2c);
    while( true ) {
      bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
      uVar8 = (uint)bVar2;
      if (!bVar2) break;
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Plant::GetType();
      pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
      if (this == (PlantTypeDevilsFlower *)pRVar7) {
        uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        cVar3 = Plant::HasCondition(uVar6,0x22);
        if (cVar3 != '\0') goto LAB_04d5b7c4;
        iVar10 = iVar10 + 1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
      else {
LAB_04d5b7c4:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
    iVar5 = iVar10 + -1;
    if (0 < iVar5) {
      uVar1 = (iVar10 - 5U >> 2) + 1;
      if (0xb < iVar10 - 2U) {
        iVar9 = 1;
        iVar10 = 1;
        iVar11 = 1;
        iVar12 = 1;
        do {
          uVar8 = uVar8 + 1;
          iVar9 = iVar9 * 2;
          iVar10 = iVar10 * 2;
          iVar11 = iVar11 * 2;
          iVar12 = iVar12 * 2;
        } while (uVar8 < uVar1);
        bVar2 = iVar5 == uVar1 * 4;
        iVar5 = iVar5 + uVar1 * -4;
        iVar4 = iVar4 * iVar12 * iVar11 * iVar10 * iVar9;
        iVar9 = iVar4;
        if (bVar2) goto LAB_04d5b8e8;
      }
      iVar9 = iVar4 << 1;
      if ((((((iVar5 != 1) && (iVar9 = iVar4 << 2, iVar5 != 2)) && (iVar9 = iVar4 << 3, iVar5 != 3))
           && ((iVar9 = iVar4 << 4, iVar5 != 4 && (iVar9 = iVar4 << 5, iVar5 != 5)))) &&
          ((iVar9 = iVar4 << 6, iVar5 != 6 &&
           ((iVar9 = iVar4 << 7, iVar5 != 7 && (iVar9 = iVar4 << 8, iVar5 != 8)))))) &&
         ((iVar9 = iVar4 << 9, iVar5 != 9 && (iVar9 = iVar4 << 10, iVar5 != 10)))) {
        iVar9 = iVar4 << 0xc;
        if (iVar5 == 0xb) {
          iVar9 = iVar4 << 0xb;
        }
      }
    }
  }
LAB_04d5b8e8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar9);
  }
  return;
}


/* PlantTypeDevilsFlower::StaticGetClass() */

long * PlantTypeDevilsFlower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeDevilsFlower",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeDevilsFlower::GetClass() const */

long * PlantTypeDevilsFlower::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeDevilsFlower",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeDevilsFlower::PlantTypeDevilsFlower() */

void __thiscall PlantTypeDevilsFlower::PlantTypeDevilsFlower(PlantTypeDevilsFlower *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_069b40e0;
  return;
}


/* PlantTypeDevilsFlower::StaticNew() */

PlantTypeDevilsFlower * PlantTypeDevilsFlower::StaticNew(void)

{
  PlantTypeDevilsFlower *this;
  
  this = ::operator_new(0x138);
  PlantTypeDevilsFlower(this);
  return this;
}


/* PlantTypeDevilsFlower::~PlantTypeDevilsFlower() */

void __thiscall PlantTypeDevilsFlower::~PlantTypeDevilsFlower(PlantTypeDevilsFlower *this)

{
  *(undefined ***)this = &PTR_GetClass_069b40e0;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeDevilsFlower::~PlantTypeDevilsFlower() */

void __thiscall PlantTypeDevilsFlower::~PlantTypeDevilsFlower(PlantTypeDevilsFlower *this)

{
  ~PlantTypeDevilsFlower(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeDevilsFlower::GetCost(PlantAvatarType) const */

void PlantTypeDevilsFlower::GetCost(ResourceInfo *param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  string *psVar5;
  undefined8 uVar6;
  ResourceInfo *pRVar7;
  long extraout_x0;
  int extraout_w1;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = PlantType::GetCost();
  if (*(long *)(gLawnApp + 0x9f0) == 0) goto LAB_04d68204;
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  iVar9 = 0;
  std::string::string(asStack_28,"imitater");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
  std::string::~string(asStack_28);
  nop();
  uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(asStack_28,uVar6,0x2c);
  while( true ) {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)asStack_28);
    uVar8 = (uint)bVar2;
    if (!bVar2) break;
    Sexy::RtDbTable::Iterator::operator*((Iterator *)asStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    Plant::GetType();
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
    if (param_1 == pRVar7) {
      uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      cVar3 = Plant::HasCondition(uVar6,0x22);
      if (cVar3 != '\0') goto LAB_04d680a0;
LAB_04d68250:
      iVar9 = iVar9 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    }
    else {
LAB_04d680a0:
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
        pRVar7 = (ResourceInfo *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        if ((param_1 == pRVar7) &&
           (cVar3 = FUN_04d61734(*(undefined1 *)(extraout_x0 + 0x30)), cVar3 == '\0'))
        goto LAB_04d68250;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++((Iterator *)asStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)asStack_28);
  iVar10 = iVar4;
  if (iVar9 != 0) {
    uVar1 = (iVar9 - 4U >> 2) + 1;
    if (0xc < iVar9) {
      iVar10 = 1;
      iVar11 = 1;
      iVar12 = 1;
      iVar13 = 1;
      do {
        uVar8 = uVar8 + 1;
        iVar10 = iVar10 * 2;
        iVar11 = iVar11 * 2;
        iVar12 = iVar12 * 2;
        iVar13 = iVar13 * 2;
      } while (uVar8 < uVar1);
      bVar2 = uVar1 * 4 == iVar9;
      iVar9 = iVar9 + uVar1 * -4;
      iVar4 = iVar4 * iVar13 * iVar12 * iVar11 * iVar10;
      iVar10 = iVar4;
      if (bVar2) goto LAB_04d681fc;
    }
    iVar10 = iVar4 << 1;
    if ((((((iVar9 != 1) && (iVar10 = iVar4 << 2, iVar9 != 2)) && (iVar10 = iVar4 << 3, iVar9 != 3))
         && ((iVar10 = iVar4 << 4, iVar9 != 4 && (iVar10 = iVar4 << 5, iVar9 != 5)))) &&
        ((iVar10 = iVar4 << 6, iVar9 != 6 &&
         ((iVar10 = iVar4 << 7, iVar9 != 7 && (iVar10 = iVar4 << 8, iVar9 != 8)))))) &&
       ((iVar10 = iVar4 << 9, iVar9 != 9 && (iVar10 = iVar4 << 10, iVar9 != 10)))) {
      iVar10 = iVar4 << 0xc;
      if (iVar9 == 0xb) {
        iVar10 = iVar4 << 0xb;
      }
    }
  }
LAB_04d681fc:
  iVar4 = iVar10;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
LAB_04d68204:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}

