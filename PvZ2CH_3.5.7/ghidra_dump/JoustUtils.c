// Class: JoustUtils


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::AvatarGetImagePtr(int) */

void __thiscall JoustUtils::AvatarGetImagePtr(JoustUtils *this,int param_1)

{
  string *extraout_x0;
  string *extraout_x1;
  string *extraout_x1_00;
  Sexy aSStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DSingleton<HeadshotConfig>::getInstance();
  nop();
  DString::DString(aDStack_18,(int)this);
  DString::operator_cast_to_string(aDStack_18);
  std::string::string(asStack_28,"plant");
  std::string::string(asStack_20,"init");
  DIniFile::getItem(extraout_x0,asStack_30,asStack_28);
  std::string::~string(asStack_20);
  nop();
  std::string::~string(asStack_28);
  nop();
  std::string::~string(asStack_30);
  DString::~DString(aDStack_18);
  Sexy::StringToUpper(aSStack_38,extraout_x1);
  std::operator+("IMAGE_UI_HEADSHOTFRAME_HEADSHOT_",(string *)aDStack_18);
  std::string::~string((string *)aDStack_18);
  HotUIHelpers::GetImageFromStringId((HotUIHelpers *)asStack_20,extraout_x1_00);
  std::string::~string(asStack_20);
  std::string::~string((string *)aSStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::AvatarGetFrameImagePtr(int) */

void __thiscall JoustUtils::AvatarGetFrameImagePtr(JoustUtils *this,int param_1)

{
  int iVar1;
  DIniFile *this_00;
  string *extraout_x1;
  HotUIHelpers aHStack_40 [8];
  string asStack_38 [16];
  string asStack_28 [16];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DSingleton<HeadshotConfig>::getInstance();
  nop();
  DString::DString(aDStack_18,(int)this);
  DString::operator_cast_to_string(aDStack_18);
  std::string::string(asStack_28,"frame");
  iVar1 = DIniFile::getItemInt(this_00,asStack_38,asStack_28,1);
  std::string::~string(asStack_28);
  nop();
  std::string::~string(asStack_38);
  DString::~DString(aDStack_18);
  DString::DString((DString *)asStack_38,iVar1);
  ::operator+("IMAGE_UI_HEADSHOTFRAME_LV",(DString *)asStack_38);
  ::operator+((DString *)asStack_28,"_1");
  DString::operator_cast_to_string(aDStack_18);
  DString::~DString(aDStack_18);
  DString::~DString((DString *)asStack_28);
  DString::~DString((DString *)asStack_38);
  HotUIHelpers::GetImageFromStringId(aHStack_40,extraout_x1);
  std::string::~string((string *)aHStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::AvatarGetBottomImagePtr(int) */

void __thiscall JoustUtils::AvatarGetBottomImagePtr(JoustUtils *this,int param_1)

{
  int iVar1;
  DIniFile *this_00;
  string *extraout_x1;
  HotUIHelpers aHStack_40 [8];
  string asStack_38 [16];
  string asStack_28 [16];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DSingleton<HeadshotConfig>::getInstance();
  nop();
  DString::DString(aDStack_18,(int)this);
  DString::operator_cast_to_string(aDStack_18);
  std::string::string(asStack_28,"frame");
  iVar1 = DIniFile::getItemInt(this_00,asStack_38,asStack_28,1);
  std::string::~string(asStack_28);
  nop();
  std::string::~string(asStack_38);
  DString::~DString(aDStack_18);
  DString::DString((DString *)asStack_38,iVar1);
  ::operator+("IMAGE_UI_HEADSHOTFRAME_LV",(DString *)asStack_38);
  ::operator+((DString *)asStack_28,"_2");
  DString::operator_cast_to_string(aDStack_18);
  DString::~DString(aDStack_18);
  DString::~DString((DString *)asStack_28);
  DString::~DString((DString *)asStack_38);
  HotUIHelpers::GetImageFromStringId(aHStack_40,extraout_x1);
  std::string::~string((string *)aHStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::GetNetworkIssueLocalizedString(JoustAPINetworkIssue, JoustAPIContext) */

void JoustUtils::GetNetworkIssueLocalizedString(string *param_1,int param_2)

{
  undefined1 *__n;
  undefined1 auStack_10 [8];
  long local_8;
  
  __n = auStack_10;
  local_8 = ___stack_chk_guard;
  std::string::string(param_1,"");
  nop();
  if (param_2 == 2) {
    std::string::append(param_1,"[JOUST_NETWORK_ERROR_TIMEOUT]",(size_t)__n);
  }
  else if (param_2 == 4) {
    std::string::append(param_1,"[JOUST_NETWORK_ERROR_EXPIRED]",(size_t)__n);
  }
  else if (param_2 == 1) {
    std::string::append(param_1,"[JOUST_NETWORK_ERROR_INVALID_MATCH]",(size_t)__n);
  }
  else {
    std::string::append(param_1,"[JOUST_NETWORK_ERROR_UNKNOWN]",(size_t)__n);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::ShowJoustNetworkIssuePopup(JoustAPINetworkIssue, JoustAPIContext) */

void JoustUtils::ShowJoustNetworkIssuePopup(void)

{
  LawnApp *this;
  PVZ2UIDialog *pPVar1;
  string *extraout_x1;
  undefined1 auStack_70 [8];
  Sexy aSStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetNetworkIssueLocalizedString(aSStack_68);
  Sexy::UTF8StringToWString(aSStack_68,extraout_x1);
  this = gLawnApp;
  FUN_05478178(awStack_50,L"[JOUST_NETWORK_ERROR_TITLE]",auStack_58);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_50,awStack_60);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(auStack_58,L"[DIALOG_STRING_OK]",auStack_70);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  FUN_05476c50(awStack_60);
  std::string::~string((string *)aSStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustUtils::GetScoringSystem() */

void JoustUtils::GetScoringSystem(void)

{
  Board::GetGameSubSystem<LevelScoringSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* JoustUtils::GetPlantCountNeededToPlayJoust() */

undefined4 JoustUtils::GetPlantCountNeededToPlayJoust(void)

{
  long lVar1;
  
  lVar1 = JoustPropertySheet::GetProperties();
  ProfileUtils::Profile();
  return *(undefined4 *)(lVar1 + 0xd0);
}


/* JoustUtils::IsPlayerReadyForJoust() */

bool JoustUtils::IsPlayerReadyForJoust(void)

{
  int iVar1;
  
  iVar1 = GetPlantCountNeededToPlayJoust();
  return iVar1 < 1;
}


/* JoustUtils::GetPredefinedLoadoutCount() */

void JoustUtils::GetPredefinedLoadoutCount(void)

{
  long lVar1;
  
  lVar1 = JoustPropertySheet::GetProperties();
  FUN_0388ef6c(*(undefined8 *)(lVar1 + 0x88),*(undefined8 *)(lVar1 + 0x90));
  return;
}


/* JoustUtils::AvatarCalcRandomIndex() */

void JoustUtils::AvatarCalcRandomIndex(void)

{
  long lVar1;
  
  lVar1 = JoustPropertySheet::GetProperties();
  RandRangeInt(0,*(int *)(lVar1 + 0x2c) + -1);
  return;
}


/* JoustUtils::NameCalcRandomIndex() */

void JoustUtils::NameCalcRandomIndex(void)

{
  long lVar1;
  
  lVar1 = JoustPropertySheet::GetProperties();
  RandRangeInt(0,*(int *)(lVar1 + 0x28) + -1);
  return;
}


/* JoustUtils::CreateFakeOpponent() */

void __thiscall JoustUtils::CreateFakeOpponent(JoustUtils *this)

{
  undefined4 uVar1;
  JoustPlayerData *in_x8;
  
  JoustPlayerData::JoustPlayerData(in_x8);
  uVar1 = AvatarCalcRandomIndex();
  *(undefined4 *)(in_x8 + 0xc) = uVar1;
  uVar1 = RandRangeInt(0,0x5dc);
  *(undefined4 *)(in_x8 + 0x18) = uVar1;
  uVar1 = NameCalcRandomIndex();
  FUN_05477110(in_x8 + 0x10,uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::PlayerSpendTicket() */

void JoustUtils::PlayerSpendTicket(void)

{
  char cVar1;
  Toggles *this;
  TextureInfo *extraout_x0;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Toggles *)Toggles::GetInstance();
  std::string::string(asStack_10,"JoustPlaytest");
  cVar1 = Toggles::IsEnabled(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 == '\0') {
    cVar1 = EA::Text::GlyphCache_Memory::EndUpdate(extraout_x0);
    if (cVar1 == '\0') {
      ProfileUtils::Profile();
    }
    else {
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::GetAwardInfoByActId(int) */

void JoustUtils::GetAwardInfoByActId(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  NameMapperBase *pNVar11;
  undefined4 local_10;
  int iStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_10);
  pNVar11 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar11,param_1);
  pNVar11 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar11,param_1);
  pNVar11 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
  cVar3 = NameMapperBase::ContainsId(pNVar11,param_1);
  pNVar11 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
  cVar4 = NameMapperBase::ContainsId(pNVar11,param_1);
  pNVar11 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
  cVar5 = NameMapperBase::ContainsId(pNVar11,param_1);
  pNVar11 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
  cVar6 = NameMapperBase::ContainsId(pNVar11,param_1);
  OtherServerNameMapper::GetInstance();
  cVar7 = FUN_0388eed4(param_1);
  OtherServerNameMapper::GetInstance();
  cVar8 = FUN_0388eec4(param_1);
  OtherServerNameMapper::GetInstance();
  cVar9 = FUN_0388eee4(param_1);
  pNVar11 = (NameMapperBase *)MaterialItemMapper::GetInstance();
  cVar10 = NameMapperBase::ContainsId(pNVar11,param_1);
  local_10 = 0x22;
  if ((((((cVar7 == '\0') && (local_10 = 0x23, cVar8 == '\0')) && (local_10 = 0x1c, cVar1 == '\0'))
       && ((local_10 = 0x1d, cVar2 == '\0' && (local_10 = 0x1e, cVar3 == '\0')))) &&
      ((local_10 = 0x1f, cVar4 == '\0' &&
       ((local_10 = 0x20, cVar5 == '\0' && (local_10 = 0x21, cVar6 == '\0')))))) &&
     ((local_10 = 0x24, cVar9 == '\0' &&
      ((local_10 = 0x25, cVar10 == '\0' && (local_10 = 0, param_1 == 0x59f5)))))) {
    local_10 = 0x26;
  }
  if (local_8 != ___stack_chk_guard) {
    iStack_c = param_1;
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(CONCAT44(param_1,local_10));
  }
  return;
}


/* JoustUtils::GetLeagueName(int) */

void __thiscall JoustUtils::GetLeagueName(JoustUtils *this,int param_1)

{
  long lVar1;
  
  lVar1 = JoustPropertySheet::GetProperties();
  FUN_0388ef8c(*(undefined8 *)(lVar1 + 0x58),(long)(int)this);
  FUN_05475d88();
  return;
}


/* JoustUtils::GetLeagueNameShort(int) */

void __thiscall JoustUtils::GetLeagueNameShort(JoustUtils *this,int param_1)

{
  long lVar1;
  
  lVar1 = JoustPropertySheet::GetProperties();
  FUN_0388ef8c(*(undefined8 *)(lVar1 + 0x70),(long)(int)this);
  FUN_05475d88();
  return;
}


/* JoustUtils::GetLeagueIcon(int) */

void __thiscall JoustUtils::GetLeagueIcon(JoustUtils *this,int param_1)

{
  long lVar1;
  
  lVar1 = JoustPropertySheet::GetProperties();
  FUN_0388ef8c(*(undefined8 *)(lVar1 + 0x40),(long)(int)this);
  FUN_05475d88();
  return;
}


/* JoustUtils::IsConnected() */

undefined8 JoustUtils::IsConnected(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Connectivity::IsConnectedOnWifi();
  if ((cVar1 == '\0') && (cVar1 = Connectivity::IsConnectedOnWWAN(), cVar1 == '\0')) {
    uVar2 = Connectivity::IsConnectedOnEthernet();
    return uVar2;
  }
  return 1;
}


/* JoustUtils::IsJoustCurrentlyAvailable() */

undefined8 JoustUtils::IsJoustCurrentlyAvailable(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Connectivity::IsConnectedOnWifi();
  if ((cVar1 == '\0') && (cVar1 = Connectivity::IsConnectedOnWWAN(), cVar1 == '\0')) {
    uVar2 = Connectivity::IsConnectedOnEthernet();
    return uVar2;
  }
  return 1;
}


/* JoustUtils::ClampAvatarIconValue(int) */

int JoustUtils::ClampAvatarIconValue(int param_1)

{
  long lVar1;
  
  lVar1 = JoustPropertySheet::GetProperties();
  if (-1 < param_1) {
    if (*(int *)(lVar1 + 0x2c) <= param_1) {
      param_1 = 0;
    }
    return param_1;
  }
  return 0;
}


/* JoustUtils::ClampAvatarNameValue(int) */

int JoustUtils::ClampAvatarNameValue(int param_1)

{
  long lVar1;
  
  lVar1 = JoustPropertySheet::GetProperties();
  if (-1 < param_1) {
    if (*(int *)(lVar1 + 0x28) <= param_1) {
      param_1 = 0;
    }
    return param_1;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::ConvertContextToString(JoustAPIContext) */

void __thiscall JoustUtils::ConvertContextToString(string *param_1,undefined4 param_2)

{
  long lVar1;
  char *__s;
  
  lVar1 = ___stack_chk_guard;
  switch(param_2) {
  case 0:
    __s = "MYSTERY NO CONTEXT";
    break;
  case 1:
    __s = "POST Avatar";
    break;
  case 2:
    __s = "GET Dashboard";
    break;
  case 3:
    __s = "POST Match";
    break;
  case 4:
    __s = "POST Match Complete";
    break;
  case 5:
    __s = "POST Register For Tournament";
    break;
  default:
    goto LAB_0388f698;
  }
  std::string::string(param_1,__s);
  nop();
LAB_0388f698:
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::ConvertResponseStatusToString(JoustAPIResponseStatus) */

void __thiscall JoustUtils::ConvertResponseStatusToString(string *param_1,undefined4 param_2)

{
  long lVar1;
  char *__s;
  
  lVar1 = ___stack_chk_guard;
  switch(param_2) {
  case 0:
    __s = "[Unknown]";
    break;
  case 1:
  case 2:
    __s = "[Success]";
    break;
  case 3:
    __s = "[Network Issue]";
    break;
  case 4:
    __s = "[Invalid Data]";
    break;
  case 5:
    __s = "[Invalid Match]";
    break;
  case 6:
    __s = "[Tournament Expired]";
    break;
  case 7:
    __s = "[Tournament Not Registered]";
    break;
  case 8:
    __s = "[Invalid Player]";
    break;
  default:
    goto LAB_0388f788;
  }
  std::string::string(param_1,__s);
  nop();
LAB_0388f788:
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::IsFUENeeded() */

void JoustUtils::IsFUENeeded(void)

{
  byte bVar1;
  PlayerInfo *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PlayerInfo *)ProfileUtils::Profile();
  std::string::string(asStack_10,"nar_joust_unlock");
  bVar1 = PlayerInfo::GetNarrationEventCompleted(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1 ^ 1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::SetFUEAsSeen() */

void JoustUtils::SetFUEAsSeen(void)

{
  PlayerInfo *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PlayerInfo *)ProfileUtils::Profile();
  std::string::string(asStack_10,"nar_joust_unlock");
  PlayerInfo::CompleteNarrationEvent(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::DoesUnlockAnimNeedToPlay() */

void JoustUtils::DoesUnlockAnimNeedToPlay(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  PlayerInfo *pPVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = IsPlayerReadyForJoust();
  pPVar4 = (PlayerInfo *)ProfileUtils::Profile();
  std::string::string(asStack_10,"nar_joust_unlock");
  bVar2 = PlayerInfo::GetNarrationEventCompleted(pPVar4,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pPVar4 = (PlayerInfo *)ProfileUtils::Profile();
  std::string::string(asStack_10,"nar_joust_unlock_anim");
  bVar3 = PlayerInfo::GetNarrationEventCompleted(pPVar4,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((bVar3 | bVar2 & bVar1 ^ 1) ^ 1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::SetUnlockAnimAsSeen() */

void JoustUtils::SetUnlockAnimAsSeen(void)

{
  PlayerInfo *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PlayerInfo *)ProfileUtils::Profile();
  std::string::string(asStack_10,"nar_joust_unlock_anim");
  PlayerInfo::CompleteNarrationEvent(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustUtils::PlayerCanPlay() */

undefined1 JoustUtils::PlayerCanPlay(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<JoustNetworkMgr>::GetInstancePtr();
  return *(undefined1 *)(lVar1 + 200);
}


/* JoustUtils::GetServerPlantBanList() */

void JoustUtils::GetServerPlantBanList(void)

{
  JoustNetworkMgr *this;
  
  this = (JoustNetworkMgr *)Sexy::LazySingleton<JoustNetworkMgr>::GetInstancePtr();
  JoustNetworkMgr::GetServerPlantBanList(this);
  return;
}


/* JoustUtils::GetLeagueCount() */

void JoustUtils::GetLeagueCount(void)

{
  JoustNetworkMgr *this;
  
  this = (JoustNetworkMgr *)Sexy::LazySingleton<JoustNetworkMgr>::GetInstancePtr();
  JoustNetworkMgr::GetLeagueCount(this);
  return;
}


/* JoustUtils::SetAPIRequestTimeout(float) */

void JoustUtils::SetAPIRequestTimeout(float param_1)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<JoustNetworkMgr>::GetInstancePtr();
  FUN_0388eef4(lVar1 + 0xd0,lVar1 + 0xd4,(int)param_1);
  return;
}


/* JoustUtils::GetResponseStatus(JoustAPIContext) */

void JoustUtils::GetResponseStatus(undefined4 param_1)

{
  JoustNetworkMgr *pJVar1;
  
  pJVar1._0_4_ = (JoustNetworkMgr *)Sexy::LazySingleton<JoustNetworkMgr>::GetInstancePtr();
  JoustNetworkMgr::GetResponseStatus(pJVar1._0_4_,param_1);
  return;
}


/* JoustUtils::CheatSendBadRequest() */

void JoustUtils::CheatSendBadRequest(void)

{
  JoustNetworkMgr *this;
  
  this = (JoustNetworkMgr *)Sexy::LazySingleton<JoustNetworkMgr>::GetInstancePtr();
  JoustNetworkMgr::Send_GetDashboard(this);
  return;
}


/* JoustUtils::CancelCurrentAPIRequest() */

void JoustUtils::CancelCurrentAPIRequest(void)

{
  JoustNetworkMgr *this;
  
  this = (JoustNetworkMgr *)Sexy::LazySingleton<JoustNetworkMgr>::GetInstancePtr();
  JoustNetworkMgr::CancelCurrentRequest(this);
  return;
}


/* JoustUtils::CheckDashboardInfo() */

void JoustUtils::CheckDashboardInfo(void)

{
  JoustNetworkMgr *this;
  
  this = (JoustNetworkMgr *)Sexy::LazySingleton<JoustNetworkMgr>::GetInstancePtr();
  JoustNetworkMgr::CheckCurrentDashboardInfo(this);
  return;
}


/* JoustUtils::RequestPostMatch() */

void JoustUtils::RequestPostMatch(void)

{
  JoustNetworkMgr *this;
  
  this = (JoustNetworkMgr *)Sexy::LazySingleton<JoustNetworkMgr>::GetInstancePtr();
  JoustNetworkMgr::RequestPostMatch(this);
  return;
}


/* JoustUtils::GetNetworkWinStreakReward(int) */

void __thiscall JoustUtils::GetNetworkWinStreakReward(JoustUtils *this,int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  LevelOfTheDay_RewardItemType *in_x8;
  
  lVar3 = Sexy::LazySingleton<JoustNetworkMgr>::GetInstancePtr();
  piVar4 = (int *)FUN_0388eff4(*(undefined8 *)(lVar3 + 0xb0),(long)(int)this);
  iVar1 = *piVar4;
  iVar2 = piVar4[1];
  LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType(in_x8);
  uVar5 = GetAwardInfoByActId(iVar1);
  *(int *)(in_x8 + 0x28) = iVar2;
  *(int *)(in_x8 + 0x10) = (int)uVar5;
  *(int *)(in_x8 + 0x38) = (int)((ulong)uVar5 >> 0x20);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::NameGetFromIndex(int) */

void __thiscall JoustUtils::NameGetFromIndex(JoustUtils *this,int param_1)

{
  int iVar1;
  long lVar2;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = JoustPropertySheet::GetProperties();
  iVar1 = (int)this + 1;
  if (*(int *)(lVar2 + 0x28) <= (int)this) {
    iVar1 = 1;
  }
  Sexy::ToWString((string *)(lVar2 + 0x30));
  TodReplaceNumberString(awStack_28,L"{INDEX}",iVar1);
  std::operator+(L"[",awStack_20);
  std::operator+(awStack_18,L"]");
  TodStringTranslate(awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_20);
  FUN_05476c50(awStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::PlayerHasTicket() */

void JoustUtils::PlayerHasTicket(void)

{
  char cVar1;
  int iVar2;
  Toggles *this;
  ZMatchShopMgr *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Toggles *)Toggles::GetInstance();
  std::string::string(asStack_10,"JoustPlaytest");
  cVar1 = Toggles::IsEnabled(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 == '\0') {
    this_00 = (ZMatchShopMgr *)Sexy::LazySingleton<ZMatchShopMgr>::GetInstancePtr();
    iVar2 = ZMatchShopMgr::getMatchTicket(this_00);
    cVar1 = 0 < iVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::SendAPIPostIncompleteMatch(JoustIncompleteMatchData const&) */

void JoustUtils::SendAPIPostIncompleteMatch(JoustIncompleteMatchData *param_1)

{
  JoustNetworkMgr *pJVar1;
  function<void(Sexy::Graphics*)> afStack_b0 [32];
  function<void(Sexy::Graphics*)> afStack_90 [32];
  JoustAPIPostCompleteMatch aJStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined4 local_58;
  undefined1 auStack_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pJVar1 = (JoustNetworkMgr *)Sexy::LazySingleton<JoustNetworkMgr>::GetInstancePtr();
  JoustAPIPostCompleteMatch::JoustAPIPostCompleteMatch(aJStack_70);
  local_48 = *(undefined4 *)(param_1 + 0x20);
  thunk_FUN_05475e00(auStack_50,param_1 + 0x18);
  thunk_FUN_05475e00(auStack_68,param_1 + 8);
  thunk_FUN_05475e00(auStack_60,param_1 + 0x10);
  local_44 = 0;
  local_58 = 0;
  std::function<void(Sexy::Graphics*)>::function(afStack_b0);
  std::function<void(Sexy::Graphics*)>::function(afStack_90);
  JoustNetworkMgr::Send_PostCompleteMatch(pJVar1,aJStack_70,afStack_b0,afStack_90);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)afStack_90);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)afStack_b0);
  JoustAPIPostCompleteMatch::~JoustAPIPostCompleteMatch(aJStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustUtils::GetCurrentTournamentDefinition() */

void JoustUtils::GetCurrentTournamentDefinition(void)

{
  UITourismOctober *this;
  long *plVar1;
  JoustSchedule *this_00;
  long lVar2;
  
  this = (UITourismOctober *)Sexy::LazySingleton<JoustStatus>::GetInstance();
  plVar1 = (long *)UITourismOctober::getData(this);
  lVar2 = *plVar1;
  this_00 = (JoustSchedule *)JoustSchedule::GetSchedule();
  JoustSchedule::GetTournamentDefinition(this_00,lVar2);
  return;
}


/* JoustUtils::GetLeaderboardMaxPlacementCount() */

undefined4 JoustUtils::GetLeaderboardMaxPlacementCount(void)

{
  long lVar1;
  
  lVar1 = GetCurrentTournamentDefinition();
  lVar1 = JoustLeaderboardDefinition::GetProperties((string *)(lVar1 + 8));
  return *(undefined4 *)(lVar1 + 0x14);
}


/* JoustUtils::GetLevelToPlay() */

void __thiscall JoustUtils::GetLevelToPlay(JoustUtils *this)

{
  long lVar1;
  
  lVar1 = GetCurrentTournamentDefinition();
  JoustLevelSet::GetProperties((string *)(lVar1 + 0x18));
  FUN_05475d88();
  return;
}


/* JoustUtils::HasCurrentTournamentDefinition() */

bool JoustUtils::HasCurrentTournamentDefinition(void)

{
  UITourismOctober *this;
  long *plVar1;
  JoustSchedule *this_00;
  long lVar2;
  
  this = (UITourismOctober *)Sexy::LazySingleton<JoustStatus>::GetInstance();
  plVar1 = (long *)UITourismOctober::getData(this);
  lVar2 = *plVar1;
  this_00 = (JoustSchedule *)JoustSchedule::GetSchedule();
  lVar2 = JoustSchedule::GetTournamentDefinition(this_00,lVar2);
  return lVar2 != 0;
}


/* JoustUtils::GetWinStreakCrownReward(int) */

undefined4 JoustUtils::GetWinStreakCrownReward(int param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  cVar1 = HasCurrentTournamentDefinition();
  if (cVar1 != '\0') {
    lVar3 = GetCurrentTournamentDefinition();
    lVar3 = JoustCrownRewardDefinition::GetProperties((string *)(lVar3 + 0x10));
    uVar5 = *(undefined8 *)(lVar3 + 0x18);
    lVar3 = FUN_0388ef60(uVar5,*(undefined8 *)(lVar3 + 0x20));
    iVar2 = ClampInt(param_1,0,(int)lVar3 + -1);
    if (lVar3 != 0) {
      puVar4 = (undefined4 *)FUN_0388f01c(uVar5,(long)iVar2);
      return *puVar4;
    }
  }
  return 0xffffffff;
}


/* JoustUtils::GetLevelEndCrownAward() */

undefined4 JoustUtils::GetLevelEndCrownAward(void)

{
  UIWidgetAnim *this;
  long lVar1;
  
  this = (UIWidgetAnim *)Sexy::LazySingleton<JoustStatus>::GetInstance();
  lVar1 = UIWidgetAnim::GetScale(this);
  return *(undefined4 *)(lVar1 + 0xc);
}


/* JoustUtils::HasLevelEndAward() */

void JoustUtils::HasLevelEndAward(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<JoustStatus>::GetInstance();
  FUN_0388ef18(*(undefined1 *)(lVar1 + 0x108));
  return;
}


/* JoustUtils::ClearLevelEndAward() */

void JoustUtils::ClearLevelEndAward(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<JoustStatus>::GetInstance();
  FUN_0388ef1c(lVar1 + 0x108);
  return;
}


/* JoustUtils::ClearLevelEndExtensionCount() */

void JoustUtils::ClearLevelEndExtensionCount(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<JoustStatus>::GetInstance();
  FUN_0388ef38(lVar1 + 0x150);
  return;
}


/* JoustUtils::GetLevelEndExtensionCount() */

void JoustUtils::GetLevelEndExtensionCount(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<JoustStatus>::GetInstance();
  FUN_0388ef24(*(undefined4 *)(lVar1 + 0x150));
  return;
}


/* JoustUtils::AddLevelEndExtension() */

void JoustUtils::AddLevelEndExtension(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<JoustStatus>::GetInstance();
  FUN_0388ef28(lVar1 + 0x150);
  return;
}


/* JoustUtils::GetLeaderboardData() */

void JoustUtils::GetLeaderboardData(void)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::LazySingleton<JoustStatus>::GetInstance();
  std::
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  ::_M_end(this);
  return;
}


/* JoustUtils::GetLocalPlayerData() */

long JoustUtils::GetLocalPlayerData(void)

{
  long lVar1;
  
  lVar1 = GetLeaderboardData();
  return lVar1 + 0x18;
}


/* JoustUtils::GetCurrentWinStreak() */

undefined4 JoustUtils::GetCurrentWinStreak(void)

{
  long lVar1;
  
  lVar1 = GetLocalPlayerData();
  return *(undefined4 *)(lVar1 + 0x24);
}


/* JoustUtils::CheatIncrementWinStreak() */

void JoustUtils::CheatIncrementWinStreak(void)

{
  long lVar1;
  
  lVar1 = GetLocalPlayerData();
  *(int *)(lVar1 + 0x24) = *(int *)(lVar1 + 0x24) + 1;
  return;
}


/* JoustUtils::CheatResetWinStreak() */

void JoustUtils::CheatResetWinStreak(void)

{
  long lVar1;
  
  lVar1 = GetLocalPlayerData();
  *(undefined4 *)(lVar1 + 0x24) = 0;
  return;
}


/* JoustUtils::PlayerGetCrowns() */

undefined4 JoustUtils::PlayerGetCrowns(void)

{
  long lVar1;
  
  lVar1 = GetLocalPlayerData();
  return *(undefined4 *)(lVar1 + 0x18);
}


/* JoustUtils::CheatPlayerAddCrowns(int) */

void JoustUtils::CheatPlayerAddCrowns(int param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = GetLocalPlayerData();
    *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + param_1;
  }
  return;
}


/* JoustUtils::CheatPlayerResetCrowns() */

void JoustUtils::CheatPlayerResetCrowns(void)

{
  long lVar1;
  
  lVar1 = GetLocalPlayerData();
  *(undefined4 *)(lVar1 + 0x18) = 0;
  return;
}


/* JoustUtils::PlayerNeedsFirstTimeTournamentRegistration() */

bool JoustUtils::PlayerNeedsFirstTimeTournamentRegistration(void)

{
  long lVar1;
  
  lVar1 = GetLocalPlayerData();
  return *(int *)(lVar1 + 0x28) == -1;
}


/* JoustUtils::PlayerGetName() */

void __thiscall JoustUtils::PlayerGetName(JoustUtils *this)

{
  undefined1 auVar1 [16];
  
  auVar1 = GetLocalPlayerData();
  Sexy::ToWString((Sexy *)(auVar1._0_8_ + 0x10),auVar1._8_8_);
  return;
}


/* JoustUtils::PlayerGetLeague() */

int JoustUtils::PlayerGetLeague(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  
  cVar1 = HasCurrentTournamentDefinition();
  if (cVar1 == '\0') {
    iVar2 = -1;
  }
  else {
    lVar3 = GetLocalPlayerData();
    iVar2 = *(int *)(lVar3 + 0x28) + -1;
  }
  return iVar2;
}


/* JoustUtils::GetLocalPlayerLeaderboardIndex() */

undefined4 JoustUtils::GetLocalPlayerLeaderboardIndex(void)

{
  long lVar1;
  
  lVar1 = GetLeaderboardData();
  return *(undefined4 *)(lVar1 + 0x48);
}


/* JoustUtils::GetLocalPlayerLeaderboardData() */

void JoustUtils::GetLocalPlayerLeaderboardData(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)GetLeaderboardData();
  iVar1 = GetLocalPlayerLeaderboardIndex();
  FUN_0388ef94(*puVar2,(long)iVar1);
  return;
}


/* JoustUtils::GetPlacementChangeForLeaderboardIndex(int) */

undefined8 JoustUtils::GetPlacementChangeForLeaderboardIndex(int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  lVar2 = GetCurrentTournamentDefinition();
  lVar2 = JoustLeaderboardDefinition::GetProperties((string *)(lVar2 + 8));
  puVar3 = (undefined8 *)GetLeaderboardData();
  iVar1 = FUN_0388efa0(*puVar3,puVar3[1]);
  uVar4 = 1;
  if (*(int *)(lVar2 + 0x18) <= param_1) {
    if (((param_1 < iVar1 - *(int *)(lVar2 + 0x1c)) || (iVar1 < *(int *)(lVar2 + 0x20))) ||
       (iVar1 = PlayerGetLeague(), iVar1 < *(int *)(lVar2 + 0x24))) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::GetBadgeImageForLeaderboardIndex(int) */

void __thiscall JoustUtils::GetBadgeImageForLeaderboardIndex(JoustUtils *this,int param_1)

{
  long lVar1;
  int iVar2;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  iVar2 = GetPlacementChangeForLeaderboardIndex((int)this);
  if (iVar2 < 1) {
    if (iVar2 == 0) {
      std::string::string(in_x8,"IMAGE_UI_JOUST_LEADERBOARD_BADGE_STANDSTILL");
      nop();
    }
    else {
      std::string::string(in_x8,"IMAGE_UI_JOUST_LEADERBOARD_BADGE_DEMOTED");
      nop();
    }
  }
  else {
    std::string::string(in_x8,"IMAGE_UI_JOUST_LEADERBOARD_BADGE_PROMOTED");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustUtils::CreateNewLocalPlayer() */

void JoustUtils::CreateNewLocalPlayer(void)

{
  undefined4 uVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  long lVar2;
  
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::LazySingleton<JoustStatus>::GetInstance();
  lVar2 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_end(this);
  uVar1 = AvatarCalcRandomIndex();
  *(undefined4 *)(lVar2 + 0x30) = 0;
  *(undefined4 *)(lVar2 + 0x24) = uVar1;
  uVar1 = NameCalcRandomIndex();
  FUN_05477110(lVar2 + 0x28,uVar1);
  return;
}


/* JoustUtils::HasCurrentTournamentEnded() */

void JoustUtils::HasCurrentTournamentEnded(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<JoustStatus>::GetInstance();
  FUN_0388ef40(*(undefined1 *)(lVar1 + 0x158));
  return;
}


/* JoustUtils::GetTournamentEndedData() */

void JoustUtils::GetTournamentEndedData(void)

{
  UIWidget *this;
  
  this = (UIWidget *)Sexy::LazySingleton<JoustStatus>::GetInstance();
  UIWidget::GetMouseDownPos(this);
  return;
}


/* JoustUtils::ClearCurrentTournamentEndedFlag() */

void JoustUtils::ClearCurrentTournamentEndedFlag(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<JoustStatus>::GetInstance();
  FUN_0388ef44(lVar1 + 0x158);
  return;
}


/* JoustUtils::GetTournamentEventTimeRemaining() */

long JoustUtils::GetTournamentEventTimeRemaining(void)

{
  UITourismOctober *this;
  long lVar1;
  long lVar2;
  
  this = (UITourismOctober *)Sexy::LazySingleton<JoustStatus>::GetInstance();
  lVar1 = LawnApp::GetRealBeijingTime(gLawnApp);
  lVar2 = UITourismOctober::getData(this);
  lVar1 = *(long *)(lVar2 + 8) - lVar1;
  if (lVar1 < 0) {
    lVar1 = 0;
  }
  return lVar1;
}


/* JoustUtils::HasCurrentMatch() */

void JoustUtils::HasCurrentMatch(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<JoustStatus>::GetInstance();
  FUN_0388ef0c(*(undefined1 *)(lVar1 + 0x58));
  return;
}


/* JoustUtils::ClearCurrentMatch() */

void JoustUtils::ClearCurrentMatch(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<JoustStatus>::GetInstance();
  FUN_0388ef04(lVar1 + 0x58);
  ClearLevelEndExtensionCount();
  return;
}


/* JoustUtils::GetCurrentMatch() */

void JoustUtils::GetCurrentMatch(void)

{
  JoustStatus *this;
  
  this = (JoustStatus *)Sexy::LazySingleton<JoustStatus>::GetInstance();
  JoustStatus::GetCurrentMatch(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::GetAPICurrentBaseURL() */

void __thiscall JoustUtils::GetAPICurrentBaseURL(JoustUtils *this)

{
  long lVar1;
  char cVar2;
  JoustStatus *this_00;
  UIWidgetImage *this_01;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  this_00 = (JoustStatus *)Sexy::LazySingleton<JoustStatus>::GetInstance();
  cVar2 = JoustStatus::HasURLOverride(this_00);
  if (cVar2 == '\0') {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    this_01 = (UIWidgetImage *)Sexy::LazySingleton<JoustStatus>::GetInstance();
    UIWidgetImage::GetPVZ2Image(this_01);
    FUN_05475d88();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::DoFirstInit() */

void JoustUtils::DoFirstInit(void)

{
  char cVar1;
  Toggles *this;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Toggles *)Toggles::GetInstance();
  std::string::string(asStack_10,"Joust");
  cVar1 = Toggles::IsEnabled(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 != '\0') {
    lVar2 = JoustPropertySheet::GetProperties();
    SetAPIRequestTimeout(*(float *)(lVar2 + 0x1c));
    Sexy::LazySingleton<JoustStatus>::GetInstance();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustUtils::GetCurrentLevelRecording() */

void JoustUtils::GetCurrentLevelRecording(void)

{
  Board::GetGameSubSystem<LevelRecordSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* JoustUtils::GetOpponentReplay() */

void JoustUtils::GetOpponentReplay(void)

{
  Board::GetGameSubSystem<LevelReplaySubsystem>(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* JoustUtils::GetOpponentLoadout() */

void JoustUtils::GetOpponentLoadout(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetOpponentReplay();
  (**(code **)(*plVar1 + 0xb0))();
  return;
}


/* JoustUtils::GetOpponentFinalScore() */

void JoustUtils::GetOpponentFinalScore(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetOpponentReplay();
  (**(code **)(*plVar1 + 0xa0))();
  return;
}


/* JoustUtils::GetOpponentScore() */

void JoustUtils::GetOpponentScore(void)

{
  long lVar1;
  
  lVar1 = GetOpponentReplay();
  FUN_0388ef50(*(undefined4 *)(lVar1 + 0x28));
  return;
}


/* JoustUtils::GetJoustGameModule() */

void JoustUtils::GetJoustGameModule(void)

{
  LevelModuleManager *this;
  
  this = (LevelModuleManager *)FUN_0388eef0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  LevelModuleManager::GetModuleByClass<JoustGameModule>(this);
  return;
}


/* JoustUtils::IsPlayingJoustLevel() */

bool JoustUtils::IsPlayingJoustLevel(void)

{
  bool bVar1;
  LevelModuleManager *this;
  JoustGameModule *pJVar2;
  
  bVar1 = false;
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    this = (LevelModuleManager *)FUN_0388eef0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    pJVar2 = LevelModuleManager::GetModuleByClass<JoustGameModule>(this);
    bVar1 = pJVar2 != (JoustGameModule *)0x0;
  }
  return bVar1;
}


/* JoustUtils::PlayerGetPCPID() */

void __thiscall JoustUtils::PlayerGetPCPID(JoustUtils *this)

{
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this_00;
  long *plVar1;
  
  this_00 = (hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *)Sexy::LazySingleton<DataPersistorObjectsFactory>::GetInstance();
  plVar1 = (long *)eastl::
                   hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                   ::get_allocator(this_00);
  (**(code **)(*plVar1 + 0x58))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::SendAPIPostAvatar(std::function<void (JoustAPIResponse*)>, std::function<void ()>) */

void JoustUtils::SendAPIPostAvatar(function *param_1,function *param_2)

{
  undefined4 uVar1;
  JoustNetworkMgr *pJVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  long lVar3;
  function<void(JoustAPIResponse*)> afStack_48 [32];
  function<void(std::string_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pJVar2 = (JoustNetworkMgr *)Sexy::LazySingleton<JoustNetworkMgr>::GetInstancePtr();
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::LazySingleton<JoustStatus>::GetInstance();
  lVar3 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_end(this);
  uVar1 = *(undefined4 *)(lVar3 + 0x24);
  std::function<void(JoustAPIResponse*)>::function(afStack_48,param_1);
  std::function<void(std::string_const&)>::function(afStack_28,param_2);
  JoustNetworkMgr::Send_PostAvatar(pJVar2,lVar3 + 0x28,uVar1,afStack_48,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)afStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::SendAPIGetNextMatch(std::function<void (JoustAPIResponse*)>, std::function<void ()>)
    */

void JoustUtils::SendAPIGetNextMatch(function *param_1,function *param_2)

{
  bool bVar1;
  JoustStatus *this;
  long lVar2;
  JoustNetworkMgr *pJVar3;
  function<void(JoustAPIResponse*)> afStack_48 [32];
  function<void(std::string_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (JoustStatus *)Sexy::LazySingleton<JoustStatus>::GetInstance();
  lVar2 = JoustStatus::GetCurrentMatch(this);
  if (lVar2 == 0) {
    bVar1 = std::function::operator_cast_to_bool(param_2);
    if (bVar1) {
      std::function<void()>::operator()((function<void()> *)param_2);
    }
  }
  else {
    pJVar3 = (JoustNetworkMgr *)Sexy::LazySingleton<JoustNetworkMgr>::GetInstancePtr();
    std::function<void(JoustAPIResponse*)>::function(afStack_48,param_1);
    std::function<void(std::string_const&)>::function(afStack_28,param_2);
    JoustNetworkMgr::Send_PostCreateOrUpdateMatch(pJVar3,lVar2 + 0x10,afStack_48,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)afStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::SendAPIRegisterForTournament(std::function<void (JoustAPIResponse*)>,
   std::function<void ()>) */

void JoustUtils::SendAPIRegisterForTournament(function *param_1,function *param_2)

{
  JoustNetworkMgr *pJVar1;
  function<void(JoustAPIResponse*)> afStack_48 [32];
  function<void(std::string_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pJVar1 = (JoustNetworkMgr *)Sexy::LazySingleton<JoustNetworkMgr>::GetInstancePtr();
  std::function<void(JoustAPIResponse*)>::function(afStack_48,param_1);
  std::function<void(std::string_const&)>::function(afStack_28,param_2);
  JoustNetworkMgr::Send_PostRegisterForTournament(pJVar1,afStack_48,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)afStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::SendAPIGetFirstMatch(std::function<void (JoustAPIResponse*)>, std::function<void ()>)
    */

void JoustUtils::SendAPIGetFirstMatch(function *param_1,function *param_2)

{
  long lVar1;
  JoustNetworkMgr *pJVar2;
  string asStack_50 [8];
  function<void(JoustAPIResponse*)> afStack_48 [32];
  function<void(std::string_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::LazySingleton<JoustStatus>::GetInstance();
  FUN_0388ef04(lVar1 + 0x58);
  pJVar2 = (JoustNetworkMgr *)Sexy::LazySingleton<JoustNetworkMgr>::GetInstancePtr();
  std::string::string(asStack_50,"");
  std::function<void(JoustAPIResponse*)>::function(afStack_48,param_1);
  std::function<void(std::string_const&)>::function(afStack_28,param_2);
  JoustNetworkMgr::Send_PostCreateOrUpdateMatch(pJVar2,asStack_50,afStack_48,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)afStack_48);
  std::string::~string(asStack_50);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::TryShowFUE() */

void JoustUtils::TryShowFUE(void)

{
  char cVar1;
  CrazyNPCManager *pCVar2;
  undefined8 local_50;
  string asStack_48 [8];
  string asStack_40 [8];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsPlayerReadyForJoust();
  if (cVar1 != '\0') {
    cVar1 = IsFUENeeded();
    if (cVar1 != '\0') {
      pCVar2 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      std::string::string(asStack_48,"JOUST_UNLOCK");
      local_50 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)FUENarrativeDoneCallback);
      Sexy::Delegate0::Delegate0<void(*)()>(aDStack_38,(CBFunctionTranslatorX *)&local_50);
      std::string::string(asStack_40,"");
      CrazyNPCManager::StartNarrativeID(pCVar2,asStack_48,aDStack_38,asStack_40);
      std::string::~string(asStack_40);
      nop();
      std::string::~string(asStack_48);
      nop();
      goto LAB_03890c2c;
    }
  }
  cVar1 = '\0';
LAB_03890c2c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::SaveReplayData() */

void JoustUtils::SaveReplayData(void)

{
  ZombieActionHandler *this;
  JoustStatus *this_00;
  long lVar1;
  Buffer aBStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ZombieActionHandler *)GetCurrentLevelRecording();
  ZombieActionHandler::StartAction(this);
  Sexy::Buffer::Buffer(aBStack_38);
  LevelRecordSubsystem::ExportToBinary((LevelRecordSubsystem *)this,aBStack_38);
  this_00 = (JoustStatus *)Sexy::LazySingleton<JoustStatus>::GetInstance();
  lVar1 = JoustStatus::GetCurrentMatch(this_00);
  GetJoustGameModule();
  if (lVar1 != 0) {
    Sexy::Buffer::operator=((Buffer *)(lVar1 + 0x40),aBStack_38);
  }
  Sexy::Buffer::~Buffer(aBStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::SendAPIPostCompleteMatch(std::function<void (JoustAPIResponse*)>, std::function<void
   ()>) */

void JoustUtils::SendAPIPostCompleteMatch(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  JoustNetworkMgr *this;
  JoustStatus *this_00;
  long lVar4;
  long lVar5;
  LevelModuleManager *this_01;
  JoustGameModule *this_02;
  JoustAPIPostCompleteMatch aJStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined4 local_58;
  undefined1 auStack_50 [8];
  undefined4 local_48;
  int local_44;
  Buffer aBStack_40 [48];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SaveReplayData();
  this = (JoustNetworkMgr *)Sexy::LazySingleton<JoustNetworkMgr>::GetInstancePtr();
  this_00 = (JoustStatus *)Sexy::LazySingleton<JoustStatus>::GetInstance();
  lVar4 = JoustStatus::GetCurrentMatch(this_00);
  lVar5 = GetScoringSystem();
  iVar1 = FUN_0388ef4c(*(undefined4 *)(lVar5 + 0x14));
  iVar2 = GetOpponentScore();
  this_01 = (LevelModuleManager *)FUN_0388eef0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_02 = LevelModuleManager::GetModuleByClass<JoustGameModule>(this_01);
  if (this_02 == (JoustGameModule *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = JoustGameModule::CalcTotalPlantPower(this_02);
  }
  JoustAPIPostCompleteMatch::JoustAPIPostCompleteMatch(aJStack_70);
  if (lVar4 != 0) {
    local_48 = *(undefined4 *)(lVar4 + 0x18);
    thunk_FUN_05475e00(auStack_50,lVar4 + 0x20);
    thunk_FUN_05475e00(auStack_68,lVar4 + 0x10);
    Sexy::Buffer::operator=(aBStack_40,(Buffer *)(lVar4 + 0x40));
    thunk_FUN_05475e00(auStack_60,lVar4 + 0x28);
    local_44 = iVar1;
    local_10 = uVar3;
  }
  local_58 = 1;
  if ((iVar1 <= iVar2) && (local_58 = 0, iVar2 <= iVar1)) {
    local_58 = 2;
  }
  JoustNetworkMgr::RequestPostCompleteMatch(this,aJStack_70);
  JoustAPIPostCompleteMatch::~JoustAPIPostCompleteMatch(aJStack_70);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* JoustUtils::GetLevelHumanReplay() */

void __thiscall JoustUtils::GetLevelHumanReplay(JoustUtils *this)

{
  JoustStatus *this_00;
  long lVar1;
  Buffer *in_x8;
  
  this_00 = (JoustStatus *)Sexy::LazySingleton<JoustStatus>::GetInstance();
  lVar1 = JoustStatus::GetCurrentMatch(this_00);
  Sexy::Buffer::Buffer(in_x8,(Buffer *)(lVar1 + 0x40));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::HasLevelHumanReplay() */

void JoustUtils::HasLevelHumanReplay(void)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  JoustStatus *this;
  JoustUtils *this_00;
  Buffer aBStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = Sexy::LazySingleton<JoustStatus>::GetInstance();
  cVar1 = FUN_0388ef0c(*(undefined1 *)(lVar3 + 0x58));
  if (cVar1 != '\0') {
    this = (JoustStatus *)Sexy::LazySingleton<JoustStatus>::GetInstance();
    this_00 = (JoustUtils *)JoustStatus::GetCurrentMatch(this);
    if (this_00 != (JoustUtils *)0x0) {
      GetLevelHumanReplay(this_00);
      uVar2 = LevelReplayData::IsBinaryValid(aBStack_38);
      Sexy::Buffer::~Buffer(aBStack_38);
      goto LAB_038912d0;
    }
  }
  uVar2 = 0;
LAB_038912d0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::GetProgressiveRewardKey(int) */

void __thiscall JoustUtils::GetProgressiveRewardKey(JoustUtils *this,int param_1)

{
  long lVar1;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = GetCurrentTournamentDefinition();
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)local_20,(vector *)(lVar1 + 0x20));
  FUN_0388ef8c(local_20[0],(long)(int)this);
  FUN_05475d88();
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::GetWinStreakReward(int, int) */

void JoustUtils::GetWinStreakReward(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  int extraout_w1;
  undefined8 uVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = HasCurrentTournamentDefinition();
  if (cVar2 == '\0') {
    lVar3 = 0;
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    GetProgressiveRewardKey((JoustUtils *)(ulong)(uint)param_1,extraout_w1);
    lVar3 = JoustProgressiveRewardDefinition::GetProperties(asStack_10);
    std::string::~string(asStack_10);
    uVar5 = *(undefined8 *)(lVar3 + 0x10);
    uVar4 = FUN_0388f008(uVar5,*(undefined8 *)(lVar3 + 0x18));
    lVar3 = ___stack_chk_guard;
    if (local_8 == ___stack_chk_guard) {
      iVar1 = 0;
      if (uVar4 != 0) {
        iVar1 = (int)((ulong)(long)param_2 / uVar4);
      }
      FUN_0388f014(uVar5,(long)(param_2 - iVar1 * (int)uVar4));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::GetTournamentRewardKey(int) */

void __thiscall JoustUtils::GetTournamentRewardKey(JoustUtils *this,int param_1)

{
  long lVar1;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = GetCurrentTournamentDefinition();
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)local_20,(vector *)(lVar1 + 0x38));
  FUN_0388ef8c(local_20[0],(long)(int)this);
  FUN_05475d88();
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::GetLeaderboardPlacementReward(int, int) */

void JoustUtils::GetLeaderboardPlacementReward(int param_1,int param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  int extraout_w1;
  undefined8 uVar4;
  ulong uVar5;
  string asStack_10 [8];
  long local_8;
  
  uVar5 = (ulong)param_2;
  local_8 = ___stack_chk_guard;
  cVar1 = HasCurrentTournamentDefinition();
  if (cVar1 == '\0') {
    lVar2 = 0;
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    GetTournamentRewardKey((JoustUtils *)(ulong)(uint)param_1,extraout_w1);
    lVar2 = JoustTournamentRewardDefinition::GetProperties(asStack_10);
    std::string::~string(asStack_10);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    uVar3 = FUN_0388efb4(uVar4,*(undefined8 *)(lVar2 + 0x18));
    if (uVar3 <= uVar5) {
      uVar5 = (ulong)((int)uVar3 + -1);
    }
    lVar2 = ___stack_chk_guard;
    if (local_8 == ___stack_chk_guard) {
      FUN_0388efc8(uVar4,uVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* JoustUtils::GetLevelEndStreakRewards() */

void __thiscall JoustUtils::GetLevelEndStreakRewards(JoustUtils *this)

{
  UIWidgetAnim *this_00;
  long lVar1;
  vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *in_x8;
  
  this_00 = (UIWidgetAnim *)Sexy::LazySingleton<JoustStatus>::GetInstance();
  lVar1 = UIWidgetAnim::GetScale(this_00);
  std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::vector
            (in_x8,(vector *)(lVar1 + 0x10));
  return;
}


/* JoustUtils::ApplyAPIMatchCompleteResponse(JoustAPIResponseMatchComplete&) */

void JoustUtils::ApplyAPIMatchCompleteResponse(JoustAPIResponseMatchComplete *param_1)

{
  JoustStatus *this;
  
  this = (JoustStatus *)Sexy::LazySingleton<JoustStatus>::GetInstance();
  JoustStatus::SetMatchCompleteData(this,param_1);
  return;
}


/* JoustUtils::GetPredefinedLoadout(int) */

void __thiscall JoustUtils::GetPredefinedLoadout(JoustUtils *this,int param_1)

{
  long lVar1;
  vector *pvVar2;
  vector<PredefinedLoadoutEntry,std::allocator<PredefinedLoadoutEntry>> *in_x8;
  
  lVar1 = JoustPropertySheet::GetProperties();
  pvVar2 = (vector *)FUN_0388ef80(*(undefined8 *)(lVar1 + 0x88),(long)(int)this);
  std::vector<PredefinedLoadoutEntry,std::allocator<PredefinedLoadoutEntry>>::vector(in_x8,pvVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::CreateFakeLeaderboadPlayer() */

void JoustUtils::CreateFakeLeaderboadPlayer(void)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  JoustUtils *this_00;
  JoustPlayerData aJStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::LazySingleton<JoustStatus>::GetInstance();
  this_00 = (JoustUtils *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_end(this);
  CreateFakeOpponent(this_00);
  std::vector<JoustPlayerData,std::allocator<JoustPlayerData>>::push_back
            ((vector<JoustPlayerData,std::allocator<JoustPlayerData>> *)this_00,aJStack_30);
  JoustPlayerData::~JoustPlayerData(aJStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::ApplyAPIResponseDashboard(JoustAPIResponseDashboard&) */

void JoustUtils::ApplyAPIResponseDashboard(JoustAPIResponseDashboard *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  vector<JoustPlayerData,std::allocator<JoustPlayerData>> *this_00;
  ProfileMgr *this_01;
  long lVar6;
  JoustPlayerData *pJVar7;
  undefined8 *puVar8;
  undefined1 auStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::LazySingleton<JoustStatus>::GetInstance();
  this_00 = (vector<JoustPlayerData,std::allocator<JoustPlayerData>> *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_end(this);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar6 = ProfileMgr::GetCurrentProfile(this_01);
  if (lVar6 == 0) {
    FUN_05478178(auStack_20,L"-invalid-",&local_10);
    nop();
  }
  else {
    PlayerInfo::AM_GetName();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this_00 + 0x40) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this_00 + 0x3c) = uVar2;
  *(undefined4 *)(this_00 + 0x24) = uVar3;
  *(undefined4 *)(this_00 + 0x30) = uVar4;
  thunk_FUN_05477b9c(this_00 + 0x28,auStack_20);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this_00 + 0x48) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this_00 + 0x44) = uVar2;
  std::vector<JoustPlayerData,std::allocator<JoustPlayerData>>::clear(this_00);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x48));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_1 + 0x48));
  while (bVar5 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar5) {
    pJVar7 = (JoustPlayerData *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    std::vector<JoustPlayerData,std::allocator<JoustPlayerData>>::push_back(this_00,pJVar7);
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_18);
  }
  JoustStatus::SetLeagueChangeEvent
            ((JoustStatus *)this,(JoustAPIResponseLeagueChange *)(param_1 + 0x60));
  puVar8 = (undefined8 *)UITourismOctober::getData((UITourismOctober *)this);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *puVar8 = *(undefined8 *)(param_1 + 0x38);
  puVar8[1] = uVar1;
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::GetLeaderboardBestPlacementReward(int) */

void __thiscall JoustUtils::GetLeaderboardBestPlacementReward(JoustUtils *this,int param_1)

{
  long lVar1;
  vector *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  JoustLeaderboardRewardInfo *pJVar5;
  int *piVar6;
  ulong uVar7;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  ulong uVar8;
  undefined8 local_80 [3];
  JoustLeaderboardRewardInfo aJStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  LevelOfTheDay_RewardItemType aLStack_48 [16];
  undefined4 local_38;
  undefined4 local_20;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::LazySingleton<JoustNetworkMgr>::GetInstancePtr();
  pvVar2 = (vector *)FUN_0388efd4(*(undefined8 *)(lVar1 + 0x98),(long)(int)this);
  std::vector<JoustLeaderboardRewardInfo,std::allocator<JoustLeaderboardRewardInfo>>::vector
            ((vector<JoustLeaderboardRewardInfo,std::allocator<JoustLeaderboardRewardInfo>> *)
             local_80,pvVar2);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_80);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_80);
  FUN_03892cd8(uVar3,uVar4);
  pJVar5 = (JoustLeaderboardRewardInfo *)FUN_0388efe0(local_80[0],0);
  JoustLeaderboardRewardInfo::JoustLeaderboardRewardInfo(aJStack_68,pJVar5);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  uVar8 = 0;
  while( true ) {
    uVar7 = FUN_0388efe8(local_60,local_58);
    if (uVar7 <= uVar8) break;
    LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType(aLStack_48);
    piVar6 = (int *)FUN_0388eff4(local_60,uVar8);
    uVar3 = GetAwardInfoByActId(*piVar6);
    local_38 = (undefined4)uVar3;
    lVar1 = FUN_0388eff4(local_60,uVar8);
    local_20 = *(undefined4 *)(lVar1 + 4);
    local_10 = (undefined4)((ulong)uVar3 >> 0x20);
    std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::
    push_back((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *)
              in_x8,aLStack_48);
    LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType(aLStack_48);
    uVar8 = uVar8 + 1;
  }
  JoustLeaderboardRewardInfo::~JoustLeaderboardRewardInfo(aJStack_68);
  std::vector<JoustLeaderboardRewardInfo,std::allocator<JoustLeaderboardRewardInfo>>::~vector
            ((vector<JoustLeaderboardRewardInfo,std::allocator<JoustLeaderboardRewardInfo>> *)
             local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::GetLeaderboardPlayerPlacementReward(int, int) */

void __thiscall
JoustUtils::GetLeaderboardPlayerPlacementReward(JoustUtils *this,int param_1,int param_2)

{
  long lVar1;
  vector *pvVar2;
  ulong uVar3;
  JoustLeaderboardRewardInfo *pJVar4;
  int *piVar5;
  undefined8 uVar6;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  ulong uVar7;
  undefined8 local_80;
  undefined8 local_78;
  JoustLeaderboardRewardInfo aJStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  int local_48;
  int local_44;
  undefined4 local_38;
  undefined4 local_20;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  lVar1 = Sexy::LazySingleton<JoustNetworkMgr>::GetInstancePtr();
  pvVar2 = (vector *)FUN_0388efd4(*(undefined8 *)(lVar1 + 0x98),(long)(int)this);
  std::vector<JoustLeaderboardRewardInfo,std::allocator<JoustLeaderboardRewardInfo>>::vector
            ((vector<JoustLeaderboardRewardInfo,std::allocator<JoustLeaderboardRewardInfo>> *)
             &local_80,pvVar2);
  do {
    uVar6 = local_80;
    uVar3 = FUN_0388effc(local_80,local_78);
    if (uVar3 <= uVar7) {
      uVar7 = 0;
      local_80 = uVar6;
LAB_03892f00:
      pJVar4 = (JoustLeaderboardRewardInfo *)FUN_0388efe0(local_80,uVar7);
      JoustLeaderboardRewardInfo::JoustLeaderboardRewardInfo(aJStack_68,pJVar4);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
      uVar7 = 0;
      while( true ) {
        uVar3 = FUN_0388efe8(local_60,local_58);
        if (uVar3 <= uVar7) break;
        LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType
                  ((LevelOfTheDay_RewardItemType *)&local_48);
        piVar5 = (int *)FUN_0388eff4(local_60,uVar7);
        uVar6 = GetAwardInfoByActId(*piVar5);
        local_38 = (undefined4)uVar6;
        lVar1 = FUN_0388eff4(local_60,uVar7);
        local_20 = *(undefined4 *)(lVar1 + 4);
        local_10 = (undefined4)((ulong)uVar6 >> 0x20);
        std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::
        push_back((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>
                   *)in_x8,(LevelOfTheDay_RewardItemType *)&local_48);
        LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType
                  ((LevelOfTheDay_RewardItemType *)&local_48);
        uVar7 = uVar7 + 1;
      }
      JoustLeaderboardRewardInfo::~JoustLeaderboardRewardInfo(aJStack_68);
      std::vector<JoustLeaderboardRewardInfo,std::allocator<JoustLeaderboardRewardInfo>>::~vector
                ((vector<JoustLeaderboardRewardInfo,std::allocator<JoustLeaderboardRewardInfo>> *)
                 &local_80);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pJVar4 = (JoustLeaderboardRewardInfo *)FUN_0388efe0(uVar6,uVar7);
    JoustLeaderboardRewardInfo::JoustLeaderboardRewardInfo
              ((JoustLeaderboardRewardInfo *)&local_48,pJVar4);
    if ((local_48 <= param_1) && (param_1 <= local_44)) {
      JoustLeaderboardRewardInfo::~JoustLeaderboardRewardInfo
                ((JoustLeaderboardRewardInfo *)&local_48);
      goto LAB_03892f00;
    }
    uVar7 = uVar7 + 1;
    JoustLeaderboardRewardInfo::~JoustLeaderboardRewardInfo((JoustLeaderboardRewardInfo *)&local_48)
    ;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::CheatCreateDummyMatch() */

void JoustUtils::CheatCreateDummyMatch(void)

{
  JoustStatus *this;
  JoustAPIResponseMatch aJStack_78 [24];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  JoustAPIResponseMatch::JoustAPIResponseMatch(aJStack_78);
  local_60 = PlayerGetLeague();
  this = (JoustStatus *)Sexy::LazySingleton<JoustStatus>::GetInstance();
  JoustStatus::SetCurrentMatch(this,aJStack_78);
  JoustAPIResponseMatch::~JoustAPIResponseMatch(aJStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustUtils::ApplyAPIMatchResponse(JoustAPIResponseMatch&) */

void JoustUtils::ApplyAPIMatchResponse(JoustAPIResponseMatch *param_1)

{
  JoustStatus *this;
  JoustIncompleteMatchData aJStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  JoustIncompleteMatchData::JoustIncompleteMatchData(aJStack_30);
  local_10 = *(undefined4 *)(param_1 + 0x18);
  thunk_FUN_05475e00(auStack_18,param_1 + 0x20);
  thunk_FUN_05475e00(auStack_28,param_1 + 0x10);
  thunk_FUN_05475e00(auStack_20,param_1 + 0x28);
  this = (JoustStatus *)Sexy::LazySingleton<JoustStatus>::GetInstance();
  JoustStatus::SetCurrentMatch(this,param_1);
  JoustIncompleteMatchData::~JoustIncompleteMatchData(aJStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

