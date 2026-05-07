// Class: Action_TravelLogTasks


/* Action_TravelLogTasks::~Action_TravelLogTasks() */

void __thiscall Action_TravelLogTasks::~Action_TravelLogTasks(Action_TravelLogTasks *this)

{
  *(undefined ***)this = &PTR_GetClass_0685a640;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* Action_TravelLogTasks::~Action_TravelLogTasks() */

void __thiscall Action_TravelLogTasks::~Action_TravelLogTasks(Action_TravelLogTasks *this)

{
  ~Action_TravelLogTasks(this);
  AK::FreeHook(this);
  return;
}


/* Action_TravelLogTasks::StaticGetClass() */

long * Action_TravelLogTasks::StaticGetClass(void)

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
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"Action_TravelLogTasks",uVar2,StaticNew);
  return sClass;
}


/* Action_TravelLogTasks::GetClass() const */

long * Action_TravelLogTasks::GetClass(void)

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
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"Action_TravelLogTasks",uVar2,StaticNew);
  return sClass;
}


/* Action_TravelLogTasks::Action_TravelLogTasks() */

void __thiscall Action_TravelLogTasks::Action_TravelLogTasks(Action_TravelLogTasks *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685a640;
  return;
}


/* Action_TravelLogTasks::StaticNew() */

Action_TravelLogTasks * Action_TravelLogTasks::StaticNew(void)

{
  Action_TravelLogTasks *this;
  
  this = ::operator_new(0x18);
  Action_TravelLogTasks(this);
  return this;
}


/* Action_TravelLogTasks::CreateIfNeed(bool&) */

Action_TravelLogTasks * Action_TravelLogTasks::CreateIfNeed(bool *param_1)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  Action_TravelLogTasks *this_00;
  
  if (*param_1 == false) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    if (((pPVar2 != (PlayerInfo *)0x0) &&
        (cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar2,0x1a), cVar1 != '\0')) &&
       (cVar1 = RiftUtils::IsWorldMapButtonsEnabled(), cVar1 != '\0')) {
      this_00 = ::operator_new(0x18);
      this_00[8] = (Action_TravelLogTasks)0x0;
      this_00[9] = (Action_TravelLogTasks)0x0;
      this_00[10] = (Action_TravelLogTasks)0x0;
      *(undefined4 *)(this_00 + 0xc) = 0;
      *(undefined4 *)(this_00 + 0x10) = 0;
      *(undefined8 *)this_00 = 0;
      Action_TravelLogTasks(this_00);
      return this_00;
    }
  }
  return (Action_TravelLogTasks *)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_TravelLogTasks::Start() */

void __thiscall Action_TravelLogTasks::Start(Action_TravelLogTasks *this)

{
  wchar_t *pwVar1;
  undefined *puVar2;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  wchar_t local_48 [2];
  pair<wchar_t_const,wchar_t> apStack_40 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  puVar2 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefreshActivityList);
  pwVar1 = local_48 + 1;
  local_70 = local_20;
  uStack_68 = uStack_18;
  local_60 = local_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<Action_TravelLogTasks,void(Action_TravelLogTasks::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar2,Message::NotifyRefreshActivityList,&local_70);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  local_48[1] = 1;
  local_48[0] = L'⧸';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_40,local_48,pwVar1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_38,
             (pair *)apStack_40);
  local_48[1] = 1;
  local_48[0] = L'⩏';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_40,local_48,pwVar1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_38,
             (pair *)apStack_40);
  local_48[1] = 1;
  local_48[0] = L'⩙';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_40,local_48,pwVar1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_38,
             (pair *)apStack_40);
  local_48[1] = 1;
  local_48[0] = L'⩜';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_40,local_48,pwVar1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_38,
             (pair *)apStack_40);
  local_48[1] = 1;
  local_48[0] = L'⩣';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_40,local_48,pwVar1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_38,
             (pair *)apStack_40);
  local_48[1] = 1;
  local_48[0] = L'⩭';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_40,local_48,pwVar1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_38,
             (pair *)apStack_40);
  local_48[1] = 1;
  local_48[0] = L'⩯';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_40,local_48,pwVar1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_38,
             (pair *)apStack_40);
  local_48[1] = 1;
  local_48[0] = L'⩡';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_40,local_48,pwVar1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_38,
             (pair *)apStack_40);
  local_48[1] = 1;
  local_48[0] = L'⩶';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_40,local_48,pwVar1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_38,
             (pair *)apStack_40);
  local_48[1] = 1;
  local_48[0] = L'⩾';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_40,local_48,pwVar1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_38,
             (pair *)apStack_40);
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_38,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_TravelLogTasks::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
Action_TravelLogTasks::OnNotifyRefreshActivityList
          (Action_TravelLogTasks *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  TravelLogManager *pTVar5;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_9c = 0x29f8;
  local_8 = ___stack_chk_guard;
  local_98 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_9c);
  local_90 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    cVar2 = FUN_0454b298(local_80);
    if (((cVar2 != '\0') && (local_70 != '\0')) &&
       (lVar4 = UISingletonDialog<UITravelLog>::GetSingletonPtr(), lVar4 == 0)) {
      pTVar5 = (TravelLogManager *)Sexy::LazySingleton<TravelLogManager>::GetInstancePtr();
      TravelLogManager::Init(pTVar5);
      pTVar5 = (TravelLogManager *)Sexy::LazySingleton<TravelLogManager>::GetInstancePtr();
      TravelLogManager::InitializeAllTasks(pTVar5);
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  local_9c = 0x2a4f;
  local_98 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_9c);
  local_90 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    cVar2 = FUN_0454b298(local_80);
    if (((cVar2 != '\0') && (local_70 != '\0')) &&
       (lVar4 = UISingletonDialog<UICallofWish>::GetSingletonPtr(), lVar4 == 0)) {
      lVar4 = Sexy::LazySingleton<CallofWishTaskManager>::GetInstancePtr();
      GeneralTaskManager::Initialize((GeneralTaskManager *)(lVar4 + 8));
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  local_9c = 0x2a59;
  local_98 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_9c);
  local_90 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    cVar2 = FUN_0454b298(local_80);
    if (((cVar2 != '\0') && (local_70 != '\0')) &&
       (lVar4 = UISingletonDialog<UIFestivalGoldenEgg>::GetSingletonPtr(), lVar4 == 0)) {
      lVar4 = Sexy::LazySingleton<GoldenEggTaskManager>::GetInstancePtr();
      GeneralTaskManager::Initialize((GeneralTaskManager *)(lVar4 + 8));
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  local_9c = 0x2a5c;
  local_98 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_9c);
  local_90 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    cVar2 = FUN_0454b298(local_80);
    if (((cVar2 != '\0') && (local_70 != '\0')) &&
       (lVar4 = UISingletonDialog<UIArborDay>::GetSingletonPtr(), lVar4 == 0)) {
      lVar4 = Sexy::LazySingleton<ArborDayTaskManager>::GetInstancePtr();
      GeneralTaskManager::Initialize((GeneralTaskManager *)(lVar4 + 8));
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  local_9c = 0x2a63;
  local_98 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_9c);
  local_90 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    cVar2 = FUN_0454b298(local_80);
    if (((cVar2 != '\0') && (local_70 != '\0')) &&
       (lVar4 = UISingletonDialog<UIBattleOrder>::GetSingletonPtr(), lVar4 == 0)) {
      lVar4 = Sexy::LazySingleton<BattleOrderTaskManager>::GetInstancePtr();
      GeneralTaskManager::Initialize((GeneralTaskManager *)(lVar4 + 8));
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  local_9c = 0x2a6d;
  local_98 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_9c);
  local_90 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    cVar2 = FUN_0454b298(local_80);
    if ((cVar2 != '\0') && (local_70 != '\0')) {
      lVar4 = Sexy::LazySingleton<NewPVPTaskManager>::GetInstancePtr();
      GeneralTaskManager::Initialize((GeneralTaskManager *)(lVar4 + 8));
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  local_9c = 0x2a6f;
  local_98 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_9c);
  local_90 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    cVar2 = FUN_0454b298(local_80);
    if (((cVar2 != '\0') && (local_70 != '\0')) &&
       (lVar4 = UISingletonDialog<UICornucopia>::GetSingletonPtr(), lVar4 == 0)) {
      lVar4 = Sexy::LazySingleton<CornucopiaGradeTaskManager>::GetInstancePtr();
      GeneralTaskManager::Initialize((GeneralTaskManager *)(lVar4 + 8));
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  local_9c = 0x2a76;
  local_98 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_9c);
  local_90 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    cVar2 = FUN_0454b298(local_80);
    if (((cVar2 != '\0') && (local_70 != '\0')) &&
       (lVar4 = UISingletonDialog<UIGiftFoReturn>::GetSingletonPtr(), lVar4 == 0)) {
      lVar4 = Sexy::LazySingleton<GiftFoReturnTaskManager>::GetInstancePtr();
      GeneralTaskManager::Initialize((GeneralTaskManager *)(lVar4 + 8));
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  local_9c = 0x2a7e;
  local_98 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_9c);
  local_90 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    cVar2 = FUN_0454b298(local_80);
    if (((cVar2 != '\0') && (local_70 != '\0')) &&
       (lVar4 = UISingletonDialog<UIDaveKitchen>::GetSingletonPtr(), lVar4 == 0)) {
      lVar4 = Sexy::LazySingleton<DaveKitchenTaskManager>::GetInstancePtr();
      GeneralTaskManager::Initialize((GeneralTaskManager *)(lVar4 + 8));
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  (**(code **)(*(long *)this + 0x58))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

