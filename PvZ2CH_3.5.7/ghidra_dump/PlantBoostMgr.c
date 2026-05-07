// Class: PlantBoostMgr


/* PlantBoostMgr::~PlantBoostMgr() */

void __thiscall PlantBoostMgr::~PlantBoostMgr(PlantBoostMgr *this)

{
  *(undefined ***)this = &PTR__PlantBoostMgr_067afed0;
  Sexy::LazySingleton<PlantBoostMgr>::~LazySingleton((LazySingleton<PlantBoostMgr> *)this);
  return;
}


/* PlantBoostMgr::~PlantBoostMgr() */

void __thiscall PlantBoostMgr::~PlantBoostMgr(PlantBoostMgr *this)

{
  ~PlantBoostMgr(this);
  AK::FreeHook(this);
  return;
}


/* PlantBoostMgr::PlantBoostMgr() */

void __thiscall PlantBoostMgr::PlantBoostMgr(PlantBoostMgr *this)

{
  Sexy::LazySingleton<PlantBoostMgr>::LazySingleton((LazySingleton<PlantBoostMgr> *)this);
  *(undefined ***)this = &PTR__PlantBoostMgr_067afed0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBoostMgr::GetPlantBoostValue(int, PlantBoostType, int, float) */

void __thiscall
PlantBoostMgr::GetPlantBoostValue
          (float param_1_00,undefined8 param_2,undefined4 param_1,undefined4 param_4,
          LineBreakCategory *param_5)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  wchar16 *pwVar4;
  long *plVar5;
  ulong uVar6;
  float *pfVar7;
  PlantAccessoryMgr *pPVar8;
  PlantFamilyMgr *pPVar9;
  ArtifactMgr *pAVar10;
  exception_ptr *peVar11;
  int iVar12;
  LineBreakCategory *pLVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  LineBreakCategory *local_8;
  
  local_8 = ___stack_chk_guard;
  iVar12 = (int)param_5;
  pLVar13 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  peVar11 = (exception_ptr *)&local_30;
  std::string::string((string *)&local_28,"DisablePlantBoosts");
  cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar4,(wchar16 *)&local_28,(LineBreakCategory *)peVar11,param_5,pLVar13);
  std::string::~string((string *)&local_28);
  nop();
  fVar16 = 0.0;
  if (cVar2 == '\0') {
    cVar2 = CustomLevelUtils::IsCustomLevel();
    if ((cVar2 == '\0') && (cVar2 = NewPVPUtils::IsPlayingNewPVP(), cVar2 == '\0')) {
      pPVar8 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
      PlantAccessoryMgr::GetAccessoryBoostForPlant(pPVar8,avStack_20,param_1,param_4);
      pPVar9 = (PlantFamilyMgr *)Sexy::LazySingleton<PlantFamilyMgr>::GetInstance();
      PlantFamilyMgr::GetFamilyBoostForPlant(pPVar9,avStack_20,param_1,param_4);
      NewAvatar::GetNewAvatarBoostForPlant(avStack_20,param_1,param_4);
      NewAvatar::GetPrimitiveAvatarBoostForPlant(avStack_20,param_1,param_4);
      pAVar10 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
      ArtifactMgr::GetArtifactBoostForPlant(pAVar10,avStack_20,param_1,param_4);
      CollectionUtils::GetCollectionBoostForPlant(avStack_20,param_1,param_4);
      GeneEnhancement::GetGeneEnhancementBoostForPlant(avStack_20,param_1,param_4);
    }
    fVar15 = 0.0;
    bVar1 = false;
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar3)
    {
      plVar5 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      uVar14 = *(undefined8 *)(*plVar5 + 8);
      uVar6 = FUN_03fe09f0(uVar14,*(undefined8 *)(*plVar5 + 0x10));
      if ((ulong)(long)iVar12 < uVar6) {
        bVar1 = true;
        pfVar7 = (float *)FUN_03fe09fc(uVar14,(long)iVar12);
        fVar15 = fVar15 + *pfVar7;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    fVar16 = param_1_00;
    if (bVar1) {
      fVar16 = fVar15;
    }
  }
  std::vector<PlantBoost_const*,std::allocator<PlantBoost_const*>>::~vector
            ((vector<PlantBoost_const*,std::allocator<PlantBoost_const*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar16);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBoostMgr::GetPlantBoostValues(int, PlantBoostType) */

void PlantBoostMgr::GetPlantBoostValues
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,
               undefined8 param_2,undefined4 param_3,undefined4 param_4,LineBreakCategory *param_5)

{
  int iVar1;
  ResourceInfo *pRVar2;
  char cVar3;
  bool bVar4;
  wchar16 *pwVar5;
  PlantBoost **ppPVar6;
  vector<PlantBoost_const*,std::allocator<PlantBoost_const*>> *this;
  undefined8 *puVar7;
  PlantFamilyBoostPropertySheet *pPVar8;
  ulong uVar9;
  float *pfVar10;
  float *pfVar11;
  long *plVar12;
  PlantAccessoryMgr *pPVar13;
  PlantFamilyMgr *pPVar14;
  ArtifactMgr *pAVar15;
  exception_ptr *peVar16;
  LineBreakCategory *pLVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  ResourceInfo *local_50;
  undefined8 local_48;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  LineBreakCategory *local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar17 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  pwVar5 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  peVar16 = (exception_ptr *)&local_70;
  std::string::string((string *)&local_50,"DisablePlantBoosts");
  cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar5,(wchar16 *)&local_50,(LineBreakCategory *)peVar16,param_5,pLVar17);
  std::string::~string((string *)&local_50);
  nop();
  if (cVar3 == '\0') {
    cVar3 = CustomLevelUtils::IsCustomLevel();
    if ((cVar3 == '\0') && (cVar3 = NewPVPUtils::IsPlayingNewPVP(), cVar3 == '\0')) {
      pPVar13 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
      PlantAccessoryMgr::GetAccessoryBoostForPlant(pPVar13,avStack_68,param_3,param_4);
      pPVar14 = (PlantFamilyMgr *)Sexy::LazySingleton<PlantFamilyMgr>::GetInstance();
      PlantFamilyMgr::GetFamilyBoostForPlant(pPVar14,avStack_68,param_3,param_4);
      NewAvatar::GetNewAvatarBoostForPlant(avStack_68,param_3,param_4);
      NewAvatar::GetPrimitiveAvatarBoostForPlant(avStack_68,param_3,param_4);
      pAVar15 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
      ArtifactMgr::GetArtifactBoostForPlant(pAVar15,avStack_68,param_3,param_4);
      CollectionUtils::GetCollectionBoostForPlant(avStack_68,param_3,param_4);
      GeneEnhancement::GetGeneEnhancementBoostForPlant(avStack_68,param_3,param_4);
    }
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_68);
    local_70 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_68);
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70), bVar4)
    {
      ppPVar6 = (PlantBoost **)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
      local_50 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)*ppPVar6);
      this = (vector<PlantBoost_const*,std::allocator<PlantBoost_const*>> *)
             std::
             map<PlantBoostPropertySheet*,std::vector<PlantBoost_const*,std::allocator<PlantBoost_const*>>,std::less<PlantBoostPropertySheet*>,std::allocator<std::pair<PlantBoostPropertySheet*const,std::vector<PlantBoost_const*,std::allocator<PlantBoost_const*>>>>>
             ::operator[]((map<PlantBoostPropertySheet*,std::vector<PlantBoost_const*,std::allocator<PlantBoost_const*>>,std::less<PlantBoostPropertySheet*>,std::allocator<std::pair<PlantBoostPropertySheet*const,std::vector<PlantBoost_const*,std::allocator<PlantBoost_const*>>>>>
                           *)amStack_38,(PlantBoostPropertySheet **)&local_50);
      std::vector<PlantBoost_const*,std::allocator<PlantBoost_const*>>::push_back(this,ppPVar6);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
    }
    local_88 = std::
               map<PlantBoostPropertySheet*,std::vector<PlantBoost_const*,std::allocator<PlantBoost_const*>>,std::less<PlantBoostPropertySheet*>,std::allocator<std::pair<PlantBoostPropertySheet*const,std::vector<PlantBoost_const*,std::allocator<PlantBoost_const*>>>>>
               ::begin((map<PlantBoostPropertySheet*,std::vector<PlantBoost_const*,std::allocator<PlantBoost_const*>>,std::less<PlantBoostPropertySheet*>,std::allocator<std::pair<PlantBoostPropertySheet*const,std::vector<PlantBoost_const*,std::allocator<PlantBoost_const*>>>>>
                        *)amStack_38);
    local_80 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)amStack_38);
    while (bVar4 = eastl::operator!=((rbtree_iterator *)&local_88,(rbtree_iterator *)&local_80),
          bVar4) {
      puVar7 = (undefined8 *)
               std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_88);
      if (((RtObject *)*puVar7 == (RtObject *)0x0) ||
         (pPVar8 = Sexy::RtObject::Cast<PlantFamilyBoostPropertySheet>((RtObject *)*puVar7),
         pPVar8 == (PlantFamilyBoostPropertySheet *)0x0)) {
        local_70 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(puVar7 + 1));
        local_50 = (ResourceInfo *)
                   std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(puVar7 + 1));
        while (bVar4 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_70,(__normal_iterator *)&local_50),
              bVar4) {
          plVar12 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
          std::
          vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
          ::push_back((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
                       *)param_1,(vector *)(*plVar12 + 8));
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_70);
        }
      }
      else {
        iVar1 = *(int *)(pPVar8 + 0x30);
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
        uVar18 = (ulong)(iVar1 + -1);
        local_78 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(puVar7 + 1));
        local_70 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(puVar7 + 1));
        while (bVar4 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70),
              bVar4) {
          plVar12 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
          cVar3 = std::vector<float,std::allocator<float>>::empty
                            ((vector<float,std::allocator<float>> *)&local_50);
          if (cVar3 != '\0') {
            std::vector<float,std::allocator<float>>::operator=
                      ((vector<float,std::allocator<float>> *)&local_50,(vector *)(*plVar12 + 8));
          }
          pRVar2 = local_50;
          uVar9 = FUN_03fe09f0(local_50,local_48);
          if (uVar18 < uVar9) {
            uVar19 = *(undefined8 *)(*plVar12 + 8);
            uVar9 = FUN_03fe09f0(uVar19,*(undefined8 *)(*plVar12 + 0x10));
            if (uVar18 < uVar9) {
              pfVar10 = (float *)FUN_03fe09fc(uVar19,uVar18);
              pfVar11 = (float *)FUN_03fe0a04(pRVar2,uVar18);
              *pfVar11 = *pfVar11 + *pfVar10;
            }
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
        }
        std::
        vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
        ::push_back((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
                     *)param_1,(vector *)&local_50);
        std::vector<float,std::allocator<float>>::~vector
                  ((vector<float,std::allocator<float>> *)&local_50);
      }
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_88);
    }
  }
  std::vector<PlantBoost_const*,std::allocator<PlantBoost_const*>>::~vector
            ((vector<PlantBoost_const*,std::allocator<PlantBoost_const*>> *)avStack_68);
  std::
  map<PlantBoostPropertySheet*,std::vector<PlantBoost_const*,std::allocator<PlantBoost_const*>>,std::less<PlantBoostPropertySheet*>,std::allocator<std::pair<PlantBoostPropertySheet*const,std::vector<PlantBoost_const*,std::allocator<PlantBoost_const*>>>>>
  ::~map((map<PlantBoostPropertySheet*,std::vector<PlantBoost_const*,std::allocator<PlantBoost_const*>>,std::less<PlantBoostPropertySheet*>,std::allocator<std::pair<PlantBoostPropertySheet*const,std::vector<PlantBoost_const*,std::allocator<PlantBoost_const*>>>>>
          *)amStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}

