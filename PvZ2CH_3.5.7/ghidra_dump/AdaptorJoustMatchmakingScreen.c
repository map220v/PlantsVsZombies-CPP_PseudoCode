// Class: AdaptorJoustMatchmakingScreen


/* AdaptorJoustMatchmakingScreen::setState_MatchmakingScreenState(MatchmakingScreenState) */

void __thiscall
AdaptorJoustMatchmakingScreen::setState_MatchmakingScreenState
          (AdaptorJoustMatchmakingScreen *this,int param_2)

{
  if (*(int *)(this + 0x120) != -1) {
    (**(code **)(*(long *)this + 0x350))(this,*(int *)(this + 0x120),3);
  }
  *(int *)(this + 0x120) = param_2;
  if (param_2 != -1) {
    (**(code **)(*(long *)this + 0x350))(this,param_2,1);
  }
  return;
}


/* AdaptorJoustMatchmakingScreen::HandleSuperFSMAction_MatchmakingScreenState(MatchmakingScreenState,
   StateAction) */

void AdaptorJoustMatchmakingScreen::HandleSuperFSMAction_MatchmakingScreenState(void)

{
  return;
}


/* AdaptorJoustMatchmakingScreen::OnBackButtonPressed() */

undefined8 __thiscall
AdaptorJoustMatchmakingScreen::OnBackButtonPressed(AdaptorJoustMatchmakingScreen *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_03864280(*(undefined4 *)(this + 0x120));
  (**(code **)(*(long *)this + 0x350))(this,uVar1,4);
  return 1;
}


/* AdaptorJoustMatchmakingScreen::ButtonDepress(int) */

void __thiscall
AdaptorJoustMatchmakingScreen::ButtonDepress(AdaptorJoustMatchmakingScreen *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_03864280(*(undefined4 *)(this + 0x120));
  (**(code **)(*(long *)this + 0x350))(this,uVar1,param_1);
  return;
}


/* non-virtual thunk to AdaptorJoustMatchmakingScreen::ButtonDepress(int) */

void __thiscall
AdaptorJoustMatchmakingScreen::ButtonDepress(AdaptorJoustMatchmakingScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustMatchmakingScreen::StaticClassInit() */

void AdaptorJoustMatchmakingScreen::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorJoustMatchmakingScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_038645d0,400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustMatchmakingScreen::StaticGetClass() */

long * AdaptorJoustMatchmakingScreen::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorJoustMatchmakingScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustMatchmakingScreen::GetClass() const */

long * AdaptorJoustMatchmakingScreen::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorJoustMatchmakingScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustMatchmakingScreen::~AdaptorJoustMatchmakingScreen() */

void __thiscall
AdaptorJoustMatchmakingScreen::~AdaptorJoustMatchmakingScreen(AdaptorJoustMatchmakingScreen *this)

{
  *(undefined ***)this = &PTR_GetClass_066aac60;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066aafc8;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066ab010;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x168));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x148));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x128));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorJoustMatchmakingScreen::~AdaptorJoustMatchmakingScreen() */

void __thiscall
AdaptorJoustMatchmakingScreen::~AdaptorJoustMatchmakingScreen(AdaptorJoustMatchmakingScreen *this)

{
  ~AdaptorJoustMatchmakingScreen(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustMatchmakingScreen::ShowSwapButton() */

void __thiscall AdaptorJoustMatchmakingScreen::ShowSwapButton(AdaptorJoustMatchmakingScreen *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"SwapStateButton");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustMatchmakingScreen::showFindingOpponentDisplay(bool) */

void __thiscall
AdaptorJoustMatchmakingScreen::showFindingOpponentDisplay
          (AdaptorJoustMatchmakingScreen *this,bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"FindingOpponentRoot");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustMatchmakingScreen::showFoundOpponentDisplay(bool) */

void __thiscall
AdaptorJoustMatchmakingScreen::showFoundOpponentDisplay
          (AdaptorJoustMatchmakingScreen *this,bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"OpponentFoundRoot");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustMatchmakingScreen::onMatchReceived() */

void __thiscall AdaptorJoustMatchmakingScreen::onMatchReceived(AdaptorJoustMatchmakingScreen *this)

{
  undefined4 uVar1;
  
  *(int *)(this + 0x188) = *(int *)(this + 0x188) + 1;
  uVar1 = FUN_03864280(*(undefined4 *)(this + 0x120));
  (**(code **)(*(long *)this + 0x350))(this,uVar1,6);
  return;
}


/* AdaptorJoustMatchmakingScreen::onJoustNetworkResponse(int, int) */

void __thiscall
AdaptorJoustMatchmakingScreen::onJoustNetworkResponse
          (AdaptorJoustMatchmakingScreen *this,int param_1,int param_2)

{
  if (param_1 == 3) {
    switch(param_2) {
    case 2:
      onMatchReceived(this);
      return;
    case 3:
      JoustUtils::ShowJoustNetworkIssuePopup(2,3);
      return;
    case 4:
    case 5:
    case 7:
    case 8:
      JoustUtils::ShowJoustNetworkIssuePopup(1,3);
      return;
    case 6:
      JoustUtils::ShowJoustNetworkIssuePopup(4,3);
      return;
    }
  }
  return;
}


/* AdaptorJoustMatchmakingScreen::Close() */

void __thiscall AdaptorJoustMatchmakingScreen::Close(AdaptorJoustMatchmakingScreen *this)

{
  (**(code **)(*(long *)this + 0x158))(this,0);
  HotUIAdaptor::RemoveAndDeleteWidget((HotUIAdaptor *)this);
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  return;
}


/* AdaptorJoustMatchmakingScreen::sendMatchRequest() */

void AdaptorJoustMatchmakingScreen::sendMatchRequest(void)

{
  JoustNetworkMgr *this;
  
  this = (JoustNetworkMgr *)Sexy::LazySingleton<JoustNetworkMgr>::GetInstancePtr();
  JoustNetworkMgr::RequestPostMatch(this);
  return;
}


/* AdaptorJoustMatchmakingScreen::signalCancel() */

void __thiscall AdaptorJoustMatchmakingScreen::signalCancel(AdaptorJoustMatchmakingScreen *this)

{
  bool bVar1;
  
  bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x128));
  if (!bVar1) {
    return;
  }
  std::function<void()>::operator()((function<void()> *)(this + 0x128));
  return;
}


/* AdaptorJoustMatchmakingScreen::onJoustNetworkIssueDecision(int, int) */

void __thiscall
AdaptorJoustMatchmakingScreen::onJoustNetworkIssueDecision
          (AdaptorJoustMatchmakingScreen *this,int param_1,int param_2)

{
  bool bVar1;
  
  if (param_1 == 3) {
    if (param_2 == 0) {
      sendMatchRequest();
      return;
    }
    if (param_2 == 1) {
      bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x148));
      if (bVar1) {
        std::function<void()>::operator()((function<void()> *)(this + 0x148));
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustMatchmakingScreen::onLoadUIView() */

void __thiscall AdaptorJoustMatchmakingScreen::onLoadUIView(AdaptorJoustMatchmakingScreen *this)

{
  HotUIManager *this_00;
  HotUIFile *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_10,"JoustMatchmakingScreen");
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
/* AdaptorJoustMatchmakingScreen::onLinkToUIViewCreated() */

void __thiscall
AdaptorJoustMatchmakingScreen::onLinkToUIViewCreated(AdaptorJoustMatchmakingScreen *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"CancelMatchmakingButton");
  HotUIAdaptor::bindHotUIButtonToTouchID((HotUIAdaptor *)this,asStack_10,4);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SwapStateButton");
  HotUIAdaptor::bindHotUIButtonToTouchID((HotUIAdaptor *)this,asStack_10,5);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"FindNewOpponentButton");
  HotUIAdaptor::bindHotUIButtonToTouchID((HotUIAdaptor *)this,asStack_10,7);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlayButton");
  HotUIAdaptor::bindHotUIButtonToTouchID((HotUIAdaptor *)this,asStack_10,8);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SwapStateButton");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"FindingOpponentRoot");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"OpponentFoundRoot");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_03864318(*(undefined4 *)(pPVar2 + 0x40));
  if (iVar1 == 0x23) {
    std::string::string(asStack_10,"CancelMatchmakingButton");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    PlayerInfo::CompleteTutorial(pPVar2,0x23);
  }
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  *(undefined4 *)(this + 0x120) = 0xffffffff;
  setState_MatchmakingScreenState(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustMatchmakingScreen::updateSearchingDisplay() */

void __thiscall
AdaptorJoustMatchmakingScreen::updateSearchingDisplay(AdaptorJoustMatchmakingScreen *this)

{
  int iVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar2;
  int iVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  fVar5 = (float)PVZ_RealT();
  fVar6 = *(float *)(this + 0x124);
  this_00 = (HotUIFile *)FUN_03864278(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"FindingOpponentSpinnerLabel");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  iVar1 = (int)((fVar5 - fVar6) + (fVar5 - fVar6)) % 3;
  Set8BytesTo0(aSStack_18);
  if (-1 < iVar1) {
    do {
      iVar3 = iVar3 + 1;
      thunk_FUN_054757c0(aSStack_18,&DAT_06ab4f38);
    } while (iVar3 <= iVar1);
  }
  pcVar4 = *(code **)(*(string **)pHVar2 + 0x360);
  Sexy::UTF8StringToWString(aSStack_18,*(string **)pHVar2);
  (*pcVar4)(pHVar2,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string((string *)aSStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustMatchmakingScreen::configureSeedPackets(std::vector<HotUISeedPacketConfig,
   std::allocator<HotUISeedPacketConfig> > const&) */

void __thiscall
AdaptorJoustMatchmakingScreen::configureSeedPackets
          (AdaptorJoustMatchmakingScreen *this,vector *param_1)

{
  int iVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03864278(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"PlantSelectionList");
  this_01 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_01 != (HotUISeedPacketList *)0x0) {
    iVar1 = FUN_03864328(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
    HotUISeedPacketList::SetSeedTypes(this_01,param_1,iVar1 / 2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustMatchmakingScreen::AdaptorJoustMatchmakingScreen() */

void __thiscall
AdaptorJoustMatchmakingScreen::AdaptorJoustMatchmakingScreen(AdaptorJoustMatchmakingScreen *this)

{
  undefined *puVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_066aac60;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066aafc8;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066ab010;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x128));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x148));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x168));
  *(undefined4 *)(this + 0x188) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onJoustNetworkResponse);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<AdaptorJoustMatchmakingScreen,void(AdaptorJoustMatchmakingScreen::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::JoustNetworkResponseReceived,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onJoustNetworkIssueDecision);
  local_40 = local_8;
  local_50 = local_18;
  uStack_48 = uStack_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<AdaptorJoustMatchmakingScreen,void(AdaptorJoustMatchmakingScreen::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::JoustNetworkIssueDecision,&local_50);
  return;
}


/* AdaptorJoustMatchmakingScreen::StaticNew() */

AdaptorJoustMatchmakingScreen * AdaptorJoustMatchmakingScreen::StaticNew(void)

{
  AdaptorJoustMatchmakingScreen *this;
  
  this = ::operator_new(400);
  AdaptorJoustMatchmakingScreen(this);
  return this;
}


/* AdaptorJoustMatchmakingScreen::SetOnCancelAction(std::function<void ()>) */

void __thiscall
AdaptorJoustMatchmakingScreen::SetOnCancelAction
          (AdaptorJoustMatchmakingScreen *this,function *param_2)

{
  std::function<void()>::operator=((function<void()> *)(this + 0x128),param_2);
  return;
}


/* AdaptorJoustMatchmakingScreen::SetOnFailAction(std::function<void ()>) */

void __thiscall
AdaptorJoustMatchmakingScreen::SetOnFailAction
          (AdaptorJoustMatchmakingScreen *this,function *param_2)

{
  std::function<void()>::operator=((function<void()> *)(this + 0x148),param_2);
  return;
}


/* AdaptorJoustMatchmakingScreen::SetOnPlayAction(std::function<void ()>) */

void __thiscall
AdaptorJoustMatchmakingScreen::SetOnPlayAction
          (AdaptorJoustMatchmakingScreen *this,function *param_2)

{
  std::function<void()>::operator=((function<void()> *)(this + 0x168),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustMatchmakingScreen::clearSeedPacketDisplay() */

void __thiscall
AdaptorJoustMatchmakingScreen::clearSeedPacketDisplay(AdaptorJoustMatchmakingScreen *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<HotUISeedPacketConfig,std::allocator<HotUISeedPacketConfig>>::resize
            ((vector<HotUISeedPacketConfig,std::allocator<HotUISeedPacketConfig>> *)avStack_20,6);
  configureSeedPackets(this,(vector *)avStack_20);
  std::vector<HotUISeedPacketConfig,std::allocator<HotUISeedPacketConfig>>::~vector
            ((vector<HotUISeedPacketConfig,std::allocator<HotUISeedPacketConfig>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustMatchmakingScreen::updateOpponentDisplay() */

void __thiscall
AdaptorJoustMatchmakingScreen::updateOpponentDisplay(AdaptorJoustMatchmakingScreen *this)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ObjectTypeDirectory<PlantType> *this_00;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  std::vector<HotUISeedPacketConfig,std::allocator<HotUISeedPacketConfig>>::resize
            ((vector<HotUISeedPacketConfig,std::allocator<HotUISeedPacketConfig>> *)local_20,6);
  this_00 = (ObjectTypeDirectory<PlantType> *)
            Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  iVar1 = ObjectTypeDirectory<PlantType>::GetCount(this_00);
  lVar6 = 0;
  do {
    uVar4 = FUN_0386431c(local_20[0],lVar6);
    uVar2 = Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    Sexy::Rand(iVar1);
    ObjectTypeDirectory<PlantType>::GetTypeFromIndex(uVar2);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    thunk_FUN_05475e00(uVar4,lVar5 + 8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    lVar5 = lVar6 + 1;
    lVar6 = FUN_0386431c(local_20[0],lVar6);
    uVar3 = RandRangeInt(0,0x14);
    *(undefined4 *)(lVar6 + 0xc) = uVar3;
    lVar6 = lVar5;
  } while (lVar5 != 6);
  configureSeedPackets(this,(vector *)local_20);
  std::vector<HotUISeedPacketConfig,std::allocator<HotUISeedPacketConfig>>::~vector
            ((vector<HotUISeedPacketConfig,std::allocator<HotUISeedPacketConfig>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustMatchmakingScreen::HandleStateMachine_MatchmakingScreenState(MatchmakingScreenState,
   StateAction) */

void __thiscall
AdaptorJoustMatchmakingScreen::HandleStateMachine_MatchmakingScreenState
          (AdaptorJoustMatchmakingScreen *this,uint param_2,int param_3)

{
  bool bVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate2<MatchmakingScreenState,StateAction> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,HandleSuperFSMAction_MatchmakingScreenState);
  Sexy::Delegate2<MatchmakingScreenState,StateAction>::
  Delegate2<AdaptorJoustMatchmakingScreen,void(AdaptorJoustMatchmakingScreen::*)(MatchmakingScreenState,StateAction)>
            (aDStack_38,aCStack_50);
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      break;
    case 1:
      JoustUtils::ClearCurrentMatch();
      sendMatchRequest();
      showFindingOpponentDisplay(this,true);
      clearSeedPacketDisplay(this);
      break;
    case 2:
      updateSearchingDisplay(this);
      break;
    case 3:
      showFindingOpponentDisplay(this,false);
      break;
    case 4:
      if (*(int *)(this + 0x188) == 0) {
        JoustUtils::ClearCurrentMatch();
        JoustUtils::CancelCurrentAPIRequest();
        signalCancel(this);
      }
      break;
    case 5:
      setState_MatchmakingScreenState(this,1);
      break;
    case 6:
switchD_03865818_caseD_8:
      bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x168));
      if (bVar1) {
        std::function<void()>::operator()((function<void()> *)(this + 0x168));
      }
      break;
    default:
      goto switchD_03865800_default;
    }
  }
  else {
    if (param_2 == 1) {
      switch(param_3) {
      case 0:
        break;
      case 1:
        showFoundOpponentDisplay(this,true);
        updateOpponentDisplay(this);
        break;
      default:
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x1);
        break;
      case 3:
        showFoundOpponentDisplay(this,false);
        break;
      case 5:
      case 7:
        setState_MatchmakingScreenState(this,0);
        break;
      case 8:
        goto switchD_03865818_caseD_8;
      }
      goto switchD_03865818_caseD_0;
    }
    if ((param_2 == 0xffffffff) && (param_3 == 0)) goto switchD_03865818_caseD_0;
switchD_03865800_default:
    Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)(ulong)param_2);
  }
switchD_03865818_caseD_0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustMatchmakingScreen::Update() */

void __thiscall AdaptorJoustMatchmakingScreen::Update(AdaptorJoustMatchmakingScreen *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_03864280(*(undefined4 *)(this + 0x120));
  (**(code **)(*(long *)this + 0x350))(this,uVar1,2);
  HotUIAdaptor::Update((HotUIAdaptor *)this);
  return;
}

