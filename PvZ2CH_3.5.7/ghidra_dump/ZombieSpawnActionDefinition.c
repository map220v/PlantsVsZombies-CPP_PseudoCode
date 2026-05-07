// Class: ZombieSpawnActionDefinition


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSpawnActionDefinition::StaticClassInit() */

void ZombieSpawnActionDefinition::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WeightsInt");
    (*pcVar3)(plVar2,asStack_10,FUN_04f2d500,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieSpawnActionDefinition");
    (*pcVar3)(plVar2,asStack_10,FUN_04f33c54,0xc0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSpawnActionDefinition::StaticGetClass() */

long * ZombieSpawnActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSpawnActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSpawnActionDefinition::GetClass() const */

long * ZombieSpawnActionDefinition::GetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSpawnActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSpawnActionDefinition::ZombieSpawnActionDefinition() */

void __thiscall
ZombieSpawnActionDefinition::ZombieSpawnActionDefinition(ZombieSpawnActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_06a16580;
  Set8BytesTo0(this + 0x38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  Set8BytesTo0(this + 0xa0);
  Set8BytesTo0(this + 0xa8);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xb0));
  this[0xb8] = (ZombieSpawnActionDefinition)0x0;
  return;
}


/* ZombieSpawnActionDefinition::StaticNew() */

ZombieSpawnActionDefinition * ZombieSpawnActionDefinition::StaticNew(void)

{
  ZombieSpawnActionDefinition *this;
  
  this = ::operator_new(0xc0);
  ZombieSpawnActionDefinition(this);
  return this;
}


/* ZombieSpawnActionDefinition::~ZombieSpawnActionDefinition() */

void __thiscall
ZombieSpawnActionDefinition::~ZombieSpawnActionDefinition(ZombieSpawnActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_06a16580;
  std::string::~string((string *)(this + 0xa8));
  std::string::~string((string *)(this + 0xa0));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x88));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x70));
  std::vector<WeightsInt,std::allocator<WeightsInt>>::~vector
            ((vector<WeightsInt,std::allocator<WeightsInt>> *)(this + 0x58));
  std::vector<WeightsInt,std::allocator<WeightsInt>>::~vector
            ((vector<WeightsInt,std::allocator<WeightsInt>> *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombieSpawnActionDefinition::~ZombieSpawnActionDefinition() */

void __thiscall
ZombieSpawnActionDefinition::~ZombieSpawnActionDefinition(ZombieSpawnActionDefinition *this)

{
  ~ZombieSpawnActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSpawnActionDefinition::IsValidTarget(Sexy::RtWeakPtr<Plant>) const */

void __thiscall
ZombieSpawnActionDefinition::IsValidTarget
          (ZombieSpawnActionDefinition *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  Plant *pPVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = FUN_04f31450(*(undefined8 *)(this + 0x70));
  uVar5 = FUN_04f314a0(*(undefined8 *)(this + 0x78));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Plant::GetType();
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar4,uVar5,lVar6 + 8);
  local_10 = FUN_04f314a0(*(undefined8 *)(this + 0x78));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (!(bool)bVar1) {
    plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    iVar3 = (**(code **)(*plVar7 + 0x180))();
    if (1 < iVar3) {
      pPVar8 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      cVar2 = Plant::IsInvincible(pPVar8,(bool)bVar1);
      if (cVar2 == '\0') {
        pPVar8 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        cVar2 = Plant::IsSwapping(pPVar8);
        if (cVar2 == '\0') {
          uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          bVar1 = Plant::HasCondition(uVar4,0x16);
          bVar1 = bVar1 ^ 1;
        }
      }
      goto LAB_04f34950;
    }
  }
  bVar1 = 0;
LAB_04f34950:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSpawnActionDefinition::IsValidTargetZombie(Sexy::RtWeakPtr<Zombie>, bool) const */

void ZombieSpawnActionDefinition::IsValidTargetZombie
               (long param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Zombie *pZVar6;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  long lVar7;
  long *plVar8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = FUN_04f31450(*(undefined8 *)(param_1 + 0x88));
  uVar5 = FUN_04f314a0(*(undefined8 *)(param_1 + 0x90));
  pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  this = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar6);
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar4,uVar5,lVar7 + 8);
  local_10 = FUN_04f314a0(*(undefined8 *)(param_1 + 0x90));
  cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if ((bool)cVar1) {
    cVar1 = '\0';
  }
  else {
    pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar2 = Zombie::IsBoss(pZVar6);
    if (cVar2 == '\0') {
      plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      cVar2 = (**(code **)(*plVar8 + 0x328))();
      if (cVar2 == '\0') {
        plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        cVar2 = (**(code **)(*plVar8 + 0x330))();
        if (cVar2 == '\0') {
          pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          cVar2 = Zombie::IsTargetable(pZVar6);
          if (cVar2 != '\0') {
            pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            cVar3 = Zombie::IsIgnoringAllDamage(pZVar6);
            if (cVar3 == '\0') {
              plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              cVar3 = (**(code **)(*plVar8 + 0x4d8))();
              if (cVar3 == '\0') {
                plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                cVar3 = (**(code **)(*plVar8 + 0x508))();
                if (cVar3 == '\0') {
                  pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  cVar3 = Zombie::HasFogImmune(pZVar6);
                  if (cVar3 == '\0') {
                    pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                    cVar3 = Zombie::IsBerserk(pZVar6);
                    cVar1 = '\0';
                    if (cVar3 == '\0') {
                      cVar1 = cVar2;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSpawnActionDefinition::CanStartAction(ZombieWithActions*) const */

void __thiscall
ZombieSpawnActionDefinition::CanStartAction
          (ZombieSpawnActionDefinition *this,ZombieWithActions *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = RealObject::IsOnTeam(param_1,2);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0x98))(this,param_1);
    lVar2 = FUN_04f2d66c(local_20,local_18);
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)&local_20)
    ;
  }
  else {
    (**(code **)(*(long *)this + 0x90))
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)&local_20,
               this,param_1);
    lVar2 = FUN_04f2d4ec(local_20,local_18);
    std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
              ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2 != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSpawnActionDefinition::FindTargetPlants(ZombieWithActions*) const */

void ZombieSpawnActionDefinition::FindTargetPlants(ZombieWithActions *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  PlantGroup *pPVar6;
  Plant *this;
  int extraout_w1;
  int extraout_w1_00;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  code *pcVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_40 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x2d);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      pcVar7 = *(code **)(*(long *)param_1 + 0xb0);
      std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::vector
                ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)aIStack_28
                 ,(vector *)in_x8);
      (*pcVar7)(param_1,aIStack_28);
      std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
                ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)aIStack_28
                );
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_48,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    iVar3 = FUN_04f2d4e0(*(undefined4 *)(lVar5 + 0xa4));
    if (iVar3 < 0) {
LAB_04f37444:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
      iVar3 = extraout_w1;
    }
    else {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      iVar3 = FUN_04f2d4e4(*(undefined4 *)(lVar5 + 0xa8));
      if (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) <= iVar3) goto LAB_04f37444;
      pPVar6 = (PlantGroup *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      cVar2 = PlantGroup::Empty(pPVar6);
      if (cVar2 != '\0') goto LAB_04f37444;
      pPVar6 = (PlantGroup *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      PlantGroup::GetTopPlant(pPVar6);
      this = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      cVar2 = Plant::CanBeRangeTargeted(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      if (cVar2 == '\0') goto LAB_04f37444;
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_40);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_38);
      uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      PlantGroup::GetPlantAtLayer(aRStack_30,uVar4,0);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_38,(RtWeakPtr *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_38);
      if (bVar1) {
        pcVar7 = *(code **)(*(long *)param_1 + 0xa0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)a_Stack_38);
        cVar2 = (*pcVar7)(param_1,aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        if (cVar2 != '\0') {
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)a_Stack_40,(RtWeakPtr *)a_Stack_38);
        }
      }
      uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      PlantGroup::GetPlantAtLayer(aRStack_30,uVar4,1);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_38,(RtWeakPtr *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_38);
      if (bVar1) {
        pcVar7 = *(code **)(*(long *)param_1 + 0xa0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)a_Stack_38);
        cVar2 = (*pcVar7)(param_1,aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        if (cVar2 != '\0') {
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)a_Stack_40,(RtWeakPtr *)a_Stack_38);
        }
      }
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_40);
      if (bVar1) {
        std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)in_x8,
                   (RtWeakPtr *)a_Stack_40);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
      iVar3 = extraout_w1_00;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar3);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSpawnActionDefinition::sortPlants(std::vector<Sexy::RtWeakPtr<Plant>,
   std::allocator<Sexy::RtWeakPtr<Plant> > >, ZombieWithActions*) const */

void __thiscall
ZombieSpawnActionDefinition::sortPlants
          (undefined8 param_1,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2,_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(param_2);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(param_2);
  puVar3 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_3);
  __gnu_cxx::__ops::_Iter_comp_val<DistFromSorter>::_Iter_comp_val
            (*puVar3,puVar3[1],puVar3[2],&local_18);
  FUN_04f38380(local_18,local_14,local_10,uVar1,uVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSpawnActionDefinition::sortZombies(std::vector<Sexy::RtWeakPtr<Zombie>,
   std::allocator<Sexy::RtWeakPtr<Zombie> > >, ZombieWithActions*) const */

void __thiscall
ZombieSpawnActionDefinition::sortZombies
          (undefined8 param_1,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2,_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(param_2);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(param_2);
  puVar3 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_3);
  __gnu_cxx::__ops::_Iter_comp_val<DistFromSorter>::_Iter_comp_val
            (*puVar3,puVar3[1],puVar3[2],&local_18);
  FUN_04f38704(local_18,local_14,local_10,uVar1,uVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04f389f0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieSpawnActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void __thiscall
ZombieSpawnActionDefinition::TryStartAction
          (ZombieSpawnActionDefinition *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieWithActions::QueueAction<ZombieSpawnActionHandler>
            ((ZombieWithActions *)this,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSpawnActionDefinition::FindTargetZombies(ZombieWithActions*) const */

void ZombieSpawnActionDefinition::FindTargetZombies(ZombieWithActions *param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  Zombie *pZVar9;
  ZombieCarnieMagicianArtifact *pZVar10;
  RtObject *in_x1;
  code *pcVar11;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_50;
  undefined8 local_48;
  Point aPStack_40 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  if ((in_x1 == (RtObject *)0x0) ||
     (bVar1 = Sexy::RtObject::IsA<ZombieCarnieMagicianArtifact>(in_x1), !bVar1)) {
    uVar3 = 0;
    EntityFinder::GetEntitiesOnBoard(avStack_38,2);
  }
  else {
    iVar4 = SharkMinion::getRow((SharkMinion *)in_x1);
    iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
    Sexy::Insets::Insets((Insets *)aRStack_20,0,iVar4,iVar5,1);
    EntityFinder::GetEntitiesInGridSquares(avStack_38,2,(Insets *)aRStack_20);
    pZVar10 = Sexy::RtObject::Cast<ZombieCarnieMagicianArtifact>(in_x1);
    uVar3 = FUN_04f2d4dc(pZVar10[0x861]);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_38);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_38);
  Sexy::Point::Point(aPStack_40,0,0);
  EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
            ((BoardEntitySorter_ClosestByColumn *)aRStack_20,aPStack_40);
  std::
  sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_ClosestByColumn>
            (uVar6,uVar7,aRStack_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_38);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1) {
    puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    if ((((RealObject *)*puVar8 != (RealObject *)in_x1) &&
        (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)*puVar8,(RealObject *)in_x1),
        cVar2 != '\0')) &&
       (pZVar9 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar8), pZVar9 != (Zombie *)0x0)) {
      pcVar11 = *(code **)(*(long *)param_1 + 0xa8);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aPStack_40);
      cVar2 = (*pcVar11)(param_1,aRStack_20,uVar3);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_40);
      if (cVar2 != '\0') {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aPStack_40);
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)in_x8,
                   (RtWeakPtr *)aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_40)
        ;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  pcVar11 = *(code **)(*(long *)param_1 + 0xb8);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)aRStack_20,
             (vector *)in_x8);
  (*pcVar11)(param_1,aRStack_20);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)aRStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

