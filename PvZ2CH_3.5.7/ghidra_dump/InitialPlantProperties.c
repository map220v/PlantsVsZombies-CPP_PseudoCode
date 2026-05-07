// Class: InitialPlantProperties


/* InitialPlantProperties::GetModuleClass() const */

long * InitialPlantProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (InitialPlantPlacer::sClass != (long *)0x0) {
    return InitialPlantPlacer::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  InitialPlantPlacer::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"InitialPlantPlacer",uVar2,InitialPlantPlacer::StaticNew);
  InitialPlantPlacer::StaticClassInit();
  return InitialPlantPlacer::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InitialPlantProperties::StaticClassInit() */

void InitialPlantProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPlacementProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_0435a284,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"InitialPlantProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_0435a6d0,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InitialPlantProperties::StaticGetClass() */

long * InitialPlantProperties::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"InitialPlantProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InitialPlantProperties::GetClass() const */

long * InitialPlantProperties::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"InitialPlantProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InitialPlantProperties::InitialPlantProperties() */

void __thiscall InitialPlantProperties::InitialPlantProperties(InitialPlantProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_068349d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  this[0x58] = (InitialPlantProperties)0x0;
  return;
}


/* InitialPlantProperties::StaticNew() */

InitialPlantProperties * InitialPlantProperties::StaticNew(void)

{
  InitialPlantProperties *this;
  
  this = ::operator_new(0x60);
  InitialPlantProperties(this);
  return this;
}


/* InitialPlantProperties::~InitialPlantProperties() */

void __thiscall InitialPlantProperties::~InitialPlantProperties(InitialPlantProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_068349d0;
  std::vector<PlantPlacementProperties,std::allocator<PlantPlacementProperties>>::~vector
            ((vector<PlantPlacementProperties,std::allocator<PlantPlacementProperties>> *)
             (this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* InitialPlantProperties::~InitialPlantProperties() */

void __thiscall InitialPlantProperties::~InitialPlantProperties(InitialPlantProperties *this)

{
  ~InitialPlantProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InitialPlantProperties::GatherResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) const */

void __thiscall
InitialPlantProperties::GatherResourceRequirements(InitialPlantProperties *this,set *param_1)

{
  bool bVar1;
  ResilienceEntity *pRVar2;
  string *psVar3;
  long *plVar4;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  pair<std::string_const,Sexy::PILifeValueTable> apStack_20 [16];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_40 = FUN_0435a1e4(*(undefined8 *)(this + 0x40));
  local_38 = FUN_0435a234(*(undefined8 *)(this + 0x48));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    pRVar2 = (ResilienceEntity *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    ResilienceEntity::ResilienceEntity((ResilienceEntity *)apStack_20,pRVar2);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    (**(code **)(*plVar4 + 0x48))(plVar4,param_1);
    if (local_10 == 6) {
      std::string::string(asStack_28,"FrostbiteIceBlockPlantGroup");
      std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
                ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
                 asStack_28);
      std::string::~string(asStack_28);
      nop();
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_20);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_40);
  }
  std::string::string((string *)apStack_20,"FrostbiteHeatGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             (string *)apStack_20);
  std::string::~string((string *)apStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

