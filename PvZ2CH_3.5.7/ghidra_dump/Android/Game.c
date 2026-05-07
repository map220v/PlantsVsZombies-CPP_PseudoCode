// Class: Android::Game


/* Android::Game::Native_applicationWillTerminate(_JNIEnv*, _jobject*) */

void Android::Game::Native_applicationWillTerminate(_JNIEnv *param_1,_jobject *param_2)

{
  (**(code **)(**(long **)(DAT_06bbf818 + 0x88) + 0x180))(*(long **)(DAT_06bbf818 + 0x88));
  return;
}


/* Android::Game::Native_applicationWillResignActive(_JNIEnv*, _jobject*) */

void Android::Game::Native_applicationWillResignActive(_JNIEnv *param_1,_jobject *param_2)

{
  Sexy::AndroidAppDriver::StaticNotifyApplicationWillResignActive();
  Sexy::AndroidAppDriver::DeactivateAudioSession(DAT_06bbf818);
  return;
}


/* Android::Game::Native_applicationDidEnterBackground(_JNIEnv*, _jobject*) */

void Android::Game::Native_applicationDidEnterBackground(_JNIEnv *param_1,_jobject *param_2)

{
  AndroidApplicationDidEnterBackgroundEvent *this;
  
  this = ::operator_new(0x10);
  AndroidApplicationDidEnterBackgroundEvent::AndroidApplicationDidEnterBackgroundEvent(this);
  Sexy::AndroidAppDriver::StaticEnqueueAndroidEvent((AndroidAppEvent *)this);
  return;
}


/* Android::Game::Native_applicationWillBecomeForeground(_JNIEnv*, _jobject*) */

void Android::Game::Native_applicationWillBecomeForeground(_JNIEnv *param_1,_jobject *param_2)

{
  Sexy::AndroidAppDriver::StaticNotifyApplicationWillBecomeForeground();
  *(undefined1 *)(Sexy::gSexyAppBase + 0x8b8) = 0;
  return;
}


/* Android::Game::Native_applicationDidBecomeActive(_JNIEnv*, _jobject*) */

void Android::Game::Native_applicationDidBecomeActive(_JNIEnv *param_1,_jobject *param_2)

{
  AndroidApplicationDidBecomeActiveEvent *this;
  
  this = ::operator_new(0x10);
  AndroidApplicationDidBecomeActiveEvent::AndroidApplicationDidBecomeActiveEvent(this);
  Sexy::AndroidAppDriver::StaticEnqueueAndroidEvent((AndroidAppEvent *)this);
  return;
}


/* Android::Game::Native_applicationGainFocus(_JNIEnv*, _jobject*) */

void Android::Game::Native_applicationGainFocus(_JNIEnv *param_1,_jobject *param_2)

{
  Sexy::AndroidAppDriver::StaticNotifyApplicationGainFocus();
  *(undefined1 *)(Sexy::gSexyAppBase + 0x8b8) = 0;
  return;
}


/* Android::Game::Native_applicationLoseFocus(_JNIEnv*, _jobject*) */

void Android::Game::Native_applicationLoseFocus(_JNIEnv *param_1,_jobject *param_2)

{
  Sexy::AndroidAppDriver::StaticNotifyApplicationLoseFocus();
  *(undefined1 *)(Sexy::gSexyAppBase + 0x8b8) = 1;
  return;
}


/* Android::Game::Native_onOrientationChanged(_JNIEnv*, _jobject*, int, int, int, int) */

void Android::Game::Native_onOrientationChanged
               (_JNIEnv *param_1,_jobject *param_2,int param_3,int param_4,int param_5,int param_6)

{
  Sexy::AndroidAppDriver::StaticNotifyOrientationChanged(param_3,param_4,param_5,param_6);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Android::Game::Native_getEditText(_JNIEnv*, _jobject*) */

void Android::Game::Native_getEditText(_JNIEnv *param_1,_jobject *param_2)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::IMEDispatcher::GetInstancePtr();
  Sexy::IMEDispatcher::GetText();
  FUN_0547429c(asStack_10);
  uVar1 = _JNIEnv::NewStringUTF((char *)param_1);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Android::Game::Native_applicationWillFinishLaunching(_JNIEnv*, _jobject*, _jstring*) */

void Android::Game::Native_applicationWillFinishLaunching
               (_JNIEnv *param_1,_jobject *param_2,_jstring *param_3)

{
  char cVar1;
  undefined4 uVar2;
  string asStack_28 [8];
  undefined *local_20;
  long local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_28);
  cVar1 = Util::StringFromJString(param_1,asStack_28,param_3);
  if (cVar1 == '\0') {
    local_18 = 0;
    uVar2 = 1;
  }
  else {
    local_18 = FUN_0547429c(asStack_28);
    uVar2 = 2;
    if (local_18 == 0) {
      uVar2 = 1;
    }
  }
  local_10 = 0;
  local_20 = &DAT_055a4148;
  main(uVar2,&local_20);
  std::string::~string(asStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Android::Game::Native_setStartUrl(_JNIEnv*, _jobject*, _jstring*) */

void Android::Game::Native_setStartUrl(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3)

{
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_18);
  Util::StringFromJString(param_1,asStack_18,param_3);
  FUN_05475d88(asStack_10,asStack_18);
  Sexy::AndroidAppDriver::StaticApplicationOpenURL(asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Android::Game::Native_setEditText(_JNIEnv*, _jobject*, _jstring*) */

void Android::Game::Native_setEditText(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3)

{
  undefined8 uVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_18);
  Util::StringFromJString(param_1,asStack_18,param_3);
  uVar1 = Sexy::IMEDispatcher::GetInstancePtr();
  FUN_05475d88(asStack_10,asStack_18);
  Sexy::IMEDispatcher::SetText(uVar1,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Android::Game::RegisterCallbacks(_JNIEnv*, _jclass*) */

void Android::Game::RegisterCallbacks(_JNIEnv *param_1,_jclass *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined1 auStack_140 [312];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar2 = memcpy(auStack_140,&PTR_s_Native_applicationWillFinishLaun_06a8a978,0x138);
  iVar1 = _JNIEnv::RegisterNatives((_jclass *)param_1,(JNINativeMethod *)param_2,(int)pvVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0);
}


/* Android::Game::GameMonitorEnter() */

void __thiscall Android::Game::GameMonitorEnter(Game *this)

{
  _JNIEnv *p_Var1;
  undefined1 auVar2 [16];
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  auVar2 = Util::GetGameObject(p_Var1);
  Util::Util_MonitorEnter(auVar2._0_8_,auVar2._8_8_);
  return;
}


/* Android::Game::GameMonitorExit() */

void __thiscall Android::Game::GameMonitorExit(Game *this)

{
  _JNIEnv *p_Var1;
  undefined1 auVar2 [16];
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  auVar2 = Util::GetGameObject(p_Var1);
  Util::Util_MonitorExit(auVar2._0_8_,auVar2._8_8_);
  return;
}


/* Android::Game::SetAppDriverPointer(Sexy::AndroidAppDriver*) */

void Android::Game::SetAppDriverPointer(AndroidAppDriver *param_1)

{
  DAT_06bbf818 = param_1;
  return;
}

