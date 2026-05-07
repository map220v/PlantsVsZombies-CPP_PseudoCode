// Class: SpawnZombiesDelayedFromGridItemsWaveAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnZombiesDelayedFromGridItemsWaveAction::StaticClassInit() */

void SpawnZombiesDelayedFromGridItemsWaveAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpawnZombiesDelayedFromGridItemsWaveAction");
    (*pcVar2)(plVar1,asStack_10,FUN_04a0d5fc,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpawnZombiesDelayedFromGridItemsWaveAction::StaticGetClass() */

long * SpawnZombiesDelayedFromGridItemsWaveAction::StaticGetClass(void)

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
  uVar2 = SpawnZombiesFromGridItemWaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnZombiesDelayedFromGridItemsWaveAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnZombiesDelayedFromGridItemsWaveAction::SpawnZombiesDelayedFromGridItemsWaveAction() */

void __thiscall
SpawnZombiesDelayedFromGridItemsWaveAction::SpawnZombiesDelayedFromGridItemsWaveAction
          (SpawnZombiesDelayedFromGridItemsWaveAction *this)

{
  undefined4 uVar1;
  
  SpawnZombiesFromGridItemWaveAction::SpawnZombiesFromGridItemWaveAction
            ((SpawnZombiesFromGridItemWaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_0692de70;
  std::__exception_ptr::exception_ptr::exception_ptr
            ((exception_ptr *)(this + 0x70),(_func_void *)&PTR_GetActionClass_0692de70);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x68) = uVar1;
  *(undefined4 *)(this + 0x6c) = uVar1;
  return;
}


/* SpawnZombiesDelayedFromGridItemsWaveAction::StaticNew() */

SpawnZombiesDelayedFromGridItemsWaveAction *
SpawnZombiesDelayedFromGridItemsWaveAction::StaticNew(void)

{
  SpawnZombiesDelayedFromGridItemsWaveAction *this;
  
  this = ::operator_new(0x78);
  SpawnZombiesDelayedFromGridItemsWaveAction(this);
  return this;
}


/* SpawnZombiesDelayedFromGridItemsWaveAction::~SpawnZombiesDelayedFromGridItemsWaveAction() */

void __thiscall
SpawnZombiesDelayedFromGridItemsWaveAction::~SpawnZombiesDelayedFromGridItemsWaveAction
          (SpawnZombiesDelayedFromGridItemsWaveAction *this)

{
  *(undefined ***)this = &PTR_GetActionClass_0692de70;
  Sexy::RtId::~RtId((RtId *)(this + 0x70));
  SpawnZombiesFromGridItemWaveAction::~SpawnZombiesFromGridItemWaveAction
            ((SpawnZombiesFromGridItemWaveAction *)this);
  return;
}


/* SpawnZombiesDelayedFromGridItemsWaveAction::~SpawnZombiesDelayedFromGridItemsWaveAction() */

void __thiscall
SpawnZombiesDelayedFromGridItemsWaveAction::~SpawnZombiesDelayedFromGridItemsWaveAction
          (SpawnZombiesDelayedFromGridItemsWaveAction *this)

{
  ~SpawnZombiesDelayedFromGridItemsWaveAction(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnZombiesDelayedFromGridItemsWaveAction::createZombies(int, Sexy::MTRand&, int, int) */

void __thiscall
SpawnZombiesDelayedFromGridItemsWaveAction::createZombies
          (SpawnZombiesDelayedFromGridItemsWaveAction *this,int param_1,MTRand *param_2,int param_3,
          int param_4)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FairyTaleWindWaveActionProps *pFVar8;
  RtWeakPtrBase *pRVar9;
  Zombie *pZVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
  code *pcVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  undefined1 auVar21 [16];
  ulong uVar22;
  undefined8 local_50;
  RtWeakPtrBase aRStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20 [3];
  long local_8;
  
  uVar22 = 0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x100))
            ((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)&local_38);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_38);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_38);
  local_50 = FUN_04a0ee54(uVar6,uVar7,this);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_38);
  bVar3 = __gnu_cxx::operator==((__normal_iterator *)&local_50,(__normal_iterator *)&local_40);
  if (!bVar3) {
    local_20[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)&local_38);
    uVar22 = __gnu_cxx::operator-((__normal_iterator *)&local_50,(__normal_iterator *)local_20);
  }
  pFVar8 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  iVar19 = *(int *)(pFVar8 + 0x58);
  Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  StageModule::GetFlagZombieType();
  if (param_3 < param_4) {
    lVar1 = (long)param_3 + 1;
    lVar12 = lVar1;
    lVar20 = (long)param_3;
    while( true ) {
      lVar18 = lVar12;
      if (0 < iVar19) {
        iVar19 = iVar19 + -1;
      }
      plVar15 = *(long **)(gLawnApp + 0x9f0);
      pcVar17 = *(code **)(*plVar15 + 0x318);
      pRVar9 = (RtWeakPtrBase *)FUN_04a0d03c(*(undefined8 *)(pFVar8 + 0x40),lVar20);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_20,pRVar9);
      pZVar10 = (Zombie *)(*pcVar17)(plVar15,(RtWeakPtr<Sexy::SoundResource> *)local_20,param_1,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
      Zombie::SetHasPlantFood(SUB81(pZVar10,0));
      (**(code **)(*(long *)this + 0xb0))((RtWeakPtr<Sexy::SoundResource> *)local_20,this);
      puVar11 = (undefined4 *)FUN_04a0d04c(local_20[0],lVar20);
      Zombie::SetLoot(pZVar10,*puVar11);
      std::vector<Loot,std::allocator<Loot>>::~vector((vector<Loot,std::allocator<Loot>> *)local_20)
      ;
      pcVar17 = *(code **)(*(long *)pZVar10 + 0x250);
      pRVar9 = (RtWeakPtrBase *)FUN_04a0d03c(*(undefined8 *)(pFVar8 + 0x40),lVar20);
      uVar4 = Sexy::RtWeakPtrBase::operator==(pRVar9,aRStack_48);
      (*pcVar17)(pZVar10,uVar4);
      iVar5 = *(int *)(pFVar8 + 0xcc);
      if (iVar5 != -1) {
        auVar21 = PVZ_EOT();
        Zombie::ApplyCondition((Zombie *)auVar21,0,pZVar10,iVar5,1);
      }
      lVar12 = FUN_04a0d03c(*(undefined8 *)(pFVar8 + 0x40),lVar20);
      iVar5 = *(int *)(lVar12 + 8);
      if (iVar5 == 5) {
        iVar5 = FUN_04a0d054(local_38,local_30);
        iVar5 = Sexy::Rand(iVar5);
        uVar16 = (long)iVar5;
      }
      else {
        uVar16 = uVar22 + (long)iVar5;
        if (4 < iVar5) {
          uVar16 = uVar22;
        }
      }
      uVar6 = local_38;
      uVar13 = FUN_04a0d054(local_38,local_30);
      if (uVar13 <= uVar16) {
        uVar2 = 0;
        if (uVar13 != 0) {
          uVar2 = uVar16 / uVar13;
        }
        uVar16 = uVar16 - uVar2 * uVar13;
      }
      puVar14 = (undefined8 *)FUN_04a0d060(uVar6,uVar16);
      (**(code **)(*(long *)this + 0x108))(this,*puVar14,pZVar10);
      FUN_04a0d060(local_38,uVar16);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtrBase::GetId();
      Sexy::RtId::operator=((RtId *)(this + 0x70),(RtId *)local_20);
      Sexy::RtId::~RtId((RtId *)local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      if (lVar18 == lVar1 + (ulong)(uint)((param_4 + -1) - param_3)) break;
      lVar12 = lVar18 + 1;
      lVar20 = lVar18;
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnZombiesDelayedFromGridItemsWaveAction::spawnGroup(int, int, Sexy::MTRand&) */

void __thiscall
SpawnZombiesDelayedFromGridItemsWaveAction::spawnGroup
          (SpawnZombiesDelayedFromGridItemsWaveAction *this,int param_1,int param_2,MTRand *param_3)

{
  int iVar1;
  int iVar2;
  FairyTaleWindWaveActionProps *pFVar3;
  int *piVar4;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar3 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  iVar1 = *(int *)(this + 100);
  local_10 = iVar1 + param_1;
  local_c = FUN_04a0d01c(*(undefined8 *)(pFVar3 + 0x40),*(undefined8 *)(pFVar3 + 0x48));
  piVar4 = eastl::min_alt<int>(&local_10,&local_c);
  iVar2 = *piVar4;
  createZombies(this,param_2,param_3,iVar1,iVar2);
  *(int *)(this + 100) = iVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpawnZombiesDelayedFromGridItemsWaveAction::spawnRemainder(int, Sexy::MTRand&) */

void __thiscall
SpawnZombiesDelayedFromGridItemsWaveAction::spawnRemainder
          (SpawnZombiesDelayedFromGridItemsWaveAction *this,int param_1,MTRand *param_2)

{
  int iVar1;
  FairyTaleWindWaveActionProps *pFVar2;
  ulong uVar3;
  
  pFVar2 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  iVar1 = *(int *)(this + 100);
  uVar3 = FUN_04a0d01c(*(undefined8 *)(pFVar2 + 0x40),*(undefined8 *)(pFVar2 + 0x48));
  if (uVar3 <= (ulong)(long)iVar1) {
    return;
  }
  spawnGroup(this,(int)uVar3 - iVar1,param_1,param_2);
  return;
}


/* SpawnZombiesDelayedFromGridItemsWaveAction::WaveEnd(int, Sexy::MTRand&) */

void SpawnZombiesDelayedFromGridItemsWaveAction::WaveEnd(int param_1,MTRand *param_2)

{
  int iVar1;
  FairyTaleWindWaveActionProps *pFVar2;
  ulong uVar3;
  WaveAction *this;
  MTRand *in_x2;
  
  this = (WaveAction *)(ulong)(uint)param_1;
  pFVar2 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(this);
  iVar1 = *(int *)(this + 100);
  uVar3 = FUN_04a0d01c(*(undefined8 *)(pFVar2 + 0x40),*(undefined8 *)(pFVar2 + 0x48));
  if (uVar3 <= (ulong)(long)iVar1) {
    return;
  }
  spawnGroup((SpawnZombiesDelayedFromGridItemsWaveAction *)this,(int)uVar3 - iVar1,(int)param_2,
             in_x2);
  return;
}


/* SpawnZombiesDelayedFromGridItemsWaveAction::WaveUpdate(int, Sexy::MTRand&) */

void __thiscall
SpawnZombiesDelayedFromGridItemsWaveAction::WaveUpdate
          (SpawnZombiesDelayedFromGridItemsWaveAction *this,int param_1,MTRand *param_2)

{
  FairyTaleWindWaveActionProps *pFVar1;
  ulong uVar2;
  float fVar3;
  
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  uVar2 = FUN_04a0d01c(*(undefined8 *)(pFVar1 + 0x40),*(undefined8 *)(pFVar1 + 0x48));
  if ((ulong)(long)*(int *)(this + 100) < uVar2) {
    fVar3 = (float)PVZ_T();
    if (*(float *)(this + 0x68) < fVar3) {
      spawnGroup(this,*(int *)(pFVar1 + 0xc0),param_1,param_2);
      fVar3 = (float)PVZ_T();
      *(float *)(this + 0x68) = fVar3 + *(float *)(pFVar1 + 0xc4);
    }
    fVar3 = (float)PVZ_T();
    if (*(float *)(this + 0x6c) < fVar3) {
      spawnRemainder(this,param_1,param_2);
      return;
    }
  }
  return;
}


/* SpawnZombiesDelayedFromGridItemsWaveAction::WaveStart(int, WaveType::WaveType, bool,
   Sexy::MTRand&) */

void __thiscall
SpawnZombiesDelayedFromGridItemsWaveAction::WaveStart
          (SpawnZombiesDelayedFromGridItemsWaveAction *this,int param_1,undefined8 param_3,
          undefined8 param_4,MTRand *param_5)

{
  MinigameWhackAZombieModule *this_00;
  FairyTaleWindWaveActionProps *pFVar1;
  float fVar2;
  
  *(undefined4 *)(this + 100) = 0;
  this_00 = (MinigameWhackAZombieModule *)
            FUN_04a0ead8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  MinigameWhackAZombieModule::ReserveNewZombiePuddles(this_00);
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  spawnGroup(this,*(int *)(pFVar1 + 0xc0),param_1,param_5);
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x68) = fVar2 + *(float *)(pFVar1 + 0xc4);
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x6c) = fVar2 + *(float *)(pFVar1 + 200);
  WaveAction::notifyWaveEvents((WaveAction *)this);
  return;
}

