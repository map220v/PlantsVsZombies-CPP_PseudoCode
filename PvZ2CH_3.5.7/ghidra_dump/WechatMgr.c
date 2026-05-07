// Class: WechatMgr


/* WechatMgr::~WechatMgr() */

void __thiscall WechatMgr::~WechatMgr(WechatMgr *this)

{
  *(undefined ***)this = &PTR__WechatMgr_06981980;
  Sexy::LazySingleton<WechatMgr>::~LazySingleton((LazySingleton<WechatMgr> *)this);
  return;
}


/* WechatMgr::~WechatMgr() */

void __thiscall WechatMgr::~WechatMgr(WechatMgr *this)

{
  ~WechatMgr(this);
  AK::FreeHook(this);
  return;
}


/* WechatMgr::InitializeSDK() */

void __thiscall WechatMgr::InitializeSDK(WechatMgr *this)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  iVar1 = LawnApp::GetPlatform(gLawnApp);
  if ((iVar1 != 0x3e) && (iVar1 = LawnApp::GetPlatform(gLawnApp), iVar1 != 0xb9)) {
    puVar2 = (undefined8 *)IWechatPlatform::CreateWechatPlatform();
    puVar3 = (undefined8 *)*puVar2;
    *(undefined8 **)(this + 8) = puVar2;
    (*(code *)*puVar3)();
  }
  return;
}


/* WechatMgr::DoWechatShare(std::string const&, bool) */

void WechatMgr::DoWechatShare(string *param_1,bool param_2)

{
  (**(code **)(**(long **)(param_1 + 8) + 8))(*(long **)(param_1 + 8),param_2);
  return;
}


/* WechatMgr::IsWechatInstalled() */

undefined1 __thiscall WechatMgr::IsWechatInstalled(WechatMgr *this)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = LawnApp::GetPlatform(gLawnApp);
  if ((iVar2 != 0x3e) && (iVar2 = LawnApp::GetPlatform(gLawnApp), iVar2 != 0xb9)) {
    uVar1 = (**(code **)(**(long **)(this + 8) + 0x10))(*(long **)(this + 8));
    return uVar1;
  }
  return 0;
}


/* WechatMgr::WechatMgr() */

void __thiscall WechatMgr::WechatMgr(WechatMgr *this)

{
  Sexy::LazySingleton<WechatMgr>::LazySingleton((LazySingleton<WechatMgr> *)this);
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__WechatMgr_06981980;
  return;
}

