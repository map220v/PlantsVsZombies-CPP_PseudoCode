// Class: EA::IO::AutoJNIEnv


/* EA::IO::AutoJNIEnv::AutoJNIEnv() */

void __thiscall EA::IO::AutoJNIEnv::AutoJNIEnv(AutoJNIEnv *this)

{
  int iVar1;
  void **ppvVar2;
  _JNIEnv **pp_Var3;
  
  ppvVar2 = (void **)AssetManagerJNI::GetVM();
  iVar1 = _JavaVM::GetEnv(ppvVar2,(int)this);
  if (iVar1 != 0) {
    pp_Var3 = (_JNIEnv **)AssetManagerJNI::GetVM();
    _JavaVM::AttachCurrentThread(pp_Var3,this);
  }
  this[8] = (AutoJNIEnv)(iVar1 != 0);
  _JNIEnv::PushLocalFrame((int)*(undefined8 *)this);
  return;
}


/* EA::IO::AutoJNIEnv::~AutoJNIEnv() */

void __thiscall EA::IO::AutoJNIEnv::~AutoJNIEnv(AutoJNIEnv *this)

{
  long lVar1;
  _JavaVM *this_00;
  
  _JNIEnv::PopLocalFrame(*(_jobject **)this);
  if ((this[8] != (AutoJNIEnv)0x0) &&
     (lVar1 = AssetManagerJNI::GetOriginalEnv(), *(long *)this != lVar1)) {
    this_00 = (_JavaVM *)AssetManagerJNI::GetVM();
    _JavaVM::DetachCurrentThread(this_00);
    return;
  }
  return;
}

