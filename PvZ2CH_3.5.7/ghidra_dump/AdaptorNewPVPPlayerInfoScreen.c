// Class: AdaptorNewPVPPlayerInfoScreen


/* AdaptorNewPVPPlayerInfoScreen::Setup(AdaptorNewPVPEntryScreenConfig const&) */

void __thiscall
AdaptorNewPVPPlayerInfoScreen::Setup
          (AdaptorNewPVPPlayerInfoScreen *this,AdaptorNewPVPEntryScreenConfig *param_1)

{
  AdaptorNewPVPEntryScreenConfig::operator=
            ((AdaptorNewPVPEntryScreenConfig *)(this + 0x120),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPPlayerInfoScreen::StaticClassInit() */

void AdaptorNewPVPPlayerInfoScreen::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorNewPVPPlayerInfoScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_034bc46c,0x180,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPPlayerInfoScreen::StaticGetClass() */

long * AdaptorNewPVPPlayerInfoScreen::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorNewPVPPlayerInfoScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorNewPVPPlayerInfoScreen::GetClass() const */

long * AdaptorNewPVPPlayerInfoScreen::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorNewPVPPlayerInfoScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPPlayerInfoScreen::updateTabImages(int) */

void __thiscall
AdaptorNewPVPPlayerInfoScreen::updateTabImages(AdaptorNewPVPPlayerInfoScreen *this,int param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  RtWeakPtrBase *pRVar3;
  ulong uVar4;
  undefined8 uVar5;
  HotUIButton *pHVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0x168);
    uVar1 = FUN_034b04e0(uVar5,*(undefined8 *)(this + 0x170));
    if (uVar1 <= uVar4) break;
    if (param_1 == (int)uVar4) {
      puVar2 = (undefined8 *)FUN_034b04ec(uVar5,uVar4);
      pHVar6 = (HotUIButton *)*puVar2;
      pRVar3 = (RtWeakPtrBase *)FUN_034b04f4(*(undefined8 *)(this + 0x150),uVar4);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar3);
      HotUIButton::SetUpImage(pHVar6,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      puVar2 = (undefined8 *)FUN_034b04ec(*(undefined8 *)(this + 0x168),uVar4);
      pHVar6 = (HotUIButton *)*puVar2;
      uVar5 = *(undefined8 *)(this + 0x150);
    }
    else {
      puVar2 = (undefined8 *)FUN_034b04ec(uVar5,uVar4);
      pHVar6 = (HotUIButton *)*puVar2;
      pRVar3 = (RtWeakPtrBase *)FUN_034b04f4(*(undefined8 *)(this + 0x138),uVar4);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar3);
      HotUIButton::SetUpImage(pHVar6,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      puVar2 = (undefined8 *)FUN_034b04ec(*(undefined8 *)(this + 0x168),uVar4);
      pHVar6 = (HotUIButton *)*puVar2;
      uVar5 = *(undefined8 *)(this + 0x138);
    }
    pRVar3 = (RtWeakPtrBase *)FUN_034b04f4(uVar5,uVar4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar3);
    HotUIButton::SetDownImage(pHVar6,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    puVar2 = (undefined8 *)FUN_034b04ec(*(undefined8 *)(this + 0x168),uVar4);
    (**(code **)(*(long *)*puVar2 + 0xd8))((long *)*puVar2);
    uVar4 = uVar4 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPPlayerInfoScreen::showTab(int) */

void __thiscall
AdaptorNewPVPPlayerInfoScreen::showTab(AdaptorNewPVPPlayerInfoScreen *this,int param_1)

{
  string *psVar1;
  char cVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  psVar1 = (string *)(this + 0x130);
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_0547419c(psVar1);
  if (cVar2 == '\0') {
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,psVar1,false);
  }
  Sexy::StrFormat("%d",asStack_10,(ulong)(uint)param_1);
  std::operator+((string *)&DAT_06aa3b68,asStack_10);
  std::string::~string(asStack_10);
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_18,true);
  thunk_FUN_05475e00(psVar1,asStack_18);
  updateTabImages(this,param_1 + -1);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPPlayerInfoScreen::ButtonDepress(int) */

void __thiscall
AdaptorNewPVPPlayerInfoScreen::ButtonDepress(AdaptorNewPVPPlayerInfoScreen *this,int param_1)

{
  ulong uVar1;
  
  if ((param_1 != 10) &&
     (uVar1 = FUN_034b04e0(*(undefined8 *)(this + 0x168),*(undefined8 *)(this + 0x170)),
     (ulong)(long)param_1 < uVar1)) {
    showTab(this,param_1 + 1);
    return;
  }
  return;
}


/* non-virtual thunk to AdaptorNewPVPPlayerInfoScreen::ButtonDepress(int) */

void __thiscall
AdaptorNewPVPPlayerInfoScreen::ButtonDepress(AdaptorNewPVPPlayerInfoScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPPlayerInfoScreen::updateAvatarIcon() */

void __thiscall AdaptorNewPVPPlayerInfoScreen::updateAvatarIcon(AdaptorNewPVPPlayerInfoScreen *this)

{
  HotUISeedPacketList *pHVar1;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"PlayerIconBottom");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  JoustUtils::AvatarGetBottomImagePtr((JoustUtils *)(ulong)*(uint *)(this + 0x128),extraout_w1);
  HotUIImage::SetImage((HotUIImage *)pHVar1,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::string(asStack_10,"PlayerIcon");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  JoustUtils::AvatarGetImagePtr((JoustUtils *)(ulong)*(uint *)(this + 0x128),extraout_w1_00);
  HotUIImage::SetImage((HotUIImage *)pHVar1,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::string(asStack_10,"PlayerIconFrame");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  JoustUtils::AvatarGetFrameImagePtr((JoustUtils *)(ulong)*(uint *)(this + 0x128),extraout_w1_01);
  HotUIImage::SetImage((HotUIImage *)pHVar1,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::string(asStack_10,"PlayerIconEffect");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pHVar1 + 0x158))(pHVar1,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPPlayerInfoScreen::updateRankAvatar() */

void __thiscall AdaptorNewPVPPlayerInfoScreen::updateRankAvatar(AdaptorNewPVPPlayerInfoScreen *this)

{
  HotUISeedPacketList *pHVar1;
  string *extraout_x1;
  string asStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  int local_38 [4];
  Sexy aSStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetGameItemInfo(*(int *)(this + 300),0x7fffffff,0);
  if (local_38[0] == 0) {
    std::string::string(asStack_40,"PlayerNameLabelBg_Rank_Avatar");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_40,true);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"PlayerNameLabelBg_Rank_Avatar");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),asStack_40);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_50,"IMAGE_UI_NEW_PVP_RANK_AVATAR_RANK_AVATAR_DEFAULT");
    nop();
  }
  else {
    std::string::string(asStack_40,"PlayerNameLabelBg_Rank_Avatar");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_40,true);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"PlayerNameLabelBg_Rank_Avatar");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),asStack_40);
    std::string::~string(asStack_40);
    nop();
    Sexy::Upper(aSStack_28,extraout_x1);
    std::operator+("IMAGE_UI_NEW_PVP_RANK_AVATAR_",asStack_40);
    std::string::~string(asStack_40);
  }
  GetUIResource<Sexy::Image>(asStack_50);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_40,(RtWeakPtrBase *)aRStack_48);
  HotUIImage::SetImage((HotUIImage *)pHVar1,asStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  std::string::~string(asStack_50);
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPPlayerInfoScreen::AdaptorNewPVPPlayerInfoScreen() */

void __thiscall
AdaptorNewPVPPlayerInfoScreen::AdaptorNewPVPPlayerInfoScreen(AdaptorNewPVPPlayerInfoScreen *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_06648470;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066487d0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06648818;
  AdaptorNewPVPEntryScreenConfig::AdaptorNewPVPEntryScreenConfig
            ((AdaptorNewPVPEntryScreenConfig *)(this + 0x120));
  std::string::string((string *)(this + 0x130),"");
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPPlayerInfoScreen::StaticNew() */

AdaptorNewPVPPlayerInfoScreen * AdaptorNewPVPPlayerInfoScreen::StaticNew(void)

{
  AdaptorNewPVPPlayerInfoScreen *this;
  
  this = ::operator_new(0x180);
  AdaptorNewPVPPlayerInfoScreen(this);
  return this;
}


/* AdaptorNewPVPPlayerInfoScreen::~AdaptorNewPVPPlayerInfoScreen() */

void __thiscall
AdaptorNewPVPPlayerInfoScreen::~AdaptorNewPVPPlayerInfoScreen(AdaptorNewPVPPlayerInfoScreen *this)

{
  *(undefined ***)this = &PTR_GetClass_06648470;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066487d0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06648818;
  std::vector<HotUIButton*,std::allocator<HotUIButton*>>::~vector
            ((vector<HotUIButton*,std::allocator<HotUIButton*>> *)(this + 0x168));
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::~vector
            ((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
             (this + 0x150));
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::~vector
            ((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
             (this + 0x138));
  std::string::~string((string *)(this + 0x130));
  std::pair<std::wstring_const,Sexy::DataElement*>::~pair
            ((pair<std::wstring_const,Sexy::DataElement*> *)(this + 0x120));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorNewPVPPlayerInfoScreen::~AdaptorNewPVPPlayerInfoScreen() */

void __thiscall
AdaptorNewPVPPlayerInfoScreen::~AdaptorNewPVPPlayerInfoScreen(AdaptorNewPVPPlayerInfoScreen *this)

{
  ~AdaptorNewPVPPlayerInfoScreen(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPPlayerInfoScreen::onLoadUIView() */

void __thiscall AdaptorNewPVPPlayerInfoScreen::onLoadUIView(AdaptorNewPVPPlayerInfoScreen *this)

{
  ProfileMgr *this_00;
  long lVar1;
  HotUIManager *this_01;
  HotUIFile *this_02;
  HotUISeedPacketList *pHVar2;
  wstring *extraout_x1;
  undefined1 auVar3 [16];
  Sexy aSStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar1 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar1 == 0) {
    FUN_05478178(aSStack_50,L"-invalid-",asStack_40);
    nop();
  }
  else {
    PlayerInfo::AM_GetName();
  }
  std::string::string(asStack_48,"$PLAYERNAME");
  auVar3 = std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_38,asStack_48);
  Sexy::SexyStringToUTF8String(aSStack_50,auVar3._8_8_);
  FUN_05474278(auVar3._0_8_,asStack_40);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  nop();
  this_01 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_40,"NewPVPPlayerInfoScreen");
  this_02 = (HotUIFile *)HotUIManager::LoadUIFile(this_01,asStack_40,(map *)amStack_38);
  std::string::~string(asStack_40);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,this_02);
  std::string::string(asStack_40,"PlayerNameLabel");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_02,asStack_40);
  std::string::~string(asStack_40);
  nop();
  Sexy::ToWString(aSStack_50,extraout_x1);
  (**(code **)(*(long *)pHVar2 + 0x360))(pHVar2,asStack_40);
  FUN_05476c50(asStack_40);
  FUN_05476c50(aSStack_50);
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
/* AdaptorNewPVPPlayerInfoScreen::setup() */

void __thiscall AdaptorNewPVPPlayerInfoScreen::setup(AdaptorNewPVPPlayerInfoScreen *this)

{
  undefined4 uVar1;
  HotUIFile *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar2;
  HotUISeedPacketList *pHVar3;
  HotUIFile *this_03;
  undefined8 *puVar4;
  ulong uVar5;
  wstring *extraout_x1;
  wstring *pwVar6;
  wstring *extraout_x1_00;
  ulong uVar7;
  undefined8 uVar8;
  Sexy aSStack_48 [8];
  undefined1 auStack_40 [8];
  string asStack_38 [8];
  AdaptorNewPVPEntryScreenConfig aAStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    if (this_02 == (PlayerInfo *)0x0) {
      FUN_05478178(aSStack_48,L"-invalid-",asStack_20);
      nop();
      pwVar6 = extraout_x1_00;
    }
    else {
      PlayerInfo::AM_GetName();
      pwVar6 = extraout_x1;
    }
    Sexy::ToWString(aSStack_48,pwVar6);
    uVar1 = PlayerInfo::GetCurrentRankAvatar(this_02);
    AdaptorNewPVPEntryScreenConfig::AdaptorNewPVPEntryScreenConfig(aAStack_30);
    thunk_FUN_05477b9c(aAStack_30,auStack_40);
    lVar2 = DSingleton<UserInfo>::getInstance();
    local_28 = FUN_034ad950(*(undefined4 *)(lVar2 + 0x24));
    local_24 = uVar1;
    Setup(this,aAStack_30);
    std::string::string(asStack_20,"BackToMenu");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,10,(ButtonListener *)(this + 0xd8));
    this_03 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
    std::string::string(asStack_20,"LeftButtonList");
    HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_03,asStack_20);
    std::string::~string(asStack_20);
    nop();
    HotUIVerticalButtonList::GetButtons();
    std::vector<HotUIButton*,std::allocator<HotUIButton*>>::operator=
              ((vector<HotUIButton*,std::allocator<HotUIButton*>> *)(this + 0x168),
               (vector *)asStack_20);
    std::vector<HotUIButton*,std::allocator<HotUIButton*>>::~vector
              ((vector<HotUIButton*,std::allocator<HotUIButton*>> *)asStack_20);
    uVar7 = 0;
    while( true ) {
      uVar8 = *(undefined8 *)(this + 0x168);
      uVar5 = FUN_034b04e0(uVar8,*(undefined8 *)(this + 0x170));
      if (uVar5 <= uVar7) break;
      puVar4 = (undefined8 *)FUN_034b04ec(uVar8,uVar7);
      HotUIButton::SetListener((HotUIButton *)*puVar4,(int)uVar7,(ButtonListener *)(this + 0xd8));
      FUN_034b04ec(*(undefined8 *)(this + 0x168),uVar7);
      HotUIButton::GetUpImage();
      std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::
      push_back((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *
                )(this + 0x138),(RtWeakPtr *)asStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
      FUN_034b04ec(*(undefined8 *)(this + 0x168),uVar7);
      HotUIButton::GetDownImage();
      std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::
      push_back((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *
                )(this + 0x150),(RtWeakPtr *)asStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
      Sexy::StrFormat("%d",asStack_20,uVar7 + 1 & 0xffffffff);
      std::operator+((string *)&DAT_06aa3b68,asStack_20);
      std::string::~string(asStack_20);
      HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_38,false);
      std::string::~string(asStack_38);
      uVar7 = uVar7 + 1;
    }
    std::string::string(asStack_20,"PlantPacketContainer");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    FUN_034ad884(pHVar3 + 0x228,0);
    HotUIWidgetPacketContainer::AddPacket((HotUIWidgetPacketContainer *)pHVar3,0x3f1);
    HotUIWidgetPacketContainer::AddPacket((HotUIWidgetPacketContainer *)pHVar3,0x3f2);
    HotUIWidgetPacketContainer::AddPacket((HotUIWidgetPacketContainer *)pHVar3,0x3f3);
    std::string::string(asStack_20,"ZombiePacketContainer");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    FUN_034ad884(pHVar3 + 0x228,1);
    HotUIWidgetPacketContainer::AddPacket((HotUIWidgetPacketContainer *)pHVar3,0x32);
    HotUIWidgetPacketContainer::AddPacket((HotUIWidgetPacketContainer *)pHVar3,0x33);
    HotUIWidgetPacketContainer::AddPacket((HotUIWidgetPacketContainer *)pHVar3,0x34);
    showTab(this,1);
    updateRankAvatar(this);
    updateAvatarIcon(this);
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)aAStack_30);
    FUN_05476c50(auStack_40);
    FUN_05476c50(aSStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPPlayerInfoScreen::onLinkToUIViewCreated() */

void __thiscall
AdaptorNewPVPPlayerInfoScreen::onLinkToUIViewCreated(AdaptorNewPVPPlayerInfoScreen *this)

{
  undefined4 uVar1;
  HotUIFile *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar2;
  HotUISeedPacketList *pHVar3;
  HotUIFile *this_03;
  undefined8 *puVar4;
  ulong uVar5;
  wstring *extraout_x1;
  wstring *pwVar6;
  wstring *extraout_x1_00;
  ulong uVar7;
  undefined8 uVar8;
  Sexy aSStack_48 [8];
  undefined1 auStack_40 [8];
  string asStack_38 [8];
  AdaptorNewPVPEntryScreenConfig aAStack_30 [8];
  undefined4 uStack_28;
  undefined4 uStack_24;
  string asStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    if (this_02 == (PlayerInfo *)0x0) {
      FUN_05478178(aSStack_48,L"-invalid-",asStack_20);
      nop();
      pwVar6 = extraout_x1_00;
    }
    else {
      PlayerInfo::AM_GetName();
      pwVar6 = extraout_x1;
    }
    Sexy::ToWString(aSStack_48,pwVar6);
    uVar1 = PlayerInfo::GetCurrentRankAvatar(this_02);
    AdaptorNewPVPEntryScreenConfig::AdaptorNewPVPEntryScreenConfig(aAStack_30);
    thunk_FUN_05477b9c(aAStack_30,auStack_40);
    lVar2 = DSingleton<UserInfo>::getInstance();
    uStack_28 = FUN_034ad950(*(undefined4 *)(lVar2 + 0x24));
    uStack_24 = uVar1;
    Setup(this,aAStack_30);
    std::string::string(asStack_20,"BackToMenu");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,10,(ButtonListener *)(this + 0xd8));
    this_03 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
    std::string::string(asStack_20,"LeftButtonList");
    HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_03,asStack_20);
    std::string::~string(asStack_20);
    nop();
    HotUIVerticalButtonList::GetButtons();
    std::vector<HotUIButton*,std::allocator<HotUIButton*>>::operator=
              ((vector<HotUIButton*,std::allocator<HotUIButton*>> *)(this + 0x168),
               (vector *)asStack_20);
    std::vector<HotUIButton*,std::allocator<HotUIButton*>>::~vector
              ((vector<HotUIButton*,std::allocator<HotUIButton*>> *)asStack_20);
    uVar7 = 0;
    while( true ) {
      uVar8 = *(undefined8 *)(this + 0x168);
      uVar5 = FUN_034b04e0(uVar8,*(undefined8 *)(this + 0x170));
      if (uVar5 <= uVar7) break;
      puVar4 = (undefined8 *)FUN_034b04ec(uVar8,uVar7);
      HotUIButton::SetListener((HotUIButton *)*puVar4,(int)uVar7,(ButtonListener *)(this + 0xd8));
      FUN_034b04ec(*(undefined8 *)(this + 0x168),uVar7);
      HotUIButton::GetUpImage();
      std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::
      push_back((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *
                )(this + 0x138),(RtWeakPtr *)asStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
      FUN_034b04ec(*(undefined8 *)(this + 0x168),uVar7);
      HotUIButton::GetDownImage();
      std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::
      push_back((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *
                )(this + 0x150),(RtWeakPtr *)asStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
      Sexy::StrFormat("%d",asStack_20,uVar7 + 1 & 0xffffffff);
      std::operator+((string *)&DAT_06aa3b68,asStack_20);
      std::string::~string(asStack_20);
      HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_38,false);
      std::string::~string(asStack_38);
      uVar7 = uVar7 + 1;
    }
    std::string::string(asStack_20,"PlantPacketContainer");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    FUN_034ad884(pHVar3 + 0x228,0);
    HotUIWidgetPacketContainer::AddPacket((HotUIWidgetPacketContainer *)pHVar3,0x3f1);
    HotUIWidgetPacketContainer::AddPacket((HotUIWidgetPacketContainer *)pHVar3,0x3f2);
    HotUIWidgetPacketContainer::AddPacket((HotUIWidgetPacketContainer *)pHVar3,0x3f3);
    std::string::string(asStack_20,"ZombiePacketContainer");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    FUN_034ad884(pHVar3 + 0x228,1);
    HotUIWidgetPacketContainer::AddPacket((HotUIWidgetPacketContainer *)pHVar3,0x32);
    HotUIWidgetPacketContainer::AddPacket((HotUIWidgetPacketContainer *)pHVar3,0x33);
    HotUIWidgetPacketContainer::AddPacket((HotUIWidgetPacketContainer *)pHVar3,0x34);
    showTab(this,1);
    updateRankAvatar(this);
    updateAvatarIcon(this);
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)aAStack_30);
    FUN_05476c50(auStack_40);
    FUN_05476c50(aSStack_48);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

