// Class: UserInfo


/* UserInfo::setName(std::string const&) */

UserInfo * __thiscall UserInfo::setName(UserInfo *this,string *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  undefined1 auStack_8 [8];
  
  lVar4 = *(long *)this;
  lVar6 = *(long *)param_1;
  if (lVar4 != lVar6) {
    if (*(int *)(lVar6 + -8) < 0) {
      lVar6 = FUN_05475660((undefined8 *)(lVar6 + -0x18),auStack_8,0);
      lVar4 = *(long *)this;
    }
    else if ((undefined8 *)(lVar6 + -0x18) != &DAT_06c4be90) {
      piVar5 = (int *)(lVar6 + -8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = *(long *)this;
    }
    if ((undefined8 *)(lVar4 + -0x18) != &DAT_06c4be90) {
      piVar5 = (int *)(lVar4 + -8);
      do {
        iVar1 = *piVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 < 1) {
        AK::FreeHook((undefined8 *)(lVar4 + -0x18));
      }
    }
    *(long *)this = lVar6;
  }
  return this;
}


/* UserInfo::unlockHeadShotId(int) */

void __thiscall UserInfo::unlockHeadShotId(UserInfo *this,int param_1)

{
  char cVar1;
  PlayerInfo *this_00;
  ProfileMgr *this_01;
  
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  if (this_00 != (PlayerInfo *)0x0) {
    cVar1 = PlayerInfo::isUnlockHeadshotId(this_00,param_1);
    if (cVar1 == '\0') {
      PlayerInfo::setUnlockHeadshotId(this_00,param_1);
      PlayerInfo::SAVE_PROFILE(this_00);
      this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      ProfileMgr::Save(this_01,false,false);
      return;
    }
  }
  return;
}


/* UserInfo::setHeadShotId(int) */

void __thiscall UserInfo::setHeadShotId(UserInfo *this,int param_1)

{
  char cVar1;
  PlayerInfo *this_00;
  ProfileMgr *this_01;
  
  *(int *)(this + 0x24) = param_1;
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  if (this_00 != (PlayerInfo *)0x0) {
    FUN_03d72764(this_00 + 0x1138,param_1);
    cVar1 = PlayerInfo::isUnlockHeadshotId(this_00,param_1);
    if (cVar1 == '\0') {
      PlayerInfo::setUnlockHeadshotId(this_00,param_1);
      PlayerInfo::SAVE_PROFILE(this_00);
      this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      ProfileMgr::Save(this_01,false,false);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UserInfo::UserInfo() */

void __thiscall UserInfo::UserInfo(UserInfo *this)

{
  int iVar1;
  long lVar2;
  wstring *extraout_x1;
  string asStack_18 [8];
  Sexy aSStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)this,"");
  nop();
  std::string::string((string *)(this + 8),"");
  nop();
  std::string::string((string *)(this + 0x10),"");
  nop();
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  this[0x20] = (UserInfo)0x0;
  this[0x21] = (UserInfo)0x0;
  *(undefined4 *)(this + 0x24) = 0;
  lVar2 = ProfileUtils::Profile();
  if (lVar2 != 0) {
    PlayerInfo::AM_GetName();
    Sexy::WStringToUTF8String(aSStack_10,extraout_x1);
    setName(this,asStack_18);
    std::string::~string(asStack_18);
    FUN_05476c50(aSStack_10);
    iVar1 = FUN_03d7276c(*(undefined4 *)(lVar2 + 0x1138));
    setHeadShotId(this,iVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

