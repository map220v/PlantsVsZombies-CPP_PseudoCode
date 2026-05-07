// Class: HeroPlantIntroModule


/* HeroPlantIntroModule::CloseIntroWidget() */

void __thiscall HeroPlantIntroModule::CloseIntroWidget(HeroPlantIntroModule *this)

{
  if (*(long *)(this + 0x20) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x20));
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x20));
    *(undefined8 *)(this + 0x20) = 0;
    (**(code **)(*(long *)gLawnApp[0x13e] + 800))((long *)gLawnApp[0x13e],0);
  }
  LocalProfileSaveData::SetHeroPlantArmorflameIntroStatus(true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantIntroModule::StaticClassInit() */

void HeroPlantIntroModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeroPlantIntroModule");
    (*pcVar2)(plVar1,asStack_10,FUN_042bb254,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeroPlantIntroModule::StaticGetClass() */

long * HeroPlantIntroModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HeroPlantIntroModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeroPlantIntroModule::HeroPlantIntroModule() */

void __thiscall HeroPlantIntroModule::HeroPlantIntroModule(HeroPlantIntroModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  this[0x18] = (HeroPlantIntroModule)0x0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_0682c070;
  return;
}


/* HeroPlantIntroModule::StaticNew() */

HeroPlantIntroModule * HeroPlantIntroModule::StaticNew(void)

{
  HeroPlantIntroModule *this;
  
  this = ::operator_new(0x28);
  HeroPlantIntroModule(this);
  return this;
}


/* HeroPlantIntroModule::~HeroPlantIntroModule() */

void __thiscall HeroPlantIntroModule::~HeroPlantIntroModule(HeroPlantIntroModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0682c070;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* HeroPlantIntroModule::~HeroPlantIntroModule() */

void __thiscall HeroPlantIntroModule::~HeroPlantIntroModule(HeroPlantIntroModule *this)

{
  ~HeroPlantIntroModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantIntroModule::ShowIntroWidget(Sexy::RtWeakPtr<Plant>) */

void __thiscall
HeroPlantIntroModule::ShowIntroWidget(HeroPlantIntroModule *this,RtWeakPtrBase *param_2)

{
  HeroPlantIntroWidget *pHVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x20) == 0) {
    pHVar1 = ::operator_new(0xf0);
    memset(pHVar1,0,0xf0);
    HeroPlantIntroWidget::HeroPlantIntroWidget(pHVar1);
    *(HeroPlantIntroWidget **)(this + 0x20) = pHVar1;
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),pHVar1);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x20));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x20));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x20));
    pHVar1 = *(HeroPlantIntroWidget **)(this + 0x20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    HeroPlantIntroWidget::Init(pHVar1,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantIntroModule::OnHeroPlantGradeUp(Plant*, int) */

void HeroPlantIntroModule::OnHeroPlantGradeUp(Plant *param_1,int param_2)

{
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x18] == (Plant)0x0) {
    param_1[0x18] = (Plant)0x1;
    (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0));
    lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    FUN_042ba734(lVar1 + 0x34);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    ShowIntroWidget((HeroPlantIntroModule *)param_1,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantIntroModule::registerForEvents() */

void __thiscall HeroPlantIntroModule::registerForEvents(HeroPlantIntroModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CloseIntroWidget);
  Sexy::Delegate0::Delegate0<HeroPlantIntroModule,void(HeroPlantIntroModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnHeroPlantGradeUp);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<Plant*,int,Sexy::CBMemberTranslatorX<HeroPlantIntroModule,void(HeroPlantIntroModule::*)(Plant*,int)>>
            ((MessageRouter *)puVar1,Message::HeroPlantGradeUp,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CloseIntroWidget);
  Sexy::Delegate0::Delegate0<HeroPlantIntroModule,void(HeroPlantIntroModule::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::CloseIntroWidget,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

