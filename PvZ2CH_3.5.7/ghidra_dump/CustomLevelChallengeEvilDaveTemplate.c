// Class: CustomLevelChallengeEvilDaveTemplate


/* CustomLevelChallengeEvilDaveTemplate::CustomLevelChallengeEvilDaveTemplate(CustomLevelMgr*) */

void __thiscall
CustomLevelChallengeEvilDaveTemplate::CustomLevelChallengeEvilDaveTemplate
          (CustomLevelChallengeEvilDaveTemplate *this,CustomLevelMgr *param_1)

{
  CustomLevelTemplate::CustomLevelTemplate((CustomLevelTemplate *)this,param_1);
  *(undefined ***)this = &PTR_nop_0665ebd0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelChallengeEvilDaveTemplate::GenerateTemplate(CustomLevelCreator&,
   CustomLevelWorldParams const&, CustomLevelConfig const*) */

void CustomLevelChallengeEvilDaveTemplate::GenerateTemplate
               (CustomLevelCreator *param_1,CustomLevelWorldParams *param_2,
               CustomLevelConfig *param_3)

{
  string *psVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  EvilDaveProperties *pEVar7;
  SeedBankProperties *pSVar8;
  undefined8 uVar9;
  CustomLevelMgr *pCVar10;
  InitialPlantEntryProperties *pIVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_30 [3];
  undefined4 local_18;
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar7 = CustomLevelCreator::AddModule<EvilDaveProperties>((CustomLevelCreator *)param_2);
  *(undefined4 *)(pEVar7 + 0x40) = *(undefined4 *)(param_3 + 0xf4);
  pSVar8 = CustomLevelCreator::AddModule<SeedBankProperties>((CustomLevelCreator *)param_2);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_48,
             (vector *)(param_3 + 0x110));
  uVar9 = local_48;
  iVar6 = FUN_035cc03c(local_48,local_40);
  uVar2 = iVar6 - 1;
  if (-1 < (int)uVar2) {
    lVar13 = (long)(int)uVar2 + -1;
    lVar3 = lVar13;
    lVar15 = (long)(int)uVar2;
    while( true ) {
      lVar14 = lVar3;
      FUN_035cc048(uVar9,lVar15);
      cVar4 = FUN_0547419c();
      uVar9 = local_48;
      if (cVar4 != '\0') {
        local_58 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_48);
        local_50 = __gnu_cxx::
                   __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                   ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                *)&local_58,lVar15);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_30,(__normal_iterator *)&local_50);
        std::vector<std::string,std::allocator<std::string>>::erase
                  ((vector<std::string,std::allocator<std::string>> *)&local_48,local_30[0]);
        uVar9 = local_48;
      }
      if (lVar14 == lVar13 - (ulong)uVar2) break;
      lVar3 = lVar14 + -1;
      lVar15 = lVar14;
      local_48 = uVar9;
    }
  }
  pCVar10 = (CustomLevelMgr *)Sexy::ProfileManager::GetListener((ProfileManager *)param_1);
  std::string::string((string *)local_30,"ValidZombies");
  CustomLevelMgr::FilterGroup(pCVar10,(string *)local_30,(vector *)&local_48);
  std::string::~string((string *)local_30);
  nop();
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(pSVar8 + 0x60),(vector *)&local_48)
  ;
  *(undefined4 *)(pSVar8 + 0x40) = 0;
  pSVar8[0x45] = (SeedBankProperties)0x1;
  pIVar11 = CustomLevelCreator::AddModule<InitialPlantEntryProperties>
                      ((CustomLevelCreator *)param_2);
  local_58 = FUN_035ceeb0(*(undefined8 *)(param_3 + 0xf8));
  local_50 = FUN_035cef00(*(undefined8 *)(param_3 + 0x100));
  while (bVar5 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar5) {
    puVar12 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    psVar1 = (string *)(puVar12 + 2);
    cVar4 = FUN_0547419c(psVar1);
    if (cVar4 == '\0') {
      pCVar10 = (CustomLevelMgr *)Sexy::ProfileManager::GetListener((ProfileManager *)param_1);
      std::string::string((string *)local_30,"ValidPlants");
      cVar4 = CustomLevelMgr::IsValueValid(pCVar10,(string *)local_30,psVar1);
      std::string::~string((string *)local_30);
      nop();
      if (cVar4 != '\0') {
        InitialPlantEntry::InitialPlantEntry((InitialPlantEntry *)local_30);
        local_18 = *puVar12;
        local_14 = puVar12[1];
        std::vector<std::string,std::allocator<std::string>>::push_back
                  ((vector<std::string,std::allocator<std::string>> *)local_30,psVar1);
        std::vector<InitialPlantEntry,std::allocator<InitialPlantEntry>>::push_back
                  ((vector<InitialPlantEntry,std::allocator<InitialPlantEntry>> *)(pIVar11 + 0x40),
                   (InitialPlantEntry *)local_30);
        PlantWarsNodeData::~PlantWarsNodeData((PlantWarsNodeData *)local_30);
      }
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_58);
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

