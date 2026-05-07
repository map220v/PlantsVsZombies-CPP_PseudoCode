// Class: UserPrefsWrapper


/* UserPrefsWrapper::GetInstance() */

undefined8 * UserPrefsWrapper::GetInstance(void)

{
  int iVar1;
  
  if (((GetInstance()::instance & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&GetInstance()::instance), iVar1 != 0)) {
    __cxa_guard_release(&GetInstance()::instance);
    __cxa_atexit(nop,&GetInstance()::instance,&DAT_06a88000);
    return &GetInstance()::instance;
  }
  return &GetInstance()::instance;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UserPrefsWrapper::GetString(std::string const&, std::string) */

void UserPrefsWrapper::GetString
               (UserPrefs *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,param_4);
  UserPrefs::GetString(param_1,param_3,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UserPrefsWrapper::GetStringEx(std::string const&, std::string) */

void UserPrefsWrapper::GetStringEx
               (UserPrefs *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,param_4);
  UserPrefs::GetStringEx(param_1,param_3,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UserPrefsWrapper::SetString(std::string const&, std::string) */

void __thiscall
UserPrefsWrapper::SetString(undefined8 param_1_00,undefined8 param_1,undefined8 param_3)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,param_3);
  UserPrefs::SetString(param_1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UserPrefsWrapper::GetBool(std::string const&) */

void __thiscall UserPrefsWrapper::GetBool(UserPrefsWrapper *this,string *param_1)

{
  UserPrefs::GetBool(param_1,false);
  return;
}


/* UserPrefsWrapper::SetBool(std::string const&, bool) */

void __thiscall UserPrefsWrapper::SetBool(UserPrefsWrapper *this,string *param_1,bool param_2)

{
  UserPrefs::SetBool(param_1,param_2);
  nop();
  return;
}


/* UserPrefsWrapper::GetInt(std::string const&, int) */

void __thiscall UserPrefsWrapper::GetInt(UserPrefsWrapper *this,string *param_1,int param_2)

{
  UserPrefs::GetInt(param_1,param_2);
  return;
}


/* UserPrefsWrapper::SetInt(std::string const&, int) */

void __thiscall UserPrefsWrapper::SetInt(UserPrefsWrapper *this,string *param_1,int param_2)

{
  UserPrefs::SetInt(param_1,param_2);
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UserPrefsWrapper::GetPCPID() */

void UserPrefsWrapper::GetPCPID(void)

{
  long *in_x0;
  code *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*in_x0 + 0x10);
  std::string::string(asStack_10,"");
  (*pcVar1)();
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UserPrefsWrapper::SetAge(std::string const&) */

void UserPrefsWrapper::SetAge(string *param_1)

{
  code *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)param_1 + 0x20);
  FUN_05475d88(asStack_10);
  (*pcVar1)(param_1,&age_key,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UserPrefsWrapper::GetAge() */

void UserPrefsWrapper::GetAge(void)

{
  long *in_x0;
  code *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*in_x0 + 0x10);
  std::string::string(asStack_10,"");
  (*pcVar1)();
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UserPrefsWrapper::SetPCPIDStrings(std::string const&) */

void UserPrefsWrapper::SetPCPIDStrings(string *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  char in_w2;
  code *pcVar4;
  ulong uVar5;
  string asStack_38 [8];
  string asStack_30 [8];
  Sexy aSStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_05474184();
  if (lVar1 != 0) {
    FUN_05475d88(aSStack_28);
    Sexy::SplitStringToVector(aSStack_28,(string *)0x2d,in_w2);
    std::string::~string((string *)aSStack_28);
    uVar5 = 0;
    while( true ) {
      uVar3 = FUN_044edc30(local_20,local_18);
      if (uVar3 <= uVar5) break;
      Sexy::StrFormat("pcpid_%d",asStack_38,uVar5 + 1 & 0xffffffff);
      uVar2 = FUN_044edc3c(local_20,uVar5);
      FUN_05475d88(asStack_30,uVar2);
      FUN_05475d88(aSStack_28,asStack_30);
      UserPrefs::SetString(asStack_38,aSStack_28);
      std::string::~string((string *)aSStack_28);
      std::string::~string(asStack_30);
      std::string::~string(asStack_38);
      uVar5 = uVar5 + 1;
    }
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)&local_20);
  }
  pcVar4 = *(code **)(*(long *)param_1 + 0x20);
  FUN_05475d88((string *)&local_20);
  (*pcVar4)(param_1,&pcpid_key,(string *)&local_20);
  std::string::~string((string *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

