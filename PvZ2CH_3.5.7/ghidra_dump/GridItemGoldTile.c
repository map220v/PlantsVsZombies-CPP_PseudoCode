// Class: GridItemGoldTile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGoldTile::updateVisibility() */

void __thiscall GridItemGoldTile::updateVisibility(GridItemGoldTile *this)

{
  undefined4 uVar1;
  code *pcVar2;
  Board *this_00;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  pcVar2 = *(code **)(*(long *)this + 0x80);
  GridItem::GetGridLocation();
  uVar1 = Board::IsShallowWater(this_00,aPStack_10);
  (*pcVar2)(this,uVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGoldTile::CalcRenderOrder() const */

void __thiscall GridItemGoldTile::CalcRenderOrder(GridItemGoldTile *this)

{
  int iVar1;
  
  iVar1 = FUN_03e2add8(*(undefined4 *)(this + 0x134));
  Board::MakeGroundRenderOrder(iVar1,1);
  return;
}


/* non-virtual thunk to GridItemGoldTile::CalcRenderOrder() const */

void __thiscall GridItemGoldTile::CalcRenderOrder(GridItemGoldTile *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemGoldTile::onGameplayEnded() */

void __thiscall GridItemGoldTile::onGameplayEnded(GridItemGoldTile *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  return;
}


/* GridItemGoldTile::IsTileOccupied() */

void __thiscall GridItemGoldTile::IsTileOccupied(GridItemGoldTile *this)

{
  Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1b0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGoldTile::onRegionChanged(BoardRegion*) */

void GridItemGoldTile::onRegionChanged(BoardRegion *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  Board *this;
  Point aPStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this = *(Board **)(gLawnApp + 0x9f0);
  pcVar2 = *(code **)(*(long *)param_1 + 0x80);
  GridItem::GetGridLocation();
  uVar1 = Board::IsShallowWater(this,aPStack_10);
  (*pcVar2)(param_1,uVar1);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGoldTile::~GridItemGoldTile() */

void __thiscall GridItemGoldTile::~GridItemGoldTile(GridItemGoldTile *this)

{
  *(undefined ***)this = &PTR_GetClass_06787fd0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGoldTile_06788288;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemGoldTile::~GridItemGoldTile() */

void __thiscall GridItemGoldTile::~GridItemGoldTile(GridItemGoldTile *this)

{
  ~GridItemGoldTile(this + -0x10);
  return;
}


/* GridItemGoldTile::~GridItemGoldTile() */

void __thiscall GridItemGoldTile::~GridItemGoldTile(GridItemGoldTile *this)

{
  ~GridItemGoldTile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemGoldTile::~GridItemGoldTile() */

void __thiscall GridItemGoldTile::~GridItemGoldTile(GridItemGoldTile *this)

{
  ~GridItemGoldTile(this + -0x10);
  return;
}


/* GridItemGoldTile::GridItemGoldTile() */

void __thiscall GridItemGoldTile::GridItemGoldTile(GridItemGoldTile *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_06787fd0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGoldTile_06788288;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b0));
  return;
}


/* GridItemGoldTile::StaticNew() */

GridItemGoldTile * GridItemGoldTile::StaticNew(void)

{
  GridItemGoldTile *this;
  
  this = ::operator_new(0x1b8);
  GridItemGoldTile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGoldTile::onPlantPlaced(Plant*) */

void __thiscall GridItemGoldTile::onPlantPlaced(GridItemGoldTile *this,Plant *param_1)

{
  char cVar1;
  int local_18;
  int local_14;
  RtWeakPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GetGridLocation();
  if ((*(int *)(param_1 + 0x110) == local_14) && (*(int *)(param_1 + 0x114) == local_18)) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1b0),aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else {
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtWeakPtrBase::operator==(aRStack_10,(RtWeakPtrBase *)(this + 0x1b0));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x1b0));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGoldTile::playRecurringSunAwardAnim() */

void __thiscall GridItemGoldTile::playRecurringSunAwardAnim(GridItemGoldTile *this)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  std::string::string(asStack_58,"ACTIVE");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimDone);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<GridItemGoldTile,void(GridItemGoldTile::*)(std::string_const&)>(aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGoldTile::produceSun(int) */

void __thiscall GridItemGoldTile::produceSun(GridItemGoldTile *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  Collectable *in_x2;
  string asStack_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  float local_28 [4];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = BoardHelpers::CanProduceSun();
  if ((cVar1 != '\0') && (0 < param_1)) {
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    do {
      Set8BytesTo0(asStack_40);
      if (param_1 < 100) {
        if (param_1 < 0x4b) {
          if (0x31 < param_1) goto LAB_03e2ba2c;
          if (param_1 < 0x19) {
            param_1 = param_1 + -5;
            std::string::append(asStack_40,"sun_small",(size_t)in_x2);
          }
          else {
            param_1 = param_1 + -0x19;
            std::string::append(asStack_40,"sun_medium",(size_t)in_x2);
          }
        }
        else {
          param_1 = param_1 + -0x4b;
          std::string::append(asStack_40,"sun_large",(size_t)in_x2);
        }
      }
      else {
LAB_03e2ba2c:
        param_1 = param_1 + -0x32;
        std::string::append(asStack_40,"sun",(size_t)in_x2);
      }
      in_x2 = (Collectable *)Board::AddCollectable(*(string **)(gLawnApp + 0x9f0));
      local_38 = *puVar3;
      local_30 = *(undefined4 *)(puVar3 + 1);
      DVec3::DVec3((DVec3 *)local_28);
      local_28[0] = (float)Sexy::Rand(80.0);
      local_28[0] = local_28[0] - 40.0;
      local_28[1] = 5.0;
      local_28[2] = (float)Sexy::Rand(170.0);
      local_28[2] = local_28[2] + 170.0;
      iVar2 = FUN_03e2add8(*(undefined4 *)(this + 0x134));
      if (3 < iVar2) {
        local_38 = CONCAT44(local_38._4_4_ - 10.0,(undefined4)local_38);
        local_28[1] = 0.0;
      }
      (**(code **)(*(long *)in_x2 + 0x78))(in_x2,&local_38);
      EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,-600.0);
      Collectable::SetMotionNewtonian(in_x2,(SexyVector3 *)local_28,(SexyVector3 *)aVStack_18,true);
      Collectable::StartExpirationTimerAfterMotion(in_x2);
      MessageRouter::Broadcast<CollectableSun*,CollectableSun*>
                ((MessageRouter *)gMessageRouter,Message::SunProducedByPlant,(CollectableSun *)in_x2
                );
      std::string::~string(asStack_40);
    } while (0 < param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGoldTile::updateSunSpawner() */

void __thiscall GridItemGoldTile::updateSunSpawner(GridItemGoldTile *this)

{
  GridItemGoldTileProps *pGVar1;
  float fVar2;
  
  pGVar1 = GridItem::GetProps<GridItemGoldTileProps>();
  if ((*(int *)(this + 0x1ac) == 1) && (fVar2 = (float)PVZ_T(), *(float *)(this + 0x1a8) <= fVar2))
  {
    produceSun(this,*(int *)(pGVar1 + 0xd0));
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x1a8) = fVar2 + *(float *)(pGVar1 + 0xd8);
    playRecurringSunAwardAnim(this);
    return;
  }
  return;
}


/* GridItemGoldTile::spawnInitialSun() */

void __thiscall GridItemGoldTile::spawnInitialSun(GridItemGoldTile *this)

{
  GridItemGoldTileProps *pGVar1;
  
  pGVar1 = GridItem::GetProps<GridItemGoldTileProps>();
  produceSun(this,*(int *)(pGVar1 + 0xd4));
  playRecurringSunAwardAnim(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGoldTile::playStateAnim() */

void __thiscall GridItemGoldTile::playStateAnim(GridItemGoldTile *this)

{
  int iVar1;
  long *plVar2;
  char *__s;
  code *pcVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  int local_20 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  iVar1 = *(int *)(this + 0x1ac);
  if (iVar1 == 1) {
    GridItemAnimation::GetAnimRig();
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    pcVar3 = *(code **)(*plVar2 + 0x78);
    std::string::string(asStack_40,"ACTIVE_IDLE");
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    (*pcVar3)(plVar2,asStack_40,1,0,
              (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  else {
    if (iVar1 == 0) {
      local_20[0] = 100;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_38,local_20);
      local_20[0] = 1;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_38,local_20);
      GridItemAnimation::GetAnimRig();
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      __s = "INACTIVE_UNUSED";
    }
    else {
      if (iVar1 != 2) goto LAB_03e2bd44;
      local_20[0] = 100;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_38,local_20);
      local_20[0] = 1;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_38,local_20);
      GridItemAnimation::GetAnimRig();
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      __s = "INACTIVE_USED";
    }
    pcVar3 = *(code **)(*plVar2 + 0x78);
    std::string::string(asStack_40,__s);
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)local_20,(vector *)avStack_38);
    (*pcVar3)(plVar2,asStack_40,1,4,(vector<int,std::allocator<int>> *)local_20);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
LAB_03e2bd44:
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGoldTile::onGridItemInitialize() */

void __thiscall GridItemGoldTile::onGridItemInitialize(GridItemGoldTile *this)

{
  bool bVar1;
  long extraout_x0;
  long lVar2;
  undefined4 uVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1a8) = uVar3;
  GridItem::GetGridLocation();
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x1b0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,1,local_40,local_3c);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    if (!bVar1) {
LAB_03e2bf7c:
      playStateAnim(this);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    nop();
    if (extraout_x0 != 0) {
      Plant::GetType();
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      bVar1 = std::operator!=((string *)(lVar2 + 8),"goldleaf");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      if (bVar1) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1b0),
                   (RtWeakPtrBase *)aRStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        goto LAB_03e2bf7c;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  } while( true );
}


/* GridItemGoldTile::updateTileState() */

void __thiscall GridItemGoldTile::updateTileState(GridItemGoldTile *this)

{
  int iVar1;
  char cVar2;
  GridItemGoldTileProps *pGVar3;
  float fVar4;
  undefined4 uVar5;
  
  pGVar3 = GridItem::GetProps<GridItemGoldTileProps>();
  cVar2 = IsTileOccupied(this);
  iVar1 = *(int *)(this + 0x1ac);
  if (iVar1 == 1) {
    if (cVar2 == '\0') {
      *(undefined4 *)(this + 0x1ac) = 2;
      uVar5 = PVZ_EOT();
      *(undefined4 *)(this + 0x1a8) = uVar5;
      playStateAnim(this);
      return;
    }
  }
  else if (iVar1 == 0) {
    if (cVar2 != '\0') {
      spawnInitialSun(this);
      *(undefined4 *)(this + 0x1ac) = 1;
      fVar4 = (float)PVZ_T();
      *(float *)(this + 0x1a8) = fVar4 + *(float *)(pGVar3 + 0xd8);
    }
  }
  else if ((iVar1 == 2) && (cVar2 != '\0')) {
    *(undefined4 *)(this + 0x1ac) = 1;
    playStateAnim(this);
    return;
  }
  return;
}


/* GridItemGoldTile::onPlaceOnBoard() */

void __thiscall GridItemGoldTile::onPlaceOnBoard(GridItemGoldTile *this)

{
  updateTileState(this);
  updateVisibility(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGoldTile::onAnimDone(std::string const&) */

void GridItemGoldTile::onAnimDone(string *param_1)

{
  int iVar1;
  long *plVar2;
  char *__s;
  code *pcVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  int aiStack_20 [6];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  iVar1 = *(int *)(param_1 + 0x1ac);
  if (iVar1 == 1) {
    GridItemAnimation::GetAnimRig();
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    pcVar3 = *(code **)(*plVar2 + 0x78);
    std::string::string(asStack_40,"ACTIVE_IDLE");
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aiStack_20);
    (*pcVar3)(plVar2,asStack_40,1,0,
              (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aiStack_20);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)aiStack_20);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  else {
    if (iVar1 == 0) {
      aiStack_20[0] = 100;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_38,aiStack_20);
      aiStack_20[0] = 1;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_38,aiStack_20);
      GridItemAnimation::GetAnimRig();
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      __s = "INACTIVE_UNUSED";
    }
    else {
      if (iVar1 != 2) goto LAB_03e2bd44;
      aiStack_20[0] = 100;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_38,aiStack_20);
      aiStack_20[0] = 1;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_38,aiStack_20);
      GridItemAnimation::GetAnimRig();
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      __s = "INACTIVE_USED";
    }
    pcVar3 = *(code **)(*plVar2 + 0x78);
    std::string::string(asStack_40,__s);
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)aiStack_20,(vector *)avStack_38);
    (*pcVar3)(plVar2,asStack_40,1,4,(vector<int,std::allocator<int>> *)aiStack_20);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)aiStack_20);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
LAB_03e2bd44:
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_38);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGoldTile::StaticClassInit() */

void GridItemGoldTile::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"initial",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"plant_held",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"plant_lost",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"GoldTileState");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"GridItemGoldTile");
    (*pcVar3)(plVar2,avStack_20,FUN_03e2c2e4,0x1b8,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGoldTile::StaticGetClass() */

long * GridItemGoldTile::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemGoldTile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGoldTile::GetClass() const */

long * GridItemGoldTile::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemGoldTile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGoldTile::registerForEvents() */

void __thiscall GridItemGoldTile::registerForEvents(GridItemGoldTile *this)

{
  undefined *puVar1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::registerForEvents((GridItem *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRegionChanged);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<BoardRegion*,Sexy::CBMemberTranslatorX<GridItemGoldTile,void(GridItemGoldTile::*)(BoardRegion*)>>
            ((MessageRouter *)puVar1,Message::BoardRegionResized,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<GridItemGoldTile,void(GridItemGoldTile::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayEnded,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantPlaced);
  local_b0 = local_50;
  uStack_a8 = uStack_48;
  local_a0 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<GridItemGoldTile,void(GridItemGoldTile::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlaced,&local_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGoldTile::onUpdate() */

void __thiscall GridItemGoldTile::onUpdate(GridItemGoldTile *this)

{
  char cVar1;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
     (cVar1 = FUN_03e2ae00(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x887)), cVar1 != '\0')) {
    updateTileState(this);
    updateSunSpawner(this);
    return;
  }
  return;
}

