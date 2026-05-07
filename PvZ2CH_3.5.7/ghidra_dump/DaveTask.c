// Class: DaveTask


/* DaveTask::StaticNew() */

undefined8 DaveTask::StaticNew(void)

{
  return 0;
}


/* DaveTask::TaskCompleted() */

void __thiscall DaveTask::TaskCompleted(DaveTask *this)

{
  *(undefined4 *)(this + 0x18) = 3;
  (**(code **)(*(long *)this + 0x50))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTask::StaticClassInit() */

void DaveTask::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTask");
    (*pcVar2)(plVar1,asStack_10,FUN_03a0c5a4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTask::StaticGetClass() */

long * DaveTask::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"DaveTask",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTask::GetClass() const */

long * DaveTask::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"DaveTask",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTask::DaveTask() */

void __thiscall DaveTask::DaveTask(DaveTask *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066f9c30;
  Set8BytesTo0(this + 0x20);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  this[0x38] = (DaveTask)0x0;
  return;
}


/* DaveTask::~DaveTask() */

void __thiscall DaveTask::~DaveTask(DaveTask *this)

{
  *(undefined ***)this = &PTR_GetClass_066f9c30;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  std::string::~string((string *)(this + 0x20));
  nop();
  return;
}


/* DaveTask::~DaveTask() */

void __thiscall DaveTask::~DaveTask(DaveTask *this)

{
  ~DaveTask(this);
  AK::FreeHook(this);
  return;
}


/* DaveTask::Init(Sexy::RtWeakPtr<DaveTaskData>) */

void __thiscall DaveTask::Init(DaveTask *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  long lVar1;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  *(undefined4 *)(this + 8) = *(undefined4 *)(lVar1 + 8);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(lVar1 + 0xc);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  this[0x10] = *(DaveTask *)(lVar1 + 0x44);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x30),(RtWeakPtr *)param_2);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  thunk_FUN_05475e00(this + 0x20,lVar1 + 0x48);
  (**(code **)(*(long *)this + 0x58))(this);
  if (1 < *(uint *)(this + 0x18)) {
    return;
  }
  (**(code **)(*(long *)this + 0x80))(this);
  return;
}


/* DaveTask::LoadState() */

void __thiscall DaveTask::LoadState(DaveTask *this)

{
  bool bVar1;
  int iVar2;
  ProfileMgr *this_00;
  undefined8 uVar3;
  int local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined8 local_8;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar2 = ProfileMgr::GetCurrentProfile(this_00);
  bVar1 = std::operator==((string *)(this + 0x20),"PENNY");
  if (bVar1) {
    PlayerInfo::GetPennyTaskSaveInfo(iVar2);
    iVar2 = *(int *)(this + 8);
  }
  else {
    PlayerInfo::GetDaveTaskSaveInfo(iVar2);
    iVar2 = *(int *)(this + 8);
  }
  if (local_18 != iVar2) {
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
    uVar3 = LawnApp::GetRealServerTime(gLawnApp);
    *(undefined8 *)(this + 0x28) = uVar3;
    return;
  }
  *(undefined4 *)(this + 0x14) = local_10;
  *(undefined4 *)(this + 0x18) = local_c;
  *(undefined8 *)(this + 0x28) = local_8;
  return;
}


/* DaveTask::SaveState() */

void __thiscall DaveTask::SaveState(DaveTask *this)

{
  bool bVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined8 local_8;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  local_c = *(undefined4 *)(this + 0x18);
  local_8 = *(undefined8 *)(this + 0x28);
  local_18 = *(undefined4 *)(this + 8);
  uStack_14 = *(undefined4 *)(this + 0xc);
  local_10 = *(undefined4 *)(this + 0x14);
  bVar1 = std::operator==((string *)(this + 0x20),"PENNY");
  local_40 = CONCAT44(uStack_14,local_18);
  uStack_38 = CONCAT44(local_c,local_10);
  if (!bVar1) {
    local_30 = local_8;
    PlayerInfo::UpdateDaveTaskSaveInfo(pPVar2,&local_40);
    return;
  }
  local_30 = local_8;
  PlayerInfo::UpdatePennyTaskSaveInfo(pPVar2,&local_40);
  return;
}


/* DaveTask::ForceSetState(int) */

void __thiscall DaveTask::ForceSetState(DaveTask *this,int param_1)

{
  ProfileMgr *this_00;
  long lVar1;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  if (param_1 != 3) {
    return;
  }
  *(undefined4 *)(this + 0x18) = 3;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(lVar1 + 0x40);
  (**(code **)(*(long *)this + 0x88))(this);
  (**(code **)(*(long *)this + 0x50))(this);
  return;
}


/* DaveTask::GetRemainTime() */

long __thiscall DaveTask::GetRemainTime(DaveTask *this)

{
  int iVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar3;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = *(int *)(this + 0xc);
  if (iVar1 == 1) {
    cVar2 = PlayerInfo::IsInThisWeek(this_01,*(long *)(this + 0x28));
    if (cVar2 != '\0') {
      lVar3 = LawnApp::GetRealServerTime(gLawnApp);
      return ((((int)lVar3 + -0x4d580) / 0x93a80) * 0x93a80 + 0xe1000) - lVar3;
    }
  }
  else {
    if (iVar1 == 2) {
      return 0x7fffffff;
    }
    if ((iVar1 == 0) &&
       (cVar2 = ActivityCollectionLuckyChest::IsToday
                          ((ActivityCollectionLuckyChest *)this_01,*(long *)(this + 0x28)),
       cVar2 != '\0')) {
      lVar3 = LawnApp::GetRealServerTime(gLawnApp);
      return ((((int)lVar3 + 0x7080) / 0x15180) * 0x15180 + 0xe100) - lVar3;
    }
  }
  return 0;
}

