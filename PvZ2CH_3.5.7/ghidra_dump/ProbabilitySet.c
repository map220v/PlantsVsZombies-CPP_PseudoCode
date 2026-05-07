// Class: ProbabilitySet<int>


/* ProbabilitySet<int>::~ProbabilitySet() */

void __thiscall ProbabilitySet<int>::~ProbabilitySet(ProbabilitySet<int> *this)

{
  if (this[0x28] != (ProbabilitySet<int>)0x0) {
    AK::FreeHook(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  std::
  vector<ProbabilitySet<int>::ProbabilityBucket,std::allocator<ProbabilitySet<int>::ProbabilityBucket>>
  ::~vector((vector<ProbabilitySet<int>::ProbabilityBucket,std::allocator<ProbabilitySet<int>::ProbabilityBucket>>
             *)this);
  return;
}


/* ProbabilitySet<int>::GetSize() */

void __thiscall ProbabilitySet<int>::GetSize(ProbabilitySet<int> *this)

{
  FUN_032f89ec(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* ProbabilitySet<int>::PickItem() */

undefined4 __thiscall ProbabilitySet<int>::PickItem(ProbabilitySet<int> *this)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_032f89f8(*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x18));
  uVar6 = *(undefined8 *)this;
  iVar5 = 0;
  lVar2 = FUN_032f89ec(uVar6,*(undefined8 *)(this + 8));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return 0;
    }
    puVar3 = (undefined4 *)FUN_032f8a1c(uVar6,lVar4);
    iVar5 = iVar5 + puVar3[1];
    lVar4 = lVar4 + 1;
  } while (iVar5 <= iVar1);
  return *puVar3;
}


/* ProbabilitySet<int>::HasItem(int const&) const */

undefined8 __thiscall ProbabilitySet<int>::HasItem(ProbabilitySet<int> *this,int *param_1)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)this;
  lVar1 = FUN_032f89ec(uVar4,*(undefined8 *)(this + 8));
  lVar3 = 0;
  do {
    if (lVar3 == lVar1) {
      return 0;
    }
    piVar2 = (int *)FUN_032f8a24(uVar4,lVar3);
    lVar3 = lVar3 + 1;
  } while (*piVar2 != *param_1);
  return 1;
}


/* ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet() */

void __thiscall
ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
          (ProbabilitySet<ZombossRobotAirDropZombieInfo> *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  this[0x28] = (ProbabilitySet<ZombossRobotAirDropZombieInfo>)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<int>::RemoveItem(int) */

void __thiscall ProbabilitySet<int>::RemoveItem(ProbabilitySet<int> *this,int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if (*piVar2 == param_1) break;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    *(int *)(this + 0x18) = *(int *)(this + 0x18) - piVar2[1];
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    local_18 = std::
               vector<ProbabilitySet<int>::ProbabilityBucket,std::allocator<ProbabilitySet<int>::ProbabilityBucket>>
               ::erase((vector<ProbabilitySet<int>::ProbabilityBucket,std::allocator<ProbabilitySet<int>::ProbabilityBucket>>
                        *)this,local_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<int>::AddItem(int, int) */

void __thiscall ProbabilitySet<int>::AddItem(ProbabilitySet<int> *this,int param_1,int param_2)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  UnchartedModePlantNumData aUStack_10 [8];
  long local_8;
  
  lVar3 = 0;
  uVar4 = *(undefined8 *)this;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_032f89ec(uVar4,*(undefined8 *)(this + 8));
  do {
    if (lVar3 == lVar1) {
      UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_10,param_1,param_2);
      std::
      vector<ProbabilitySet<int>::ProbabilityBucket,std::allocator<ProbabilitySet<int>::ProbabilityBucket>>
      ::push_back((vector<ProbabilitySet<int>::ProbabilityBucket,std::allocator<ProbabilitySet<int>::ProbabilityBucket>>
                   *)this,(ProbabilityBucket *)aUStack_10);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_2;
LAB_03376b80:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar2 = (int *)FUN_032f8a1c(uVar4,lVar3);
    if (*piVar2 == param_1) {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + (param_2 - piVar2[1]);
      piVar2[1] = param_2;
      goto LAB_03376b80;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* ProbabilitySet<Plant*>::GetSize() */

void __thiscall ProbabilitySet<Plant*>::GetSize(ProbabilitySet<Plant*> *this)

{
  FUN_033e1374(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* ProbabilitySet<Plant*>::PickItem() */

undefined8 __thiscall ProbabilitySet<Plant*>::PickItem(ProbabilitySet<Plant*> *this)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_033e1388(*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x18));
  uVar6 = *(undefined8 *)this;
  iVar5 = 0;
  lVar2 = FUN_033e1374(uVar6,*(undefined8 *)(this + 8));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return 0;
    }
    puVar3 = (undefined8 *)FUN_033e1380(uVar6,lVar4);
    iVar5 = iVar5 + *(int *)(puVar3 + 1);
    lVar4 = lVar4 + 1;
  } while (iVar5 <= iVar1);
  return *puVar3;
}


/* ProbabilitySet<Plant*>::~ProbabilitySet() */

void __thiscall ProbabilitySet<Plant*>::~ProbabilitySet(ProbabilitySet<Plant*> *this)

{
  if (this[0x28] != (ProbabilitySet<Plant*>)0x0) {
    AK::FreeHook(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  std::
  vector<ProbabilitySet<Plant*>::ProbabilityBucket,std::allocator<ProbabilitySet<Plant*>::ProbabilityBucket>>
  ::~vector((vector<ProbabilitySet<Plant*>::ProbabilityBucket,std::allocator<ProbabilitySet<Plant*>::ProbabilityBucket>>
             *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<Plant*>::AddItem(Plant*, int) */

void __thiscall
ProbabilitySet<Plant*>::AddItem(ProbabilitySet<Plant*> *this,Plant *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  TextRun aTStack_18 [16];
  long local_8;
  
  lVar3 = 0;
  uVar4 = *(undefined8 *)this;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_033e1374(uVar4,*(undefined8 *)(this + 8));
  do {
    if (lVar3 == lVar1) {
      EA::Text::TextRun::TextRun(aTStack_18,(wchar16 *)param_1,param_2);
      std::
      vector<ProbabilitySet<Plant*>::ProbabilityBucket,std::allocator<ProbabilitySet<Plant*>::ProbabilityBucket>>
      ::push_back((vector<ProbabilitySet<Plant*>::ProbabilityBucket,std::allocator<ProbabilitySet<Plant*>::ProbabilityBucket>>
                   *)this,(ProbabilityBucket *)aTStack_18);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_2;
LAB_033e84d0:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar2 = (undefined8 *)FUN_033e1380(uVar4,lVar3);
    if ((Plant *)*puVar2 == param_1) {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + (param_2 - *(int *)(puVar2 + 1));
      *(int *)(puVar2 + 1) = param_2;
      goto LAB_033e84d0;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* ProbabilitySet<DefaultWaveConfig>::PickItem() */

void ProbabilitySet<DefaultWaveConfig>::PickItem(void)

{
  int iVar1;
  undefined8 *in_x0;
  long lVar2;
  pair *ppVar3;
  DefaultWaveConfig *in_x8;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_0358f8cc(in_x0[4],*(undefined4 *)(in_x0 + 3));
  uVar6 = *in_x0;
  iVar5 = 0;
  lVar2 = FUN_0358f8ac(uVar6,in_x0[1]);
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      DefaultWaveConfig::DefaultWaveConfig(in_x8);
      return;
    }
    ppVar3 = (pair *)FUN_0358f8c0(uVar6,lVar4);
    iVar5 = iVar5 + *(int *)(ppVar3 + 0x10);
    lVar4 = lVar4 + 1;
  } while (iVar5 <= iVar1);
  std::pair<std::string_const,int>::pair((pair<std::string_const,int> *)in_x8,ppVar3);
  return;
}


/* ProbabilitySet<DefaultWaveConfig>::~ProbabilitySet() */

void __thiscall
ProbabilitySet<DefaultWaveConfig>::~ProbabilitySet(ProbabilitySet<DefaultWaveConfig> *this)

{
  if (this[0x28] != (ProbabilitySet<DefaultWaveConfig>)0x0) {
    AK::FreeHook(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  std::
  vector<ProbabilitySet<DefaultWaveConfig>::ProbabilityBucket,std::allocator<ProbabilitySet<DefaultWaveConfig>::ProbabilityBucket>>
  ::~vector((vector<ProbabilitySet<DefaultWaveConfig>::ProbabilityBucket,std::allocator<ProbabilitySet<DefaultWaveConfig>::ProbabilityBucket>>
             *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<DefaultWaveConfig>::AddItem(DefaultWaveConfig, int) */

void __thiscall
ProbabilitySet<DefaultWaveConfig>::AddItem
          (ProbabilitySet<DefaultWaveConfig> *this,DefaultWaveConfig *param_2,int param_3)

{
  char cVar1;
  long lVar2;
  DefaultWaveConfig *this_00;
  long lVar3;
  undefined8 uVar4;
  pair<std::string_const,int> apStack_30 [16];
  pair apStack_20 [24];
  long local_8;
  
  uVar4 = *(undefined8 *)this;
  lVar3 = 0;
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_0358f8ac(uVar4,*(undefined8 *)(this + 8));
  do {
    if (lVar3 == lVar2) {
      std::pair<std::string_const,int>::pair(apStack_30,(pair *)param_2);
      ProbabilityBucket::ProbabilityBucket((ProbabilityBucket *)apStack_20,apStack_30,param_3);
      std::
      vector<ProbabilitySet<DefaultWaveConfig>::ProbabilityBucket,std::allocator<ProbabilitySet<DefaultWaveConfig>::ProbabilityBucket>>
      ::push_back((vector<ProbabilitySet<DefaultWaveConfig>::ProbabilityBucket,std::allocator<ProbabilitySet<DefaultWaveConfig>::ProbabilityBucket>>
                   *)this,(ProbabilityBucket *)apStack_20);
      std::_Destroy<std::pair<std::string,Sexy::LeaderboardEntry::FieldData>>(apStack_20);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_3;
LAB_035b5540:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_00 = (DefaultWaveConfig *)FUN_0358f8c0(uVar4,lVar3);
    cVar1 = DefaultWaveConfig::operator==(this_00,param_2);
    if (cVar1 != '\0') {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + (param_3 - *(int *)(this_00 + 0x10));
      *(int *)(this_00 + 0x10) = param_3;
      goto LAB_035b5540;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* ProbabilitySet<ArtifactVaseConfigProperties>::PickItem() */

void ProbabilitySet<ArtifactVaseConfigProperties>::PickItem(void)

{
  int iVar1;
  undefined8 *in_x0;
  long lVar2;
  ZombossRobotSpawnZombieInfo *pZVar3;
  ArtifactVaseConfigProperties *in_x8;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_037248a4(in_x0[4],*(undefined4 *)(in_x0 + 3));
  uVar6 = *in_x0;
  iVar5 = 0;
  lVar2 = FUN_03724870(uVar6,in_x0[1]);
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      ArtifactVaseConfigProperties::ArtifactVaseConfigProperties(in_x8);
      return;
    }
    pZVar3 = (ZombossRobotSpawnZombieInfo *)FUN_037248c8(uVar6,lVar4);
    iVar5 = iVar5 + *(int *)(pZVar3 + 0x18);
    lVar4 = lVar4 + 1;
  } while (iVar5 <= iVar1);
  ZombossRobotSpawnZombieInfo::ZombossRobotSpawnZombieInfo
            ((ZombossRobotSpawnZombieInfo *)in_x8,pZVar3);
  return;
}


/* ProbabilitySet<ArtifactVaseConfigProperties>::~ProbabilitySet() */

void __thiscall
ProbabilitySet<ArtifactVaseConfigProperties>::~ProbabilitySet
          (ProbabilitySet<ArtifactVaseConfigProperties> *this)

{
  if (this[0x28] != (ProbabilitySet<ArtifactVaseConfigProperties>)0x0) {
    AK::FreeHook(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  std::
  vector<ProbabilitySet<ArtifactVaseConfigProperties>::ProbabilityBucket,std::allocator<ProbabilitySet<ArtifactVaseConfigProperties>::ProbabilityBucket>>
  ::~vector((vector<ProbabilitySet<ArtifactVaseConfigProperties>::ProbabilityBucket,std::allocator<ProbabilitySet<ArtifactVaseConfigProperties>::ProbabilityBucket>>
             *)this);
  return;
}


/* ProbabilitySet<ArtifactVaseConfigProperties>::TEMPNAMEPLACEHOLDERVALUE(ProbabilitySet<ArtifactVaseConfigProperties>
   const&) */

ProbabilitySet<ArtifactVaseConfigProperties> * __thiscall
ProbabilitySet<ArtifactVaseConfigProperties>::operator=
          (ProbabilitySet<ArtifactVaseConfigProperties> *this,ProbabilitySet *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  std::
  vector<ProbabilitySet<ArtifactVaseConfigProperties>::ProbabilityBucket,std::allocator<ProbabilitySet<ArtifactVaseConfigProperties>::ProbabilityBucket>>
  ::operator=((vector<ProbabilitySet<ArtifactVaseConfigProperties>::ProbabilityBucket,std::allocator<ProbabilitySet<ArtifactVaseConfigProperties>::ProbabilityBucket>>
               *)this,(vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  this[0x28] = *(ProbabilitySet<ArtifactVaseConfigProperties> *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined8 *)(this + 0x20) = uVar2;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<ArtifactVaseConfigProperties>::AddItem(ArtifactVaseConfigProperties, int) */

void __thiscall
ProbabilitySet<ArtifactVaseConfigProperties>::AddItem
          (ProbabilitySet<ArtifactVaseConfigProperties> *this,ArtifactVaseConfigProperties *param_2,
          int param_3)

{
  char cVar1;
  long lVar2;
  ArtifactVaseConfigProperties *this_00;
  long lVar3;
  undefined8 uVar4;
  ZombossRobotSpawnZombieInfo aZStack_40 [24];
  pair apStack_28 [32];
  long local_8;
  
  uVar4 = *(undefined8 *)this;
  lVar3 = 0;
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_03724870(uVar4,*(undefined8 *)(this + 8));
  do {
    if (lVar3 == lVar2) {
      ZombossRobotSpawnZombieInfo::ZombossRobotSpawnZombieInfo
                (aZStack_40,(ZombossRobotSpawnZombieInfo *)param_2);
      ProbabilitySet<ZombossRobotSpawnZombieInfo>::ProbabilityBucket::ProbabilityBucket
                ((ProbabilityBucket *)apStack_28,aZStack_40,param_3);
      std::
      vector<ProbabilitySet<ArtifactVaseConfigProperties>::ProbabilityBucket,std::allocator<ProbabilitySet<ArtifactVaseConfigProperties>::ProbabilityBucket>>
      ::push_back((vector<ProbabilitySet<ArtifactVaseConfigProperties>::ProbabilityBucket,std::allocator<ProbabilitySet<ArtifactVaseConfigProperties>::ProbabilityBucket>>
                   *)this,(ProbabilityBucket *)apStack_28);
      std::_Destroy<std::pair<std::string,Sexy::LeaderboardEntry::FieldData>>(apStack_28);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aZStack_40);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_3;
LAB_03792724:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_00 = (ArtifactVaseConfigProperties *)FUN_037248c8(uVar4,lVar3);
    cVar1 = ArtifactVaseConfigProperties::operator==(this_00,param_2);
    if (cVar1 != '\0') {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + (param_3 - *(int *)(this_00 + 0x18));
      *(int *)(this_00 + 0x18) = param_3;
      goto LAB_03792724;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* ProbabilitySet<std::string >::PickItem() */

void ProbabilitySet<std::string>::PickItem(void)

{
  int iVar1;
  undefined8 *in_x0;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_037d50b0(in_x0[4],*(undefined4 *)(in_x0 + 3));
  uVar6 = *in_x0;
  iVar5 = 0;
  lVar2 = FUN_037d509c(uVar6,in_x0[1]);
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      Set8BytesTo0();
      return;
    }
    lVar3 = FUN_037d50a8(uVar6,lVar4);
    iVar5 = iVar5 + *(int *)(lVar3 + 8);
    lVar4 = lVar4 + 1;
  } while (iVar5 <= iVar1);
  FUN_05475d88();
  return;
}


/* ProbabilitySet<std::string >::PickItemIgnoring(std::string const&) */

void ProbabilitySet<std::string>::PickItemIgnoring(string *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  string *psVar4;
  long lVar5;
  long lVar6;
  string *in_x1;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  
  uVar8 = *(undefined8 *)param_1;
  lVar7 = 0;
  lVar3 = FUN_037d509c(uVar8,*(undefined8 *)(param_1 + 8));
  do {
    if (lVar7 == lVar3) {
LAB_037d63d4:
      PickItem();
      return;
    }
    psVar4 = (string *)FUN_037d50a8(uVar8,lVar7);
    cVar1 = std::operator==(psVar4,in_x1);
    if (cVar1 != '\0') {
      if (lVar7 != -1) {
        if (lVar3 == 1) {
          FUN_037d50a8(uVar8,0);
        }
        else if (lVar3 == 2) {
          FUN_037d50a8(uVar8,lVar7 == 0);
        }
        else {
          lVar3 = 0;
          iVar9 = 0;
          iVar2 = FUN_037d50b0(*(undefined8 *)(param_1 + 0x20),
                               *(int *)(param_1 + 0x18) - *(int *)(psVar4 + 8));
          uVar8 = *(undefined8 *)param_1;
          lVar5 = FUN_037d509c(uVar8,*(undefined8 *)(param_1 + 8));
          while (lVar6 = lVar3, lVar3 != lVar5) {
            while (lVar3 = lVar6 + 1, lVar6 != lVar7) {
              lVar6 = FUN_037d50a8(uVar8,lVar6);
              iVar9 = iVar9 + *(int *)(lVar6 + 8);
              if (iVar2 < iVar9) goto LAB_037d6410;
              lVar6 = lVar3;
              if (lVar3 == lVar5) goto LAB_037d64ac;
            }
          }
LAB_037d64ac:
          FUN_037d50a8(uVar8,0xffffffffffffffff);
        }
LAB_037d6410:
        FUN_05475d88();
        return;
      }
      goto LAB_037d63d4;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}


/* ProbabilitySet<std::string >::~ProbabilitySet() */

void __thiscall ProbabilitySet<std::string>::~ProbabilitySet(ProbabilitySet<std::string> *this)

{
  if (this[0x28] != (ProbabilitySet<std::string>)0x0) {
    AK::FreeHook(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  std::
  vector<ProbabilitySet<std::string>::ProbabilityBucket,std::allocator<ProbabilitySet<std::string>::ProbabilityBucket>>
  ::~vector((vector<ProbabilitySet<std::string>::ProbabilityBucket,std::allocator<ProbabilitySet<std::string>::ProbabilityBucket>>
             *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<std::string >::AddItem(std::string, int) */

void __thiscall
ProbabilitySet<std::string>::AddItem(ProbabilitySet<std::string> *this,string *param_2,int param_3)

{
  char cVar1;
  long lVar2;
  string *psVar3;
  long lVar4;
  undefined8 uVar5;
  string asStack_20 [8];
  pair<std::string_const,Sexy::PILifeValueTable> apStack_18 [16];
  long local_8;
  
  uVar5 = *(undefined8 *)this;
  lVar4 = 0;
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_037d509c(uVar5,*(undefined8 *)(this + 8));
  do {
    if (lVar4 == lVar2) {
      FUN_05475d88(asStack_20,param_2);
      ProbabilityBucket::ProbabilityBucket((ProbabilityBucket *)apStack_18,asStack_20,param_3);
      std::
      vector<ProbabilitySet<std::string>::ProbabilityBucket,std::allocator<ProbabilitySet<std::string>::ProbabilityBucket>>
      ::push_back((vector<ProbabilitySet<std::string>::ProbabilityBucket,std::allocator<ProbabilitySet<std::string>::ProbabilityBucket>>
                   *)this,(ProbabilityBucket *)apStack_18);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_18);
      std::string::~string(asStack_20);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_3;
LAB_037db050:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    psVar3 = (string *)FUN_037d50a8(uVar5,lVar4);
    cVar1 = std::operator==(psVar3,param_2);
    if (cVar1 != '\0') {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + (param_3 - *(int *)(psVar3 + 8));
      *(int *)(psVar3 + 8) = param_3;
      goto LAB_037db050;
    }
    lVar4 = lVar4 + 1;
  } while( true );
}


/* ProbabilitySet<std::string >::GetSize() */

void __thiscall ProbabilitySet<std::string>::GetSize(ProbabilitySet<std::string> *this)

{
  FUN_0390516c(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* ProbabilitySet<bool>::PickItem() */

undefined1 __thiscall ProbabilitySet<bool>::PickItem(ProbabilitySet<bool> *this)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_03bb5844(*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x18));
  uVar6 = *(undefined8 *)this;
  iVar5 = 0;
  lVar2 = FUN_03bb5830(uVar6,*(undefined8 *)(this + 8));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return 0;
    }
    puVar3 = (undefined1 *)FUN_03bb583c(uVar6,lVar4);
    iVar5 = iVar5 + *(int *)(puVar3 + 4);
    lVar4 = lVar4 + 1;
  } while (iVar5 <= iVar1);
  return *puVar3;
}


/* ProbabilitySet<bool>::~ProbabilitySet() */

void __thiscall ProbabilitySet<bool>::~ProbabilitySet(ProbabilitySet<bool> *this)

{
  if (this[0x28] != (ProbabilitySet<bool>)0x0) {
    AK::FreeHook(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  std::
  vector<ProbabilitySet<bool>::ProbabilityBucket,std::allocator<ProbabilitySet<bool>::ProbabilityBucket>>
  ::~vector((vector<ProbabilitySet<bool>::ProbabilityBucket,std::allocator<ProbabilitySet<bool>::ProbabilityBucket>>
             *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<bool>::AddItem(bool, int) */

void __thiscall ProbabilitySet<bool>::AddItem(ProbabilitySet<bool> *this,bool param_1,int param_2)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ProbabilityBucket aPStack_10 [8];
  long local_8;
  
  lVar3 = 0;
  uVar4 = *(undefined8 *)this;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_03bb5830(uVar4,*(undefined8 *)(this + 8));
  do {
    if (lVar3 == lVar1) {
      ProbabilityBucket::ProbabilityBucket(aPStack_10,param_1,param_2);
      std::
      vector<ProbabilitySet<bool>::ProbabilityBucket,std::allocator<ProbabilitySet<bool>::ProbabilityBucket>>
      ::push_back((vector<ProbabilitySet<bool>::ProbabilityBucket,std::allocator<ProbabilitySet<bool>::ProbabilityBucket>>
                   *)this,aPStack_10);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_2;
LAB_03bbb1a8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pcVar2 = (char *)FUN_03bb583c(uVar4,lVar3);
    if ((bool)*pcVar2 == param_1) {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + (param_2 - *(int *)(pcVar2 + 4));
      *(int *)(pcVar2 + 4) = param_2;
      goto LAB_03bbb1a8;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle>::GetSize() */

void __thiscall
ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle>::GetSize
          (ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle> *this)

{
  FUN_03c88ec8(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle>::PickItem() */

undefined4 __thiscall
ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle>::PickItem
          (ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle> *this)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_03c88edc(*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x18));
  uVar6 = *(undefined8 *)this;
  iVar5 = 0;
  lVar2 = FUN_03c88ec8(uVar6,*(undefined8 *)(this + 8));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return 0;
    }
    puVar3 = (undefined4 *)FUN_03c88ed4(uVar6,lVar4);
    iVar5 = iVar5 + puVar3[1];
    lVar4 = lVar4 + 1;
  } while (iVar5 <= iVar1);
  return *puVar3;
}


/* ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle>::~ProbabilitySet() */

void __thiscall
ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle>::~ProbabilitySet
          (ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle> *this)

{
  if (this[0x28] != (ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle>)0x0) {
    AK::FreeHook(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  std::
  vector<ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle>::ProbabilityBucket,std::allocator<ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle>::ProbabilityBucket>>
  ::~vector((vector<ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle>::ProbabilityBucket,std::allocator<ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle>::ProbabilityBucket>>
             *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle>::AddItem(CrazyOlafTestProperties::TestActionsCrazyOlafStyle,
   int) */

void __thiscall
ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle>::AddItem
          (ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle> *this,int param_2,
          int param_3)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  UnchartedModePlantNumData aUStack_10 [8];
  long local_8;
  
  lVar3 = 0;
  uVar4 = *(undefined8 *)this;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_03c88ec8(uVar4,*(undefined8 *)(this + 8));
  do {
    if (lVar3 == lVar1) {
      UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_10,param_2,param_3);
      std::
      vector<ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle>::ProbabilityBucket,std::allocator<ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle>::ProbabilityBucket>>
      ::push_back((vector<ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle>::ProbabilityBucket,std::allocator<ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle>::ProbabilityBucket>>
                   *)this,(ProbabilityBucket *)aUStack_10);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_3;
LAB_03c8e11c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar2 = (int *)FUN_03c88ed4(uVar4,lVar3);
    if (*piVar2 == param_2) {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + (param_3 - piVar2[1]);
      piVar2[1] = param_3;
      goto LAB_03c8e11c;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* ProbabilitySet<DangerRoomRewardCard*>::GetSize() */

void __thiscall
ProbabilitySet<DangerRoomRewardCard*>::GetSize(ProbabilitySet<DangerRoomRewardCard*> *this)

{
  FUN_03c9fa90(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* ProbabilitySet<DangerRoomRewardCard*>::PickItem() */

undefined8 __thiscall
ProbabilitySet<DangerRoomRewardCard*>::PickItem(ProbabilitySet<DangerRoomRewardCard*> *this)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_03c9faa4(*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x18));
  uVar6 = *(undefined8 *)this;
  iVar5 = 0;
  lVar2 = FUN_03c9fa90(uVar6,*(undefined8 *)(this + 8));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return 0;
    }
    puVar3 = (undefined8 *)FUN_03c9fa9c(uVar6,lVar4);
    iVar5 = iVar5 + *(int *)(puVar3 + 1);
    lVar4 = lVar4 + 1;
  } while (iVar5 <= iVar1);
  return *puVar3;
}


/* ProbabilitySet<DangerRoomRewardCard*>::~ProbabilitySet() */

void __thiscall
ProbabilitySet<DangerRoomRewardCard*>::~ProbabilitySet(ProbabilitySet<DangerRoomRewardCard*> *this)

{
  if (this[0x28] != (ProbabilitySet<DangerRoomRewardCard*>)0x0) {
    AK::FreeHook(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  std::
  vector<ProbabilitySet<DangerRoomRewardCard*>::ProbabilityBucket,std::allocator<ProbabilitySet<DangerRoomRewardCard*>::ProbabilityBucket>>
  ::~vector((vector<ProbabilitySet<DangerRoomRewardCard*>::ProbabilityBucket,std::allocator<ProbabilitySet<DangerRoomRewardCard*>::ProbabilityBucket>>
             *)this);
  return;
}


/* ProbabilitySet<int>::ProbabilitySet(unsigned long) */

void __thiscall ProbabilitySet<int>::ProbabilitySet(ProbabilitySet<int> *this,ulong param_1)

{
  MTRand *this_00;
  
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  *(undefined4 *)(this + 0x18) = 0;
  this_00 = ::operator_new(0x1398);
  Sexy::MTRand::MTRand(this_00,param_1);
  *(MTRand **)(this + 0x20) = this_00;
  this[0x28] = (ProbabilitySet<int>)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<DangerRoomRewardCard*>::RemoveItem(DangerRoomRewardCard*) */

void __thiscall
ProbabilitySet<DangerRoomRewardCard*>::RemoveItem
          (ProbabilitySet<DangerRoomRewardCard*> *this,DangerRoomRewardCard *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      if ((DangerRoomRewardCard *)*puVar2 == param_1) break;
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    *(int *)(this + 0x18) = *(int *)(this + 0x18) - *(int *)(puVar2 + 1);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    local_18 = std::
               vector<ProbabilitySet<DangerRoomRewardCard*>::ProbabilityBucket,std::allocator<ProbabilitySet<DangerRoomRewardCard*>::ProbabilityBucket>>
               ::erase((vector<ProbabilitySet<DangerRoomRewardCard*>::ProbabilityBucket,std::allocator<ProbabilitySet<DangerRoomRewardCard*>::ProbabilityBucket>>
                        *)this,local_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<DangerRoomRewardCard*>::AddItem(DangerRoomRewardCard*, int) */

void __thiscall
ProbabilitySet<DangerRoomRewardCard*>::AddItem
          (ProbabilitySet<DangerRoomRewardCard*> *this,DangerRoomRewardCard *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  TextRun aTStack_18 [16];
  long local_8;
  
  lVar3 = 0;
  uVar4 = *(undefined8 *)this;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_03c9fa90(uVar4,*(undefined8 *)(this + 8));
  do {
    if (lVar3 == lVar1) {
      EA::Text::TextRun::TextRun(aTStack_18,(wchar16 *)param_1,param_2);
      std::
      vector<ProbabilitySet<DangerRoomRewardCard*>::ProbabilityBucket,std::allocator<ProbabilitySet<DangerRoomRewardCard*>::ProbabilityBucket>>
      ::push_back((vector<ProbabilitySet<DangerRoomRewardCard*>::ProbabilityBucket,std::allocator<ProbabilitySet<DangerRoomRewardCard*>::ProbabilityBucket>>
                   *)this,(ProbabilityBucket *)aTStack_18);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_2;
LAB_03ca5c44:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar2 = (undefined8 *)FUN_03c9fa9c(uVar4,lVar3);
    if ((DangerRoomRewardCard *)*puVar2 == param_1) {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + (param_2 - *(int *)(puVar2 + 1));
      *(int *)(puVar2 + 1) = param_2;
      goto LAB_03ca5c44;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* ProbabilitySet<int>::PickItemIgnoring(int const&) */

ulong __thiscall ProbabilitySet<int>::PickItemIgnoring(ProbabilitySet<int> *this,int *param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  ulong uVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  
  uVar8 = *(undefined8 *)this;
  lVar7 = 0;
  lVar2 = FUN_03cdd900(uVar8,*(undefined8 *)(this + 8));
  do {
    if (lVar7 == lVar2) {
LAB_03cddd7c:
      uVar4 = PickItem(this);
      return uVar4;
    }
    piVar3 = (int *)FUN_03cdd90c(uVar8,lVar7);
    if (*piVar3 == *param_1) {
      if (lVar7 != -1) {
        if (lVar2 == 1) {
          puVar5 = (uint *)FUN_03cdd90c(uVar8,0);
          return (ulong)*puVar5;
        }
        if (lVar2 == 2) {
          puVar5 = (uint *)FUN_03cdd90c(uVar8,lVar7 == 0);
LAB_03cdddbc:
          return (ulong)*puVar5;
        }
        lVar2 = 0;
        iVar10 = 0;
        iVar1 = FUN_03cdd914(*(undefined8 *)(this + 0x20),*(int *)(this + 0x18) - piVar3[1]);
        uVar8 = *(undefined8 *)this;
        lVar6 = FUN_03cdd900(uVar8,*(undefined8 *)(this + 8));
        while (lVar9 = lVar2, lVar2 != lVar6) {
          while (lVar2 = lVar9 + 1, lVar9 != lVar7) {
            puVar5 = (uint *)FUN_03cdd90c(uVar8,lVar9);
            iVar10 = iVar10 + puVar5[1];
            if (iVar1 < iVar10) goto LAB_03cdddbc;
            lVar9 = lVar2;
            if (lVar2 == lVar6) goto LAB_03cdde48;
          }
        }
LAB_03cdde48:
        puVar5 = (uint *)FUN_03cdd90c(uVar8,0xffffffffffffffff);
        return (ulong)*puVar5;
      }
      goto LAB_03cddd7c;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}


/* ProbabilitySet<std::string >::Clear() */

void __thiscall ProbabilitySet<std::string>::Clear(ProbabilitySet<std::string> *this)

{
  *(undefined4 *)(this + 0x18) = 0;
  std::
  vector<ProbabilitySet<std::string>::ProbabilityBucket,std::allocator<ProbabilitySet<std::string>::ProbabilityBucket>>
  ::clear((vector<ProbabilitySet<std::string>::ProbabilityBucket,std::allocator<ProbabilitySet<std::string>::ProbabilityBucket>>
           *)this);
  return;
}


/* ProbabilitySet<Sexy::RtWeakPtr<ZombieType const> >::PickItem() */

void ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::PickItem(void)

{
  int iVar1;
  undefined8 *in_x0;
  long lVar2;
  RtWeakPtrBase *pRVar3;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_040d01f8(in_x0[4],*(undefined4 *)(in_x0 + 3));
  uVar6 = *in_x0;
  iVar5 = 0;
  lVar2 = FUN_040d01e4(uVar6,in_x0[1]);
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (in_x8);
      return;
    }
    pRVar3 = (RtWeakPtrBase *)FUN_040d01f0(uVar6,lVar4);
    iVar5 = iVar5 + *(int *)(pRVar3 + 8);
    lVar4 = lVar4 + 1;
  } while (iVar5 <= iVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr((RtWeakPtr<Sexy::SoundResource> *)in_x8,pRVar3);
  return;
}


/* ProbabilitySet<Sexy::RtWeakPtr<ZombieType const> >::~ProbabilitySet() */

void __thiscall
ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::~ProbabilitySet
          (ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>> *this)

{
  if (this[0x28] != (ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>)0x0) {
    AK::FreeHook(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  std::
  vector<ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::ProbabilityBucket,std::allocator<ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::ProbabilityBucket>>
  ::~vector((vector<ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::ProbabilityBucket,std::allocator<ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::ProbabilityBucket>>
             *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<Sexy::RtWeakPtr<ZombieType const> >::AddItem(Sexy::RtWeakPtr<ZombieType const>,
   int) */

void __thiscall
ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::AddItem
          (ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>> *this,RtWeakPtrBase *param_2,
          int param_3)

{
  char cVar1;
  long lVar2;
  RtWeakPtrBase *this_00;
  long lVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  uVar4 = *(undefined8 *)this;
  lVar3 = 0;
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_040d01e4(uVar4,*(undefined8 *)(this + 8));
  do {
    if (lVar3 == lVar2) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,param_2);
      ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::ProbabilityBucket::ProbabilityBucket
                ((ProbabilityBucket *)aRStack_18,aRStack_20,param_3);
      std::
      vector<ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::ProbabilityBucket,std::allocator<ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::ProbabilityBucket>>
      ::push_back((vector<ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::ProbabilityBucket,std::allocator<ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::ProbabilityBucket>>
                   *)this,(ProbabilityBucket *)aRStack_18);
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_3;
LAB_040d4800:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_00 = (RtWeakPtrBase *)FUN_040d01f0(uVar4,lVar3);
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_00,param_2);
    if (cVar1 != '\0') {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + (param_3 - *(int *)(this_00 + 8));
      *(int *)(this_00 + 8) = param_3;
      goto LAB_040d4800;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* ProbabilitySet<bool>::GetSize() */

void __thiscall ProbabilitySet<bool>::GetSize(ProbabilitySet<bool> *this)

{
  FUN_04115b48(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* ProbabilitySet<Sexy::RtWeakPtr<PlantType const> >::PickItem() */

void ProbabilitySet<Sexy::RtWeakPtr<PlantType_const>>::PickItem(void)

{
  int iVar1;
  undefined8 *in_x0;
  long lVar2;
  RtWeakPtrBase *pRVar3;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_0416e3f8(in_x0[4],*(undefined4 *)(in_x0 + 3));
  uVar6 = *in_x0;
  iVar5 = 0;
  lVar2 = FUN_0416e3e4(uVar6,in_x0[1]);
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (in_x8);
      return;
    }
    pRVar3 = (RtWeakPtrBase *)FUN_0416e3f0(uVar6,lVar4);
    iVar5 = iVar5 + *(int *)(pRVar3 + 8);
    lVar4 = lVar4 + 1;
  } while (iVar5 <= iVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr((RtWeakPtr<Sexy::SoundResource> *)in_x8,pRVar3);
  return;
}


/* ProbabilitySet<Sexy::RtWeakPtr<PlantType const> >::~ProbabilitySet() */

void __thiscall
ProbabilitySet<Sexy::RtWeakPtr<PlantType_const>>::~ProbabilitySet
          (ProbabilitySet<Sexy::RtWeakPtr<PlantType_const>> *this)

{
  if (this[0x28] != (ProbabilitySet<Sexy::RtWeakPtr<PlantType_const>>)0x0) {
    AK::FreeHook(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  std::
  vector<ProbabilitySet<Sexy::RtWeakPtr<PlantType_const>>::ProbabilityBucket,std::allocator<ProbabilitySet<Sexy::RtWeakPtr<PlantType_const>>::ProbabilityBucket>>
  ::~vector((vector<ProbabilitySet<Sexy::RtWeakPtr<PlantType_const>>::ProbabilityBucket,std::allocator<ProbabilitySet<Sexy::RtWeakPtr<PlantType_const>>::ProbabilityBucket>>
             *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<Sexy::RtWeakPtr<PlantType const> >::AddItem(Sexy::RtWeakPtr<PlantType const>, int)
    */

void __thiscall
ProbabilitySet<Sexy::RtWeakPtr<PlantType_const>>::AddItem
          (ProbabilitySet<Sexy::RtWeakPtr<PlantType_const>> *this,RtWeakPtrBase *param_2,int param_3
          )

{
  char cVar1;
  long lVar2;
  RtWeakPtrBase *this_00;
  long lVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  uVar4 = *(undefined8 *)this;
  lVar3 = 0;
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_0416e3e4(uVar4,*(undefined8 *)(this + 8));
  do {
    if (lVar3 == lVar2) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,param_2);
      ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::ProbabilityBucket::ProbabilityBucket
                ((ProbabilityBucket *)aRStack_18,aRStack_20,param_3);
      std::
      vector<ProbabilitySet<Sexy::RtWeakPtr<PlantType_const>>::ProbabilityBucket,std::allocator<ProbabilitySet<Sexy::RtWeakPtr<PlantType_const>>::ProbabilityBucket>>
      ::push_back((vector<ProbabilitySet<Sexy::RtWeakPtr<PlantType_const>>::ProbabilityBucket,std::allocator<ProbabilitySet<Sexy::RtWeakPtr<PlantType_const>>::ProbabilityBucket>>
                   *)this,(ProbabilityBucket *)aRStack_18);
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_3;
LAB_041719b4:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_00 = (RtWeakPtrBase *)FUN_0416e3f0(uVar4,lVar3);
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_00,param_2);
    if (cVar1 != '\0') {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + (param_3 - *(int *)(this_00 + 8));
      *(int *)(this_00 + 8) = param_3;
      goto LAB_041719b4;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* ProbabilitySet<int>::ProbabilitySet(ProbabilitySet<int> const&) */

void __thiscall
ProbabilitySet<int>::ProbabilitySet(ProbabilitySet<int> *this,ProbabilitySet *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  std::
  vector<ProbabilitySet<int>::ProbabilityBucket,std::allocator<ProbabilitySet<int>::ProbabilityBucket>>
  ::vector((vector<ProbabilitySet<int>::ProbabilityBucket,std::allocator<ProbabilitySet<int>::ProbabilityBucket>>
            *)this,(vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  this[0x28] = *(ProbabilitySet<int> *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined8 *)(this + 0x20) = uVar2;
  return;
}


/* ProbabilitySet<int>::TEMPNAMEPLACEHOLDERVALUE(ProbabilitySet<int> const&) */

ProbabilitySet<int> * __thiscall
ProbabilitySet<int>::operator=(ProbabilitySet<int> *this,ProbabilitySet *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  std::
  vector<ProbabilitySet<int>::ProbabilityBucket,std::allocator<ProbabilitySet<int>::ProbabilityBucket>>
  ::operator=((vector<ProbabilitySet<int>::ProbabilityBucket,std::allocator<ProbabilitySet<int>::ProbabilityBucket>>
               *)this,(vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  this[0x28] = *(ProbabilitySet<int> *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined8 *)(this + 0x20) = uVar2;
  return this;
}


/* ProbabilitySet<Sexy::Point>::GetSize() */

void __thiscall ProbabilitySet<Sexy::Point>::GetSize(ProbabilitySet<Sexy::Point> *this)

{
  FUN_0449e5c8(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* ProbabilitySet<Sexy::Point>::PickItem() */

void ProbabilitySet<Sexy::Point>::PickItem(void)

{
  int iVar1;
  undefined8 *in_x0;
  long lVar2;
  TPoint *pTVar3;
  Point *in_x8;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_0449e5e8(in_x0[4],*(undefined4 *)(in_x0 + 3));
  uVar6 = *in_x0;
  iVar5 = 0;
  lVar2 = FUN_0449e5c8(uVar6,in_x0[1]);
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      Sexy::Point::Point(in_x8);
      return;
    }
    pTVar3 = (TPoint *)FUN_0449e5dc(uVar6,lVar4);
    iVar5 = iVar5 + *(int *)(pTVar3 + 8);
    lVar4 = lVar4 + 1;
  } while (iVar5 <= iVar1);
  Sexy::Point::Point(in_x8,pTVar3);
  return;
}


/* ProbabilitySet<Sexy::Point>::~ProbabilitySet() */

void __thiscall ProbabilitySet<Sexy::Point>::~ProbabilitySet(ProbabilitySet<Sexy::Point> *this)

{
  if (this[0x28] != (ProbabilitySet<Sexy::Point>)0x0) {
    AK::FreeHook(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  std::
  vector<ProbabilitySet<Sexy::Point>::ProbabilityBucket,std::allocator<ProbabilitySet<Sexy::Point>::ProbabilityBucket>>
  ::~vector((vector<ProbabilitySet<Sexy::Point>::ProbabilityBucket,std::allocator<ProbabilitySet<Sexy::Point>::ProbabilityBucket>>
             *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<Sexy::Point>::AddItem(Sexy::Point, int) */

void __thiscall
ProbabilitySet<Sexy::Point>::AddItem(ProbabilitySet<Sexy::Point> *this,TPoint *param_2,int param_3)

{
  char cVar1;
  long lVar2;
  TPoint<int> *this_00;
  long lVar3;
  undefined8 uVar4;
  Point aPStack_20 [8];
  ProbabilityBucket aPStack_18 [16];
  long local_8;
  
  uVar4 = *(undefined8 *)this;
  lVar3 = 0;
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_0449e5c8(uVar4,*(undefined8 *)(this + 8));
  do {
    if (lVar3 == lVar2) {
      Sexy::Point::Point(aPStack_20,param_2);
      ProbabilityBucket::ProbabilityBucket(aPStack_18,aPStack_20,param_3);
      std::
      vector<ProbabilitySet<Sexy::Point>::ProbabilityBucket,std::allocator<ProbabilitySet<Sexy::Point>::ProbabilityBucket>>
      ::push_back((vector<ProbabilitySet<Sexy::Point>::ProbabilityBucket,std::allocator<ProbabilitySet<Sexy::Point>::ProbabilityBucket>>
                   *)this,aPStack_18);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_3;
LAB_0449fab8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_00 = (TPoint<int> *)FUN_0449e5dc(uVar4,lVar3);
    cVar1 = Sexy::TPoint<int>::operator==(this_00,param_2);
    if (cVar1 != '\0') {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + (param_3 - *(int *)(this_00 + 8));
      *(int *)(this_00 + 8) = param_3;
      goto LAB_0449fab8;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* ProbabilitySet<Sexy::RtWeakPtr<ZombieType const> >::GetSize() */

void __thiscall
ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::GetSize
          (ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>> *this)

{
  FUN_044f4630(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* ProbabilitySet<ZombieSkill*>::GetSize() */

void __thiscall ProbabilitySet<ZombieSkill*>::GetSize(ProbabilitySet<ZombieSkill*> *this)

{
  FUN_045b4008(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* ProbabilitySet<ZombieSkill*>::PickItem() */

undefined8 __thiscall ProbabilitySet<ZombieSkill*>::PickItem(ProbabilitySet<ZombieSkill*> *this)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_045b401c(*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x18));
  uVar6 = *(undefined8 *)this;
  iVar5 = 0;
  lVar2 = FUN_045b4008(uVar6,*(undefined8 *)(this + 8));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return 0;
    }
    puVar3 = (undefined8 *)FUN_045b4014(uVar6,lVar4);
    iVar5 = iVar5 + *(int *)(puVar3 + 1);
    lVar4 = lVar4 + 1;
  } while (iVar5 <= iVar1);
  return *puVar3;
}


/* ProbabilitySet<ZombieSkill*>::~ProbabilitySet() */

void __thiscall ProbabilitySet<ZombieSkill*>::~ProbabilitySet(ProbabilitySet<ZombieSkill*> *this)

{
  if (this[0x28] != (ProbabilitySet<ZombieSkill*>)0x0) {
    AK::FreeHook(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  std::
  vector<ProbabilitySet<ZombieSkill*>::ProbabilityBucket,std::allocator<ProbabilitySet<ZombieSkill*>::ProbabilityBucket>>
  ::~vector((vector<ProbabilitySet<ZombieSkill*>::ProbabilityBucket,std::allocator<ProbabilitySet<ZombieSkill*>::ProbabilityBucket>>
             *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<ZombieSkill*>::RemoveItem(ZombieSkill*) */

void __thiscall
ProbabilitySet<ZombieSkill*>::RemoveItem(ProbabilitySet<ZombieSkill*> *this,ZombieSkill *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      if ((ZombieSkill *)*puVar2 == param_1) break;
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    *(int *)(this + 0x18) = *(int *)(this + 0x18) - *(int *)(puVar2 + 1);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    local_18 = std::
               vector<ProbabilitySet<ZombieSkill*>::ProbabilityBucket,std::allocator<ProbabilitySet<ZombieSkill*>::ProbabilityBucket>>
               ::erase((vector<ProbabilitySet<ZombieSkill*>::ProbabilityBucket,std::allocator<ProbabilitySet<ZombieSkill*>::ProbabilityBucket>>
                        *)this,local_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<ZombieSkill*>::AddItem(ZombieSkill*, int) */

void __thiscall
ProbabilitySet<ZombieSkill*>::AddItem
          (ProbabilitySet<ZombieSkill*> *this,ZombieSkill *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  TextRun aTStack_18 [16];
  long local_8;
  
  lVar3 = 0;
  uVar4 = *(undefined8 *)this;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_045b4008(uVar4,*(undefined8 *)(this + 8));
  do {
    if (lVar3 == lVar1) {
      EA::Text::TextRun::TextRun(aTStack_18,(wchar16 *)param_1,param_2);
      std::
      vector<ProbabilitySet<ZombieSkill*>::ProbabilityBucket,std::allocator<ProbabilitySet<ZombieSkill*>::ProbabilityBucket>>
      ::push_back((vector<ProbabilitySet<ZombieSkill*>::ProbabilityBucket,std::allocator<ProbabilitySet<ZombieSkill*>::ProbabilityBucket>>
                   *)this,(ProbabilityBucket *)aTStack_18);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_2;
LAB_045e4370:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar2 = (undefined8 *)FUN_045b4014(uVar4,lVar3);
    if ((ZombieSkill *)*puVar2 == param_1) {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + (param_2 - *(int *)(puVar2 + 1));
      *(int *)(puVar2 + 1) = param_2;
      goto LAB_045e4370;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition const> >::GetSize() */

void __thiscall
ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::GetSize
          (ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>> *this)

{
  FUN_04627aa0(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition const> >::PickItem() */

void ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::PickItem(void)

{
  int iVar1;
  undefined8 *in_x0;
  long lVar2;
  RtWeakPtrBase *pRVar3;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_04627ab4(in_x0[4],*(undefined4 *)(in_x0 + 3));
  uVar6 = *in_x0;
  iVar5 = 0;
  lVar2 = FUN_04627aa0(uVar6,in_x0[1]);
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (in_x8);
      return;
    }
    pRVar3 = (RtWeakPtrBase *)FUN_04627aac(uVar6,lVar4);
    iVar5 = iVar5 + *(int *)(pRVar3 + 8);
    lVar4 = lVar4 + 1;
  } while (iVar5 <= iVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr((RtWeakPtr<Sexy::SoundResource> *)in_x8,pRVar3);
  return;
}


/* ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition const> >::~ProbabilitySet() */

void __thiscall
ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::~ProbabilitySet
          (ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>> *this)

{
  if (this[0x28] != (ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>)0x0) {
    AK::FreeHook(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  std::
  vector<ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::ProbabilityBucket,std::allocator<ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::ProbabilityBucket>>
  ::~vector((vector<ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::ProbabilityBucket,std::allocator<ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::ProbabilityBucket>>
             *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition const>
   >::RemoveItem(Sexy::RtWeakPtr<ZombieActionDefinition const>) */

void __thiscall
ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::RemoveItem
          (ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>> *this,
          RtWeakPtrBase *param_2)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      this_00 = (RtWeakPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar2 = Sexy::RtWeakPtrBase::operator==(this_00,param_2);
      if (cVar2 == '\0') break;
      *(int *)(this + 0x18) = *(int *)(this + 0x18) - *(int *)(this_00 + 8);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::
                 vector<ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::ProbabilityBucket,std::allocator<ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::ProbabilityBucket>>
                 ::erase((vector<ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::ProbabilityBucket,std::allocator<ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::ProbabilityBucket>>
                          *)this,local_10);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition const>
   >::AddItem(Sexy::RtWeakPtr<ZombieActionDefinition const>, int) */

void __thiscall
ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::AddItem
          (ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>> *this,
          RtWeakPtrBase *param_2,int param_3)

{
  char cVar1;
  long lVar2;
  RtWeakPtrBase *this_00;
  long lVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  uVar4 = *(undefined8 *)this;
  lVar3 = 0;
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_04627aa0(uVar4,*(undefined8 *)(this + 8));
  do {
    if (lVar3 == lVar2) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,param_2);
      ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::ProbabilityBucket::ProbabilityBucket
                ((ProbabilityBucket *)aRStack_18,aRStack_20,param_3);
      std::
      vector<ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::ProbabilityBucket,std::allocator<ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::ProbabilityBucket>>
      ::push_back((vector<ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::ProbabilityBucket,std::allocator<ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::ProbabilityBucket>>
                   *)this,(ProbabilityBucket *)aRStack_18);
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_3;
LAB_04628dfc:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_00 = (RtWeakPtrBase *)FUN_04627aac(uVar4,lVar3);
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_00,param_2);
    if (cVar1 != '\0') {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + (param_3 - *(int *)(this_00 + 8));
      *(int *)(this_00 + 8) = param_3;
      goto LAB_04628dfc;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* ProbabilitySet<char const*>::PickItem() */

undefined8 __thiscall ProbabilitySet<char_const*>::PickItem(ProbabilitySet<char_const*> *this)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_04644a7c(*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x18));
  uVar6 = *(undefined8 *)this;
  iVar5 = 0;
  lVar2 = FUN_04644a68(uVar6,*(undefined8 *)(this + 8));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return 0;
    }
    puVar3 = (undefined8 *)FUN_04644a74(uVar6,lVar4);
    iVar5 = iVar5 + *(int *)(puVar3 + 1);
    lVar4 = lVar4 + 1;
  } while (iVar5 <= iVar1);
  return *puVar3;
}


/* ProbabilitySet<char const*>::~ProbabilitySet() */

void __thiscall ProbabilitySet<char_const*>::~ProbabilitySet(ProbabilitySet<char_const*> *this)

{
  if (this[0x28] != (ProbabilitySet<char_const*>)0x0) {
    AK::FreeHook(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  std::
  vector<ProbabilitySet<char_const*>::ProbabilityBucket,std::allocator<ProbabilitySet<char_const*>::ProbabilityBucket>>
  ::~vector((vector<ProbabilitySet<char_const*>::ProbabilityBucket,std::allocator<ProbabilitySet<char_const*>::ProbabilityBucket>>
             *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<char const*>::AddItem(char const*, int) */

void __thiscall
ProbabilitySet<char_const*>::AddItem(ProbabilitySet<char_const*> *this,char *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  TextRun aTStack_18 [16];
  long local_8;
  
  lVar3 = 0;
  uVar4 = *(undefined8 *)this;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_04644a68(uVar4,*(undefined8 *)(this + 8));
  do {
    if (lVar3 == lVar1) {
      EA::Text::TextRun::TextRun(aTStack_18,(wchar16 *)param_1,param_2);
      std::
      vector<ProbabilitySet<char_const*>::ProbabilityBucket,std::allocator<ProbabilitySet<char_const*>::ProbabilityBucket>>
      ::push_back((vector<ProbabilitySet<char_const*>::ProbabilityBucket,std::allocator<ProbabilitySet<char_const*>::ProbabilityBucket>>
                   *)this,(ProbabilityBucket *)aTStack_18);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_2;
LAB_0464845c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar2 = (undefined8 *)FUN_04644a74(uVar4,lVar3);
    if ((char *)*puVar2 == param_1) {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + (param_2 - *(int *)(puVar2 + 1));
      *(int *)(puVar2 + 1) = param_2;
      goto LAB_0464845c;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* ProbabilitySet<EZombossBladeRandomAction>::GetSize() */

void __thiscall
ProbabilitySet<EZombossBladeRandomAction>::GetSize(ProbabilitySet<EZombossBladeRandomAction> *this)

{
  FUN_046f9eb8(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* ProbabilitySet<EZombossBladeRandomAction>::PickItem() */

undefined4 __thiscall
ProbabilitySet<EZombossBladeRandomAction>::PickItem(ProbabilitySet<EZombossBladeRandomAction> *this)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_046f9ecc(*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x18));
  uVar6 = *(undefined8 *)this;
  iVar5 = 0;
  lVar2 = FUN_046f9eb8(uVar6,*(undefined8 *)(this + 8));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return 0;
    }
    puVar3 = (undefined4 *)FUN_046f9ec4(uVar6,lVar4);
    iVar5 = iVar5 + puVar3[1];
    lVar4 = lVar4 + 1;
  } while (iVar5 <= iVar1);
  return *puVar3;
}


/* ProbabilitySet<EZombossBladeRandomAction>::~ProbabilitySet() */

void __thiscall
ProbabilitySet<EZombossBladeRandomAction>::~ProbabilitySet
          (ProbabilitySet<EZombossBladeRandomAction> *this)

{
  if (this[0x28] != (ProbabilitySet<EZombossBladeRandomAction>)0x0) {
    AK::FreeHook(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  std::
  vector<ProbabilitySet<EZombossBladeRandomAction>::ProbabilityBucket,std::allocator<ProbabilitySet<EZombossBladeRandomAction>::ProbabilityBucket>>
  ::~vector((vector<ProbabilitySet<EZombossBladeRandomAction>::ProbabilityBucket,std::allocator<ProbabilitySet<EZombossBladeRandomAction>::ProbabilityBucket>>
             *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<EZombossBladeRandomAction>::RemoveItem(EZombossBladeRandomAction) */

void __thiscall
ProbabilitySet<EZombossBladeRandomAction>::RemoveItem
          (ProbabilitySet<EZombossBladeRandomAction> *this,int param_2)

{
  bool bVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if (*piVar2 == param_2) break;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    *(int *)(this + 0x18) = *(int *)(this + 0x18) - piVar2[1];
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    local_18 = std::
               vector<ProbabilitySet<EZombossBladeRandomAction>::ProbabilityBucket,std::allocator<ProbabilitySet<EZombossBladeRandomAction>::ProbabilityBucket>>
               ::erase((vector<ProbabilitySet<EZombossBladeRandomAction>::ProbabilityBucket,std::allocator<ProbabilitySet<EZombossBladeRandomAction>::ProbabilityBucket>>
                        *)this,local_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<EZombossBladeRandomAction>::AddItem(EZombossBladeRandomAction, int) */

void __thiscall
ProbabilitySet<EZombossBladeRandomAction>::AddItem
          (ProbabilitySet<EZombossBladeRandomAction> *this,int param_2,int param_3)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  UnchartedModePlantNumData aUStack_10 [8];
  long local_8;
  
  lVar3 = 0;
  uVar4 = *(undefined8 *)this;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_046f9eb8(uVar4,*(undefined8 *)(this + 8));
  do {
    if (lVar3 == lVar1) {
      UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_10,param_2,param_3);
      std::
      vector<ProbabilitySet<EZombossBladeRandomAction>::ProbabilityBucket,std::allocator<ProbabilitySet<EZombossBladeRandomAction>::ProbabilityBucket>>
      ::push_back((vector<ProbabilitySet<EZombossBladeRandomAction>::ProbabilityBucket,std::allocator<ProbabilitySet<EZombossBladeRandomAction>::ProbabilityBucket>>
                   *)this,(ProbabilityBucket *)aUStack_10);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_3;
LAB_046ffec8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar2 = (int *)FUN_046f9ec4(uVar4,lVar3);
    if (*piVar2 == param_2) {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + (param_3 - piVar2[1]);
      piVar2[1] = param_3;
      goto LAB_046ffec8;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* ProbabilitySet<float>::GetSize() */

void __thiscall ProbabilitySet<float>::GetSize(ProbabilitySet<float> *this)

{
  FUN_04794a18(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* ProbabilitySet<float>::PickItem() */

undefined4 __thiscall ProbabilitySet<float>::PickItem(ProbabilitySet<float> *this)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_04794a2c(*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x18));
  uVar6 = *(undefined8 *)this;
  iVar5 = 0;
  lVar2 = FUN_04794a18(uVar6,*(undefined8 *)(this + 8));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return 0;
    }
    puVar3 = (undefined4 *)FUN_04794a24(uVar6,lVar4);
    iVar5 = iVar5 + puVar3[1];
    lVar4 = lVar4 + 1;
  } while (iVar5 <= iVar1);
  return *puVar3;
}


/* ProbabilitySet<float>::~ProbabilitySet() */

void __thiscall ProbabilitySet<float>::~ProbabilitySet(ProbabilitySet<float> *this)

{
  if (this[0x28] != (ProbabilitySet<float>)0x0) {
    AK::FreeHook(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  std::
  vector<ProbabilitySet<float>::ProbabilityBucket,std::allocator<ProbabilitySet<float>::ProbabilityBucket>>
  ::~vector((vector<ProbabilitySet<float>::ProbabilityBucket,std::allocator<ProbabilitySet<float>::ProbabilityBucket>>
             *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<float>::AddItem(float, int) */

void __thiscall
ProbabilitySet<float>::AddItem(ProbabilitySet<float> *this,float param_1,int param_2)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  undefined8 uVar4;
  ProbabilityBucket aPStack_10 [8];
  long local_8;
  
  uVar4 = *(undefined8 *)this;
  lVar3 = 0;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_04794a18(uVar4,*(undefined8 *)(this + 8));
  do {
    if (lVar3 == lVar1) {
      ProbabilityBucket::ProbabilityBucket(aPStack_10,param_1,param_2);
      std::
      vector<ProbabilitySet<float>::ProbabilityBucket,std::allocator<ProbabilitySet<float>::ProbabilityBucket>>
      ::push_back((vector<ProbabilitySet<float>::ProbabilityBucket,std::allocator<ProbabilitySet<float>::ProbabilityBucket>>
                   *)this,aPStack_10);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_2;
LAB_047973ac:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pfVar2 = (float *)FUN_04794a24(uVar4,lVar3);
    if (*pfVar2 == param_1) {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + (param_2 - (int)pfVar2[1]);
      pfVar2[1] = (float)param_2;
      goto LAB_047973ac;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* ProbabilitySet<Sexy::RtWeakPtr<SharkMinion> >::GetSize() */

void __thiscall
ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::GetSize
          (ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>> *this)

{
  FUN_0483f278(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* ProbabilitySet<Sexy::RtWeakPtr<SharkMinion> >::PickItem() */

void ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::PickItem(void)

{
  int iVar1;
  undefined8 *in_x0;
  long lVar2;
  RtWeakPtrBase *pRVar3;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_0483f28c(in_x0[4],*(undefined4 *)(in_x0 + 3));
  uVar6 = *in_x0;
  iVar5 = 0;
  lVar2 = FUN_0483f278(uVar6,in_x0[1]);
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (in_x8);
      return;
    }
    pRVar3 = (RtWeakPtrBase *)FUN_0483f284(uVar6,lVar4);
    iVar5 = iVar5 + *(int *)(pRVar3 + 8);
    lVar4 = lVar4 + 1;
  } while (iVar5 <= iVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr((RtWeakPtr<Sexy::SoundResource> *)in_x8,pRVar3);
  return;
}


/* ProbabilitySet<Sexy::RtWeakPtr<SharkMinion> >::~ProbabilitySet() */

void __thiscall
ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::~ProbabilitySet
          (ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>> *this)

{
  if (this[0x28] != (ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>)0x0) {
    AK::FreeHook(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  std::
  vector<ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::ProbabilityBucket,std::allocator<ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::ProbabilityBucket>>
  ::~vector((vector<ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::ProbabilityBucket,std::allocator<ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::ProbabilityBucket>>
             *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<Sexy::RtWeakPtr<SharkMinion> >::RemoveItem(Sexy::RtWeakPtr<SharkMinion>) */

void __thiscall
ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::RemoveItem
          (ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>> *this,RtWeakPtrBase *param_2)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      this_00 = (RtWeakPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar2 = Sexy::RtWeakPtrBase::operator==(this_00,param_2);
      if (cVar2 == '\0') break;
      *(int *)(this + 0x18) = *(int *)(this + 0x18) - *(int *)(this_00 + 8);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::
                 vector<ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::ProbabilityBucket,std::allocator<ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::ProbabilityBucket>>
                 ::erase((vector<ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::ProbabilityBucket,std::allocator<ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::ProbabilityBucket>>
                          *)this,local_10);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<Sexy::RtWeakPtr<SharkMinion> >::AddItem(Sexy::RtWeakPtr<SharkMinion>, int) */

void __thiscall
ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::AddItem
          (ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>> *this,RtWeakPtrBase *param_2,int param_3)

{
  char cVar1;
  long lVar2;
  RtWeakPtrBase *this_00;
  long lVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  uVar4 = *(undefined8 *)this;
  lVar3 = 0;
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_0483f278(uVar4,*(undefined8 *)(this + 8));
  do {
    if (lVar3 == lVar2) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,param_2);
      ProbabilityBucket::ProbabilityBucket((ProbabilityBucket *)aRStack_18,aRStack_20,param_3);
      std::
      vector<ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::ProbabilityBucket,std::allocator<ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::ProbabilityBucket>>
      ::push_back((vector<ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::ProbabilityBucket,std::allocator<ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::ProbabilityBucket>>
                   *)this,(ProbabilityBucket *)aRStack_18);
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_3;
LAB_048470ac:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_00 = (RtWeakPtrBase *)FUN_0483f284(uVar4,lVar3);
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_00,param_2);
    if (cVar1 != '\0') {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + (param_3 - *(int *)(this_00 + 8));
      *(int *)(this_00 + 8) = param_3;
      goto LAB_048470ac;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<Sexy::RtWeakPtr<ZombieType const> >::RemoveItem(Sexy::RtWeakPtr<ZombieType const>)
    */

void __thiscall
ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::RemoveItem
          (ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>> *this,RtWeakPtrBase *param_2)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      this_00 = (RtWeakPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar2 = Sexy::RtWeakPtrBase::operator==(this_00,param_2);
      if (cVar2 == '\0') break;
      *(int *)(this + 0x18) = *(int *)(this + 0x18) - *(int *)(this_00 + 8);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::
                 vector<ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::ProbabilityBucket,std::allocator<ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::ProbabilityBucket>>
                 ::erase((vector<ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::ProbabilityBucket,std::allocator<ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::ProbabilityBucket>>
                          *)this,local_10);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  } while( true );
}


/* ProbabilitySet<ZombieType const*>::GetSize() */

void __thiscall ProbabilitySet<ZombieType_const*>::GetSize(ProbabilitySet<ZombieType_const*> *this)

{
  FUN_049268dc(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* ProbabilitySet<ZombieType const*>::PickItem() */

undefined8 __thiscall
ProbabilitySet<ZombieType_const*>::PickItem(ProbabilitySet<ZombieType_const*> *this)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_049268f0(*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x18));
  uVar6 = *(undefined8 *)this;
  iVar5 = 0;
  lVar2 = FUN_049268dc(uVar6,*(undefined8 *)(this + 8));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return 0;
    }
    puVar3 = (undefined8 *)FUN_049268e8(uVar6,lVar4);
    iVar5 = iVar5 + *(int *)(puVar3 + 1);
    lVar4 = lVar4 + 1;
  } while (iVar5 <= iVar1);
  return *puVar3;
}


/* ProbabilitySet<Sexy::RtWeakPtr<ZombieType const> >::ProbabilitySet(Sexy::MTRand*) */

void __thiscall
ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::ProbabilitySet
          (ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>> *this,MTRand *param_1)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  *(undefined4 *)(this + 0x18) = 0;
  *(MTRand **)(this + 0x20) = param_1;
  this[0x28] = (ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>)0x0;
  return;
}


/* ProbabilitySet<ZombieType const*>::~ProbabilitySet() */

void __thiscall
ProbabilitySet<ZombieType_const*>::~ProbabilitySet(ProbabilitySet<ZombieType_const*> *this)

{
  if (this[0x28] != (ProbabilitySet<ZombieType_const*>)0x0) {
    AK::FreeHook(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  std::
  vector<ProbabilitySet<ZombieType_const*>::ProbabilityBucket,std::allocator<ProbabilitySet<ZombieType_const*>::ProbabilityBucket>>
  ::~vector((vector<ProbabilitySet<ZombieType_const*>::ProbabilityBucket,std::allocator<ProbabilitySet<ZombieType_const*>::ProbabilityBucket>>
             *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<ZombieType const*>::RemoveItem(ZombieType const*) */

void __thiscall
ProbabilitySet<ZombieType_const*>::RemoveItem
          (ProbabilitySet<ZombieType_const*> *this,ZombieType *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      if ((ZombieType *)*puVar2 == param_1) break;
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    *(int *)(this + 0x18) = *(int *)(this + 0x18) - *(int *)(puVar2 + 1);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    local_18 = std::
               vector<ProbabilitySet<ZombieType_const*>::ProbabilityBucket,std::allocator<ProbabilitySet<ZombieType_const*>::ProbabilityBucket>>
               ::erase((vector<ProbabilitySet<ZombieType_const*>::ProbabilityBucket,std::allocator<ProbabilitySet<ZombieType_const*>::ProbabilityBucket>>
                        *)this,local_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<ZombieType const*>::AddItem(ZombieType const*, int) */

void __thiscall
ProbabilitySet<ZombieType_const*>::AddItem
          (ProbabilitySet<ZombieType_const*> *this,ZombieType *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  TextRun aTStack_18 [16];
  long local_8;
  
  lVar3 = 0;
  uVar4 = *(undefined8 *)this;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_049268dc(uVar4,*(undefined8 *)(this + 8));
  do {
    if (lVar3 == lVar1) {
      EA::Text::TextRun::TextRun(aTStack_18,(wchar16 *)param_1,param_2);
      std::
      vector<ProbabilitySet<ZombieType_const*>::ProbabilityBucket,std::allocator<ProbabilitySet<ZombieType_const*>::ProbabilityBucket>>
      ::push_back((vector<ProbabilitySet<ZombieType_const*>::ProbabilityBucket,std::allocator<ProbabilitySet<ZombieType_const*>::ProbabilityBucket>>
                   *)this,(ProbabilityBucket *)aTStack_18);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_2;
LAB_049315bc:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar2 = (undefined8 *)FUN_049268e8(uVar4,lVar3);
    if ((ZombieType *)*puVar2 == param_1) {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + (param_2 - *(int *)(puVar2 + 1));
      *(int *)(puVar2 + 1) = param_2;
      goto LAB_049315bc;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* ProbabilitySet<SeedRainContentProperties>::PickItem() */

void ProbabilitySet<SeedRainContentProperties>::PickItem(void)

{
  int iVar1;
  undefined8 *in_x0;
  long lVar2;
  SeedRainContentProperties *pSVar3;
  SeedRainContentProperties *in_x8;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_04a08998(in_x0[4],*(undefined4 *)(in_x0 + 3));
  uVar6 = *in_x0;
  iVar5 = 0;
  lVar2 = FUN_04a08978(uVar6,in_x0[1]);
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      SeedRainContentProperties::SeedRainContentProperties(in_x8);
      return;
    }
    pSVar3 = (SeedRainContentProperties *)FUN_04a0898c(uVar6,lVar4);
    iVar5 = iVar5 + *(int *)(pSVar3 + 0x20);
    lVar4 = lVar4 + 1;
  } while (iVar5 <= iVar1);
  SeedRainContentProperties::SeedRainContentProperties(in_x8,pSVar3);
  return;
}


/* ProbabilitySet<SeedRainContentProperties>::~ProbabilitySet() */

void __thiscall
ProbabilitySet<SeedRainContentProperties>::~ProbabilitySet
          (ProbabilitySet<SeedRainContentProperties> *this)

{
  if (this[0x28] != (ProbabilitySet<SeedRainContentProperties>)0x0) {
    AK::FreeHook(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  std::
  vector<ProbabilitySet<SeedRainContentProperties>::ProbabilityBucket,std::allocator<ProbabilitySet<SeedRainContentProperties>::ProbabilityBucket>>
  ::~vector((vector<ProbabilitySet<SeedRainContentProperties>::ProbabilityBucket,std::allocator<ProbabilitySet<SeedRainContentProperties>::ProbabilityBucket>>
             *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<SeedRainContentProperties>::AddItem(SeedRainContentProperties, int) */

void __thiscall
ProbabilitySet<SeedRainContentProperties>::AddItem
          (ProbabilitySet<SeedRainContentProperties> *this,SeedRainContentProperties *param_2,
          int param_3)

{
  char cVar1;
  long lVar2;
  SeedRainContentProperties *this_00;
  long lVar3;
  undefined8 uVar4;
  SeedRainContentProperties aSStack_50 [32];
  PACommand aPStack_30 [40];
  long local_8;
  
  uVar4 = *(undefined8 *)this;
  lVar3 = 0;
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_04a08978(uVar4,*(undefined8 *)(this + 8));
  do {
    if (lVar3 == lVar2) {
      SeedRainContentProperties::SeedRainContentProperties(aSStack_50,param_2);
      ProbabilityBucket::ProbabilityBucket((ProbabilityBucket *)aPStack_30,aSStack_50,param_3);
      std::
      vector<ProbabilitySet<SeedRainContentProperties>::ProbabilityBucket,std::allocator<ProbabilitySet<SeedRainContentProperties>::ProbabilityBucket>>
      ::push_back((vector<ProbabilitySet<SeedRainContentProperties>::ProbabilityBucket,std::allocator<ProbabilitySet<SeedRainContentProperties>::ProbabilityBucket>>
                   *)this,(ProbabilityBucket *)aPStack_30);
      std::_Destroy<Sexy::PACommand>(aPStack_30);
      Sexy::PACommand::~PACommand((PACommand *)aSStack_50);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_3;
LAB_04a0a4a4:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_00 = (SeedRainContentProperties *)FUN_04a0898c(uVar4,lVar3);
    cVar1 = SeedRainContentProperties::operator==(this_00,param_2);
    if (cVar1 != '\0') {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + (param_3 - *(int *)(this_00 + 0x20));
      *(int *)(this_00 + 0x20) = param_3;
      goto LAB_04a0a4a4;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* ProbabilitySet<RareTypes>::GetSize() */

void __thiscall ProbabilitySet<RareTypes>::GetSize(ProbabilitySet<RareTypes> *this)

{
  FUN_04bc4a48(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* ProbabilitySet<RareTypes>::PickItem() */

undefined4 __thiscall ProbabilitySet<RareTypes>::PickItem(ProbabilitySet<RareTypes> *this)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_04bc4a5c(*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x18));
  uVar6 = *(undefined8 *)this;
  iVar5 = 0;
  lVar2 = FUN_04bc4a48(uVar6,*(undefined8 *)(this + 8));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return 0;
    }
    puVar3 = (undefined4 *)FUN_04bc4a54(uVar6,lVar4);
    iVar5 = iVar5 + puVar3[1];
    lVar4 = lVar4 + 1;
  } while (iVar5 <= iVar1);
  return *puVar3;
}


/* ProbabilitySet<RareTypes>::~ProbabilitySet() */

void __thiscall ProbabilitySet<RareTypes>::~ProbabilitySet(ProbabilitySet<RareTypes> *this)

{
  if (this[0x28] != (ProbabilitySet<RareTypes>)0x0) {
    AK::FreeHook(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  std::
  vector<ProbabilitySet<RareTypes>::ProbabilityBucket,std::allocator<ProbabilitySet<RareTypes>::ProbabilityBucket>>
  ::~vector((vector<ProbabilitySet<RareTypes>::ProbabilityBucket,std::allocator<ProbabilitySet<RareTypes>::ProbabilityBucket>>
             *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<RareTypes>::RemoveItem(RareTypes) */

void __thiscall ProbabilitySet<RareTypes>::RemoveItem(ProbabilitySet<RareTypes> *this,int param_2)

{
  bool bVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if (*piVar2 == param_2) break;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    *(int *)(this + 0x18) = *(int *)(this + 0x18) - piVar2[1];
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    local_18 = std::
               vector<ProbabilitySet<RareTypes>::ProbabilityBucket,std::allocator<ProbabilitySet<RareTypes>::ProbabilityBucket>>
               ::erase((vector<ProbabilitySet<RareTypes>::ProbabilityBucket,std::allocator<ProbabilitySet<RareTypes>::ProbabilityBucket>>
                        *)this,local_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<RareTypes>::AddItem(RareTypes, int) */

void __thiscall
ProbabilitySet<RareTypes>::AddItem(ProbabilitySet<RareTypes> *this,int param_2,int param_3)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  UnchartedModePlantNumData aUStack_10 [8];
  long local_8;
  
  lVar3 = 0;
  uVar4 = *(undefined8 *)this;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_04bc4a48(uVar4,*(undefined8 *)(this + 8));
  do {
    if (lVar3 == lVar1) {
      UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_10,param_2,param_3);
      std::
      vector<ProbabilitySet<RareTypes>::ProbabilityBucket,std::allocator<ProbabilitySet<RareTypes>::ProbabilityBucket>>
      ::push_back((vector<ProbabilitySet<RareTypes>::ProbabilityBucket,std::allocator<ProbabilitySet<RareTypes>::ProbabilityBucket>>
                   *)this,(ProbabilityBucket *)aUStack_10);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_3;
LAB_04bdc6e0:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar2 = (int *)FUN_04bc4a54(uVar4,lVar3);
    if (*piVar2 == param_2) {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + (param_3 - piVar2[1]);
      piVar2[1] = param_3;
      goto LAB_04bdc6e0;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<GachaRewardItem>::PickItem() */

void __thiscall ProbabilitySet<GachaRewardItem>::PickItem(ProbabilitySet<GachaRewardItem> *this)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  lVar4 = 0;
  local_8 = ___stack_chk_guard;
  iVar5 = 0;
  iVar1 = FUN_04be478c(*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x18));
  uVar6 = *(undefined8 *)this;
  lVar2 = FUN_04be4778(uVar6,*(undefined8 *)(this + 8));
  do {
    if (lVar4 == lVar2) {
      Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_28);
      local_18 = local_28;
      local_10 = local_20;
LAB_04be4ab0:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(local_18,local_10);
    }
    puVar3 = (undefined8 *)FUN_04be4784(uVar6,lVar4);
    iVar5 = iVar5 + *(int *)((long)puVar3 + 0xc);
    if (iVar1 < iVar5) {
      local_18 = *puVar3;
      local_10 = *(undefined4 *)(puVar3 + 1);
      goto LAB_04be4ab0;
    }
    lVar4 = lVar4 + 1;
  } while( true );
}


/* ProbabilitySet<GachaRewardItem>::~ProbabilitySet() */

void __thiscall
ProbabilitySet<GachaRewardItem>::~ProbabilitySet(ProbabilitySet<GachaRewardItem> *this)

{
  if (this[0x28] != (ProbabilitySet<GachaRewardItem>)0x0) {
    AK::FreeHook(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  std::
  vector<ProbabilitySet<GachaRewardItem>::ProbabilityBucket,std::allocator<ProbabilitySet<GachaRewardItem>::ProbabilityBucket>>
  ::~vector((vector<ProbabilitySet<GachaRewardItem>::ProbabilityBucket,std::allocator<ProbabilitySet<GachaRewardItem>::ProbabilityBucket>>
             *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<GachaRewardItem>::AddItem(GachaRewardItem, int) */

void ProbabilitySet<GachaRewardItem>::AddItem
               (vector<ProbabilitySet<GachaRewardItem>::ProbabilityBucket,std::allocator<ProbabilitySet<GachaRewardItem>::ProbabilityBucket>>
                *param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  long lVar2;
  GachaRewardItem *this;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_30;
  undefined4 local_28;
  ProbabilityBucket aPStack_18 [16];
  long local_8;
  
  lVar3 = 0;
  uVar4 = *(undefined8 *)param_1;
  local_8 = ___stack_chk_guard;
  local_30 = param_2;
  local_28 = param_3;
  lVar2 = FUN_04be4778(uVar4,*(undefined8 *)(param_1 + 8));
  do {
    if (lVar3 == lVar2) {
      ProbabilityBucket::ProbabilityBucket(aPStack_18,local_30,local_28,param_4);
      std::
      vector<ProbabilitySet<GachaRewardItem>::ProbabilityBucket,std::allocator<ProbabilitySet<GachaRewardItem>::ProbabilityBucket>>
      ::push_back(param_1,aPStack_18);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_4;
LAB_04be5aec:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this = (GachaRewardItem *)FUN_04be4784(uVar4,lVar3);
    cVar1 = GachaRewardItem::operator==(this,(GachaRewardItem *)&local_30);
    if (cVar1 != '\0') {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (param_4 - *(int *)(this + 0xc));
      *(int *)(this + 0xc) = param_4;
      goto LAB_04be5aec;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* ProbabilitySet<GridItemCardGameZombieAction*>::GetSize() */

void __thiscall
ProbabilitySet<GridItemCardGameZombieAction*>::GetSize
          (ProbabilitySet<GridItemCardGameZombieAction*> *this)

{
  FUN_04e144b0(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* ProbabilitySet<GridItemCardGameZombieAction*>::PickItem() */

undefined8 __thiscall
ProbabilitySet<GridItemCardGameZombieAction*>::PickItem
          (ProbabilitySet<GridItemCardGameZombieAction*> *this)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_04e144c4(*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x18));
  uVar6 = *(undefined8 *)this;
  iVar5 = 0;
  lVar2 = FUN_04e144b0(uVar6,*(undefined8 *)(this + 8));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return 0;
    }
    puVar3 = (undefined8 *)FUN_04e144bc(uVar6,lVar4);
    iVar5 = iVar5 + *(int *)(puVar3 + 1);
    lVar4 = lVar4 + 1;
  } while (iVar5 <= iVar1);
  return *puVar3;
}


/* ProbabilitySet<GridItemCardGameZombieAction*>::~ProbabilitySet() */

void __thiscall
ProbabilitySet<GridItemCardGameZombieAction*>::~ProbabilitySet
          (ProbabilitySet<GridItemCardGameZombieAction*> *this)

{
  if (this[0x28] != (ProbabilitySet<GridItemCardGameZombieAction*>)0x0) {
    AK::FreeHook(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  std::
  vector<ProbabilitySet<GridItemCardGameZombieAction*>::ProbabilityBucket,std::allocator<ProbabilitySet<GridItemCardGameZombieAction*>::ProbabilityBucket>>
  ::~vector((vector<ProbabilitySet<GridItemCardGameZombieAction*>::ProbabilityBucket,std::allocator<ProbabilitySet<GridItemCardGameZombieAction*>::ProbabilityBucket>>
             *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<GridItemCardGameZombieAction*>::AddItem(GridItemCardGameZombieAction*, int) */

void __thiscall
ProbabilitySet<GridItemCardGameZombieAction*>::AddItem
          (ProbabilitySet<GridItemCardGameZombieAction*> *this,GridItemCardGameZombieAction *param_1
          ,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  TextRun aTStack_18 [16];
  long local_8;
  
  lVar3 = 0;
  uVar4 = *(undefined8 *)this;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_04e144b0(uVar4,*(undefined8 *)(this + 8));
  do {
    if (lVar3 == lVar1) {
      EA::Text::TextRun::TextRun(aTStack_18,(wchar16 *)param_1,param_2);
      std::
      vector<ProbabilitySet<GridItemCardGameZombieAction*>::ProbabilityBucket,std::allocator<ProbabilitySet<GridItemCardGameZombieAction*>::ProbabilityBucket>>
      ::push_back((vector<ProbabilitySet<GridItemCardGameZombieAction*>::ProbabilityBucket,std::allocator<ProbabilitySet<GridItemCardGameZombieAction*>::ProbabilityBucket>>
                   *)this,(ProbabilityBucket *)aTStack_18);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_2;
LAB_04e17c58:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar2 = (undefined8 *)FUN_04e144bc(uVar4,lVar3);
    if ((GridItemCardGameZombieAction *)*puVar2 == param_1) {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + (param_2 - *(int *)(puVar2 + 1));
      *(int *)(puVar2 + 1) = param_2;
      goto LAB_04e17c58;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* ProbabilitySet<ZombossRobotSpawnZombieInfo>::GetSize() */

void __thiscall
ProbabilitySet<ZombossRobotSpawnZombieInfo>::GetSize
          (ProbabilitySet<ZombossRobotSpawnZombieInfo> *this)

{
  FUN_04f12554(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* ProbabilitySet<ZombossRobotSpawnZombieInfo>::PickItem() */

void ProbabilitySet<ZombossRobotSpawnZombieInfo>::PickItem(void)

{
  int iVar1;
  undefined8 *in_x0;
  long lVar2;
  ZombossRobotSpawnZombieInfo *pZVar3;
  ZombossRobotSpawnZombieInfo *in_x8;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_04f12568(in_x0[4],*(undefined4 *)(in_x0 + 3));
  uVar6 = *in_x0;
  iVar5 = 0;
  lVar2 = FUN_04f12554(uVar6,in_x0[1]);
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      *(undefined8 *)in_x8 = 0;
      *(undefined4 *)(in_x8 + 8) = 0;
      *(undefined4 *)(in_x8 + 0xc) = 0;
      *(undefined4 *)(in_x8 + 0x10) = 0;
      in_x8[0x14] = (ZombossRobotSpawnZombieInfo)0x0;
      ZombossRobotSpawnZombieInfo::ZombossRobotSpawnZombieInfo(in_x8);
      return;
    }
    pZVar3 = (ZombossRobotSpawnZombieInfo *)FUN_04f12560(uVar6,lVar4);
    iVar5 = iVar5 + *(int *)(pZVar3 + 0x18);
    lVar4 = lVar4 + 1;
  } while (iVar5 <= iVar1);
  ZombossRobotSpawnZombieInfo::ZombossRobotSpawnZombieInfo(in_x8,pZVar3);
  return;
}


/* ProbabilitySet<ZombossRobotAirDropZombieInfo>::GetSize() */

void __thiscall
ProbabilitySet<ZombossRobotAirDropZombieInfo>::GetSize
          (ProbabilitySet<ZombossRobotAirDropZombieInfo> *this)

{
  FUN_04f1258c(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* ProbabilitySet<ZombossRobotAirDropZombieInfo>::PickItem() */

void ProbabilitySet<ZombossRobotAirDropZombieInfo>::PickItem(void)

{
  int iVar1;
  undefined8 *in_x0;
  long lVar2;
  ZombossRobotAirDropZombieInfo *pZVar3;
  ZombossRobotAirDropZombieInfo *in_x8;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_04f125ac(in_x0[4],*(undefined4 *)(in_x0 + 3));
  uVar6 = *in_x0;
  iVar5 = 0;
  lVar2 = FUN_04f1258c(uVar6,in_x0[1]);
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      *(undefined8 *)in_x8 = 0;
      *(undefined4 *)(in_x8 + 8) = 0;
      *(undefined4 *)(in_x8 + 0xc) = 0;
      in_x8[0x10] = (ZombossRobotAirDropZombieInfo)0x0;
      *(undefined4 *)(in_x8 + 0x14) = 0;
      *(undefined4 *)(in_x8 + 0x18) = 0;
      ZombossRobotAirDropZombieInfo::ZombossRobotAirDropZombieInfo(in_x8);
      return;
    }
    pZVar3 = (ZombossRobotAirDropZombieInfo *)FUN_04f125a0(uVar6,lVar4);
    iVar5 = iVar5 + *(int *)(pZVar3 + 0x20);
    lVar4 = lVar4 + 1;
  } while (iVar5 <= iVar1);
  ZombossRobotAirDropZombieInfo::ZombossRobotAirDropZombieInfo(in_x8,pZVar3);
  return;
}


/* ProbabilitySet<ZombossRobotSpawnZombieInfo>::~ProbabilitySet() */

void __thiscall
ProbabilitySet<ZombossRobotSpawnZombieInfo>::~ProbabilitySet
          (ProbabilitySet<ZombossRobotSpawnZombieInfo> *this)

{
  if (this[0x28] != (ProbabilitySet<ZombossRobotSpawnZombieInfo>)0x0) {
    AK::FreeHook(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  std::
  vector<ProbabilitySet<ZombossRobotSpawnZombieInfo>::ProbabilityBucket,std::allocator<ProbabilitySet<ZombossRobotSpawnZombieInfo>::ProbabilityBucket>>
  ::~vector((vector<ProbabilitySet<ZombossRobotSpawnZombieInfo>::ProbabilityBucket,std::allocator<ProbabilitySet<ZombossRobotSpawnZombieInfo>::ProbabilityBucket>>
             *)this);
  return;
}


/* ProbabilitySet<ZombossRobotAirDropZombieInfo>::~ProbabilitySet() */

void __thiscall
ProbabilitySet<ZombossRobotAirDropZombieInfo>::~ProbabilitySet
          (ProbabilitySet<ZombossRobotAirDropZombieInfo> *this)

{
  if (this[0x28] != (ProbabilitySet<ZombossRobotAirDropZombieInfo>)0x0) {
    AK::FreeHook(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  std::
  vector<ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilityBucket,std::allocator<ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilityBucket>>
  ::~vector((vector<ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilityBucket,std::allocator<ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilityBucket>>
             *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<ZombossRobotSpawnZombieInfo>::AddItem(ZombossRobotSpawnZombieInfo, int) */

void __thiscall
ProbabilitySet<ZombossRobotSpawnZombieInfo>::AddItem
          (ProbabilitySet<ZombossRobotSpawnZombieInfo> *this,ZombossRobotSpawnZombieInfo *param_2,
          int param_3)

{
  char cVar1;
  long lVar2;
  ZombossRobotSpawnZombieInfo *this_00;
  long lVar3;
  undefined8 uVar4;
  ZombossRobotSpawnZombieInfo aZStack_40 [24];
  pair apStack_28 [32];
  long local_8;
  
  uVar4 = *(undefined8 *)this;
  lVar3 = 0;
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_04f12554(uVar4,*(undefined8 *)(this + 8));
  do {
    if (lVar3 == lVar2) {
      ZombossRobotSpawnZombieInfo::ZombossRobotSpawnZombieInfo(aZStack_40,param_2);
      ProbabilityBucket::ProbabilityBucket((ProbabilityBucket *)apStack_28,aZStack_40,param_3);
      std::
      vector<ProbabilitySet<ZombossRobotSpawnZombieInfo>::ProbabilityBucket,std::allocator<ProbabilitySet<ZombossRobotSpawnZombieInfo>::ProbabilityBucket>>
      ::push_back((vector<ProbabilitySet<ZombossRobotSpawnZombieInfo>::ProbabilityBucket,std::allocator<ProbabilitySet<ZombossRobotSpawnZombieInfo>::ProbabilityBucket>>
                   *)this,(ProbabilityBucket *)apStack_28);
      std::_Destroy<std::pair<std::string,Sexy::LeaderboardEntry::FieldData>>(apStack_28);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aZStack_40);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_3;
LAB_04f22da8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_00 = (ZombossRobotSpawnZombieInfo *)FUN_04f12560(uVar4,lVar3);
    cVar1 = ZombossRobotSpawnZombieInfo::operator==(this_00,param_2);
    if (cVar1 != '\0') {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + (param_3 - *(int *)(this_00 + 0x18));
      *(int *)(this_00 + 0x18) = param_3;
      goto LAB_04f22da8;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilitySet<ZombossRobotAirDropZombieInfo>::AddItem(ZombossRobotAirDropZombieInfo, int) */

void __thiscall
ProbabilitySet<ZombossRobotAirDropZombieInfo>::AddItem
          (ProbabilitySet<ZombossRobotAirDropZombieInfo> *this,
          ZombossRobotAirDropZombieInfo *param_2,int param_3)

{
  char cVar1;
  long lVar2;
  ZombossRobotAirDropZombieInfo *this_00;
  long lVar3;
  undefined8 uVar4;
  ZombossRobotAirDropZombieInfo aZStack_50 [32];
  pair apStack_30 [40];
  long local_8;
  
  uVar4 = *(undefined8 *)this;
  lVar3 = 0;
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_04f1258c(uVar4,*(undefined8 *)(this + 8));
  do {
    if (lVar3 == lVar2) {
      ZombossRobotAirDropZombieInfo::ZombossRobotAirDropZombieInfo(aZStack_50,param_2);
      ProbabilityBucket::ProbabilityBucket((ProbabilityBucket *)apStack_30,aZStack_50,param_3);
      std::
      vector<ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilityBucket,std::allocator<ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilityBucket>>
      ::push_back((vector<ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilityBucket,std::allocator<ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilityBucket>>
                   *)this,(ProbabilityBucket *)apStack_30);
      std::_Destroy<std::pair<std::string,Sexy::LeaderboardEntry::FieldData>>(apStack_30);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aZStack_50);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_3;
LAB_04f233e4:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_00 = (ZombossRobotAirDropZombieInfo *)FUN_04f125a0(uVar4,lVar3);
    cVar1 = ZombossRobotAirDropZombieInfo::operator==(this_00,param_2);
    if (cVar1 != '\0') {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + (param_3 - *(int *)(this_00 + 0x20));
      *(int *)(this_00 + 0x20) = param_3;
      goto LAB_04f233e4;
    }
    lVar3 = lVar3 + 1;
  } while( true );
}

