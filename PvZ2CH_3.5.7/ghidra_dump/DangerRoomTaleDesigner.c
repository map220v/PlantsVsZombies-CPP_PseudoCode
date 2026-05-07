// Class: DangerRoomTaleDesigner


/* DangerRoomTaleDesigner::~DangerRoomTaleDesigner() */

void __thiscall DangerRoomTaleDesigner::~DangerRoomTaleDesigner(DangerRoomTaleDesigner *this)

{
  *(undefined ***)this = &PTR_GetClass_0661f860;
  DangerRoomLevelDesigner::~DangerRoomLevelDesigner((DangerRoomLevelDesigner *)this);
  return;
}


/* DangerRoomTaleDesigner::~DangerRoomTaleDesigner() */

void __thiscall DangerRoomTaleDesigner::~DangerRoomTaleDesigner(DangerRoomTaleDesigner *this)

{
  ~DangerRoomTaleDesigner(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomTaleDesigner::StaticClassInit() */

void DangerRoomTaleDesigner::StaticClassInit(void)

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
    std::string::string(asStack_10,"DangerRoomTaleDesigner");
    (*pcVar2)(plVar1,asStack_10,FUN_03407f54,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomTaleDesigner::StaticGetClass() */

long * DangerRoomTaleDesigner::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DangerRoomTaleDesigner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomTaleDesigner::GetClass() const */

long * DangerRoomTaleDesigner::GetClass(void)

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
  (*pcVar3)(plVar1,"DangerRoomTaleDesigner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomTaleDesigner::DangerRoomTaleDesigner() */

void __thiscall DangerRoomTaleDesigner::DangerRoomTaleDesigner(DangerRoomTaleDesigner *this)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DangerRoomLevelDesigner::DangerRoomLevelDesigner((DangerRoomLevelDesigner *)this);
  *(undefined ***)this = &PTR_GetClass_0661f860;
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


/* DangerRoomTaleDesigner::StaticNew() */

DangerRoomTaleDesigner * DangerRoomTaleDesigner::StaticNew(void)

{
  DangerRoomTaleDesigner *this;
  
  this = ::operator_new(0x98);
  DangerRoomTaleDesigner(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomTaleDesigner::GenerateExtraModules(int, Sexy::MTRand&, LevelModuleManager*) const */

void __thiscall
DangerRoomTaleDesigner::GenerateExtraModules
          (DangerRoomTaleDesigner *this,int param_1,MTRand *param_2,LevelModuleManager *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long extraout_x0;
  int *piVar5;
  long extraout_x0_00;
  float fVar6;
  int local_28;
  int local_24;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined4 local_18;
  int local_14;
  float local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(float *)(this + 0x10) <= (float)param_1) {
    fVar6 = (float)ValueRange::GetTimeForValue((ValueRange *)(this + 0x10),(float)param_1);
    local_28 = DangerRoomLevelDesignerHelpers::CalculateLevelValue
                         (fVar6,(ValueRange *)(this + 0x18),(ValueRange *)(this + 0x20));
    local_24 = DangerRoomLevelDesignerHelpers::CalculateLevelValue
                         (fVar6,(ValueRange *)(this + 0x4c),(ValueRange *)(this + 0x54));
    uVar4 = SmokePollutionModuleProperties::StaticGetClass();
    GameObject::Create(uVar4,0x14);
    nop();
    std::string::append((string *)(extraout_x0 + 0x40),"SmokeManhole",(size_t)param_2);
    iVar2 = DangerRoomLevelDesignerHelpers::CalculateLevelValue
                      (fVar6,(ValueRange *)(this + 0x7c),(ValueRange *)(this + 0x84));
    *(float *)(extraout_x0 + 0x60) = (float)iVar2;
    local_18 = BoardConstants::NUMBER_OF_ROWS();
    piVar5 = eastl::min_alt<int>(&local_28,(int *)&local_18);
    iVar2 = *(int *)(this + 0x48);
    iVar1 = *piVar5;
    if (iVar2 < iVar1 + iVar2) {
      do {
        iVar3 = DangerRoomLevelDesignerHelpers::CalculateLevelValue
                          (fVar6,(ValueRange *)(this + 0x40),(ValueRange *)(this + 0x38));
        local_10 = (float)iVar3;
        local_18 = DangerRoomLevelDesignerHelpers::CalculateLevelValue
                             (fVar6,(ValueRange *)(this + 0x28),(ValueRange *)(this + 0x30));
        iVar3 = iVar2 + 1;
        local_14 = iVar2;
        std::
        vector<SmokePollutionModuleProperties::SmokeManholeInfo,std::allocator<SmokePollutionModuleProperties::SmokeManholeInfo>>
        ::push_back((vector<SmokePollutionModuleProperties::SmokeManholeInfo,std::allocator<SmokePollutionModuleProperties::SmokeManholeInfo>>
                     *)(extraout_x0 + 0x48),(SmokeManholeInfo *)&local_18);
        iVar2 = iVar3;
      } while (iVar3 < iVar1 + *(int *)(this + 0x48));
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
    LevelModuleManager::AddModuleFromProperties(param_3,(RtWeakPtr<Sexy::SoundResource> *)&local_18)
    ;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    uVar4 = ManholePipelineModuleProperties::StaticGetClass();
    GameObject::Create(uVar4,0x14);
    nop();
    *(undefined4 *)(extraout_x0_00 + 0x40) = *(undefined4 *)(this + 0x8c);
    iVar2 = DangerRoomLevelDesignerHelpers::CalculateLevelValue
                      (fVar6,(ValueRange *)(this + 0x7c),(ValueRange *)(this + 0x84));
    *(float *)(extraout_x0_00 + 0x60) = (float)iVar2;
    local_18 = BoardConstants::NUMBER_OF_ROWS();
    piVar5 = eastl::min_alt<int>(&local_24,(int *)&local_18);
    iVar2 = *(int *)(this + 0x90);
    iVar1 = *piVar5;
    if (iVar2 < iVar1 + iVar2) {
      do {
        local_18 = DangerRoomLevelDesignerHelpers::CalculateLevelValue
                             (fVar6,(ValueRange *)(this + 0x5c),(ValueRange *)(this + 100));
        local_14 = iVar2;
        local_10 = (float)DangerRoomLevelDesignerHelpers::CalculateLevelValue
                                    (fVar6,(ValueRange *)(this + 0x6c),(ValueRange *)(this + 0x74));
        iVar3 = iVar2 + 1;
        local_c = iVar2;
        std::
        vector<ManholePipelineModuleProperties::ManholePipelineInfo,std::allocator<ManholePipelineModuleProperties::ManholePipelineInfo>>
        ::push_back((vector<ManholePipelineModuleProperties::ManholePipelineInfo,std::allocator<ManholePipelineModuleProperties::ManholePipelineInfo>>
                     *)(extraout_x0_00 + 0x48),(ManholePipelineInfo *)&local_18);
        iVar2 = iVar3;
      } while (iVar3 < iVar1 + *(int *)(this + 0x90));
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
    LevelModuleManager::AddModuleFromProperties(param_3,(RtWeakPtr<Sexy::SoundResource> *)&local_18)
    ;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

