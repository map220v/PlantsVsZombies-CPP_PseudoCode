// Class: PlantCultivateManager


/* PlantCultivateManager::HasSelected() */

undefined8 __thiscall PlantCultivateManager::HasSelected(PlantCultivateManager *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x20);
  lVar1 = FUN_0347f8d4(uVar4,*(undefined8 *)(this + 0x28));
  lVar3 = 0;
  do {
    if (lVar3 == lVar1) {
      return 0;
    }
    lVar2 = FUN_0347f8fc(uVar4,lVar3);
    lVar3 = lVar3 + 1;
  } while (*(int *)(lVar2 + 4) != 1);
  return 1;
}


/* PlantCultivateManager::HasObtained() */

bool __thiscall PlantCultivateManager::HasObtained(PlantCultivateManager *this)

{
  return *(int *)(this + 0x40) != 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCultivateManager::GetOutTime() */

void __thiscall PlantCultivateManager::GetOutTime(PlantCultivateManager *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  tm local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = StringHelper::ToInt((string *)(this + 0x60));
  local_40.tm_wday = 0;
  local_40.tm_yday = 0;
  local_40.tm_hour = 0x17;
  local_40.tm_min = 0x3b;
  local_40.tm_sec = 0x3b;
  local_40.tm_mday = iVar1 % 100;
  local_40.tm_zone = (char *)0x0;
  local_40.tm_year = iVar1 / 10000 + -0x76c;
  local_40.tm_mon = (iVar1 % 10000) / 100 + -1;
  local_40.tm_isdst = 0;
  local_40._36_4_ = 0;
  local_40.tm_gmtoff = 0;
  lVar2 = Sexy::GetTimegm(&local_40);
  lVar3 = Sexy::GetBJTimeOffset();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2 - lVar3);
}


/* PlantCultivateManager::IsOutTime() */

bool __thiscall PlantCultivateManager::IsOutTime(PlantCultivateManager *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = LawnApp::GetRealServerTime(gLawnApp);
  lVar2 = GetOutTime(this);
  return lVar2 < lVar1;
}


/* PlantCultivateManager::GetSelectPlantID() */

undefined4 __thiscall PlantCultivateManager::GetSelectPlantID(PlantCultivateManager *this)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x20);
  lVar1 = FUN_0347f8d4(uVar4,*(undefined8 *)(this + 0x28));
  lVar3 = 0;
  do {
    if (lVar3 == lVar1) {
      return 0;
    }
    puVar2 = (undefined4 *)FUN_0347f8fc(uVar4,lVar3);
    lVar3 = lVar3 + 1;
  } while (puVar2[1] != 1);
  return *puVar2;
}


/* PlantCultivateManager::AddTaskIntegral(int) */

void __thiscall PlantCultivateManager::AddTaskIntegral(PlantCultivateManager *this,int param_1)

{
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + param_1;
  return;
}


/* PlantCultivateManager::PlantCultivateManager() */

void __thiscall PlantCultivateManager::PlantCultivateManager(PlantCultivateManager *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<PlantCultivateManager>::LazySingleton
            ((LazySingleton<PlantCultivateManager> *)this);
  *(undefined ***)this = &PTR__PlantCultivateManager_0663fc80;
  PlantCultivateData::PlantCultivateData((PlantCultivateData *)(this + 8));
  this[0x88] = (PlantCultivateManager)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<PlantCultivateManager,void(PlantCultivateManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* PlantCultivateManager::~PlantCultivateManager() */

void __thiscall PlantCultivateManager::~PlantCultivateManager(PlantCultivateManager *this)

{
  *(undefined ***)this = &PTR__PlantCultivateManager_0663fc80;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  PlantCultivateData::~PlantCultivateData((PlantCultivateData *)(this + 8));
  Sexy::LazySingleton<PlantCultivateManager>::~LazySingleton
            ((LazySingleton<PlantCultivateManager> *)this);
  return;
}


/* PlantCultivateManager::~PlantCultivateManager() */

void __thiscall PlantCultivateManager::~PlantCultivateManager(PlantCultivateManager *this)

{
  ~PlantCultivateManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCultivateManager::ShowDialog() */

void __thiscall PlantCultivateManager::ShowDialog(PlantCultivateManager *this)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  wchar_t local_30 [2];
  pair<wchar_t_const,wchar_t> apStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_30[1] = 1;
  local_30[0] = L'⩷';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,local_30 + 1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
             (pair *)apStack_28);
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_20,0,true);
  this[0x88] = (PlantCultivateManager)0x1;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCultivateManager::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
PlantCultivateManager::onNotifyRefreshActivityList
          (PlantCultivateManager *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_98;
  undefined8 local_90;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    uVar4 = std::set<int,std::less<int>,std::allocator<int>>::begin
                      ((set<int,std::less<int>,std::allocator<int>> *)param_2);
    uVar5 = std::
            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
            end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)param_2);
    local_98 = std::find<std::_Rb_tree_const_iterator<int>,int>(uVar4,uVar5);
    local_90 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
    if (bVar1) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_0347f5f8(local_80);
      if ((cVar2 != '\0') && (local_70 != '\0')) {
        ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 8));
        lVar6 = Sexy::LazySingleton<PlantCultivateTaskManager>::GetInstancePtr();
        GeneralTaskManager::Initialize((GeneralTaskManager *)(lVar6 + 8));
        if (this[0x88] != (PlantCultivateManager)0x0) {
          cVar2 = HasSelected(this);
          if (cVar2 == '\0') {
            UISingletonDialog<UIPlantCultivateSelect>::ShowDialog();
          }
          else {
            UISingletonDialog<UIPlantCultivate>::ShowDialog();
          }
        }
      }
      this[0x88] = (PlantCultivateManager)0x0;
      ActiveItem::~ActiveItem(aAStack_88);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

