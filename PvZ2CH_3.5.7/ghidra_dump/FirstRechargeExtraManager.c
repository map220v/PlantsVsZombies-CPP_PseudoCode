// Class: FirstRechargeExtraManager


/* FirstRechargeExtraManager::GetCurrentIndex(int) */

undefined4 __thiscall
FirstRechargeExtraManager::GetCurrentIndex(FirstRechargeExtraManager *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_04dad9b8(*(undefined8 *)(this + 0x38),(long)param_1);
  return *puVar1;
}


/* FirstRechargeExtraManager::IsBonusReadyGot(int) */

bool __thiscall
FirstRechargeExtraManager::IsBonusReadyGot(FirstRechargeExtraManager *this,int param_1)

{
  ulong uVar1;
  int *piVar2;
  ulong uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 uVar6;
  
  uVar4 = *(undefined8 *)(this + 0x20);
  bVar5 = false;
  uVar3 = (ulong)param_1;
  uVar1 = FUN_04dad9a4(uVar4,*(undefined8 *)(this + 0x28));
  if (uVar3 < uVar1) {
    uVar6 = *(undefined8 *)(this + 0x38);
    uVar1 = FUN_04dad9a4(uVar6,*(undefined8 *)(this + 0x40));
    if ((uVar3 < uVar1) && (piVar2 = (int *)FUN_04dad9b8(uVar4,uVar3), *piVar2 == 0)) {
      piVar2 = (int *)FUN_04dad9b8(uVar6,uVar3);
      bVar5 = 0 < *piVar2;
    }
  }
  return bVar5;
}


/* FirstRechargeExtraManager::IsBonusReadyGot() */

int __thiscall FirstRechargeExtraManager::IsBonusReadyGot(FirstRechargeExtraManager *this)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    cVar1 = IsBonusReadyGot(this,iVar2);
    if (cVar1 != '\0') {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 3);
  return -1;
}


/* FirstRechargeExtraManager::FindFirstLockTab() */

undefined4 __thiscall FirstRechargeExtraManager::FindFirstLockTab(FirstRechargeExtraManager *this)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x20);
  piVar1 = (int *)FUN_04dad9b8(uVar3,0);
  if ((*piVar1 == 0) && (piVar1 = (int *)FUN_04dad9b8(*(undefined8 *)(this + 0x38),0), *piVar1 == 0)
     ) {
    return 0;
  }
  piVar1 = (int *)FUN_04dad9b8(uVar3,1);
  if ((*piVar1 == 0) && (piVar1 = (int *)FUN_04dad9b8(*(undefined8 *)(this + 0x38),1), *piVar1 == 0)
     ) {
    uVar2 = 1;
  }
  else {
    piVar1 = (int *)FUN_04dad9b8(uVar3,2);
    if (*piVar1 != 0) {
      return 0;
    }
    piVar1 = (int *)FUN_04dad9b8(*(undefined8 *)(this + 0x38),2);
    uVar2 = 0;
    if (*piVar1 == 0) {
      uVar2 = 2;
    }
  }
  return uVar2;
}


/* FirstRechargeExtraManager::IsNoRecharge() */

undefined8 __thiscall FirstRechargeExtraManager::IsNoRecharge(FirstRechargeExtraManager *this)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x38);
  lVar1 = FUN_04dad9a4(uVar4,*(undefined8 *)(this + 0x40));
  lVar3 = 0;
  do {
    if (lVar3 == lVar1) {
      return 1;
    }
    piVar2 = (int *)FUN_04dad9b8(uVar4,lVar3);
    lVar3 = lVar3 + 1;
  } while (*piVar2 == 0);
  return 0;
}


/* FirstRechargeExtraManager::IsValid(int) */

bool __thiscall FirstRechargeExtraManager::IsValid(FirstRechargeExtraManager *this,int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_04dad9b8(*(undefined8 *)(this + 0x38),(long)param_1);
  return *piVar1 < 4;
}


/* FirstRechargeExtraManager::RequestNetwork() */

void FirstRechargeExtraManager::RequestNetwork(void)

{
  ActivityManager *this;
  
  this = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this,0x29c1,false,0);
  return;
}


/* FirstRechargeExtraManager::FirstRechargeExtraManager() */

void __thiscall
FirstRechargeExtraManager::FirstRechargeExtraManager(FirstRechargeExtraManager *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<FirstRechargeExtraManager>::LazySingleton
            ((LazySingleton<FirstRechargeExtraManager> *)this);
  *(undefined ***)this = &PTR__FirstRechargeExtraManager_069beea0;
  FirstRechargeExtraNetworkData::FirstRechargeExtraNetworkData
            ((FirstRechargeExtraNetworkData *)(this + 8));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<FirstRechargeExtraManager,void(FirstRechargeExtraManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* FirstRechargeExtraManager::~FirstRechargeExtraManager() */

void __thiscall
FirstRechargeExtraManager::~FirstRechargeExtraManager(FirstRechargeExtraManager *this)

{
  *(undefined ***)this = &PTR__FirstRechargeExtraManager_069beea0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FirstRechargeExtraNetworkData::~FirstRechargeExtraNetworkData
            ((FirstRechargeExtraNetworkData *)(this + 8));
  Sexy::LazySingleton<FirstRechargeExtraManager>::~LazySingleton
            ((LazySingleton<FirstRechargeExtraManager> *)this);
  return;
}


/* FirstRechargeExtraManager::~FirstRechargeExtraManager() */

void __thiscall
FirstRechargeExtraManager::~FirstRechargeExtraManager(FirstRechargeExtraManager *this)

{
  ~FirstRechargeExtraManager(this);
  AK::FreeHook(this);
  return;
}


/* FirstRechargeExtraManager::GetBonusList(int) */

void FirstRechargeExtraManager::GetBonusList(int param_1)

{
  vector *pvVar1;
  int in_w1;
  vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>> *in_x8;
  
  pvVar1 = (vector *)FUN_04dad9c4(*(undefined8 *)((ulong)(uint)param_1 + 0x50),(long)in_w1);
  std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>::vector
            (in_x8,pvVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FirstRechargeExtraManager::TestData() */

void __thiscall FirstRechargeExtraManager::TestData(FirstRechargeExtraManager *this)

{
  undefined4 local_b8 [4];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_a8 [24];
  undefined4 local_90 [2];
  vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> avStack_88 [24];
  FirstRechargeExtraNetworkData aFStack_70 [24];
  vector<int,std::allocator<int>> avStack_58 [24];
  vector<int,std::allocator<int>> avStack_40 [24];
  vector<std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>,std::allocator<std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>>>
  avStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FirstRechargeExtraNetworkData::FirstRechargeExtraNetworkData(aFStack_70);
  local_90[0] = 0;
  std::vector<int,std::allocator<int>>::push_back(avStack_58,(int *)local_90);
  local_90[0] = 0;
  std::vector<int,std::allocator<int>>::push_back(avStack_58,(int *)local_90);
  local_90[0] = 0;
  std::vector<int,std::allocator<int>>::push_back(avStack_58,(int *)local_90);
  local_90[0] = 1;
  std::vector<int,std::allocator<int>>::push_back(avStack_40,(int *)local_90);
  local_90[0] = 1;
  std::vector<int,std::allocator<int>>::push_back(avStack_40,(int *)local_90);
  local_90[0] = 1;
  std::vector<int,std::allocator<int>>::push_back(avStack_40,(int *)local_90);
  FirstRechargeExtraBonusData::FirstRechargeExtraBonusData((FirstRechargeExtraBonusData *)local_90);
  local_90[0] = 0;
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)local_b8);
  local_b8[0] = 0xfad;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
            (avStack_88,(S2C_BonusInfo *)local_b8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_a8);
  std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>::push_back
            ((vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>> *)
             avStack_a8,(FirstRechargeExtraBonusData *)local_90);
  std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>::push_back
            ((vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>> *)
             avStack_a8,(FirstRechargeExtraBonusData *)local_90);
  std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>::push_back
            ((vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>> *)
             avStack_a8,(FirstRechargeExtraBonusData *)local_90);
  std::
  vector<std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>,std::allocator<std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>>>
  ::push_back(avStack_28,(vector *)avStack_a8);
  std::
  vector<std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>,std::allocator<std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>>>
  ::push_back(avStack_28,(vector *)avStack_a8);
  std::
  vector<std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>,std::allocator<std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>>>
  ::push_back(avStack_28,(vector *)avStack_a8);
  FirstRechargeExtraNetworkData::operator=((FirstRechargeExtraNetworkData *)(this + 8),aFStack_70);
  std::vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>>::~vector
            ((vector<FirstRechargeExtraBonusData,std::allocator<FirstRechargeExtraBonusData>> *)
             avStack_a8);
  FirstRechargeExtraBonusData::~FirstRechargeExtraBonusData((FirstRechargeExtraBonusData *)local_90)
  ;
  FirstRechargeExtraNetworkData::~FirstRechargeExtraNetworkData(aFStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FirstRechargeExtraManager::LoadData(FirstRechargeExtraNetworkData const&, bool) */

void __thiscall
FirstRechargeExtraManager::LoadData
          (FirstRechargeExtraManager *this,FirstRechargeExtraNetworkData *param_1,bool param_2)

{
  FirstRechargeExtraUI *this_00;
  
  FirstRechargeExtraNetworkData::operator=((FirstRechargeExtraNetworkData *)(this + 8),param_1);
  if (!param_2) {
    return;
  }
  this_00 = (FirstRechargeExtraUI *)UISingletonDialog<FirstRechargeExtraUI>::GetSingletonPtr();
  if (this_00 != (FirstRechargeExtraUI *)0x0) {
    FirstRechargeExtraUI::UpdateUI(this_00,param_1);
    return;
  }
  UISingletonDialog<FirstRechargeExtraUI>::ShowDialog();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FirstRechargeExtraManager::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
FirstRechargeExtraManager::OnNotifyRefreshActivityList
          (FirstRechargeExtraManager *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_fc;
  undefined8 local_f8;
  undefined8 local_f0 [13];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_fc = 0x29c1;
    local_f8 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_fc);
    local_f0[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_f8,(rbtree_iterator *)local_f0);
    if (bVar1) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      FirstRechargeExtraNetworkData::FirstRechargeExtraNetworkData
                ((FirstRechargeExtraNetworkData *)local_f0);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)local_f0);
      if (cVar2 != '\0') {
        FirstRechargeExtraNetworkData::operator=
                  ((FirstRechargeExtraNetworkData *)(this + 8),
                   (FirstRechargeExtraNetworkData *)local_f0);
      }
      FirstRechargeExtraNetworkData::~FirstRechargeExtraNetworkData
                ((FirstRechargeExtraNetworkData *)local_f0);
      ActiveItem::~ActiveItem(aAStack_88);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

