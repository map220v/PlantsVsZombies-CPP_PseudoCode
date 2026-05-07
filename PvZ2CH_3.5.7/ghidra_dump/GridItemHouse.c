// Class: GridItemHouse


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHouse::onGridItemInitialize() */

void __thiscall GridItemHouse::onGridItemInitialize(GridItemHouse *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  RtObject *this_00;
  PoolDaylightStage *pPVar6;
  Effect_PopAnim *pEVar7;
  PopAnim *pPVar8;
  StandaloneEffect *pSVar9;
  UIWidget *this_01;
  PopAnimRig *this_02;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_58 [8];
  Vec3 aVStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [40];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0xa0))();
  if (cVar1 != '\0') {
    lVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    lVar4 = Board::FindRegionWithFlags(*(undefined8 *)(gLawnApp + 0x9f0),lVar3,2);
    lVar5 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    if (lVar5 == 0) {
      pPVar6 = (PoolDaylightStage *)0x0;
    }
    else {
      this_00 = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
      pPVar6 = Sexy::RtObject::Cast<PoolDaylightStage>(this_00);
    }
    if (lVar4 != 0) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_58);
      StandaloneEffect::CreateEffect<Effect_GroundEffectTide>();
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_58,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      CachedResourcePtr<Sexy::PopAnim>::CachedResourcePtr
                ((CachedResourcePtr<Sexy::PopAnim> *)aRStack_30,
                 "POPANIM_BACKGROUNDS_WATER_ZOMBIE_RIPPLE");
      pEVar7 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58)
      ;
      pPVar8 = CachedResourcePtr::operator_cast_to_PopAnim_((CachedResourcePtr *)aRStack_30);
      Effect_PopAnim::CreatePopAnimRig(pEVar7,pPVar8,(RtClass *)0x0);
      EATextSquish::Vec3::Vec3(aVStack_50,-100.0,-78.0,0.0);
      pSVar9 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58)
      ;
      StandaloneEffect::SetAttached(pSVar9,(RealObject *)this,(SexyVector3 *)aVStack_50,1);
      pEVar7 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58)
      ;
      std::string::string((string *)&uStack_40,"ripple");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar7,(string *)&uStack_40,0);
      std::string::~string((string *)&uStack_40);
      nop();
      this_01 = (UIWidget *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
      this_02 = (PopAnimRig *)UIWidget::GetAtlasImage(this_01);
      PopAnimRig::RandomizeCurrentAnimFrame(this_02);
      if ((pPVar6 != (PoolDaylightStage *)0x0) &&
         (iVar2 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(lVar3 + 4)), iVar2 == 3)) {
        Sexy::Insets::Insets((Insets *)&uStack_40);
        uStack_40 = 0;
        uStack_3c = 0;
        uStack_38 = FUN_03df67a4(1000);
        uStack_34 = FUN_03df67a4(0x1cc);
        pSVar9 = (StandaloneEffect *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
        StandaloneEffect::SetClipRect(pSVar9,(TRect *)&uStack_40);
      }
      CachedResourcePtr<Sexy::PopAnim>::~CachedResourcePtr
                ((CachedResourcePtr<Sexy::PopAnim> *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHouse::onAnimStopped(std::string const&) */

void GridItemHouse::onAnimStopped(string *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)param_1;
  if (*(code **)(lVar1 + 0x280) != GridItem::onKilled) {
    (**(code **)(lVar1 + 0x280))();
    lVar1 = *(long *)param_1;
  }
  (**(code **)(lVar1 + 0x48))(param_1);
  return;
}


/* GridItemHouse::CalcRenderOrder() const */

void __thiscall GridItemHouse::CalcRenderOrder(GridItemHouse *this)

{
  Board::MakeRenderOrder(0x64d48,*(undefined4 *)(this + 0x194),0);
  return;
}


/* non-virtual thunk to GridItemHouse::CalcRenderOrder() const */

void __thiscall GridItemHouse::CalcRenderOrder(GridItemHouse *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHouse::StaticClassInit() */

void GridItemHouse::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemHouse");
    (*pcVar2)(plVar1,asStack_10,FUN_03e1e764,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHouse::StaticGetClass() */

long * GridItemHouse::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemHouse",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHouse::GetClass() const */

long * GridItemHouse::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemHouse",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHouse::calcCollisionRect() */

void GridItemHouse::calcCollisionRect(void)

{
  int iVar1;
  int iVar2;
  long in_x0;
  Insets *in_x8;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(in_x0 + 0x1c);
  fVar3 = (float)FUN_03e1d914(*(undefined4 *)(in_x0 + 0x18),fVar4,*(undefined4 *)(in_x0 + 0x20));
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::Insets::Insets(in_x8,(int)fVar3,(int)(fVar4 - (float)iVar2),iVar1,iVar2);
  return;
}


/* GridItemHouse::~GridItemHouse() */

void __thiscall GridItemHouse::~GridItemHouse(GridItemHouse *this)

{
  *(undefined ***)this = &PTR_GetClass_06785630;
  *(undefined ***)(this + 0x10) = &PTR__GridItemHouse_067858c8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  GridItem::~GridItem((GridItem *)this);
  return;
}


/* non-virtual thunk to GridItemHouse::~GridItemHouse() */

void __thiscall GridItemHouse::~GridItemHouse(GridItemHouse *this)

{
  ~GridItemHouse(this + -0x10);
  return;
}


/* GridItemHouse::~GridItemHouse() */

void __thiscall GridItemHouse::~GridItemHouse(GridItemHouse *this)

{
  ~GridItemHouse(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemHouse::~GridItemHouse() */

void __thiscall GridItemHouse::~GridItemHouse(GridItemHouse *this)

{
  ~GridItemHouse(this + -0x10);
  return;
}


/* GridItemHouse::GridItemHouse() */

void __thiscall GridItemHouse::GridItemHouse(GridItemHouse *this)

{
  GridItem::GridItem((GridItem *)this);
  *(undefined4 *)(this + 0x194) = 0;
  *(undefined ***)this = &PTR_GetClass_06785630;
  *(undefined ***)(this + 0x10) = &PTR__GridItemHouse_067858c8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x198));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a0));
  return;
}


/* GridItemHouse::StaticNew() */

GridItemHouse * GridItemHouse::StaticNew(void)

{
  GridItemHouse *this;
  
  this = ::operator_new(0x1a8);
  GridItemHouse(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHouse::ChangeTip() */

void __thiscall GridItemHouse::ChangeTip(GridItemHouse *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  PopAnimRig *pPVar2;
  uint uVar3;
  float fVar4;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x1a0);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    uVar3 = 0;
    do {
      while( true ) {
        Sexy::StrFormat("house_%d",asStack_10,(ulong)uVar3);
        if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
          fVar4 = (float)GridItem::GetHitpoints((GridItem *)this);
        }
        else {
          fVar4 = (float)(**(code **)(*(long *)this + 0x1d8))();
        }
        if (fVar4 == (float)(int)uVar3) break;
        pPVar2 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        uVar3 = uVar3 + 1;
        PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
        std::string::~string(asStack_10);
        if (uVar3 == 7) goto LAB_03e1dfa4;
      }
      pPVar2 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      uVar3 = uVar3 + 1;
      PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,true);
      std::string::~string(asStack_10);
    } while (uVar3 != 7);
  }
LAB_03e1dfa4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHouse::onTipAnimStopped(std::string const&) */

void GridItemHouse::onTipAnimStopped(string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x1a0));
  if (bVar1) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x1a0));
    std::string::string(asStack_40,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHouse::onDraw(Sexy::Graphics*) */

void __thiscall GridItemHouse::onDraw(GridItemHouse *this,Graphics *param_1)

{
  RtMixedPtr<Sexy::Image> *this_00;
  RtMixedPtr<Sexy::Image> *this_01;
  char cVar1;
  int iVar2;
  int iVar3;
  PopAnimRig *pPVar4;
  float fVar5;
  undefined4 uVar6;
  GraphicsAutoState aGStack_38 [8];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x198);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if (cVar1 == '\0') {
    this_01 = (RtMixedPtr<Sexy::Image> *)(this + 0x1a0);
    cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_01);
    if (cVar1 == '\0') {
      Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
      uVar6 = *(undefined4 *)(this + 0x1c);
      fVar5 = (float)FUN_03e1d914(*(undefined4 *)(this + 0x18),uVar6,*(undefined4 *)(this + 0x20));
      fVar5 = (float)FUN_03e1d9f4(fVar5 + 20.0);
      *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar5;
      fVar5 = (float)FUN_03e1d9f4(uVar6);
      *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + fVar5;
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
      Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
      pPVar4 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      PopAnimRig::SetRenderTransform(pPVar4,aSStack_30);
      pPVar4 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      PopAnimRig::SetRenderTransform(pPVar4,aSStack_30);
      iVar2 = FUN_03e1d9e0(0x76);
      iVar3 = FUN_03e1d9e0(0x87);
      Sexy::Graphics::Translate(param_1,-iVar2,-iVar3);
      pPVar4 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      PopAnimRig::Draw(pPVar4,param_1);
      pPVar4 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      PopAnimRig::Draw(pPVar4,param_1);
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHouse::onUpdate() */

void __thiscall GridItemHouse::onUpdate(GridItemHouse *this)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  float fVar3;
  float fVar4;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x198));
  if (bVar1) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
    fVar3 = (float)PVZ_T();
    fVar4 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar2,fVar3,fVar4);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1a0));
  if (!bVar1) {
    return;
  }
  pPVar2 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0))
  ;
  fVar3 = (float)PVZ_T();
  fVar4 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(pPVar2,fVar3,fVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHouse::initializePAM(Sexy::PopAnim*) */

void __thiscall GridItemHouse::initializePAM(GridItemHouse *this,PopAnim *param_1)

{
  RtWeakPtr *this_00;
  RtWeakPtr *this_01;
  bool bVar1;
  long *plVar2;
  RtClass *pRVar3;
  PopAnimRig *pPVar4;
  ResourceInfo *pRVar5;
  string asStack_50 [8];
  RtWeakPtr aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x198);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  this_01 = (RtWeakPtr *)(this + 0x1a0);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    (**(code **)(*plVar2 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
  }
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig(param_1,pRVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  pPVar4 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)aRStack_40,"idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar4,aRStack_40,0,aDStack_38);
  std::string::~string((string *)aRStack_40);
  nop();
  std::string::string(asStack_50,"POPANIM_TOWERDEFEND_HOUSE_PIG_TIP");
  GetPAMByName(asStack_50);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_48);
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig((PopAnim *)pRVar5,pRVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_01,(RtWeakPtrBase *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  std::string::~string(asStack_50);
  nop();
  pPVar4 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  std::string::string((string *)aRStack_40,"idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar4,aRStack_40,0,aDStack_38);
  std::string::~string((string *)aRStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHouse::LawnHouseInitialize(Sexy::PopAnim*, int) */

void __thiscall GridItemHouse::LawnHouseInitialize(GridItemHouse *this,PopAnim *param_1,int param_2)

{
  int iVar1;
  GridItemHouseProps *pGVar2;
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemHouseProps>();
  *(int *)(this + 0x194) = param_2;
  DVec3::DVec3((DVec3 *)&local_18);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  local_18 = 200.0 - (float)iVar1 * 0.5;
  iVar1 = BoardTransforms::GridToBoardSpaceY(*(int *)(this + 0x194));
  local_14 = (float)iVar1;
  (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
  initializePAM(this,param_1);
  FUN_03e1d8fc(*(undefined4 *)(pGVar2 + 0x10),this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_03e1d904(this + 0x128);
  RealObject::JoinTeam((RealObject *)this,1);
  ChangeTip(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHouse::TakeDamage(DamageInfo const&) */

void __thiscall GridItemHouse::TakeDamage(GridItemHouse *this,DamageInfo *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x0;
  PopAnimRig *pPVar3;
  long lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  RtMixedPtr aRStack_d0 [8];
  RtId aRStack_c8 [8];
  string asStack_c0 [8];
  RtWeakPtr aRStack_b8 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_b0 [72];
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x1f8))();
  if (cVar1 == '\0') goto LAB_03e1ec9c;
  if (*(RealObject **)param_1 != (RealObject *)0x0) {
    cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,*(RealObject **)param_1);
    if (cVar1 == '\0') goto LAB_03e1ec9c;
    bVar2 = Sexy::RtObject::IsA<Plant>(*(RtObject **)param_1);
    if (bVar2) {
      cVar1 = (**(code **)(*(long *)this + 0x200))(this);
      if (cVar1 == '\0') goto LAB_03e1ec9c;
      nop();
      cVar1 = (**(code **)(*(long *)this + 0x210))(this,extraout_x0);
      if (cVar1 == '\0') goto LAB_03e1ec9c;
    }
  }
  if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
    fVar6 = (float)GridItem::GetHitpoints((GridItem *)this);
  }
  else {
    fVar6 = (float)(**(code **)(*(long *)this + 0x1d8))(this);
  }
  if (0.0 <= fVar6) {
    bVar2 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),2);
    if (bVar2) {
      if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
        fVar6 = (float)GridItem::GetHitpoints((GridItem *)this);
        pcVar5 = GridItem::GetHitpoints;
      }
      else {
        fVar6 = (float)(**(code **)(*(long *)this + 0x1d8))();
        pcVar5 = *(code **)(*(long *)this + 0x1d8);
      }
    }
    else {
      fVar6 = *(float *)(param_1 + 8);
      pcVar5 = *(code **)(*(long *)this + 0x1d8);
    }
    if (pcVar5 == GridItem::GetHitpoints) {
      fVar7 = (float)GridItem::GetHitpoints((GridItem *)this);
    }
    else {
      fVar7 = (float)(*pcVar5)();
    }
    FUN_03e1d904(fVar7 - fVar6,this + 0x128);
    DamageInfo::DamageInfo(aDStack_68,param_1);
    local_60 = fVar6;
    if (*(code **)(*(long *)this + 0x278) != GridItem::onTakeDamage) {
      (**(code **)(*(long *)this + 0x278))(this,aDStack_68);
    }
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1a0));
    if (bVar2) {
      pPVar3 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
      std::string::string((string *)aRStack_b8,"bitten");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_d0);
      std::string::string(asStack_c0,"onTipAnimStopped");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_b0,aRStack_c8,
                 asStack_c0);
      PopAnimRig::PlayAndStop(pPVar3,(string *)aRStack_b8,0,aRStack_b0);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_b0);
      std::string::~string(asStack_c0);
      nop();
      Sexy::RtId::~RtId(aRStack_c8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0);
      std::string::~string((string *)aRStack_b8);
      nop();
      ChangeTip(this);
    }
    if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
      fVar6 = (float)GridItem::GetHitpoints((GridItem *)this);
    }
    else {
      fVar6 = (float)(**(code **)(*(long *)this + 0x1d8))();
    }
    if (fVar6 <= 0.0) {
      ToolPacketData::GetProps();
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_b8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
      if (bVar2) {
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x198));
        if (bVar2) {
          pPVar3 = (PopAnimRig *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
          std::string::string((string *)aRStack_b8,"die");
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_d0);
          std::string::string(asStack_c0,"onAnimStopped");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_b0,
                     aRStack_c8,asStack_c0);
          PopAnimRig::PlayAndStop(pPVar3,aRStack_b8,0,aRStack_b0);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate(aRStack_b0);
          std::string::~string(asStack_c0);
          nop();
          Sexy::RtId::~RtId(aRStack_c8);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0);
          std::string::~string((string *)aRStack_b8);
          nop();
        }
        else {
          lVar4 = *(long *)this;
          if (*(code **)(lVar4 + 0x280) != GridItem::onKilled) {
            (**(code **)(lVar4 + 0x280))(this);
            lVar4 = *(long *)this;
          }
          (**(code **)(lVar4 + 0x48))(this);
        }
      }
    }
    DamageInfo::~DamageInfo(aDStack_68);
  }
LAB_03e1ec9c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHouse::onDestroy() */

void __thiscall GridItemHouse::onDestroy(GridItemHouse *this)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x198));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
    (**(code **)(*plVar2 + 0x48))();
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1a0));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
    (**(code **)(*plVar2 + 0x48))();
  }
  GridItem::onDestroy((GridItem *)this);
  return;
}

