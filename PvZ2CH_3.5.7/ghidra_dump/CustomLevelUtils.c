// Class: CustomLevelUtils


/* CustomLevelUtils::TryFilterLevelPreviews(int, int) */

void CustomLevelUtils::TryFilterLevelPreviews(int param_1,int param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RequestGetFilterPreviewList(this,param_1,param_2);
  return;
}


/* CustomLevelUtils::TryLoadLevels() */

void __thiscall CustomLevelUtils::TryLoadLevels(CustomLevelUtils *this)

{
  Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::LoadLevelDatas();
  return;
}


/* CustomLevelUtils::TryPerformLikeDislike(bool) */

void CustomLevelUtils::TryPerformLikeDislike(bool param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RequestPerformLikeDislike(this,param_1);
  return;
}


/* CustomLevelUtils::TryUpdateFavourite(bool) */

void CustomLevelUtils::TryUpdateFavourite(bool param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RequestUpdateFavourite(this,param_1);
  return;
}


/* CustomLevelUtils::TryGetLevelPlayCount() */

void CustomLevelUtils::TryGetLevelPlayCount(void)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RequestGetPlayCount(this);
  return;
}


/* CustomLevelUtils::TryUpdateDownloadable(bool) */

void CustomLevelUtils::TryUpdateDownloadable(bool param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RequestChangeDownloadable(this,param_1);
  return;
}


/* CustomLevelUtils::SetTutorialDownloadURL(std::string const&) */

void CustomLevelUtils::SetTutorialDownloadURL(string *param_1)

{
  string *psVar1;
  
  psVar1 = (string *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::SetTutorialDownloadURL(psVar1);
  return;
}


/* CustomLevelUtils::GetTutorialDownloadURL() */

void CustomLevelUtils::GetTutorialDownloadURL(void)

{
  PlayerInfo *this;
  
  this = (PlayerInfo *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  PlayerInfo::GetAccessoryPiecesInfo(this);
  return;
}


/* CustomLevelUtils::TryDownloadLevelData(std::string const&, int, bool, bool) */

void CustomLevelUtils::TryDownloadLevelData(string *param_1,int param_2,bool param_3,bool param_4)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RequestDownloadLevelData(this,param_1,param_2,param_3,param_4);
  return;
}


/* CustomLevelUtils::TryUpdateLevelName(std::string const&) */

void CustomLevelUtils::TryUpdateLevelName(string *param_1)

{
  string *psVar1;
  
  psVar1 = (string *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RequestUpdateLevelName(psVar1);
  return;
}


/* CustomLevelUtils::TryUploadCurrentLevel() */

void CustomLevelUtils::TryUploadCurrentLevel(void)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::UploadCurrentLevelData(this);
  return;
}


/* CustomLevelUtils::TryDeleteLevel() */

void CustomLevelUtils::TryDeleteLevel(void)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RequestDeleteLevelData(this);
  return;
}


/* CustomLevelUtils::TryStartNetworkLevel() */

void CustomLevelUtils::TryStartNetworkLevel(void)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RequestStartLevel(this);
  return;
}


/* CustomLevelUtils::TryLoadLevel(int) */

void CustomLevelUtils::TryLoadLevel(int param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::LoadLevelData(this,param_1);
  return;
}


/* CustomLevelUtils::TryStartLevel() */

void CustomLevelUtils::TryStartLevel(void)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::StartLoadedLevel(this);
  return;
}


/* CustomLevelUtils::IsLevelDownloaded() */

void CustomLevelUtils::IsLevelDownloaded(void)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::IsCurrentNetworkLevelDownloaded(this);
  return;
}


/* CustomLevelUtils::GetLevelDetailsLevelID() */

undefined4 CustomLevelUtils::GetLevelDetailsLevelID(void)

{
  CustomLevelMgr *this;
  long lVar1;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  lVar1 = CustomLevelMgr::GetNetworkLevelDetails(this);
  return *(undefined4 *)(lVar1 + 0x14);
}


/* CustomLevelUtils::GetLevelDetailsAuthorID() */

undefined4 CustomLevelUtils::GetLevelDetailsAuthorID(void)

{
  CustomLevelMgr *this;
  long lVar1;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  lVar1 = CustomLevelMgr::GetNetworkLevelDetails(this);
  return *(undefined4 *)(lVar1 + 0x48);
}


/* CustomLevelUtils::GetLevelDetailsLevelName() */

long CustomLevelUtils::GetLevelDetailsLevelName(void)

{
  CustomLevelMgr *this;
  long lVar1;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  lVar1 = CustomLevelMgr::GetNetworkLevelDetails(this);
  return lVar1 + 0x18;
}


/* CustomLevelUtils::GetLevelDetailsWorldType() */

undefined4 CustomLevelUtils::GetLevelDetailsWorldType(void)

{
  CustomLevelMgr *this;
  long lVar1;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  lVar1 = CustomLevelMgr::GetNetworkLevelDetails(this);
  return *(undefined4 *)(lVar1 + 0x20);
}


/* CustomLevelUtils::GetLevelDetailsMode() */

undefined4 CustomLevelUtils::GetLevelDetailsMode(void)

{
  CustomLevelMgr *this;
  long lVar1;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  lVar1 = CustomLevelMgr::GetNetworkLevelDetails(this);
  return *(undefined4 *)(lVar1 + 0x24);
}


/* CustomLevelUtils::GetLevelDetailsCanBeDownloaded() */

undefined1 CustomLevelUtils::GetLevelDetailsCanBeDownloaded(void)

{
  CustomLevelMgr *this;
  long lVar1;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  lVar1 = CustomLevelMgr::GetNetworkLevelDetails(this);
  return *(undefined1 *)(lVar1 + 0x28);
}


/* CustomLevelUtils::GetLevelDetailsLikesOrDislikes(bool) */

undefined4 CustomLevelUtils::GetLevelDetailsLikesOrDislikes(bool param_1)

{
  CustomLevelMgr *pCVar1;
  long lVar2;
  
  if (!param_1) {
    pCVar1 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
    lVar2 = CustomLevelMgr::GetNetworkLevelDetails(pCVar1);
    return *(undefined4 *)(lVar2 + 0x30);
  }
  pCVar1 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  lVar2 = CustomLevelMgr::GetNetworkLevelDetails(pCVar1);
  return *(undefined4 *)(lVar2 + 0x2c);
}


/* CustomLevelUtils::GetLevelDetailsPlayCount() */

undefined4 CustomLevelUtils::GetLevelDetailsPlayCount(void)

{
  CustomLevelMgr *this;
  long lVar1;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  lVar1 = CustomLevelMgr::GetNetworkLevelDetails(this);
  return *(undefined4 *)(lVar1 + 0x34);
}


/* CustomLevelUtils::GetLevelDetailsSuggested() */

undefined4 CustomLevelUtils::GetLevelDetailsSuggested(void)

{
  CustomLevelMgr *this;
  long lVar1;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  lVar1 = CustomLevelMgr::GetNetworkLevelDetails(this);
  return *(undefined4 *)(lVar1 + 0x38);
}


/* CustomLevelUtils::GetLevelDetailsAuthorHeadshotID() */

undefined4 CustomLevelUtils::GetLevelDetailsAuthorHeadshotID(void)

{
  CustomLevelMgr *this;
  long lVar1;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  lVar1 = CustomLevelMgr::GetNetworkLevelDetails(this);
  return *(undefined4 *)(lVar1 + 0x4c);
}


/* CustomLevelUtils::GetLevelDetailsRateResult() */

undefined4 CustomLevelUtils::GetLevelDetailsRateResult(void)

{
  CustomLevelMgr *this;
  long lVar1;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  lVar1 = CustomLevelMgr::GetNetworkLevelDetails(this);
  return *(undefined4 *)(lVar1 + 0x80);
}


/* CustomLevelUtils::GetLevelDetailsAuthorName() */

long CustomLevelUtils::GetLevelDetailsAuthorName(void)

{
  CustomLevelMgr *this;
  long lVar1;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  lVar1 = CustomLevelMgr::GetNetworkLevelDetails(this);
  return lVar1 + 0x50;
}


/* CustomLevelUtils::GetLevelDetailsUploadedDate() */

long CustomLevelUtils::GetLevelDetailsUploadedDate(void)

{
  CustomLevelMgr *this;
  long lVar1;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  lVar1 = CustomLevelMgr::GetNetworkLevelDetails(this);
  return lVar1 + 0x60;
}


/* CustomLevelUtils::GetLevelDetailsUpdatedDate() */

long CustomLevelUtils::GetLevelDetailsUpdatedDate(void)

{
  CustomLevelMgr *this;
  long lVar1;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  lVar1 = CustomLevelMgr::GetNetworkLevelDetails(this);
  return lVar1 + 0x68;
}


/* CustomLevelUtils::RecordFinishedLevel(float) */

void CustomLevelUtils::RecordFinishedLevel(float param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RecordFinishedLevel(this,param_1);
  return;
}


/* CustomLevelUtils::HasFinishedLevel() */

void CustomLevelUtils::HasFinishedLevel(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  FUN_035e1dec(*(undefined1 *)(lVar1 + 0x33c));
  return;
}


/* CustomLevelUtils::ResetFinishedLevel() */

void CustomLevelUtils::ResetFinishedLevel(void)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::ResetFinishedLevel(this);
  return;
}


/* CustomLevelUtils::IsCurrentLevelUploaded() */

void CustomLevelUtils::IsCurrentLevelUploaded(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  FUN_035e1df0(*(undefined1 *)(lVar1 + 0x33d));
  return;
}


/* CustomLevelUtils::SetWorld(CustomLevelNetworkWorldType) */

void CustomLevelUtils::SetWorld(undefined4 param_1)

{
  CustomLevelMgr *pCVar1;
  
  pCVar1._0_4_ = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::SetWorld(pCVar1._0_4_,param_1);
  return;
}


/* CustomLevelUtils::SetStartingSun(int) */

void CustomLevelUtils::SetStartingSun(int param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::SetStartingSun(this,param_1);
  return;
}


/* CustomLevelUtils::UpdatePlantGrid(std::string const&, int, int, int, bool) */

void CustomLevelUtils::UpdatePlantGrid
               (string *param_1,int param_2,int param_3,int param_4,bool param_5)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::UpdatePlantGrid(this,param_1,param_2,param_3,param_4,param_5);
  return;
}


/* CustomLevelUtils::UpdateGridItemGrid(std::string const&, int, int, int, bool) */

void CustomLevelUtils::UpdateGridItemGrid
               (string *param_1,int param_2,int param_3,int param_4,bool param_5)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::UpdateGridItemGrid(this,param_1,param_2,param_3,param_4,param_5);
  return;
}


/* CustomLevelUtils::UpdateMoldGrid(int, int, bool) */

void CustomLevelUtils::UpdateMoldGrid(int param_1,int param_2,bool param_3)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::UpdateMoldGrid(this,param_1,param_2,param_3);
  return;
}


/* CustomLevelUtils::SetSeedBankType(CustomSeedBankType) */

void CustomLevelUtils::SetSeedBankType(undefined4 param_1)

{
  UIRewardFrame *pUVar1;
  
  pUVar1._0_4_ = (UIRewardFrame *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  UIRewardFrame::SetDecoratorType(pUVar1._0_4_,param_1);
  return;
}


/* CustomLevelUtils::SetSeedBankGlobalLevel(int) */

void CustomLevelUtils::SetSeedBankGlobalLevel(int param_1)

{
  PrimeGlyphCache *this;
  
  this = (PrimeGlyphCache *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  Sexy::PrimeGlyphCache::SetGlyphPadding(this,param_1);
  return;
}


/* CustomLevelUtils::AddSeedBankPlantBlackList(std::string const&) */

void CustomLevelUtils::AddSeedBankPlantBlackList(string *param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::AddSeedBankPlantBlackList(this,param_1);
  return;
}


/* CustomLevelUtils::RemoveSeedBankPlantBlackList(std::string const&) */

void CustomLevelUtils::RemoveSeedBankPlantBlackList(string *param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RemoveSeedBankPlantBlackList(this,param_1);
  return;
}


/* CustomLevelUtils::GetSeedBankPlantBlackList() */

void CustomLevelUtils::GetSeedBankPlantBlackList(void)

{
  PlayerInfo *this;
  
  this = (PlayerInfo *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  PlayerInfo::GetPlantAvatarInfo(this);
  return;
}


/* CustomLevelUtils::AddPresetSeedBankPlant(std::string const&, int) */

void CustomLevelUtils::AddPresetSeedBankPlant(string *param_1,int param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::AddPresetSeedBankPlant(this,param_1,param_2);
  return;
}


/* CustomLevelUtils::RemovePresetSeedBankPlant(int) */

void CustomLevelUtils::RemovePresetSeedBankPlant(int param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RemovePresetSeedBankPlant(this,param_1);
  return;
}


/* CustomLevelUtils::AddConveyorSeedBankPlant(std::string const&, int, int, int) */

void CustomLevelUtils::AddConveyorSeedBankPlant(string *param_1,int param_2,int param_3,int param_4)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::AddConveyorSeedBankPlant(this,param_1,param_2,param_3,param_4);
  return;
}


/* CustomLevelUtils::UpdateConveyorSeedBankPlant(int, int, int) */

void CustomLevelUtils::UpdateConveyorSeedBankPlant(int param_1,int param_2,int param_3)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::UpdateConveyorSeedBankPlant(this,param_1,param_2,param_3);
  return;
}


/* CustomLevelUtils::RemoveConveyorSeedBankPlant(int) */

void CustomLevelUtils::RemoveConveyorSeedBankPlant(int param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RemoveConveyorSeedBankPlant(this,param_1);
  return;
}


/* CustomLevelUtils::AddRandomZombies() */

void CustomLevelUtils::AddRandomZombies(void)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::AddRandomZombies(this);
  return;
}


/* CustomLevelUtils::AddWaveZombie(int, std::string const&, int, int, int) */

void CustomLevelUtils::AddWaveZombie
               (int param_1,string *param_2,int param_3,int param_4,int param_5)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::AddWaveZombie(this,param_1,param_2,param_3,param_4,param_5);
  return;
}


/* CustomLevelUtils::UpdateWaveZombie(int, int, int, int) */

void CustomLevelUtils::UpdateWaveZombie(int param_1,int param_2,int param_3,int param_4)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::UpdateWaveZombie(this,param_1,param_2,param_3,param_4);
  return;
}


/* CustomLevelUtils::RemoveWaveZombie(int, int, int) */

void CustomLevelUtils::RemoveWaveZombie(int param_1,int param_2,int param_3)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RemoveWaveZombie(this,param_1,param_2,param_3);
  return;
}


/* CustomLevelUtils::SetSandStormColumnEnd(int, int) */

void CustomLevelUtils::SetSandStormColumnEnd(int param_1,int param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::SetSandStormColumnEnd(this,param_1,param_2);
  return;
}


/* CustomLevelUtils::SetSandStormColumnStart(int, int) */

void CustomLevelUtils::SetSandStormColumnStart(int param_1,int param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::SetSandStormColumnStart(this,param_1,param_2);
  return;
}


/* CustomLevelUtils::AddWaveEventSandStorm(int, int, std::string const&) */

void CustomLevelUtils::AddWaveEventSandStorm(int param_1,int param_2,string *param_3)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::AddWaveEventSandStorm(this,param_1,param_2,param_3);
  return;
}


/* CustomLevelUtils::RemoveWaveEventSandStorm(int, int) */

void CustomLevelUtils::RemoveWaveEventSandStorm(int param_1,int param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RemoveWaveEventSandStorm(this,param_1,param_2);
  return;
}


/* CustomLevelUtils::SetSpiderStormColumnStartEnd(int, int) */

void CustomLevelUtils::SetSpiderStormColumnStartEnd(int param_1,int param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::SetSpiderStormColumnStartEnd(this,param_1,param_2);
  return;
}


/* CustomLevelUtils::SetSpiderStormZombieCount(int, int) */

void CustomLevelUtils::SetSpiderStormZombieCount(int param_1,int param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::SetSpiderStormZombieCount(this,param_1,param_2);
  return;
}


/* CustomLevelUtils::RemoveWaveEventSpiderStorm(int) */

void CustomLevelUtils::RemoveWaveEventSpiderStorm(int param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RemoveWaveEventSpiderStorm(this,param_1);
  return;
}


/* CustomLevelUtils::SetRaidingPartySwashbucklerCount(int, int) */

void CustomLevelUtils::SetRaidingPartySwashbucklerCount(int param_1,int param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::SetRaidingPartySwashbucklerCount(this,param_1,param_2);
  return;
}


/* CustomLevelUtils::IsWaveEventPortalValid(int) */

void CustomLevelUtils::IsWaveEventPortalValid(int param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::IsWaveEventPortalValid(this,param_1);
  return;
}


/* CustomLevelUtils::SetPortalColumn(int, int) */

void CustomLevelUtils::SetPortalColumn(int param_1,int param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::SetPortalColumn(this,param_1,param_2);
  return;
}


/* CustomLevelUtils::SetPortalRow(int, int) */

void CustomLevelUtils::SetPortalRow(int param_1,int param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::SetPortalRow(this,param_1,param_2);
  return;
}


/* CustomLevelUtils::SetPortalType(int, std::string const&) */

void CustomLevelUtils::SetPortalType(int param_1,string *param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::SetPortalType(this,param_1,param_2);
  return;
}


/* CustomLevelUtils::GetPortalColumn(int) */

void CustomLevelUtils::GetPortalColumn(int param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::GetPortalColumn(this,param_1);
  return;
}


/* CustomLevelUtils::GetPortalRow(int) */

void CustomLevelUtils::GetPortalRow(int param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::GetPortalRow(this,param_1);
  return;
}


/* CustomLevelUtils::GetPortalType(int) */

void CustomLevelUtils::GetPortalType(int param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::GetPortalType(this,param_1);
  return;
}


/* CustomLevelUtils::IsWaveEventDinoValid(int) */

void CustomLevelUtils::IsWaveEventDinoValid(int param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::IsWaveEventDinoValid(this,param_1);
  return;
}


/* CustomLevelUtils::SetDinoRow(int, int) */

void CustomLevelUtils::SetDinoRow(int param_1,int param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::SetDinoRow(this,param_1,param_2);
  return;
}


/* CustomLevelUtils::SetDinoTimeInterval(int, float) */

void CustomLevelUtils::SetDinoTimeInterval(int param_1,float param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::SetDinoTimeInterval(this,param_1,param_2);
  return;
}


/* CustomLevelUtils::GetDinoRow(int) */

void CustomLevelUtils::GetDinoRow(int param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::GetDinoRow(this,param_1);
  return;
}


/* CustomLevelUtils::GetDinoTimeInterval(int) */

void CustomLevelUtils::GetDinoTimeInterval(int param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::GetDinoTimeInterval(this,param_1);
  return;
}


/* CustomLevelUtils::AddWaveEventFrostWind(int, int) */

void CustomLevelUtils::AddWaveEventFrostWind(int param_1,int param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::AddWaveEventFrostWind(this,param_1,param_2);
  return;
}


/* CustomLevelUtils::UpdateWaveEventFrostWind(int, int, int) */

void CustomLevelUtils::UpdateWaveEventFrostWind(int param_1,int param_2,int param_3)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::UpdateWaveEventFrostWind(this,param_1,param_2,param_3);
  return;
}


/* CustomLevelUtils::RemoveWaveEventFrostWind(int, int) */

void CustomLevelUtils::RemoveWaveEventFrostWind(int param_1,int param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RemoveWaveEventFrostWind(this,param_1,param_2);
  return;
}


/* CustomLevelUtils::SetLastStandStartingSun(int) */

void CustomLevelUtils::SetLastStandStartingSun(int param_1)

{
  TGPieceTableUI *this;
  
  this = (TGPieceTableUI *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  TGPieceTableUI::SetMinChips(this,param_1);
  return;
}


/* CustomLevelUtils::SetLastStandPlantfood(int) */

void CustomLevelUtils::SetLastStandPlantfood(int param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::SetLastStandPlantfood(this,param_1);
  return;
}


/* CustomLevelUtils::RemoveLastStand() */

void CustomLevelUtils::RemoveLastStand(void)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RemoveLastStand(this);
  return;
}


/* CustomLevelUtils::GetSet(int) */

void CustomLevelUtils::GetSet(int param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::GetSet(this,param_1);
  return;
}


/* CustomLevelUtils::GetSetSize() */

void CustomLevelUtils::GetSetSize(void)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::GetSetSize(this);
  return;
}


/* CustomLevelUtils::AddSet(int, int, float, float) */

void CustomLevelUtils::AddSet(int param_1,int param_2,float param_3,float param_4)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::AddSet(this,param_1,param_2,param_3,param_4);
  return;
}


/* CustomLevelUtils::UpdateSet(int, int, int, float, float) */

void CustomLevelUtils::UpdateSet(int param_1,int param_2,int param_3,float param_4,float param_5)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::UpdateSet(this,param_1,param_2,param_3,param_4,param_5);
  return;
}


/* CustomLevelUtils::RemoveSet(int) */

void CustomLevelUtils::RemoveSet(int param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RemoveSet(this,param_1);
  return;
}


/* CustomLevelUtils::SetSetRotateAndWaitTime(int, float, float) */

void CustomLevelUtils::SetSetRotateAndWaitTime(int param_1,float param_2,float param_3)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::SetSetRotateAndWaitTime(this,param_1,param_2,param_3);
  return;
}


/* CustomLevelUtils::GetSetMatrix(int, int) */

void CustomLevelUtils::GetSetMatrix(int param_1,int param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::GetSetMatrix(this,param_1,param_2);
  return;
}


/* CustomLevelUtils::GetSetMatrixSize(int) */

void CustomLevelUtils::GetSetMatrixSize(int param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::GetSetMatrixSize(this,param_1);
  return;
}


/* CustomLevelUtils::AddSetMatrix(int, bool) */

void CustomLevelUtils::AddSetMatrix(int param_1,bool param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::AddSetMatrix(this,param_1,param_2);
  return;
}


/* CustomLevelUtils::UpdateSetMatrix(int, int, bool) */

void CustomLevelUtils::UpdateSetMatrix(int param_1,int param_2,bool param_3)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::UpdateSetMatrix(this,param_1,param_2,param_3);
  return;
}


/* CustomLevelUtils::RemoveSetMatrix(int, int) */

void CustomLevelUtils::RemoveSetMatrix(int param_1,int param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RemoveSetMatrix(this,param_1,param_2);
  return;
}


/* CustomLevelUtils::IsEvilDaveValid() */

void CustomLevelUtils::IsEvilDaveValid(void)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::IsEvilDaveValid(this);
  return;
}


/* CustomLevelUtils::SetTowerDefendStartingSun(int) */

void CustomLevelUtils::SetTowerDefendStartingSun(int param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::SetTowerDefendStartingSun(this,param_1);
  return;
}


/* CustomLevelUtils::GetEvilDaveStartingSun() */

void CustomLevelUtils::GetEvilDaveStartingSun(void)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::GetEvilDaveStartingSun(this);
  return;
}


/* CustomLevelUtils::SetEvilDavePlantDistance(float) */

void CustomLevelUtils::SetEvilDavePlantDistance(float param_1)

{
  SkyCannonUI *this;
  
  this = (SkyCannonUI *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  SkyCannonUI::SetCoolDownTime(this,param_1);
  return;
}


/* CustomLevelUtils::GetEvilDavePlantDistance() */

void CustomLevelUtils::GetEvilDavePlantDistance(void)

{
  BossChallengeTimer *this;
  
  this = (BossChallengeTimer *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  BossChallengeTimer::GetTime(this);
  return;
}


/* CustomLevelUtils::AddEvilDavePlant(int, int, std::string const&) */

void CustomLevelUtils::AddEvilDavePlant(int param_1,int param_2,string *param_3)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::AddEvilDavePlant(this,param_1,param_2,param_3);
  return;
}


/* CustomLevelUtils::RemoveEvilDavePlant(int, int) */

void CustomLevelUtils::RemoveEvilDavePlant(int param_1,int param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RemoveEvilDavePlant(this,param_1,param_2);
  return;
}


/* CustomLevelUtils::AddEvilDaveZombie(int, std::string const&) */

void CustomLevelUtils::AddEvilDaveZombie(int param_1,string *param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::AddEvilDaveZombie(this,param_1,param_2);
  return;
}


/* CustomLevelUtils::RemoveEvilDaveZombie(int) */

void CustomLevelUtils::RemoveEvilDaveZombie(int param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RemoveEvilDaveZombie(this,param_1);
  return;
}


/* CustomLevelUtils::GetEvilDavePlantGrid(int, int, std::string&) */

void CustomLevelUtils::GetEvilDavePlantGrid(int param_1,int param_2,string *param_3)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::GetEvilDavePlantGrid(this,param_1,param_2,param_3);
  return;
}


/* CustomLevelUtils::GetEvilDaveZombieTypeName(int) */

void CustomLevelUtils::GetEvilDaveZombieTypeName(int param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::GetEvilDaveZombieTypeName(this,param_1);
  return;
}


/* CustomLevelUtils::SetTowerDefendPlantfood(int) */

void CustomLevelUtils::SetTowerDefendPlantfood(int param_1)

{
  Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  nop();
  return;
}


/* CustomLevelUtils::AddTowerDefendRoad(int, int, std::string const&) */

void CustomLevelUtils::AddTowerDefendRoad(int param_1,int param_2,string *param_3)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::AddTowerDefendRoad(this,param_1,param_2,param_3);
  return;
}


/* CustomLevelUtils::RemoveTowerDefendRoad(int, int) */

void CustomLevelUtils::RemoveTowerDefendRoad(int param_1,int param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RemoveTowerDefendRoad(this,param_1,param_2);
  return;
}


/* CustomLevelUtils::GetTowerDefendRoad(int, int, std::string&) */

void CustomLevelUtils::GetTowerDefendRoad(int param_1,int param_2,string *param_3)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::GetTowerDefendRoad(this,param_1,param_2,param_3);
  return;
}


/* CustomLevelUtils::AddTowerDefendPresetSeedBankPlant(std::string const&, int) */

void CustomLevelUtils::AddTowerDefendPresetSeedBankPlant(string *param_1,int param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::AddTowerDefendPresetSeedBankPlant(this,param_1,param_2);
  return;
}


/* CustomLevelUtils::RemoveTowerDefendPresetSeedBankPlant(int) */

void CustomLevelUtils::RemoveTowerDefendPresetSeedBankPlant(int param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RemoveTowerDefendPresetSeedBankPlant(this,param_1);
  return;
}


/* CustomLevelUtils::AddUpgradeTree(int, std::string const&, int) */

void CustomLevelUtils::AddUpgradeTree(int param_1,string *param_2,int param_3)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::AddUpgradeTree(this,param_1,param_2,param_3);
  return;
}


/* CustomLevelUtils::AddTowerDefendWaveZombie(int, std::string const&, int, int) */

void CustomLevelUtils::AddTowerDefendWaveZombie(int param_1,string *param_2,int param_3,int param_4)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::AddTowerDefendWaveZombie(this,param_1,param_2,param_3,param_4);
  return;
}


/* CustomLevelUtils::RemoveTowerDefendWaveZombie(int, int, int) */

void CustomLevelUtils::RemoveTowerDefendWaveZombie(int param_1,int param_2,int param_3)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RemoveTowerDefendWaveZombie(this,param_1,param_2,param_3);
  return;
}


/* CustomLevelUtils::GetTowerDefendStartingSun() */

void CustomLevelUtils::GetTowerDefendStartingSun(void)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::GetTowerDefendStartingSun(this);
  return;
}


/* CustomLevelUtils::GetTowerDefendPresetSeedBankPlant(int) */

void CustomLevelUtils::GetTowerDefendPresetSeedBankPlant(int param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::GetTowerDefendPresetSeedBankPlant(this,param_1);
  return;
}


/* CustomLevelUtils::GetTowerDefendWaveRowZombies(int, int, std::vector<std::string,
   std::allocator<std::string > >&) */

void CustomLevelUtils::GetTowerDefendWaveRowZombies(int param_1,int param_2,vector *param_3)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::GetTowerDefendWaveRowZombies(this,param_1,param_2,param_3);
  return;
}


/* CustomLevelUtils::GetTowerDefendWaveZombie(int, int, int) */

void CustomLevelUtils::GetTowerDefendWaveZombie(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::GetTowerDefendWaveZombie(iVar1,param_1,param_2);
  return;
}


/* CustomLevelUtils::AddStartingPlant(std::string const&) */

void CustomLevelUtils::AddStartingPlant(string *param_1)

{
  string *psVar1;
  
  psVar1 = (string *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::AddStartingPlant(psVar1);
  return;
}


/* CustomLevelUtils::RemoveStartingPlant() */

void CustomLevelUtils::RemoveStartingPlant(void)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RemoveStartingPlant(this);
  return;
}


/* CustomLevelUtils::GetStartingPlant() */

void CustomLevelUtils::GetStartingPlant(void)

{
  ActivityConfig *this;
  
  this = (ActivityConfig *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  ActivityConfig::GetChristmasProtectData(this);
  return;
}


/* CustomLevelUtils::AddUpgradePlant(int, std::string const&, std::string const&, int) */

void CustomLevelUtils::AddUpgradePlant(int param_1,string *param_2,string *param_3,int param_4)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::AddUpgradePlant(this,param_1,param_2,param_3,param_4);
  return;
}


/* CustomLevelUtils::GetUpgradePlant(int, std::string&, int&) */

void CustomLevelUtils::GetUpgradePlant(int param_1,string *param_2,int *param_3)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::GetUpgradePlant(this,param_1,param_2,param_3);
  return;
}


/* CustomLevelUtils::RemoveUpgradePlant(int) */

void CustomLevelUtils::RemoveUpgradePlant(int param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RemoveUpgradePlant(this,param_1);
  return;
}


/* CustomLevelUtils::AddSingleHandedWaveZombie(int, std::string const&, int, int) */

void CustomLevelUtils::AddSingleHandedWaveZombie
               (int param_1,string *param_2,int param_3,int param_4)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::AddSingleHandedWaveZombie(this,param_1,param_2,param_3,param_4);
  return;
}


/* CustomLevelUtils::RemoveSingleHandedWaveZombie(int, int, int) */

void CustomLevelUtils::RemoveSingleHandedWaveZombie(int param_1,int param_2,int param_3)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RemoveSingleHandedWaveZombie(this,param_1,param_2,param_3);
  return;
}


/* CustomLevelUtils::GetSingleHandedWaveRowZombies(int, int, std::vector<std::string,
   std::allocator<std::string > >&) */

void CustomLevelUtils::GetSingleHandedWaveRowZombies(int param_1,int param_2,vector *param_3)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::GetSingleHandedWaveRowZombies(this,param_1,param_2,param_3);
  return;
}


/* CustomLevelUtils::GetSingleHandedWaveZombie(int, int, int) */

void CustomLevelUtils::GetSingleHandedWaveZombie(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::GetSingleHandedWaveZombie(iVar1,param_1,param_2);
  return;
}


/* CustomLevelUtils::SetVaseBreakerMinMaxColumn(int, int) */

void CustomLevelUtils::SetVaseBreakerMinMaxColumn(int param_1,int param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::SetVaseBreakerMinMaxColumn(this,param_1,param_2);
  return;
}


/* CustomLevelUtils::GetVaseBreakerMinMaxColumn(int&, int&) */

void CustomLevelUtils::GetVaseBreakerMinMaxColumn(int *param_1,int *param_2)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::GetVaseBreakerMinMaxColumn(this,param_1,param_2);
  return;
}


/* CustomLevelUtils::SetVaseBreakerContent(int, VaseType, std::string const&, int) */

void CustomLevelUtils::SetVaseBreakerContent
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  CustomLevelMgr *pCVar1;
  
  pCVar1._0_4_ = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::SetVaseBreakerContent(pCVar1._0_4_,param_1,param_2,param_3,param_4);
  return;
}


/* CustomLevelUtils::GetVaseBreakerContent(int, VaseType&, std::string&, int&) */

void CustomLevelUtils::GetVaseBreakerContent
               (int param_1,VaseType *param_2,string *param_3,int *param_4)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::GetVaseBreakerContent(this,param_1,param_2,param_3,param_4);
  return;
}


/* CustomLevelUtils::RemoveVaseBreakerContent(int) */

void CustomLevelUtils::RemoveVaseBreakerContent(int param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::RemoveVaseBreakerContent(this,param_1);
  return;
}


/* CustomLevelUtils::SetVaseBreakerCount(int) */

void CustomLevelUtils::SetVaseBreakerCount(int param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::SetVaseBreakerCount(this,param_1);
  return;
}


/* CustomLevelUtils::GetVaseBreakerCount() */

void CustomLevelUtils::GetVaseBreakerCount(void)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::GetVaseBreakerCount(this);
  return;
}


/* CustomLevelUtils::IsCertifiedAuthor() */

bool CustomLevelUtils::IsCertifiedAuthor(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = Sexy::LazySingleton<CustomLevelSettingManager>::GetInstancePtr();
  iVar1 = FUN_035e1df4(*(undefined4 *)(lVar2 + 0x14));
  return iVar1 == 2;
}


/* CustomLevelUtils::IsCustomLevel() */

bool CustomLevelUtils::IsCustomLevel(void)

{
  bool bVar1;
  long lVar2;
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar2 != 0)) {
    bVar1 = BoardHelpers::HasGameModuleInLevelDefinition<CustomLevelModuleProperties>();
    return bVar1;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelUtils::TrySearchLevelPreviews(int) */

void CustomLevelUtils::TrySearchLevelPreviews(int param_1)

{
  CustomLevelMgr *pCVar1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  CustomLevelMgr::RequestGetSearchPreviewList(pCVar1,param_1,avStack_38,avStack_20);
  std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::~vector
            ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
             avStack_20);
  std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::~vector
            ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
             avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelUtils::TryGetLevelPreviews(std::vector<CustomLevelNetworkWorldType,
   std::allocator<CustomLevelNetworkWorldType> >, std::vector<CustomLevelNetworkLevelMode,
   std::allocator<CustomLevelNetworkLevelMode> >, ViewLevelType, ViewRankType, int, int) */

void CustomLevelUtils::TryGetLevelPreviews
               (vector *param_1,vector *param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  CustomLevelMgr *pCVar1;
  vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> avStack_38 [24];
  vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::vector
            (avStack_38,param_1);
  std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::vector
            (avStack_20,param_2);
  CustomLevelMgr::RequestGetViewPreviewList
            (pCVar1,avStack_38,avStack_20,param_3,param_4,param_5,param_6,0);
  std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::~vector
            (avStack_20);
  std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::~vector
            (avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelUtils::RequestLevelDefeat() */

void CustomLevelUtils::RequestLevelDefeat(void)

{
  int iVar1;
  string *psVar2;
  char *pcVar3;
  string *this;
  DNetwork *this_00;
  undefined1 *__n;
  undefined1 *__n_00;
  int iVar4;
  float fVar5;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [2344];
  string asStack_3c0 [952];
  long local_8;
  
  iVar4 = 0;
  local_8 = ___stack_chk_guard;
  if (*(float *)(*(long *)(gLawnApp + 0x9f0) + 0x114) != 0.0) {
    fVar5 = (float)PVZ_T();
    iVar4 = (int)(fVar5 - *(float *)(*(long *)(gLawnApp + 0x9f0) + 0x114));
  }
  __n_00 = auStack_d48;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  __n = __n_00;
  std::string::string(asStack_d40,"id");
  psVar2 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  iVar1 = GetLevelDetailsLevelID();
  DString::DString(aDStack_ce8,iVar1);
  pcVar3 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar2,pcVar3,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"s");
  psVar2 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,iVar4);
  pcVar3 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar2,pcVar3,(size_t)__n_00);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  psVar2 = asStack_d40;
  std::string::string((string *)aDStack_ce8,"f");
  this = (string *)
         std::
         map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
         ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                       *)amStack_d18,(string *)aDStack_ce8);
  std::string::append(this,"1",(size_t)psVar2);
  std::string::~string((string *)aDStack_ce8);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_035e2140(afStack_d38);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_3c0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,5);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelUtils::TryRestartLevel() */

void CustomLevelUtils::TryRestartLevel(void)

{
  GameStateMgr *pGVar1;
  string *this;
  CustomLevelMgr *this_00;
  long lVar2;
  char *__s;
  DNetwork *this_01;
  undefined8 uVar3;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [2440];
  string asStack_360 [856];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"id");
  this = (string *)
         std::
         map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
         ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                       *)amStack_d18,asStack_d40);
  this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  lVar2 = CustomLevelMgr::GetNetworkLevelDetails(this_00);
  DString::DString(aDStack_ce8,*(int *)(lVar2 + 0x14));
  __s = (char *)DString::c_str(aDStack_ce8);
  std::string::append(this,__s,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_035e218c(afStack_d38);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_360,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  pGVar1 = gGameStateMgr;
  uVar3 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  GameStateMgr::StartLevel(pGVar1,&DAT_06aa7ad8,uVar3,0xffffffff,1,1,10);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelUtils::TrySaveCurrentLevel() */

void CustomLevelUtils::TrySaveCurrentLevel(void)

{
  CustomLevelMgr *this;
  char *pcVar1;
  TGALogMgr *this_00;
  size_t in_x2;
  DString aDStack_a0 [16];
  TGACustomLevelData aTStack_90 [80];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::SaveCurrentLevel(this);
  TGACustomLevelData::TGACustomLevelData(aTStack_90);
  DString::DString(aDStack_a0,0x11);
  pcVar1 = (char *)DString::c_str(aDStack_a0);
  std::string::append((string *)aTStack_90,pcVar1,in_x2);
  DString::~DString(aDStack_a0);
  DString::DString(aDStack_a0,2);
  pcVar1 = (char *)DString::c_str(aDStack_a0);
  std::string::append(asStack_40,pcVar1,in_x2);
  DString::~DString(aDStack_a0);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogCustomLevel(this_00,aTStack_90);
  TGACustomLevelData::~TGACustomLevelData(aTStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

