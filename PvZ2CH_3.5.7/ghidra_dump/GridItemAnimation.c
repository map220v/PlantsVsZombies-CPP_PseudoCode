// Class: GridItemAnimation


/* GridItemAnimation::GetAnimRig() */

RtWeakPtr<Sexy::SoundResource> * GridItemAnimation::GetAnimRig(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x198));
  return in_x8;
}


/* GridItemAnimation::getGridExtents() */

Point * __thiscall GridItemAnimation::getGridExtents(GridItemAnimation *this)

{
  Point *in_x8;
  
  Sexy::Point::Point(in_x8,1,1);
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimation::StaticClassInit() */

void GridItemAnimation::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemAnimation");
    (*pcVar2)(plVar1,asStack_10,FUN_03e202bc,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemAnimation::StaticGetClass() */

long * GridItemAnimation::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemAnimation",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemAnimation::GetClass() const */

long * GridItemAnimation::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemAnimation",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemAnimation::GetScale() */

undefined4 __thiscall GridItemAnimation::GetScale(GridItemAnimation *this)

{
  return *(undefined4 *)(this + 0x1a0);
}


/* GridItemAnimation::GetHealthBarVisible() */

GridItemAnimation __thiscall GridItemAnimation::GetHealthBarVisible(GridItemAnimation *this)

{
  return this[0x1a4];
}


/* GridItemAnimation::HasLinkedAnimRig() */

GridItemAnimation __thiscall GridItemAnimation::HasLinkedAnimRig(GridItemAnimation *this)

{
  return this[0x194];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimation::GetLinkedEffect() */

void __thiscall GridItemAnimation::GetLinkedEffect(GridItemAnimation *this)

{
  char cVar1;
  string *this_00;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (string *)PlayerInfo::GetPlantNewAvatarPiecesInfo((PlayerInfo *)this);
  std::string::string(asStack_10,"linkedEffect");
  cVar1 = GameObjectDictionary::Contains(this_00);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    std::string::string(asStack_10,"linkedEffect");
    uVar2 = GameObjectDictionary::FindOrCreate((GameObjectDictionary *)this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimation::drawHealthBar(Sexy::Graphics*) */

void __thiscall GridItemAnimation::drawHealthBar(GridItemAnimation *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  code *pcVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  Color aCStack_18 [16];
  long local_8;
  
  lVar8 = *(long *)this;
  pcVar7 = *(code **)(lVar8 + 0x1d8);
  local_8 = ___stack_chk_guard;
  if (pcVar7 == GridItem::GetHitpoints) {
    fVar9 = (float)GridItem::GetHitpoints((GridItem *)this);
    pcVar7 = *(code **)(lVar8 + 0x1e0);
  }
  else {
    fVar9 = (float)(*pcVar7)();
    pcVar7 = *(code **)(*(long *)this + 0x1e0);
  }
  if (pcVar7 == GridItem::GetMaxHitpoints) {
    fVar10 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    fVar10 = (float)(*pcVar7)();
  }
  iVar2 = FUN_03e1f1a8(0x3c);
  iVar3 = FUN_03e1f1a8(10);
  Sexy::Graphics::PushState(param_1);
  iVar4 = FUN_03e1f1a8(0xffffffe2);
  iVar5 = FUN_03e1f1a8(10);
  Sexy::Graphics::Translate(param_1,iVar4,iVar5);
  Sexy::Color::Color(aCStack_18,0);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  pfVar6 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar11 = (float)FUN_03e1f1bc(*pfVar6 + 3.0);
  fVar12 = (float)FUN_03e1f1bc(pfVar6[1]);
  Sexy::Graphics::FillRect(param_1,(int)fVar11,(int)fVar12,iVar2,iVar3);
  Sexy::Color::Color(aCStack_18,0xff00);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  cVar1 = RealObject::IsOnTeam(this,2);
  iVar4 = 0xff0000;
  if (cVar1 == '\0') {
    iVar4 = 0xff00;
  }
  Sexy::Color::Color(aCStack_18,iVar4);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  fVar11 = (float)FUN_03e1f1bc(*pfVar6 + 5.0);
  fVar12 = (float)FUN_03e1f1bc(pfVar6[1] + 2.0);
  iVar4 = FUN_03e1f1a8(4);
  Sexy::Graphics::FillRect
            (param_1,(int)fVar11,(int)fVar12,(int)((float)(iVar2 - iVar4) * (fVar9 / fVar10)),
             iVar3 - iVar4);
  Sexy::Color::Color(aCStack_18,-1);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  Sexy::Graphics::PopState(param_1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemAnimation::GridItemAnimation() */

void __thiscall GridItemAnimation::GridItemAnimation(GridItemAnimation *this)

{
  GridItem::GridItem((GridItem *)this);
  *(undefined ***)this = &PTR_GetClass_06785900;
  *(undefined ***)(this + 0x10) = &PTR__GridItemAnimation_06785bb8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x198));
  this[0x194] = (GridItemAnimation)0x0;
  this[0x1a4] = (GridItemAnimation)0x0;
  this[0x195] = (GridItemAnimation)0x0;
  *(undefined4 *)(this + 0x1a0) = 0x3f800000;
  return;
}


/* GridItemAnimation::StaticNew() */

GridItemAnimation * GridItemAnimation::StaticNew(void)

{
  GridItemAnimation *this;
  
  this = ::operator_new(0x1a8);
  GridItemAnimation(this);
  return this;
}


/* GridItemAnimation::~GridItemAnimation() */

void __thiscall GridItemAnimation::~GridItemAnimation(GridItemAnimation *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  
  this_00 = (RtWeakPtr *)(this + 0x198);
  *(undefined ***)this = &PTR_GetClass_06785900;
  *(undefined ***)(this + 0x10) = &PTR__GridItemAnimation_06785bb8;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  GridItem::~GridItem((GridItem *)this);
  return;
}


/* non-virtual thunk to GridItemAnimation::~GridItemAnimation() */

void __thiscall GridItemAnimation::~GridItemAnimation(GridItemAnimation *this)

{
  ~GridItemAnimation(this + -0x10);
  return;
}


/* GridItemAnimation::~GridItemAnimation() */

void __thiscall GridItemAnimation::~GridItemAnimation(GridItemAnimation *this)

{
  ~GridItemAnimation(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemAnimation::~GridItemAnimation() */

void __thiscall GridItemAnimation::~GridItemAnimation(GridItemAnimation *this)

{
  ~GridItemAnimation(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimation::drawAnimation(Sexy::Graphics*) */

void __thiscall GridItemAnimation::drawAnimation(GridItemAnimation *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  PopAnimRig *pPVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  int local_88;
  int local_84;
  int local_80 [2];
  GraphicsAutoState aGStack_78 [8];
  Insets aIStack_70 [16];
  Color aCStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x198));
  if (cVar1 != '\0') {
    GridItem::GetGridLocation();
    BoardTransforms::GridToBoardSpaceXUnbounded(local_88);
    iVar2 = FUN_03e1f1a8();
    iVar3 = BoardTransforms::GridToBoardSpaceYUnbounded(local_84);
    puVar4 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    fVar6 = (float)FUN_03e1f1bc((float)iVar3 - (float)puVar4[2] * *(float *)(param_1 + 0x1c));
    (**(code **)(*(long *)this + 0xd0))(local_80,this);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    dVar11 = (double)FUN_03e1f1cc(((double)local_80[0] + -1.0) * 0.5 * (double)iVar3);
    if (this[0x195] == (GridItemAnimation)0x0) {
      dVar14 = (double)iVar2;
      iVar2 = (int)(dVar14 + dVar11);
    }
    else {
      fVar6 = (float)FUN_03e1f1bc(*puVar4);
      dVar14 = (double)(ulong)(uint)puVar4[1];
      iVar2 = (int)fVar6;
      fVar6 = (float)FUN_03e1f1bc((float)puVar4[1] - (float)puVar4[2] * *(float *)(param_1 + 0x1c));
    }
    fVar12 = SUB84(dVar14,0);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_78,param_1);
    (**(code **)(*(long *)this + 0xf8))(this,param_1);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,true);
    fVar7 = (float)(**(code **)(*(long *)this + 0x298))(this);
    fVar13 = fVar12;
    fVar8 = (float)(**(code **)(*(long *)this + 0x2a0))(this);
    fVar15 = -(fVar8 * *(float *)(param_1 + 0x18) * fVar7);
    fVar7 = -(fVar13 * *(float *)(param_1 + 0x1c) * fVar12);
    if (this[0x55] != (GridItemAnimation)0x0) {
      fVar15 = fVar15 + 20.0;
      fVar7 = fVar7 + 20.0;
    }
    Sexy::SexyTransform2D::Scale
              (aSStack_30,fVar8 * *(float *)(param_1 + 0x18) * *(float *)(this + 0x1a0),
               fVar13 * *(float *)(param_1 + 0x1c) * *(float *)(this + 0x1a0));
    FUN_03e1f12c((float)iVar2,(float)(int)fVar6,auStack_28,auStack_1c);
    fVar6 = *(float *)(this + 0x1a0);
    uVar9 = FUN_03e1f1bc(fVar15 * fVar6);
    uVar10 = FUN_03e1f1bc(fVar7 * fVar6);
    FUN_03e1f12c(uVar9,uVar10,auStack_28,auStack_1c);
    if (this[0x55] == (GridItemAnimation)0x0) {
      GetAnimRig();
      pPVar5 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      PopAnimRig::Draw(pPVar5,param_1,aSStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    }
    else {
      Sexy::Insets::Insets(aIStack_70,0x48,0xe6,0xea,0xff);
      GetAnimRig();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      PopAnimRig::GetPAMColor();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      Sexy::Insets::Insets((Insets *)&local_50,(Insets *)aCStack_60);
      Sexy::Color::operator*((Color *)&local_50,(Color *)aIStack_70);
      local_50 = local_40;
      uStack_48 = uStack_38;
      GetAnimRig();
      pPVar5 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      PopAnimRig::SetPAMColor(pPVar5,(Color *)&local_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      GetAnimRig();
      pPVar5 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      PopAnimRig::Draw(pPVar5,param_1,aSStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      GetAnimRig();
      pPVar5 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      PopAnimRig::SetPAMColor(pPVar5,aCStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    }
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_78);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemAnimation::onDraw(Sexy::Graphics*) */

void __thiscall GridItemAnimation::onDraw(GridItemAnimation *this,Graphics *param_1)

{
  char cVar1;
  
  drawAnimation(this,param_1);
  cVar1 = GetHealthBarVisible(this);
  if (cVar1 == '\0') {
    return;
  }
  drawHealthBar(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimation::CalcRenderOrder() const */

void __thiscall GridItemAnimation::CalcRenderOrder(GridItemAnimation *this)

{
  long lVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  int local_c;
  
  lVar1 = ___stack_chk_guard;
  if (this[0x55] != (GridItemAnimation)0x0) {
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x58));
    if (cVar2 != '\0') {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
      iVar3 = (**(code **)(*plVar5 + 0x170))();
      uVar4 = (ulong)(iVar3 - 1);
      goto LAB_03e1fba0;
    }
  }
  GridItem::GetGridLocation();
  uVar4 = Board::MakeGroundRenderOrder(local_c,0);
LAB_03e1fba0:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* non-virtual thunk to GridItemAnimation::CalcRenderOrder() const */

void __thiscall GridItemAnimation::CalcRenderOrder(GridItemAnimation *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimation::GetLinkedAnimRig() */

void GridItemAnimation::GetLinkedAnimRig(void)

{
  char cVar1;
  PlayerInfo *in_x0;
  string *this;
  AttachedEffect *this_00;
  UIWidget *this_01;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (string *)PlayerInfo::GetPlantNewAvatarPiecesInfo(in_x0);
  std::string::string(asStack_10,"linkedEffect");
  cVar1 = GameObjectDictionary::Contains(this);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 == '\0') {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8)
    ;
  }
  else {
    std::string::string(asStack_10,"linkedEffect");
    this_00 = (AttachedEffect *)
              GameObjectDictionary::FindOrCreate((GameObjectDictionary *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    this_01 = (UIWidget *)AttachedEffect::GetEffect(this_00);
    UIWidget::GetAtlasImage(this_01);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)in_x8,(RtWeakPtrBase *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimation::setAnimRig(std::string const&, std::string const&) */

void __thiscall
GridItemAnimation::setAnimRig(GridItemAnimation *this,string *param_1,string *param_2)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  ResourceInfo *pRVar2;
  long *plVar3;
  char *pcVar4;
  RtClass *pRVar5;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x198);
  local_8 = ___stack_chk_guard;
  GetPAMByName(param_1);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar3 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  pcVar4 = (char *)FUN_0547429c(param_2);
  pRVar5 = (RtClass *)Sexy::RtClass::StaticGetClassNamed(pcVar4);
  PopAnimRig::CreateRig((PopAnim *)pRVar2,pRVar5);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemAnimation::SetDamageFlash(float) */

void __thiscall GridItemAnimation::SetDamageFlash(GridItemAnimation *this,float param_1)

{
  EntityConditionTracker<GridItem,GridItemConditions>::ApplyCondition
            ((EntityConditionTracker<GridItem,GridItemConditions> *)param_1,0,this + 0xa8,this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimation::onGridItemInitialize() */

void __thiscall GridItemAnimation::onGridItemInitialize(GridItemAnimation *this)

{
  char cVar1;
  GridItemAnimationProps *pGVar2;
  GameObjectDictionary *this_00;
  AttachedEffect *this_01;
  ResourceInfo *pRVar3;
  code *pcVar4;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemAnimationProps>();
  cVar1 = FUN_0547419c((string *)(pGVar2 + 0xb8));
  if (cVar1 == '\0') {
    this_00 = (GameObjectDictionary *)PlayerInfo::GetPlantNewAvatarPiecesInfo((PlayerInfo *)this);
    std::string::string(asStack_18,"linkedEffect");
    this_01 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_00,asStack_18);
    std::string::~string(asStack_18);
    nop();
    GetPAMByName((string *)(pGVar2 + 0xb8));
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
    AttachedEffect::InitializeWithAnimation(this_01,(PopAnim *)pRVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    pcVar4 = *(code **)(*(long *)this_01 + 0x18);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)asStack_18,*(float *)(pGVar2 + 0xc0),*(float *)(pGVar2 + 0xc4),
               *(float *)(pGVar2 + 200));
    (*pcVar4)(this_01,this,asStack_18,*(undefined4 *)(pGVar2 + 0xcc));
    this[0x194] = (GridItemAnimation)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemAnimation::setDefaultAnimRig() */

void __thiscall GridItemAnimation::setDefaultAnimRig(GridItemAnimation *this)

{
  char cVar1;
  GridItemAnimationProps *pGVar2;
  
  pGVar2 = GridItem::GetProps<GridItemAnimationProps>();
  if (pGVar2 != (GridItemAnimationProps *)0x0) {
    cVar1 = FUN_0547419c((string *)(pGVar2 + 0x98));
    if (cVar1 == '\0') {
      cVar1 = FUN_0547419c((string *)(pGVar2 + 0xa0));
      if (cVar1 == '\0') {
        setAnimRig(this,(string *)(pGVar2 + 0x98),(string *)(pGVar2 + 0xa0));
        return;
      }
    }
  }
  return;
}


/* GridItemAnimation::getRenderOffset() */

undefined1  [16] GridItemAnimation::getRenderOffset(void)

{
  GridItemAnimationProps *pGVar1;
  undefined1 auVar2 [16];
  
  pGVar1 = GridItem::GetProps<GridItemAnimationProps>();
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(ulong *)(pGVar1 + 0xa8) & 0xffffffff;
  return auVar2;
}


/* GridItemAnimation::getRenderScale() */

undefined1  [16] GridItemAnimation::getRenderScale(void)

{
  GridItemAnimationProps *pGVar1;
  undefined1 auVar2 [16];
  
  pGVar1 = GridItem::GetProps<GridItemAnimationProps>();
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(ulong *)(pGVar1 + 0xb0) & 0xffffffff;
  return auVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimation::calcCollisionRect() */

void GridItemAnimation::calcCollisionRect(void)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long in_x0;
  GridItemPropertySheet *pGVar7;
  Insets *in_x8;
  float fVar8;
  float fVar9;
  int local_10;
  int local_c;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = CardGameUtils::IsPlayingCardGame();
  if ((cVar2 == '\0') && (cVar2 = NewPVPUtils::IsPlayingNewPVP(), cVar2 == '\0')) {
    fVar9 = 1.0;
  }
  else {
    fVar9 = *(float *)(in_x0 + 0x1a0);
  }
  GridItem::GetGridLocation();
  iVar3 = BoardTransforms::GridToBoardSpaceXUnbounded(local_10);
  GridItem::GetGridLocation();
  iVar4 = BoardTransforms::GridToBoardSpaceYUnbounded(local_c);
  if ((*(long *)(gLawnApp + 0x9f0) != 0) && (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0')
     ) {
    fVar8 = (float)Board::calculateRoofOffsetZ((float)iVar3);
    iVar4 = (int)((float)iVar4 - fVar8);
  }
  iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::Insets::Insets(in_x8,iVar3 - iVar5 / 2,(iVar4 + -0x19) - iVar6 / 2,iVar5,iVar6);
  pGVar7 = GridItem::GetProps<GridItemPropertySheet>();
  iVar3 = *(int *)(pGVar7 + 0x18);
  iVar4 = *(int *)(pGVar7 + 0x14);
  iVar5 = *(int *)(pGVar7 + 0x20);
  *(int *)(in_x8 + 4) = (int)((float)*(int *)(in_x8 + 4) + (float)*(int *)(pGVar7 + 0x1c) * fVar9);
  *(int *)in_x8 = (int)((float)*(int *)in_x8 + (float)iVar4 * fVar9);
  *(int *)(in_x8 + 8) = (int)((float)*(int *)(in_x8 + 8) + (float)iVar3 * fVar9);
  *(int *)(in_x8 + 0xc) = (int)((float)*(int *)(in_x8 + 0xc) + (float)iVar5 * fVar9);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemAnimation::onGridItemPostInitialize() */

void __thiscall GridItemAnimation::onGridItemPostInitialize(GridItemAnimation *this)

{
  MessageRouter::Post<GridItemAnimation*,GridItemAnimation*>
            ((MessageRouter *)gMessageRouter,Message::NotifyGridItemPlaceOnBoard,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimation::onUpdate() */

void __thiscall GridItemAnimation::onUpdate(GridItemAnimation *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  bool bVar2;
  PopAnimRig *pPVar3;
  float fVar4;
  float fVar5;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x198);
  local_8 = ___stack_chk_guard;
  GridItem::onUpdate((GridItem *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_20);
    if (this[0x194] != (GridItemAnimation)0x0) {
      GetLinkedAnimRig();
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_20,(RtWeakPtr *)aCStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aCStack_18);
    }
    cVar1 = EntityConditionTracker<Creature,CreatureConditions>::TestModifierFlag
                      ((EntityConditionTracker<Creature,CreatureConditions> *)(this + 0xa8),0x10);
    if (cVar1 == '\0') {
      pPVar3 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      PopAnimRig::ClearMultiplicativeOverlayColor(pPVar3);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_20);
      if (bVar2) {
        pPVar3 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
        PopAnimRig::ClearMultiplicativeOverlayColor(pPVar3);
      }
    }
    else {
      EntityConditionTracker<Creature,CreatureConditions>::GetDrawOverlayColor();
      pPVar3 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      PopAnimRig::SetMultiplicativeOverlayColor(pPVar3,aCStack_18);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_20);
      if (bVar2) {
        pPVar3 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
        PopAnimRig::SetMultiplicativeOverlayColor(pPVar3,aCStack_18);
      }
    }
    cVar1 = EntityConditionTracker<Creature,CreatureConditions>::TestModifierFlag
                      ((EntityConditionTracker<Creature,CreatureConditions> *)(this + 0xa8),8);
    if (cVar1 == '\0') {
      pPVar3 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      PopAnimRig::ClearShaderOverrideColor(pPVar3);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_20);
      if (bVar2) {
        pPVar3 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
        PopAnimRig::ClearShaderOverrideColor(pPVar3);
      }
    }
    else {
      EntityConditionTracker<Creature,CreatureConditions>::GetDrawShaderColor();
      pPVar3 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      PopAnimRig::SetShaderOverrideColor(pPVar3,aCStack_18);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_20);
      if (bVar2) {
        pPVar3 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
        PopAnimRig::SetShaderOverrideColor(pPVar3,aCStack_18);
      }
    }
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    fVar4 = (float)PVZ_T();
    fVar5 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar3,fVar4,fVar5);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

