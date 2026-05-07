// Class: InstallTracker


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InstallTracker::GetDaysSinceInstall() */

void InstallTracker::GetDaysSinceInstall(void)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  TimeMgr *this;
  code *pcVar4;
  string asStack_20 [8];
  string asStack_18 [8];
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = 0;
  plVar3 = (long *)UserPrefsWrapper::GetInstance();
  pcVar4 = *(code **)(*plVar3 + 0x10);
  std::string::string(asStack_18,"UdIdCheck");
  std::string::string((string *)local_10,"");
  (*pcVar4)(asStack_20,plVar3,asStack_18,(string *)local_10);
  std::string::~string((string *)local_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  cVar1 = FUN_0547419c(asStack_20);
  if (cVar1 == '\0') {
    local_10[0] = 0;
    cVar1 = Sexy::StringToInt(asStack_20,local_10);
    if (cVar1 != '\0') {
      this = (TimeMgr *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
      iVar2 = TimeMgr::GetDate(this);
      iVar2 = (iVar2 - local_10[0]) / 0x15180 + 1;
    }
  }
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InstallTracker::SetInstallDate() */

void InstallTracker::SetInstallDate(void)

{
  char cVar1;
  undefined4 uVar2;
  long *plVar3;
  TimeMgr *this;
  undefined8 uVar4;
  code *pcVar5;
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar3 = (long *)UserPrefsWrapper::GetInstance();
  pcVar5 = *(code **)(*plVar3 + 0x10);
  std::string::string(asStack_188,"UdIdCheck");
  std::string::string(asStack_180,"");
  (*pcVar5)(asStack_190,plVar3,asStack_188,asStack_180);
  std::string::~string(asStack_180);
  nop();
  std::string::~string(asStack_188);
  nop();
  cVar1 = FUN_0547419c(asStack_190);
  if (cVar1 != '\0') {
    uVar2 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar2);
    this = (TimeMgr *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    uVar4 = TimeMgr::GetDate(this);
    thunk_FUN_05460424(auStack_168,uVar4);
    pcVar5 = *(code **)(*plVar3 + 0x20);
    std::string::string(asStack_180,"UdIdCheck");
    FUN_05462824(asStack_188,auStack_178);
    (*pcVar5)(plVar3,asStack_180,asStack_188);
    std::string::~string(asStack_188);
    std::string::~string(asStack_180);
    nop();
    FUN_054617bc(auStack_178);
  }
  std::string::~string(asStack_190);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

