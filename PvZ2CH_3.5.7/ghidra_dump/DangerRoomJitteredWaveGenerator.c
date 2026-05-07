// Class: DangerRoomJitteredWaveGenerator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomJitteredWaveGenerator::StaticClassInit() */

void DangerRoomJitteredWaveGenerator::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePoolConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_03ca9aec,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DangerRoomJitteredWaveGenerator");
    (*pcVar3)(plVar2,asStack_10,FUN_03ca9834,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomJitteredWaveGenerator::StaticGetClass() */

long * DangerRoomJitteredWaveGenerator::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DangerRoomJitteredWaveGenerator",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomJitteredWaveGenerator::GetClass() const */

long * DangerRoomJitteredWaveGenerator::GetClass(void)

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
  (*pcVar3)(plVar1,"DangerRoomJitteredWaveGenerator",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomJitteredWaveGenerator::CalcFlagCount(int, int, Sexy::MTRand&) const */

undefined4 DangerRoomJitteredWaveGenerator::CalcFlagCount(int param_1,int param_2,MTRand *param_3)

{
  undefined4 uVar1;
  
  DangerRoomModule::GetDangerRoomPropertySheet();
  uVar1 = 0;
  if ((6 < (int)param_3) && (uVar1 = 2, (int)param_3 < 0xc)) {
    uVar1 = 1;
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomJitteredWaveGenerator::CalcWaveCount(int) const */

void __thiscall
DangerRoomJitteredWaveGenerator::CalcWaveCount(DangerRoomJitteredWaveGenerator *this,int param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = DangerRoomModule::GetDangerRoomPropertySheet();
  iVar1 = 0;
  if (*(int *)(lVar2 + 0x164) != 0) {
    iVar1 = param_1 / *(int *)(lVar2 + 0x164);
  }
  local_c = *(int *)(lVar2 + 0x158) + iVar1 * *(int *)(lVar2 + 0x160);
  piVar3 = eastl::min_alt<int>(&local_c,(int *)(lVar2 + 0x15c));
  piVar3 = eastl::max_alt<int>((int *)(lVar2 + 0x158),piVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*piVar3);
}


/* DangerRoomJitteredWaveGenerator::DangerRoomJitteredWaveGenerator() */

void __thiscall
DangerRoomJitteredWaveGenerator::DangerRoomJitteredWaveGenerator
          (DangerRoomJitteredWaveGenerator *this)

{
  DangerRoomLevelDesigner::DangerRoomLevelDesigner((DangerRoomLevelDesigner *)this);
  *(undefined2 *)(this + 0x10) = 100;
  *(undefined2 *)(this + 0x12) = 0x1e;
  *(undefined ***)this = &PTR_GetClass_0675c480;
  *(undefined2 *)(this + 0x14) = 5;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* DangerRoomJitteredWaveGenerator::StaticNew() */

DangerRoomJitteredWaveGenerator * DangerRoomJitteredWaveGenerator::StaticNew(void)

{
  DangerRoomJitteredWaveGenerator *this;
  
  this = ::operator_new(0x30);
  DangerRoomJitteredWaveGenerator(this);
  return this;
}


/* DangerRoomJitteredWaveGenerator::~DangerRoomJitteredWaveGenerator() */

void __thiscall
DangerRoomJitteredWaveGenerator::~DangerRoomJitteredWaveGenerator
          (DangerRoomJitteredWaveGenerator *this)

{
  *(undefined ***)this = &PTR_GetClass_0675c480;
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
           *)(this + 0x18));
  DangerRoomLevelDesigner::~DangerRoomLevelDesigner((DangerRoomLevelDesigner *)this);
  return;
}


/* DangerRoomJitteredWaveGenerator::~DangerRoomJitteredWaveGenerator() */

void __thiscall
DangerRoomJitteredWaveGenerator::~DangerRoomJitteredWaveGenerator
          (DangerRoomJitteredWaveGenerator *this)

{
  ~DangerRoomJitteredWaveGenerator(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomJitteredWaveGenerator::EnsureBigZombieExist(Sexy::MTRand&, std::vector<ZombieType
   const*, std::allocator<ZombieType const*> >&, std::vector<Sexy::RtWeakPtr<ZombieType const>,
   std::allocator<Sexy::RtWeakPtr<ZombieType const> > > const&) const */

void __thiscall
DangerRoomJitteredWaveGenerator::EnsureBigZombieExist
          (DangerRoomJitteredWaveGenerator *this,MTRand *param_1,vector *param_2,vector *param_3)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  ZombieType *this_01;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  ZombieType *local_40;
  undefined8 local_38;
  undefined8 local_30;
  ResourceInfo *local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = (ResourceInfo *)
             std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_2);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_2);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    lVar4 = ZombieType::GetProps((ZombieType *)*puVar3);
    if (0x5db < *(int *)(lVar4 + 0x9c)) goto LAB_03caabcc;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  local_40 = (ZombieType *)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  local_38 = FUN_03ca90c4(*(undefined8 *)param_3);
  local_30 = FUN_03ca9114(*(undefined8 *)(param_3 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    this_01 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    lVar4 = ZombieType::GetProps(this_01);
    if (0x5db < *(int *)(lVar4 + 0x9c)) {
      local_28 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
      std::vector<ZombieType_const*,std::allocator<ZombieType_const*>>::push_back
                ((vector<ZombieType_const*,std::allocator<ZombieType_const*>> *)&local_20,
                 (ZombieType **)&local_28);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  uVar5 = FUN_03ca81bc(local_20,local_18);
  if (uVar5 != 0) {
    uVar7 = Sexy::MTRand::Next(param_1,uVar5);
    plVar6 = (long *)FUN_03ca81c8(local_20,uVar7);
    local_40 = (ZombieType *)*plVar6;
  }
  if (local_40 != (ZombieType *)0x0) {
    cVar2 = std::vector<ZombieType_const*,std::allocator<ZombieType_const*>>::empty
                      ((vector<ZombieType_const*,std::allocator<ZombieType_const*>> *)param_2);
    if (cVar2 != '\0') {
      std::vector<ZombieType_const*,std::allocator<ZombieType_const*>>::push_back
                ((vector<ZombieType_const*,std::allocator<ZombieType_const*>> *)param_2,&local_40);
      std::vector<ZombieType_const*,std::allocator<ZombieType_const*>>::~vector
                ((vector<ZombieType_const*,std::allocator<ZombieType_const*>> *)&local_20);
      goto LAB_03caabcc;
    }
    plVar6 = (long *)std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)param_2);
    *plVar6 = (long)local_40;
  }
  std::vector<ZombieType_const*,std::allocator<ZombieType_const*>>::~vector
            ((vector<ZombieType_const*,std::allocator<ZombieType_const*>> *)&local_20);
LAB_03caabcc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomJitteredWaveGenerator::configureJitteredWaves(int, Sexy::MTRand&,
   DanggerRoomWaveConfig*) const */

void __thiscall
DangerRoomJitteredWaveGenerator::configureJitteredWaves
          (DangerRoomJitteredWaveGenerator *this,int param_1,MTRand *param_2,
          DanggerRoomWaveConfig *param_3)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  DangerRoomPropertySheet *this_00;
  ulong uVar10;
  byte *pbVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar15;
  int iVar16;
  undefined8 uVar17;
  int local_60;
  int local_5c;
  ZombieType *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (DangerRoomPropertySheet *)DangerRoomModule::GetDangerRoomPropertySheet();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  uVar17 = *(undefined8 *)(this_00 + 0x10);
  local_20 = 0;
  uVar10 = FUN_03ca8164(uVar17,*(undefined8 *)(this_00 + 0x18));
  uVar5 = 0;
  while ((ulong)(long)(int)uVar5 < uVar10) {
    pbVar11 = (byte *)FUN_03ca8178(uVar17);
    if ((int)(uint)*pbVar11 <= param_1) {
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)&local_38,(int *)&local_20);
      uVar5 = local_20;
      uVar17 = *(undefined8 *)(this_00 + 0x10);
      uVar10 = FUN_03ca8164(uVar17,*(undefined8 *)(this_00 + 0x18));
    }
    uVar5 = uVar5 + 1;
    local_20 = uVar5;
  }
  lVar15 = 0;
  iVar4 = FUN_03ca8148(local_38,local_30);
  uVar17 = Sexy::MTRand::Next(param_2,iVar4);
  piVar12 = (int *)FUN_03ca8184(local_38,uVar17);
  lVar13 = FUN_03ca8178(*(undefined8 *)(this_00 + 0x10),(long)*piVar12);
  uVar5 = CalcWaveCount(this,param_1);
  iVar6 = CalcFlagCount((int)this,param_1,(MTRand *)(ulong)uVar5);
  uVar17 = *(undefined8 *)(this_00 + 0x28);
  local_60 = 99;
  local_5c = 99;
  iVar4 = 0;
  if (iVar6 + 1 != 0) {
    iVar4 = (int)uVar5 / (iVar6 + 1);
  }
  iVar6 = 0;
  if (iVar4 != 0) {
    iVar6 = (int)uVar5 / iVar4;
  }
  if (uVar5 != iVar6 * iVar4 && -1 < (int)(uVar5 - iVar6 * iVar4)) {
    iVar4 = iVar4 + 1;
  }
  lVar14 = FUN_03ca818c(uVar17,*(undefined8 *)(this_00 + 0x30));
  if (lVar14 != 0) {
    do {
      pbVar11 = (byte *)FUN_03ca819c(uVar17,lVar15);
      if ((int)(uint)*pbVar11 <= param_1) {
        local_20 = (uint)pbVar11[1];
        piVar12 = eastl::min_alt<int>((int *)&local_20,&local_60);
        local_60 = *piVar12;
        local_20 = (uint)pbVar11[2];
        piVar12 = eastl::min_alt<int>((int *)&local_20,&local_5c);
        local_5c = *piVar12;
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != lVar14);
  }
  iVar6 = local_60;
  if (*(char *)(lVar13 + 1) != '\0') {
    iVar16 = 0;
    iVar8 = 0;
    iVar2 = local_5c - local_60;
    do {
      iVar16 = iVar16 + 1;
      iVar7 = Sexy::MTRand::Next(param_2,iVar2 + 1);
      iVar8 = iVar6 + iVar8 + iVar7;
    } while (iVar16 < (int)(uint)*(byte *)(lVar13 + 1));
    if (0 < iVar8) {
      iVar6 = iVar4 + -1;
      if (iVar6 < (int)uVar5) {
        do {
          if (iVar8 != 0) {
            iVar8 = iVar8 + -1;
            lVar15 = RandomJitteredWaveConfig::EnsureInstructionForWave
                               ((RandomJitteredWaveConfig *)param_3,iVar6);
            *(int *)(lVar15 + 0x38) = *(int *)(lVar15 + 0x38) + 1;
          }
          iVar6 = iVar6 + iVar4;
        } while (iVar6 < (int)uVar5);
        if (iVar8 == 0) goto LAB_03caaef8;
      }
      do {
        iVar6 = Sexy::MTRand::Next(param_2,uVar5);
        lVar15 = RandomJitteredWaveConfig::EnsureInstructionForWave
                           ((RandomJitteredWaveConfig *)param_3,iVar6);
        iVar8 = iVar8 + -1;
        *(int *)(lVar15 + 0x38) = *(int *)(lVar15 + 0x38) + 1;
      } while (iVar8 != 0);
    }
  }
LAB_03caaef8:
  Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  StageModule::GetBasicZombieType();
  local_58 = (ZombieType *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  lVar15 = RandomJitteredWaveConfig::EnsureInstructionForWave((RandomJitteredWaveConfig *)param_3,0)
  ;
  std::vector<ZombieType_const*,std::allocator<ZombieType_const*>>::push_back
            ((vector<ZombieType_const*,std::allocator<ZombieType_const*>> *)(lVar15 + 8),&local_58);
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
          *)&local_20,(vector *)(this + 0x18));
  if (0 < *(int *)(this_00 + 0x17c)) {
    iVar6 = 0;
    do {
      cVar3 = std::
              vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
              ::empty((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                       *)&local_20);
      if (cVar3 != '\0') break;
      iVar6 = iVar6 + 1;
      uVar10 = FUN_03ca81a8(CONCAT44(uStack_1c,local_20),local_18);
      lVar15 = Sexy::MTRand::Next(param_2,uVar10);
      lVar13 = RandomJitteredWaveConfig::EnsureInstructionForWave
                         ((RandomJitteredWaveConfig *)param_3,0);
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03ca81b4(CONCAT44(uStack_1c,local_20),lVar15);
      local_40 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      std::vector<ZombieType_const*,std::allocator<ZombieType_const*>>::push_back
                ((vector<ZombieType_const*,std::allocator<ZombieType_const*>> *)(lVar13 + 8),
                 (ZombieType **)&local_40);
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
      local_48 = __gnu_cxx::
                 __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                 ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                              *)&local_50,lVar15);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_40,(__normal_iterator *)&local_48);
      std::
      vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
      erase((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
             *)&local_20,local_40);
    } while (iVar6 < *(int *)(this_00 + 0x17c));
  }
  if (*(int *)(this_00 + 0x180) < param_1) {
    lVar15 = RandomJitteredWaveConfig::EnsureInstructionForWave
                       ((RandomJitteredWaveConfig *)param_3,0);
    EnsureBigZombieExist(this,param_2,(vector *)(lVar15 + 8),(vector *)&local_20);
  }
  iVar6 = *(int *)(this_00 + 0x1b8);
  iVar16 = *(int *)(this_00 + 0x1bc);
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(this_00 + 0x1b4);
  *(int *)(param_3 + 8) = iVar4;
  *(int *)(param_3 + 0x10) = iVar6 + param_1 * iVar16;
  *(int *)(param_3 + 0x48) = param_1;
  *(uint *)(param_3 + 4) = uVar5;
  uVar9 = CalcRandomSeed(1);
  *(undefined4 *)(param_3 + 0x14) = uVar9;
  DangerRoomPropertySheet::CalcZombieLevel
            (this_00,param_1,(int *)(param_3 + 0x4c),(int *)(param_3 + 0x50),
             (float *)(param_3 + 0x54));
  uVar9 = *(undefined4 *)(this_00 + 400);
  uVar1 = *(undefined4 *)(this_00 + 0x188);
  *(undefined4 *)(param_3 + 0x58) = *(undefined4 *)(this_00 + 0x184);
  *(undefined4 *)(param_3 + 0x60) = uVar9;
  *(undefined4 *)(param_3 + 0x5c) = uVar1;
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
           *)&local_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomJitteredWaveGenerator::GenerateWaves(int, Sexy::MTRand&, WaveManagerProperties*) const
    */

void __thiscall
DangerRoomJitteredWaveGenerator::GenerateWaves
          (DangerRoomJitteredWaveGenerator *this,int param_1,MTRand *param_2,
          WaveManagerProperties *param_3)

{
  DanggerRoomWaveConfig aDStack_70 [8];
  undefined4 local_68;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DanggerRoomWaveConfig::DanggerRoomWaveConfig(aDStack_70);
  configureJitteredWaves(this,param_1,param_2,aDStack_70);
  WaveHelpers::GenerateDangerRoomWaves(aDStack_70,param_3);
  *(undefined4 *)(param_3 + 0x28) = local_68;
  DanggerRoomWaveConfig::~DanggerRoomWaveConfig(aDStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

