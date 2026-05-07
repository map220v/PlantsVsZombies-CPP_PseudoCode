// Class: Android::UI


/* Android::UI::Register(_JNIEnv*, _jclass*) */

bool Android::UI::Register(_JNIEnv *param_1,_jclass *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = DAT_06bbef40;
  lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"UI_ProcessTouchEvents");
  *(long *)(lVar1 + 0x128) = lVar2;
  lVar1 = DAT_06bbef40;
  if (lVar2 != 0) {
    lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"UI_ProcessGesturePinchEvents");
    *(long *)(lVar1 + 0x130) = lVar2;
    lVar1 = DAT_06bbef40;
    if (lVar2 != 0) {
      lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"UI_ProcessKeyEvents");
      *(long *)(lVar1 + 0x138) = lVar2;
      lVar1 = DAT_06bbef40;
      if (lVar2 != 0) {
        lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"UI_DidRecieveFocus");
        *(long *)(lVar1 + 0x148) = lVar2;
        lVar1 = DAT_06bbef40;
        if (lVar2 != 0) {
          lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"UI_Dip2Pixels");
          *(long *)(lVar1 + 0x150) = lVar2;
          lVar1 = DAT_06bbef40;
          if (lVar2 != 0) {
            lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"UI_ShowAlertDialog");
            *(long *)(lVar1 + 0x158) = lVar2;
            lVar1 = DAT_06bbef40;
            if (lVar2 != 0) {
              lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"UI_ProcessEvents");
              *(long *)(lVar1 + 0x140) = lVar2;
              lVar1 = DAT_06bbef40;
              if (lVar2 != 0) {
                lVar2 = _JNIEnv::GetMethodID
                                  ((_jclass *)param_1,(char *)param_2,"UI_StartShowProgressbar");
                *(long *)(lVar1 + 0x160) = lVar2;
                lVar1 = DAT_06bbef40;
                if (lVar2 != 0) {
                  lVar2 = _JNIEnv::GetMethodID
                                    ((_jclass *)param_1,(char *)param_2,"UI_FinishShowProgressBar");
                  *(long *)(lVar1 + 0x168) = lVar2;
                  lVar1 = DAT_06bbef40;
                  if (lVar2 != 0) {
                    lVar2 = _JNIEnv::GetMethodID
                                      ((_jclass *)param_1,(char *)param_2,"UI_ShowExitGame");
                    *(long *)(lVar1 + 0x170) = lVar2;
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
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Android::UI::ProcessEvents(Sexy::AndroidAppDriver*) */

void Android::UI::ProcessEvents(AndroidAppDriver *param_1)

{
  int iVar1;
  char cVar2;
  _JNIEnv *p_Var3;
  undefined8 uVar4;
  _jmethodID *p_Var5;
  int iVar6;
  int *local_410;
  int local_408 [4];
  int local_3f8 [252];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  p_Var3 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var3 != (_JNIEnv *)0x0) {
    uVar4 = _JNIEnv::NewDirectByteBuffer(p_Var3,(longlong)local_408);
    do {
      iVar6 = 0;
      p_Var5 = (_jmethodID *)Util::GetGameObject(p_Var3);
      cVar2 = _JNIEnv::CallBooleanMethod
                        ((_jobject *)p_Var3,p_Var5,*(undefined8 *)(DAT_06bbef40 + 0x140),uVar4);
      iVar1 = local_408[0];
      local_410 = local_3f8;
      if (0 < local_408[0]) {
        do {
          iVar6 = iVar6 + 1;
          (*(code *)(&PTR_HandleTouchEvent_06a33010)[*local_410])(param_1,&local_410);
        } while (iVar6 != iVar1);
      }
    } while (cVar2 != '\0');
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var3);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Android::UI::DidRecieveFocus() */

void Android::UI::DidRecieveFocus(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    _JNIEnv::CallVoidMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x148));
    return;
  }
  return;
}


/* Android::UI::Dip2Pixels(int) */

void Android::UI::Dip2Pixels(int param_1)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    _JNIEnv::CallIntMethod
              ((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x150),(ulong)(uint)param_1)
    ;
    return;
  }
  return;
}


/* Android::UI::ShowAlertDialog(std::string, std::string, std::string, bool) */

void Android::UI::ShowAlertDialog
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  _JNIEnv *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  _jmethodID *p_Var5;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    FUN_0547429c(param_1);
    uVar2 = _JNIEnv::NewStringUTF((char *)p_Var1);
    FUN_0547429c(param_2);
    uVar3 = _JNIEnv::NewStringUTF((char *)p_Var1);
    FUN_0547429c(param_3);
    uVar4 = _JNIEnv::NewStringUTF((char *)p_Var1);
    p_Var5 = (_jmethodID *)Util::GetGameObject(p_Var1);
    _JNIEnv::CallVoidMethod
              ((_jobject *)p_Var1,p_Var5,*(undefined8 *)(DAT_06bbef40 + 0x158),uVar2,uVar3,uVar4,
               (ulong)param_4);
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
    return;
  }
  return;
}


/* Android::UI::StartShowProgressBar() */

void Android::UI::StartShowProgressBar(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    __android_log_print(4,"ZXCpro","StartShowProgressBar()");
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    _JNIEnv::CallVoidMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x160));
    return;
  }
  return;
}


/* Android::UI::FinishShowProgressBar() */

void Android::UI::FinishShowProgressBar(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    __android_log_print(4,"ZXCpro","FinishShowProgressBar()");
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    _JNIEnv::CallVoidMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x168));
    return;
  }
  return;
}


/* Android::UI::ShowExitGame() */

void Android::UI::ShowExitGame(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    __android_log_print(4,"ZXCpro","ShowExitGame()");
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    _JNIEnv::CallVoidMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x170));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Android::UI::ProcessTouchEvents(Sexy::AndroidAppDriver*) */

void Android::UI::ProcessTouchEvents(AndroidAppDriver *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  _JNIEnv *p_Var4;
  undefined8 uVar5;
  _jmethodID *p_Var6;
  int iVar7;
  uchar *local_448;
  Touch aTStack_440 [48];
  undefined4 local_410;
  int local_408 [4];
  uchar auStack_3f8 [1008];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  p_Var4 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var4 != (_JNIEnv *)0x0) {
    uVar5 = _JNIEnv::NewDirectByteBuffer(p_Var4,(longlong)local_408);
    do {
      iVar7 = 0;
      p_Var6 = (_jmethodID *)Util::GetGameObject(p_Var4);
      cVar2 = _JNIEnv::CallBooleanMethod
                        ((_jobject *)p_Var4,p_Var6,*(undefined8 *)(DAT_06bbef40 + 0x128),uVar5);
      iVar1 = local_408[0];
      local_448 = auStack_3f8;
      if (0 < local_408[0]) {
        do {
          Sexy::Touch::Touch(aTStack_440);
          cVar3 = Util::UI_DeserializeTouchEvent(&local_448,aTStack_440);
          if (cVar3 != '\0') {
            switch(local_410) {
            case 0:
              Sexy::AndroidAppDriver::TouchBegan(param_1,aTStack_440);
              break;
            case 1:
              Sexy::AndroidAppDriver::TouchMoved(param_1,aTStack_440);
              break;
            case 3:
              Sexy::AndroidAppDriver::TouchEnded(param_1,aTStack_440);
              break;
            case 4:
              Sexy::AndroidAppDriver::TouchesCanceled(param_1);
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 != iVar1);
      }
    } while (cVar2 != '\0');
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

