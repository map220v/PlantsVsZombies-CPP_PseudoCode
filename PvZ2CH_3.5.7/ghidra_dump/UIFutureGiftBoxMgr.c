// Class: UIFutureGiftBoxMgr


/* UIFutureGiftBoxMgr::UIFutureGiftBoxMgr() */

void __thiscall UIFutureGiftBoxMgr::UIFutureGiftBoxMgr(UIFutureGiftBoxMgr *this)

{
  Sexy::LazySingleton<UIFutureGiftBoxMgr>::LazySingleton((LazySingleton<UIFutureGiftBoxMgr> *)this);
  *(undefined ***)this = &PTR__UIFutureGiftBoxMgr_06628350;
  FutureGiftBoxData::FutureGiftBoxData((FutureGiftBoxData *)(this + 8));
  return;
}


/* UIFutureGiftBoxMgr::~UIFutureGiftBoxMgr() */

void __thiscall UIFutureGiftBoxMgr::~UIFutureGiftBoxMgr(UIFutureGiftBoxMgr *this)

{
  *(undefined ***)this = &PTR__UIFutureGiftBoxMgr_06628350;
  FutureGiftBoxData::~FutureGiftBoxData((FutureGiftBoxData *)(this + 8));
  Sexy::LazySingleton<UIFutureGiftBoxMgr>::~LazySingleton((LazySingleton<UIFutureGiftBoxMgr> *)this)
  ;
  return;
}


/* UIFutureGiftBoxMgr::~UIFutureGiftBoxMgr() */

void __thiscall UIFutureGiftBoxMgr::~UIFutureGiftBoxMgr(UIFutureGiftBoxMgr *this)

{
  ~UIFutureGiftBoxMgr(this);
  AK::FreeHook(this);
  return;
}


/* UIFutureGiftBoxMgr::RequestNetwork() */

void UIFutureGiftBoxMgr::RequestNetwork(void)

{
  ActivityManager *this;
  
  this = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this,0x2a83,true,0);
  return;
}


/* UIFutureGiftBoxMgr::LoadData(FutureGiftBoxData const&) */

void __thiscall UIFutureGiftBoxMgr::LoadData(UIFutureGiftBoxMgr *this,FutureGiftBoxData *param_1)

{
  FutureGiftBoxData::operator=((FutureGiftBoxData *)(this + 8),param_1);
  return;
}

