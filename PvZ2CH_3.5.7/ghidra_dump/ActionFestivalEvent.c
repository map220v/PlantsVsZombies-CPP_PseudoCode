// Class: ActionFestivalEvent


/* ActionFestivalEvent::~ActionFestivalEvent() */

void __thiscall ActionFestivalEvent::~ActionFestivalEvent(ActionFestivalEvent *this)

{
  *(undefined ***)this = &PTR_GetClass_0685ae40;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionFestivalEvent::~ActionFestivalEvent() */

void __thiscall ActionFestivalEvent::~ActionFestivalEvent(ActionFestivalEvent *this)

{
  ~ActionFestivalEvent(this);
  AK::FreeHook(this);
  return;
}


/* ActionFestivalEvent::StaticGetClass() */

long * ActionFestivalEvent::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionFestivalEvent",uVar2,StaticNew);
  return sClass;
}


/* ActionFestivalEvent::GetClass() const */

long * ActionFestivalEvent::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionFestivalEvent",uVar2,StaticNew);
  return sClass;
}


/* ActionFestivalEvent::ActionFestivalEvent() */

void __thiscall ActionFestivalEvent::ActionFestivalEvent(ActionFestivalEvent *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685ae40;
  return;
}


/* ActionFestivalEvent::StaticNew() */

ActionFestivalEvent * ActionFestivalEvent::StaticNew(void)

{
  ActionFestivalEvent *this;
  
  this = ::operator_new(0x18);
  ActionFestivalEvent(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionFestivalEvent::CreateIfNeed(bool&) */

void ActionFestivalEvent::CreateIfNeed(bool *param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this;
  long lVar3;
  ActionFestivalEvent *this_00;
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
      if (local_70 != '\0') {
        cVar1 = LawnApp::IsNetworkModuleOK();
        if (cVar1 != '\0') {
          ActiveItem::~ActiveItem(aAStack_88);
          this_00 = ::operator_new(0x18);
          *(undefined8 *)this_00 = 0;
          this_00[8] = (ActionFestivalEvent)0x0;
          this_00[9] = (ActionFestivalEvent)0x0;
          this_00[10] = (ActionFestivalEvent)0x0;
          *(undefined4 *)(this_00 + 0xc) = 0;
          *(undefined4 *)(this_00 + 0x10) = 0;
          ActionFestivalEvent(this_00);
          goto LAB_0455f8d8;
        }
      }
      ActiveItem::~ActiveItem(aAStack_88);
      this_00 = (ActionFestivalEvent *)0x0;
      goto LAB_0455f8d8;
    }
  }
  this_00 = (ActionFestivalEvent *)0x0;
LAB_0455f8d8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionFestivalEvent::Start() */

void __thiscall ActionFestivalEvent::Start(ActionFestivalEvent *this)

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
      LawnApp::ShowActivityCollection(gLawnApp);
      this[9] = (ActionFestivalEvent)0x1;
      goto LAB_0455f9a8;
    }
  }
  ActiveItem::~ActiveItem(aAStack_88);
  this[9] = (ActionFestivalEvent)0x1;
LAB_0455f9a8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

