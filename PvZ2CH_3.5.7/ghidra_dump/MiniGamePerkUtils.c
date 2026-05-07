// Class: MiniGamePerkUtils


/* MiniGamePerkUtils::GetCurrentLevelScore() */

void MiniGamePerkUtils::GetCurrentLevelScore(void)

{
  Sexy::LazySingleton<MiniGamePerkMgr>::GetInstance();
  MiniGamePerkMgr::GetCurrentLevelScore();
  return;
}


/* MiniGamePerkUtils::GetDescriptionForLevel(std::string const&, int) */

void MiniGamePerkUtils::GetDescriptionForLevel(string *param_1,int param_2)

{
  string *psVar1;
  
  psVar1 = (string *)Sexy::LazySingleton<MiniGamePerkMgr>::GetInstance();
  MiniGamePerkMgr::GetDescriptionForLevel(psVar1,(int)param_1);
  return;
}


/* MiniGamePerkUtils::GetPerkName(std::string const&) */

void MiniGamePerkUtils::GetPerkName(string *param_1)

{
  string *psVar1;
  
  psVar1 = (string *)Sexy::LazySingleton<MiniGamePerkMgr>::GetInstance();
  MiniGamePerkMgr::GetPerkName(psVar1);
  return;
}


/* MiniGamePerkUtils::GetMaxUseTimeAllowed(std::string const&, int) */

void MiniGamePerkUtils::GetMaxUseTimeAllowed(string *param_1,int param_2)

{
  string *psVar1;
  
  psVar1 = (string *)Sexy::LazySingleton<MiniGamePerkMgr>::GetInstance();
  MiniGamePerkMgr::GetMaxUseTimeAllowed(psVar1,(int)param_1);
  return;
}

