// Class: CustomLevelSeedBankTemplate


/* CustomLevelSeedBankTemplate::CustomLevelSeedBankTemplate(CustomLevelMgr*) */

void __thiscall
CustomLevelSeedBankTemplate::CustomLevelSeedBankTemplate
          (CustomLevelSeedBankTemplate *this,CustomLevelMgr *param_1)

{
  CustomLevelTemplate::CustomLevelTemplate((CustomLevelTemplate *)this,param_1);
  *(undefined ***)this = &PTR_nop_0665eae0;
  return;
}


/* CustomLevelSeedBankTemplate::needCreateModule(CustomLevelWorldParams const&) */

undefined8 __thiscall
CustomLevelSeedBankTemplate::needCreateModule
          (CustomLevelSeedBankTemplate *this,CustomLevelWorldParams *param_1)

{
  CustomChallenge *this_00;
  char cVar1;
  undefined8 uVar2;
  
  this_00 = (CustomChallenge *)(param_1 + 0xa8);
  cVar1 = CustomChallenge::HasStatueMaze(this_00);
  if ((((cVar1 == '\0') && (cVar1 = CustomChallenge::HasEvilDave(this_00), cVar1 == '\0')) &&
      (cVar1 = CustomChallenge::HasTowerDefend(this_00), cVar1 == '\0')) &&
     ((cVar1 = CustomChallenge::HasSingleHanded(this_00), cVar1 == '\0' &&
      (cVar1 = CustomChallenge::HasVaseBreaker(this_00), cVar1 == '\0')))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelSeedBankTemplate::CheckPresetListEmptyValue(std::vector<std::string,
   std::allocator<std::string > > const&) */

void __thiscall
CustomLevelSeedBankTemplate::CheckPresetListEmptyValue
          (CustomLevelSeedBankTemplate *this,vector *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = FUN_035cddd0(*(undefined8 *)param_1);
  local_18 = FUN_035cde20(*(undefined8 *)(param_1 + 8));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
    if (!bVar2) {
LAB_035cdf10:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar2);
    }
    uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    FUN_05475d88(asStack_10,uVar3);
    cVar1 = FUN_0547419c(uVar3);
    if (cVar1 == '\0') {
      std::string::~string(asStack_10);
      goto LAB_035cdf10;
    }
    std::string::~string(asStack_10);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelSeedBankTemplate::GenerateTemplate(CustomLevelCreator&, CustomLevelWorldParams const&,
   CustomLevelConfig const*) */

void __thiscall
CustomLevelSeedBankTemplate::GenerateTemplate
          (CustomLevelSeedBankTemplate *this,CustomLevelCreator *param_1,
          CustomLevelWorldParams *param_2,CustomLevelConfig *param_3)

{
  char cVar1;
  bool bVar2;
  SeedBankProperties *pSVar3;
  ulong uVar4;
  LevelDefinition *pLVar5;
  string *psVar6;
  PVZ1CopycatsModuleProperties *pPVar7;
  undefined8 uVar8;
  long lVar9;
  ConveyorSeedBankProperties *pCVar10;
  CustomLevelMgr *pCVar11;
  ulong uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  undefined4 local_34;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = needCreateModule(this,param_2);
  if (cVar1 != '\0') {
    if (*(int *)(param_2 + 0x80) == 0) {
      pSVar3 = CustomLevelCreator::AddModule<SeedBankProperties>(param_1);
      cVar1 = CheckPresetListEmptyValue(this,(vector *)(param_2 + 0x68));
      if (cVar1 != '\0') {
        std::vector<std::string,std::allocator<std::string>>::vector
                  ((vector<std::string,std::allocator<std::string>> *)aRStack_30,
                   (vector *)(param_2 + 0x68));
        pCVar11 = (CustomLevelMgr *)Sexy::ProfileManager::GetListener((ProfileManager *)this);
        std::string::string((string *)&local_38,"ValidPlants");
        CustomLevelMgr::FilterGroup(pCVar11,(string *)&local_38,(vector *)aRStack_30);
        std::string::~string((string *)&local_38);
        nop();
        std::vector<std::string,std::allocator<std::string>>::operator=
                  ((vector<std::string,std::allocator<std::string>> *)(pSVar3 + 0x60),
                   (vector *)aRStack_30);
        std::vector<std::string,std::allocator<std::string>>::~vector
                  ((vector<std::string,std::allocator<std::string>> *)aRStack_30);
      }
      for (uVar12 = 0;
          uVar4 = FUN_035cc03c(*(undefined8 *)(pSVar3 + 0x60),*(undefined8 *)(pSVar3 + 0x68)),
          uVar12 < uVar4; uVar12 = uVar12 + 1) {
        CustomLevelCreator::GetLevelDef();
        pLVar5 = (LevelDefinition *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
        bVar2 = LevelDefinition::HasLevelModule<PVZ1CopycatsModuleProperties>(pLVar5);
        if (!bVar2) {
          psVar6 = (string *)FUN_035cc048(*(undefined8 *)(pSVar3 + 0x60),uVar12);
          bVar2 = std::operator==(psVar6,"minigame_imitater");
          if (bVar2) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
            pPVar7 = CustomLevelCreator::AddModule<PVZ1CopycatsModuleProperties>(param_1);
            uVar8 = Sexy::LazySingleton<PVZDB>::GetInstance();
            Sexy::RtName::RtName((RtName *)aRStack_30,L"DiyCopycatDefault");
            PVZDB::FindObjectByAlias<DragonBabyBruitProps>
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38,uVar8,5,aRStack_30);
            Sexy::RtName::~RtName((RtName *)aRStack_30);
            lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
            *(undefined4 *)(pPVar7 + 0x40) = *(undefined4 *)(lVar9 + 0x40);
            lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
            std::vector<std::string,std::allocator<std::string>>::operator=
                      ((vector<std::string,std::allocator<std::string>> *)(pPVar7 + 0x48),
                       (vector *)(lVar9 + 0x60));
            lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
            std::vector<std::string,std::allocator<std::string>>::operator=
                      ((vector<std::string,std::allocator<std::string>> *)(pPVar7 + 0x60),
                       (vector *)(lVar9 + 0x60));
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
            break;
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      }
      cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                        ((vector<std::string,std::allocator<std::string>> *)(param_2 + 0x50));
      if (cVar1 == '\0') {
        std::vector<std::string,std::allocator<std::string>>::operator=
                  ((vector<std::string,std::allocator<std::string>> *)(pSVar3 + 0xa8),
                   (vector *)(param_2 + 0x50));
      }
      if (*(int *)(param_2 + 0xa0) != -1) {
        *(int *)(pSVar3 + 0xcc) = *(int *)(param_2 + 0xa0);
      }
      *(undefined4 *)(pSVar3 + 0x40) = 1;
    }
    else {
      pCVar10 = CustomLevelCreator::AddModule<ConveyorSeedBankProperties>(param_1);
      local_48 = FUN_035ce9fc(*(undefined8 *)(param_2 + 0x88));
      local_40 = FUN_035cea4c(*(undefined8 *)(param_2 + 0x90));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40),
            bVar2) {
        psVar6 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
        cVar1 = FUN_0547419c();
        if (cVar1 == '\0') {
          pCVar11 = (CustomLevelMgr *)Sexy::ProfileManager::GetListener((ProfileManager *)this);
          std::string::string((string *)aRStack_30,"ValidPlants");
          cVar1 = CustomLevelMgr::IsValueValid(pCVar11,(string *)aRStack_30,psVar6);
          std::string::~string((string *)aRStack_30);
          nop();
          if (cVar1 != '\0') {
            CustomLevelCreator::GetLevelDef();
            pLVar5 = (LevelDefinition *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
            bVar2 = LevelDefinition::HasLevelModule<PVZ1CopycatsModuleProperties>(pLVar5);
            if ((bVar2) || (bVar2 = std::operator==(psVar6,"minigame_imitater"), !bVar2)) {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
            }
            else {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
              pPVar7 = CustomLevelCreator::AddModule<PVZ1CopycatsModuleProperties>(param_1);
              uVar8 = Sexy::LazySingleton<PVZDB>::GetInstance();
              Sexy::RtName::RtName((RtName *)aRStack_30,L"DiyCopycatDefault");
              PVZDB::FindObjectByAlias<DragonBabyBruitProps>
                        ((string *)&local_38,uVar8,5,(string *)aRStack_30);
              Sexy::RtName::~RtName((RtName *)aRStack_30);
              lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
              *(undefined4 *)(pPVar7 + 0x40) = *(undefined4 *)(lVar9 + 0x40);
              lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
              std::vector<std::string,std::allocator<std::string>>::operator=
                        ((vector<std::string,std::allocator<std::string>> *)(pPVar7 + 0x48),
                         (vector *)(lVar9 + 0x60));
              lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
              std::vector<std::string,std::allocator<std::string>>::operator=
                        ((vector<std::string,std::allocator<std::string>> *)(pPVar7 + 0x60),
                         (vector *)(lVar9 + 0x60));
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
            }
            ConveyorPlantEntry::ConveyorPlantEntry((ConveyorPlantEntry *)aRStack_30);
            thunk_FUN_05475e00((string *)aRStack_30,psVar6);
            local_28 = *(undefined4 *)(psVar6 + 8);
            local_14 = *(undefined4 *)(psVar6 + 0xc);
            std::string::string((string *)&local_38,"ConveyorPlantMaxCount");
            fVar13 = (float)CustomLevelConfig::GetCommonConfigValue(param_3,(string *)&local_38,7.0)
            ;
            local_1c = (int)fVar13;
            std::string::~string((string *)&local_38);
            nop();
            std::string::string((string *)&local_38,"ConveyorPlantMaxWeightFactor");
            local_18 = CustomLevelConfig::GetCommonConfigValue(param_3,(string *)&local_38,0.0);
            std::string::~string((string *)&local_38);
            nop();
            std::string::string((string *)&local_38,"ConveyorPlantMinCount");
            fVar13 = (float)CustomLevelConfig::GetCommonConfigValue(param_3,(string *)&local_38,4.0)
            ;
            local_24 = (int)fVar13;
            std::string::~string((string *)&local_38);
            nop();
            std::string::string((string *)&local_38,"ConveyorPlantMinWeightFactor");
            local_20 = CustomLevelConfig::GetCommonConfigValue(param_3,(string *)&local_38,2.0);
            std::string::~string((string *)&local_38);
            nop();
            std::vector<ConveyorPlantEntry,std::allocator<ConveyorPlantEntry>>::push_back
                      ((vector<ConveyorPlantEntry,std::allocator<ConveyorPlantEntry>> *)
                       (pCVar10 + 0xd8),(ConveyorPlantEntry *)aRStack_30);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_30);
          }
        }
        std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                  ((move_iterator<Sexy::CharDataHashEntry*> *)&local_48);
      }
      PneumaticDelayCondition::PneumaticDelayCondition((PneumaticDelayCondition *)&local_40);
      std::string::string((string *)aRStack_30,"ConveyorDelay");
      uVar14 = CustomLevelConfig::GetCommonConfigValue(param_3,(string *)aRStack_30,3.0);
      local_40._4_4_ = uVar14;
      std::string::~string((string *)aRStack_30);
      nop();
      std::string::string((string *)aRStack_30,"ConveyorMaxPackets");
      fVar13 = (float)CustomLevelConfig::GetCommonConfigValue(param_3,(string *)aRStack_30,8.0);
      local_40 = CONCAT44(local_40._4_4_,(int)fVar13);
      std::string::~string((string *)aRStack_30);
      nop();
      std::vector<ConveyorDropDelayCondition,std::allocator<ConveyorDropDelayCondition>>::push_back
                ((vector<ConveyorDropDelayCondition,std::allocator<ConveyorDropDelayCondition>> *)
                 (pCVar10 + 0x108),(ConveyorDropDelayCondition *)&local_40);
      ConveyorSpeedCondition::ConveyorSpeedCondition((ConveyorSpeedCondition *)&local_38);
      std::string::string((string *)aRStack_30,"ConveyorSpeedMaxPackets");
      fVar13 = (float)CustomLevelConfig::GetCommonConfigValue(param_3,(string *)aRStack_30,0.0);
      local_38 = (int)fVar13;
      std::string::~string((string *)aRStack_30);
      nop();
      std::string::string((string *)aRStack_30,"ConveyorSpeed");
      local_34 = CustomLevelConfig::GetCommonConfigValue(param_3,(string *)aRStack_30,100.0);
      std::string::~string((string *)aRStack_30);
      nop();
      std::vector<ConveyorSpeedCondition,std::allocator<ConveyorSpeedCondition>>::push_back
                ((vector<ConveyorSpeedCondition,std::allocator<ConveyorSpeedCondition>> *)
                 (pCVar10 + 0xf0),(ConveyorSpeedCondition *)&local_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

