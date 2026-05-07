// Class: RiftThemeModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeModule::StaticClassInit() */

void RiftThemeModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03715330,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeModule::StaticGetClass() */

long * RiftThemeModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeModule::RiftThemeModule() */

void __thiscall RiftThemeModule::RiftThemeModule(RiftThemeModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_066898b0;
  return;
}


/* RiftThemeModule::StaticNew() */

RiftThemeModule * RiftThemeModule::StaticNew(void)

{
  RiftThemeModule *this;
  
  this = ::operator_new(0x18);
  RiftThemeModule(this);
  return this;
}


/* RiftThemeModule::~RiftThemeModule() */

void __thiscall RiftThemeModule::~RiftThemeModule(RiftThemeModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066898b0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* RiftThemeModule::~RiftThemeModule() */

void __thiscall RiftThemeModule::~RiftThemeModule(RiftThemeModule *this)

{
  ~RiftThemeModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeModule::initializeThemes() */

void RiftThemeModule::initializeThemes(void)

{
  bool bVar1;
  _Head_base *p_Var2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  long *extraout_x0;
  code *pcVar6;
  _Head_base<1ul,Sexy::RtWeakPtr<PlantType_const>,false> a_Stack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<RiftThemeMgr>::GetInstance();
  RiftThemeMgr::GetThemeList();
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    p_Var2 = (_Head_base *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    std::_Head_base<1ul,Sexy::RtWeakPtr<PlantType_const>,false>::_Head_base(a_Stack_40,p_Var2);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
    pcVar4 = (char *)FUN_0547429c(lVar3 + 0x18);
    uVar5 = Sexy::RtClass::StaticGetClassNamed(pcVar4);
    GameObject::Create(uVar5,0x82);
    nop();
    pcVar6 = *(code **)(*extraout_x0 + 0x78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)a_Stack_40);
    (*pcVar6)(extraout_x0,aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    (**(code **)(*extraout_x0 + 0x80))(extraout_x0);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)a_Stack_40);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<ThemeData,std::allocator<ThemeData>>::~vector
            ((vector<ThemeData,std::allocator<ThemeData>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeModule::onInit() */

void RiftThemeModule::onInit(void)

{
  bool bVar1;
  _Head_base *p_Var2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  long *extraout_x0;
  code *pcVar6;
  _Head_base<1ul,Sexy::RtWeakPtr<PlantType_const>,false> a_Stack_40 [8];
  undefined8 uStack_38;
  undefined8 uStack_30;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Sexy::LazySingleton<RiftThemeMgr>::GetInstance();
  RiftThemeMgr::GetThemeList();
  uStack_38 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(avStack_20);
  uStack_30 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&uStack_38,(__normal_iterator *)&uStack_30), bVar1)
  {
    p_Var2 = (_Head_base *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_38);
    std::_Head_base<1ul,Sexy::RtWeakPtr<PlantType_const>,false>::_Head_base(a_Stack_40,p_Var2);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
    pcVar4 = (char *)FUN_0547429c(lVar3 + 0x18);
    uVar5 = Sexy::RtClass::StaticGetClassNamed(pcVar4);
    GameObject::Create(uVar5,0x82);
    nop();
    pcVar6 = *(code **)(*extraout_x0 + 0x78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)a_Stack_40);
    (*pcVar6)(extraout_x0,aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    (**(code **)(*extraout_x0 + 0x80))(extraout_x0);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)a_Stack_40);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&uStack_38);
  }
  std::vector<ThemeData,std::allocator<ThemeData>>::~vector
            ((vector<ThemeData,std::allocator<ThemeData>> *)avStack_20);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeModule::registerForEvents() */

void __thiscall RiftThemeModule::registerForEvents(RiftThemeModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onInit);
  Sexy::Delegate0::Delegate0<RiftThemeModule,void(RiftThemeModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLevelInit(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

