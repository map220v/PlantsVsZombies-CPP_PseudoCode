// Class: JoustAPIResponseDashboard


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustAPIResponseDashboard::ToString() const */

void JoustAPIResponseDashboard::ToString(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long in_x0;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 uVar9;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  JoustUtils::ConvertContextToString((JoustUtils *)asStack_10,*(undefined4 *)(in_x0 + 8));
  uVar7 = FUN_0547429c(asStack_10);
  uVar1 = *(uint *)(in_x0 + 0x18);
  uVar2 = *(uint *)(in_x0 + 0x28);
  uVar3 = *(uint *)(in_x0 + 0x1c);
  uVar4 = *(uint *)(in_x0 + 0x2c);
  uVar5 = *(uint *)(in_x0 + 0x20);
  uVar6 = *(uint *)(in_x0 + 0x24);
  uVar9 = *(undefined8 *)(in_x0 + 0x38);
  pcVar8 = ctime((time_t *)(in_x0 + 0x40));
  pcVar8 = strtok(pcVar8,"\n");
  Sexy::StrFormat("%s [crowns %d] [league %d] [winstreak %d] [totwins %d] [nameid %d] [iconid %d]\n[tournamentid %ld] [enddate %s]"
                  ,uVar7,(ulong)uVar1,(ulong)uVar2,(ulong)uVar3,(ulong)uVar4,(ulong)uVar5,
                  (ulong)uVar6,uVar9,pcVar8);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustAPIResponseDashboard::~JoustAPIResponseDashboard() */

void __thiscall
JoustAPIResponseDashboard::~JoustAPIResponseDashboard(JoustAPIResponseDashboard *this)

{
  *(undefined ***)this = &PTR__JoustAPIResponseDashboard_066adea0;
  std::vector<JoustBonusInfo,std::allocator<JoustBonusInfo>>::~vector
            ((vector<JoustBonusInfo,std::allocator<JoustBonusInfo>> *)(this + 0xa0));
  std::
  vector<std::vector<JoustLeaderboardRewardInfo,std::allocator<JoustLeaderboardRewardInfo>>,std::allocator<std::vector<JoustLeaderboardRewardInfo,std::allocator<JoustLeaderboardRewardInfo>>>>
  ::~vector((vector<std::vector<JoustLeaderboardRewardInfo,std::allocator<JoustLeaderboardRewardInfo>>,std::allocator<std::vector<JoustLeaderboardRewardInfo,std::allocator<JoustLeaderboardRewardInfo>>>>
             *)(this + 0x88));
  JoustAPIResponseLeagueChange::~JoustAPIResponseLeagueChange
            ((JoustAPIResponseLeagueChange *)(this + 0x60));
  std::vector<JoustPlayerData,std::allocator<JoustPlayerData>>::~vector
            ((vector<JoustPlayerData,std::allocator<JoustPlayerData>> *)(this + 0x48));
  return;
}


/* JoustAPIResponseDashboard::~JoustAPIResponseDashboard() */

void __thiscall
JoustAPIResponseDashboard::~JoustAPIResponseDashboard(JoustAPIResponseDashboard *this)

{
  ~JoustAPIResponseDashboard(this);
  AK::FreeHook(this);
  return;
}


/* JoustAPIResponseDashboard::JoustAPIResponseDashboard() */

void __thiscall
JoustAPIResponseDashboard::JoustAPIResponseDashboard(JoustAPIResponseDashboard *this)

{
  JoustAPIResponse::JoustAPIResponse((JoustAPIResponse *)this);
  *(undefined ***)this = &PTR__JoustAPIResponseDashboard_066adea0;
  JoustTournamentData::JoustTournamentData((JoustTournamentData *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  JoustAPIResponseLeagueChange::JoustAPIResponseLeagueChange
            ((JoustAPIResponseLeagueChange *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa0));
  return;
}


/* JoustAPIResponseDashboard::TEMPNAMEPLACEHOLDERVALUE(JoustAPIResponseDashboard const&) */

JoustAPIResponseDashboard * __thiscall
JoustAPIResponseDashboard::operator=
          (JoustAPIResponseDashboard *this,JoustAPIResponseDashboard *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  FUN_0387d4a8(this,*(undefined4 *)(param_1 + 8));
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  uVar6 = *(undefined4 *)(param_1 + 0x24);
  uVar7 = *(undefined4 *)(param_1 + 0x28);
  uVar8 = *(undefined4 *)(param_1 + 0x2c);
  uVar9 = *(undefined4 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = uVar3;
  *(undefined4 *)(this + 0x1c) = uVar4;
  *(undefined4 *)(this + 0x20) = uVar5;
  *(undefined4 *)(this + 0x24) = uVar6;
  *(undefined4 *)(this + 0x28) = uVar7;
  *(undefined4 *)(this + 0x2c) = uVar8;
  *(undefined4 *)(this + 0x30) = uVar9;
  *(undefined8 *)(this + 0x38) = uVar1;
  *(undefined8 *)(this + 0x40) = uVar2;
  std::vector<JoustPlayerData,std::allocator<JoustPlayerData>>::operator=
            ((vector<JoustPlayerData,std::allocator<JoustPlayerData>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  JoustAPIResponseLeagueChange::operator=
            ((JoustAPIResponseLeagueChange *)(this + 0x60),
             (JoustAPIResponseLeagueChange *)(param_1 + 0x60));
  std::
  vector<std::vector<JoustLeaderboardRewardInfo,std::allocator<JoustLeaderboardRewardInfo>>,std::allocator<std::vector<JoustLeaderboardRewardInfo,std::allocator<JoustLeaderboardRewardInfo>>>>
  ::operator=((vector<std::vector<JoustLeaderboardRewardInfo,std::allocator<JoustLeaderboardRewardInfo>>,std::allocator<std::vector<JoustLeaderboardRewardInfo,std::allocator<JoustLeaderboardRewardInfo>>>>
               *)(this + 0x88),(vector *)(param_1 + 0x88));
  std::vector<JoustBonusInfo,std::allocator<JoustBonusInfo>>::operator=
            ((vector<JoustBonusInfo,std::allocator<JoustBonusInfo>> *)(this + 0xa0),
             (vector *)(param_1 + 0xa0));
  this[0xb8] = param_1[0xb8];
  return this;
}

