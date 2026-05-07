// Class: Android::Native


/* Android::Native::Native_GameAppTeardown(_JNIEnv*, _jobject*) */

void __thiscall
Android::Native::Native_GameAppTeardown(Native *this,_JNIEnv *param_1,_jobject *param_2)

{
  if (DAT_06bbef40 != 0) {
    FUN_052d24b8();
    return;
  }
  return;
}


/* Android::Native::Native_GameAppInitialize(_JNIEnv*, _jobject*, _jobject*, _jobject*, _jobject*)
    */

bool __thiscall
Android::Native::Native_GameAppInitialize
          (Native *this,_JNIEnv *param_1,_jobject *param_2,_jobject *param_3,_jobject *param_4,
          _jobject *param_5)

{
  char cVar1;
  int iVar2;
  _jclass *p_Var3;
  _jclass *p_Var4;
  
  FUN_052d24e4(DAT_06bbef40 + 0x10,this,param_1);
  FUN_052d253c(DAT_06bbef40 + 0x18,this,param_2);
  FUN_052d2568(DAT_06bbef40 + 0x20,this,param_3);
  FUN_052d2510(DAT_06bbef40 + 0x30,this,param_4);
  p_Var3 = (_jclass *)_JNIEnv::GetObjectClass((_jobject *)this);
  p_Var4 = (_jclass *)_JNIEnv::GetObjectClass((_jobject *)this);
  _JNIEnv::GetObjectClass((_jobject *)this);
  cVar1 = Game::RegisterCallbacks((_JNIEnv *)this,p_Var3);
  if (((((cVar1 != '\0') && (cVar1 = Util::Register((_JNIEnv *)this,p_Var3), cVar1 != '\0')) &&
       (cVar1 = DEBUG::Register((_JNIEnv *)this,p_Var3), cVar1 != '\0')) &&
      ((((cVar1 = Config::Register((_JNIEnv *)this,p_Var3), cVar1 != '\0' &&
         (cVar1 = Info::Register((_JNIEnv *)this,p_Var3), cVar1 != '\0')) &&
        ((cVar1 = Device::Register((_JNIEnv *)this,p_Var3), cVar1 != '\0' &&
         ((cVar1 = UI::Register((_JNIEnv *)this,p_Var3), cVar1 != '\0' &&
          (cVar1 = Resources::Register((_JNIEnv *)this,p_Var3), cVar1 != '\0')))))) &&
       (cVar1 = Graphics::RegisterCallbacks((_JNIEnv *)this,p_Var4), cVar1 != '\0')))) &&
     (((cVar1 = Graphics::Register((_JNIEnv *)this,p_Var4), cVar1 != '\0' &&
       (cVar1 = Diag::Register((_JNIEnv *)this,p_Var3), cVar1 != '\0')) &&
      (cVar1 = Web::Register((_JNIEnv *)this,p_Var3), cVar1 != '\0')))) {
    iVar2 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)this);
    return iVar2 != 0;
  }
  return false;
}

