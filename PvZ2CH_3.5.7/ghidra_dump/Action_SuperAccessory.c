// Class: Action_SuperAccessory


/* Action_SuperAccessory::~Action_SuperAccessory() */

void __thiscall Action_SuperAccessory::~Action_SuperAccessory(Action_SuperAccessory *this)

{
  *(undefined ***)this = &PTR_GetClass_0685abc0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* Action_SuperAccessory::~Action_SuperAccessory() */

void __thiscall Action_SuperAccessory::~Action_SuperAccessory(Action_SuperAccessory *this)

{
  ~Action_SuperAccessory(this);
  AK::FreeHook(this);
  return;
}


/* Action_SuperAccessory::StaticGetClass() */

long * Action_SuperAccessory::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Action_SuperAccessory",uVar2,StaticNew);
  return sClass;
}


/* Action_SuperAccessory::GetClass() const */

long * Action_SuperAccessory::GetClass(void)

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
  (*pcVar3)(plVar1,"Action_SuperAccessory",uVar2,StaticNew);
  return sClass;
}


/* Action_SuperAccessory::Action_SuperAccessory() */

void __thiscall Action_SuperAccessory::Action_SuperAccessory(Action_SuperAccessory *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685abc0;
  return;
}


/* Action_SuperAccessory::StaticNew() */

Action_SuperAccessory * Action_SuperAccessory::StaticNew(void)

{
  Action_SuperAccessory *this;
  
  this = ::operator_new(0x18);
  Action_SuperAccessory(this);
  return this;
}


/* Action_SuperAccessory::onNarrationFinished() */

void __thiscall Action_SuperAccessory::onNarrationFinished(Action_SuperAccessory *this)

{
  ProfileMgr *this_00;
  PlayerInfo *pPVar1;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::SetActiveTutorial(pPVar1,0x38);
  PlayerInfo::CompleteTutorial(pPVar1,0x38);
  this[9] = (Action_SuperAccessory)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_SuperAccessory::CreateIfNeed(bool&) */

void Action_SuperAccessory::CreateIfNeed(bool *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  RiftUtils *this_01;
  Action_SuperAccessory *this_02;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 == false) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    if (this_00 != (PlayerInfo *)0x0) {
      std::string::string(asStack_10,"SuperAcc");
      cVar1 = PlayerInfo::GetPlayerFlagInfo(this_00,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (cVar1 != '\0') {
        RiftUtils::GetCurrentRiftWorld(this_01);
        bVar2 = std::operator!=(asStack_10,"");
        std::string::~string(asStack_10);
        if (((!bVar2) && (iVar3 = FUN_0454b274(*(undefined4 *)(this_00 + 0x40)), iVar3 == 0)) &&
           (cVar1 = PlayerInfo::PlayerHasCompletedTutorial(this_00,0x38), cVar1 == '\0')) {
          this_02 = ::operator_new(0x18);
          *(undefined8 *)this_02 = 0;
          this_02[8] = (Action_SuperAccessory)0x0;
          this_02[9] = (Action_SuperAccessory)0x0;
          this_02[10] = (Action_SuperAccessory)0x0;
          *(undefined4 *)(this_02 + 0xc) = 0;
          *(undefined4 *)(this_02 + 0x10) = 0;
          Action_SuperAccessory(this_02);
          goto LAB_04555db4;
        }
      }
    }
  }
  this_02 = (Action_SuperAccessory *)0x0;
LAB_04555db4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_02);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_SuperAccessory::Start() */

void __thiscall Action_SuperAccessory::Start(Action_SuperAccessory *this)

{
  CrazyNPCManager *pCVar1;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  if (pCVar1 != (CrazyNPCManager *)0x0) {
    std::string::string(asStack_60,"SUPER_ACCESSORY_TUTORIAL");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onNarrationFinished);
    Sexy::Delegate0::Delegate0<Action_SuperAccessory,void(Action_SuperAccessory::*)()>
              (aDStack_38,aCStack_50);
    std::string::string(asStack_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar1,asStack_60,aDStack_38,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

