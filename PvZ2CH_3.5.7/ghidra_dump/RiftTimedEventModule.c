// Class: RiftTimedEventModule


/* RiftTimedEventModule::onNotifyRiftPostEndPlay() */

void __thiscall RiftTimedEventModule::onNotifyRiftPostEndPlay(RiftTimedEventModule *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = uVar1;
  return;
}


/* RiftTimedEventModule::onGameplayEnded() */

void __thiscall RiftTimedEventModule::onGameplayEnded(RiftTimedEventModule *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = uVar1;
  return;
}


/* RiftTimedEventModule::onReachMaxInterval() */

void RiftTimedEventModule::onReachMaxInterval(void)

{
  char cVar1;
  LawnApp *this;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this = gLawnApp;
  cVar1 = LawnApp::IsPauseMenuOpen(gLawnApp);
  if (cVar1 != '\0') {
    LawnApp::KillNewOptionsDialog(this);
    this = gLawnApp;
  }
  (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),0);
  Board::Quit(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftTimedEventModule::StaticClassInit() */

void RiftTimedEventModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftTimedEventModule");
    (*pcVar2)(plVar1,asStack_10,FUN_0371d4bc,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftTimedEventModule::StaticGetClass() */

long * RiftTimedEventModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftTimedEventModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftTimedEventModule::~RiftTimedEventModule() */

void __thiscall RiftTimedEventModule::~RiftTimedEventModule(RiftTimedEventModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0668a450;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* RiftTimedEventModule::~RiftTimedEventModule() */

void __thiscall RiftTimedEventModule::~RiftTimedEventModule(RiftTimedEventModule *this)

{
  ~RiftTimedEventModule(this);
  AK::FreeHook(this);
  return;
}


/* RiftTimedEventModule::RiftTimedEventModule() */

void __thiscall RiftTimedEventModule::RiftTimedEventModule(RiftTimedEventModule *this)

{
  undefined4 uVar1;
  
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0668a450;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  this[0x20] = (RiftTimedEventModule)0x0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = uVar1;
  return;
}


/* RiftTimedEventModule::StaticNew() */

RiftTimedEventModule * RiftTimedEventModule::StaticNew(void)

{
  RiftTimedEventModule *this;
  
  this = ::operator_new(0x30);
  RiftTimedEventModule(this);
  return this;
}


/* RiftTimedEventModule::updateLevelTimerUI() */

void __thiscall RiftTimedEventModule::updateLevelTimerUI(RiftTimedEventModule *this)

{
  bool bVar1;
  ToxicWaterPerfumeBottleProjectile *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x18));
  if (!bVar1) {
    return;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  nop();
  ToxicWaterPerfumeBottleProjectile::SetType(this_00,(int)*(float *)(this + 0x24));
  return;
}


/* RiftTimedEventModule::initLevelTimer() */

void __thiscall RiftTimedEventModule::initLevelTimer(RiftTimedEventModule *this)

{
  bool bVar1;
  ToxicWaterPerfumeBottleProjectile *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x18));
  if (!bVar1) {
    return;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  nop();
  ToxicWaterPerfumeBottleProjectile::SetType(this_00,(int)*(float *)(this + 0x24));
  return;
}


/* RiftTimedEventModule::onGameplayStarted() */

void __thiscall RiftTimedEventModule::onGameplayStarted(RiftTimedEventModule *this)

{
  bool bVar1;
  UIWidget *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x18));
  if (bVar1) {
    this_00 = (UIWidget *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
    UIWidget::SetVisible(this_00,true);
  }
  initLevelTimer(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftTimedEventModule::Initialize(float) */

void RiftTimedEventModule::Initialize(float param_1)

{
  RiftTimedEventModule *in_x0;
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UIRiftTimedEventTimer");
  UIWidget::CreateWidget(aRStack_18,0);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(in_x0 + 0x18),(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  initLevelTimer(in_x0);
  lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  FUN_03719f20(lVar1 + 0x5c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftTimedEventModule::onLoadComplete() */

void RiftTimedEventModule::onLoadComplete(void)

{
  Initialize(0.0);
  return;
}


/* RiftTimedEventModule::onGameplayRealUpdate() */

void __thiscall RiftTimedEventModule::onGameplayRealUpdate(RiftTimedEventModule *this)

{
  char cVar1;
  float fVar2;
  
  cVar1 = FUN_0371959c(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x887));
  if (cVar1 != '\0') {
    if (this[0x20] == (RiftTimedEventModule)0x0) {
      this[0x20] = (RiftTimedEventModule)0x1;
      MessageRouter::Broadcast((_func_void *)gMessageRouter);
      fVar2 = (float)PVZ_RealT();
      *(float *)(this + 0x2c) = fVar2 + 15.0;
    }
    fVar2 = (float)PVZ_RealDt();
    *(float *)(this + 0x24) = *(float *)(this + 0x24) + fVar2;
    updateLevelTimerUI(this);
    fVar2 = (float)PVZ_RealT();
    if (*(float *)(this + 0x2c) <= fVar2) {
      MessageRouter::Broadcast((_func_void *)gMessageRouter);
      fVar2 = (float)PVZ_RealT();
      *(float *)(this + 0x2c) = fVar2 + 15.0;
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftTimedEventModule::onNotifyReachMaxInterval() */

void __thiscall RiftTimedEventModule::onNotifyReachMaxInterval(RiftTimedEventModule *this)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x20] != (RiftTimedEventModule)0x0) {
    (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),1);
    this_00 = gLawnApp;
    FUN_05478178(awStack_58,L"[RIFT_REACH_MAX_INTERVAL_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[RIFT_REACH_MAX_INTERVAL_TEXT]",auStack_60);
    pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onReachMaxInterval);
    Sexy::Delegate0::Delegate0<RiftTimedEventModule,void(RiftTimedEventModule::*)()>
              (aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftTimedEventModule::registerForEvents() */

void __thiscall RiftTimedEventModule::registerForEvents(RiftTimedEventModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<RiftTimedEventModule,void(RiftTimedEventModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<RiftTimedEventModule,void(RiftTimedEventModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<RiftTimedEventModule,void(RiftTimedEventModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayRealUpdate);
  Sexy::Delegate0::Delegate0<RiftTimedEventModule,void(RiftTimedEventModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayRealUpdate(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyReachMaxInterval);
  Sexy::Delegate0::Delegate0<RiftTimedEventModule,void(RiftTimedEventModule::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyReachMaxInterval,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRiftPostEndPlay);
  Sexy::Delegate0::Delegate0<RiftTimedEventModule,void(RiftTimedEventModule::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyRiftPostEndPlay,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

