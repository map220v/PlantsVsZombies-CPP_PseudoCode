// Class: WestStage


/* WestStage::WestStage() */

void __thiscall WestStage::WestStage(WestStage *this)

{
  StageModule::StageModule((StageModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06857730;
  return;
}


/* WestStage::StaticNew() */

WestStage * WestStage::StaticNew(void)

{
  WestStage *this;
  
  this = ::operator_new(0xe8);
  WestStage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WestStage::StaticClassInit() */

void WestStage::StaticClassInit(void)

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
    std::string::string(asStack_10,"WestStage");
    (*pcVar2)(plVar1,asStack_10,FUN_0450b5e8,0xe8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WestStage::StaticGetClass() */

long * WestStage::StaticGetClass(void)

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
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"WestStage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WestStage::stopZombieGroans() */

void WestStage::stopZombieGroans(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Stop_Zomb_WildWest_Chicken_Vox_Cluck");
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Stop_Zomb_WildWest_Pancho_Vox");
  StageModule::stopZombieGroans();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WestStage::onZombieTypeCountChange(Sexy::RtWeakPtr<ZombieType const>, int, int) */

void __thiscall
WestStage::onZombieTypeCountChange(WestStage *this,RtWeakPtrBase *param_2,int param_3,int param_4)

{
  char cVar1;
  string *psVar2;
  char *pcVar3;
  string asStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  StageModule::onZombieTypeCountChange((StageModule *)this,aRStack_10,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_18,"chicken");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  nop();
  if (cVar1 == '\0') {
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_18,"poncho_plate");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    std::string::~string(asStack_18);
    nop();
    if (cVar1 == '\0') goto LAB_0450b8ec;
    if ((0 < param_3) && (param_4 < 1)) goto LAB_0450b980;
  }
  else {
    if ((0 < param_3) && (param_4 < 1)) {
      pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar3,"Stop_Zomb_WildWest_Chicken_Vox_Cluck");
      psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      std::string::string(asStack_18,"poncho_plate");
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
      cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      std::string::~string(asStack_18);
      nop();
      if (cVar1 == '\0') goto LAB_0450b8ec;
LAB_0450b980:
      pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar3,"Stop_Zomb_WildWest_Pancho_Vox");
      goto LAB_0450b8ec;
    }
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_18,"poncho_plate");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    std::string::~string(asStack_18);
    nop();
    if (cVar1 == '\0') goto LAB_0450b8ec;
  }
  if ((param_3 == 0) && (0 < param_4)) {
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_Zomb_WildWest_Pancho_Vox");
  }
LAB_0450b8ec:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WestStage::~WestStage() */

void __thiscall WestStage::~WestStage(WestStage *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06857730;
  StageModule::~StageModule((StageModule *)this);
  return;
}


/* WestStage::~WestStage() */

void __thiscall WestStage::~WestStage(WestStage *this)

{
  ~WestStage(this);
  AK::FreeHook(this);
  return;
}

