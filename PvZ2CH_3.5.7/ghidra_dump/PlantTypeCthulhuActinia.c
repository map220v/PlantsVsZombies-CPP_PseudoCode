// Class: PlantTypeCthulhuActinia


/* PlantTypeCthulhuActinia::StaticGetClass() */

long * PlantTypeCthulhuActinia::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeCthulhuActinia",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeCthulhuActinia::GetClass() const */

long * PlantTypeCthulhuActinia::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeCthulhuActinia",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeCthulhuActinia::PlantTypeCthulhuActinia() */

void __thiscall PlantTypeCthulhuActinia::PlantTypeCthulhuActinia(PlantTypeCthulhuActinia *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_069b32f0;
  return;
}


/* PlantTypeCthulhuActinia::StaticNew() */

PlantTypeCthulhuActinia * PlantTypeCthulhuActinia::StaticNew(void)

{
  PlantTypeCthulhuActinia *this;
  
  this = ::operator_new(0x138);
  PlantTypeCthulhuActinia(this);
  return this;
}


/* PlantTypeCthulhuActinia::~PlantTypeCthulhuActinia() */

void __thiscall PlantTypeCthulhuActinia::~PlantTypeCthulhuActinia(PlantTypeCthulhuActinia *this)

{
  *(undefined ***)this = &PTR_GetClass_069b32f0;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeCthulhuActinia::~PlantTypeCthulhuActinia() */

void __thiscall PlantTypeCthulhuActinia::~PlantTypeCthulhuActinia(PlantTypeCthulhuActinia *this)

{
  ~PlantTypeCthulhuActinia(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeCthulhuActinia::GetCost(PlantAvatarType) const */

void PlantTypeCthulhuActinia::GetCost(ResourceInfo *param_1)

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
  if (*(long *)(gLawnApp + 0x9f0) == 0) goto LAB_04d5e41c;
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
      if (cVar3 != '\0') goto LAB_04d5e2b8;
LAB_04d5e468:
      iVar9 = iVar9 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    }
    else {
LAB_04d5e2b8:
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
           (cVar3 = FUN_04d5871c(*(undefined1 *)(extraout_x0 + 0x30)), cVar3 == '\0'))
        goto LAB_04d5e468;
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
      if (bVar2) goto LAB_04d5e414;
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
LAB_04d5e414:
  iVar4 = iVar10;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
LAB_04d5e41c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}

