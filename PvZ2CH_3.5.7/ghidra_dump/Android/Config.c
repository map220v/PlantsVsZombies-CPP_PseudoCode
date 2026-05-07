// Class: Android::Config


/* Android::Config::Register(_JNIEnv*, _jclass*) */

bool Android::Config::Register(_JNIEnv *param_1,_jclass *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = DAT_06bbef40;
  lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Config_ConfigKeyExists");
  *(long *)(lVar1 + 0x80) = lVar2;
  lVar1 = DAT_06bbef40;
  if (lVar2 != 0) {
    lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Config_ConfigEraseKey");
    *(long *)(lVar1 + 0xc0) = lVar2;
    lVar1 = DAT_06bbef40;
    if (lVar2 != 0) {
      lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Config_ConfigReadString");
      *(long *)(lVar1 + 0x88) = lVar2;
      lVar1 = DAT_06bbef40;
      if (lVar2 != 0) {
        lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Config_ConfigReadStringEx")
        ;
        *(long *)(lVar1 + 0x90) = lVar2;
        lVar1 = DAT_06bbef40;
        if (lVar2 != 0) {
          lVar2 = _JNIEnv::GetMethodID
                            ((_jclass *)param_1,(char *)param_2,"Config_ConfigReadInteger");
          *(long *)(lVar1 + 0x98) = lVar2;
          lVar1 = DAT_06bbef40;
          if (lVar2 != 0) {
            lVar2 = _JNIEnv::GetMethodID
                              ((_jclass *)param_1,(char *)param_2,"Config_ConfigReadBoolean");
            *(long *)(lVar1 + 0xa0) = lVar2;
            lVar1 = DAT_06bbef40;
            if (lVar2 != 0) {
              lVar2 = _JNIEnv::GetMethodID
                                ((_jclass *)param_1,(char *)param_2,"Config_ConfigWriteString");
              *(long *)(lVar1 + 0xa8) = lVar2;
              lVar1 = DAT_06bbef40;
              if (lVar2 != 0) {
                lVar2 = _JNIEnv::GetMethodID
                                  ((_jclass *)param_1,(char *)param_2,"Config_ConfigWriteInteger");
                *(long *)(lVar1 + 0xb0) = lVar2;
                lVar1 = DAT_06bbef40;
                if (lVar2 != 0) {
                  lVar2 = _JNIEnv::GetMethodID
                                    ((_jclass *)param_1,(char *)param_2,"Config_ConfigWriteBoolean")
                  ;
                  *(long *)(lVar1 + 0xb8) = lVar2;
                  return lVar2 != 0;
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


/* Android::Config::ConfigReadUTF8String(std::string const&, std::string&) */

undefined8 __thiscall
Android::Config::ConfigReadUTF8String(Config *this,string *param_1,string *param_2)

{
  char cVar1;
  _JNIEnv *p_Var2;
  undefined8 uVar3;
  _jmethodID *p_Var4;
  _jstring *__n;
  
  p_Var2 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var2 != (_JNIEnv *)0x0) {
    FUN_0547429c(this);
    uVar3 = _JNIEnv::NewStringUTF((char *)p_Var2);
    p_Var4 = (_jmethodID *)Util::GetGameObject(p_Var2);
    __n = (_jstring *)
          _JNIEnv::CallObjectMethod
                    ((_jobject *)p_Var2,p_Var4,*(undefined8 *)(DAT_06bbef40 + 0x88),uVar3);
    uVar3 = 0;
    if (__n != (_jstring *)0x0) {
      cVar1 = Util::StringFromJString(p_Var2,param_1,__n);
      if (cVar1 == '\0') {
        std::string::append(param_1,"",(size_t)__n);
      }
      uVar3 = 1;
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var2);
    }
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var2);
    return uVar3;
  }
  return 0;
}


/* Android::Config::ConfigReadUTF8StringEx(std::string const&, std::string&) */

undefined8 __thiscall
Android::Config::ConfigReadUTF8StringEx(Config *this,string *param_1,string *param_2)

{
  char cVar1;
  _JNIEnv *p_Var2;
  undefined8 uVar3;
  _jmethodID *p_Var4;
  _jstring *__n;
  
  p_Var2 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var2 != (_JNIEnv *)0x0) {
    FUN_0547429c(this);
    uVar3 = _JNIEnv::NewStringUTF((char *)p_Var2);
    p_Var4 = (_jmethodID *)Util::GetGameObject(p_Var2);
    __n = (_jstring *)
          _JNIEnv::CallObjectMethod
                    ((_jobject *)p_Var2,p_Var4,*(undefined8 *)(DAT_06bbef40 + 0x90),uVar3);
    uVar3 = 0;
    if (__n != (_jstring *)0x0) {
      cVar1 = Util::StringFromJString(p_Var2,param_1,__n);
      if (cVar1 == '\0') {
        std::string::append(param_1,"",(size_t)__n);
      }
      uVar3 = 1;
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var2);
    }
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var2);
    return uVar3;
  }
  return 0;
}


/* Android::Config::ConfigReadWideString(std::string const&, std::wstring&) */

bool __thiscall Android::Config::ConfigReadWideString(Config *this,string *param_1,wstring *param_2)

{
  _JNIEnv *p_Var1;
  undefined8 uVar2;
  _jmethodID *p_Var3;
  _jstring *p_Var4;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 == (_JNIEnv *)0x0) {
    return false;
  }
  FUN_0547429c(this);
  uVar2 = _JNIEnv::NewStringUTF((char *)p_Var1);
  p_Var3 = (_jmethodID *)Util::GetGameObject(p_Var1);
  p_Var4 = (_jstring *)
           _JNIEnv::CallObjectMethod
                     ((_jobject *)p_Var1,p_Var3,*(undefined8 *)(DAT_06bbef40 + 0x88),uVar2);
  if (p_Var4 != (_jstring *)0x0) {
    Util::WStringFromJString(p_Var1,(wstring *)param_1,p_Var4);
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
  }
  _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
  return p_Var4 != (_jstring *)0x0;
}


/* Android::Config::ConfigReadInteger(std::string const&, int&) */

bool __thiscall Android::Config::ConfigReadInteger(Config *this,string *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  _JNIEnv *p_Var3;
  undefined8 uVar4;
  _jmethodID *p_Var5;
  
  p_Var3 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var3 != (_JNIEnv *)0x0) {
    FUN_0547429c(this);
    uVar4 = _JNIEnv::NewStringUTF((char *)p_Var3);
    p_Var5 = (_jmethodID *)Util::GetGameObject(p_Var3);
    cVar1 = _JNIEnv::CallBooleanMethod
                      ((_jobject *)p_Var3,p_Var5,*(undefined8 *)(DAT_06bbef40 + 0x80),uVar4);
    if (cVar1 != '\0') {
      p_Var5 = (_jmethodID *)Util::GetGameObject(p_Var3);
      uVar2 = _JNIEnv::CallIntMethod
                        ((_jobject *)p_Var3,p_Var5,*(undefined8 *)(DAT_06bbef40 + 0x98),uVar4);
      *(undefined4 *)param_1 = uVar2;
    }
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var3);
    return cVar1 != '\0';
  }
  return false;
}


/* Android::Config::ConfigReadBoolean(std::string const&, bool&) */

bool __thiscall Android::Config::ConfigReadBoolean(Config *this,string *param_1,bool *param_2)

{
  char cVar1;
  char cVar2;
  _JNIEnv *p_Var3;
  undefined8 uVar4;
  _jmethodID *p_Var5;
  
  p_Var3 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var3 != (_JNIEnv *)0x0) {
    FUN_0547429c(this);
    uVar4 = _JNIEnv::NewStringUTF((char *)p_Var3);
    p_Var5 = (_jmethodID *)Util::GetGameObject(p_Var3);
    cVar1 = _JNIEnv::CallBooleanMethod
                      ((_jobject *)p_Var3,p_Var5,*(undefined8 *)(DAT_06bbef40 + 0x80),uVar4);
    if (cVar1 != '\0') {
      cVar2 = _JNIEnv::CallBooleanMethod
                        ((_jobject *)p_Var3,p_Var5,*(undefined8 *)(DAT_06bbef40 + 0xa0),uVar4);
      *param_1 = (string)(cVar2 != '\0');
    }
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var3);
    return cVar1 != '\0';
  }
  return false;
}


/* Android::Config::ConfigWriteUTF8String(std::string const&, std::string const&) */

bool __thiscall Android::Config::ConfigWriteUTF8String(Config *this,string *param_1,string *param_2)

{
  char cVar1;
  _JNIEnv *p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  _jmethodID *p_Var5;
  
  p_Var2 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var2 != (_JNIEnv *)0x0) {
    FUN_0547429c(this);
    uVar3 = _JNIEnv::NewStringUTF((char *)p_Var2);
    FUN_0547429c(param_1);
    uVar4 = _JNIEnv::NewStringUTF((char *)p_Var2);
    p_Var5 = (_jmethodID *)Util::GetGameObject(p_Var2);
    cVar1 = _JNIEnv::CallBooleanMethod
                      ((_jobject *)p_Var2,p_Var5,*(undefined8 *)(DAT_06bbef40 + 0xa8),uVar3,uVar4);
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var2);
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var2);
    return cVar1 != '\0';
  }
  return false;
}


/* Android::Config::ConfigWriteWideString(std::string const&, std::wstring const&) */

bool __thiscall
Android::Config::ConfigWriteWideString(Config *this,string *param_1,wstring *param_2)

{
  char cVar1;
  int iVar2;
  _JNIEnv *p_Var3;
  undefined8 uVar4;
  undefined8 uVar5;
  _jmethodID *p_Var6;
  
  p_Var3 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var3 != (_JNIEnv *)0x0) {
    FUN_0547429c(this);
    uVar4 = _JNIEnv::NewStringUTF((char *)p_Var3);
    iVar2 = FUN_054766ec(param_1);
    FUN_054765d0(param_1);
    uVar5 = _JNIEnv::NewString((ushort *)p_Var3,iVar2);
    p_Var6 = (_jmethodID *)Util::GetGameObject(p_Var3);
    cVar1 = _JNIEnv::CallBooleanMethod
                      ((_jobject *)p_Var3,p_Var6,*(undefined8 *)(DAT_06bbef40 + 0xa8),uVar4,uVar5);
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var3);
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var3);
    return cVar1 != '\0';
  }
  return false;
}


/* Android::Config::ConfigWriteInteger(std::string const&, int) */

bool __thiscall Android::Config::ConfigWriteInteger(Config *this,string *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  _JNIEnv *p_Var3;
  undefined8 uVar4;
  _jmethodID *p_Var5;
  
  p_Var3 = (_JNIEnv *)Util::GetJNIEnv();
  bVar1 = false;
  if (p_Var3 != (_JNIEnv *)0x0) {
    FUN_0547429c(this);
    uVar4 = _JNIEnv::NewStringUTF((char *)p_Var3);
    p_Var5 = (_jmethodID *)Util::GetGameObject(p_Var3);
    cVar2 = _JNIEnv::CallBooleanMethod
                      ((_jobject *)p_Var3,p_Var5,*(undefined8 *)(DAT_06bbef40 + 0xb0),uVar4,
                       (ulong)param_1 & 0xffffffff);
    bVar1 = cVar2 != '\0';
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var3);
  }
  return bVar1;
}


/* Android::Config::ConfigWriteBoolean(std::string const&, bool) */

bool __thiscall Android::Config::ConfigWriteBoolean(Config *this,string *param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  _JNIEnv *p_Var3;
  undefined8 uVar4;
  _jmethodID *p_Var5;
  
  p_Var3 = (_JNIEnv *)Util::GetJNIEnv();
  bVar1 = false;
  if (p_Var3 != (_JNIEnv *)0x0) {
    FUN_0547429c(this);
    uVar4 = _JNIEnv::NewStringUTF((char *)p_Var3);
    p_Var5 = (_jmethodID *)Util::GetGameObject(p_Var3);
    cVar2 = _JNIEnv::CallBooleanMethod
                      ((_jobject *)p_Var3,p_Var5,*(undefined8 *)(DAT_06bbef40 + 0xb8),uVar4,
                       (ulong)param_1 & 0xff);
    bVar1 = cVar2 != '\0';
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var3);
  }
  return bVar1;
}


/* Android::Config::ConfigEraseKey(std::string const&) */

void __thiscall Android::Config::ConfigEraseKey(Config *this,string *param_1)

{
  _JNIEnv *p_Var1;
  undefined8 uVar2;
  _jmethodID *p_Var3;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    FUN_0547429c(this);
    uVar2 = _JNIEnv::NewStringUTF((char *)p_Var1);
    p_Var3 = (_jmethodID *)Util::GetGameObject(p_Var1);
    _JNIEnv::CallVoidMethod((_jobject *)p_Var1,p_Var3,*(undefined8 *)(DAT_06bbef40 + 0xc0),uVar2);
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
    return;
  }
  return;
}


/* Android::Config::ConfigEraseKey(std::wstring const&) */

void __thiscall Android::Config::ConfigEraseKey(Config *this,wstring *param_1)

{
  int iVar1;
  _JNIEnv *p_Var2;
  undefined8 uVar3;
  _jmethodID *p_Var4;
  
  p_Var2 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var2 != (_JNIEnv *)0x0) {
    iVar1 = FUN_054766ec(this);
    FUN_054765d0(this);
    uVar3 = _JNIEnv::NewString((ushort *)p_Var2,iVar1);
    p_Var4 = (_jmethodID *)Util::GetGameObject(p_Var2);
    _JNIEnv::CallVoidMethod((_jobject *)p_Var2,p_Var4,*(undefined8 *)(DAT_06bbef40 + 0xc0),uVar3);
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var2);
    return;
  }
  return;
}

