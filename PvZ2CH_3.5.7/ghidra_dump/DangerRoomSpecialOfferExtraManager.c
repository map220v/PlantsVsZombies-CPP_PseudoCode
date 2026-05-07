// Class: DangerRoomSpecialOfferExtraManager


/* DangerRoomSpecialOfferExtraManager::FillData(DangerRoomSpecialOfferExtraData&) */

void __thiscall
DangerRoomSpecialOfferExtraManager::FillData
          (DangerRoomSpecialOfferExtraManager *this,DangerRoomSpecialOfferExtraData *param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  uVar4 = 0;
  puVar6 = &DAT_06b99e88;
  while( true ) {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = FUN_04db7b74(uVar5,*(undefined8 *)(param_1 + 0x20));
    if (uVar3 <= uVar4) break;
    lVar2 = FUN_04db7ba4(uVar5,uVar4);
    *(int *)(lVar2 + 0x38) = (int)uVar4;
    *(undefined4 *)(lVar2 + 0x20) = (&DAT_05755b60)[uVar4];
    uVar1 = (&DAT_05755ae0)[uVar4];
    *(undefined4 *)(lVar2 + 0x24) = (&DAT_05755b20)[uVar4];
    *(undefined4 *)(lVar2 + 0x28) = uVar1;
    thunk_FUN_05475e00(lVar2 + 0x30,puVar6);
    uVar4 = uVar4 + 1;
    puVar6 = puVar6 + 8;
  }
  return;
}


/* DangerRoomSpecialOfferExtraManager::RequestNetwork() */

void DangerRoomSpecialOfferExtraManager::RequestNetwork(void)

{
  ActivityManager *this;
  
  this = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this,0x2a1c,true,0);
  return;
}


/* DangerRoomSpecialOfferExtraManager::DangerRoomSpecialOfferExtraManager() */

void __thiscall
DangerRoomSpecialOfferExtraManager::DangerRoomSpecialOfferExtraManager
          (DangerRoomSpecialOfferExtraManager *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<DangerRoomSpecialOfferExtraManager>::LazySingleton
            ((LazySingleton<DangerRoomSpecialOfferExtraManager> *)this);
  *(undefined ***)this = &PTR__DangerRoomSpecialOfferExtraManager_069c1570;
  DangerRoomSpecialOfferExtraData::DangerRoomSpecialOfferExtraData
            ((DangerRoomSpecialOfferExtraData *)(this + 8));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<DangerRoomSpecialOfferExtraManager,void(DangerRoomSpecialOfferExtraManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* DangerRoomSpecialOfferExtraManager::~DangerRoomSpecialOfferExtraManager() */

void __thiscall
DangerRoomSpecialOfferExtraManager::~DangerRoomSpecialOfferExtraManager
          (DangerRoomSpecialOfferExtraManager *this)

{
  *(undefined ***)this = &PTR__DangerRoomSpecialOfferExtraManager_069c1570;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  DangerRoomSpecialOfferExtraData::~DangerRoomSpecialOfferExtraData
            ((DangerRoomSpecialOfferExtraData *)(this + 8));
  Sexy::LazySingleton<DangerRoomSpecialOfferExtraManager>::~LazySingleton
            ((LazySingleton<DangerRoomSpecialOfferExtraManager> *)this);
  return;
}


/* DangerRoomSpecialOfferExtraManager::~DangerRoomSpecialOfferExtraManager() */

void __thiscall
DangerRoomSpecialOfferExtraManager::~DangerRoomSpecialOfferExtraManager
          (DangerRoomSpecialOfferExtraManager *this)

{
  ~DangerRoomSpecialOfferExtraManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferExtraManager::GetItemData(int) */

void __thiscall
DangerRoomSpecialOfferExtraManager::GetItemData
          (DangerRoomSpecialOfferExtraManager *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_04db9c44(uVar2,uVar3,this,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else if (local_8 == ___stack_chk_guard) {
    FUN_04db7ba4(*(undefined8 *)(this + 0x20),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferExtraManager::SortData(DangerRoomSpecialOfferExtraData&) */

void __thiscall
DangerRoomSpecialOfferExtraManager::SortData
          (DangerRoomSpecialOfferExtraManager *this,DangerRoomSpecialOfferExtraData *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  ulong uVar1;
  DangerRoomSpecialOfferExtraItemData *pDVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = FUN_04db7b74(uVar5,*(undefined8 *)(param_1 + 0x20));
  if (uVar1 != 0) {
    do {
      pDVar2 = (DangerRoomSpecialOfferExtraItemData *)FUN_04db7ba4(uVar5,uVar4);
      if (*(int *)(pDVar2 + 0x18) == 2) {
        std::
        vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>
        ::push_back((vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>
                     *)&local_20,pDVar2);
        uVar5 = *(undefined8 *)(param_1 + 0x18);
        uVar1 = FUN_04db7b74(uVar5,*(undefined8 *)(param_1 + 0x20));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(param_1 + 0x18);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_40 = FUN_04dba49c(uVar5,uVar3,this);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_30,(__normal_iterator *)&local_40);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_28,(__normal_iterator *)&local_38);
  std::
  vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>::
  erase((vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>
         *)this_00,local_30,local_28);
  uVar1 = 0;
  while( true ) {
    uVar5 = local_20;
    uVar4 = FUN_04db7b74(local_20,local_18);
    if (uVar4 <= uVar1) break;
    pDVar2 = (DangerRoomSpecialOfferExtraItemData *)FUN_04db7ba4(uVar5,uVar1);
    std::
    vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>
    ::push_back((vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>
                 *)this_00,pDVar2);
    uVar1 = uVar1 + 1;
  }
  std::
  vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>::
  ~vector((vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>
           *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DangerRoomSpecialOfferExtraManager::FillAndSortData(DangerRoomSpecialOfferExtraData&) */

void __thiscall
DangerRoomSpecialOfferExtraManager::FillAndSortData
          (DangerRoomSpecialOfferExtraManager *this,DangerRoomSpecialOfferExtraData *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  FillData(this,param_1);
  SortData(this,param_1);
  uVar6 = 0;
  while( true ) {
    uVar5 = FUN_04db7b74(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    if (uVar5 <= uVar6) break;
    Sexy::OutputDebugStrF((wchar_t *)"item %d",uVar6 & 0xffffffff);
    puVar1 = (undefined8 *)FUN_04db7ba4(*(undefined8 *)(param_1 + 0x18),uVar6);
    uVar7 = *puVar1;
    puVar2 = (uint *)FUN_04db7b68(uVar7,0);
    puVar3 = (uint *)FUN_04db7b68(uVar7,1);
    Sexy::OutputDebugStrF
              ((wchar_t *)"id = %d, count = %d; id = %d, count = %d",(ulong)*puVar2,(ulong)puVar2[1]
               ,(ulong)*puVar3,(ulong)puVar3[1]);
    lVar4 = FUN_04db7ba4(*(undefined8 *)(param_1 + 0x18),uVar6);
    Sexy::OutputDebugStrF((wchar_t *)"ButtonStatus = %d",(ulong)*(uint *)(lVar4 + 0x18));
    lVar4 = FUN_04db7ba4(*(undefined8 *)(param_1 + 0x18),uVar6);
    Sexy::OutputDebugStrF((wchar_t *)"DescIndex = %d",(ulong)*(uint *)(lVar4 + 0x1c));
    lVar4 = FUN_04db7ba4(*(undefined8 *)(param_1 + 0x18),uVar6);
    Sexy::OutputDebugStrF((wchar_t *)"OrigPrice = %d",(ulong)*(uint *)(lVar4 + 0x20));
    lVar4 = FUN_04db7ba4(*(undefined8 *)(param_1 + 0x18),uVar6);
    Sexy::OutputDebugStrF((wchar_t *)"CurPrice = %d",(ulong)*(uint *)(lVar4 + 0x24));
    lVar4 = FUN_04db7ba4(*(undefined8 *)(param_1 + 0x18),uVar6);
    Sexy::OutputDebugStrF((wchar_t *)"Discount = %d",(ulong)*(uint *)(lVar4 + 0x28));
    lVar4 = FUN_04db7ba4(*(undefined8 *)(param_1 + 0x18),uVar6);
    uVar7 = FUN_0547429c(lVar4 + 0x30);
    Sexy::OutputDebugStrF((wchar_t *)"Payment = %s",uVar7);
    lVar4 = FUN_04db7ba4(*(undefined8 *)(param_1 + 0x18),uVar6);
    Sexy::OutputDebugStrF((wchar_t *)"Index = %d",(ulong)*(uint *)(lVar4 + 0x38));
    uVar6 = uVar6 + 1;
  }
  return;
}


/* DangerRoomSpecialOfferExtraManager::LoadData(DangerRoomSpecialOfferExtraData const&) */

void __thiscall
DangerRoomSpecialOfferExtraManager::LoadData
          (DangerRoomSpecialOfferExtraManager *this,DangerRoomSpecialOfferExtraData *param_1)

{
  DangerRoomSpecialOfferExtraData::operator=((DangerRoomSpecialOfferExtraData *)(this + 8),param_1);
  FillAndSortData(this,(DangerRoomSpecialOfferExtraData *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferExtraManager::TestInitData() */

void __thiscall
DangerRoomSpecialOfferExtraManager::TestInitData(DangerRoomSpecialOfferExtraManager *this)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_58;
  undefined4 local_54;
  DangerRoomSpecialOfferExtraItemData aDStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = 0xe;
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_58);
  local_58 = 0xbc0;
  local_54 = 1000;
  std::
  vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>::
  clear((vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>
         *)(this + 0x20));
  DangerRoomSpecialOfferExtraItemData::DangerRoomSpecialOfferExtraItemData(aDStack_48);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)aDStack_48,
             (S2C_BonusInfo *)&local_58);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)aDStack_48,
             (S2C_BonusInfo *)&local_58);
  do {
    std::
    vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>
    ::push_back((vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>
                 *)(this + 0x20),aDStack_48);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FillData(this,(DangerRoomSpecialOfferExtraData *)(this + 8));
  uVar3 = *(undefined8 *)(this + 0x20);
  lVar1 = FUN_04db7ba4(uVar3,4);
  *(undefined4 *)(lVar1 + 0x18) = 2;
  lVar1 = FUN_04db7ba4(uVar3,5);
  *(undefined4 *)(lVar1 + 0x18) = 0;
  lVar1 = FUN_04db7ba4(uVar3,9);
  *(undefined4 *)(lVar1 + 0x18) = 2;
  SortData(this,(DangerRoomSpecialOfferExtraData *)(this + 8));
  DangerRoomSpecialOfferExtraItemData::~DangerRoomSpecialOfferExtraItemData(aDStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferExtraManager::OnNotifyRefreshActivityList(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&) */

void __thiscall
DangerRoomSpecialOfferExtraManager::OnNotifyRefreshActivityList
          (DangerRoomSpecialOfferExtraManager *this,bool param_1,set *param_2)

{
  DangerRoomSpecialOfferExtraData *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  DangerRoomSpecialOfferExtraUI *this_01;
  int local_c4;
  undefined8 local_c0;
  undefined8 local_b8 [3];
  vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>
  avStack_a0 [24];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_c4 = 0x2a1c;
    local_c0 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_c4);
    local_b8[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_c0,(rbtree_iterator *)local_b8);
    if (bVar1) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      DangerRoomSpecialOfferExtraData::DangerRoomSpecialOfferExtraData
                ((DangerRoomSpecialOfferExtraData *)local_b8);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)local_b8);
      if (cVar2 != '\0') {
        this_00 = (DangerRoomSpecialOfferExtraData *)(this + 8);
        DangerRoomSpecialOfferExtraData::operator=
                  (this_00,(DangerRoomSpecialOfferExtraData *)local_b8);
        FillAndSortData(this,this_00);
        cVar2 = std::
                vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>
                ::empty(avStack_a0);
        if (cVar2 != '\0') {
          Sexy::OutputDebugStrF((wchar_t *)"DangerRoomSpecialOfferExtraManager data list is empty");
          DangerRoomSpecialOfferExtraData::~DangerRoomSpecialOfferExtraData
                    ((DangerRoomSpecialOfferExtraData *)local_b8);
          ActiveItem::~ActiveItem(aAStack_88);
          goto LAB_04dbb3a4;
        }
        this_01 = (DangerRoomSpecialOfferExtraUI *)
                  UISingletonDialog<DangerRoomSpecialOfferExtraUI>::GetSingletonPtr();
        if (this_01 == (DangerRoomSpecialOfferExtraUI *)0x0) {
          UISingletonDialog<DangerRoomSpecialOfferExtraUI>::ShowDialog();
        }
        else {
          DangerRoomSpecialOfferExtraUI::UpdateUI(this_01,this_00);
        }
      }
      DangerRoomSpecialOfferExtraData::~DangerRoomSpecialOfferExtraData
                ((DangerRoomSpecialOfferExtraData *)local_b8);
      ActiveItem::~ActiveItem(aAStack_88);
    }
  }
LAB_04dbb3a4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferExtraManager::NotifyPurchased(std::string) */

void __thiscall
DangerRoomSpecialOfferExtraManager::NotifyPurchased
          (DangerRoomSpecialOfferExtraManager *this,string *param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  CommonUIManager *this_00;
  char *pcVar7;
  uint *puVar8;
  uint *puVar9;
  TGALogMgr *pTVar10;
  ulong uVar11;
  ulong __n;
  undefined8 uVar12;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_60 [24];
  TGAAccumulatedLoginData aTStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  string asStack_30 [8];
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  long local_8;
  
  uVar12 = *(undefined8 *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_04db7b74(uVar12,*(undefined8 *)(this + 0x28));
  __n = 0;
  do {
    uVar11 = __n;
    if (uVar11 == uVar2) goto LAB_04dbbec0;
    lVar3 = FUN_04db7ba4(uVar12,uVar11);
    cVar1 = std::operator==(param_2,(string *)(lVar3 + 0x30));
    __n = uVar11 + 1;
  } while (cVar1 == '\0');
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_60);
  uVar2 = 0;
  while( true ) {
    puVar5 = (undefined8 *)FUN_04db7ba4(*(undefined8 *)(this + 0x20),uVar11);
    uVar12 = *puVar5;
    uVar6 = FUN_04db7b54(uVar12,puVar5[1]);
    if (uVar6 <= uVar2) break;
    puVar4 = (undefined4 *)FUN_04db7b68(uVar12,uVar2);
    local_28 = *puVar4;
    local_24 = puVar4[1];
    __n = (ulong)local_24;
    local_20 = 0;
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_60,
               (LotteryBonus *)&local_28);
    uVar2 = uVar2 + 1;
  }
  this_00 = (CommonUIManager *)Sexy::LazySingleton<CommonUIManager>::GetInstance();
  CommonUIManager::ShowBonusRedPachet(this_00,(vector *)avStack_60);
  TGAAccumulatedLoginData::TGAAccumulatedLoginData(aTStack_48);
  DString::DString((DString *)&local_28,3);
  pcVar7 = (char *)DString::c_str((DString *)&local_28);
  std::string::append((string *)aTStack_48,pcVar7,__n);
  DString::~DString((DString *)&local_28);
  thunk_FUN_05475e00(auStack_40,param_2);
  puVar5 = (undefined8 *)FUN_04db7ba4(*(undefined8 *)(this + 0x20),uVar11);
  uVar12 = *puVar5;
  uVar2 = FUN_04db7b54(uVar12,puVar5[1]);
  if (1 < uVar2) {
    puVar8 = (uint *)FUN_04db7b68(uVar12,0);
    puVar9 = (uint *)FUN_04db7b68(uVar12,1);
    __n = (ulong)puVar8[1];
    Sexy::StrFormat("%d,%d;%d,%d",(DString *)&local_28,(ulong)*puVar8,__n,(ulong)*puVar9,
                    (ulong)puVar9[1]);
    FUN_05474278(auStack_38,(DString *)&local_28);
    std::string::~string((string *)&local_28);
    puVar5 = (undefined8 *)FUN_04db7ba4(*(undefined8 *)(this + 0x20),uVar11);
  }
  DString::DString((DString *)&local_28,*(int *)((long)puVar5 + 0x24));
  pcVar7 = (char *)DString::c_str((DString *)&local_28);
  std::string::append(asStack_30,pcVar7,__n);
  DString::~DString((DString *)&local_28);
  pTVar10 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  InvitationPlayerInfo::InvitationPlayerInfo
            ((InvitationPlayerInfo *)&local_28,(InvitationPlayerInfo *)aTStack_48);
  TGALogMgr::LogDangerRoomSpecialOffer(pTVar10,(DString *)&local_28);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)&local_28);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData(aTStack_48);
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_60);
LAB_04dbbec0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferExtraManager::NotifyPurchased(std::vector<PaymentBundleInfo,
   std::allocator<PaymentBundleInfo> >, std::string) */

void __thiscall
DangerRoomSpecialOfferExtraManager::NotifyPurchased
          (undefined8 param_1,undefined8 *param_2,string *param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  CommonUIManager *this;
  char *pcVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  RtObject *this_00;
  MagentoProductProps *pMVar10;
  TGALogMgr *pTVar11;
  int iVar12;
  int extraout_w1;
  int extraout_w1_00;
  size_t __n;
  undefined8 uVar13;
  float fVar14;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_78 [8];
  RtId aRStack_70 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  TGAAccumulatedLoginData aTStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  string asStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  long local_8;
  
  __n = 0;
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_05474374(param_3,"DangerRoomSpecialOfferExtra");
  if (lVar3 != -1) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_60);
    uVar7 = 0;
    while( true ) {
      uVar13 = *param_2;
      uVar5 = FUN_04db7bac(uVar13,param_2[1]);
      if (uVar5 <= uVar7) break;
      puVar4 = (undefined4 *)FUN_04db7bb8(uVar13,uVar7);
      local_28 = *puVar4;
      local_24 = puVar4[1];
      local_20 = 0;
      std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
                ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)&local_60,
                 (LotteryBonus *)&local_28);
      uVar7 = uVar7 + 1;
    }
    this = (CommonUIManager *)Sexy::LazySingleton<CommonUIManager>::GetInstance();
    CommonUIManager::ShowBonusRedPachet(this,(vector *)&local_60);
    TGAAccumulatedLoginData::TGAAccumulatedLoginData(aTStack_48);
    DString::DString((DString *)&local_28,3);
    pcVar6 = (char *)DString::c_str((DString *)&local_28);
    std::string::append((string *)aTStack_48,pcVar6,__n);
    DString::~DString((DString *)&local_28);
    thunk_FUN_05475e00(auStack_40,param_3);
    uVar7 = FUN_04db7bc0(local_60,local_58);
    if (1 < uVar7) {
      puVar8 = (uint *)FUN_04db7bd4(local_60,0);
      puVar9 = (uint *)FUN_04db7bd4(local_60,1);
      __n = (size_t)puVar8[1];
      Sexy::StrFormat("%d,%d;%d,%d",(DString *)&local_28,(ulong)*puVar8,__n,(ulong)*puVar9,
                      (ulong)puVar9[1]);
      FUN_05474278(auStack_38,(DString *)&local_28);
      std::string::~string((string *)&local_28);
    }
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_78);
    uVar13 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable((DString *)&local_28,uVar13,0x1a);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_28), bVar1) {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_70);
      this_00 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      pMVar10 = Sexy::RtObject::Cast<MagentoProductProps>(this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      Sexy::RtId::~RtId(aRStack_70);
      iVar12 = extraout_w1;
      if ((pMVar10 != (MagentoProductProps *)0x0) &&
         (cVar2 = std::operator==((string *)(pMVar10 + 0x10),param_3), iVar12 = extraout_w1_00,
         cVar2 != '\0')) {
        Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_28);
        Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                  ((RtWeakPtr<CthulhuPropertySheet> *)a_Stack_78,(RtId *)aRStack_68);
        Sexy::RtId::~RtId((RtId *)aRStack_68);
        break;
      }
      Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_28,iVar12);
    }
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_28);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_78);
    if (bVar1) {
      pMVar10 = (MagentoProductProps *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_78);
      fVar14 = (float)MagentoProductProps::GetPriceInUSD(pMVar10,false);
      DString::DString((DString *)&local_28,fVar14);
      pcVar6 = (char *)DString::c_str((DString *)&local_28);
      std::string::append(asStack_30,pcVar6,__n);
      DString::~DString((DString *)&local_28);
    }
    pTVar11 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    InvitationPlayerInfo::InvitationPlayerInfo
              ((InvitationPlayerInfo *)&local_28,(InvitationPlayerInfo *)aTStack_48);
    TGALogMgr::LogDangerRoomSpecialOffer(pTVar11,(DString *)&local_28);
    TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)&local_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_78);
    TGAAccumulatedLoginData::~TGAAccumulatedLoginData(aTStack_48);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)&local_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

