// Class: InitialZombieProperties


/* InitialZombieProperties::GetModuleClass() const */

long * InitialZombieProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (InitialZombiePlacer::sClass != (long *)0x0) {
    return InitialZombiePlacer::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  InitialZombiePlacer::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"InitialZombiePlacer",uVar2,InitialZombiePlacer::StaticNew);
  InitialZombiePlacer::StaticClassInit();
  return InitialZombiePlacer::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InitialZombieProperties::StaticClassInit() */

void InitialZombieProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePlacementProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_0435cf54,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"InitialZombieProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_0435d338,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InitialZombieProperties::StaticGetClass() */

long * InitialZombieProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"InitialZombieProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InitialZombieProperties::GetClass() const */

long * InitialZombieProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"InitialZombieProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InitialZombieProperties::InitialZombieProperties() */

void __thiscall InitialZombieProperties::InitialZombieProperties(InitialZombieProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06834cf0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* InitialZombieProperties::StaticNew() */

InitialZombieProperties * InitialZombieProperties::StaticNew(void)

{
  InitialZombieProperties *this;
  
  this = ::operator_new(0x58);
  InitialZombieProperties(this);
  return this;
}


/* InitialZombieProperties::~InitialZombieProperties() */

void __thiscall InitialZombieProperties::~InitialZombieProperties(InitialZombieProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06834cf0;
  std::vector<ZombiePlacementProperties,std::allocator<ZombiePlacementProperties>>::~vector
            ((vector<ZombiePlacementProperties,std::allocator<ZombiePlacementProperties>> *)
             (this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* InitialZombieProperties::~InitialZombieProperties() */

void __thiscall InitialZombieProperties::~InitialZombieProperties(InitialZombieProperties *this)

{
  ~InitialZombieProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InitialZombieProperties::GatherResourceRequirements(std::set<std::string, std::less<std::string
   >, std::allocator<std::string > >&) const */

void __thiscall
InitialZombieProperties::GatherResourceRequirements(InitialZombieProperties *this,set *param_1)

{
  bool bVar1;
  ResilienceEntity *pRVar2;
  string *psVar3;
  ZombieType *this_00;
  char *__s;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  pair<std::string_const,Sexy::PILifeValueTable> apStack_20 [20];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_40 = FUN_0435ceb4(*(undefined8 *)(this + 0x40));
  local_38 = FUN_0435cf04(*(undefined8 *)(this + 0x48));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar1) {
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pRVar2 = (ResilienceEntity *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    ResilienceEntity::ResilienceEntity((ResilienceEntity *)apStack_20,pRVar2);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
    this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    ZombieType::AddInGameResourceRequirements(this_00,param_1);
    __s = "FrostbiteIceBlockZombieGroup";
    if (local_c == 0x27) {
LAB_0435d784:
      std::string::string(asStack_28,__s);
      std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
                ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
                 asStack_28);
      std::string::~string(asStack_28);
      nop();
    }
    else if (local_c == 0x2c) {
      __s = "BirthdayPresentZombieGroup";
      goto LAB_0435d784;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_20);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_40);
  } while( true );
}

