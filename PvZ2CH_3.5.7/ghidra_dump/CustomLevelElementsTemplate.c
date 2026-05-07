// Class: CustomLevelElementsTemplate


/* CustomLevelElementsTemplate::CustomLevelElementsTemplate(CustomLevelMgr*) */

void __thiscall
CustomLevelElementsTemplate::CustomLevelElementsTemplate
          (CustomLevelElementsTemplate *this,CustomLevelMgr *param_1)

{
  CustomLevelTemplate::CustomLevelTemplate((CustomLevelTemplate *)this,param_1);
  *(undefined ***)this = &PTR_nop_0665ec90;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelElementsTemplate::UpdateRailInfo(RailInfo&, std::vector<RailInfo,
   std::allocator<RailInfo> >&) */

void __thiscall
CustomLevelElementsTemplate::UpdateRailInfo
          (CustomLevelElementsTemplate *this,RailInfo *param_1,vector *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)param_2);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)param_2);
  local_18 = FUN_035d1e8c(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_2);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar4 + 4);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<RailInfo,std::allocator<RailInfo>>::erase
              ((vector<RailInfo,std::allocator<RailInfo>> *)param_2,local_10);
    UpdateRailInfo(this,param_1,param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelElementsTemplate::UpdateRailInfos(std::vector<RailInfo, std::allocator<RailInfo> >
   const&, std::vector<RailInfo, std::allocator<RailInfo> >&) */

void __thiscall
CustomLevelElementsTemplate::UpdateRailInfos
          (CustomLevelElementsTemplate *this,vector *param_1,vector *param_2)

{
  RailInfo *pRVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  std::vector<RailInfo,std::allocator<RailInfo>>::operator=
            ((vector<RailInfo,std::allocator<RailInfo>> *)param_2,param_1);
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)param_2;
    uVar2 = FUN_035cc0b8(uVar4,*(undefined8 *)(param_2 + 8));
    if (uVar2 <= uVar3) break;
    pRVar1 = (RailInfo *)FUN_035cc0cc(uVar4,uVar3);
    UpdateRailInfo(this,pRVar1,param_2);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelElementsTemplate::GenerateTemplate(CustomLevelCreator&, CustomLevelWorldParams const&,
   CustomLevelConfig const*) */

void CustomLevelElementsTemplate::GenerateTemplate
               (CustomLevelCreator *param_1,CustomLevelWorldParams *param_2,
               CustomLevelConfig *param_3)

{
  char cVar1;
  bool bVar2;
  PowerTileProperties *pPVar3;
  undefined4 *puVar4;
  RailcartProperties *pRVar5;
  undefined8 *puVar6;
  InitialZombieProperties *pIVar7;
  CustomLevelMgr *pCVar8;
  InitialGridItemProperties *pIVar9;
  InitialPlantProperties *pIVar10;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<PlacementInfo,std::allocator<PlacementInfo>>::empty
                    ((vector<PlacementInfo,std::allocator<PlacementInfo>> *)(param_3 + 0x1e0));
  if (cVar1 == '\0') {
    pIVar10 = CustomLevelCreator::AddModule<InitialPlantProperties>((CustomLevelCreator *)param_2);
    local_38 = FUN_035cf4ac(*(undefined8 *)(param_3 + 0x1e0));
    local_30 = FUN_035cf4fc(*(undefined8 *)(param_3 + 0x1e8));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar2)
    {
      puVar4 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38)
      ;
      pCVar8 = (CustomLevelMgr *)Sexy::ProfileManager::GetListener((ProfileManager *)param_1);
      std::string::string((string *)&local_20,"ValidPlants");
      cVar1 = CustomLevelMgr::IsValueValid(pCVar8,(string *)&local_20,(string *)(puVar4 + 4));
      std::string::~string((string *)&local_20);
      nop();
      if (cVar1 != '\0') {
        PlantPlacementProperties::PlantPlacementProperties((PlantPlacementProperties *)&local_20);
        local_18 = *puVar4;
        local_14 = puVar4[1];
        local_c = puVar4[2];
        thunk_FUN_05475e00((string *)&local_20,(string *)(puVar4 + 4));
        std::vector<PlantPlacementProperties,std::allocator<PlantPlacementProperties>>::push_back
                  ((vector<PlantPlacementProperties,std::allocator<PlantPlacementProperties>> *)
                   (pIVar10 + 0x40),(PlantPlacementProperties *)&local_20);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_20);
      }
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_38);
    }
  }
  cVar1 = std::vector<PlacementInfo,std::allocator<PlacementInfo>>::empty
                    ((vector<PlacementInfo,std::allocator<PlacementInfo>> *)(param_3 + 0x1f8));
  if (cVar1 == '\0') {
    pIVar9 = CustomLevelCreator::AddModule<InitialGridItemProperties>((CustomLevelCreator *)param_2)
    ;
    local_38 = FUN_035cf4ac(*(undefined8 *)(param_3 + 0x1f8));
    local_30 = FUN_035cf4fc(*(undefined8 *)(param_3 + 0x200));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar2)
    {
      puVar4 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38)
      ;
      pCVar8 = (CustomLevelMgr *)Sexy::ProfileManager::GetListener((ProfileManager *)param_1);
      std::string::string((string *)&local_20,"ValidGridItems");
      cVar1 = CustomLevelMgr::IsValueValid(pCVar8,(string *)&local_20,(string *)(puVar4 + 4));
      std::string::~string((string *)&local_20);
      nop();
      if (cVar1 != '\0') {
        Effect_PlayFrame::FrameRange::FrameRange((FrameRange *)&local_20);
        local_18 = *puVar4;
        local_14 = puVar4[1];
        thunk_FUN_05475e00((string *)&local_20,(string *)(puVar4 + 4));
        std::vector<GridItemPlacementProperties,std::allocator<GridItemPlacementProperties>>::
        push_back((vector<GridItemPlacementProperties,std::allocator<GridItemPlacementProperties>> *
                  )(pIVar9 + 0x40),(GridItemPlacementProperties *)&local_20);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_20);
      }
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_38);
    }
  }
  cVar1 = std::vector<PlacementInfo,std::allocator<PlacementInfo>>::empty
                    ((vector<PlacementInfo,std::allocator<PlacementInfo>> *)(param_3 + 0x210));
  if (cVar1 == '\0') {
    pIVar7 = CustomLevelCreator::AddModule<InitialZombieProperties>((CustomLevelCreator *)param_2);
    local_38 = FUN_035cf4ac(*(undefined8 *)(param_3 + 0x210));
    local_30 = FUN_035cf4fc(*(undefined8 *)(param_3 + 0x218));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar2)
    {
      puVar4 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38)
      ;
      pCVar8 = (CustomLevelMgr *)Sexy::ProfileManager::GetListener((ProfileManager *)param_1);
      std::string::string((string *)&local_20,"ValidZombies");
      cVar1 = CustomLevelMgr::IsValueValid(pCVar8,(string *)&local_20,(string *)(puVar4 + 4));
      std::string::~string((string *)&local_20);
      nop();
      if (cVar1 != '\0') {
        ZombiePlacementProperties::ZombiePlacementProperties((ZombiePlacementProperties *)&local_20)
        ;
        local_14 = *puVar4;
        local_10 = puVar4[1];
        local_18 = puVar4[2];
        thunk_FUN_05475e00((string *)&local_20,(string *)(puVar4 + 4));
        std::vector<ZombiePlacementProperties,std::allocator<ZombiePlacementProperties>>::push_back
                  ((vector<ZombiePlacementProperties,std::allocator<ZombiePlacementProperties>> *)
                   (pIVar7 + 0x40),(ZombiePlacementProperties *)&local_20);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_20);
      }
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_38);
    }
  }
  cVar1 = std::vector<RailInfo,std::allocator<RailInfo>>::empty
                    ((vector<RailInfo,std::allocator<RailInfo>> *)(param_3 + 0x248));
  if (cVar1 == '\0') {
    pRVar5 = CustomLevelCreator::AddModule<RailcartProperties>((CustomLevelCreator *)param_2);
    thunk_FUN_05475e00(pRVar5 + 0x40,param_3 + 0x228);
    local_38 = FUN_035cf608(*(undefined8 *)(param_3 + 0x230));
    local_30 = FUN_035cf658(*(undefined8 *)(param_3 + 0x238));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar2)
    {
      puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38)
      ;
      ObstacleNonSpawnData::ObstacleNonSpawnData((ObstacleNonSpawnData *)&local_20);
      local_20 = *puVar6;
      std::vector<RailcartLocation,std::allocator<RailcartLocation>>::push_back
                ((vector<RailcartLocation,std::allocator<RailcartLocation>> *)(pRVar5 + 0x60),
                 (RailcartLocation *)&local_20);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    UpdateRailInfos((CustomLevelElementsTemplate *)param_1,(vector *)(param_3 + 0x248),
                    (vector *)&local_20);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar2)
    {
      puVar4 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48)
      ;
      TutorialCard::TutorialCard((TutorialCard *)&local_30);
      local_28 = puVar4[1];
      local_30 = CONCAT44(puVar4[2],*puVar4);
      std::vector<RailcartRail,std::allocator<RailcartRail>>::push_back
                ((vector<RailcartRail,std::allocator<RailcartRail>> *)(pRVar5 + 0x48),
                 (RailcartRail *)&local_30);
      ObstacleNonSpawnData::ObstacleNonSpawnData((ObstacleNonSpawnData *)&local_38);
      local_38 = CONCAT44(puVar4[2],*puVar4);
      std::vector<RailcartLocation,std::allocator<RailcartLocation>>::push_back
                ((vector<RailcartLocation,std::allocator<RailcartLocation>> *)(pRVar5 + 0x60),
                 (RailcartLocation *)&local_38);
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_48);
    }
    std::vector<RailInfo,std::allocator<RailInfo>>::~vector
              ((vector<RailInfo,std::allocator<RailInfo>> *)&local_20);
  }
  cVar1 = std::vector<CustomPowerTileInfo,std::allocator<CustomPowerTileInfo>>::empty
                    ((vector<CustomPowerTileInfo,std::allocator<CustomPowerTileInfo>> *)
                     (param_3 + 0x260));
  if (cVar1 == '\0') {
    pPVar3 = CustomLevelCreator::AddModule<PowerTileProperties>((CustomLevelCreator *)param_2);
    local_40 = FUN_035cf6d4(*(undefined8 *)(param_3 + 0x260));
    local_38 = FUN_035cf724(*(undefined8 *)(param_3 + 0x268));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2)
    {
      puVar4 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      PowerTileEntry::PowerTileEntry((PowerTileEntry *)&local_20);
      local_18 = *puVar4;
      Sexy::Point::Point((Point *)&local_30,puVar4[1],puVar4[2]);
      local_20 = local_30;
      std::vector<PowerTileEntry,std::allocator<PowerTileEntry>>::push_back
                ((vector<PowerTileEntry,std::allocator<PowerTileEntry>> *)(pPVar3 + 0x40),
                 (PowerTileEntry *)&local_20);
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_40);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}

