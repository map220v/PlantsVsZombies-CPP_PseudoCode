// Class: GridItemProtectorShieldSegmentAlpha


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShieldSegmentAlpha::StaticClassInit() */

void GridItemProtectorShieldSegmentAlpha::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemProtectorShieldSegmentAlpha");
    (*pcVar2)(plVar1,asStack_10,FUN_03e12cb8,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemProtectorShieldSegmentAlpha::StaticGetClass() */

long * GridItemProtectorShieldSegmentAlpha::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemProtectorShieldSegmentAlpha",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemProtectorShieldSegmentAlpha::GetClass() const */

long * GridItemProtectorShieldSegmentAlpha::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemProtectorShieldSegmentAlpha",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShieldSegmentAlpha::onDestroy() */

void __thiscall
GridItemProtectorShieldSegmentAlpha::onDestroy(GridItemProtectorShieldSegmentAlpha *this)

{
  bool bVar1;
  RtWeakPtr *this_00;
  Zombie *pZVar2;
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
      pZVar2 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Zombie::SetIsControlled(pZVar2,false);
      pZVar2 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Zombie::EndCondition(pZVar2,0x18);
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


/* GridItemProtectorShieldSegmentAlpha::GridItemProtectorShieldSegmentAlpha() */

void __thiscall
GridItemProtectorShieldSegmentAlpha::GridItemProtectorShieldSegmentAlpha
          (GridItemProtectorShieldSegmentAlpha *this)

{
  GridItemProtectorShieldSegment::GridItemProtectorShieldSegment
            ((GridItemProtectorShieldSegment *)this);
  *(undefined ***)this = &PTR_GetClass_06783930;
  *(undefined ***)(this + 0x10) = &PTR__GridItemProtectorShieldSegmentAlpha_06783bd8;
  DVec3::DVec3((DVec3 *)(this + 0x1ac));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  return;
}


/* GridItemProtectorShieldSegmentAlpha::StaticNew() */

GridItemProtectorShieldSegmentAlpha * GridItemProtectorShieldSegmentAlpha::StaticNew(void)

{
  GridItemProtectorShieldSegmentAlpha *this;
  
  this = ::operator_new(0x1d0);
  GridItemProtectorShieldSegmentAlpha(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShieldSegmentAlpha::flickZombie(Zombie*) */

void __thiscall
GridItemProtectorShieldSegmentAlpha::flickZombie
          (GridItemProtectorShieldSegmentAlpha *this,Zombie *param_1)

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
  Zombie::FlickOff((SexyVector3 *)param_1,500.0,-500.0);
  MessageRouter::Post<Zombie*,Zombie*>
            ((MessageRouter *)gMessageRouter,Message::ShieldArtifactKillZombie,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShieldSegmentAlpha::checkEdge() */

void __thiscall
GridItemProtectorShieldSegmentAlpha::checkEdge(GridItemProtectorShieldSegmentAlpha *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  RtWeakPtr *this_01;
  Zombie *pZVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = GridItemProtectorShieldSegmentWaveGenerator::canCheckPlants
                    ((GridItemProtectorShieldSegmentWaveGenerator *)this);
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
        pZVar3 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        Zombie::SetIsControlled(pZVar3,false);
        pZVar3 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        Zombie::EndCondition(pZVar3,0x18);
        pZVar3 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        flickZombie(this,pZVar3);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemProtectorShieldSegmentAlpha::~GridItemProtectorShieldSegmentAlpha() */

void __thiscall
GridItemProtectorShieldSegmentAlpha::~GridItemProtectorShieldSegmentAlpha
          (GridItemProtectorShieldSegmentAlpha *this)

{
  *(undefined ***)this = &PTR_GetClass_06783930;
  *(undefined ***)(this + 0x10) = &PTR__GridItemProtectorShieldSegmentAlpha_06783bd8;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1b8));
  GridItemProtectorShieldSegment::~GridItemProtectorShieldSegment
            ((GridItemProtectorShieldSegment *)this);
  return;
}


/* non-virtual thunk to GridItemProtectorShieldSegmentAlpha::~GridItemProtectorShieldSegmentAlpha()
    */

void __thiscall
GridItemProtectorShieldSegmentAlpha::~GridItemProtectorShieldSegmentAlpha
          (GridItemProtectorShieldSegmentAlpha *this)

{
  ~GridItemProtectorShieldSegmentAlpha(this + -0x10);
  return;
}


/* GridItemProtectorShieldSegmentAlpha::~GridItemProtectorShieldSegmentAlpha() */

void __thiscall
GridItemProtectorShieldSegmentAlpha::~GridItemProtectorShieldSegmentAlpha
          (GridItemProtectorShieldSegmentAlpha *this)

{
  ~GridItemProtectorShieldSegmentAlpha(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemProtectorShieldSegmentAlpha::~GridItemProtectorShieldSegmentAlpha()
    */

void __thiscall
GridItemProtectorShieldSegmentAlpha::~GridItemProtectorShieldSegmentAlpha
          (GridItemProtectorShieldSegmentAlpha *this)

{
  ~GridItemProtectorShieldSegmentAlpha(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShieldSegmentAlpha::IsValidTarget(Sexy::RtWeakPtr<Zombie>) const */

void __thiscall
GridItemProtectorShieldSegmentAlpha::IsValidTarget
          (undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  Zombie *pZVar7;
  string *psVar8;
  TitleStatus aTStack_70 [24];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = Zombie::HasCondition(uVar5,0x27);
  if (cVar1 == '\0') {
    uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar5,0x65);
    if (cVar1 == '\0') {
      uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      cVar1 = Zombie::HasCondition(uVar5,0x2c);
      if (cVar1 == '\0') {
        uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        cVar1 = Zombie::HasCondition(uVar5,0x29);
        if (cVar1 == '\0') {
          uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          cVar1 = Zombie::HasCondition(uVar5,0x55);
          if (cVar1 == '\0') {
            plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            cVar1 = (**(code **)(*plVar6 + 0x4d8))();
            if (cVar1 == '\0') {
              plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              cVar1 = (**(code **)(*plVar6 + 0x508))();
              if (cVar1 == '\0') {
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                Zombie::GetCurrentTitleStatus();
                bVar3 = 0;
                if (local_58 == '\0') {
                  pZVar7 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  iVar4 = Zombie::getZombieStateSerialization(pZVar7);
                  if (iVar4 != 0x14) {
                    pZVar7 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                    iVar4 = Zombie::getZombieStateSerialization(pZVar7);
                    if (iVar4 != 0x13) {
                      pZVar7 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                      psVar8 = (string *)Zombie::GetTypeName(pZVar7);
                      bVar2 = std::operator!=(psVar8,"wave_airbubble");
                      if (bVar2) {
                        uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                        bVar3 = Zombie::HasCondition(uVar5,0x92);
                        bVar3 = bVar3 ^ 1;
                      }
                    }
                  }
                }
                TitleStatus::~TitleStatus(aTStack_70);
                goto LAB_03e131f8;
              }
            }
          }
        }
      }
    }
  }
  bVar3 = 0;
LAB_03e131f8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShieldSegmentAlpha::onSetPosition(Sexy::SexyVector3 const&) */

void GridItemProtectorShieldSegmentAlpha::onSetPosition(SexyVector3 *param_1)

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
      iVar4 = FUN_03e12388(uVar9,*(undefined8 *)(param_1 + 0x1c0));
      uVar1 = iVar4 - 1;
      if (-1 < (int)uVar1) {
        lVar10 = (long)(int)uVar1 + -1;
        lVar2 = lVar10;
        lVar12 = (long)(int)uVar1;
        while( true ) {
          lVar11 = lVar2;
          pRVar6 = (RtWeakPtrBase *)FUN_03e12394(uVar9,lVar12);
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
            std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
                      ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
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
/* GridItemProtectorShieldSegmentAlpha::checkDistancedZombies() */

void __thiscall
GridItemProtectorShieldSegmentAlpha::checkDistancedZombies
          (GridItemProtectorShieldSegmentAlpha *this)

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
  Zombie *pZVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar9 = *(undefined8 *)(this + 0x1b8);
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_03e12388(uVar9,*(undefined8 *)(this + 0x1c0));
  uVar1 = iVar4 - 1;
  if ((int)uVar1 < 0) {
LAB_03e13640:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar10 = (long)(int)uVar1 + -1;
  lVar2 = lVar10;
  lVar12 = (long)(int)uVar1;
  do {
    lVar11 = lVar2;
    pRVar5 = (RtWeakPtrBase *)FUN_03e12394(uVar9,lVar12);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,pRVar5);
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_28);
    if (cVar3 == '\0') {
LAB_03e1356c:
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
      if (*pfVar7 < *pfVar6 + 80.0) goto LAB_03e1356c;
      pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      Zombie::SetIsControlled(pZVar8,false);
      pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      Zombie::EndCondition(pZVar8,0x18);
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x1b8));
      local_18 = __gnu_cxx::
                 __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                 ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                              *)&local_20,lVar12);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                 (this + 0x1b8),local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    }
    if (lVar11 == lVar10 - (ulong)uVar1) goto LAB_03e13640;
    uVar9 = *(undefined8 *)(this + 0x1b8);
    lVar2 = lVar11 + -1;
    lVar12 = lVar11;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShieldSegmentAlpha::OnCollideEntity(BoardEntity*) */

void __thiscall
GridItemProtectorShieldSegmentAlpha::OnCollideEntity
          (GridItemProtectorShieldSegmentAlpha *this,BoardEntity *param_1)

{
  undefined *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  Zombie *pZVar5;
  undefined8 uVar6;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar7;
  long lVar8;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((param_1 != (BoardEntity *)0x0) &&
       (bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1), !bVar1)) &&
      (bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1), !bVar1)) &&
     ((bVar1 = Sexy::RtObject::IsA<ZombieTowerDefendBasic>((RtObject *)param_1), !bVar1 &&
      (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)))) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    cVar2 = (**(code **)(*plVar4 + 0x328))();
    if (cVar2 == '\0') {
      pZVar5 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
      ;
      cVar2 = Zombie::IsBerserk(pZVar5);
      if (cVar2 == '\0') {
        pZVar5 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        cVar2 = Zombie::HasFogImmune(pZVar5);
        if (cVar2 == '\0') {
          pZVar5 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
          cVar2 = Zombie::IsControlled(pZVar5);
          if (cVar2 == '\0') {
            uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
            cVar2 = RealObject::IsOnOpposingTeam(uVar6,1);
            if (cVar2 != '\0') {
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        (aRStack_18,(RtWeakPtrBase *)aRStack_20);
              cVar2 = IsValidTarget(this,aRStack_18);
              if (cVar2 == '\0') {
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
              }
              else {
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_20)
                ;
                cVar2 = GridItemProtectorShieldSegmentWaveGenerator::isPlantAlreadyPushed
                                  ((GridItemProtectorShieldSegmentWaveGenerator *)this,aRStack_10);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
                if (cVar2 == '\0') {
                  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::
                  push_back((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
                             *)(this + 0x1b8),(RtWeakPtr *)aRStack_20);
                  pZVar5 = (Zombie *)
                           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
                  Zombie::SetIsControlled(pZVar5,true);
                  uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
                  Zombie::ApplyCondition((Zombie *)0x47c34f80,0,uVar6,0x18,1);
                  pZVar5 = (Zombie *)
                           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
                  pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar5);
                  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
                  bVar1 = std::operator!=((string *)(lVar8 + 8),"chicken");
                  if (bVar1) {
                    pZVar5 = (Zombie *)
                             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
                    pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar5);
                    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
                    bVar1 = std::operator!=((string *)(lVar8 + 8),"iceage_weasel");
                    this_00 = gMessageRouter;
                    if (bVar1) {
                      pZVar5 = (Zombie *)
                               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
                      iVar3 = Zombie::GetSizeType(pZVar5);
                      MessageRouter::Post<int,int>
                                ((MessageRouter *)this_00,Message::NotifyShieldBlock,iVar3);
                    }
                  }
                }
              }
            }
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
/* GridItemProtectorShieldSegmentAlpha::checkZombies() */

void __thiscall
GridItemProtectorShieldSegmentAlpha::checkZombies(GridItemProtectorShieldSegmentAlpha *this)

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
  cVar1 = GridItemProtectorShieldSegmentWaveGenerator::canCheckPlants
                    ((GridItemProtectorShieldSegmentWaveGenerator *)this);
  if (cVar1 != '\0') {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    uVar3 = SharkMinion::getRow((SharkMinion *)this);
    uVar6 = *(undefined4 *)(this + 0x1c);
    uVar5 = FUN_03e123ac(*(undefined4 *)(this + 0x18),uVar6,*(undefined4 *)(this + 0x20));
    local_28 = CONCAT44(uVar6,uVar5);
    FUN_03e12384(*(undefined4 *)(this + 0x1a8));
    EntityFinder::GetEntitiesTouchingCircle2D
              (avStack_20,2,(__normal_iterator *)&local_28,uVar3,uVar3);
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


/* GridItemProtectorShieldSegmentAlpha::onUpdate() */

void __thiscall
GridItemProtectorShieldSegmentAlpha::onUpdate(GridItemProtectorShieldSegmentAlpha *this)

{
  GridItem::onUpdate((GridItem *)this);
  checkDistancedZombies(this);
  checkEdge(this);
  checkZombies(this);
  return;
}

