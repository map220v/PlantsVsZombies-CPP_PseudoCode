// Class: _JavaVM


/* _JavaVM::DetachCurrentThread() */

void __thiscall _JavaVM::DetachCurrentThread(_JavaVM *this)

{
  (**(code **)(*(long *)this + 0x28))();
  return;
}


/* _JavaVM::AttachCurrentThread(_JNIEnv**, void*) */

void _JavaVM::AttachCurrentThread(_JNIEnv **param_1,void *param_2)

{
  (**(code **)(*param_1 + 0x20))();
  return;
}


/* _JavaVM::GetEnv(void**, int) */

void _JavaVM::GetEnv(void **param_1,int param_2)

{
  (**(code **)((long)*param_1 + 0x30))(param_1,param_2);
  return;
}

