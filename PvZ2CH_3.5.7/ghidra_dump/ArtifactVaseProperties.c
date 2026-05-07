// Class: ArtifactVaseProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactVaseProperties::StaticClassInit() */

void ArtifactVaseProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactVaseConfigProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_03725494,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ArtifactVaseProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_037628d4,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactVaseProperties::StaticGetClass() */

long * ArtifactVaseProperties::StaticGetClass(void)

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
  uVar2 = ArtifactProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactVaseProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactVaseProperties::GetClass() const */

long * ArtifactVaseProperties::GetClass(void)

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
  uVar2 = ArtifactProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactVaseProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactVaseProperties::ArtifactVaseProperties() */

void __thiscall ArtifactVaseProperties::ArtifactVaseProperties(ArtifactVaseProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0668b340;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x150));
  DVec3::DVec3((DVec3 *)(this + 0x158));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x180));
  *(undefined4 *)(this + 0x1a0) = 10;
  *(undefined4 *)(this + 0x19c) = 0x3f800000;
  *(undefined4 *)(this + 0x198) = 0x42a00000;
  return;
}


/* ArtifactVaseProperties::StaticNew() */

ArtifactVaseProperties * ArtifactVaseProperties::StaticNew(void)

{
  ArtifactVaseProperties *this;
  
  this = ::operator_new(0x1a8);
  ArtifactVaseProperties(this);
  return this;
}


/* ArtifactVaseProperties::~ArtifactVaseProperties() */

void __thiscall ArtifactVaseProperties::~ArtifactVaseProperties(ArtifactVaseProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0668b340;
  std::vector<ArtifactVaseConfigProperties,std::allocator<ArtifactVaseConfigProperties>>::~vector
            ((vector<ArtifactVaseConfigProperties,std::allocator<ArtifactVaseConfigProperties>> *)
             (this + 0x180));
  std::vector<ArtifactVaseConfigProperties,std::allocator<ArtifactVaseConfigProperties>>::~vector
            ((vector<ArtifactVaseConfigProperties,std::allocator<ArtifactVaseConfigProperties>> *)
             (this + 0x168));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x150));
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactVaseProperties::~ArtifactVaseProperties() */

void __thiscall ArtifactVaseProperties::~ArtifactVaseProperties(ArtifactVaseProperties *this)

{
  ~ArtifactVaseProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactVaseProperties::GatherResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) const */

void __thiscall
ArtifactVaseProperties::GatherResourceRequirements(ArtifactVaseProperties *this,set *param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  string *psVar4;
  long *plVar5;
  ZombieType *pZVar6;
  int iVar7;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"VaseBreakerGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  local_20 = FUN_03747fe8(*(undefined8 *)(this + 0x168));
  local_18 = FUN_03748038(*(undefined8 *)(this + 0x170));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    lVar3 = FUN_05474184();
    if (lVar3 != 0) {
      iVar7 = *(int *)(lVar2 + 8);
      if (iVar7 == 0) {
        psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
        (**(code **)(*plVar5 + 0x48))(plVar5,param_1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
        lVar3 = FUN_05474184(lVar2);
        if (lVar3 == 0) goto LAB_03780978;
        iVar7 = *(int *)(lVar2 + 8);
      }
      if (iVar7 == 1) {
        psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
        ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
        pZVar6 = (ZombieType *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
        ZombieType::AddInGameResourceRequirements(pZVar6,param_1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
      }
    }
LAB_03780978:
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_20);
  }
  local_20 = FUN_03747fe8(*(undefined8 *)(this + 0x180));
  local_18 = FUN_03748038(*(undefined8 *)(this + 0x188));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
    if (!bVar1) {
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    lVar3 = FUN_05474184();
    if (lVar3 != 0) {
      iVar7 = *(int *)(lVar2 + 8);
      if (iVar7 == 0) {
        psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
        (**(code **)(*plVar5 + 0x48))(plVar5,param_1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
        lVar3 = FUN_05474184(lVar2);
        if (lVar3 == 0) goto LAB_03780a3c;
        iVar7 = *(int *)(lVar2 + 8);
      }
      if (iVar7 == 1) {
        psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
        ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
        pZVar6 = (ZombieType *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
        ZombieType::AddInGameResourceRequirements(pZVar6,param_1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
      }
    }
LAB_03780a3c:
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_20);
  } while( true );
}

