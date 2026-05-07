// Class: BowlingMinigameModule


/* BowlingMinigameModule::onDraw(Sexy::Graphics*) */

void BowlingMinigameModule::onDraw(Graphics *param_1)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingMinigameModule::disableUI() */

void BowlingMinigameModule::disableUI(void)

{
  UIWidget *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIPlantfood");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  std::string::string(asStack_10,"UIShovel");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingMinigameModule::StaticClassInit() */

void BowlingMinigameModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"BowlingMinigameModule");
    (*pcVar2)(plVar1,asStack_10,FUN_0484885c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BowlingMinigameModule::StaticGetClass() */

long * BowlingMinigameModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BowlingMinigameModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BowlingMinigameModule::BowlingMinigameModule() */

void __thiscall BowlingMinigameModule::BowlingMinigameModule(BowlingMinigameModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_0690a6f0;
  return;
}


/* BowlingMinigameModule::StaticNew() */

BowlingMinigameModule * BowlingMinigameModule::StaticNew(void)

{
  BowlingMinigameModule *this;
  
  this = ::operator_new(0x20);
  BowlingMinigameModule(this);
  return this;
}


/* BowlingMinigameModule::~BowlingMinigameModule() */

void __thiscall BowlingMinigameModule::~BowlingMinigameModule(BowlingMinigameModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0690a6f0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* BowlingMinigameModule::~BowlingMinigameModule() */

void __thiscall BowlingMinigameModule::~BowlingMinigameModule(BowlingMinigameModule *this)

{
  ~BowlingMinigameModule(this);
  AK::FreeHook(this);
  return;
}


/* BowlingMinigameModule::initializeModule() */

void __thiscall BowlingMinigameModule::initializeModule(BowlingMinigameModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(pRVar1 + 0x40);
  return;
}


/* BowlingMinigameModule::postInitialize() */

void __thiscall BowlingMinigameModule::postInitialize(BowlingMinigameModule *this)

{
  int iVar1;
  HighTideSign *pHVar2;
  
  pHVar2 = GameObject::Create<HighTideSign>();
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  HighTideSign::Initialize((HighTideSign *)(float)((iVar1 - *(int *)(this + 0x18)) + -1),pHVar2,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingMinigameModule::addToRenderQueue(RenderQueue*) */

void __thiscall
BowlingMinigameModule::addToRenderQueue(BowlingMinigameModule *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDraw);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<BowlingMinigameModule,void(BowlingMinigameModule::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,0x61a81,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingMinigameModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
BowlingMinigameModule::AddResourceRequirements(BowlingMinigameModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  std::string::string(asStack_10,"PlantBowlingBulb");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingMinigameModule::gatherPlantlessPlantingRestrictions(Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
BowlingMinigameModule::gatherPlantlessPlantingRestrictions
          (BowlingMinigameModule *this,Point *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x18) < *(int *)param_1) {
    local_c = 0x3c;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
               (PlantingReason *)&local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingMinigameModule::registerForEvents() */

void __thiscall BowlingMinigameModule::registerForEvents(BowlingMinigameModule *this)

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
  Delegate1<RenderQueue*> aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gatherPlantlessPlantingRestrictions);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<BowlingMinigameModule,void(BowlingMinigameModule::*)(Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantlessPlantingRestrictions,&local_90);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::
  Delegate1<BowlingMinigameModule,void(BowlingMinigameModule::*)(RenderQueue*)>
            (aDStack_38,aCStack_68);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,disableUI);
  Sexy::Delegate0::Delegate0<BowlingMinigameModule,void(BowlingMinigameModule::*)()>
            ((Delegate0 *)aDStack_38,aCStack_68);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

