// Class: Action_ShowLuckBag


/* Action_ShowLuckBag::~Action_ShowLuckBag() */

void __thiscall Action_ShowLuckBag::~Action_ShowLuckBag(Action_ShowLuckBag *this)

{
  *(undefined ***)this = &PTR_GetClass_0685aa40;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* Action_ShowLuckBag::~Action_ShowLuckBag() */

void __thiscall Action_ShowLuckBag::~Action_ShowLuckBag(Action_ShowLuckBag *this)

{
  ~Action_ShowLuckBag(this);
  AK::FreeHook(this);
  return;
}


/* Action_ShowLuckBag::StaticGetClass() */

long * Action_ShowLuckBag::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Action_ShowLuckBag",uVar2,StaticNew);
  return sClass;
}


/* Action_ShowLuckBag::GetClass() const */

long * Action_ShowLuckBag::GetClass(void)

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
  (*pcVar3)(plVar1,"Action_ShowLuckBag",uVar2,StaticNew);
  return sClass;
}


/* Action_ShowLuckBag::Action_ShowLuckBag() */

void __thiscall Action_ShowLuckBag::Action_ShowLuckBag(Action_ShowLuckBag *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685aa40;
  return;
}


/* Action_ShowLuckBag::StaticNew() */

Action_ShowLuckBag * Action_ShowLuckBag::StaticNew(void)

{
  Action_ShowLuckBag *this;
  
  this = ::operator_new(0x18);
  Action_ShowLuckBag(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_ShowLuckBag::Start() */

void __thiscall Action_ShowLuckBag::Start(Action_ShowLuckBag *this)

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
      UISingletonDialog<UILuckBagAnnouncement>::ShowDialog();
      this[9] = (Action_ShowLuckBag)0x1;
      goto LAB_0455f5ac;
    }
  }
  ActiveItem::~ActiveItem(aAStack_88);
  this[9] = (Action_ShowLuckBag)0x1;
LAB_0455f5ac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_ShowLuckBag::CreateIfNeed(bool&) */

void Action_ShowLuckBag::CreateIfNeed(bool *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  wchar16 *pwVar4;
  ProfileMgr *this;
  PlayerInfo *this_00;
  Action_ShowLuckBag *this_01;
  LineBreakCategory *pLVar5;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_98 [8];
  string asStack_90 [8];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  pLVar5 = aLStack_98;
  local_8 = ___stack_chk_guard;
  pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_90,"PopUpDisabled");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar4,(wchar16 *)asStack_90,pLVar5,in_x3,in_x4);
  std::string::~string(asStack_90);
  nop();
  if ((cVar1 == '\0') && (*param_1 == false)) {
    RiftUtils::GetCurrentRiftWorld((RiftUtils *)0x0);
    bVar2 = std::operator!=(asStack_90,"");
    std::string::~string(asStack_90);
    if (!bVar2) {
      cVar1 = LawnApp::IsNetworkModuleOK();
      if (cVar1 != '\0') {
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        ActiveItem::~ActiveItem(aAStack_88);
        if (local_70 != '\0') {
          this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
          if (this_00 != (PlayerInfo *)0x0) {
            std::string::string(asStack_90,"LuckBag");
            cVar1 = PlayerInfo::IsFirstPopToday(this_00,asStack_90);
            std::string::~string(asStack_90);
            nop();
            if (cVar1 == '\0') goto LAB_04561048;
          }
          this_01 = ::operator_new(0x18);
          *(undefined8 *)this_01 = 0;
          this_01[8] = (Action_ShowLuckBag)0x0;
          this_01[9] = (Action_ShowLuckBag)0x0;
          this_01[10] = (Action_ShowLuckBag)0x0;
          *(undefined4 *)(this_01 + 0xc) = 0;
          *(undefined4 *)(this_01 + 0x10) = 0;
          Action_ShowLuckBag(this_01);
          goto LAB_0456104c;
        }
      }
    }
  }
LAB_04561048:
  this_01 = (Action_ShowLuckBag *)0x0;
LAB_0456104c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}

