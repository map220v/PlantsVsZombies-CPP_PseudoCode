// Class: ActionFirstRecharge


/* ActionFirstRecharge::~ActionFirstRecharge() */

void __thiscall ActionFirstRecharge::~ActionFirstRecharge(ActionFirstRecharge *this)

{
  *(undefined ***)this = &PTR_GetClass_0685ad40;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionFirstRecharge::~ActionFirstRecharge() */

void __thiscall ActionFirstRecharge::~ActionFirstRecharge(ActionFirstRecharge *this)

{
  ~ActionFirstRecharge(this);
  AK::FreeHook(this);
  return;
}


/* ActionFirstRecharge::StaticGetClass() */

long * ActionFirstRecharge::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionFirstRecharge",uVar2,StaticNew);
  return sClass;
}


/* ActionFirstRecharge::GetClass() const */

long * ActionFirstRecharge::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionFirstRecharge",uVar2,StaticNew);
  return sClass;
}


/* ActionFirstRecharge::ActionFirstRecharge() */

void __thiscall ActionFirstRecharge::ActionFirstRecharge(ActionFirstRecharge *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685ad40;
  return;
}


/* ActionFirstRecharge::StaticNew() */

ActionFirstRecharge * ActionFirstRecharge::StaticNew(void)

{
  ActionFirstRecharge *this;
  
  this = ::operator_new(0x18);
  ActionFirstRecharge(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionFirstRecharge::Start() */

void __thiscall ActionFirstRecharge::Start(ActionFirstRecharge *this)

{
  undefined *puVar1;
  char cVar2;
  WorldMap_AcFirstRechargeButton *this_00;
  ActivityManager *this_01;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefreshActivityList);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<ActionFirstRecharge,void(ActionFirstRecharge::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_50);
  std::string::string(asStack_28,"UIWorldFirstRechargeButton");
  UIWidget::GetWidgetBySheetName(asStack_28);
  nop();
  std::string::~string(asStack_28);
  nop();
  if ((this_00 == (WorldMap_AcFirstRechargeButton *)0x0) ||
     (cVar2 = WorldMap_AcFirstRechargeButton::CheckActivated(this_00), cVar2 == '\0')) {
    (**(code **)(*(long *)this + 0x58))(this);
  }
  else {
    this_01 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::Request(this_01,0x29c1,false,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionFirstRecharge::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
ActionFirstRecharge::OnNotifyRefreshActivityList
          (ActionFirstRecharge *this,bool param_1,set *param_2)

{
  int local_c;
  long local_8;
  
  local_c = 0x29c1;
  local_8 = ___stack_chk_guard;
  std::set<int,std::less<int>,std::allocator<int>>::find
            ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_c);
  std::map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::end
            ((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)param_2);
  (**(code **)(*(long *)this + 0x58))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionFirstRecharge::CreateIfNeed(bool&) */

void ActionFirstRecharge::CreateIfNeed(bool *param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  ActionFirstRecharge *this_01;
  string asStack_90 [8];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 == false) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    if (this_00 != (PlayerInfo *)0x0) {
      std::string::string(asStack_90,"egypt8");
      cVar1 = PlayerInfo::GetLevelCompleted(this_00,asStack_90);
      std::string::~string(asStack_90);
      nop();
      if ((cVar1 != '\0') && (cVar1 = RiftUtils::IsWorldMapButtonsEnabled(), cVar1 != '\0')) {
        iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar2);
        if (local_70 != '\0') {
          cVar1 = LawnApp::IsNetworkModuleOK();
          if (cVar1 != '\0') {
            ActiveItem::~ActiveItem(aAStack_88);
            this_01 = ::operator_new(0x18);
            *(undefined8 *)this_01 = 0;
            this_01[8] = (ActionFirstRecharge)0x0;
            this_01[9] = (ActionFirstRecharge)0x0;
            this_01[10] = (ActionFirstRecharge)0x0;
            *(undefined4 *)(this_01 + 0xc) = 0;
            *(undefined4 *)(this_01 + 0x10) = 0;
            ActionFirstRecharge(this_01);
            goto LAB_04560474;
          }
        }
        ActiveItem::~ActiveItem(aAStack_88);
        this_01 = (ActionFirstRecharge *)0x0;
        goto LAB_04560474;
      }
    }
  }
  this_01 = (ActionFirstRecharge *)0x0;
LAB_04560474:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}

