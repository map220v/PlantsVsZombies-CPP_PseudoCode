// Class: MonthlyCardSpecialManager


/* MonthlyCardSpecialManager::RequestNetwork() */

void MonthlyCardSpecialManager::RequestNetwork(void)

{
  ActivityManager *this;
  
  this = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this,0x2a3f,false,0);
  return;
}


/* MonthlyCardSpecialManager::MonthlyCardSpecialManager() */

void __thiscall
MonthlyCardSpecialManager::MonthlyCardSpecialManager(MonthlyCardSpecialManager *this)

{
  undefined *puVar1;
  float fVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<MonthlyCardSpecialManager>::LazySingleton
            ((LazySingleton<MonthlyCardSpecialManager> *)this);
  *(undefined ***)this = &PTR__MonthlyCardSpecialManager_069bfe90;
  MonthlyCardSpecialData::MonthlyCardSpecialData((MonthlyCardSpecialData *)(this + 8));
  fVar2 = (float)PVZ_EOT();
  *(long *)(this + 0x38) = (long)fVar2;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<MonthlyCardSpecialManager,void(MonthlyCardSpecialManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* MonthlyCardSpecialManager::~MonthlyCardSpecialManager() */

void __thiscall
MonthlyCardSpecialManager::~MonthlyCardSpecialManager(MonthlyCardSpecialManager *this)

{
  *(undefined ***)this = &PTR__MonthlyCardSpecialManager_069bfe90;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  MonthlyCardSpecialData::~MonthlyCardSpecialData((MonthlyCardSpecialData *)(this + 8));
  Sexy::LazySingleton<MonthlyCardSpecialManager>::~LazySingleton
            ((LazySingleton<MonthlyCardSpecialManager> *)this);
  return;
}


/* MonthlyCardSpecialManager::~MonthlyCardSpecialManager() */

void __thiscall
MonthlyCardSpecialManager::~MonthlyCardSpecialManager(MonthlyCardSpecialManager *this)

{
  ~MonthlyCardSpecialManager(this);
  AK::FreeHook(this);
  return;
}


/* MonthlyCardSpecialManager::LoadData(MonthlyCardSpecialData const&) */

void __thiscall
MonthlyCardSpecialManager::LoadData(MonthlyCardSpecialManager *this,MonthlyCardSpecialData *param_1)

{
  MonthlyCardSpecialData::operator=((MonthlyCardSpecialData *)(this + 8),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MonthlyCardSpecialManager::TestInitData() */

void __thiscall MonthlyCardSpecialManager::TestInitData(MonthlyCardSpecialManager *this)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  iVar1 = 4;
  local_8 = ___stack_chk_guard;
  Sexy::Ratio::Ratio((Ratio *)&local_10);
  local_10 = 1;
  local_c = 1;
  do {
    std::vector<MonthlyCardSpecialItemData,std::allocator<MonthlyCardSpecialItemData>>::push_back
              ((vector<MonthlyCardSpecialItemData,std::allocator<MonthlyCardSpecialItemData>> *)
               (this + 0x20),(MonthlyCardSpecialItemData *)&local_10);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MonthlyCardSpecialManager::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
MonthlyCardSpecialManager::OnNotifyRefreshActivityList
          (MonthlyCardSpecialManager *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_c4;
  undefined8 local_c0;
  undefined8 local_b8 [6];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_c4 = 0x2a3f;
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
      MonthlyCardSpecialData::MonthlyCardSpecialData((MonthlyCardSpecialData *)local_b8);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)local_b8);
      if (cVar2 != '\0') {
        MonthlyCardSpecialData::operator=
                  ((MonthlyCardSpecialData *)(this + 8),(MonthlyCardSpecialData *)local_b8);
      }
      MonthlyCardSpecialData::~MonthlyCardSpecialData((MonthlyCardSpecialData *)local_b8);
      ActiveItem::~ActiveItem(aAStack_88);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

