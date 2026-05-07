// Class: FestivalManager


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalManager::ResetWishProps() */

void __thiscall FestivalManager::ResetWishProps(FestivalManager *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FestivalManager::IsSummerVacationLevel(std::string const&) */

bool __thiscall FestivalManager::IsSummerVacationLevel(FestivalManager *this,string *param_1)

{
  long lVar1;
  
  lVar1 = FUN_05474374(param_1,"vacation_boss_",0);
  return lVar1 != -1;
}


/* FestivalManager::IsFestivalLevel(std::string const&, FestivalGameMode) */

bool __thiscall FestivalManager::IsFestivalLevel(undefined8 param_1_00,string *param_1,int param_3)

{
  bool bVar1;
  long lVar2;
  
  if (param_3 == 0) {
    bVar1 = std::operator==(param_1,"festival_lv2_easy");
    if (((bVar1) || (bVar1 = std::operator==(param_1,"festival_lv2_normal"), bVar1)) ||
       (bVar1 = std::operator==(param_1,"festival_lv2_hard"), bVar1)) {
      return true;
    }
  }
  else if (param_3 == 1) {
    bVar1 = std::operator==(param_1,"festival_lv1_easy");
    if (bVar1) {
      return true;
    }
    bVar1 = std::operator==(param_1,"festival_lv1_normal");
    if (bVar1) {
      return true;
    }
    bVar1 = std::operator==(param_1,"festival_lv1_hard");
    if (bVar1) {
      return true;
    }
  }
  else if (param_3 == 2) {
    bVar1 = std::operator==(param_1,"festival_lv3_easy");
    if (bVar1) {
      return true;
    }
    bVar1 = std::operator==(param_1,"festival_lv3_normal");
    if (bVar1) {
      return true;
    }
    bVar1 = std::operator==(param_1,"festival_lv3_hard");
    if (bVar1) {
      return true;
    }
  }
  else if (param_3 == 3) {
    bVar1 = std::operator==(param_1,"festival_wealthgod_easy");
    if (bVar1) {
      return true;
    }
    bVar1 = std::operator==(param_1,"festival_wealthgod_normal");
    if (bVar1) {
      return true;
    }
    bVar1 = std::operator==(param_1,"festival_wealthgod_hard");
    if (bVar1) {
      return true;
    }
  }
  else if (param_3 == -1) {
    lVar2 = FUN_05474374(param_1,"festival_",0);
    return lVar2 != -1;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalManager::DisplaySaleAnnoucement(bool) */

void __thiscall FestivalManager::DisplaySaleAnnoucement(FestivalManager *this,bool param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  WorldMap_ScrollBarSpeaker *this_00;
  WorldMap_ScrollBarSpeaker *this_01;
  ActivityConfig *pAVar5;
  PVPManager *pPVar6;
  string *psVar7;
  wstring awStack_40 [8];
  string asStack_38 [8];
  Color aCStack_30 [16];
  string asStack_20 [8];
  int local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    lVar4 = LawnApp::GetActivityConfig();
    if (lVar4 != 0) {
      std::string::string(asStack_20,"UIWorldMapScrollBarSpeaker");
      UIWidget::GetWidgetBySheetName(asStack_20);
      nop();
      std::string::~string(asStack_20);
      nop();
      lVar4 = LawnApp::GetActivityConfig();
      cVar1 = FUN_03bae564(*(undefined1 *)(lVar4 + 0x60));
      if (cVar1 != '\0') {
        pAVar5 = (ActivityConfig *)LawnApp::GetActivityConfig();
        cVar1 = ActivityConfig::IsActivityDays(pAVar5);
        if (cVar1 != '\0') {
          pPVar6 = (PVPManager *)LawnApp::GetActivityConfig();
          lVar4 = PVPManager::GetSkillDatas(pPVar6);
          lVar4 = FUN_03bae584(*(undefined8 *)(lVar4 + 0x20),*(undefined8 *)(lVar4 + 0x28));
          if (lVar4 != 0) {
            pAVar5 = (ActivityConfig *)LawnApp::GetActivityConfig();
            iVar2 = ActivityConfig::GetScrollBarBarkContentIndex(pAVar5);
            pPVar6 = (PVPManager *)LawnApp::GetActivityConfig();
            lVar4 = PVPManager::GetSkillDatas(pPVar6);
            psVar7 = (string *)FUN_03bae590(*(undefined8 *)(lVar4 + 0x20),(long)iVar2);
            Sexy::ToWString(psVar7);
            TodStringTranslate((wstring *)asStack_20);
            FUN_05476c50(asStack_20);
            pPVar6 = (PVPManager *)LawnApp::GetActivityConfig();
            lVar4 = PVPManager::GetSkillDatas(pPVar6);
            BarkPropertyData::BarkPropertyData
                      ((BarkPropertyData *)asStack_20,(BarkPropertyData *)(lVar4 + 8));
            pAVar5 = (ActivityConfig *)LawnApp::GetActivityConfig();
            FUN_05475d88(asStack_38,asStack_20);
            uVar3 = ActivityConfig::GetActivityTextColor(pAVar5,asStack_38);
            Sexy::Color::Color(aCStack_30,uVar3);
            WorldMap_ScrollBarSpeaker::ScrollText
                      (this_00,awStack_40,aCStack_30,local_18,local_14,local_10);
            std::string::~string(asStack_38);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_20);
            FUN_05476c50(awStack_40);
          }
        }
      }
    }
  }
  else {
    std::string::string(asStack_20,"UIWorldMapScrollBarSpeaker");
    UIWidget::GetWidgetBySheetName(asStack_20);
    nop();
    std::string::~string(asStack_20);
    nop();
    WorldMap_ScrollBarSpeaker::Reset(this_01);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalManager::ResetSpeaker() */

void FestivalManager::ResetSpeaker(void)

{
  WorldMap_ScrollBarSpeaker *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIWorldMapScrollBarSpeaker");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (this != (WorldMap_ScrollBarSpeaker *)0x0) {
    WorldMap_ScrollBarSpeaker::Reset(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalManager::ShowSpeaker(std::string const&, std::string const&, int, float, float) */

void __thiscall
FestivalManager::ShowSpeaker
          (FestivalManager *this,string *param_1,string *param_2,int param_3,float param_4,
          float param_5)

{
  undefined4 uVar1;
  WorldMap_ScrollBarSpeaker *this_00;
  ActivityConfig *pAVar2;
  wstring awStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIWorldMapScrollBarSpeaker");
  UIWidget::GetWidgetBySheetName(asStack_18);
  nop();
  std::string::~string(asStack_18);
  nop();
  if (this_00 != (WorldMap_ScrollBarSpeaker *)0x0) {
    Sexy::UTF8StringToSexyString(param_1);
    pAVar2 = (ActivityConfig *)LawnApp::GetActivityConfig();
    FUN_05475d88(asStack_20,param_2);
    uVar1 = ActivityConfig::GetActivityTextColor(pAVar2,asStack_20);
    Sexy::Color::Color((Color *)asStack_18,uVar1);
    WorldMap_ScrollBarSpeaker::ScrollText
              (this_00,awStack_28,(Color *)asStack_18,param_3,param_4,param_5);
    std::string::~string(asStack_20);
    FUN_05476c50(awStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalManager::ShowSpeakerByID(std::string const&, std::string const&, int, float, float) */

void __thiscall
FestivalManager::ShowSpeakerByID
          (FestivalManager *this,string *param_1,string *param_2,int param_3,float param_4,
          float param_5)

{
  undefined4 uVar1;
  WorldMap_ScrollBarSpeaker *this_00;
  ActivityConfig *pAVar2;
  wstring awStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIWorldMapScrollBarSpeaker");
  UIWidget::GetWidgetBySheetName(asStack_18);
  nop();
  std::string::~string(asStack_18);
  nop();
  if (this_00 != (WorldMap_ScrollBarSpeaker *)0x0) {
    Sexy::ToWString(param_1);
    TodStringTranslate((wstring *)asStack_18);
    FUN_05476c50(asStack_18);
    pAVar2 = (ActivityConfig *)LawnApp::GetActivityConfig();
    FUN_05475d88(asStack_20,param_2);
    uVar1 = ActivityConfig::GetActivityTextColor(pAVar2,asStack_20);
    Sexy::Color::Color((Color *)asStack_18,uVar1);
    WorldMap_ScrollBarSpeaker::ScrollText
              (this_00,awStack_28,(Color *)asStack_18,param_3,param_4,param_5);
    std::string::~string(asStack_20);
    FUN_05476c50(awStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalManager::SetSpringFestivalButtonVisible(bool) */

void __thiscall FestivalManager::SetSpringFestivalButtonVisible(FestivalManager *this,bool param_1)

{
  char cVar1;
  PlayerInfo *pPVar2;
  UIWidget *this_00;
  long lVar3;
  UniverseMap *this_01;
  ProfileMgr *this_02;
  PlayerInfo *pPVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PlayerInfo *)ProfileUtils::Profile();
  if (pPVar2 != (PlayerInfo *)0x0) {
    cVar1 = PlayerInfo::GameFeatureIsUnlocked(pPVar2,0x28);
    if (cVar1 == '\0') {
      std::string::string(asStack_10,"egypt7");
      this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
      cVar1 = ProfileUtils::HasCompletedLevel(asStack_10,false,pPVar4);
      std::string::~string(asStack_10);
      nop();
      if (cVar1 == '\0') goto LAB_03baf094;
      PlayerInfo::UnlockGameFeature(pPVar2,0x28);
    }
  }
  std::string::string(asStack_10,"UIWorldMapActivityLevelsButton");
  this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (UIWidget *)0x0) {
    lVar3 = LawnApp::GetWorldMap(gLawnApp);
    if ((((lVar3 == 0) ||
         (this_01 = (UniverseMap *)FUN_03bae574(*(undefined8 *)(lVar3 + 0x2b0)),
         this_01 == (UniverseMap *)0x0)) ||
        (cVar1 = UniverseMap::isInState(this_01,2), cVar1 != '\0')) ||
       (cVar1 = RiftUtils::IsWorldMapButtonsEnabled(), cVar1 == '\0')) {
      UIWidget::SetVisible(this_00,false);
    }
    else {
      UIWidget::SetVisible(this_00,param_1);
    }
  }
LAB_03baf094:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalManager::GetChristmasProtectDropPlantName(int) */

void FestivalManager::GetChristmasProtectDropPlantName(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int in_w1;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"kernelpult");
  iVar2 = 0;
  nop();
  if ((6 < in_w1) && (iVar2 = 2, in_w1 < 0xd)) {
    iVar2 = 1;
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)((ulong)(uint)param_1 + 0x18));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)((ulong)(uint)param_1 + 0x18));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      FUN_05474148();
LAB_03baf210:
      std::string::~string(asStack_20);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar3 == iVar2) {
      iVar2 = FUN_03bae584(*(undefined8 *)(piVar3 + 2),*(undefined8 *)(piVar3 + 4));
      iVar2 = Sexy::Rand(iVar2);
      FUN_03bae590(*(undefined8 *)(piVar3 + 2),(long)iVar2);
      FUN_05475d88();
      goto LAB_03baf210;
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalManager::LoadChristmasProtectGroups() */

void __thiscall FestivalManager::LoadChristmasProtectGroups(FestivalManager *this)

{
  bool bVar1;
  long lVar2;
  string *psVar3;
  Board *pBVar4;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x18));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  if (bVar1) {
    do {
      lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      local_20 = FUN_03baf278(*(undefined8 *)(lVar2 + 8));
      local_18 = FUN_03baf2c8(*(undefined8 *)(lVar2 + 0x10));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18),
            bVar1) {
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
        pBVar4 = *(Board **)(gLawnApp + 0x9f0);
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        Board::LoadResourceGroupForGameplay(pBVar4,(string *)(lVar2 + 0x10));
        pBVar4 = *(Board **)(gLawnApp + 0x9f0);
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        Board::LoadResourceGroupsForGameplay(pBVar4,(vector *)(lVar2 + 0x80));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
      }
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_30);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    } while (bVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalManager::GetFestivalRewardMap(std::map<FestivalGameReward, int,
   std::less<FestivalGameReward>, std::allocator<std::pair<FestivalGameReward const, int> > >&,
   FestivalGameLevel) */

void __thiscall
FestivalManager::GetFestivalRewardMap
          (FestivalManager *this,
          map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
          *param_1,int param_3)

{
  int iVar1;
  ActivityConfig *pAVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  byte local_d;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_d = 0;
  pAVar2 = (ActivityConfig *)LawnApp::GetActivityConfig();
  ActivityConfig::IsWeeklyGameModesPlantArrayAvatar(pAVar2,*(undefined4 *)(this + 8),&local_d);
  iVar1 = *(int *)(this + 8);
  if (iVar1 == 3) {
LAB_03bb0138:
    if (param_3 == 1) {
      local_c = 0;
      puVar4 = (undefined4 *)
               std::
               map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
               ::operator[](param_1,(FestivalGameReward *)&local_c);
      *puVar4 = 1;
      local_c = param_3;
      puVar4 = (undefined4 *)
               std::
               map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
               ::operator[](param_1,(FestivalGameReward *)&local_c);
      *puVar4 = 0;
    }
    else {
      if (param_3 == 0) goto LAB_03bb0278;
      if (param_3 == 2) {
        local_c = 0;
        puVar4 = (undefined4 *)
                 std::
                 map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
                 ::operator[](param_1,(FestivalGameReward *)&local_c);
        *puVar4 = 1;
        local_c = 1;
        puVar4 = (undefined4 *)
                 std::
                 map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
                 ::operator[](param_1,(FestivalGameReward *)&local_c);
        *puVar4 = 0;
        uVar6 = 0;
        goto joined_r0x03bb0190;
      }
    }
  }
  else {
    local_c = (uint)(iVar1 == 0);
    if (local_c != 0) goto LAB_03bb0138;
    uVar6 = (uint)(iVar1 == 0);
    if (iVar1 == 1) {
      if (param_3 == 1) {
LAB_03bb02ac:
        local_c = uVar6;
        piVar5 = (int *)std::
                        map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
                        ::operator[](param_1,(FestivalGameReward *)&local_c);
        *piVar5 = param_3;
        local_c = param_3;
        puVar3 = (uint *)std::
                         map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
                         ::operator[](param_1,(FestivalGameReward *)&local_c);
        *puVar3 = uVar6;
      }
      else if (param_3 == 0) {
        local_c = param_3;
        puVar4 = (undefined4 *)
                 std::
                 map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
                 ::operator[](param_1,(FestivalGameReward *)&local_c);
        *puVar4 = 1;
        local_c = iVar1;
        puVar4 = (undefined4 *)
                 std::
                 map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
                 ::operator[](param_1,(FestivalGameReward *)&local_c);
        *puVar4 = 0;
      }
      else if (param_3 == 2) {
        puVar4 = (undefined4 *)
                 std::
                 map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
                 ::operator[](param_1,(FestivalGameReward *)&local_c);
        *puVar4 = 1;
        local_c = iVar1;
        puVar4 = (undefined4 *)
                 std::
                 map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
                 ::operator[](param_1,(FestivalGameReward *)&local_c);
        *puVar4 = 0;
      }
    }
    else {
      if (iVar1 != 2) goto LAB_03bb00d4;
      if (param_3 == 1) goto LAB_03bb02ac;
      if (param_3 != 0) {
        if (param_3 == 2) {
          local_c = uVar6;
          puVar4 = (undefined4 *)
                   std::
                   map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
                   ::operator[](param_1,(FestivalGameReward *)&local_c);
          *puVar4 = 1;
          local_c = 1;
          puVar4 = (undefined4 *)
                   std::
                   map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
                   ::operator[](param_1,(FestivalGameReward *)&local_c);
          *puVar4 = 0;
        }
        goto LAB_03bb00d4;
      }
LAB_03bb0278:
      local_c = param_3;
      puVar4 = (undefined4 *)
               std::
               map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
               ::operator[](param_1,(FestivalGameReward *)&local_c);
      *puVar4 = 1;
      local_c = 1;
      piVar5 = (int *)std::
                      map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
                      ::operator[](param_1,(FestivalGameReward *)&local_c);
      *piVar5 = param_3;
    }
  }
LAB_03bb00d4:
  uVar6 = (uint)local_d;
joined_r0x03bb0190:
  if (local_d == 0) {
    local_c = 2;
    puVar3 = (uint *)std::
                     map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
                     ::operator[](param_1,(FestivalGameReward *)&local_c);
    *puVar3 = uVar6;
    local_c = 3;
    puVar4 = (undefined4 *)
             std::
             map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
             ::operator[](param_1,(FestivalGameReward *)&local_c);
    *puVar4 = 1;
  }
  else {
    local_c = 2;
    puVar4 = (undefined4 *)
             std::
             map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
             ::operator[](param_1,(FestivalGameReward *)&local_c);
    *puVar4 = 1;
    local_c = 3;
    puVar4 = (undefined4 *)
             std::
             map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
             ::operator[](param_1,(FestivalGameReward *)&local_c);
    *puVar4 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalManager::FestivalManager() */

void __thiscall FestivalManager::FestivalManager(FestivalManager *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_00;
  string asStack_70 [8];
  undefined4 local_68 [2];
  vector<std::string,std::allocator<std::string>> avStack_60 [24];
  undefined4 local_48 [2];
  vector<std::string,std::allocator<std::string>> avStack_40 [24];
  undefined4 local_28 [2];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18);
  Sexy::LazySingleton<FestivalManager>::LazySingleton((LazySingleton<FestivalManager> *)this);
  *(undefined ***)this = &PTR__FestivalManager_06737b10;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_00);
  ActivityLevelsData::ActivityLevelsData((ActivityLevelsData *)(this + 0x30));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_28);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),(RtWeakPtr *)local_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
  std::vector<ChristmasProtectInfo,std::allocator<ChristmasProtectInfo>>::clear
            ((vector<ChristmasProtectInfo,std::allocator<ChristmasProtectInfo>> *)this_00);
  ChristmasProtectInfo::ChristmasProtectInfo((ChristmasProtectInfo *)local_68);
  local_68[0] = 0;
  std::string::string((string *)local_28,"kernelpult");
  std::vector<std::string,std::allocator<std::string>>::push_back(avStack_60,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  std::string::string((string *)local_28,"splitpea");
  std::vector<std::string,std::allocator<std::string>>::push_back(avStack_60,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  std::string::string((string *)local_28,"wallnut");
  std::vector<std::string,std::allocator<std::string>>::push_back(avStack_60,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  std::string::string((string *)local_28,"spikeweed");
  std::vector<std::string,std::allocator<std::string>>::push_back(avStack_60,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  std::string::string((string *)local_28,"jalapeno");
  std::vector<std::string,std::allocator<std::string>>::push_back(avStack_60,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  std::vector<ChristmasProtectInfo,std::allocator<ChristmasProtectInfo>>::push_back
            ((vector<ChristmasProtectInfo,std::allocator<ChristmasProtectInfo>> *)this_00,
             (ChristmasProtectInfo *)local_68);
  ChristmasProtectInfo::ChristmasProtectInfo((ChristmasProtectInfo *)local_48);
  local_48[0] = 1;
  std::string::string((string *)local_28,"repeater");
  std::vector<std::string,std::allocator<std::string>>::push_back(avStack_40,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  std::string::string((string *)local_28,"snowpea");
  std::vector<std::string,std::allocator<std::string>>::push_back(avStack_40,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  std::string::string((string *)local_28,"wallnut");
  std::vector<std::string,std::allocator<std::string>>::push_back(avStack_40,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  std::string::string((string *)local_28,"lightningreed");
  std::vector<std::string,std::allocator<std::string>>::push_back(avStack_40,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  std::string::string((string *)local_28,"cherry_bomb");
  std::vector<std::string,std::allocator<std::string>>::push_back(avStack_40,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  std::vector<ChristmasProtectInfo,std::allocator<ChristmasProtectInfo>>::push_back
            ((vector<ChristmasProtectInfo,std::allocator<ChristmasProtectInfo>> *)this_00,
             (ChristmasProtectInfo *)local_48);
  ChristmasProtectInfo::ChristmasProtectInfo((ChristmasProtectInfo *)local_28);
  local_28[0] = 2;
  std::string::string(asStack_70,"lightningreed");
  std::vector<std::string,std::allocator<std::string>>::push_back(avStack_20,asStack_70);
  std::string::~string(asStack_70);
  nop();
  std::string::string(asStack_70,"coconutcannon");
  std::vector<std::string,std::allocator<std::string>>::push_back(avStack_20,asStack_70);
  std::string::~string(asStack_70);
  nop();
  std::string::string(asStack_70,"spikeweed");
  std::vector<std::string,std::allocator<std::string>>::push_back(avStack_20,asStack_70);
  std::string::~string(asStack_70);
  nop();
  std::string::string(asStack_70,"empea");
  std::vector<std::string,std::allocator<std::string>>::push_back(avStack_20,asStack_70);
  std::string::~string(asStack_70);
  nop();
  std::string::string(asStack_70,"cherry_bomb");
  std::vector<std::string,std::allocator<std::string>>::push_back(avStack_20,asStack_70);
  std::string::~string(asStack_70);
  nop();
  std::vector<ChristmasProtectInfo,std::allocator<ChristmasProtectInfo>>::push_back
            ((vector<ChristmasProtectInfo,std::allocator<ChristmasProtectInfo>> *)this_00,
             (ChristmasProtectInfo *)local_28);
  WorldResourceLoadState::~WorldResourceLoadState((WorldResourceLoadState *)local_28);
  WorldResourceLoadState::~WorldResourceLoadState((WorldResourceLoadState *)local_48);
  WorldResourceLoadState::~WorldResourceLoadState((WorldResourceLoadState *)local_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FestivalManager::~FestivalManager() */

void __thiscall FestivalManager::~FestivalManager(FestivalManager *this)

{
  *(undefined ***)this = &PTR__FestivalManager_06737b10;
  ActivityLevelsData::~ActivityLevelsData((ActivityLevelsData *)(this + 0x30));
  std::vector<ChristmasProtectInfo,std::allocator<ChristmasProtectInfo>>::~vector
            ((vector<ChristmasProtectInfo,std::allocator<ChristmasProtectInfo>> *)(this + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  Sexy::LazySingleton<FestivalManager>::~LazySingleton((LazySingleton<FestivalManager> *)this);
  return;
}


/* FestivalManager::~FestivalManager() */

void __thiscall FestivalManager::~FestivalManager(FestivalManager *this)

{
  ~FestivalManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalManager::HasData() */

void __thiscall FestivalManager::HasData(FestivalManager *this)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03bae568(local_80);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = ActivityLevelsData::IsValid((ActivityLevelsData *)(this + 0x30));
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* FestivalManager::RefreshData(ActiveItem*) */

void __thiscall FestivalManager::RefreshData(FestivalManager *this,ActiveItem *param_1)

{
  char cVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  ActiveItem::GetDataSerialized(param_1,(RtObject *)(this + 0x30));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar1 = HasData(this);
  if ((pPVar3 != (PlayerInfo *)0x0) && (cVar1 != '\0')) {
    uVar6 = *(undefined8 *)(this + 0x38);
    lVar4 = FUN_03bae578(uVar6,*(undefined8 *)(this + 0x40));
    if (lVar4 != 0) {
      lVar7 = 0;
      while( true ) {
        puVar5 = (undefined4 *)FUN_03bae598(uVar6,lVar7);
        uVar2 = FUN_03bae54c(*puVar5);
        PlayerInfo::SetFestivalGameLeftCount(pPVar3,uVar2,puVar5[1]);
        if (lVar7 + 1 == lVar4) break;
        uVar6 = *(undefined8 *)(this + 0x38);
        lVar7 = lVar7 + 1;
      }
    }
  }
  return;
}


/* FestivalManager::GetChooseByMode(FestivalGameMode) */

int * __thiscall FestivalManager::GetChooseByMode(FestivalManager *this,undefined4 param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  
  cVar2 = HasData(this);
  if (cVar2 != '\0') {
    Sexy::LazySingleton<FestivalManager>::GetInstance();
    iVar3 = FUN_03bae558(param_2);
    uVar7 = *(undefined8 *)(this + 0x38);
    lVar4 = FUN_03bae578(uVar7,*(undefined8 *)(this + 0x40));
    if (lVar4 != 0) {
      lVar6 = 0;
      do {
        lVar1 = lVar6 + 1;
        piVar5 = (int *)FUN_03bae598(uVar7,lVar6);
        if (iVar3 == *piVar5) {
          return piVar5;
        }
        lVar6 = lVar1;
      } while (lVar1 != lVar4);
    }
  }
  return (int *)0x0;
}


/* FestivalManager::GetCanBuyTimes(FestivalGameMode) */

undefined1 FestivalManager::GetCanBuyTimes(FestivalManager *param_1)

{
  char cVar1;
  undefined1 uVar2;
  Activity_Level_Data *this;
  
  this = (Activity_Level_Data *)GetChooseByMode();
  if ((this != (Activity_Level_Data *)0x0) && (cVar1 = HasData(param_1), cVar1 != '\0')) {
    uVar2 = Activity_Level_Data::CanBuyTimes(this);
    return uVar2;
  }
  return 0;
}


/* FestivalManager::GetCurrentBuyPrice(FestivalGameMode) */

undefined8 FestivalManager::GetCurrentBuyPrice(FestivalManager *param_1)

{
  char cVar1;
  Activity_Level_Data *this;
  undefined8 uVar2;
  
  this = (Activity_Level_Data *)GetChooseByMode();
  if ((this != (Activity_Level_Data *)0x0) && (cVar1 = HasData(param_1), cVar1 != '\0')) {
    uVar2 = Activity_Level_Data::GetCurrentPrice(this);
    return uVar2;
  }
  return 0xffffffff;
}


/* FestivalManager::GetOpenDays(FestivalGameMode) */

vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> * __thiscall
FestivalManager::GetOpenDays
          (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,
          FestivalManager *this)

{
  char cVar1;
  long lVar2;
  
  lVar2 = GetChooseByMode();
  if ((lVar2 != 0) && (cVar1 = HasData(this), cVar1 != '\0')) {
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)param_1,(vector *)(lVar2 + 0x28));
    return param_1;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalManager::HasGameModeToday(FestivalGameMode) */

void __thiscall FestivalManager::HasGameModeToday(FestivalManager *this,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = HasData(this);
  if (((cVar1 == '\0') || (lVar3 = GetChooseByMode(this,param_2), lVar3 == 0)) ||
     (local_20 = LawnApp::GetRealBeijingTime(gLawnApp), local_20 < 1)) {
    bVar2 = false;
  }
  else {
    lVar4 = LawnApp::BeijingTime(gLawnApp,&local_20);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar3 + 0x28));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar3 + 0x28));
    while ((bVar2 = __gnu_cxx::operator!=
                              ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2
           && (piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get
                                         ((exception_ptr *)&local_18),
              *(int *)(lVar4 + 0x18) != *piVar5))) {
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


/* FestivalManager::IsFestivalOpen(FestivalGameMode) */

ulong __thiscall FestivalManager::IsFestivalOpen(FestivalManager *this,int param_2)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  
  bVar1 = HasData(this);
  uVar3 = (ulong)bVar1;
  if (bVar1 != 0) {
    if (param_2 != -1) {
      uVar3 = HasGameModeToday();
      return uVar3;
    }
    cVar2 = IsFestivalOpen(this,0);
    if (cVar2 != '\0') {
      return uVar3;
    }
    cVar2 = IsFestivalOpen(this,1);
    if (cVar2 != '\0') {
      return uVar3;
    }
    cVar2 = IsFestivalOpen(this,2);
    if (cVar2 != '\0') {
      return uVar3;
    }
  }
  return 0;
}


/* FestivalManager::IsFestivalActive(FestivalGameMode) */

char __thiscall FestivalManager::IsFestivalActive(FestivalManager *this,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *pPVar4;
  
  cVar1 = HasData(this);
  if (cVar1 != '\0') {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if (param_2 == -1) {
      cVar2 = IsFestivalActive(this,0);
      if (cVar2 != '\0') {
        return cVar1;
      }
      cVar2 = IsFestivalActive(this,1);
      if (cVar2 != '\0') {
        return cVar1;
      }
      cVar2 = IsFestivalActive(this,2);
      if (cVar2 != '\0') {
        return cVar1;
      }
    }
    else {
      cVar1 = IsFestivalOpen(this,param_2);
      if ((cVar1 != '\0') &&
         (iVar3 = PlayerInfo::GetFestivalGameLeftCount(pPVar4,param_2), 0 < iVar3)) {
        return cVar1;
      }
    }
  }
  return '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalManager::FestivalInit() */

void __thiscall FestivalManager::FestivalInit(FestivalManager *this)

{
  char cVar1;
  int iVar2;
  ActivityManager *pAVar3;
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = HasData(this);
  if (cVar1 == '\0') {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    RefreshData(this,aAStack_88);
    ActiveItem::~ActiveItem(aAStack_88);
  }
  pAVar3 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  FUN_03bae814((function<bool(Sexy::Touch_const&)> *)aAStack_88,this);
  ActivityManager::SetActiveUpdateNotice
            (pAVar3,0x2970,(function<bool(Sexy::Touch_const&)> *)aAStack_88);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

