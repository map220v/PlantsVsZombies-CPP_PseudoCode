// Class: ZombieSkillUtils


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkillUtils::LoadSummonZombiesResources(CZombieSummonDataPool const&) */

void ZombieSkillUtils::LoadSummonZombiesResources(CZombieSummonDataPool *param_1)

{
  bool bVar1;
  ulong uVar2;
  string *psVar3;
  ZombieType *this;
  ulong uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  for (uVar4 = 0;
      uVar2 = FUN_046cd91c(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18)),
      uVar4 < uVar2; uVar4 = uVar4 + 1) {
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    FUN_046cd928(*(undefined8 *)(param_1 + 0x10),uVar4);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
    if (bVar1) {
      this = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      ZombieType::EnsureResourceGroupsLoaded(this);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkillUtils::UnloadSummonZombiesResources(CZombieSummonDataPool const&) */

void ZombieSkillUtils::UnloadSummonZombiesResources(CZombieSummonDataPool *param_1)

{
  bool bVar1;
  ulong uVar2;
  string *psVar3;
  RAttribute *this;
  vector *pvVar4;
  ZombieType *this_00;
  ulong uVar5;
  Board *pBVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  for (uVar5 = 0;
      uVar2 = FUN_046cd91c(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18)),
      uVar5 < uVar2; uVar5 = uVar5 + 1) {
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    FUN_046cd928(*(undefined8 *)(param_1 + 0x10),uVar5);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
    if (bVar1) {
      pBVar6 = *(Board **)(gLawnApp + 0x9f0);
      this = (RAttribute *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      pvVar4 = (vector *)Reflection::RAttribute::GetValue(this);
      Board::DeleteResourceGroupsForGameplay(pBVar6,pvVar4);
      pBVar6 = *(Board **)(gLawnApp + 0x9f0);
      this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      pvVar4 = (vector *)ZombieType::GetAudioGroups(this_00);
      Board::DeleteResourceGroupsForGameplay(pBVar6,pvVar4);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkillUtils::SummonZombies(CZombieSummonDataPool const&, Zombie*) */

void ZombieSkillUtils::SummonZombies(CZombieSummonDataPool *param_1,Zombie *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  string *psVar7;
  long lVar8;
  SexyVector3 *pSVar9;
  Zombie *this;
  code *pcVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_98 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_90 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  float local_80;
  float local_7c;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined1 local_5b;
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar11 = 0;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  uVar12 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = FUN_046cd91c(uVar12,*(undefined8 *)(param_1 + 0x18));
  if (uVar5 != 0) {
    do {
      piVar6 = (int *)FUN_046cd928(uVar12,uVar11);
      if (0 < *piVar6) {
        ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aPStack_38,(int)uVar11,*piVar6);
        uVar12 = *(undefined8 *)(param_1 + 0x10);
        uVar5 = FUN_046cd91c(uVar12,*(undefined8 *)(param_1 + 0x18));
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar5);
  }
  iVar2 = RandRangeInt(*(int *)(param_1 + 4),*(int *)(param_1 + 8));
  if (0 < iVar2) {
    do {
      while( true ) {
        iVar3 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)aPStack_38);
        psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
        FUN_046cd928(*(undefined8 *)(param_1 + 0x10),(long)iVar3);
        ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar7);
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_a0);
        if (!bVar1) break;
        lVar8 = FUN_046cd928(*(undefined8 *)(param_1 + 0x10),(long)iVar3);
        Sexy::Insets::Insets((Insets *)&local_70,(Insets *)(lVar8 + 4));
        iVar3 = RandRangeInt(local_70,local_70 + local_68 + -1);
        iVar4 = RandRangeInt(local_6c,local_6c + local_64 + -1);
        DVec3::DVec3((DVec3 *)&local_80);
        iVar3 = BoardTransforms::GridToBoardSpaceX(iVar3);
        local_80 = (float)iVar3;
        iVar3 = BoardTransforms::GridToBoardSpaceY(iVar4);
        local_7c = (float)iVar3;
        Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_60);
        local_60 = Zombie::GetSummonZombieLevel(param_2);
        local_5b = 1;
        plVar13 = *(long **)(gLawnApp + 0x9f0);
        pcVar10 = *(code **)(*plVar13 + 0x318);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,(RtWeakPtrBase *)aRStack_a0);
        (*pcVar10)(plVar13,aRStack_90,0xfffffffb,(SpawnZombieParams *)&local_60);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,(RtWeakPtrBase *)aRStack_88);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90)
        ;
        if ((*(int *)param_1 == 0) || (*(int *)param_1 != 1)) {
          this = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
          Zombie::RiseFromGround(this,(SexyVector3 *)&local_80,true);
        }
        else {
          pSVar9 = (SexyVector3 *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
          BoardEntity::PlaceOnBoard(pSVar9);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98)
        ;
        ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) goto LAB_046cde48;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
LAB_046cde48:
  ProbabilitySet<int>::~ProbabilitySet((ProbabilitySet<int> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

