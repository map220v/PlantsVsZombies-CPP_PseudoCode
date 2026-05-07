// Class: JoustStatus


/* JoustStatus::GetCurrentMatch() */

JoustStatus * __thiscall JoustStatus::GetCurrentMatch(JoustStatus *this)

{
  JoustStatus *pJVar1;
  
  pJVar1 = this + 0x60;
  if (this[0x58] == (JoustStatus)0x0) {
    pJVar1 = (JoustStatus *)0x0;
  }
  return pJVar1;
}


/* JoustStatus::JoustStatus() */

void __thiscall JoustStatus::JoustStatus(JoustStatus *this)

{
  Sexy::LazySingleton<JoustStatus>::LazySingleton((LazySingleton<JoustStatus> *)this);
  *(undefined ***)this = &PTR__JoustStatus_066af550;
  JoustLeaderboardData::JoustLeaderboardData((JoustLeaderboardData *)(this + 8));
  JoustAPIResponseMatch::JoustAPIResponseMatch((JoustAPIResponseMatch *)(this + 0x60));
  Set8BytesTo0(this + 0xd0);
  Set8BytesTo0(this + 0xd8);
  JoustAPIResponseMatchComplete::JoustAPIResponseMatchComplete
            ((JoustAPIResponseMatchComplete *)(this + 0xe0));
  JoustAPIResponseLeagueChange::JoustAPIResponseLeagueChange
            ((JoustAPIResponseLeagueChange *)(this + 0x158));
  JoustTournamentData::JoustTournamentData((JoustTournamentData *)(this + 0x180));
  FUN_0388e75c(this + 0x58);
  FUN_0388e76c(this + 0x108);
  return;
}


/* JoustStatus::SetCurrentMatch(JoustAPIResponseMatch&) */

void __thiscall JoustStatus::SetCurrentMatch(JoustStatus *this,JoustAPIResponseMatch *param_1)

{
  this[0x58] = (JoustStatus)0x1;
  JoustAPIResponseMatch::operator=((JoustAPIResponseMatch *)(this + 0x60),param_1);
  FUN_0388e76c(this + 0x108);
  return;
}


/* JoustStatus::~JoustStatus() */

void __thiscall JoustStatus::~JoustStatus(JoustStatus *this)

{
  *(undefined ***)this = &PTR__JoustStatus_066af550;
  JoustAPIResponseLeagueChange::~JoustAPIResponseLeagueChange
            ((JoustAPIResponseLeagueChange *)(this + 0x158));
  JoustAPIResponseMatchComplete::~JoustAPIResponseMatchComplete
            ((JoustAPIResponseMatchComplete *)(this + 0xe0));
  std::string::~string((string *)(this + 0xd8));
  std::string::~string((string *)(this + 0xd0));
  JoustAPIResponseMatch::~JoustAPIResponseMatch((JoustAPIResponseMatch *)(this + 0x60));
  JoustLeaderboardData::~JoustLeaderboardData((JoustLeaderboardData *)(this + 8));
  Sexy::LazySingleton<JoustStatus>::~LazySingleton((LazySingleton<JoustStatus> *)this);
  return;
}


/* JoustStatus::~JoustStatus() */

void __thiscall JoustStatus::~JoustStatus(JoustStatus *this)

{
  ~JoustStatus(this);
  AK::FreeHook(this);
  return;
}


/* JoustStatus::HasURLOverride() */

byte __thiscall JoustStatus::HasURLOverride(JoustStatus *this)

{
  byte bVar1;
  
  bVar1 = FUN_0547419c(this + 0xd8);
  return bVar1 ^ 1;
}


/* JoustStatus::SetMatchCompleteData(JoustAPIResponseMatchComplete&) */

void __thiscall
JoustStatus::SetMatchCompleteData(JoustStatus *this,JoustAPIResponseMatchComplete *param_1)

{
  JoustAPIResponseMatchComplete::operator=((JoustAPIResponseMatchComplete *)(this + 0xe0),param_1);
  return;
}


/* JoustStatus::SetLeagueChangeEvent(JoustAPIResponseLeagueChange&) */

void __thiscall
JoustStatus::SetLeagueChangeEvent(JoustStatus *this,JoustAPIResponseLeagueChange *param_1)

{
  JoustAPIResponseLeagueChange::operator=((JoustAPIResponseLeagueChange *)(this + 0x158),param_1);
  return;
}

