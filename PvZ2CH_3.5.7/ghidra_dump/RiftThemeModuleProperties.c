// Class: RiftThemeModuleProperties


/* RiftThemeModuleProperties::GetModuleClass() const */

long * RiftThemeModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (RiftThemeModule::sClass != (long *)0x0) {
    return RiftThemeModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  RiftThemeModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeModule",uVar2,RiftThemeModule::StaticNew);
  RiftThemeModule::StaticClassInit();
  return RiftThemeModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeModuleProperties::StaticClassInit() */

void RiftThemeModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ThemeDisabledInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03715678,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RiftThemeModuleProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_03715914,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeModuleProperties::StaticGetClass() */

long * RiftThemeModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeModuleProperties::GetClass() const */

long * RiftThemeModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeModuleProperties::RiftThemeModuleProperties() */

void __thiscall
RiftThemeModuleProperties::RiftThemeModuleProperties(RiftThemeModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06689960;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  return;
}


/* RiftThemeModuleProperties::StaticNew() */

RiftThemeModuleProperties * RiftThemeModuleProperties::StaticNew(void)

{
  RiftThemeModuleProperties *this;
  
  this = ::operator_new(0x70);
  RiftThemeModuleProperties(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeModuleProperties::GatherResourceRequirements(std::set<std::string, std::less<std::string
   >, std::allocator<std::string > >&) const */

void __thiscall
RiftThemeModuleProperties::GatherResourceRequirements(RiftThemeModuleProperties *this,set *param_1)

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
  Sexy::LazySingleton<RiftThemeMgr>::GetInstance();
  RiftThemeMgr::GetThemeList();
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
  std::vector<ThemeData,std::allocator<ThemeData>>::~vector
            ((vector<ThemeData,std::allocator<ThemeData>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeModuleProperties::~RiftThemeModuleProperties() */

void __thiscall
RiftThemeModuleProperties::~RiftThemeModuleProperties(RiftThemeModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06689960;
  std::vector<ThemeDisabledInfo,std::allocator<ThemeDisabledInfo>>::~vector
            ((vector<ThemeDisabledInfo,std::allocator<ThemeDisabledInfo>> *)(this + 0x58));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* RiftThemeModuleProperties::~RiftThemeModuleProperties() */

void __thiscall
RiftThemeModuleProperties::~RiftThemeModuleProperties(RiftThemeModuleProperties *this)

{
  ~RiftThemeModuleProperties(this);
  AK::FreeHook(this);
  return;
}

