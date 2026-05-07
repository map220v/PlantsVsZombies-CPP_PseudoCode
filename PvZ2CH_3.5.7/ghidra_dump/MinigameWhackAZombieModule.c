// Class: MinigameWhackAZombieModule


/* MinigameWhackAZombieModule::unregisterForEvents() */

void __thiscall MinigameWhackAZombieModule::unregisterForEvents(MinigameWhackAZombieModule *this)

{
  LawnApp::UnregisterBoardTouchGameplayObject(gLawnApp,this);
  return;
}


/* MinigameWhackAZombieModule::onLevelLoaded() */

void MinigameWhackAZombieModule::onLevelLoaded(void)

{
  return;
}


/* MinigameWhackAZombieModule::onUpdate() */

void MinigameWhackAZombieModule::onUpdate(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MinigameWhackAZombieModule::StaticClassInit() */

void MinigameWhackAZombieModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"MinigameWhackAZombieModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04a0f3c0,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MinigameWhackAZombieModule::StaticGetClass() */

long * MinigameWhackAZombieModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MinigameWhackAZombieModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MinigameWhackAZombieModule::gameplayStarted() */

void __thiscall MinigameWhackAZombieModule::gameplayStarted(MinigameWhackAZombieModule *this)

{
  UIWidget *this_00;
  UIWidget *this_01;
  RtName aRStack_18 [16];
  long local_8;
  
  *(undefined4 *)(this + 0x48) = 2;
  *(undefined4 *)(this + 0x4c) = 0;
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UIWhackHammer");
  UIWidget::CreateWidget(aRStack_18,0);
  Sexy::RtName::~RtName(aRStack_18);
  std::string::string((string *)aRStack_18,"UIWhackHammer");
  UIWidget::GetWidgetBySheetName((string *)aRStack_18);
  nop();
  std::string::~string((string *)aRStack_18);
  nop();
  UIWidget::SetVisible(this_00,true);
  std::string::string((string *)aRStack_18,"UIShovel");
  this_01 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)aRStack_18);
  std::string::~string((string *)aRStack_18);
  nop();
  if (this_01 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_01,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MinigameWhackAZombieModule::OnWhackOccurred(bool) */

void MinigameWhackAZombieModule::OnWhackOccurred(bool param_1)

{
  int iVar1;
  LevelModule *this;
  ResilienceTutorialIntroProperties *pRVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 uVar5;
  
  this = (LevelModule *)(ulong)param_1;
  *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + 1;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>(this);
  iVar1 = *(int *)(this + 0x48);
  if (0 < iVar1) {
    uVar5 = *(undefined8 *)(pRVar2 + 0x48);
    uVar3 = FUN_04a0cfe0(uVar5,*(undefined8 *)(pRVar2 + 0x50));
    if (((ulong)(long)iVar1 <= uVar3) &&
       (piVar4 = (int *)FUN_04a0cfec(uVar5,iVar1), *piVar4 < *(int *)(this + 0x4c))) {
      *(undefined4 *)(this + 0x4c) = 0;
      *(int *)(this + 0x48) = iVar1 + -1;
    }
  }
  return;
}


/* MinigameWhackAZombieModule::onTouchEvent(Sexy::Touch const&) */

undefined8 __thiscall
MinigameWhackAZombieModule::onTouchEvent(MinigameWhackAZombieModule *this,Touch *param_1)

{
  if (*(int *)(param_1 + 0x30) == 0) {
    OnWhackOccurred(SUB81(this,0));
  }
  return 0;
}


/* MinigameWhackAZombieModule::GetHammerHitValue() */

undefined4 __thiscall
MinigameWhackAZombieModule::GetHammerHitValue(MinigameWhackAZombieModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  undefined4 *puVar2;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  puVar2 = (undefined4 *)FUN_04a0cff4(*(undefined8 *)(pRVar1 + 0x60),(long)*(int *)(this + 0x48));
  return *puVar2;
}


/* MinigameWhackAZombieModule::MinigameWhackAZombieModule() */

void __thiscall
MinigameWhackAZombieModule::MinigameWhackAZombieModule(MinigameWhackAZombieModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0692ddc0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* MinigameWhackAZombieModule::StaticNew() */

MinigameWhackAZombieModule * MinigameWhackAZombieModule::StaticNew(void)

{
  MinigameWhackAZombieModule *this;
  
  this = ::operator_new(0x50);
  MinigameWhackAZombieModule(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04a0ea8c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* MinigameWhackAZombieModule::OnZombieAddedToBoard(Zombie*) */

void __thiscall
MinigameWhackAZombieModule::OnZombieAddedToBoard(MinigameWhackAZombieModule *this,Zombie *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::GetComponentRunner((BoardEntity *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_20);
  std::string::string(asStack_10,"");
  ComponentRunner::Add<ComponentZombieWhackTouch>((ComponentRunner *)this,aRStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MinigameWhackAZombieModule::~MinigameWhackAZombieModule() */

void __thiscall
MinigameWhackAZombieModule::~MinigameWhackAZombieModule(MinigameWhackAZombieModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0692ddc0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x30));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x18));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* MinigameWhackAZombieModule::~MinigameWhackAZombieModule() */

void __thiscall
MinigameWhackAZombieModule::~MinigameWhackAZombieModule(MinigameWhackAZombieModule *this)

{
  ~MinigameWhackAZombieModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MinigameWhackAZombieModule::onPuddleSpawned(BoardEntity*) */

void MinigameWhackAZombieModule::onPuddleSpawned(BoardEntity *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::push_back
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (param_1 + 0x18),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MinigameWhackAZombieModule::reserveNewPuddle() */

void __thiscall MinigameWhackAZombieModule::reserveNewPuddle(MinigameWhackAZombieModule *this)

{
  int iVar1;
  RtWeakPtr *pRVar2;
  
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x30));
  iVar1 = FUN_04a0cffc(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
  iVar1 = Sexy::Rand(iVar1);
  pRVar2 = (RtWeakPtr *)FUN_04a0d008(*(undefined8 *)(this + 0x18),(long)iVar1);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::push_back
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x30),pRVar2);
  return;
}


/* MinigameWhackAZombieModule::ReserveNewZombiePuddles() */

void __thiscall
MinigameWhackAZombieModule::ReserveNewZombiePuddles(MinigameWhackAZombieModule *this)

{
  int iVar1;
  RtWeakPtr *pRVar2;
  
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x30));
  iVar1 = FUN_04a0cffc(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
  iVar1 = Sexy::Rand(iVar1);
  pRVar2 = (RtWeakPtr *)FUN_04a0d008(*(undefined8 *)(this + 0x18),(long)iVar1);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::push_back
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x30),pRVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MinigameWhackAZombieModule::registerForEvents() */

void __thiscall MinigameWhackAZombieModule::registerForEvents(MinigameWhackAZombieModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  Board *pBVar3;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_b8 [8];
  CBMemberTranslatorX aCStack_b0 [24];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<MinigameWhackAZombieModule,void(MinigameWhackAZombieModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<MinigameWhackAZombieModule,void(MinigameWhackAZombieModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelLoaded);
  Sexy::Delegate0::Delegate0<MinigameWhackAZombieModule,void(MinigameWhackAZombieModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPuddleSpawned);
  local_d0 = local_88;
  local_e0 = local_98;
  uStack_d8 = uStack_90;
  MessageRouter::
  Subscribe<BoardEntity*,Sexy::CBMemberTranslatorX<MinigameWhackAZombieModule,void(MinigameWhackAZombieModule::*)(BoardEntity*)>>
            ((MessageRouter *)puVar1,Message::PuddleSpawned,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnZombieAddedToBoard);
  local_100 = local_80;
  uStack_f8 = uStack_78;
  local_f0 = local_70;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<MinigameWhackAZombieModule,void(MinigameWhackAZombieModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_100);
  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTouchEvent);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<MinigameWhackAZombieModule,bool(MinigameWhackAZombieModule::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_b0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_b8);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Board::RegisterTouchGameplayObject(pBVar3,aDStack_68,0,a_Stack_b8,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

