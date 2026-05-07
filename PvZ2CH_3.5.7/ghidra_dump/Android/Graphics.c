// Class: Android::Graphics


/* Android::Graphics::Native_onSurfaceCreated(_JNIEnv*, _jobject*) */

void Android::Graphics::Native_onSurfaceCreated(_JNIEnv *param_1,_jobject *param_2)

{
  SexyAppBase *this;
  
  this = (SexyAppBase *)DAT_06bbf818[0x11];
  Sexy::SexyAppBase::SetMainThreadToCurrent(this);
  if (DAT_06bbef50 == '\0') {
    (**(code **)(*DAT_06bbf818 + 0x2c0))(DAT_06bbf818);
    DAT_06bbef50 = '\x01';
    (**(code **)(*(long *)this + 0x1b0))(this);
    (**(code **)(*(long *)this + 0x1a8))(this);
  }
  Sexy::AndroidAppDriver::HandleAndroidSurfaceCreated();
  return;
}


/* Android::Graphics::Native_onSurfaceChanged(_JNIEnv*, _jobject*, int, int) */

void Android::Graphics::Native_onSurfaceChanged
               (_JNIEnv *param_1,_jobject *param_2,int param_3,int param_4)

{
  Sexy::AndroidAppDriver::HandleAndroidSurfaceChange(DAT_06bbf818,param_3,param_4);
  return;
}


/* Android::Graphics::Native_onDrawFrame(_JNIEnv*, _jobject*) */

void Android::Graphics::Native_onDrawFrame(_JNIEnv *param_1,_jobject *param_2)

{
  Sexy::AndroidAppDriver::DisplayLinkUpdateAppStep(DAT_06bbf818);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Android::Graphics::RegisterCallbacks(_JNIEnv*, _jclass*) */

void Android::Graphics::RegisterCallbacks(_JNIEnv *param_1,_jclass *param_2)

{
  int iVar1;
  char *local_50;
  undefined *local_48;
  code *local_40;
  char *local_38;
  char *local_30;
  code *local_28;
  char *local_20;
  undefined *local_18;
  code *local_10;
  long local_8;
  
  local_40 = Native_onSurfaceCreated;
  local_8 = ___stack_chk_guard;
  local_38 = "Native_onSurfaceChanged";
  local_28 = Native_onSurfaceChanged;
  local_50 = "Native_onSurfaceCreated";
  local_48 = &DAT_055a46b8;
  local_30 = "(II)V";
  local_20 = "Native_onDrawFrame";
  local_18 = &DAT_055a46b8;
  local_10 = Native_onDrawFrame;
  iVar1 = _JNIEnv::RegisterNatives((_jclass *)param_1,(JNINativeMethod *)param_2,(int)&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0);
}


/* Android::Graphics::Register(_JNIEnv*, _jclass*) */

bool Android::Graphics::Register(_JNIEnv *param_1,_jclass *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = DAT_06bbef40;
  lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Graphics_GetGLViewSysFBO");
  *(long *)(lVar1 + 0x1d8) = lVar2;
  lVar1 = DAT_06bbef40;
  if (lVar2 != 0) {
    lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Graphics_IsOpenGLES20");
    *(long *)(lVar1 + 0x1e0) = lVar2;
    lVar1 = DAT_06bbef40;
    if (lVar2 != 0) {
      lVar2 = _JNIEnv::GetMethodID
                        ((_jclass *)param_1,(char *)param_2,"Graphics_GetScreenSizeInPixels");
      *(long *)(lVar1 + 0x1e8) = lVar2;
      lVar1 = DAT_06bbef40;
      if (lVar2 != 0) {
        lVar2 = _JNIEnv::GetMethodID
                          ((_jclass *)param_1,(char *)param_2,"Graphics_GetScreenSizeInPoints");
        *(long *)(lVar1 + 0x1f0) = lVar2;
        lVar1 = DAT_06bbef40;
        if (lVar2 != 0) {
          lVar2 = _JNIEnv::GetMethodID
                            ((_jclass *)param_1,(char *)param_2,"Graphics_GetGLViewScaleFactor");
          *(long *)(lVar1 + 0x1f8) = lVar2;
          lVar1 = DAT_06bbef40;
          if (lVar2 != 0) {
            lVar2 = _JNIEnv::GetMethodID
                              ((_jclass *)param_1,(char *)param_2,"Graphics_SetGLViewScaleFactor");
            *(long *)(lVar1 + 0x200) = lVar2;
            lVar1 = DAT_06bbef40;
            if (lVar2 != 0) {
              lVar2 = _JNIEnv::GetMethodID
                                ((_jclass *)param_1,(char *)param_2,
                                 "Graphics_CanSetGLViewScaleFactor");
              *(long *)(lVar1 + 0x208) = lVar2;
              return lVar2 != 0;
            }
          }
        }
      }
    }
  }
  return false;
}


/* Android::Graphics::GetScreenSizeInPixels(Sexy::AndroidAppDriver*, int*, int*) */

void Android::Graphics::GetScreenSizeInPixels(AndroidAppDriver *param_1,int *param_2,int *param_3)

{
  _JNIEnv *p_Var1;
  uchar *puVar2;
  _jmethodID *p_Var3;
  int *piVar4;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    puVar2 = (uchar *)_JNIEnv::NewIntArray((int)p_Var1);
    p_Var3 = (_jmethodID *)Util::GetGLViewObject(p_Var1);
    _JNIEnv::CallVoidMethod((_jobject *)p_Var1,p_Var3,*(undefined8 *)(DAT_06bbef40 + 0x1e8),puVar2);
    piVar4 = (int *)_JNIEnv::GetPrimitiveArrayCritical((_jarray *)p_Var1,puVar2);
    if (piVar4 == (int *)0x0) {
      *param_2 = -1;
      *param_3 = -1;
    }
    else {
      *param_2 = *piVar4;
      *param_3 = piVar4[1];
    }
    _JNIEnv::ReleasePrimitiveArrayCritical((_jarray *)p_Var1,puVar2,(int)piVar4);
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
    return;
  }
  return;
}


/* Android::Graphics::GetScreenSizeInPoints(int*, int*) */

void Android::Graphics::GetScreenSizeInPoints(int *param_1,int *param_2)

{
  _JNIEnv *p_Var1;
  uchar *puVar2;
  _jmethodID *p_Var3;
  int *piVar4;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    puVar2 = (uchar *)_JNIEnv::NewIntArray((int)p_Var1);
    p_Var3 = (_jmethodID *)Util::GetGLViewObject(p_Var1);
    _JNIEnv::CallVoidMethod((_jobject *)p_Var1,p_Var3,*(undefined8 *)(DAT_06bbef40 + 0x1f0),puVar2);
    piVar4 = (int *)_JNIEnv::GetPrimitiveArrayCritical((_jarray *)p_Var1,puVar2);
    if (piVar4 == (int *)0x0) {
      *param_1 = -1;
      *param_2 = -1;
    }
    else {
      *param_1 = *piVar4;
      *param_2 = piVar4[1];
    }
    _JNIEnv::ReleasePrimitiveArrayCritical((_jarray *)p_Var1,puVar2,(int)piVar4);
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
    return;
  }
  return;
}


/* Android::Graphics::IsOpenGLES20(Sexy::AndroidAppDriver*) */

bool Android::Graphics::IsOpenGLES20(AndroidAppDriver *param_1)

{
  char cVar1;
  _JNIEnv *p_Var2;
  _jmethodID *p_Var3;
  
  p_Var2 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var2 != (_JNIEnv *)0x0) {
    p_Var3 = (_jmethodID *)Util::GetGLViewObject(p_Var2);
    cVar1 = _JNIEnv::CallBooleanMethod
                      ((_jobject *)p_Var2,p_Var3,*(undefined8 *)(DAT_06bbef40 + 0x1e0));
    return cVar1 != '\0';
  }
  return false;
}


/* Android::Graphics::CanSetGLViewScaleFactor(Sexy::AndroidAppDriver*) */

bool Android::Graphics::CanSetGLViewScaleFactor(AndroidAppDriver *param_1)

{
  char cVar1;
  _JNIEnv *p_Var2;
  _jmethodID *p_Var3;
  
  p_Var2 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var2 != (_JNIEnv *)0x0) {
    p_Var3 = (_jmethodID *)Util::GetGLViewObject(p_Var2);
    cVar1 = _JNIEnv::CallBooleanMethod
                      ((_jobject *)p_Var2,p_Var3,*(undefined8 *)(DAT_06bbef40 + 0x208));
    return cVar1 != '\0';
  }
  return false;
}


/* Android::Graphics::SetGLViewScaleFactor(Sexy::AndroidAppDriver*, float) */

void Android::Graphics::SetGLViewScaleFactor(AndroidAppDriver *param_1,float param_2)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Util::GetGLViewObject(p_Var1);
    _JNIEnv::CallVoidMethod
              ((_jobject *)p_Var1,p_Var2,(double)param_2,*(undefined8 *)(DAT_06bbef40 + 0x200));
    return;
  }
  return;
}


/* Android::Graphics::GetGLViewScaleFactor(Sexy::AndroidAppDriver*) */

undefined1  [16] Android::Graphics::GetGLViewScaleFactor(AndroidAppDriver *param_1)

{
  char cVar1;
  _JNIEnv *p_Var2;
  _jmethodID *p_Var3;
  uint uVar4;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar5 [16];
  
  cVar1 = CanSetGLViewScaleFactor(param_1);
  uVar4 = 0x3f800000;
  if (cVar1 != '\0') {
    p_Var2 = (_JNIEnv *)Util::GetJNIEnv();
    if (p_Var2 != (_JNIEnv *)0x0) {
      p_Var3 = (_jmethodID *)Util::GetGLViewObject(p_Var2);
      _JNIEnv::CallFloatMethod((_jobject *)p_Var2,p_Var3,*(undefined8 *)(DAT_06bbef40 + 0x1f8));
      auVar5._4_4_ = extraout_var;
      auVar5._0_4_ = extraout_s0;
      auVar5._8_8_ = extraout_var_00;
      return auVar5;
    }
    uVar4 = 0;
  }
  return ZEXT416(uVar4);
}


/* Android::Graphics::GetGLViewSize(Sexy::AndroidAppDriver*, int*, int*) */

void Android::Graphics::GetGLViewSize(AndroidAppDriver *param_1,int *param_2,int *param_3)

{
  float fVar1;
  
  GetScreenSizeInPoints(param_2,param_3);
  fVar1 = (float)GetGLViewScaleFactor(param_1);
  if (fVar1 != 1.0) {
    *param_2 = (int)(fVar1 * (float)*param_2);
    *param_3 = (int)(fVar1 * (float)*param_3);
  }
  return;
}


/* Android::Graphics::GetGLViewSysFBO(Sexy::AndroidAppDriver*) */

void Android::Graphics::GetGLViewSysFBO(AndroidAppDriver *param_1)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Util::GetGLViewObject(p_Var1);
    _JNIEnv::CallIntMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x1d8));
    return;
  }
  return;
}

