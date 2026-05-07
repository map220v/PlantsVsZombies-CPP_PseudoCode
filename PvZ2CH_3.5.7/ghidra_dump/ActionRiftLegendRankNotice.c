// Class: ActionRiftLegendRankNotice


/* ActionRiftLegendRankNotice::~ActionRiftLegendRankNotice() */

void __thiscall
ActionRiftLegendRankNotice::~ActionRiftLegendRankNotice(ActionRiftLegendRankNotice *this)

{
  *(undefined ***)this = &PTR_GetClass_0685b040;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionRiftLegendRankNotice::~ActionRiftLegendRankNotice() */

void __thiscall
ActionRiftLegendRankNotice::~ActionRiftLegendRankNotice(ActionRiftLegendRankNotice *this)

{
  ~ActionRiftLegendRankNotice(this);
  AK::FreeHook(this);
  return;
}


/* ActionRiftLegendRankNotice::StaticGetClass() */

long * ActionRiftLegendRankNotice::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionRiftLegendRankNotice",uVar2,StaticNew);
  return sClass;
}


/* ActionRiftLegendRankNotice::GetClass() const */

long * ActionRiftLegendRankNotice::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionRiftLegendRankNotice",uVar2,StaticNew);
  return sClass;
}


/* ActionRiftLegendRankNotice::ActionRiftLegendRankNotice() */

void __thiscall
ActionRiftLegendRankNotice::ActionRiftLegendRankNotice(ActionRiftLegendRankNotice *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685b040;
  return;
}


/* ActionRiftLegendRankNotice::StaticNew() */

ActionRiftLegendRankNotice * ActionRiftLegendRankNotice::StaticNew(void)

{
  ActionRiftLegendRankNotice *this;
  
  this = ::operator_new(0x18);
  ActionRiftLegendRankNotice(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionRiftLegendRankNotice::CreateIfNeed(bool&) */

void ActionRiftLegendRankNotice::CreateIfNeed(bool *param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this;
  long lVar3;
  ActionRiftLegendRankNotice *this_00;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 == false) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar3 = ProfileMgr::GetCurrentProfile(this);
    if (lVar3 != 0) {
      iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar2);
      if ((local_70 == '\0') || (cVar1 = LawnApp::IsNetworkModuleOK(), cVar1 == '\0')) {
        ActiveItem::~ActiveItem(aAStack_88);
      }
      else {
        ActiveItem::~ActiveItem(aAStack_88);
        cVar1 = RiftUtils::IsInRiftWorldMap();
        if ((cVar1 != '\0') || (cVar1 = RiftUtils::IsInQueuedRiftWorldMap(), cVar1 != '\0')) {
          this_00 = ::operator_new(0x18);
          *(undefined8 *)this_00 = 0;
          this_00[8] = (ActionRiftLegendRankNotice)0x0;
          this_00[9] = (ActionRiftLegendRankNotice)0x0;
          this_00[10] = (ActionRiftLegendRankNotice)0x0;
          *(undefined4 *)(this_00 + 0xc) = 0;
          *(undefined4 *)(this_00 + 0x10) = 0;
          ActionRiftLegendRankNotice(this_00);
          goto LAB_0455fc5c;
        }
      }
    }
  }
  this_00 = (ActionRiftLegendRankNotice *)0x0;
LAB_0455fc5c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionRiftLegendRankNotice::Start() */

void __thiscall ActionRiftLegendRankNotice::Start(ActionRiftLegendRankNotice *this)

{
  char cVar1;
  int iVar2;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_70 != '\0') {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if (cVar1 != '\0') {
      ActiveItem::~ActiveItem(aAStack_88);
      RiftUtils::SendGet_LeaderboardEntry();
      this[9] = (ActionRiftLegendRankNotice)0x1;
      goto LAB_0455fd3c;
    }
  }
  ActiveItem::~ActiveItem(aAStack_88);
  this[9] = (ActionRiftLegendRankNotice)0x1;
LAB_0455fd3c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

