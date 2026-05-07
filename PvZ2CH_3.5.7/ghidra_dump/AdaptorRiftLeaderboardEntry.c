// Class: AdaptorRiftLeaderboardEntry


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLeaderboardEntry::StaticClassInit() */

void AdaptorRiftLeaderboardEntry::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorRiftLeaderboardEntry");
    (*pcVar2)(plVar1,asStack_10,FUN_036701b0,0x158,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftLeaderboardEntry::StaticGetClass() */

long * AdaptorRiftLeaderboardEntry::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftLeaderboardEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRiftLeaderboardEntry::GetClass() const */

long * AdaptorRiftLeaderboardEntry::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftLeaderboardEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRiftLeaderboardEntry::~AdaptorRiftLeaderboardEntry() */

void __thiscall
AdaptorRiftLeaderboardEntry::~AdaptorRiftLeaderboardEntry(AdaptorRiftLeaderboardEntry *this)

{
  *(undefined ***)this = &PTR_GetClass_06679090;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066793f0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06679438;
  PVZ2UIButtonPart::~PVZ2UIButtonPart((PVZ2UIButtonPart *)(this + 0x128));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorRiftLeaderboardEntry::~AdaptorRiftLeaderboardEntry() */

void __thiscall
AdaptorRiftLeaderboardEntry::~AdaptorRiftLeaderboardEntry(AdaptorRiftLeaderboardEntry *this)

{
  ~AdaptorRiftLeaderboardEntry(this);
  AK::FreeHook(this);
  return;
}


/* AdaptorRiftLeaderboardEntry::AdaptorRiftLeaderboardEntry() */

void __thiscall
AdaptorRiftLeaderboardEntry::AdaptorRiftLeaderboardEntry(AdaptorRiftLeaderboardEntry *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined ***)this = &PTR_GetClass_06679090;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066793f0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06679438;
  AdaptorJoustLeaderboardEntryConfig::AdaptorJoustLeaderboardEntryConfig
            ((AdaptorJoustLeaderboardEntryConfig *)(this + 0x128));
  return;
}


/* AdaptorRiftLeaderboardEntry::StaticNew() */

AdaptorRiftLeaderboardEntry * AdaptorRiftLeaderboardEntry::StaticNew(void)

{
  AdaptorRiftLeaderboardEntry *this;
  
  this = ::operator_new(0x158);
  AdaptorRiftLeaderboardEntry(this);
  return this;
}


/* AdaptorRiftLeaderboardEntry::Configure(Sexy::WidgetContainer*, AdaptorRiftLeaderboardEntryConfig
   const&) */

void __thiscall
AdaptorRiftLeaderboardEntry::Configure
          (AdaptorRiftLeaderboardEntry *this,WidgetContainer *param_1,
          AdaptorRiftLeaderboardEntryConfig *param_2)

{
  *(WidgetContainer **)(this + 0x120) = param_1;
  AdaptorRiftLeaderboardEntryConfig::operator=
            ((AdaptorRiftLeaderboardEntryConfig *)(this + 0x128),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLeaderboardEntry::onLinkToUIViewCreated() */

void __thiscall
AdaptorRiftLeaderboardEntry::onLinkToUIViewCreated(AdaptorRiftLeaderboardEntry *this)

{
  int iVar1;
  HotUISeedPacketList *pHVar2;
  string *extraout_x1;
  char *__s;
  string *extraout_x1_00;
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  int local_38 [4];
  Sexy aSStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x138] == (AdaptorRiftLeaderboardEntry)0x0) {
    GetGameItemInfo(*(int *)(this + 0x150),0x7fffffff,0);
    if (local_38[0] == 0) {
      std::string::string(asStack_40,"Background");
      HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_40,true);
      std::string::~string(asStack_40);
      nop();
      std::string::string(asStack_40,"Background_Rank_Avatar");
      HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_40,false);
      std::string::~string(asStack_40);
      nop();
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
      iVar1 = RiftUtils::GetCurrentLeague();
      iVar1 = RiftUtils::GetLeagueFrameType(iVar1,*(int *)(this + 300));
      goto joined_r0x03670674;
    }
    std::string::string(asStack_40,"Background");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_40,false);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"Background_Rank_Avatar");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_40,true);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"Background_Rank_Avatar");
    pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),asStack_40);
    std::string::~string(asStack_40);
    nop();
    Sexy::Upper(aSStack_28,extraout_x1_00);
    std::operator+("IMAGE_UI_PENNY_PURSUITS_LEADERBOARD_",asStack_40);
    std::string::~string(asStack_40);
  }
  else {
    GetGameItemInfo(*(int *)(this + 0x150),0x7fffffff,0);
    if (local_38[0] == 0) {
      std::string::string(asStack_40,"Background");
      HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_40,true);
      std::string::~string(asStack_40);
      nop();
      std::string::string(asStack_40,"Background_Rank_Avatar");
      HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_40,false);
      std::string::~string(asStack_40);
      nop();
      std::string::string(asStack_40,"Background");
      pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                         (*(HotUIFile **)(this + 0xf8),asStack_40);
      std::string::~string(asStack_40);
      nop();
      std::string::string(asStack_50,"IMAGE_UI_PENNY_PURSUITS_LEADERBOARD_LEADERBOARD_SCROLL_BOTTOM"
                         );
      nop();
    }
    else {
      std::string::string(asStack_40,"Background");
      HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_40,false);
      std::string::~string(asStack_40);
      nop();
      std::string::string(asStack_40,"Background_Rank_Avatar");
      HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_40,true);
      std::string::~string(asStack_40);
      nop();
      std::string::string(asStack_40,"Background_Rank_Avatar");
      pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                         (*(HotUIFile **)(this + 0xf8),asStack_40);
      std::string::~string(asStack_40);
      nop();
      Sexy::Upper(aSStack_28,extraout_x1);
      std::operator+("IMAGE_UI_PENNY_PURSUITS_LEADERBOARD_LOCAL_",asStack_40);
      std::string::~string(asStack_40);
    }
  }
  GetUIResource<Sexy::Image>(asStack_50);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_40,(RtWeakPtrBase *)asStack_48);
  HotUIImage::SetImage((HotUIImage *)pHVar2,(RtWeakPtr<Sexy::SoundResource> *)asStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
  std::string::~string(asStack_50);
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
  iVar1 = RiftUtils::GetCurrentLeague();
  iVar1 = RiftUtils::GetLeagueFrameType(iVar1,*(int *)(this + 300));
joined_r0x03670674:
  if (iVar1 == 0) {
    __s = "IMAGE_UI_PENNY_PURSUITS_LEADERBOARD_LEADERBOARD_SCROLL_FRAME_GOLD";
  }
  else if (iVar1 == 1) {
    __s = "IMAGE_UI_PENNY_PURSUITS_LEADERBOARD_LEADERBOARD_SCROLL_FRAME_SILVER";
  }
  else {
    __s = "IMAGE_UI_PENNY_PURSUITS_LEADERBOARD_LEADERBOARD_SCROLL_FRAME_BRONZE";
  }
  std::string::string(asStack_48,__s);
  nop();
  std::string::string((string *)local_38,"Background_Frame");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                     (*(HotUIFile **)(this + 0xf8),(string *)local_38);
  std::string::~string((string *)local_38);
  nop();
  GetUIResource<Sexy::Image>(asStack_48);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_38,(RtWeakPtrBase *)asStack_40);
  HotUIImage::SetImage((HotUIImage *)pHVar2,(GAME_ITEM_INFO *)local_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
  std::string::string((string *)local_38,"Background_Frame");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)local_38,iVar1 != -1);
  std::string::~string((string *)local_38);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
  std::string::~string(asStack_48);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLeaderboardEntry::updateAvatarIcon() */

void __thiscall AdaptorRiftLeaderboardEntry::updateAvatarIcon(AdaptorRiftLeaderboardEntry *this)

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
  JoustUtils::AvatarGetBottomImagePtr((JoustUtils *)(ulong)*(uint *)(this + 0x134),extraout_w1);
  HotUIImage::SetImage((HotUIImage *)pHVar1,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::string(asStack_10,"PlayerIcon");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  JoustUtils::AvatarGetImagePtr((JoustUtils *)(ulong)*(uint *)(this + 0x134),extraout_w1_00);
  HotUIImage::SetImage((HotUIImage *)pHVar1,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::string(asStack_10,"PlayerIconFrame");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  JoustUtils::AvatarGetFrameImagePtr((JoustUtils *)(ulong)*(uint *)(this + 0x134),extraout_w1_01);
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
/* AdaptorRiftLeaderboardEntry::onRankListEffectUpdate(std::vector<int, std::allocator<int> >
   const&) */

void __thiscall
AdaptorRiftLeaderboardEntry::onRankListEffectUpdate
          (AdaptorRiftLeaderboardEntry *this,vector *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  HotUISeedPacketList *pHVar4;
  HotUISeedPacketList *pHVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_03670408(*(undefined8 *)param_1);
  uVar3 = FUN_03670458(*(undefined8 *)(param_1 + 8));
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,int>
                       (uVar2,uVar3,this + 0x128);
  local_10 = FUN_03670458(*(undefined8 *)(param_1 + 8));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    std::string::string((string *)&local_10,"PlayerIconEffect");
    pHVar4 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),(string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
    std::string::string((string *)&local_10,"PlayerIconFrame");
    pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),(string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
    (**(code **)(*(long *)pHVar5 + 0x158))(pHVar5,0);
    (**(code **)(*(long *)pHVar4 + 0x158))(pHVar4,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLeaderboardEntry::onLoadUIView() */

void __thiscall AdaptorRiftLeaderboardEntry::onLoadUIView(AdaptorRiftLeaderboardEntry *this)

{
  char cVar1;
  undefined8 uVar2;
  ProfileMgr *this_00;
  long lVar3;
  string *psVar4;
  char *__s;
  HotUIFile *this_01;
  HotUISeedPacketList *pHVar5;
  HotUISeedPacketList *pHVar6;
  int extraout_w1;
  wstring *extraout_x1;
  undefined1 *__n;
  undefined1 auStack_70 [8];
  Sexy aSStack_68 [8];
  Sexy aSStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [16];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_50,"$PLACE");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_50);
  Sexy::StrFormat("%d",asStack_48,(ulong)(*(int *)(this + 300) + 1));
  FUN_05474278(uVar2,asStack_48);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  nop();
  Sexy::CommaSeparate(*(int *)(this + 0x130));
  psVar4 = asStack_58;
  std::string::string(asStack_50,"$SCORE");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_50);
  Sexy::WStringToString(aSStack_68,(wstring *)0x0,(bool *)psVar4);
  FUN_05474278(uVar2,asStack_48);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar3 == 0) {
    FUN_05478178(aSStack_60,L"-invalid-",asStack_48);
    nop();
  }
  else {
    PlayerInfo::AM_GetName();
  }
  psVar4 = asStack_58;
  std::string::string(asStack_50,"$PLAYERNAME");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_50);
  if (this[0x138] == (AdaptorRiftLeaderboardEntry)0x0) {
    Sexy::WStringToString((Sexy *)(this + 0x140),(wstring *)0x0,(bool *)psVar4);
  }
  else {
    Sexy::WStringToString(aSStack_60,(wstring *)0x0,(bool *)psVar4);
  }
  __n = auStack_70;
  FUN_05474278(uVar2,asStack_48);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  nop();
  RiftUtils::GetBadgeImageForLeaderboardIndex((RiftUtils *)(ulong)*(uint *)(this + 300),extraout_w1)
  ;
  std::string::string(asStack_48,"$LEADERBOARD_BADGE");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_48);
  thunk_FUN_05475e00(uVar2,asStack_58);
  std::string::~string(asStack_48);
  nop();
  std::string::string(asStack_50,"$COLOR");
  psVar4 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_38,asStack_50);
  DString::Format("MonthlyCard_%d",asStack_48,(ulong)(*(int *)(this + 0x148) + 1));
  __s = (char *)DString::c_str((DString *)asStack_48);
  std::string::append(psVar4,__s,(size_t)__n);
  DString::~DString((DString *)asStack_48);
  std::string::~string(asStack_50);
  nop();
  psVar4 = (string *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_48,"RiftLeaderboardEntry");
  this_01 = (HotUIFile *)
            HotUIManager::LoadUIPrefab(psVar4,(map *)asStack_48,(WidgetContainer *)amStack_38);
  std::string::~string(asStack_48);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,this_01);
  updateAvatarIcon(this);
  if (this[0x138] == (AdaptorRiftLeaderboardEntry)0x0) {
    std::string::string(asStack_48,"LocalPlayerBackground");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_48,false);
    std::string::~string(asStack_48);
    nop();
  }
  std::string::string(asStack_48,"PlayerNameLabel");
  pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_01,asStack_48);
  std::string::~string(asStack_48);
  nop();
  if (this[0x138] == (AdaptorRiftLeaderboardEntry)0x0) {
    FUN_05477b24(asStack_50,this + 0x140);
  }
  else {
    Sexy::ToWString(aSStack_60,extraout_x1);
  }
  (**(code **)(*(long *)pHVar5 + 0x360))(pHVar5,asStack_50);
  cVar1 = FUN_0547419c(asStack_58);
  if (cVar1 == '\0') {
    std::string::string(asStack_48,"PositionLabel");
    pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),asStack_48);
    std::string::~string(asStack_48);
    nop();
    if (pHVar5 != (HotUISeedPacketList *)0x0) {
      (**(code **)(*(long *)pHVar5 + 0x158))(pHVar5,0);
    }
  }
  else {
    std::string::string(asStack_48,"Badge");
    pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),asStack_48);
    std::string::~string(asStack_48);
    nop();
    if (pHVar5 != (HotUISeedPacketList *)0x0) {
      (**(code **)(*(long *)pHVar5 + 0x158))(pHVar5,0);
    }
  }
  if (this[0x14c] != (AdaptorRiftLeaderboardEntry)0x0) {
    std::string::string(asStack_48,"PlayerIconEffect");
    pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),asStack_48);
    std::string::~string(asStack_48);
    nop();
    std::string::string(asStack_48,"PlayerIconFrame");
    pHVar6 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),asStack_48);
    std::string::~string(asStack_48);
    nop();
    (**(code **)(*(long *)pHVar6 + 0x158))(pHVar6,0);
    (**(code **)(*(long *)pHVar5 + 0x158))(pHVar5,0);
  }
  FUN_05476c50(asStack_50);
  std::string::~string(asStack_58);
  FUN_05476c50(aSStack_60);
  FUN_05476c50(aSStack_68);
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

