// Class: ActionRiftEndSeasonNotice


/* ActionRiftEndSeasonNotice::~ActionRiftEndSeasonNotice() */

void __thiscall
ActionRiftEndSeasonNotice::~ActionRiftEndSeasonNotice(ActionRiftEndSeasonNotice *this)

{
  *(undefined ***)this = &PTR_GetClass_0685afc0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionRiftEndSeasonNotice::~ActionRiftEndSeasonNotice() */

void __thiscall
ActionRiftEndSeasonNotice::~ActionRiftEndSeasonNotice(ActionRiftEndSeasonNotice *this)

{
  ~ActionRiftEndSeasonNotice(this);
  AK::FreeHook(this);
  return;
}


/* ActionRiftEndSeasonNotice::StaticGetClass() */

long * ActionRiftEndSeasonNotice::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionRiftEndSeasonNotice",uVar2,StaticNew);
  return sClass;
}


/* ActionRiftEndSeasonNotice::GetClass() const */

long * ActionRiftEndSeasonNotice::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionRiftEndSeasonNotice",uVar2,StaticNew);
  return sClass;
}


/* ActionRiftEndSeasonNotice::ActionRiftEndSeasonNotice() */

void __thiscall
ActionRiftEndSeasonNotice::ActionRiftEndSeasonNotice(ActionRiftEndSeasonNotice *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685afc0;
  return;
}


/* ActionRiftEndSeasonNotice::StaticNew() */

ActionRiftEndSeasonNotice * ActionRiftEndSeasonNotice::StaticNew(void)

{
  ActionRiftEndSeasonNotice *this;
  
  this = ::operator_new(0x18);
  ActionRiftEndSeasonNotice(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionRiftEndSeasonNotice::showNotice() */

void ActionRiftEndSeasonNotice::showNotice(void)

{
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_0454dc00(800);
  iVar2 = FUN_0454dc00(0x1c2);
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[RIFT_SEASON_END_NOTICE_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[RIFT_SEASON_END_NOTICE_CONTENT]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetFooterAlign(this,3);
  iVar1 = FUN_0454dc00(2);
  PVZ2UIDialog::SetFooterBottomPadding(this,iVar1);
  PVZ2UIDialog::SetBackgroundDarken(this,true,0.5);
  FUN_05478178(auStack_58,L"[OVERVIEW_CONFIRM]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionRiftEndSeasonNotice::CreateIfNeed(bool&) */

void ActionRiftEndSeasonNotice::CreateIfNeed(bool *param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this;
  long lVar3;
  ActionRiftEndSeasonNotice *this_00;
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
          cVar1 = RiftUtils::IsWorldMapButtonsEnabled();
          if ((((((cVar1 == '\0') && (cVar1 = PVZ1ModeUtils::IsInPVZ1WorldMap(), cVar1 == '\0')) &&
                (cVar1 = PVZ1ModeUtils::IsInQueuedPVZ1WorldMap(), cVar1 == '\0')) &&
               ((cVar1 = PVZ2UnchartedModeUtils::IsInPVZ2UnchartedModeWorldMap(), cVar1 == '\0' &&
                (cVar1 = PVZ2UnchartedModeUtils::IsInQueuedPVZ2UnchartedModeWorldMap(),
                cVar1 == '\0')))) &&
              ((cVar1 = CardGameUtils::IsInCardGameWorldMap(), cVar1 == '\0' &&
               ((cVar1 = CardGameUtils::IsInQueuedCardGameWorldMap(), cVar1 == '\0' &&
                (cVar1 = PlantWarsUtils::IsInPlantWarsWorldMap(), cVar1 == '\0')))))) &&
             (cVar1 = PlantWarsUtils::IsInQueuedPlantWarsWorldMap(), cVar1 == '\0')) {
            this_00 = ::operator_new(0x18);
            *(undefined8 *)this_00 = 0;
            this_00[8] = (ActionRiftEndSeasonNotice)0x0;
            this_00[9] = (ActionRiftEndSeasonNotice)0x0;
            this_00[10] = (ActionRiftEndSeasonNotice)0x0;
            *(undefined4 *)(this_00 + 0xc) = 0;
            *(undefined4 *)(this_00 + 0x10) = 0;
            ActionRiftEndSeasonNotice(this_00);
            goto LAB_0455fa60;
          }
          goto LAB_0455fab0;
        }
      }
      ActiveItem::~ActiveItem(aAStack_88);
      this_00 = (ActionRiftEndSeasonNotice *)0x0;
      goto LAB_0455fa60;
    }
  }
LAB_0455fab0:
  this_00 = (ActionRiftEndSeasonNotice *)0x0;
LAB_0455fa60:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionRiftEndSeasonNotice::Start() */

void __thiscall ActionRiftEndSeasonNotice::Start(ActionRiftEndSeasonNotice *this)

{
  char cVar1;
  int iVar2;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_70 == '\0') {
LAB_0455fb8c:
    ActiveItem::~ActiveItem(aAStack_88);
  }
  else {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if (cVar1 == '\0') goto LAB_0455fb8c;
    ActiveItem::~ActiveItem(aAStack_88);
    cVar1 = RiftUtils::PlayerCanPlay();
    if (cVar1 == '\0') {
      showNotice();
      this[9] = (ActionRiftEndSeasonNotice)0x1;
      goto LAB_0455fb9c;
    }
  }
  this[9] = (ActionRiftEndSeasonNotice)0x1;
LAB_0455fb9c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

