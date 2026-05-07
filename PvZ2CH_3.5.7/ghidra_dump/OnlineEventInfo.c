// Class: OnlineEventInfo


/* OnlineEventInfo::OnlineEventInfo() */

void __thiscall OnlineEventInfo::OnlineEventInfo(OnlineEventInfo *this)

{
  char cVar1;
  DailySignRewardWithTW *this_00;
  long lVar2;
  ActivityConfig *this_01;
  LawnKeyField *this_02;
  
  this_02 = (LawnKeyField *)(this + 8);
  *(undefined8 *)this = 0xffffffffffffffff;
  LawnKeyField::LawnKeyField(this_02);
  LawnKeyField::LawnKeyField((LawnKeyField *)(this + 0x10),2);
  LawnKeyField::LawnKeyField((LawnKeyField *)(this + 0x18));
  LawnKeyField::LawnKeyField((LawnKeyField *)(this + 0x20));
  LawnKeyField::LawnKeyField((LawnKeyField *)(this + 0x28));
  LawnKeyField::LawnKeyField((LawnKeyField *)(this + 0x30),5);
  LawnKeyField::LawnKeyField((LawnKeyField *)(this + 0x38),0);
  this[0x40] = (OnlineEventInfo)0x0;
  LawnKeyField::LawnKeyField((LawnKeyField *)(this + 0x44));
  cVar1 = LawnApp::IsNationalDay(gLawnApp,false);
  if (cVar1 == '\0') {
    lVar2 = LawnApp::GetActivityConfig();
    if (lVar2 != 0) {
      this_01 = (ActivityConfig *)LawnApp::GetActivityConfig();
      cVar1 = ActivityConfig::IsActivityDays(this_01);
      if (cVar1 != '\0') goto LAB_033003ec;
    }
    LawnKeyField::operator=(this_02,5);
  }
  else {
LAB_033003ec:
    LawnKeyField::operator=(this_02,10);
  }
  LawnKeyField::operator=((LawnKeyField *)(this + 0x18),0);
  LawnKeyField::operator=((LawnKeyField *)(this + 0x20),0);
  LawnKeyField::operator=((LawnKeyField *)(this + 0x28),0);
  this_00 = (DailySignRewardWithTW *)LawnApp::GetActivityConfig();
  lVar2 = DailySignRewardWithTW::getRewardListData(this_00);
  LawnKeyField::operator=((LawnKeyField *)(this + 0x44),*(int *)(lVar2 + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OnlineEventInfo::RefreshEventInfo() */

void __thiscall OnlineEventInfo::RefreshEventInfo(OnlineEventInfo *this)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ActivityConfig *pAVar5;
  DailySignRewardWithTW *this_01;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (0 < local_10) {
    lVar3 = LawnApp::BeijingTime(gLawnApp,&local_10);
    this_00 = gLawnApp;
    lVar3 = (long)(*(int *)(lVar3 + 0x10) * 100 + *(int *)(lVar3 + 0x14) * 10000 +
                  *(int *)(lVar3 + 0xc));
    if (*(long *)this < lVar3) {
      *(long *)this = lVar3;
      cVar1 = LawnApp::IsNationalDay(this_00,false);
      if (cVar1 == '\0') {
        lVar3 = LawnApp::GetActivityConfig();
        if (lVar3 != 0) {
          pAVar5 = (ActivityConfig *)LawnApp::GetActivityConfig();
          cVar1 = ActivityConfig::IsActivityDays(pAVar5);
          if (cVar1 != '\0') goto LAB_03300538;
        }
        LawnKeyField::operator=((LawnKeyField *)(this + 8),5);
      }
      else {
LAB_03300538:
        LawnKeyField::operator=((LawnKeyField *)(this + 8),10);
      }
      pAVar5 = (ActivityConfig *)LawnApp::GetActivityConfig();
      cVar1 = ActivityConfig::HaveGameModeToday(pAVar5,0);
      if (cVar1 == '\0') {
        LawnKeyField::operator=((LawnKeyField *)(this + 0x18),-1);
        pAVar5 = (ActivityConfig *)LawnApp::GetActivityConfig();
        cVar1 = ActivityConfig::HaveGameModeToday(pAVar5,1);
        if (cVar1 != '\0') goto LAB_03300588;
LAB_03300668:
        LawnKeyField::operator=((LawnKeyField *)(this + 0x20),-1);
        pAVar5 = (ActivityConfig *)LawnApp::GetActivityConfig();
        cVar1 = ActivityConfig::HaveGameModeToday(pAVar5,2);
        if (cVar1 == '\0') goto LAB_03300690;
LAB_033005c0:
        pAVar5 = (ActivityConfig *)LawnApp::GetActivityConfig();
        iVar2 = ActivityConfig::GetWeeklyGameModeCount(pAVar5,2);
        LawnKeyField::operator=((LawnKeyField *)(this + 0x28),iVar2);
      }
      else {
        pAVar5 = (ActivityConfig *)LawnApp::GetActivityConfig();
        iVar2 = ActivityConfig::GetWeeklyGameModeCount(pAVar5,0);
        LawnKeyField::operator=((LawnKeyField *)(this + 0x18),iVar2);
        pAVar5 = (ActivityConfig *)LawnApp::GetActivityConfig();
        cVar1 = ActivityConfig::HaveGameModeToday(pAVar5,1);
        if (cVar1 == '\0') goto LAB_03300668;
LAB_03300588:
        pAVar5 = (ActivityConfig *)LawnApp::GetActivityConfig();
        iVar2 = ActivityConfig::GetWeeklyGameModeCount(pAVar5,1);
        LawnKeyField::operator=((LawnKeyField *)(this + 0x20),iVar2);
        pAVar5 = (ActivityConfig *)LawnApp::GetActivityConfig();
        cVar1 = ActivityConfig::HaveGameModeToday(pAVar5,2);
        if (cVar1 != '\0') goto LAB_033005c0;
LAB_03300690:
        LawnKeyField::operator=((LawnKeyField *)(this + 0x28),-1);
      }
      pAVar5 = (ActivityConfig *)LawnApp::GetActivityConfig();
      cVar1 = ActivityConfig::IsSpringBossActivated(pAVar5);
      if (cVar1 != '\0') {
        this_01 = (DailySignRewardWithTW *)LawnApp::GetActivityConfig();
        lVar3 = DailySignRewardWithTW::getRewardListData(this_01);
        LawnKeyField::operator=((LawnKeyField *)(this + 0x44),*(int *)(lVar3 + 8));
      }
      MessageRouter::Post((_func_void *)gMessageRouter);
      MessageRouter::Post((_func_void *)gMessageRouter);
      LawnKeyField::operator=((LawnKeyField *)(this + 0x10),2);
      uVar4 = 1;
      goto LAB_033004fc;
    }
  }
  uVar4 = 0;
LAB_033004fc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* OnlineEventInfo::TEMPNAMEPLACEHOLDERVALUE(OnlineEventInfo const&) */

OnlineEventInfo * __thiscall
OnlineEventInfo::operator=(OnlineEventInfo *this,OnlineEventInfo *param_1)

{
  undefined4 uVar1;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  FUN_0432665c(this + 8,*(undefined4 *)(param_1 + 8));
  FUN_0432665c(this + 0x10,*(undefined4 *)(param_1 + 0x10));
  FUN_0432665c(this + 0x18,*(undefined4 *)(param_1 + 0x18));
  FUN_0432665c(this + 0x20,*(undefined4 *)(param_1 + 0x20));
  FUN_0432665c(this + 0x28,*(undefined4 *)(param_1 + 0x28));
  FUN_0432665c(this + 0x30,*(undefined4 *)(param_1 + 0x30));
  FUN_0432665c(this + 0x38,*(undefined4 *)(param_1 + 0x38));
  uVar1 = *(undefined4 *)(param_1 + 0x44);
  this[0x40] = param_1[0x40];
  FUN_0432665c(this + 0x44,uVar1);
  return this;
}

