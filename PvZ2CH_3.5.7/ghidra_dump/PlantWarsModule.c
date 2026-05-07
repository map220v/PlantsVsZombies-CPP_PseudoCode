// Class: PlantWarsModule


/* PlantWarsModule::onLoadComplete() */

void PlantWarsModule::onLoadComplete(void)

{
  return;
}


/* PlantWarsModule::onGameplayEnded() */

void __thiscall PlantWarsModule::onGameplayEnded(PlantWarsModule *this)

{
  this[0x1c] = (PlantWarsModule)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsModule::StaticClassInit() */

void PlantWarsModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWarsModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04d8f904,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsModule::StaticGetClass() */

long * PlantWarsModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantWarsModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsModule::~PlantWarsModule() */

void __thiscall PlantWarsModule::~PlantWarsModule(PlantWarsModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_069babb0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* PlantWarsModule::~PlantWarsModule() */

void __thiscall PlantWarsModule::~PlantWarsModule(PlantWarsModule *this)

{
  ~PlantWarsModule(this);
  AK::FreeHook(this);
  return;
}


/* PlantWarsModule::PlantWarsModule() */

void __thiscall PlantWarsModule::PlantWarsModule(PlantWarsModule *this)

{
  undefined4 uVar1;
  
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_069babb0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  this[0x1c] = (PlantWarsModule)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}


/* PlantWarsModule::StaticNew() */

PlantWarsModule * PlantWarsModule::StaticNew(void)

{
  PlantWarsModule *this;
  
  this = ::operator_new(0x30);
  PlantWarsModule(this);
  return this;
}


/* PlantWarsModule::GetCountDownTime() */

void PlantWarsModule::GetCountDownTime(void)

{
  long in_x0;
  undefined1 auVar1 [16];
  
  auVar1 = PVZ_T();
  TimeUtil::GetTimeCountdownFormat((TimeUtil *)auVar1,*(undefined4 *)(in_x0 + 0x18),1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsModule::onUpdate() */

void __thiscall PlantWarsModule::onUpdate(PlantWarsModule *this)

{
  bool bVar1;
  undefined8 extraout_x0;
  float fVar2;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1c] == (PlantWarsModule)0x0) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x28));
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
      nop();
      GetCountDownTime();
      ChallengePlantWarsTimedEventUI::SetString(extraout_x0,auStack_10);
      FUN_05476c50(auStack_10);
    }
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0x18) < fVar2) {
      this[0x1c] = (PlantWarsModule)0x1;
      PlantWarsUtils::SetResultType(2);
      Board::PlayerWon(*(Board **)(gLawnApp + 0x9f0));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsModule::postInitialize() */

void PlantWarsModule::postInitialize(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  FUN_04d8ce38(lVar1 + 0x118);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsModule::gameplayStarted() */

void __thiscall PlantWarsModule::gameplayStarted(PlantWarsModule *this)

{
  undefined4 uVar1;
  UIWidget *pUVar2;
  ResourceInfo *this_00;
  long extraout_x0;
  ResilienceTutorialIntroProperties *pRVar3;
  long lVar4;
  undefined8 uVar5;
  string *extraout_x1;
  string *extraout_x1_00;
  float fVar6;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIPowerupHolder");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  Sexy::RtName::RtName((RtName *)asStack_18,L"UIPlantWarsBoardZombieDetails");
  UIWidget::CreateWidget(asStack_18,1);
  Sexy::RtName::~RtName((RtName *)asStack_18);
  std::string::string(asStack_18,"UIGemBank");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIChangeSpeedButton");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_20,extraout_x1);
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  std::string::~string(asStack_20);
  nop();
  if (this_00 != (ResourceInfo *)0x0) {
    UIWidget::SetVisible((UIWidget *)this_00,true);
  }
  std::string::string(asStack_20,"UISunBank");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_20,extraout_x1_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  std::string::~string(asStack_20);
  nop();
  if (extraout_x0 != 0) {
    FUN_04d8ce28(extraout_x0 + 0x179);
  }
  Sexy::RtName::RtName((RtName *)asStack_18,L"UIPlantWarsTimedEventTimer");
  UIWidget::CreateWidget(asStack_18,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28),(RtWeakPtrBase *)asStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
  Sexy::RtName::~RtName((RtName *)asStack_18);
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  fVar6 = (float)PVZ_T();
  *(float *)(this + 0x18) = fVar6 + *(float *)(pRVar3 + 0x40);
  lVar4 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  FUN_05475d88(asStack_20,lVar4 + 0xb0);
  FUN_05475d88(asStack_18,asStack_20);
  uVar1 = PlantWarsUtils::CalcNodeType(asStack_18);
  *(undefined4 *)(this + 0x20) = uVar1;
  std::string::~string(asStack_18);
  lVar4 = Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  FUN_04d8ce30(lVar4 + 0x11c);
  uVar5 = Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  FUN_05475d88(asStack_18,asStack_20);
  PlantWarsNetworkMgr::SetCurrentLevel(uVar5,asStack_18);
  std::string::~string(asStack_18);
  lVar4 = Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  PVZ_T();
  FUN_04d8c390(lVar4 + 0x120);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsModule::registerForEvents() */

void __thiscall PlantWarsModule::registerForEvents(PlantWarsModule *this)

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
  Sexy::Delegate0::Delegate0<PlantWarsModule,void(PlantWarsModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<PlantWarsModule,void(PlantWarsModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<PlantWarsModule,void(PlantWarsModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar1,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<PlantWarsModule,void(PlantWarsModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

