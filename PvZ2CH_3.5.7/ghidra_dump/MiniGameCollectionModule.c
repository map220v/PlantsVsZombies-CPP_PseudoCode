// Class: MiniGameCollectionModule


/* MiniGameCollectionModule::onUpdate() */

void MiniGameCollectionModule::onUpdate(void)

{
  return;
}


/* MiniGameCollectionModule::onLoadComplete() */

void MiniGameCollectionModule::onLoadComplete(void)

{
  return;
}


/* MiniGameCollectionModule::onGameplayEnded() */

void __thiscall MiniGameCollectionModule::onGameplayEnded(MiniGameCollectionModule *this)

{
  this[0x18] = (MiniGameCollectionModule)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionModule::StaticClassInit() */

void MiniGameCollectionModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGameCollectionModule");
    (*pcVar2)(plVar1,asStack_10,FUN_038b5ee8,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameCollectionModule::StaticGetClass() */

long * MiniGameCollectionModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MiniGameCollectionModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGameCollectionModule::~MiniGameCollectionModule() */

void __thiscall MiniGameCollectionModule::~MiniGameCollectionModule(MiniGameCollectionModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066b55e0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* MiniGameCollectionModule::~MiniGameCollectionModule() */

void __thiscall MiniGameCollectionModule::~MiniGameCollectionModule(MiniGameCollectionModule *this)

{
  ~MiniGameCollectionModule(this);
  AK::FreeHook(this);
  return;
}


/* MiniGameCollectionModule::MiniGameCollectionModule() */

void __thiscall MiniGameCollectionModule::MiniGameCollectionModule(MiniGameCollectionModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_066b55e0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  this[0x18] = (MiniGameCollectionModule)0x0;
  return;
}


/* MiniGameCollectionModule::StaticNew() */

MiniGameCollectionModule * MiniGameCollectionModule::StaticNew(void)

{
  MiniGameCollectionModule *this;
  
  this = ::operator_new(0x28);
  MiniGameCollectionModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionModule::registerForEvents() */

void __thiscall MiniGameCollectionModule::registerForEvents(MiniGameCollectionModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<MiniGameCollectionModule,void(MiniGameCollectionModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<MiniGameCollectionModule,void(MiniGameCollectionModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<MiniGameCollectionModule,void(MiniGameCollectionModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar1,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<MiniGameCollectionModule,void(MiniGameCollectionModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionModule::gameplayStarted() */

void MiniGameCollectionModule::gameplayStarted(void)

{
  UIWidget *this;
  ResourceInfo *this_00;
  long extraout_x0;
  long lVar1;
  string *extraout_x1;
  string *extraout_x1_00;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIGemBank");
  this = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this != (UIWidget *)0x0) {
    UIWidget::SetVisible(this,false);
  }
  std::string::string(asStack_18,"UIChangeSpeedButton");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_18,extraout_x1);
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (this_00 != (ResourceInfo *)0x0) {
    UIWidget::SetVisible((UIWidget *)this_00,true);
  }
  std::string::string(asStack_18,"UISunBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_18,extraout_x1_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (extraout_x0 != 0) {
    FUN_038b425c(extraout_x0 + 0x179);
  }
  lVar1 = Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
  PVZ_T();
  FUN_038b3914(lVar1 + 0xd4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

