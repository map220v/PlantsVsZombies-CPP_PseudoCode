// Class: Sexy::ILeaderboardDriver


/* Sexy::ILeaderboardDriver::ILeaderboardDriver() */

void __thiscall Sexy::ILeaderboardDriver::ILeaderboardDriver(ILeaderboardDriver *this)

{
  *(undefined **)this = &DAT_06a35520;
  return;
}


/* Sexy::ILeaderboardDriver::CreateLeaderboardDriver() */

NullLeaderboardDriver * Sexy::ILeaderboardDriver::CreateLeaderboardDriver(void)

{
  NullLeaderboardDriver *this;
  
  this = ::operator_new(8);
  NullLeaderboardDriver::NullLeaderboardDriver(this);
  return this;
}

