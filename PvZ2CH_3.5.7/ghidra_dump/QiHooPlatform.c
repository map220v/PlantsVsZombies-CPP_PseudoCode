// Class: QiHooPlatform


/* QiHooPlatform::~QiHooPlatform() */

void __thiscall QiHooPlatform::~QiHooPlatform(QiHooPlatform *this)

{
  *(undefined ***)this = &PTR__QiHooPlatform_069347e0;
  JavaBound<QiHooPlatform>::~JavaBound((JavaBound<QiHooPlatform> *)this);
  return;
}


/* QiHooPlatform::~QiHooPlatform() */

void __thiscall QiHooPlatform::~QiHooPlatform(QiHooPlatform *this)

{
  ~QiHooPlatform(this);
  AK::FreeHook(this);
  return;
}


/* QiHooPlatform::QiHooPlatform() */

void __thiscall QiHooPlatform::QiHooPlatform(QiHooPlatform *this)

{
  JavaBound<QiHooPlatform>::JavaBound((JavaBound<QiHooPlatform> *)this);
  *(undefined ***)this = &PTR__QiHooPlatform_069347e0;
  return;
}


/* QiHooPlatform::LoginHook(_JNIEnv*, _jobject*, long long) */

void QiHooPlatform::LoginHook(_JNIEnv *param_1,_jobject *param_2,longlong param_3)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}

