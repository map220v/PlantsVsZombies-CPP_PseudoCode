// Class: SocialMgr


/* SocialMgr::~SocialMgr() */

void __thiscall SocialMgr::~SocialMgr(SocialMgr *this)

{
  *(undefined ***)this = &PTR__SocialMgr_06930f80;
  if (*(long **)(this + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x78) + 0x18))();
  }
  AuthInfo::~AuthInfo((AuthInfo *)(this + 0x30));
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)(this + 8));
  Sexy::LazySingleton<SocialMgr>::~LazySingleton((LazySingleton<SocialMgr> *)this);
  return;
}


/* SocialMgr::~SocialMgr() */

void __thiscall SocialMgr::~SocialMgr(SocialMgr *this)

{
  ~SocialMgr(this);
  AK::FreeHook(this);
  return;
}


/* SocialMgr::LogoutSocialPlatform(bool) */

undefined8 SocialMgr::LogoutSocialPlatform(bool param_1)

{
  *(undefined4 *)((ulong)param_1 + 0x28) = 0;
  MessageRouter::Post((_func_void *)gMessageRouter);
  return 1;
}


/* SocialMgr::UpdateAuthInfo(S2C_AuthInfo&) */

void __thiscall SocialMgr::UpdateAuthInfo(SocialMgr *this,S2C_AuthInfo *param_1)

{
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x14);
  thunk_FUN_05475e00(this + 0x40,param_1 + 0x18);
  this[0x70] = *(SocialMgr *)(param_1 + 0x20);
  return;
}


/* SocialMgr::GetSocialInfo() const */

undefined8 __thiscall SocialMgr::GetSocialInfo(SocialMgr *this)

{
  return *(undefined8 *)(this + 0x78);
}


/* SocialMgr::SocialMgr() */

void __thiscall SocialMgr::SocialMgr(SocialMgr *this)

{
  SocialInfo *this_00;
  
  Sexy::LazySingleton<SocialMgr>::LazySingleton((LazySingleton<SocialMgr> *)this);
  *(undefined ***)this = &PTR__SocialMgr_06930f80;
  ShareInfo::ShareInfo((ShareInfo *)(this + 8));
  AuthInfo::AuthInfo((AuthInfo *)(this + 0x30));
  *(undefined4 *)(this + 0x28) = 0;
  this_00 = ::operator_new(200);
  SocialInfo::SocialInfo(this_00);
  *(SocialInfo **)(this + 0x78) = this_00;
  return;
}

