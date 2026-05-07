// Class: ActivityDescriptionManager


/* ActivityDescriptionManager::~ActivityDescriptionManager() */

void __thiscall
ActivityDescriptionManager::~ActivityDescriptionManager(ActivityDescriptionManager *this)

{
  *(undefined ***)this = &PTR__ActivityDescriptionManager_06a28090;
  Sexy::LazySingleton<ActivityDescriptionManager>::~LazySingleton
            ((LazySingleton<ActivityDescriptionManager> *)this);
  return;
}


/* ActivityDescriptionManager::CloseDescription() */

void __thiscall ActivityDescriptionManager::CloseDescription(ActivityDescriptionManager *this)

{
  if (*(long *)(this + 8) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 8));
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  return;
}


/* ActivityDescriptionManager::~ActivityDescriptionManager() */

void __thiscall
ActivityDescriptionManager::~ActivityDescriptionManager(ActivityDescriptionManager *this)

{
  ~ActivityDescriptionManager(this);
  AK::FreeHook(this);
  return;
}


/* ActivityDescriptionManager::ActivityDescriptionManager() */

void __thiscall
ActivityDescriptionManager::ActivityDescriptionManager(ActivityDescriptionManager *this)

{
  Sexy::LazySingleton<ActivityDescriptionManager>::LazySingleton
            ((LazySingleton<ActivityDescriptionManager> *)this);
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__ActivityDescriptionManager_06a28090;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityDescriptionManager::ShowDescription(std::wstring const&, std::wstring const&) */

void __thiscall
ActivityDescriptionManager::ShowDescription
          (ActivityDescriptionManager *this,wstring *param_1,wstring *param_2)

{
  ActivityDescriptionUI *this_00;
  long lVar1;
  PlantWarsLevelSelectUI *pPVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CloseDescription(this);
  lVar1 = *(long *)(this + 8);
  if (lVar1 == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 8) = this_00;
    ActivityDescriptionUI::InitView(this_00,param_1,param_2);
    pPVar2 = *(PlantWarsLevelSelectUI **)(this + 8);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,CloseDescription);
    Sexy::Delegate0::Delegate0<ActivityDescriptionManager,void(ActivityDescriptionManager::*)()>
              (aDStack_38,aCStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar2,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 8));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 8));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 8));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 8));
    lVar1 = *(long *)(this + 8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}

