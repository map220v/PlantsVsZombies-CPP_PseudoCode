// Class: LemonRainDropper


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LemonRainDropper::GenerateLemonRain(int, int, Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
LemonRainDropper::GenerateLemonRain
          (LemonRainDropper *this,int param_1,int param_2,RtMixedPtrBase *param_4)

{
  char cVar1;
  undefined4 uVar2;
  LemonRainDropperEffectAnim *this_00;
  ResourceInfo *pRVar3;
  SharkMinion *this_01;
  Board *this_02;
  float fVar4;
  RtMixedPtrBase aRStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"POPANIM_EFFECTS_LEMON_BULLET_HIT");
  GetPAMByName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
  if (cVar1 != '\0') {
    fVar4 = 0.0;
    this_02 = *(Board **)(gLawnApp + 0x9f0);
    if (this_02[0x119] != (Board)0x0) {
      fVar4 = (float)Board::calculateRoofOffsetZ((float)param_1);
      this_02 = *(Board **)(gLawnApp + 0x9f0);
      fVar4 = (float)(int)fVar4;
    }
    this_00 = Board::AddEffect<LemonRainDropperEffectAnim>(this_02);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
    Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
    Effect_PopAnim::SetCentered((Effect_PopAnim *)this_00,true);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,(float)(param_1 + 2),(float)(param_2 + -0x23),fVar4)
    ;
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)asStack_18,-1);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(param_4);
    if (cVar1 == '\0') {
      uVar2 = Board::MakeRenderOrder(0x64960,0,0);
      FUN_036f7560(this_00 + 0x1c,uVar2);
    }
    else {
      this_01 = (SharkMinion *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_4);
      uVar2 = SharkMinion::getRow(this_01);
      uVar2 = Board::MakeRenderOrder(0x64960,uVar2,0);
      FUN_036f7560(this_00 + 0x1c,uVar2);
    }
    std::string::string(asStack_18,"PLANTFOOD");
    Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this_00,asStack_18,0);
    std::string::~string(asStack_18);
    nop();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_18,(RtWeakPtrBase *)param_4);
    CthulhuEyeballEffect::SetCthulhuEasyButton((CthulhuEyeballEffect *)this_00,asStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    FUN_036f7574(*(undefined4 *)(this + 0x28),this_00 + 0x10c);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LemonRainDropper::Update() */

void __thiscall LemonRainDropper::Update(LemonRainDropper *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  RtWeakPtr *this_01;
  ResourceInfo *this_02;
  float *pfVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_20;
  int local_18 [2];
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  iVar12 = 0;
  local_8 = ___stack_chk_guard;
  fVar13 = (float)PVZ_T();
  local_10 = CONCAT44(local_10._4_4_,*(int *)(this + 0xc) - *(int *)(this + 8));
  local_18[0] = (int)((fVar13 - *(float *)(this + 4)) * *(float *)this) - *(int *)(this + 8);
  piVar8 = eastl::min_alt<int>(local_18,(int *)&local_10);
  iVar1 = *piVar8;
  uVar9 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar10 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end(this_00);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<GridItemVase>*,std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>>>
            (uVar9,uVar10);
  if (0 < iVar1) {
    do {
      cVar2 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
              ::empty((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                       *)this_00);
      if (cVar2 == '\0') {
        iVar6 = FUN_036f75c4(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
        uVar7 = Sexy::Rand(iVar6);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(this_00);
        local_20 = __gnu_cxx::
                   __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                   ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                *)&local_10,
                               (long)(int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f)));
        this_01 = (RtWeakPtr *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        this_02 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
        cVar2 = BalloonDropper::TargetIsValid((BoardEntity *)this_02);
        if (cVar2 == '\0') {
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_10,(__normal_iterator *)&local_20);
          std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          erase((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )this_00,local_10);
          goto LAB_0370f12c;
        }
        pfVar11 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          *)this_02);
        fVar15 = pfVar11[2];
        fVar13 = pfVar11[1];
        fVar14 = *pfVar11;
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)local_18);
        GenerateLemonRain(this,(int)fVar14,(int)(fVar13 - fVar15),
                          (RtWeakPtr<Sexy::SoundResource> *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_20);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        erase((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              this_00,local_10);
      }
      else {
LAB_0370f12c:
        uVar7 = Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8));
        uVar3 = Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
        uVar4 = BoardTransforms::GridToBoardSpaceX
                          ((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f));
        uVar5 = BoardTransforms::GridToBoardSpaceY
                          ((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f));
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_18);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)local_18);
        GenerateLemonRain(this,uVar4,uVar5,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      }
      iVar12 = iVar12 + 1;
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    } while (iVar12 != iVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LemonRainDropper::Start(float, int) */

void __thiscall LemonRainDropper::Start(LemonRainDropper *this,float param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(float *)this = (float)param_2 / param_1;
  uVar4 = PVZ_T();
  *(int *)(this + 0xc) = param_2;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = uVar4;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar4 = operator|(2,1);
  Board::GetGridBoundingRect();
  EntityFinder::GetEntitiesTouchingRectangle(avStack_20,uVar4,aRStack_30,0xffffffff,0xffffffff);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    cVar2 = BalloonDropper::TargetIsValid((BoardEntity *)*puVar3);
    if (cVar2 != '\0') {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )(this + 0x10),(RtWeakPtr *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

