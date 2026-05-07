// Class: GiftFoReturnTask


/* GiftFoReturnTask::IsLocked() */

bool __thiscall GiftFoReturnTask::IsLocked(GiftFoReturnTask *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x30);
  lVar1 = LawnApp::GetRealServerTime(gLawnApp);
  return lVar1 < lVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiftFoReturnTask::StaticClassInit() */

void GiftFoReturnTask::StaticClassInit(void)

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
    std::string::string(asStack_10,"GiftFoReturnTask");
    (*pcVar2)(plVar1,asStack_10,FUN_03a81434,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GiftFoReturnTask::StaticGetClass() */

long * GiftFoReturnTask::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GiftFoReturnTask",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GiftFoReturnTask::GetClass() const */

long * GiftFoReturnTask::GetClass(void)

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
  (*pcVar3)(plVar1,"GiftFoReturnTask",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GiftFoReturnTask::GiftFoReturnTask() */

void __thiscall GiftFoReturnTask::GiftFoReturnTask(GiftFoReturnTask *this)

{
  GeneralTask::GeneralTask((GeneralTask *)this);
  *(undefined ***)this = &PTR_GetClass_0670dec0;
  return;
}


/* GiftFoReturnTask::StaticNew() */

GiftFoReturnTask * GiftFoReturnTask::StaticNew(void)

{
  GiftFoReturnTask *this;
  
  this = ::operator_new(0x38);
  GiftFoReturnTask(this);
  return this;
}


/* GiftFoReturnTask::~GiftFoReturnTask() */

void __thiscall GiftFoReturnTask::~GiftFoReturnTask(GiftFoReturnTask *this)

{
  *(undefined ***)this = &PTR_GetClass_0670dec0;
  GeneralTask::~GeneralTask((GeneralTask *)this);
  return;
}


/* GiftFoReturnTask::~GiftFoReturnTask() */

void __thiscall GiftFoReturnTask::~GiftFoReturnTask(GiftFoReturnTask *this)

{
  ~GiftFoReturnTask(this);
  AK::FreeHook(this);
  return;
}


/* GiftFoReturnTask::LoadTask() */

void __thiscall GiftFoReturnTask::LoadTask(GiftFoReturnTask *this)

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
  PlayerInfo::GetGiftFoReturnTaskInfo(iVar1);
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


/* GiftFoReturnTask::SaveTask() */

void __thiscall GiftFoReturnTask::SaveTask(GiftFoReturnTask *this)

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
  PlayerInfo::UpdateGiftFoReturnTaskInfo(pPVar1,&local_40);
  return;
}

