// Class: ToyNightMgr


/* ToyNightMgr::RequestNetwork() */

void ToyNightMgr::RequestNetwork(void)

{
  ActivityManager *this;
  
  this = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this,0x2a8e,true,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightMgr::UpdateTokens() */

void __thiscall ToyNightMgr::UpdateTokens(ToyNightMgr *this)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ActivityCollectionNighttheToy *this_02;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_10,"mat_toy_clockwork");
  uVar1 = PlayerInfo::GetMaterialNum(this_01,asStack_10);
  *(undefined4 *)(this + 0x11c) = uVar1;
  std::string::~string(asStack_10);
  nop();
  this_02 = (ActivityCollectionNighttheToy *)
            UISingletonDialog<ActivityCollectionNighttheToy>::GetSingletonPtr();
  ActivityCollectionNighttheToy::initText(this_02);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ToyNightMgr::ToyNightMgr() */

void __thiscall ToyNightMgr::ToyNightMgr(ToyNightMgr *this)

{
  Sexy::LazySingleton<ToyNightMgr>::LazySingleton((LazySingleton<ToyNightMgr> *)this);
  *(undefined ***)this = &PTR__ToyNightMgr_066b7200;
  ToyNightData::ToyNightData((ToyNightData *)(this + 8));
  return;
}


/* ToyNightMgr::~ToyNightMgr() */

void __thiscall ToyNightMgr::~ToyNightMgr(ToyNightMgr *this)

{
  *(undefined ***)this = &PTR__ToyNightMgr_066b7200;
  ToyNightData::~ToyNightData((ToyNightData *)(this + 8));
  Sexy::LazySingleton<ToyNightMgr>::~LazySingleton((LazySingleton<ToyNightMgr> *)this);
  return;
}


/* ToyNightMgr::~ToyNightMgr() */

void __thiscall ToyNightMgr::~ToyNightMgr(ToyNightMgr *this)

{
  ~ToyNightMgr(this);
  AK::FreeHook(this);
  return;
}


/* ToyNightMgr::LoadData(ToyNightData const&) */

void __thiscall ToyNightMgr::LoadData(ToyNightMgr *this,ToyNightData *param_1)

{
  ToyNightData::operator=((ToyNightData *)(this + 8),param_1);
  return;
}

