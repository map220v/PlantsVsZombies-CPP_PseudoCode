// Class: PlantCultivateTask


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCultivateTask::StaticClassInit() */

void PlantCultivateTask::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantCultivateTask");
    (*pcVar2)(plVar1,asStack_10,FUN_03a81220,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCultivateTask::StaticGetClass() */

long * PlantCultivateTask::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantCultivateTask",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCultivateTask::GetClass() const */

long * PlantCultivateTask::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantCultivateTask",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCultivateTask::PlantCultivateTask() */

void __thiscall PlantCultivateTask::PlantCultivateTask(PlantCultivateTask *this)

{
  GeneralTask::GeneralTask((GeneralTask *)this);
  *(undefined ***)this = &PTR_GetClass_0670de30;
  return;
}


/* PlantCultivateTask::StaticNew() */

PlantCultivateTask * PlantCultivateTask::StaticNew(void)

{
  PlantCultivateTask *this;
  
  this = ::operator_new(0x30);
  PlantCultivateTask(this);
  return this;
}


/* PlantCultivateTask::~PlantCultivateTask() */

void __thiscall PlantCultivateTask::~PlantCultivateTask(PlantCultivateTask *this)

{
  *(undefined ***)this = &PTR_GetClass_0670de30;
  GeneralTask::~GeneralTask((GeneralTask *)this);
  return;
}


/* PlantCultivateTask::~PlantCultivateTask() */

void __thiscall PlantCultivateTask::~PlantCultivateTask(PlantCultivateTask *this)

{
  ~PlantCultivateTask(this);
  AK::FreeHook(this);
  return;
}


/* PlantCultivateTask::LoadTask() */

void __thiscall PlantCultivateTask::LoadTask(PlantCultivateTask *this)

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
  PlayerInfo::GetPlantCultivateTaskInfo(iVar1);
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


/* PlantCultivateTask::SaveTask() */

void __thiscall PlantCultivateTask::SaveTask(PlantCultivateTask *this)

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
  PlayerInfo::UpdatePlantCultivateTaskInfo(pPVar1,&local_40);
  return;
}

