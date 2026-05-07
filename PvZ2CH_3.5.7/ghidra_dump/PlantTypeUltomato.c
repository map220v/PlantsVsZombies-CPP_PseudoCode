// Class: PlantTypeUltomato


/* PlantTypeUltomato::StaticGetClass() */

long * PlantTypeUltomato::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeUltomato",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeUltomato::GetClass() const */

long * PlantTypeUltomato::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeUltomato",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeUltomato::PlantTypeUltomato() */

void __thiscall PlantTypeUltomato::PlantTypeUltomato(PlantTypeUltomato *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_067efe90;
  return;
}


/* PlantTypeUltomato::StaticNew() */

PlantTypeUltomato * PlantTypeUltomato::StaticNew(void)

{
  PlantTypeUltomato *this;
  
  this = ::operator_new(0x138);
  PlantTypeUltomato(this);
  return this;
}


/* PlantTypeUltomato::CalcCostForLevelCount(int, PlantAvatarType) const */

int __thiscall
PlantTypeUltomato::CalcCostForLevelCount(PlantTypeUltomato *this,int param_1,undefined4 param_3)

{
  int iVar1;
  long extraout_x0;
  
  iVar1 = PlantType::GetCost((PlantType *)this,param_3);
  PlantType::GetProps((PlantType *)this);
  nop();
  return iVar1 + param_1 * *(int *)(extraout_x0 + 0x2cc);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeUltomato::CanPlantOnPlant(Plant*) const */

void __thiscall PlantTypeUltomato::CanPlantOnPlant(PlantTypeUltomato *this,Plant *param_1)

{
  undefined1 uVar1;
  PlantTypeUltomato *pPVar2;
  PlantUltomato *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (Plant *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    Plant::GetType();
    pPVar2 = (PlantTypeUltomato *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    if (this == pPVar2) {
      nop();
      uVar1 = PlantUltomato::CanUpgrade(this_00);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PlantTypeUltomato::~PlantTypeUltomato() */

void __thiscall PlantTypeUltomato::~PlantTypeUltomato(PlantTypeUltomato *this)

{
  *(undefined ***)this = &PTR_GetClass_067efe90;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeUltomato::~PlantTypeUltomato() */

void __thiscall PlantTypeUltomato::~PlantTypeUltomato(PlantTypeUltomato *this)

{
  ~PlantTypeUltomato(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeUltomato::GetExistingLevelCount() const */

void __thiscall PlantTypeUltomato::GetExistingLevelCount(PlantTypeUltomato *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  string *psVar4;
  undefined8 uVar5;
  PlantTypeUltomato *pPVar6;
  long extraout_x0;
  long extraout_x0_00;
  int extraout_w1;
  int iVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(gLawnApp + 0x9f0) == 0) {
    iVar7 = 0;
  }
  else {
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    iVar7 = 0;
    std::string::string(asStack_28,"imitater");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
    std::string::~string(asStack_28);
    nop();
    uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(asStack_28,uVar5,0x2c);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)asStack_28), bVar1)
    {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)asStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      Plant::GetType();
      pPVar6 = (PlantTypeUltomato *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
      ;
      if (this == pPVar6) {
        uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        cVar2 = Plant::HasCondition(uVar5,0x22);
        if (cVar2 != '\0') goto LAB_0415443c;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        nop();
        if (extraout_x0_00 != 0) {
          iVar3 = FUN_04150608(*(undefined4 *)(extraout_x0_00 + 0x28));
          iVar7 = iVar7 + iVar3 + 1;
        }
      }
      else {
LAB_0415443c:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        Plant::GetType();
        cVar2 = Sexy::RtWeakPtrBase::operator==
                          ((RtWeakPtrBase *)aRStack_30,(RtWeakPtrBase *)aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        if (cVar2 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          nop();
          PlantImitater::GetImitatedPlant();
          pPVar6 = (PlantTypeUltomato *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          if ((this == pPVar6) &&
             (cVar2 = FUN_0415060c(*(undefined1 *)(extraout_x0 + 0x30)), cVar2 == '\0')) {
            iVar7 = iVar7 + 1;
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
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar7);
}


/* PlantTypeUltomato::GetCost(PlantAvatarType) const */

void __thiscall PlantTypeUltomato::GetCost(PlantTypeUltomato *this,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = GetExistingLevelCount(this);
  CalcCostForLevelCount(this,uVar1,param_2);
  return;
}

