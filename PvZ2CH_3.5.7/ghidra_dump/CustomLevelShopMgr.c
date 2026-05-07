// Class: CustomLevelShopMgr


/* CustomLevelShopMgr::CustomLevelShopMgr() */

void __thiscall CustomLevelShopMgr::CustomLevelShopMgr(CustomLevelShopMgr *this)

{
  Sexy::LazySingleton<CustomLevelShopMgr>::LazySingleton((LazySingleton<CustomLevelShopMgr> *)this);
  *(undefined ***)this = &PTR__CustomLevelShopMgr_069c6910;
  CustomLevelShopData::CustomLevelShopData((CustomLevelShopData *)(this + 8));
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelShopMgr::GetCointDeltaCount(int) */

void __thiscall CustomLevelShopMgr::GetCointDeltaCount(CustomLevelShopMgr *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xa0);
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_04dd5dc8(uVar2,uVar3,local_24);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  uVar5 = 0;
  if (bVar1) {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar5 = *(undefined4 *)(lVar4 + 4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* CustomLevelShopMgr::~CustomLevelShopMgr() */

void __thiscall CustomLevelShopMgr::~CustomLevelShopMgr(CustomLevelShopMgr *this)

{
  *(undefined ***)this = &PTR__CustomLevelShopMgr_069c6910;
  CustomLevelShopData::~CustomLevelShopData((CustomLevelShopData *)(this + 8));
  Sexy::LazySingleton<CustomLevelShopMgr>::~LazySingleton((LazySingleton<CustomLevelShopMgr> *)this)
  ;
  return;
}


/* CustomLevelShopMgr::~CustomLevelShopMgr() */

void __thiscall CustomLevelShopMgr::~CustomLevelShopMgr(CustomLevelShopMgr *this)

{
  ~CustomLevelShopMgr(this);
  AK::FreeHook(this);
  return;
}


/* CustomLevelShopMgr::loadData(CustomLevelShopData const&) */

void __thiscall CustomLevelShopMgr::loadData(CustomLevelShopMgr *this,CustomLevelShopData *param_1)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  CustomLevelShopData::operator=((CustomLevelShopData *)(this + 8),param_1);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::SetMaterialNum(this_01,0x5b6a,*(int *)(param_1 + 0x30));
  PlayerInfo::SetMaterialNum(this_01,0x5b6b,*(int *)(param_1 + 0x34));
  return;
}

