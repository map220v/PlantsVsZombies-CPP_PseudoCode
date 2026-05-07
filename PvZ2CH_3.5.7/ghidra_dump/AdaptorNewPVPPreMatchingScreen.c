// Class: AdaptorNewPVPPreMatchingScreen


/* AdaptorNewPVPPreMatchingScreen::~AdaptorNewPVPPreMatchingScreen() */

void __thiscall
AdaptorNewPVPPreMatchingScreen::~AdaptorNewPVPPreMatchingScreen
          (AdaptorNewPVPPreMatchingScreen *this)

{
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0664b328;
  *(undefined ***)this = &PTR_GetClass_0664af80;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0664b2e0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x140));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x120));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorNewPVPPreMatchingScreen::~AdaptorNewPVPPreMatchingScreen() */

void __thiscall
AdaptorNewPVPPreMatchingScreen::~AdaptorNewPVPPreMatchingScreen
          (AdaptorNewPVPPreMatchingScreen *this)

{
  ~AdaptorNewPVPPreMatchingScreen(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPPreMatchingScreen::StaticClassInit() */

void AdaptorNewPVPPreMatchingScreen::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorNewPVPPreMatchingScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_034be440,0x160,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPPreMatchingScreen::StaticGetClass() */

long * AdaptorNewPVPPreMatchingScreen::StaticGetClass(void)

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
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorNewPVPPreMatchingScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorNewPVPPreMatchingScreen::GetClass() const */

long * AdaptorNewPVPPreMatchingScreen::GetClass(void)

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
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorNewPVPPreMatchingScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorNewPVPPreMatchingScreen::ButtonDepress(int) */

void __thiscall
AdaptorNewPVPPreMatchingScreen::ButtonDepress(AdaptorNewPVPPreMatchingScreen *this,int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 == 0) {
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x120));
    if (bVar1) {
      std::function<void()>::operator()((function<void()> *)(this + 0x120));
    }
    iVar2 = NewPVPUtils::GetTutorialStep();
    if (iVar2 == 1) {
      LawnApp::KillGameMaskUI(gLawnApp);
      return;
    }
  }
  else if (param_1 == 1) {
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x140));
    if (bVar1) {
      std::function<void()>::operator()((function<void()> *)(this + 0x140));
      return;
    }
  }
  return;
}


/* non-virtual thunk to AdaptorNewPVPPreMatchingScreen::ButtonDepress(int) */

void __thiscall
AdaptorNewPVPPreMatchingScreen::ButtonDepress(AdaptorNewPVPPreMatchingScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* AdaptorNewPVPPreMatchingScreen::Close() */

void __thiscall AdaptorNewPVPPreMatchingScreen::Close(AdaptorNewPVPPreMatchingScreen *this)

{
  long lVar1;
  
  lVar1 = UISingletonDialog<UINewPVPSeedChooser>::GetSingletonPtr();
  if (lVar1 != 0) {
    (**(code **)(**(long **)(lVar1 + 0x20) + 0x68))(*(long **)(lVar1 + 0x20),lVar1);
    UISingletonDialog<UINewPVPSeedChooser>::CloseDialog();
  }
  (**(code **)(*(long *)this + 0x158))(this,0);
  HotUIAdaptor::RemoveAndDeleteWidget((HotUIAdaptor *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPPreMatchingScreen::onLoadUIView() */

void __thiscall AdaptorNewPVPPreMatchingScreen::onLoadUIView(AdaptorNewPVPPreMatchingScreen *this)

{
  HotUIManager *this_00;
  HotUIFile *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_10,"NewPVPPreMatchingScreen");
  pHVar1 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPPreMatchingScreen::setup() */

void __thiscall AdaptorNewPVPPreMatchingScreen::setup(AdaptorNewPVPPreMatchingScreen *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  long lVar2;
  long *plVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    std::string::string(asStack_10,"PlayButton");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar1,0,(ButtonListener *)(this + 0xd8));
    std::string::string(asStack_10,"BackToMenu");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar1,1,(ButtonListener *)(this + 0xd8));
    lVar2 = UISingletonDialog<UINewPVPSeedChooser>::ShowDialog();
    if (lVar2 != 0) {
      plVar3 = (long *)HotUIFile::GetEntryPointWidget(this_00);
      (**(code **)(*plVar3 + 0x60))(plVar3,lVar2);
      plVar3 = (long *)HotUIFile::GetEntryPointWidget(this_00);
      (**(code **)(*plVar3 + 0xb0))(plVar3,lVar2);
    }
    NewPVPUtils::TrySetTutorialStep(1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPPreMatchingScreen::onLinkToUIViewCreated() */

void __thiscall
AdaptorNewPVPPreMatchingScreen::onLinkToUIViewCreated(AdaptorNewPVPPreMatchingScreen *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  long lVar2;
  long *plVar3;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    std::string::string(asStack_10,"PlayButton");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar1,0,(ButtonListener *)(this + 0xd8));
    std::string::string(asStack_10,"BackToMenu");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar1,1,(ButtonListener *)(this + 0xd8));
    lVar2 = UISingletonDialog<UINewPVPSeedChooser>::ShowDialog();
    if (lVar2 != 0) {
      plVar3 = (long *)HotUIFile::GetEntryPointWidget(this_00);
      (**(code **)(*plVar3 + 0x60))(plVar3,lVar2);
      plVar3 = (long *)HotUIFile::GetEntryPointWidget(this_00);
      (**(code **)(*plVar3 + 0xb0))(plVar3,lVar2);
    }
    NewPVPUtils::TrySetTutorialStep(1);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPPreMatchingScreen::onNotifyTutorialStep(int) */

void __thiscall
AdaptorNewPVPPreMatchingScreen::onNotifyTutorialStep
          (AdaptorNewPVPPreMatchingScreen *this,int param_1)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  undefined8 uVar2;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 1) {
    this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
    std::string::string(asStack_18,"PlayButton");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_18);
    std::string::~string(asStack_18);
    nop();
    uVar2 = FUN_034ad948(*(undefined8 *)(pHVar1 + 0x238));
    std::string::string(asStack_20,"");
    Sexy::Insets::Insets((Insets *)asStack_18);
    GameMaskUI::ShowMask(uVar2,2,asStack_20,asStack_18);
    std::string::~string(asStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPPreMatchingScreen::AdaptorNewPVPPreMatchingScreen() */

void __thiscall
AdaptorNewPVPPreMatchingScreen::AdaptorNewPVPPreMatchingScreen(AdaptorNewPVPPreMatchingScreen *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_0664af80;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0664b2e0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0664b328;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x120));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x140));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyTutorialStep);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<AdaptorNewPVPPreMatchingScreen,void(AdaptorNewPVPPreMatchingScreen::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyTutorialStep,&local_40);
  return;
}


/* AdaptorNewPVPPreMatchingScreen::StaticNew() */

AdaptorNewPVPPreMatchingScreen * AdaptorNewPVPPreMatchingScreen::StaticNew(void)

{
  AdaptorNewPVPPreMatchingScreen *this;
  
  this = ::operator_new(0x160);
  AdaptorNewPVPPreMatchingScreen(this);
  return this;
}

