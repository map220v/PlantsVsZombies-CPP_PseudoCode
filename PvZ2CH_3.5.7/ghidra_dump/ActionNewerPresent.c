// Class: ActionNewerPresent


/* ActionNewerPresent::~ActionNewerPresent() */

void __thiscall ActionNewerPresent::~ActionNewerPresent(ActionNewerPresent *this)

{
  *(undefined ***)this = &PTR_GetClass_0685a5c0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionNewerPresent::~ActionNewerPresent() */

void __thiscall ActionNewerPresent::~ActionNewerPresent(ActionNewerPresent *this)

{
  ~ActionNewerPresent(this);
  AK::FreeHook(this);
  return;
}


/* ActionNewerPresent::StaticGetClass() */

long * ActionNewerPresent::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionNewerPresent",uVar2,StaticNew);
  return sClass;
}


/* ActionNewerPresent::GetClass() const */

long * ActionNewerPresent::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionNewerPresent",uVar2,StaticNew);
  return sClass;
}


/* ActionNewerPresent::ActionNewerPresent() */

void __thiscall ActionNewerPresent::ActionNewerPresent(ActionNewerPresent *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685a5c0;
  return;
}


/* ActionNewerPresent::StaticNew() */

ActionNewerPresent * ActionNewerPresent::StaticNew(void)

{
  ActionNewerPresent *this;
  
  this = ::operator_new(0x18);
  ActionNewerPresent(this);
  return this;
}


/* ActionNewerPresent::Update() */

void __thiscall ActionNewerPresent::Update(ActionNewerPresent *this)

{
  char cVar1;
  
  Sexy::LazySingleton<NewerPresentMgr>::GetInstance();
  cVar1 = NewerPresentMgr::IsActive();
  if (cVar1 == '\0') {
    this[9] = (ActionNewerPresent)0x1;
  }
  return;
}


/* ActionNewerPresent::End() */

void ActionNewerPresent::End(void)

{
  Sexy::LazySingleton<NewerPresentMgr>::GetInstance();
  NewerPresentMgr::Close();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionNewerPresent::Start() */

void __thiscall ActionNewerPresent::Start(ActionNewerPresent *this)

{
  char cVar1;
  int iVar2;
  NewerPresentMgr *this_00;
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
      this_00 = (NewerPresentMgr *)Sexy::LazySingleton<NewerPresentMgr>::GetInstance();
      NewerPresentMgr::RequestNetwork(this_00);
      goto LAB_0455f310;
    }
  }
  ActiveItem::~ActiveItem(aAStack_88);
  this[9] = (ActionNewerPresent)0x1;
LAB_0455f310:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionNewerPresent::CreateIfNeed(bool&) */

void ActionNewerPresent::CreateIfNeed(bool *param_1)

{
  char cVar1;
  int iVar2;
  wchar16 *pwVar3;
  ProfileMgr *pPVar4;
  PlayerInfo *pPVar5;
  ActionNewerPresent *this;
  LineBreakCategory *pLVar6;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_98 [8];
  string asStack_90 [8];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  pLVar6 = aLStack_98;
  local_8 = ___stack_chk_guard;
  pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_90,"PopUpDisabled");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar3,(wchar16 *)asStack_90,pLVar6,in_x3,in_x4);
  std::string::~string(asStack_90);
  nop();
  if ((cVar1 == '\0') && (*param_1 == false)) {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if (cVar1 != '\0') {
      iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar2);
      ActiveItem::~ActiveItem(aAStack_88);
      if (local_70 != '\0') {
        std::string::string(asStack_90,"egypt3");
        pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
        cVar1 = ProfileUtils::HasCompletedLevel(asStack_90,false,pPVar5);
        std::string::~string(asStack_90);
        nop();
        if (cVar1 != '\0') {
          pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
          if (pPVar5 != (PlayerInfo *)0x0) {
            std::string::string(asStack_90,"NewerPresent");
            cVar1 = PlayerInfo::IsFirstPopToday(pPVar5,asStack_90);
            std::string::~string(asStack_90);
            nop();
            if (cVar1 == '\0') goto LAB_04560ec4;
          }
          cVar1 = RiftUtils::IsWorldMapButtonsEnabled();
          if (cVar1 != '\0') {
            this = ::operator_new(0x18);
            *(undefined8 *)this = 0;
            this[8] = (ActionNewerPresent)0x0;
            this[9] = (ActionNewerPresent)0x0;
            this[10] = (ActionNewerPresent)0x0;
            *(undefined4 *)(this + 0xc) = 0;
            *(undefined4 *)(this + 0x10) = 0;
            ActionNewerPresent(this);
            goto LAB_04560ec8;
          }
        }
      }
    }
  }
LAB_04560ec4:
  this = (ActionNewerPresent *)0x0;
LAB_04560ec8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

