// Class: LemonPlantFoodCounter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LemonPlantFoodCounter::StaticClassInit() */

void LemonPlantFoodCounter::StaticClassInit(void)

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
    std::string::string(asStack_10,"LemonPlantFoodCounter");
    (*pcVar2)(plVar1,asStack_10,FUN_03fdfb00,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LemonPlantFoodCounter::StaticGetClass() */

long * LemonPlantFoodCounter::StaticGetClass(void)

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
  uVar2 = PlantFoodCounter::StaticGetClass();
  (*pcVar3)(plVar1,"LemonPlantFoodCounter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LemonPlantFoodCounter::GetClass() const */

long * LemonPlantFoodCounter::GetClass(void)

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
  uVar2 = PlantFoodCounter::StaticGetClass();
  (*pcVar3)(plVar1,"LemonPlantFoodCounter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LemonPlantFoodCounter::TargetIsValid(BoardEntity*) */

ulong LemonPlantFoodCounter::TargetIsValid(BoardEntity *param_1)

{
  char cVar1;
  byte bVar2;
  Zombie *this;
  ulong uVar3;
  GridItem *pGVar4;
  
  if ((param_1 != (BoardEntity *)0x0) &&
     (cVar1 = RealObject::IsOnOpposingTeam(param_1,1), cVar1 != '\0')) {
    this = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    if (this == (Zombie *)0x0) {
      pGVar4 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1);
      if (pGVar4 != (GridItem *)0x0) {
        bVar2 = (**(code **)(*(long *)pGVar4 + 0x200))();
        return (ulong)bVar2;
      }
    }
    else {
      cVar1 = (**(code **)(*(long *)this + 0x328))();
      if (((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0'))
         && (cVar1 = Zombie::IsInvisible(this), cVar1 == '\0')) {
        uVar3 = BoardEntity::IsOnScreen((BoardEntity *)this);
        return uVar3;
      }
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LemonPlantFoodCounter::GenerateLemonRain(int, int, Sexy::RtWeakPtr<BoardEntity>,
   Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
LemonPlantFoodCounter::GenerateLemonRain
          (undefined8 param_1_00,int param_1,int param_2,RtMixedPtrBase *param_4,
          RtWeakPtrBase *param_5)

{
  char cVar1;
  undefined4 uVar2;
  Board *this;
  LemonRainEffectAnim *this_00;
  ResourceInfo *pRVar3;
  SharkMinion *this_01;
  float fVar4;
  RtMixedPtrBase aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"POPANIM_EFFECTS_LEMON_BULLET_HIT");
  GetPAMByName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
  if (cVar1 != '\0') {
    fVar4 = 0.0;
    this = *(Board **)(gLawnApp + 0x9f0);
    if (this[0x119] != (Board)0x0) {
      fVar4 = (float)Board::calculateRoofOffsetZ((float)param_1);
      this = *(Board **)(gLawnApp + 0x9f0);
      fVar4 = (float)(int)fVar4;
    }
    this_00 = Board::AddEffect<LemonRainEffectAnim>(this);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_28);
    Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
    Effect_PopAnim::SetCentered((Effect_PopAnim *)this_00,true);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,(float)(param_1 + 2),(float)(param_2 + -0x23),fVar4)
    ;
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)asStack_18,-1);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(param_4);
    if (cVar1 == '\0') {
      uVar2 = Board::MakeRenderOrder(0x64960,0,0);
      FUN_03fdc110(this_00 + 0x1c,uVar2);
    }
    else {
      this_01 = (SharkMinion *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_4);
      uVar2 = SharkMinion::getRow(this_01);
      uVar2 = Board::MakeRenderOrder(0x64960,uVar2,0);
      FUN_03fdc110(this_00 + 0x1c,uVar2);
    }
    std::string::string(asStack_18,"PLANTFOOD");
    Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this_00,asStack_18,0);
    std::string::~string(asStack_18);
    nop();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,param_5);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_18,(RtWeakPtrBase *)param_4);
    LemonRainEffectAnim::SetEntity(this_00,aRStack_20,asStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LemonPlantFoodCounter::LemonPlantFoodCounter() */

void __thiscall LemonPlantFoodCounter::LemonPlantFoodCounter(LemonPlantFoodCounter *this)

{
  PlantFoodCounter::PlantFoodCounter((PlantFoodCounter *)this);
  *(undefined ***)this = &PTR_GetClass_067afd90;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  return;
}


/* LemonPlantFoodCounter::StaticNew() */

LemonPlantFoodCounter * LemonPlantFoodCounter::StaticNew(void)

{
  LemonPlantFoodCounter *this;
  
  this = ::operator_new(0x38);
  LemonPlantFoodCounter(this);
  return this;
}


/* LemonPlantFoodCounter::~LemonPlantFoodCounter() */

void __thiscall LemonPlantFoodCounter::~LemonPlantFoodCounter(LemonPlantFoodCounter *this)

{
  *(undefined ***)this = &PTR_GetClass_067afd90;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x18));
  PlantFoodCounter::~PlantFoodCounter((PlantFoodCounter *)this);
  return;
}


/* LemonPlantFoodCounter::~LemonPlantFoodCounter() */

void __thiscall LemonPlantFoodCounter::~LemonPlantFoodCounter(LemonPlantFoodCounter *this)

{
  ~LemonPlantFoodCounter(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LemonPlantFoodCounter::Update() */

void __thiscall LemonPlantFoodCounter::Update(LemonPlantFoodCounter *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  RtWeakPtr *this_01;
  ResourceInfo *this_02;
  float *pfVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_28;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x18);
  iVar2 = PlantFoodCounter::GetNumShotsToFireSinceLastUpdate((PlantFoodCounter *)this);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar9 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<GridItemVase>*,std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>>>
            (uVar8,uVar9);
  if (0 < iVar2) {
    iVar11 = 0;
    do {
      cVar1 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
              ::empty((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                       *)this_00);
      if (cVar1 == '\0') {
        iVar6 = FUN_03fdc3d8(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
        uVar7 = Sexy::Rand(iVar6);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(this_00);
        local_28 = __gnu_cxx::
                   __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                   ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                *)&local_10,
                               (long)(int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f)));
        this_01 = (RtWeakPtr *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
        this_02 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
        cVar1 = TargetIsValid((BoardEntity *)this_02);
        if (cVar1 == '\0') {
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_10,(__normal_iterator *)&local_28);
          std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          erase((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )this_00,local_10);
          goto LAB_03fdff98;
        }
        pfVar10 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          *)this_02);
        fVar14 = pfVar10[2];
        fVar12 = pfVar10[1];
        fVar13 = *pfVar10;
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)a_Stack_20);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)(this + 0x30));
        GenerateLemonRain(this,(int)fVar13,(int)(fVar12 - fVar14),aRStack_18,
                          (RtWeakPtr<Sexy::SoundResource> *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20)
        ;
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_28);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        erase((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              this_00,local_10);
      }
      else {
LAB_03fdff98:
        uVar7 = Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8));
        uVar3 = Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
        uVar4 = BoardTransforms::GridToBoardSpaceX
                          ((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f));
        uVar5 = BoardTransforms::GridToBoardSpaceY
                          ((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f));
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (a_Stack_20);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)a_Stack_20);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)(this + 0x30));
        GenerateLemonRain(this,uVar4,uVar5,aRStack_18,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20)
        ;
      }
      iVar11 = iVar11 + 1;
      StreamBuffer::SetBuffReadPos((StreamBuffer *)this,1);
    } while (iVar11 != iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LemonPlantFoodCounter::Start(float, int, Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
LemonPlantFoodCounter::Start
          (float param_1,LemonPlantFoodCounter *this,int param_2,RtWeakPtr *param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFoodCounter::Start((PlantFoodCounter *)this,param_1,param_2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x30),param_4);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = operator|(2,4);
  Board::GetGridBoundingRect();
  EntityFinder::GetEntitiesTouchingRectangle(avStack_20,uVar3,aRStack_30,0xffffffff,0xffffffff);
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
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    cVar2 = TargetIsValid((BoardEntity *)*puVar4);
    if (cVar2 != '\0') {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )(this + 0x18),(RtWeakPtr *)aRStack_30);
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

