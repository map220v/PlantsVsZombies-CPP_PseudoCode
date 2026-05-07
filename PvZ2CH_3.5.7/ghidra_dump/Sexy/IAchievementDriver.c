// Class: Sexy::IAchievementDriver


/* Sexy::IAchievementDriver::IAchievementDriver() */

void __thiscall Sexy::IAchievementDriver::IAchievementDriver(IAchievementDriver *this)

{
  *(undefined **)this = &DAT_06a35220;
  return;
}


/* Sexy::IAchievementDriver::CreateAchievementDriver() */

NullAchievementDriver * Sexy::IAchievementDriver::CreateAchievementDriver(void)

{
  NullAchievementDriver *this;
  
  this = ::operator_new(8);
  *(undefined8 *)this = 0;
  NullAchievementDriver::NullAchievementDriver(this);
  return this;
}

