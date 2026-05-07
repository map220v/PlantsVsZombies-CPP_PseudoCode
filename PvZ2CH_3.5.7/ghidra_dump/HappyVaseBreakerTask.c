// Class: HappyVaseBreakerTask


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyVaseBreakerTask::StaticClassInit() */

void HappyVaseBreakerTask::StaticClassInit(void)

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
    std::string::string(asStack_10,"HappyVaseBreakerTask");
    (*pcVar2)(plVar1,asStack_10,FUN_03a7fabc,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HappyVaseBreakerTask::StaticGetClass() */

long * HappyVaseBreakerTask::StaticGetClass(void)

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
  uVar2 = GeneralTask::StaticGetClass();
  (*pcVar3)(plVar1,"HappyVaseBreakerTask",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HappyVaseBreakerTask::GetClass() const */

long * HappyVaseBreakerTask::GetClass(void)

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
  uVar2 = GeneralTask::StaticGetClass();
  (*pcVar3)(plVar1,"HappyVaseBreakerTask",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HappyVaseBreakerTask::HappyVaseBreakerTask() */

void __thiscall HappyVaseBreakerTask::HappyVaseBreakerTask(HappyVaseBreakerTask *this)

{
  GeneralTask::GeneralTask((GeneralTask *)this);
  *(undefined ***)this = &PTR_GetClass_0670d800;
  return;
}


/* HappyVaseBreakerTask::StaticNew() */

HappyVaseBreakerTask * HappyVaseBreakerTask::StaticNew(void)

{
  HappyVaseBreakerTask *this;
  
  this = ::operator_new(0x30);
  HappyVaseBreakerTask(this);
  return this;
}


/* HappyVaseBreakerTask::~HappyVaseBreakerTask() */

void __thiscall HappyVaseBreakerTask::~HappyVaseBreakerTask(HappyVaseBreakerTask *this)

{
  *(undefined ***)this = &PTR_GetClass_0670d800;
  GeneralTask::~GeneralTask((GeneralTask *)this);
  return;
}


/* HappyVaseBreakerTask::~HappyVaseBreakerTask() */

void __thiscall HappyVaseBreakerTask::~HappyVaseBreakerTask(HappyVaseBreakerTask *this)

{
  ~HappyVaseBreakerTask(this);
  AK::FreeHook(this);
  return;
}


/* HappyVaseBreakerTask::LoadTask() */

void __thiscall HappyVaseBreakerTask::LoadTask(HappyVaseBreakerTask *this)

{
  int iVar1;
  ProfileMgr *this_00;
  long lVar2;
  undefined8 uVar3;
  int local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined8 local_8;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar1 = ProfileMgr::GetCurrentProfile(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  PlayerInfo::GetHappyVaseBreakerTaskInfo(iVar1);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  if (local_18 != *(int *)(lVar2 + 8)) {
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0;
    uVar3 = LawnApp::GetRealServerTime(gLawnApp);
    *(undefined8 *)(this + 0x18) = uVar3;
    return;
  }
  *(undefined4 *)(this + 0x10) = local_10;
  *(undefined4 *)(this + 0x14) = local_c;
  *(undefined8 *)(this + 0x18) = local_8;
  return;
}


/* HappyVaseBreakerTask::SaveTask() */

void __thiscall HappyVaseBreakerTask::SaveTask(HappyVaseBreakerTask *this)

{
  ProfileMgr *this_00;
  PlayerInfo *pPVar1;
  long lVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  local_18 = *(undefined4 *)(lVar2 + 8);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  uStack_14 = *(undefined4 *)(lVar2 + 0xc);
  local_c = *(undefined4 *)(this + 0x14);
  local_10 = *(undefined4 *)(this + 0x10);
  uStack_38 = *(undefined8 *)(this + 0x10);
  local_30 = *(undefined8 *)(this + 0x18);
  local_40 = CONCAT44(uStack_14,local_18);
  PlayerInfo::UpdateHappyVaseBreakerTaskInfo(pPVar1,&local_40);
  return;
}

