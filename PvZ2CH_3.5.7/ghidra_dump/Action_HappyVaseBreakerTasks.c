// Class: Action_HappyVaseBreakerTasks


/* Action_HappyVaseBreakerTasks::~Action_HappyVaseBreakerTasks() */

void __thiscall
Action_HappyVaseBreakerTasks::~Action_HappyVaseBreakerTasks(Action_HappyVaseBreakerTasks *this)

{
  *(undefined ***)this = &PTR_GetClass_0685a740;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* Action_HappyVaseBreakerTasks::~Action_HappyVaseBreakerTasks() */

void __thiscall
Action_HappyVaseBreakerTasks::~Action_HappyVaseBreakerTasks(Action_HappyVaseBreakerTasks *this)

{
  ~Action_HappyVaseBreakerTasks(this);
  AK::FreeHook(this);
  return;
}


/* Action_HappyVaseBreakerTasks::StaticGetClass() */

long * Action_HappyVaseBreakerTasks::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Action_HappyVaseBreakerTasks",uVar2,StaticNew);
  return sClass;
}


/* Action_HappyVaseBreakerTasks::GetClass() const */

long * Action_HappyVaseBreakerTasks::GetClass(void)

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
  (*pcVar3)(plVar1,"Action_HappyVaseBreakerTasks",uVar2,StaticNew);
  return sClass;
}


/* Action_HappyVaseBreakerTasks::Action_HappyVaseBreakerTasks() */

void __thiscall
Action_HappyVaseBreakerTasks::Action_HappyVaseBreakerTasks(Action_HappyVaseBreakerTasks *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685a740;
  return;
}


/* Action_HappyVaseBreakerTasks::StaticNew() */

Action_HappyVaseBreakerTasks * Action_HappyVaseBreakerTasks::StaticNew(void)

{
  Action_HappyVaseBreakerTasks *this;
  
  this = ::operator_new(0x18);
  Action_HappyVaseBreakerTasks(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_HappyVaseBreakerTasks::Start() */

void __thiscall Action_HappyVaseBreakerTasks::Start(Action_HappyVaseBreakerTasks *this)

{
  undefined *puVar1;
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
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefreshActivityList);
  local_70 = local_20;
  uStack_68 = uStack_18;
  local_60 = local_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<Action_HappyVaseBreakerTasks,void(Action_HappyVaseBreakerTasks::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_70);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  local_48[1] = 1;
  local_48[0] = L'⨦';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_40,local_48,local_48 + 1);
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
/* Action_HappyVaseBreakerTasks::CreateIfNeed(bool&) */

void Action_HappyVaseBreakerTasks::CreateIfNeed(bool *param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *pPVar3;
  long lVar4;
  PlayerInfo *pPVar5;
  Action_HappyVaseBreakerTasks *this;
  string asStack_90 [8];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((DAT_06b10548 == '\0') && (*param_1 == false)) {
    pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar4 = ProfileMgr::GetCurrentProfile(pPVar3);
    if ((lVar4 != 0) && (cVar1 = RiftUtils::IsWorldMapButtonsEnabled(), cVar1 != '\0')) {
      std::string::string(asStack_90,"egypt4");
      pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
      cVar1 = ProfileUtils::HasCompletedLevel(asStack_90,false,pPVar5);
      std::string::~string(asStack_90);
      nop();
      if (cVar1 != '\0') {
        iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar2);
        if (local_70 != '\0') {
          cVar1 = LawnApp::IsNetworkModuleOK();
          if (cVar1 != '\0') {
            ActiveItem::~ActiveItem(aAStack_88);
            if (DAT_06b10548 == '\0') {
              DAT_06b10548 = '\x01';
            }
            this = ::operator_new(0x18);
            *(undefined8 *)this = 0;
            this[8] = (Action_HappyVaseBreakerTasks)0x0;
            this[9] = (Action_HappyVaseBreakerTasks)0x0;
            this[10] = (Action_HappyVaseBreakerTasks)0x0;
            *(undefined4 *)(this + 0xc) = 0;
            *(undefined4 *)(this + 0x10) = 0;
            Action_HappyVaseBreakerTasks(this);
            goto LAB_04560330;
          }
        }
        ActiveItem::~ActiveItem(aAStack_88);
      }
    }
  }
  this = (Action_HappyVaseBreakerTasks *)0x0;
LAB_04560330:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_HappyVaseBreakerTasks::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
Action_HappyVaseBreakerTasks::OnNotifyRefreshActivityList
          (Action_HappyVaseBreakerTasks *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  HappyVaseBreakerTaskManager *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_9c = 0x2a26;
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
      this_00 = (HappyVaseBreakerTaskManager *)
                Sexy::LazySingleton<HappyVaseBreakerTaskManager>::GetInstancePtr();
      HappyVaseBreakerTaskManager::Initialize(this_00);
      this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
      if (this_02 != (PlayerInfo *)0x0) {
        std::string::string((string *)&local_90,"BattleOrderIntroduction");
        cVar2 = PlayerInfo::IsFirstPopToday(this_02,(string *)&local_90);
        std::string::~string((string *)&local_90);
        nop();
        if (cVar2 != '\0') {
          UISingletonDialog<UIHappyVaseBreaker>::ShowDialog();
        }
      }
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

