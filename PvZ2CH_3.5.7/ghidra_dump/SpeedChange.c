// Class: SpeedChange


/* SpeedChange::onInitialized() */

void __thiscall SpeedChange::onInitialized(SpeedChange *this)

{
  char cVar1;
  PlayerInfo *pPVar2;
  
  pPVar2 = (PlayerInfo *)ProfileUtils::Profile();
  if (((pPVar2 != (PlayerInfo *)0x0) &&
      (cVar1 = PlayerInfo::GameFeatureIsUnlocked(pPVar2,3), cVar1 != '\0')) &&
     (cVar1 = PlayerInfo::GameFeatureIsUnlocked(pPVar2,0x21), cVar1 == '\0')) {
    PlayerInfo::UnlockGameFeature(pPVar2,0x21);
    this[0x163] = (SpeedChange)0x0;
    return;
  }
  this[0x163] = (SpeedChange)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpeedChange::StaticClassInit() */

void SpeedChange::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpeedChange");
    (*pcVar2)(plVar1,asStack_10,FUN_04466bd8,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpeedChange::StaticGetClass() */

long * SpeedChange::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"SpeedChange",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpeedChange::GetClass() const */

long * SpeedChange::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"SpeedChange",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpeedChange::SpeedChange() */

void __thiscall SpeedChange::SpeedChange(SpeedChange *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  this[0x163] = (SpeedChange)0x0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined ***)this = &PTR_GetClass_0684cf70;
  *(undefined ***)(this + 0x10) = &PTR__SpeedChange_0684d110;
  return;
}


/* SpeedChange::StaticNew() */

SpeedChange * SpeedChange::StaticNew(void)

{
  SpeedChange *this;
  
  this = ::operator_new(0x170);
  SpeedChange(this);
  return this;
}


/* SpeedChange::onCancel() */

void SpeedChange::onCancel(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    LawnApp::ResumeMusic(gLawnApp);
    (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),0);
  }
  return;
}


/* SpeedChange::onRechargeNow() */

void SpeedChange::onRechargeNow(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    LawnApp::ResumeMusic(gLawnApp);
    (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),0);
  }
  LawnApp::ShowCoinStore(gLawnApp,2);
  return;
}


/* SpeedChange::onGameplayEnded() */

void __thiscall SpeedChange::onGameplayEnded(SpeedChange *this)

{
  UIWidget::SetClickable((UIWidget *)this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpeedChange::~SpeedChange() */

void __thiscall SpeedChange::~SpeedChange(SpeedChange *this)

{
  char cVar1;
  long *plVar2;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0684cf70;
  *(undefined ***)(this + 0x10) = &PTR__SpeedChange_0684d110;
  if (*(long *)(this + 0x168) != 0) {
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 != '\0') {
      ToolPacketData::GetProps();
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      (**(code **)(*plVar2 + 0x48))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    *(undefined8 *)(this + 0x168) = 0;
  }
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIWidget::~UIWidget((UIWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to SpeedChange::~SpeedChange() */

void __thiscall SpeedChange::~SpeedChange(SpeedChange *this)

{
  ~SpeedChange(this + -0x10);
  return;
}


/* SpeedChange::~SpeedChange() */

void __thiscall SpeedChange::~SpeedChange(SpeedChange *this)

{
  ~SpeedChange(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SpeedChange::~SpeedChange() */

void __thiscall SpeedChange::~SpeedChange(SpeedChange *this)

{
  ~SpeedChange(this + -0x10);
  return;
}


/* SpeedChange::updateState_Ready() */

void __thiscall SpeedChange::updateState_Ready(SpeedChange *this)

{
  long *plVar1;
  code *pcVar2;
  
  if ((this[0x163] != (SpeedChange)0x0) &&
     (plVar1 = *(long **)(this + 0x168), plVar1 != (long *)0x0)) {
    pcVar2 = *(code **)(*plVar1 + 0x80);
    PVZ_RealT();
    (*pcVar2)(plVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpeedChange::onGameStart() */

void __thiscall SpeedChange::onGameStart(SpeedChange *this)

{
  Board *pBVar1;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x163] != (SpeedChange)0x0) {
    pBVar1 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(auStack_10,L"[CHANGE_SPEED_TUTORIAL]",auStack_18);
    Board::DisplayAdvice(pBVar1,auStack_10,0xe,0);
    FUN_05476c50(auStack_10);
    nop();
    MessageRouter::Post<int,TutorialEvent>((MessageRouter *)gMessageRouter,Message::TutorialFTUE,5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpeedChange::OnMouseUp(int, int) */

void SpeedChange::OnMouseUp(int param_1,int param_2)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)((ulong)(uint)param_1 + 0x168) != 0) {
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 != '\0') {
      ToolPacketData::GetProps();
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      (**(code **)(*plVar3 + 0x48))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    *(undefined8 *)((ulong)(uint)param_1 + 0x168) = 0;
    MessageRouter::Post<int,TutorialEvent>((MessageRouter *)gMessageRouter,Message::TutorialFTUE,6);
  }
  lVar2 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  fVar4 = (float)FUN_04466a2c(*(undefined4 *)(lVar2 + 0x30));
  fVar5 = 2.0;
  if (fVar4 != 1.0) {
    fVar5 = 1.0;
  }
  MessageRouter::Post<float,float>((_func_void_float *)gMessageRouter,fVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpeedChange::registerForEvents() */

void __thiscall SpeedChange::registerForEvents(SpeedChange *this)

{
  undefined *this_00;
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    pLVar1 = (LevelModuleManager *)
             FUN_04466a38(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if (pLVar1 != (LevelModuleManager *)0x0) {
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onGameStart);
      Sexy::Delegate0::Delegate0<SpeedChange,void(SpeedChange::*)()>(aDStack_38,aCStack_50);
      LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
    }
  }
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<SpeedChange,void(SpeedChange::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::GameplayEnded,aDStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpeedChange::Draw(Sexy::Graphics*) */

void __thiscall SpeedChange::Draw(SpeedChange *this,Graphics *param_1)

{
  long lVar1;
  Image *pIVar2;
  long *plVar3;
  float fVar4;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  fVar4 = (float)FUN_04466a2c(*(undefined4 *)(lVar1 + 0x30));
  if (fVar4 == 1.0) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09a38;
  }
  else {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09b08;
  }
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  Sexy::Graphics::DrawImage(param_1,pIVar2,0,0);
  if ((this[0x163] != (SpeedChange)0x0) &&
     (plVar3 = *(long **)(this + 0x168), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x98))(plVar3,param_1);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to SpeedChange::Draw(Sexy::Graphics*) */

void __thiscall SpeedChange::Draw(SpeedChange *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

