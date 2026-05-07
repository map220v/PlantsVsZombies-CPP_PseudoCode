// Class: GridItemVase


/* GridItemVase::SetAllowPreGameplayInteraction(bool) */

void __thiscall GridItemVase::SetAllowPreGameplayInteraction(GridItemVase *this,bool param_1)

{
  this[0x1b4] = (GridItemVase)param_1;
  return;
}


/* GridItemVase::Android_OnAppResumeFocus() */

void __thiscall GridItemVase::Android_OnAppResumeFocus(GridItemVase *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x1d0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    *(undefined8 *)(this + 0x1d0) = 0;
  }
  return;
}


/* GridItemVase::onBreakAnimStopped(std::string const&) */

void GridItemVase::onBreakAnimStopped(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* GridItemVase::onTouchCancelEvent() */

void __thiscall GridItemVase::onTouchCancelEvent(GridItemVase *this)

{
  *(undefined8 *)(this + 0x1b8) = 0;
  this[0x1c0] = (GridItemVase)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVase::StaticClassInit() */

void GridItemVase::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemVase");
    (*pcVar2)(plVar1,asStack_10,FUN_0499094c,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemVase::StaticGetClass() */

long * GridItemVase::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemVase",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemVase::GetClass() const */

long * GridItemVase::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemVase",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemVase::SetContentsType(Sexy::RtWeakPtr<ObjectTypeDescriptor>) */

void __thiscall GridItemVase::SetContentsType(GridItemVase *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1a0),param_2);
  if (*(long **)(this + 0x1d0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1d0) + 0x18))();
    *(undefined8 *)(this + 0x1d0) = 0;
  }
  return;
}


/* GridItemVase::SetMovePreviewPosition(Sexy::Point const&) */

void __thiscall GridItemVase::SetMovePreviewPosition(GridItemVase *this,Point *param_1)

{
  *(undefined8 *)(this + 0x1c8) = *(undefined8 *)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVase::playBreakSound() */

void __thiscall GridItemVase::playBreakSound(GridItemVase *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Play_UI_MiniGames_VaseBreak");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVase::getPreviewImageOffsetBoardSpace() const */

void GridItemVase::getPreviewImageOffsetBoardSpace(void)

{
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange(local_10,0.0,-40.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* GridItemVase::updateGroundEffect() */

void __thiscall GridItemVase::updateGroundEffect(GridItemVase *this)

{
  char cVar1;
  SexyVector3 *pSVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_0498ea98(this[0x1e0]);
  if (cVar1 == '\0') {
    pSVar2 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    cVar1 = RealObject::IsOnWaterTile((RealObject *)this,pSVar2);
    if (((cVar1 == '\0') || (cVar1 = (**(code **)(*(long *)this + 0xa0))(this), cVar1 == '\0')) ||
       (0.0 < *(float *)(pSVar2 + 8))) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = 0;
    }
    EntityComponent_GroundEffect::SetGroundEffect
              ((EntityComponent_GroundEffect *)(this + 0x1d8),this,uVar3,0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVase::getPreviewImageSizePixels() const */

void __thiscall GridItemVase::getPreviewImageSizePixels(GridItemVase *this)

{
  int iVar1;
  int iVar2;
  Point *in_x8;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_10,0x32,0x3c);
  iVar1 = FUN_0498ec78(local_10);
  iVar2 = FUN_0498ec78(local_c);
  Sexy::Point::Point(in_x8,iVar1,iVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemVase::GridItemVase() */

void __thiscall GridItemVase::GridItemVase(GridItemVase *this)

{
  undefined4 uVar1;
  
  GridItem::GridItem((GridItem *)this);
  *(undefined ***)this = &PTR_GetClass_06918f80;
  *(undefined ***)(this + 0x10) = &PTR__GridItemVase_06919218;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x198));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a0));
  *(undefined4 *)(this + 0x1a8) = 0;
  uVar1 = PVZ_EOT();
  this[0x1b4] = (GridItemVase)0x0;
  *(undefined8 *)(this + 0x1b8) = 0;
  this[0x1c0] = (GridItemVase)0x0;
  this[0x1c1] = (GridItemVase)0x0;
  *(undefined4 *)(this + 0x1ac) = uVar1;
  *(undefined4 *)(this + 0x1b0) = uVar1;
  *(undefined4 *)(this + 0x1c4) = uVar1;
  Sexy::Point::Point((Point *)(this + 0x1c8));
  *(undefined8 *)(this + 0x1d0) = 0;
  EntityComponent_GroundEffect::EntityComponent_GroundEffect
            ((EntityComponent_GroundEffect *)(this + 0x1d8));
  return;
}


/* GridItemVase::StaticNew() */

GridItemVase * GridItemVase::StaticNew(void)

{
  GridItemVase *this;
  
  this = ::operator_new(0x1f8);
  GridItemVase(this);
  return this;
}


/* GridItemVase::ContainsZombie() const */

ulong __thiscall GridItemVase::ContainsZombie(GridItemVase *this)

{
  bool bVar1;
  ulong uVar2;
  RtObject *this_00;
  
  uVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1a0));
  if ((uVar2 & 0xff) == 0) {
    return uVar2;
  }
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
  bVar1 = Sexy::RtObject::IsA<ZombieType>(this_00);
  return (ulong)bVar1;
}


/* GridItemVase::ContainsPlant() const */

ulong __thiscall GridItemVase::ContainsPlant(GridItemVase *this)

{
  bool bVar1;
  ulong uVar2;
  RtObject *this_00;
  
  uVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1a0));
  if ((uVar2 & 0xff) == 0) {
    return uVar2;
  }
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
  bVar1 = Sexy::RtObject::IsA<PlantType>(this_00);
  return (ulong)bVar1;
}


/* GridItemVase::ContainsGargantuar() const */

undefined1 __thiscall GridItemVase::ContainsGargantuar(GridItemVase *this)

{
  char cVar1;
  undefined1 uVar2;
  long extraout_x0;
  char *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  cVar1 = ContainsZombie(this);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
    nop();
    pcVar3 = (char *)FUN_0547429c(extraout_x0 + 0x10);
    plVar4 = (long *)Sexy::RtClass::StaticGetClassNamed(pcVar3);
    if (plVar4 != (long *)0x0) {
      pcVar6 = *(code **)(*plVar4 + 0x48);
      uVar5 = Sexy::RtClass::StaticGetClassNamed("ZombieGargantuar");
      uVar2 = (*pcVar6)(plVar4,uVar5);
      return uVar2;
    }
  }
  return 0;
}


/* GridItemVase::ContainsCollectable() const */

ulong __thiscall GridItemVase::ContainsCollectable(GridItemVase *this)

{
  bool bVar1;
  ulong uVar2;
  RtObject *this_00;
  
  uVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1a0));
  if ((uVar2 & 0xff) == 0) {
    return uVar2;
  }
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
  bVar1 = Sexy::RtObject::IsA<CollectableType>(this_00);
  return (ulong)bVar1;
}


/* GridItemVase::IsBreaking() const */

bool __thiscall GridItemVase::IsBreaking(GridItemVase *this)

{
  bool bVar1;
  
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x1a8),4);
  return bVar1;
}


/* GridItemVase::DoColorByContents() const */

bool __thiscall GridItemVase::DoColorByContents(GridItemVase *this)

{
  bool bVar1;
  
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x1a8),1);
  return bVar1;
}


/* GridItemVase::AreContentsRevealed() const */

bool __thiscall GridItemVase::AreContentsRevealed(GridItemVase *this)

{
  bool bVar1;
  
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x1a8),2);
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVase::SetContentsRevealed(bool) */

void __thiscall GridItemVase::SetContentsRevealed(GridItemVase *this,bool param_1)

{
  char cVar1;
  GridItemVaseAnimRig *pGVar2;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = AreContentsRevealed(this);
  SetFlag<DebugLogFlags>(this + 0x1a8,2,param_1);
  if ((bool)cVar1 != param_1) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x198));
    if (cVar1 != '\0') {
      pGVar2 = (GridItemVaseAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
      GridItemVaseAnimRig::SetRevealedAndTransition(pGVar2,param_1,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVase::getRenderGridSquare() const */

void GridItemVase::getRenderGridSquare(void)

{
  char cVar1;
  long in_x0;
  Point *in_x8;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x1c1) != '\0') {
    Sexy::Point::Point(aPStack_10,-1,-1);
    cVar1 = Sexy::TPoint<int>::operator!=((TPoint<int> *)(in_x0 + 0x1c8),(TPoint *)aPStack_10);
    if (cVar1 != '\0') {
      Sexy::Point::Point(in_x8,(TPoint *)(in_x0 + 0x1c8));
      goto LAB_0498f8e8;
    }
  }
  BoardEntity::CalcGridPosition();
LAB_0498f8e8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVase::CalcRenderOrder() const */

void GridItemVase::CalcRenderOrder(void)

{
  long lVar1;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  getRenderGridSquare();
  Board::MakeRenderOrder(0x61e68,local_c,0);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to GridItemVase::CalcRenderOrder() const */

void __thiscall GridItemVase::CalcRenderOrder(GridItemVase *this)

{
  CalcRenderOrder();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVase::SetSelectedForMove(bool) */

void __thiscall GridItemVase::SetSelectedForMove(GridItemVase *this,bool param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 local_10;
  long local_8;
  
  this[0x1c1] = (GridItemVase)param_1;
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_10,-1,-1);
  *(undefined8 *)(this + 0x1c8) = local_10;
  uVar2 = PVZ_T();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1c4) = uVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVase::drawAnimRig(Sexy::Graphics*, float) */

void __thiscall GridItemVase::drawAnimRig(GridItemVase *this,Graphics *param_1,float param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  SexyVector3 *pSVar5;
  PopAnimRig *this_00;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  GraphicsAutoState aGStack_88 [8];
  Point aPStack_80 [8];
  int local_78;
  int local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  float local_64;
  float local_60;
  SexyTransform2D aSStack_58 [8];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [20];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  fVar9 = 0.0;
  local_8 = ___stack_chk_guard;
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_58);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_88,param_1);
  getRenderGridSquare();
  BoardTransforms::GridToBoardSpace(aPStack_80);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_68,(float)local_78,(float)local_74,0.0);
  if (this[0x1c1] != (GridItemVase)0x0) {
    fVar8 = (float)PVZ_T();
    fVar9 = 15.0;
    if (((int)((fVar8 - *(float *)(this + 0x1c4)) + (fVar8 - *(float *)(this + 0x1c4))) & 1U) == 0)
    {
      local_60 = local_60 + 20.0;
    }
    else {
      fVar9 = -15.0;
      local_60 = local_60 + 20.0;
    }
  }
  Sexy::SexyTransform2D::RotateDeg(aSStack_58,fVar9);
  uVar6 = FUN_0498ec8c(local_68);
  uVar7 = FUN_0498ec8c(local_64 - local_60);
  FUN_0498e9d8(uVar6,uVar7,auStack_50,auStack_44);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  lVar4 = FUN_0498ea9c(*(undefined8 *)(lVar4 + 0x20));
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_70,(float)*(int *)(lVar4 + 0x3c),(float)*(int *)(lVar4 + 0x40));
  local_70 = *(float *)(lVar4 + 0x28) * local_70;
  local_6c = *(float *)(lVar4 + 0x28) * local_6c;
  FUN_0498e9d8(-(local_70 * 0.5),-(local_6c * 0.5),auStack_28,auStack_1c);
  Sexy::SexyTransform2D::Scale(aSStack_30,param_2,param_2);
  FUN_0498e9d8(local_70 * 0.5,local_6c * 0.5,auStack_28,auStack_1c);
  FUN_0498e9d8(-(local_70 * 0.5),-(local_6c * 0.7),auStack_28,auStack_1c);
  Sexy::SexyTransform2D::RotateDeg(aSStack_30,fVar9);
  uVar6 = FUN_0498ec8c(local_68);
  uVar7 = FUN_0498ec8c(local_64 - local_60);
  FUN_0498e9d8(uVar6,uVar7,auStack_28,auStack_1c);
  pSVar5 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  cVar1 = RealObject::IsOnWaterTile((RealObject *)this,pSVar5);
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)this + 0xa0))(this), cVar1 != '\0')) {
    iVar2 = FUN_0498ec78(0);
    iVar3 = FUN_0498ec78(0xf);
    FUN_0498e9d8((float)iVar2,(float)iVar3,auStack_28,auStack_1c);
  }
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  PopAnimRig::Draw(this_00,param_1,aSStack_30);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemVase::GetAnimRig() */

void __thiscall GridItemVase::GetAnimRig(GridItemVase *this)

{
  Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x198));
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x0499051c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* GridItemVase::onDrawShadow(Sexy::Graphics*) */

void __thiscall GridItemVase::onDrawShadow(GridItemVase *this,Graphics *param_1)

{
  int iVar1;
  Image *pIVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 local_8c;
  GraphicsAutoState aGStack_88 [8];
  Point aPStack_80 [8];
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  undefined4 local_40 [4];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_88,param_1);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_60,0.0,0.0,1.0);
  getRenderGridSquare();
  BoardTransforms::GridToBoardSpace(aPStack_80);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_50,(float)local_78,(float)local_74,0.0);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,local_50,local_4c);
  Sexy::FastCurve::SetOutRange((FastCurve *)local_40,local_60,local_5c);
  Sexy::TPoint<float>::operator+=((TPoint<float> *)&local_70,(TPoint *)local_40);
  fVar7 = *(float *)(param_1 + 0x20);
  fVar3 = (float)FUN_0498ec8c(local_70);
  fVar8 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x10) + fVar7 +
       (float)(int)((fVar3 - fVar7) * *(float *)(param_1 + 0x18));
  fVar3 = (float)FUN_0498ec8c(local_6c);
  uVar5 = *(undefined4 *)(this + 0x1b0);
  *(float *)(param_1 + 0x14) =
       *(float *)(param_1 + 0x14) + fVar8 +
       (float)(int)((fVar3 - fVar8) * *(float *)(param_1 + 0x1c));
  auVar4 = PVZ_T();
  local_68 = 0.5;
  local_40[0] = 0x3f800000;
  fVar3 = CurveLerp<float>(auVar4,uVar5,auVar4._0_4_,(FastCurve *)&local_68,(FastCurve *)local_40,2)
  ;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_68,fVar3 * 0.85,fVar3 * 0.85);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  Sexy::SexyTransform2D::Scale(aSStack_30,local_58,local_58);
  Sexy::SexyTransform2D::Scale(aSStack_30,local_68,local_64);
  Sexy::SexyTransform2D::Scale(aSStack_30,*(float *)(param_1 + 0x18),*(float *)(param_1 + 0x1c));
  uVar9 = *(undefined4 *)(this + 0x1ac);
  uVar6 = *(undefined4 *)(this + 0x1b0);
  uVar5 = PVZ_T();
  local_8c = 0;
  local_40[0] = 0xff;
  iVar1 = CurveLerp<int>(uVar9,uVar6,uVar5,&local_8c,(FastCurve *)local_40,2);
  Sexy::Insets::Insets((Insets *)local_40,0xff,0xff,0xff,iVar1);
  Sexy::Graphics::SetColor(param_1,(Color *)local_40);
  pIVar2 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06b73628);
  Sexy::Graphics::DrawImageMatrix(param_1,pIVar2,(SexyMatrix3 *)aSStack_30,0.0,0.0);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemVase::getPAMAsset() const */

void __thiscall GridItemVase::getPAMAsset(GridItemVase *this)

{
  char cVar1;
  
  cVar1 = ContainsGargantuar(this);
  if (cVar1 != '\0') {
    CachedResourcePtr::operator_cast_to_PopAnim_((CachedResourcePtr *)&DAT_06b736c0);
    return;
  }
  cVar1 = DoColorByContents(this);
  if ((cVar1 != '\0') && (cVar1 = ContainsPlant(this), cVar1 != '\0')) {
    CachedResourcePtr::operator_cast_to_PopAnim_((CachedResourcePtr *)&DAT_06b73688);
    return;
  }
  CachedResourcePtr::operator_cast_to_PopAnim_((CachedResourcePtr *)&DAT_06b735f8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVase::CreateAnimRig() */

void __thiscall GridItemVase::CreateAnimRig(GridItemVase *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  bool bVar2;
  long *plVar3;
  PopAnim *pPVar4;
  GridItemVaseAnimRig *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x198);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar3 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  pPVar4 = (PopAnim *)getPAMAsset(this);
  this_01 = PopAnimRig::CreateRig<GridItemVaseAnimRig>(pPVar4);
  bVar2 = (bool)AreContentsRevealed(this);
  GridItemVaseAnimRig::SetRevealedImmediately(this_01,bVar2);
  GridItemVaseAnimRig::PlayIdle(this_01);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemVase::SetColorByContents(bool) */

void __thiscall GridItemVase::SetColorByContents(GridItemVase *this,bool param_1)

{
  char cVar1;
  
  cVar1 = DoColorByContents(this);
  SetFlag<DebugLogFlags>(this + 0x1a8,1,param_1);
  if ((bool)cVar1 != param_1) {
    CreateAnimRig(this);
    return;
  }
  return;
}


/* GridItemVase::Drop() */

void __thiscall GridItemVase::Drop(GridItemVase *this)

{
  ResourceInfo *this_00;
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x198));
  PopAnimRig::SetDisabled((PopAnimRig *)this_00,false);
  GridItemVaseAnimRig::PlayDrop((GridItemVaseAnimRig *)this_00);
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1ac) = uVar1;
  fVar2 = (float)PVZ_T();
  fVar3 = (float)GridItemVaseAnimRig::CalcDropAnimLength((GridItemVaseAnimRig *)this_00);
  *(float *)(this + 0x1b0) = fVar2 + fVar3 * 0.5;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVase::spawnContents() */

void __thiscall GridItemVase::spawnContents(GridItemVase *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Zombie *this_00;
  RtWeakPtrBase *this_01;
  string *psVar4;
  Collectable *pCVar5;
  string *extraout_x0;
  SexyVector3 *this_02;
  long lVar6;
  ZombieTosserSubSystem *pZVar7;
  long *plVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_a8;
  int local_a4;
  Vec3 aVStack_a0 [16];
  Vec3 aVStack_90 [16];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  string asStack_70 [16];
  Point aPStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GetGridLocation();
  BoardTransforms::GridToBoardSpace(aPStack_60);
  EATextSquish::Vec3::Vec3(aVStack_a0,(float)local_a8,(float)local_a4,0.0);
  cVar1 = ContainsZombie(this);
  if (cVar1 == '\0') {
    cVar1 = ContainsPlant(this);
    if (cVar1 == '\0') {
      cVar1 = ContainsCollectable(this);
      if (cVar1 != '\0') {
        psVar4 = *(string **)(gLawnApp + 0x9f0);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
        pCVar5 = (Collectable *)
                 Board::AddCollectableWithDefaultMotion(psVar4,(SexyVector3 *)(lVar6 + 8));
        Collectable::SetKeepOnBoard(pCVar5,true);
        MessageRouter::Broadcast<Collectable*,Collectable*>
                  ((MessageRouter *)gMessageRouter,Message::CollectableSpawnedFromVase,pCVar5);
      }
    }
    else {
      psVar4 = *(string **)(gLawnApp + 0x9f0);
      std::string::string((string *)aPStack_60,"vasebreaker_packet");
      pCVar5 = (Collectable *)
               Board::AddCollectableWithDefaultMotion(psVar4,(SexyVector3 *)aPStack_60);
      std::string::~string((string *)aPStack_60);
      nop();
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
      CollectableSeedPacket::SetSeedType(extraout_x0);
      uVar11 = 0;
      uVar10 = 0;
      EATextSquish::Vec3::Vec3(aVStack_90,0.0,0.0,0.0);
      local_80 = Sexy::SexyVector3::operator+((SexyVector3 *)aVStack_a0,(SexyVector3 *)aVStack_90);
      local_7c = uVar10;
      local_78 = uVar11;
      DVec3::DVec3((DVec3 *)asStack_70);
      DVec3::DVec3((DVec3 *)aPStack_60);
      CalculateTossVelocity
                ((SexyVector3 *)aVStack_a0,(SexyVector3 *)&local_80,40.0,0.6,
                 (SexyVector3 *)asStack_70,(SexyVector3 *)aPStack_60);
      Collectable::SetMotionNewtonian
                (pCVar5,(SexyVector3 *)asStack_70,(SexyVector3 *)aPStack_60,true);
      Collectable::SetKeepOnBoard(pCVar5,true);
      NewPVPHealthBar::FlashDamage((NewPVPHealthBar *)pCVar5);
    }
  }
  else {
    plVar8 = *(long **)(gLawnApp + 0x9f0);
    pcVar9 = *(code **)(*plVar8 + 0x318);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aPStack_60,(RtWeakPtrBase *)(this + 0x1a0));
    this_00 = (Zombie *)(*pcVar9)(plVar8,aPStack_60,0xfffffffb,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_60);
    this_01 = (RtWeakPtrBase *)Zombie::GetType(this_00);
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_70,"west_bull");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_01,(RtWeakPtrBase *)aPStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_60);
    std::string::~string(asStack_70);
    nop();
    if (cVar1 != '\0') {
      plVar8 = *(long **)(gLawnApp + 0x9f0);
      pcVar9 = *(code **)(*plVar8 + 0x318);
      psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      std::string::string(asStack_70,"west_bullrider");
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
      this_02 = (SexyVector3 *)(*pcVar9)(plVar8,aPStack_60,0xfffffffb,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_60);
      std::string::~string(asStack_70);
      nop();
      BoardEntity::PlaceOnBoard(this_02);
      iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      lVar6 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this_02);
      EATextSquish::Vec3::Vec3
                ((Vec3 *)aPStack_60,(float)((iVar2 + 5) * iVar3 + 200),*(float *)(lVar6 + 4),0.0);
      pZVar7 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aVStack_90);
      std::string::string(asStack_70,"vasebreakerKillBullrider");
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
                (aRStack_50,(RtId *)&local_80,asStack_70);
      ZombieTosserSubSystem::LaunchZombie
                ((ZombieTosserSubSystem *)0x43160000,0x40000000,pZVar7,this_02,aPStack_60,aRStack_50
                 ,0);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      std::string::~string(asStack_70);
      nop();
      Sexy::RtId::~RtId((RtId *)&local_80);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_90);
    }
    BoardEntity::PlaceOnBoard((SexyVector3 *)this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVase::BreakVase() */

void __thiscall GridItemVase::BreakVase(GridItemVase *this)

{
  GridItemVaseAnimRig *pGVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SetFlag<DebugLogFlags>(this + 0x1a8,4,1);
  spawnContents(this);
  playBreakSound(this);
  pGVar1 = (GridItemVaseAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198))
  ;
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onBreakAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  GridItemVaseAnimRig::Break(pGVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  MessageRouter::Broadcast<GridItemVase*,GridItemVase*>
            ((MessageRouter *)gMessageRouter,Message::VaseBroken,this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemVase::onTouchEvent(Sexy::Touch const&) */

char __thiscall GridItemVase::onTouchEvent(GridItemVase *this,Touch *param_1)

{
  int iVar1;
  char cVar2;
  GridItemVase GVar3;
  TRect<int> *pTVar4;
  float fVar5;
  float fVar6;
  
  cVar2 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
  if ((cVar2 == '\0') && (this[0x1b4] == (GridItemVase)0x0)) {
    IsBreaking(this);
    return '\0';
  }
  cVar2 = IsBreaking(this);
  if ((cVar2 == '\0') && (this[0x1c1] == (GridItemVase)0x0)) {
    if ((*(long *)(this + 0x1b8) == 0) && (*(int *)(param_1 + 0x30) == 0)) {
      fVar5 = (float)FUN_0498ec9c((float)*(int *)(param_1 + 0x10));
      fVar6 = (float)FUN_0498ec9c((float)*(int *)(param_1 + 0x14));
      pTVar4 = (TRect<int> *)(**(code **)(*(long *)this + 0x178))(this);
      cVar2 = Sexy::TRect<int>::Contains(pTVar4,(int)fVar5,(int)fVar6);
      if (cVar2 != '\0') {
        *(undefined8 *)(this + 0x1b8) = *(undefined8 *)param_1;
        this[0x1c0] = (GridItemVase)0x1;
        return cVar2;
      }
    }
    else if (*(long *)(this + 0x1b8) == *(long *)param_1) {
      fVar5 = (float)FUN_0498ec9c((float)*(int *)(param_1 + 0x10));
      fVar6 = (float)FUN_0498ec9c((float)*(int *)(param_1 + 0x14));
      pTVar4 = (TRect<int> *)(**(code **)(*(long *)this + 0x178))(this);
      GVar3 = (GridItemVase)Sexy::TRect<int>::Contains(pTVar4,(int)fVar5,(int)fVar6);
      iVar1 = *(int *)(param_1 + 0x30);
      this[0x1c0] = GVar3;
      if (iVar1 == 3) {
        if (GVar3 != (GridItemVase)0x0) {
          BreakVase(this);
          return '\x01';
        }
      }
      else if (iVar1 != 4) {
        return '\0';
      }
      *(undefined8 *)(this + 0x1b8) = 0;
      this[0x1c0] = (GridItemVase)0x0;
      return '\x01';
    }
  }
  return '\0';
}


/* GridItemVase::~GridItemVase() */

void __thiscall GridItemVase::~GridItemVase(GridItemVase *this)

{
  *(undefined ***)this = &PTR_GetClass_06918f80;
  *(undefined ***)(this + 0x10) = &PTR__GridItemVase_06919218;
  if (*(long **)(this + 0x1d0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1d0) + 0x18))();
    *(undefined8 *)(this + 0x1d0) = 0;
  }
  EntityComponent_GroundEffect::~EntityComponent_GroundEffect
            ((EntityComponent_GroundEffect *)(this + 0x1d8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  GridItem::~GridItem((GridItem *)this);
  return;
}


/* non-virtual thunk to GridItemVase::~GridItemVase() */

void __thiscall GridItemVase::~GridItemVase(GridItemVase *this)

{
  ~GridItemVase(this + -0x10);
  return;
}


/* GridItemVase::~GridItemVase() */

void __thiscall GridItemVase::~GridItemVase(GridItemVase *this)

{
  ~GridItemVase(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemVase::~GridItemVase() */

void __thiscall GridItemVase::~GridItemVase(GridItemVase *this)

{
  ~GridItemVase(this + -0x10);
  return;
}


/* GridItemVase::onDestroy() */

void __thiscall GridItemVase::onDestroy(GridItemVase *this)

{
  GridItem::onDestroy((GridItem *)this);
  EntityComponent_GroundEffect::Destroy((EntityComponent_GroundEffect *)(this + 0x1d8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVase::registerForEvents() */

void __thiscall GridItemVase::registerForEvents(GridItemVase *this)

{
  undefined *this_00;
  Board *pBVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::registerForEvents((GridItem *)this);
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTouchEvent);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<GridItemVase,bool(GridItemVase::*)(Sexy::Touch_const&)>(aDStack_68,aCStack_98);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aRStack_a8);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTouchCancelEvent);
  Sexy::Delegate0::Delegate0<GridItemVase,void(GridItemVase::*)()>(aDStack_38,aCStack_80);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,1,aRStack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,Android_OnAppResumeFocus);
  Sexy::Delegate0::Delegate0<GridItemVase,void(GridItemVase::*)()>(aDStack_38,aCStack_80);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::AppResumeFocus,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVase::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemVase::GatherPlantingRestrictions(GridItemVase *this,PlantType *param_1,vector *param_2)

{
  char cVar1;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  cVar1 = IsBreaking(this);
  if (cVar1 == '\0') {
    local_c = 0x37;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
               (PlantingReason *)&local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVase::tryCreatePreviewImage(int, int) const */

void GridItemVase::tryCreatePreviewImage(int param_1,int param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  int iVar1;
  int iVar2;
  char cVar3;
  GridItemVase *this_00;
  long lVar4;
  float *pfVar5;
  DeviceImage *this_01;
  Graphics3D *pGVar6;
  Image *pIVar7;
  ZombieType *this_02;
  ZombieType *this_03;
  ZombieType *this_04;
  undefined8 uVar8;
  ResourceInfo *pRVar9;
  CollectableType *extraout_x0;
  StandaloneEffect *this_05;
  SeedPacketUtils *this_06;
  PacketRenderData *pPVar10;
  int in_w2;
  size_t __n;
  code *pcVar11;
  float in_s1;
  float fVar12;
  float local_130;
  float local_12c;
  string asStack_128 [8];
  RtMixedPtr aRStack_120 [8];
  undefined8 local_118;
  RtId aRStack_110 [8];
  undefined8 local_108 [2];
  SexyTransform2D aSStack_f8 [40];
  Graphics aGStack_d0 [16];
  float local_c0;
  float local_bc;
  long local_8;
  
  this_00 = (GridItemVase *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  cVar3 = ContainsZombie(this_00);
  if (cVar3 == '\0') {
    cVar3 = ContainsPlant(this_00);
    if (cVar3 == '\0') {
      cVar3 = ContainsCollectable(this_00);
      if (cVar3 == '\0') {
        this_01 = (DeviceImage *)0x0;
      }
      else {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this_00 + 0x1a0))
        ;
        nop();
        this_05 = (StandaloneEffect *)Collectable::CreateRenderEffect(extraout_x0);
        (**(code **)(*(long *)this_05 + 0x80))(0x3f333333);
        StandaloneEffect::Update(this_05);
        fVar12 = (float)(**(code **)(*(long *)this_05 + 0x88))(this_05);
        this_01 = ::operator_new(0x160);
        Sexy::DeviceImage::DeviceImage(this_01,gLawnApp);
        FUN_0498eab0(this_01 + 0x18);
        *(undefined8 *)(this_01 + 0x70) = 0;
        pcVar11 = *(code **)(*(long *)this_01 + 0x130);
        *(int *)(this_01 + 0x38) = (int)fVar12;
        *(int *)(this_01 + 0x3c) = (int)in_s1;
        (*pcVar11)(this_01,1,1);
        Sexy::Graphics::Graphics(aGStack_d0,(Image *)this_01);
        local_c0 = fVar12 * 0.5;
        local_bc = in_s1 * 0.5;
        pGVar6 = (Graphics3D *)Sexy::Graphics::Get3D(aGStack_d0);
        Sexy::SexyTransform2D::SexyTransform2D(aSStack_f8);
        Sexy::Graphics3D::PushTransform(pGVar6,(SexyMatrix3 *)aSStack_f8,false);
        pGVar6 = (Graphics3D *)Sexy::Graphics::Get3D(aGStack_d0);
        Sexy::Insets::Insets((Insets *)local_108,0,0,0,0);
        Sexy::Graphics3D::ClearColorBuffer(pGVar6,(Color *)local_108);
        Sexy::Color::Color((Color *)local_108,1);
        Sexy::Graphics::SetColor(aGStack_d0,(Color *)local_108);
        StandaloneEffect::Draw(this_05,aGStack_d0);
        pGVar6 = (Graphics3D *)Sexy::Graphics::Get3D(aGStack_d0);
        Sexy::Graphics3D::PopTransform(pGVar6);
        (**(code **)(*(long *)this_05 + 0x48))(this_05);
        Sexy::Graphics::~Graphics(aGStack_d0);
      }
    }
    else {
      this_06 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this_00 + 0x1a0));
      pPVar10 = (PacketRenderData *)
                SeedPacketUtils::GetPlantPacketRenderData(this_06,(string *)(lVar4 + 8),-1,-1,-1);
      this_01 = (DeviceImage *)
                SeedPacketUtils::CreateDeviceImageForSeedPacket(this_06,pPVar10,param_2,in_w2);
      SeedPacketUtils::DrawPacketToDeviceImage(this_06,this_01,pPVar10,false,-1,false,false);
    }
  }
  else {
    lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b73660);
    this = (RtWeakPtr<Sexy::ResourceInfo> *)(this_00 + 0x1a0);
    local_130 = (float)param_2 / (float)*(int *)(lVar4 + 0x38);
    lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b73660);
    local_12c = (float)in_w2 / (float)*(int *)(lVar4 + 0x3c);
    pfVar5 = eastl::min_alt<float>(&local_130,&local_12c);
    fVar12 = *pfVar5;
    lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b73660);
    iVar1 = *(int *)(lVar4 + 0x38);
    lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b73660);
    iVar2 = *(int *)(lVar4 + 0x3c);
    this_01 = ::operator_new(0x160);
    Sexy::DeviceImage::DeviceImage(this_01,gLawnApp);
    FUN_0498eab0(this_01 + 0x18);
    *(undefined8 *)(this_01 + 0x70) = 0;
    pcVar11 = *(code **)(*(long *)this_01 + 0x130);
    *(int *)(this_01 + 0x3c) = (int)(fVar12 * (float)iVar2);
    *(int *)(this_01 + 0x38) = (int)(fVar12 * (float)iVar1);
    (*pcVar11)(this_01,1,1);
    Sexy::Graphics::Graphics(aGStack_d0,(Image *)this_01);
    pGVar6 = (Graphics3D *)Sexy::Graphics::Get3D(aGStack_d0);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_f8);
    Sexy::Graphics3D::PushTransform(pGVar6,(SexyMatrix3 *)aSStack_f8,false);
    pGVar6 = (Graphics3D *)Sexy::Graphics::Get3D(aGStack_d0);
    Sexy::Insets::Insets((Insets *)local_108,0,0,0,0);
    Sexy::Graphics3D::ClearColorBuffer(pGVar6,(Color *)local_108);
    Sexy::Color::Color((Color *)local_108,1);
    Sexy::Graphics::SetColor(aGStack_d0,(Color *)local_108);
    Sexy::Graphics::SetScale(aGStack_d0,fVar12,fVar12,0.0,0.0);
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b73660);
    Sexy::Graphics::DrawImage(aGStack_d0,pIVar7,0,0);
    std::string::string(asStack_128,"IMAGE_UI_ZOMBIEALMANAC_PACKETS_ZOMBIES_%s");
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    nop();
    lVar4 = ZombieType::GetDisplayType(this_02);
    __n = 0;
    lVar4 = FUN_05474374(lVar4 + 8,"children");
    if (lVar4 != -1) {
      std::string::append(asStack_128,"IMAGE_UI_ZOMBIEALMANAC_PACKETS_ZOMBIES_ZOMBIE_%s",__n);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    nop();
    lVar4 = ZombieType::GetDisplayType(this_03);
    GetImagePtrByFormattedName(asStack_128,(string *)(lVar4 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    nop();
    lVar4 = ZombieType::GetDisplayType(this_04);
    uVar8 = FUN_0547429c(lVar4 + 8);
    Sexy::OutputDebugStrF((wchar_t *)"tryCreatePreviewImage %s \n",uVar8);
    Sexy::Point::Point((Point *)&local_118,0,0);
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_120);
    GetImageOffset((Insets *)local_108,aRStack_110);
    local_118 = local_108[0];
    Sexy::RtId::~RtId(aRStack_110);
    UIWidget::ConvertPSDImageOffsetToUISpace((int *)&local_118,(int *)((long)&local_118 + 4),1536.0)
    ;
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_120);
    Sexy::Graphics::DrawImage(aGStack_d0,(Image *)pRVar9,(int)local_118,local_118._4_4_);
    pGVar6 = (Graphics3D *)Sexy::Graphics::Get3D(aGStack_d0);
    Sexy::Graphics3D::PopTransform(pGVar6);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_120);
    std::string::~string(asStack_128);
    Sexy::Graphics::~Graphics(aGStack_d0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVase::onDraw(Sexy::Graphics*) */

void GridItemVase::onDraw(Graphics *param_1)

{
  char cVar1;
  PowerupManager *this;
  long lVar2;
  Graphics *in_x1;
  Image *pIVar3;
  float fVar4;
  float fVar5;
  float in_s1;
  GraphicsAutoState aGStack_30 [8];
  Point aPStack_28 [8];
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsBreaking((GridItemVase *)param_1);
  if (cVar1 == '\0') {
    this = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
    PowerupManager::GetSelectedPowerup(this);
    drawAnimRig((GridItemVase *)param_1,in_x1,1.0);
    cVar1 = AreContentsRevealed((GridItemVase *)param_1);
  }
  else {
    drawAnimRig((GridItemVase *)param_1,in_x1,1.0);
    cVar1 = AreContentsRevealed((GridItemVase *)param_1);
  }
  if ((cVar1 != '\0') && (cVar1 = IsBreaking((GridItemVase *)param_1), cVar1 == '\0')) {
    if (*(long *)(param_1 + 0x1d0) == 0) {
      getPreviewImageSizePixels((GridItemVase *)param_1);
      lVar2 = tryCreatePreviewImage((int)param_1,local_18);
      *(long *)(param_1 + 0x1d0) = lVar2;
      if (lVar2 == 0) goto LAB_04991e2c;
    }
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,in_x1);
    getRenderGridSquare();
    BoardTransforms::GridToBoardSpace(aPStack_28);
    fVar4 = (float)getPreviewImageOffsetBoardSpace();
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)local_20 + fVar4,(float)local_1c + in_s1,0.0);
    fVar4 = (float)FUN_0498ec8c(local_18);
    pIVar3 = *(Image **)(param_1 + 0x1d0);
    fVar5 = (float)FUN_0498ec8c(local_14);
    Sexy::Graphics::DrawImage
              (in_x1,pIVar3,(int)(fVar4 - (float)(*(int *)(pIVar3 + 0x38) / 2)),
               (int)(fVar5 - (float)(*(int *)(pIVar3 + 0x3c) / 2)));
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  }
LAB_04991e2c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemVase::onUpdate() */

void __thiscall GridItemVase::onUpdate(GridItemVase *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  GridItem::onUpdate((GridItem *)this);
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  fVar1 = (float)PVZ_T();
  fVar2 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
  updateGroundEffect(this);
  return;
}


/* GridItemVase::ShouldDrawShadow() const */

byte __thiscall GridItemVase::ShouldDrawShadow(GridItemVase *this)

{
  char cVar1;
  byte bVar2;
  PopAnimRig *this_00;
  
  cVar1 = RealObject::ShouldDrawShadow((RealObject *)this);
  if ((cVar1 != '\0') && (cVar1 = IsBreaking(this), cVar1 == '\0')) {
    this_00 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
    bVar2 = PopAnimRig::GetIsDisabled(this_00);
    return bVar2 ^ 1;
  }
  return 0;
}

