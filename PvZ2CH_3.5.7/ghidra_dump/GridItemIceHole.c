// Class: GridItemIceHole


/* GridItemIceHole::CalcRenderOrder() const */

undefined8 GridItemIceHole::CalcRenderOrder(void)

{
  return 300000;
}


/* non-virtual thunk to GridItemIceHole::CalcRenderOrder() const */

void __thiscall GridItemIceHole::CalcRenderOrder(GridItemIceHole *this)

{
  CalcRenderOrder();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIceHole::StaticClassInit() */

void GridItemIceHole::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemIceHole");
    (*pcVar2)(plVar1,asStack_10,FUN_03e2779c,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemIceHole::StaticGetClass() */

long * GridItemIceHole::StaticGetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemIceHole",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemIceHole::GetClass() const */

long * GridItemIceHole::GetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemIceHole",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemIceHole::RenderFoodEnd(std::string const&) */

void __thiscall GridItemIceHole::RenderFoodEnd(GridItemIceHole *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"PLANTFOOD");
  if (bVar1) {
    this[0x1a0] = (GridItemIceHole)0x0;
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return;
}


/* GridItemIceHole::GridItemIceHole() */

void __thiscall GridItemIceHole::GridItemIceHole(GridItemIceHole *this)

{
  GridItem::GridItem((GridItem *)this);
  *(undefined ***)this = &PTR_GetClass_06786d70;
  *(undefined ***)(this + 0x10) = &PTR__GridItemIceHole_06787008;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x198));
  this[0x1a0] = (GridItemIceHole)0x0;
  *(undefined4 *)(this + 0x1a4) = 0;
  FUN_03e26614(*(long *)(gLawnApp + 0x9f0) + 0xc98,1);
  return;
}


/* GridItemIceHole::StaticNew() */

GridItemIceHole * GridItemIceHole::StaticNew(void)

{
  GridItemIceHole *this;
  
  this = ::operator_new(0x1a8);
  GridItemIceHole(this);
  return this;
}


/* GridItemIceHole::~GridItemIceHole() */

void __thiscall GridItemIceHole::~GridItemIceHole(GridItemIceHole *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x198);
  *(undefined ***)this = &PTR_GetClass_06786d70;
  *(undefined ***)(this + 0x10) = &PTR__GridItemIceHole_06787008;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  if ((gLawnApp != 0) && (*(long *)(gLawnApp + 0x9f0) != 0)) {
    FUN_03e26614(*(long *)(gLawnApp + 0x9f0) + 0xc98,0);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  GridItem::~GridItem((GridItem *)this);
  return;
}


/* non-virtual thunk to GridItemIceHole::~GridItemIceHole() */

void __thiscall GridItemIceHole::~GridItemIceHole(GridItemIceHole *this)

{
  ~GridItemIceHole(this + -0x10);
  return;
}


/* GridItemIceHole::~GridItemIceHole() */

void __thiscall GridItemIceHole::~GridItemIceHole(GridItemIceHole *this)

{
  ~GridItemIceHole(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemIceHole::~GridItemIceHole() */

void __thiscall GridItemIceHole::~GridItemIceHole(GridItemIceHole *this)

{
  ~GridItemIceHole(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIceHole::onDraw(Sexy::Graphics*) */

void __thiscall GridItemIceHole::onDraw(GridItemIceHole *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  PopAnimRig *this_00;
  GraphicsAutoState aGStack_40 [8];
  int local_38;
  int local_34;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x198));
  if (cVar1 != '\0') {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
    GridItem::GetGridLocation();
    iVar2 = BoardTransforms::GridToBoardSpaceX(local_38);
    iVar2 = FUN_03e26774(iVar2 + -0x6e);
    iVar3 = BoardTransforms::GridToBoardSpaceY(local_34);
    iVar3 = FUN_03e26774(iVar3 + -0x82);
    *(float *)(param_1 + 0x10) =
         *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x10) +
         (float)(int)(((float)iVar2 - *(float *)(param_1 + 0x20)) * *(float *)(param_1 + 0x18));
    *(float *)(param_1 + 0x14) =
         *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x14) +
         (float)(int)(((float)iVar3 - *(float *)(param_1 + 0x24)) * *(float *)(param_1 + 0x1c));
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    Sexy::SexyTransform2D::Scale(aSStack_30,*(float *)(param_1 + 0x18),*(float *)(param_1 + 0x1c));
    this_00 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
    PopAnimRig::Draw(this_00,param_1,aSStack_30);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIceHole::RenderFoodInEnd(std::string const&) */

void __thiscall GridItemIceHole::RenderFoodInEnd(GridItemIceHole *this,string *param_1)

{
  bool bVar1;
  EffectAnimRig_IceHole *pEVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"PLANTFOOD_IN");
  if (bVar1) {
    pEVar2 = (EffectAnimRig_IceHole *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,RenderFoodEnd);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<GridItemIceHole,void(GridItemIceHole::*)(std::string_const&)>(aDStack_38,aCStack_50);
    EffectAnimRig_IceHole::PlayFood(pEVar2,aDStack_38);
    this[0x1a0] = (GridItemIceHole)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIceHole::onUpdate() */

void __thiscall GridItemIceHole::onUpdate(GridItemIceHole *this)

{
  GridItemIceHole GVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  PopAnimRig *this_00;
  float *pfVar6;
  undefined8 *puVar7;
  Zombie *this_01;
  float fVar8;
  float fVar9;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  float local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x198));
  if (cVar2 == '\0') {
    GVar1 = this[0x1a0];
  }
  else {
    this_00 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
    fVar8 = (float)PVZ_T();
    fVar9 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar8,fVar9);
    GVar1 = this[0x1a0];
  }
  if (GVar1 != (GridItemIceHole)0x0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar8 = pfVar6[1];
    fVar9 = *pfVar6;
    iVar4 = BoardTransforms::BoardSpaceToGridY((int)fVar8);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,(float)(int)fVar9,(float)(int)fVar8);
    iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
    EntityFinder::GetEntitiesTouchingCircle2D
              ((float)iVar5 * 1.44,avStack_20,2,(FastCurve *)&local_30,iVar4 + -1,iVar4 + 1);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar3)
    {
      puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      cVar2 = RealObject::IsOnTeam(*puVar7,1);
      if (((((((cVar2 == '\0') && (bVar3 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar7), bVar3))
             && (nop(), this_01 != (Zombie *)0x0)) &&
            ((cVar2 = (**(code **)(*(long *)this_01 + 0x328))(), cVar2 == '\0' &&
             (cVar2 = Zombie::HasFogImmune(this_01), cVar2 == '\0')))) &&
           ((cVar2 = (**(code **)(*(long *)this_01 + 0x4d8))(this_01), cVar2 == '\0' &&
            ((cVar2 = (**(code **)(*(long *)this_01 + 0x508))(this_01), cVar2 == '\0' &&
             (cVar2 = Zombie::CanTakeFatalDamage(this_01), cVar2 != '\0')))))) &&
          (cVar2 = Zombie::IsBerserk(this_01), cVar2 == '\0')) &&
         (((((cVar2 = Zombie::IsDropingIntoHole(this_01), cVar2 == '\0' &&
             (iVar4 = Zombie::GetSizeType(this_01), iVar4 == 0)) &&
            (cVar2 = Zombie::IsFlying(this_01), cVar2 == '\0')) &&
           (((cVar2 = Zombie::IsControlled(this_01), cVar2 == '\0' &&
             (iVar4 = Zombie::getZombieStateSerialization(this_01), iVar4 != 0x14)) &&
            ((*(int *)(this + 0x1a4) < 5 &&
             ((cVar2 = Zombie::HasCondition(this_01,0x27), cVar2 == '\0' &&
              (cVar2 = Zombie::HasCondition(this_01,0x25), cVar2 == '\0')))))))) &&
          ((cVar2 = Zombie::HasCondition(this_01,0x65), cVar2 == '\0' &&
           (cVar2 = Zombie::HasCondition(this_01,0x2c), cVar2 == '\0')))))) {
        *(int *)(this + 0x1a4) = *(int *)(this + 0x1a4) + 1;
        FUN_03e266d4(this_01 + 0x360);
        Zombie::SetIsControlled(this_01,true);
        local_28 = pfVar6[2];
        local_30._4_4_ = (float)((ulong)*(undefined8 *)pfVar6 >> 0x20);
        local_30 = CONCAT44(local_30._4_4_ - 10.0,(int)*(undefined8 *)pfVar6);
        Zombie::DoDropIntoIceHole(this_01,(SexyVector3 *)&local_30,false);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIceHole::onGridItemInitialize() */

void __thiscall GridItemIceHole::onGridItemInitialize(GridItemIceHole *this)

{
  RtMixedPtrBase *this_00;
  LawnApp *this_01;
  char cVar1;
  GridItemIceHolePropertySheet *pGVar2;
  long *plVar3;
  ResourceInfo *pRVar4;
  EffectAnimRig_IceHole *pEVar5;
  Board *this_02;
  RtWeakPtr aRStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::onGridItemInitialize((GridItem *)this);
  this_01 = gLawnApp;
  std::string::string(asStack_50,"PlantIceShroom");
  cVar1 = LawnApp::IsGroupLoadComplete(this_01,asStack_50);
  std::string::~string(asStack_50);
  nop();
  if (cVar1 == '\0') {
    this_02 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_50,"PlantIceShroom");
    Board::LoadResourceGroupForGameplay(this_02,asStack_50);
    std::string::~string(asStack_50);
    nop();
  }
  this_00 = (RtMixedPtrBase *)(this + 0x198);
  RealObject::JoinTeam((RealObject *)this,1);
  pGVar2 = GridItem::GetProps<GridItemIceHolePropertySheet>();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar3 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  GetPAMByName((string *)(pGVar2 + 0x98));
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_58);
  PopAnimRig::CreateRig<EffectAnimRig_IceHole>((PopAnim *)pRVar4);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)asStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  FUN_03e266f4(this + 300);
  FUN_03e266e4(this + 0x128);
  pEVar5 = (EffectAnimRig_IceHole *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,RenderFoodInEnd);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<GridItemIceHole,void(GridItemIceHole::*)(std::string_const&)>(aDStack_38,asStack_50);
  EffectAnimRig_IceHole::PlayFoodIn(pEVar5,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

