// Class: CustomLevelModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelModule::StaticClassInit() */

void CustomLevelModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"CustomLevelModule");
    (*pcVar2)(plVar1,asStack_10,FUN_035e0738,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelModule::StaticGetClass() */

long * CustomLevelModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CustomLevelModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelModule::OnLoadStarted() */

void CustomLevelModule::OnLoadStarted(void)

{
  int iVar1;
  UIWidget *pUVar2;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_035e0598(*(undefined4 *)(gGameStateMgr + 0x1ec0));
  if (iVar1 == 10) {
    std::string::string(asStack_18,"UICustomLevelAppraise");
    pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
    std::string::~string(asStack_18);
    nop();
    if (pUVar2 == (UIWidget *)0x0) {
      Sexy::RtName::RtName((RtName *)asStack_18,L"UICustomLevelAppraise");
      pUVar2 = (UIWidget *)UIWidget::CreateWidget(asStack_18,0);
      Sexy::RtName::~RtName((RtName *)asStack_18);
      UIWidget::SetIgnoreParentVisibility(pUVar2,true);
    }
    else {
      UIWidget::SetVisible(pUVar2,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelModule::OnGameplayStarted() */

void CustomLevelModule::OnGameplayStarted(void)

{
  int iVar1;
  UIWidget *pUVar2;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIGemBank");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  iVar1 = FUN_035e0598(*(undefined4 *)(gGameStateMgr + 0x1ec0));
  if (iVar1 == 10) {
    std::string::string(asStack_18,"UICustomLevelAppraise");
    pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
    std::string::~string(asStack_18);
    nop();
    if (pUVar2 == (UIWidget *)0x0) {
      Sexy::RtName::RtName((RtName *)asStack_18,L"UICustomLevelAppraise");
      pUVar2 = (UIWidget *)UIWidget::CreateWidget(asStack_18,1);
      Sexy::RtName::~RtName((RtName *)asStack_18);
      UIWidget::SetIgnoreParentVisibility(pUVar2,true);
    }
    else {
      UIWidget::SetVisible(pUVar2,true);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelModule::CustomLevelModule() */

void __thiscall CustomLevelModule::CustomLevelModule(CustomLevelModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0665ecc0;
  return;
}


/* CustomLevelModule::StaticNew() */

CustomLevelModule * CustomLevelModule::StaticNew(void)

{
  CustomLevelModule *this;
  
  this = ::operator_new(0x18);
  CustomLevelModule(this);
  return this;
}


/* CustomLevelModule::~CustomLevelModule() */

void __thiscall CustomLevelModule::~CustomLevelModule(CustomLevelModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0665ecc0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* CustomLevelModule::~CustomLevelModule() */

void __thiscall CustomLevelModule::~CustomLevelModule(CustomLevelModule *this)

{
  ~CustomLevelModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelModule::registerForEvents() */

void __thiscall CustomLevelModule::registerForEvents(CustomLevelModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLoadStarted);
  Sexy::Delegate0::Delegate0<CustomLevelModule,void(CustomLevelModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGameplayStarted);
  Sexy::Delegate0::Delegate0<CustomLevelModule,void(CustomLevelModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

