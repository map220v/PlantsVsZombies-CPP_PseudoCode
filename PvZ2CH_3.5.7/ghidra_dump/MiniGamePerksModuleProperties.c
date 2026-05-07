// Class: MiniGamePerksModuleProperties


/* MiniGamePerksModuleProperties::GetModuleClass() const */

long * MiniGamePerksModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (MiniGamePerksModule::sClass != (long *)0x0) {
    return MiniGamePerksModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  MiniGamePerksModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerksModule",uVar2,MiniGamePerksModule::StaticNew);
  MiniGamePerksModule::StaticClassInit();
  return MiniGamePerksModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerksModuleProperties::StaticClassInit() */

void MiniGamePerksModuleProperties::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"MiniGamePerksModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0389b1c0,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerksModuleProperties::StaticGetClass() */

long * MiniGamePerksModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MiniGamePerksModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerksModuleProperties::GetClass() const */

long * MiniGamePerksModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"MiniGamePerksModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerksModuleProperties::MiniGamePerksModuleProperties() */

void __thiscall
MiniGamePerksModuleProperties::MiniGamePerksModuleProperties(MiniGamePerksModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066b15e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x58));
  return;
}


/* MiniGamePerksModuleProperties::StaticNew() */

MiniGamePerksModuleProperties * MiniGamePerksModuleProperties::StaticNew(void)

{
  MiniGamePerksModuleProperties *this;
  
  this = ::operator_new(0x88);
  MiniGamePerksModuleProperties(this);
  return this;
}


/* MiniGamePerksModuleProperties::~MiniGamePerksModuleProperties() */

void __thiscall
MiniGamePerksModuleProperties::~MiniGamePerksModuleProperties(MiniGamePerksModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066b15e0;
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)(this + 0x58));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* MiniGamePerksModuleProperties::~MiniGamePerksModuleProperties() */

void __thiscall
MiniGamePerksModuleProperties::~MiniGamePerksModuleProperties(MiniGamePerksModuleProperties *this)

{
  ~MiniGamePerksModuleProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerksModuleProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
MiniGamePerksModuleProperties::GatherResourceRequirements
          (MiniGamePerksModuleProperties *this,set *param_1)

{
  bool bVar1;
  GridItemPoolEntry *pGVar2;
  long *plVar3;
  undefined8 local_40;
  undefined8 local_38;
  GridItemPoolEntry aGStack_30 [16];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModuleProperties::GatherResourceRequirements((LevelModuleProperties *)this,param_1);
  Sexy::LazySingleton<MiniGamePerkMgr>::GetInstance();
  MiniGamePerkMgr::GetUnlockedPerkList();
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    pGVar2 = (GridItemPoolEntry *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    GridItemPoolEntry::GridItemPoolEntry(aGStack_30,pGVar2);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aGStack_30);
    (**(code **)(*plVar3 + 0x78))(plVar3,param_1);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aGStack_30);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_40);
  }
  std::string::string((string *)aGStack_30,"GameUpgrades");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             (string *)aGStack_30);
  std::string::~string((string *)aGStack_30);
  nop();
  std::string::string((string *)aGStack_30,"UI_PlantFamily");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             (string *)aGStack_30);
  std::string::~string((string *)aGStack_30);
  nop();
  std::string::string((string *)aGStack_30,"UI_PlantWars");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             (string *)aGStack_30);
  std::string::~string((string *)aGStack_30);
  nop();
  std::string::string((string *)aGStack_30,"TacticalCuke");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             (string *)aGStack_30);
  std::string::~string((string *)aGStack_30);
  nop();
  std::string::string((string *)aGStack_30,"UI_Images_VaseBreaker");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             (string *)aGStack_30);
  std::string::~string((string *)aGStack_30);
  nop();
  std::vector<MiniGamePerkData,std::allocator<MiniGamePerkData>>::~vector
            ((vector<MiniGamePerkData,std::allocator<MiniGamePerkData>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

