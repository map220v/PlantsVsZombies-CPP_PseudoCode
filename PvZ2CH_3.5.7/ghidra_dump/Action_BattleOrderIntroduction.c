// Class: Action_BattleOrderIntroduction


/* Action_BattleOrderIntroduction::~Action_BattleOrderIntroduction() */

void __thiscall
Action_BattleOrderIntroduction::~Action_BattleOrderIntroduction
          (Action_BattleOrderIntroduction *this)

{
  *(undefined ***)this = &PTR_GetClass_0685a3c0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* Action_BattleOrderIntroduction::~Action_BattleOrderIntroduction() */

void __thiscall
Action_BattleOrderIntroduction::~Action_BattleOrderIntroduction
          (Action_BattleOrderIntroduction *this)

{
  ~Action_BattleOrderIntroduction(this);
  AK::FreeHook(this);
  return;
}


/* Action_BattleOrderIntroduction::StaticGetClass() */

long * Action_BattleOrderIntroduction::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Action_BattleOrderIntroduction",uVar2,StaticNew);
  return sClass;
}


/* Action_BattleOrderIntroduction::GetClass() const */

long * Action_BattleOrderIntroduction::GetClass(void)

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
  (*pcVar3)(plVar1,"Action_BattleOrderIntroduction",uVar2,StaticNew);
  return sClass;
}


/* Action_BattleOrderIntroduction::Action_BattleOrderIntroduction() */

void __thiscall
Action_BattleOrderIntroduction::Action_BattleOrderIntroduction(Action_BattleOrderIntroduction *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685a3c0;
  return;
}


/* Action_BattleOrderIntroduction::StaticNew() */

Action_BattleOrderIntroduction * Action_BattleOrderIntroduction::StaticNew(void)

{
  Action_BattleOrderIntroduction *this;
  
  this = ::operator_new(0x18);
  Action_BattleOrderIntroduction(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_BattleOrderIntroduction::Start() */

void __thiscall Action_BattleOrderIntroduction::Start(Action_BattleOrderIntroduction *this)

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
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<Action_BattleOrderIntroduction,void(Action_BattleOrderIntroduction::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_70);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  local_48[1] = 1;
  local_48[0] = L'⩣';
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
/* Action_BattleOrderIntroduction::CreateIfNeed(bool&) */

void Action_BattleOrderIntroduction::CreateIfNeed(bool *param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *pPVar3;
  PlayerInfo *this;
  PlayerInfo *pPVar4;
  Action_BattleOrderIntroduction *this_00;
  string asStack_90 [8];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((DAT_06b10710 == '\0') && (*param_1 == false)) {
    pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
    if ((this != (PlayerInfo *)0x0) &&
       (cVar1 = RiftUtils::IsWorldMapButtonsEnabled(), cVar1 != '\0')) {
      std::string::string(asStack_90,"egypt4");
      pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
      cVar1 = ProfileUtils::HasCompletedLevel(asStack_90,false,pPVar4);
      std::string::~string(asStack_90);
      nop();
      if (cVar1 != '\0') {
        iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar2);
        if (local_70 != '\0') {
          cVar1 = LawnApp::IsNetworkModuleOK();
          if (cVar1 != '\0') {
            ActiveItem::~ActiveItem(aAStack_88);
            if (DAT_06b10710 == '\0') {
              DAT_06b10710 = '\x01';
            }
            std::string::string(asStack_90,"BattleOrderIntroduction");
            cVar1 = PlayerInfo::IsFirstPopToday(this,asStack_90);
            std::string::~string(asStack_90);
            nop();
            if (cVar1 != '\0') {
              this_00 = ::operator_new(0x18);
              *(undefined8 *)this_00 = 0;
              this_00[8] = (Action_BattleOrderIntroduction)0x0;
              this_00[9] = (Action_BattleOrderIntroduction)0x0;
              this_00[10] = (Action_BattleOrderIntroduction)0x0;
              *(undefined4 *)(this_00 + 0xc) = 0;
              *(undefined4 *)(this_00 + 0x10) = 0;
              Action_BattleOrderIntroduction(this_00);
              goto LAB_045601a8;
            }
            goto LAB_045601a4;
          }
        }
        ActiveItem::~ActiveItem(aAStack_88);
      }
    }
  }
LAB_045601a4:
  this_00 = (Action_BattleOrderIntroduction *)0x0;
LAB_045601a8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_BattleOrderIntroduction::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
Action_BattleOrderIntroduction::OnNotifyRefreshActivityList
          (Action_BattleOrderIntroduction *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_9c = 0x2a63;
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
    if ((cVar2 != '\0') && (local_70 != '\0')) {
      UISingletonDialog<UIBattleOrderIntroduction>::ShowDialog();
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

