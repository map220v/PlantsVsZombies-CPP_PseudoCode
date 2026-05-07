// Class: AdaptorJoustLeaderboardEntry


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustLeaderboardEntry::StaticClassInit() */

void AdaptorJoustLeaderboardEntry::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorJoustLeaderboardEntry");
    (*pcVar2)(plVar1,asStack_10,FUN_038612c0,0x150,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustLeaderboardEntry::StaticGetClass() */

long * AdaptorJoustLeaderboardEntry::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorJoustLeaderboardEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustLeaderboardEntry::GetClass() const */

long * AdaptorJoustLeaderboardEntry::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorJoustLeaderboardEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustLeaderboardEntry::~AdaptorJoustLeaderboardEntry() */

void __thiscall
AdaptorJoustLeaderboardEntry::~AdaptorJoustLeaderboardEntry(AdaptorJoustLeaderboardEntry *this)

{
  *(undefined ***)this = &PTR_GetClass_066a9d00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066aa060;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066aa0a8;
  PVZ2UIButtonPart::~PVZ2UIButtonPart((PVZ2UIButtonPart *)(this + 0x128));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorJoustLeaderboardEntry::~AdaptorJoustLeaderboardEntry() */

void __thiscall
AdaptorJoustLeaderboardEntry::~AdaptorJoustLeaderboardEntry(AdaptorJoustLeaderboardEntry *this)

{
  ~AdaptorJoustLeaderboardEntry(this);
  AK::FreeHook(this);
  return;
}


/* AdaptorJoustLeaderboardEntry::AdaptorJoustLeaderboardEntry() */

void __thiscall
AdaptorJoustLeaderboardEntry::AdaptorJoustLeaderboardEntry(AdaptorJoustLeaderboardEntry *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined ***)this = &PTR_GetClass_066a9d00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066aa060;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066aa0a8;
  AdaptorJoustLeaderboardEntryConfig::AdaptorJoustLeaderboardEntryConfig
            ((AdaptorJoustLeaderboardEntryConfig *)(this + 0x128));
  return;
}


/* AdaptorJoustLeaderboardEntry::StaticNew() */

AdaptorJoustLeaderboardEntry * AdaptorJoustLeaderboardEntry::StaticNew(void)

{
  AdaptorJoustLeaderboardEntry *this;
  
  this = ::operator_new(0x150);
  AdaptorJoustLeaderboardEntry(this);
  return this;
}


/* AdaptorJoustLeaderboardEntry::Configure(Sexy::WidgetContainer*,
   AdaptorJoustLeaderboardEntryConfig const&) */

void __thiscall
AdaptorJoustLeaderboardEntry::Configure
          (AdaptorJoustLeaderboardEntry *this,WidgetContainer *param_1,
          AdaptorJoustLeaderboardEntryConfig *param_2)

{
  *(WidgetContainer **)(this + 0x120) = param_1;
  AdaptorJoustLeaderboardEntryConfig::operator=
            ((AdaptorJoustLeaderboardEntryConfig *)(this + 0x128),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustLeaderboardEntry::updateAvatarIcon() */

void __thiscall AdaptorJoustLeaderboardEntry::updateAvatarIcon(AdaptorJoustLeaderboardEntry *this)

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
/* AdaptorJoustLeaderboardEntry::onRankListEffectUpdate(std::vector<int, std::allocator<int> >
   const&) */

void __thiscall
AdaptorJoustLeaderboardEntry::onRankListEffectUpdate
          (AdaptorJoustLeaderboardEntry *this,vector *param_1)

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
  uVar2 = FUN_03861538(*(undefined8 *)param_1);
  uVar3 = FUN_03861588(*(undefined8 *)(param_1 + 8));
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,int>
                       (uVar2,uVar3,this + 0x128);
  local_10 = FUN_03861588(*(undefined8 *)(param_1 + 8));
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
/* AdaptorJoustLeaderboardEntry::getFirstReward() */

void AdaptorJoustLeaderboardEntry::getFirstReward(void)

{
  char cVar1;
  long in_x0;
  JoustUtils *this;
  long lVar2;
  int in_w2;
  undefined4 uVar3;
  undefined8 local_20 [3];
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  this = (JoustUtils *)JoustUtils::PlayerGetLeague();
  JoustUtils::GetLeaderboardPlayerPlacementReward(this,*(int *)(in_x0 + 300) + 1,in_w2);
  cVar1 = std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::
          empty((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *
                )local_20);
  if (cVar1 == '\0') {
    lVar2 = FUN_03861188(local_20[0]);
    uVar3 = *(undefined4 *)(lVar2 + 0x28);
  }
  std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::~vector
            ((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *)
             local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustLeaderboardEntry::getFirstRewardObject() */

void AdaptorJoustLeaderboardEntry::getFirstRewardObject(void)

{
  char cVar1;
  long in_x0;
  JoustUtils *this;
  LevelOfTheDay_RewardItemType *pLVar2;
  int in_w2;
  LevelOfTheDay_RewardItemType *in_x8;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType(in_x8);
  this = (JoustUtils *)JoustUtils::PlayerGetLeague();
  JoustUtils::GetLeaderboardPlayerPlacementReward(this,*(int *)(in_x0 + 300) + 1,in_w2);
  cVar1 = std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::
          empty((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *
                )local_20);
  if (cVar1 == '\0') {
    pLVar2 = (LevelOfTheDay_RewardItemType *)FUN_03861188(local_20[0]);
    LevelOfTheDay_RewardItemType::operator=(in_x8,pLVar2);
  }
  std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::~vector
            ((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *)
             local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustLeaderboardEntry::getGemReward() */

void AdaptorJoustLeaderboardEntry::getGemReward(void)

{
  bool bVar1;
  long in_x0;
  JoustUtils *this;
  LevelOfTheDay_RewardItemType *pLVar2;
  int in_w2;
  undefined4 uVar3;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  LevelOfTheDay_RewardItemType aLStack_48 [16];
  int local_38;
  undefined4 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (JoustUtils *)JoustUtils::PlayerGetLeague();
  JoustUtils::GetLeaderboardPlayerPlacementReward(this,*(int *)(in_x0 + 300) + 1,in_w2);
  local_70 = FUN_03861494(local_60);
  local_68 = FUN_038614e4(local_58);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)&local_68);
    if (!bVar1) {
      uVar3 = 0;
LAB_03861a90:
      std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::
      ~vector((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *)
              &local_60);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
    pLVar2 = (LevelOfTheDay_RewardItemType *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType(aLStack_48,pLVar2);
    if (local_38 == 0xc) {
      LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType(aLStack_48);
      uVar3 = local_20;
      goto LAB_03861a90;
    }
    LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType(aLStack_48);
    eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
              ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_70);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustLeaderboardEntry::onLoadUIView() */

void __thiscall AdaptorJoustLeaderboardEntry::onLoadUIView(AdaptorJoustLeaderboardEntry *this)

{
  undefined8 uVar1;
  ulong uVar2;
  ProfileMgr *this_00;
  long lVar3;
  string *psVar4;
  char *__s;
  HotUIFile *this_01;
  HotUISeedPacketList *pHVar5;
  HotUISeedPacketList *pHVar6;
  wstring *extraout_x1;
  bool *pbVar7;
  undefined1 auVar8 [12];
  LevelOfTheDay_RewardItemType aLStack_a8 [16];
  Sexy aSStack_98 [8];
  Sexy aSStack_90 [8];
  bool abStack_88 [8];
  string asStack_80 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_78 [48];
  string asStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_78);
  std::string::string(asStack_80,"$PLACE");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_78,asStack_80);
  Sexy::StrFormat("%d",asStack_48,(ulong)(*(int *)(this + 300) + 1));
  FUN_05474278(uVar1,asStack_48);
  std::string::~string(asStack_48);
  std::string::~string(asStack_80);
  nop();
  std::string::string(asStack_80,"$REWARD");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_78,asStack_80);
  uVar2 = getFirstReward();
  Sexy::StrFormat("%d",asStack_48,uVar2 & 0xffffffff);
  FUN_05474278(uVar1,asStack_48);
  std::string::~string(asStack_48);
  std::string::~string(asStack_80);
  nop();
  Sexy::CommaSeparate(*(int *)(this + 0x130));
  pbVar7 = abStack_88;
  std::string::string(asStack_80,"$SCORE");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_78,asStack_80);
  Sexy::WStringToString(aSStack_98,(wstring *)0x0,pbVar7);
  FUN_05474278(uVar1,asStack_48);
  std::string::~string(asStack_48);
  std::string::~string(asStack_80);
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar3 == 0) {
    FUN_05478178(aSStack_90,L"-invalid-",asStack_48);
    nop();
  }
  else {
    PlayerInfo::AM_GetName();
  }
  pbVar7 = abStack_88;
  std::string::string(asStack_80,"$PLAYERNAME");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_78,asStack_80);
  if (this[0x138] == (AdaptorJoustLeaderboardEntry)0x0) {
    Sexy::WStringToString((Sexy *)(this + 0x140),(wstring *)0x0,pbVar7);
  }
  else {
    Sexy::WStringToString(aSStack_90,(wstring *)0x0,pbVar7);
  }
  FUN_05474278(uVar1,asStack_48);
  std::string::~string(asStack_48);
  std::string::~string(asStack_80);
  nop();
  std::string::string(asStack_80,"$LEADERBOARD_BADGE");
  auVar8 = std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_78,asStack_80);
  JoustUtils::GetBadgeImageForLeaderboardIndex
            ((JoustUtils *)(ulong)*(uint *)(this + 300),auVar8._8_4_);
  FUN_05474278(auVar8._0_8_,asStack_48);
  std::string::~string(asStack_48);
  std::string::~string(asStack_80);
  nop();
  pbVar7 = abStack_88;
  std::string::string(asStack_80,"$COLOR");
  psVar4 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_78,asStack_80);
  DString::Format("MonthlyCard_%d",asStack_48,(ulong)(*(int *)(this + 0x148) + 1));
  __s = (char *)DString::c_str((DString *)asStack_48);
  std::string::append(psVar4,__s,(size_t)pbVar7);
  DString::~DString((DString *)asStack_48);
  std::string::~string(asStack_80);
  nop();
  psVar4 = (string *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_48,"JoustLeaderboardEntry");
  this_01 = (HotUIFile *)
            HotUIManager::LoadUIPrefab(psVar4,(map *)asStack_48,(WidgetContainer *)amStack_78);
  std::string::~string(asStack_48);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,this_01);
  updateAvatarIcon(this);
  if (this[0x138] == (AdaptorJoustLeaderboardEntry)0x0) {
    std::string::string(asStack_48,"LocalPlayerBackground");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_48,false);
    std::string::~string(asStack_48);
    nop();
  }
  std::string::string(asStack_48,"PlayerNameLabel");
  pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_01,asStack_48);
  std::string::~string(asStack_48);
  nop();
  if (this[0x138] == (AdaptorJoustLeaderboardEntry)0x0) {
    FUN_05477b24(abStack_88,this + 0x140);
  }
  else {
    Sexy::ToWString(aSStack_90,extraout_x1);
  }
  (**(code **)(*(long *)pHVar5 + 0x360))(pHVar5,abStack_88);
  std::string::string(asStack_48,"Gem");
  pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_01,asStack_48);
  std::string::~string(asStack_48);
  nop();
  getFirstRewardObject();
  RewardImageFactory::GetImageForReward(aLStack_a8);
  LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType
            ((LevelOfTheDay_RewardItemType *)asStack_48);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_48,(RtWeakPtrBase *)asStack_80);
  HotUIImage::SetImage((HotUIImage *)pHVar5,asStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
  if (this[0x14c] != (AdaptorJoustLeaderboardEntry)0x0) {
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
    (**(code **)(*(long *)pHVar6 + 0x158))(pHVar6,1);
    (**(code **)(*(long *)pHVar5 + 0x158))(pHVar5,1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_80);
  FUN_05476c50(abStack_88);
  FUN_05476c50(aSStack_90);
  FUN_05476c50(aSStack_98);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

