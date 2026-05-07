// Class: GridItemSap


/* GridItemSap::CalcRenderOrder() const */

void __thiscall GridItemSap::CalcRenderOrder(GridItemSap *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61a8a,0,uVar1);
  return;
}


/* non-virtual thunk to GridItemSap::CalcRenderOrder() const */

void __thiscall GridItemSap::CalcRenderOrder(GridItemSap *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSap::StaticClassInit() */

void GridItemSap::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemSap");
    (*pcVar2)(plVar1,asStack_10,FUN_0409d4c0,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSap::StaticGetClass() */

long * GridItemSap::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSap",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSap::GetClass() const */

long * GridItemSap::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSap",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSap::GridItemSap() */

void __thiscall GridItemSap::GridItemSap(GridItemSap *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_067d0220;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSap_067d04d8;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  *(undefined4 *)(this + 0x1b0) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  *(undefined4 *)(this + 0x1d0) = 0;
  return;
}


/* GridItemSap::StaticNew() */

GridItemSap * GridItemSap::StaticNew(void)

{
  GridItemSap *this;
  
  this = ::operator_new(0x1d8);
  GridItemSap(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSap::isZombieTypeBlacklisted(std::string const&) */

void __thiscall GridItemSap::isZombieTypeBlacklisted(GridItemSap *this,string *param_1)

{
  char cVar1;
  GridItemSapProps *pGVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemSapProps>();
  local_18 = FUN_0409bce4(*(undefined8 *)(pGVar2 + 0xf0));
  local_10 = FUN_0409bd34(*(undefined8 *)(pGVar2 + 0xf8));
  do {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)cVar1) {
LAB_0409c5f8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1);
    }
    uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_05475d88(asStack_20,uVar3);
    cVar1 = std::operator==(asStack_20,param_1);
    if (cVar1 != '\0') {
      std::string::~string(asStack_20);
      goto LAB_0409c5f8;
    }
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSap::setState(GridItemSapState) */

void __thiscall GridItemSap::setState(GridItemSap *this,int param_2)

{
  PopAnimRig *pPVar1;
  char *__s;
  PopAnimRig *local_a0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 2) {
    param_2 = 3;
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    std::string::string(asStack_58,"animation2");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_58,0,(DummyInit *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  }
  else {
    if (param_2 == 4) {
      GridItemAnimation::GetAnimRig();
      local_a0 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      std::string::string(asStack_68,"animation3");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      __s = "onSplatFaded";
    }
    else {
      if (param_2 != 1) goto LAB_0409c67c;
      GridItemAnimation::GetAnimRig();
      local_a0 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      std::string::string(asStack_68,"animation");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      __s = "onSplatFinished";
    }
    std::string::string(asStack_58,__s);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(local_a0,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  }
LAB_0409c67c:
  *(int *)(this + 0x1ac) = param_2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSap::ResetTimer() */

void __thiscall GridItemSap::ResetTimer(GridItemSap *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  setState(this,2);
  return;
}


/* GridItemSap::OnWashedOut() */

void __thiscall GridItemSap::OnWashedOut(GridItemSap *this)

{
  if (*(int *)(this + 0x1ac) != 4) {
    setState(this,4);
    return;
  }
  return;
}


/* GridItemSap::onGridItemInitialize() */

void __thiscall GridItemSap::onGridItemInitialize(GridItemSap *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  setState(this,1);
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  uVar1 = GeneEnhancement::GetGeneEnhancementSkillBoost(0xe,0);
  *(undefined4 *)(this + 0x1d0) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSap::onSplatFinished(std::string const&) */

void GridItemSap::onSplatFinished(string *param_1)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  std::string::string(asStack_40,"animation2");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  setState((GridItemSap *)param_1,3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSap::onSplatFaded(std::string const&) */

void GridItemSap::onSplatFaded(string *param_1)

{
  setState((GridItemSap *)param_1,5);
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSap::applySap() */

void __thiscall GridItemSap::applySap(GridItemSap *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  GridItemSapProps *pGVar10;
  undefined8 *puVar11;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar12;
  undefined8 uVar13;
  Zombie *pZVar14;
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar8 = FUN_0409a1f4(*(undefined4 *)(this + 0x130));
  pGVar10 = GridItem::GetProps<GridItemSapProps>();
  iVar1 = *(int *)(pGVar10 + 0xd4);
  iVar9 = FUN_0409a1f8(*(undefined4 *)(this + 0x134));
  pGVar10 = GridItem::GetProps<GridItemSapProps>();
  iVar2 = *(int *)(pGVar10 + 0xd8);
  pGVar10 = GridItem::GetProps<GridItemSapProps>();
  iVar3 = *(int *)(pGVar10 + 0xd0);
  pGVar10 = GridItem::GetProps<GridItemSapProps>();
  iVar4 = *(int *)(pGVar10 + 0xd4);
  pGVar10 = GridItem::GetProps<GridItemSapProps>();
  iVar5 = *(int *)(pGVar10 + 0xd8);
  pGVar10 = GridItem::GetProps<GridItemSapProps>();
  Sexy::Insets::Insets
            ((Insets *)local_30,iVar8 - iVar1,iVar9 - iVar2,iVar3 + 1 + iVar4,
             iVar5 + 1 + *(int *)(pGVar10 + 0xdc));
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,(Insets *)local_30);
  pGVar10 = GridItem::GetProps<GridItemSapProps>();
                    /* WARNING: Load size is inaccurate */
  pZVar14._0_4_ = *(Zombie **)(pGVar10 + 0xe4);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
  while (bVar6 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_30)
        , bVar6) {
    puVar11 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    cVar7 = RealObject::IsOnOpposingTeam((RealObject *)*puVar11,(RealObject *)this);
    if (cVar7 != '\0') {
      nop();
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_00);
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      cVar7 = isZombieTypeBlacklisted(this,(string *)(lVar12 + 8));
      if ((((cVar7 == '\0') && (cVar7 = Zombie::IsOnGround(this_00), cVar7 != '\0')) &&
          (cVar7 = Zombie::IsBerserk(this_00), cVar7 == '\0')) &&
         (((cVar7 = Zombie::HasFogImmune(this_00), cVar7 == '\0' &&
           (cVar7 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar7 == '\0')) &&
          (cVar7 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar7 == '\0')))) {
        Zombie::ApplyCondition(pZVar14._0_4_,0,this_00,0x28,1);
        uVar13 = Zombie::GetConditionTracker(this_00);
                    /* WARNING: Load size is inaccurate */
        ZombieConditionTracker::SetAdditionalValue
                  (*(ZombieConditionTracker **)(this + 0x1d0),uVar13,0x28);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSap::~GridItemSap() */

void __thiscall GridItemSap::~GridItemSap(GridItemSap *this)

{
  *(undefined ***)this = &PTR_GetClass_067d0220;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSap_067d04d8;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1b8));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemSap::~GridItemSap() */

void __thiscall GridItemSap::~GridItemSap(GridItemSap *this)

{
  ~GridItemSap(this + -0x10);
  return;
}


/* GridItemSap::~GridItemSap() */

void __thiscall GridItemSap::~GridItemSap(GridItemSap *this)

{
  ~GridItemSap(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemSap::~GridItemSap() */

void __thiscall GridItemSap::~GridItemSap(GridItemSap *this)

{
  ~GridItemSap(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSap::UpdateAmberZombie() */

void __thiscall GridItemSap::UpdateAmberZombie(GridItemSap *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  RtMixedPtrBase *this_01;
  long *plVar5;
  undefined8 local_30;
  Insets aIStack_28 [16];
  undefined8 local_18 [2];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1b8);
  local_8 = ___stack_chk_guard;
  iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar4 = SharkMinion::getRow((SharkMinion *)this);
  Sexy::Insets::Insets(aIStack_28,iVar3,iVar4,1,1);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
LAB_0409dae0:
  local_18[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)local_18);
  do {
    if (!bVar1) {
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    this_01 = (RtMixedPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_01);
    if (cVar2 != '\0') {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      (**(code **)(*plVar5 + 400))
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)local_18);
      cVar2 = Sexy::TRect<int>::Intersects((TRect<int> *)aIStack_28,(TRect *)local_18);
      if (cVar2 != '\0') break;
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)local_18,(__normal_iterator *)&local_30);
    local_30 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
                         ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *
                          )this_00,local_18[0]);
    local_18[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)local_18);
  } while( true );
  FUN_0409bc84((__normal_iterator *)&local_30);
  goto LAB_0409dae0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSap::ApplyAmber() */

void __thiscall GridItemSap::ApplyAmber(GridItemSap *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  GridItemSapProps *pGVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  RtObject *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long lVar9;
  RealObject *this_03;
  float fVar10;
  Zombie *pZVar11;
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1b8);
  uVar3 = FUN_0409a1f4(*(undefined4 *)(this + 0x130));
  uVar4 = FUN_0409a1f8(*(undefined4 *)(this + 0x134));
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,2,uVar3,uVar4);
  pGVar5 = GridItem::GetProps<GridItemSapProps>();
                    /* WARNING: Load size is inaccurate */
  pZVar11._0_4_ = *(Zombie **)(pGVar5 + 0xe8);
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
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    this_03 = (RealObject *)*puVar6;
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)&local_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar8 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_30 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<Zombie>>
                         (uVar7,uVar8,aRStack_38);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if ((bVar1) && (cVar2 = RealObject::IsOnOpposingTeam(this_03,(RealObject *)this), cVar2 != '\0')
       ) {
      nop();
      bVar1 = Sexy::RtObject::IsA<Zomboss>(this_01);
      if ((((!bVar1) &&
           (((bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>(this_01), !bVar1 &&
             (cVar2 = Zombie::IsOnGround((Zombie *)this_01), cVar2 != '\0')) &&
            (cVar2 = (**(code **)(*(long *)this_01 + 0x4d8))(this_01), cVar2 == '\0')))) &&
          (((cVar2 = (**(code **)(*(long *)this_01 + 0x508))(this_01), cVar2 == '\0' &&
            (cVar2 = Zombie::HasFogImmune((Zombie *)this_01), cVar2 == '\0')) &&
           (cVar2 = Zombie::IsBerserk((Zombie *)this_01), cVar2 == '\0')))) &&
         (cVar2 = Zombie::IsControlled((Zombie *)this_01), cVar2 == '\0')) {
        this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)this_01);
        lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        cVar2 = isZombieTypeBlacklisted(this,(string *)(lVar9 + 8));
        if (cVar2 == '\0') {
          fVar10 = (float)Sexy::Rand(1.0);
          if (fVar10 < *(float *)(this + 0x1b0)) {
            Zombie::ApplyCondition(pZVar11._0_4_,0,this_01,0x29,1);
          }
          std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                    ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                     this_00,(RtWeakPtr *)aRStack_38);
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
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


/* GridItemSap::onUpdate() */

void __thiscall GridItemSap::onUpdate(GridItemSap *this)

{
  GridItemSapProps *pGVar1;
  float fVar2;
  float fVar3;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (*(int *)(this + 0x1ac) == 3) {
    fVar2 = (float)PVZ_T();
    fVar3 = *(float *)(this + 0x1a8);
    pGVar1 = GridItem::GetProps<GridItemSapProps>();
    if (*(float *)(pGVar1 + 0xe0) < fVar2 - fVar3) {
      setState(this,4);
    }
  }
  applySap(this);
  ApplyAmber(this);
  UpdateAmberZombie(this);
  return;
}

