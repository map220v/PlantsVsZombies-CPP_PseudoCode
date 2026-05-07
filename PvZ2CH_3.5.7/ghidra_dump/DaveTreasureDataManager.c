// Class: DaveTreasureDataManager


/* DaveTreasureDataManager::~DaveTreasureDataManager() */

void __thiscall DaveTreasureDataManager::~DaveTreasureDataManager(DaveTreasureDataManager *this)

{
  *(undefined ***)this = &PTR__DaveTreasureDataManager_066f8f10;
  Sexy::LazySingleton<DaveTreasureDataManager>::~LazySingleton
            ((LazySingleton<DaveTreasureDataManager> *)this);
  return;
}


/* DaveTreasureDataManager::~DaveTreasureDataManager() */

void __thiscall DaveTreasureDataManager::~DaveTreasureDataManager(DaveTreasureDataManager *this)

{
  ~DaveTreasureDataManager(this);
  AK::FreeHook(this);
  return;
}


/* DaveTreasureDataManager::DaveTreasureDataManager() */

void __thiscall DaveTreasureDataManager::DaveTreasureDataManager(DaveTreasureDataManager *this)

{
  Sexy::LazySingleton<DaveTreasureDataManager>::LazySingleton
            ((LazySingleton<DaveTreasureDataManager> *)this);
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__DaveTreasureDataManager_066f8f10;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureDataManager::RefreshData() */

void DaveTreasureDataManager::RefreshData(void)

{
  NetworkMgr *this;
  INetworkMsgProcess *this_00;
  wchar_t local_30 [2];
  pair<wchar_t_const,wchar_t> apStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_30[1] = 1;
  local_30[0] = L'⧽';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,local_30 + 1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
             (pair *)apStack_28);
  local_30[1] = 1;
  local_30[0] = L'⨳';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,local_30 + 1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
             (pair *)apStack_28);
  this = (NetworkMgr *)NetworkMgr::Instance();
  this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this);
  INetworkMsgProcess::RequestActivityList(this_00,(vector *)avStack_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureDataManager::HasPrivilege() */

void DaveTreasureDataManager::HasPrivilege(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  ActiveItem aAStack_140 [8];
  undefined4 local_138;
  char local_128;
  DaveTreasureData aDStack_c0 [20];
  char local_ac;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_039f0224(local_138);
  cVar2 = '\0';
  if ((cVar1 != '\0') && (cVar2 = '\0', local_128 != '\0')) {
    DaveTreasureData::DaveTreasureData(aDStack_c0);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_140,(RtObject *)aDStack_c0);
    if ((cVar2 == '\0') || (local_ac == '\0')) {
      DaveTreasureData::~DaveTreasureData(aDStack_c0);
      cVar2 = '\0';
    }
    else {
      DaveTreasureData::~DaveTreasureData(aDStack_c0);
      cVar2 = local_ac;
    }
  }
  ActiveItem::~ActiveItem(aAStack_140);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureDataManager::HasAnyNotReceivedReward() */

void DaveTreasureDataManager::HasAnyNotReceivedReward(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  ActiveItem aAStack_140 [8];
  undefined4 local_138;
  char local_128;
  DaveTreasureData aDStack_c0 [20];
  char local_ac;
  int local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar2 = FUN_039f0224(local_138);
  bVar6 = false;
  if ((cVar2 == '\0') || (bVar6 = false, local_128 == '\0')) goto LAB_039f7484;
  DaveTreasureData::DaveTreasureData(aDStack_c0);
  cVar2 = ActiveItem::GetDataSerialized(aAStack_140,(RtObject *)aDStack_c0);
  if (cVar2 == '\0') goto LAB_039f7478;
  uVar4 = FUN_039f0270(local_a0,local_98);
  if (uVar4 < 6) {
LAB_039f74bc:
    bVar6 = false;
  }
  else {
    uVar4 = FUN_039f0270(local_88,local_80);
    iVar3 = local_a8;
    if (uVar4 < 6) goto LAB_039f74bc;
    lVar5 = FUN_039f02a0(local_a0,0);
    bVar1 = *(int *)(lVar5 + 8) == 0;
    bVar6 = bVar1 && 0x27 < iVar3;
    if (!bVar1 || 0x27 >= iVar3) {
      lVar5 = FUN_039f02a0(local_a0,1);
      bVar1 = *(int *)(lVar5 + 8) == 0;
      bVar6 = 0x4f < iVar3 && bVar1;
      if (0x4f >= iVar3 || !bVar1) {
        lVar5 = FUN_039f02a0(local_a0,2);
        bVar1 = *(int *)(lVar5 + 8) == 0;
        bVar6 = 0x77 < iVar3 && bVar1;
        if (0x77 >= iVar3 || !bVar1) {
          lVar5 = FUN_039f02a0(local_a0,3);
          bVar1 = *(int *)(lVar5 + 8) == 0;
          bVar6 = 0x9f < iVar3 && bVar1;
          if (0x9f >= iVar3 || !bVar1) {
            lVar5 = FUN_039f02a0(local_a0,4);
            bVar1 = *(int *)(lVar5 + 8) == 0;
            bVar6 = 199 < iVar3 && bVar1;
            if (199 >= iVar3 || !bVar1) {
              lVar5 = FUN_039f02a0(local_a0,5);
              bVar1 = *(int *)(lVar5 + 8) == 0;
              bVar6 = 0xf9 < iVar3 && bVar1;
              if (0xf9 >= iVar3 || !bVar1) {
                if (local_ac == '\0') {
LAB_039f7478:
                  bVar6 = false;
                  DaveTreasureData::~DaveTreasureData(aDStack_c0);
                  goto LAB_039f7484;
                }
                lVar5 = FUN_039f02a0(local_88,0);
                bVar1 = *(int *)(lVar5 + 8) == 0;
                bVar6 = bVar1 && 0x27 < local_a8;
                if (!bVar1 || 0x27 >= local_a8) {
                  lVar5 = FUN_039f02a0(local_88,1);
                  bVar1 = *(int *)(lVar5 + 8) == 0;
                  bVar6 = 0x4f < local_a8 && bVar1;
                  if (0x4f >= local_a8 || !bVar1) {
                    lVar5 = FUN_039f02a0(local_88,2);
                    bVar1 = *(int *)(lVar5 + 8) == 0;
                    bVar6 = 0x77 < local_a8 && bVar1;
                    if (0x77 >= local_a8 || !bVar1) {
                      lVar5 = FUN_039f02a0(local_88,3);
                      bVar1 = *(int *)(lVar5 + 8) == 0;
                      bVar6 = 0x9f < local_a8 && bVar1;
                      if (0x9f >= local_a8 || !bVar1) {
                        lVar5 = FUN_039f02a0(local_88,4);
                        bVar1 = *(int *)(lVar5 + 8) == 0;
                        bVar6 = 199 < local_a8 && bVar1;
                        if (199 >= local_a8 || !bVar1) {
                          lVar5 = FUN_039f02a0(local_88,5);
                          bVar1 = *(int *)(lVar5 + 8) == 0;
                          bVar6 = 0xf9 < local_a8 && bVar1;
                          if (0xf9 >= local_a8 || !bVar1) goto LAB_039f7478;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  DaveTreasureData::~DaveTreasureData(aDStack_c0);
LAB_039f7484:
  ActiveItem::~ActiveItem(aAStack_140);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureDataManager::HasPennyPrivilege() */

void DaveTreasureDataManager::HasPennyPrivilege(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  ActiveItem aAStack_140 [8];
  undefined4 local_138;
  char local_128;
  DaveTreasureData aDStack_c0 [20];
  char local_ac;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_039f0224(local_138);
  cVar2 = '\0';
  if ((cVar1 != '\0') && (cVar2 = '\0', local_128 != '\0')) {
    DaveTreasureData::DaveTreasureData(aDStack_c0);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_140,(RtObject *)aDStack_c0);
    if ((cVar2 == '\0') || (local_ac == '\0')) {
      DaveTreasureData::~DaveTreasureData(aDStack_c0);
      cVar2 = '\0';
    }
    else {
      DaveTreasureData::~DaveTreasureData(aDStack_c0);
      cVar2 = local_ac;
    }
  }
  ActiveItem::~ActiveItem(aAStack_140);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureDataManager::GetRewardInfo(bool, int) */

void __thiscall
DaveTreasureDataManager::GetRewardInfo(DaveTreasureDataManager *this,bool param_1,int param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 local_150;
  undefined4 local_148;
  ActiveItem aAStack_140 [8];
  undefined4 local_138;
  char local_128;
  DaveTreasureData aDStack_c0 [32];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_039f0224(local_138);
  if ((cVar1 != '\0') && (local_128 != '\0')) {
    DaveTreasureData::DaveTreasureData(aDStack_c0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_140,(RtObject *)aDStack_c0);
    if (cVar1 != '\0') {
      if (param_1) {
        uVar3 = FUN_039f0270(local_a0,local_98);
        local_88 = local_a0;
        if (uVar3 <= (ulong)(long)param_2) goto LAB_039f7f70;
      }
      else {
        uVar3 = FUN_039f0270(local_88,local_80);
        if (uVar3 <= (ulong)(long)param_2) goto LAB_039f7f70;
      }
      puVar4 = (undefined8 *)FUN_039f02a0(local_88);
      local_150 = *puVar4;
      local_148 = *(undefined4 *)(puVar4 + 1);
      DaveTreasureData::~DaveTreasureData(aDStack_c0);
      goto LAB_039f7ea4;
    }
LAB_039f7f70:
    DaveTreasureData::~DaveTreasureData(aDStack_c0);
  }
  local_150 = 0;
  local_148 = 0;
LAB_039f7ea4:
  ActiveItem::~ActiveItem(aAStack_140);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_150,local_148);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureDataManager::GetPennyRewardInfo(bool, int) */

void __thiscall
DaveTreasureDataManager::GetPennyRewardInfo(DaveTreasureDataManager *this,bool param_1,int param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 local_150;
  undefined4 local_148;
  ActiveItem aAStack_140 [8];
  undefined4 local_138;
  char local_128;
  DaveTreasureData aDStack_c0 [32];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_039f0224(local_138);
  if ((cVar1 != '\0') && (local_128 != '\0')) {
    DaveTreasureData::DaveTreasureData(aDStack_c0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_140,(RtObject *)aDStack_c0);
    if (cVar1 != '\0') {
      if (param_1) {
        uVar3 = FUN_039f0270(local_a0,local_98);
        local_88 = local_a0;
        if (uVar3 <= (ulong)(long)param_2) goto LAB_039f80b4;
      }
      else {
        uVar3 = FUN_039f0270(local_88,local_80);
        if (uVar3 <= (ulong)(long)param_2) goto LAB_039f80b4;
      }
      puVar4 = (undefined8 *)FUN_039f02a0(local_88);
      local_150 = *puVar4;
      local_148 = *(undefined4 *)(puVar4 + 1);
      DaveTreasureData::~DaveTreasureData(aDStack_c0);
      goto LAB_039f7fe8;
    }
LAB_039f80b4:
    DaveTreasureData::~DaveTreasureData(aDStack_c0);
  }
  local_150 = 0;
  local_148 = 0;
LAB_039f7fe8:
  ActiveItem::~ActiveItem(aAStack_140);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_150,local_148);
}


/* DaveTreasureDataManager::ShowBonus(std::vector<LotteryBonus, std::allocator<LotteryBonus> >
   const&, std::vector<LotteryBonus, std::allocator<LotteryBonus> > const&) */

void __thiscall
DaveTreasureDataManager::ShowBonus(DaveTreasureDataManager *this,vector *param_1,vector *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  DaveTreasureBonusUI *this_00;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    this_00 = ::operator_new(0x220);
    DaveTreasureBonusUI::DaveTreasureBonusUI(this_00);
    *(DaveTreasureBonusUI **)(this + 8) = this_00;
    DaveTreasureBonusUI::SetAward(this_00,param_1);
    CommonBonusUI::SetChestAward(*(CommonBonusUI **)(this + 8),param_2);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 8));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 8));
  }
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 8));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 8));
  lVar3 = *(long *)(this + 8);
  if (lVar3 != 0) {
    uVar2 = operator|(0x10,0x20);
    uVar2 = operator|(uVar2,0x1000);
    uVar1 = operator|(uVar2,0x2000);
    PopingWidget::NormalInit((PopingWidget *)0x3e99999a,lVar3,uVar1);
    (**(code **)(**(long **)(this + 8) + 0x310))(*(long **)(this + 8));
  }
  return;
}

