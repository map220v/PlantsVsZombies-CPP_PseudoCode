// Class: AdaptorJoustLeagueInfoEntry


/* AdaptorJoustLeagueInfoEntry::~AdaptorJoustLeagueInfoEntry() */

void __thiscall
AdaptorJoustLeagueInfoEntry::~AdaptorJoustLeagueInfoEntry(AdaptorJoustLeagueInfoEntry *this)

{
  *(undefined ***)this = &PTR_GetClass_066aa0d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066aa430;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066aa478;
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorJoustLeagueInfoEntry::~AdaptorJoustLeagueInfoEntry() */

void __thiscall
AdaptorJoustLeagueInfoEntry::~AdaptorJoustLeagueInfoEntry(AdaptorJoustLeagueInfoEntry *this)

{
  ~AdaptorJoustLeagueInfoEntry(this);
  AK::FreeHook(this);
  return;
}


/* AdaptorJoustLeagueInfoEntry::AdaptorJoustLeagueInfoEntry() */

void __thiscall
AdaptorJoustLeagueInfoEntry::AdaptorJoustLeagueInfoEntry(AdaptorJoustLeagueInfoEntry *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined ***)this = &PTR_GetClass_066aa0d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066aa430;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066aa478;
  return;
}


/* AdaptorJoustLeagueInfoEntry::StaticNew() */

AdaptorJoustLeagueInfoEntry * AdaptorJoustLeagueInfoEntry::StaticNew(void)

{
  AdaptorJoustLeagueInfoEntry *this;
  
  this = ::operator_new(0x130);
  AdaptorJoustLeagueInfoEntry(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustLeagueInfoEntry::StaticClassInit() */

void AdaptorJoustLeagueInfoEntry::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorJoustLeagueInfoEntry");
    (*pcVar2)(plVar1,asStack_10,FUN_03862230,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustLeagueInfoEntry::StaticGetClass() */

long * AdaptorJoustLeagueInfoEntry::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorJoustLeagueInfoEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustLeagueInfoEntry::GetClass() const */

long * AdaptorJoustLeagueInfoEntry::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorJoustLeagueInfoEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustLeagueInfoEntry::Configure(Sexy::WidgetContainer*, int, int) */

void __thiscall
AdaptorJoustLeagueInfoEntry::Configure
          (AdaptorJoustLeagueInfoEntry *this,WidgetContainer *param_1,int param_2,int param_3)

{
  *(WidgetContainer **)(this + 0x120) = param_1;
  *(int *)(this + 0x128) = param_3;
  *(int *)(this + 300) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustLeagueInfoEntry::updateRewardDisplay() */

void __thiscall AdaptorJoustLeagueInfoEntry::updateRewardDisplay(AdaptorJoustLeagueInfoEntry *this)

{
  long lVar1;
  ulong uVar2;
  LevelOfTheDay_RewardItemType aLStack_40 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  JoustUtils::GetLeaderboardBestPlacementReward
            ((JoustUtils *)(ulong)*(uint *)(this + 300),(int)___stack_chk_guard);
  lVar1 = FUN_03862078(local_20,local_18);
  if (lVar1 == 0) {
    std::string::string(asStack_28,"LeftPrizeIcon");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_28,false);
    std::string::~string(asStack_28);
    nop();
    std::string::string(asStack_28,"LeftPrizeLabel");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_28,false);
    std::string::~string(asStack_28);
    nop();
    uVar2 = FUN_03862078(local_20,local_18);
  }
  else {
    std::string::string(asStack_28,"LeftPrizeIcon");
    FUN_03862084(local_20,0);
    RewardImageFactory::GetImageForReward(aLStack_40);
    HotUIAdaptor::replaceImageWidgetImage((HotUIAdaptor *)this,asStack_28,aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    std::string::~string(asStack_28);
    nop();
    uVar2 = FUN_03862078(local_20,local_18);
  }
  if (uVar2 < 2) {
    std::string::string(asStack_28,"MiddlePrizeIcon");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_28,false);
    std::string::~string(asStack_28);
    nop();
    std::string::string(asStack_28,"MiddlePrizeLabel");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_28,false);
    std::string::~string(asStack_28);
    nop();
    uVar2 = FUN_03862078(local_20,local_18);
  }
  else {
    std::string::string(asStack_28,"MiddlePrizeIcon");
    FUN_03862084(local_20,1);
    RewardImageFactory::GetImageForReward(aLStack_40);
    HotUIAdaptor::replaceImageWidgetImage((HotUIAdaptor *)this,asStack_28,aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    std::string::~string(asStack_28);
    nop();
    uVar2 = FUN_03862078(local_20,local_18);
  }
  if (uVar2 < 3) {
    std::string::string(asStack_28,"RightPrizeIcon");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_28,false);
    std::string::~string(asStack_28);
    nop();
    std::string::string(asStack_28,"RightPrizeLabel");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_28,false);
    std::string::~string(asStack_28);
    nop();
  }
  else {
    std::string::string(asStack_28,"RightPrizeIcon");
    FUN_03862084(local_20,2);
    RewardImageFactory::GetImageForReward(aLStack_40);
    HotUIAdaptor::replaceImageWidgetImage((HotUIAdaptor *)this,asStack_28,aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    std::string::~string(asStack_28);
    nop();
  }
  std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::~vector
            ((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *)
             &local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustLeagueInfoEntry::onLoadUIView() */

void __thiscall AdaptorJoustLeagueInfoEntry::onLoadUIView(AdaptorJoustLeagueInfoEntry *this)

{
  long lVar1;
  string *this_00;
  string *psVar2;
  HotUIFile *pHVar3;
  undefined8 uVar4;
  ulong uVar5;
  int extraout_w1;
  char *__s;
  undefined1 auVar6 [12];
  string asStack_60 [8];
  string asStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = asStack_60;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_58,"$LEAGUENAME");
  auVar6 = std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_38,asStack_58);
  JoustUtils::GetLeagueNameShort((JoustUtils *)(ulong)*(uint *)(this + 300),auVar6._8_4_);
  thunk_FUN_05475e00(auVar6._0_8_,(string *)&local_50);
  std::string::~string((string *)&local_50);
  std::string::~string(asStack_58);
  nop();
  std::string::string(asStack_58,"$LEAGUEIMAGE");
  auVar6 = std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_38,asStack_58);
  JoustUtils::GetLeagueIcon((JoustUtils *)(ulong)*(uint *)(this + 300),auVar6._8_4_);
  thunk_FUN_05475e00(auVar6._0_8_,(string *)&local_50);
  std::string::~string((string *)&local_50);
  std::string::~string(asStack_58);
  nop();
  JoustUtils::GetLeaderboardBestPlacementReward
            ((JoustUtils *)(ulong)*(uint *)(this + 300),extraout_w1);
  lVar1 = FUN_03862078(local_50,local_48);
  if (lVar1 != 0) {
    std::string::string(psVar2,"$REWARD1");
    uVar4 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_38,psVar2);
    lVar1 = FUN_03862084(local_50,0);
    Sexy::StrFormat("%d",asStack_58,(ulong)*(uint *)(lVar1 + 0x28));
    FUN_05474278(uVar4,asStack_58);
    std::string::~string(asStack_58);
    std::string::~string(psVar2);
    nop();
    uVar5 = FUN_03862078(local_50,local_48);
    if (1 < uVar5) {
      std::string::string(psVar2,"$REWARD2");
      uVar4 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_38,psVar2);
      lVar1 = FUN_03862084(local_50,1);
      Sexy::StrFormat("%d",asStack_58,(ulong)*(uint *)(lVar1 + 0x28));
      FUN_05474278(uVar4,asStack_58);
      std::string::~string(asStack_58);
      std::string::~string(psVar2);
      nop();
      uVar5 = FUN_03862078(local_50,local_48);
      if (2 < uVar5) {
        std::string::string(psVar2,"$REWARD3");
        uVar4 = std::
                map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                              *)amStack_38,psVar2);
        lVar1 = FUN_03862084(local_50,2);
        Sexy::StrFormat("%d",asStack_58,(ulong)*(uint *)(lVar1 + 0x28));
        FUN_05474278(uVar4,asStack_58);
        std::string::~string(asStack_58);
        std::string::~string(psVar2);
        nop();
      }
    }
  }
  std::string::string(asStack_58,"$BACKGROUNDIMAGE");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_38,asStack_58);
  if ((*(uint *)(this + 300) & 1) == 0) {
    __s = "IMAGE_UI_JOUST_LEAGUE_INFO_BG_LIGHT";
  }
  else {
    __s = "IMAGE_UI_JOUST_LEAGUE_INFO_BG_DARK";
  }
  std::string::append(this_00,__s,(size_t)psVar2);
  std::string::~string(asStack_58);
  nop();
  psVar2 = (string *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_58,"JoustLeagueInfoEntry");
  pHVar3 = (HotUIFile *)
           HotUIManager::LoadUIPrefab(psVar2,(map *)asStack_58,(WidgetContainer *)amStack_38);
  std::string::~string(asStack_58);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar3);
  updateRewardDisplay(this);
  std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::~vector
            ((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *)
             &local_50);
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

