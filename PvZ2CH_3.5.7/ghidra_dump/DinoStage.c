// Class: DinoStage


/* DinoStage::DinoStage() */

void __thiscall DinoStage::DinoStage(DinoStage *this)

{
  StageModule::StageModule((StageModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06762c30;
  return;
}


/* DinoStage::StaticNew() */

DinoStage * DinoStage::StaticNew(void)

{
  DinoStage *this;
  
  this = ::operator_new(0xe8);
  DinoStage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoStage::StaticClassInit() */

void DinoStage::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinoStage");
    (*pcVar2)(plVar1,asStack_10,FUN_03d026ac,0xe8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinoStage::StaticGetClass() */

long * DinoStage::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DinoStage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoStage::addForegroundToRenderQueue(RenderQueue*) */

void __thiscall DinoStage::addForegroundToRenderQueue(DinoStage *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,renderForeground);
  Sexy::Delegate1<Sexy::Graphics*>::Delegate1<DinoStage,void(DinoStage::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,500000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinoStage::renderForeground(Sexy::Graphics*) */

void __thiscall DinoStage::renderForeground(DinoStage *this,Graphics *param_1)

{
  Image *pIVar1;
  float fVar2;
  float fVar3;
  
  pIVar1 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad5898);
  fVar2 = (float)FUN_03d022f8(0x443a2000);
  fVar3 = (float)FUN_03d022f8(0x439f0000);
  Sexy::Graphics::DrawImage(param_1,pIVar1,(int)fVar2,(int)fVar3);
  return;
}


/* DinoStage::~DinoStage() */

void __thiscall DinoStage::~DinoStage(DinoStage *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06762c30;
  StageModule::~StageModule((StageModule *)this);
  return;
}


/* DinoStage::~DinoStage() */

void __thiscall DinoStage::~DinoStage(DinoStage *this)

{
  ~DinoStage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoStage::registerForEvents() */

void __thiscall DinoStage::registerForEvents(DinoStage *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<RenderQueue*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StageModule::registerForEvents((StageModule *)this);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addForegroundToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::Delegate1<DinoStage,void(DinoStage::*)(RenderQueue*)>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

