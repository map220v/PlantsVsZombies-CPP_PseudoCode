// Class: CustomLevelEncourageModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelEncourageModule::StaticClassInit() */

void CustomLevelEncourageModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"CustomLevelEncourageModule");
    (*pcVar2)(plVar1,asStack_10,FUN_035e1138,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelEncourageModule::StaticGetClass() */

long * CustomLevelEncourageModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CustomLevelEncourageModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomLevelEncourageModule::CustomLevelEncourageModule() */

void __thiscall
CustomLevelEncourageModule::CustomLevelEncourageModule(CustomLevelEncourageModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0665ee20;
  return;
}


/* CustomLevelEncourageModule::StaticNew() */

CustomLevelEncourageModule * CustomLevelEncourageModule::StaticNew(void)

{
  CustomLevelEncourageModule *this;
  
  this = ::operator_new(0x18);
  CustomLevelEncourageModule(this);
  return this;
}


/* CustomLevelEncourageModule::~CustomLevelEncourageModule() */

void __thiscall
CustomLevelEncourageModule::~CustomLevelEncourageModule(CustomLevelEncourageModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0665ee20;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* CustomLevelEncourageModule::~CustomLevelEncourageModule() */

void __thiscall
CustomLevelEncourageModule::~CustomLevelEncourageModule(CustomLevelEncourageModule *this)

{
  ~CustomLevelEncourageModule(this);
  AK::FreeHook(this);
  return;
}


/* CustomLevelEncourageModule::CanBuySunmoney() */

ResilienceTutorialIntroProperties __thiscall
CustomLevelEncourageModule::CanBuySunmoney(CustomLevelEncourageModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return pRVar1[0x40];
}


/* CustomLevelEncourageModule::CanBuyPlantfood() */

ResilienceTutorialIntroProperties __thiscall
CustomLevelEncourageModule::CanBuyPlantfood(CustomLevelEncourageModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return pRVar1[0x41];
}


/* CustomLevelEncourageModule::CanBuyMower() */

ResilienceTutorialIntroProperties __thiscall
CustomLevelEncourageModule::CanBuyMower(CustomLevelEncourageModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return pRVar1[0x42];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelEncourageModule::OnLoadStarted() */

void __thiscall CustomLevelEncourageModule::OnLoadStarted(CustomLevelEncourageModule *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  UIWidget *pUVar6;
  Util *this_00;
  Util *this_01;
  RtObject *pRVar7;
  CustomLevelAds *pCVar8;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = Sexy::LazySingleton<CustomLevelSettingManager>::GetInstancePtr();
  cVar1 = FUN_035e0f94(*(undefined1 *)(lVar4 + 0x18));
  if ((cVar1 != '\0') &&
     (iVar3 = FUN_035e0f90(*(undefined4 *)(gGameStateMgr + 0x1ec0)), iVar3 == 10)) {
    pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    if (pRVar5[0x40] != (ResilienceTutorialIntroProperties)0x0) {
      std::string::string(asStack_18,"UIAdsSunBank");
      pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
      std::string::~string(asStack_18);
      nop();
      if (pUVar6 == (UIWidget *)0x0) {
        Android::Util::GetPackageName(this_01);
        bVar2 = std::operator==(asStack_20,"com.popcap.pvz2cthd.todaygame");
        if (!bVar2) {
          Sexy::RtName::RtName((RtName *)asStack_18,L"UIAdsSunBank");
          pRVar7 = (RtObject *)UIWidget::CreateWidget(asStack_18,0);
          Sexy::RtName::~RtName((RtName *)asStack_18);
          pCVar8 = Sexy::RtObject::Cast<CustomLevelAds>(pRVar7);
          std::string::string(asStack_18,"sunbank");
          CustomLevelAds::SetType(pCVar8,asStack_18);
          std::string::~string(asStack_18);
          nop();
          UIWidget::SetIgnoreParentVisibility((UIWidget *)pRVar7,true);
        }
        std::string::~string(asStack_20);
      }
      else {
        UIWidget::SetVisible(pUVar6,false);
      }
    }
    pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    if (pRVar5[0x41] != (ResilienceTutorialIntroProperties)0x0) {
      std::string::string(asStack_18,"UIAdsPlantfood");
      pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
      std::string::~string(asStack_18);
      nop();
      if (pUVar6 == (UIWidget *)0x0) {
        Android::Util::GetPackageName(this_00);
        bVar2 = std::operator==(asStack_20,"com.popcap.pvz2cthd.todaygame");
        if (!bVar2) {
          Sexy::RtName::RtName((RtName *)asStack_18,L"UIAdsPlantfood");
          pRVar7 = (RtObject *)UIWidget::CreateWidget(asStack_18,0);
          Sexy::RtName::~RtName((RtName *)asStack_18);
          pCVar8 = Sexy::RtObject::Cast<CustomLevelAds>(pRVar7);
          std::string::string(asStack_18,"plantfood");
          CustomLevelAds::SetType(pCVar8,asStack_18);
          std::string::~string(asStack_18);
          nop();
          UIWidget::SetIgnoreParentVisibility((UIWidget *)pRVar7,true);
        }
        std::string::~string(asStack_20);
      }
      else {
        UIWidget::SetVisible(pUVar6,false);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelEncourageModule::OnGameplayStarted() */

void __thiscall CustomLevelEncourageModule::OnGameplayStarted(CustomLevelEncourageModule *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  UIWidget *pUVar6;
  Util *this_00;
  Util *this_01;
  RtObject *pRVar7;
  CustomLevelAds *pCVar8;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = Sexy::LazySingleton<CustomLevelSettingManager>::GetInstancePtr();
  cVar1 = FUN_035e0f94(*(undefined1 *)(lVar4 + 0x18));
  if ((cVar1 != '\0') &&
     (iVar3 = FUN_035e0f90(*(undefined4 *)(gGameStateMgr + 0x1ec0)), iVar3 == 10)) {
    pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    if (pRVar5[0x40] != (ResilienceTutorialIntroProperties)0x0) {
      std::string::string(asStack_18,"UIAdsSunBank");
      pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
      std::string::~string(asStack_18);
      nop();
      if (pUVar6 == (UIWidget *)0x0) {
        Android::Util::GetPackageName(this_01);
        bVar2 = std::operator==(asStack_20,"com.popcap.pvz2cthd.todaygame");
        if (!bVar2) {
          Sexy::RtName::RtName((RtName *)asStack_18,L"UIAdsSunBank");
          pRVar7 = (RtObject *)UIWidget::CreateWidget(asStack_18,1);
          Sexy::RtName::~RtName((RtName *)asStack_18);
          pCVar8 = Sexy::RtObject::Cast<CustomLevelAds>(pRVar7);
          std::string::string(asStack_18,"sunbank");
          CustomLevelAds::SetType(pCVar8,asStack_18);
          std::string::~string(asStack_18);
          nop();
          UIWidget::SetIgnoreParentVisibility((UIWidget *)pRVar7,true);
        }
        std::string::~string(asStack_20);
      }
      else {
        UIWidget::SetVisible(pUVar6,true);
      }
    }
    pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    if (pRVar5[0x41] != (ResilienceTutorialIntroProperties)0x0) {
      std::string::string(asStack_18,"UIAdsPlantfood");
      pUVar6 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
      std::string::~string(asStack_18);
      nop();
      if (pUVar6 == (UIWidget *)0x0) {
        Android::Util::GetPackageName(this_00);
        bVar2 = std::operator==(asStack_20,"com.popcap.pvz2cthd.todaygame");
        if (!bVar2) {
          Sexy::RtName::RtName((RtName *)asStack_18,L"UIAdsPlantfood");
          pRVar7 = (RtObject *)UIWidget::CreateWidget(asStack_18,1);
          Sexy::RtName::~RtName((RtName *)asStack_18);
          pCVar8 = Sexy::RtObject::Cast<CustomLevelAds>(pRVar7);
          std::string::string(asStack_18,"plantfood");
          CustomLevelAds::SetType(pCVar8,asStack_18);
          std::string::~string(asStack_18);
          nop();
          UIWidget::SetIgnoreParentVisibility((UIWidget *)pRVar7,true);
        }
        std::string::~string(asStack_20);
      }
      else {
        UIWidget::SetVisible(pUVar6,true);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelEncourageModule::registerForEvents() */

void __thiscall CustomLevelEncourageModule::registerForEvents(CustomLevelEncourageModule *this)

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
  Sexy::Delegate0::Delegate0<CustomLevelEncourageModule,void(CustomLevelEncourageModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGameplayStarted);
  Sexy::Delegate0::Delegate0<CustomLevelEncourageModule,void(CustomLevelEncourageModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

