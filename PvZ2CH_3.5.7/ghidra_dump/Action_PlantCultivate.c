// Class: Action_PlantCultivate


/* Action_PlantCultivate::~Action_PlantCultivate() */

void __thiscall Action_PlantCultivate::~Action_PlantCultivate(Action_PlantCultivate *this)

{
  *(undefined ***)this = &PTR_GetClass_0685a4c0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* Action_PlantCultivate::~Action_PlantCultivate() */

void __thiscall Action_PlantCultivate::~Action_PlantCultivate(Action_PlantCultivate *this)

{
  ~Action_PlantCultivate(this);
  AK::FreeHook(this);
  return;
}


/* Action_PlantCultivate::StaticGetClass() */

long * Action_PlantCultivate::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Action_PlantCultivate",uVar2,StaticNew);
  return sClass;
}


/* Action_PlantCultivate::GetClass() const */

long * Action_PlantCultivate::GetClass(void)

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
  (*pcVar3)(plVar1,"Action_PlantCultivate",uVar2,StaticNew);
  return sClass;
}


/* Action_PlantCultivate::Action_PlantCultivate() */

void __thiscall Action_PlantCultivate::Action_PlantCultivate(Action_PlantCultivate *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685a4c0;
  return;
}


/* Action_PlantCultivate::StaticNew() */

Action_PlantCultivate * Action_PlantCultivate::StaticNew(void)

{
  Action_PlantCultivate *this;
  
  this = ::operator_new(0x18);
  Action_PlantCultivate(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_PlantCultivate::CreateIfNeed(bool&) */

void Action_PlantCultivate::CreateIfNeed(bool *param_1)

{
  char cVar1;
  ProfileMgr *pPVar2;
  PlayerInfo *pPVar3;
  Action_PlantCultivate *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((DAT_06b10420 == '\0') && (*param_1 == false)) {
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
    if (pPVar3 != (PlayerInfo *)0x0) {
      std::string::string(asStack_10,"PlantCultivate");
      cVar1 = PlayerInfo::IsFirstPopToday(pPVar3,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if ((cVar1 != '\0') && (cVar1 = RiftUtils::IsWorldMapButtonsEnabled(), cVar1 != '\0')) {
        std::string::string(asStack_10,"egypt4");
        pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
        cVar1 = ProfileUtils::HasCompletedLevel(asStack_10,false,pPVar3);
        std::string::~string(asStack_10);
        nop();
        if (cVar1 != '\0') {
          if (DAT_06b10420 == '\0') {
            DAT_06b10420 = '\x01';
          }
          this = ::operator_new(0x18);
          *(undefined8 *)this = 0;
          this[8] = (Action_PlantCultivate)0x0;
          this[9] = (Action_PlantCultivate)0x0;
          this[10] = (Action_PlantCultivate)0x0;
          *(undefined4 *)(this + 0xc) = 0;
          *(undefined4 *)(this + 0x10) = 0;
          Action_PlantCultivate(this);
          goto LAB_04555bb4;
        }
      }
    }
  }
  this = (Action_PlantCultivate *)0x0;
LAB_04555bb4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* Action_PlantCultivate::Start() */

void __thiscall Action_PlantCultivate::Start(Action_PlantCultivate *this)

{
  undefined *puVar1;
  PlantCultivateManager *this_00;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<Action_PlantCultivate,void(Action_PlantCultivate::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  this_00 = (PlantCultivateManager *)Sexy::LazySingleton<PlantCultivateManager>::GetInstancePtr();
  PlantCultivateManager::ShowDialog(this_00);
  (**(code **)(*(long *)this + 0x58))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_PlantCultivate::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
Action_PlantCultivate::OnNotifyRefreshActivityList
          (Action_PlantCultivate *this,bool param_1,set *param_2)

{
  bool bVar1;
  int iVar2;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_9c = 0x2a77;
  local_8 = ___stack_chk_guard;
  local_98 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_9c);
  local_90 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
  if (bVar1) {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    ActiveItem::~ActiveItem(aAStack_88);
  }
  (**(code **)(*(long *)this + 0x58))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

