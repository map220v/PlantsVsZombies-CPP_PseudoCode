// Class: Sexy::NullLeaderboardDriver


/* Sexy::NullLeaderboardDriver::MaxReadEntries() */

undefined8 Sexy::NullLeaderboardDriver::MaxReadEntries(void)

{
  return 100;
}


/* Sexy::NullLeaderboardDriver::NullLeaderboardDriver() */

void __thiscall Sexy::NullLeaderboardDriver::NullLeaderboardDriver(NullLeaderboardDriver *this)

{
  ILeaderboardDriver::ILeaderboardDriver((ILeaderboardDriver *)this);
  *(undefined ***)this = &PTR_nop_06a35580;
  return;
}

