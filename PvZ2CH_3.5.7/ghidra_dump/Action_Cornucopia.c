// Class: Action_Cornucopia


/* Action_Cornucopia::~Action_Cornucopia() */

void __thiscall Action_Cornucopia::~Action_Cornucopia(Action_Cornucopia *this)

{
  *(undefined ***)this = &PTR_GetClass_0685a440;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* Action_Cornucopia::~Action_Cornucopia() */

void __thiscall Action_Cornucopia::~Action_Cornucopia(Action_Cornucopia *this)

{
  ~Action_Cornucopia(this);
  AK::FreeHook(this);
  return;
}


/* Action_Cornucopia::StaticGetClass() */

long * Action_Cornucopia::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Action_Cornucopia",uVar2,StaticNew);
  return sClass;
}


/* Action_Cornucopia::GetClass() const */

long * Action_Cornucopia::GetClass(void)

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
  (*pcVar3)(plVar1,"Action_Cornucopia",uVar2,StaticNew);
  return sClass;
}


/* Action_Cornucopia::Action_Cornucopia() */

void __thiscall Action_Cornucopia::Action_Cornucopia(Action_Cornucopia *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685a440;
  return;
}


/* Action_Cornucopia::StaticNew() */

Action_Cornucopia * Action_Cornucopia::StaticNew(void)

{
  Action_Cornucopia *this;
  
  this = ::operator_new(0x18);
  Action_Cornucopia(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_Cornucopia::CreateIfNeed(bool&) */

void Action_Cornucopia::CreateIfNeed(bool *param_1)

{
  char cVar1;
  ProfileMgr *pPVar2;
  PlayerInfo *this;
  PlayerInfo *pPVar3;
  Action_Cornucopia *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((DAT_06b10520 == '\0') && (*param_1 == false)) {
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
    if ((this != (PlayerInfo *)0x0) &&
       (cVar1 = RiftUtils::IsWorldMapButtonsEnabled(), cVar1 != '\0')) {
      std::string::string(asStack_10,"egypt4");
      pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
      cVar1 = ProfileUtils::HasCompletedLevel(asStack_10,false,pPVar3);
      std::string::~string(asStack_10);
      nop();
      if (cVar1 != '\0') {
        std::string::string(asStack_10,"Cornucopia");
        cVar1 = PlayerInfo::IsFirstPopToday(this,asStack_10);
        std::string::~string(asStack_10);
        nop();
        if (cVar1 != '\0') {
          if (DAT_06b10520 == '\0') {
            DAT_06b10520 = '\x01';
          }
          this_00 = ::operator_new(0x18);
          *(undefined8 *)this_00 = 0;
          this_00[8] = (Action_Cornucopia)0x0;
          this_00[9] = (Action_Cornucopia)0x0;
          this_00[10] = (Action_Cornucopia)0x0;
          *(undefined4 *)(this_00 + 0xc) = 0;
          *(undefined4 *)(this_00 + 0x10) = 0;
          Action_Cornucopia(this_00);
          goto LAB_04555a6c;
        }
      }
    }
  }
  this_00 = (Action_Cornucopia *)0x0;
LAB_04555a6c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_Cornucopia::Start() */

void __thiscall Action_Cornucopia::Start(Action_Cornucopia *this)

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
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<Action_Cornucopia,void(Action_Cornucopia::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_70);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  local_48[1] = 1;
  local_48[0] = L'⩯';
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
/* Action_Cornucopia::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
Action_Cornucopia::OnNotifyRefreshActivityList(Action_Cornucopia *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CornucopiaMgr *this_00;
  int local_1dc;
  undefined8 local_1d8;
  ActiveItem aAStack_1d0 [8];
  undefined4 local_1c8;
  char local_1b8;
  undefined8 local_150 [41];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_1dc = 0x2a6f;
  local_1d8 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1dc);
  local_150[0] = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_1d8,(rbtree_iterator *)local_150);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    cVar2 = FUN_0454b298(local_1c8);
    if ((cVar2 != '\0') && (local_1b8 != '\0')) {
      CornucopiaData::CornucopiaData((CornucopiaData *)local_150);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_1d0,(RtObject *)local_150);
      if (cVar2 != '\0') {
        this_00 = (CornucopiaMgr *)Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
        CornucopiaMgr::LoadData(this_00,(CornucopiaData *)local_150);
        UISingletonDialog<UICornucopia>::ShowDialog();
      }
      CornucopiaData::~CornucopiaData((CornucopiaData *)local_150);
    }
    ActiveItem::~ActiveItem(aAStack_1d0);
  }
  (**(code **)(*(long *)this + 0x58))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

