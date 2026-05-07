// Class: EA::IO::AssetManagerJNI


/* EA::IO::AssetManagerJNI::GetVM() */

undefined8 EA::IO::AssetManagerJNI::GetVM(void)

{
  return sVM;
}


/* EA::IO::AssetManagerJNI::GetOriginalEnv() */

undefined8 EA::IO::AssetManagerJNI::GetOriginalEnv(void)

{
  return sOriginalEnv;
}


/* EA::IO::AssetManagerJNI::GetTempRoot() */

undefined1 * EA::IO::AssetManagerJNI::GetTempRoot(void)

{
  return sAndroidTempRoot;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::AssetManagerJNI::List(EA::IO::AutoJNIEnv const&, wchar_t const*, int) */

void EA::IO::AssetManagerJNI::List(AutoJNIEnv *param_1,wchar_t *param_2,int param_3)

{
  int iVar1;
  _JNIEnv *this;
  wchar32 *pwVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 auStack_1b8 [54];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this = (_JNIEnv *)FUN_053f94d0(*(undefined8 *)param_1);
  Path::PathString32::PathString32((PathString32 *)auStack_1b8,param_2,(ulong)(uint)param_3);
  Path::PathString16::PathString16((PathString16 *)&uStack_2a8);
  pwVar2 = (wchar32 *)FUN_053f94e8(auStack_1b8[0]);
  ConvertPath((PathString16 *)&uStack_2a8,pwVar2);
  Path::StripTrailingSeparator((PathString16 *)&uStack_2a8);
  iVar1 = FUN_053f94ec(uStack_2a8);
  FUN_053f94dc(uStack_2a8,uStack_2a0);
  uVar3 = _JNIEnv::NewString((ushort *)this,iVar1);
  lVar4 = _JNIEnv::CallObjectMethod
                    ((_jobject *)this,sObject_AssetManager,sMethodId_AssetManager_List,uVar3);
  lVar5 = _JNIEnv::ExceptionOccurred(this);
  if ((lVar5 == 0) && (lVar4 != 0)) {
    uVar3 = _JNIEnv::NewGlobalRef((_jobject *)this);
  }
  else {
    uVar3 = 0;
    _JNIEnv::ExceptionClear(this);
  }
  Path::PathString16::~PathString16((PathString16 *)&uStack_2a8);
  Path::PathString32::~PathString32((PathString32 *)auStack_1b8);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* EA::IO::AssetManagerJNI::GetListElement(EA::IO::AutoJNIEnv const&, _jobject*, int, wchar_t*,
   unsigned long) */

uint EA::IO::AssetManagerJNI::GetListElement
               (AutoJNIEnv *param_1,_jobject *param_2,int param_3,wchar_t *param_4,ulong param_5)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  _jarray *p_Var5;
  ushort *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  wchar_t *pwVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  p_Var5 = (_jarray *)FUN_053f94d0(*(undefined8 *)param_1);
  iVar4 = _JNIEnv::GetArrayLength(p_Var5);
  uVar2 = (uint)(param_3 < iVar4) & (uint)~param_3 >> 0x1f;
  if (uVar2 == 0) {
    return 0;
  }
  puVar6 = (ushort *)_JNIEnv::GetObjectArrayElement((_jobjectArray *)p_Var5,(int)param_2);
  iVar4 = _JNIEnv::GetStringLength((_jstring *)p_Var5);
  uVar3 = param_5 - 1;
  if ((ulong)(long)iVar4 < param_5) {
    uVar3 = (long)iVar4;
  }
  puVar7 = (undefined8 *)_JNIEnv::GetStringChars((_jstring *)p_Var5,(uchar *)puVar6);
  if (uVar3 != 0) {
    uVar1 = (uVar3 - 8 >> 3) + 1;
    uVar10 = uVar1 * 8;
    if (uVar3 - 1 < 7) {
      uVar10 = 0;
    }
    else {
      uVar8 = 0;
      pwVar9 = param_4;
      puVar11 = puVar7;
      do {
        uVar13 = puVar11[1];
        uVar12 = *puVar11;
        uVar8 = uVar8 + 1;
        *(ulong *)(pwVar9 + 2) =
             (ulong)CONCAT24((short)((ulong)uVar12 >> 0x30),(uint)(ushort)((ulong)uVar12 >> 0x20));
        *(ulong *)pwVar9 = (ulong)CONCAT24((short)((ulong)uVar12 >> 0x10),(uint)(ushort)uVar12);
        *(ulong *)(pwVar9 + 6) =
             (ulong)CONCAT24((short)((ulong)uVar13 >> 0x30),(uint)(ushort)((ulong)uVar13 >> 0x20));
        *(ulong *)(pwVar9 + 4) =
             (ulong)(CONCAT24((short)((ulong)uVar13 >> 0x10),(int)uVar13) & 0xffff0000ffff);
        pwVar9 = pwVar9 + 8;
        puVar11 = puVar11 + 2;
      } while (uVar8 < uVar1);
      if (uVar3 == uVar10) goto LAB_053f9d98;
    }
    uVar1 = uVar10 + 1;
    param_4[uVar10] = (uint)*(ushort *)((long)puVar7 + uVar10 * 2);
    if (uVar1 < uVar3) {
      uVar8 = uVar10 + 2;
      param_4[uVar1] = (uint)*(ushort *)((long)puVar7 + uVar1 * 2);
      if (uVar8 < uVar3) {
        uVar1 = uVar10 + 3;
        param_4[uVar8] = (uint)*(ushort *)((long)puVar7 + uVar8 * 2);
        if (uVar1 < uVar3) {
          uVar8 = uVar10 + 4;
          param_4[uVar1] = (uint)*(ushort *)((long)puVar7 + uVar1 * 2);
          if (uVar8 < uVar3) {
            uVar1 = uVar10 + 5;
            param_4[uVar8] = (uint)*(ushort *)((long)puVar7 + uVar8 * 2);
            if (uVar1 < uVar3) {
              uVar10 = uVar10 + 6;
              param_4[uVar1] = (uint)*(ushort *)((long)puVar7 + uVar1 * 2);
              if (uVar10 < uVar3) {
                param_4[uVar10] = (uint)*(ushort *)((long)puVar7 + uVar10 * 2);
              }
            }
          }
        }
      }
    }
  }
LAB_053f9d98:
  param_4[uVar3] = L'\0';
  _JNIEnv::ReleaseStringChars((_jstring *)p_Var5,puVar6);
  return uVar2;
}


/* EA::IO::AssetManagerJNI::Startup(_JNIEnv*, _jobject*, _jstring*, _jstring*, _jstring*) */

void EA::IO::AssetManagerJNI::Startup
               (_JNIEnv *param_1,_jobject *param_2,_jstring *param_3,_jstring *param_4,
               _jstring *param_5)

{
  char *pcVar1;
  char *__src;
  size_t sVar2;
  
  sOriginalEnv = param_1;
  _JNIEnv::GetJavaVM((_JavaVM **)param_1);
  pcVar1 = (char *)_JNIEnv::GetStringUTFChars((_jstring *)param_1,(uchar *)param_3);
  __src = (char *)_JNIEnv::GetStringUTFChars((_jstring *)param_1,(uchar *)param_4);
  strncpy(sAndroidDataRoot,pcVar1,0x200);
  strncpy(sAndroidFileRoot,__src,0x200);
  strncpy(sAndroidTempRoot,__src,0x200);
  sVar2 = strlen(sAndroidTempRoot);
  *(undefined4 *)(sAndroidTempRoot + sVar2) = 0x706d742f;
  sAndroidTempRoot[sVar2 + 4] = 0;
  _JNIEnv::ReleaseStringUTFChars((_jstring *)param_1,(char *)param_4);
  pcVar1 = (char *)_JNIEnv::GetStringUTFChars((_jstring *)param_1,(uchar *)param_5);
  strncpy(sAndroidExternalRoot,pcVar1,0x200);
  _JNIEnv::ReleaseStringUTFChars((_jstring *)param_1,(char *)param_5);
  pcVar1 = (char *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)param_1);
  sMethodId_InputStream_Read = _JNIEnv::GetMethodID((_jclass *)param_1,pcVar1,"read");
  sMethodId_InputStream_Close = _JNIEnv::GetMethodID((_jclass *)param_1,pcVar1,"close");
  sMethodId_InputStream_Skip = _JNIEnv::GetMethodID((_jclass *)param_1,pcVar1,"skip");
  sObject_AssetManager = _JNIEnv::NewGlobalRef((_jobject *)param_1);
  pcVar1 = (char *)_JNIEnv::GetObjectClass((_jobject *)param_1);
  sMethodId_AssetManager_Open = _JNIEnv::GetMethodID((_jclass *)param_1,pcVar1,"open");
  sMethodId_AssetManager_OpenFd = _JNIEnv::GetMethodID((_jclass *)param_1,pcVar1,"openFd");
  sMethodId_AssetManager_List = _JNIEnv::GetMethodID((_jclass *)param_1,pcVar1,"list");
  pcVar1 = (char *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)param_1);
  sMethodId_AssetFileDescriptor_GetLength =
       _JNIEnv::GetMethodID((_jclass *)param_1,pcVar1,"getLength");
  ZombieVan::onExitState_StartSpin(param_1,0x10000);
  sByteArray = _JNIEnv::NewGlobalRef((_jobject *)param_1);
  return;
}


/* EA::IO::AssetManagerJNI::Shutdown(_JNIEnv*) */

void EA::IO::AssetManagerJNI::Shutdown(_JNIEnv *param_1)

{
  _JNIEnv::DeleteGlobalRef((_jobject *)param_1);
  _JNIEnv::DeleteGlobalRef((_jobject *)param_1);
  return;
}


/* EA::IO::AssetManagerJNI::List(EA::IO::AutoJNIEnv const&, char16_t const*, int) */

undefined8 EA::IO::AssetManagerJNI::List(AutoJNIEnv *param_1,wchar16 *param_2,int param_3)

{
  _JNIEnv *this;
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  this = (_JNIEnv *)FUN_053f94d0(*(undefined8 *)param_1);
  uVar1 = _JNIEnv::NewString((ushort *)this,(int)param_2);
  lVar2 = _JNIEnv::CallObjectMethod
                    ((_jobject *)this,sObject_AssetManager,sMethodId_AssetManager_List,uVar1);
  lVar3 = _JNIEnv::ExceptionOccurred(this);
  if ((lVar3 == 0) && (lVar2 != 0)) {
    uVar1 = _JNIEnv::NewGlobalRef((_jobject *)this);
    return uVar1;
  }
  _JNIEnv::ExceptionClear(this);
  return 0;
}


/* EA::IO::AssetManagerJNI::GetListElement(EA::IO::AutoJNIEnv const&, _jobject*, int, char16_t*,
   unsigned long) */

uint EA::IO::AssetManagerJNI::GetListElement
               (AutoJNIEnv *param_1,_jobject *param_2,int param_3,wchar16 *param_4,ulong param_5)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  _jarray *p_Var4;
  ushort *puVar5;
  wchar16 *pwVar6;
  ulong uVar7;
  wchar16 *pwVar8;
  ulong uVar9;
  ulong uVar10;
  wchar16 *pwVar11;
  undefined8 uVar12;
  
  p_Var4 = (_jarray *)FUN_053f94d0(*(undefined8 *)param_1);
  iVar3 = _JNIEnv::GetArrayLength(p_Var4);
  uVar1 = (uint)(param_3 < iVar3) & (uint)~param_3 >> 0x1f;
  if (uVar1 != 0) {
    puVar5 = (ushort *)_JNIEnv::GetObjectArrayElement((_jobjectArray *)p_Var4,(int)param_2);
    iVar3 = _JNIEnv::GetStringLength((_jstring *)p_Var4);
    uVar2 = param_5 - 1;
    if ((ulong)(long)iVar3 < param_5) {
      uVar2 = (long)iVar3;
    }
    pwVar6 = (wchar16 *)_JNIEnv::GetStringChars((_jstring *)p_Var4,(uchar *)puVar5);
    if (uVar2 != 0) {
      if ((param_4 < pwVar6 + 8 && pwVar6 < param_4 + 8) || (uVar2 < 10)) {
        uVar10 = 0;
        do {
          param_4[uVar10] = pwVar6[uVar10];
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar2);
      }
      else {
        uVar10 = (uVar2 - 8 >> 3) + 1;
        uVar7 = 0;
        uVar9 = uVar10 * 8;
        pwVar8 = param_4;
        pwVar11 = pwVar6;
        do {
          uVar12 = *(undefined8 *)pwVar11;
          uVar7 = uVar7 + 1;
          *(undefined8 *)(pwVar8 + 4) = *(undefined8 *)(pwVar11 + 4);
          *(undefined8 *)pwVar8 = uVar12;
          pwVar8 = pwVar8 + 8;
          pwVar11 = pwVar11 + 8;
        } while (uVar7 < uVar10);
        if (uVar2 != uVar9) {
          uVar7 = uVar9 + 1;
          param_4[uVar10 * 8] = pwVar6[uVar10 * 8];
          if (uVar7 < uVar2) {
            uVar10 = uVar9 + 2;
            param_4[uVar7] = pwVar6[uVar7];
            if (uVar10 < uVar2) {
              uVar7 = uVar9 + 3;
              param_4[uVar10] = pwVar6[uVar10];
              if (uVar7 < uVar2) {
                uVar10 = uVar9 + 4;
                param_4[uVar7] = pwVar6[uVar7];
                if (uVar10 < uVar2) {
                  uVar7 = uVar9 + 5;
                  param_4[uVar10] = pwVar6[uVar10];
                  if (uVar7 < uVar2) {
                    uVar9 = uVar9 + 6;
                    param_4[uVar7] = pwVar6[uVar7];
                    if (uVar9 < uVar2) {
                      param_4[uVar9] = pwVar6[uVar9];
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    param_4[uVar2] = L'\0';
    _JNIEnv::ReleaseStringChars((_jstring *)p_Var4,puVar5);
    return uVar1;
  }
  return 0;
}


/* EA::IO::AssetManagerJNI::GetListElement(EA::IO::AutoJNIEnv const&, _jobject*, int, char32_t*,
   unsigned long) */

uint EA::IO::AssetManagerJNI::GetListElement
               (AutoJNIEnv *param_1,_jobject *param_2,int param_3,wchar32 *param_4,ulong param_5)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  _jarray *p_Var5;
  ushort *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  wchar32 *pwVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  p_Var5 = (_jarray *)FUN_053f94d0(*(undefined8 *)param_1);
  iVar4 = _JNIEnv::GetArrayLength(p_Var5);
  uVar2 = (uint)(param_3 < iVar4) & (uint)~param_3 >> 0x1f;
  if (uVar2 == 0) {
    return 0;
  }
  puVar6 = (ushort *)_JNIEnv::GetObjectArrayElement((_jobjectArray *)p_Var5,(int)param_2);
  iVar4 = _JNIEnv::GetStringLength((_jstring *)p_Var5);
  uVar3 = param_5 - 1;
  if ((ulong)(long)iVar4 < param_5) {
    uVar3 = (long)iVar4;
  }
  puVar7 = (undefined8 *)_JNIEnv::GetStringChars((_jstring *)p_Var5,(uchar *)puVar6);
  if (uVar3 != 0) {
    uVar1 = (uVar3 - 8 >> 3) + 1;
    uVar10 = uVar1 * 8;
    if (uVar3 - 1 < 7) {
      uVar10 = 0;
    }
    else {
      uVar8 = 0;
      pwVar9 = param_4;
      puVar11 = puVar7;
      do {
        uVar13 = puVar11[1];
        uVar12 = *puVar11;
        uVar8 = uVar8 + 1;
        *(ulong *)(pwVar9 + 2) =
             (ulong)CONCAT24((short)((ulong)uVar12 >> 0x30),(uint)(ushort)((ulong)uVar12 >> 0x20));
        *(ulong *)pwVar9 = (ulong)CONCAT24((short)((ulong)uVar12 >> 0x10),(uint)(ushort)uVar12);
        *(ulong *)(pwVar9 + 6) =
             (ulong)CONCAT24((short)((ulong)uVar13 >> 0x30),(uint)(ushort)((ulong)uVar13 >> 0x20));
        *(ulong *)(pwVar9 + 4) =
             (ulong)(CONCAT24((short)((ulong)uVar13 >> 0x10),(int)uVar13) & 0xffff0000ffff);
        pwVar9 = pwVar9 + 8;
        puVar11 = puVar11 + 2;
      } while (uVar8 < uVar1);
      if (uVar3 == uVar10) goto LAB_053f9d98;
    }
    uVar1 = uVar10 + 1;
    param_4[uVar10] = (uint)*(ushort *)((long)puVar7 + uVar10 * 2);
    if (uVar1 < uVar3) {
      uVar8 = uVar10 + 2;
      param_4[uVar1] = (uint)*(ushort *)((long)puVar7 + uVar1 * 2);
      if (uVar8 < uVar3) {
        uVar1 = uVar10 + 3;
        param_4[uVar8] = (uint)*(ushort *)((long)puVar7 + uVar8 * 2);
        if (uVar1 < uVar3) {
          uVar8 = uVar10 + 4;
          param_4[uVar1] = (uint)*(ushort *)((long)puVar7 + uVar1 * 2);
          if (uVar8 < uVar3) {
            uVar1 = uVar10 + 5;
            param_4[uVar8] = (uint)*(ushort *)((long)puVar7 + uVar8 * 2);
            if (uVar1 < uVar3) {
              uVar10 = uVar10 + 6;
              param_4[uVar1] = (uint)*(ushort *)((long)puVar7 + uVar1 * 2);
              if (uVar10 < uVar3) {
                param_4[uVar10] = (uint)*(ushort *)((long)puVar7 + uVar10 * 2);
              }
            }
          }
        }
      }
    }
  }
LAB_053f9d98:
  param_4[uVar3] = L'\0';
  _JNIEnv::ReleaseStringChars((_jstring *)p_Var5,puVar6);
  return uVar2;
}


/* EA::IO::AssetManagerJNI::FreeList(EA::IO::AutoJNIEnv const&, _jobject*) */

void EA::IO::AssetManagerJNI::FreeList(AutoJNIEnv *param_1,_jobject *param_2)

{
  _jobject *p_Var1;
  
  p_Var1 = (_jobject *)FUN_053f94d0(*(undefined8 *)param_1);
  _JNIEnv::DeleteGlobalRef(p_Var1);
  return;
}


/* EA::IO::AssetManagerJNI::Open(EA::IO::AutoJNIEnv const&, char const*, unsigned long*) */

undefined8 EA::IO::AssetManagerJNI::Open(AutoJNIEnv *param_1,char *param_2,ulong *param_3)

{
  _JNIEnv *this;
  undefined8 uVar1;
  long lVar2;
  _jmethodID *p_Var3;
  ulong uVar4;
  
  this = (_JNIEnv *)FUN_053f94d0(*(undefined8 *)param_1);
  uVar1 = _JNIEnv::NewStringUTF((char *)this);
  _JNIEnv::CallObjectMethod((_jobject *)this,sObject_AssetManager,sMethodId_AssetManager_Open,uVar1)
  ;
  lVar2 = _JNIEnv::ExceptionOccurred(this);
  if (lVar2 == 0) {
    p_Var3 = (_jmethodID *)
             _JNIEnv::CallObjectMethod
                       ((_jobject *)this,sObject_AssetManager,sMethodId_AssetManager_OpenFd,uVar1);
    lVar2 = _JNIEnv::ExceptionOccurred(this);
    if (lVar2 == 0) {
      uVar4 = _JNIEnv::CallLongMethod
                        ((_jobject *)this,p_Var3,sMethodId_AssetFileDescriptor_GetLength);
      *param_3 = uVar4;
    }
    else {
      *param_3 = 0xffffffffffffffff;
      _JNIEnv::ExceptionClear(this);
    }
    uVar1 = _JNIEnv::NewGlobalRef((_jobject *)this);
    return uVar1;
  }
  _JNIEnv::ExceptionClear(this);
  return 0;
}


/* EA::IO::AssetManagerJNI::Read(EA::IO::AutoJNIEnv const&, _jobject*, void*, unsigned long) */

signed * EA::IO::AssetManagerJNI::Read
                   (AutoJNIEnv *param_1,_jobject *param_2,void *param_3,ulong param_4)

{
  uint uVar1;
  _jobject *p_Var2;
  
  p_Var2 = (_jobject *)FUN_053f94d0(*(undefined8 *)param_1);
  _JNIEnv::MonitorEnter(p_Var2);
  if (0x10000 < param_4) {
    param_4 = 0x10000;
  }
  uVar1 = _JNIEnv::CallIntMethod
                    (p_Var2,(_jmethodID *)param_2,sMethodId_InputStream_Read,sByteArray,0,param_4);
  if (0 < (int)uVar1) {
    _JNIEnv::GetByteArrayRegion((_jbyteArray *)p_Var2,(int)sByteArray,0,(signed *)(ulong)uVar1);
  }
  _JNIEnv::MonitorExit(p_Var2);
  return (signed *)(ulong)uVar1;
}


/* EA::IO::AssetManagerJNI::Close(EA::IO::AutoJNIEnv const&, _jobject*) */

void EA::IO::AssetManagerJNI::Close(AutoJNIEnv *param_1,_jobject *param_2)

{
  _jobject *p_Var1;
  
  p_Var1 = (_jobject *)FUN_053f94d0(*(undefined8 *)param_1);
  _JNIEnv::CallVoidMethod(p_Var1,(_jmethodID *)param_2,sMethodId_InputStream_Close);
  _JNIEnv::DeleteGlobalRef(p_Var1);
  return;
}


/* EA::IO::AssetManagerJNI::Skip(EA::IO::AutoJNIEnv const&, _jobject*, long long) */

undefined8 EA::IO::AssetManagerJNI::Skip(AutoJNIEnv *param_1,_jobject *param_2,longlong param_3)

{
  _JNIEnv *this;
  undefined8 uVar1;
  long lVar2;
  
  this = (_JNIEnv *)FUN_053f94d0(*(undefined8 *)param_1);
  uVar1 = _JNIEnv::CallLongMethod
                    ((_jobject *)this,(_jmethodID *)param_2,sMethodId_InputStream_Skip,param_3);
  lVar2 = _JNIEnv::ExceptionOccurred(this);
  if (lVar2 != 0) {
    _JNIEnv::ExceptionClear(this);
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}


/* EA::IO::AssetManagerJNI::DetermineFileLengthBySkipping(EA::IO::AutoJNIEnv const&, char const*) */

long EA::IO::AssetManagerJNI::DetermineFileLengthBySkipping(AutoJNIEnv *param_1,char *param_2)

{
  _JNIEnv *this;
  undefined8 uVar1;
  _jobject *p_Var2;
  long lVar3;
  long lVar4;
  
  this = (_JNIEnv *)FUN_053f94d0(*(undefined8 *)param_1);
  uVar1 = _JNIEnv::NewStringUTF((char *)this);
  p_Var2 = (_jobject *)
           _JNIEnv::CallObjectMethod
                     ((_jobject *)this,sObject_AssetManager,sMethodId_AssetManager_Open,uVar1);
  lVar3 = _JNIEnv::ExceptionOccurred(this);
  if (lVar3 != 0) {
    _JNIEnv::ExceptionClear(this);
    return -1;
  }
  lVar3 = 0;
  while (lVar4 = Skip(param_1,p_Var2,0x40000), 0 < lVar4) {
    lVar3 = lVar3 + lVar4;
  }
  _JNIEnv::CallVoidMethod((_jobject *)this,(_jmethodID *)p_Var2,sMethodId_InputStream_Close);
  return lVar3;
}


/* EA::IO::AssetManagerJNI::Exists(EA::IO::AutoJNIEnv const&, char const*) */

undefined8 EA::IO::AssetManagerJNI::Exists(AutoJNIEnv *param_1,char *param_2)

{
  _JNIEnv *this;
  undefined8 uVar1;
  _jmethodID *p_Var2;
  long lVar3;
  
  this = (_JNIEnv *)FUN_053f94d0(*(undefined8 *)param_1);
  uVar1 = _JNIEnv::NewStringUTF((char *)this);
  p_Var2 = (_jmethodID *)
           _JNIEnv::CallObjectMethod
                     ((_jobject *)this,sObject_AssetManager,sMethodId_AssetManager_Open,uVar1);
  lVar3 = _JNIEnv::ExceptionOccurred(this);
  if (lVar3 != 0) {
    _JNIEnv::ExceptionClear(this);
    return 0;
  }
  _JNIEnv::CallVoidMethod((_jobject *)this,p_Var2,sMethodId_InputStream_Close);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::AssetManagerJNI::List(EA::IO::AutoJNIEnv const&, char32_t const*, int) */

void EA::IO::AssetManagerJNI::List(AutoJNIEnv *param_1,wchar32 *param_2,int param_3)

{
  int iVar1;
  _JNIEnv *this;
  wchar32 *pwVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_1b8 [54];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (_JNIEnv *)FUN_053f94d0(*(undefined8 *)param_1);
  Path::PathString32::PathString32((PathString32 *)local_1b8,param_2,(ulong)(uint)param_3);
  Path::PathString16::PathString16((PathString16 *)&local_2a8);
  pwVar2 = (wchar32 *)FUN_053f94e8(local_1b8[0]);
  ConvertPath((PathString16 *)&local_2a8,pwVar2);
  Path::StripTrailingSeparator((PathString16 *)&local_2a8);
  iVar1 = FUN_053f94ec(local_2a8);
  FUN_053f94dc(local_2a8,local_2a0);
  uVar3 = _JNIEnv::NewString((ushort *)this,iVar1);
  lVar4 = _JNIEnv::CallObjectMethod
                    ((_jobject *)this,sObject_AssetManager,sMethodId_AssetManager_List,uVar3);
  lVar5 = _JNIEnv::ExceptionOccurred(this);
  if ((lVar5 == 0) && (lVar4 != 0)) {
    uVar3 = _JNIEnv::NewGlobalRef((_jobject *)this);
  }
  else {
    uVar3 = 0;
    _JNIEnv::ExceptionClear(this);
  }
  Path::PathString16::~PathString16((PathString16 *)&local_2a8);
  Path::PathString32::~PathString32((PathString32 *)local_1b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

