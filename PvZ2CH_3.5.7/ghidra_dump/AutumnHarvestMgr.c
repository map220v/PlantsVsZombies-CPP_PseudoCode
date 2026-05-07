// Class: AutumnHarvestMgr


/* AutumnHarvestMgr::RequestNetwork() */

void AutumnHarvestMgr::RequestNetwork(void)

{
  ActivityManager *this;
  
  this = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this,0x2a8b,true,0);
  return;
}


/* AutumnHarvestMgr::AutumnHarvestMgr() */

void __thiscall AutumnHarvestMgr::AutumnHarvestMgr(AutumnHarvestMgr *this)

{
  Sexy::LazySingleton<AutumnHarvestMgr>::LazySingleton((LazySingleton<AutumnHarvestMgr> *)this);
  *(undefined ***)this = &PTR__AutumnHarvestMgr_069f5c90;
  AutumnHarvestNetworkData::AutumnHarvestNetworkData((AutumnHarvestNetworkData *)(this + 8));
  return;
}


/* AutumnHarvestMgr::~AutumnHarvestMgr() */

void __thiscall AutumnHarvestMgr::~AutumnHarvestMgr(AutumnHarvestMgr *this)

{
  *(undefined ***)this = &PTR__AutumnHarvestMgr_069f5c90;
  AutumnHarvestNetworkData::~AutumnHarvestNetworkData((AutumnHarvestNetworkData *)(this + 8));
  Sexy::LazySingleton<AutumnHarvestMgr>::~LazySingleton((LazySingleton<AutumnHarvestMgr> *)this);
  return;
}


/* AutumnHarvestMgr::~AutumnHarvestMgr() */

void __thiscall AutumnHarvestMgr::~AutumnHarvestMgr(AutumnHarvestMgr *this)

{
  ~AutumnHarvestMgr(this);
  AK::FreeHook(this);
  return;
}


/* AutumnHarvestMgr::LoadData(AutumnHarvestNetworkData const&) */

void __thiscall AutumnHarvestMgr::LoadData(AutumnHarvestMgr *this,AutumnHarvestNetworkData *param_1)

{
  AutumnHarvestNetworkData::operator=((AutumnHarvestNetworkData *)(this + 8),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestMgr::TestData() */

void __thiscall AutumnHarvestMgr::TestData(AutumnHarvestMgr *this)

{
  AutumnHarvestNetworkData aAStack_128 [288];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04ec73d8(aAStack_128);
  AutumnHarvestNetworkData::operator=((AutumnHarvestNetworkData *)(this + 8),aAStack_128);
  AutumnHarvestNetworkData::~AutumnHarvestNetworkData(aAStack_128);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

