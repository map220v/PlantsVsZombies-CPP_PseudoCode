// Class: GridItemProtectorShieldSegmentWaveGenerator


/* GridItemProtectorShieldSegmentWaveGenerator::RecordPreMotion(Sexy::SexyVector3 const&) */

void __thiscall
GridItemProtectorShieldSegmentWaveGenerator::RecordPreMotion
          (GridItemProtectorShieldSegmentWaveGenerator *this,SexyVector3 *param_1)

{
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1ac),param_1);
  return;
}


/* GridItemProtectorShieldSegmentWaveGenerator::canCheckPlants() */

bool __thiscall
GridItemProtectorShieldSegmentWaveGenerator::canCheckPlants
          (GridItemProtectorShieldSegmentWaveGenerator *this)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar1 = BoardTransforms::GridToBoardSpaceX(iVar1 + -1);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  return *pfVar3 <= (float)(iVar1 + iVar2 / 2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShieldSegmentWaveGenerator::isPlantAlreadyPushed(Sexy::RtWeakPtr<Plant>) */

void __thiscall
GridItemProtectorShieldSegmentWaveGenerator::isPlantAlreadyPushed
          (GridItemProtectorShieldSegmentWaveGenerator *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1b8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x1b8));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    this_00 = (RtWeakPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_00,param_2);
    if (cVar1 != '\0') break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShieldSegmentWaveGenerator::StaticClassInit() */

void GridItemProtectorShieldSegmentWaveGenerator::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemProtectorShieldSegmentWaveGenerator");
    (*pcVar2)(plVar1,asStack_10,FUN_04c99f18,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemProtectorShieldSegmentWaveGenerator::StaticGetClass() */

long * GridItemProtectorShieldSegmentWaveGenerator::StaticGetClass(void)

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
  uVar2 = GridItemProtectorShieldSegment::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemProtectorShieldSegmentWaveGenerator",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemProtectorShieldSegmentWaveGenerator::GetClass() const */

long * GridItemProtectorShieldSegmentWaveGenerator::GetClass(void)

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
  uVar2 = GridItemProtectorShieldSegment::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemProtectorShieldSegmentWaveGenerator",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShieldSegmentWaveGenerator::flickPlant(Plant*) */

void __thiscall
GridItemProtectorShieldSegmentWaveGenerator::flickPlant
          (GridItemProtectorShieldSegmentWaveGenerator *this,Plant *param_1)

{
  char cVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float local_40;
  float local_3c;
  FastCurve aFStack_38 [4];
  float local_34;
  FastCurve aFStack_30 [8];
  float local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18 [2];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)RandRangeFloat(30.0,85.0);
  fVar3 = (float)Sexy::SexyMath::DegToRad(fVar3);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  Sexy::FastCurve::SetOutRange(aFStack_38,*pfVar2,pfVar2[2]);
  fVar4 = cosf(fVar3);
  fVar3 = sinf(fVar3);
  Sexy::FastCurve::SetOutRange(aFStack_30,fVar4,fVar3);
  Sexy::FastCurve::SetOutRange((FastCurve *)local_28,850.0,0.0);
  EATextSquish::Vec3::Vec3((Vec3 *)local_18,local_28[0],pfVar2[1],local_34);
  uVar5 = 0x3f800000;
  local_40 = 0.0;
  local_3c = 0.0;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,0.0,1.0);
  cVar1 = LineLineIntersect((SexyVector2 *)aFStack_38,(SexyVector2 *)aFStack_30,
                            (SexyVector2 *)local_28,(SexyVector2 *)&local_20,&local_40,&local_3c,
                            0.0001);
  if (cVar1 != '\0') {
    local_20 = Sexy::SexyVector2::operator*((SexyVector2 *)aFStack_30,local_40);
    local_1c = uVar5;
    local_18[0] = Sexy::SexyVector2::operator+((SexyVector2 *)aFStack_38,(SexyVector2 *)&local_20);
    local_10 = uVar5;
  }
  Plant::KillPlant(param_1,0,0,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShieldSegmentWaveGenerator::onDestroy() */

void __thiscall
GridItemProtectorShieldSegmentWaveGenerator::onDestroy
          (GridItemProtectorShieldSegmentWaveGenerator *this)

{
  bool bVar1;
  RtWeakPtr *this_00;
  Plant *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::onDestroy((GridItem *)this);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1b8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x1b8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      this_01 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Plant::SetIsControlled(this_01,false);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemProtectorShieldSegmentWaveGenerator::GridItemProtectorShieldSegmentWaveGenerator() */

void __thiscall
GridItemProtectorShieldSegmentWaveGenerator::GridItemProtectorShieldSegmentWaveGenerator
          (GridItemProtectorShieldSegmentWaveGenerator *this)

{
  GridItemProtectorShieldSegment::GridItemProtectorShieldSegment
            ((GridItemProtectorShieldSegment *)this);
  *(undefined ***)this = &PTR_GetClass_06996770;
  *(undefined ***)(this + 0x10) = &PTR__GridItemProtectorShieldSegmentWaveGenerator_06996a18;
  DVec3::DVec3((DVec3 *)(this + 0x1ac));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  return;
}


/* GridItemProtectorShieldSegmentWaveGenerator::StaticNew() */

GridItemProtectorShieldSegmentWaveGenerator *
GridItemProtectorShieldSegmentWaveGenerator::StaticNew(void)

{
  GridItemProtectorShieldSegmentWaveGenerator *this;
  
  this = ::operator_new(0x1d0);
  GridItemProtectorShieldSegmentWaveGenerator(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShieldSegmentWaveGenerator::CheckGridPlants(int, int) */

void __thiscall
GridItemProtectorShieldSegmentWaveGenerator::CheckGridPlants
          (GridItemProtectorShieldSegmentWaveGenerator *this,int param_1,int param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  Plant *this_00;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,1,param_1,param_2);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)*puVar2);
    if (((bVar1) && (nop(), this_00 != (Plant *)0x0)) && (0.0 < *(float *)(this_00 + 0xd8))) {
      Plant::beThrown(this_00);
      MessageRouter::Post<Plant*,Plant*>
                ((MessageRouter *)gMessageRouter,Message::PlantFlickOffByProtectorShield,this_00);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShieldSegmentWaveGenerator::checkEdge() */

void __thiscall
GridItemProtectorShieldSegmentWaveGenerator::checkEdge
          (GridItemProtectorShieldSegmentWaveGenerator *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  RtWeakPtr *this_01;
  Plant *pPVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = canCheckPlants(this);
  if (cVar1 == '\0') {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x1b8);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2)
    {
      this_01 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
      if (bVar2) {
        pPVar3 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        Plant::SetIsControlled(pPVar3,false);
        pPVar3 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        flickPlant(this,pPVar3);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::clear
              ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemProtectorShieldSegmentWaveGenerator::~GridItemProtectorShieldSegmentWaveGenerator() */

void __thiscall
GridItemProtectorShieldSegmentWaveGenerator::~GridItemProtectorShieldSegmentWaveGenerator
          (GridItemProtectorShieldSegmentWaveGenerator *this)

{
  *(undefined ***)this = &PTR_GetClass_06996770;
  *(undefined ***)(this + 0x10) = &PTR__GridItemProtectorShieldSegmentWaveGenerator_06996a18;
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x1b8)
            );
  GridItemProtectorShieldSegment::~GridItemProtectorShieldSegment
            ((GridItemProtectorShieldSegment *)this);
  return;
}


/* non-virtual thunk to
   GridItemProtectorShieldSegmentWaveGenerator::~GridItemProtectorShieldSegmentWaveGenerator() */

void __thiscall
GridItemProtectorShieldSegmentWaveGenerator::~GridItemProtectorShieldSegmentWaveGenerator
          (GridItemProtectorShieldSegmentWaveGenerator *this)

{
  ~GridItemProtectorShieldSegmentWaveGenerator(this + -0x10);
  return;
}


/* GridItemProtectorShieldSegmentWaveGenerator::~GridItemProtectorShieldSegmentWaveGenerator() */

void __thiscall
GridItemProtectorShieldSegmentWaveGenerator::~GridItemProtectorShieldSegmentWaveGenerator
          (GridItemProtectorShieldSegmentWaveGenerator *this)

{
  ~GridItemProtectorShieldSegmentWaveGenerator(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   GridItemProtectorShieldSegmentWaveGenerator::~GridItemProtectorShieldSegmentWaveGenerator() */

void __thiscall
GridItemProtectorShieldSegmentWaveGenerator::~GridItemProtectorShieldSegmentWaveGenerator
          (GridItemProtectorShieldSegmentWaveGenerator *this)

{
  ~GridItemProtectorShieldSegmentWaveGenerator(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShieldSegmentWaveGenerator::onSetPosition(Sexy::SexyVector3 const&) */

void GridItemProtectorShieldSegmentWaveGenerator::onSetPosition(SexyVector3 *param_1)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  RtWeakPtrBase *pRVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  fVar13 = *(float *)(param_1 + 0x1ac);
  local_8 = ___stack_chk_guard;
  if ((fVar13 != 0.0) || (*(float *)(param_1 + 0x1b0) != 0.0)) {
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    fVar13 = *pfVar5 - fVar13;
    if (0.0 < fVar13) {
      uVar9 = *(undefined8 *)(param_1 + 0x1b8);
      iVar4 = FUN_04c99830(uVar9,*(undefined8 *)(param_1 + 0x1c0));
      uVar1 = iVar4 - 1;
      if (-1 < (int)uVar1) {
        lVar10 = (long)(int)uVar1 + -1;
        lVar2 = lVar10;
        lVar12 = (long)(int)uVar1;
        while( true ) {
          lVar11 = lVar2;
          pRVar6 = (RtWeakPtrBase *)FUN_04c9983c(uVar9,lVar12);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar6);
          cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30);
          if (cVar3 == '\0') {
            local_28 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)(param_1 + 0x1b8));
            local_20 = __gnu_cxx::
                       __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                       ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                    *)&local_28,lVar12);
            __gnu_cxx::
            __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
            ::__normal_iterator<Sexy::RenderStateManager::Context**>
                      ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        *)&local_18,(__normal_iterator *)&local_20);
            std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::erase
                      ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                       (param_1 + 0x1b8),local_18);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
          }
          else {
            this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
            puVar7 = (undefined8 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost(this);
            local_18._0_4_ = (float)*puVar7;
            local_10 = *(undefined4 *)(puVar7 + 1);
            local_18 = CONCAT44((int)((ulong)*puVar7 >> 0x20),fVar13 + (float)local_18);
            plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
            (**(code **)(*plVar8 + 0x78))
                      (plVar8,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                               *)&local_18);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
          }
          if (lVar11 == lVar10 - (ulong)uVar1) break;
          uVar9 = *(undefined8 *)(param_1 + 0x1b8);
          lVar2 = lVar11 + -1;
          lVar12 = lVar11;
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShieldSegmentWaveGenerator::checkDistancedPlants() */

void __thiscall
GridItemProtectorShieldSegmentWaveGenerator::checkDistancedPlants
          (GridItemProtectorShieldSegmentWaveGenerator *this)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  RtWeakPtrBase *pRVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar6;
  float *pfVar7;
  Plant *this_01;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar8 = *(undefined8 *)(this + 0x1b8);
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_04c99830(uVar8,*(undefined8 *)(this + 0x1c0));
  uVar1 = iVar4 - 1;
  if ((int)uVar1 < 0) {
LAB_04c9a3d8:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar9 = (long)(int)uVar1 + -1;
  lVar2 = lVar9;
  lVar11 = (long)(int)uVar1;
  do {
    lVar10 = lVar2;
    pRVar5 = (RtWeakPtrBase *)FUN_04c9983c(uVar8,lVar11);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,pRVar5);
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_28);
    if (cVar3 == '\0') {
LAB_04c9a314:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    }
    else {
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_00);
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this);
      if (*pfVar7 < *pfVar6 + 80.0) goto LAB_04c9a314;
      this_01 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      Plant::SetIsControlled(this_01,false);
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x1b8));
      local_18 = __gnu_cxx::
                 __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                 ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                              *)&local_20,lVar11);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::erase
                ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                 (this + 0x1b8),local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    }
    if (lVar10 == lVar9 - (ulong)uVar1) goto LAB_04c9a3d8;
    uVar8 = *(undefined8 *)(this + 0x1b8);
    lVar2 = lVar10 + -1;
    lVar11 = lVar10;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShieldSegmentWaveGenerator::OnCollideEntity(BoardEntity*) */

void __thiscall
GridItemProtectorShieldSegmentWaveGenerator::OnCollideEntity
          (GridItemProtectorShieldSegmentWaveGenerator *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  Plant *pPVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((param_1 != (BoardEntity *)0x0) &&
       (bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1), !bVar1)) &&
      (bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1), !bVar1)) &&
     ((bVar1 = Sexy::RtObject::IsA<ZombieTowerDefendBasic>((RtObject *)param_1), !bVar1 &&
      (bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)param_1), bVar1)))) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    pPVar3 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    cVar2 = Plant::IsControlled(pPVar3);
    if (cVar2 == '\0') {
      uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      cVar2 = RealObject::IsOnOpposingTeam(uVar4,2);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_20);
        cVar2 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)this);
        if (cVar2 == '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        }
        else {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_20);
          cVar2 = isPlantAlreadyPushed(this,aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          if (cVar2 == '\0') {
            std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
                      ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                       (this + 0x1b8),(RtWeakPtr *)aRStack_20);
            pPVar3 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
            Plant::SetIsControlled(pPVar3,true);
          }
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShieldSegmentWaveGenerator::checkPlants() */

void __thiscall
GridItemProtectorShieldSegmentWaveGenerator::checkPlants
          (GridItemProtectorShieldSegmentWaveGenerator *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = canCheckPlants(this);
  if (cVar1 != '\0') {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    uVar3 = SharkMinion::getRow((SharkMinion *)this);
    uVar6 = *(undefined4 *)(this + 0x1c);
    uVar5 = FUN_04c99844(*(undefined4 *)(this + 0x18),uVar6,*(undefined4 *)(this + 0x20));
    local_28 = CONCAT44(uVar6,uVar5);
    FUN_04c9982c(*(undefined4 *)(this + 0x1a8));
    EntityFinder::GetEntitiesTouchingCircle2D
              (avStack_20,1,(__normal_iterator *)&local_28,uVar3,uVar3);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      OnCollideEntity(this,(BoardEntity *)*puVar4);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemProtectorShieldSegmentWaveGenerator::onUpdate() */

void __thiscall
GridItemProtectorShieldSegmentWaveGenerator::onUpdate
          (GridItemProtectorShieldSegmentWaveGenerator *this)

{
  int iVar1;
  int iVar2;
  
  GridItem::onUpdate((GridItem *)this);
  checkDistancedPlants(this);
  checkEdge(this);
  checkPlants(this);
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar2 = SharkMinion::getRow((SharkMinion *)this);
  CheckGridPlants(this,iVar1,iVar2);
  return;
}

