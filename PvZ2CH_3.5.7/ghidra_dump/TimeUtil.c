// Class: TimeUtil


/* TimeUtil::CheckTimeDayPass(long, int) */

bool TimeUtil::CheckTimeDayPass(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = LawnApp::GetRealServerTime(gLawnApp);
  return param_2 <= (int)(lVar1 / 0x15180) - (int)(param_1 / 0x15180);
}


/* TimeUtil::CheckTimeHourPass(long, int) */

bool TimeUtil::CheckTimeHourPass(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = LawnApp::GetRealServerTime(gLawnApp);
  return param_2 <= (int)(lVar1 / 0xe10) - (int)(param_1 / 0xe10);
}


/* TimeUtil::IsToday(long) */

bool TimeUtil::IsToday(long param_1)

{
  long lVar1;
  
  lVar1 = LawnApp::GetRealServerTime(gLawnApp);
  return (int)((lVar1 + -0xe100) / 0x15180) == (int)((param_1 + -0xe100) / 0x15180);
}


/* TimeUtil::IsInThisWeek(long) */

bool TimeUtil::IsInThisWeek(long param_1)

{
  long lVar1;
  
  lVar1 = LawnApp::GetRealServerTime(gLawnApp);
  return (int)((lVar1 + -0x4d580) / 0x93a80) == (int)((param_1 + -0x4d580) / 0x93a80);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeUtil::TimeStampToFormatTime(long) */

void TimeUtil::TimeStampToFormatTime(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 < 1) {
    uVar2 = Sexy::SexyTime((Sexy *)param_1);
    param_1 = uVar2 / 1000;
  }
  local_10 = FUN_04c59a18(param_1);
  lVar1 = LawnApp::BeijingTime(gLawnApp,&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(int *)(lVar1 + 0x10) * 100 + 100 + (*(int *)(lVar1 + 0x14) + 0x76c) * 10000 +
                   *(int *)(lVar1 + 0xc));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeUtil::FormatTimeToTimeStamp(int) */

void TimeUtil::FormatTimeToTimeStamp(int param_1)

{
  long lVar1;
  long lVar2;
  tm local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_40.tm_hour = 0x17;
  local_40.tm_wday = 0;
  local_40.tm_yday = 0;
  local_40.tm_mday = param_1 % 100;
  local_40.tm_min = 0x3b;
  local_40.tm_year = param_1 / 10000 + -0x76c;
  local_40.tm_mon = (param_1 % 10000) / 100 + -1;
  local_40.tm_sec = 0x3b;
  local_40.tm_isdst = 0;
  local_40._36_4_ = 0;
  local_40.tm_gmtoff = 0;
  local_40.tm_zone = (char *)0x0;
  lVar1 = Sexy::GetTimegm(&local_40);
  lVar2 = Sexy::GetBJTimeOffset();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1 - lVar2);
}


/* TimeUtil::GetCurrentFormatTime() */

float TimeUtil::GetCurrentFormatTime(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = LawnApp::GetRealBeijingTime(gLawnApp);
  iVar1 = TimeStampToFormatTime(lVar2);
  return (float)iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeUtil::GetTimeCountdownFormat(float, TimeUtil::TimeLayout) */

void __thiscall TimeUtil::GetTimeCountdownFormat(undefined8 param_1_00,float param_1,int param_3)

{
  wchar_t *pwVar1;
  int iVar2;
  int local_4c;
  int local_48;
  int local_44;
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = (int)param_1;
  FUN_05476574(param_1_00);
  if (param_3 != 0) {
    if (param_3 == 1) {
      local_4c = iVar2 / 0xe10;
      std::to_string<ActivityTypeID>((ActivityTypeID *)&local_4c);
      std::operator+(asStack_38,":");
      local_48 = (iVar2 % 0xe10) / 0x3c;
      std::to_string<ActivityTypeID>((ActivityTypeID *)&local_48);
      std::operator+(asStack_30,asStack_28);
      std::operator+(asStack_20,":");
      local_44 = iVar2 % 0x3c;
      std::to_string<ActivityTypeID>((ActivityTypeID *)&local_44);
      std::operator+(asStack_18,asStack_10);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      std::string::~string(asStack_20);
      std::string::~string(asStack_28);
      std::string::~string(asStack_30);
      std::string::~string(asStack_38);
      Sexy::ToWString(asStack_40);
      FUN_054766c8(param_1_00,asStack_10);
      FUN_05476c50(asStack_10);
      std::string::~string(asStack_40);
    }
    goto LAB_04c59e58;
  }
  if (iVar2 == 0x7fffffff) {
    pwVar1 = L"[UNLIMITED]";
LAB_04c59e40:
    TodStringTranslate(pwVar1);
    FUN_054766c8(param_1_00,asStack_10);
    FUN_05476c50(asStack_10);
  }
  else {
    if (iVar2 < 0x15181) {
      if (iVar2 < 0xe11) {
        if (iVar2 < 0) {
          pwVar1 = L"[UNKNOWN]";
          goto LAB_04c59e40;
        }
        FUN_05478178((wstring *)asStack_10,L"[MIN_SEC]",asStack_20);
        TodReplaceNumberString((wstring *)asStack_10,L"{NUM1}",iVar2 / 0x3c);
        FUN_05476c50((wstring *)asStack_10);
        nop();
        iVar2 = iVar2 % 0x3c;
      }
      else {
        FUN_05478178((wstring *)asStack_10,L"[HOUR_MIN]",asStack_20);
        TodReplaceNumberString((wstring *)asStack_10,L"{NUM1}",iVar2 / 0xe10);
        FUN_05476c50((wstring *)asStack_10);
        nop();
        iVar2 = (iVar2 % 0xe10) / 0x3c;
      }
    }
    else {
      FUN_05478178((wstring *)asStack_10,L"[DAY_HOUR]",asStack_20);
      TodReplaceNumberString((wstring *)asStack_10,L"{NUM1}",iVar2 / 0x15180);
      FUN_05476c50((wstring *)asStack_10);
      nop();
      iVar2 = (iVar2 % 0x15180) / 0xe10;
    }
    TodReplaceNumberString((wstring *)asStack_18,L"{NUM2}",iVar2);
    FUN_054766c8(param_1_00,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50((wstring *)asStack_18);
  }
LAB_04c59e58:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeUtil::GetTimeCountdownFormat(float, float, TimeUtil::TimeLayout) */

void __thiscall
TimeUtil::GetTimeCountdownFormat(undefined8 param_1_00,float param_1,float param_2,int param_4)

{
  int iVar1;
  int local_54;
  int local_50;
  int local_4c;
  undefined1 auStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574(auStack_48);
  iVar1 = (int)(param_2 - param_1);
  if ((float)iVar1 < 0.0) {
    FUN_05478178(param_1_00,&DAT_056f11a8,asStack_10);
    nop();
  }
  else {
    if (param_4 == 1) {
      local_54 = iVar1 / 0xe10;
      std::to_string<ActivityTypeID>((ActivityTypeID *)&local_54);
      std::operator+(asStack_38,":");
      local_50 = (iVar1 % 0xe10) / 0x3c;
      std::to_string<ActivityTypeID>((ActivityTypeID *)&local_50);
      std::operator+(asStack_30,asStack_28);
      std::operator+(asStack_20,":");
      local_4c = iVar1 % 0x3c;
      std::to_string<ActivityTypeID>((ActivityTypeID *)&local_4c);
      std::operator+(asStack_18,asStack_10);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      std::string::~string(asStack_20);
      std::string::~string(asStack_28);
      std::string::~string(asStack_30);
      std::string::~string(asStack_38);
      Sexy::ToWString(asStack_40);
      FUN_054766c8(auStack_48,asStack_10);
      FUN_05476c50(asStack_10);
      std::string::~string(asStack_40);
    }
    FUN_05476584(param_1_00,auStack_48);
  }
  FUN_05476c50(auStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* TimeUtil::CheckTimeEclapse(float, float) */

bool TimeUtil::CheckTimeEclapse(float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  return param_1 <= fVar1 - param_2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeUtil::GetTimeCountdown(int, int) */

void TimeUtil::GetTimeCountdown(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 1) {
    lVar3 = LawnApp::GetRealServerTime(gLawnApp);
    fVar4 = (float)(((((int)lVar3 + 0x7080) / 0x15180) * 0x15180 + 0xe100) - lVar3);
  }
  else if (param_1 == 2) {
    lVar3 = LawnApp::GetRealServerTime(gLawnApp);
    fVar4 = (float)(((((int)lVar3 + -0x4d580) / 0x93a80) * 0x93a80 + 0xe1000) - lVar3);
  }
  else if (param_1 == 3) {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    cVar1 = FUN_04c59a0c(local_80);
    if ((cVar1 == '\0') || (local_70 == '\0')) {
      fVar4 = 2.1474836e+09;
    }
    else {
      iVar2 = ActiveItem::GetLeftTimes(aAStack_88);
      fVar4 = (float)iVar2;
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  else {
    fVar4 = 2.1474836e+09;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar4);
}

