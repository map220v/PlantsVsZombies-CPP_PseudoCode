// Class: AdaptorJoustOrAdventureScreen


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustOrAdventureScreen::OnBackButtonPressed() */

void AdaptorJoustOrAdventureScreen::OnBackButtonPressed(void)

{
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_28,"Landing");
  std::string::string(asStack_20,"Back");
  std::string::string(asStack_18,"Exit Landing");
  std::string::string(asStack_10,"");
  UIMetrics::BroadcastUIEvent(asStack_28,asStack_20,asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_20);
  nop();
  std::string::~string(asStack_28);
  nop();
  UIHelper::TriggerWorldMapBackButton();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustOrAdventureScreen::NetworkStatusChanged(Sexy::IHttpDriver::NetworkStatus) */

void AdaptorJoustOrAdventureScreen::NetworkStatusChanged(long param_1)

{
  undefined1 uVar1;
  
  uVar1 = JoustUtils::IsConnected();
  *(undefined1 *)(param_1 + 0x128) = uVar1;
  return;
}


/* non-virtual thunk to
   AdaptorJoustOrAdventureScreen::NetworkStatusChanged(Sexy::IHttpDriver::NetworkStatus) */

void __thiscall
AdaptorJoustOrAdventureScreen::NetworkStatusChanged(AdaptorJoustOrAdventureScreen *this)

{
  NetworkStatusChanged(this + -0x120);
  return;
}


/* AdaptorJoustOrAdventureScreen::~AdaptorJoustOrAdventureScreen() */

void __thiscall
AdaptorJoustOrAdventureScreen::~AdaptorJoustOrAdventureScreen(AdaptorJoustOrAdventureScreen *this)

{
  *(undefined ***)this = &PTR_getHotUIAdaptorClass_066ab820;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066abb88;
  *(undefined ***)(this + 0x120) = &PTR__AdaptorJoustOrAdventureScreen_066abbf0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066abbd0;
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* non-virtual thunk to AdaptorJoustOrAdventureScreen::~AdaptorJoustOrAdventureScreen() */

void __thiscall
AdaptorJoustOrAdventureScreen::~AdaptorJoustOrAdventureScreen(AdaptorJoustOrAdventureScreen *this)

{
  ~AdaptorJoustOrAdventureScreen(this + -0x120);
  return;
}


/* AdaptorJoustOrAdventureScreen::~AdaptorJoustOrAdventureScreen() */

void __thiscall
AdaptorJoustOrAdventureScreen::~AdaptorJoustOrAdventureScreen(AdaptorJoustOrAdventureScreen *this)

{
  ~AdaptorJoustOrAdventureScreen(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AdaptorJoustOrAdventureScreen::~AdaptorJoustOrAdventureScreen() */

void __thiscall
AdaptorJoustOrAdventureScreen::~AdaptorJoustOrAdventureScreen(AdaptorJoustOrAdventureScreen *this)

{
  ~AdaptorJoustOrAdventureScreen(this + -0x120);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustOrAdventureScreen::StaticClassInit() */

void AdaptorJoustOrAdventureScreen::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorJoustOrAdventureScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_03866cfc,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustOrAdventureScreen::StaticGetClass() */

long * AdaptorJoustOrAdventureScreen::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorJoustOrAdventureScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustOrAdventureScreen::ButtonDepress(int) */

void __thiscall
AdaptorJoustOrAdventureScreen::ButtonDepress(AdaptorJoustOrAdventureScreen *this,int param_1)

{
  char cVar1;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = AdaptorJoustScreen::canHandleInput();
  if (cVar1 != '\0') {
    if (param_1 == 0) {
      std::string::string(asStack_28,"Landing");
      std::string::string(asStack_20,"WorldMap");
      std::string::string(asStack_18,"Enter World from Landing");
      std::string::string(asStack_10,"");
      UIMetrics::BroadcastUIEvent(asStack_28,asStack_20,asStack_18,asStack_10);
      std::string::~string(asStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      std::string::~string(asStack_20);
      nop();
      std::string::~string(asStack_28);
      nop();
      GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
    }
    else if (param_1 == 1) {
      std::string::string(asStack_28,"Landing");
      std::string::string(asStack_20,"Joust");
      std::string::string(asStack_18,"Enter Joust from Landing");
      std::string::string(asStack_10,"");
      UIMetrics::BroadcastUIEvent(asStack_28,asStack_20,asStack_18,asStack_10);
      std::string::~string(asStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      std::string::~string(asStack_20);
      nop();
      std::string::~string(asStack_28);
      nop();
      GameStateMgr::ShowJoustDashboardScreenAfterDashboardFetch(gGameStateMgr,0,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AdaptorJoustOrAdventureScreen::ButtonDepress(int) */

void __thiscall
AdaptorJoustOrAdventureScreen::ButtonDepress(AdaptorJoustOrAdventureScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustOrAdventureScreen::AdaptorJoustOrAdventureScreen() */

void __thiscall
AdaptorJoustOrAdventureScreen::AdaptorJoustOrAdventureScreen(AdaptorJoustOrAdventureScreen *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  Sexy::INetworkStatusListener::INetworkStatusListener((INetworkStatusListener *)(this + 0x120));
  this[0x128] = (AdaptorJoustOrAdventureScreen)0x0;
  *(undefined ***)this = &PTR_getHotUIAdaptorClass_066ab820;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066abb88;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066abbd0;
  *(undefined ***)(this + 0x120) = &PTR__AdaptorJoustOrAdventureScreen_066abbf0;
  *(undefined4 *)(this + 300) = 3;
  this[0x129] = (AdaptorJoustOrAdventureScreen)0x0;
  nop();
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onJoustNarrativeComplete);
  Sexy::Delegate0::Delegate0<AdaptorJoustOrAdventureScreen,void(AdaptorJoustOrAdventureScreen::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::JoustNarrativeComplete,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustOrAdventureScreen::StaticNew() */

AdaptorJoustOrAdventureScreen * AdaptorJoustOrAdventureScreen::StaticNew(void)

{
  AdaptorJoustOrAdventureScreen *this;
  
  this = ::operator_new(0x130);
  AdaptorJoustOrAdventureScreen(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustOrAdventureScreen::setJoustState(AdaptorJoustOrAdventureScreen::JoustState) */

void __thiscall
AdaptorJoustOrAdventureScreen::setJoustState(AdaptorJoustOrAdventureScreen *this,int param_2)

{
  HotUISeedPacketList *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 300) != param_2) {
    *(int *)(this + 300) = param_2;
    std::string::string(asStack_10,"JoustButtonContainer");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),asStack_10);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*(long *)pHVar1 + 0x158))(pHVar1,param_2 == 0);
    std::string::string(asStack_10,"JoustWifiOffContainer");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),asStack_10);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*(long *)pHVar1 + 0x158))(pHVar1,param_2 == 2);
    std::string::string(asStack_10,"JoustUnavailableContainer");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),asStack_10);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*(long *)pHVar1 + 0x158))(pHVar1,param_2 == 1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustOrAdventureScreen::updateJoustState() */

void __thiscall AdaptorJoustOrAdventureScreen::updateJoustState(AdaptorJoustOrAdventureScreen *this)

{
  setJoustState(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustOrAdventureScreen::onJoustNarrativeComplete() */

void __thiscall
AdaptorJoustOrAdventureScreen::onJoustNarrativeComplete(AdaptorJoustOrAdventureScreen *this)

{
  HotUISeedPacketList *pHVar1;
  char *pcVar2;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_50,"JoustLock");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_50);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_58,"open");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onHotUIAnimFinished);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<AdaptorJoustOrAdventureScreen,void(AdaptorJoustOrAdventureScreen::*)(std::string_const&)>
            (aDStack_38,asStack_50);
  HotUIAnim::PlayAndStop((HotUIAnim *)pHVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Landing_Battlez_unlock");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustOrAdventureScreen::setFUEState(bool) */

void __thiscall
AdaptorJoustOrAdventureScreen::setFUEState(AdaptorJoustOrAdventureScreen *this,bool param_1)

{
  byte bVar1;
  HotUISeedPacketList *pHVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = JoustUtils::DoesUnlockAnimNeedToPlay();
  if (param_1 < bVar1) {
    param_1 = true;
    onJoustNarrativeComplete(this);
  }
  if (this[0x129] != (AdaptorJoustOrAdventureScreen)param_1) {
    this[0x129] = (AdaptorJoustOrAdventureScreen)param_1;
    std::string::string(asStack_10,"JoustButton");
    pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),asStack_10);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*(long *)pHVar2 + 0x90))(pHVar2,param_1);
    std::string::string(asStack_10,"AdventureButton");
    pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),asStack_10);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*(long *)pHVar2 + 0x90))(pHVar2,param_1);
    if ((AdaptorJoustOrAdventureScreen)param_1 != (AdaptorJoustOrAdventureScreen)0x0) {
      std::string::string(asStack_10,"NeedProgressText");
      pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                         (*(HotUIFile **)(this + 0xf8),asStack_10);
      std::string::~string(asStack_10);
      nop();
      (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2,0);
    }
    MessageRouter::Broadcast<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::JoustShowingFUEInAdventureScreen,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustOrAdventureScreen::setup() */

void __thiscall AdaptorJoustOrAdventureScreen::setup(AdaptorJoustOrAdventureScreen *this)

{
  bool bVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03866a4c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"JoustButton");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar2,1,(ButtonListener *)(this + 0xd8));
  std::string::string(asStack_10,"AdventureButton");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar2,0,(ButtonListener *)(this + 0xd8));
  updateJoustState(this);
  bVar1 = (bool)JoustUtils::TryShowFUE();
  setFUEState(this,bVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustOrAdventureScreen::onLinkToUIViewCreated() */

void __thiscall
AdaptorJoustOrAdventureScreen::onLinkToUIViewCreated(AdaptorJoustOrAdventureScreen *this)

{
  bool bVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar2;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03866a4c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"JoustButton");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar2,1,(ButtonListener *)(this + 0xd8));
  std::string::string(asStack_10,"AdventureButton");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar2,0,(ButtonListener *)(this + 0xd8));
  updateJoustState(this);
  bVar1 = (bool)JoustUtils::TryShowFUE();
  setFUEState(this,bVar1);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustOrAdventureScreen::onHotUIAnimFinished(std::string const&) */

void AdaptorJoustOrAdventureScreen::onHotUIAnimFinished(string *param_1)

{
  JoustUtils::SetUnlockAnimAsSeen();
  setFUEState((AdaptorJoustOrAdventureScreen *)param_1,false);
  updateJoustState((AdaptorJoustOrAdventureScreen *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustOrAdventureScreen::onLoadUIView() */

void __thiscall AdaptorJoustOrAdventureScreen::onLoadUIView(AdaptorJoustOrAdventureScreen *this)

{
  undefined8 uVar1;
  ulong uVar2;
  HotUIManager *this_00;
  HotUIFile *pHVar3;
  undefined1 auStack_68 [8];
  string asStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [8];
  wstring awStack_48 [8];
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_60,"$NEEDPROGRESS");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_60);
  FUN_05478178(awStack_50,L"[JOUST_NEED_PROGRESS]",auStack_68);
  uVar2 = JoustUtils::GetPlantCountNeededToPlayJoust();
  Sexy::StrFormat(L"%d",awStack_58,uVar2 & 0xffffffff);
  TodReplaceString(awStack_50,L"{COUNT}",awStack_58);
  Sexy::ToString(awStack_48);
  FUN_05474278(uVar1,asStack_40);
  std::string::~string(asStack_40);
  FUN_05476c50(awStack_48);
  FUN_05476c50(awStack_58);
  FUN_05476c50(awStack_50);
  nop();
  std::string::~string(asStack_60);
  nop();
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_40,"JoustOrAdventureScreen");
  pHVar3 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_40,(map *)amStack_38);
  std::string::~string(asStack_40);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar3);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustOrAdventureScreen::Update() */

void __thiscall AdaptorJoustOrAdventureScreen::Update(AdaptorJoustOrAdventureScreen *this)

{
  HotUIAdaptor::Update((HotUIAdaptor *)this);
  updateJoustState(this);
  return;
}

