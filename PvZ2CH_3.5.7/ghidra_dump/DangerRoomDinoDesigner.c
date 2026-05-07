// Class: DangerRoomDinoDesigner


/* DangerRoomDinoDesigner::~DangerRoomDinoDesigner() */

void __thiscall DangerRoomDinoDesigner::~DangerRoomDinoDesigner(DangerRoomDinoDesigner *this)

{
  *(undefined ***)this = &PTR_GetClass_0675c6c0;
  DangerRoomLevelDesigner::~DangerRoomLevelDesigner((DangerRoomLevelDesigner *)this);
  return;
}


/* DangerRoomDinoDesigner::~DangerRoomDinoDesigner() */

void __thiscall DangerRoomDinoDesigner::~DangerRoomDinoDesigner(DangerRoomDinoDesigner *this)

{
  ~DangerRoomDinoDesigner(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomDinoDesigner::StaticClassInit() */

void DangerRoomDinoDesigner::StaticClassInit(void)

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
    std::string::string(asStack_10,"DangerRoomDinoDesigner");
    (*pcVar2)(plVar1,asStack_10,FUN_03cac8d4,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomDinoDesigner::StaticGetClass() */

long * DangerRoomDinoDesigner::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DangerRoomDinoDesigner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomDinoDesigner::GetClass() const */

long * DangerRoomDinoDesigner::GetClass(void)

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
  (*pcVar3)(plVar1,"DangerRoomDinoDesigner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomDinoDesigner::DangerRoomDinoDesigner() */

void __thiscall DangerRoomDinoDesigner::DangerRoomDinoDesigner(DangerRoomDinoDesigner *this)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DangerRoomLevelDesigner::DangerRoomLevelDesigner((DangerRoomLevelDesigner *)this);
  *(undefined ***)this = &PTR_GetClass_0675c6c0;
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
  DVec2::DVec2((DVec2 *)&local_10,1.0,100.0);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x10) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomDinoDesigner::StaticNew() */

DangerRoomDinoDesigner * DangerRoomDinoDesigner::StaticNew(void)

{
  DangerRoomDinoDesigner *this;
  
  this = ::operator_new(0x58);
  DangerRoomDinoDesigner(this);
  return this;
}


/* DangerRoomDinoDesigner::convertToDinoSpawnType(std::string const&) const */

undefined4 __thiscall
DangerRoomDinoDesigner::convertToDinoSpawnType(DangerRoomDinoDesigner *this,string *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = std::operator==(param_1,"raptor");
  uVar2 = 0;
  if (!bVar1) {
    bVar1 = std::operator==(param_1,"stego");
    uVar2 = 1;
    if (!bVar1) {
      bVar1 = std::operator==(param_1,"ptero");
      uVar2 = 2;
      if (!bVar1) {
        bVar1 = std::operator==(param_1,"tyranno");
        uVar2 = 3;
        if (!bVar1) {
          bVar1 = std::operator==(param_1,"ankylo");
          uVar2 = 4;
          if (!bVar1) {
            uVar2 = 0xffffffff;
          }
        }
      }
    }
  }
  return uVar2;
}


/* DangerRoomDinoDesigner::ensureRowCountAvailable(std::vector<int, std::allocator<int> >&, int)
   const */

void __thiscall
DangerRoomDinoDesigner::ensureRowCountAvailable
          (DangerRoomDinoDesigner *this,vector *param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_03cac5a0(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  if ((ulong)(long)param_2 <= uVar1) {
    return;
  }
  DangerRoomModernDesigner::refillRowsAllowed((DangerRoomModernDesigner *)this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomDinoDesigner::pickNextRow(std::vector<int, std::allocator<int> >&) const */

void __thiscall DangerRoomDinoDesigner::pickNextRow(DangerRoomDinoDesigner *this,vector *param_1)

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
    DangerRoomModernDesigner::refillRowsAllowed((DangerRoomModernDesigner *)this,param_1);
  }
  iVar3 = FUN_03cac5a0(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  iVar3 = RandRangeInt(0,iVar3 + -1);
  puVar4 = (undefined4 *)FUN_03cac5b8(*(undefined8 *)param_1,(long)iVar3);
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
/* DangerRoomDinoDesigner::GenerateEvents(int, Sexy::MTRand&, WaveManagerProperties*) const */

void __thiscall
DangerRoomDinoDesigner::GenerateEvents
          (DangerRoomDinoDesigner *this,int param_1,MTRand *param_2,WaveManagerProperties *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  long extraout_x0;
  vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
  *this_00;
  long lVar9;
  float fVar10;
  string asStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  int local_20 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(float *)(this + 0x10) <= (float)param_1) {
    fVar10 = (float)ValueRange::GetTimeForValue((ValueRange *)(this + 0x10),(float)param_1);
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&local_50,(vector *)&DAT_06ad2d40)
    ;
    iVar1 = DangerRoomLevelDesignerHelpers::CalculateLevelValue
                      (fVar10,(ValueRange *)(this + 0x18),(ValueRange *)(this + 0x20));
    iVar2 = DangerRoomLevelDesignerHelpers::CalculateLevelValue
                      (fVar10,(ValueRange *)(this + 0x38),(ValueRange *)(this + 0x40));
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
    uVar5 = FUN_03cac5ac(local_50,local_48);
    if (uVar5 < (ulong)(long)iVar2) {
      iVar2 = (int)uVar5;
    }
    if (0 < iVar2) {
      do {
        iVar3 = RandRangeInt(0,(int)uVar5 + -1);
        uVar8 = local_38;
        local_20[0] = iVar3;
        lVar6 = FUN_03cac5a0(local_38,local_30);
        lVar9 = 0;
        do {
          if (lVar9 == lVar6) {
            std::vector<int,std::allocator<int>>::push_back
                      ((vector<int,std::allocator<int>> *)&local_38,local_20);
            iVar2 = iVar2 + -1;
            if (iVar2 == 0) goto LAB_03cad0f8;
            break;
          }
          piVar7 = (int *)FUN_03cac5b8(uVar8,lVar9);
          lVar9 = lVar9 + 1;
        } while (iVar3 != *piVar7);
        uVar5 = FUN_03cac5ac(local_50,local_48);
      } while( true );
    }
LAB_03cad0f8:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    if (iVar1 < *(int *)(param_3 + 0x2c)) {
      do {
        iVar2 = 0;
        iVar3 = FUN_03cac5a0(local_38,local_30);
        iVar3 = RandRangeInt(0,iVar3 + -1);
        piVar7 = (int *)FUN_03cac5b8(local_38,(long)iVar3);
        uVar8 = FUN_03cac5c0(local_50,(long)*piVar7);
        FUN_05475d88(asStack_68,uVar8);
        iVar3 = DangerRoomLevelDesignerHelpers::CalculateLevelValue
                          (fVar10,(ValueRange *)(this + 0x48),(ValueRange *)(this + 0x50));
        ensureRowCountAvailable(this,(vector *)local_20,iVar3);
        if (0 < iVar3) {
          do {
            uVar8 = DinoWaveActionProps::StaticGetClass();
            iVar2 = iVar2 + 1;
            GameObject::Create(uVar8,0x35);
            nop();
            uVar4 = convertToDinoSpawnType(this,asStack_68);
            *(undefined4 *)(extraout_x0 + 0x40) = uVar4;
            uVar4 = pickNextRow(this,(vector *)local_20);
            *(undefined4 *)(extraout_x0 + 0x44) = uVar4;
            this_00 = (vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
                       *)FUN_03cac5c8(*(undefined8 *)(param_3 + 0x10),(long)iVar1);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)aRStack_60);
            std::
            vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
            ::push_back(this_00,(RtWeakPtr *)aRStack_58);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
          } while (iVar2 != iVar3);
        }
        iVar2 = DangerRoomLevelDesignerHelpers::CalculateLevelValue
                          (fVar10,(ValueRange *)(this + 0x28),(ValueRange *)(this + 0x30));
        iVar1 = iVar1 + iVar2;
        std::string::~string(asStack_68);
      } while (iVar1 < *(int *)(param_3 + 0x2c));
    }
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_38);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)&local_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

