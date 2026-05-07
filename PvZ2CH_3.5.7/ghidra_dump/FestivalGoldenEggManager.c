// Class: FestivalGoldenEggManager


/* FestivalGoldenEggManager::~FestivalGoldenEggManager() */

void __thiscall FestivalGoldenEggManager::~FestivalGoldenEggManager(FestivalGoldenEggManager *this)

{
  *(undefined ***)this = &PTR__FestivalGoldenEggManager_066fc390;
  Sexy::LazySingleton<FestivalGoldenEggManager>::~LazySingleton
            ((LazySingleton<FestivalGoldenEggManager> *)this);
  return;
}


/* FestivalGoldenEggManager::~FestivalGoldenEggManager() */

void __thiscall FestivalGoldenEggManager::~FestivalGoldenEggManager(FestivalGoldenEggManager *this)

{
  ~FestivalGoldenEggManager(this);
  AK::FreeHook(this);
  return;
}


/* FestivalGoldenEggManager::closeDescriptionWidget() */

void __thiscall FestivalGoldenEggManager::closeDescriptionWidget(FestivalGoldenEggManager *this)

{
  if (*(long *)(this + 8) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 8));
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  return;
}


/* FestivalGoldenEggManager::FestivalGoldenEggManager() */

void __thiscall FestivalGoldenEggManager::FestivalGoldenEggManager(FestivalGoldenEggManager *this)

{
  Sexy::LazySingleton<FestivalGoldenEggManager>::LazySingleton
            ((LazySingleton<FestivalGoldenEggManager> *)this);
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__FestivalGoldenEggManager_066fc390;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGoldenEggManager::showDescriptionWidget() */

void __thiscall FestivalGoldenEggManager::showDescriptionWidget(FestivalGoldenEggManager *this)

{
  ActivityDescriptionUI *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 8) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 8) = this_00;
    TodStringTranslate(L"[FESTIVAL_GOLDENEGG_DESCRIPTION]");
    TodStringTranslate(L"[FESTIVAL_GOLDENEGG_DESCRIPTION_TITLE]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 8);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,closeDescriptionWidget);
    Sexy::Delegate0::Delegate0<FestivalGoldenEggManager,void(FestivalGoldenEggManager::*)()>
              (aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 8));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 8));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 8));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

