// Class: BoardRegionTideWater


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03f1e2c0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* BoardRegionTideWater::GetGroundHeightOffsetFraction(Sexy::SexyVector3 const&) */

void __thiscall
BoardRegionTideWater::GetGroundHeightOffsetFraction(BoardRegionTideWater *this,SexyVector3 *param_1)

{
  long lVar1;
  undefined1 extraout_q0 [16];
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardRegion::GetRegion();
  lVar1 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
  local_20 = 0;
  local_1c = 0xbf800000;
  CurveLerp<float>(extraout_q0,*(undefined4 *)(lVar1 + 0x58),*(float *)param_1 - local_18,&local_20,
                   &local_1c,5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardRegionTideWater::StaticGetClass() */

long * BoardRegionTideWater::StaticGetClass(void)

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
  uVar2 = BoardRegion::StaticGetClass();
  (*pcVar3)(plVar1,"BoardRegionTideWater",uVar2,StaticNew);
  return sClass;
}


/* BoardRegionTideWater::GetClass() const */

long * BoardRegionTideWater::GetClass(void)

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
  uVar2 = BoardRegion::StaticGetClass();
  (*pcVar3)(plVar1,"BoardRegionTideWater",uVar2,StaticNew);
  return sClass;
}


/* BoardRegionTideWater::~BoardRegionTideWater() */

void __thiscall BoardRegionTideWater::~BoardRegionTideWater(BoardRegionTideWater *this)

{
  *(undefined ***)this = &PTR_GetClass_06834fc0;
  BoardRegion::~BoardRegion((BoardRegion *)this);
  return;
}


/* BoardRegionTideWater::~BoardRegionTideWater() */

void __thiscall BoardRegionTideWater::~BoardRegionTideWater(BoardRegionTideWater *this)

{
  ~BoardRegionTideWater(this);
  AK::FreeHook(this);
  return;
}


/* BoardRegionTideWater::BoardRegionTideWater() */

void __thiscall BoardRegionTideWater::BoardRegionTideWater(BoardRegionTideWater *this)

{
  BoardRegion::BoardRegion((BoardRegion *)this);
  *(undefined ***)this = &PTR_GetClass_06834fc0;
  SporeshroomSubsystem::RecordSporeshroomLevel((SporeshroomSubsystem *)this,2);
  return;
}


/* BoardRegionTideWater::StaticNew() */

BoardRegionTideWater * BoardRegionTideWater::StaticNew(void)

{
  BoardRegionTideWater *this;
  
  this = ::operator_new(0x28);
  BoardRegionTideWater(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardRegionTideWater::DoEntityEnteredEffects(Sexy::SexyVector3 const&, BoardEntity*) */

void BoardRegionTideWater::DoEntityEnteredEffects(SexyVector3 *param_1,BoardEntity *param_2)

{
  int iVar1;
  undefined4 uVar2;
  Effect_PopAnim *this;
  ResourceInfo *pRVar3;
  RtClass *pRVar4;
  void *pvVar5;
  AudioMgr *this_00;
  char *pcVar6;
  string asStack_38 [8];
  RtWeakPtr aRStack_30 [8];
  Vec3 aVStack_28 [16];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_28,-95.0,-110.0,0.0);
  EATextSquish::Vec3::Vec3(aVStack_18,*(float *)param_2,*(float *)(param_2 + 4),0.0);
  EATextSquish::Vec3::operator+=(aVStack_18,aVStack_28);
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_38,"POPANIM_EFFECTS_PLANT_DROWNING");
  GetPAMByName(asStack_38);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
  pRVar4 = (RtClass *)PopAnimRig::StaticGetClass();
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar3,pRVar4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  std::string::~string(asStack_38);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aVStack_18,-1);
  iVar1 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(param_2 + 4));
  uVar2 = Board::MakeGroundRenderOrder(iVar1,0);
  FUN_0435dd74(this + 0x1c,uVar2);
  std::string::string((string *)aRStack_30,"ANIMATION");
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_30,2);
  std::string::~string((string *)aRStack_30);
  nop();
  pvVar5 = (void *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::RegisterForAudio(pvVar5);
  this_00 = (AudioMgr *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendPositionalAudioValue(this_00,this,(SexyVector3 *)param_2);
  pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar6,"Play_Plant_Water_Splash");
  pvVar5 = (void *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::UnregisterForAudio(pvVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardRegionTideWater::onUpdate() */

void __thiscall BoardRegionTideWater::onUpdate(BoardRegionTideWater *this)

{
  undefined *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  GridItemSap *this_01;
  GridItemAcid *this_02;
  GridItemLava *pGVar5;
  DragonFruitLava *this_03;
  GridItemHanabi *pGVar6;
  GridItemFireCracker *pGVar7;
  GridItemSummerFireworks *pGVar8;
  Plant *this_04;
  long lVar9;
  long extraout_x0;
  PlantType *this_05;
  long lVar10;
  SexyVector3 *pSVar11;
  WaveManager *pWVar12;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar13;
  RtObject *pRVar14;
  WaveActionPoolTerrainChangeProps *pWVar15;
  undefined8 *puVar16;
  ulong uVar17;
  Board *this_06;
  ulong uVar18;
  byte bVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 local_80;
  undefined8 local_78;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_70 [24];
  undefined8 local_58 [3];
  undefined8 local_40;
  undefined8 local_38;
  function<void(Sexy::Graphics*)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_70);
  std::function<void(Sexy::Graphics*)>::function(afStack_28);
  BoardRegion::GetContainedEntities((BoardRegion *)this,avStack_70,4,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)afStack_28);
  local_58[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_70);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_70);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)local_58,(__normal_iterator *)&local_40)
        , bVar1) {
    puVar16 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_58);
    pRVar14 = (RtObject *)*puVar16;
    this_01 = Sexy::RtObject::Cast<GridItemSap>(pRVar14);
    if (this_01 != (GridItemSap *)0x0) {
      GridItemSap::OnWashedOut(this_01);
    }
    this_02 = Sexy::RtObject::Cast<GridItemAcid>(pRVar14);
    if (this_02 != (GridItemAcid *)0x0) {
      GridItemAcid::ManualDestroy(this_02);
    }
    pGVar5 = Sexy::RtObject::Cast<GridItemLava>(pRVar14);
    if (pGVar5 != (GridItemLava *)0x0) {
      (**(code **)(*(long *)pGVar5 + 0x2a8))();
    }
    this_03 = Sexy::RtObject::Cast<DragonFruitLava>(pRVar14);
    if (this_03 != (DragonFruitLava *)0x0) {
      DragonFruitLava::OnWashedOut(this_03);
    }
    pGVar6 = Sexy::RtObject::Cast<GridItemHanabi>(pRVar14);
    this_00 = gMessageRouter;
    if (pGVar6 != (GridItemHanabi *)0x0) {
      iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)pRVar14);
      iVar4 = SharkMinion::getRow((SharkMinion *)pRVar14);
      MessageRouter::Post<int,int,bool,int,int,bool>
                ((MessageRouter *)this_00,Message::CleanPoison,iVar3,iVar4,true);
    }
    pGVar7 = Sexy::RtObject::Cast<GridItemFireCracker>(pRVar14);
    if (pGVar7 != (GridItemFireCracker *)0x0) {
      MessageRouter::Post<bool,bool>
                ((MessageRouter *)gMessageRouter,Message::GridItemFireCracker,false);
    }
    pGVar8 = Sexy::RtObject::Cast<GridItemSummerFireworks>(pRVar14);
    if (pGVar8 != (GridItemSummerFireworks *)0x0) {
      MessageRouter::Post<bool,bool>
                ((MessageRouter *)gMessageRouter,Message::GridItemSummerFireworks,false);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_58);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_58);
  std::function<void(Sexy::Graphics*)>::function(afStack_28);
  BoardRegion::GetContainedEntities((BoardRegion *)this,(exception_ptr *)local_58,1,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)afStack_28);
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_58);
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)local_58);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)&local_78);
    if (!bVar1) {
LAB_0436027c:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_58);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_70);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
    nop();
    cVar2 = FUN_0435dd7c(*(undefined4 *)(this_04 + 0x1d0));
    if ((cVar2 == '\0') && (cVar2 = Plant::IsInvincible(this_04,false), cVar2 == '\0')) {
      Plant::GetProps();
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      bVar19 = *(byte *)(lVar9 + 0x24b);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      Plant::GetType();
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      bVar1 = std::operator==((string *)(lVar9 + 8),"imitater");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      if ((bVar1) && (nop(), extraout_x0 != 0)) {
        PlantImitater::GetImitatedPlant();
        this_05 = (PlantType *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        lVar9 = PlantType::GetProps(this_05);
        bVar19 = *(byte *)(lVar9 + 0x24b);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      }
      iVar3 = *(int *)(this_04 + 0x114);
      iVar4 = *(int *)(this_04 + 0x110);
      this_06 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)&local_40,"");
      lVar9 = Board::GetPlantAt(this_06,iVar3,iVar4,(string *)&local_40);
      std::string::~string((string *)&local_40);
      nop();
      lVar10 = FUN_0435f128(*(undefined4 *)(this_04 + 0x114),*(undefined4 *)(this_04 + 0x110));
      bVar1 = false;
      if (lVar9 != 0) {
        bVar1 = Sexy::RtObject::IsA<PlantAquaVine>(*(RtObject **)(lVar9 + 0xa8));
      }
      if ((lVar10 != 0) < (bVar19 ^ 1)) {
        cVar2 = FUN_0435dd88(this_04[0x3d0]);
        if (cVar2 == '\0') {
          if (bVar1 == false) {
            pSVar11 = (SexyVector3 *)
                      std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this_04);
            Board::DoEntityLandedEffects
                      (*(Board **)(gLawnApp + 0x9f0),pSVar11,(BoardEntity *)this_04);
            Plant::KillPlant(this_04,0,1,1);
            goto LAB_0436027c;
          }
        }
        else {
LAB_04360314:
          if ((bVar1 == false) && ((bVar19 ^ 1) != 0)) {
            lVar9 = Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
            if (lVar9 == 0) goto LAB_0436027c;
            pWVar12 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
            lVar9 = WaveManager::GetProps(pWVar12);
            if (lVar9 == 0) goto LAB_0436027c;
            uVar22 = 0;
            bVar1 = true;
            pWVar12 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
            lVar9 = WaveManager::GetProps(pWVar12);
            std::
            vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
            ::vector((vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
                      *)&local_40,(vector *)(lVar9 + 0x10));
            uVar21 = local_40;
            lVar9 = FUN_0435ddc0(local_40,local_38);
            if (lVar9 != 0) {
              do {
                uVar18 = 0;
                while( true ) {
                  puVar16 = (undefined8 *)FUN_0435ddd4(uVar21,uVar22);
                  uVar20 = *puVar16;
                  uVar17 = FUN_0435dde0(uVar20,puVar16[1]);
                  if (uVar17 <= uVar18) break;
                  pRVar13 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0435ddec(uVar20,uVar18);
                  lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar13);
                  if (lVar9 != 0) {
                    puVar16 = (undefined8 *)FUN_0435ddd4(local_40,uVar22);
                    pRVar13 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0435ddec(*puVar16,uVar18);
                    pRVar14 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar13);
                    pWVar15 = Sexy::RtObject::Cast<WaveActionPoolTerrainChangeProps>(pRVar14);
                    if (pWVar15 != (WaveActionPoolTerrainChangeProps *)0x0) {
                      bVar1 = false;
                    }
                  }
                  uVar18 = uVar18 + 1;
                  uVar21 = local_40;
                }
                uVar22 = uVar22 + 1;
                uVar18 = FUN_0435ddc0(uVar21,local_38);
              } while (uVar22 < uVar18);
            }
            if (!bVar1) {
              Plant::KillPlant(this_04,0,0,1);
              std::
              vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
              ::~vector((vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
                         *)&local_40);
              goto LAB_0436027c;
            }
            std::
            vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
            ::~vector((vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
                       *)&local_40);
          }
        }
      }
      else {
        if (lVar10 == 0) goto LAB_04360314;
        Plant::GetType();
        lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40)
        ;
        bVar1 = std::operator==((string *)(lVar9 + 8),"tanglekelp");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        if (bVar1) {
          Plant::KillPlant(this_04,0,0,1);
          goto LAB_0436027c;
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardRegionTideWater::GatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
BoardRegionTideWater::GatherPlantingRestrictions
          (BoardRegionTideWater *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  PlantNameMapperServerID *this_00;
  undefined8 uVar5;
  ResourceInfo *pRVar6;
  long lVar7;
  long lVar8;
  Board *this_01;
  float fVar9;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != (PlantType *)0x0) {
    this_00 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
    uVar4 = PlantNameMapperServerID::GetIdForType(this_00,param_2);
    uVar5 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
    fVar9 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar5,uVar4,0x11,0);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_2 + 0x28));
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = *(int *)param_1;
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)local_10,"");
    lVar7 = Board::GetPlantAt(this_01,iVar2,iVar1,(string *)local_10);
    std::string::~string((string *)local_10);
    nop();
    if ((((byte)pRVar6[0x24b] < ((int)fVar9 != 1)) &&
        (lVar8 = FUN_0435f128(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4)), lVar8 == 0)) &&
       ((lVar7 == 0 ||
        (bVar3 = Sexy::RtObject::IsA<PlantAquaVine>(*(RtObject **)(lVar7 + 0xa8)), !bVar3)))) {
      local_10[0] = 0x32;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                 (PlantingReason *)local_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

