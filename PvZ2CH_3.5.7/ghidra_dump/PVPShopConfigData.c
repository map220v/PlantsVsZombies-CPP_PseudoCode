// Class: PVPShopConfigData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPShopConfigData::StaticClassInit() */

void PVPShopConfigData::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PvpShopItemData");
    (*pcVar3)(plVar2,asStack_10,FUN_04aefbbc,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PVPShopConfigData");
    (*pcVar3)(plVar2,asStack_10,FUN_04af0c14,0xb0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPShopConfigData::StaticGetClass() */

long * PVPShopConfigData::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"PVPShopConfigData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVPShopConfigData::GetClass() const */

long * PVPShopConfigData::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"PVPShopConfigData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVPShopConfigData::requestShopShowList(bool) */

void __thiscall PVPShopConfigData::requestShopShowList(PVPShopConfigData *this,bool param_1)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  MetricsCollector *this_02;
  
  this[0xa8] = (PVPShopConfigData)param_1;
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestPvpShop(this_01,param_1);
  if (!param_1) {
    return;
  }
  this_02 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
  MetricsCollector::LogPvpRefreshStore(this_02,*(int *)(this + 0x84));
  return;
}


/* PVPShopConfigData::initData() */

void __thiscall PVPShopConfigData::initData(PVPShopConfigData *this)

{
  requestShopShowList(this,false);
  return;
}


/* PVPShopConfigData::requestBuyShopObject(int) */

void __thiscall PVPShopConfigData::requestBuyShopObject(PVPShopConfigData *this,int param_1)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  
  this[0xa8] = (PVPShopConfigData)0x1;
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestBuyPvpShopObject(this_01,(long)param_1);
  return;
}


/* PVPShopConfigData::clear() */

void __thiscall PVPShopConfigData::clear(PVPShopConfigData *this)

{
  std::vector<PvpShopItemData,std::allocator<PvpShopItemData>>::clear
            ((vector<PvpShopItemData,std::allocator<PvpShopItemData>> *)(this + 0x18));
  std::vector<PvpShopItemData,std::allocator<PvpShopItemData>>::clear
            ((vector<PvpShopItemData,std::allocator<PvpShopItemData>> *)(this + 0x30));
  std::vector<PvpShopItemData,std::allocator<PvpShopItemData>>::clear
            ((vector<PvpShopItemData,std::allocator<PvpShopItemData>> *)(this + 0x48));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPShopConfigData::getPVPCUPDataById(int) */

void __thiscall PVPShopConfigData::getPVPCUPDataById(PVPShopConfigData *this,int param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar4;
  int *piVar5;
  PvpShopInfo *this_02;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_18;
  ulong local_10;
  
  lVar2 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar8 = *(undefined8 *)(this + 0x18);
  lVar4 = FUN_04aefde8(uVar8,*(undefined8 *)(this + 0x20));
  lVar7 = 0;
  do {
    if (lVar7 == lVar4) {
      uVar8 = *(undefined8 *)(this + 0x30);
      lVar4 = FUN_04aefde8(uVar8,*(undefined8 *)(this + 0x38));
      lVar7 = 0;
      goto LAB_04af03e8;
    }
    piVar5 = (int *)FUN_04aefe10(uVar8,lVar7);
    lVar7 = lVar7 + 1;
  } while (*piVar5 != param_1);
  iVar1 = piVar5[1];
  iVar6 = piVar5[2];
  goto LAB_04af0450;
  while( true ) {
    piVar5 = (int *)FUN_04aefe10(uVar8,lVar7);
    lVar7 = lVar7 + 1;
    if (param_1 == *piVar5) break;
LAB_04af03e8:
    if (lVar7 == lVar4) {
      uVar8 = *(undefined8 *)(this + 0x48);
      lVar4 = FUN_04aefde8(uVar8,*(undefined8 *)(this + 0x50));
      lVar7 = 0;
      goto LAB_04af042c;
    }
  }
  goto LAB_04af0498;
  while( true ) {
    piVar5 = (int *)FUN_04aefe10(uVar8,lVar7);
    lVar7 = lVar7 + 1;
    if (param_1 == *piVar5) break;
LAB_04af042c:
    if (lVar7 == lVar4) {
      local_18 = 0;
      local_10 = 0;
      goto LAB_04af046c;
    }
  }
LAB_04af0498:
  iVar1 = piVar5[1];
  iVar6 = piVar5[2];
LAB_04af0450:
  local_18 = CONCAT44(iVar1,param_1);
  this_02 = (PvpShopInfo *)PlayerInfo::GetPvpShopInfo(this_01);
  uVar3 = PvpShopInfo::hasBuyed(this_02,param_1);
  local_10 = CONCAT44(uVar3,iVar6) & 0xffffffffff;
LAB_04af046c:
  if (lVar2 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18,local_10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPShopConfigData::checkReset() */

void __thiscall PVPShopConfigData::checkReset(PVPShopConfigData *this)

{
  int iVar1;
  long lVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  int iVar3;
  int iVar4;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (0 < local_10) {
    lVar2 = LawnApp::BeijingTime(gLawnApp,&local_10);
    lVar2 = *(long *)(lVar2 + 0x28) + local_10;
    iVar1 = (int)(lVar2 / 0x15180);
    iVar4 = (int)lVar2 + iVar1 * -0x15180;
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    lVar2 = PlayerInfo::GetPvpShopInfo(this_01);
    if (*(int *)(lVar2 + 4) < iVar1 + -1) {
      iVar3 = iVar1 + -1;
      if (*(int *)(this + 0x60) <= iVar4) {
        iVar3 = iVar1;
      }
    }
    else if ((iVar1 <= *(int *)(lVar2 + 4)) || (iVar3 = iVar1, iVar4 < *(int *)(this + 0x60)))
    goto LAB_04af0570;
    PlayerInfo::ResetPvpShop(this_01,iVar3);
  }
LAB_04af0570:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPShopConfigData::GetItemData(int) */

void __thiscall PVPShopConfigData::GetItemData(PVPShopConfigData *this,int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x18));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 == param_1) goto LAB_04af0714;
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x30));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 == param_1) goto LAB_04af0714;
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x48));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x48));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 == param_1) goto LAB_04af0714;
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  piVar2 = (int *)0x0;
LAB_04af0714:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(piVar2);
}


/* PVPShopConfigData::PVPShopConfigData() */

void __thiscall PVPShopConfigData::PVPShopConfigData(PVPShopConfigData *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0694e8e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  this[0xa8] = (PVPShopConfigData)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onResponseSubPvpCoin);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<PVPShopConfigData,void(PVPShopConfigData::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::NotifyPvpSubCoin,&local_40);
  this[0xa0] = (PVPShopConfigData)0x0;
  this[0xa1] = (PVPShopConfigData)0x0;
  return;
}


/* PVPShopConfigData::StaticNew() */

PVPShopConfigData * PVPShopConfigData::StaticNew(void)

{
  PVPShopConfigData *this;
  
  this = ::operator_new(0xb0);
  PVPShopConfigData(this);
  return this;
}


/* PVPShopConfigData::~PVPShopConfigData() */

void __thiscall PVPShopConfigData::~PVPShopConfigData(PVPShopConfigData *this)

{
  *(undefined ***)this = &PTR_GetClass_0694e8e0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<PVPCUPData,std::allocator<PVPCUPData>>::~vector
            ((vector<PVPCUPData,std::allocator<PVPCUPData>> *)(this + 0x88));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x68));
  std::vector<PvpShopItemData,std::allocator<PvpShopItemData>>::~vector
            ((vector<PvpShopItemData,std::allocator<PvpShopItemData>> *)(this + 0x48));
  std::vector<PvpShopItemData,std::allocator<PvpShopItemData>>::~vector
            ((vector<PvpShopItemData,std::allocator<PvpShopItemData>> *)(this + 0x30));
  std::vector<PvpShopItemData,std::allocator<PvpShopItemData>>::~vector
            ((vector<PvpShopItemData,std::allocator<PvpShopItemData>> *)(this + 0x18));
  nop();
  return;
}


/* PVPShopConfigData::~PVPShopConfigData() */

void __thiscall PVPShopConfigData::~PVPShopConfigData(PVPShopConfigData *this)

{
  ~PVPShopConfigData(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPShopConfigData::addObjToPlayerInfo(int, int) */

void __thiscall
PVPShopConfigData::addObjToPlayerInfo(PVPShopConfigData *this,int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  MetricsCollector *this_00;
  undefined8 local_40;
  undefined8 local_38 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProfileChangeItemAmount(param_1,param_2,false);
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x88));
  do {
    local_38[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x88));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)local_38);
    if (!bVar1) {
LAB_04af119c:
      this_00 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
      MetricsCollector::LogPvpBuyItem(this_00,param_1,param_2);
      MessageRouter::Post<int,int>
                ((MessageRouter *)gMessageRouter,Message::PvpShopBuyFinish,param_1);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    if (param_1 == *piVar2) {
      piVar2[3] = 1;
      goto LAB_04af119c;
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_40);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPShopConfigData::onResponseBuyResult(S2C_BuyPvpShopData const&) */

void __thiscall
PVPShopConfigData::onResponseBuyResult(PVPShopConfigData *this,S2C_BuyPvpShopData *param_1)

{
  bool bVar1;
  PVPManager *pPVar2;
  int *piVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xa8] != (PVPShopConfigData)0x0) {
    if (-1 < *(int *)(param_1 + 0x30)) {
      pPVar2 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      PVPManager::SetPVPCoin(pPVar2,*(int *)(param_1 + 0x30));
    }
    if (-1 < *(int *)(param_1 + 0x34)) {
      pPVar2 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      PVPManager::SetPVPMedal(pPVar2,*(int *)(param_1 + 0x34));
    }
    this[0xa8] = (PVPShopConfigData)0x0;
  }
  local_18 = FUN_04af0830(*(undefined8 *)(param_1 + 0x18));
  local_10 = FUN_04af0880(*(undefined8 *)(param_1 + 0x20));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    addObjToPlayerInfo(this,*piVar3,piVar3[1]);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::SAVE_PROFILE(this_01);
  MessageRouter::Post((_func_void *)gMessageRouter);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPShopConfigData::randomShowList(std::vector<PVPCUPData, std::allocator<PVPCUPData> >&,
   std::vector<int, std::allocator<int> >&) */

void __thiscall
PVPShopConfigData::randomShowList(PVPShopConfigData *this,vector *param_1,vector *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x18));
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x18));
  uVar6 = 0;
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<PvpShopItemData*,std::vector<PvpShopItemData,std::allocator<PvpShopItemData>>>>
            (uVar1,uVar2);
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x30));
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x30));
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<PvpShopItemData*,std::vector<PvpShopItemData,std::allocator<PvpShopItemData>>>>
            (uVar1,uVar2);
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x48));
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x48));
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<PvpShopItemData*,std::vector<PvpShopItemData,std::allocator<PvpShopItemData>>>>
            (uVar1,uVar2);
  iVar7 = *(int *)(this + 8);
  if (0 < iVar7) {
    do {
      while( true ) {
        uVar1 = *(undefined8 *)(this + 0x18);
        uVar3 = FUN_04aefde8(uVar1,*(undefined8 *)(this + 0x20));
        iVar5 = (int)uVar6;
        if (uVar3 <= uVar6) break;
        puVar4 = (undefined4 *)FUN_04aefe10(uVar1,uVar6);
        local_18 = *puVar4;
        local_14 = puVar4[1];
        local_10 = puVar4[2];
        local_c = 0;
        std::vector<PVPCUPData,std::allocator<PVPCUPData>>::push_back
                  ((vector<PVPCUPData,std::allocator<PVPCUPData>> *)param_1,(PVPCUPData *)&local_18)
        ;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)param_2,(int *)&local_18);
        iVar7 = *(int *)(this + 8);
        uVar6 = uVar6 + 1;
        if (iVar7 <= iVar5 + 1) goto LAB_04af15a0;
      }
      uVar6 = uVar6 + 1;
    } while (iVar5 + 1 < iVar7);
  }
LAB_04af15a0:
  iVar7 = *(int *)(this + 0xc);
  uVar6 = 0;
  if (0 < iVar7) {
    do {
      while( true ) {
        uVar1 = *(undefined8 *)(this + 0x30);
        uVar3 = FUN_04aefde8(uVar1,*(undefined8 *)(this + 0x38));
        iVar5 = (int)uVar6;
        if (uVar3 <= uVar6) break;
        puVar4 = (undefined4 *)FUN_04aefe10(uVar1,uVar6);
        local_18 = *puVar4;
        local_14 = puVar4[1];
        local_10 = puVar4[2];
        local_c = 0;
        std::vector<PVPCUPData,std::allocator<PVPCUPData>>::push_back
                  ((vector<PVPCUPData,std::allocator<PVPCUPData>> *)param_1,(PVPCUPData *)&local_18)
        ;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)param_2,(int *)&local_18);
        iVar7 = *(int *)(this + 0xc);
        uVar6 = uVar6 + 1;
        if (iVar7 <= iVar5 + 1) goto LAB_04af1638;
      }
      uVar6 = uVar6 + 1;
    } while (iVar5 + 1 < iVar7);
  }
LAB_04af1638:
  iVar7 = *(int *)(this + 0x10);
  uVar6 = 0;
  if (0 < iVar7) {
    do {
      while( true ) {
        uVar1 = *(undefined8 *)(this + 0x48);
        uVar3 = FUN_04aefde8(uVar1,*(undefined8 *)(this + 0x50));
        iVar5 = (int)uVar6;
        if (uVar3 <= uVar6) break;
        puVar4 = (undefined4 *)FUN_04aefe10(uVar1,uVar6);
        local_18 = *puVar4;
        local_14 = puVar4[1];
        local_10 = puVar4[2];
        local_c = 0;
        std::vector<PVPCUPData,std::allocator<PVPCUPData>>::push_back
                  ((vector<PVPCUPData,std::allocator<PVPCUPData>> *)param_1,(PVPCUPData *)&local_18)
        ;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)param_2,(int *)&local_18);
        iVar7 = *(int *)(this + 0x10);
        uVar6 = uVar6 + 1;
        if (iVar7 <= iVar5 + 1) goto LAB_04af16d0;
      }
      uVar6 = uVar6 + 1;
    } while (iVar5 + 1 < iVar7);
  }
LAB_04af16d0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPShopConfigData::setShopShowList(int, std::vector<PVPCUPData, std::allocator<PVPCUPData> >
   const&) */

void __thiscall
PVPShopConfigData::setShopShowList(PVPShopConfigData *this,int param_1,vector *param_2)

{
  vector<PVPCUPData,std::allocator<PVPCUPData>> *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<PVPCUPData,std::allocator<PVPCUPData>> *)(this + 0x88);
  local_8 = ___stack_chk_guard;
  std::vector<PVPCUPData,std::allocator<PVPCUPData>>::clear(this_00);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  uVar1 = FUN_04af0740(*(undefined8 *)param_2);
  uVar2 = FUN_04af0790(*(undefined8 *)(param_2 + 8));
  std::vector<PVPCUPData,std::allocator<PVPCUPData>>::
  insert<__gnu_cxx::__normal_iterator<PVPCUPData_const*,std::vector<PVPCUPData,std::allocator<PVPCUPData>>>,void>
            (this_00,local_10,uVar1,uVar2);
  *(int *)(this + 0x84) = param_1;
  MessageRouter::Post((_func_void *)gMessageRouter);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPShopConfigData::onResponseSubPvpCoin(int, int) */

void __thiscall
PVPShopConfigData::onResponseSubPvpCoin(PVPShopConfigData *this,int param_1,int param_2)

{
  PVPManager *pPVar1;
  int extraout_var;
  ProfileMgr *pPVar2;
  PlayerInfo *pPVar3;
  int *piVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xa8] != (PVPShopConfigData)0x0) {
    if (-1 < param_1) {
      pPVar1 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      PVPManager::SetPVPCoin(pPVar1,param_1);
    }
    if (-1 < param_2) {
      pPVar1 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      PVPManager::SetPVPMedal(pPVar1,param_2);
    }
    this[0xa8] = (PVPShopConfigData)0x0;
  }
  if (this[0xa0] != (PVPShopConfigData)0x0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
    randomShowList(this,(vector *)avStack_38,(vector *)avStack_20);
    PlayerInfo::AddPvpShopRefresh(pPVar3,true);
    PlayerInfo::SetPvpShopSellList(pPVar3,(vector *)avStack_20);
    piVar4 = (int *)PlayerInfo::GetPvpShopInfo(pPVar3);
    uVar7 = *(undefined8 *)(this + 0x68);
    iVar6 = *piVar4;
    uVar5 = FUN_04aefbac(uVar7,*(undefined8 *)(this + 0x70));
    if ((ulong)(long)iVar6 < uVar5) {
      piVar4 = (int *)FUN_04aefe18(uVar7,(long)iVar6);
      iVar6 = *piVar4;
    }
    else {
      piVar4 = (int *)FUN_04aefe18(uVar7,uVar5 - 1);
      iVar6 = *piVar4;
    }
    setShopShowList(this,iVar6,(vector *)avStack_38);
    PlayerInfo::SAVE_PROFILE(pPVar3);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
    std::vector<PVPCUPData,std::allocator<PVPCUPData>>::~vector
              ((vector<PVPCUPData,std::allocator<PVPCUPData>> *)avStack_38);
  }
  if (this[0xa1] != (PVPShopConfigData)0x0) {
    getPVPCUPDataById(this,*(int *)(this + 0xa4));
    addObjToPlayerInfo(this,*(int *)(this + 0xa4),extraout_var);
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
    PlayerInfo::BuyPvpShopObj(pPVar3,*(int *)(this + 0xa4));
    PlayerInfo::SAVE_PROFILE(pPVar3);
  }
  this[0xa0] = (PVPShopConfigData)0x0;
  this[0xa1] = (PVPShopConfigData)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPShopConfigData::onResponseShopList(S2C_PvpShopData const&) */

void __thiscall
PVPShopConfigData::onResponseShopList(PVPShopConfigData *this,S2C_PvpShopData *param_1)

{
  PVPManager *pPVar1;
  
  if (this[0xa8] != (PVPShopConfigData)0x0) {
    if (-1 < *(int *)(param_1 + 0x30)) {
      pPVar1 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      PVPManager::SetPVPCoin(pPVar1,*(int *)(param_1 + 0x30));
    }
    if (-1 < *(int *)(param_1 + 0x34)) {
      pPVar1 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      PVPManager::SetPVPMedal(pPVar1,*(int *)(param_1 + 0x34));
    }
    this[0xa8] = (PVPShopConfigData)0x0;
  }
  setShopShowList(this,*(int *)(param_1 + 0x14),(vector *)(param_1 + 0x18));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPShopConfigData::getShopShowList(std::vector<PVPCUPData, std::allocator<PVPCUPData> >&) */

void __thiscall PVPShopConfigData::getShopShowList(PVPShopConfigData *this,vector *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_04aefe20(*(undefined8 *)(this + 0x88),*(undefined8 *)(this + 0x90));
  if (lVar1 != 0) {
    std::vector<PVPCUPData,std::allocator<PVPCUPData>>::clear
              ((vector<PVPCUPData,std::allocator<PVPCUPData>> *)param_1);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)param_1);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(this + 0x88));
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x88));
    std::vector<PVPCUPData,std::allocator<PVPCUPData>>::
    insert<__gnu_cxx::__normal_iterator<PVPCUPData*,std::vector<PVPCUPData,std::allocator<PVPCUPData>>>,void>
              ((vector<PVPCUPData,std::allocator<PVPCUPData>> *)param_1,local_10,uVar2,uVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1 != 0);
}

