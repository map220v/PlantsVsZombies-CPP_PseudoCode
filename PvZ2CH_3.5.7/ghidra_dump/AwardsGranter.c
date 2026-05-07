// Class: AwardsGranter


/* AwardsGranter::AwardTypeToString(AwardType) */

char * AwardsGranter::AwardTypeToString(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return "present";
  case 2:
    return "collectible";
  case 3:
    return "unlock_plant";
  case 4:
    return "powerup";
  case 5:
    return "upgrade";
  case 6:
    return "mapgadget";
  case 7:
    return "powerupgadget";
  case 8:
    return "firstkey";
  case 9:
    return "note";
  default:
    return "none";
  case 0xb:
    return "coins";
  case 0xc:
    return "gems";
  case 0xd:
    return "powerupuse";
  case 0xe:
    return "key";
  case 0xf:
    return "game_feature";
  case 0x10:
    return "costumegroup_lod";
  case 0x11:
    return "costume";
  case 0x12:
    return "giftbox";
  case 0x13:
    return "worldkey";
  case 0x14:
    return "sprout";
  case 0x15:
    return "plant_boost";
  }
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwardsGranter::IsOwned(AwardType, std::string, bool) */

void AwardsGranter::IsOwned(int param_1,string *param_2)

{
  undefined1 uVar1;
  ProfileMgr *pPVar2;
  PlayerInfo *pPVar3;
  long lVar4;
  string *psVar5;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 5) {
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar5);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    param_2 = (string *)(extraout_x0 + 0x98);
  }
  else {
    if (param_1 != 0xf) {
      if (param_1 == 3) {
        pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
        uVar1 = PlayerInfo::GetIsPlantUnlocked(pPVar3,param_2);
      }
      else {
        uVar1 = 0;
      }
      goto LAB_03b5dc8c;
    }
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
  }
  FUN_05475d88(asStack_10,param_2);
  GameFeatureType::GetGameFeatureTypeFromUnlockString((GameFeatureType *)aRStack_18,asStack_10);
  std::string::~string(asStack_10);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  uVar1 = PlayerInfo::GameFeatureIsUnlocked(pPVar3,*(undefined4 *)(lVar4 + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
LAB_03b5dc8c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwardsGranter::GiveAward(AwardType, std::string, int, AWARD_Context, bool, std::string,
   std::string) */

void AwardsGranter::GiveAward
               (undefined4 param_1,string *param_2,ulong param_3,uint param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  bool bVar2;
  string *psVar3;
  long extraout_x0;
  char *pcVar4;
  ProfileMgr *pPVar5;
  PlayerInfo *pPVar6;
  long lVar7;
  undefined8 uVar8;
  ulong __n;
  int iVar9;
  ulong uVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  int local_28 [2];
  string asStack_20 [8];
  undefined1 auStack_18 [8];
  int local_10;
  long local_8;
  
  __n = (ulong)param_4;
  local_8 = ___stack_chk_guard;
  uVar10 = param_3 & 0xffffffff;
  iVar9 = (int)param_3;
  switch(param_1) {
  case 3:
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
    PlayerInfo::UnlockPlant(pPVar6,param_2,false);
    bVar2 = std::operator==(param_2,"sunflower");
    if (bVar2) {
      ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(10);
    }
    else {
      bVar2 = std::operator==(param_2,"wallnut");
      if (bVar2) {
        ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(0xf);
      }
      else {
        bVar2 = std::operator==(param_2,"potatomine");
        if (bVar2) {
          ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(0x15);
        }
      }
    }
    goto LAB_03b5ddf8;
  case 5:
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
    FUN_05475d88((RtWeakPtr<Sexy::ResourceInfo> *)local_28,extraout_x0 + 0x98);
    GameFeatureType::GetGameFeatureTypeFromUnlockString
              ((GameFeatureType *)aRStack_30,(RtWeakPtr<Sexy::ResourceInfo> *)local_28);
    std::string::~string((string *)local_28);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    PlayerInfo::UnlockGameFeature(pPVar6,*(undefined4 *)(lVar7 + 0x30));
    puVar1 = gMessageRouter;
    uVar8 = FUN_0547429c(param_2);
    MessageRouter::Broadcast<int,char_const*,int,AWARD_Context,char_const*,int>
              ((MessageRouter *)puVar1,Message::AwardGiven,__n,uVar8,uVar10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    param_3 = __n;
    break;
  case 6:
    ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(0x1d);
    break;
  case 0xb:
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
    PlayerInfo::AddCoins(pPVar6,iVar9);
    pcVar4 = "coins %d";
    goto LAB_03b5dfb8;
  case 0xc:
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
    PlayerInfo::AddGems(pPVar6,iVar9,true);
    pcVar4 = "gems %d";
LAB_03b5dfb8:
    Sexy::StrFormat(pcVar4,local_28,uVar10);
    puVar1 = gMessageRouter;
    uVar8 = FUN_0547429c((string *)local_28);
    MessageRouter::Broadcast<int,char_const*,int,AWARD_Context,char_const*,int>
              ((MessageRouter *)puVar1,Message::AwardGiven,__n,uVar8,uVar10);
    std::string::~string((string *)local_28);
    if (param_4 != 10) goto LAB_03b5de30;
    goto LAB_03b5dffc;
  case 0xd:
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
    PlayerInfo::ModifyPowerupUses(pPVar6,param_2,iVar9);
    goto LAB_03b5ddf8;
  case 0xe:
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
    PlayerInfo::AddKeys(pPVar6,param_2,iVar9);
LAB_03b5ddf8:
    puVar1 = gMessageRouter;
    uVar8 = FUN_0547429c(param_2);
    MessageRouter::Broadcast<int,char_const*,int,AWARD_Context,char_const*,int>
              ((MessageRouter *)puVar1,Message::AwardGiven,__n,uVar8,uVar10);
    param_3 = __n;
    break;
  case 0xf:
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
    FUN_05475d88((string *)local_28,param_2);
    GameFeatureType::GetGameFeatureTypeFromUnlockString
              ((GameFeatureType *)aRStack_30,(string *)local_28);
    std::string::~string((string *)local_28);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    PlayerInfo::UnlockGameFeature(pPVar6,*(undefined4 *)(lVar7 + 0x30));
    puVar1 = gMessageRouter;
    uVar8 = FUN_0547429c(param_2);
    MessageRouter::Broadcast<int,char_const*,int,AWARD_Context,char_const*,int>
              ((MessageRouter *)puVar1,Message::AwardGiven,__n,uVar8,uVar10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    param_3 = __n;
    break;
  case 0x11:
    param_3 = 0xffffffff;
    local_28[0] = -1;
    pcVar4 = (char *)FUN_0547429c(param_2);
    Sexy::StringToInt(pcVar4,local_28);
    break;
  case 0x13:
    param_3 = (ulong)param_4;
    MessageRouter::Broadcast<int,char_const*,int,AWARD_Context,char_const*,int>
              ((MessageRouter *)gMessageRouter,Message::AwardGiven,param_3,"WorldKey",uVar10);
  }
  __n = param_3;
  if (param_4 == 10) {
LAB_03b5dffc:
    Lua::DownloadInfo::DownloadInfo((DownloadInfo *)local_28);
    thunk_FUN_05475e00((DownloadInfo *)local_28,param_7);
    pcVar4 = (char *)AwardTypeToString(param_1);
    std::string::append(asStack_20,pcVar4,__n);
    thunk_FUN_05475e00(auStack_18,param_2);
    local_10 = iVar9;
    MessageRouter::Broadcast<_EpicQuestRewardInfo_const*,_EpicQuestRewardInfo*>
              ((MessageRouter *)gMessageRouter,Message::EpicQuestRewarded,
               (_EpicQuestRewardInfo *)local_28);
    Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)local_28);
  }
LAB_03b5de30:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwardsGranter::GiveAward(AwardType, std::string, int, AWARD_Context, bool) */

void AwardsGranter::GiveAward
               (undefined4 param_1,undefined8 param_2,undefined4 param_3,ulong param_4,
               undefined1 param_5)

{
  char *__s;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_20);
  std::string::string(asStack_18,"award");
  __s = (char *)AwardContextToString(param_4 & 0xffffffff);
  std::string::string(asStack_10,__s);
  GiveAward(param_1,asStack_20,param_3,param_4,param_5,asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

