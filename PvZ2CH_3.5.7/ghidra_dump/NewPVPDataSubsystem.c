// Class: NewPVPDataSubsystem


/* NewPVPDataSubsystem::stop() */

void __thiscall NewPVPDataSubsystem::stop(NewPVPDataSubsystem *this)

{
  if (this[0x18] != (NewPVPDataSubsystem)0x0) {
    this[0x18] = (NewPVPDataSubsystem)0x0;
  }
  if (this[0x19] != (NewPVPDataSubsystem)0x0) {
    this[0x19] = (NewPVPDataSubsystem)0x0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPDataSubsystem::StaticClassInit() */

void NewPVPDataSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPDataSubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_034a7aa8,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPDataSubsystem::StaticGetClass() */

long * NewPVPDataSubsystem::StaticGetClass(void)

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
  uVar2 = NewPVPDataBaseSubsystem::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPDataSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPDataSubsystem::GetClass() const */

long * NewPVPDataSubsystem::GetClass(void)

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
  uVar2 = NewPVPDataBaseSubsystem::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPDataSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPDataSubsystem::resetUsedTimeSegment() */

void __thiscall NewPVPDataSubsystem::resetUsedTimeSegment(NewPVPDataSubsystem *this)

{
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPDataSubsystem::getSyncInfo(std::string&) */

void __thiscall NewPVPDataSubsystem::getSyncInfo(NewPVPDataSubsystem *this,string *param_1)

{
  char cVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = NewPVPGameData::HasData((NewPVPGameData *)(this + 0x20));
  if (cVar1 != '\0') {
    PlantPacketJsonConverter::SerializeObj();
    FUN_05474278(param_1,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPDataSubsystem::onTimeOut(UIMessageBox*, int) */

void NewPVPDataSubsystem::onTimeOut(UIMessageBox *param_1,int param_2)

{
  char cVar1;
  LawnApp *this;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  this = gLawnApp;
  cVar1 = LawnApp::IsPauseMenuOpen(gLawnApp);
  if (cVar1 != '\0') {
    LawnApp::KillNewOptionsDialog(this);
    this = gLawnApp;
  }
  (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),0);
  Board::Quit(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* NewPVPDataSubsystem::start() */

void __thiscall NewPVPDataSubsystem::start(NewPVPDataSubsystem *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_RealT();
  this[0x18] = (NewPVPDataSubsystem)0x1;
  *(undefined4 *)(this + 0x10) = uVar1;
  nop();
  nop();
  *(undefined4 *)(this + 0x80) = 0;
  this[0x84] = (NewPVPDataSubsystem)0x0;
  *(undefined4 *)(this + 0x88) = 0;
  nop();
  return;
}


/* NewPVPDataSubsystem::resetNextSyncTime() */

void __thiscall NewPVPDataSubsystem::resetNextSyncTime(NewPVPDataSubsystem *this)

{
  NewPVPMgr *pNVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)PVZ_RealT();
  pNVar1 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  fVar3 = (float)NewPVPMgr::GetSyncGameInterval(pNVar1);
  fVar4 = 3.0;
  if (fVar3 != 0.0) {
    pNVar1 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    fVar4 = (float)NewPVPMgr::GetSyncGameInterval(pNVar1);
  }
  *(float *)(this + 0x10) = fVar4 + fVar2;
  return;
}


/* NewPVPDataSubsystem::readyForSyncEvents() */

bool __thiscall NewPVPDataSubsystem::readyForSyncEvents(NewPVPDataSubsystem *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_RealT();
  return *(float *)(this + 0x10) <= fVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPDataSubsystem::timeout() */

void __thiscall NewPVPDataSubsystem::timeout(NewPVPDataSubsystem *this)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x19] != (NewPVPDataSubsystem)0x0) {
    Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    NewPVPMgr::SendTimoutLog();
    LawnApp::KillNetConnectingUI(gLawnApp);
    (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),1);
    this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_00 != (UIMessageBox *)0x0) {
      std::string::string(asStack_58,"[NEW_PVP_MAIN_VIEW_DISCONNECT_TEXT]");
      std::string::string(asStack_50,"[NEW_PVP_MAIN_VIEW_DISCONNECT_TITLE]");
      UIMessageBox::SetMessage(this_00,asStack_58,asStack_50);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      UIMessageBox::SetShowType(this_00,2);
      std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
      pIVar1 = (Image *)StringHelper::ToImage(asStack_50,false);
      UIMessageBox::SetBackground(this_00,pIVar1);
      std::string::~string(asStack_50);
      nop();
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onTimeOut);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<NewPVPDataSubsystem,void(NewPVPDataSubsystem::*)(UIMessageBox*,int)>
                (aDStack_38,asStack_50);
      UIMessageBox::SetCallback(this_00,aDStack_38);
    }
    ZombieActionHandler::StartAction((ZombieActionHandler *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPDataSubsystem::onMsgError(int, std::string const&) */

void __thiscall
NewPVPDataSubsystem::onMsgError(NewPVPDataSubsystem *this,int param_1,string *param_2)

{
  LawnApp *this_00;
  char cVar1;
  PVZ2UIDialog *pPVar2;
  wchar_t *pwVar3;
  undefined1 auStack_d48 [8];
  undefined1 auStack_d40 [8];
  wstring awStack_d38 [8];
  wstring awStack_d30 [24];
  Delegate0 aDStack_d18 [48];
  _PacketId a_Stack_ce8 [2248];
  string asStack_420 [8];
  string asStack_418 [1040];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _PacketId::_PacketId(a_Stack_ce8);
  cVar1 = std::operator==(param_2,asStack_420);
  if ((cVar1 != '\0') || (cVar1 = std::operator==(param_2,asStack_418), cVar1 != '\0')) {
    resetUsedTimeSegment(this);
    this_00 = gLawnApp;
    FUN_05478178(awStack_d38,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_d48);
    cVar1 = std::operator==(param_2,asStack_420);
    if (cVar1 == '\0') {
      pwVar3 = L"[NETWORK_NOT_CONNECTED_TEXT_PVP_SYNC]";
    }
    else {
      pwVar3 = L"[NETWORK_NOT_CONNECTED_TEXT_PVP_POST]";
    }
    FUN_05478178(awStack_d30,pwVar3,auStack_d40);
    pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_d38,awStack_d30);
    FUN_05476c50(awStack_d30);
    nop();
    FUN_05476c50(awStack_d38);
    nop();
    FUN_05478178(awStack_d38,L"[DIALOG_STRING_OK]",auStack_d40);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_d18,awStack_d30);
    PVZ2UIDialog::AddButton(pPVar2,awStack_d38,aDStack_d18,0);
    FUN_05476c50(awStack_d38);
    nop();
  }
  _PacketId::~_PacketId(a_Stack_ce8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPDataSubsystem::requestOppoent(NewPVPGameEvent const&) */

void __thiscall
NewPVPDataSubsystem::requestOppoent(NewPVPDataSubsystem *this,NewPVPGameEvent *param_1)

{
  NewPVPGameSubsystem *pNVar1;
  
  pNVar1 = Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
                    /* WARNING: Load size is inaccurate */
  NewPVPGameSubsystem::TriggerEvent
            (*(NewPVPGameSubsystem **)(param_1 + 0x14),pNVar1,0,0,*(undefined4 *)param_1,
             *(undefined4 *)(param_1 + 4),(int)*(float *)(param_1 + 0xc),
             (int)*(float *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),param_1 + 0x20);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPDataSubsystem::syncRestOppoent() */

void __thiscall NewPVPDataSubsystem::syncRestOppoent(NewPVPDataSubsystem *this)

{
  bool bVar1;
  NewPVPGameEvent *pNVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x48));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x48));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pNVar2 = (NewPVPGameEvent *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    requestOppoent(this,pNVar2);
    eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
              ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPDataSubsystem::ClearSelf() */

void __thiscall NewPVPDataSubsystem::ClearSelf(NewPVPDataSubsystem *this)

{
  NewPVPGameData::Clear((NewPVPGameData *)(this + 0x20));
  return;
}


/* NewPVPDataSubsystem::ClearOppoent() */

void __thiscall NewPVPDataSubsystem::ClearOppoent(NewPVPDataSubsystem *this)

{
  NewPVPGameData::Clear((NewPVPGameData *)(this + 0x40));
  return;
}


/* NewPVPDataSubsystem::~NewPVPDataSubsystem() */

void __thiscall NewPVPDataSubsystem::~NewPVPDataSubsystem(NewPVPDataSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_066465f0;
  NewPVPGameData::~NewPVPGameData((NewPVPGameData *)(this + 0x60));
  NewPVPGameData::~NewPVPGameData((NewPVPGameData *)(this + 0x40));
  NewPVPGameData::~NewPVPGameData((NewPVPGameData *)(this + 0x20));
  NewPVPDataBaseSubsystem::~NewPVPDataBaseSubsystem((NewPVPDataBaseSubsystem *)this);
  return;
}


/* NewPVPDataSubsystem::~NewPVPDataSubsystem() */

void __thiscall NewPVPDataSubsystem::~NewPVPDataSubsystem(NewPVPDataSubsystem *this)

{
  ~NewPVPDataSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPDataSubsystem::updateOppoent() */

void __thiscall NewPVPDataSubsystem::updateOppoent(NewPVPDataSubsystem *this)

{
  NewPVPGameData *this_00;
  char cVar1;
  NewPVPGameEvent *pNVar2;
  NewPVPGameEvent aNStack_48 [56];
  float local_10;
  long local_8;
  
  this_00 = (NewPVPGameData *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  cVar1 = NewPVPGameData::HasData(this_00);
  if (cVar1 != '\0') {
    pNVar2 = (NewPVPGameEvent *)NewPVPGameData::GetFirstEvent(this_00);
    NewPVPGameEvent::NewPVPGameEvent(aNStack_48,pNVar2);
    if (local_10 < *(float *)(this + 0x14)) {
      requestOppoent(this,aNStack_48);
      NewPVPGameData::RemoveEvent(this_00,0);
      NewPVPGameEvent::~NewPVPGameEvent(aNStack_48);
    }
    else {
      NewPVPGameEvent::~NewPVPGameEvent(aNStack_48);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPDataSubsystem::updateGame() */

void __thiscall NewPVPDataSubsystem::updateGame(NewPVPDataSubsystem *this)

{
  NewPVPGameData *this_00;
  char cVar1;
  NewPVPGameEvent *pNVar2;
  NewPVPGameEvent aNStack_48 [56];
  float fStack_10;
  long lStack_8;
  
  this_00 = (NewPVPGameData *)(this + 0x40);
  lStack_8 = ___stack_chk_guard;
  cVar1 = NewPVPGameData::HasData(this_00);
  if (cVar1 != '\0') {
    pNVar2 = (NewPVPGameEvent *)NewPVPGameData::GetFirstEvent(this_00);
    NewPVPGameEvent::NewPVPGameEvent(aNStack_48,pNVar2);
    if (fStack_10 < *(float *)(this + 0x14)) {
      requestOppoent(this,aNStack_48);
      NewPVPGameData::RemoveEvent(this_00,0);
      NewPVPGameEvent::~NewPVPGameEvent(aNStack_48);
    }
    else {
      NewPVPGameEvent::~NewPVPGameEvent(aNStack_48);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPDataSubsystem::update() */

void __thiscall NewPVPDataSubsystem::update(NewPVPDataSubsystem *this)

{
  if (this[0x18] == (NewPVPDataSubsystem)0x0) {
    return;
  }
  updateGame(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPDataSubsystem::doPost(std::string const&, bool) */

void __thiscall NewPVPDataSubsystem::doPost(NewPVPDataSubsystem *this,string *param_1,bool param_2)

{
  undefined8 uVar1;
  string *this_00;
  DNetwork *this_01;
  DTimerManager *this_02;
  char *__s;
  string *__n;
  string asStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [8];
  NewPVPDataSubsystem *local_ce0;
  string asStack_420 [1048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2) {
    this_02 = (DTimerManager *)DTimerManager::getInstane();
    std::string::string((string *)amStack_d18,"fake_pvp_post");
    FUN_05475d88((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_ce8,param_1);
    local_ce0 = this;
    FUN_034a6af0(afStack_d38,(pair<std::string_const,Sexy::PILifeValueTable> *)asStack_ce8);
    DTimerManager::addTimer(this_02,(string *)amStack_d18,(function *)afStack_d38,0.2,1);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_ce8);
    std::string::~string((string *)amStack_d18);
    nop();
    ClearSelf(this);
  }
  else {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    FUN_05475d88(asStack_d48,param_1);
    std::string::string(asStack_ce8,"di");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
    thunk_FUN_05475e00(uVar1,asStack_d48);
    std::string::~string(asStack_ce8);
    nop();
    __n = asStack_d40;
    std::string::string(asStack_ce8,"lf");
    this_00 = (string *)
              std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,asStack_ce8);
    if (this[0x84] == (NewPVPDataSubsystem)0x0) {
      __s = "0";
    }
    else {
      __s = "1";
    }
    std::string::append(this_00,__s,(size_t)__n);
    std::string::~string(asStack_ce8);
    nop();
    this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)asStack_ce8);
    FUN_034a6bb0(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_01,asStack_420,(map *)amStack_d18,30.0,(function *)afStack_d38,false,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)asStack_ce8);
    ClearSelf(this);
    std::string::~string(asStack_d48);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPDataSubsystem::sync() */

void __thiscall NewPVPDataSubsystem::sync(NewPVPDataSubsystem *this)

{
  bool bVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"");
  nop();
  getSyncInfo(this,asStack_10);
  bVar1 = (bool)NewPVPUtils::IsPlayingFakeMatch();
  doPost(this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPDataSubsystem::doSync(std::string const&, bool) */

void __thiscall NewPVPDataSubsystem::doSync(NewPVPDataSubsystem *this,string *param_1,bool param_2)

{
  undefined8 uVar1;
  DNetwork *this_00;
  DTimerManager *this_01;
  string asStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [8];
  NewPVPDataSubsystem *local_ce0;
  string asStack_418 [1040];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2) {
    if (this[0x8c] == (NewPVPDataSubsystem)0x0) {
      *(int *)(this + 0x88) = *(int *)(this + 0x88) + 1;
      this_01 = (DTimerManager *)DTimerManager::getInstane();
      std::string::string((string *)amStack_d18,"fake_pvp_sync");
      FUN_05475d88((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_ce8,param_1);
      local_ce0 = this;
      FUN_034a6b50(afStack_d38,(pair<std::string_const,Sexy::PILifeValueTable> *)asStack_ce8);
      DTimerManager::addTimer(this_01,(string *)amStack_d18,(function *)afStack_d38,0.2,1);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_ce8);
      std::string::~string((string *)amStack_d18);
      nop();
      this[0x8c] = (NewPVPDataSubsystem)0x1;
    }
  }
  else {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    FUN_05475d88(asStack_d48,param_1);
    std::string::string(asStack_ce8,"di");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
    thunk_FUN_05475e00(uVar1,asStack_d48);
    std::string::~string(asStack_ce8);
    nop();
    *(int *)(this + 0x88) = *(int *)(this + 0x88) + 1;
    this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)asStack_ce8);
    FUN_034a6c0c(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_00,asStack_418,(map *)amStack_d18,30.0,(function *)afStack_d38,param_2,true,
               asStack_d40,(uint)param_2);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)asStack_ce8);
    std::string::~string(asStack_d48);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPDataSubsystem::syncRestAndFetch() */

void __thiscall NewPVPDataSubsystem::syncRestAndFetch(NewPVPDataSubsystem *this)

{
  bool bVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"");
  nop();
  getSyncInfo(this,asStack_10);
  bVar1 = (bool)NewPVPUtils::IsPlayingFakeMatch();
  doSync(this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPDataSubsystem::updateSync() */

void __thiscall NewPVPDataSubsystem::updateSync(NewPVPDataSubsystem *this)

{
  int iVar1;
  LawnApp *this_00;
  char cVar2;
  int iVar3;
  AccessoryContent *pAVar4;
  float fVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar5 = (float)PVZ_RealDt();
  *(float *)(this + 0x14) = *(float *)(this + 0x14) + fVar5;
  cVar2 = readyForSyncEvents(this);
  if (cVar2 != '\0') {
    syncRestAndFetch(this);
    resetNextSyncTime(this);
  }
  iVar1 = *(int *)(this + 0x88);
  pAVar4 = (AccessoryContent *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  iVar3 = AccessoryContent::GetId(pAVar4);
  if (iVar1 < iVar3) {
    iVar1 = *(int *)(this + 0x88);
    pAVar4 = (AccessoryContent *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    iVar3 = AccessoryContent::GetId(pAVar4);
    this_00 = gLawnApp;
    if (iVar1 == iVar3 + -2) {
      std::string::string(asStack_10,"[NET_CONNECTING]");
      LawnApp::ShowNetConnectingUI(this_00,asStack_10);
      std::string::~string(asStack_10);
      nop();
    }
  }
  else {
    (**(code **)(*(long *)this + 0xa8))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPDataSubsystem::realUpdate() */

void __thiscall NewPVPDataSubsystem::realUpdate(NewPVPDataSubsystem *this)

{
  if (this[0x18] == (NewPVPDataSubsystem)0x0) {
    return;
  }
  updateSync(this);
  return;
}


/* NewPVPDataSubsystem::NewPVPDataSubsystem() */

void __thiscall NewPVPDataSubsystem::NewPVPDataSubsystem(NewPVPDataSubsystem *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  NewPVPDataBaseSubsystem::NewPVPDataBaseSubsystem((NewPVPDataBaseSubsystem *)this);
  *(undefined ***)this = &PTR_GetClass_066465f0;
  NewPVPGameData::NewPVPGameData((NewPVPGameData *)(this + 0x20));
  NewPVPGameData::NewPVPGameData((NewPVPGameData *)(this + 0x40));
  NewPVPGameData::NewPVPGameData((NewPVPGameData *)(this + 0x60));
  this[0x18] = (NewPVPDataSubsystem)0x0;
  this[0x19] = (NewPVPDataSubsystem)0x0;
  uVar2 = PVZ_EOT();
  this[0x8c] = (NewPVPDataSubsystem)0x0;
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0x80) = 0;
  this[0x84] = (NewPVPDataSubsystem)0x0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMsgError);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<NewPVPDataSubsystem,void(NewPVPDataSubsystem::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,&local_40);
  return;
}


/* NewPVPDataSubsystem::StaticNew() */

NewPVPDataSubsystem * NewPVPDataSubsystem::StaticNew(void)

{
  NewPVPDataSubsystem *this;
  
  this = ::operator_new(0x90);
  NewPVPDataSubsystem(this);
  return this;
}


/* NewPVPDataSubsystem::AddEvent(TriggerEventType, NewPVPGameEvent::EventType, int, int, int, float,
   unsigned int, std::vector<float, std::allocator<float> > const&) */

void __thiscall
NewPVPDataSubsystem::AddEvent
          (undefined4 param_1,NewPVPDataSubsystem *this,int param_3,int param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined8 param_9)

{
  undefined4 uVar1;
  NewPVPMgr *pNVar2;
  NewPVPDataSubsystem *pNVar3;
  float fVar4;
  float __x;
  
  if (this[0x18] != (NewPVPDataSubsystem)0x0) {
    if (param_4 == 9) {
      this[0x84] = (NewPVPDataSubsystem)0x1;
      ZombieActionHandler::StartAction((ZombieActionHandler *)this);
    }
    __x = *(float *)(this + 0x14);
    pNVar2 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    fVar4 = (float)NewPVPMgr::GetSyncGameInterval(pNVar2);
    if (fVar4 == 0.0) {
      fVar4 = fmodf(__x,3.0);
      uVar1 = *(undefined4 *)(this + 0x80);
    }
    else {
      pNVar2 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      fVar4 = (float)NewPVPMgr::GetSyncGameInterval(pNVar2);
      fVar4 = fmodf(__x,fVar4);
      uVar1 = *(undefined4 *)(this + 0x80);
    }
    pNVar3 = this + 0x20;
    if (param_3 != 0) {
      pNVar3 = this + 0x60;
    }
    NewPVPGameData::AddEvent
              (fVar4,param_1,pNVar3,uVar1,param_4,param_5,param_6,param_7,param_8,param_9);
    *(int *)(this + 0x80) = *(int *)(this + 0x80) + 1;
    sync(this);
    return;
  }
  return;
}

