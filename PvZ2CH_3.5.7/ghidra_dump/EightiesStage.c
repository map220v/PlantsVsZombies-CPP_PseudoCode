// Class: EightiesStage


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EightiesStage::StaticClassInit() */

void EightiesStage::StaticClassInit(void)

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
    std::string::string(asStack_10,"EightiesStage");
    (*pcVar2)(plVar1,asStack_10,FUN_03d01e9c,0xf8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EightiesStage::StaticGetClass() */

long * EightiesStage::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EightiesStage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EightiesStage::EightiesStage() */

void __thiscall EightiesStage::EightiesStage(EightiesStage *this)

{
  StageModule::StageModule((StageModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06762900;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe8));
  JamListener::JamListener((JamListener *)(this + 0xf0));
  return;
}


/* EightiesStage::StaticNew() */

EightiesStage * EightiesStage::StaticNew(void)

{
  EightiesStage *this;
  
  this = ::operator_new(0xf8);
  EightiesStage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EightiesStage::initializeModule() */

void __thiscall EightiesStage::initializeModule(EightiesStage *this)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StageModule::initializeModule((StageModule *)this);
  GameObject::Create<JamStageMechanic>();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xe8),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EightiesStage::StartMusic() */

void __thiscall EightiesStage::StartMusic(EightiesStage *this)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  char *pcVar3;
  void *pvVar4;
  undefined8 uVar5;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03d013ec(this[0xb9]);
  if (cVar1 != '\0') {
    pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    FUN_05475d88(asStack_20,pRVar2 + 0xb8);
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    pvVar4 = (void *)FUN_0547429c(asStack_20);
    AudioMgr::SetSwitch(pcVar3,"LevelStarted",pvVar4);
    StageModule::getMusicTypeForCurrentLevel((StageModule *)this);
    uVar5 = FUN_0547429c(asStack_18);
    Sexy::StrFormat("Music_%s",asStack_10,uVar5);
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    pvVar4 = (void *)FUN_0547429c(asStack_10);
    AudioMgr::SetSwitch(pcVar3,"Music_Type",pvVar4);
    LawnApp::PlayMusicCallback
              (gLawnApp,"Play_Music_World",(IInteractiveAudioCallbackListener *)(this + 0xf0));
    StageModule::setStageMusicState((StageModule *)this,1);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EightiesStage::~EightiesStage() */

void __thiscall EightiesStage::~EightiesStage(EightiesStage *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06762900;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  StageModule::~StageModule((StageModule *)this);
  return;
}


/* EightiesStage::~EightiesStage() */

void __thiscall EightiesStage::~EightiesStage(EightiesStage *this)

{
  ~EightiesStage(this);
  AK::FreeHook(this);
  return;
}

