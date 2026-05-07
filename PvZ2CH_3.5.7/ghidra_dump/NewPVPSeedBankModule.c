// Class: NewPVPSeedBankModule


/* NewPVPSeedBankModule::onDraw(Sexy::Graphics*) */

void NewPVPSeedBankModule::onDraw(Graphics *param_1)

{
  return;
}


/* NewPVPSeedBankModule::onPlantShoveled(Plant*) */

void NewPVPSeedBankModule::onPlantShoveled(Plant *param_1)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPSeedBankModule::StaticClassInit() */

void NewPVPSeedBankModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPSeedBankModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03525514,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPSeedBankModule::StaticGetClass() */

long * NewPVPSeedBankModule::StaticGetClass(void)

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
  uVar2 = SeedBankModule::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPSeedBankModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPSeedBankModule::closePlantUpgradeWidget() */

void __thiscall NewPVPSeedBankModule::closePlantUpgradeWidget(NewPVPSeedBankModule *this)

{
  UIUtil::CloseDialog(*(Widget **)(this + 0x50));
  return;
}


/* NewPVPSeedBankModule::onLevelEnded() */

void __thiscall NewPVPSeedBankModule::onLevelEnded(NewPVPSeedBankModule *this)

{
  UIUtil::CloseDialog(*(Widget **)(this + 0x50));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPSeedBankModule::onGameStarted() */

void __thiscall NewPVPSeedBankModule::onGameStarted(NewPVPSeedBankModule *this)

{
  UIWidget *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIPlantfood");
  this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (this_00 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_00,false);
  }
  Sexy::RtName::RtName((RtName *)asStack_18,L"UINewPVPSeedBank");
  UIWidget::CreateWidget(asStack_18,0);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName((RtName *)asStack_18);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x30),(RtWeakPtr *)aRStack_28);
  Sexy::RtName::RtName((RtName *)asStack_18,L"UINewPVPTopZombieQueue");
  UIWidget::CreateWidget(asStack_18,0);
  Sexy::RtName::~RtName((RtName *)asStack_18);
  Sexy::RtName::RtName((RtName *)asStack_18,L"UINewPVPSunIncreaseBank");
  UIWidget::CreateWidget(asStack_18,0);
  Sexy::RtName::~RtName((RtName *)asStack_18);
  Sexy::RtName::RtName((RtName *)asStack_18,L"UINewPVPSurrenderButton");
  UIWidget::CreateWidget(asStack_18,0);
  Sexy::RtName::~RtName((RtName *)asStack_18);
  Sexy::RtName::RtName((RtName *)asStack_18,L"UINewPVPReportButton");
  UIWidget::CreateWidget(asStack_18,0);
  Sexy::RtName::~RtName((RtName *)asStack_18);
  Sexy::RtName::RtName((RtName *)asStack_18,L"UINewPVPZombieUpgradeSkillBank");
  UIWidget::CreateWidget(asStack_18,0);
  Sexy::RtName::~RtName((RtName *)asStack_18);
  Sexy::RtName::RtName((RtName *)asStack_18,L"UINewPVPRoundBank");
  UIWidget::CreateWidget(asStack_18,0);
  Sexy::RtName::~RtName((RtName *)asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPSeedBankModule::onAddToRenderQueue(RenderQueue*) */

void __thiscall
NewPVPSeedBankModule::onAddToRenderQueue(NewPVPSeedBankModule *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDraw);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<NewPVPSeedBankModule,void(NewPVPSeedBankModule::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,0x186a2,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPSeedBankModule::NewPVPSeedBankModule() */

void __thiscall NewPVPSeedBankModule::NewPVPSeedBankModule(NewPVPSeedBankModule *this)

{
  SeedBankModule::SeedBankModule((SeedBankModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0664ee20;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  *(undefined8 *)(this + 0x50) = 0;
  return;
}


/* NewPVPSeedBankModule::StaticNew() */

NewPVPSeedBankModule * NewPVPSeedBankModule::StaticNew(void)

{
  NewPVPSeedBankModule *this;
  
  this = ::operator_new(0x58);
  NewPVPSeedBankModule(this);
  return this;
}


/* NewPVPSeedBankModule::~NewPVPSeedBankModule() */

void __thiscall NewPVPSeedBankModule::~NewPVPSeedBankModule(NewPVPSeedBankModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0664ee20;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  SeedBankModule::~SeedBankModule((SeedBankModule *)this);
  return;
}


/* NewPVPSeedBankModule::~NewPVPSeedBankModule() */

void __thiscall NewPVPSeedBankModule::~NewPVPSeedBankModule(NewPVPSeedBankModule *this)

{
  ~NewPVPSeedBankModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPSeedBankModule::registerForEvents() */

void __thiscall NewPVPSeedBankModule::registerForEvents(NewPVPSeedBankModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate1<RenderQueue*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SeedBankModule::registerForEvents((SeedBankModule *)this);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAddToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::
  Delegate1<NewPVPSeedBankModule,void(NewPVPSeedBankModule::*)(RenderQueue*)>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantShoveled);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<NewPVPSeedBankModule,void(NewPVPSeedBankModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantShoveled,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyUpgradePlant);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<NewPVPSeedBankModule,void(NewPVPSeedBankModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::NotifyUpgradePlant,&local_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPSeedBankModule::onNotifyUpgradePlant(Plant*) */

void NewPVPSeedBankModule::onNotifyUpgradePlant(Plant *param_1)

{
  NewPVPPlantUpgradeBehavior *this;
  LevelEditorPlantRare *pLVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = ::operator_new(0x110);
  NewPVPPlantUpgradeBehavior::NewPVPPlantUpgradeBehavior(this);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
  NewPVPPlantUpgradeBehavior::Init(this,aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  pLVar1 = (LevelEditorPlantRare *)LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this,true);
  *(LevelEditorPlantRare **)(param_1 + 0x50) = pLVar1;
  FUN_0351e404(afStack_28,param_1);
  LevelEditorPlantRare::SetCallBack(pLVar1,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

