// Class: Sexy::AndroidAppDriver


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::GetProductVersionCode() */

void Sexy::AndroidAppDriver::GetProductVersionCode(void)

{
  char cVar1;
  int iVar2;
  _JNIEnv *p_Var3;
  _jmethodID *p_Var4;
  _jstring *__n;
  char *__nptr;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"-1");
  nop();
  p_Var3 = (_JNIEnv *)Android::Util::GetJNIEnv();
  if (p_Var3 == (_JNIEnv *)0x0) {
    iVar2 = -1;
  }
  else {
    p_Var4 = (_jmethodID *)Android::Util::GetGameObject(p_Var3);
    __n = (_jstring *)
          _JNIEnv::CallObjectMethod((_jobject *)p_Var3,p_Var4,*(undefined8 *)(DAT_06bbef40 + 0x210))
    ;
    if (__n != (_jstring *)0x0) {
      cVar1 = Android::Util::StringFromJString(p_Var3,asStack_10,__n);
      if (cVar1 == '\0') {
        std::string::append(asStack_10,"-1",(size_t)__n);
      }
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var3);
    }
    __nptr = (char *)FUN_0547429c(asStack_10);
    iVar2 = atoi(__nptr);
  }
  std::string::~string(asStack_10);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


/* void Sexy::AndroidAppDriver::StaticEnqueueCallback<Sexy::IPurchaseAdapter, std::string
   >(Sexy::IPurchaseAdapter&, void (Sexy::IPurchaseAdapter::*)(std::string const&), std::string
   const&) */

void Sexy::AndroidAppDriver::StaticEnqueueCallback<Sexy::IPurchaseAdapter,std::string>
               (IPurchaseAdapter *param_1,_func_void_string_ptr *param_2,string *param_3)

{
  IPurchaseAdapter *pIVar1;
  
  pIVar1 = ::operator_new(0x50);
  CallbackBinder1<Sexy::IPurchaseAdapter,std::string>::CallbackBinder1
            (pIVar1,(_func_void_string_ptr *)param_1,(string *)param_2);
  StaticEnqueueCallback((Delegate0 *)pIVar1);
  return;
}


/* void Sexy::AndroidAppDriver::StaticEnqueueCallback<Sexy::IPurchaseAdapter,
   Sexy::IPurchaseDriver::CauseForIncompletion>(Sexy::IPurchaseAdapter&, void
   (Sexy::IPurchaseAdapter::*)(Sexy::IPurchaseDriver::CauseForIncompletion const&),
   Sexy::IPurchaseDriver::CauseForIncompletion const&) */

void Sexy::AndroidAppDriver::
     StaticEnqueueCallback<Sexy::IPurchaseAdapter,Sexy::IPurchaseDriver::CauseForIncompletion>
               (IPurchaseAdapter *param_1,_func_void_CauseForIncompletion_ptr *param_2,
               CauseForIncompletion *param_3)

{
  IPurchaseAdapter *pIVar1;
  
  pIVar1 = ::operator_new(0x50);
  CallbackBinder1<Sexy::IPurchaseAdapter,Sexy::IPurchaseDriver::CauseForIncompletion>::
  CallbackBinder1(pIVar1,(_func_void_CauseForIncompletion_ptr *)param_1,
                  (CauseForIncompletion *)param_2);
  StaticEnqueueCallback((Delegate0 *)pIVar1);
  return;
}


/* Sexy::AndroidAppDriver::GetUIOrientation() */

undefined4 __thiscall Sexy::AndroidAppDriver::GetUIOrientation(AndroidAppDriver *this)

{
  return *(undefined4 *)(this + 0x160);
}


/* Sexy::AndroidAppDriver::Remove3DData(Sexy::MemoryImage*) */

void Sexy::AndroidAppDriver::Remove3DData(MemoryImage *param_1)

{
  if (*(long **)(param_1 + 0x98) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x58))();
  }
  return;
}


/* Sexy::AndroidAppDriver::DebugKeyDown(int) */

undefined8 __thiscall Sexy::AndroidAppDriver::DebugKeyDown(AndroidAppDriver *this,int param_1)

{
  if (param_1 == 0x3f) {
    this[0x180] = (AndroidAppDriver)((byte)this[0x180] ^ 1);
    return 1;
  }
  if (param_1 != 0x2c) {
    return 0;
  }
  this[0x181] = (AndroidAppDriver)((byte)this[0x181] ^ 1);
  return 1;
}


/* Sexy::AndroidAppDriver::ConfigEraseValue(std::wstring const&) */

void Sexy::AndroidAppDriver::ConfigEraseValue(wstring *param_1)

{
  (**(code **)(*(long *)param_1 + 0x238))();
  return;
}


/* Sexy::AndroidAppDriver::ShouldPauseUpdates() */

AndroidAppDriver __thiscall Sexy::AndroidAppDriver::ShouldPauseUpdates(AndroidAppDriver *this)

{
  return this[0x159];
}


/* Sexy::AndroidAppDriver::DoParseCmdLine() */

void Sexy::AndroidAppDriver::DoParseCmdLine(void)

{
  OutputDebugStrF((wchar_t *)"AndroidAppDriver - DoParseCmdLine");
  return;
}


/* Sexy::AndroidAppDriver::ParseCmdLine(std::string const&) */

void Sexy::AndroidAppDriver::ParseCmdLine(string *param_1)

{
  OutputDebugStrF((wchar_t *)"AndroidAppDriver - ParseCmdLine");
  return;
}


/* Sexy::AndroidAppDriver::GetProductVersionName() */

undefined8 Sexy::AndroidAppDriver::GetProductVersionName(void)

{
  Info *in_x0;
  undefined8 in_x8;
  
  Android::Info::SysGetProductVersion(in_x0);
  return in_x8;
}


/* Sexy::AndroidAppDriver::LaunchApp() */

void __thiscall Sexy::AndroidAppDriver::LaunchApp(AndroidAppDriver *this)

{
  DAT_06bbf818 = this;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::InitPostAppLaunch() */

void __thiscall Sexy::AndroidAppDriver::InitPostAppLaunch(AndroidAppDriver *this)

{
  AndroidAppDriver AVar1;
  SexyAppBase *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x2c8))();
  this_00 = *(SexyAppBase **)(this + 0x88);
  std::string::string(asStack_10,"drivers.android.use_multitouch");
  AVar1 = (AndroidAppDriver)SexyAppBase::GetBoolean(this_00,asStack_10,true);
  this[0x198] = AVar1;
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::AndroidAppDriver::InitWindowCreated() */

void __thiscall Sexy::AndroidAppDriver::InitWindowCreated(AndroidAppDriver *this)

{
  undefined4 uVar1;
  AndroidGraphicsDriver *this_00;
  long *plVar2;
  
  (**(code **)(**(long **)(this + 0x88) + 0x1b8))(*(long **)(this + 0x88));
  this_00 = ::operator_new(0xcd0);
  AndroidGraphicsDriver::AndroidGraphicsDriver(this_00,this,*(SexyAppBase **)(this + 0x88));
  *(AndroidGraphicsDriver **)(this + 0x98) = this_00;
  plVar2 = *(long **)(*(long *)(this + 0x88) + 0x30);
  *(AndroidGraphicsDriver **)(*(long *)(this + 0x88) + 0x20) = this_00;
  (**(code **)(*plVar2 + 0x18))(plVar2,this_00);
  uVar1 = Android::Device::GetStartupUIOrientation();
  *(undefined4 *)(this + 0x160) = uVar1;
  nop();
  (**(code **)(**(long **)(this + 0x88) + 0x1c0))(*(long **)(this + 0x88));
  (**(code **)(**(long **)(this + 0x88) + 0x88))(*(long **)(this + 0x88));
  *(undefined1 *)(*(long *)(this + 0x88) + 0x3b4) = 1;
  return;
}


/* Sexy::AndroidAppDriver::Popup(std::string const&) */

int __thiscall Sexy::AndroidAppDriver::Popup(AndroidAppDriver *this,string *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0547429c(param_1);
  iVar1 = printf("AndroidAppDriver::Popup: %s\n",uVar2);
  return iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::StartLoadingThread() */

void __thiscall Sexy::AndroidAppDriver::StartLoadingThread(AndroidAppDriver *this)

{
  pthread_attr_t pStack_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(char *)(*(long *)(this + 0x88) + 0x6b5) == '\0') {
    *(undefined1 *)(*(long *)(this + 0x88) + 0x6d0) = 1;
    pthread_attr_init(&pStack_40);
    pthread_create((pthread_t *)(this + 0xa0),&pStack_40,_android_loading_thread_start_routine,this)
    ;
    pthread_attr_destroy(&pStack_40);
    *(undefined1 *)(*(long *)(this + 0x88) + 0x6b5) = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::AndroidAppDriver::CopyToClipboard(std::string const&) */

void __thiscall Sexy::AndroidAppDriver::CopyToClipboard(AndroidAppDriver *this,string *param_1)

{
  Android::Device::CopyToClipBoard(param_1);
  return;
}


/* Sexy::AndroidAppDriver::KeyDown(int) */

undefined8 Sexy::AndroidAppDriver::KeyDown(int param_1)

{
  _sexy_assert_msg("Unimplemented Android implementation of IAppDriver::KeyDown called - this is an error."
                   ,"./../../../SexyAppFramework/drivers/app/android/AndroidAppDriver.cpp",0x696);
  return 0;
}


/* Sexy::AndroidAppDriver::IsUIOrientationAllowed(Sexy::UI_ORIENTATION) */

void __thiscall Sexy::AndroidAppDriver::IsUIOrientationAllowed(undefined8 param_1,uint param_2)

{
  Android::Device::IsSupportedUIOrientation(param_2);
  return;
}


/* Sexy::AndroidAppDriver::ShowKeyboard() */

void Sexy::AndroidAppDriver::ShowKeyboard(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Android::Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Android::Util::GetGameObject(p_Var1);
    _JNIEnv::CallBooleanMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0xe0));
    return;
  }
  return;
}


/* Sexy::AndroidAppDriver::HideKeyboard() */

void Sexy::AndroidAppDriver::HideKeyboard(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Android::Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Android::Util::GetGameObject(p_Var1);
    _JNIEnv::CallBooleanMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0xe8));
    return;
  }
  return;
}


/* Sexy::AndroidAppDriver::Vibrate(long long) */

void __thiscall Sexy::AndroidAppDriver::Vibrate(AndroidAppDriver *this,longlong param_1)

{
  Android::Device::Vibrate(param_1);
  return;
}


/* Sexy::AndroidAppDriver::VibrateWithPattern(long long*, int) */

void __thiscall
Sexy::AndroidAppDriver::VibrateWithPattern(AndroidAppDriver *this,longlong *param_1,int param_2)

{
  Android::Device::VibrateWithPattern(param_1,param_2);
  return;
}


/* Sexy::AndroidAppDriver::CancelVibrate() */

void Sexy::AndroidAppDriver::CancelVibrate(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Android::Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Android::Util::GetGameObject(p_Var1);
    _JNIEnv::CallVoidMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x120));
    return;
  }
  return;
}


/* Sexy::AndroidAppDriver::IsKeyboardShowing() */

void Sexy::AndroidAppDriver::IsKeyboardShowing(void)

{
  Android::Device::IsKeyboardShowing(false);
  return;
}


/* Sexy::AndroidAppDriver::SetFPS(bool) */

void __thiscall Sexy::AndroidAppDriver::SetFPS(AndroidAppDriver *this,bool param_1)

{
  nop();
  return;
}


/* Sexy::AndroidAppDriver::IsHighFPS() */

undefined8 Sexy::AndroidAppDriver::IsHighFPS(void)

{
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::WriteBytesToFileAt(std::string const&, void const*, unsigned long,
   unsigned long) */

void __thiscall
Sexy::AndroidAppDriver::WriteBytesToFileAt
          (AndroidAppDriver *this,string *param_1,void *param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  char *__filename;
  FILE *__stream;
  ulong uVar2;
  undefined8 uVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(*(long *)(this + 0x88) + 0x28) + 0x20))
            (asStack_18,*(long **)(*(long *)(this + 0x88) + 0x28));
  GetFileDir(asStack_18,false);
  DFinder::createDirectory(asStack_10);
  std::string::~string(asStack_10);
  __filename = (char *)FUN_0547429c(asStack_18);
  __stream = fopen(__filename,"r+b");
  uVar3 = 0;
  if (__stream != (FILE *)0x0) {
    fseek(__stream,0,2);
    iVar1 = ferror(__stream);
    if (iVar1 == 0) {
      uVar2 = ftell(__stream);
      iVar1 = ferror(__stream);
      if (iVar1 == 0) {
        fseek(__stream,0,0);
        iVar1 = ferror(__stream);
        if (iVar1 != 0) {
          fclose(__stream);
          uVar3 = 0;
          goto LAB_052cc19c;
        }
        if (param_4 + param_3 <= uVar2) {
          fseek(__stream,param_4,0);
          iVar1 = ferror(__stream);
          if (iVar1 == 0) {
            fwrite(param_2,1,param_3,__stream);
            iVar1 = ferror(__stream);
            if (iVar1 == 0) {
              uVar3 = 1;
              fclose(__stream);
            }
            else {
              fclose(__stream);
              uVar3 = 0;
            }
            goto LAB_052cc19c;
          }
        }
      }
      uVar3 = 0;
      fclose(__stream);
    }
    else {
      uVar3 = 0;
      fclose(__stream);
    }
  }
LAB_052cc19c:
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::WriteBytesToFileEnd(std::string const&, void const*, unsigned long) */

void __thiscall
Sexy::AndroidAppDriver::WriteBytesToFileEnd
          (AndroidAppDriver *this,string *param_1,void *param_2,ulong param_3)

{
  int iVar1;
  char *__filename;
  FILE *__stream;
  undefined8 uVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(*(long *)(this + 0x88) + 0x28) + 0x20))
            (asStack_18,*(long **)(*(long *)(this + 0x88) + 0x28));
  GetFileDir(asStack_18,false);
  DFinder::createDirectory(asStack_10);
  std::string::~string(asStack_10);
  __filename = (char *)FUN_0547429c(asStack_18);
  __stream = fopen(__filename,"a+b");
  uVar2 = 0;
  if (__stream != (FILE *)0x0) {
    fseek(__stream,0,2);
    iVar1 = ferror(__stream);
    if (iVar1 == 0) {
      ftell(__stream);
      iVar1 = ferror(__stream);
      if (iVar1 == 0) {
        fwrite(param_2,1,param_3,__stream);
        iVar1 = ferror(__stream);
        if (iVar1 == 0) {
          uVar2 = 1;
          fclose(__stream);
        }
        else {
          fclose(__stream);
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
        fclose(__stream);
      }
    }
    else {
      uVar2 = 0;
      fclose(__stream);
    }
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::CreateFileOfSize(std::string const&, unsigned long) */

void __thiscall
Sexy::AndroidAppDriver::CreateFileOfSize(AndroidAppDriver *this,string *param_1,ulong param_2)

{
  int iVar1;
  char *__filename;
  FILE *__stream;
  undefined8 uVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(*(long *)(this + 0x88) + 0x28) + 0x20))
            (asStack_18,*(long **)(*(long *)(this + 0x88) + 0x28));
  GetFileDir(asStack_18,false);
  DFinder::createDirectory(asStack_10);
  std::string::~string(asStack_10);
  __filename = (char *)FUN_0547429c(asStack_18);
  __stream = fopen(__filename,"w+b");
  uVar2 = 0;
  if (__stream != (FILE *)0x0) {
    fseek(__stream,param_2 - 1,0);
    iVar1 = ferror(__stream);
    if (iVar1 == 0) {
      fputc(0x30,__stream);
      iVar1 = ferror(__stream);
      if (iVar1 == 0) {
        uVar2 = 1;
        fclose(__stream);
        goto LAB_052cc434;
      }
    }
    uVar2 = 0;
    fclose(__stream);
  }
LAB_052cc434:
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::CopyFile(std::string const&, std::string const&) */

void __thiscall
Sexy::AndroidAppDriver::CopyFile(AndroidAppDriver *this,string *param_1,string *param_2)

{
  char *pcVar1;
  FILE *__stream;
  FILE *__stream_00;
  size_t __n;
  undefined8 uVar2;
  long *plVar3;
  string asStack_420 [8];
  string asStack_418 [8];
  string asStack_410 [8];
  undefined1 auStack_408 [1024];
  long local_8;
  
  plVar3 = *(long **)(*(long *)(this + 0x88) + 0x28);
  local_8 = ___stack_chk_guard;
  (**(code **)(*plVar3 + 0x20))(asStack_420,plVar3);
  (**(code **)(*plVar3 + 0x20))(asStack_418,plVar3,param_2);
  GetFileDir(asStack_418,false);
  DFinder::createDirectory(asStack_410);
  std::string::~string(asStack_410);
  pcVar1 = (char *)FUN_0547429c(asStack_420);
  __stream = fopen(pcVar1,"rb");
  pcVar1 = (char *)FUN_0547429c(asStack_418);
  __stream_00 = fopen(pcVar1,"wb");
  if ((__stream_00 == (FILE *)0x0) || (__stream == (FILE *)0x0)) {
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
    if (__stream_00 == (FILE *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      fclose(__stream_00);
    }
  }
  else {
    while (__n = fread(auStack_408,1,0x400,__stream), __n != 0) {
      fwrite(auStack_408,1,__n,__stream_00);
    }
    uVar2 = 1;
    fclose(__stream);
    fclose(__stream_00);
  }
  std::string::~string(asStack_418);
  std::string::~string(asStack_420);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::RenameFile(std::string const&, std::string const&) */

void __thiscall
Sexy::AndroidAppDriver::RenameFile(AndroidAppDriver *this,string *param_1,string *param_2)

{
  int iVar1;
  char *__old;
  char *__new;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetFileDir(param_2,false);
  DFinder::createDirectory(asStack_10);
  std::string::~string(asStack_10);
  __old = (char *)FUN_0547429c(param_1);
  __new = (char *)FUN_0547429c(param_2);
  iVar1 = rename(__old,__new);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0);
}


/* Sexy::AndroidAppDriver::GetPackageName() */

undefined8 Sexy::AndroidAppDriver::GetPackageName(void)

{
  Info *in_x0;
  undefined8 in_x8;
  
  Android::Info::SysGetPackageName(in_x0);
  return in_x8;
}


/* Sexy::AndroidAppDriver::WriteBufferToFile(std::string const&, Sexy::Buffer const*) */

void __thiscall
Sexy::AndroidAppDriver::WriteBufferToFile(AndroidAppDriver *this,string *param_1,Buffer *param_2)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(long *)this + 0x268);
  uVar2 = Buffer::GetDataPtr(param_2);
  iVar1 = Buffer::GetDataLen(param_2);
  (*pcVar3)(this,param_1,uVar2,(long)iVar1);
  return;
}


/* Sexy::AndroidAppDriver::GetOptimizedImage(std::string const&, bool, bool) */

undefined8 __thiscall
Sexy::AndroidAppDriver::GetOptimizedImage
          (AndroidAppDriver *this,string *param_1,bool param_2,bool param_3)

{
  undefined8 uVar1;
  
  if (this[500] == (AndroidAppDriver)0x0) {
    uVar1 = AndroidGraphicsDriver::GetOptimizedImage
                      (*(AndroidGraphicsDriver **)(this + 0x98),param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}


/* Sexy::AndroidAppDriver::GetOptimizedImage(ImageLib::Image*, bool, bool, bool) */

undefined8 __thiscall
Sexy::AndroidAppDriver::GetOptimizedImage
          (AndroidAppDriver *this,Image *param_1,bool param_2,bool param_3,bool param_4)

{
  undefined8 uVar1;
  
  if (this[500] == (AndroidAppDriver)0x0) {
    uVar1 = AndroidGraphicsDriver::GetOptimizedImage
                      (*(AndroidGraphicsDriver **)(this + 0x98),param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::WriteBytesToFile(std::string const&, void const*, unsigned long) */

void __thiscall
Sexy::AndroidAppDriver::WriteBytesToFile
          (AndroidAppDriver *this,string *param_1,void *param_2,ulong param_3)

{
  char *__filename;
  FILE *__s;
  undefined1 *puVar1;
  string *extraout_x1;
  string *extraout_x1_00;
  char cVar2;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(*(long *)(this + 0x88) + 0x28) + 0x20))
            (asStack_28,*(long **)(*(long *)(this + 0x88) + 0x28));
  GetFileDir(asStack_28,false);
  DFinder::createDirectory(asStack_10);
  std::string::~string(asStack_10);
  __filename = (char *)FUN_0547429c(asStack_28);
  __s = fopen(__filename,"w+b");
  cVar2 = '\0';
  if (__s != (FILE *)0x0) {
    fwrite(param_2,1,param_3,__s);
    fclose(__s);
    if ((*(char *)(*(long *)(this + 0x88) + 0x6d9) != '\0') &&
       (cVar2 = *(char *)(*(long *)(this + 0x88) + 0x6d8), cVar2 != '\0')) {
      GetFullPath((Sexy *)param_1,asStack_18);
      std::string::string(asStack_10,"Buffer");
      puVar1 = (undefined1 *)FUN_052cc768();
      std::string::~string(asStack_10);
      nop();
      std::string::~string(asStack_18);
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = 1;
        memcpy(puVar1 + 1,param_2,param_3);
        GetFullPath((Sexy *)param_1,extraout_x1);
        std::string::string(asStack_10,"Buffer");
        GetFullPath((Sexy *)param_1,extraout_x1_00);
        std::string::~string(asStack_18);
        std::string::~string(asStack_10);
        nop();
        std::string::~string(asStack_20);
        goto LAB_052cc844;
      }
    }
    cVar2 = '\x01';
  }
LAB_052cc844:
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::ReadBufferFromFile(std::string const&, Sexy::Buffer*, bool) */

void Sexy::AndroidAppDriver::ReadBufferFromFile(string *param_1,Buffer *param_2,bool param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ColourFit *this;
  undefined1 *puVar5;
  string *psVar6;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  Buffer *this_00;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this_00 = (Buffer *)(ulong)param_3;
  local_8 = ___stack_chk_guard;
  if (*(byte *)(*(long *)(param_1 + 0x88) + 0x6d9) == 0) {
LAB_052ccd44:
    FUN_0547429c(param_2);
    lVar4 = FUN_052ccc98();
    if (lVar4 != 0) {
      FUN_052ccbf8(lVar4,2);
      iVar3 = FUN_052cbbdc(lVar4);
      FUN_052ccbf8(lVar4,0);
      this = operator_new__((long)iVar3);
      FUN_052ccb38(this,iVar3,lVar4);
      FUN_052cbcf8(lVar4);
      Buffer::Clear(this_00);
      Buffer::SetData(this_00,(uchar *)this,iVar3);
      psVar6 = *(string **)(param_1 + 0x88);
      if ((psVar6[0x6d8] != (string)0x0) && (psVar6[0x6d9] != (string)0x0)) {
        GetFullPath((Sexy *)param_2,psVar6);
        std::string::string(asStack_10,"Buffer");
        puVar5 = (undefined1 *)FUN_052cc768();
        std::string::~string(asStack_10);
        nop();
        std::string::~string(asStack_18);
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = 1;
          memcpy(puVar5 + 1,this,(long)iVar3);
          GetFullPath((Sexy *)param_2,extraout_x1_01);
          std::string::string(asStack_10,"Buffer");
          GetFullPath((Sexy *)param_2,extraout_x1_02);
          std::string::~string(asStack_18);
          std::string::~string(asStack_10);
          nop();
          std::string::~string(asStack_20);
        }
      }
      cVar2 = '\x01';
      EATextSquish::ColourFit::~ColourFit(this);
      goto LAB_052ccdc8;
    }
    bVar1 = *(byte *)(*(long *)(param_1 + 0x88) + 0x6d8);
    if ((bVar1 != 0) && (*(char *)(*(long *)(param_1 + 0x88) + 0x6d9) != '\0')) {
      GetFullPath((Sexy *)param_2,(string *)(ulong)bVar1);
      std::string::string(asStack_10,"Buffer");
      puVar5 = (undefined1 *)FUN_052cc768();
      std::string::~string(asStack_10);
      nop();
      std::string::~string(asStack_18);
      if (puVar5 != (undefined1 *)0x0) {
        *puVar5 = 0;
        GetFullPath((Sexy *)param_2,extraout_x1);
        std::string::string(asStack_10,"Buffer");
        GetFullPath((Sexy *)param_2,extraout_x1_00);
        std::string::~string(asStack_18);
        std::string::~string(asStack_10);
        nop();
        std::string::~string(asStack_20);
        cVar2 = '\0';
        goto LAB_052ccdc8;
      }
    }
  }
  else {
    GetFullPath((Sexy *)param_2,(string *)(ulong)*(byte *)(*(long *)(param_1 + 0x88) + 0x6d9));
    std::string::string(asStack_10,"Buffer");
    cVar2 = FUN_052cc760();
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    if (cVar2 == '\0') goto LAB_052ccd44;
    if (cRam0000000000000000 != '\0') {
      Buffer::Clear(this_00);
      Buffer::SetData(this_00,(uchar *)0x1,-1);
      goto LAB_052ccdc8;
    }
  }
  cVar2 = '\0';
LAB_052ccdc8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* Sexy::AndroidAppDriver::Start() */

void __thiscall Sexy::AndroidAppDriver::Start(AndroidAppDriver *this)

{
  AndroidAppDriver *this_00;
  long lVar1;
  long *plVar2;
  code *pcVar3;
  
  this_00 = this;
  if (*(char *)(*(long *)(this + 0x88) + 0x6b4) != '\0') {
    this_00 = (AndroidAppDriver *)(**(code **)(*(long *)this + 0xb8))();
  }
  lVar1 = SexyTime((Sexy *)this_00);
  plVar2 = *(long **)(this + 0x88);
  *(undefined1 *)((long)plVar2 + 0x661) = 1;
  plVar2[0xbe] = lVar1;
  pcVar3 = *(code **)(*plVar2 + 0x200);
  plVar2[0xbf] = lVar1;
  *(int *)((long)plVar2 + 0x454) = (int)lVar1;
  (*pcVar3)(plVar2[0x1d],plVar2);
  (**(code **)(**(long **)(this + 0x88) + 0x1f8))((*(long **)(this + 0x88))[0x1c]);
  return;
}


/* Sexy::AndroidAppDriver::Init() */

void __thiscall Sexy::AndroidAppDriver::Init(AndroidAppDriver *this)

{
  uint __seed;
  undefined8 uVar1;
  Sexy *this_00;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x88);
  uVar1 = SexyTime((Sexy *)this);
  lVar2 = *(long *)(this + 0x88);
  *(undefined8 *)(lVar3 + 0x70) = uVar1;
  this_00 = (Sexy *)SRand(*(ulong *)(lVar2 + 0x70));
  __seed = SexyTime(this_00);
  srand(__seed);
  return;
}


/* Sexy::AndroidAppDriver::ClearUpdateBacklog(bool) */

void __thiscall Sexy::AndroidAppDriver::ClearUpdateBacklog(AndroidAppDriver *this,bool param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x88);
  uVar1 = SexyTime((Sexy *)this);
  lVar2 = *(long *)(this + 0x88);
  *(undefined8 *)(lVar3 + 0x5e8) = uVar1;
  *(undefined8 *)(lVar2 + 0x5e0) = 0;
  if (param_1) {
    *(undefined4 *)(lVar2 + 0xb8) = 1000;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::InitAppDriver() */

void __thiscall Sexy::AndroidAppDriver::InitAppDriver(AndroidAppDriver *this)

{
  Info *this_00;
  undefined4 uVar1;
  string *this_01;
  Sexy *pSVar2;
  undefined8 uVar3;
  SexyAppBase *pSVar4;
  size_t in_x2;
  size_t __n;
  int iVar5;
  long lVar6;
  long lVar7;
  ResourceManager *this_02;
  undefined1 auStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  Info *local_8;
  
  lVar6 = *(long *)(this + 0x88);
  *(undefined1 *)(lVar6 + 0x106) = 0;
  this_00 = ___stack_chk_guard;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x184) = 0;
  Android::Info::SysGetProductVersion(this_00);
  FUN_05474278(lVar6 + 0x3d0,asStack_10);
  std::string::~string(asStack_10);
  this_01 = std::string::append((string *)(*(long *)(this + 0x88) + 0xa8),"",in_x2);
  lVar6 = *(long *)(this + 0x88);
  *(undefined1 *)(lVar6 + 0x3bf) = 0;
  *(undefined1 *)(lVar6 + 0x3c0) = 1;
  uVar1 = SexyTime((Sexy *)this_01);
  __n = *(size_t *)(this + 0x88);
  *(undefined4 *)(lVar6 + 0x3b8) = uVar1;
  *(undefined1 *)(__n + 0x3ac) = 0;
  std::string::append((string *)(__n + 0x90),"Product",__n);
  FUN_054772c4(*(long *)(this + 0x88) + 0x98,&DAT_0574ef68);
  lVar6 = *(long *)(this + 0x88);
  *(undefined4 *)(lVar6 + 0x5cc) = 0x41200000;
  *(undefined4 *)(lVar6 + 0xc4) = 0xffffffff;
  *(undefined4 *)(lVar6 + 0xd4) = 0x280;
  *(undefined8 *)(lVar6 + 0x5d8) = 0;
  *(undefined8 *)(lVar6 + 0x618) = 0x3ff0000000000000;
  *(undefined4 *)(lVar6 + 0xd8) = 0x1e0;
  *(undefined8 *)(lVar6 + 0x5e0) = 0;
  *(undefined4 *)(lVar6 + 200) = 0xffffffff;
  *(undefined4 *)(lVar6 + 0xcc) = 0xffffffff;
  *(undefined4 *)(lVar6 + 0xd0) = 0xffffffff;
  *(undefined1 *)(lVar6 + 0x3ad) = 0;
  *(undefined1 *)(lVar6 + 0x3ae) = 0;
  *(undefined4 *)(lVar6 + 0xdc) = 0x10;
  *(undefined1 *)(lVar6 + 0x3af) = 1;
  *(undefined1 *)(lVar6 + 0x3b0) = 1;
  *(undefined1 *)(lVar6 + 0x3b1) = 0;
  *(undefined1 *)(lVar6 + 0x3bc) = 0;
  *(undefined1 *)(lVar6 + 0x3bd) = 1;
  *(undefined1 *)(lVar6 + 0x3be) = 0;
  *(undefined4 *)(lVar6 + 0x5c8) = 0;
  *(undefined4 *)(lVar6 + 0x604) = 0;
  *(undefined4 *)(lVar6 + 0x600) = 0;
  *(undefined4 *)(lVar6 + 0x608) = 0;
  *(undefined4 *)(lVar6 + 0x60c) = 0;
  *(undefined4 *)(lVar6 + 0x610) = 0;
  *(undefined1 *)(lVar6 + 0x5d2) = 1;
  *(undefined1 *)(lVar6 + 0x5d0) = 0;
  *(undefined1 *)(lVar6 + 0x5d1) = 0;
  *(undefined8 *)(lVar6 + 0x5e8) = 0;
  *(undefined4 *)(lVar6 + 0x614) = 10;
  *(undefined1 *)(lVar6 + 0x620) = 0;
  *(undefined4 *)(lVar6 + 0x624) = 0;
  *(undefined1 *)(lVar6 + 0x628) = 0;
  *(undefined1 *)(lVar6 + 0x629) = 0;
  *(undefined8 *)(lVar6 + 0x648) = 0;
  *(undefined4 *)(lVar6 + 0x644) = 0;
  *(undefined1 *)(lVar6 + 0x660) = 0;
  *(undefined1 *)(lVar6 + 0x661) = 0;
  *(undefined1 *)(lVar6 + 0x662) = 1;
  *(undefined1 *)(lVar6 + 0x3b5) = 0;
  *(undefined1 *)(lVar6 + 0x663) = 0;
  *(undefined1 *)(lVar6 + 0x664) = 0;
  *(undefined1 *)(lVar6 + 0x665) = 0;
  *(undefined1 *)(lVar6 + 0x6b7) = 0;
  *(undefined1 *)(lVar6 + 0x6b8) = 0;
  *(undefined1 *)(lVar6 + 0x6d0) = 0;
  *(undefined1 *)(lVar6 + 0x6d1) = 0;
  *(undefined1 *)(lVar6 + 0x6b5) = 0;
  *(undefined1 *)(lVar6 + 0x6b4) = 1;
  *(undefined1 *)(lVar6 + 0x6b6) = 0;
  *(undefined1 *)(lVar6 + 0x6d2) = 0;
  *(undefined4 *)(lVar6 + 0x6dc) = 0;
  *(undefined4 *)(lVar6 + 0x6e0) = 0;
  *(undefined4 *)(lVar6 + 0x6bc) = 0;
  pSVar2 = (Sexy *)SexyTime((Sexy *)0xffffffff);
  *(Sexy **)(lVar6 + 0x630) = pSVar2;
  lVar6 = *(long *)(this + 0x88);
  pSVar2 = (Sexy *)SexyTime(pSVar2);
  lVar7 = *(long *)(this + 0x88);
  *(Sexy **)(lVar6 + 0x638) = pSVar2;
  *(undefined1 *)(lVar7 + 0x6d3) = 1;
  *(undefined1 *)(lVar7 + 0x3b2) = 0;
  *(undefined1 *)(lVar7 + 0x3b3) = 0;
  *(undefined1 *)(lVar7 + 0x666) = 1;
  *(undefined1 *)(lVar7 + 0x6d4) = 0;
  *(undefined1 *)(lVar7 + 0x6d5) = 0;
  *(undefined1 *)(lVar7 + 0x440) = 0;
  *(undefined1 *)(lVar7 + 0x3b4) = 0;
  *(undefined1 *)(lVar7 + 0x6d6) = 1;
  *(undefined1 *)(lVar7 + 0x3c2) = 0;
  *(undefined1 *)(lVar7 + 0x102) = 0;
  *(undefined1 *)(lVar7 + 0x103) = 0;
  *(undefined1 *)(lVar7 + 0x6e6) = 0;
  *(undefined1 *)(lVar7 + 0x6e7) = 0;
  *(undefined1 *)(lVar7 + 0x6e8) = 1;
  *(undefined4 *)(lVar7 + 0x640) = 0;
  *(undefined1 *)(lVar7 + 0x5c4) = 0;
  *(undefined1 *)(lVar7 + 0x104) = 1;
  *(undefined1 *)(lVar7 + 0x105) = 1;
  *(undefined1 *)(lVar7 + 0x6e5) = 0;
  *(undefined1 *)(lVar7 + 0x6d8) = 1;
  *(undefined1 *)(lVar7 + 0x6d9) = 0;
  *(undefined1 *)(lVar7 + 0x6da) = 1;
  *(undefined4 *)(lVar7 + 0x470) = 0;
  *(undefined4 *)(lVar7 + 0x474) = 0;
  *(undefined1 *)(lVar7 + 0x478) = 0;
  *(undefined1 *)(lVar7 + 0x479) = 1;
  *(undefined4 *)(lVar7 + 0x680) = 0;
  *(undefined8 *)(lVar7 + 0xe0) = 0x3feb333333333333;
  *(undefined8 *)(lVar7 + 0xe8) = 0x3feb333333333333;
  uVar3 = SexyTime(pSVar2);
  lVar6 = *(long *)(this + 0x88);
  *(undefined8 *)(lVar7 + 0x670) = uVar3;
  *(undefined4 *)(lVar6 + 0x6ec) = 100;
  *(undefined8 *)(lVar6 + 0x690) = 0;
  *(undefined4 *)(lVar6 + 0x710) = 6;
  *(undefined8 *)(lVar6 + 0x6a0) = 0;
  *(undefined4 *)(lVar6 + 0x6ac) = 0;
  *(undefined4 *)(lVar6 + 0x714) = 0xe;
  *(undefined4 *)(lVar6 + 0x678) = 0;
  *(undefined4 *)(lVar6 + 0x684) = 0;
  *(undefined4 *)(lVar6 + 0x67c) = 0;
  *(undefined1 *)(lVar6 + 0x688) = 0;
  *(undefined4 *)(lVar6 + 0x68c) = 0;
  *(undefined4 *)(lVar6 + 0x698) = 0;
  *(undefined4 *)(lVar6 + 0x6a8) = 0;
  *(undefined4 *)(lVar6 + 0x668) = 0;
  *(undefined4 *)(lVar6 + 0x6b0) = 0;
  *(undefined1 *)(lVar6 + 0x6e4) = 0;
  *(undefined1 *)(lVar6 + 0x100) = 0;
  *(undefined1 *)(lVar6 + 0x101) = 0;
  *(undefined1 *)(lVar6 + 0x6f0) = 0;
  *(undefined1 *)(lVar6 + 0x6f1) = 1;
  *(undefined1 *)(lVar6 + 0x6f2) = 0;
  *(undefined4 *)(lVar6 + 0x6f4) = 0;
  *(undefined8 *)(lVar6 + 0x6f8) = 0;
  *(undefined8 *)(lVar6 + 0x700) = 0;
  *(undefined1 *)(lVar6 + 0x708) = 0;
  *(undefined1 *)(lVar6 + 0x709) = 1;
  *(undefined1 *)(lVar6 + 0x70a) = 0;
  *(undefined1 *)(lVar6 + 0x70b) = 0;
  *(undefined1 *)(lVar6 + 0x70c) = 0;
  *(undefined4 *)(lVar6 + 0xb8) = 0;
  *(undefined1 *)(lVar6 + 0x718) = 0;
  *(undefined1 *)(lVar6 + 0x719) = 1;
  *(undefined1 *)(lVar6 + 0x72c) = 0;
  Ratio::Set((Ratio *)(lVar6 + 0x730),4,3);
  Ratio::Set((Ratio *)(*(long *)(this + 0x88) + 0x738),4,3);
  Ratio::Set((Ratio *)(*(long *)(this + 0x88) + 0x740),0x10,10);
  pSVar2 = *(Sexy **)(this + 0x88);
  pSVar2[0x6d7] = (Sexy)0x0;
  *(undefined8 *)(pSVar2 + 0x8b0) = 0;
  GetLocale(pSVar2);
  this_02 = *(ResourceManager **)(*(long *)(this + 0x88) + 0x848);
  uVar1 = ResourceManager::GetLocaleSetForLocaleName(this_02,asStack_20);
  lVar6 = *(long *)(this + 0x88);
  *(undefined4 *)(this_02 + 0x20c) = uVar1;
  Android::Graphics::GetScreenSizeInPixels(this,(int *)(lVar6 + 0x74c),(int *)(lVar6 + 0x750));
  pSVar4 = *(SexyAppBase **)(this + 0x88);
  SexyAppBase::SetNativeScreenSize(pSVar4,*(int *)(pSVar4 + 0x74c),*(int *)(pSVar4 + 0x750));
  lVar6 = *(long *)(this + 0x88);
  iVar5 = 0;
  *(undefined1 *)(lVar6 + 0x754) = 0;
  *(undefined8 *)(lVar6 + 0x3e0) = 0;
  *(undefined8 *)(lVar6 + 0x3d8) = 0;
  *(undefined8 *)(lVar6 + 0x3f0) = 0;
  *(undefined8 *)(lVar6 + 1000) = 0;
  *(undefined8 *)(lVar6 + 0x400) = 0;
  *(undefined8 *)(lVar6 + 0x3f8) = 0;
  *(undefined8 *)(lVar6 + 0x410) = 0;
  *(undefined8 *)(lVar6 + 0x408) = 0;
  *(undefined8 *)(lVar6 + 0x420) = 0;
  *(undefined8 *)(lVar6 + 0x418) = 0;
  *(undefined8 *)(lVar6 + 0x430) = 0;
  *(undefined8 *)(lVar6 + 0x428) = 0;
  *(undefined8 *)(lVar6 + 0x438) = 0;
  do {
    *(char *)(*(long *)(this + 0x88) + (long)iVar5 + 0x15c) = (char)iVar5;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x100);
  iVar5 = 0x100;
  do {
    lVar6 = (long)iVar5;
    iVar5 = iVar5 + 1;
    *(undefined1 *)(*(long *)(this + 0x88) + lVar6 + 0x15c) = 0xff;
  } while (iVar5 != 0x200);
  pSVar4 = *(SexyAppBase **)(this + 0x88);
  std::string::string(asStack_18,"UPDATE_CHECK_TITLE");
  FUN_05478178(asStack_10,L"Update Check",auStack_28);
  SexyAppBase::SetString(pSVar4,asStack_18,(wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  pSVar4 = *(SexyAppBase **)(this + 0x88);
  std::string::string(asStack_18,"UPDATE_CHECK_BODY");
  FUN_05478178(asStack_10,L"Checking if there are any updates available for this product ...",
               auStack_28);
  SexyAppBase::SetString(pSVar4,asStack_18,(wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  pSVar4 = *(SexyAppBase **)(this + 0x88);
  std::string::string(asStack_18,"UP_TO_DATE_TITLE");
  FUN_05478178(asStack_10,L"Up to Date",auStack_28);
  SexyAppBase::SetString(pSVar4,asStack_18,(wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  pSVar4 = *(SexyAppBase **)(this + 0x88);
  std::string::string(asStack_18,"UP_TO_DATE_BODY");
  FUN_05478178(asStack_10,L"There are no updates available for this product at this time.",
               auStack_28);
  SexyAppBase::SetString(pSVar4,asStack_18,(wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  pSVar4 = *(SexyAppBase **)(this + 0x88);
  std::string::string(asStack_18,"NEW_VERSION_TITLE");
  FUN_05478178(asStack_10,L"New Version",auStack_28);
  SexyAppBase::SetString(pSVar4,asStack_18,(wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  pSVar4 = *(SexyAppBase **)(this + 0x88);
  std::string::string(asStack_18,"NEW_VERSION_BODY");
  FUN_05478178(asStack_10,
               L"There is an update available for this product.  Would you like to visit the web site to download it?"
               ,auStack_28);
  SexyAppBase::SetString(pSVar4,asStack_18,(wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  this[0xb0] = (AndroidAppDriver)0x0;
  this[0xb8] = (AndroidAppDriver)0x1;
  this[0x182] = (AndroidAppDriver)0x0;
  gIs3D = 1;
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* Sexy::AndroidAppDriver::HandleApplicationWillBecomeForeground() */

void __thiscall
Sexy::AndroidAppDriver::HandleApplicationWillBecomeForeground(AndroidAppDriver *this)

{
  OutputDebugStrF((wchar_t *)"HandleApplicationWillBecomeForeground");
  this[0x1d8] = (AndroidAppDriver)0x1;
  Event0::operator()((Event0 *)(this + 0x68));
  return;
}


/* Sexy::AndroidAppDriver::HandleApplicationDidEnterBackground() */

void __thiscall Sexy::AndroidAppDriver::HandleApplicationDidEnterBackground(AndroidAppDriver *this)

{
  OutputDebugStrF((wchar_t *)"HandleApplicationDidEnterBackground");
  if (*(code **)(**(long **)(this + 0x88) + 0xf8) != SexyAppBase::AppEnteredBackground) {
    (**(code **)(**(long **)(this + 0x88) + 0xf8))();
  }
  Event0::operator()((Event0 *)(this + 0x48));
  return;
}


/* Sexy::AndroidAppDriver::HandleAndroidSurfaceCreated() */

void Sexy::AndroidAppDriver::HandleAndroidSurfaceCreated(void)

{
  if (OpenGLIdRegistry::spGlobalRegistry != (OpenGLIdRegistry *)0x0) {
    OpenGLIdRegistry::ValidateAllIds(OpenGLIdRegistry::spGlobalRegistry);
    return;
  }
  return;
}


/* Sexy::AndroidAppDriver::HandleAndroidLifecyclePause() */

void __thiscall Sexy::AndroidAppDriver::HandleAndroidLifecyclePause(AndroidAppDriver *this)

{
  AtomicIncrement((int *)(this + 0x1f8));
  this[500] = (AndroidAppDriver)0x1;
  return;
}


/* Sexy::AndroidAppDriver::HandleAndroidLifecycleResume() */

void __thiscall Sexy::AndroidAppDriver::HandleAndroidLifecycleResume(AndroidAppDriver *this)

{
  if (0 < *(int *)(this + 0x1f8)) {
    this[0x1d8] = (AndroidAppDriver)0x1;
    AtomicDecrement((int *)(this + 0x1f8));
    return;
  }
  Event0::operator()((Event0 *)(this + 0x28));
  return;
}


/* Sexy::AndroidAppDriver::HandleAndroidLifecycleDestroy() */

void __thiscall Sexy::AndroidAppDriver::HandleAndroidLifecycleDestroy(AndroidAppDriver *this)

{
  *(undefined1 *)(*(long *)(this + 0x88) + 0x3ad) = 1;
  return;
}


/* Sexy::AndroidAppDriver::HandleAndroidLifecycleEvent(AndroidAppEvent*) */

void __thiscall
Sexy::AndroidAppDriver::HandleAndroidLifecycleEvent(AndroidAppDriver *this,AndroidAppEvent *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 4) {
    HandleAndroidLifecyclePause(this);
    return;
  }
  if (iVar1 != 6) {
    if (iVar1 != 3) {
      return;
    }
    HandleAndroidLifecycleResume(this);
    return;
  }
  HandleAndroidLifecycleDestroy(this);
  return;
}


/* Sexy::AndroidAppDriver::StartSounds() */

void __thiscall Sexy::AndroidAppDriver::StartSounds(AndroidAppDriver *this)

{
  if (*(code **)(**(long **)(this + 0x88) + 0x2d8) != SexyAppBase::StartSounds) {
    (**(code **)(**(long **)(this + 0x88) + 0x2d8))();
  }
  return;
}


/* Sexy::AndroidAppDriver::ActivateAudioSession() */

void __thiscall Sexy::AndroidAppDriver::ActivateAudioSession(AndroidAppDriver *this)

{
  (**(code **)(**(long **)(this + 0x88) + 0x2e0))(*(long **)(this + 0x88));
  this[0xb0] = (AndroidAppDriver)0x1;
  return;
}


/* Sexy::AndroidAppDriver::GotFocus() */

void __thiscall Sexy::AndroidAppDriver::GotFocus(AndroidAppDriver *this)

{
  this[500] = (AndroidAppDriver)0x0;
  ActivateAudioSession(this);
  (**(code **)(**(long **)(this + 0x88) + 0x2c8))(*(long **)(this + 0x88));
  Event0::operator()((Event0 *)(this + 0x28));
  Android::UI::DidRecieveFocus();
  return;
}


/* Sexy::AndroidAppDriver::HandleApplicationDidBecomeActive() */

void __thiscall Sexy::AndroidAppDriver::HandleApplicationDidBecomeActive(AndroidAppDriver *this)

{
  OutputDebugStrF((wchar_t *)"HandleApplicationDidBecomeActive");
  GotFocus(this);
  Event0::operator()((Event0 *)(this + 0x28));
  return;
}


/* Sexy::AndroidAppDriver::DeactivateAudioSession() */

void __thiscall Sexy::AndroidAppDriver::DeactivateAudioSession(AndroidAppDriver *this)

{
  (**(code **)(**(long **)(this + 0x88) + 0x2e8))(*(long **)(this + 0x88));
  this[0xb0] = (AndroidAppDriver)0x0;
  return;
}


/* Sexy::AndroidAppDriver::LostFocus() */

void __thiscall Sexy::AndroidAppDriver::LostFocus(AndroidAppDriver *this)

{
  this[500] = (AndroidAppDriver)0x1;
  Event0::operator()((Event0 *)(this + 0x48));
  (**(code **)(**(long **)(this + 0x88) + 0x2d0))(*(long **)(this + 0x88));
  DeactivateAudioSession(this);
  return;
}


/* Sexy::AndroidAppDriver::HandleApplicationWillResignActive() */

void __thiscall Sexy::AndroidAppDriver::HandleApplicationWillResignActive(AndroidAppDriver *this)

{
  OutputDebugStrF((wchar_t *)"HandleApplicationWillResignActive");
  LostFocus(this);
  Event0::operator()((Event0 *)(this + 8));
  return;
}


/* Sexy::AndroidAppDriver::DoUpdateFramesF(float) */

void __thiscall Sexy::AndroidAppDriver::DoUpdateFramesF(AndroidAppDriver *this,float param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x88);
  if ((*(char *)(lVar1 + 0x6f0) != '\0') && (*(char *)(lVar1 + 0x663) == '\0')) {
    WidgetManager::UpdateFrameF(*(WidgetManager **)(lVar1 + 0x360),param_1);
    return;
  }
  return;
}


/* Sexy::AndroidAppDriver::Redraw() */

void __thiscall Sexy::AndroidAppDriver::Redraw(AndroidAppDriver *this)

{
  (**(code **)(**(long **)(this + 0x98) + 0x70))(*(long **)(this + 0x98),0);
  return;
}


/* Sexy::AndroidAppDriver::KeyDown(Sexy::KeyCode, wchar_t) */

void __thiscall
Sexy::AndroidAppDriver::KeyDown(AndroidAppDriver *this,undefined4 param_2,wchar_t param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(long **)(this + 0x88) + 0x2f0))(*(long **)(this + 0x88));
  if (cVar1 != '\0') {
    return;
  }
  WidgetManager::KeyDown(*(WidgetManager **)(*(long *)(this + 0x88) + 0x360),param_2);
  WidgetManager::KeyChar(*(WidgetManager **)(*(long *)(this + 0x88) + 0x360),param_3);
  return;
}


/* Sexy::AndroidAppDriver::GetMemoryUsed() */

void Sexy::AndroidAppDriver::GetMemoryUsed(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Android::Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Android::Util::GetGameObject(p_Var1);
    _JNIEnv::CallLongMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x260));
    return;
  }
  return;
}


/* Sexy::AndroidAppDriver::GetMemoryAvailable() */

void Sexy::AndroidAppDriver::GetMemoryAvailable(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Android::Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Android::Util::GetGameObject(p_Var1);
    _JNIEnv::CallLongMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 600));
    return;
  }
  return;
}


/* Sexy::AndroidAppDriver::InitConfig() */

undefined8 __thiscall Sexy::AndroidAppDriver::InitConfig(AndroidAppDriver *this)

{
  if (this[0x182] == (AndroidAppDriver)0x0) {
    EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)this);
    this[0x182] = (AndroidAppDriver)0x1;
  }
  return 1;
}


/* Sexy::AndroidAppDriver::ConfigReadString(std::string const&, std::string*) */

void __thiscall
Sexy::AndroidAppDriver::ConfigReadString(AndroidAppDriver *this,string *param_1,string *param_2)

{
  char cVar1;
  
  cVar1 = InitConfig(this);
  if (cVar1 == '\0') {
    return;
  }
  Android::Config::ConfigReadUTF8String((Config *)param_1,param_2,param_2);
  return;
}


/* Sexy::AndroidAppDriver::ConfigReadString(std::string const&, std::wstring*) */

void __thiscall
Sexy::AndroidAppDriver::ConfigReadString(AndroidAppDriver *this,string *param_1,wstring *param_2)

{
  char cVar1;
  
  cVar1 = InitConfig(this);
  if (cVar1 == '\0') {
    return;
  }
  Android::Config::ConfigReadWideString((Config *)param_1,(string *)param_2,param_2);
  return;
}


/* Sexy::AndroidAppDriver::ConfigReadInteger(std::string const&, int*) */

void __thiscall
Sexy::AndroidAppDriver::ConfigReadInteger(AndroidAppDriver *this,string *param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = InitConfig(this);
  if (cVar1 == '\0') {
    return;
  }
  Android::Config::ConfigReadInteger((Config *)param_1,(string *)param_2,param_2);
  return;
}


/* Sexy::AndroidAppDriver::ConfigReadBoolean(std::string const&, bool*) */

void __thiscall
Sexy::AndroidAppDriver::ConfigReadBoolean(AndroidAppDriver *this,string *param_1,bool *param_2)

{
  char cVar1;
  
  cVar1 = InitConfig(this);
  if (cVar1 == '\0') {
    return;
  }
  Android::Config::ConfigReadBoolean((Config *)param_1,(string *)param_2,param_2);
  return;
}


/* Sexy::AndroidAppDriver::ConfigWriteString(std::string const&, std::string const&) */

void __thiscall
Sexy::AndroidAppDriver::ConfigWriteString(AndroidAppDriver *this,string *param_1,string *param_2)

{
  char cVar1;
  
  cVar1 = InitConfig(this);
  if (cVar1 == '\0') {
    return;
  }
  Android::Config::ConfigWriteUTF8String((Config *)param_1,param_2,param_2);
  return;
}


/* Sexy::AndroidAppDriver::ConfigWriteString(std::string const&, std::wstring const&) */

void __thiscall
Sexy::AndroidAppDriver::ConfigWriteString(AndroidAppDriver *this,string *param_1,wstring *param_2)

{
  char cVar1;
  
  cVar1 = InitConfig(this);
  if (cVar1 == '\0') {
    return;
  }
  Android::Config::ConfigWriteWideString((Config *)param_1,(string *)param_2,param_2);
  return;
}


/* Sexy::AndroidAppDriver::ConfigWriteInteger(std::string const&, int) */

void __thiscall
Sexy::AndroidAppDriver::ConfigWriteInteger(AndroidAppDriver *this,string *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = InitConfig(this);
  if (cVar1 == '\0') {
    return;
  }
  Android::Config::ConfigWriteInteger((Config *)param_1,(string *)(ulong)(uint)param_2,param_2);
  return;
}


/* Sexy::AndroidAppDriver::ConfigWriteBoolean(std::string const&, bool) */

void __thiscall
Sexy::AndroidAppDriver::ConfigWriteBoolean(AndroidAppDriver *this,string *param_1,bool param_2)

{
  char cVar1;
  string *psVar2;
  
  psVar2 = (string *)(ulong)param_2;
  cVar1 = InitConfig(this);
  if (cVar1 == '\0') {
    return;
  }
  Android::Config::ConfigWriteBoolean((Config *)param_1,psVar2,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::ConfigEraseKey(std::wstring const&) */

void __thiscall Sexy::AndroidAppDriver::ConfigEraseKey(AndroidAppDriver *this,wstring *param_1)

{
  char cVar1;
  wstring *extraout_x1;
  undefined1 auVar2 [16];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = InitConfig(this);
  if (cVar1 != '\0') {
    ToWString((Sexy *)param_1,extraout_x1);
    auVar2 = FUN_054765d0(auStack_10);
    if (auVar2._0_8_ != 0) {
      Android::Config::ConfigEraseKey((Config *)param_1,auVar2._8_8_);
    }
    FUN_05476c50(auStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* Sexy::AndroidAppDriver::SysMouseDown(int, int, int) */

void __thiscall
Sexy::AndroidAppDriver::SysMouseDown(AndroidAppDriver *this,int param_1,int param_2,int param_3)

{
  WidgetManager::MouseDown
            (*(WidgetManager **)(*(long *)(this + 0x88) + 0x360),param_1,param_2,param_3);
  return;
}


/* Sexy::AndroidAppDriver::SysMouseUp(int, int, int) */

void __thiscall
Sexy::AndroidAppDriver::SysMouseUp(AndroidAppDriver *this,int param_1,int param_2,int param_3)

{
  WidgetManager::MouseUp
            (*(WidgetManager **)(*(long *)(this + 0x88) + 0x360),param_1,param_2,param_3);
  return;
}


/* Sexy::AndroidAppDriver::SysMouseMove(int, int) */

void __thiscall Sexy::AndroidAppDriver::SysMouseMove(AndroidAppDriver *this,int param_1,int param_2)

{
  WidgetManager::MouseMove(*(WidgetManager **)(*(long *)(this + 0x88) + 0x360),param_1,param_2);
  return;
}


/* Sexy::AndroidAppDriver::SysMouseDrag(int, int) */

void __thiscall Sexy::AndroidAppDriver::SysMouseDrag(AndroidAppDriver *this,int param_1,int param_2)

{
  WidgetManager::MouseDrag(*(WidgetManager **)(*(long *)(this + 0x88) + 0x360),param_1,param_2);
  return;
}


/* Sexy::AndroidAppDriver::SysMouseWheel(int) */

void Sexy::AndroidAppDriver::SysMouseWheel(int param_1)

{
  WidgetManager::MouseWheel((int)*(undefined8 *)(*(long *)((ulong)(uint)param_1 + 0x88) + 0x360));
  return;
}


/* Sexy::AndroidAppDriver::OnBackButtonPressed() */

void __thiscall Sexy::AndroidAppDriver::OnBackButtonPressed(AndroidAppDriver *this)

{
  (**(code **)(**(long **)(this + 0x88) + 0x400))(*(long **)(this + 0x88));
  return;
}


/* Sexy::AndroidAppDriver::TransformPoint(Sexy::Point*) */

void __thiscall Sexy::AndroidAppDriver::TransformPoint(AndroidAppDriver *this,Point *param_1)

{
  WidgetManager::RemapMouse
            (*(WidgetManager **)(*(long *)(this + 0x88) + 0x360),(int *)param_1,(int *)(param_1 + 4)
            );
  return;
}


/* Sexy::AndroidAppDriver::TransformTouch(Sexy::Touch*) */

void __thiscall Sexy::AndroidAppDriver::TransformTouch(AndroidAppDriver *this,Touch *param_1)

{
  TransformPoint(this,(Point *)(param_1 + 0x10));
  TransformPoint(this,(Point *)(param_1 + 0x18));
  return;
}


/* Sexy::AndroidAppDriver::GetScreenMatrix() */

AndroidAppDriver * __thiscall Sexy::AndroidAppDriver::GetScreenMatrix(AndroidAppDriver *this)

{
  return this + 0xbc;
}


/* Sexy::AndroidAppDriver::GetDeviceScreenMatrix() */

AndroidAppDriver * __thiscall Sexy::AndroidAppDriver::GetDeviceScreenMatrix(AndroidAppDriver *this)

{
  return this + 0x104;
}


/* Sexy::AndroidAppDriver::RotateUI(Sexy::UI_ORIENTATION, Sexy::UI_ORIENTATION) */

void __thiscall
Sexy::AndroidAppDriver::RotateUI(AndroidAppDriver *this,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(this + 0x15c) = param_3;
  this[0x159] = (AndroidAppDriver)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::HandleAndroidOrientationChange(AndroidAppEvent*) */

void __thiscall
Sexy::AndroidAppDriver::HandleAndroidOrientationChange
          (AndroidAppDriver *this,AndroidAppEvent *param_1)

{
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (AndroidAppEvent *)0x0) ||
     ((*(int *)(param_1 + 0x14) == 0 && (*(int *)(param_1 + 0x18) == 0)))) {
    RotateUI(this,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  }
  else {
    std::string::string(asStack_20,&DAT_056e5ee8);
    std::string::string(asStack_18,&DAT_056e5ef8);
    std::string::string(asStack_10,&DAT_055e9e50);
    Android::UI::ShowAlertDialog(asStack_20,asStack_18,asStack_10,1);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    std::string::~string(asStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::AndroidAppDriver::SetupScreenMatrix(float) */

void __thiscall Sexy::AndroidAppDriver::SetupScreenMatrix(AndroidAppDriver *this,float param_1)

{
  SexyMatrix4 *this_00;
  
  this_00 = (SexyMatrix4 *)(this + 0xbc);
  SexyMatrix4::LoadIdentity(this_00);
  SexyTransform3D::Translate
            ((SexyTransform3D *)this_00,(float)-(*(int *)(*(long *)(this + 0x88) + 0x724) / 2),
             (float)-(*(int *)(*(long *)(this + 0x88) + 0x728) / 2),0.0);
  if (param_1 != 0.0) {
    SexyTransform3D::RotateRadZ((SexyTransform3D *)this_00,param_1 * 0.017453292);
  }
  SexyTransform3D::Scale
            ((SexyTransform3D *)this_00,1.0 / (float)(*(int *)(this + 0xa8) / 2),
             -1.0 / (float)(*(int *)(this + 0xac) / 2),1.0);
  *(float *)(this + 0xb4) = param_1;
  return;
}


/* Sexy::AndroidAppDriver::DoUpdateFrames() */

undefined8 __thiscall Sexy::AndroidAppDriver::DoUpdateFrames(AndroidAppDriver *this)

{
  AndroidAppDriver AVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  float fVar6;
  
  plVar4 = *(long **)(this + 0x88);
  if ((*(char *)((long)plVar4 + 0x6b6) != '\0') && (*(char *)((long)plVar4 + 0x6b7) == '\0')) {
    *(undefined1 *)(plVar4 + 0xda) = 0;
    *(undefined1 *)((long)plVar4 + 0x6b7) = 1;
    (**(code **)(*plVar4 + 0x50))(plVar4);
  }
  AVar1 = this[0x159];
  if (this[0x158] == (AndroidAppDriver)0x0) {
    if (AVar1 != (AndroidAppDriver)0x0) {
      *(undefined4 *)(this + 0x160) = *(undefined4 *)(this + 0x15c);
      nop();
      (**(code **)(**(long **)(this + 0x88) + 0xd0))
                (*(long **)(this + 0x88),*(undefined4 *)(this + 0x15c));
      this[0x159] = (AndroidAppDriver)0x0;
    }
  }
  else if (AVar1 != (AndroidAppDriver)0x0) {
    lVar3 = SexyTime((Sexy *)(ulong)(byte)AVar1);
    uVar5 = lVar3 - *(long *)(this + 0x148);
    fVar6 = (float)KeyInterpolator<float>::operator()
                             (*(KeyInterpolator<float> **)(this + 0x150),(float)uVar5);
    if (this[0x15a] == (AndroidAppDriver)0x0) {
      iVar2 = KeyInterpolator<float>::LastTick(*(KeyInterpolator<float> **)(this + 0x150));
      if ((ulong)(long)(iVar2 / 2) <= uVar5) {
        *(undefined4 *)(this + 0x160) = *(undefined4 *)(this + 0x15c);
        nop();
        (**(code **)(**(long **)(this + 0x88) + 0xd0))
                  (*(long **)(this + 0x88),*(undefined4 *)(this + 0x15c));
        this[0x15a] = (AndroidAppDriver)0x1;
      }
    }
    SetupScreenMatrix(this,fVar6);
    iVar2 = KeyInterpolator<float>::LastTick(*(KeyInterpolator<float> **)(this + 0x150));
    if ((ulong)(long)iVar2 < uVar5) {
      this[0x159] = (AndroidAppDriver)0x0;
    }
  }
  (**(code **)(**(long **)(this + 0x88) + 0x58))(*(long **)(this + 0x88));
  return 1;
}


/* Sexy::AndroidAppDriver::SetDeviceResolution(int, int) */

void __thiscall
Sexy::AndroidAppDriver::SetDeviceResolution(AndroidAppDriver *this,int param_1,int param_2)

{
  *(int *)(this + 0xfc) = param_1;
  *(int *)(this + 0x100) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::OnGestureFlick(Sexy::GestureFlickDirection, Sexy::Point) */

void __thiscall
Sexy::AndroidAppDriver::OnGestureFlick(AndroidAppDriver *this,undefined4 param_2,TPoint *param_3)

{
  code *pcVar1;
  long *plVar2;
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Point::Point(aPStack_18,param_3);
  TransformPoint(this,aPStack_18);
  plVar2 = *(long **)(this + 0x88);
  pcVar1 = *(code **)(*plVar2 + 1000);
  Point::Point(aPStack_10,(TPoint *)aPStack_18);
  (*pcVar1)(plVar2,param_2,aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::OnGestureLongPress(Sexy::Point) */

void __thiscall Sexy::AndroidAppDriver::OnGestureLongPress(AndroidAppDriver *this,TPoint *param_2)

{
  code *pcVar1;
  long *plVar2;
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Point::Point(aPStack_18,param_2);
  TransformPoint(this,aPStack_18);
  plVar2 = *(long **)(this + 0x88);
  pcVar1 = *(code **)(*plVar2 + 0x3e0);
  Point::Point(aPStack_10,(TPoint *)aPStack_18);
  (*pcVar1)(plVar2,aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::OnGesturePinch(Sexy::Point, int, float) */

void __thiscall
Sexy::AndroidAppDriver::OnGesturePinch
          (undefined8 param_1,AndroidAppDriver *this,TPoint *param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  int local_18 [2];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Point::Point((Point *)local_18,param_3);
  TransformPoint(this,(Point *)local_18);
  plVar3 = *(long **)(this + 0x88);
  iVar1 = *(int *)param_3;
  pcVar2 = *(code **)(*plVar3 + 0x3f0);
  Point::Point(aPStack_10,(TPoint *)local_18);
  (*pcVar2)(param_1,plVar3,aPStack_10,
            (int)(((float)local_18[0] / (float)iVar1) * ((float)local_18[0] / (float)iVar1) *
                 (float)param_4));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::SetupOrientation() */

void __thiscall Sexy::AndroidAppDriver::SetupOrientation(AndroidAppDriver *this)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  WidgetManager *this_00;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Android::Graphics::GetGLViewSize(this,(int *)(this + 0xa8),(int *)(this + 0xac));
  lVar4 = *(long *)(this + 0x88);
  uVar5 = (uint)*(byte *)(lVar4 + 0x719);
  iVar1 = *(int *)(*(long *)(this + 0x98) + 0xc70);
  iVar2 = *(int *)(*(long *)(this + 0x98) + 0xc74);
  uVar6 = uVar5;
  if (*(byte *)(lVar4 + 0x719) != 0) {
    uVar5 = (*(int *)(lVar4 + 0xd4) - iVar1) / 2;
    uVar6 = (*(int *)(lVar4 + 0xd8) - iVar2) / 2;
  }
  *(uint *)(lVar4 + 0x71c) = uVar5;
  *(uint *)(lVar4 + 0x720) = uVar6;
  *(int *)(lVar4 + 0x724) = iVar1;
  *(int *)(lVar4 + 0x728) = iVar2;
  SetupScreenMatrix(this,0.0);
  lVar4 = *(long *)(this + 0x88);
  this_00 = *(WidgetManager **)(lVar4 + 0x360);
  Insets::Insets(aIStack_18,0,0,*(int *)(lVar4 + 0x74c),*(int *)(lVar4 + 0x750));
  WidgetManager::Resize(this_00,(TRect *)(lVar4 + 0x71c),(TRect *)aIStack_18);
  lVar7 = *(long *)(*(long *)(this + 0x88) + 0x360);
  uVar3 = (**(code **)(**(long **)(this + 0x98) + 0x60))(*(long **)(this + 0x98));
  lVar4 = *(long *)(this + 0x88);
  *(undefined8 *)(lVar7 + 0x88) = uVar3;
  (**(code **)(**(long **)(lVar4 + 0x360) + 0xa8))(*(long **)(lVar4 + 0x360));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::AndroidAppDriver::HandleAndroidSurfaceChange(int, int) */

void __thiscall
Sexy::AndroidAppDriver::HandleAndroidSurfaceChange(AndroidAppDriver *this,int param_1,int param_2)

{
  AndroidGraphicsDriver::ReinitForSurfaceChange
            (*(AndroidGraphicsDriver **)(this + 0x98),*(undefined4 *)(this + 0x160),param_1,param_2,
             this[0x1d8]);
  this[0x1d8] = (AndroidAppDriver)0x0;
  SetupOrientation(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::InitPreAppLaunch() */

void __thiscall Sexy::AndroidAppDriver::InitPreAppLaunch(AndroidAppDriver *this)

{
  PakInterface *this_00;
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  WidgetManager *this_01;
  string asStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(char *)((long)*(long **)(this + 0x88) + 0x3ad) == '\0') {
    (**(code **)(**(long **)(this + 0x88) + 0x3a0))();
    (**(code **)(**(long **)(this + 0x88) + 0xb0))(*(long **)(this + 0x88));
    (**(code **)(**(long **)(*(long *)(this + 0x88) + 0x28) + 0x18))
              (*(long **)(*(long *)(this + 0x88) + 0x28));
    lVar1 = *(long *)(this + 0x88);
    if (*(char *)(lVar1 + 0x102) == '\0') {
      (**(code **)(*(long *)this + 0xa0))(this);
      lVar1 = *(long *)(this + 0x88);
    }
    this_00 = gPakInterface;
    (**(code **)(**(long **)(lVar1 + 0x28) + 0x38))(asStack_28,*(long **)(lVar1 + 0x28));
    std::operator+(asStack_28,"main.pak");
    PakInterface::AddPakFile(this_00,asStack_18);
    std::string::~string(asStack_18);
    std::string::~string(asStack_28);
    (**(code **)(**(long **)(this + 0x88) + 0xc0))(*(long **)(this + 0x88));
    OutputDebugStrF((wchar_t *)"Resize: %dx%d",(ulong)*(uint *)(*(long *)(this + 0x88) + 0xd4),
                    (ulong)*(uint *)(*(long *)(this + 0x88) + 0xd8));
    lVar1 = *(long *)(this + 0x88);
    this_01 = *(WidgetManager **)(lVar1 + 0x360);
    Insets::Insets((Insets *)asStack_28,0,0,*(int *)(lVar1 + 0xd4),*(int *)(lVar1 + 0xd8));
    Insets::Insets((Insets *)asStack_18,0,0,*(int *)(*(long *)(this + 0x88) + 0xd4),
                   *(int *)(*(long *)(this + 0x88) + 0xd8));
    WidgetManager::Resize(this_01,(TRect *)asStack_28,(TRect *)asStack_18);
    lVar4 = *(long *)(this + 0x88);
    plVar3 = *(long **)(lVar4 + 0x18);
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar1 = *(long *)(this + 0x88);
    *(undefined8 *)(lVar4 + 0x648) = uVar2;
    plVar3 = *(long **)(lVar1 + 0x30);
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::GetLoadingThreadProgress() */

void __thiscall Sexy::AndroidAppDriver::GetLoadingThreadProgress(AndroidAppDriver *this)

{
  long lVar1;
  double *pdVar2;
  double dVar3;
  double local_18;
  double local_10;
  long local_8;
  
  dVar3 = 1.0;
  lVar1 = *(long *)(this + 0x88);
  local_8 = ___stack_chk_guard;
  if (((*(char *)(lVar1 + 0x6b7) == '\0') && (dVar3 = 0.0, *(char *)(lVar1 + 0x6b5) != '\0')) &&
     (*(int *)(lVar1 + 0x6dc) != 0)) {
    local_10 = 1.0;
    local_18 = (double)*(int *)(lVar1 + 0x6e0) / (double)*(int *)(lVar1 + 0x6dc);
    pdVar2 = std::min<double>(&local_18,&local_10);
    dVar3 = *pdVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(dVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::UpdateFTimeAcc() */

void __thiscall Sexy::AndroidAppDriver::UpdateFTimeAcc(AndroidAppDriver *this)

{
  int iVar1;
  undefined8 uVar2;
  double *pdVar3;
  int *piVar4;
  long lVar5;
  double local_18;
  double local_10;
  Sexy *local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = SexyTime(___stack_chk_guard);
  lVar5 = *(long *)(this + 0x88);
  if (*(long *)(lVar5 + 0x5e8) != 0) {
    iVar1 = (int)uVar2 - (int)*(long *)(lVar5 + 0x5e8);
    local_18 = (double)iVar1 + *(double *)(lVar5 + 0x5e0);
    local_10 = 200.0;
    pdVar3 = std::min<double>(&local_18,&local_10);
    *(double *)(lVar5 + 0x5e0) = *pdVar3;
    if (0 < *(int *)(lVar5 + 0xb8)) {
      local_10 = (double)((ulong)local_10 & 0xffffffff00000000);
      local_18 = (double)CONCAT44(local_18._4_4_,*(int *)(lVar5 + 0xb8) - iVar1);
      piVar4 = eastl::max_alt<int>((int *)&local_18,(int *)&local_10);
      *(int *)(lVar5 + 0xb8) = *piVar4;
    }
  }
  *(undefined8 *)(lVar5 + 0x5e8) = uVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::DrawDirtyStuff(bool) */

void __thiscall Sexy::AndroidAppDriver::DrawDirtyStuff(AndroidAppDriver *this,bool param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  Sexy *pSVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  MTAutoDisallowRand aMStack_18 [8];
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  pSVar4 = (Sexy *)MTAutoDisallowRand::MTAutoDisallowRand(aMStack_18);
  lVar5 = SexyTime(pSVar4);
  lVar9 = *(long *)(this + 0x88);
  *(undefined1 *)(lVar9 + 0x5d0) = 1;
  cVar2 = WidgetManager::DrawScreen(*(WidgetManager **)(lVar9 + 0x360));
  lVar9 = *(long *)(this + 0x88);
  *(undefined1 *)(lVar9 + 0x5d0) = 0;
  iVar10 = (int)lVar5;
  if ((!param_1) &&
     ((((cVar2 == '\0' && ((ulong)(lVar5 - *(long *)(lVar9 + 0x630)) < 1000)) &&
       (*(char *)(lVar9 + 0x6d5) == '\0')) || (iVar10 - (int)*(undefined8 *)(lVar9 + 0x638) < 0))))
  {
    *(undefined1 *)(lVar9 + 0x5d2) = 0;
    *(undefined1 *)(lVar9 + 0x5d1) = 1;
    uVar6 = 0;
    goto LAB_052ced28;
  }
  *(undefined1 *)(lVar9 + 0x5d1) = 0;
  uVar1 = *(int *)(lVar9 + 0x604) + 1;
  *(uint *)(lVar9 + 0x604) = uVar1;
  iVar3 = SexyTime((Sexy *)(ulong)uVar1);
  uVar1 = iVar3 - iVar10;
  lVar5 = *(long *)(this + 0x88);
  *(int *)(lVar5 + 0x684) = *(int *)(lVar5 + 0x684) + 1;
  *(uint *)(lVar5 + 0x680) = *(int *)(lVar5 + 0x680) + uVar1;
  *(uint *)(lVar5 + 0x668) = *(int *)(lVar5 + 0x668) + uVar1;
  uVar6 = SexyTime((Sexy *)(ulong)uVar1);
  *(undefined8 *)(*(long *)(this + 0x88) + 0x630) = uVar6;
  Redraw(this);
  pSVar4 = (Sexy *)UpdateFTimeAcc(this);
  uVar7 = SexyTime(pSVar4);
  lVar5 = *(long *)(this + 0x88);
  iVar3 = (int)uVar7;
  *(int *)(lVar5 + 0x6b0) = iVar3 - (int)uVar6;
  if ((*(char *)(lVar5 + 0x6b5) == '\0') || (*(char *)(lVar5 + 0x6b6) != '\0')) {
LAB_052ced18:
    *(undefined8 *)(lVar5 + 0x638) = uVar7;
  }
  else {
    local_10[0] = iVar3 - iVar10;
    local_10[1] = 0xf;
    piVar8 = eastl::max_alt<int>(local_10,local_10 + 1);
    lVar9 = *(long *)(lVar5 + 0x638) + (long)(*piVar8 + 0x23);
    *(long *)(lVar5 + 0x638) = lVar9;
    if (-1 < iVar3 - (int)lVar9) goto LAB_052ced18;
  }
  *(undefined1 *)(lVar5 + 0x5d2) = 0;
  uVar6 = 1;
  *(undefined1 *)(lVar5 + 0x6d5) = 0;
LAB_052ced28:
  MTAutoDisallowRand::~MTAutoDisallowRand(aMStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::Process(bool) */

void __thiscall Sexy::AndroidAppDriver::Process(AndroidAppDriver *this,bool param_1)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  long lVar4;
  double *pdVar5;
  uint uVar6;
  long lVar7;
  SexyAppBase *this_00;
  byte bVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double local_18;
  double local_10;
  long local_8;
  
  this_00 = *(SexyAppBase **)(this + 0x88);
  local_8 = ___stack_chk_guard;
  if (this_00[0x6d1] != (SexyAppBase)0x0) {
    (**(code **)(*(long *)this_00 + 0x180))(this_00);
    this_00 = *(SexyAppBase **)(this + 0x88);
  }
  if (this_00[0x6f0] == (SexyAppBase)0x0) {
    dVar9 = *(double *)(this_00 + 0x618);
    dVar11 = 1.0;
    dVar10 = (double)*(float *)(this_00 + 0x5cc) / dVar9;
    bVar8 = 0;
  }
  else {
    bVar8 = 0;
    if ((((this_00[0x5d1] == (SexyAppBase)0x0) && (this_00[0x6f2] == (SexyAppBase)0x0)) &&
        (bVar8 = 1, this_00[0x3b0] != (SexyAppBase)0x0)) &&
       (bVar8 = 0, this_00[0x708] != (SexyAppBase)0x0)) {
      bVar8 = (byte)this_00[0x709] ^ 1;
    }
    dVar9 = *(double *)(this_00 + 0x618);
    dVar10 = 1000.0 / ((double)*(int *)(this_00 + 0x6ec) * dVar9);
    dVar11 = (double)(1000.0 / ((float)*(int *)(this_00 + 0x6ec) * *(float *)(this_00 + 0x5cc)));
  }
  if ((this_00[0x620] == (SexyAppBase)0x0) && (0.0 < dVar9)) {
    lVar4 = SexyTime((Sexy *)0x0);
    if (bVar8 == 0) {
      UpdateFTimeAcc(this);
    }
    this_00 = *(SexyAppBase **)(this + 0x88);
    if (*(int *)(this_00 + 0x60c) == 1) {
      iVar1 = *(int *)(this_00 + 0x5c8);
      *(int *)(this_00 + 0x5c8) = iVar1 + 1;
      if ((iVar1 + 1 < (int)((double)*(int *)(this_00 + 0x614) * *(double *)(this_00 + 0x618))) ||
         (this_00[0x6b7] == (SexyAppBase)0x0)) {
        if (bVar8 == 0) {
          if (dVar10 <= *(double *)(this_00 + 0x5e0)) goto LAB_052cf000;
          goto LAB_052cee90;
        }
        if ((this_00[0x5d2] == (SexyAppBase)0x0) ||
           ((double)(int)(dVar10 * 0.75) <= *(double *)(this_00 + 0x5e0))) {
LAB_052cf000:
          if ((*(double *)(this_00 + 0x618) == 1.0) &&
             (lVar7 = *(long *)(this_00 + 0x700), *(ulong *)(this_00 + 0x700) = lVar7 + 1U,
             (ulong)(long)((*(float *)(this_00 + 0x5cc) + 999.0) / *(float *)(this_00 + 0x5cc)) <=
             lVar7 + 1U)) {
            if ((ulong)(lVar4 - *(long *)(this_00 + 0x6f8)) < 0x321) {
              iVar1 = *(int *)(this_00 + 0x6f4);
              *(int *)(this_00 + 0x6f4) = iVar1 + 1;
              if (2 < iVar1 + 1) {
                this_00[0x6f2] = (SexyAppBase)0x1;
              }
            }
            else {
              *(undefined4 *)(this_00 + 0x6f4) = 0;
            }
            *(long *)(this_00 + 0x6f8) = lVar4;
            *(undefined8 *)(this_00 + 0x700) = 0;
          }
          cVar3 = DoUpdateFrames(this);
          this_00 = *(SexyAppBase **)(this + 0x88);
          if (cVar3 != '\0') {
            *(undefined4 *)(this_00 + 0x60c) = 2;
          }
          this_00[0x5d2] = (SexyAppBase)0x1;
          goto LAB_052ceed4;
        }
        *(undefined4 *)(this_00 + 0x5c8) = 0;
        *(undefined4 *)(this_00 + 0x60c) = 3;
      }
      else {
LAB_052cee90:
        *(undefined4 *)(this_00 + 0x5c8) = 0;
        *(undefined4 *)(this_00 + 0x60c) = 3;
        if (this_00[0x5d2] == (SexyAppBase)0x0) {
          uVar6 = (uint)(dVar10 - *(double *)(this_00 + 0x5e0));
          if (0 < (int)uVar6) {
            uVar2 = 0;
            if (!param_1) goto LAB_052ceee0;
            *(int *)(this_00 + 0x600) = *(int *)(this_00 + 0x600) + 1;
            SexySleep((Sexy *)(ulong)uVar6,uVar6);
            this_00 = *(SexyAppBase **)(this + 0x88);
          }
          goto LAB_052ceed4;
        }
      }
      DrawDirtyStuff(this,false);
      this_00 = *(SexyAppBase **)(this + 0x88);
    }
    else {
      if (*(int *)(this_00 + 0x60c) != 2) goto LAB_052cee90;
      *(undefined4 *)(this_00 + 0x60c) = 3;
      *(double *)(this_00 + 0x5d8) = *(double *)(this_00 + 0x5d8) + -1.0 + dVar11;
      SexyAppBase::ProcessSafeDeleteList(this_00);
      lVar4 = *(long *)(this + 0x88);
      dVar9 = *(double *)(lVar4 + 0x5d8);
      while (1.0 <= dVar9) {
        *(int *)(lVar4 + 0x5c8) = *(int *)(lVar4 + 0x5c8) + 1;
        cVar3 = DoUpdateFrames(this);
        if (cVar3 == '\0') break;
        SexyAppBase::ProcessSafeDeleteList(*(SexyAppBase **)(this + 0x88));
        lVar4 = *(long *)(this + 0x88);
        dVar9 = *(double *)(lVar4 + 0x5d8) - 1.0;
        *(double *)(lVar4 + 0x5d8) = dVar9;
      }
      DoUpdateFramesF(this,(float)dVar11);
      SexyAppBase::ProcessSafeDeleteList(*(SexyAppBase **)(this + 0x88));
      if (bVar8 == 0) {
        this_00 = *(SexyAppBase **)(this + 0x88);
        *(double *)(this_00 + 0x5e0) = *(double *)(this_00 + 0x5e0) - dVar10;
      }
      else {
        this_00 = *(SexyAppBase **)(this + 0x88);
        local_10 = 0.0;
        local_18 = (*(double *)(this_00 + 0x5e0) - dVar10) - 0.20000000298023224;
        pdVar5 = std::max<double>(&local_18,&local_10);
        *(double *)(this_00 + 0x5e0) = *pdVar5;
      }
      if (0 < *(int *)(this_00 + 0xb8)) {
        *(undefined8 *)(this_00 + 0x5e0) = 0;
      }
    }
  }
LAB_052ceed4:
  SexyAppBase::ProcessSafeDeleteList(this_00);
  uVar2 = 1;
LAB_052ceee0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* Sexy::AndroidAppDriver::UpdateAppStep(bool*) */

undefined8 __thiscall Sexy::AndroidAppDriver::UpdateAppStep(AndroidAppDriver *this,bool *param_1)

{
  int iVar1;
  long lVar2;
  
  if (param_1 != (bool *)0x0) {
    *param_1 = false;
  }
  lVar2 = *(long *)(this + 0x88);
  if (*(char *)(lVar2 + 0x3ae) != '\0') {
    return 0;
  }
  if (*(int *)(lVar2 + 0x60c) == 3) {
    *(undefined4 *)(lVar2 + 0x60c) = 0;
    *(int *)(lVar2 + 0x610) = *(int *)(lVar2 + 0x610) + 1;
  }
  else {
    *(int *)(lVar2 + 0x610) = *(int *)(lVar2 + 0x610) + 1;
    if (*(int *)(lVar2 + 0x60c) != 0) {
      if (*(int *)(lVar2 + 0x640) == 0) {
        iVar1 = *(int *)(lVar2 + 0x608);
        Process(this,false);
        lVar2 = *(long *)(this + 0x88);
        if (param_1 != (bool *)0x0) {
          *param_1 = *(int *)(lVar2 + 0x608) != iVar1;
        }
      }
      else if (*(int *)(lVar2 + 0x640) == 2) {
        SexySleep((Sexy *)(ulong)(uint)(int)*(float *)(lVar2 + 0x5cc),2);
        lVar2 = *(long *)(this + 0x88);
        *(undefined4 *)(lVar2 + 0x60c) = 3;
      }
      else {
        *(undefined4 *)(lVar2 + 0x640) = 2;
        DoUpdateFrames(this);
        DoUpdateFramesF(this,1.0);
        DrawDirtyStuff(this,false);
        lVar2 = *(long *)(this + 0x88);
      }
      goto LAB_052cf230;
    }
  }
  Android::UI::ProcessEvents(this);
  lVar2 = *(long *)(this + 0x88);
  if (*(int *)(lVar2 + 0x60c) == 0) {
    *(undefined4 *)(lVar2 + 0x60c) = 1;
  }
LAB_052cf230:
  *(int *)(lVar2 + 0x610) = *(int *)(lVar2 + 0x610) + -1;
  return 1;
}


/* Sexy::AndroidAppDriver::TouchesCanceled_Internal() */

void __thiscall Sexy::AndroidAppDriver::TouchesCanceled_Internal(AndroidAppDriver *this)

{
  std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>::clear
            ((vector<Sexy::Touch,std::allocator<Sexy::Touch>> *)(this + 0x168));
  this[0x199] = (AndroidAppDriver)0x0;
  return;
}


/* Sexy::AndroidAppDriver::TouchesCanceled() */

void __thiscall Sexy::AndroidAppDriver::TouchesCanceled(AndroidAppDriver *this)

{
  (**(code **)(**(long **)(this + 0x88) + 0x3d8))(*(long **)(this + 0x88));
  TouchesCanceled_Internal(this);
  return;
}


/* Sexy::AndroidAppDriver::InputCancelAll() */

void __thiscall Sexy::AndroidAppDriver::InputCancelAll(AndroidAppDriver *this)

{
  std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>::clear
            ((vector<Sexy::Touch,std::allocator<Sexy::Touch>> *)(this + 0x168));
  this[0x199] = (AndroidAppDriver)0x0;
  return;
}


/* Sexy::AndroidAppDriver::GetNotchPlatformByPackageName(std::string const&) */

undefined1 __thiscall
Sexy::AndroidAppDriver::GetNotchPlatformByPackageName(AndroidAppDriver *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"pvz2cthdhwct");
  if (((!bVar1) && (bVar1 = std::operator==(param_1,"com.popcap.pvz2cthdhwct"), !bVar1)) &&
     (bVar1 = std::operator==(param_1,"com.popcap.pvz2nHWCM"), !bVar1)) {
    bVar1 = std::operator==(param_1,"pvz2cthdhwct");
    if (((bVar1) || (bVar1 = std::operator==(param_1,"com.popcap.pvz2cthdhwct"), bVar1)) ||
       (bVar1 = std::operator==(param_1,"com.popcap.pvz2nHWCM"), bVar1)) {
      return 1;
    }
    bVar1 = std::operator==(param_1,"pvz2bbg");
    if (((bVar1) || (bVar1 = std::operator==(param_1,"pvz2cthdbbg"), bVar1)) ||
       ((bVar1 = std::operator==(param_1,"com.popcap.pvz2bbg"), bVar1 ||
        (bVar1 = std::operator==(param_1,"com.popcap.pvz2cthdbbg"), bVar1)))) {
      return 2;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::CalcOppoFullScreenOffset() */

void __thiscall Sexy::AndroidAppDriver::CalcOppoFullScreenOffset(AndroidAppDriver *this)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  string asStack_10 [8];
  Util *local_8;
  
  local_8 = ___stack_chk_guard;
  Android::Util::GetPackageName(___stack_chk_guard);
  bVar1 = std::operator==(asStack_10,"pvz2cthdhwct");
  if ((((bVar1) || (bVar1 = std::operator==(asStack_10,"com.popcap.pvz2cthdhwct"), bVar1)) ||
      (bVar1 = std::operator==(asStack_10,"com.popcap.pvz2nHWCM"), bVar1)) ||
     (((bVar1 = std::operator==(asStack_10,"com.popcap.pvz2cthdnxm"), bVar1 ||
       (bVar1 = std::operator==(asStack_10,"com.popcap.pvz2bbg"), bVar1)) ||
      (bVar1 = std::operator==(asStack_10,"com.popcap.pvz2cthdbbg"), bVar1)))) {
    iVar2 = GetNotchPlatformByPackageName(this,asStack_10);
    iVar2 = Android::Diag::GetNotchHeight(iVar2);
  }
  else {
    fVar3 = (float)Android::Graphics::GetGLViewScaleFactor(this);
    iVar2 = (int)(fVar3 * 80.0);
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::isOppoFullScreen() */

void __thiscall Sexy::AndroidAppDriver::isOppoFullScreen(AndroidAppDriver *this)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  Util *this_00;
  int local_20;
  int local_1c;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_20 = 0;
  local_1c = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (Util *)Android::Graphics::GetScreenSizeInPixels(this,&local_20,&local_1c);
  Android::Util::GetPackageName(this_00);
  bVar1 = std::operator==(asStack_18,"pvz2cthdhwct");
  if ((((bVar1) || (bVar1 = std::operator==(asStack_18,"com.popcap.pvz2cthdhwct"), bVar1)) ||
      (bVar1 = std::operator==(asStack_18,"com.popcap.pvz2nHWCM"), bVar1)) ||
     (((bVar1 = std::operator==(asStack_18,"com.popcap.pvz2cthdnxm"), bVar1 ||
       (bVar1 = std::operator==(asStack_18,"com.popcap.pvz2bbg"), bVar1)) ||
      (bVar1 = std::operator==(asStack_18,"com.popcap.pvz2cthdbbg"), bVar1)))) {
    iVar3 = GetNotchPlatformByPackageName(this,asStack_18);
    uVar2 = Android::Diag::HasNotchInScreen(iVar3);
  }
  else {
    Set8BytesTo0(asStack_10);
    Android::Diag::GetDeviceMODEL(asStack_10);
    bVar1 = std::operator==(asStack_10,"PACM00");
    if (((!bVar1) && (bVar1 = std::operator==(asStack_10,"PACT00"), !bVar1)) &&
       ((bVar1 = std::operator==(asStack_10,"PAAM00"), !bVar1 &&
        ((bVar1 = std::operator==(asStack_10,"PAAT00"), !bVar1 &&
         (bVar1 = std::operator==(asStack_10,"CPH1831"), !bVar1)))))) {
      uVar2 = std::operator==(asStack_10,"CPH1833");
      if ((!(bool)uVar2) &&
         ((((local_20 != 0x7f8 && (local_20 != 0x924)) && (local_20 != 0x898)) ||
          (local_1c != 0x438)))) {
        std::string::~string(asStack_10);
        goto LAB_052cf600;
      }
    }
    uVar2 = 1;
    std::string::~string(asStack_10);
  }
LAB_052cf600:
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* Sexy::AndroidAppDriver::OpenURL(std::string const&, bool) */

char __thiscall Sexy::AndroidAppDriver::OpenURL(AndroidAppDriver *this,string *param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  Sexy *this_00;
  long lVar4;
  
  lVar4 = *(long *)(this + 0x88);
  cVar2 = *(char *)(lVar4 + 0x440);
  if ((cVar2 == '\0') || (bVar1 = std::operator!=(param_1,(string *)(lVar4 + 0x448)), bVar1)) {
    *(undefined1 *)(lVar4 + 0x440) = 1;
    *(bool *)(lVar4 + 0x441) = param_2;
    this_00 = (Sexy *)thunk_FUN_05475e00((string *)(lVar4 + 0x448),param_1);
    lVar4 = *(long *)(this + 0x88);
    uVar3 = SexyTime(this_00);
    *(undefined4 *)(lVar4 + 0x450) = uVar3;
    cVar2 = Android::Web::SysOpenURL(param_1);
    if (cVar2 != '\0') {
      (**(code **)(**(long **)(this + 0x88) + 0x160))(*(long **)(this + 0x88),param_1);
      *(undefined1 *)(*(long *)(this + 0x88) + 0x440) = 0;
      return cVar2;
    }
    (**(code **)(**(long **)(this + 0x88) + 0x158))(*(long **)(this + 0x88),param_1);
    *(undefined1 *)(*(long *)(this + 0x88) + 0x440) = 0;
    cVar2 = '\0';
  }
  return cVar2;
}


/* Sexy::AndroidAppDriver::~AndroidAppDriver() */

void __thiscall Sexy::AndroidAppDriver::~AndroidAppDriver(AndroidAppDriver *this)

{
  KeyInterpolator<float> *this_00;
  
  this_00 = *(KeyInterpolator<float> **)(this + 0x150);
  *(undefined ***)this = &PTR__AndroidAppDriver_06a32cf0;
  if (this_00 != (KeyInterpolator<float> *)0x0) {
    KeyInterpolator<float>::~KeyInterpolator(this_00);
    AK::FreeHook(this_00);
  }
  *(undefined8 *)(this + 0x150) = 0;
  Event1wRet<8,bool,SexyURL_const&>::~Event1wRet
            ((Event1wRet<8,bool,SexyURL_const&> *)(this + 0x200));
  FUN_05476c50(this + 400);
  FUN_05476c50(this + 0x188);
  std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>::~vector
            ((vector<Sexy::Touch,std::allocator<Sexy::Touch>> *)(this + 0x168));
  IAppDriver::~IAppDriver((IAppDriver *)this);
  return;
}


/* Sexy::AndroidAppDriver::~AndroidAppDriver() */

void __thiscall Sexy::AndroidAppDriver::~AndroidAppDriver(AndroidAppDriver *this)

{
  ~AndroidAppDriver(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::AndroidAppDriver::AndroidAppDriver(Sexy::SexyAppBase*) */

void __thiscall
Sexy::AndroidAppDriver::AndroidAppDriver(AndroidAppDriver *this,SexyAppBase *param_1)

{
  Sexy *this_00;
  undefined8 uVar1;
  KeyInterpolator<float> *this_01;
  
  this_01 = (KeyInterpolator<float> *)0x0;
  IAppDriver::IAppDriver((IAppDriver *)this);
  *(undefined8 *)(this + 0xa0) = 0xffffffffffffffff;
  *(undefined4 *)(this + 0xa8) = 0xffffffff;
  *(undefined4 *)(this + 0xac) = 0xffffffff;
  *(SexyAppBase **)(this + 0x88) = param_1;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined ***)this = &PTR__AndroidAppDriver_06a32cf0;
  *(undefined8 *)(this + 0x98) = 0;
  this[0xb0] = (AndroidAppDriver)0x0;
  *(undefined4 *)(this + 0xb4) = 0;
  SexyTransform3D::SexyTransform3D((SexyTransform3D *)(this + 0xbc));
  SexyTransform3D::SexyTransform3D((SexyTransform3D *)(this + 0x104));
  *(undefined8 *)(this + 0x148) = 0;
  this[0x158] = (AndroidAppDriver)0x0;
  this[0x159] = (AndroidAppDriver)0x0;
  this[0x15a] = (AndroidAppDriver)0x0;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined4 *)(this + 0x160) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  this[0x180] = (AndroidAppDriver)0x0;
  this[0x181] = (AndroidAppDriver)0x0;
  this[0x182] = (AndroidAppDriver)0x0;
  *(undefined4 *)(this + 0x184) = 0;
  FUN_05476574(this + 0x188);
  FUN_05476574(this + 400);
  this[0x199] = (AndroidAppDriver)0x0;
  this[0x198] = (AndroidAppDriver)0x1;
  Touch::Touch((Touch *)(this + 0x1a0));
  this[0x1d8] = (AndroidAppDriver)0x0;
  this[500] = (AndroidAppDriver)0x0;
  *(undefined4 *)(this + 0x1f8) = 0;
  Event1wRet<8,bool,SexyURL_const&>::Event1wRet((Event1wRet<8,bool,SexyURL_const&> *)(this + 0x200))
  ;
  this_00 = (Sexy *)(ulong)(byte)this[0x158];
  if (this[0x158] != (AndroidAppDriver)0x0) {
    this_01 = ::operator_new(0x60);
    *(undefined8 *)this_01 = 0;
    *(undefined8 *)(this_01 + 8) = 0;
    *(undefined8 *)(this_01 + 0x10) = 0;
    *(undefined8 *)(this_01 + 0x18) = 0;
    *(undefined8 *)(this_01 + 0x20) = 0;
    *(undefined8 *)(this_01 + 0x28) = 0;
    *(undefined8 *)(this_01 + 0x30) = 0;
    *(undefined8 *)(this_01 + 0x38) = 0;
    *(undefined8 *)(this_01 + 0x40) = 0;
    *(undefined8 *)(this_01 + 0x48) = 0;
    *(undefined8 *)(this_01 + 0x50) = 0;
    *(undefined8 *)(this_01 + 0x58) = 0;
    this_00 = (Sexy *)KeyInterpolator<float>::KeyInterpolator(this_01);
  }
  *(KeyInterpolator<float> **)(this + 0x150) = this_01;
  uVar1 = SexyTime(this_00);
  *(undefined8 *)(this + 0x1e0) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::HandleAndroidStartFromUrl(AndroidAppEvent*) */

void __thiscall
Sexy::AndroidAppDriver::HandleAndroidStartFromUrl(AndroidAppDriver *this,AndroidAppEvent *param_1)

{
  char *__s;
  string asStack_d8 [8];
  SexyURL aSStack_d0 [200];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = (char *)FUN_0547429c(param_1 + 0x10);
  std::string::string(asStack_d8,__s);
  SexyURL::SexyURL(aSStack_d0,asStack_d8);
  Event1wRet<8,bool,SexyURL_const&>::operator()
            ((Event1wRet<8,bool,SexyURL_const&> *)(this + 0x200),aSStack_d0);
  SexyURL::~SexyURL(aSStack_d0);
  std::string::~string(asStack_d8);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::TouchMoved(Sexy::Touch const&) */

void __thiscall Sexy::AndroidAppDriver::TouchMoved(AndroidAppDriver *this,Touch *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Touch::Touch((Touch *)&local_40,param_1);
  TransformTouch(this,(Touch *)&local_40);
  if ((this[0x198] != (AndroidAppDriver)0x0) ||
     ((this[0x199] != (AndroidAppDriver)0x0 &&
      (cVar2 = FUN_052cc754(*(undefined8 *)(this + 0x1a0),local_40), cVar2 != '\0')))) {
    (**(code **)(**(long **)(this + 0x88) + 0x3d0))(*(long **)(this + 0x88),(Touch *)&local_40);
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x168);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_50 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::Touch*,std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>>,Sexy::Touch>
                       (uVar3,uVar4,(Touch *)&local_40);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
  if (bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    *puVar5 = local_40;
    puVar5[1] = uStack_38;
    puVar5[2] = local_30;
    puVar5[3] = uStack_28;
    puVar5[4] = local_20;
    puVar5[5] = uStack_18;
    *(undefined4 *)(puVar5 + 6) = local_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::StaticEnqueueAndroidEvent(AndroidAppEvent*) */

void Sexy::AndroidAppDriver::StaticEnqueueAndroidEvent(AndroidAppEvent *param_1)

{
  AndroidAppEvent *local_18;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)sAppEventQueueCS);
  std::list<AndroidAppEvent*,std::allocator<AndroidAppEvent*>>::push_back
            ((list<AndroidAppEvent*,std::allocator<AndroidAppEvent*>> *)&sAppEventQueue,&local_18);
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::AndroidAppDriver::StaticNotifyApplicationGainFocus() */

void Sexy::AndroidAppDriver::StaticNotifyApplicationGainFocus(void)

{
  AndroidGotFocusEvent *this;
  
  this = ::operator_new(0x10);
  AndroidGotFocusEvent::AndroidGotFocusEvent(this);
  StaticEnqueueAndroidEvent((AndroidAppEvent *)this);
  return;
}


/* Sexy::AndroidAppDriver::StaticNotifyApplicationLoseFocus() */

void Sexy::AndroidAppDriver::StaticNotifyApplicationLoseFocus(void)

{
  AndroidLostFocusEvent *this;
  
  this = ::operator_new(0x10);
  AndroidLostFocusEvent::AndroidLostFocusEvent(this);
  StaticEnqueueAndroidEvent((AndroidAppEvent *)this);
  return;
}


/* Sexy::AndroidAppDriver::StaticNotifyApplicationWillBecomeForeground() */

void Sexy::AndroidAppDriver::StaticNotifyApplicationWillBecomeForeground(void)

{
  AndroidApplicationWillBecomeForegroundEvent *this;
  
  this = ::operator_new(0x10);
  AndroidApplicationWillBecomeForegroundEvent::AndroidApplicationWillBecomeForegroundEvent(this);
  StaticEnqueueAndroidEvent((AndroidAppEvent *)this);
  return;
}


/* Sexy::AndroidAppDriver::StaticNotifyApplicationDidBecomeActive() */

void Sexy::AndroidAppDriver::StaticNotifyApplicationDidBecomeActive(void)

{
  AndroidApplicationDidBecomeActiveEvent *this;
  
  this = ::operator_new(0x10);
  AndroidApplicationDidBecomeActiveEvent::AndroidApplicationDidBecomeActiveEvent(this);
  StaticEnqueueAndroidEvent((AndroidAppEvent *)this);
  return;
}


/* Sexy::AndroidAppDriver::StaticNotifyApplicationWillResignActive() */

void Sexy::AndroidAppDriver::StaticNotifyApplicationWillResignActive(void)

{
  AndroidApplicationWillResignActiveEvent *this;
  
  this = ::operator_new(0x10);
  AndroidApplicationWillResignActiveEvent::AndroidApplicationWillResignActiveEvent(this);
  StaticEnqueueAndroidEvent((AndroidAppEvent *)this);
  return;
}


/* Sexy::AndroidAppDriver::StaticNotifyApplicationDidEnterBackground() */

void Sexy::AndroidAppDriver::StaticNotifyApplicationDidEnterBackground(void)

{
  AndroidApplicationDidEnterBackgroundEvent *this;
  
  this = ::operator_new(0x10);
  AndroidApplicationDidEnterBackgroundEvent::AndroidApplicationDidEnterBackgroundEvent(this);
  StaticEnqueueAndroidEvent((AndroidAppEvent *)this);
  return;
}


/* Sexy::AndroidAppDriver::StaticNotifyOrientationChanged(Sexy::UI_ORIENTATION,
   Sexy::UI_ORIENTATION, int, int) */

void Sexy::AndroidAppDriver::StaticNotifyOrientationChanged
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  AndroidAppEvent *pAVar1;
  
  pAVar1 = ::operator_new(0x20);
  AndroidAppOrientationChangeEvent::AndroidAppOrientationChangeEvent
            ((AndroidAppOrientationChangeEvent *)pAVar1,param_1,param_2,param_3,param_4);
  StaticEnqueueAndroidEvent(pAVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::StaticApplicationOpenURL(std::string) */

void Sexy::AndroidAppDriver::StaticApplicationOpenURL(undefined8 param_1)

{
  AndroidAppEvent *pAVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,param_1);
  pAVar1 = ::operator_new(0x18);
  AndroidAppStartFromUrlEvent::AndroidAppStartFromUrlEvent
            ((AndroidAppStartFromUrlEvent *)pAVar1,asStack_10);
  StaticEnqueueAndroidEvent(pAVar1);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::StaticRemoveCallbacksForInstanceContext(void*) */

void Sexy::AndroidAppDriver::StaticRemoveCallbacksForInstanceContext(void *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  AutoCrit aAStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_30,(CritSect *)sCallbackQueueCS);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)sCallbackQueue);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)sCallbackQueue);
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                     *)&local_10,param_1);
  local_28 = std::
             remove_if<__gnu_cxx::__normal_iterator<Sexy::Delegate0*,std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>>,Sexy::AndroidAppDriver::CallbackInstanceEquals>
                       (uVar2,uVar3,local_10);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)sCallbackQueue);
  uVar1 = __gnu_cxx::operator-((__normal_iterator *)&local_10,(__normal_iterator *)&local_28);
  __android_log_print(4,"AndroidAppDriver",
                      "StaticRemoveCallbacksForInstanceContext( %p ) - %d removed.",param_1,uVar1);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_18,(__normal_iterator *)&local_28);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)sCallbackQueue);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_20);
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::erase
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)sCallbackQueue,local_18,
             local_10);
  AutoCrit::~AutoCrit(aAStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::TouchEnded(Sexy::Touch const&) */

void __thiscall Sexy::AndroidAppDriver::TouchEnded(AndroidAppDriver *this,Touch *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [7];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x168);
  local_8 = ___stack_chk_guard;
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_58 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::Touch*,std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>>,Sexy::Touch>
                       (uVar3,uVar4,param_1);
  local_40[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_58,(__normal_iterator *)local_40);
  if (!bVar1) {
    Touch::Touch((Touch *)local_40,param_1);
    TransformTouch(this,(Touch *)local_40);
    if ((this[0x198] != (AndroidAppDriver)0x0) ||
       ((this[0x199] != (AndroidAppDriver)0x0 &&
        (cVar2 = FUN_052cc754(*(undefined8 *)(this + 0x1a0),local_40[0]), cVar2 != '\0')))) {
      (**(code **)(**(long **)(this + 0x88) + 0x3c8))(*(long **)(this + 0x88),(Touch *)local_40);
      this[0x199] = (AndroidAppDriver)0x0;
    }
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_50 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::Touch*,std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>>,Sexy::Touch>
                         (uVar3,uVar4,(Touch *)local_40);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
    if (bVar1) {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_48,(__normal_iterator *)&local_50);
      std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>::erase
                ((vector<Sexy::Touch,std::allocator<Sexy::Touch>> *)this_00,local_48);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::HandleCallbacks() */

void Sexy::AndroidAppDriver::HandleCallbacks(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  RtInvokeVariant *pRVar5;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  AutoCrit::AutoCrit((AutoCrit *)&local_28,(CritSect *)sCallbackQueueCS);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)sCallbackQueue);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)sCallbackQueue);
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::
  assign<__gnu_cxx::__normal_iterator<Sexy::Delegate0*,std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>>,void>
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_20,uVar3,uVar4);
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::clear
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)sCallbackQueue);
  AutoCrit::~AutoCrit((AutoCrit *)&local_28);
  cVar1 = std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::empty
                    ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_20);
  if (cVar1 == '\0') {
    uVar3 = FUN_052cc94c(local_20,local_18);
    __android_log_print(4,"AndroidAppDriver","Dispatch %d callbacks.",uVar3);
  }
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
  while( true ) {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar2) break;
    pRVar5 = (RtInvokeVariant *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar5);
    std::move_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*>::operator++
              ((move_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*> *)&local_30);
  }
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::~vector
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::TouchBegan(Sexy::Touch const&) */

void __thiscall Sexy::AndroidAppDriver::TouchBegan(AndroidAppDriver *this,Touch *param_1)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Touch::Touch((Touch *)&local_40,param_1);
  TransformTouch(this,(Touch *)&local_40);
  if ((this[0x198] != (AndroidAppDriver)0x0) || (this[0x199] == (AndroidAppDriver)0x0)) {
    (**(code **)(**(long **)(this + 0x88) + 0x3c0))(*(long **)(this + 0x88),(Touch *)&local_40);
    *(undefined8 *)(this + 0x1a0) = local_40;
    *(undefined8 *)(this + 0x1a8) = uStack_38;
    *(undefined4 *)(this + 0x1d0) = local_10;
    *(undefined8 *)(this + 0x1b0) = local_30;
    *(undefined8 *)(this + 0x1b8) = uStack_28;
    *(undefined8 *)(this + 0x1c0) = local_20;
    *(undefined8 *)(this + 0x1c8) = uStack_18;
    this[0x199] = (AndroidAppDriver)0x1;
  }
  std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>::push_back
            ((vector<Sexy::Touch,std::allocator<Sexy::Touch>> *)(this + 0x168),(Touch *)&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::StaticEnqueueCallback(Sexy::Delegate0 const&) */

void Sexy::AndroidAppDriver::StaticEnqueueCallback(Delegate0 *param_1)

{
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(4,"AndroidAppDriver","Enqueue callback delegate.");
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)sCallbackQueueCS);
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::push_back
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)sCallbackQueue,param_1);
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::HandleAndroidEvents() */

void __thiscall Sexy::AndroidAppDriver::HandleAndroidEvents(AndroidAppDriver *this)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  AndroidAppEvent *pAVar5;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)local_18);
  AutoCrit::AutoCrit((AutoCrit *)&local_20,(CritSect *)sAppEventQueueCS);
  uVar2 = FUN_052cf84c(sAppEventQueue);
  uVar3 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)&sAppEventQueue);
  std::list<AndroidAppEvent*,std::allocator<AndroidAppEvent*>>::
  assign<std::_List_iterator<AndroidAppEvent*>,void>
            ((list<AndroidAppEvent*,std::allocator<AndroidAppEvent*>> *)local_18,uVar2,uVar3);
  std::list<AndroidAppEvent*,std::allocator<AndroidAppEvent*>>::clear
            ((list<AndroidAppEvent*,std::allocator<AndroidAppEvent*>> *)&sAppEventQueue);
  AutoCrit::~AutoCrit((AutoCrit *)&local_20);
  local_28 = FUN_052cf84c(local_18[0]);
  local_20 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_20);
  if (bVar1) {
    do {
      puVar4 = (undefined8 *)
               std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                         ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_28);
      pAVar5 = (AndroidAppEvent *)*puVar4;
      switch(*(undefined4 *)(pAVar5 + 8)) {
      case 0:
      case 9:
        OutputDebugStrF((wchar_t *)"Warning: Received unhandled android event ID");
        break;
      case 1:
        HandleAndroidOrientationChange(this,pAVar5);
        break;
      case 2:
        HandleAndroidStartFromUrl(this,pAVar5);
        break;
      case 3:
        GotFocus(this);
        break;
      case 4:
        LostFocus(this);
        break;
      case 5:
        HandleApplicationWillBecomeForeground(this);
        break;
      case 6:
        HandleApplicationDidBecomeActive(this);
        break;
      case 7:
        HandleApplicationWillResignActive(this);
        break;
      case 8:
        HandleApplicationDidEnterBackground(this);
      }
      (**(code **)(*(long *)pAVar5 + 8))(pAVar5);
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_28);
      local_20 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)local_18);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_20);
    } while (bVar1);
  }
  std::list<AndroidAppEvent*,std::allocator<AndroidAppEvent*>>::~list
            ((list<AndroidAppEvent*,std::allocator<AndroidAppEvent*>> *)local_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::DisplayLinkUpdateAppStep() */

void __thiscall Sexy::AndroidAppDriver::DisplayLinkUpdateAppStep(AndroidAppDriver *this)

{
  AndroidAppDriver AVar1;
  long *plVar2;
  MTAutoDisallowRand aMStack_10 [8];
  long local_8;
  
  AVar1 = this[500];
  local_8 = ___stack_chk_guard;
  AndroidGraphicsDriver::ClearBuffers(*(AndroidGraphicsDriver **)(this + 0x98));
  HandleCallbacks();
  HandleAndroidEvents(this);
  Android::UI::ProcessEvents(this);
  if (AVar1 == (AndroidAppDriver)0x0) {
    nop();
    MTAutoDisallowRand::MTAutoDisallowRand(aMStack_10);
    (**(code **)(**(long **)(this + 0x98) + 0xf8))(*(long **)(this + 0x98));
    plVar2 = *(long **)(this + 0x88);
    *(undefined1 *)(plVar2 + 0xba) = 1;
    (**(code **)(*plVar2 + 0x68))(plVar2);
    *(undefined1 *)(*(long *)(this + 0x88) + 0x5d0) = 0;
    MTAutoDisallowRand::~MTAutoDisallowRand(aMStack_10);
    DoUpdateFrames(this);
    DoUpdateFramesF(this,1.0);
    SexyAppBase::ProcessSafeDeleteList(*(SexyAppBase **)(this + 0x88));
    Redraw(this);
  }
  else {
    DoUpdateFrames(this);
    DoUpdateFramesF(this,1.0);
    SexyAppBase::ProcessSafeDeleteList(*(SexyAppBase **)(this + 0x88));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

