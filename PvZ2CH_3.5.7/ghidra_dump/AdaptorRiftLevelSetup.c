// Class: AdaptorRiftLevelSetup


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLevelSetup::~AdaptorRiftLevelSetup() */

void __thiscall AdaptorRiftLevelSetup::~AdaptorRiftLevelSetup(AdaptorRiftLevelSetup *this)

{
  LawnApp *pLVar1;
  HotUIFile *this_00;
  long *plVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06683110;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06683470;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066834b8;
  if (*(long *)(this + 0x168) != 0) {
    plVar2 = *(long **)(*(long *)(this + 0x168) + 0x20);
    (**(code **)(*plVar2 + 0x68))(plVar2);
    if (*(long **)(this + 0x168) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x168) + 0x18))();
      *(undefined8 *)(this + 0x168) = 0;
    }
  }
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = (HotUIFile *)FUN_036d46b0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"BonusContent");
  plVar2 = (long *)HotUIFile::GetWidgetByName(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*plVar2 + 0x80))(plVar2,1,1);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Material");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadshotFrame");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftLevelSetup::~AdaptorRiftLevelSetup() */

void __thiscall AdaptorRiftLevelSetup::~AdaptorRiftLevelSetup(AdaptorRiftLevelSetup *this)

{
  ~AdaptorRiftLevelSetup(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLevelSetup::StaticClassInit() */

void AdaptorRiftLevelSetup::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorRiftLevelSetup");
    (*pcVar2)(plVar1,asStack_10,FUN_036d4b98,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftLevelSetup::StaticGetClass() */

long * AdaptorRiftLevelSetup::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftLevelSetup",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRiftLevelSetup::GetClass() const */

long * AdaptorRiftLevelSetup::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftLevelSetup",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLevelSetup::getLevelToPlay() */

void AdaptorRiftLevelSetup::getLevelToPlay(void)

{
  char cVar1;
  RiftUtils *in_x0;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RiftUtils::GetLevelOverride(in_x0);
  cVar1 = FUN_0547419c(asStack_10);
  if (cVar1 == '\0') {
    RiftUtils::GetLevelOverride((RiftUtils *)0x0);
  }
  else {
    Sexy::FilesystemSaveGameContext::GetBuffer(*(FilesystemSaveGameContext **)(in_x0 + 0x120));
    FUN_05475d88();
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLevelSetup::InitMode(bool) */

void __thiscall AdaptorRiftLevelSetup::InitMode(AdaptorRiftLevelSetup *this,bool param_1)

{
  int extraout_w1;
  int extraout_w1_00;
  string asStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"ModeContent");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  if (param_1) {
    getLevelToPlay();
    RiftUtils::GetRiftWorldIndexOfLevel(asStack_20);
    std::string::string(asStack_10,"ModeName");
    RiftUtils::GetRiftTimedThemeName((RiftUtils *)0x0,extraout_w1);
    HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,asStack_10,awStack_18);
    FUN_05476c50(awStack_18);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"ModeDesc");
    RiftUtils::GetRiftTimedThemeDescription((RiftUtils *)0x0,extraout_w1_00);
    HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,asStack_10,awStack_18);
    FUN_05476c50(awStack_18);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLevelSetup::startLevel() */

void __thiscall AdaptorRiftLevelSetup::startLevel(AdaptorRiftLevelSetup *this)

{
  int iVar1;
  string asStack_10 [8];
  long local_8;
  
  this[0x15c] = (AdaptorRiftLevelSetup)0x1;
  local_8 = ___stack_chk_guard;
  AdaptorJoustLeagueInfoScreen::onClose((AdaptorJoustLeagueInfoScreen *)this);
  iVar1 = FUN_036d4694(*(undefined8 *)(this + 0x130),*(undefined8 *)(this + 0x140));
  if (iVar1 != 0) {
    getLevelToPlay();
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x128),(SexyURL *)asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLevelSetup::onSuccessResponse() */

void __thiscall AdaptorRiftLevelSetup::onSuccessResponse(AdaptorRiftLevelSetup *this)

{
  int iVar1;
  string asStack_10 [8];
  long lStack_8;
  
  this[0x15c] = (AdaptorRiftLevelSetup)0x1;
  lStack_8 = ___stack_chk_guard;
  AdaptorJoustLeagueInfoScreen::onClose((AdaptorJoustLeagueInfoScreen *)this);
  iVar1 = FUN_036d4694(*(undefined8 *)(this + 0x130),*(undefined8 *)(this + 0x140));
  if (iVar1 != 0) {
    getLevelToPlay();
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x128),(SexyURL *)asStack_10);
    std::string::~string(asStack_10);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftLevelSetup::onRiftNetworkResponse(int, int) */

void __thiscall
AdaptorRiftLevelSetup::onRiftNetworkResponse(AdaptorRiftLevelSetup *this,int param_1,int param_2)

{
  if (param_1 == 6) {
    if (param_2 == 2) {
      onSuccessResponse(this);
      return;
    }
    if (param_2 == 4) {
      JoustUtils::ShowJoustNetworkIssuePopup(1);
      return;
    }
  }
  return;
}


/* AdaptorRiftLevelSetup::needToAddFirstClearBackground(int) */

byte __thiscall
AdaptorRiftLevelSetup::needToAddFirstClearBackground(AdaptorRiftLevelSetup *this,int param_1)

{
  byte bVar1;
  byte bVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  bVar1 = PlayerInfo::HasReceivedFirstClearReward
                    (this_01,(uint)*(ushort *)(*(long *)(this + 0x120) + 0x8e),
                     *(int *)(this + 0x158));
  bVar2 = 1;
  if (param_1 != -1) {
    bVar2 = PlayerInfo::HasReceivedFirstClearReward
                      (this_01,(uint)*(ushort *)(*(long *)(this + 0x120) + 0x8e),param_1);
  }
  return bVar2 & (bVar1 ^ 1);
}


/* AdaptorRiftLevelSetup::needToRemoveFirstClearBackground(int) */

byte __thiscall
AdaptorRiftLevelSetup::needToRemoveFirstClearBackground(AdaptorRiftLevelSetup *this,int param_1)

{
  byte bVar1;
  byte bVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  bVar1 = PlayerInfo::HasReceivedFirstClearReward
                    (this_01,(uint)*(ushort *)(*(long *)(this + 0x120) + 0x8e),
                     *(int *)(this + 0x158));
  bVar2 = 0;
  if (param_1 != -1) {
    bVar2 = PlayerInfo::HasReceivedFirstClearReward
                      (this_01,(uint)*(ushort *)(*(long *)(this + 0x120) + 0x8e),param_1);
    bVar2 = bVar1 & (bVar2 ^ 1);
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLevelSetup::doAccept() */

void AdaptorRiftLevelSetup::doAccept(void)

{
  LawnApp *this;
  bool bVar1;
  int iVar2;
  int iVar3;
  PVZ2UIDialog *pPVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = RiftUtils::GetCurrentFuel();
  iVar3 = RiftUtils::GetFuelToPlay();
  this = gLawnApp;
  if (iVar2 < iVar3) {
    FUN_05478178(awStack_58,L"[RIFT_NOT_ENOUGH_FUEL_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[RIFT_NOT_ENOUGH_FUEL_TEXT]",auStack_60);
    pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar4,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
  }
  else {
    bVar1 = (bool)RiftUtils::IsPlayingZombossLevel();
    RiftUtils::SendPost_Play(bVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLevelSetup::AdaptorRiftLevelSetup() */

void __thiscall AdaptorRiftLevelSetup::AdaptorRiftLevelSetup(AdaptorRiftLevelSetup *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_06683110;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06683470;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066834b8;
  Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)(this + 0x128));
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  this[0x15c] = (AdaptorRiftLevelSetup)0x0;
  *(undefined4 *)(this + 0x158) = 0xffffffff;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRiftNetworkResponse);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<AdaptorRiftLevelSetup,void(AdaptorRiftLevelSetup::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::RiftNetworkResponseReceived,&local_50);
  pLVar2 = gLawnApp;
  std::string::string(asStack_28,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar2,asStack_28);
  std::string::~string(asStack_28);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_28,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar2,asStack_28);
  std::string::~string(asStack_28);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_28,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar2,asStack_28);
  std::string::~string(asStack_28);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_28,"UI_Fragment_Material");
  LawnApp::LoadGroup(pLVar2,asStack_28);
  std::string::~string(asStack_28);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_28,"UI_NewAvatar");
  LawnApp::LoadGroup(pLVar2,asStack_28);
  std::string::~string(asStack_28);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_28,"UI_HeadShot_BigAvatar");
  LawnApp::LoadGroup(pLVar2,asStack_28);
  std::string::~string(asStack_28);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_28,"UI_HeadShot_BigPlant");
  LawnApp::LoadGroup(pLVar2,asStack_28);
  std::string::~string(asStack_28);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_28,"UI_HeadshotFrame");
  LawnApp::LoadGroup(pLVar2,asStack_28);
  std::string::~string(asStack_28);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftLevelSetup::StaticNew() */

AdaptorRiftLevelSetup * AdaptorRiftLevelSetup::StaticNew(void)

{
  AdaptorRiftLevelSetup *this;
  
  this = ::operator_new(0x170);
  AdaptorRiftLevelSetup(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLevelSetup::onLoadUIView() */

void __thiscall AdaptorRiftLevelSetup::onLoadUIView(AdaptorRiftLevelSetup *this)

{
  HotUIManager *this_00;
  HotUIFile *pHVar1;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_40,"RiftLevelSetup");
  pHVar1 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_40,(map *)amStack_38);
  std::string::~string(asStack_40);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar1);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLevelSetup::onDifficultySelected(int) */

void AdaptorRiftLevelSetup::onDifficultySelected(int param_1)

{
  int iVar1;
  HotUIAdaptor *this;
  CachedUIResourcePtr *pCVar2;
  HotUIFile *pHVar3;
  HotUISeedPacketList *pHVar4;
  HotUISeedPacketList *pHVar5;
  RiftDifficultyInfo *pRVar6;
  undefined1 auStack_58 [16];
  string asStack_48 [8];
  wstring awStack_40 [8];
  string asStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  int local_28 [8];
  long local_8;
  
  this = (HotUIAdaptor *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"DifficultyBox1");
  if (*(int *)(this + 0x158) == 0) {
    pCVar2 = (CachedUIResourcePtr *)&DAT_06aadaf8;
  }
  else {
    pCVar2 = (CachedUIResourcePtr *)&DAT_06aada98;
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(pCVar2);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aadaf8);
  HotUIAdaptor::setButtonWidgetImage
            (this,asStack_38,aRStack_30,(RtWeakPtr<Sexy::ResourceInfo> *)local_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"DifficultyBox2");
  if (*(int *)(this + 0x158) == 1) {
    pCVar2 = (CachedUIResourcePtr *)&DAT_06aad920;
  }
  else {
    pCVar2 = (CachedUIResourcePtr *)&DAT_06aad970;
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(pCVar2);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aad920);
  HotUIAdaptor::setButtonWidgetImage
            (this,asStack_38,aRStack_30,(RtWeakPtr<Sexy::ResourceInfo> *)local_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"DifficultyBox3");
  if (*(int *)(this + 0x158) == 2) {
    pCVar2 = (CachedUIResourcePtr *)&DAT_06aad9f8;
  }
  else {
    pCVar2 = (CachedUIResourcePtr *)&DAT_06aada70;
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(pCVar2);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aad9f8);
  HotUIAdaptor::setButtonWidgetImage
            (this,asStack_38,aRStack_30,(RtWeakPtr<Sexy::ResourceInfo> *)local_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"SpeedRunBox1");
  if (*(int *)(this + 0x158) == 0) {
    pCVar2 = (CachedUIResourcePtr *)&DAT_06aada48;
  }
  else {
    pCVar2 = (CachedUIResourcePtr *)&DAT_06aadac0;
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(pCVar2);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aada48);
  HotUIAdaptor::setButtonWidgetImage
            (this,asStack_38,aRStack_30,(RtWeakPtr<Sexy::ResourceInfo> *)local_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"SpeedRunBox2");
  if (*(int *)(this + 0x158) == 1) {
    pCVar2 = (CachedUIResourcePtr *)&DAT_06aadb70;
  }
  else {
    pCVar2 = (CachedUIResourcePtr *)&DAT_06aada20;
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(pCVar2);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aadb70);
  HotUIAdaptor::setButtonWidgetImage
            (this,asStack_38,aRStack_30,(RtWeakPtr<Sexy::ResourceInfo> *)local_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  std::string::~string(asStack_38);
  nop();
  pHVar3 = (HotUIFile *)FUN_036d46b0(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)local_28,"BackupRewardImage");
  pHVar4 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar3,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  pHVar3 = (HotUIFile *)FUN_036d46b0(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)local_28,"BackupRewardSeedPacket");
  pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar3,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  (**(code **)(*(long *)pHVar4 + 0x158))(pHVar4,0);
  (**(code **)(*(long *)pHVar5 + 0x158))(pHVar5,0);
  getLevelToPlay();
  iVar1 = RiftUtils::GetRiftWorldIndexOfLevel(asStack_48);
  pRVar6 = (RiftDifficultyInfo *)RiftUtils::GetTargetLevelReward(iVar1,*(int *)(this + 0x158));
  RiftDifficultyInfo::RiftDifficultyInfo((RiftDifficultyInfo *)local_28,pRVar6);
  std::string::string((string *)aRStack_30,"ZPSRewardAmount");
  FUN_05478178(awStack_40,L"+{REWARD_AMT}%",auStack_58);
  TodReplaceNumberString(awStack_40,L"{REWARD_AMT}",local_28[0]);
  HotUIAdaptor::setLabelWidgetText(this,(string *)aRStack_30,(wstring *)asStack_38);
  FUN_05476c50(asStack_38);
  FUN_05476c50(awStack_40);
  nop();
  std::string::~string((string *)aRStack_30);
  nop();
  RiftDifficultyInfo::~RiftDifficultyInfo((RiftDifficultyInfo *)local_28);
  std::string::~string(asStack_48);
  std::string::string((string *)local_28,"AcceptButton");
  FUN_05478178(asStack_38,L"[RIFT_LEVEL_PLAY]",asStack_48);
  iVar1 = RiftUtils::GetPennyFuelCostForLevelNode((uint)*(ushort *)(*(long *)(this + 0x120) + 0x8e))
  ;
  TodReplaceNumberString((wstring *)asStack_38,L"{FUEL_AMT}",iVar1);
  HotUIAdaptor::setButtonWidgetText(this,(string *)local_28,(wstring *)aRStack_30);
  FUN_05476c50(aRStack_30);
  FUN_05476c50(asStack_38);
  nop();
  std::string::~string((string *)local_28);
  nop();
  pHVar3 = (HotUIFile *)FUN_036d46b0(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)local_28,"ZPSDisplay");
  HotUIFile::GetWidgetByName(pHVar3,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  std::string::string((string *)local_28,"FirstClearRewards");
  HotUIFile::GetWidgetByName(pHVar3,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  this[0x15c] = (HotUIAdaptor)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLevelSetup::RefreshBonusContent(int) */

void __thiscall AdaptorRiftLevelSetup::RefreshBonusContent(AdaptorRiftLevelSetup *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  HotUIFile *this_00;
  long *plVar15;
  RiftDifficultyInfo *pRVar16;
  Image *pIVar17;
  UIWidgetImage *this_01;
  long lVar18;
  int *piVar19;
  uint *puVar20;
  UIWidgetText *pUVar21;
  undefined8 uVar22;
  Widget *this_02;
  long *plVar23;
  ulong uVar24;
  code *pcVar25;
  string asStack_78 [8];
  wstring awStack_70 [8];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  RiftDifficultyInfo aRStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  int local_38 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_036d46b0(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)local_38,"BonusContent");
  plVar15 = (long *)HotUIFile::GetWidgetByName(this_00,(string *)local_38);
  std::string::~string((string *)local_38);
  nop();
  plVar23 = *(long **)(this + 0x160);
  if (plVar23 == (long *)0x0) {
    this_02 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_02);
    *(Widget **)(this + 0x160) = this_02;
    pcVar25 = *(code **)(*(long *)this_02 + 0x1a0);
    Sexy::Insets::Insets((Insets *)local_38,0,0,(int)plVar15[10],*(int *)((long)plVar15 + 0x54));
    (*pcVar25)(this_02,(string *)local_38);
    (**(code **)(*plVar15 + 0x60))(plVar15,*(undefined8 *)(this + 0x160));
  }
  else {
    (**(code **)(*plVar23 + 0x80))(plVar23,1,1);
  }
  getLevelToPlay();
  iVar2 = RiftUtils::GetRiftWorldIndexOfLevel(asStack_78);
  pRVar16 = (RiftDifficultyInfo *)RiftUtils::GetTargetLevelReward(iVar2,param_1);
  RiftDifficultyInfo::RiftDifficultyInfo(aRStack_58,pRVar16);
  iVar3 = FUN_036d4a48(0x32);
  uVar4 = FUN_036d4a48(0x28);
  uVar5 = FUN_036d4a48(0x168);
  uVar6 = FUN_036d4a48(100);
  iVar7 = FUN_036d4a48(0xa0);
  iVar8 = FUN_036d4a48(0x12);
  iVar9 = FUN_036d4a48(0x2d);
  iVar10 = FUN_036d4a48(10);
  uVar22 = local_50;
  iVar11 = FUN_036d49bc(local_50,local_48);
  if (0 < iVar11) {
    uVar24 = 0;
    while( true ) {
      piVar19 = (int *)FUN_036d49c8(uVar22,uVar24);
      GetGameItemInfo(*piVar19,0x7fffffff,0);
      if (local_38[0] == 0) {
        puVar20 = (uint *)FUN_036d49c8(local_50,uVar24);
        Sexy::OutputDebugStrF
                  ((wchar_t *)"AdaptorRiftLevelSetup::RefreshBonusContent id = %d",(ulong)*puVar20);
        GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
        uVar22 = local_50;
      }
      else {
        pIVar17 = (Image *)StringHelper::ToImage(asStack_18,true);
        uVar22 = FUN_0547429c(asStack_18);
        Sexy::OutputDebugStrF((wchar_t *)"AdaptorRiftLevelSetup::RefreshBonusContent %s",uVar22);
        this_01 = ::operator_new(0x118);
        UIWidgetImage::UIWidgetImage(this_01,pIVar17);
        (**(code **)(*(long *)this_01 + 0x198))(this_01,iVar7,iVar10,iVar3,iVar3);
        local_68 = 2;
        UIWidgetImage::SetImageType(this_01,(Color *)&local_68,0.0);
        (**(code **)(**(long **)(this + 0x160) + 0x60))(*(long **)(this + 0x160),this_01);
        lVar18 = FUN_036d49c8(local_50,uVar24);
        Sexy::StrFormat(L"+%d",awStack_70,(ulong)*(uint *)(lVar18 + 4));
        pUVar21 = ::operator_new(0x108);
        UIWidgetText::UIWidgetText(pUVar21,awStack_70);
        iVar12 = FUN_036d4a48(10);
        iVar13 = FUN_036d4a48(3);
        iVar14 = FUN_036d4a48(0x14);
        (**(code **)(*(long *)pUVar21 + 0x198))
                  (pUVar21,iVar7 - iVar12,(iVar3 + iVar10) - iVar13,iVar14 + iVar3,uVar4);
        uVar22 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
        FUN_036d49ac(pUVar21 + 0xe8,uVar22);
        FUN_036d49b4(pUVar21 + 0xe0,5);
        Sexy::Color::Color((Color *)&local_68);
        local_68 = 0xec;
        local_60 = 0;
        local_64 = 0x6a;
        (**(code **)(*(long *)pUVar21 + 0x170))(pUVar21,0,(Color *)&local_68);
        (**(code **)(**(long **)(this + 0x160) + 0x60))(*(long **)(this + 0x160),pUVar21);
        iVar7 = iVar7 + iVar3 + iVar9;
        FUN_05476c50(awStack_70);
        GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
        uVar22 = local_50;
      }
      if (uVar24 == iVar11 - 1) break;
      uVar24 = uVar24 + 1;
      local_50 = uVar22;
    }
  }
  iVar7 = RiftUtils::GetCurrentMapEventSubType();
  if (iVar7 == 2) {
    iVar7 = RiftUtils::GetMaxScore(1,param_1);
  }
  else {
    getLevelToPlay();
    cVar1 = RiftUtils::IsRiftTimedLevel((string *)local_38);
    uVar4 = 2;
    if (cVar1 == '\0') {
      uVar4 = 0;
    }
    iVar7 = RiftUtils::GetMaxScore(uVar4,param_1);
    std::string::~string((string *)local_38);
  }
  iVar2 = RiftUtils::GetTargetLevelMaxScore(iVar2,param_1);
  TodStringTranslate(L"[RIFT_LEVEL_SETUP_MAX_SCORE]");
  TodReplaceNumberString((wstring *)&local_68,L"{NUMS}",iVar2);
  TodReplaceNumberString((wstring *)local_38,L"{NUMSMAX}",iVar7);
  FUN_05476c50((string *)local_38);
  FUN_05476c50((wstring *)&local_68);
  pUVar21 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar21,awStack_70);
  (**(code **)(*(long *)pUVar21 + 0x198))(pUVar21,0,iVar3 + iVar8 + iVar3 / 2,uVar5,uVar6);
  uVar22 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  FUN_036d49ac(pUVar21 + 0xe8,uVar22);
  FUN_036d49b4(pUVar21 + 0xe0,2);
  pcVar25 = *(code **)(*(long *)pUVar21 + 0x170);
  Sexy::Color::Color((Color *)local_38,1);
  (*pcVar25)(pUVar21,0,(string *)local_38);
  (**(code **)(**(long **)(this + 0x160) + 0x60))(*(long **)(this + 0x160),pUVar21);
  FUN_05476c50(awStack_70);
  RiftDifficultyInfo::~RiftDifficultyInfo(aRStack_58);
  std::string::~string(asStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftLevelSetup::selectDifficulty(int) */

void __thiscall AdaptorRiftLevelSetup::selectDifficulty(AdaptorRiftLevelSetup *this,int param_1)

{
  if (*(int *)(this + 0x158) != param_1) {
    this[0x15c] = (AdaptorRiftLevelSetup)0x1;
    *(int *)(this + 0x158) = param_1;
    RiftUtils::SetDifficultyForNextLevel(param_1);
    if (*(AdaptorRiftDifficultyList **)(this + 0x168) != (AdaptorRiftDifficultyList *)0x0) {
      AdaptorRiftDifficultyList::RefreshDifficultyView
                (*(AdaptorRiftDifficultyList **)(this + 0x168));
    }
    onDifficultySelected((int)this);
    RefreshBonusContent(this,param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLevelSetup::onLinkToUIViewCreated() */

void __thiscall AdaptorRiftLevelSetup::onLinkToUIViewCreated(AdaptorRiftLevelSetup *this)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  HotUIFile *this_00;
  Widget *pWVar6;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  WorldDataManager *this_03;
  MapEventItem *pMVar7;
  CachedUIResourcePtr *pCVar8;
  undefined8 uVar9;
  AdaptorRiftDifficultyList *this_04;
  long lVar10;
  wstring awStack_28 [8];
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_036d46b0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"RiftLevelSetup");
  pWVar6 = (Widget *)HotUIFile::GetWidgetByName(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(gLawnApp + 0x360),pWVar6);
  std::string::string(asStack_10,"AcceptButton");
  HotUIAdaptor::registerButton((HotUIAdaptor *)this,asStack_10,1,false,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"BackButton");
  HotUIAdaptor::registerButton((HotUIAdaptor *)this,asStack_10,0,false,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"DifficultyBox1");
  HotUIAdaptor::registerButton((HotUIAdaptor *)this,asStack_10,2,false,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"DifficultyBox2");
  HotUIAdaptor::registerButton((HotUIAdaptor *)this,asStack_10,3,false,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"DifficultyBox3");
  HotUIAdaptor::registerButton((HotUIAdaptor *)this,asStack_10,4,false,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"DifficultyModifierInfoButton");
  HotUIAdaptor::registerButton((HotUIAdaptor *)this,asStack_10,5,false,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SpeedRunBox1");
  HotUIAdaptor::registerButton((HotUIAdaptor *)this,asStack_10,2,false,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SpeedRunBox2");
  HotUIAdaptor::registerButton((HotUIAdaptor *)this,asStack_10,3,false,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"DialogTitle");
  TodStringTranslate(L"[RIFT_LEVEL_SETUP_TITLE_NEW]");
  Sexy::StrFormat(L"%d",asStack_20,(ulong)*(ushort *)(*(long *)(this + 0x120) + 0x8e));
  TodReplaceString(awStack_28,L"{LEVEL_NUMBER}",(wstring *)asStack_20);
  HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,asStack_10,(wstring *)aRStack_18);
  FUN_05476c50(aRStack_18);
  FUN_05476c50(asStack_20);
  FUN_05476c50(awStack_28);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"DialogTitleLevelIcon");
  RiftUtils::GetNodeSubTypeIcon
            ((RiftUtils *)aRStack_18,*(undefined4 *)(*(long *)(this + 0x120) + 0x18));
  HotUIAdaptor::setImageWidgetImage((HotUIAdaptor *)this,asStack_10,aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"FirstClearRewards");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Separator");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  getLevelToPlay();
  this_03 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  pMVar7 = (MapEventItem *)WorldDataManager::FindEventByLevelName(this_03,asStack_20);
  cVar2 = RiftUtils::IsRiftTimedLevel(pMVar7);
  if (cVar2 == '\0') {
    std::string::string(asStack_10,"SpeedRunRow");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    InitMode(this,false);
    bVar3 = PlayerInfo::HasReceivedFirstClearReward
                      (this_02,(uint)*(ushort *)(*(long *)(this + 0x120) + 0x8e),0);
    bVar4 = PlayerInfo::HasReceivedFirstClearReward
                      (this_02,(uint)*(ushort *)(*(long *)(this + 0x120) + 0x8e),1);
    bVar5 = PlayerInfo::HasReceivedFirstClearReward
                      (this_02,(uint)*(ushort *)(*(long *)(this + 0x120) + 0x8e),2);
    std::string::string((string *)aRStack_18,"DifficultyBox1Pepper");
    if (bVar3 == 0) {
      pCVar8 = (CachedUIResourcePtr *)&DAT_06aadbb8;
    }
    else {
      pCVar8 = (CachedUIResourcePtr *)&DAT_06aadc48;
    }
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr(pCVar8);
    HotUIAdaptor::setImageWidgetImage((HotUIAdaptor *)this,aRStack_18,asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    std::string::~string((string *)aRStack_18);
    nop();
    std::string::string((string *)aRStack_18,"DifficultyBox2Pepper");
    if (bVar4 == 0) {
      pCVar8 = (CachedUIResourcePtr *)&DAT_06aadbe8;
    }
    else {
      pCVar8 = (CachedUIResourcePtr *)&DAT_06aad9d0;
    }
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr(pCVar8);
    HotUIAdaptor::setImageWidgetImage((HotUIAdaptor *)this,aRStack_18,asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    std::string::~string((string *)aRStack_18);
    nop();
    std::string::string((string *)aRStack_18,"DifficultyBox3Pepper");
    if (bVar5 == 0) {
      pCVar8 = (CachedUIResourcePtr *)&DAT_06aad948;
    }
    else {
      pCVar8 = (CachedUIResourcePtr *)&DAT_06aad9a0;
    }
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr(pCVar8);
    HotUIAdaptor::setImageWidgetImage((HotUIAdaptor *)this,aRStack_18,asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    std::string::~string((string *)aRStack_18);
    nop();
    std::string::string(asStack_10,"DifficultyBox1Chest");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,(bool)(bVar3 ^ 1));
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"DifficultyBox2Chest");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,(bool)(bVar4 ^ 1));
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"DifficultyBox3Chest");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,(bool)(bVar5 ^ 1));
    std::string::~string(asStack_10);
    nop();
  }
  else {
    std::string::string(asStack_10,"DifficultySelectionRow");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    bVar3 = PlayerInfo::HasReceivedFirstClearReward
                      (this_02,(uint)*(ushort *)(*(long *)(this + 0x120) + 0x8e),0);
    bVar4 = PlayerInfo::HasReceivedFirstClearReward
                      (this_02,(uint)*(ushort *)(*(long *)(this + 0x120) + 0x8e),1);
    std::string::string(asStack_10,"SpeedRunBoxChest1");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,(bool)(bVar3 ^ 1));
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"SpeedRunBoxChest2");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,(bool)(bVar4 ^ 1));
    std::string::~string(asStack_10);
    nop();
    InitMode(this,true);
  }
  std::string::string(asStack_10,"DifficultyListHolder");
  uVar9 = HotUIFile::GetWidgetByName(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_04 = ::operator_new(0x160);
  AdaptorRiftDifficultyList::AdaptorRiftDifficultyList(this_04);
  lVar10 = *(long *)(this + 0x120);
  uVar1 = *(undefined4 *)(lVar10 + 0x18);
  *(AdaptorRiftDifficultyList **)(this + 0x168) = this_04;
  std::string::string(asStack_10,"RiftDifficultyList");
  AdaptorRiftDifficultyList::Configure(this_04,uVar9,lVar10 + 0x28,uVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x168));
  selectDifficulty(this,0);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLevelSetup::ButtonDepress(int) */

void __thiscall AdaptorRiftLevelSetup::ButtonDepress(AdaptorRiftLevelSetup *this,int param_1)

{
  AdaptorDifficultyModifierFullScrollWidget *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x15c] == (AdaptorRiftLevelSetup)0x0) {
    switch(param_1) {
    case 0:
      AdaptorJoustLeagueInfoScreen::onClose((AdaptorJoustLeagueInfoScreen *)this);
      break;
    case 1:
      doAccept();
      break;
    case 2:
      selectDifficulty(this,0);
      break;
    case 3:
      selectDifficulty(this,1);
      break;
    case 4:
      selectDifficulty(this,2);
      break;
    case 5:
      this_00 = ::operator_new(0x140);
      AdaptorDifficultyModifierFullScrollWidget::AdaptorDifficultyModifierFullScrollWidget(this_00);
      getLevelToPlay();
      NetworkCacheQueue::setTencentUserID((string *)this_00);
      std::string::~string(asStack_10);
      HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this_00);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to AdaptorRiftLevelSetup::ButtonDepress(int) */

void __thiscall AdaptorRiftLevelSetup::ButtonDepress(AdaptorRiftLevelSetup *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

