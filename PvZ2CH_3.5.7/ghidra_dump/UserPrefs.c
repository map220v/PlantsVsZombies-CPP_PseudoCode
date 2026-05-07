// Class: UserPrefs


/* UserPrefs::SetString(std::string const&, std::string) */

bool UserPrefs::SetString(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  _JNIEnv *p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  _jmethodID *p_Var5;
  
  p_Var2 = (_JNIEnv *)Android::Util::GetJNIEnv();
  if (p_Var2 != (_JNIEnv *)0x0) {
    FUN_0547429c(param_1);
    uVar3 = _JNIEnv::NewStringUTF((char *)p_Var2);
    FUN_0547429c(param_2);
    uVar4 = _JNIEnv::NewStringUTF((char *)p_Var2);
    p_Var5 = (_jmethodID *)Android::Util::GetGameObject(p_Var2);
    cVar1 = _JNIEnv::CallBooleanMethod
                      ((_jobject *)p_Var2,p_Var5,*(undefined8 *)(DAT_06bbef40 + 0xa8),uVar3,uVar4);
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var2);
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var2);
    return cVar1 != '\0';
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UserPrefs::GetString(std::string const&, std::string) */

void __thiscall UserPrefs::GetString(undefined8 param_1_00,UserPrefs *this,undefined8 param_1)

{
  char cVar1;
  string *psVar2;
  string asStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = ___stack_chk_guard;
  Set8BytesTo0(asStack_10);
  cVar1 = Android::Config::ConfigReadUTF8String((Config *)this,asStack_10,psVar2);
  if (cVar1 == '\0') {
    FUN_05474148(param_1_00,param_1);
  }
  else {
    FUN_05474148(param_1_00,asStack_10);
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UserPrefs::GetStringEx(std::string const&, std::string) */

void __thiscall UserPrefs::GetStringEx(undefined8 param_1_00,UserPrefs *this,undefined8 param_1)

{
  char cVar1;
  string *psVar2;
  string asStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = ___stack_chk_guard;
  Set8BytesTo0(asStack_10);
  cVar1 = Android::Config::ConfigReadUTF8StringEx((Config *)this,asStack_10,psVar2);
  if (cVar1 == '\0') {
    FUN_05474148(param_1_00,param_1);
  }
  else {
    FUN_05474148(param_1_00,asStack_10);
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UserPrefs::GetBool(std::string const&, bool) */

void UserPrefs::GetBool(string *param_1,bool param_2)

{
  char cVar1;
  string local_9;
  bool *local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Android::Config::ConfigReadBoolean((Config *)param_1,&local_9,___stack_chk_guard);
  if (cVar1 != '\0') {
    param_2 = (bool)local_9;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


/* UserPrefs::SetBool(std::string const&, bool) */

bool UserPrefs::SetBool(string *param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  _JNIEnv *p_Var3;
  undefined8 uVar4;
  _jmethodID *p_Var5;
  
  p_Var3 = (_JNIEnv *)Android::Util::GetJNIEnv();
  bVar1 = false;
  if (p_Var3 != (_JNIEnv *)0x0) {
    FUN_0547429c(param_1);
    uVar4 = _JNIEnv::NewStringUTF((char *)p_Var3);
    p_Var5 = (_jmethodID *)Android::Util::GetGameObject(p_Var3);
    cVar2 = _JNIEnv::CallBooleanMethod
                      ((_jobject *)p_Var3,p_Var5,*(undefined8 *)(DAT_06bbef40 + 0xb8),uVar4,
                       (ulong)param_2);
    bVar1 = cVar2 != '\0';
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var3);
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UserPrefs::GetInt(std::string const&, int) */

void UserPrefs::GetInt(string *param_1,int param_2)

{
  char cVar1;
  int local_c;
  int *local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Android::Config::ConfigReadInteger
                    ((Config *)param_1,(string *)&local_c,___stack_chk_guard);
  if (cVar1 == '\0') {
    local_c = param_2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_c);
}


/* UserPrefs::SetInt(std::string const&, int) */

bool UserPrefs::SetInt(string *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  _JNIEnv *p_Var3;
  undefined8 uVar4;
  _jmethodID *p_Var5;
  
  p_Var3 = (_JNIEnv *)Android::Util::GetJNIEnv();
  bVar1 = false;
  if (p_Var3 != (_JNIEnv *)0x0) {
    FUN_0547429c(param_1);
    uVar4 = _JNIEnv::NewStringUTF((char *)p_Var3);
    p_Var5 = (_jmethodID *)Android::Util::GetGameObject(p_Var3);
    cVar2 = _JNIEnv::CallBooleanMethod
                      ((_jobject *)p_Var3,p_Var5,*(undefined8 *)(DAT_06bbef40 + 0xb0),uVar4,
                       (ulong)(uint)param_2);
    bVar1 = cVar2 != '\0';
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var3);
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UserPrefs::GetDeviceType() */

void __thiscall UserPrefs::GetDeviceType(UserPrefs *this)

{
  long lVar1;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  __s = (char *)(**(code **)(**(long **)(Sexy::gSexyAppBase + 0x60) + 0x28))
                          (*(long **)(Sexy::gSexyAppBase + 0x60),1);
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

