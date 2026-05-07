// Class: Action_ReturnGems


/* Action_ReturnGems::~Action_ReturnGems() */

void __thiscall Action_ReturnGems::~Action_ReturnGems(Action_ReturnGems *this)

{
  *(undefined ***)this = &PTR_GetClass_0685a1c0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* Action_ReturnGems::~Action_ReturnGems() */

void __thiscall Action_ReturnGems::~Action_ReturnGems(Action_ReturnGems *this)

{
  ~Action_ReturnGems(this);
  AK::FreeHook(this);
  return;
}


/* Action_ReturnGems::StaticGetClass() */

long * Action_ReturnGems::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Action_ReturnGems",uVar2,StaticNew);
  return sClass;
}


/* Action_ReturnGems::GetClass() const */

long * Action_ReturnGems::GetClass(void)

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
  (*pcVar3)(plVar1,"Action_ReturnGems",uVar2,StaticNew);
  return sClass;
}


/* Action_ReturnGems::Action_ReturnGems() */

void __thiscall Action_ReturnGems::Action_ReturnGems(Action_ReturnGems *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685a1c0;
  return;
}


/* Action_ReturnGems::StaticNew() */

Action_ReturnGems * Action_ReturnGems::StaticNew(void)

{
  Action_ReturnGems *this;
  
  this = ::operator_new(0x18);
  Action_ReturnGems(this);
  return this;
}


/* Action_ReturnGems::CreateIfNeed(bool&) */

Action_ReturnGems * Action_ReturnGems::CreateIfNeed(bool *param_1)

{
  char cVar1;
  ProfileMgr *this;
  long lVar2;
  Action_ReturnGems *this_00;
  
  if (*param_1 == false) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar2 = ProfileMgr::GetCurrentProfile(this);
    if (((lVar2 != 0) && (cVar1 = RiftUtils::IsWorldMapButtonsEnabled(), cVar1 != '\0')) &&
       (DAT_06b10240 == '\0')) {
      DAT_06b10240 = 1;
      this_00 = ::operator_new(0x18);
      this_00[8] = (Action_ReturnGems)0x0;
      this_00[9] = (Action_ReturnGems)0x0;
      this_00[10] = (Action_ReturnGems)0x0;
      *(undefined4 *)(this_00 + 0xc) = 0;
      *(undefined4 *)(this_00 + 0x10) = 0;
      *(undefined8 *)this_00 = 0;
      Action_ReturnGems(this_00);
      return this_00;
    }
  }
  return (Action_ReturnGems *)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_ReturnGems::Start() */

void __thiscall Action_ReturnGems::Start(Action_ReturnGems *this)

{
  undefined *puVar1;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  wchar_t local_78 [2];
  pair<wchar_t_const,wchar_t> apStack_70 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefreshActivityList);
  local_a0 = local_50;
  uStack_98 = uStack_48;
  local_90 = local_40;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<Action_ReturnGems,void(Action_ReturnGems::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x58);
  Sexy::Delegate0::Delegate0<Action_ReturnGems,void(Action_ReturnGems::*)()>(aDStack_38,avStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ShowRewardFinish,aDStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  local_78[1] = 1;
  local_78[0] = L'⧩';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_70,local_78,local_78 + 1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_68,
             (pair *)apStack_70);
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_68,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_ReturnGems::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
Action_ReturnGems::OnNotifyRefreshActivityList(Action_ReturnGems *this,bool param_1,set *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  int *piVar5;
  ulong uVar6;
  UILimitGroupShowReward *this_02;
  ulong uVar7;
  int local_ec;
  undefined8 local_e8 [2];
  int local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b8 [6];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_ec = 0x29e9;
  local_8 = ___stack_chk_guard;
  local_e8[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                          ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_ec);
  local_b8[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)param_2);
  bVar2 = eastl::operator!=((rbtree_iterator *)local_e8,(rbtree_iterator *)local_b8);
  if (bVar2) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar4);
    cVar3 = FUN_0454b298(local_80);
    if ((cVar3 != '\0') && (local_70 != '\0')) {
      S2C_GroupBuyReturnReward::S2C_GroupBuyReturnReward((S2C_GroupBuyReturnReward *)local_e8);
      ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)local_e8);
      ProfileChangeItemAmount(0xbc0,local_d4,false);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_b8);
      uVar7 = 0;
      while( true ) {
        uVar1 = local_d0;
        uVar6 = FUN_0454b2bc(local_d0,local_c8);
        if (uVar6 <= uVar7) break;
        piVar5 = (int *)FUN_0454b2c8(uVar1,uVar7);
        PlayerInfo::EraseGroupBuyRecord(this_01,*piVar5);
        uVar7 = uVar7 + 1;
      }
      this_02 = (UILimitGroupShowReward *)UISingletonDialog<UILimitGroupShowReward>::ShowDialog();
      UILimitGroupShowReward::LoadData(this_02,0xbc0,local_d4);
      S2C_GroupBuyReturnReward::~S2C_GroupBuyReturnReward((S2C_GroupBuyReturnReward *)local_e8);
      ActiveItem::~ActiveItem(aAStack_88);
      goto LAB_0456253c;
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  (**(code **)(*(long *)this + 0x58))(this);
LAB_0456253c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

