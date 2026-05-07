// Class: NoviceSevenDaysTaskChallengeLevelListener


/* NoviceSevenDaysTaskChallengeLevelListener::~NoviceSevenDaysTaskChallengeLevelListener() */

void __thiscall
NoviceSevenDaysTaskChallengeLevelListener::~NoviceSevenDaysTaskChallengeLevelListener
          (NoviceSevenDaysTaskChallengeLevelListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670f2f0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* NoviceSevenDaysTaskChallengeLevelListener::~NoviceSevenDaysTaskChallengeLevelListener() */

void __thiscall
NoviceSevenDaysTaskChallengeLevelListener::~NoviceSevenDaysTaskChallengeLevelListener
          (NoviceSevenDaysTaskChallengeLevelListener *this)

{
  ~NoviceSevenDaysTaskChallengeLevelListener(this);
  AK::FreeHook(this);
  return;
}


/* NoviceSevenDaysTaskChallengeLevelListener::NoviceSevenDaysTaskChallengeLevelListener() */

void __thiscall
NoviceSevenDaysTaskChallengeLevelListener::NoviceSevenDaysTaskChallengeLevelListener
          (NoviceSevenDaysTaskChallengeLevelListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670f2f0;
  return;
}


/* NoviceSevenDaysTaskChallengeLevelListener::StaticNew() */

NoviceSevenDaysTaskChallengeLevelListener *
NoviceSevenDaysTaskChallengeLevelListener::StaticNew(void)

{
  NoviceSevenDaysTaskChallengeLevelListener *this;
  
  this = ::operator_new(0x18);
  NoviceSevenDaysTaskChallengeLevelListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysTaskChallengeLevelListener::StaticClassInit() */

void NoviceSevenDaysTaskChallengeLevelListener::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"NoviceSevenDaysTaskChallengeLevelListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a87524,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NoviceSevenDaysTaskChallengeLevelListener::StaticGetClass() */

long * NoviceSevenDaysTaskChallengeLevelListener::StaticGetClass(void)

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
  uVar2 = GeneralTaskListener::StaticGetClass();
  (*pcVar3)(plVar1,"NoviceSevenDaysTaskChallengeLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NoviceSevenDaysTaskChallengeLevelListener::GetClass() const */

long * NoviceSevenDaysTaskChallengeLevelListener::GetClass(void)

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
  uVar2 = GeneralTaskListener::StaticGetClass();
  (*pcVar3)(plVar1,"NoviceSevenDaysTaskChallengeLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysTaskChallengeLevelListener::JumpToTargetTask() */

void NoviceSevenDaysTaskChallengeLevelListener::JumpToTargetTask(void)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  QuickJumpUtil *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"egypt11");
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  cVar1 = ProfileUtils::HasCompletedLevel(asStack_10,false,pPVar2);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 != '\0') {
    this_00 = (QuickJumpUtil *)Sexy::LazySingleton<QuickJumpUtil>::GetInstancePtr();
    QuickJumpUtil::ShowChallengeLevel(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 != '\0');
}


/* NoviceSevenDaysTaskChallengeLevelListener::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall
NoviceSevenDaysTaskChallengeLevelListener::onLevelEnded
          (NoviceSevenDaysTaskChallengeLevelListener *this,LevelDefinitionForTask *param_1)

{
  bool bVar1;
  RtObject *this_00;
  NoviceSevenDaysTaskWorldLevelData *pNVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x10) + 0x20));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
    pNVar2 = Sexy::RtObject::Cast<NoviceSevenDaysTaskWorldLevelData>(this_00);
    if ((((pNVar2 != (NoviceSevenDaysTaskWorldLevelData *)0x0) &&
         (param_1[0x11] != (LevelDefinitionForTask)0x0)) &&
        ((pNVar2[0x8e] == (NoviceSevenDaysTaskWorldLevelData)0x0 ||
         (param_1[0x21] != (LevelDefinitionForTask)0x0)))) &&
       ((*(int *)(pNVar2 + 0x94) == -1 || (*(int *)(pNVar2 + 0x94) == *(int *)(param_1 + 0x14))))) {
      (**(code **)(*(long *)this + 0x58))(this,1);
      return;
    }
  }
  return;
}


/* NoviceSevenDaysTaskChallengeLevelListener::RegisterListener(GeneralTask*) */

void __thiscall
NoviceSevenDaysTaskChallengeLevelListener::RegisterListener
          (NoviceSevenDaysTaskChallengeLevelListener *this,GeneralTask *param_1)

{
  undefined *puVar1;
  bool bVar2;
  RtObject *this_00;
  NoviceSevenDaysTaskWorldLevelData *pNVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x10) + 0x20));
  if (bVar2) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
    pNVar3 = Sexy::RtObject::Cast<NoviceSevenDaysTaskWorldLevelData>(this_00);
    puVar1 = gMessageRouter;
    if (pNVar3 != (NoviceSevenDaysTaskWorldLevelData *)0x0) {
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onLevelEnded);
      local_30 = local_8;
      local_40 = local_18;
      uStack_38 = uStack_10;
      MessageRouter::
      Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<NoviceSevenDaysTaskChallengeLevelListener,void(NoviceSevenDaysTaskChallengeLevelListener::*)(LevelDefinitionForTask*)>>
                ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_40);
      this[8] = (NoviceSevenDaysTaskChallengeLevelListener)0x1;
      return;
    }
  }
  return;
}

