// Class: Action_LimitedSummonReward


/* Action_LimitedSummonReward::~Action_LimitedSummonReward() */

void __thiscall
Action_LimitedSummonReward::~Action_LimitedSummonReward(Action_LimitedSummonReward *this)

{
  *(undefined ***)this = &PTR_GetClass_0685a2c0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* Action_LimitedSummonReward::~Action_LimitedSummonReward() */

void __thiscall
Action_LimitedSummonReward::~Action_LimitedSummonReward(Action_LimitedSummonReward *this)

{
  ~Action_LimitedSummonReward(this);
  AK::FreeHook(this);
  return;
}


/* Action_LimitedSummonReward::StaticGetClass() */

long * Action_LimitedSummonReward::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Action_LimitedSummonReward",uVar2,StaticNew);
  return sClass;
}


/* Action_LimitedSummonReward::GetClass() const */

long * Action_LimitedSummonReward::GetClass(void)

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
  (*pcVar3)(plVar1,"Action_LimitedSummonReward",uVar2,StaticNew);
  return sClass;
}


/* Action_LimitedSummonReward::Action_LimitedSummonReward() */

void __thiscall
Action_LimitedSummonReward::Action_LimitedSummonReward(Action_LimitedSummonReward *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685a2c0;
  return;
}


/* Action_LimitedSummonReward::StaticNew() */

Action_LimitedSummonReward * Action_LimitedSummonReward::StaticNew(void)

{
  Action_LimitedSummonReward *this;
  
  this = ::operator_new(0x18);
  Action_LimitedSummonReward(this);
  return this;
}


/* Action_LimitedSummonReward::CreateIfNeed(bool&) */

Action_LimitedSummonReward * Action_LimitedSummonReward::CreateIfNeed(bool *param_1)

{
  char cVar1;
  ProfileMgr *this;
  long lVar2;
  Action_LimitedSummonReward *this_00;
  
  if (*param_1 == false) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar2 = ProfileMgr::GetCurrentProfile(this);
    if (((lVar2 != 0) && (cVar1 = RiftUtils::IsWorldMapButtonsEnabled(), cVar1 != '\0')) &&
       (DAT_06b103f8 == '\0')) {
      DAT_06b103f8 = 1;
      this_00 = ::operator_new(0x18);
      this_00[8] = (Action_LimitedSummonReward)0x0;
      this_00[9] = (Action_LimitedSummonReward)0x0;
      this_00[10] = (Action_LimitedSummonReward)0x0;
      *(undefined4 *)(this_00 + 0xc) = 0;
      *(undefined4 *)(this_00 + 0x10) = 0;
      *(undefined8 *)this_00 = 0;
      Action_LimitedSummonReward(this_00);
      return this_00;
    }
  }
  return (Action_LimitedSummonReward *)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_LimitedSummonReward::Start() */

void __thiscall Action_LimitedSummonReward::Start(Action_LimitedSummonReward *this)

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
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<Action_LimitedSummonReward,void(Action_LimitedSummonReward::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x58);
  Sexy::Delegate0::Delegate0<Action_LimitedSummonReward,void(Action_LimitedSummonReward::*)()>
            (aDStack_38,avStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ShowRewardFinish,aDStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  local_78[1] = 1;
  local_78[0] = L'⩧';
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
/* Action_LimitedSummonReward::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
Action_LimitedSummonReward::OnNotifyRefreshActivityList
          (Action_LimitedSummonReward *this,bool param_1,set *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ProfileMgr *this_00;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  UIRedPacketResult *this_01;
  ulong uVar8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_130 [24];
  undefined4 local_118 [6];
  undefined8 local_100 [6];
  undefined8 local_d0 [3];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_118[0] = 0x2a67;
  local_100[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                           ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)local_118)
  ;
  local_d0[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)param_2);
  bVar2 = eastl::operator!=((rbtree_iterator *)local_100,(rbtree_iterator *)local_d0);
  if (bVar2) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(this_00);
    iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar4);
    cVar3 = FUN_0454b298(local_80);
    if ((cVar3 != '\0') && (local_70 != '\0')) {
      LimitedSummonRewardData::LimitedSummonRewardData((LimitedSummonRewardData *)local_d0);
      ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)local_d0);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_130);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_118);
      uVar8 = 0;
      while( true ) {
        uVar1 = local_b8;
        uVar5 = FUN_0454b2ec(local_b8,local_b0);
        if (uVar5 <= uVar8) break;
        piVar6 = (int *)FUN_0454b300(uVar1,uVar8);
        ProfileChangeItemAmount(*piVar6,piVar6[1],false);
        GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_100);
        piVar6 = (int *)FUN_0454b300(local_b8,uVar8);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_130,piVar6);
        lVar7 = FUN_0454b300(local_b8,uVar8);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)local_118,(int *)(lVar7 + 4));
        uVar8 = uVar8 + 1;
      }
      uVar8 = 0;
      while( true ) {
        uVar1 = local_a0;
        uVar5 = FUN_0454b2ec(local_a0,local_98);
        if (uVar5 <= uVar8) break;
        piVar6 = (int *)FUN_0454b300(uVar1,uVar8);
        ProfileChangeItemAmount(*piVar6,piVar6[1],false);
        GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_100);
        piVar6 = (int *)FUN_0454b300(local_a0,uVar8);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_130,piVar6);
        lVar7 = FUN_0454b300(local_a0,uVar8);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)local_118,(int *)(lVar7 + 4));
        uVar8 = uVar8 + 1;
      }
      cVar3 = std::vector<int,std::allocator<int>>::empty
                        ((vector<int,std::allocator<int>> *)local_118);
      if (cVar3 == '\0') {
        this_01 = (UIRedPacketResult *)
                  UIRedPacketResult::create((vector *)local_118,(vector *)avStack_130,true);
        TodStringTranslate(L"[LIMITED_SUMMON_RANK_REWARD]");
        UIRedPacketResult::setTitle(this_01,(wstring *)local_100);
        FUN_05476c50((rbtree_iterator *)local_100);
      }
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_118);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_130);
      LimitedSummonRewardData::~LimitedSummonRewardData((LimitedSummonRewardData *)local_d0);
    }
    (**(code **)(*(long *)this + 0x58))(this);
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

