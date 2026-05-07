// Class: PlantTypeNukeLauncher


/* PlantTypeNukeLauncher::StaticGetClass() */

long * PlantTypeNukeLauncher::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeNukeLauncher",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeNukeLauncher::GetClass() const */

long * PlantTypeNukeLauncher::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTypeNukeLauncher",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeNukeLauncher::PlantTypeNukeLauncher() */

void __thiscall PlantTypeNukeLauncher::PlantTypeNukeLauncher(PlantTypeNukeLauncher *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_06815890;
  return;
}


/* PlantTypeNukeLauncher::StaticNew() */

PlantTypeNukeLauncher * PlantTypeNukeLauncher::StaticNew(void)

{
  PlantTypeNukeLauncher *this;
  
  this = ::operator_new(0x138);
  PlantTypeNukeLauncher(this);
  return this;
}


/* PlantTypeNukeLauncher::CalcCostForLevelCount(int, PlantAvatarType) const */

int __thiscall
PlantTypeNukeLauncher::CalcCostForLevelCount
          (PlantTypeNukeLauncher *this,int param_1,undefined4 param_3)

{
  int iVar1;
  long extraout_x0;
  
  iVar1 = PlantType::GetCost((PlantType *)this,param_3);
  PlantType::GetProps((PlantType *)this);
  nop();
  return iVar1 + param_1 * *(int *)(extraout_x0 + 0x2d4);
}


/* PlantTypeNukeLauncher::~PlantTypeNukeLauncher() */

void __thiscall PlantTypeNukeLauncher::~PlantTypeNukeLauncher(PlantTypeNukeLauncher *this)

{
  *(undefined ***)this = &PTR_GetClass_06815890;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeNukeLauncher::~PlantTypeNukeLauncher() */

void __thiscall PlantTypeNukeLauncher::~PlantTypeNukeLauncher(PlantTypeNukeLauncher *this)

{
  ~PlantTypeNukeLauncher(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeNukeLauncher::GetExistingLevelCount() const */

void __thiscall PlantTypeNukeLauncher::GetExistingLevelCount(PlantTypeNukeLauncher *this)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  undefined8 uVar4;
  PlantTypeNukeLauncher *pPVar5;
  long extraout_x0;
  long extraout_x0_00;
  int extraout_w1;
  int iVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(gLawnApp + 0x9f0) == 0) {
    iVar6 = 0;
  }
  else {
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    iVar6 = 0;
    std::string::string(asStack_28,"imitater");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    std::string::~string(asStack_28);
    nop();
    uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(asStack_28,uVar4,0x2c);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)asStack_28), bVar1)
    {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)asStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      Plant::GetType();
      pPVar5 = (PlantTypeNukeLauncher *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
      ;
      if (this == pPVar5) {
        uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        cVar2 = Plant::HasCondition(uVar4,0x22);
        if (cVar2 != '\0') goto LAB_0424704c;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        nop();
        if (extraout_x0_00 != 0) {
          iVar6 = iVar6 + 1;
        }
      }
      else {
LAB_0424704c:
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
          pPVar5 = (PlantTypeNukeLauncher *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          if ((this == pPVar5) &&
             (cVar2 = FUN_04241fb4(*(undefined1 *)(extraout_x0 + 0x30)), cVar2 == '\0')) {
            iVar6 = iVar6 + 1;
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
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar6);
  }
  return;
}


/* PlantTypeNukeLauncher::GetCost(PlantAvatarType) const */

void __thiscall PlantTypeNukeLauncher::GetCost(PlantTypeNukeLauncher *this,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = GetExistingLevelCount(this);
  CalcCostForLevelCount(this,uVar1,param_2);
  return;
}

