// Class: UnchartedModeNetworkMgr


/* UnchartedModeNetworkMgr::SetCurrentLevel(std::string) */

void UnchartedModeNetworkMgr::SetCurrentLevel(long param_1)

{
  thunk_FUN_05475e00(param_1 + 0x170);
  return;
}


/* UnchartedModeNetworkMgr::GetCurrentLevel() const */

undefined8 UnchartedModeNetworkMgr::GetCurrentLevel(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::GetTimeLimitWorld() */

void UnchartedModeNetworkMgr::GetTimeLimitWorld(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  long lVar3;
  string *in_x8;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = ___stack_chk_guard;
  uVar5 = *(undefined8 *)(in_x0 + 0x48);
  lVar4 = 0;
  lVar2 = FUN_03832cc0(uVar5,*(undefined8 *)(in_x0 + 0x50));
  do {
    if (lVar4 == lVar2) {
      std::string::string(in_x8,"");
      nop();
LAB_03833fa8:
      if (lVar1 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = FUN_03832cfc(uVar5,lVar4);
    if (*(int *)(lVar3 + 0x3c) != 0) {
      FUN_05475d88();
      goto LAB_03833fa8;
    }
    lVar4 = lVar4 + 1;
  } while( true );
}


/* UnchartedModeNetworkMgr::GetScrollBannerWorldName() */

undefined8 UnchartedModeNetworkMgr::GetScrollBannerWorldName(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* UnchartedModeNetworkMgr::GetWorldCount() */

void __thiscall UnchartedModeNetworkMgr::GetWorldCount(UnchartedModeNetworkMgr *this)

{
  FUN_03832cc0(*(undefined8 *)(this + 0x48),*(undefined8 *)(this + 0x50));
  return;
}


/* UnchartedModeNetworkMgr::GetWorldData(std::string const&) */

long __thiscall UnchartedModeNetworkMgr::GetWorldData(UnchartedModeNetworkMgr *this,string *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x48);
  lVar2 = FUN_03832cc0(uVar5,*(undefined8 *)(this + 0x50));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      lVar4 = FUN_03832cfc(uVar5,0);
      return lVar4;
    }
    lVar3 = FUN_03832cfc(uVar5,lVar4);
    cVar1 = std::operator==((string *)(lVar3 + 0x20),param_1);
    lVar4 = lVar4 + 1;
  } while (cVar1 == '\0');
  return lVar3;
}


/* UnchartedModeNetworkMgr::GetCurrentWorldData() */

void __thiscall UnchartedModeNetworkMgr::GetCurrentWorldData(UnchartedModeNetworkMgr *this)

{
  GetWorldData(this,(string *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::GetWorldStartTime(std::string const&) */

void __thiscall
UnchartedModeNetworkMgr::GetWorldStartTime(UnchartedModeNetworkMgr *this,string *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  tm local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = GetWorldData(this,param_1);
  iVar1 = StringHelper::ToInt((string *)(lVar2 + 0x28));
  local_40.tm_wday = 0;
  local_40.tm_yday = 0;
  local_40.tm_sec = 0;
  local_40.tm_min = 0;
  local_40.tm_isdst = 0;
  local_40._36_4_ = 0;
  local_40.tm_gmtoff = 0;
  local_40._8_8_ = (ulong)(uint)(iVar1 % 100) << 0x20;
  local_40.tm_zone = (char *)0x0;
  local_40.tm_year = iVar1 / 10000 + -0x76c;
  local_40.tm_mon = (iVar1 % 10000) / 100 + -1;
  lVar2 = Sexy::GetTimegm(&local_40);
  lVar3 = Sexy::GetBJTimeOffset();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2 - lVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::GetWorldEndTime(std::string const&) */

void __thiscall
UnchartedModeNetworkMgr::GetWorldEndTime(UnchartedModeNetworkMgr *this,string *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  tm local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = GetWorldData(this,param_1);
  iVar1 = StringHelper::ToInt((string *)(lVar2 + 0x30));
  local_40.tm_wday = 0;
  local_40.tm_yday = 0;
  local_40.tm_hour = 0x17;
  local_40.tm_min = 0x3b;
  local_40.tm_sec = 0x3b;
  local_40.tm_mday = iVar1 % 100;
  local_40.tm_zone = (char *)0x0;
  local_40.tm_year = iVar1 / 10000 + -0x76c;
  local_40.tm_mon = (iVar1 % 10000) / 100 + -1;
  local_40.tm_isdst = 0;
  local_40._36_4_ = 0;
  local_40.tm_gmtoff = 0;
  lVar2 = Sexy::GetTimegm(&local_40);
  lVar3 = Sexy::GetBJTimeOffset();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2 - lVar3);
}


/* UnchartedModeNetworkMgr::GetCurrentStarNumber(std::string const&) */

undefined4 __thiscall
UnchartedModeNetworkMgr::GetCurrentStarNumber(UnchartedModeNetworkMgr *this,string *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x48);
  lVar2 = FUN_03832cc0(uVar5,*(undefined8 *)(this + 0x50));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return 0;
    }
    lVar3 = FUN_03832cfc(uVar5,lVar4);
    cVar1 = std::operator==((string *)(lVar3 + 0x20),param_1);
    lVar4 = lVar4 + 1;
  } while (cVar1 == '\0');
  return *(undefined4 *)(lVar3 + 0x18);
}


/* UnchartedModeNetworkMgr::GetMaxStarNumber(std::string const&) */

undefined4 __thiscall
UnchartedModeNetworkMgr::GetMaxStarNumber(UnchartedModeNetworkMgr *this,string *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x48);
  lVar2 = FUN_03832cc0(uVar5,*(undefined8 *)(this + 0x50));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return 0;
    }
    lVar3 = FUN_03832cfc(uVar5,lVar4);
    cVar1 = std::operator==((string *)(lVar3 + 0x20),param_1);
    lVar4 = lVar4 + 1;
  } while (cVar1 == '\0');
  return *(undefined4 *)(lVar3 + 0x1c);
}


/* UnchartedModeNetworkMgr::AddWorldStar(std::string const&, int) */

void __thiscall
UnchartedModeNetworkMgr::AddWorldStar(UnchartedModeNetworkMgr *this,string *param_1,int param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x48);
  lVar2 = FUN_03832cc0(uVar5,*(undefined8 *)(this + 0x50));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return;
    }
    lVar3 = FUN_03832cfc(uVar5,lVar4);
    cVar1 = std::operator==((string *)(lVar3 + 0x20),param_1);
    lVar4 = lVar4 + 1;
  } while (cVar1 == '\0');
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + param_2;
  return;
}


/* UnchartedModeNetworkMgr::SetWorldStar(std::string const&, int) */

void __thiscall
UnchartedModeNetworkMgr::SetWorldStar(UnchartedModeNetworkMgr *this,string *param_1,int param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x48);
  lVar2 = FUN_03832cc0(uVar5,*(undefined8 *)(this + 0x50));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return;
    }
    lVar3 = FUN_03832cfc(uVar5,lVar4);
    cVar1 = std::operator==((string *)(lVar3 + 0x20),param_1);
    lVar4 = lVar4 + 1;
  } while (cVar1 == '\0');
  *(int *)(lVar3 + 0x18) = param_2;
  return;
}


/* UnchartedModeNetworkMgr::IsWorldNameVaild(std::string const&) */

char __thiscall
UnchartedModeNetworkMgr::IsWorldNameVaild(UnchartedModeNetworkMgr *this,string *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x48);
  lVar2 = FUN_03832cc0(uVar5,*(undefined8 *)(this + 0x50));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return '\0';
    }
    lVar3 = FUN_03832cfc(uVar5,lVar4);
    cVar1 = std::operator==((string *)(lVar3 + 0x20),param_1);
    lVar4 = lVar4 + 1;
  } while (cVar1 == '\0');
  return cVar1;
}


/* UnchartedModeNetworkMgr::IsTimeLimitWorld(std::string const&) */

bool __thiscall
UnchartedModeNetworkMgr::IsTimeLimitWorld(UnchartedModeNetworkMgr *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  
  cVar2 = IsWorldNameVaild(this,param_1);
  bVar1 = false;
  if (cVar2 != '\0') {
    lVar3 = GetWorldData(this,param_1);
    bVar1 = *(int *)(lVar3 + 0x3c) != 0;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::IsWorldOpen(std::string const&) */

void __thiscall UnchartedModeNetworkMgr::IsWorldOpen(UnchartedModeNetworkMgr *this,string *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_0547429c(param_1);
  Sexy::OutputDebugStrF((wchar_t *)"UnchartedModeNetworkMgr::IsWorldOpen worldPrefix=%s",uVar2);
  cVar1 = IsWorldNameVaild(this,param_1);
  if (cVar1 != '\0') {
    lVar3 = LawnApp::GetRealServerTime(gLawnApp);
    lVar4 = GetWorldData(this,param_1);
    FUN_05475d88(asStack_18,lVar4 + 0x28);
    lVar4 = GetWorldData(this,param_1);
    FUN_05475d88(asStack_10,lVar4 + 0x30);
    Sexy::OutputDebugStrF((wchar_t *)"UnchartedModeNetworkMgr::IsWorldOpen current time = %d",lVar3)
    ;
    uVar2 = FUN_0547429c(asStack_18);
    uVar5 = FUN_0547429c(asStack_10);
    Sexy::OutputDebugStrF
              ((wchar_t *)"UnchartedModeNetworkMgr::IsWorldOpen start=%s end=%s",uVar2,uVar5);
    lVar4 = GetWorldEndTime(this,param_1);
    if ((lVar4 < lVar3) || (lVar4 = GetWorldStartTime(this,param_1), lVar3 < lVar4)) {
      cVar1 = '\0';
    }
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* UnchartedModeNetworkMgr::GetPrefixWorldIndex(std::string const&) */

ulong __thiscall
UnchartedModeNetworkMgr::GetPrefixWorldIndex(UnchartedModeNetworkMgr *this,string *param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x48);
  uVar4 = 0;
  uVar2 = FUN_03832cc0(uVar5,*(undefined8 *)(this + 0x50));
  while( true ) {
    if (uVar4 == uVar2) {
      return 0;
    }
    lVar3 = FUN_03832cfc(uVar5,uVar4);
    cVar1 = std::operator==((string *)(lVar3 + 0x20),param_1);
    if (cVar1 != '\0') break;
    uVar4 = uVar4 + 1;
  }
  return uVar4 & 0xffffffff;
}


/* UnchartedModeNetworkMgr::GetCurrentPrefixWorldIndex() */

void __thiscall UnchartedModeNetworkMgr::GetCurrentPrefixWorldIndex(UnchartedModeNetworkMgr *this)

{
  GetPrefixWorldIndex(this,(string *)(this + 0x10));
  return;
}


/* UnchartedModeNetworkMgr::GetBirthdayMaxEarnedStars() */

undefined4 __thiscall
UnchartedModeNetworkMgr::GetBirthdayMaxEarnedStars(UnchartedModeNetworkMgr *this)

{
  int iVar1;
  long lVar2;
  
  iVar1 = GetCurrentPrefixWorldIndex(this);
  lVar2 = FUN_03832cfc(*(undefined8 *)(this + 0x48),(long)iVar1);
  return *(undefined4 *)(lVar2 + 0x4c);
}


/* UnchartedModeNetworkMgr::GetBirthdayCurrentEarnedStars() */

undefined4 __thiscall
UnchartedModeNetworkMgr::GetBirthdayCurrentEarnedStars(UnchartedModeNetworkMgr *this)

{
  int iVar1;
  long lVar2;
  
  iVar1 = GetCurrentPrefixWorldIndex(this);
  lVar2 = FUN_03832cfc(*(undefined8 *)(this + 0x48),(long)iVar1);
  return *(undefined4 *)(lVar2 + 0x48);
}


/* UnchartedModeNetworkMgr::GetBirthdayCurrentLevelStar(int) */

undefined4 __thiscall
UnchartedModeNetworkMgr::GetBirthdayCurrentLevelStar(UnchartedModeNetworkMgr *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  iVar1 = GetCurrentPrefixWorldIndex(this);
  lVar3 = FUN_03832cfc(*(undefined8 *)(this + 0x48),(long)iVar1);
  uVar5 = *(undefined8 *)(lVar3 + 0x80);
  uVar4 = FUN_03832c90(uVar5,*(undefined8 *)(lVar3 + 0x88));
  uVar2 = 0;
  if ((ulong)(long)param_1 < uVar4) {
    lVar3 = FUN_03832d2c(uVar5,(long)param_1);
    uVar2 = *(undefined4 *)(lVar3 + 0x84);
  }
  return uVar2;
}


/* UnchartedModeNetworkMgr::GetBirthdayCurrentLevelMaxStar(int) */

undefined4 __thiscall
UnchartedModeNetworkMgr::GetBirthdayCurrentLevelMaxStar(UnchartedModeNetworkMgr *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  iVar1 = GetCurrentPrefixWorldIndex(this);
  lVar3 = FUN_03832cfc(*(undefined8 *)(this + 0x48),(long)iVar1);
  uVar5 = *(undefined8 *)(lVar3 + 0x80);
  uVar4 = FUN_03832c90(uVar5,*(undefined8 *)(lVar3 + 0x88));
  uVar2 = 0;
  if ((ulong)(long)param_1 < uVar4) {
    lVar3 = FUN_03832d2c(uVar5,(long)param_1);
    uVar2 = *(undefined4 *)(lVar3 + 0x80);
  }
  return uVar2;
}


/* UnchartedModeNetworkMgr::GetCurrentLevelFirstReward(bool, int) */

undefined4 __thiscall
UnchartedModeNetworkMgr::GetCurrentLevelFirstReward
          (UnchartedModeNetworkMgr *this,bool param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  iVar1 = GetCurrentPrefixWorldIndex(this);
  if (param_1) {
    lVar3 = FUN_03832cfc(*(undefined8 *)(this + 0x48),(long)iVar1);
    uVar5 = *(undefined8 *)(lVar3 + 0x80);
    uVar4 = FUN_03832c90(uVar5,*(undefined8 *)(lVar3 + 0x88));
    uVar2 = 0;
    if ((ulong)(long)param_2 < uVar4) {
      lVar3 = FUN_03832d2c(uVar5,(long)param_2);
      uVar2 = *(undefined4 *)(lVar3 + 0x7c);
    }
  }
  else {
    lVar3 = FUN_03832cfc(*(undefined8 *)(this + 0x48),(long)iVar1);
    uVar5 = *(undefined8 *)(lVar3 + 0x68);
    uVar4 = FUN_03832c90(uVar5,*(undefined8 *)(lVar3 + 0x70));
    uVar2 = 0;
    if ((ulong)(long)param_2 < uVar4) {
      lVar3 = FUN_03832d2c(uVar5,(long)param_2);
      return *(undefined4 *)(lVar3 + 0x7c);
    }
  }
  return uVar2;
}


/* UnchartedModeNetworkMgr::LevelComplete(std::string const&, bool, int) */

void __thiscall
UnchartedModeNetworkMgr::LevelComplete
          (UnchartedModeNetworkMgr *this,string *param_1,bool param_2,int param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar6 = *(undefined8 *)(this + 0x48);
  uVar7 = (ulong)param_3;
  lVar2 = FUN_03832cc0(uVar6,*(undefined8 *)(this + 0x50));
  lVar5 = 0;
  if (lVar2 != 0) {
    do {
      lVar3 = FUN_03832cfc(uVar6,lVar5);
      cVar1 = std::operator==((string *)(lVar3 + 0x20),param_1);
      if (cVar1 != '\0') {
        if (param_2) {
          if (-1 < param_3) {
            uVar8 = *(undefined8 *)(lVar3 + 0x80);
            uVar4 = FUN_03832c90(uVar8,*(undefined8 *)(lVar3 + 0x88));
            if (uVar7 < uVar4) {
              lVar3 = FUN_03832d2c(uVar8,uVar7);
              *(undefined4 *)(lVar3 + 0x7c) = 2;
            }
          }
        }
        else if (-1 < param_3) {
          uVar8 = *(undefined8 *)(lVar3 + 0x68);
          uVar4 = FUN_03832c90(uVar8,*(undefined8 *)(lVar3 + 0x70));
          if (uVar7 < uVar4) {
            lVar3 = FUN_03832d2c(uVar8,uVar7);
            *(undefined4 *)(lVar3 + 0x7c) = 2;
            if (uVar7 == uVar4 - 1) {
              lVar3 = FUN_03832d2c(uVar8,(long)(param_3 + 1));
              *(undefined4 *)(lVar3 + 0x7c) = 1;
            }
          }
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != lVar2);
  }
  return;
}


/* UnchartedModeNetworkMgr::UnlockHardLevel(std::string const&, int) */

void __thiscall
UnchartedModeNetworkMgr::UnlockHardLevel(UnchartedModeNetworkMgr *this,string *param_1,int param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = *(undefined8 *)(this + 0x48);
  lVar5 = 0;
  lVar2 = FUN_03832cc0(uVar6,*(undefined8 *)(this + 0x50));
  if (lVar2 != 0) {
    do {
      lVar3 = FUN_03832cfc(uVar6,lVar5);
      cVar1 = std::operator==((string *)(lVar3 + 0x20),param_1);
      if ((cVar1 != '\0') && (-1 < param_2)) {
        uVar7 = *(undefined8 *)(lVar3 + 0x80);
        uVar4 = FUN_03832c90(uVar7,*(undefined8 *)(lVar3 + 0x88));
        if ((ulong)(long)param_2 < uVar4) {
          lVar3 = FUN_03832d2c(uVar7,(long)param_2);
          *(undefined4 *)(lVar3 + 0x7c) = 1;
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != lVar2);
  }
  return;
}


/* UnchartedModeNetworkMgr::OnObtainStarReward(std::string const&, int) */

void __thiscall
UnchartedModeNetworkMgr::OnObtainStarReward
          (UnchartedModeNetworkMgr *this,string *param_1,int param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = *(undefined8 *)(this + 0x48);
  lVar5 = 0;
  lVar2 = FUN_03832cc0(uVar6,*(undefined8 *)(this + 0x50));
  if (lVar2 != 0) {
    do {
      lVar3 = FUN_03832cfc(uVar6,lVar5);
      cVar1 = std::operator==((string *)(lVar3 + 0x20),param_1);
      if ((cVar1 != '\0') && (-1 < param_2)) {
        uVar7 = *(undefined8 *)(lVar3 + 0x98);
        uVar4 = FUN_03832d60(uVar7,*(undefined8 *)(lVar3 + 0xa0));
        if ((ulong)(long)param_2 < uVar4) {
          lVar3 = FUN_03832d88(uVar7,(long)param_2);
          *(undefined4 *)(lVar3 + 8) = 1;
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != lVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::GetWorldResourcePrefix() */

void UnchartedModeNetworkMgr::GetWorldResourcePrefix(void)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *in_x0;
  undefined1 auVar1 [16];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"IMAGE_UI_UNCHARTED_");
  auVar1 = std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root(in_x0);
  Sexy::StringToUpper(auVar1._0_8_,auVar1._8_8_);
  std::operator+(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::ShowUnlockAnniversarySelectLevel(MapEventItem const*) */

void UnchartedModeNetworkMgr::ShowUnlockAnniversarySelectLevel(MapEventItem *param_1)

{
  UIMessageBox *this;
  Image *pIVar1;
  long lVar2;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this,2);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[UNCHARTED_ANNIVERSARY_SELECT_LEVEL_LOCKED]");
    TodStringTranslate(L"[BUTTON_OK]");
    UIMessageBox::SetMessage(this,awStack_20,awStack_28);
    std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_10,false);
    UIMessageBox::SetBackground(this,pIVar1);
    std::string::~string(asStack_10);
    nop();
    lVar2 = UIMessageBox::GetButtonOK(this);
    thunk_FUN_05477b9c(lVar2 + 0xd8,auStack_18);
    FUN_05476c50(auStack_18);
    FUN_05476c50(awStack_20);
    FUN_05476c50(awStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UnchartedModeNetworkMgr::syncWorldMapInfo() */

void __thiscall UnchartedModeNetworkMgr::syncWorldMapInfo(UnchartedModeNetworkMgr *this)

{
  ulong uVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar6 = 0;
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::ClearUnchartedLevelProgress(this_01,false);
  uVar7 = *(undefined8 *)(this + 0x48);
  lVar3 = FUN_03832cc0(uVar7,*(undefined8 *)(this + 0x50));
  while( true ) {
    if (lVar6 == lVar3) {
      return;
    }
    lVar4 = FUN_03832cfc(uVar7,lVar6);
    cVar2 = std::operator==((string *)(lVar4 + 0x20),(string *)(this + 0x10));
    if (cVar2 != '\0') break;
    lVar6 = lVar6 + 1;
  }
  uVar9 = *(undefined8 *)(lVar4 + 0x68);
  uVar5 = FUN_03832c90(uVar9,*(undefined8 *)(lVar4 + 0x70));
  uVar8 = 0;
  while (uVar8 < uVar5) {
    lVar3 = FUN_03832d2c(uVar9,uVar8);
    if (*(int *)(lVar3 + 0x7c) == 1) {
      PlayerInfo::SetUnchartedLevelComplete(this_01,(int)lVar6 + 1,false);
      uVar7 = *(undefined8 *)(this + 0x48);
      lVar3 = FUN_03832cfc(uVar7,lVar6);
      uVar9 = *(undefined8 *)(lVar3 + 0x68);
      uVar5 = FUN_03832c90(uVar9,*(undefined8 *)(lVar3 + 0x70));
    }
    lVar4 = FUN_03832cfc(uVar7,lVar6);
    uVar8 = uVar8 + 1;
  }
  uVar7 = *(undefined8 *)(lVar4 + 0x80);
  uVar5 = FUN_03832c90(uVar7,*(undefined8 *)(lVar4 + 0x88));
  uVar8 = 0;
  while (uVar1 = uVar8 + 1, uVar8 < uVar5) {
    lVar3 = FUN_03832d2c(uVar7,uVar8);
    uVar8 = uVar1;
    if (*(int *)(lVar3 + 0x7c) == 1) {
      PlayerInfo::SetUnchartedLevelComplete(this_01,(int)lVar6 + 1,true);
      lVar3 = FUN_03832cfc(*(undefined8 *)(this + 0x48),lVar6);
      uVar7 = *(undefined8 *)(lVar3 + 0x80);
      uVar5 = FUN_03832c90(uVar7,*(undefined8 *)(lVar3 + 0x88));
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::SyncPacketsAdd(std::vector<S2C_DailySignContent,
   std::allocator<S2C_DailySignContent> > const&) */

void __thiscall
UnchartedModeNetworkMgr::SyncPacketsAdd(UnchartedModeNetworkMgr *this,vector *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = FUN_0383626c(*(undefined8 *)param_1);
  local_18 = FUN_038362bc(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    iVar2 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
    PVZ2UnchartedModeUtils::SetPlantOnBoard(asStack_10,*(int *)(lVar3 + 4));
    std::string::~string(asStack_10);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::GetBoardRecord(std::string, bool) */

void __thiscall
UnchartedModeNetworkMgr::GetBoardRecord(UnchartedModeNetworkMgr *this,string *param_2,char param_3)

{
  long lVar1;
  UnchartedModeBoardRecord *pUVar2;
  undefined8 uVar3;
  UnchartedModeBoardRecord aUStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = GetWorldData(this,param_2);
  UnchartedModeBoardRecord::UnchartedModeBoardRecord(aUStack_50);
  uVar3 = *(undefined8 *)(lVar1 + 0xe8);
  lVar1 = FUN_03832dcc(uVar3,*(undefined8 *)(lVar1 + 0xf0));
  pUVar2 = aUStack_50;
  if (lVar1 != 0) {
    if (param_3 == '\0') {
      pUVar2 = (UnchartedModeBoardRecord *)FUN_03832e08(uVar3,0);
    }
    else if (lVar1 != 1) {
      pUVar2 = (UnchartedModeBoardRecord *)FUN_03832e08(uVar3,1);
    }
  }
  UnchartedModeBoardRecord::~UnchartedModeBoardRecord(aUStack_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pUVar2);
  }
  return;
}


/* UnchartedModeNetworkMgr::UnchartedModeNetworkMgr() */

void __thiscall UnchartedModeNetworkMgr::UnchartedModeNetworkMgr(UnchartedModeNetworkMgr *this)

{
  undefined *puVar1;
  size_t in_x2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<UnchartedModeNetworkMgr>::LazySingleton
            ((LazySingleton<UnchartedModeNetworkMgr> *)this);
  this[8] = (UnchartedModeNetworkMgr)0x0;
  this[9] = (UnchartedModeNetworkMgr)0x0;
  *(undefined ***)this = &PTR__UnchartedModeNetworkMgr_066a6890;
  Set8BytesTo0((string *)(this + 0x10));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x18));
  UnchartedModeMainEntryData::UnchartedModeMainEntryData
            ((UnchartedModeMainEntryData *)(this + 0x38));
  UnchartedModeEndOfPlayData::UnchartedModeEndOfPlayData
            ((UnchartedModeEndOfPlayData *)(this + 0xe8));
  Set8BytesTo0(this + 0x170);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x178));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  this[0x194] = (UnchartedModeNetworkMgr)0x0;
  *(undefined4 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 0x19c) = 0;
  std::string::append((string *)(this + 0x10),"",in_x2);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<UnchartedModeNetworkMgr,void(UnchartedModeNetworkMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::HasUnlockedHeroPlant() */

void __thiscall UnchartedModeNetworkMgr::HasUnlockedHeroPlant(UnchartedModeNetworkMgr *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x178);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_038382fc(uVar2,uVar3);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::GetLevelStarNumber(std::string const&, bool, MapEventItem const*) */

void __thiscall
UnchartedModeNetworkMgr::GetLevelStarNumber
          (UnchartedModeNetworkMgr *this,string *param_1,bool param_2,MapEventItem *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  MapEventItem *pMVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar11 = (uint)param_2;
  local_8 = ___stack_chk_guard;
  cVar1 = IsTimeLimitWorld(this,param_1);
  if ((cVar1 != '\0') || (param_2)) {
    iVar10 = -1;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    lVar3 = FUN_038326fc(*(undefined8 *)(param_3 + 0xe8));
    WorldMapUtils::GetOrderedMainSpinePath((string *)(lVar3 + 0x38),(vector *)&local_20);
    lVar4 = FUN_03832d44(local_20,local_18);
    lVar3 = 0;
    do {
      if (lVar3 == lVar4) break;
      puVar5 = (undefined8 *)FUN_03832d50(local_20,lVar3);
      pMVar9 = (MapEventItem *)*puVar5;
      iVar2 = FUN_038326f8(*(undefined4 *)(pMVar9 + 0x14));
      if (iVar2 == 1) {
        iVar10 = iVar10 + 1;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != pMVar9);
    if (param_2) {
      uVar12 = *(undefined8 *)(this + 0x48);
      lVar4 = FUN_03832cc0(uVar12,*(undefined8 *)(this + 0x50));
      for (lVar3 = 0; lVar3 != lVar4; lVar3 = lVar3 + 1) {
        lVar6 = FUN_03832cfc(uVar12,lVar3);
        cVar1 = std::operator==((string *)(lVar6 + 0x20),param_1);
        if (cVar1 != '\0') {
          if (iVar10 != -1) {
            uVar12 = *(undefined8 *)(lVar6 + 0x80);
            uVar11 = 0;
            uVar7 = FUN_03832c90(uVar12,*(undefined8 *)(lVar6 + 0x88));
            if ((ulong)(long)iVar10 < uVar7) {
              lVar3 = FUN_03832d2c(uVar12,(long)iVar10);
              uVar12 = *(undefined8 *)(lVar3 + 0x60);
              uVar11 = 0;
              lVar4 = FUN_03832708(uVar12,*(undefined8 *)(lVar3 + 0x68));
              lVar3 = 0;
              while (lVar3 != lVar4) {
                lVar6 = lVar3 + 1;
                piVar8 = (int *)FUN_03832d58(uVar12,lVar3);
                lVar3 = lVar6;
                if (*piVar8 == 1) {
                  uVar11 = uVar11 + 1;
                }
              }
            }
            goto LAB_038384e8;
          }
          break;
        }
      }
    }
    else {
      uVar12 = *(undefined8 *)(this + 0x48);
      lVar4 = FUN_03832cc0(uVar12,*(undefined8 *)(this + 0x50));
      for (lVar3 = 0; lVar3 != lVar4; lVar3 = lVar3 + 1) {
        lVar6 = FUN_03832cfc(uVar12,lVar3);
        cVar1 = std::operator==((string *)(lVar6 + 0x20),param_1);
        if (cVar1 != '\0') {
          if (iVar10 != -1) {
            uVar12 = *(undefined8 *)(lVar6 + 0x68);
            uVar11 = 0;
            uVar7 = FUN_03832c90(uVar12,*(undefined8 *)(lVar6 + 0x70));
            if ((ulong)(long)iVar10 < uVar7) {
              lVar3 = FUN_03832d2c(uVar12,(long)iVar10);
              uVar12 = *(undefined8 *)(lVar3 + 0x60);
              uVar11 = 0;
              lVar4 = FUN_03832708(uVar12,*(undefined8 *)(lVar3 + 0x68));
              lVar3 = 0;
              while (lVar3 != lVar4) {
                lVar6 = lVar3 + 1;
                piVar8 = (int *)FUN_03832d58(uVar12,lVar3);
                lVar3 = lVar6;
                if (*piVar8 == 1) {
                  uVar11 = uVar11 + 1;
                }
              }
            }
            goto LAB_038384e8;
          }
          break;
        }
      }
    }
    uVar11 = 0;
LAB_038384e8:
    std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
              ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)&local_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::ShowUnlockHardEvent(MapEventItem const*) */

void __thiscall
UnchartedModeNetworkMgr::ShowUnlockHardEvent(UnchartedModeNetworkMgr *this,MapEventItem *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  UIMessageBox *pUVar6;
  Image *pIVar7;
  MapEventItem *pMVar8;
  wstring awStack_80 [8];
  wstring awStack_78 [8];
  wstring awStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RiverCrossingProperties::GetRetryTimes((RiverCrossingProperties *)this);
  if (iVar1 < 1) {
    pUVar6 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar6 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(pUVar6,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[PVZ2_UNCHARTED_MODE_KEY_NOT_ENOUGH]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(pUVar6,awStack_70,awStack_78);
      std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar7 = (Image *)StringHelper::ToImage(asStack_50,false);
      UIMessageBox::SetBackground(pUVar6,pIVar7);
      std::string::~string(asStack_50);
      nop();
      lVar3 = UIMessageBox::GetButtonCancel(pUVar6);
      thunk_FUN_05477b9c(lVar3 + 0xd8,&local_68);
      FUN_05476c50(&local_68);
      FUN_05476c50(awStack_70);
      FUN_05476c50(awStack_78);
    }
  }
  else {
    iVar1 = -1;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
    lVar3 = FUN_038326fc(*(undefined8 *)(param_1 + 0xe8));
    WorldMapUtils::GetOrderedMainSpinePath((string *)(lVar3 + 0x38),(vector *)&local_68);
    lVar4 = FUN_03832d44(local_68,local_60);
    lVar3 = 0;
    do {
      if (lVar3 == lVar4) break;
      puVar5 = (undefined8 *)FUN_03832d50(local_68,lVar3);
      pMVar8 = (MapEventItem *)*puVar5;
      iVar2 = FUN_038326f8(*(undefined4 *)(pMVar8 + 0x14));
      if (iVar2 == 1) {
        iVar1 = iVar1 + 1;
      }
      lVar3 = lVar3 + 1;
    } while (param_1 != pMVar8);
    *(int *)(this + 400) = iVar1;
    pUVar6 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar6 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(pUVar6,6);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[PVZ2_UNCHARTED_MODE_UNLOCK_HARD_LEVEL]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(pUVar6,awStack_78,awStack_80);
      std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar7 = (Image *)StringHelper::ToImage(asStack_50,false);
      UIMessageBox::SetBackground(pUVar6,pIVar7);
      std::string::~string(asStack_50);
      nop();
      lVar3 = UIMessageBox::GetButtonOK(pUVar6);
      thunk_FUN_05477b9c(lVar3 + 0xd8,awStack_70);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,ConfirmUnlock);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<UnchartedModeNetworkMgr,void(UnchartedModeNetworkMgr::*)(UIMessageBox*,int)>
                (aDStack_38,asStack_50);
      UIMessageBox::SetCallback(pUVar6,aDStack_38);
      FUN_05476c50(awStack_70);
      FUN_05476c50(awStack_78);
      FUN_05476c50(awStack_80);
    }
    std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
              ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)&local_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::IsUnchartedBirthday(std::string const&) */

void __thiscall
UnchartedModeNetworkMgr::IsUnchartedBirthday(UnchartedModeNetworkMgr *this,string *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,(vector *)(this + 0x80));
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  local_30 = std::
             find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar2,uVar3,param_1);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* UnchartedModeNetworkMgr::IsUnchartedBirthday() */

void __thiscall UnchartedModeNetworkMgr::IsUnchartedBirthday(UnchartedModeNetworkMgr *this)

{
  IsUnchartedBirthday(this,(string *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::HasAnniversaryBonus() */

void __thiscall UnchartedModeNetworkMgr::HasAnniversaryBonus(UnchartedModeNetworkMgr *this)

{
  char cVar1;
  undefined1 uVar2;
  PlayerInfo *this_00;
  undefined8 uVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  cVar1 = IsUnchartedBirthday(this);
  if (cVar1 == '\0') {
    uVar3 = std::
            _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                       *)this);
    FUN_05475d88(asStack_18,uVar3);
    FUN_05475d88(asStack_10,asStack_18);
    uVar2 = PlayerInfo::GetUnchartedWorldAnniversaryReward(this_00,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  else {
    uVar2 = PlayerInfo::GetUnchartedAnniversaryReward(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::IsAnniversarySelectLevel(std::string const&) */

void __thiscall
UnchartedModeNetworkMgr::IsAnniversarySelectLevel(UnchartedModeNetworkMgr *this,string *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  string asStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,(vector *)(this + 0x98));
  uVar2 = FUN_0547429c(param_1);
  if (this[9] == (UnchartedModeNetworkMgr)0x0) {
    puVar4 = &DAT_05593fa8;
  }
  else {
    puVar4 = &DAT_05597cd8;
  }
  Sexy::StrFormat("%s_%s",asStack_38,uVar2,puVar4);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  local_30 = std::
             find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar2,uVar3,asStack_38);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  std::string::~string(asStack_38);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* UnchartedModeNetworkMgr::IsAnniversarySelectLevel() */

void __thiscall UnchartedModeNetworkMgr::IsAnniversarySelectLevel(UnchartedModeNetworkMgr *this)

{
  IsAnniversarySelectLevel(this,(string *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::IsNormalSelectLevelWithHardmode(std::string const&) */

void __thiscall
UnchartedModeNetworkMgr::IsNormalSelectLevelWithHardmode
          (UnchartedModeNetworkMgr *this,string *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  string asStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,(vector *)(this + 0xb0));
  uVar2 = FUN_0547429c(param_1);
  if (this[9] == (UnchartedModeNetworkMgr)0x0) {
    puVar4 = &DAT_05593fa8;
  }
  else {
    puVar4 = &DAT_05597cd8;
  }
  Sexy::StrFormat("%s_%s",asStack_38,uVar2,puVar4);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  local_30 = std::
             find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar2,uVar3,asStack_38);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  std::string::~string(asStack_38);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* UnchartedModeNetworkMgr::IsNormalSelectLevelWithHardmode() */

void __thiscall
UnchartedModeNetworkMgr::IsNormalSelectLevelWithHardmode(UnchartedModeNetworkMgr *this)

{
  IsNormalSelectLevelWithHardmode(this,(string *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::IsTutorialWorld(std::string const&) */

void __thiscall
UnchartedModeNetworkMgr::IsTutorialWorld(UnchartedModeNetworkMgr *this,string *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,(vector *)(this + 200));
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  local_30 = std::
             find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar2,uVar3,param_1);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::IsTutorialWorld() */

void __thiscall UnchartedModeNetworkMgr::IsTutorialWorld(UnchartedModeNetworkMgr *this)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  do {
    uVar5 = *(undefined8 *)(this + 0x48);
    uVar3 = FUN_03832cc0(uVar5,*(undefined8 *)(this + 0x50));
    if (uVar3 <= uVar4) {
      cVar1 = '\0';
LAB_03839564:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1);
    }
    lVar2 = FUN_03832cfc(uVar5,uVar4);
    FUN_05475d88(asStack_10,lVar2 + 0x20);
    cVar1 = IsTutorialWorld(this,asStack_10);
    if (cVar1 != '\0') {
      std::string::~string(asStack_10);
      goto LAB_03839564;
    }
    std::string::~string(asStack_10);
    uVar4 = uVar4 + 1;
  } while( true );
}


/* UnchartedModeNetworkMgr::~UnchartedModeNetworkMgr() */

void __thiscall UnchartedModeNetworkMgr::~UnchartedModeNetworkMgr(UnchartedModeNetworkMgr *this)

{
  *(undefined ***)this = &PTR__UnchartedModeNetworkMgr_066a6890;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x1a8));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x178));
  std::string::~string((string *)(this + 0x170));
  UnchartedModeEndOfPlayData::~UnchartedModeEndOfPlayData
            ((UnchartedModeEndOfPlayData *)(this + 0xe8));
  UnchartedModeMainEntryData::~UnchartedModeMainEntryData
            ((UnchartedModeMainEntryData *)(this + 0x38));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  Sexy::LazySingleton<UnchartedModeNetworkMgr>::~LazySingleton
            ((LazySingleton<UnchartedModeNetworkMgr> *)this);
  return;
}


/* UnchartedModeNetworkMgr::~UnchartedModeNetworkMgr() */

void __thiscall UnchartedModeNetworkMgr::~UnchartedModeNetworkMgr(UnchartedModeNetworkMgr *this)

{
  ~UnchartedModeNetworkMgr(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::GetChallengeStatus(int) */

void UnchartedModeNetworkMgr::GetChallengeStatus(int param_1)

{
  int iVar1;
  UnchartedModeNetworkMgr *this;
  long lVar2;
  int in_w1;
  vector<int,std::allocator<int>> *in_x8;
  undefined8 uVar3;
  undefined4 local_24;
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  this = (UnchartedModeNetworkMgr *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  iVar1 = GetCurrentPrefixWorldIndex(this);
  if (this[9] == (UnchartedModeNetworkMgr)0x0) {
    lVar2 = FUN_03832cfc(*(undefined8 *)(this + 0x48),(long)iVar1);
    uVar3 = *(undefined8 *)(lVar2 + 0x68);
    iVar1 = FUN_03832c90(uVar3,*(undefined8 *)(lVar2 + 0x70));
  }
  else {
    lVar2 = FUN_03832cfc(*(undefined8 *)(this + 0x48),(long)iVar1);
    uVar3 = *(undefined8 *)(lVar2 + 0x80);
    iVar1 = FUN_03832c90(uVar3,*(undefined8 *)(lVar2 + 0x88));
  }
  if (in_w1 < iVar1) {
    lVar2 = FUN_03832d2c(uVar3,(long)in_w1);
    std::vector<int,std::allocator<int>>::vector(in_x8,(vector *)(lVar2 + 0x60));
  }
  else {
    local_24 = 0;
    std::vector<int,std::allocator<int>>::vector
              ((ulong)avStack_20,(int *)0x3,(allocator *)&local_24);
    std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
              ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)in_x8,
               (vector *)avStack_20);
    std::vector<int,std::allocator<int>>::~vector(avStack_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UnchartedModeNetworkMgr::SyncCards(std::vector<int, std::allocator<int> > const&) */

void __thiscall UnchartedModeNetworkMgr::SyncCards(UnchartedModeNetworkMgr *this,vector *param_1)

{
  UnchartedBoostMgr *this_00;
  vector *pvVar1;
  
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x178),param_1);
  this_00 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
  pvVar1 = (vector *)ActivityConfig::GetChristmasAccessoryData((ActivityConfig *)this);
  UnchartedBoostMgr::Sync(this_00,pvVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::RequestMainEntryData(std::function<void ()>) */

void __thiscall
UnchartedModeNetworkMgr::RequestMainEntryData(UnchartedModeNetworkMgr *this,function *param_2)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  undefined1 auStack_28 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[8] == (UnchartedModeNetworkMgr)0x0) {
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
              (avStack_20,&DAT_05751b30,1,auStack_28);
    INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_20,0,true);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_20);
    this[8] = (UnchartedModeNetworkMgr)0x1;
    std::function<void()>::operator=((function<void()> *)(this + 0x18),param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::RequestNetwork() */

void UnchartedModeNetworkMgr::RequestNetwork(void)

{
  NetworkMgr *this;
  INetworkMsgProcess *this_00;
  undefined1 auStack_28 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (NetworkMgr *)NetworkMgr::Instance();
  this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            (avStack_20,&DAT_05751b40,1,auStack_28);
  INetworkMsgProcess::RequestActivityList(this_00,(vector *)avStack_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::GetCurrentWorldFestivalRewardData() */

void UnchartedModeNetworkMgr::GetCurrentWorldFestivalRewardData(void)

{
  UnchartedModeNetworkMgr *in_x0;
  UnchartedModeWorldData *pUVar1;
  vector<UnchartedModeFestivalRewardData,std::allocator<UnchartedModeFestivalRewardData>> *in_x8;
  UnchartedModeWorldData aUStack_120 [176];
  vector avStack_70 [104];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pUVar1 = (UnchartedModeWorldData *)GetCurrentWorldData(in_x0);
  UnchartedModeWorldData::UnchartedModeWorldData(aUStack_120,pUVar1);
  std::vector<UnchartedModeFestivalRewardData,std::allocator<UnchartedModeFestivalRewardData>>::
  vector(in_x8,avStack_70);
  UnchartedModeWorldData::~UnchartedModeWorldData(aUStack_120);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::CheckAnniversaryBonus() */

void __thiscall UnchartedModeNetworkMgr::CheckAnniversaryBonus(UnchartedModeNetworkMgr *this)

{
  undefined8 uVar1;
  UnchartedModeWorldData *pUVar2;
  long lVar3;
  string asStack_128 [8];
  UnchartedModeWorldData aUStack_120 [200];
  undefined8 local_58;
  undefined8 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                     *)this);
  FUN_05475d88(asStack_128,uVar1);
  pUVar2 = (UnchartedModeWorldData *)GetWorldData(this,asStack_128);
  UnchartedModeWorldData::UnchartedModeWorldData(aUStack_120,pUVar2);
  lVar3 = FUN_03832d0c(local_58,local_50);
  UnchartedModeWorldData::~UnchartedModeWorldData(aUStack_120);
  std::string::~string(asStack_128);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3 != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::ClearAnniversaryVersionBonusInfo() */

void __thiscall
UnchartedModeNetworkMgr::ClearAnniversaryVersionBonusInfo(UnchartedModeNetworkMgr *this)

{
  char cVar1;
  PlayerInfo *this_00;
  undefined8 uVar2;
  UnchartedModeWorldData *pUVar3;
  string asStack_130 [8];
  string asStack_128 [8];
  UnchartedModeWorldData aUStack_120 [68];
  int local_dc;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  uVar2 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                     *)this);
  FUN_05475d88(asStack_130,uVar2);
  pUVar3 = (UnchartedModeWorldData *)GetWorldData(this,(string *)(this + 0x10));
  UnchartedModeWorldData::UnchartedModeWorldData(aUStack_120,pUVar3);
  cVar1 = IsUnchartedBirthday(this);
  if (cVar1 == '\0') {
    FUN_05475d88(asStack_128,asStack_130);
    PlayerInfo::ClearUnchartedWorldAnniversaryReward(this_00,asStack_128,local_dc);
    std::string::~string(asStack_128);
  }
  else {
    PlayerInfo::ClearUnchartedAnniveraryReward(this_00,local_dc);
  }
  UnchartedModeWorldData::~UnchartedModeWorldData(aUStack_120);
  std::string::~string(asStack_130);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::GetUnchartedWorldType(std::string const&) */

void __thiscall
UnchartedModeNetworkMgr::GetUnchartedWorldType(UnchartedModeNetworkMgr *this,string *param_1)

{
  UnchartedModeWorldData *pUVar1;
  UnchartedModeWorldData aUStack_120 [228];
  undefined4 local_3c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pUVar1 = (UnchartedModeWorldData *)GetWorldData(this,param_1);
  UnchartedModeWorldData::UnchartedModeWorldData(aUStack_120,pUVar1);
  UnchartedModeWorldData::~UnchartedModeWorldData(aUStack_120);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_3c);
}


/* UnchartedModeNetworkMgr::GetUnchartedWorldType() */

undefined8 __thiscall UnchartedModeNetworkMgr::GetUnchartedWorldType(UnchartedModeNetworkMgr *this)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_0547419c((string *)(this + 0x10));
  if (cVar1 == '\0') {
    uVar2 = GetUnchartedWorldType(this,(string *)(this + 0x10));
    return uVar2;
  }
  return 0xffffffff;
}


/* UnchartedModeNetworkMgr::GetLevelStatus(std::string const&, bool, int) */

undefined8 __thiscall
UnchartedModeNetworkMgr::GetLevelStatus
          (UnchartedModeNetworkMgr *this,string *param_1,bool param_2,int param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  uVar7 = (ulong)param_3;
  cVar1 = IsUnchartedBirthday(this,param_1);
  if ((cVar1 == '\0') && (cVar1 = IsAnniversarySelectLevel(this,param_1), cVar1 == '\0')) {
    iVar2 = GetUnchartedWorldType(this);
    if (iVar2 == 3) {
      uVar8 = *(undefined8 *)(this + 0x48);
      lVar3 = FUN_03832cc0(uVar8,*(undefined8 *)(this + 0x50));
      lVar6 = 0;
      do {
        if (lVar6 == lVar3) {
          return 1;
        }
        lVar4 = FUN_03832cfc(uVar8,lVar6);
        cVar1 = std::operator==((string *)(lVar4 + 0x20),param_1);
        lVar6 = lVar6 + 1;
      } while (cVar1 == '\0');
      if (param_2) {
        if (param_3 < 0) {
          return 1;
        }
        uVar8 = *(undefined8 *)(lVar4 + 0x80);
        uVar5 = FUN_03832c90(uVar8,*(undefined8 *)(lVar4 + 0x88));
      }
      else {
        if (param_3 < 0) {
          return 1;
        }
        uVar8 = *(undefined8 *)(lVar4 + 0x68);
        uVar5 = FUN_03832c90(uVar8,*(undefined8 *)(lVar4 + 0x70));
      }
      if (uVar5 <= uVar7) {
        return 1;
      }
      lVar6 = FUN_03832d2c(uVar8,uVar7);
      uVar9 = *(uint *)(lVar6 + 0x7c);
    }
    else {
      uVar8 = *(undefined8 *)(this + 0x48);
      lVar6 = FUN_03832cc0(uVar8,*(undefined8 *)(this + 0x50));
      if (param_3 == 0) {
        lVar3 = 0;
        uVar9 = 0;
        if (param_2) {
          for (; lVar3 != lVar6; lVar3 = lVar3 + 1) {
            lVar4 = FUN_03832cfc(uVar8,lVar3);
            cVar1 = std::operator==((string *)(lVar4 + 0x20),param_1);
            if (cVar1 != '\0') {
              uVar10 = *(undefined8 *)(lVar4 + 0x80);
              lVar4 = FUN_03832c90(uVar10,*(undefined8 *)(lVar4 + 0x88));
              if (lVar4 != 0) {
                lVar4 = FUN_03832d2c(uVar10,0);
                uVar9 = *(uint *)(lVar4 + 0x7c);
              }
            }
          }
        }
        else {
          while (lVar4 = lVar3, lVar3 != lVar6) {
            while( true ) {
              lVar3 = lVar4 + 1;
              lVar4 = FUN_03832cfc(uVar8,lVar4);
              cVar1 = std::operator==((string *)(lVar4 + 0x20),param_1);
              if (cVar1 == '\0') break;
              lVar4 = FUN_03832d2c(*(undefined8 *)(lVar4 + 0x68),0);
              uVar9 = *(uint *)(lVar4 + 0x7c);
              if (uVar9 == 0) {
                uVar9 = 1;
              }
              lVar4 = lVar3;
              if (lVar3 == lVar6) goto joined_r0x0383b24c;
            }
          }
        }
      }
      else if (param_3 < 0) {
        if (param_2) {
          return 1;
        }
        lVar3 = 0;
        uVar9 = 0;
LAB_0383b580:
        lVar4 = lVar3;
        if (lVar3 != lVar6) {
          while( true ) {
            lVar3 = lVar4 + 1;
            lVar4 = FUN_03832cfc(uVar8,lVar4);
            cVar1 = std::operator==((string *)(lVar4 + 0x20),param_1);
            if (cVar1 == '\0') break;
            uVar10 = *(undefined8 *)(lVar4 + 0x68);
            lVar4 = FUN_03832d2c(uVar10,uVar7);
            uVar9 = *(uint *)(lVar4 + 0x7c);
            if (uVar9 != 0) break;
            lVar4 = FUN_03832d2c(uVar10,(long)(param_3 + -1));
            uVar9 = (uint)(*(int *)(lVar4 + 0x7c) == 2);
            lVar4 = lVar3;
            if (lVar3 == lVar6) goto joined_r0x0383b24c;
          }
          goto LAB_0383b580;
        }
      }
      else if (param_2) {
        lVar3 = 0;
        uVar9 = 0;
LAB_0383b4fc:
        lVar4 = lVar3;
        if (lVar3 != lVar6) {
          while( true ) {
            lVar3 = lVar4 + 1;
            lVar4 = FUN_03832cfc(uVar8,lVar4);
            cVar1 = std::operator==((string *)(lVar4 + 0x20),param_1);
            if (cVar1 == '\0') break;
            uVar10 = *(undefined8 *)(lVar4 + 0x80);
            uVar5 = FUN_03832c90(uVar10,*(undefined8 *)(lVar4 + 0x88));
            if (uVar5 <= uVar7) break;
            lVar4 = FUN_03832d2c(uVar10,uVar7);
            uVar9 = *(uint *)(lVar4 + 0x7c);
            lVar4 = lVar3;
            if (lVar3 == lVar6) goto joined_r0x0383b24c;
          }
          goto LAB_0383b4fc;
        }
      }
      else {
        lVar3 = 0;
        uVar9 = 0;
LAB_0383b350:
        lVar4 = lVar3;
        if (lVar3 != lVar6) {
          while( true ) {
            lVar3 = lVar4 + 1;
            lVar4 = FUN_03832cfc(uVar8,lVar4);
            cVar1 = std::operator==((string *)(lVar4 + 0x20),param_1);
            if (cVar1 == '\0') break;
            uVar10 = *(undefined8 *)(lVar4 + 0x68);
            lVar4 = FUN_03832d2c(uVar10,uVar7);
            uVar9 = *(uint *)(lVar4 + 0x7c);
            if (uVar9 != 0) break;
            lVar4 = FUN_03832d2c(uVar10,(long)(param_3 + -1));
            uVar9 = (uint)(*(int *)(lVar4 + 0x7c) == 2);
            lVar4 = lVar3;
            if (lVar3 == lVar6) goto joined_r0x0383b24c;
          }
          goto LAB_0383b350;
        }
      }
    }
  }
  else {
    uVar8 = *(undefined8 *)(this + 0x48);
    lVar6 = 0;
    uVar9 = 0;
    lVar3 = FUN_03832cc0(uVar8,*(undefined8 *)(this + 0x50));
    if (lVar3 != 0) {
      do {
        lVar4 = FUN_03832cfc(uVar8,lVar6);
        cVar1 = std::operator==((string *)(lVar4 + 0x20),param_1);
        if ((cVar1 != '\0') && (-1 < param_3)) {
          uVar10 = *(undefined8 *)(lVar4 + 0x80);
          uVar7 = FUN_03832c90(uVar10,*(undefined8 *)(lVar4 + 0x88));
          if ((ulong)(long)param_3 < uVar7) {
            lVar4 = FUN_03832d2c(uVar10,(long)param_3);
            uVar9 = *(uint *)(lVar4 + 0x7c);
          }
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != lVar3);
    }
  }
joined_r0x0383b24c:
  if (uVar9 == 1) {
    return 2;
  }
  if (uVar9 != 2) {
    return 1;
  }
  return 3;
}


/* UnchartedModeNetworkMgr::IsHardLevelUnlocked(std::string const&) */

bool __thiscall
UnchartedModeNetworkMgr::IsHardLevelUnlocked(UnchartedModeNetworkMgr *this,string *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  iVar2 = GetUnchartedWorldType(this,param_1);
  if (iVar2 == 3) {
    uVar6 = *(undefined8 *)(this + 0x48);
    lVar3 = FUN_03832cc0(uVar6,*(undefined8 *)(this + 0x50));
    lVar5 = 0;
    while (lVar5 != lVar3) {
      lVar4 = FUN_03832cfc(uVar6,lVar5);
      cVar1 = std::operator==((string *)(lVar4 + 0x20),param_1);
      lVar5 = lVar5 + 1;
      if (cVar1 != '\0') {
        lVar5 = FUN_03832d2c(*(undefined8 *)(lVar4 + 0x80),0);
        return *(int *)(lVar5 + 0x7c) != 0;
      }
    }
  }
  else {
    uVar6 = *(undefined8 *)(this + 0x48);
    lVar3 = FUN_03832cc0(uVar6,*(undefined8 *)(this + 0x50));
    lVar5 = 0;
    do {
      if (lVar5 == lVar3) {
        return false;
      }
      lVar4 = FUN_03832cfc(uVar6,lVar5);
      cVar1 = std::operator==((string *)(lVar4 + 0x20),param_1);
      lVar5 = lVar5 + 1;
    } while (cVar1 == '\0');
    uVar6 = *(undefined8 *)(lVar4 + 0x68);
    lVar3 = FUN_03832c90(uVar6,*(undefined8 *)(lVar4 + 0x70));
    lVar5 = 0;
    do {
      if (lVar5 == lVar3) {
        return (bool)cVar1;
      }
      lVar4 = FUN_03832d2c(uVar6,lVar5);
      lVar5 = lVar5 + 1;
    } while (*(int *)(lVar4 + 0x7c) == 2);
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::GetSpringFestival2024CurrentLevelIndex() */

void __thiscall
UnchartedModeNetworkMgr::GetSpringFestival2024CurrentLevelIndex(UnchartedModeNetworkMgr *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  UnchartedModeWorldData *pUVar5;
  int iVar6;
  string asStack_128 [8];
  UnchartedModeWorldData aUStack_120 [104];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                     *)this);
  FUN_05475d88(asStack_128,uVar4);
  bVar1 = (bool)Sexy::FilesystemSaveGameContext::HasError((FilesystemSaveGameContext *)this);
  pUVar5 = (UnchartedModeWorldData *)GetCurrentWorldData(this);
  UnchartedModeWorldData::UnchartedModeWorldData(aUStack_120,pUVar5);
  if (bVar1 == false) {
    iVar2 = FUN_03832c90(local_b8,local_b0);
  }
  else {
    iVar2 = FUN_03832c90(local_a0,local_98);
  }
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = GetLevelStatus(this,asStack_128,bVar1,iVar6);
      if (iVar3 == 2) goto LAB_0383b81c;
      iVar6 = iVar6 + 1;
    } while (iVar6 != iVar2);
  }
  iVar6 = 0;
LAB_0383b81c:
  UnchartedModeWorldData::~UnchartedModeWorldData(aUStack_120);
  std::string::~string(asStack_128);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar6);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::GetAnniversaryHeadshotBonusId() */

void __thiscall
UnchartedModeNetworkMgr::GetAnniversaryHeadshotBonusId(UnchartedModeNetworkMgr *this)

{
  UnchartedModeWorldData *pUVar1;
  UnchartedModeWorldData aUStack_120 [224];
  undefined4 local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pUVar1 = (UnchartedModeWorldData *)GetCurrentWorldData(this);
  UnchartedModeWorldData::UnchartedModeWorldData(aUStack_120,pUVar1);
  UnchartedModeWorldData::~UnchartedModeWorldData(aUStack_120);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_40);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::IsTaskIdValidInCurrentLevel(int) */

void __thiscall
UnchartedModeNetworkMgr::IsTaskIdValidInCurrentLevel(UnchartedModeNetworkMgr *this,int param_1)

{
  bool bVar1;
  int iVar2;
  UnchartedModeNetworkMgr *this_00;
  UnchartedModeWorldData *pUVar3;
  vector *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_154 [3];
  undefined8 local_148;
  undefined8 local_140;
  vector<UnchartedBirthdayTaskInfo,std::allocator<UnchartedBirthdayTaskInfo>> avStack_138 [24];
  UnchartedModeWorldData aUStack_120 [80];
  undefined8 local_d0;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_154[0] = param_1;
  this_00 = (UnchartedModeNetworkMgr *)
            Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  pUVar3 = (UnchartedModeWorldData *)GetCurrentWorldData(this_00);
  UnchartedModeWorldData::UnchartedModeWorldData(aUStack_120,pUVar3);
  iVar2 = OakArrowUI::GetArrowCount((OakArrowUI *)this);
  pvVar4 = (vector *)FUN_03832d38(local_d0,(long)iVar2);
  std::vector<UnchartedBirthdayTaskInfo,std::allocator<UnchartedBirthdayTaskInfo>>::vector
            (avStack_138,pvVar4);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_138);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_138);
  local_148 = FUN_03839bfc(uVar5,uVar6,local_154);
  local_140 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_138);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_148,(__normal_iterator *)&local_140);
  std::vector<UnchartedBirthdayTaskInfo,std::allocator<UnchartedBirthdayTaskInfo>>::~vector
            (avStack_138);
  UnchartedModeWorldData::~UnchartedModeWorldData(aUStack_120);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::CheckHasAvailableRewards(std::string) */

void __thiscall
UnchartedModeNetworkMgr::CheckHasAvailableRewards(UnchartedModeNetworkMgr *this,string *param_2)

{
  UnchartedModeWorldData *pUVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  UnchartedModeWorldData aUStack_120 [24];
  int local_108;
  undefined8 local_88;
  undefined8 local_80;
  long local_8;
  
  lVar4 = 0;
  uVar5 = 0;
  local_8 = ___stack_chk_guard;
  pUVar1 = (UnchartedModeWorldData *)GetWorldData(this,param_2);
  UnchartedModeWorldData::UnchartedModeWorldData(aUStack_120,pUVar1);
  lVar2 = FUN_03832d60(local_88,local_80);
  if (lVar2 != 0) {
    do {
      lVar3 = FUN_03832d88(local_88,lVar4);
      if ((*(int *)(lVar3 + 8) != 1) && (*(int *)(lVar3 + 0xc) <= local_108)) {
        uVar5 = 1;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != lVar2);
  }
  UnchartedModeWorldData::~UnchartedModeWorldData(aUStack_120);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::GetLevelThemes(int, bool) */

void UnchartedModeNetworkMgr::GetLevelThemes(int param_1,bool param_2)

{
  UnchartedModeWorldData *pUVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  char in_w2;
  vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *in_x8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_138 [24];
  UnchartedModeWorldData aUStack_120 [104];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pUVar1 = (UnchartedModeWorldData *)
           GetCurrentWorldData((UnchartedModeNetworkMgr *)(ulong)(uint)param_1);
  UnchartedModeWorldData::UnchartedModeWorldData(aUStack_120,pUVar1);
  if (in_w2 == '\0') {
    uVar2 = FUN_03832c90(local_b8,local_b0);
    for (uVar4 = 0; uVar4 != uVar2; uVar4 = uVar4 + 1) {
      if (uVar4 == param_2) goto LAB_0383bbac;
    }
  }
  else {
    uVar2 = FUN_03832c90(local_a0,local_98);
    for (uVar4 = 0; uVar4 != uVar2; uVar4 = uVar4 + 1) {
      local_b8 = local_a0;
      if (uVar4 == param_2) goto LAB_0383bbac;
    }
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_138);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            (in_x8,(vector *)avStack_138);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_138);
LAB_0383bb44:
  UnchartedModeWorldData::~UnchartedModeWorldData(aUStack_120);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_0383bbac:
  lVar3 = FUN_03832d2c(local_b8);
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)in_x8,(vector *)(lVar3 + 0x88));
  goto LAB_0383bb44;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::GetBoostData(std::string, bool) */

void UnchartedModeNetworkMgr::GetBoostData
               (UnchartedModeBoostData *param_1,UnchartedModeNetworkMgr *param_2,string *param_3,
               char param_4)

{
  UnchartedModeWorldData *pUVar1;
  long lVar2;
  UnchartedModeBoostData *pUVar3;
  IteratorStorage aIStack_150 [48];
  UnchartedModeWorldData aUStack_120 [256];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pUVar1 = (UnchartedModeWorldData *)GetWorldData(param_2,param_3);
  UnchartedModeWorldData::UnchartedModeWorldData(aUStack_120,pUVar1);
  Sexy::RtDbTable::IteratorStorage::IteratorStorage(aIStack_150);
  lVar2 = FUN_03832d90(local_20,local_18);
  if (lVar2 != 0) {
    if (param_4 == '\0') {
      pUVar3 = (UnchartedModeBoostData *)FUN_03832dc0(local_20,0);
      UnchartedModeBoostData::UnchartedModeBoostData(param_1,pUVar3);
      goto LAB_0383bc4c;
    }
    if (lVar2 != 1) {
      pUVar3 = (UnchartedModeBoostData *)FUN_03832dc0(local_20,1);
      UnchartedModeBoostData::UnchartedModeBoostData(param_1,pUVar3);
      goto LAB_0383bc4c;
    }
  }
  ShowZombieTitles::ShowZombieTitles((ShowZombieTitles *)param_1,(ShowZombieTitles *)aIStack_150);
LAB_0383bc4c:
  S2C_PlayerGetAvatarInfo::~S2C_PlayerGetAvatarInfo((S2C_PlayerGetAvatarInfo *)aIStack_150);
  UnchartedModeWorldData::~UnchartedModeWorldData(aUStack_120);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::GetCurrentLeftCardList() */

void UnchartedModeNetworkMgr::GetCurrentLeftCardList(void)

{
  undefined4 uVar1;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *in_x0;
  undefined8 uVar2;
  undefined8 uVar3;
  vector<int,std::allocator<int>> *in_x8;
  string asStack_40 [8];
  S2C_PlayerGetAvatarInfo aSStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  uVar3 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(in_x0);
  FUN_05475d88(asStack_40,uVar3);
  uVar1 = Sexy::FilesystemSaveGameContext::HasError((FilesystemSaveGameContext *)in_x0);
  GetBoostData(aSStack_38,uVar2,asStack_40,uVar1);
  std::string::~string(asStack_40);
  std::vector<int,std::allocator<int>>::vector(in_x8,(vector *)aSStack_38);
  S2C_PlayerGetAvatarInfo::~S2C_PlayerGetAvatarInfo(aSStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::SetBoardRecord(std::string, bool, UnchartedModeBoardRecord) */

void __thiscall
UnchartedModeNetworkMgr::SetBoardRecord
          (UnchartedModeNetworkMgr *this,string *param_2,char param_3,
          UnchartedModeBoardRecord *param_4)

{
  char cVar1;
  UnchartedModeWorldData *pUVar2;
  long lVar3;
  long lVar4;
  UnchartedModeBoardRecord *pUVar5;
  long lVar6;
  undefined8 uVar7;
  UnchartedModeBoardRecord aUStack_168 [72];
  UnchartedModeWorldData aUStack_120 [280];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = 0;
  pUVar2 = (UnchartedModeWorldData *)GetWorldData(this,param_2);
  UnchartedModeWorldData::UnchartedModeWorldData(aUStack_120,pUVar2);
  uVar7 = *(undefined8 *)(this + 0x48);
  lVar3 = FUN_03832cc0(uVar7,*(undefined8 *)(this + 0x50));
  do {
    if (lVar6 == lVar3) {
LAB_0383be08:
      UnchartedModeWorldData::~UnchartedModeWorldData(aUStack_120);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar4 = FUN_03832cfc(uVar7,lVar6);
    cVar1 = std::operator==((string *)(lVar4 + 0x20),param_2);
    if (cVar1 != '\0') {
      pUVar5 = (UnchartedModeBoardRecord *)
               FUN_03832e08(*(undefined8 *)(lVar4 + 0xe8),param_3 != '\0');
      UnchartedModeBoardRecord::UnchartedModeBoardRecord(aUStack_168,param_4);
      UnchartedModeBoardRecord::Copy(pUVar5,aUStack_168);
      UnchartedModeBoardRecord::~UnchartedModeBoardRecord(aUStack_168);
      goto LAB_0383be08;
    }
    lVar6 = lVar6 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::HasLockedHardLevel() */

void __thiscall UnchartedModeNetworkMgr::HasLockedHardLevel(UnchartedModeNetworkMgr *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar5 = *(undefined8 *)(this + 0x48);
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_03832cc0(uVar5,*(undefined8 *)(this + 0x50));
  uVar4 = 0;
  if (lVar1 != 0) {
    lVar1 = FUN_03832cfc(uVar5);
    std::vector<UnchartedModeLevelData,std::allocator<UnchartedModeLevelData>>::vector
              ((vector<UnchartedModeLevelData,std::allocator<UnchartedModeLevelData>> *)&local_20,
               (vector *)(lVar1 + 0x80));
    lVar2 = FUN_03832c90(local_20,local_18);
    lVar1 = 0;
    do {
      if (lVar1 == lVar2) {
        std::vector<UnchartedModeLevelData,std::allocator<UnchartedModeLevelData>>::~vector
                  ((vector<UnchartedModeLevelData,std::allocator<UnchartedModeLevelData>> *)
                   &local_20);
        uVar4 = 0;
        goto LAB_0383bec0;
      }
      lVar3 = FUN_03832d2c(local_20,lVar1);
      lVar1 = lVar1 + 1;
    } while (*(int *)(lVar3 + 0x7c) != 0);
    std::vector<UnchartedModeLevelData,std::allocator<UnchartedModeLevelData>>::~vector
              ((vector<UnchartedModeLevelData,std::allocator<UnchartedModeLevelData>> *)&local_20);
    uVar4 = 1;
  }
LAB_0383bec0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::CheckShowTips() */

void __thiscall UnchartedModeNetworkMgr::CheckShowTips(UnchartedModeNetworkMgr *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)(this + 0x40);
  iVar2 = GetCurrentPrefixWorldIndex(this);
  uVar7 = *(undefined8 *)(this + 0x48);
  lVar3 = FUN_03832cc0(uVar7,*(undefined8 *)(this + 0x50));
  uVar6 = 0;
  if (lVar3 != 0) {
    lVar3 = 0;
    lVar4 = FUN_03832cfc(uVar7,(long)iVar2,0);
    std::vector<UnchartedModeLevelData,std::allocator<UnchartedModeLevelData>>::vector
              ((vector<UnchartedModeLevelData,std::allocator<UnchartedModeLevelData>> *)&local_38,
               (vector *)(lVar4 + 0x80));
    lVar4 = FUN_03832c90(local_38,local_30);
    if (iVar1 < 1) {
      if (lVar4 != 0) {
        do {
          lVar5 = FUN_03832d2c(local_38,lVar3);
          if (*(int *)(lVar5 + 0x7c) == 1) goto LAB_0383c048;
          lVar3 = lVar3 + 1;
        } while (lVar3 != lVar4);
      }
LAB_0383c064:
      lVar3 = FUN_03832cfc(*(undefined8 *)(this + 0x48),(long)iVar2);
      std::vector<UnchartedModeLevelData,std::allocator<UnchartedModeLevelData>>::vector
                ((vector<UnchartedModeLevelData,std::allocator<UnchartedModeLevelData>> *)&local_20,
                 (vector *)(lVar3 + 0x68));
      lVar4 = FUN_03832c90(local_20,local_18);
      lVar3 = 0;
      do {
        if (lVar3 == lVar4) {
          std::vector<UnchartedModeLevelData,std::allocator<UnchartedModeLevelData>>::~vector
                    ((vector<UnchartedModeLevelData,std::allocator<UnchartedModeLevelData>> *)
                     &local_20);
          std::vector<UnchartedModeLevelData,std::allocator<UnchartedModeLevelData>>::~vector
                    ((vector<UnchartedModeLevelData,std::allocator<UnchartedModeLevelData>> *)
                     &local_38);
          uVar6 = 0;
          goto LAB_0383bfb8;
        }
        lVar5 = FUN_03832d2c(local_20,lVar3);
        lVar3 = lVar3 + 1;
      } while (*(int *)(lVar5 + 0x7c) != 1);
      std::vector<UnchartedModeLevelData,std::allocator<UnchartedModeLevelData>>::~vector
                ((vector<UnchartedModeLevelData,std::allocator<UnchartedModeLevelData>> *)&local_20)
      ;
    }
    else {
      do {
        if (lVar3 == lVar4) goto LAB_0383c064;
        lVar5 = FUN_03832d2c(local_38,lVar3);
      } while ((*(int *)(lVar5 + 0x7c) != 0) && (lVar3 = lVar3 + 1, *(int *)(lVar5 + 0x7c) != 1));
    }
LAB_0383c048:
    std::vector<UnchartedModeLevelData,std::allocator<UnchartedModeLevelData>>::~vector
              ((vector<UnchartedModeLevelData,std::allocator<UnchartedModeLevelData>> *)&local_38);
    uVar6 = 1;
  }
LAB_0383bfb8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


/* UnchartedModeNetworkMgr::CheckShowNotice() */

undefined8 __thiscall UnchartedModeNetworkMgr::CheckShowNotice(UnchartedModeNetworkMgr *this)

{
  int iVar1;
  int iVar2;
  PlayerInfo *this_00;
  undefined8 uVar3;
  
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  iVar1 = PlayerInfo::GetPVZ2UnchartedModeWorldCount(this_00);
  iVar2 = FUN_03832cc0(*(undefined8 *)(this + 0x48),*(undefined8 *)(this + 0x50));
  if (iVar1 < iVar2) {
    return 1;
  }
  uVar3 = CheckShowTips(this);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::GetLevelBonus(bool, int) */

void UnchartedModeNetworkMgr::GetLevelBonus(bool param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  vector *pvVar5;
  int in_w2;
  vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *in_x8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = GetCurrentPrefixWorldIndex((UnchartedModeNetworkMgr *)(ulong)param_1);
  uVar2 = *(undefined8 *)((UnchartedModeNetworkMgr *)(ulong)param_1 + 0x48);
  if ((param_2 & 0xffU) == 0) {
    lVar3 = FUN_03832cfc(uVar2,(long)iVar1);
    uVar2 = *(undefined8 *)(lVar3 + 0x68);
    uVar4 = FUN_03832c90(uVar2,*(undefined8 *)(lVar3 + 0x70));
  }
  else {
    lVar3 = FUN_03832cfc(uVar2,(long)iVar1);
    uVar2 = *(undefined8 *)(lVar3 + 0x80);
    uVar4 = FUN_03832c90(uVar2,*(undefined8 *)(lVar3 + 0x88));
  }
  if ((ulong)(long)in_w2 < uVar4) {
    pvVar5 = (vector *)FUN_03832d2c(uVar2,(long)in_w2);
    std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::vector
              ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
               in_x8,pvVar5);
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
              (in_x8,(vector *)avStack_20);
    std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::~vector
              ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
               avStack_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::GetLevelPreviewBonus(bool, int) */

void UnchartedModeNetworkMgr::GetLevelPreviewBonus(bool param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int in_w2;
  vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *in_x8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = GetCurrentPrefixWorldIndex((UnchartedModeNetworkMgr *)(ulong)param_1);
  uVar2 = *(undefined8 *)((UnchartedModeNetworkMgr *)(ulong)param_1 + 0x48);
  if ((param_2 & 0xffU) == 0) {
    lVar3 = FUN_03832cfc(uVar2,(long)iVar1);
    uVar2 = *(undefined8 *)(lVar3 + 0x68);
    uVar4 = FUN_03832c90(uVar2,*(undefined8 *)(lVar3 + 0x70));
  }
  else {
    lVar3 = FUN_03832cfc(uVar2,(long)iVar1);
    uVar2 = *(undefined8 *)(lVar3 + 0x80);
    uVar4 = FUN_03832c90(uVar2,*(undefined8 *)(lVar3 + 0x88));
  }
  if ((ulong)(long)in_w2 < uVar4) {
    lVar3 = FUN_03832d2c(uVar2,(long)in_w2);
    std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::vector
              ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
               in_x8,(vector *)(lVar3 + 0x48));
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
              (in_x8,(vector *)avStack_20);
    std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::~vector
              ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
               avStack_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::GetLevelFirstRewardBonus(bool, int) */

void UnchartedModeNetworkMgr::GetLevelFirstRewardBonus(bool param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int in_w2;
  vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *in_x8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = GetCurrentPrefixWorldIndex((UnchartedModeNetworkMgr *)(ulong)param_1);
  uVar2 = *(undefined8 *)((UnchartedModeNetworkMgr *)(ulong)param_1 + 0x48);
  if ((param_2 & 0xffU) == 0) {
    lVar3 = FUN_03832cfc(uVar2,(long)iVar1);
    uVar2 = *(undefined8 *)(lVar3 + 0x68);
    uVar4 = FUN_03832c90(uVar2,*(undefined8 *)(lVar3 + 0x70));
  }
  else {
    lVar3 = FUN_03832cfc(uVar2,(long)iVar1);
    uVar2 = *(undefined8 *)(lVar3 + 0x80);
    uVar4 = FUN_03832c90(uVar2,*(undefined8 *)(lVar3 + 0x88));
  }
  if ((ulong)(long)in_w2 < uVar4) {
    lVar3 = FUN_03832d2c(uVar2,(long)in_w2);
    std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::vector
              ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
               in_x8,(vector *)(lVar3 + 0x18));
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
              (in_x8,(vector *)avStack_20);
    std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::~vector
              ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
               avStack_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::ConfirmUnlock(UIMessageBox*, int) */

void __thiscall
UnchartedModeNetworkMgr::ConfirmUnlock
          (UnchartedModeNetworkMgr *this,UIMessageBox *param_1,int param_2)

{
  undefined8 uVar1;
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2656];
  string asStack_288 [640];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    std::string::string(asStack_ce8,"world");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
    thunk_FUN_05475e00(uVar1,this + 0x10);
    std::string::~string(asStack_ce8);
    nop();
    std::string::string(asStack_d40,"level");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 400));
    FUN_05474278(uVar1,asStack_ce8);
    std::string::~string(asStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)asStack_ce8);
    FUN_03833b20(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_00,asStack_288,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)asStack_ce8);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::syncMainEntryInfo() */

void __thiscall UnchartedModeNetworkMgr::syncMainEntryInfo(UnchartedModeNetworkMgr *this)

{
  int iVar1;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar1);
  if (local_70 != '\0') {
    ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0x38));
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
UnchartedModeNetworkMgr::onNotifyRefreshActivityList
          (UnchartedModeNetworkMgr *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (this[8] != (UnchartedModeNetworkMgr)0x0)) {
    local_1c = 0x2a61;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      syncMainEntryInfo(this);
      NetworkHelper::MakeServerPlantBanList(0x2a61,this + 0x1a8);
    }
    this[8] = (UnchartedModeNetworkMgr)0x0;
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x18));
    if (bVar1) {
      std::function<void()>::operator()((function<void()> *)(this + 0x18));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::RequestEndPlayData(PVZ2UnchartedModeEndPlayParamData) */

void __thiscall
UnchartedModeNetworkMgr::RequestEndPlayData(UnchartedModeNetworkMgr *this,byte *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  string *this_00;
  undefined8 uVar6;
  string *psVar7;
  char *pcVar8;
  undefined8 uVar9;
  DNetwork *this_01;
  UnchartedModeBoardRecord *pUVar10;
  UINewPVPTopZombieQueue *this_02;
  long lVar11;
  NameMapperBase *pNVar12;
  RtWeakPtr *pRVar13;
  Board *this_03;
  int local_da4;
  string asStack_da0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_d98 [8];
  string asStack_d90 [8];
  undefined4 local_d88 [2];
  function<bool(Sexy::Touch_const&)> afStack_d80 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d60 [48];
  string asStack_d30 [16];
  undefined4 local_d20;
  vector<int,std::allocator<int>> avStack_d18 [24];
  vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>> avStack_d00 [24];
  string asStack_ce8 [16];
  undefined4 local_cd8;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_cb8 [2616];
  string asStack_280 [632];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d60);
  cVar1 = PVZ2UnchartedModeUtils::IsUnchartedBirthday();
  cVar2 = PVZ2UnchartedModeUtils::IsAnniversarySelectLevel();
  cVar3 = PVZ2UnchartedModeUtils::IsNormalSelectLevelWithHardmode();
  if (cVar1 == '\0') {
    if ((cVar3 == '\0') && (cVar2 == '\0')) {
      psVar7 = asStack_d30;
      std::string::string(asStack_ce8,"type");
      this_00 = (string *)
                std::
                map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                              *)amStack_d60,asStack_ce8);
      if (*param_2 == 0) {
        pcVar8 = "0";
      }
      else {
        pcVar8 = "1";
      }
    }
    else {
      psVar7 = asStack_d30;
      std::string::string(asStack_ce8,"type");
      this_00 = (string *)
                std::
                map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                              *)amStack_d60,asStack_ce8);
      if (*param_2 == 0) {
        pcVar8 = "3";
      }
      else {
        pcVar8 = "4";
      }
    }
  }
  else {
    psVar7 = asStack_d30;
    std::string::string(asStack_ce8,"type");
    this_00 = (string *)
              std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d60,asStack_ce8);
    pcVar8 = "2";
  }
  std::string::append(this_00,pcVar8,(size_t)psVar7);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_ce8,"world");
  uVar6 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d60,asStack_ce8);
  thunk_FUN_05475e00(uVar6,param_2 + 8);
  std::string::~string(asStack_ce8);
  nop();
  pRVar13 = (RtWeakPtr *)local_d88;
  std::string::string(asStack_d30,"level");
  psVar7 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d60,asStack_d30);
  DString::DString((DString *)asStack_ce8,*(int *)(param_2 + 0x10));
  pcVar8 = (char *)DString::c_str((DString *)asStack_ce8);
  std::string::append(psVar7,pcVar8,(size_t)pRVar13);
  DString::~DString((DString *)asStack_ce8);
  std::string::~string(asStack_d30);
  nop();
  PVZ2UnchartedModeUtils::GetBirthdayCurrentLevelSelectedStars();
  if ((cVar2 == '\0') && (cVar1 == '\0')) {
    std::string::string(asStack_ce8,"tgt");
    uVar6 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d60,asStack_ce8);
    thunk_FUN_05475e00(uVar6,param_2 + 0x18);
    std::string::~string(asStack_ce8);
    nop();
  }
  else {
    pRVar13 = (RtWeakPtr *)local_d88;
    std::string::string(asStack_d30,"tgt");
    psVar7 = (string *)
             std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)amStack_d60,asStack_d30);
    iVar5 = PVZ2UnchartedModeUtils::GetBirthdayCurrentLevelSelectedStars();
    DString::DString((DString *)asStack_ce8,iVar5);
    pcVar8 = (char *)DString::c_str((DString *)asStack_ce8);
    std::string::append(psVar7,pcVar8,(size_t)pRVar13);
    DString::~DString((DString *)asStack_ce8);
    std::string::~string(asStack_d30);
    nop();
  }
  std::string::string(asStack_ce8,"win");
  psVar7 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d60,asStack_ce8);
  if (param_2[0x20] == 0) {
    std::string::append(psVar7,"0",0x5594000);
    std::string::~string(asStack_ce8);
    nop();
    iVar5 = PVZ2UnchartedModeUtils::GetUnchartedWorldType();
  }
  else {
    std::string::append(psVar7,"1",0x5594000);
    std::string::~string(asStack_ce8);
    nop();
    iVar5 = PVZ2UnchartedModeUtils::GetUnchartedWorldType();
  }
  if (iVar5 == 3) {
    UnchartedModeBoardRecord::UnchartedModeBoardRecord((UnchartedModeBoardRecord *)asStack_d30);
    pUVar10 = (UnchartedModeBoardRecord *)PVZ2UnchartedModeUtils::GetCurrentBoardRecord();
    UnchartedModeBoardRecord::UnchartedModeBoardRecord
              ((UnchartedModeBoardRecord *)asStack_ce8,pUVar10);
    if (param_2[0x20] == 0) {
      this_03 = *(Board **)(gLawnApp + 0x9f0);
    }
    else {
      this_03 = *(Board **)(gLawnApp + 0x9f0);
      local_cd8 = Board::GetSunCurrency(this_03);
    }
    local_d20 = local_cd8;
    this_02 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(this_03);
    std::string::string(asStack_da0,"");
    nop();
    if (this_02 != (UINewPVPTopZombieQueue *)0x0) {
      for (iVar5 = 0; cVar1 = FUN_03832700(this_02[0x199]), iVar5 < cVar1; iVar5 = iVar5 + 1) {
        UINewPVPTopZombieQueue::gettItem(this_02,iVar5);
        bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_d98);
        if ((bVar4) &&
           (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_d98), cVar1 != '\0')) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_d98);
          SeedPacket::GetPlantType();
          bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)local_d88);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)local_d88);
          if (bVar4) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_d98);
            SeedPacket::GetPlantType();
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)local_d88);
            FUN_05475d88(asStack_d90,lVar11 + 8);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_d88);
            bVar4 = std::operator!=(asStack_d90,asStack_da0);
            if (bVar4) {
              pNVar12 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
              local_d88[0] = NameMapperBase::GetIdForName(pNVar12,asStack_d90);
              std::vector<int,std::allocator<int>>::push_back(avStack_d18,(int *)local_d88);
            }
            else {
              pNVar12 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
              std::string::string((string *)local_d88,"imitater");
              local_da4 = NameMapperBase::GetIdForName(pNVar12,(string *)local_d88);
              std::string::~string((string *)local_d88);
              nop();
              std::vector<int,std::allocator<int>>::push_back(avStack_d18,&local_da4);
            }
            thunk_FUN_05475e00(asStack_da0,asStack_d90);
            std::string::~string(asStack_d90);
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_d98);
      }
    }
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(avStack_cb8);
    uVar9 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(avStack_cb8);
    std::vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>>::
    assign<__gnu_cxx::__normal_iterator<UnchartedModePlantNumData*,std::vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>>>,void>
              (avStack_d00,uVar6,uVar9);
    std::string::string(asStack_d90,"record");
    uVar6 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d60,asStack_d90);
    PlantPacketJsonConverter::SerializeObj();
    FUN_05474278(uVar6,(RtWeakPtr *)local_d88);
    std::string::~string((string *)local_d88);
    std::string::~string(asStack_d90);
    nop();
    std::string::~string(asStack_da0);
    UnchartedModeBoardRecord::~UnchartedModeBoardRecord((UnchartedModeBoardRecord *)asStack_ce8);
    UnchartedModeBoardRecord::~UnchartedModeBoardRecord((UnchartedModeBoardRecord *)asStack_d30);
  }
  uVar6 = FUN_0547429c(param_2 + 8);
  uVar9 = FUN_0547429c(param_2 + 0x18);
  Sexy::OutputDebugStrF
            ((wchar_t *)
             "UnchartedModeNetworkMgr::RequestEndPlayData type = %d, world = %s, level = %d, tgt = %s"
             ,(ulong)*param_2,uVar6,(ulong)*(uint *)(param_2 + 0x10),uVar9);
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03833ac4(afStack_d80,this);
  std::string::string(asStack_d30,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_280,(map *)amStack_d60,30.0,(function *)afStack_d80,true,true,
             asStack_d30,5);
  std::string::~string(asStack_d30);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d80);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeNetworkMgr::ShowAnniversaryBonus() */

void __thiscall UnchartedModeNetworkMgr::ShowAnniversaryBonus(UnchartedModeNetworkMgr *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  PlayerInfo *this_00;
  undefined8 uVar4;
  UnchartedModeWorldData *pUVar5;
  int *piVar6;
  ulong uVar7;
  CommonUIManager *pCVar8;
  char *pcVar9;
  TGALogMgr *pTVar10;
  GAME_ITEM_INFO *__n;
  ulong uVar11;
  string asStack_408 [8];
  string asStack_400 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_3f8 [24];
  Delegate0 aDStack_3e0 [48];
  int local_3b0;
  int local_3ac;
  undefined4 local_3a8 [10];
  undefined1 auStack_380 [96];
  GAME_ITEM_INFO aGStack_320 [144];
  string asStack_290 [200];
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_3f8);
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  std::string::string(asStack_290,"");
  FUN_05462980(auStack_178,asStack_290);
  std::string::~string(asStack_290);
  nop();
  uVar4 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                     *)this);
  FUN_05475d88(asStack_408,uVar4);
  pUVar5 = (UnchartedModeWorldData *)GetWorldData(this,asStack_408);
  UnchartedModeWorldData::UnchartedModeWorldData((UnchartedModeWorldData *)asStack_290,pUVar5);
  uVar11 = 0;
  while( true ) {
    uVar4 = local_1c8;
    uVar7 = FUN_03832d0c(local_1c8,local_1c0);
    if (uVar7 <= uVar11) break;
    local_3a8[0] = 0;
    piVar6 = (int *)FUN_03832d20(uVar4,uVar11);
    local_3b0 = *piVar6;
    local_3ac = piVar6[1];
    ProfileChangeItemAmount(local_3b0,local_3ac,false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_320);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_3f8,
               (LotteryBonus *)&local_3b0);
    uVar4 = FUN_0546065c(auStack_168,local_3b0);
    uVar4 = FUN_054603b8(uVar4,&DAT_05593348);
    uVar4 = FUN_0546065c(uVar4,local_3ac);
    FUN_054603b8(uVar4,&DAT_05594620);
    uVar11 = uVar11 + 1;
  }
  pCVar8 = (CommonUIManager *)Sexy::LazySingleton<CommonUIManager>::GetInstance();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aGStack_320);
  Sexy::Delegate0::Delegate0(aDStack_3e0,(DummyInit *)0x0);
  __n = aGStack_320;
  CommonUIManager::ShowBonus(pCVar8,avStack_3f8,aGStack_320,aDStack_3e0);
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)aGStack_320);
  TGAUnchartedData::TGAUnchartedData((TGAUnchartedData *)&local_3b0);
  DString::DString((DString *)aGStack_320,8);
  pcVar9 = (char *)DString::c_str((DString *)aGStack_320);
  std::string::append((string *)&local_3b0,pcVar9,(size_t)__n);
  DString::~DString((DString *)aGStack_320);
  iVar3 = PVZ2UnchartedModeUtils::GetCurrentStarCount();
  DString::DString((DString *)aGStack_320,iVar3);
  pcVar9 = (char *)DString::c_str((DString *)aGStack_320);
  std::string::append((string *)local_3a8,pcVar9,(size_t)__n);
  DString::~DString((DString *)aGStack_320);
  FUN_05462824(aGStack_320,auStack_178);
  FUN_05474278(auStack_380,aGStack_320);
  std::string::~string((string *)aGStack_320);
  pTVar10 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAUnchartedData::TGAUnchartedData((TGAUnchartedData *)aGStack_320,(TGAUnchartedData *)&local_3b0)
  ;
  TGALogMgr::LogUncharted(pTVar10,aGStack_320);
  TGAUnchartedData::~TGAUnchartedData((TGAUnchartedData *)aGStack_320);
  cVar1 = IsUnchartedBirthday(this);
  if (cVar1 == '\0') {
    uVar4 = std::
            _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                       *)this);
    FUN_05475d88(asStack_400,uVar4);
    FUN_05475d88(aGStack_320,asStack_400);
    PlayerInfo::SetUnchartedWorldAnniversaryReward(this_00,aGStack_320,1);
    std::string::~string((string *)aGStack_320);
    std::string::~string(asStack_400);
  }
  else {
    PlayerInfo::SetUnchartedAnniversaryReward(this_00,true);
  }
  TGAUnchartedData::~TGAUnchartedData((TGAUnchartedData *)&local_3b0);
  UnchartedModeWorldData::~UnchartedModeWorldData((UnchartedModeWorldData *)asStack_290);
  std::string::~string(asStack_408);
  FUN_054617bc(auStack_178);
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_3f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UnchartedModeNetworkMgr::GetEndPlayData() */

UnchartedModeEndOfPlayData * UnchartedModeNetworkMgr::GetEndPlayData(void)

{
  long in_x0;
  UnchartedModeEndOfPlayData *in_x8;
  
  UnchartedModeEndOfPlayData::UnchartedModeEndOfPlayData
            (in_x8,(UnchartedModeEndOfPlayData *)(in_x0 + 0xe8));
  return in_x8;
}

