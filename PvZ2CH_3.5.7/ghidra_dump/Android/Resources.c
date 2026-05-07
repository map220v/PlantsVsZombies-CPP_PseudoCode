// Class: Android::Resources


/* Android::Resources::Register(_JNIEnv*, _jclass*) */

bool Android::Resources::Register(_JNIEnv *param_1,_jclass *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = DAT_06bbef40;
  lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Resources_GetResourceFolder");
  *(long *)(lVar1 + 0x178) = lVar2;
  lVar1 = DAT_06bbef40;
  if (lVar2 != 0) {
    lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Resources_GetUserDataFolder");
    *(long *)(lVar1 + 0x180) = lVar2;
    lVar1 = DAT_06bbef40;
    if (lVar2 != 0) {
      lVar2 = _JNIEnv::GetMethodID
                        ((_jclass *)param_1,(char *)param_2,"Resources_GetCacheDataFolder");
      *(long *)(lVar1 + 0x188) = lVar2;
      lVar1 = DAT_06bbef40;
      if (lVar2 != 0) {
        lVar2 = _JNIEnv::GetMethodID
                          ((_jclass *)param_1,(char *)param_2,"Resources_GetAppSupportDataFolder");
        *(long *)(lVar1 + 400) = lVar2;
        lVar1 = DAT_06bbef40;
        if (lVar2 != 0) {
          lVar2 = _JNIEnv::GetMethodID
                            ((_jclass *)param_1,(char *)param_2,"Resources_GetAssetFileSize");
          *(long *)(lVar1 + 0x198) = lVar2;
          lVar1 = DAT_06bbef40;
          if (lVar2 != 0) {
            lVar2 = _JNIEnv::GetMethodID
                              ((_jclass *)param_1,(char *)param_2,"Resources_GetAssetFileInfo");
            *(long *)(lVar1 + 0x1a0) = lVar2;
            lVar1 = DAT_06bbef40;
            if (lVar2 != 0) {
              lVar2 = _JNIEnv::GetMethodID
                                ((_jclass *)param_1,(char *)param_2,"Resources_InstallApk");
              *(long *)(lVar1 + 0x1a8) = lVar2;
              lVar1 = DAT_06bbef40;
              if (lVar2 != 0) {
                lVar2 = _JNIEnv::GetMethodID
                                  ((_jclass *)param_1,(char *)param_2,
                                   "Resources_GetFileSystemBlockCount");
                *(long *)(lVar1 + 0x1b0) = lVar2;
                lVar1 = DAT_06bbef40;
                if (lVar2 != 0) {
                  lVar2 = _JNIEnv::GetMethodID
                                    ((_jclass *)param_1,(char *)param_2,
                                     "Resources_GetFileSystemBlocksFree");
                  *(long *)(lVar1 + 0x1b8) = lVar2;
                  lVar1 = DAT_06bbef40;
                  if (lVar2 != 0) {
                    lVar2 = _JNIEnv::GetMethodID
                                      ((_jclass *)param_1,(char *)param_2,
                                       "Resources_GetFileSystemBlockSize");
                    *(long *)(lVar1 + 0x1c0) = lVar2;
                    lVar1 = DAT_06bbef40;
                    if (lVar2 != 0) {
                      lVar2 = _JNIEnv::GetMethodID
                                        ((_jclass *)param_1,(char *)param_2,
                                         "Resources_GetExternalStorageDirectory");
                      *(long *)(lVar1 + 0x1c8) = lVar2;
                      lVar1 = DAT_06bbef40;
                      if (lVar2 != 0) {
                        lVar2 = _JNIEnv::GetMethodID
                                          ((_jclass *)param_1,(char *)param_2,
                                           "Resources_GetExternalFilesDirectory");
                        *(long *)(lVar1 + 0x1d0) = lVar2;
                        return lVar2 != 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Android::Resources::GetResourceFolder(Sexy::AndroidAppDriver*) */

void Android::Resources::GetResourceFolder(AndroidAppDriver *param_1)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  _jstring *p_Var3;
  string *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 == (_JNIEnv *)0x0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    p_Var3 = (_jstring *)
             _JNIEnv::CallObjectMethod
                       ((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x178));
    Set8BytesTo0(asStack_10);
    if (p_Var3 != (_jstring *)0x0) {
      Util::StringFromJString(p_Var1,asStack_10,p_Var3);
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
    }
    FUN_05474148();
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Android::Resources::GetUserDataFolder(Sexy::AndroidAppDriver*) */

void Android::Resources::GetUserDataFolder(AndroidAppDriver *param_1)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  _jstring *p_Var3;
  string *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 == (_JNIEnv *)0x0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    p_Var3 = (_jstring *)
             _JNIEnv::CallObjectMethod
                       ((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x180));
    Set8BytesTo0(asStack_10);
    if (p_Var3 != (_jstring *)0x0) {
      Util::StringFromJString(p_Var1,asStack_10,p_Var3);
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
    }
    FUN_05474148();
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Android::Resources::GetCacheDataFolder(Sexy::AndroidAppDriver*) */

void Android::Resources::GetCacheDataFolder(AndroidAppDriver *param_1)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  _jstring *p_Var3;
  string *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 == (_JNIEnv *)0x0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    p_Var3 = (_jstring *)
             _JNIEnv::CallObjectMethod
                       ((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x188));
    Set8BytesTo0(asStack_10);
    if (p_Var3 != (_jstring *)0x0) {
      Util::StringFromJString(p_Var1,asStack_10,p_Var3);
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
    }
    FUN_05474148();
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Android::Resources::GetAppSupportDataFolder(Sexy::AndroidAppDriver*) */

void Android::Resources::GetAppSupportDataFolder(AndroidAppDriver *param_1)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  _jstring *p_Var3;
  string *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 == (_JNIEnv *)0x0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    p_Var3 = (_jstring *)
             _JNIEnv::CallObjectMethod
                       ((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 400));
    Set8BytesTo0(asStack_10);
    if (p_Var3 != (_jstring *)0x0) {
      Util::StringFromJString(p_Var1,asStack_10,p_Var3);
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
    }
    FUN_05474148();
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Android::Resources::GetExternalStorageDirectory(Sexy::AndroidAppDriver*) */

void Android::Resources::GetExternalStorageDirectory(AndroidAppDriver *param_1)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  _jstring *p_Var3;
  string *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 == (_JNIEnv *)0x0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    p_Var3 = (_jstring *)
             _JNIEnv::CallObjectMethod
                       ((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x1c8));
    Set8BytesTo0(asStack_10);
    if (p_Var3 != (_jstring *)0x0) {
      Util::StringFromJString(p_Var1,asStack_10,p_Var3);
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
    }
    FUN_05474148();
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Android::Resources::GetExternalFilesDirectory(Sexy::AndroidAppDriver*) */

void Android::Resources::GetExternalFilesDirectory(AndroidAppDriver *param_1)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  _jstring *p_Var3;
  string *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 == (_JNIEnv *)0x0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    p_Var3 = (_jstring *)
             _JNIEnv::CallObjectMethod
                       ((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x1d0));
    Set8BytesTo0(asStack_10);
    if (p_Var3 != (_jstring *)0x0) {
      Util::StringFromJString(p_Var1,asStack_10,p_Var3);
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
    }
    FUN_05474148();
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Android::Resources::GetAssetFileSize(std::string const&) */

void Android::Resources::GetAssetFileSize(string *param_1)

{
  _JNIEnv *p_Var1;
  undefined8 uVar2;
  _jmethodID *p_Var3;
  _JNIEnv *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = (_JNIEnv *)Util::GetJNIEnv();
  if (local_10 == (_JNIEnv *)0x0) {
    _JavaVM::AttachCurrentThread(g_JavaVM,&local_10);
    if (local_10 == (_JNIEnv *)0x0) {
      uVar2 = 0xffffffffffffffff;
      goto LAB_052d616c;
    }
  }
  p_Var1 = local_10;
  FUN_0547429c(param_1);
  uVar2 = _JNIEnv::NewStringUTF((char *)p_Var1);
  p_Var1 = local_10;
  p_Var3 = (_jmethodID *)Util::GetGameObject(local_10);
  uVar2 = _JNIEnv::CallLongMethod
                    ((_jobject *)p_Var1,p_Var3,*(undefined8 *)(DAT_06bbef40 + 0x198),uVar2);
  _JNIEnv::DeleteLocalRef((_jobject *)local_10);
LAB_052d616c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* Android::Resources::GetAssetFileInfo(std::string const&, std::string&, long&, long&) */

undefined8
Android::Resources::GetAssetFileInfo(string *param_1,string *param_2,long *param_3,long *param_4)

{
  _JNIEnv *p_Var1;
  undefined8 uVar2;
  uchar *puVar3;
  _jmethodID *p_Var4;
  _jstring *p_Var5;
  long *plVar6;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    FUN_0547429c(param_1);
    uVar2 = _JNIEnv::NewStringUTF((char *)p_Var1);
    puVar3 = (uchar *)_JNIEnv::NewLongArray((int)p_Var1);
    p_Var4 = (_jmethodID *)Util::GetGameObject(p_Var1);
    p_Var5 = (_jstring *)
             _JNIEnv::CallObjectMethod
                       ((_jobject *)p_Var1,p_Var4,*(undefined8 *)(DAT_06bbef40 + 0x1a0),uVar2,puVar3
                       );
    if (p_Var5 != (_jstring *)0x0) {
      Util::StringFromJString(p_Var1,param_2,p_Var5);
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
      plVar6 = (long *)_JNIEnv::GetPrimitiveArrayCritical((_jarray *)p_Var1,puVar3);
      *param_3 = *plVar6;
      *param_4 = plVar6[1];
      _JNIEnv::ReleasePrimitiveArrayCritical((_jarray *)p_Var1,puVar3,(int)plVar6);
    }
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
    return 1;
  }
  return 0;
}


/* Android::Resources::InstallApk(std::string const&) */

bool Android::Resources::InstallApk(string *param_1)

{
  char cVar1;
  _JNIEnv *p_Var2;
  undefined8 uVar3;
  _jmethodID *p_Var4;
  
  p_Var2 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var2 != (_JNIEnv *)0x0) {
    FUN_0547429c(param_1);
    uVar3 = _JNIEnv::NewStringUTF((char *)p_Var2);
    p_Var4 = (_jmethodID *)Util::GetGameObject(p_Var2);
    cVar1 = _JNIEnv::CallBooleanMethod
                      ((_jobject *)p_Var2,p_Var4,*(undefined8 *)(DAT_06bbef40 + 0x1a8),uVar3);
    return cVar1 != '\0';
  }
  return false;
}


/* Android::Resources::GetFileSystemBlockCount(std::string const&) */

undefined8 Android::Resources::GetFileSystemBlockCount(string *param_1)

{
  _JNIEnv *p_Var1;
  undefined8 uVar2;
  _jmethodID *p_Var3;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 == (_JNIEnv *)0x0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    FUN_0547429c(param_1);
    uVar2 = _JNIEnv::NewStringUTF((char *)p_Var1);
    p_Var3 = (_jmethodID *)Util::GetGameObject(p_Var1);
    uVar2 = _JNIEnv::CallLongMethod
                      ((_jobject *)p_Var1,p_Var3,*(undefined8 *)(DAT_06bbef40 + 0x1b0),uVar2);
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
  }
  return uVar2;
}


/* Android::Resources::GetFileSystemBlocksFree(std::string const&) */

undefined8 Android::Resources::GetFileSystemBlocksFree(string *param_1)

{
  _JNIEnv *p_Var1;
  undefined8 uVar2;
  _jmethodID *p_Var3;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 == (_JNIEnv *)0x0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    FUN_0547429c(param_1);
    uVar2 = _JNIEnv::NewStringUTF((char *)p_Var1);
    p_Var3 = (_jmethodID *)Util::GetGameObject(p_Var1);
    uVar2 = _JNIEnv::CallLongMethod
                      ((_jobject *)p_Var1,p_Var3,*(undefined8 *)(DAT_06bbef40 + 0x1b8),uVar2);
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
  }
  return uVar2;
}


/* Android::Resources::GetFileSystemBlockSize(std::string const&) */

undefined8 Android::Resources::GetFileSystemBlockSize(string *param_1)

{
  _JNIEnv *p_Var1;
  undefined8 uVar2;
  _jmethodID *p_Var3;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 == (_JNIEnv *)0x0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    FUN_0547429c(param_1);
    uVar2 = _JNIEnv::NewStringUTF((char *)p_Var1);
    p_Var3 = (_jmethodID *)Util::GetGameObject(p_Var1);
    uVar2 = _JNIEnv::CallLongMethod
                      ((_jobject *)p_Var1,p_Var3,*(undefined8 *)(DAT_06bbef40 + 0x1c0),uVar2);
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
  }
  return uVar2;
}

