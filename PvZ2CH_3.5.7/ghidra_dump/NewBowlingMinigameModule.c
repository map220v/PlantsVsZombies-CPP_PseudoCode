// Class: NewBowlingMinigameModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewBowlingMinigameModule::StaticClassInit() */

void NewBowlingMinigameModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewBowlingMinigameModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04e09e9c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewBowlingMinigameModule::StaticGetClass() */

long * NewBowlingMinigameModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewBowlingMinigameModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewBowlingMinigameModule::NewBowlingMinigameModule() */

void __thiscall NewBowlingMinigameModule::NewBowlingMinigameModule(NewBowlingMinigameModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_069d3390;
  return;
}


/* NewBowlingMinigameModule::StaticNew() */

NewBowlingMinigameModule * NewBowlingMinigameModule::StaticNew(void)

{
  NewBowlingMinigameModule *this;
  
  this = ::operator_new(0x18);
  NewBowlingMinigameModule(this);
  return this;
}


/* NewBowlingMinigameModule::~NewBowlingMinigameModule() */

void __thiscall NewBowlingMinigameModule::~NewBowlingMinigameModule(NewBowlingMinigameModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_069d3390;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* NewBowlingMinigameModule::~NewBowlingMinigameModule() */

void __thiscall NewBowlingMinigameModule::~NewBowlingMinigameModule(NewBowlingMinigameModule *this)

{
  ~NewBowlingMinigameModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewBowlingMinigameModule::addForegroundToRenderQueue(RenderQueue*) */

void __thiscall
NewBowlingMinigameModule::addForegroundToRenderQueue
          (NewBowlingMinigameModule *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,renderForeground);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<NewBowlingMinigameModule,void(NewBowlingMinigameModule::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,0x24dd8,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewBowlingMinigameModule::renderForeground(Sexy::Graphics*) */

void __thiscall
NewBowlingMinigameModule::renderForeground(NewBowlingMinigameModule *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06b9d5e8);
  *(undefined4 *)(lVar5 + 0x3c) = 0x1ae;
  lVar5 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06b9d5e8);
  *(undefined4 *)(lVar5 + 0x38) = 10;
  iVar1 = FUN_04e09d54(0x184);
  iVar2 = FUN_04e09d54(0x96);
  iVar3 = FUN_04e09d54(10);
  iVar4 = FUN_04e09d54(400);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar6 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06b9d5e8);
  Draw3SliceImage(param_1,aIStack_18,uVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewBowlingMinigameModule::disableUI() */

void NewBowlingMinigameModule::disableUI(void)

{
  UIWidget *pUVar1;
  PowerupManager *this;
  string *psVar2;
  ResourceInfo *pRVar3;
  long lVar4;
  string asStack_18 [8];
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
  std::string::string(asStack_10,"UIPowerupHolder");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    this = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PowerupType>>::GetInstancePtr();
    std::string::string(asStack_18,"powerup_special_item_bowling");
    ObjectTypeDirectory<PowerupType>::GetTypeFromTypeName(psVar2);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_10);
    lVar4 = PowerupManager::GetBasePowerup(this,(PowerupType *)pRVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    std::string::~string(asStack_18);
    nop();
    if (lVar4 == 0) {
      UIWidget::SetVisible(pUVar1,false);
    }
    else {
      UIWidget::SetVisible(pUVar1,true);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewBowlingMinigameModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
NewBowlingMinigameModule::AddResourceRequirements(NewBowlingMinigameModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  std::string::string(asStack_10,"PlantWallnut");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantWallnutAudio");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantJackfruit");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantJackfruitAudio");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantExplodeONut");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantExplodeONutAudio");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantPotatomineAudio");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"NewBowling");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"NewBowling");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"MiniGameBowlingAudio");
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
/* NewBowlingMinigameModule::onGatherPlantlessPlantingRestrictions(Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
NewBowlingMinigameModule::onGatherPlantlessPlantingRestrictions
          (NewBowlingMinigameModule *this,Point *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (2 < *(int *)param_1) {
    local_c = 0x3d;
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
/* NewBowlingMinigameModule::registerForEvents() */

void __thiscall NewBowlingMinigameModule::registerForEvents(NewBowlingMinigameModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,disableUI);
  Sexy::Delegate0::Delegate0<NewBowlingMinigameModule,void(NewBowlingMinigameModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addForegroundToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::
  Delegate1<NewBowlingMinigameModule,void(NewBowlingMinigameModule::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGatherPlantlessPlantingRestrictions);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<NewBowlingMinigameModule,void(NewBowlingMinigameModule::*)(Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantlessPlantingRestrictions,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

