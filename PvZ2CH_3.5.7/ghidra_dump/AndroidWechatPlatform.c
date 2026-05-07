// Class: AndroidWechatPlatform


/* AndroidWechatPlatform::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void AndroidWechatPlatform::BindJavaMethods(_JNIEnv *param_1,JavaClass *param_2)

{
  return;
}


/* non-virtual thunk to AndroidWechatPlatform::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
AndroidWechatPlatform::BindJavaMethods
          (AndroidWechatPlatform *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindJavaMethods((_JNIEnv *)(this + -8),(JavaClass *)param_1);
  return;
}


/* AndroidWechatPlatform::BindNativeMethods(_JNIEnv*, JavaClass const&) */

void AndroidWechatPlatform::BindNativeMethods(_JNIEnv *param_1,JavaClass *param_2)

{
  return;
}


/* non-virtual thunk to AndroidWechatPlatform::BindNativeMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
AndroidWechatPlatform::BindNativeMethods
          (AndroidWechatPlatform *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindNativeMethods((_JNIEnv *)(this + -8),(JavaClass *)param_1);
  return;
}


/* AndroidWechatPlatform::~AndroidWechatPlatform() */

void __thiscall AndroidWechatPlatform::~AndroidWechatPlatform(AndroidWechatPlatform *this)

{
  *(undefined ***)this = &PTR_nop_06981a00;
  *(undefined ***)(this + 8) = &PTR__AndroidWechatPlatform_06981a48;
  JavaBound<AndroidWechatPlatform>::~JavaBound((JavaBound<AndroidWechatPlatform> *)(this + 8));
  return;
}


/* non-virtual thunk to AndroidWechatPlatform::~AndroidWechatPlatform() */

void __thiscall AndroidWechatPlatform::~AndroidWechatPlatform(AndroidWechatPlatform *this)

{
  ~AndroidWechatPlatform(this + -8);
  return;
}


/* AndroidWechatPlatform::~AndroidWechatPlatform() */

void __thiscall AndroidWechatPlatform::~AndroidWechatPlatform(AndroidWechatPlatform *this)

{
  ~AndroidWechatPlatform(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AndroidWechatPlatform::~AndroidWechatPlatform() */

void __thiscall AndroidWechatPlatform::~AndroidWechatPlatform(AndroidWechatPlatform *this)

{
  ~AndroidWechatPlatform(this + -8);
  return;
}


/* AndroidWechatPlatform::ShareHook(_JNIEnv*, _jobject*, long long, int) */

void AndroidWechatPlatform::ShareHook
               (_JNIEnv *param_1,_jobject *param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AndroidWechatPlatform::AndroidWechatPlatform() */

void __thiscall AndroidWechatPlatform::AndroidWechatPlatform(AndroidWechatPlatform *this)

{
  undefined1 auVar1 [16];
  undefined4 local_1c;
  pair local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  IWechatPlatform::IWechatPlatform((IWechatPlatform *)this);
  JavaBound<AndroidWechatPlatform>::JavaBound((JavaBound<AndroidWechatPlatform> *)(this + 8));
  *(undefined ***)this = &PTR_nop_06981a00;
  *(undefined ***)(this + 8) = &PTR__AndroidWechatPlatform_06981a48;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::clear((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
           *)AndroidWechatAPPIDS);
  local_1c = 0xf;
  local_18 = (pair  [16])
             std::make_pair<PlatformType,char_const(&)[19]>
                       ((PlatformType *)&local_1c,"wxf05305d1aa9c64cd");
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x43;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wx8fb5628205b8f35f");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x1d;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wxa0afbafd159c65a8");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x27;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wxf835cc099e8b978f");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x51;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wxebbb131e118d5215");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x5b;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wxe60c401b43e8be10");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 5;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wxdbecc4dfd73fddc3");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0xb;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wxe552c7c10a8141ef");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x30;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wx4d1724ecb2d2166f");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 100;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wxdbd4e680ec802e3d");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x25;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wxcc5b70dbaa173c33");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x59;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wx20802592da3d8716");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x14;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wx8cad4736049ac63a");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x48;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wxafc825b03e37a20a");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 2;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wxb0bedebda1b96e96");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 8;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wxf446a92c0b70455b");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x13;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wx65a3b47823ca88e9");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x47;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wx65f999699e6f17f8");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x10;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wxeb3731537ef52548");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x44;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wxcdeb154bab9a5573");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x29;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wx2b48a02fea4174bf");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x5d;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wx4ea72cc2339f65f2");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x33;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wxb55bb6a9505b8512");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x67;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wx835e09e2d6ae58ef");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x1a;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wx871ece62e8b6c40b");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x4e;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wx53529ebe57947207");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 4;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wx84e69fe584fde2b9");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0xa5;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wx59ca4b84f6e97c26");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x26;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wx247f6bb403851c5f");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x5a;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wx735ef08342313354");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x1b;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wxc6d83b979b071860");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x4f;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wxf90fcb02630ed235");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x21;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wx297004413e29f161");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x55;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wx79e510db5b1d80ea");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x19;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wxaecc220b9c1f53fe");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x4d;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wx369a974114817b25");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x32;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wxb10813686e1c0e54");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x66;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wx68f36b1d3fcb9603");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x15;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wx41acd8d522d3dcff");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x49;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wxe7b3743898669029");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x16;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wx74ae2e46f5fc3711");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x4a;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wxa4b1a14c2816ebf8");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 1;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wx8a604cd46c19c88b");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 6;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wx5f4fcd926c86e752");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x17;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wx1757821dfd467473");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x4b;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wxefe808fd19674cbb");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x2f;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wxe6bd7e259fd329d5");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 99;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wx7735eca47d673eed");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x1c;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wxb8849537bc3075d1");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x6c;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wxf90636efd850cf06");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x6d;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wx5d4c1280a43515e2");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  local_1c = 0x6e;
  auVar1 = std::make_pair<PlatformType,char_const(&)[19]>
                     ((PlatformType *)&local_1c,"wxa2078eaa4866bc8d");
  local_18 = (pair  [16])auVar1;
  std::
  map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
  ::insert<std::pair<PlatformType,char_const*>,void>
            ((map<PlatformType,std::string,std::less<PlatformType>,std::allocator<std::pair<PlatformType_const,std::string>>>
              *)AndroidWechatAPPIDS,local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

