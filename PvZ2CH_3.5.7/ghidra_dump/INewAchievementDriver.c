// Class: INewAchievementDriver


/* INewAchievementDriver::INewAchievementDriver() */

void __thiscall INewAchievementDriver::INewAchievementDriver(INewAchievementDriver *this)

{
  *(undefined **)this = &DAT_06615cb0;
  return;
}


/* INewAchievementDriver::CreateNewAchievementDriver() */

AndroidAchievementDriverMgr * INewAchievementDriver::CreateNewAchievementDriver(void)

{
  AndroidAchievementDriverMgr *this;
  
  this = ::operator_new(0x18);
  AndroidAchievementDriverMgr::AndroidAchievementDriverMgr(this);
  return this;
}

