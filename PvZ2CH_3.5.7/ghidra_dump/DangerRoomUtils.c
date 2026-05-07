// Class: DangerRoomUtils


/* DangerRoomUtils::GetDangerRoomDataNameForWorld(std::string const&) */

void DangerRoomUtils::GetDangerRoomDataNameForWorld(string *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0547429c();
  Sexy::StrFormat("%s_dangerroom",uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomUtils::FindDangerRoomForWorld(std::string const&) */

void DangerRoomUtils::FindDangerRoomForWorld(string *param_1)

{
  WorldDataManager *this;
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetDangerRoomDataNameForWorld(param_1);
  this = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  uVar1 = WorldDataManager::FindEventByLevelName(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* DangerRoomUtils::WorldHasDangerRoom(std::string const&) */

bool DangerRoomUtils::WorldHasDangerRoom(string *param_1)

{
  long lVar1;
  
  lVar1 = FindDangerRoomForWorld(param_1);
  return lVar1 != 0;
}


/* DangerRoomUtils::IsLevelNameDangerRoomLevelName(std::string const&) */

bool DangerRoomUtils::IsLevelNameDangerRoomLevelName(string *param_1)

{
  long lVar1;
  
  lVar1 = FUN_05474374(param_1,"dangerroom",0);
  return lVar1 != -1;
}


/* DangerRoomUtils::IsMapEventDangerRoom(MapEventItem const&) */

void DangerRoomUtils::IsMapEventDangerRoom(MapEventItem *param_1)

{
  string *psVar1;
  
  psVar1 = (string *)
           Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)param_1);
  IsLevelNameDangerRoomLevelName(psVar1);
  return;
}


/* DangerRoomUtils::IsDangerRoomUnlocked(std::string const&) */

void DangerRoomUtils::IsDangerRoomUnlocked(string *param_1)

{
  long lVar1;
  
  lVar1 = FindDangerRoomForWorld(param_1);
  if (lVar1 != 0) {
    FUN_03cb04cc(*(undefined1 *)(lVar1 + 0xf1));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomUtils::GoToDangerRoomForWorld(std::string const&) */

void DangerRoomUtils::GoToDangerRoomForWorld(string *param_1)

{
  char cVar1;
  WorldMap *pWVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsDangerRoomUnlocked(param_1);
  if (cVar1 != '\0') {
    pWVar2 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    GetDangerRoomDataNameForWorld(param_1);
    WorldMap::SwitchToGameLevel(pWVar2,asStack_10,5,0);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomUtils::GetDangerRoomHighScoreInfoForWorld(std::string const&) */

void __thiscall
DangerRoomUtils::GetDangerRoomHighScoreInfoForWorld(DangerRoomUtils *this,string *param_1)

{
  char cVar1;
  PlayerInfo *this_00;
  long lVar2;
  PakFileDesc *in_x8;
  
  PakFileDesc::PakFileDesc(in_x8);
  thunk_FUN_05475e00();
  in_x8[8] = (PakFileDesc)0x0;
  *(undefined4 *)(in_x8 + 0xc) = 0;
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  cVar1 = IsDangerRoomUnlocked((string *)this);
  if (cVar1 != '\0') {
    in_x8[8] = (PakFileDesc)0x1;
    cVar1 = PlayerInfo::HasDangerRoomInfo(this_00,(string *)this);
    if (cVar1 != '\0') {
      lVar2 = PlayerInfo::GetDangerRoomInfo(this_00,(string *)this);
      *(undefined4 *)(in_x8 + 0xc) = *(undefined4 *)(lVar2 + 0xc);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomUtils::IsAnyDangerRoomUnlocked() */

void DangerRoomUtils::IsAnyDangerRoomUnlocked(void)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  string *psVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = WorldMapUtils::GetWorldMapList();
  local_18 = FUN_03cb07d4(*(undefined8 *)(lVar3 + 8));
  local_10 = FUN_03cb0824(*(undefined8 *)(lVar3 + 0x10));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = IsDangerRoomUnlocked(psVar4);
    if (cVar1 != '\0') break;
    eastl::generic_iterator<EA::Text::FeatureLookup*,void>::operator++
              ((generic_iterator<EA::Text::FeatureLookup*,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomUtils::ShouldShowDangerRoomIcon() */

void DangerRoomUtils::ShouldShowDangerRoomIcon(void)

{
  char cVar1;
  undefined1 uVar2;
  Toggles *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Toggles *)Toggles::GetInstance();
  std::string::string(asStack_10,"DangerRoomMetaScore");
  cVar1 = Toggles::IsEnabled(this,asStack_10);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = IsAnyDangerRoomUnlocked();
  }
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomUtils::GetDangerRoomHighScoreInfo() */

void __thiscall DangerRoomUtils::GetDangerRoomHighScoreInfo(DangerRoomUtils *this)

{
  string sVar1;
  string sVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  WorldMapList *this_00;
  string *this_01;
  string *extraout_x1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_28;
  undefined8 local_20;
  pair<std::string_const,Sexy::PILifeValueTable> apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  this_00 = (WorldMapList *)WorldMapUtils::GetWorldMapList();
  local_28 = FUN_03cb07d4(*(undefined8 *)(this_00 + 8));
  local_20 = FUN_03cb0824(*(undefined8 *)(this_00 + 0x10));
  while (bVar5 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar5) {
    this_01 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    sVar1 = this_01[0x32];
    sVar2 = (string)WorldMapList::IsWorldEnabled(this_00,this_01);
    bVar3 = WorldMapList::IsWorldComingSoon(this_00,this_01);
    bVar4 = WorldHasDangerRoom(this_01);
    if (bVar3 < (bVar4 & (byte)sVar1 < (byte)sVar2)) {
      GetDangerRoomHighScoreInfoForWorld((DangerRoomUtils *)this_01,extraout_x1);
      std::vector<DangerRoomHighScoreInfo,std::allocator<DangerRoomHighScoreInfo>>::push_back
                ((vector<DangerRoomHighScoreInfo,std::allocator<DangerRoomHighScoreInfo>> *)in_x8,
                 (DangerRoomHighScoreInfo *)apStack_18);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_18);
    }
    eastl::generic_iterator<EA::Text::FeatureLookup*,void>::operator++
              ((generic_iterator<EA::Text::FeatureLookup*,void> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomUtils::GetTotalDangerRoomHighScore() */

void DangerRoomUtils::GetTotalDangerRoomHighScore(void)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  DangerRoomUtils *local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  GetDangerRoomHighScoreInfo(___stack_chk_guard);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    iVar3 = iVar3 + *(int *)(lVar2 + 0xc);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_30);
  }
  std::vector<DangerRoomHighScoreInfo,std::allocator<DangerRoomHighScoreInfo>>::~vector
            ((vector<DangerRoomHighScoreInfo,std::allocator<DangerRoomHighScoreInfo>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}

