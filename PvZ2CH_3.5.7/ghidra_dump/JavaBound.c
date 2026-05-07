// Class: JavaBound<AndroidShareDriverMgr>


/* JavaBound<AndroidShareDriverMgr>::~JavaBound() */

void __thiscall JavaBound<AndroidShareDriverMgr>::~JavaBound(JavaBound<AndroidShareDriverMgr> *this)

{
  *(undefined ***)this = &PTR__JavaBound_06615bb0;
  JavaBase::~JavaBase((JavaBase *)this);
  return;
}


/* JavaBound<AndroidShareDriverMgr>::~JavaBound() */

void __thiscall JavaBound<AndroidShareDriverMgr>::~JavaBound(JavaBound<AndroidShareDriverMgr> *this)

{
  ~JavaBound(this);
  AK::FreeHook(this);
  return;
}


/* JavaBound<AndroidShareDriverMgr>::JavaBound() */

void __thiscall JavaBound<AndroidShareDriverMgr>::JavaBound(JavaBound<AndroidShareDriverMgr> *this)

{
  JavaBase::JavaBase((JavaBase *)this);
  *(undefined ***)this = &PTR__JavaBound_06615bb0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JavaBound<AndroidShareDriverMgr>::ConstructJava(_JNIEnv*, char const*, char const*, ...) */

void JavaBound<AndroidShareDriverMgr>::ConstructJava
               (_JNIEnv *param_1,char *param_2,char *param_3,...)

{
  long lVar1;
  char cVar2;
  char *in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  JavaBase::InitJava((JavaBase *)param_1,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,param_3);
  cVar2 = LevelOfTheDaySystem::IsCheatScheduleActive((LevelOfTheDaySystem *)sJavaClass);
  if (cVar2 != '\0') {
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 == '\0') {
      JavaMethodBase::init
                ((JavaMethodBase *)sJavaCtor,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,"<init>",
                 in_x3);
    }
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 != '\0') {
      local_e0 = &local_20;
      uStack_d8 = 0xffffff80ffffffe0;
      local_f0 = (undefined1 *)register0x00000008;
      puStack_e8 = (undefined1 *)register0x00000008;
      JavaBase::ConstructJavaObject((JavaBase *)param_1,param_2,sJavaClass,sJavaCtor,&local_f0);
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JavaBound<AndroidAchievementDriverMgr>::~JavaBound() */

void __thiscall
JavaBound<AndroidAchievementDriverMgr>::~JavaBound(JavaBound<AndroidAchievementDriverMgr> *this)

{
  *(undefined ***)this = &PTR__JavaBound_06615cf0;
  JavaBase::~JavaBase((JavaBase *)this);
  return;
}


/* JavaBound<AndroidAchievementDriverMgr>::~JavaBound() */

void __thiscall
JavaBound<AndroidAchievementDriverMgr>::~JavaBound(JavaBound<AndroidAchievementDriverMgr> *this)

{
  ~JavaBound(this);
  AK::FreeHook(this);
  return;
}


/* JavaBound<AndroidAchievementDriverMgr>::JavaBound() */

void __thiscall
JavaBound<AndroidAchievementDriverMgr>::JavaBound(JavaBound<AndroidAchievementDriverMgr> *this)

{
  JavaBase::JavaBase((JavaBase *)this);
  *(undefined ***)this = &PTR__JavaBound_06615cf0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JavaBound<AndroidAchievementDriverMgr>::ConstructJava(_JNIEnv*, char const*, char const*, ...) */

void JavaBound<AndroidAchievementDriverMgr>::ConstructJava
               (_JNIEnv *param_1,char *param_2,char *param_3,...)

{
  long lVar1;
  char cVar2;
  char *in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  JavaBase::InitJava((JavaBase *)param_1,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,param_3);
  cVar2 = LevelOfTheDaySystem::IsCheatScheduleActive((LevelOfTheDaySystem *)sJavaClass);
  if (cVar2 != '\0') {
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 == '\0') {
      JavaMethodBase::init
                ((JavaMethodBase *)sJavaCtor,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,"<init>",
                 in_x3);
    }
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 != '\0') {
      local_e0 = &local_20;
      uStack_d8 = 0xffffff80ffffffe0;
      local_f0 = (undefined1 *)register0x00000008;
      puStack_e8 = (undefined1 *)register0x00000008;
      JavaBase::ConstructJavaObject((JavaBase *)param_1,param_2,sJavaClass,sJavaCtor,&local_f0);
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JavaBound<Sexy::ChinaMobileMMPurchaseAdapter>::~JavaBound() */

void __thiscall
JavaBound<Sexy::ChinaMobileMMPurchaseAdapter>::~JavaBound
          (JavaBound<Sexy::ChinaMobileMMPurchaseAdapter> *this)

{
  *(undefined ***)this = &PTR__JavaBound_0690b850;
  JavaBase::~JavaBase((JavaBase *)this);
  return;
}


/* JavaBound<Sexy::ChinaMobileMMPurchaseAdapter>::~JavaBound() */

void __thiscall
JavaBound<Sexy::ChinaMobileMMPurchaseAdapter>::~JavaBound
          (JavaBound<Sexy::ChinaMobileMMPurchaseAdapter> *this)

{
  ~JavaBound(this);
  AK::FreeHook(this);
  return;
}


/* JavaBound<Sexy::ChinaMobileMMPurchaseAdapter>::JavaBound() */

void __thiscall
JavaBound<Sexy::ChinaMobileMMPurchaseAdapter>::JavaBound
          (JavaBound<Sexy::ChinaMobileMMPurchaseAdapter> *this)

{
  JavaBase::JavaBase((JavaBase *)this);
  *(undefined ***)this = &PTR__JavaBound_0690b850;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JavaBound<Sexy::ChinaMobileMMPurchaseAdapter>::ConstructJava(_JNIEnv*, char const*, char const*,
   ...) */

void JavaBound<Sexy::ChinaMobileMMPurchaseAdapter>::ConstructJava
               (_JNIEnv *param_1,char *param_2,char *param_3,...)

{
  long lVar1;
  char cVar2;
  char *in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  JavaBase::InitJava((JavaBase *)param_1,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,param_3);
  cVar2 = LevelOfTheDaySystem::IsCheatScheduleActive((LevelOfTheDaySystem *)sJavaClass);
  if (cVar2 != '\0') {
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 == '\0') {
      JavaMethodBase::init
                ((JavaMethodBase *)sJavaCtor,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,"<init>",
                 in_x3);
    }
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 != '\0') {
      local_e0 = &local_20;
      uStack_d8 = 0xffffff80ffffffe0;
      local_f0 = (undefined1 *)register0x00000008;
      puStack_e8 = (undefined1 *)register0x00000008;
      JavaBase::ConstructJavaObject((JavaBase *)param_1,param_2,sJavaClass,sJavaCtor,&local_f0);
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JavaBound<Sexy::ChinaMobileMMChannelPurchaseAdapter>::~JavaBound() */

void __thiscall
JavaBound<Sexy::ChinaMobileMMChannelPurchaseAdapter>::~JavaBound
          (JavaBound<Sexy::ChinaMobileMMChannelPurchaseAdapter> *this)

{
  *(undefined ***)this = &PTR__JavaBound_0690ba00;
  JavaBase::~JavaBase((JavaBase *)this);
  return;
}


/* JavaBound<Sexy::ChinaMobileMMChannelPurchaseAdapter>::~JavaBound() */

void __thiscall
JavaBound<Sexy::ChinaMobileMMChannelPurchaseAdapter>::~JavaBound
          (JavaBound<Sexy::ChinaMobileMMChannelPurchaseAdapter> *this)

{
  ~JavaBound(this);
  AK::FreeHook(this);
  return;
}


/* JavaBound<Sexy::ChinaMobileMMChannelPurchaseAdapter>::JavaBound() */

void __thiscall
JavaBound<Sexy::ChinaMobileMMChannelPurchaseAdapter>::JavaBound
          (JavaBound<Sexy::ChinaMobileMMChannelPurchaseAdapter> *this)

{
  JavaBase::JavaBase((JavaBase *)this);
  *(undefined ***)this = &PTR__JavaBound_0690ba00;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JavaBound<Sexy::ChinaMobileMMChannelPurchaseAdapter>::ConstructJava(_JNIEnv*, char const*, char
   const*, ...) */

void JavaBound<Sexy::ChinaMobileMMChannelPurchaseAdapter>::ConstructJava
               (_JNIEnv *param_1,char *param_2,char *param_3,...)

{
  long lVar1;
  char cVar2;
  char *in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  JavaBase::InitJava((JavaBase *)param_1,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,param_3);
  cVar2 = LevelOfTheDaySystem::IsCheatScheduleActive((LevelOfTheDaySystem *)sJavaClass);
  if (cVar2 != '\0') {
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 == '\0') {
      JavaMethodBase::init
                ((JavaMethodBase *)sJavaCtor,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,"<init>",
                 in_x3);
    }
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 != '\0') {
      local_e0 = &local_20;
      uStack_d8 = 0xffffff80ffffffe0;
      local_f0 = (undefined1 *)register0x00000008;
      puStack_e8 = (undefined1 *)register0x00000008;
      JavaBase::ConstructJavaObject((JavaBase *)param_1,param_2,sJavaClass,sJavaCtor,&local_f0);
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JavaBound<Sexy::ChinaMobilePurchaseAdapter>::~JavaBound() */

void __thiscall
JavaBound<Sexy::ChinaMobilePurchaseAdapter>::~JavaBound
          (JavaBound<Sexy::ChinaMobilePurchaseAdapter> *this)

{
  *(undefined ***)this = &PTR__JavaBound_0690bbb0;
  JavaBase::~JavaBase((JavaBase *)this);
  return;
}


/* JavaBound<Sexy::ChinaMobilePurchaseAdapter>::~JavaBound() */

void __thiscall
JavaBound<Sexy::ChinaMobilePurchaseAdapter>::~JavaBound
          (JavaBound<Sexy::ChinaMobilePurchaseAdapter> *this)

{
  ~JavaBound(this);
  AK::FreeHook(this);
  return;
}


/* JavaBound<Sexy::ChinaMobilePurchaseAdapter>::JavaBound() */

void __thiscall
JavaBound<Sexy::ChinaMobilePurchaseAdapter>::JavaBound
          (JavaBound<Sexy::ChinaMobilePurchaseAdapter> *this)

{
  JavaBase::JavaBase((JavaBase *)this);
  *(undefined ***)this = &PTR__JavaBound_0690bbb0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JavaBound<Sexy::ChinaMobilePurchaseAdapter>::ConstructJava(_JNIEnv*, char const*, char const*,
   ...) */

void JavaBound<Sexy::ChinaMobilePurchaseAdapter>::ConstructJava
               (_JNIEnv *param_1,char *param_2,char *param_3,...)

{
  long lVar1;
  char cVar2;
  char *in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  JavaBase::InitJava((JavaBase *)param_1,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,param_3);
  cVar2 = LevelOfTheDaySystem::IsCheatScheduleActive((LevelOfTheDaySystem *)sJavaClass);
  if (cVar2 != '\0') {
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 == '\0') {
      JavaMethodBase::init
                ((JavaMethodBase *)sJavaCtor,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,"<init>",
                 in_x3);
    }
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 != '\0') {
      local_e0 = &local_20;
      uStack_d8 = 0xffffff80ffffffe0;
      local_f0 = (undefined1 *)register0x00000008;
      puStack_e8 = (undefined1 *)register0x00000008;
      JavaBase::ConstructJavaObject((JavaBase *)param_1,param_2,sJavaClass,sJavaCtor,&local_f0);
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JavaBound<Sexy::ChinaMobileChannelPurchaseAdapter>::~JavaBound() */

void __thiscall
JavaBound<Sexy::ChinaMobileChannelPurchaseAdapter>::~JavaBound
          (JavaBound<Sexy::ChinaMobileChannelPurchaseAdapter> *this)

{
  *(undefined ***)this = &PTR__JavaBound_0690bd60;
  JavaBase::~JavaBase((JavaBase *)this);
  return;
}


/* JavaBound<Sexy::ChinaMobileChannelPurchaseAdapter>::~JavaBound() */

void __thiscall
JavaBound<Sexy::ChinaMobileChannelPurchaseAdapter>::~JavaBound
          (JavaBound<Sexy::ChinaMobileChannelPurchaseAdapter> *this)

{
  ~JavaBound(this);
  AK::FreeHook(this);
  return;
}


/* JavaBound<Sexy::ChinaMobileChannelPurchaseAdapter>::JavaBound() */

void __thiscall
JavaBound<Sexy::ChinaMobileChannelPurchaseAdapter>::JavaBound
          (JavaBound<Sexy::ChinaMobileChannelPurchaseAdapter> *this)

{
  JavaBase::JavaBase((JavaBase *)this);
  *(undefined ***)this = &PTR__JavaBound_0690bd60;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JavaBound<Sexy::ChinaMobileChannelPurchaseAdapter>::ConstructJava(_JNIEnv*, char const*, char
   const*, ...) */

void JavaBound<Sexy::ChinaMobileChannelPurchaseAdapter>::ConstructJava
               (_JNIEnv *param_1,char *param_2,char *param_3,...)

{
  long lVar1;
  char cVar2;
  char *in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  JavaBase::InitJava((JavaBase *)param_1,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,param_3);
  cVar2 = LevelOfTheDaySystem::IsCheatScheduleActive((LevelOfTheDaySystem *)sJavaClass);
  if (cVar2 != '\0') {
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 == '\0') {
      JavaMethodBase::init
                ((JavaMethodBase *)sJavaCtor,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,"<init>",
                 in_x3);
    }
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 != '\0') {
      local_e0 = &local_20;
      uStack_d8 = 0xffffff80ffffffe0;
      local_f0 = (undefined1 *)register0x00000008;
      puStack_e8 = (undefined1 *)register0x00000008;
      JavaBase::ConstructJavaObject((JavaBase *)param_1,param_2,sJavaClass,sJavaCtor,&local_f0);
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JavaBound<Sexy::QQGameCenterPurchaseAdapter>::~JavaBound() */

void __thiscall
JavaBound<Sexy::QQGameCenterPurchaseAdapter>::~JavaBound
          (JavaBound<Sexy::QQGameCenterPurchaseAdapter> *this)

{
  *(undefined ***)this = &PTR__JavaBound_0690c020;
  JavaBase::~JavaBase((JavaBase *)this);
  return;
}


/* JavaBound<Sexy::QQGameCenterPurchaseAdapter>::~JavaBound() */

void __thiscall
JavaBound<Sexy::QQGameCenterPurchaseAdapter>::~JavaBound
          (JavaBound<Sexy::QQGameCenterPurchaseAdapter> *this)

{
  ~JavaBound(this);
  AK::FreeHook(this);
  return;
}


/* JavaBound<Sexy::QQGameCenterPurchaseAdapter>::JavaBound() */

void __thiscall
JavaBound<Sexy::QQGameCenterPurchaseAdapter>::JavaBound
          (JavaBound<Sexy::QQGameCenterPurchaseAdapter> *this)

{
  JavaBase::JavaBase((JavaBase *)this);
  *(undefined ***)this = &PTR__JavaBound_0690c020;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JavaBound<Sexy::QQGameCenterPurchaseAdapter>::ConstructJava(_JNIEnv*, char const*, char const*,
   ...) */

void JavaBound<Sexy::QQGameCenterPurchaseAdapter>::ConstructJava
               (_JNIEnv *param_1,char *param_2,char *param_3,...)

{
  long lVar1;
  char cVar2;
  char *in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  JavaBase::InitJava((JavaBase *)param_1,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,param_3);
  cVar2 = LevelOfTheDaySystem::IsCheatScheduleActive((LevelOfTheDaySystem *)sJavaClass);
  if (cVar2 != '\0') {
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 == '\0') {
      JavaMethodBase::init
                ((JavaMethodBase *)sJavaCtor,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,"<init>",
                 in_x3);
    }
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 != '\0') {
      local_e0 = &local_20;
      uStack_d8 = 0xffffff80ffffffe0;
      local_f0 = (undefined1 *)register0x00000008;
      puStack_e8 = (undefined1 *)register0x00000008;
      JavaBase::ConstructJavaObject((JavaBase *)param_1,param_2,sJavaClass,sJavaCtor,&local_f0);
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JavaBound<Sexy::QQGameCenterUnicomPurchaseAdapter>::~JavaBound() */

void __thiscall
JavaBound<Sexy::QQGameCenterUnicomPurchaseAdapter>::~JavaBound
          (JavaBound<Sexy::QQGameCenterUnicomPurchaseAdapter> *this)

{
  *(undefined ***)this = &PTR__JavaBound_0690c1d0;
  JavaBase::~JavaBase((JavaBase *)this);
  return;
}


/* JavaBound<Sexy::QQGameCenterUnicomPurchaseAdapter>::~JavaBound() */

void __thiscall
JavaBound<Sexy::QQGameCenterUnicomPurchaseAdapter>::~JavaBound
          (JavaBound<Sexy::QQGameCenterUnicomPurchaseAdapter> *this)

{
  ~JavaBound(this);
  AK::FreeHook(this);
  return;
}


/* JavaBound<Sexy::QQGameCenterUnicomPurchaseAdapter>::JavaBound() */

void __thiscall
JavaBound<Sexy::QQGameCenterUnicomPurchaseAdapter>::JavaBound
          (JavaBound<Sexy::QQGameCenterUnicomPurchaseAdapter> *this)

{
  JavaBase::JavaBase((JavaBase *)this);
  *(undefined ***)this = &PTR__JavaBound_0690c1d0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JavaBound<Sexy::QQGameCenterUnicomPurchaseAdapter>::ConstructJava(_JNIEnv*, char const*, char
   const*, ...) */

void JavaBound<Sexy::QQGameCenterUnicomPurchaseAdapter>::ConstructJava
               (_JNIEnv *param_1,char *param_2,char *param_3,...)

{
  long lVar1;
  char cVar2;
  char *in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  JavaBase::InitJava((JavaBase *)param_1,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,param_3);
  cVar2 = LevelOfTheDaySystem::IsCheatScheduleActive((LevelOfTheDaySystem *)sJavaClass);
  if (cVar2 != '\0') {
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 == '\0') {
      JavaMethodBase::init
                ((JavaMethodBase *)sJavaCtor,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,"<init>",
                 in_x3);
    }
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 != '\0') {
      local_e0 = &local_20;
      uStack_d8 = 0xffffff80ffffffe0;
      local_f0 = (undefined1 *)register0x00000008;
      puStack_e8 = (undefined1 *)register0x00000008;
      JavaBase::ConstructJavaObject((JavaBase *)param_1,param_2,sJavaClass,sJavaCtor,&local_f0);
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JavaBound<Sexy::TelecomPurchaseAdapter>::~JavaBound() */

void __thiscall
JavaBound<Sexy::TelecomPurchaseAdapter>::~JavaBound(JavaBound<Sexy::TelecomPurchaseAdapter> *this)

{
  *(undefined ***)this = &PTR__JavaBound_0690c380;
  JavaBase::~JavaBase((JavaBase *)this);
  return;
}


/* JavaBound<Sexy::TelecomPurchaseAdapter>::~JavaBound() */

void __thiscall
JavaBound<Sexy::TelecomPurchaseAdapter>::~JavaBound(JavaBound<Sexy::TelecomPurchaseAdapter> *this)

{
  ~JavaBound(this);
  AK::FreeHook(this);
  return;
}


/* JavaBound<Sexy::TelecomPurchaseAdapter>::JavaBound() */

void __thiscall
JavaBound<Sexy::TelecomPurchaseAdapter>::JavaBound(JavaBound<Sexy::TelecomPurchaseAdapter> *this)

{
  JavaBase::JavaBase((JavaBase *)this);
  *(undefined ***)this = &PTR__JavaBound_0690c380;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JavaBound<Sexy::TelecomPurchaseAdapter>::ConstructJava(_JNIEnv*, char const*, char const*, ...)
    */

void JavaBound<Sexy::TelecomPurchaseAdapter>::ConstructJava
               (_JNIEnv *param_1,char *param_2,char *param_3,...)

{
  long lVar1;
  char cVar2;
  char *in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  JavaBase::InitJava((JavaBase *)param_1,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,param_3);
  cVar2 = LevelOfTheDaySystem::IsCheatScheduleActive((LevelOfTheDaySystem *)sJavaClass);
  if (cVar2 != '\0') {
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 == '\0') {
      JavaMethodBase::init
                ((JavaMethodBase *)sJavaCtor,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,"<init>",
                 in_x3);
    }
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 != '\0') {
      local_e0 = &local_20;
      uStack_d8 = 0xffffff80ffffffe0;
      local_f0 = (undefined1 *)register0x00000008;
      puStack_e8 = (undefined1 *)register0x00000008;
      JavaBase::ConstructJavaObject((JavaBase *)param_1,param_2,sJavaClass,sJavaCtor,&local_f0);
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JavaBound<Sexy::TelecomChannelPurchaseAdapter>::~JavaBound() */

void __thiscall
JavaBound<Sexy::TelecomChannelPurchaseAdapter>::~JavaBound
          (JavaBound<Sexy::TelecomChannelPurchaseAdapter> *this)

{
  *(undefined ***)this = &PTR__JavaBound_0690c530;
  JavaBase::~JavaBase((JavaBase *)this);
  return;
}


/* JavaBound<Sexy::TelecomChannelPurchaseAdapter>::~JavaBound() */

void __thiscall
JavaBound<Sexy::TelecomChannelPurchaseAdapter>::~JavaBound
          (JavaBound<Sexy::TelecomChannelPurchaseAdapter> *this)

{
  ~JavaBound(this);
  AK::FreeHook(this);
  return;
}


/* JavaBound<Sexy::TelecomChannelPurchaseAdapter>::JavaBound() */

void __thiscall
JavaBound<Sexy::TelecomChannelPurchaseAdapter>::JavaBound
          (JavaBound<Sexy::TelecomChannelPurchaseAdapter> *this)

{
  JavaBase::JavaBase((JavaBase *)this);
  *(undefined ***)this = &PTR__JavaBound_0690c530;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JavaBound<Sexy::TelecomChannelPurchaseAdapter>::ConstructJava(_JNIEnv*, char const*, char const*,
   ...) */

void JavaBound<Sexy::TelecomChannelPurchaseAdapter>::ConstructJava
               (_JNIEnv *param_1,char *param_2,char *param_3,...)

{
  long lVar1;
  char cVar2;
  char *in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  JavaBase::InitJava((JavaBase *)param_1,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,param_3);
  cVar2 = LevelOfTheDaySystem::IsCheatScheduleActive((LevelOfTheDaySystem *)sJavaClass);
  if (cVar2 != '\0') {
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 == '\0') {
      JavaMethodBase::init
                ((JavaMethodBase *)sJavaCtor,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,"<init>",
                 in_x3);
    }
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 != '\0') {
      local_e0 = &local_20;
      uStack_d8 = 0xffffff80ffffffe0;
      local_f0 = (undefined1 *)register0x00000008;
      puStack_e8 = (undefined1 *)register0x00000008;
      JavaBase::ConstructJavaObject((JavaBase *)param_1,param_2,sJavaClass,sJavaCtor,&local_f0);
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JavaBound<Sexy::UnicomPurchaseAdapter>::~JavaBound() */

void __thiscall
JavaBound<Sexy::UnicomPurchaseAdapter>::~JavaBound(JavaBound<Sexy::UnicomPurchaseAdapter> *this)

{
  *(undefined ***)this = &PTR__JavaBound_0690c6e0;
  JavaBase::~JavaBase((JavaBase *)this);
  return;
}


/* JavaBound<Sexy::UnicomPurchaseAdapter>::~JavaBound() */

void __thiscall
JavaBound<Sexy::UnicomPurchaseAdapter>::~JavaBound(JavaBound<Sexy::UnicomPurchaseAdapter> *this)

{
  ~JavaBound(this);
  AK::FreeHook(this);
  return;
}


/* JavaBound<Sexy::UnicomPurchaseAdapter>::JavaBound() */

void __thiscall
JavaBound<Sexy::UnicomPurchaseAdapter>::JavaBound(JavaBound<Sexy::UnicomPurchaseAdapter> *this)

{
  JavaBase::JavaBase((JavaBase *)this);
  *(undefined ***)this = &PTR__JavaBound_0690c6e0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JavaBound<Sexy::UnicomPurchaseAdapter>::ConstructJava(_JNIEnv*, char const*, char const*, ...) */

void JavaBound<Sexy::UnicomPurchaseAdapter>::ConstructJava
               (_JNIEnv *param_1,char *param_2,char *param_3,...)

{
  long lVar1;
  char cVar2;
  char *in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  JavaBase::InitJava((JavaBase *)param_1,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,param_3);
  cVar2 = LevelOfTheDaySystem::IsCheatScheduleActive((LevelOfTheDaySystem *)sJavaClass);
  if (cVar2 != '\0') {
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 == '\0') {
      JavaMethodBase::init
                ((JavaMethodBase *)sJavaCtor,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,"<init>",
                 in_x3);
    }
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 != '\0') {
      local_e0 = &local_20;
      uStack_d8 = 0xffffff80ffffffe0;
      local_f0 = (undefined1 *)register0x00000008;
      puStack_e8 = (undefined1 *)register0x00000008;
      JavaBase::ConstructJavaObject((JavaBase *)param_1,param_2,sJavaClass,sJavaCtor,&local_f0);
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JavaBound<Sexy::UnicomChannelPurchaseAdapter>::~JavaBound() */

void __thiscall
JavaBound<Sexy::UnicomChannelPurchaseAdapter>::~JavaBound
          (JavaBound<Sexy::UnicomChannelPurchaseAdapter> *this)

{
  *(undefined ***)this = &PTR__JavaBound_0690c890;
  JavaBase::~JavaBase((JavaBase *)this);
  return;
}


/* JavaBound<Sexy::UnicomChannelPurchaseAdapter>::~JavaBound() */

void __thiscall
JavaBound<Sexy::UnicomChannelPurchaseAdapter>::~JavaBound
          (JavaBound<Sexy::UnicomChannelPurchaseAdapter> *this)

{
  ~JavaBound(this);
  AK::FreeHook(this);
  return;
}


/* JavaBound<Sexy::UnicomChannelPurchaseAdapter>::JavaBound() */

void __thiscall
JavaBound<Sexy::UnicomChannelPurchaseAdapter>::JavaBound
          (JavaBound<Sexy::UnicomChannelPurchaseAdapter> *this)

{
  JavaBase::JavaBase((JavaBase *)this);
  *(undefined ***)this = &PTR__JavaBound_0690c890;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JavaBound<Sexy::UnicomChannelPurchaseAdapter>::ConstructJava(_JNIEnv*, char const*, char const*,
   ...) */

void JavaBound<Sexy::UnicomChannelPurchaseAdapter>::ConstructJava
               (_JNIEnv *param_1,char *param_2,char *param_3,...)

{
  long lVar1;
  char cVar2;
  char *in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  JavaBase::InitJava((JavaBase *)param_1,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,param_3);
  cVar2 = LevelOfTheDaySystem::IsCheatScheduleActive((LevelOfTheDaySystem *)sJavaClass);
  if (cVar2 != '\0') {
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 == '\0') {
      JavaMethodBase::init
                ((JavaMethodBase *)sJavaCtor,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,"<init>",
                 in_x3);
    }
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 != '\0') {
      local_e0 = &local_20;
      uStack_d8 = 0xffffff80ffffffe0;
      local_f0 = (undefined1 *)register0x00000008;
      puStack_e8 = (undefined1 *)register0x00000008;
      JavaBase::ConstructJavaObject((JavaBase *)param_1,param_2,sJavaClass,sJavaCtor,&local_f0);
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JavaBound<Sexy::UnicomWidebandPurchaseAdapter>::~JavaBound() */

void __thiscall
JavaBound<Sexy::UnicomWidebandPurchaseAdapter>::~JavaBound
          (JavaBound<Sexy::UnicomWidebandPurchaseAdapter> *this)

{
  *(undefined ***)this = &PTR__JavaBound_0690ca40;
  JavaBase::~JavaBase((JavaBase *)this);
  return;
}


/* JavaBound<Sexy::UnicomWidebandPurchaseAdapter>::~JavaBound() */

void __thiscall
JavaBound<Sexy::UnicomWidebandPurchaseAdapter>::~JavaBound
          (JavaBound<Sexy::UnicomWidebandPurchaseAdapter> *this)

{
  ~JavaBound(this);
  AK::FreeHook(this);
  return;
}


/* JavaBound<Sexy::UnicomWidebandPurchaseAdapter>::JavaBound() */

void __thiscall
JavaBound<Sexy::UnicomWidebandPurchaseAdapter>::JavaBound
          (JavaBound<Sexy::UnicomWidebandPurchaseAdapter> *this)

{
  JavaBase::JavaBase((JavaBase *)this);
  *(undefined ***)this = &PTR__JavaBound_0690ca40;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JavaBound<Sexy::UnicomWidebandPurchaseAdapter>::ConstructJava(_JNIEnv*, char const*, char const*,
   ...) */

void JavaBound<Sexy::UnicomWidebandPurchaseAdapter>::ConstructJava
               (_JNIEnv *param_1,char *param_2,char *param_3,...)

{
  long lVar1;
  char cVar2;
  char *in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  JavaBase::InitJava((JavaBase *)param_1,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,param_3);
  cVar2 = LevelOfTheDaySystem::IsCheatScheduleActive((LevelOfTheDaySystem *)sJavaClass);
  if (cVar2 != '\0') {
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 == '\0') {
      JavaMethodBase::init
                ((JavaMethodBase *)sJavaCtor,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,"<init>",
                 in_x3);
    }
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 != '\0') {
      local_e0 = &local_20;
      uStack_d8 = 0xffffff80ffffffe0;
      local_f0 = (undefined1 *)register0x00000008;
      puStack_e8 = (undefined1 *)register0x00000008;
      JavaBase::ConstructJavaObject((JavaBase *)param_1,param_2,sJavaClass,sJavaCtor,&local_f0);
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JavaBound<Sexy::WeChatPurchaseAdapter>::~JavaBound() */

void __thiscall
JavaBound<Sexy::WeChatPurchaseAdapter>::~JavaBound(JavaBound<Sexy::WeChatPurchaseAdapter> *this)

{
  *(undefined ***)this = &PTR__JavaBound_0690cbf0;
  JavaBase::~JavaBase((JavaBase *)this);
  return;
}


/* JavaBound<Sexy::WeChatPurchaseAdapter>::~JavaBound() */

void __thiscall
JavaBound<Sexy::WeChatPurchaseAdapter>::~JavaBound(JavaBound<Sexy::WeChatPurchaseAdapter> *this)

{
  ~JavaBound(this);
  AK::FreeHook(this);
  return;
}


/* JavaBound<Sexy::WeChatPurchaseAdapter>::JavaBound() */

void __thiscall
JavaBound<Sexy::WeChatPurchaseAdapter>::JavaBound(JavaBound<Sexy::WeChatPurchaseAdapter> *this)

{
  JavaBase::JavaBase((JavaBase *)this);
  *(undefined ***)this = &PTR__JavaBound_0690cbf0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JavaBound<Sexy::WeChatPurchaseAdapter>::ConstructJava(_JNIEnv*, char const*, char const*, ...) */

void JavaBound<Sexy::WeChatPurchaseAdapter>::ConstructJava
               (_JNIEnv *param_1,char *param_2,char *param_3,...)

{
  long lVar1;
  char cVar2;
  char *in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  JavaBase::InitJava((JavaBase *)param_1,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,param_3);
  cVar2 = LevelOfTheDaySystem::IsCheatScheduleActive((LevelOfTheDaySystem *)sJavaClass);
  if (cVar2 != '\0') {
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 == '\0') {
      JavaMethodBase::init
                ((JavaMethodBase *)sJavaCtor,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,"<init>",
                 in_x3);
    }
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 != '\0') {
      local_e0 = &local_20;
      uStack_d8 = 0xffffff80ffffffe0;
      local_f0 = (undefined1 *)register0x00000008;
      puStack_e8 = (undefined1 *)register0x00000008;
      JavaBase::ConstructJavaObject((JavaBase *)param_1,param_2,sJavaClass,sJavaCtor,&local_f0);
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JavaBound<Sexy::TWPurchaseAdapter>::~JavaBound() */

void __thiscall
JavaBound<Sexy::TWPurchaseAdapter>::~JavaBound(JavaBound<Sexy::TWPurchaseAdapter> *this)

{
  *(undefined ***)this = &PTR__JavaBound_0690cda0;
  JavaBase::~JavaBase((JavaBase *)this);
  return;
}


/* JavaBound<Sexy::TWPurchaseAdapter>::~JavaBound() */

void __thiscall
JavaBound<Sexy::TWPurchaseAdapter>::~JavaBound(JavaBound<Sexy::TWPurchaseAdapter> *this)

{
  ~JavaBound(this);
  AK::FreeHook(this);
  return;
}


/* JavaBound<Sexy::TWPurchaseAdapter>::JavaBound() */

void __thiscall
JavaBound<Sexy::TWPurchaseAdapter>::JavaBound(JavaBound<Sexy::TWPurchaseAdapter> *this)

{
  JavaBase::JavaBase((JavaBase *)this);
  *(undefined ***)this = &PTR__JavaBound_0690cda0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JavaBound<Sexy::TWPurchaseAdapter>::ConstructJava(_JNIEnv*, char const*, char const*, ...) */

void JavaBound<Sexy::TWPurchaseAdapter>::ConstructJava
               (_JNIEnv *param_1,char *param_2,char *param_3,...)

{
  long lVar1;
  char cVar2;
  char *in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  JavaBase::InitJava((JavaBase *)param_1,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,param_3);
  cVar2 = LevelOfTheDaySystem::IsCheatScheduleActive((LevelOfTheDaySystem *)sJavaClass);
  if (cVar2 != '\0') {
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 == '\0') {
      JavaMethodBase::init
                ((JavaMethodBase *)sJavaCtor,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,"<init>",
                 in_x3);
    }
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 != '\0') {
      local_e0 = &local_20;
      uStack_d8 = 0xffffff80ffffffe0;
      local_f0 = (undefined1 *)register0x00000008;
      puStack_e8 = (undefined1 *)register0x00000008;
      JavaBase::ConstructJavaObject((JavaBase *)param_1,param_2,sJavaClass,sJavaCtor,&local_f0);
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JavaBound<QiHooPlatform>::~JavaBound() */

void __thiscall JavaBound<QiHooPlatform>::~JavaBound(JavaBound<QiHooPlatform> *this)

{
  *(undefined ***)this = &PTR__JavaBound_069347b0;
  JavaBase::~JavaBase((JavaBase *)this);
  return;
}


/* JavaBound<QiHooPlatform>::~JavaBound() */

void __thiscall JavaBound<QiHooPlatform>::~JavaBound(JavaBound<QiHooPlatform> *this)

{
  ~JavaBound(this);
  AK::FreeHook(this);
  return;
}


/* JavaBound<QiHooPlatform>::JavaBound() */

void __thiscall JavaBound<QiHooPlatform>::JavaBound(JavaBound<QiHooPlatform> *this)

{
  JavaBase::JavaBase((JavaBase *)this);
  *(undefined ***)this = &PTR__JavaBound_069347b0;
  return;
}


/* JavaBound<EASquared_Android>::~JavaBound() */

void __thiscall JavaBound<EASquared_Android>::~JavaBound(JavaBound<EASquared_Android> *this)

{
  *(undefined ***)this = &PTR__JavaBound_0697dfe0;
  JavaBase::~JavaBase((JavaBase *)this);
  return;
}


/* JavaBound<EASquared_Android>::~JavaBound() */

void __thiscall JavaBound<EASquared_Android>::~JavaBound(JavaBound<EASquared_Android> *this)

{
  ~JavaBound(this);
  AK::FreeHook(this);
  return;
}


/* JavaBound<EASquared_Android>::JavaBound() */

void __thiscall JavaBound<EASquared_Android>::JavaBound(JavaBound<EASquared_Android> *this)

{
  JavaBase::JavaBase((JavaBase *)this);
  *(undefined ***)this = &PTR__JavaBound_0697dfe0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JavaBound<EASquared_Android>::ConstructJava(_JNIEnv*, char const*, char const*, ...) */

void JavaBound<EASquared_Android>::ConstructJava(_JNIEnv *param_1,char *param_2,char *param_3,...)

{
  long lVar1;
  char cVar2;
  char *in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  JavaBase::InitJava((JavaBase *)param_1,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,param_3);
  cVar2 = LevelOfTheDaySystem::IsCheatScheduleActive((LevelOfTheDaySystem *)sJavaClass);
  if (cVar2 != '\0') {
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 == '\0') {
      JavaMethodBase::init
                ((JavaMethodBase *)sJavaCtor,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,"<init>",
                 in_x3);
    }
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 != '\0') {
      local_e0 = &local_20;
      uStack_d8 = 0xffffff80ffffffe0;
      local_f0 = (undefined1 *)register0x00000008;
      puStack_e8 = (undefined1 *)register0x00000008;
      JavaBase::ConstructJavaObject((JavaBase *)param_1,param_2,sJavaClass,sJavaCtor,&local_f0);
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JavaBound<AndroidWechatPlatform>::~JavaBound() */

void __thiscall JavaBound<AndroidWechatPlatform>::~JavaBound(JavaBound<AndroidWechatPlatform> *this)

{
  *(undefined ***)this = &PTR__JavaBound_069819d0;
  JavaBase::~JavaBase((JavaBase *)this);
  return;
}


/* JavaBound<AndroidWechatPlatform>::~JavaBound() */

void __thiscall JavaBound<AndroidWechatPlatform>::~JavaBound(JavaBound<AndroidWechatPlatform> *this)

{
  ~JavaBound(this);
  AK::FreeHook(this);
  return;
}


/* JavaBound<AndroidWechatPlatform>::JavaBound() */

void __thiscall JavaBound<AndroidWechatPlatform>::JavaBound(JavaBound<AndroidWechatPlatform> *this)

{
  JavaBase::JavaBase((JavaBase *)this);
  *(undefined ***)this = &PTR__JavaBound_069819d0;
  return;
}


/* JavaBound<AndroidViewContainerMgr>::~JavaBound() */

void __thiscall
JavaBound<AndroidViewContainerMgr>::~JavaBound(JavaBound<AndroidViewContainerMgr> *this)

{
  *(undefined ***)this = &PTR__JavaBound_06981b20;
  JavaBase::~JavaBase((JavaBase *)this);
  return;
}


/* JavaBound<AndroidViewContainerMgr>::~JavaBound() */

void __thiscall
JavaBound<AndroidViewContainerMgr>::~JavaBound(JavaBound<AndroidViewContainerMgr> *this)

{
  ~JavaBound(this);
  AK::FreeHook(this);
  return;
}


/* JavaBound<AndroidViewContainerMgr>::JavaBound() */

void __thiscall
JavaBound<AndroidViewContainerMgr>::JavaBound(JavaBound<AndroidViewContainerMgr> *this)

{
  JavaBase::JavaBase((JavaBase *)this);
  *(undefined ***)this = &PTR__JavaBound_06981b20;
  return;
}


/* JavaBound<Sexy::AndroidHttpDriver>::~JavaBound() */

void __thiscall
JavaBound<Sexy::AndroidHttpDriver>::~JavaBound(JavaBound<Sexy::AndroidHttpDriver> *this)

{
  *(undefined ***)this = &PTR__JavaBound_06a34c10;
  JavaBase::~JavaBase((JavaBase *)this);
  return;
}


/* JavaBound<Sexy::AndroidHttpDriver>::~JavaBound() */

void __thiscall
JavaBound<Sexy::AndroidHttpDriver>::~JavaBound(JavaBound<Sexy::AndroidHttpDriver> *this)

{
  ~JavaBound(this);
  AK::FreeHook(this);
  return;
}


/* JavaBound<Sexy::AndroidHttpDriver>::JavaBound() */

void __thiscall
JavaBound<Sexy::AndroidHttpDriver>::JavaBound(JavaBound<Sexy::AndroidHttpDriver> *this)

{
  JavaBase::JavaBase((JavaBase *)this);
  *(undefined ***)this = &PTR__JavaBound_06a34c10;
  return;
}


/* JavaBound<Sexy::AndroidHttpDriver>::AttachJava(_JNIEnv*, char const*, _jobject*) */

void __thiscall
JavaBound<Sexy::AndroidHttpDriver>::AttachJava
          (JavaBound<Sexy::AndroidHttpDriver> *this,_JNIEnv *param_1,char *param_2,_jobject *param_3
          )

{
  JavaBase::InitJava((JavaBase *)this,param_1,(JavaClass *)sJavaClass,param_2);
  JavaBase::AttachJavaObject((JavaBase *)this,param_1,param_3);
  return;
}


/* JavaBound<Sexy::AndroidHttpTransaction>::~JavaBound() */

void __thiscall
JavaBound<Sexy::AndroidHttpTransaction>::~JavaBound(JavaBound<Sexy::AndroidHttpTransaction> *this)

{
  *(undefined ***)this = &PTR__JavaBound_06a34cc0;
  JavaBase::~JavaBase((JavaBase *)this);
  return;
}


/* JavaBound<Sexy::AndroidHttpTransaction>::~JavaBound() */

void __thiscall
JavaBound<Sexy::AndroidHttpTransaction>::~JavaBound(JavaBound<Sexy::AndroidHttpTransaction> *this)

{
  ~JavaBound(this);
  AK::FreeHook(this);
  return;
}


/* JavaBound<Sexy::AndroidHttpTransaction>::JavaBound() */

void __thiscall
JavaBound<Sexy::AndroidHttpTransaction>::JavaBound(JavaBound<Sexy::AndroidHttpTransaction> *this)

{
  JavaBase::JavaBase((JavaBase *)this);
  *(undefined ***)this = &PTR__JavaBound_06a34cc0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JavaBound<Sexy::AndroidHttpTransaction>::ConstructJava(_JNIEnv*, char const*, char const*, ...)
    */

void JavaBound<Sexy::AndroidHttpTransaction>::ConstructJava
               (_JNIEnv *param_1,char *param_2,char *param_3,...)

{
  long lVar1;
  char cVar2;
  char *in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  JavaBase::InitJava((JavaBase *)param_1,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,param_3);
  cVar2 = LevelOfTheDaySystem::IsCheatScheduleActive((LevelOfTheDaySystem *)sJavaClass);
  if (cVar2 != '\0') {
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 == '\0') {
      JavaMethodBase::init
                ((JavaMethodBase *)sJavaCtor,(_JNIEnv *)param_2,(JavaClass *)sJavaClass,"<init>",
                 in_x3);
    }
    cVar2 = JavaMethodBase::valid((JavaMethodBase *)sJavaCtor);
    if (cVar2 != '\0') {
      local_e0 = &local_20;
      uStack_d8 = 0xffffff80ffffffe0;
      local_f0 = (undefined1 *)register0x00000008;
      puStack_e8 = (undefined1 *)register0x00000008;
      JavaBase::ConstructJavaObject((JavaBase *)param_1,param_2,sJavaClass,sJavaCtor,&local_f0);
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

