// Class: Sexy::AndroidAntiHackDriver


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAntiHackDriver::GetDigitalSignature() */

void Sexy::AndroidAntiHackDriver::GetDigitalSignature(void)

{
  int iVar1;
  _JNIEnv *p_Var2;
  _jmethodID *p_Var3;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  _jfieldID *p_Var7;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  Util *local_8;
  
  local_8 = ___stack_chk_guard;
  Android::Util::GetPackageName(___stack_chk_guard);
  p_Var2 = (_JNIEnv *)Android::Util::GetJNIEnv();
  std::string::string(asStack_18,"");
  nop();
  p_Var3 = (_jmethodID *)Android::Util::GetPackageManagerObject(p_Var2);
  if ((p_Var3 != (_jmethodID *)0x0) &&
     (pcVar4 = (char *)_JNIEnv::GetObjectClass((_jobject *)p_Var2), pcVar4 != (char *)0x0)) {
    lVar5 = _JNIEnv::GetMethodID((_jclass *)p_Var2,pcVar4,"getPackageInfo");
    if (lVar5 != 0) {
      FUN_05475d88(asStack_10,asStack_20);
      FUN_0547429c(asStack_10);
      uVar6 = _JNIEnv::NewStringUTF((char *)p_Var2);
      p_Var7 = (_jfieldID *)_JNIEnv::CallObjectMethod((_jobject *)p_Var2,p_Var3,lVar5,uVar6,0x40);
      if ((((p_Var7 == (_jfieldID *)0x0) ||
           (pcVar4 = (char *)_JNIEnv::GetObjectClass((_jobject *)p_Var2), pcVar4 == (char *)0x0)) ||
          (lVar5 = _JNIEnv::GetFieldID((_jclass *)p_Var2,pcVar4,"signatures"), lVar5 == 0)) ||
         (((lVar5 = _JNIEnv::GetObjectField((_jobject *)p_Var2,p_Var7), lVar5 == 0 ||
           (p_Var3 = (_jmethodID *)
                     _JNIEnv::GetObjectArrayElement((_jobjectArray *)p_Var2,(int)lVar5),
           p_Var3 == (_jmethodID *)0x0)) ||
          ((pcVar4 = (char *)_JNIEnv::GetObjectClass((_jobject *)p_Var2), pcVar4 == (char *)0x0 ||
           (lVar5 = _JNIEnv::GetMethodID((_jclass *)p_Var2,pcVar4,"hashCode"), lVar5 == 0)))))) {
        lVar5 = 0;
      }
      else {
        iVar1 = _JNIEnv::CallIntMethod((_jobject *)p_Var2,p_Var3,lVar5);
        lVar5 = (long)iVar1;
        _JNIEnv::DeleteLocalRef((_jobject *)p_Var2);
        _JNIEnv::DeleteLocalRef((_jobject *)p_Var2);
        _JNIEnv::DeleteLocalRef((_jobject *)p_Var2);
      }
      std::string::~string(asStack_10);
      goto LAB_03e98b10;
    }
  }
  lVar5 = 0;
LAB_03e98b10:
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar5);
}


/* Sexy::AndroidAntiHackDriver::~AndroidAntiHackDriver() */

void __thiscall Sexy::AndroidAntiHackDriver::~AndroidAntiHackDriver(AndroidAntiHackDriver *this)

{
  *(undefined ***)this = &PTR__AndroidAntiHackDriver_06a34770;
  BaseAntiHackDriver::~BaseAntiHackDriver((BaseAntiHackDriver *)this);
  return;
}


/* Sexy::AndroidAntiHackDriver::~AndroidAntiHackDriver() */

void __thiscall Sexy::AndroidAntiHackDriver::~AndroidAntiHackDriver(AndroidAntiHackDriver *this)

{
  ~AndroidAntiHackDriver(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::AndroidAntiHackDriver::AndroidAntiHackDriver() */

void __thiscall Sexy::AndroidAntiHackDriver::AndroidAntiHackDriver(AndroidAntiHackDriver *this)

{
  BaseAntiHackDriver::BaseAntiHackDriver((BaseAntiHackDriver *)this);
  *(undefined ***)this = &PTR__AndroidAntiHackDriver_06a34770;
  return;
}


/* Sexy::AndroidAntiHackDriver::IsPackageHacked() */

bool Sexy::AndroidAntiHackDriver::IsPackageHacked(void)

{
  uint uVar1;
  
  uVar1 = GetDigitalSignature();
  __android_log_print(2,"CheckHacked","Sign( %d )",uVar1);
  OutputDebugStrF((wchar_t *)"=============siginatuee: %d, i_size: %d",(ulong)uVar1,0xc);
  if ((((((uVar1 != 0xcc6ecb51) && (uVar1 != 0xcd8155e)) && (uVar1 != 0x8fdec6da)) &&
       ((uVar1 != 0x5d525fb6 && (uVar1 != 0xbdcaffab)))) &&
      ((uVar1 != 0x1dd1d232 && ((uVar1 != 0xc1129970 && (uVar1 != 0x8923cbb8)))))) &&
     ((uVar1 != 0x3eddd200 && ((uVar1 != 0x70213926 && (uVar1 != 0x9d1c4fd)))))) {
    return uVar1 != 0xdbd513c1;
  }
  return false;
}

