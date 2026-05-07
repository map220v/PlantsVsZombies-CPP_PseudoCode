// Class: NetworkProfileMgr


/* NetworkProfileMgr::~NetworkProfileMgr() */

void __thiscall NetworkProfileMgr::~NetworkProfileMgr(NetworkProfileMgr *this)

{
  *(undefined ***)this = &PTR__NetworkProfileMgr_06982120;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::LazySingleton<NetworkProfileMgr>::~LazySingleton((LazySingleton<NetworkProfileMgr> *)this);
  return;
}


/* NetworkProfileMgr::~NetworkProfileMgr() */

void __thiscall NetworkProfileMgr::~NetworkProfileMgr(NetworkProfileMgr *this)

{
  ~NetworkProfileMgr(this);
  AK::FreeHook(this);
  return;
}


/* NetworkProfileMgr::SetProfileSync(bool) */

void __thiscall NetworkProfileMgr::SetProfileSync(NetworkProfileMgr *this,bool param_1)

{
  NetworkMgr *this_00;
  long lVar1;
  
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  lVar1 = NetworkMgr::GetNewNetWorkProcess(this_00);
  if ((lVar1 != 0) && (lVar1 = INetworkMsgProcess::GetNetworkCacheQueue(), lVar1 != 0)) {
    FUN_04c10d80(lVar1 + 0x148,param_1);
    INetworkMsgProcess::SaveCache();
    return;
  }
  return;
}


/* NetworkProfileMgr::HasProfileSyncComplete() */

undefined8 NetworkProfileMgr::HasProfileSyncComplete(void)

{
  NetworkMgr *this;
  long lVar1;
  undefined8 uVar2;
  
  this = (NetworkMgr *)NetworkMgr::Instance();
  lVar1 = NetworkMgr::GetNewNetWorkProcess(this);
  if ((lVar1 != 0) && (lVar1 = INetworkMsgProcess::GetNetworkCacheQueue(), lVar1 != 0)) {
    uVar2 = FUN_04c10d7c(*(undefined1 *)(lVar1 + 0x148));
    return uVar2;
  }
  return 0;
}


/* NetworkProfileMgr::NeedSync() */

byte NetworkProfileMgr::NeedSync(void)

{
  byte bVar1;
  
  bVar1 = HasProfileSyncComplete();
  return bVar1 ^ 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkProfileMgr::getRechargeStatusList() */

void __thiscall NetworkProfileMgr::getRechargeStatusList(NetworkProfileMgr *this)

{
  bool bVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  string *in_x8;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"");
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  puVar3 = (undefined8 *)PlayerInfo::GetNewTotalRechargeRewardStatus(this_01);
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  FUN_05475ad8();
  local_190 = FUN_04c114d8(*puVar3);
  local_188 = FUN_04c11528(puVar3[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_190,(__normal_iterator *)&local_188), bVar1)
  {
    puVar4 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_190);
    std::string::string((string *)&local_180,"");
    FUN_05462980(auStack_178,(string *)&local_180);
    std::string::~string((string *)&local_180);
    nop();
    FUN_0546065c(auStack_168,*puVar4);
    FUN_05462824((string *)&local_180,auStack_178);
    thunk_FUN_054757c0();
    std::string::~string((string *)&local_180);
    FUN_05475ad8();
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_190);
  }
  lVar5 = FUN_04c10d88(*puVar3,puVar3[1]);
  if (lVar5 != 0) {
    local_180 = FUN_05474eb0();
    __gnu_cxx::__normal_iterator<char*,std::string>::operator-
              ((__normal_iterator<char*,std::string> *)&local_180,1);
    FUN_05475070();
  }
  FUN_05475ad8();
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkProfileMgr::NetworkProfileMgr() */

void __thiscall NetworkProfileMgr::NetworkProfileMgr(NetworkProfileMgr *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<NetworkProfileMgr>::LazySingleton((LazySingleton<NetworkProfileMgr> *)this);
  *(undefined ***)this = &PTR__NetworkProfileMgr_06982120;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMsgError);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<NetworkProfileMgr,void(NetworkProfileMgr::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkProfileMgr::getPendantList() */

void __thiscall NetworkProfileMgr::getPendantList(NetworkProfileMgr *this)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_02;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  NameMapperBase *this_03;
  ulong uVar7;
  string *in_x8;
  string asStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  string asStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  bVar1 = false;
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"");
  nop();
  std::string::string(asStack_30,"");
  nop();
  FUN_05475ad8();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_02 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)PlayerInfo::GetPlantAccessoryInfos(this_01);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_02);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_02);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar2) {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    FUN_05475d88(asStack_18,lVar4 + 8);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_02);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_02);
    uVar3 = std::
            count<__gnu_cxx::__normal_iterator<PlantAccessoryInfo*,std::vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>>>,std::string>
                      (uVar5,uVar6,asStack_18);
    bVar2 = std::operator!=(asStack_18,"");
    if ((0 < (int)uVar3) && (bVar2)) {
      bVar1 = true;
      FUN_05475ad8();
      this_03 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
      uVar7 = NameMapperBase::GetIdForName(this_03,asStack_18);
      Sexy::StrFormat("\"pei\":\"-1\",\"peti\":\"%d\",\"lv\":\"%d\"",(string *)&local_10,
                      uVar7 & 0xffffffff,(ulong)uVar3);
      FUN_05474278(asStack_30,(string *)&local_10);
      std::string::~string((string *)&local_10);
      thunk_FUN_054757c0();
      FUN_05475ad8();
      FUN_05475ad8();
    }
    std::string::~string(asStack_18);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_28);
  }
  if (bVar1) {
    local_10 = FUN_05474eb0();
    __gnu_cxx::__normal_iterator<char*,std::string>::operator-
              ((__normal_iterator<char*,std::string> *)&local_10,1);
    FUN_05475070();
  }
  FUN_05475ad8();
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkProfileMgr::onSyncFinished(bool) */

void __thiscall NetworkProfileMgr::onSyncFinished(NetworkProfileMgr *this,bool param_1)

{
  MessageRouter::Post<bool,bool>
            ((MessageRouter *)gMessageRouter,Message::NetworkProfileSyncFinish,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkProfileMgr::onMsgError(int, std::string const&) */

void __thiscall NetworkProfileMgr::onMsgError(NetworkProfileMgr *this,int param_1,string *param_2)

{
  char cVar1;
  _PacketId a_Stack_ce8 [1824];
  string asStack_5c8 [1472];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _PacketId::_PacketId(a_Stack_ce8);
  cVar1 = std::operator==(param_2,asStack_5c8);
  if (cVar1 != '\0') {
    onSyncFinished(this,false);
  }
  _PacketId::~_PacketId(a_Stack_ce8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkProfileMgr::TrySync() */

void __thiscall NetworkProfileMgr::TrySync(NetworkProfileMgr *this)

{
  onSyncFinished(this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkProfileMgr::getNewAvatarList() */

void __thiscall NetworkProfileMgr::getNewAvatarList(NetworkProfileMgr *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined4 uVar2;
  ProfileMgr *this_01;
  CUIColorLayer *this_02;
  vector *pvVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  string *in_x8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"");
  nop();
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (CUIColorLayer *)ProfileMgr::GetCurrentProfile(this_01);
  pvVar3 = (vector *)Lua::CUIColorLayer::GetLayerColor(this_02);
  std::vector<PlantNewAvatarInfo,std::allocator<PlantNewAvatarInfo>>::vector
            ((vector<PlantNewAvatarInfo,std::allocator<PlantNewAvatarInfo>> *)&local_190,pvVar3);
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  FUN_05475ad8();
  local_1c0 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_190);
  local_1b8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_190);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_1c0,(__normal_iterator *)&local_1b8);
  if (bVar1) {
    do {
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1c0);
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(lVar4 + 8);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      std::sort<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                (uVar5,uVar6);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      local_1b0 = std::
                  unique<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                            (uVar5,uVar6);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_1a0,(__normal_iterator *)&local_1b0);
      local_1a8 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_198,(__normal_iterator *)&local_1a8);
      std::vector<int,std::allocator<int>>::erase
                ((vector<int,std::allocator<int>> *)this_00,local_1a0,local_198);
      local_1a8 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(this_00);
      local_1a0 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_1a8,(__normal_iterator *)&local_1a0),
            bVar1) {
        puVar7 = (undefined4 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1a8);
        std::string::string((string *)&local_198,"");
        FUN_05462980(auStack_178,
                     (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_198);
        std::string::~string((string *)&local_198);
        nop();
        FUN_0546065c(auStack_168,*puVar7);
        FUN_05462824((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_198,auStack_178);
        thunk_FUN_054757c0();
        std::string::~string((string *)&local_198);
        FUN_05475ad8();
        eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                  ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_1a8);
      }
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_1c0);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_1c0,(__normal_iterator *)&local_1b8)
      ;
    } while (bVar1);
  }
  lVar4 = FUN_04c10da4(local_190,local_188);
  if (lVar4 != 0) {
    local_198 = FUN_05474eb0();
    __gnu_cxx::__normal_iterator<char*,std::string>::operator-
              ((__normal_iterator<char*,std::string> *)&local_198,1);
    FUN_05475070();
  }
  FUN_05475ad8();
  FUN_054617bc(auStack_178);
  std::vector<PlantNewAvatarInfo,std::allocator<PlantNewAvatarInfo>>::~vector
            ((vector<PlantNewAvatarInfo,std::allocator<PlantNewAvatarInfo>> *)&local_190);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkProfileMgr::getPendantChipList() */

void __thiscall NetworkProfileMgr::getPendantChipList(NetworkProfileMgr *this)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  NameMapperBase *this_02;
  string *in_x8;
  equal_to aeStack_1f8 [8];
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8 [2];
  undefined8 local_1c8 [2];
  vector<AccessoryPiece,std::allocator<AccessoryPiece>> avStack_1b8 [24];
  undefined8 local_1a0 [5];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"");
  nop();
  bVar2 = false;
  FUN_05475ad8();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  pvVar5 = (vector *)PlayerInfo::GetAccessoryPiecesInfo(this_01);
  std::vector<AccessoryPiece,std::allocator<AccessoryPiece>>::vector(avStack_1b8,pvVar5);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_1b8);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_1b8);
  local_1e8 = 0;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e8,(_Placeholder *)&DAT_0576d300);
  local_1e0 = 0;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e0,(_Placeholder *)&DAT_0576d308);
  std::
  bind<std::equal_to<int>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>>
            ((equal_to *)&local_1f0,(_Bind *)local_1d8,(_Bind *)local_1c8);
  std::
  sort<__gnu_cxx::__normal_iterator<AccessoryPiece*,std::vector<AccessoryPiece,std::allocator<AccessoryPiece>>>,std::_Bind<std::less<std::string>(std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<2>)>)>>
            (uVar6,uVar7,
             (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_1a0);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_1b8);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_1b8);
  local_1e8 = 0;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e8,(_Placeholder *)&DAT_0576d300);
  local_1e0 = 0;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e0,(_Placeholder *)&DAT_0576d308);
  std::
  bind<std::equal_to<int>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>>
            (aeStack_1f8,(_Bind *)local_1d8,(_Bind *)local_1c8);
  local_1f0 = std::
              unique<__gnu_cxx::__normal_iterator<AccessoryPiece*,std::vector<AccessoryPiece,std::allocator<AccessoryPiece>>>,std::_Bind<std::equal_to<std::string>(std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<2>)>)>>
                        (uVar6,uVar7,
                         (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)local_1a0);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_1c8,(__normal_iterator *)&local_1f0);
  local_1d8[0] = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_1b8);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_1a0,(__normal_iterator *)local_1d8);
  std::vector<AccessoryPiece,std::allocator<AccessoryPiece>>::erase
            (avStack_1b8,local_1c8[0],local_1a0[0]);
  uVar4 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar4);
  local_1e0 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_1b8);
  local_1d8[0] = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_1b8);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_1e0,(__normal_iterator *)local_1d8), bVar3)
  {
    lVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1e0);
    FUN_05475d88((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)local_1c8,lVar8);
    iVar1 = *(int *)(lVar8 + 8);
    if (0 < iVar1) {
      FUN_05475ad8();
      bVar2 = true;
      std::string::string((string *)local_1a0,"");
      FUN_05462980(auStack_178,
                   (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_1a0);
      std::string::~string((string *)local_1a0);
      nop();
      this_02 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
      uVar4 = NameMapperBase::GetIdForName(this_02,(string *)local_1c8);
      FUN_0546065c(auStack_168,uVar4);
      FUN_05462824((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_1a0,auStack_178);
      thunk_FUN_054757c0();
      std::string::~string((string *)local_1a0);
      FUN_05475ad8();
      FUN_05475ad8();
      std::string::string((string *)local_1a0,"");
      FUN_05462980(auStack_178,
                   (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_1a0);
      std::string::~string((string *)local_1a0);
      nop();
      FUN_0546065c(auStack_168,iVar1);
      FUN_05462824((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_1a0,auStack_178);
      thunk_FUN_054757c0();
      std::string::~string((string *)local_1a0);
      FUN_05475ad8();
    }
    std::string::~string((string *)local_1c8);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_1e0);
  }
  if (bVar2) {
    local_1a0[0] = FUN_05474eb0();
    __gnu_cxx::__normal_iterator<char*,std::string>::operator-
              ((__normal_iterator<char*,std::string> *)local_1a0,1);
    FUN_05475070();
  }
  FUN_05475ad8();
  FUN_054617bc(auStack_178);
  std::vector<AccessoryPiece,std::allocator<AccessoryPiece>>::~vector(avStack_1b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkProfileMgr::getMaterialList() */

void __thiscall NetworkProfileMgr::getMaterialList(NetworkProfileMgr *this)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  string *in_x8;
  equal_to aeStack_1f8 [8];
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8 [2];
  undefined8 local_1c8 [2];
  vector<MaterialInfo,std::allocator<MaterialInfo>> avStack_1b8 [24];
  undefined8 local_1a0 [5];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"");
  nop();
  bVar1 = false;
  FUN_05475ad8();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  pvVar5 = (vector *)PlayerInfo::GetMaterialInfo(this_01);
  std::vector<MaterialInfo,std::allocator<MaterialInfo>>::vector(avStack_1b8,pvVar5);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_1b8);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_1b8);
  local_1e8 = 8;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e8,(_Placeholder *)&DAT_0576d300);
  local_1e0 = 8;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e0,(_Placeholder *)&DAT_0576d308);
  std::
  bind<std::equal_to<int>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>>
            ((equal_to *)&local_1f0,(_Bind *)local_1d8,(_Bind *)local_1c8);
  std::
  sort<__gnu_cxx::__normal_iterator<MaterialInfo*,std::vector<MaterialInfo,std::allocator<MaterialInfo>>>,std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<2>)>)>>
            (uVar6,uVar7,
             (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_1a0);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_1b8);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_1b8);
  local_1e8 = 8;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e8,(_Placeholder *)&DAT_0576d300);
  local_1e0 = 8;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e0,(_Placeholder *)&DAT_0576d308);
  std::
  bind<std::equal_to<int>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>>
            (aeStack_1f8,(_Bind *)local_1d8,(_Bind *)local_1c8);
  local_1f0 = std::
              unique<__gnu_cxx::__normal_iterator<MaterialInfo*,std::vector<MaterialInfo,std::allocator<MaterialInfo>>>,std::_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<2>)>)>>
                        (uVar6,uVar7,
                         (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)local_1a0);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_1c8,(__normal_iterator *)&local_1f0);
  local_1d8[0] = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_1b8);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_1a0,(__normal_iterator *)local_1d8);
  std::vector<MaterialInfo,std::allocator<MaterialInfo>>::erase
            (avStack_1b8,local_1c8[0],local_1a0[0]);
  uVar3 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar3);
  local_1d8[0] = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_1b8);
  local_1c8[0] = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_1b8);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)local_1d8,(__normal_iterator *)local_1c8), bVar2) {
    lVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_1d8);
    iVar4 = LawnKeyField::operator_cast_to_int((LawnKeyField *)(lVar8 + 0xc));
    if (0 < iVar4) {
      FUN_05475ad8();
      bVar1 = true;
      std::string::string((string *)local_1a0,"");
      FUN_05462980(auStack_178,
                   (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_1a0);
      std::string::~string((string *)local_1a0);
      nop();
      FUN_0546065c(auStack_168,*(undefined4 *)(lVar8 + 8));
      FUN_05462824((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_1a0,auStack_178);
      thunk_FUN_054757c0();
      std::string::~string((string *)local_1a0);
      FUN_05475ad8();
      FUN_05475ad8();
      std::string::string((string *)local_1a0,"");
      FUN_05462980(auStack_178,
                   (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_1a0);
      std::string::~string((string *)local_1a0);
      nop();
      FUN_0546065c(auStack_168,iVar4);
      FUN_05462824((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_1a0,auStack_178);
      thunk_FUN_054757c0();
      std::string::~string((string *)local_1a0);
      FUN_05475ad8();
    }
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)local_1d8);
  }
  if (bVar1) {
    local_1a0[0] = FUN_05474eb0();
    __gnu_cxx::__normal_iterator<char*,std::string>::operator-
              ((__normal_iterator<char*,std::string> *)local_1a0,1);
    FUN_05475070();
  }
  FUN_05475ad8();
  FUN_054617bc(auStack_178);
  std::vector<MaterialInfo,std::allocator<MaterialInfo>>::~vector(avStack_1b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkProfileMgr::getNewAvatarChipList() */

void __thiscall NetworkProfileMgr::getNewAvatarChipList(NetworkProfileMgr *this)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  string *in_x8;
  equal_to aeStack_1f8 [8];
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8 [2];
  undefined8 local_1c8 [2];
  vector<PlantNewAvatarPiecesInfo,std::allocator<PlantNewAvatarPiecesInfo>> avStack_1b8 [24];
  undefined8 local_1a0 [5];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"");
  nop();
  bVar2 = false;
  FUN_05475ad8();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  pvVar5 = (vector *)PlayerInfo::GetPlantNewAvatarPiecesInfo(this_01);
  std::vector<PlantNewAvatarPiecesInfo,std::allocator<PlantNewAvatarPiecesInfo>>::vector
            (avStack_1b8,pvVar5);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_1b8);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_1b8);
  local_1e8 = 0;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e8,(_Placeholder *)&DAT_0576d300);
  local_1e0 = 0;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e0,(_Placeholder *)&DAT_0576d308);
  std::
  bind<std::equal_to<int>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>>
            ((equal_to *)&local_1f0,(_Bind *)local_1d8,(_Bind *)local_1c8);
  std::
  sort<__gnu_cxx::__normal_iterator<PlantNewAvatarPiecesInfo*,std::vector<PlantNewAvatarPiecesInfo,std::allocator<PlantNewAvatarPiecesInfo>>>,std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>>
            (uVar6,uVar7,
             (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_1a0);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_1b8);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_1b8);
  local_1e8 = 0;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e8,(_Placeholder *)&DAT_0576d300);
  local_1e0 = 0;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e0,(_Placeholder *)&DAT_0576d308);
  std::
  bind<std::equal_to<int>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>>
            (aeStack_1f8,(_Bind *)local_1d8,(_Bind *)local_1c8);
  local_1f0 = std::
              unique<__gnu_cxx::__normal_iterator<PlantNewAvatarPiecesInfo*,std::vector<PlantNewAvatarPiecesInfo,std::allocator<PlantNewAvatarPiecesInfo>>>,std::_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>>
                        (uVar6,uVar7,
                         (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)local_1a0);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_1c8,(__normal_iterator *)&local_1f0);
  local_1d8[0] = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_1b8);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_1a0,(__normal_iterator *)local_1d8);
  std::vector<PlantNewAvatarPiecesInfo,std::allocator<PlantNewAvatarPiecesInfo>>::erase
            (avStack_1b8,local_1c8[0],local_1a0[0]);
  uVar4 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar4);
  local_1d8[0] = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_1b8);
  local_1c8[0] = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_1b8);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)local_1d8,(__normal_iterator *)local_1c8), bVar3) {
    puVar8 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_1d8);
    iVar1 = puVar8[1];
    if (0 < iVar1) {
      FUN_05475ad8();
      bVar2 = true;
      std::string::string((string *)local_1a0,"");
      FUN_05462980(auStack_178,
                   (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_1a0);
      std::string::~string((string *)local_1a0);
      nop();
      FUN_0546065c(auStack_168,*puVar8);
      FUN_05462824((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_1a0,auStack_178);
      thunk_FUN_054757c0();
      std::string::~string((string *)local_1a0);
      FUN_05475ad8();
      FUN_05475ad8();
      std::string::string((string *)local_1a0,"");
      FUN_05462980(auStack_178,
                   (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_1a0);
      std::string::~string((string *)local_1a0);
      nop();
      FUN_0546065c(auStack_168,iVar1);
      FUN_05462824((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_1a0,auStack_178);
      thunk_FUN_054757c0();
      std::string::~string((string *)local_1a0);
      FUN_05475ad8();
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_1d8);
  }
  if (bVar2) {
    local_1a0[0] = FUN_05474eb0();
    __gnu_cxx::__normal_iterator<char*,std::string>::operator-
              ((__normal_iterator<char*,std::string> *)local_1a0,1);
    FUN_05475070();
  }
  FUN_05475ad8();
  FUN_054617bc(auStack_178);
  std::vector<PlantNewAvatarPiecesInfo,std::allocator<PlantNewAvatarPiecesInfo>>::~vector
            (avStack_1b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkProfileMgr::GetIdByIdType(int, NetworkProfileMgr::IdType) */

void __thiscall
NetworkProfileMgr::GetIdByIdType(undefined8 param_1_00,int param_1,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  NameMapperBase *pNVar3;
  ServerPlantID aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ServerPlantID::ServerPlantID(aSStack_18,param_1);
  uVar1 = ImageLib::Image::GetWidth((Image *)aSStack_18);
  iVar2 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar2);
  switch(param_3) {
  case 0:
    break;
  case 1:
    pNVar3 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    uVar1 = NameMapperBase::GetIdForName(pNVar3,(string *)aSStack_18);
    break;
  case 2:
    pNVar3 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
    uVar1 = NameMapperBase::GetIdForName(pNVar3,(string *)aSStack_18);
    break;
  case 3:
    pNVar3 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
    uVar1 = NameMapperBase::GetIdForName(pNVar3,(string *)aSStack_18);
    break;
  default:
    uVar1 = 0xffffffff;
  }
  std::string::~string((string *)aSStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkProfileMgr::getPlantList() */

void NetworkProfileMgr::getPlantList(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  ProfileMgr *this;
  PlayerInfo *this_00;
  vector *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  string *in_x8;
  equal_to aeStack_1f8 [8];
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8 [2];
  undefined8 local_1c8 [2];
  vector<PlantStarLevel,std::allocator<PlantStarLevel>> avStack_1b8 [24];
  undefined8 local_1a0 [5];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"");
  nop();
  bVar1 = false;
  FUN_05475ad8();
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  pvVar5 = (vector *)PlayerInfo::GetPlantStarsInfo(this_00);
  std::vector<PlantStarLevel,std::allocator<PlantStarLevel>>::vector(avStack_1b8,pvVar5);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_1b8);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_1b8);
  local_1e8 = 0;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e8,(_Placeholder *)&DAT_0576d300);
  local_1e0 = 0;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e0,(_Placeholder *)&DAT_0576d308);
  std::
  bind<std::equal_to<int>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>>
            ((equal_to *)&local_1f0,(_Bind *)local_1d8,(_Bind *)local_1c8);
  std::
  sort<__gnu_cxx::__normal_iterator<PlantStarLevel*,std::vector<PlantStarLevel,std::allocator<PlantStarLevel>>>,std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<2>)>)>>
            (uVar6,uVar7,
             (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_1a0);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_1b8);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_1b8);
  local_1e8 = 0;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e8,(_Placeholder *)&DAT_0576d300);
  local_1e0 = 0;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e0,(_Placeholder *)&DAT_0576d308);
  std::
  bind<std::equal_to<int>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>>
            (aeStack_1f8,(_Bind *)local_1d8,(_Bind *)local_1c8);
  local_1f0 = std::
              unique<__gnu_cxx::__normal_iterator<PlantStarLevel*,std::vector<PlantStarLevel,std::allocator<PlantStarLevel>>>,std::_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<2>)>)>>
                        (uVar6,uVar7,
                         (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)local_1a0);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_1c8,(__normal_iterator *)&local_1f0);
  local_1d8[0] = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_1b8);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_1a0,(__normal_iterator *)local_1d8);
  std::vector<PlantStarLevel,std::allocator<PlantStarLevel>>::erase
            (avStack_1b8,local_1c8[0],local_1a0[0]);
  uVar3 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar3);
  local_1d8[0] = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_1b8);
  local_1c8[0] = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_1b8);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)local_1d8,(__normal_iterator *)local_1c8), bVar2) {
    lVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_1d8);
    if (0 < *(int *)(lVar8 + 4)) {
      iVar4 = GetIdByIdType();
      if (iVar4 != -1) {
        FUN_05475ad8();
        bVar1 = true;
        std::string::string((string *)local_1a0,"");
        FUN_05462980(auStack_178,
                     (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)local_1a0);
        std::string::~string((string *)local_1a0);
        nop();
        FUN_0546065c(auStack_168,iVar4);
        FUN_05462824((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)local_1a0,auStack_178);
        thunk_FUN_054757c0();
        std::string::~string((string *)local_1a0);
        FUN_05475ad8();
        FUN_05475ad8();
        std::string::string((string *)local_1a0,"");
        FUN_05462980(auStack_178,
                     (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)local_1a0);
        std::string::~string((string *)local_1a0);
        nop();
        FUN_0546065c(auStack_168,*(undefined4 *)(lVar8 + 4));
        FUN_05462824((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)local_1a0,auStack_178);
        thunk_FUN_054757c0();
        std::string::~string((string *)local_1a0);
        FUN_05475ad8();
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_1d8);
  }
  if (bVar1) {
    local_1a0[0] = FUN_05474eb0();
    __gnu_cxx::__normal_iterator<char*,std::string>::operator-
              ((__normal_iterator<char*,std::string> *)local_1a0,1);
    FUN_05475070();
  }
  FUN_05475ad8();
  FUN_054617bc(auStack_178);
  std::vector<PlantStarLevel,std::allocator<PlantStarLevel>>::~vector(avStack_1b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkProfileMgr::getPlantChipList() */

void NetworkProfileMgr::getPlantChipList(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  ProfileMgr *this;
  PlayerInfo *this_00;
  vector *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  string *in_x8;
  equal_to aeStack_1f8 [8];
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8 [2];
  undefined8 local_1c8 [2];
  vector<PlantPieceRecord,std::allocator<PlantPieceRecord>> avStack_1b8 [24];
  undefined8 local_1a0 [5];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"");
  nop();
  bVar1 = false;
  FUN_05475ad8();
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  pvVar5 = (vector *)PlayerInfo::GetPlantPiecesInfo(this_00);
  std::vector<PlantPieceRecord,std::allocator<PlantPieceRecord>>::vector(avStack_1b8,pvVar5);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_1b8);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_1b8);
  local_1e8 = 0;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e8,(_Placeholder *)&DAT_0576d300);
  local_1e0 = 0;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e0,(_Placeholder *)&DAT_0576d308);
  std::
  bind<std::equal_to<int>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>>
            ((equal_to *)&local_1f0,(_Bind *)local_1d8,(_Bind *)local_1c8);
  std::
  sort<__gnu_cxx::__normal_iterator<PlantPieceRecord*,std::vector<PlantPieceRecord,std::allocator<PlantPieceRecord>>>,std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<2>)>)>>
            (uVar6,uVar7,
             (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_1a0);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_1b8);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_1b8);
  local_1e8 = 0;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e8,(_Placeholder *)&DAT_0576d300);
  local_1e0 = 0;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e0,(_Placeholder *)&DAT_0576d308);
  std::
  bind<std::equal_to<int>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>>
            (aeStack_1f8,(_Bind *)local_1d8,(_Bind *)local_1c8);
  local_1f0 = std::
              unique<__gnu_cxx::__normal_iterator<PlantPieceRecord*,std::vector<PlantPieceRecord,std::allocator<PlantPieceRecord>>>,std::_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<2>)>)>>
                        (uVar6,uVar7,
                         (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)local_1a0);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_1c8,(__normal_iterator *)&local_1f0);
  local_1d8[0] = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_1b8);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_1a0,(__normal_iterator *)local_1d8);
  std::vector<PlantPieceRecord,std::allocator<PlantPieceRecord>>::erase
            (avStack_1b8,local_1c8[0],local_1a0[0]);
  uVar3 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar3);
  local_1d8[0] = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_1b8);
  local_1c8[0] = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_1b8);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)local_1d8,(__normal_iterator *)local_1c8), bVar2) {
    lVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_1d8);
    if (0 < *(int *)(lVar8 + 4)) {
      iVar4 = GetIdByIdType();
      if (iVar4 != -1) {
        FUN_05475ad8();
        bVar1 = true;
        std::string::string((string *)local_1a0,"");
        FUN_05462980(auStack_178,
                     (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)local_1a0);
        std::string::~string((string *)local_1a0);
        nop();
        FUN_0546065c(auStack_168,iVar4);
        FUN_05462824((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)local_1a0,auStack_178);
        thunk_FUN_054757c0();
        std::string::~string((string *)local_1a0);
        FUN_05475ad8();
        FUN_05475ad8();
        std::string::string((string *)local_1a0,"");
        FUN_05462980(auStack_178,
                     (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)local_1a0);
        std::string::~string((string *)local_1a0);
        nop();
        FUN_0546065c(auStack_168,*(undefined4 *)(lVar8 + 4));
        FUN_05462824((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)local_1a0,auStack_178);
        thunk_FUN_054757c0();
        std::string::~string((string *)local_1a0);
        FUN_05475ad8();
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_1d8);
  }
  if (bVar1) {
    local_1a0[0] = FUN_05474eb0();
    __gnu_cxx::__normal_iterator<char*,std::string>::operator-
              ((__normal_iterator<char*,std::string> *)local_1a0,1);
    FUN_05475070();
  }
  FUN_05475ad8();
  FUN_054617bc(auStack_178);
  std::vector<PlantPieceRecord,std::allocator<PlantPieceRecord>>::~vector(avStack_1b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkProfileMgr::getAvatarList() */

void NetworkProfileMgr::getAvatarList(void)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  vector *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  string *in_x8;
  equal_to aeStack_1f8 [8];
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8 [2];
  undefined8 local_1c8 [2];
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0 [5];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"");
  nop();
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  pvVar4 = (vector *)PlayerInfo::GetPlantAvatarInfo(this_00);
  std::vector<PlantAvatarInfo,std::allocator<PlantAvatarInfo>>::vector
            ((vector<PlantAvatarInfo,std::allocator<PlantAvatarInfo>> *)&local_1b8,pvVar4);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_1b8);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_1b8);
  local_1e8 = 0;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e8,(_Placeholder *)&DAT_0576d300);
  local_1e0 = 0;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e0,(_Placeholder *)&DAT_0576d308);
  std::
  bind<std::equal_to<int>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>>
            ((equal_to *)&local_1f0,(_Bind *)local_1d8,(_Bind *)local_1c8);
  std::
  sort<__gnu_cxx::__normal_iterator<PlantAvatarInfo*,std::vector<PlantAvatarInfo,std::allocator<PlantAvatarInfo>>>,std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<2>)>)>>
            (uVar5,uVar6,
             (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_1a0);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_1b8);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_1b8);
  local_1e8 = 0;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e8,(_Placeholder *)&DAT_0576d300);
  local_1e0 = 0;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e0,(_Placeholder *)&DAT_0576d308);
  std::
  bind<std::equal_to<int>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>>
            (aeStack_1f8,(_Bind *)local_1d8,(_Bind *)local_1c8);
  local_1f0 = std::
              unique<__gnu_cxx::__normal_iterator<PlantAvatarInfo*,std::vector<PlantAvatarInfo,std::allocator<PlantAvatarInfo>>>,std::_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<2>)>)>>
                        (uVar5,uVar6,
                         (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)local_1a0);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_1c8,(__normal_iterator *)&local_1f0);
  local_1d8[0] = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_1b8);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_1a0,(__normal_iterator *)local_1d8);
  std::vector<PlantAvatarInfo,std::allocator<PlantAvatarInfo>>::erase
            ((vector<PlantAvatarInfo,std::allocator<PlantAvatarInfo>> *)&local_1b8,local_1c8[0],
             local_1a0[0]);
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  FUN_05475ad8();
  local_1d8[0] = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_1b8);
  local_1c8[0] = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_1b8);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)local_1d8,(__normal_iterator *)local_1c8), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_1d8);
    iVar3 = GetIdByIdType();
    if (iVar3 != -1) {
      std::string::string((string *)local_1a0,"");
      FUN_05462980(auStack_178,
                   (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_1a0);
      std::string::~string((string *)local_1a0);
      nop();
      FUN_0546065c(auStack_168,iVar3);
      FUN_05462824((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_1a0,auStack_178);
      thunk_FUN_054757c0();
      std::string::~string((string *)local_1a0);
      FUN_05475ad8();
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)local_1d8);
  }
  lVar7 = FUN_04c10d98(local_1b8,local_1b0);
  if (lVar7 != 0) {
    local_1a0[0] = FUN_05474eb0();
    __gnu_cxx::__normal_iterator<char*,std::string>::operator-
              ((__normal_iterator<char*,std::string> *)local_1a0,1);
    FUN_05475070();
  }
  FUN_05475ad8();
  FUN_054617bc(auStack_178);
  std::vector<PlantAvatarInfo,std::allocator<PlantAvatarInfo>>::~vector
            ((vector<PlantAvatarInfo,std::allocator<PlantAvatarInfo>> *)&local_1b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkProfileMgr::getAvatarChipList() */

void NetworkProfileMgr::getAvatarChipList(void)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  ProfileMgr *this;
  RtDbTable *this_00;
  vector *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  string *in_x8;
  equal_to aeStack_1f8 [8];
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8 [2];
  undefined8 local_1c8 [2];
  vector<PlantAvatarPiecesInfo,std::allocator<PlantAvatarPiecesInfo>> avStack_1b8 [24];
  undefined8 local_1a0 [5];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"");
  nop();
  bVar2 = false;
  FUN_05475ad8();
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (RtDbTable *)ProfileMgr::GetCurrentProfile(this);
  pvVar6 = (vector *)Sexy::RtDbTable::GetSharedIteratorStorage(this_00);
  std::vector<PlantAvatarPiecesInfo,std::allocator<PlantAvatarPiecesInfo>>::vector
            (avStack_1b8,pvVar6);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_1b8);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_1b8);
  local_1e8 = 0;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e8,(_Placeholder *)&DAT_0576d300);
  local_1e0 = 0;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e0,(_Placeholder *)&DAT_0576d308);
  std::
  bind<std::equal_to<int>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>>
            ((equal_to *)&local_1f0,(_Bind *)local_1d8,(_Bind *)local_1c8);
  std::
  sort<__gnu_cxx::__normal_iterator<PlantAvatarPiecesInfo*,std::vector<PlantAvatarPiecesInfo,std::allocator<PlantAvatarPiecesInfo>>>,std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>>
            (uVar7,uVar8,
             (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_1a0);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_1b8);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_1b8);
  local_1e8 = 0;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e8,(_Placeholder *)&DAT_0576d300);
  local_1e0 = 0;
  std::bind<int_PlantNewAvatarPiecesInfo::*,std::_Placeholder<2>const&>
            ((int *)&local_1e0,(_Placeholder *)&DAT_0576d308);
  std::
  bind<std::equal_to<int>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>>
            (aeStack_1f8,(_Bind *)local_1d8,(_Bind *)local_1c8);
  local_1f0 = std::
              unique<__gnu_cxx::__normal_iterator<PlantAvatarPiecesInfo*,std::vector<PlantAvatarPiecesInfo,std::allocator<PlantAvatarPiecesInfo>>>,std::_Bind<std::equal_to<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>>
                        (uVar7,uVar8,
                         (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)local_1a0);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_1c8,(__normal_iterator *)&local_1f0);
  local_1d8[0] = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_1b8);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_1a0,(__normal_iterator *)local_1d8);
  std::vector<PlantAvatarPiecesInfo,std::allocator<PlantAvatarPiecesInfo>>::erase
            (avStack_1b8,local_1c8[0],local_1a0[0]);
  uVar4 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar4);
  local_1d8[0] = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_1b8);
  local_1c8[0] = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_1b8);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)local_1d8,(__normal_iterator *)local_1c8), bVar3) {
    lVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_1d8);
    piVar10 = (int *)FUN_04c10dd8(*(undefined8 *)(lVar9 + 8));
    iVar1 = *piVar10;
    if (0 < iVar1) {
      iVar5 = GetIdByIdType();
      if (iVar5 != -1) {
        FUN_05475ad8();
        bVar2 = true;
        std::string::string((string *)local_1a0,"");
        FUN_05462980(auStack_178,
                     (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)local_1a0);
        std::string::~string((string *)local_1a0);
        nop();
        FUN_0546065c(auStack_168,iVar5);
        FUN_05462824((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)local_1a0,auStack_178);
        thunk_FUN_054757c0();
        std::string::~string((string *)local_1a0);
        FUN_05475ad8();
        FUN_05475ad8();
        std::string::string((string *)local_1a0,"");
        FUN_05462980(auStack_178,
                     (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)local_1a0);
        std::string::~string((string *)local_1a0);
        nop();
        FUN_0546065c(auStack_168,iVar1);
        FUN_05462824((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)local_1a0,auStack_178);
        thunk_FUN_054757c0();
        std::string::~string((string *)local_1a0);
        FUN_05475ad8();
      }
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)local_1d8);
  }
  if (bVar2) {
    local_1a0[0] = FUN_05474eb0();
    __gnu_cxx::__normal_iterator<char*,std::string>::operator-
              ((__normal_iterator<char*,std::string> *)local_1a0,1);
    FUN_05475070();
  }
  FUN_05475ad8();
  FUN_054617bc(auStack_178);
  std::vector<PlantAvatarPiecesInfo,std::allocator<PlantAvatarPiecesInfo>>::~vector(avStack_1b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkProfileMgr::DoSync() */

void __thiscall NetworkProfileMgr::DoSync(NetworkProfileMgr *this)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar2;
  DNetwork *this_02;
  string asStack_eb0 [8];
  function afStack_ea8 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_e88 [48];
  undefined1 auStack_e58 [16];
  undefined1 auStack_e48 [352];
  string asStack_ce8 [1824];
  string asStack_5c8 [1472];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_e88);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_e58,uVar1);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar1 = PlayerInfo::GetNumGems(this_01,true);
  std::string::string(asStack_ce8,"");
  FUN_05462980(auStack_e58,asStack_ce8);
  std::string::~string(asStack_ce8);
  nop();
  FUN_0546065c(auStack_e48,uVar1);
  std::string::string(asStack_eb0,"g");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_eb0);
  FUN_05462824(asStack_ce8,auStack_e58);
  FUN_05474278(uVar2,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  std::string::string(asStack_eb0,"pcl");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_eb0);
  getPlantChipList();
  FUN_05474278(uVar2,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  std::string::string(asStack_eb0,"pl");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_eb0);
  getPlantList();
  FUN_05474278(uVar2,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  std::string::string(asStack_eb0,"dcl");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_eb0);
  getAvatarChipList();
  FUN_05474278(uVar2,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  std::string::string(asStack_eb0,"dl");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_eb0);
  getAvatarList();
  FUN_05474278(uVar2,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  std::string::string(asStack_eb0,"ndcl");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_eb0);
  getNewAvatarChipList(this);
  FUN_05474278(uVar2,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  std::string::string(asStack_eb0,"ndl");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_eb0);
  getNewAvatarList(this);
  FUN_05474278(uVar2,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  std::string::string(asStack_eb0,"il");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_eb0);
  getMaterialList(this);
  FUN_05474278(uVar2,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  std::string::string(asStack_eb0,"pdl");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_eb0);
  getPendantList(this);
  FUN_05474278(uVar2,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  std::string::string(asStack_eb0,"pdcl");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_eb0);
  getPendantChipList(this);
  FUN_05474278(uVar2,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  std::string::string(asStack_ce8,"");
  FUN_05462980(auStack_e58,asStack_ce8);
  std::string::~string(asStack_ce8);
  nop();
  uVar1 = PlayerInfo::GetNumTotalRechargeCurrency(this_01);
  FUN_0546065c(auStack_e48,uVar1);
  std::string::string(asStack_eb0,"c");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_eb0);
  FUN_05462824(asStack_ce8,auStack_e58);
  FUN_05474278(uVar2,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  std::string::string(asStack_ce8,"");
  FUN_05462980(auStack_e58,asStack_ce8);
  std::string::~string(asStack_ce8);
  nop();
  uVar1 = PlayerInfo::GetNumRechargeCurrency(this_01);
  FUN_0546065c(auStack_e48,uVar1);
  std::string::string(asStack_eb0,"ntc");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_eb0);
  FUN_05462824(asStack_ce8,auStack_e58);
  FUN_05474278(uVar2,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  std::string::string(asStack_eb0,"ntcs");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_eb0);
  getRechargeStatusList(this);
  FUN_05474278(uVar2,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  this_02 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_04c10fdc(afStack_ea8,this);
  std::string::string(asStack_eb0,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_02,asStack_5c8,(map *)amStack_e88,30.0,afStack_ea8,true,true,asStack_eb0,0);
  std::string::~string(asStack_eb0);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)afStack_ea8);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  FUN_054617bc(auStack_e58);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_e88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

