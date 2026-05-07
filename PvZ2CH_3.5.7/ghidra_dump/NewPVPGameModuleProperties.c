// Class: NewPVPGameModuleProperties


/* NewPVPGameModuleProperties::GetModuleClass() const */

long * NewPVPGameModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (NewPVPGameModule::sClass != (long *)0x0) {
    return NewPVPGameModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  NewPVPGameModule::sClass = plVar1;
  uVar2 = ScaledBoardModule::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPGameModule",uVar2,NewPVPGameModule::StaticNew);
  NewPVPGameModule::StaticClassInit();
  return NewPVPGameModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameModuleProperties::StaticClassInit() */

void NewPVPGameModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPGameModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_034c9804,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPGameModuleProperties::StaticGetClass() */

long * NewPVPGameModuleProperties::StaticGetClass(void)

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
  uVar2 = ScaledBoardModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPGameModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPGameModuleProperties::GetClass() const */

long * NewPVPGameModuleProperties::GetClass(void)

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
  uVar2 = ScaledBoardModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPGameModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPGameModuleProperties::NewPVPGameModuleProperties() */

void __thiscall
NewPVPGameModuleProperties::NewPVPGameModuleProperties(NewPVPGameModuleProperties *this)

{
  ScaledBoardModuleProperties::ScaledBoardModuleProperties((ScaledBoardModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06647060;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  return;
}


/* NewPVPGameModuleProperties::StaticNew() */

NewPVPGameModuleProperties * NewPVPGameModuleProperties::StaticNew(void)

{
  NewPVPGameModuleProperties *this;
  
  this = ::operator_new(0x60);
  NewPVPGameModuleProperties(this);
  return this;
}


/* NewPVPGameModuleProperties::~NewPVPGameModuleProperties() */

void __thiscall
NewPVPGameModuleProperties::~NewPVPGameModuleProperties(NewPVPGameModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06647060;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x48));
  ScaledBoardModuleProperties::~ScaledBoardModuleProperties((ScaledBoardModuleProperties *)this);
  return;
}


/* NewPVPGameModuleProperties::~NewPVPGameModuleProperties() */

void __thiscall
NewPVPGameModuleProperties::~NewPVPGameModuleProperties(NewPVPGameModuleProperties *this)

{
  ~NewPVPGameModuleProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameModuleProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
NewPVPGameModuleProperties::GatherResourceRequirements
          (NewPVPGameModuleProperties *this,set *param_1)

{
  bool bVar1;
  _Head_base *p_Var2;
  long *plVar3;
  _Head_base<1ul,Sexy::RtWeakPtr<PlantType_const>,false> a_Stack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModuleProperties::GatherResourceRequirements((LevelModuleProperties *)this,param_1);
  Sexy::LazySingleton<NewPVPMgr>::GetInstance();
  NewPVPMgr::GetAreaList();
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    p_Var2 = (_Head_base *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    std::_Head_base<1ul,Sexy::RtWeakPtr<PlantType_const>,false>::_Head_base(a_Stack_38,p_Var2);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
    (**(code **)(*plVar3 + 0x78))(plVar3,param_1);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)a_Stack_38);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::string::string((string *)&local_28,"UI_New_PVP_Effect");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             (string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  std::string::string((string *)&local_28,"UI_Rank_Avatar");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             (string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  std::string::string((string *)&local_28,"PlantImitaterAudio");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             (string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  std::string::string((string *)&local_28,"PlantSunflower");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             (string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  std::string::string((string *)&local_28,"UI_GameIntro");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             (string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  std::string::string((string *)&local_28,"FrostbiteHeatGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             (string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  std::string::string((string *)&local_28,"UI_SeedPackets_2");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             (string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  std::vector<AreaData,std::allocator<AreaData>>::~vector
            ((vector<AreaData,std::allocator<AreaData>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

