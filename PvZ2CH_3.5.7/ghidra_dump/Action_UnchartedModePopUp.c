// Class: Action_UnchartedModePopUp


/* Action_UnchartedModePopUp::~Action_UnchartedModePopUp() */

void __thiscall
Action_UnchartedModePopUp::~Action_UnchartedModePopUp(Action_UnchartedModePopUp *this)

{
  *(undefined ***)this = &PTR_GetClass_0685a0c0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* Action_UnchartedModePopUp::~Action_UnchartedModePopUp() */

void __thiscall
Action_UnchartedModePopUp::~Action_UnchartedModePopUp(Action_UnchartedModePopUp *this)

{
  ~Action_UnchartedModePopUp(this);
  AK::FreeHook(this);
  return;
}


/* Action_UnchartedModePopUp::StaticGetClass() */

long * Action_UnchartedModePopUp::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Action_UnchartedModePopUp",uVar2,StaticNew);
  return sClass;
}


/* Action_UnchartedModePopUp::GetClass() const */

long * Action_UnchartedModePopUp::GetClass(void)

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
  (*pcVar3)(plVar1,"Action_UnchartedModePopUp",uVar2,StaticNew);
  return sClass;
}


/* Action_UnchartedModePopUp::Action_UnchartedModePopUp() */

void __thiscall
Action_UnchartedModePopUp::Action_UnchartedModePopUp(Action_UnchartedModePopUp *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685a0c0;
  return;
}


/* Action_UnchartedModePopUp::StaticNew() */

Action_UnchartedModePopUp * Action_UnchartedModePopUp::StaticNew(void)

{
  Action_UnchartedModePopUp *this;
  
  this = ::operator_new(0x18);
  Action_UnchartedModePopUp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_UnchartedModePopUp::CreateIfNeed(bool&) */

void Action_UnchartedModePopUp::CreateIfNeed(bool *param_1)

{
  char cVar1;
  wchar16 *pwVar2;
  ProfileMgr *pPVar3;
  PlayerInfo *this;
  PlayerInfo *pPVar4;
  Action_UnchartedModePopUp *this_00;
  LineBreakCategory *pLVar5;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pLVar5 = aLStack_18;
  local_8 = ___stack_chk_guard;
  pwVar2 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"PopUpDisabled");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar2,(wchar16 *)asStack_10,pLVar5,in_x3,in_x4);
  std::string::~string(asStack_10);
  nop();
  if ((cVar1 == '\0') && (*param_1 == false)) {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if (cVar1 != '\0') {
      pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
      cVar1 = PlayerInfo::PlayerHasCompletedTutorial(this,0x3f);
      if (cVar1 != '\0') {
        pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
        cVar1 = ProfileUtils::HasCompletedSecondWorldLevel(2,false,pPVar4);
        if (cVar1 != '\0') {
          if (this != (PlayerInfo *)0x0) {
            std::string::string(asStack_10,"Uncharted");
            cVar1 = PlayerInfo::IsFirstPopToday(this,asStack_10);
            std::string::~string(asStack_10);
            nop();
            if (cVar1 == '\0') goto LAB_0455c148;
          }
          cVar1 = PVZ2UnchartedModeUtils::CheckShowNotice();
          if ((((((cVar1 != '\0') && (cVar1 = RiftUtils::IsInRiftWorldMap(), cVar1 == '\0')) &&
                (cVar1 = RiftUtils::IsInQueuedRiftWorldMap(), cVar1 == '\0')) &&
               ((cVar1 = PVZ1ModeUtils::IsInPVZ1WorldMap(), cVar1 == '\0' &&
                (cVar1 = PVZ1ModeUtils::IsInQueuedPVZ1WorldMap(), cVar1 == '\0')))) &&
              ((cVar1 = PVZ2UnchartedModeUtils::IsInPVZ2UnchartedModeWorldMap(), cVar1 == '\0' &&
               ((cVar1 = PVZ2UnchartedModeUtils::IsInQueuedPVZ2UnchartedModeWorldMap(),
                cVar1 == '\0' && (cVar1 = CardGameUtils::IsInCardGameWorldMap(), cVar1 == '\0'))))))
             && ((cVar1 = CardGameUtils::IsInQueuedCardGameWorldMap(), cVar1 == '\0' &&
                 ((cVar1 = PlantWarsUtils::IsInPlantWarsWorldMap(), cVar1 == '\0' &&
                  (cVar1 = PlantWarsUtils::IsInQueuedPlantWarsWorldMap(), cVar1 == '\0')))))) {
            this_00 = ::operator_new(0x18);
            *(undefined8 *)this_00 = 0;
            this_00[8] = (Action_UnchartedModePopUp)0x0;
            this_00[9] = (Action_UnchartedModePopUp)0x0;
            this_00[10] = (Action_UnchartedModePopUp)0x0;
            *(undefined4 *)(this_00 + 0xc) = 0;
            *(undefined4 *)(this_00 + 0x10) = 0;
            Action_UnchartedModePopUp(this_00);
            goto LAB_0455c14c;
          }
        }
      }
    }
  }
LAB_0455c148:
  this_00 = (Action_UnchartedModePopUp *)0x0;
LAB_0455c14c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_UnchartedModePopUp::Start() */

void __thiscall Action_UnchartedModePopUp::Start(Action_UnchartedModePopUp *this)

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
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<Action_UnchartedModePopUp,void(Action_UnchartedModePopUp::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_70);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  local_48[1] = 1;
  local_48[0] = L'⩡';
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
/* Action_UnchartedModePopUp::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
Action_UnchartedModePopUp::OnNotifyRefreshActivityList
          (Action_UnchartedModePopUp *this,bool param_1,set *param_2)

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
  
  local_9c = 0x2a61;
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
      UISingletonDialog<UIUnchartedEntry>::ShowDialog();
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

