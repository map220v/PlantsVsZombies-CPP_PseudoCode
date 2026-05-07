// Class: GeneralTaskStarObtainWithCheckListener


/* GeneralTaskStarObtainWithCheckListener::~GeneralTaskStarObtainWithCheckListener() */

void __thiscall
GeneralTaskStarObtainWithCheckListener::~GeneralTaskStarObtainWithCheckListener
          (GeneralTaskStarObtainWithCheckListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670e970;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskStarObtainWithCheckListener::~GeneralTaskStarObtainWithCheckListener() */

void __thiscall
GeneralTaskStarObtainWithCheckListener::~GeneralTaskStarObtainWithCheckListener
          (GeneralTaskStarObtainWithCheckListener *this)

{
  ~GeneralTaskStarObtainWithCheckListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskStarObtainWithCheckListener::GeneralTaskStarObtainWithCheckListener() */

void __thiscall
GeneralTaskStarObtainWithCheckListener::GeneralTaskStarObtainWithCheckListener
          (GeneralTaskStarObtainWithCheckListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670e970;
  return;
}


/* GeneralTaskStarObtainWithCheckListener::StaticNew() */

GeneralTaskStarObtainWithCheckListener * GeneralTaskStarObtainWithCheckListener::StaticNew(void)

{
  GeneralTaskStarObtainWithCheckListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskStarObtainWithCheckListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskStarObtainWithCheckListener::StaticClassInit() */

void GeneralTaskStarObtainWithCheckListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskStarObtainWithCheckListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a846d4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskStarObtainWithCheckListener::StaticGetClass() */

long * GeneralTaskStarObtainWithCheckListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskStarObtainWithCheckListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskStarObtainWithCheckListener::GetClass() const */

long * GeneralTaskStarObtainWithCheckListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskStarObtainWithCheckListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskStarObtainWithCheckListener::OnObtainStar(int) */

void GeneralTaskStarObtainWithCheckListener::OnObtainStar(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  ProfileMgr *this;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar1 = ProfileMgr::GetCurrentProfile(this);
  uVar2 = PlayerInfo::GetNumStars(iVar1);
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x60))((long *)(ulong)(uint)param_1,uVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskStarObtainWithCheckListener::JumpToTargetTask() */

void GeneralTaskStarObtainWithCheckListener::JumpToTargetTask(void)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"egypt3");
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  cVar1 = ProfileUtils::HasCompletedLevel(asStack_10,false,pPVar2);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 != '\0') {
    Sexy::LazySingleton<QuickJumpUtil>::GetInstancePtr();
    WorldMap_StarConvert::OnButtonClicked();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 != '\0');
}


/* GeneralTaskStarObtainWithCheckListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskStarObtainWithCheckListener::RegisterListener
          (GeneralTaskStarObtainWithCheckListener *this,GeneralTask *param_1)

{
  undefined *puVar1;
  int iVar2;
  ProfileMgr *this_00;
  long lVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar2 = ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = PlayerInfo::GetNumStars(iVar2);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x20));
  puVar1 = gMessageRouter;
  if (iVar2 < *(int *)(lVar3 + 0x28)) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnObtainStar);
    local_30 = local_8;
    local_40 = local_18;
    uStack_38 = uStack_10;
    MessageRouter::
    Subscribe<int,Sexy::CBMemberTranslatorX<GeneralTaskStarObtainWithCheckListener,void(GeneralTaskStarObtainWithCheckListener::*)(int)>>
              ((MessageRouter *)puVar1,Message::ObtainStar,&local_40);
    this[8] = (GeneralTaskStarObtainWithCheckListener)0x1;
    return;
  }
  (**(code **)(*(long *)this + 0x60))(this,iVar2);
  this[8] = (GeneralTaskStarObtainWithCheckListener)0x0;
  return;
}

