// Class: DangerRoomSteamDesigner


/* DangerRoomSteamDesigner::~DangerRoomSteamDesigner() */

void __thiscall DangerRoomSteamDesigner::~DangerRoomSteamDesigner(DangerRoomSteamDesigner *this)

{
  *(undefined ***)this = &PTR_GetClass_0661f7a0;
  DangerRoomLevelDesigner::~DangerRoomLevelDesigner((DangerRoomLevelDesigner *)this);
  return;
}


/* DangerRoomSteamDesigner::~DangerRoomSteamDesigner() */

void __thiscall DangerRoomSteamDesigner::~DangerRoomSteamDesigner(DangerRoomSteamDesigner *this)

{
  ~DangerRoomSteamDesigner(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSteamDesigner::StaticClassInit() */

void DangerRoomSteamDesigner::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SmokeManholeSpawnInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0340797c,0x34,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ManholePipelineSpawnInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_034074a0,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DangerRoomSteamDesigner");
    (*pcVar3)(plVar2,asStack_10,FUN_03407d08,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomSteamDesigner::StaticGetClass() */

long * DangerRoomSteamDesigner::StaticGetClass(void)

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
  uVar2 = DangerRoomLevelDesigner::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomSteamDesigner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomSteamDesigner::GetClass() const */

long * DangerRoomSteamDesigner::GetClass(void)

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
  uVar2 = DangerRoomLevelDesigner::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomSteamDesigner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSteamDesigner::DangerRoomSteamDesigner() */

void __thiscall DangerRoomSteamDesigner::DangerRoomSteamDesigner(DangerRoomSteamDesigner *this)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DangerRoomLevelDesigner::DangerRoomLevelDesigner((DangerRoomLevelDesigner *)this);
  *(undefined ***)this = &PTR_GetClass_0661f7a0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x10));
  SmokeManholeSpawnInfo::SmokeManholeSpawnInfo((SmokeManholeSpawnInfo *)(this + 0x18));
  ManholePipelineSpawnInfo::ManholePipelineSpawnInfo((ManholePipelineSpawnInfo *)(this + 0x4c));
  DVec2::DVec2((DVec2 *)&local_10,1.0,100.0);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x10) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomSteamDesigner::StaticNew() */

DangerRoomSteamDesigner * DangerRoomSteamDesigner::StaticNew(void)

{
  DangerRoomSteamDesigner *this;
  
  this = ::operator_new(0x98);
  DangerRoomSteamDesigner(this);
  return this;
}

