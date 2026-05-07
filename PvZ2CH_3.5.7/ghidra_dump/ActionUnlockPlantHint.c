// Class: ActionUnlockPlantHint


/* ActionUnlockPlantHint::StaticGetClass() */

long * ActionUnlockPlantHint::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionUnlockPlantHint",uVar2,StaticNew);
  return sClass;
}


/* ActionUnlockPlantHint::GetClass() const */

long * ActionUnlockPlantHint::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionUnlockPlantHint",uVar2,StaticNew);
  return sClass;
}


/* ActionUnlockPlantHint::ActionUnlockPlantHint() */

void __thiscall ActionUnlockPlantHint::ActionUnlockPlantHint(ActionUnlockPlantHint *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06858a40;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* ActionUnlockPlantHint::StaticNew() */

ActionUnlockPlantHint * ActionUnlockPlantHint::StaticNew(void)

{
  ActionUnlockPlantHint *this;
  
  this = ::operator_new(0x28);
  ActionUnlockPlantHint(this);
  return this;
}


/* ActionUnlockPlantHint::~ActionUnlockPlantHint() */

void __thiscall ActionUnlockPlantHint::~ActionUnlockPlantHint(ActionUnlockPlantHint *this)

{
  *(undefined ***)this = &PTR_GetClass_06858a40;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionUnlockPlantHint::~ActionUnlockPlantHint() */

void __thiscall ActionUnlockPlantHint::~ActionUnlockPlantHint(ActionUnlockPlantHint *this)

{
  ~ActionUnlockPlantHint(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionUnlockPlantHint::Start() */

void __thiscall ActionUnlockPlantHint::Start(ActionUnlockPlantHint *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined4 uVar1;
  undefined *puVar2;
  LawnApp *pLVar3;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PlayerInfo::UnlockPlant(this_02,(string *)(lVar4 + 8),false);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PlayerInfo::AddPlantStartLevel(this_02,(string *)(lVar4 + 8),0);
  pLVar3 = gLawnApp;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this_00);
  LawnApp::ShowPlantRewardDialog(pLVar3,aRStack_10,1,*(undefined4 *)(this + 0x20),0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  this[9] = (ActionUnlockPlantHint)0x1;
  puVar2 = gMessageRouter;
  uVar1 = *(undefined4 *)(this + 0x20);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  FUN_05475d88(aRStack_10,lVar4 + 8);
  MessageRouter::Post<int,std::string_const&,int,std::string>
            ((MessageRouter *)puVar2,Message::PlantUnLockByStar,uVar1,aRStack_10);
  std::string::~string((string *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

