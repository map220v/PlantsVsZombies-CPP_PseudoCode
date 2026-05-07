// Class: EASquaredCheats


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredCheats::DrawEA2Diagnostic(Sexy::Graphics*, Sexy::TRect<int>) */

void EASquaredCheats::DrawEA2Diagnostic(void)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  Toggles *this;
  Ultra *this_00;
  undefined *puVar6;
  char *pcVar7;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar4 = (long *)EASquared::Instance();
  uVar3 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar3);
  FUN_054603b8(auStack_168,"EA^2 Diagnostics\n");
  cVar1 = (**(code **)(*plVar4 + 0x50))(plVar4);
  uVar5 = FUN_054603b8(auStack_168,"\nEnabled (show button) is ");
  if (cVar1 == '\0') {
    pcVar7 = "FALSE";
  }
  else {
    pcVar7 = "TRUE";
  }
  uVar5 = FUN_054603b8(uVar5,pcVar7);
  FUN_054603b8(uVar5," because:\n");
  uVar5 = FUN_054603b8(auStack_168," - Toggled: ");
  this = (Toggles *)Toggles::GetInstance();
  std::string::string(asStack_180,"EASquared");
  cVar2 = Toggles::IsEnabled(this,asStack_180);
  if (cVar2 == '\0') {
    puVar6 = &DAT_055fac20;
  }
  else {
    puVar6 = &DAT_05593ff8;
  }
  uVar5 = FUN_054603b8(uVar5,puVar6);
  FUN_054603b8(uVar5,&DAT_0559c978);
  std::string::~string(asStack_180);
  nop();
  uVar5 = FUN_054603b8(auStack_168," - Player coins <= ");
  uVar3 = (**(code **)(*plVar4 + 0xa0))(plVar4);
  uVar5 = FUN_0546065c(uVar5,uVar3);
  uVar5 = FUN_054603b8(uVar5," coins: ");
  cVar2 = (**(code **)(*plVar4 + 0x80))(plVar4);
  if (cVar2 == '\0') {
    pcVar7 = "true";
  }
  else {
    pcVar7 = "false";
  }
  uVar5 = FUN_054603b8(uVar5,pcVar7);
  FUN_054603b8(uVar5,&DAT_0559c978);
  uVar5 = FUN_054603b8(auStack_168," - Install age >= ");
  uVar3 = (**(code **)(*plVar4 + 0xa8))(plVar4);
  uVar5 = FUN_0546065c(uVar5,uVar3);
  uVar5 = FUN_054603b8(uVar5," days: ");
  cVar2 = (**(code **)(*plVar4 + 0x88))(plVar4);
  if (cVar2 == '\0') {
    pcVar7 = "true";
  }
  else {
    pcVar7 = "false";
  }
  uVar5 = FUN_054603b8(uVar5,pcVar7);
  FUN_054603b8(uVar5,&DAT_0559c978);
  uVar5 = FUN_054603b8(auStack_168," - Monetizer status is ");
  (**(code **)(*plVar4 + 0xb0))(asStack_180,plVar4);
  uVar5 = FUN_0545ec84(uVar5,asStack_180);
  uVar5 = FUN_054603b8(uVar5,&DAT_05680db8);
  cVar2 = (**(code **)(*plVar4 + 0x90))(plVar4);
  if (cVar2 == '\0') {
    uVar5 = FUN_054603b8(uVar5,"false");
    FUN_054603b8(uVar5,&DAT_0559c978);
    std::string::~string(asStack_180);
  }
  else {
    uVar5 = FUN_054603b8(uVar5,&DAT_0559f690);
    FUN_054603b8(uVar5,&DAT_0559c978);
    std::string::~string(asStack_180);
  }
  if (cVar1 != '\0') {
    this_00 = (Ultra *)Ultra::PlatformSpecificInstance();
    uVar5 = FUN_054603b8(auStack_168,"\nHas inventory (colored button) is ");
    cVar1 = (**(code **)(*plVar4 + 0x58))(plVar4);
    if (cVar1 == '\0') {
      pcVar7 = "FALSE";
    }
    else {
      pcVar7 = "TRUE";
    }
    uVar5 = FUN_054603b8(uVar5,pcVar7);
    pcVar7 = "true";
    FUN_054603b8(uVar5," because:\n");
    uVar5 = FUN_054603b8(auStack_168," - EA2 is enabled: ");
    uVar5 = FUN_054603b8(uVar5,&DAT_0559f690);
    FUN_054603b8(uVar5,&DAT_0559c978);
    uVar5 = FUN_054603b8(auStack_168," - Is online: ");
    cVar1 = Connectivity::IsConnected();
    if (cVar1 == '\0') {
      pcVar7 = "false";
    }
    uVar5 = FUN_054603b8(uVar5,pcVar7);
    FUN_054603b8(uVar5,&DAT_0559c978);
    uVar5 = FUN_054603b8(auStack_168," - Ultra has inventory: ");
    cVar1 = Ultra::HasAdvertisements(this_00);
    pcVar7 = "true";
    if (cVar1 == '\0') {
      pcVar7 = "false";
    }
    uVar5 = FUN_054603b8(uVar5,pcVar7);
    FUN_054603b8(uVar5,&DAT_0559c978);
    uVar5 = FUN_054603b8(auStack_168," --- SuperSonic has inventory: ");
    cVar1 = Ultra::SuperSonicHasAdvertisements(this_00);
    pcVar7 = "true";
    if (cVar1 == '\0') {
      pcVar7 = "false";
    }
    uVar5 = FUN_054603b8(uVar5,pcVar7);
    FUN_054603b8(uVar5,&DAT_0559c978);
  }
  FUN_054617bc(auStack_178);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* EASquaredCheats::FakeShowAd() */

void EASquaredCheats::FakeShowAd(void)

{
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  return;
}


/* EASquaredCheats::FakeEndAd() */

void EASquaredCheats::FakeEndAd(void)

{
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  return;
}


/* EASquaredCheats::cycleAdProviderEnabled(std::string const&) */

void EASquaredCheats::cycleAdProviderEnabled(string *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)UserPrefsWrapper::GetInstance();
  iVar1 = (**(code **)(*plVar2 + 0x38))(plVar2,param_1,0);
  (**(code **)(*plVar2 + 0x40))(plVar2,param_1,(iVar1 + 1) % 3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredCheats::CycleSuperSonicEnabled() */

void EASquaredCheats::CycleSuperSonicEnabled(void)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"SuperSonicEnabledOverride");
  cycleAdProviderEnabled(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EASquaredCheats::toggleUserPrefsBool(std::string const&) */

void EASquaredCheats::toggleUserPrefsBool(string *param_1)

{
  byte bVar1;
  long *plVar2;
  
  plVar2 = (long *)UserPrefsWrapper::GetInstance();
  bVar1 = (**(code **)(*plVar2 + 0x30))((int)plVar2,param_1);
  plVar2 = (long *)UserPrefsWrapper::GetInstance();
  (**(code **)(*plVar2 + 0x28))((int)plVar2,param_1,bVar1 ^ 1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredCheats::ToggleSuperSonicDemoCampaigns() */

void EASquaredCheats::ToggleSuperSonicDemoCampaigns(void)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"SuperSonicUseDemoCampaigns");
  toggleUserPrefsBool(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredCheats::labelAdProviderFolder(std::string const&, bool, bool, std::string&) */

void EASquaredCheats::labelAdProviderFolder
               (string *param_1,bool param_2,bool param_3,string *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  uVar2 = FUN_0545ec84(auStack_168,param_1);
  FUN_054603b8(uVar2,&DAT_05680db8);
  if (param_2) {
    uVar2 = FUN_054603b8(auStack_168,&DAT_05680e90);
    FUN_054603b8(uVar2,&DAT_05633b30);
  }
  else {
    uVar2 = FUN_054603b8(auStack_168,&DAT_05680e98);
    FUN_054603b8(uVar2,&DAT_05633b30);
  }
  if (param_3) {
    puVar3 = &DAT_05680ea0;
  }
  else {
    puVar3 = &DAT_05680ea8;
  }
  uVar2 = FUN_054603b8(auStack_168,puVar3);
  FUN_054603b8(uVar2,&DAT_05680eb0);
  FUN_05462824(asStack_180,auStack_178);
  FUN_05474278(param_4,asStack_180);
  std::string::~string(asStack_180);
  FUN_054617bc(auStack_178);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredCheats::labelAdProviderEnabled(bool, AdProviderEnabledOverrideState,
   AdProviderEnabledOverrideState, std::string&) */

void EASquaredCheats::labelAdProviderEnabled
               (char param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == 2) {
    uVar1 = operator|(0x10,8);
    param_1 = '\x01';
    FUN_05462470(auStack_178,uVar1);
    if (param_2 != 2) goto LAB_04bf564c;
LAB_04bf5710:
    FUN_054603b8(auStack_168,&DAT_05680e90);
    uVar2 = FUN_054603b8(auStack_168,&DAT_05680ed0);
  }
  else {
    if (param_3 == 1) {
      uVar1 = operator|(0x10,8);
      param_1 = '\0';
      FUN_05462470(auStack_178,uVar1);
      if (param_2 == 1) {
        FUN_054603b8(auStack_168,&DAT_05680e98);
        uVar2 = FUN_054603b8(auStack_168,&DAT_05680ed0);
        puVar3 = &DAT_055923fe;
        goto LAB_04bf5690;
      }
LAB_04bf564c:
      FUN_054603b8(auStack_168,"On restart: ");
    }
    else {
      uVar1 = operator|(0x10,8);
      FUN_05462470(auStack_178,uVar1);
      if (param_2 != param_3) goto LAB_04bf564c;
    }
    if (param_1 != '\0') goto LAB_04bf5710;
    FUN_054603b8(auStack_168,&DAT_05680e98);
    uVar2 = FUN_054603b8(auStack_168,&DAT_05680ed0);
  }
  if (param_3 == 0) {
    puVar3 = &DAT_05680eb8;
  }
  else {
    puVar3 = &DAT_055923fe;
  }
LAB_04bf5690:
  uVar2 = FUN_054603b8(uVar2,puVar3);
  FUN_054603b8(uVar2,"Override)");
  FUN_05462824(asStack_180,auStack_178);
  FUN_05474278(param_4,asStack_180);
  std::string::~string(asStack_180);
  FUN_054617bc(auStack_178);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredCheats::labelToggleDemoCampaigns(bool, bool, std::string&) */

void EASquaredCheats::labelToggleDemoCampaigns(bool param_1,bool param_2,string *param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  if (param_2 == param_1) {
    if (param_2) {
      pcVar2 = "Using Demo campaigns";
    }
    else {
      pcVar2 = "Using Real campaigns";
    }
  }
  else if (param_2) {
    pcVar2 = "Real (Demo on restart)";
  }
  else {
    pcVar2 = "Demo (Real on restart)";
  }
  FUN_054603b8(auStack_168,pcVar2);
  FUN_05462824(asStack_180,auStack_178);
  FUN_05474278(param_3,asStack_180);
  std::string::~string(asStack_180);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredCheats::LabelSuperSonicFolder(std::string&) */

void EASquaredCheats::LabelSuperSonicFolder(string *param_1)

{
  bool bVar1;
  AdProviderFactory *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (AdProviderFactory *)Sexy::LazySingleton<SuperSonicAdProvider>::GetInstance();
  std::string::string(asStack_10,"SuperSonic");
  bVar1 = (bool)AdProviderFactory::IsEnabled(this);
  labelAdProviderFolder(asStack_10,bVar1,(bool)this[0x10],param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredCheats::LabelSuperSonicEnabled(std::string&) */

void EASquaredCheats::LabelSuperSonicEnabled(string *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Sexy::LazySingleton<SuperSonicAdProvider>::GetInstance();
  plVar3 = (long *)UserPrefsWrapper::GetInstance();
  pcVar4 = *(code **)(*plVar3 + 0x38);
  std::string::string(asStack_10,"SuperSonicEnabledOverride");
  uVar1 = (*pcVar4)(plVar3,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  labelAdProviderEnabled(*(undefined1 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0xc),uVar1,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredCheats::LabelSuperSonicDemoCampaigns(std::string&) */

void EASquaredCheats::LabelSuperSonicDemoCampaigns(string *param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = Sexy::LazySingleton<SuperSonicAdProvider>::GetInstance();
  bVar1 = *(bool *)(lVar3 + 0x10);
  plVar4 = (long *)UserPrefsWrapper::GetInstance();
  pcVar5 = *(code **)(*plVar4 + 0x30);
  std::string::string(asStack_10,"SuperSonicUseDemoCampaigns");
  bVar2 = (bool)(*pcVar5)(plVar4,asStack_10);
  std::string::~string(asStack_10);
  nop();
  labelToggleDemoCampaigns(bVar1,bVar2,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

