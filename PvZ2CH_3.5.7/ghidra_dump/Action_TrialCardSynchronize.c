// Class: Action_TrialCardSynchronize


/* Action_TrialCardSynchronize::~Action_TrialCardSynchronize() */

void __thiscall
Action_TrialCardSynchronize::~Action_TrialCardSynchronize(Action_TrialCardSynchronize *this)

{
  *(undefined ***)this = &PTR_GetClass_0685a540;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* Action_TrialCardSynchronize::~Action_TrialCardSynchronize() */

void __thiscall
Action_TrialCardSynchronize::~Action_TrialCardSynchronize(Action_TrialCardSynchronize *this)

{
  ~Action_TrialCardSynchronize(this);
  AK::FreeHook(this);
  return;
}


/* Action_TrialCardSynchronize::StaticGetClass() */

long * Action_TrialCardSynchronize::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Action_TrialCardSynchronize",uVar2,StaticNew);
  return sClass;
}


/* Action_TrialCardSynchronize::GetClass() const */

long * Action_TrialCardSynchronize::GetClass(void)

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
  (*pcVar3)(plVar1,"Action_TrialCardSynchronize",uVar2,StaticNew);
  return sClass;
}


/* Action_TrialCardSynchronize::Action_TrialCardSynchronize() */

void __thiscall
Action_TrialCardSynchronize::Action_TrialCardSynchronize(Action_TrialCardSynchronize *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685a540;
  return;
}


/* Action_TrialCardSynchronize::StaticNew() */

Action_TrialCardSynchronize * Action_TrialCardSynchronize::StaticNew(void)

{
  Action_TrialCardSynchronize *this;
  
  this = ::operator_new(0x18);
  Action_TrialCardSynchronize(this);
  return this;
}


/* Action_TrialCardSynchronize::CreateIfNeed(bool&) */

Action_TrialCardSynchronize * Action_TrialCardSynchronize::CreateIfNeed(bool *param_1)

{
  ProfileMgr *this;
  long lVar1;
  Action_TrialCardSynchronize *this_00;
  
  if ((DAT_06b10720 == '\0') && (*param_1 == false)) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar1 = ProfileMgr::GetCurrentProfile(this);
    if (lVar1 != 0) {
      if (DAT_06b10720 == '\0') {
        DAT_06b10720 = '\x01';
      }
      this_00 = ::operator_new(0x18);
      *(undefined8 *)this_00 = 0;
      this_00[8] = (Action_TrialCardSynchronize)0x0;
      this_00[9] = (Action_TrialCardSynchronize)0x0;
      this_00[10] = (Action_TrialCardSynchronize)0x0;
      *(undefined4 *)(this_00 + 0xc) = 0;
      *(undefined4 *)(this_00 + 0x10) = 0;
      Action_TrialCardSynchronize(this_00);
      return this_00;
    }
  }
  return (Action_TrialCardSynchronize *)0x0;
}


/* Action_TrialCardSynchronize::Start() */

void __thiscall Action_TrialCardSynchronize::Start(Action_TrialCardSynchronize *this)

{
  TrialCardManager *this_00;
  
  this_00 = (TrialCardManager *)Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
  TrialCardManager::SynchronizeTrialData(this_00);
  (**(code **)(*(long *)this + 0x58))(this);
  return;
}

