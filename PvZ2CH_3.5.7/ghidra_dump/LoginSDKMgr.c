// Class: LoginSDKMgr


/* LoginSDKMgr::~LoginSDKMgr() */

void __thiscall LoginSDKMgr::~LoginSDKMgr(LoginSDKMgr *this)

{
  *(undefined ***)this = &PTR__LoginSDKMgr_06933390;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 0x18))();
    *(undefined8 *)(this + 8) = 0;
  }
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 0x18))();
    *(undefined8 *)(this + 0x18) = 0;
  }
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x10));
  Sexy::LazySingleton<LoginSDKMgr>::~LazySingleton((LazySingleton<LoginSDKMgr> *)this);
  return;
}


/* LoginSDKMgr::~LoginSDKMgr() */

void __thiscall LoginSDKMgr::~LoginSDKMgr(LoginSDKMgr *this)

{
  ~LoginSDKMgr(this);
  AK::FreeHook(this);
  return;
}


/* LoginSDKMgr::LoginSDKMgr() */

void __thiscall LoginSDKMgr::LoginSDKMgr(LoginSDKMgr *this)

{
  Sexy::LazySingleton<LoginSDKMgr>::LazySingleton((LazySingleton<LoginSDKMgr> *)this);
  *(undefined ***)this = &PTR__LoginSDKMgr_06933390;
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  this[0x30] = (LoginSDKMgr)0x0;
  return;
}


/* LoginSDKMgr::isAlreadyBoundSinaSDK() const */

bool __thiscall LoginSDKMgr::isAlreadyBoundSinaSDK(LoginSDKMgr *this)

{
  bool bVar1;
  
  bVar1 = std::operator!=((string *)(this + 0x10),"");
  return bVar1;
}


/* LoginSDKMgr::isAlreadyBoundWechatSDK() const */

bool __thiscall LoginSDKMgr::isAlreadyBoundWechatSDK(LoginSDKMgr *this)

{
  bool bVar1;
  
  bVar1 = std::operator!=((string *)(this + 0x20),"");
  return bVar1;
}


/* LoginSDKMgr::isAlreadyBoundTencentSDK() const */

bool __thiscall LoginSDKMgr::isAlreadyBoundTencentSDK(LoginSDKMgr *this)

{
  bool bVar1;
  
  bVar1 = std::operator!=((string *)(this + 0x28),"");
  return bVar1;
}

