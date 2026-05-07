// Class: DangerRoomModernDesigner


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModernDesigner::refillRowsAllowed(std::vector<int, std::allocator<int> >&) const */

void __thiscall
DangerRoomModernDesigner::refillRowsAllowed(DangerRoomModernDesigner *this,vector *param_1)

{
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)param_1);
  local_c = 0;
  do {
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)param_1,&local_c);
    local_c = local_c + 1;
  } while (local_c < 5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModernDesigner::StaticClassInit() */

void DangerRoomModernDesigner::StaticClassInit(void)

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
    std::string::string(asStack_10,"DangerRoomModernDesigner");
    (*pcVar2)(plVar1,asStack_10,FUN_03cadb90,0xb0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomModernDesigner::StaticGetClass() */

long * DangerRoomModernDesigner::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DangerRoomModernDesigner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomModernDesigner::GetClass() const */

long * DangerRoomModernDesigner::GetClass(void)

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
  (*pcVar3)(plVar1,"DangerRoomModernDesigner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModernDesigner::DangerRoomModernDesigner() */

void __thiscall DangerRoomModernDesigner::DangerRoomModernDesigner(DangerRoomModernDesigner *this)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DangerRoomLevelDesigner::DangerRoomLevelDesigner((DangerRoomLevelDesigner *)this);
  *(undefined ***)this = &PTR_GetClass_0675c7e0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x10));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x18));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x20));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x28));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x30));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x38));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x40));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x48));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x50));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x58));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x60));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x68));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x70));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x78));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x80));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x88));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x90));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  DVec2::DVec2((DVec2 *)&local_10,1.0,100.0);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x10) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomModernDesigner::StaticNew() */

DangerRoomModernDesigner * DangerRoomModernDesigner::StaticNew(void)

{
  DangerRoomModernDesigner *this;
  
  this = ::operator_new(0xb0);
  DangerRoomModernDesigner(this);
  return this;
}


/* DangerRoomModernDesigner::~DangerRoomModernDesigner() */

void __thiscall DangerRoomModernDesigner::~DangerRoomModernDesigner(DangerRoomModernDesigner *this)

{
  *(undefined ***)this = &PTR_GetClass_0675c7e0;
  std::vector<ConstWeightedOption<std::string>,std::allocator<ConstWeightedOption<std::string>>>::
  ~vector((vector<ConstWeightedOption<std::string>,std::allocator<ConstWeightedOption<std::string>>>
           *)(this + 0x98));
  DangerRoomLevelDesigner::~DangerRoomLevelDesigner((DangerRoomLevelDesigner *)this);
  return;
}


/* DangerRoomModernDesigner::~DangerRoomModernDesigner() */

void __thiscall DangerRoomModernDesigner::~DangerRoomModernDesigner(DangerRoomModernDesigner *this)

{
  ~DangerRoomModernDesigner(this);
  AK::FreeHook(this);
  return;
}


/* DangerRoomModernDesigner::ensureRowCountAvailable(std::vector<int, std::allocator<int> >&, int)
   const */

void __thiscall
DangerRoomModernDesigner::ensureRowCountAvailable
          (DangerRoomModernDesigner *this,vector *param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_03cad30c(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  if ((ulong)(long)param_2 <= uVar1) {
    return;
  }
  refillRowsAllowed(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModernDesigner::pickNextRow(std::vector<int, std::allocator<int> >&, Sexy::MTRand&)
   const */

void __thiscall
DangerRoomModernDesigner::pickNextRow
          (DangerRoomModernDesigner *this,vector *param_1,MTRand *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = std::vector<int,std::allocator<int>>::empty((vector<int,std::allocator<int>> *)param_1);
  if (cVar2 != '\0') {
    refillRowsAllowed(this,param_1);
  }
  iVar3 = FUN_03cad30c(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  iVar3 = Sexy::MTRand::Next(param_2,iVar3);
  puVar4 = (undefined4 *)FUN_03cad318(*(undefined8 *)param_1,(long)iVar3);
  uVar1 = *puVar4;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  local_18 = __gnu_cxx::__normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>::
             operator+((__normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>> *)
                       &local_20,(long)iVar3);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<int,std::allocator<int>>::erase((vector<int,std::allocator<int>> *)param_1,local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomModernDesigner::GenerateEvents(int, Sexy::MTRand&, WaveManagerProperties*) const */

void __thiscall
DangerRoomModernDesigner::GenerateEvents
          (DangerRoomModernDesigner *this,int param_1,MTRand *param_2,WaveManagerProperties *param_3
          )

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x0;
  vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
  *this_00;
  DangerRoomModernDesigner *pDVar6;
  WaveManagerProperties *pWVar7;
  int iVar8;
  float fVar9;
  int local_8c;
  string asStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  vector<ConstWeightedOption<std::string>,std::allocator<ConstWeightedOption<std::string>>>
  avStack_50 [24];
  undefined8 local_38;
  undefined8 local_30;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(float *)(this + 0x10) <= (float)param_1) {
    pWVar7 = param_3;
    fVar9 = (float)ValueRange::GetTimeForValue((ValueRange *)(this + 0x10),(float)param_1);
    local_8c = DangerRoomLevelDesignerHelpers::CalculateLevelValue
                         (fVar9,(ValueRange *)(this + 0x18),(ValueRange *)(this + 0x20));
    uVar3 = DangerRoomLevelDesignerHelpers::CalculateLevelValue
                      (fVar9,(ValueRange *)(this + 0x38),(ValueRange *)(this + 0x40));
    lVar4 = FUN_03cad2c4(*(undefined8 *)(this + 0x98),*(undefined8 *)(this + 0xa0));
    pDVar6 = this + 0x98;
    if (lVar4 == 0) {
      pDVar6 = (DangerRoomModernDesigner *)&DAT_06ad2d90;
    }
    std::vector<ConstWeightedOption<std::string>,std::allocator<ConstWeightedOption<std::string>>>::
    vector(avStack_50,(vector *)pDVar6);
    WeightedOption::RollMultipleWeightedOptions<ConstWeightedOption<std::string>>
              ((WeightedOption *)avStack_50,(vector *)(uVar3 & 0xffffffff),(int)param_2,
               (MTRand *)pWVar7);
    lVar4 = FUN_03cad2c4(local_38,local_30);
    if (lVar4 == 0) {
      std::vector<ConstWeightedOption<std::string>,std::allocator<ConstWeightedOption<std::string>>>
      ::~vector((vector<ConstWeightedOption<std::string>,std::allocator<ConstWeightedOption<std::string>>>
                 *)&local_38);
      std::vector<ConstWeightedOption<std::string>,std::allocator<ConstWeightedOption<std::string>>>
      ::~vector(avStack_50);
    }
    else {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      if (local_8c < *(int *)(param_3 + 0x2c)) {
        do {
          iVar1 = FUN_03cad2c4(local_38,local_30);
          uVar5 = Sexy::MTRand::Next(param_2,iVar1);
          lVar4 = FUN_03cad2f4(local_38,uVar5);
          FUN_05475d88(asStack_68,lVar4 + 8);
          iVar1 = DangerRoomLevelDesignerHelpers::CalculateLevelValue
                            (fVar9,(ValueRange *)(this + 0x48),(ValueRange *)(this + 0x50));
          ensureRowCountAvailable(this,(vector *)avStack_20,iVar1);
          if (0 < iVar1) {
            iVar8 = 0;
            do {
              uVar5 = SpawnModernPortalsWaveActionProps::StaticGetClass();
              iVar8 = iVar8 + 1;
              GameObject::Create(uVar5,0x35);
              nop();
              uVar2 = pickNextRow(this,(vector *)avStack_20,param_2);
              *(undefined4 *)(extraout_x0 + 0x54) = uVar2;
              uVar2 = DangerRoomLevelDesignerHelpers::CalculateLevelValue
                                (fVar9,(ValueRange *)(this + 0x58),(ValueRange *)(this + 0x60));
              *(undefined4 *)(extraout_x0 + 0x58) = uVar2;
              thunk_FUN_05475e00(extraout_x0 + 0x60,asStack_68);
              uVar2 = DangerRoomLevelDesignerHelpers::CalculateLevelValue
                                (fVar9,(ValueRange *)(this + 0x68),(ValueRange *)(this + 0x70));
              *(undefined4 *)(extraout_x0 + 0x68) = uVar2;
              uVar2 = DangerRoomLevelDesignerHelpers::CalculateLevelValue
                                (fVar9,(ValueRange *)(this + 0x78),(ValueRange *)(this + 0x80));
              *(undefined4 *)(extraout_x0 + 0x6c) = uVar2;
              uVar2 = DangerRoomLevelDesignerHelpers::CalculateLevelValue
                                (fVar9,(ValueRange *)(this + 0x88),(ValueRange *)(this + 0x90));
              *(undefined4 *)(extraout_x0 + 0x70) = uVar2;
              this_00 = (vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
                         *)FUN_03cad300(*(undefined8 *)(param_3 + 0x10),(long)local_8c);
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        (aRStack_58,(RtWeakPtrBase *)aRStack_60);
              std::
              vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
              ::push_back(this_00,(RtWeakPtr *)aRStack_58);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
            } while (iVar8 != iVar1);
          }
          iVar1 = DangerRoomLevelDesignerHelpers::CalculateLevelValue
                            (fVar9,(ValueRange *)(this + 0x28),(ValueRange *)(this + 0x30));
          local_8c = local_8c + iVar1;
          std::string::~string(asStack_68);
        } while (local_8c < *(int *)(param_3 + 0x2c));
      }
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
      std::vector<ConstWeightedOption<std::string>,std::allocator<ConstWeightedOption<std::string>>>
      ::~vector((vector<ConstWeightedOption<std::string>,std::allocator<ConstWeightedOption<std::string>>>
                 *)&local_38);
      std::vector<ConstWeightedOption<std::string>,std::allocator<ConstWeightedOption<std::string>>>
      ::~vector(avStack_50);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

