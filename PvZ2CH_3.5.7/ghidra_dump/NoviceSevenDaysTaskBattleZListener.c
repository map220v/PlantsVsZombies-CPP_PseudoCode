// Class: NoviceSevenDaysTaskBattleZListener


/* NoviceSevenDaysTaskBattleZListener::~NoviceSevenDaysTaskBattleZListener() */

void __thiscall
NoviceSevenDaysTaskBattleZListener::~NoviceSevenDaysTaskBattleZListener
          (NoviceSevenDaysTaskBattleZListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670edf0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* NoviceSevenDaysTaskBattleZListener::~NoviceSevenDaysTaskBattleZListener() */

void __thiscall
NoviceSevenDaysTaskBattleZListener::~NoviceSevenDaysTaskBattleZListener
          (NoviceSevenDaysTaskBattleZListener *this)

{
  ~NoviceSevenDaysTaskBattleZListener(this);
  AK::FreeHook(this);
  return;
}


/* NoviceSevenDaysTaskBattleZListener::NoviceSevenDaysTaskBattleZListener() */

void __thiscall
NoviceSevenDaysTaskBattleZListener::NoviceSevenDaysTaskBattleZListener
          (NoviceSevenDaysTaskBattleZListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670edf0;
  return;
}


/* NoviceSevenDaysTaskBattleZListener::StaticNew() */

NoviceSevenDaysTaskBattleZListener * NoviceSevenDaysTaskBattleZListener::StaticNew(void)

{
  NoviceSevenDaysTaskBattleZListener *this;
  
  this = ::operator_new(0x18);
  NoviceSevenDaysTaskBattleZListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysTaskBattleZListener::StaticClassInit() */

void NoviceSevenDaysTaskBattleZListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"NoviceSevenDaysTaskBattleZListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a85cc4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NoviceSevenDaysTaskBattleZListener::StaticGetClass() */

long * NoviceSevenDaysTaskBattleZListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NoviceSevenDaysTaskBattleZListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NoviceSevenDaysTaskBattleZListener::GetClass() const */

long * NoviceSevenDaysTaskBattleZListener::GetClass(void)

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
  (*pcVar3)(plVar1,"NoviceSevenDaysTaskBattleZListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysTaskBattleZListener::JumpToTargetTask() */

void NoviceSevenDaysTaskBattleZListener::JumpToTargetTask(void)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"egypt12");
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  cVar1 = ProfileUtils::HasCompletedLevel(asStack_10,false,pPVar2);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 != '\0') {
    Sexy::LazySingleton<QuickJumpUtil>::GetInstancePtr();
    QuickJumpUtil::ShowBattleZ();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 != '\0');
}


/* NoviceSevenDaysTaskBattleZListener::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall
NoviceSevenDaysTaskBattleZListener::onLevelEnded
          (NoviceSevenDaysTaskBattleZListener *this,LevelDefinitionForTask *param_1)

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
    if (((pNVar2 != (NoviceSevenDaysTaskWorldLevelData *)0x0) &&
        (param_1[0xe] != (LevelDefinitionForTask)0x0)) &&
       ((pNVar2[0x8e] == (NoviceSevenDaysTaskWorldLevelData)0x0 ||
        (param_1[0x21] != (LevelDefinitionForTask)0x0)))) {
      (**(code **)(*(long *)this + 0x58))(this,1);
      return;
    }
  }
  return;
}


/* NoviceSevenDaysTaskBattleZListener::RegisterListener(GeneralTask*) */

void __thiscall
NoviceSevenDaysTaskBattleZListener::RegisterListener
          (NoviceSevenDaysTaskBattleZListener *this,GeneralTask *param_1)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelEnded);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<NoviceSevenDaysTaskBattleZListener,void(NoviceSevenDaysTaskBattleZListener::*)(LevelDefinitionForTask*)>>
            ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_40);
  this[8] = (NoviceSevenDaysTaskBattleZListener)0x1;
  return;
}

