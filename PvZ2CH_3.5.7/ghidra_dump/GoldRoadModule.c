// Class: GoldRoadModule


/* GoldRoadModule::onGameplayStarted() */

void GoldRoadModule::onGameplayStarted(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldRoadModule::StaticClassInit() */

void GoldRoadModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"GoldRoadModule");
    (*pcVar2)(plVar1,asStack_10,FUN_044a7490,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GoldRoadModule::StaticGetClass() */

long * GoldRoadModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GoldRoadModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GoldRoadModule::GoldRoadModule() */

void __thiscall GoldRoadModule::GoldRoadModule(GoldRoadModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06852560;
  return;
}


/* GoldRoadModule::StaticNew() */

GoldRoadModule * GoldRoadModule::StaticNew(void)

{
  GoldRoadModule *this;
  
  this = ::operator_new(0x18);
  GoldRoadModule(this);
  return this;
}


/* GoldRoadModule::~GoldRoadModule() */

void __thiscall GoldRoadModule::~GoldRoadModule(GoldRoadModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06852560;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* GoldRoadModule::~GoldRoadModule() */

void __thiscall GoldRoadModule::~GoldRoadModule(GoldRoadModule *this)

{
  ~GoldRoadModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldRoadModule::onLoadComplete() */

void GoldRoadModule::onLoadComplete(void)

{
  GoldRoadRegion *pGVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = Board::AddRegion<GoldRoadRegion>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::Insets::Insets(aIStack_18,0,0,9,1);
  BoardRegion::SetRegionFromGridSquares((BoardRegion *)pGVar1,(TRect *)aIStack_18);
  pGVar1 = Board::AddRegion<GoldRoadRegion>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::Insets::Insets(aIStack_18,0,4,9,1);
  BoardRegion::SetRegionFromGridSquares((BoardRegion *)pGVar1,(TRect *)aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldRoadModule::addBackgroundToRenderQueue(RenderQueue*) */

void __thiscall
GoldRoadModule::addBackgroundToRenderQueue(GoldRoadModule *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,renderRunBackground);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<GoldRoadModule,void(GoldRoadModule::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,0x186a1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GoldRoadModule::renderRunBackground(Sexy::Graphics*) */

void __thiscall GoldRoadModule::renderRunBackground(GoldRoadModule *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  
  pIVar3 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)
                               IMAGE_BACKGROUNDS_LOSTCITY_EARTH_FLOOR);
  iVar1 = FUN_044a701c(0xc4);
  iVar2 = FUN_044a701c(0x98);
  Sexy::Graphics::DrawImage(param_1,pIVar3,iVar1,iVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldRoadModule::registerForEvents() */

void __thiscall GoldRoadModule::registerForEvents(GoldRoadModule *this)

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
  Sexy::Delegate0::Delegate0<GoldRoadModule,void(GoldRoadModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<GoldRoadModule,void(GoldRoadModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addBackgroundToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::Delegate1<GoldRoadModule,void(GoldRoadModule::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,aCStack_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

