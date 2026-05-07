// Class: FightZodiacManager


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FightZodiacManager::shouldShowTips() */

void FightZodiacManager::shouldShowTips(void)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *pPVar3;
  bool bVar4;
  ActiveItem aAStack_118 [8];
  undefined4 local_110;
  char local_100;
  FightZodiacData aFStack_98 [60];
  int local_5c;
  long local_8;
  
  bVar4 = false;
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_039cb308(local_110);
  if ((cVar1 != '\0') && (local_100 != '\0')) {
    FightZodiacData::FightZodiacData(aFStack_98);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_118,(RtObject *)aFStack_98);
    if (cVar1 != '\0') {
      this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
      cVar1 = PlayerInfo::IsMonthlyCardActivated(pPVar3,4);
      bVar4 = local_5c == 0 || cVar1 != '\0' && local_5c == 0;
    }
    FightZodiacData::~FightZodiacData(aFStack_98);
  }
  ActiveItem::~ActiveItem(aAStack_118);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4);
}

