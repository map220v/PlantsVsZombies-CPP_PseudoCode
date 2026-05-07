// Class: GridItemArmrack


/* GridItemArmrack::CalcRenderOrder() const */

void __thiscall GridItemArmrack::CalcRenderOrder(GridItemArmrack *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_03dfa378(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x61e68,uVar1,0);
  return;
}


/* non-virtual thunk to GridItemArmrack::CalcRenderOrder() const */

void __thiscall GridItemArmrack::CalcRenderOrder(GridItemArmrack *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemArmrack::setState(ArmrackState) */

void __thiscall GridItemArmrack::setState(GridItemArmrack *this,int param_2)

{
  if (*(int *)(this + 0x198) != param_2) {
    *(int *)(this + 0x198) = param_2;
  }
  return;
}


/* GridItemArmrack::onArmrackInEnd() */

void __thiscall GridItemArmrack::onArmrackInEnd(GridItemArmrack *this)

{
  this[0x1ad] = (GridItemArmrack)0x1;
  setState(this,1);
  return;
}


/* GridItemArmrack::CanSpawnZombies() const */

bool __thiscall GridItemArmrack::CanSpawnZombies(GridItemArmrack *this)

{
  return *(int *)(this + 0x198) == 1;
}


/* GridItemArmrack::GridItemArmrack() */

void __thiscall GridItemArmrack::GridItemArmrack(GridItemArmrack *this)

{
  undefined4 uVar1;
  
  GridItem::GridItem((GridItem *)this);
  *(undefined4 *)(this + 0x198) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_067802e0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemArmrack_06780578;
  *(undefined4 *)(this + 0x19c) = 5;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined4 *)(this + 0x1a8) = 0;
  this[0x1ac] = (GridItemArmrack)0x0;
  this[0x1ad] = (GridItemArmrack)0x0;
  this[0x1ae] = (GridItemArmrack)0x0;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1b4) = 0;
  *(undefined4 *)(this + 0x1a0) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1c0));
  return;
}


/* GridItemArmrack::StaticNew() */

GridItemArmrack * GridItemArmrack::StaticNew(void)

{
  GridItemArmrack *this;
  
  this = ::operator_new(0x1c8);
  GridItemArmrack(this);
  return this;
}


/* GridItemArmrack::~GridItemArmrack() */

void __thiscall GridItemArmrack::~GridItemArmrack(GridItemArmrack *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  
  this_00 = (RtWeakPtr *)(this + 0x1b8);
  *(undefined ***)this = &PTR_GetClass_067802e0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemArmrack_06780578;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  GridItem::~GridItem((GridItem *)this);
  return;
}


/* non-virtual thunk to GridItemArmrack::~GridItemArmrack() */

void __thiscall GridItemArmrack::~GridItemArmrack(GridItemArmrack *this)

{
  ~GridItemArmrack(this + -0x10);
  return;
}


/* GridItemArmrack::~GridItemArmrack() */

void __thiscall GridItemArmrack::~GridItemArmrack(GridItemArmrack *this)

{
  ~GridItemArmrack(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemArmrack::~GridItemArmrack() */

void __thiscall GridItemArmrack::~GridItemArmrack(GridItemArmrack *this)

{
  ~GridItemArmrack(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArmrack::calcDamageState() */

void __thiscall GridItemArmrack::calcDamageState(GridItemArmrack *this)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  int local_10;
  int local_c;
  long local_8;
  
  lVar4 = *(long *)this;
  iVar1 = *(int *)(this + 0x19c);
  pcVar3 = *(code **)(lVar4 + 0x1d8);
  local_8 = ___stack_chk_guard;
  if (pcVar3 == GridItem::GetHitpoints) {
    fVar5 = (float)GridItem::GetHitpoints((GridItem *)this);
    pcVar3 = *(code **)(lVar4 + 0x1e0);
  }
  else {
    fVar5 = (float)(*pcVar3)();
    pcVar3 = *(code **)(*(long *)this + 0x1e0);
  }
  if (pcVar3 == GridItem::GetMaxHitpoints) {
    fVar6 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    fVar6 = (float)(*pcVar3)();
  }
  local_c = *(int *)(this + 0x19c) + -1;
  local_10 = iVar1 - (int)((fVar5 * (float)iVar1) / fVar6);
  piVar2 = eastl::min_alt<int>(&local_10,&local_c);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*piVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArmrack::setFirePointer(PopAnimRig*, int, int) */

void __thiscall
GridItemArmrack::setFirePointer(GridItemArmrack *this,PopAnimRig *param_1,int param_2,int param_3)

{
  bool bVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1b8));
  if (!bVar1) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1b8),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    *(int *)(this + 0x1b0) = param_3;
    *(int *)(this + 0x1b4) = param_2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArmrack::onDraw(Sexy::Graphics*) */

void __thiscall GridItemArmrack::onDraw(GridItemArmrack *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  PopAnimRig *pPVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  undefined4 uVar8;
  GraphicsAutoState aGStack_60 [8];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  Point aPStack_40 [16];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x198) == 1) {
    fVar5 = (float)PVZ_T();
    if (0.25 <= fVar5 - *(float *)(this + 0x1a0)) {
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1c0));
      if (bVar1) {
        pPVar4 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
        Sexy::Color::Color((Color *)aPStack_40,1);
        PopAnimRig::SetPAMColor(pPVar4,(Color *)aPStack_40);
      }
    }
    else {
      Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)&local_50,param_1);
      fVar5 = (float)PVZ_T();
      fVar5 = (float)ClampFloat((fVar5 - *(float *)(this + 0x1a0)) * 4.0,0.0,1.0);
      Sexy::Graphics::SetDrawMode(param_1,1);
      Sexy::Graphics::SetColorizeImages(param_1,true);
      iVar3 = (int)(((1.0 - fVar5) * 0.3 + 0.7) * 255.0);
      Sexy::Insets::Insets((Insets *)aPStack_40,iVar3,iVar3,iVar3,0xff);
      Sexy::Graphics::SetColor(param_1,(Color *)aPStack_40);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1c0));
      if (bVar1) {
        pPVar4 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
        Sexy::Insets::Insets((Insets *)aPStack_40,iVar3,iVar3,iVar3,0xff);
        PopAnimRig::SetPAMColor(pPVar4,(Color *)aPStack_40);
      }
      Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)&local_50);
    }
    Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)&local_58,param_1);
    GridItem::GetGridLocation();
    BoardTransforms::GridToBoardSpace(aPStack_40);
    iVar3 = FUN_03dfa494(local_50 + DAT_06adbdc0);
    iVar2 = FUN_03dfa494(local_4c + DAT_06adbdc4 + -10);
    Sexy::Graphics::Translate(param_1,iVar3,iVar2);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
    pPVar4 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
    PopAnimRig::SetRenderTransform(pPVar4,aSStack_30);
    pPVar4 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
    PopAnimRig::Draw(pPVar4,param_1);
    Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)&local_58);
  }
  this_00 = (RtWeakPtr *)(this + 0x1b8);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_60,param_1);
    if (((DAT_06adbd98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06adbd98), iVar3 != 0)) {
      EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06adbdd8,-98.0,-120.0,0.0);
      __cxa_guard_release(&DAT_06adbd98);
    }
    Sexy::Point::Point(aPStack_40,*(int *)(this + 0x1b0),*(int *)(this + 0x1b4));
    BoardTransforms::GridToBoardSpace(aPStack_40);
    uVar8 = 0;
    uVar7 = (ulong)(uint)(float)local_54;
    EATextSquish::Vec3::Vec3((Vec3 *)aPStack_40,(float)local_58,(float)local_54,0.0);
    local_50 = Sexy::SexyVector3::operator+((SexyVector3 *)&DAT_06adbdd8,(SexyVector3 *)aPStack_40);
    local_4c = (int)uVar7;
    local_48 = uVar8;
    fVar5 = (float)FUN_03dfa4a8();
    fVar6 = (float)FUN_03dfa4a8(uVar7 & 0xffffffff);
    Sexy::Graphics::Translate(param_1,(int)fVar5,(int)fVar6);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
    pPVar4 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    PopAnimRig::SetRenderTransform(pPVar4,aSStack_30);
    pPVar4 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    PopAnimRig::Draw(pPVar4,param_1);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArmrack::spawnBreakEffect(int) */

void __thiscall GridItemArmrack::spawnBreakEffect(GridItemArmrack *this,int param_1)

{
  int iVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  undefined8 *puVar3;
  char *__s;
  string asStack_20 [8];
  float local_18;
  undefined4 uStack_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  if (((DAT_06adbd60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06adbd60), iVar1 != 0)) {
    Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06adbdb8,0.0,35.0);
    __cxa_guard_release(&DAT_06adbd60);
  }
  std::string::string(asStack_20,"POPANIM_ARMRACK_ARMRACK_DAMAGE");
  GetPAMByName(asStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_20);
  nop();
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_18 = (float)*puVar3;
  local_10 = DAT_06adbdbc + *(float *)(puVar3 + 1);
  _local_18 = CONCAT44((int)((ulong)*puVar3 >> 0x20),DAT_06adbdb8 + local_18);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,-1);
  Effect_PopAnim::SetCentered(this_00,true);
  iVar1 = (**(code **)(*(long *)this + 0x170))(this);
  FUN_03dfa35c(this_00 + 0x1c,iVar1 + 1);
  switch(param_1) {
  case 0:
    __s = "animation";
    break;
  case 1:
    __s = "animation2";
    break;
  case 2:
    __s = "animation3";
    break;
  case 3:
    __s = "animation4";
    break;
  default:
    goto switchD_03dfadd8_default;
  }
  std::string::string(asStack_20,__s);
  Effect_PopAnim::PlaySingleAnimation(this_00,asStack_20,0);
  std::string::~string(asStack_20);
  nop();
switchD_03dfadd8_default:
  std::string::string(asStack_20,"Play_Zomb_Egypt_Grave_Crumble");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_20,0.0);
  std::string::~string(asStack_20);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArmrack::onTakeDamage(DamageInfo const&) */

void GridItemArmrack::onTakeDamage(DamageInfo *param_1)

{
  bool bVar1;
  uint uVar2;
  PopAnimRig *pPVar3;
  undefined4 uVar4;
  float fVar5;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = PVZ_T();
  *(undefined4 *)(param_1 + 0x1a0) = uVar4;
  uVar2 = calcDamageState((GridItemArmrack *)param_1);
  if (*(uint *)(param_1 + 0x1a4) != uVar2) {
    if (uVar2 - 2 < 3) {
      spawnBreakEffect((GridItemArmrack *)param_1,uVar2 - 2);
    }
    *(uint *)(param_1 + 0x1a4) = uVar2;
    Sexy::StrFormat("damage%d",asStack_40,(ulong)uVar2);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x1c0));
    if (bVar1) {
      pPVar3 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x1c0));
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
    }
    std::string::~string(asStack_40);
  }
  if (*(code **)(*(long *)param_1 + 0x1d8) == GridItem::GetHitpoints) {
    fVar5 = (float)GridItem::GetHitpoints((GridItem *)param_1);
  }
  else {
    fVar5 = (float)(**(code **)(*(long *)param_1 + 0x1d8))();
  }
  if (fVar5 <= 0.0) {
    spawnBreakEffect((GridItemArmrack *)param_1,3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArmrack::initializeAnimRig() */

void __thiscall GridItemArmrack::initializeAnimRig(GridItemArmrack *this)

{
  ResourceInfo *pRVar1;
  RtClass *pRVar2;
  PopAnimRig *pPVar3;
  string asStack_50 [8];
  RtWeakPtr aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_50,"POPANIM_ARMRACK_ARMRACK_KONGFU");
  GetPAMByName(asStack_50);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_48);
  pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig((PopAnim *)pRVar1,pRVar2);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1c0),(RtWeakPtrBase *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  std::string::~string(asStack_50);
  nop();
  pPVar3 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0))
  ;
  std::string::string((string *)aRStack_40,"undamaged");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar3,aRStack_40,0,aDStack_38);
  std::string::~string((string *)aRStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemArmrack::onGridItemInitialize() */

void __thiscall GridItemArmrack::onGridItemInitialize(GridItemArmrack *this)

{
  undefined4 uVar1;
  GridItemPropertySheet *pGVar2;
  float fVar3;
  float fVar4;
  
  pGVar2 = GridItem::GetProps<GridItemPropertySheet>();
  fVar4 = *(float *)(pGVar2 + 0x10);
  fVar3 = (float)GridItem::GetExtraHitPointsmodifier((GridItem *)this);
  FUN_03dfa364(fVar3 * fVar4,this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_03dfa36c(this + 0x128);
  *(undefined4 *)(this + 0x194) = 0;
  *(undefined4 *)(this + 0x19c) = 5;
  uVar1 = Sexy::Rand(2);
  this[0x1ac] = (GridItemArmrack)0x0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  this[0x1ad] = (GridItemArmrack)0x0;
  this[0x1ae] = (GridItemArmrack)0x0;
  fVar3 = (float)PVZ_T();
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined4 *)(this + 0x198) = 0xffffffff;
  *(float *)(this + 0x1a0) = fVar3 + 0.25;
  setState(this,0);
  RealObject::JoinTeam((RealObject *)this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArmrack::onDrawShadow(Sexy::Graphics*) */

void __thiscall GridItemArmrack::onDrawShadow(GridItemArmrack *this,Graphics *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  float fVar5;
  float fVar6;
  int local_10;
  int local_c;
  
  lVar1 = ___stack_chk_guard;
  GridItem::GetGridLocation();
  iVar2 = BoardTransforms::GridToBoardSpaceX(local_10);
  GridItem::GetGridLocation();
  iVar3 = BoardTransforms::GridToBoardSpaceY(local_c);
  GridItem::GetGridLocation();
  pIVar4 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06adbe48);
  fVar5 = (float)FUN_03dfa4a8((float)iVar2 - 40.0);
  fVar6 = (float)FUN_03dfa4a8((float)iVar3 - 24.0);
  Sexy::Graphics::DrawImage(param_1,pIVar4,(int)fVar5,(int)fVar6);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArmrack::spawnArmrack() */

void __thiscall GridItemArmrack::spawnArmrack(GridItemArmrack *this)

{
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  *pRVar1;
  int iVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  PopAnimRig *pPVar4;
  Point *__n;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  *pRVar5;
  int local_78;
  int local_74;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  Point aPStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x194) == 0) {
    iVar2 = Sexy::Rand(7);
    *(int *)(this + 0x194) = iVar2 + 1;
  }
  initializeAnimRig(this);
  GridItem::GetGridLocation();
  BoardTransforms::GridToBoardSpace(aPStack_60);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_68,"POPANIM_ARMRACK_ARMRACK_IN");
  GetPAMByName(asStack_68);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aPStack_60);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_60);
  std::string::~string(asStack_68);
  nop();
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aPStack_60,(float)(local_78 + DAT_06adbdc0 + -1),
             (float)(local_74 + DAT_06adbdc4 + -10),0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aPStack_60,-1);
  StandaloneEffect::SetKeepAlive((StandaloneEffect *)this_00,false);
  iVar2 = (**(code **)(*(long *)this + 0x170))(this);
  FUN_03dfa35c(this_00 + 0x1c,iVar2 + 1);
  std::string::string((string *)aPStack_60,"tombstone_in");
  Effect_PopAnim::PlaySingleAnimation(this_00,aPStack_60,0);
  std::string::~string((string *)aPStack_60);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string((string *)aPStack_60,"onArmrackInEnd");
  __n = aPStack_60;
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_68);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this_00,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aPStack_60);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  pRVar5 = aRStack_50;
  do {
    pRVar1 = pRVar5 + 8;
    Set8BytesTo0(pRVar5);
    pRVar5 = pRVar1;
  } while (pRVar1 != aRStack_18);
  std::string::append((string *)aRStack_50,"item1",(size_t)__n);
  std::string::append(asStack_48,"item2",(size_t)__n);
  std::string::append(asStack_40,"item3",(size_t)__n);
  std::string::append(asStack_38,"item4",(size_t)__n);
  std::string::append(asStack_30,"item5",(size_t)__n);
  std::string::append(asStack_28,"item6",(size_t)__n);
  std::string::append(asStack_20,"item7",(size_t)__n);
  pRVar5 = aRStack_50;
  do {
    pPVar4 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_00);
    PopAnimRig::SetLayerVisibility(pPVar4,(string *)pRVar5,false);
    pPVar4 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
    pRVar1 = pRVar5 + 8;
    PopAnimRig::SetLayerVisibility(pPVar4,(string *)pRVar5,false);
    pRVar5 = pRVar1;
  } while (aRStack_18 != pRVar1);
  pRVar5 = aRStack_18;
  pPVar4 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_00);
  PopAnimRig::SetLayerVisibility
            (pPVar4,(string *)(aRStack_50 + (long)(*(int *)(this + 0x194) + -1) * 8),true);
  pPVar4 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0))
  ;
  PopAnimRig::SetLayerVisibility
            (pPVar4,(string *)(aRStack_50 + (long)(*(int *)(this + 0x194) + -1) * 8),true);
  std::string::string((string *)aPStack_60,"Play_Dirt_Rise");
  RealObject::PlayPositionalSound((RealObject *)this,(string *)aPStack_60,0.0);
  std::string::~string((string *)aPStack_60);
  nop();
  do {
    pRVar5 = pRVar5 + -8;
    std::string::~string((string *)pRVar5);
  } while (pRVar5 != aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArmrack::findNearZombieTarget() */

void GridItemArmrack::findNearZombieTarget(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  SharkMinion *in_x0;
  ulong uVar4;
  undefined8 *puVar5;
  Zombie *this;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar6;
  ZombieHydraHeadAnimRig *this_01;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  ulong uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [4];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  uVar7 = 0;
  Sexy::Insets::Insets((Insets *)&local_30,0,0,(int)((double)iVar3 * 0.6),0x5f);
  fVar10 = *(float *)(in_x0 + 0x1c);
  fVar9 = (float)FUN_03dfa3d0(*(undefined4 *)(in_x0 + 0x18),fVar10,*(undefined4 *)(in_x0 + 0x20));
  local_2c = (int)(((float)local_2c + fVar10) - (float)local_24);
  local_30 = (int)((float)local_30 + fVar9 + (float)(local_28 / 2));
  iVar3 = SharkMinion::getRow(in_x0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  (**(code **)(*(long *)in_x0 + 0xd0))(aRStack_38);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
             (Insets *)&local_30,iVar3,iVar3 + local_34 + -1);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  uVar8 = local_20;
  uVar4 = FUN_03dfa3bc(local_20,local_18);
  fVar9 = 1600.0;
  if (uVar4 != 0) {
    do {
      puVar5 = (undefined8 *)FUN_03dfa3c8(uVar8,uVar7);
      if ((RtObject *)*puVar5 != (RtObject *)0x0) {
        bVar1 = Sexy::RtObject::IsA<ZombieBasic>((RtObject *)*puVar5);
        uVar8 = local_20;
        if (bVar1) {
          FUN_03dfa3c8(local_20,uVar7);
          nop();
          if (this == (Zombie *)0x0) {
            uVar4 = FUN_03dfa3bc(uVar8,local_18);
            goto LAB_03dfb8b8;
          }
          this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          bVar1 = std::operator==((string *)(lVar6 + 8),"kongfu_basic");
          if (bVar1) {
LAB_03dfb858:
            bVar1 = *(int *)(in_x0 + 0x194) - 1U < 5;
          }
          else {
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
            bVar1 = std::operator==((string *)(lVar6 + 8),"kongfu_basic_armor1");
            if (bVar1) goto LAB_03dfb858;
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
            bVar1 = std::operator==((string *)(lVar6 + 8),"kongfu_basic_armor2");
            if (bVar1) goto LAB_03dfb858;
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
            bVar1 = std::operator==((string *)(lVar6 + 8),"kongfu_basic_armor3");
            if (bVar1) goto LAB_03dfb858;
            bVar1 = false;
          }
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          bVar2 = std::operator==((string *)(lVar6 + 8),"kongfu_monk_basic");
          if (bVar2) {
LAB_03dfb884:
            if ((2 < *(int *)(in_x0 + 0x194) - 5U) && (*(int *)(in_x0 + 0x194) != 3))
            goto LAB_03dfb89c;
          }
          else {
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
            bVar2 = std::operator==((string *)(lVar6 + 8),"kongfu_monk_bucket");
            if (bVar2) goto LAB_03dfb884;
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
            bVar2 = std::operator==((string *)(lVar6 + 8),"kongfu_monk_cone");
            if (bVar2) goto LAB_03dfb884;
LAB_03dfb89c:
            if (!bVar1) goto LAB_03dfb8a0;
          }
          this_01 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(this);
          iVar3 = ZombieAnimRig_Basic::GetHelm((ZombieAnimRig_Basic *)this_01);
          if ((iVar3 == 0) &&
             (fVar10 = (float)FUN_03dfa3d0(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c)
                                           ,*(undefined4 *)(this + 0x20)), fVar10 < fVar9)) {
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      ((RtWeakPtr<SpartanBambooMatrixSystem> *)in_x8,(RtWeakPtrBase *)aRStack_38);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
            fVar9 = (float)FUN_03dfa3d0(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                                        *(undefined4 *)(this + 0x20));
            uVar8 = local_20;
            uVar4 = FUN_03dfa3bc(local_20,local_18);
            goto LAB_03dfb8b8;
          }
        }
LAB_03dfb8a0:
        uVar8 = local_20;
        uVar4 = FUN_03dfa3bc(local_20,local_18);
      }
LAB_03dfb8b8:
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArmrack::onUpdate() */

void __thiscall GridItemArmrack::onUpdate(GridItemArmrack *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  Plant *this_00;
  PlantSquash *pPVar8;
  ulong uVar9;
  PopAnimRig *pPVar10;
  RtObject *this_01;
  BoardEntity *this_02;
  undefined8 uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  float local_24;
  float local_20;
  undefined1 local_1c;
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  uVar12 = 0;
  uVar3 = FUN_03dfa374(*(undefined4 *)(this + 0x130));
  uVar4 = FUN_03dfa378(*(undefined4 *)(this + 0x134));
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50,1,uVar3,
             uVar4);
  uVar11 = local_50;
  lVar7 = FUN_03dfa3bc(local_50,local_48);
  if (lVar7 != 0) {
    do {
      FUN_03dfa3c8(uVar11,uVar12);
      nop();
      if (((*(RtObject **)(this_00 + 0xa8) == (RtObject *)0x0) ||
          (pPVar8 = Sexy::RtObject::Cast<PlantSquash>(*(RtObject **)(this_00 + 0xa8)),
          pPVar8 == (PlantSquash *)0x0)) || (*(int *)(*(long *)(pPVar8 + 0x10) + 200) == 4)) {
        Plant::clearRelocationEvents(this_00);
        uVar4 = *(undefined4 *)(this_00 + 0x1c);
        uVar3 = FUN_03dfa3d0(*(undefined4 *)(this_00 + 0x18),uVar4,*(undefined4 *)(this_00 + 0x20));
        RelocationEvent::RelocationEvent((RelocationEvent *)&local_38);
        local_38 = uVar3;
        local_34 = uVar4;
        local_24 = (float)PVZ_T();
        local_20 = local_24 + 1.0;
        iVar5 = BoardTransforms::BoardSpaceToGridXUnbounded(-100);
        iVar5 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar5);
        local_18 = 2;
        local_30 = (float)iVar5;
        local_1c = 1;
        local_2c = local_34;
        Plant::addRelocationEvent(this_00,(RelocationEvent *)&local_38);
      }
      uVar11 = local_50;
      uVar12 = uVar12 + 1;
      uVar9 = FUN_03dfa3bc(local_50,local_48);
    } while (uVar12 < uVar9);
  }
  iVar5 = *(int *)(this + 0x198);
  do {
    if (iVar5 == 0) {
      if (this[0x1ac] != (GridItemArmrack)0x0) break;
      spawnArmrack(this);
      this[0x1ac] = (GridItemArmrack)0x1;
      iVar6 = *(int *)(this + 0x198);
    }
    else {
      if ((iVar5 != 1) || (this[0x1ae] != (GridItemArmrack)0x0)) break;
      findNearZombieTarget();
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_38);
      if (cVar2 != '\0') {
        this_01 = (RtObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
        bVar1 = Sexy::RtObject::IsA<ZombieBasic>(this_01);
        if (bVar1) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
          nop();
          if (((this_02 != (BoardEntity *)0x0) &&
              (cVar2 = (**(code **)(*(long *)this_02 + 0x328))(), cVar2 == '\0')) &&
             ((*(long *)(gLawnApp + 0x9f0) != 0 &&
              (iVar6 = BoardEntity::CalcColumnPosition(this_02),
              iVar6 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8))))) {
            ZombieBasic::PlaySurPrise((ZombieBasic *)this_02);
            this[0x1ae] = (GridItemArmrack)0x1;
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      iVar6 = *(int *)(this + 0x198);
    }
    bVar1 = iVar6 != iVar5;
    iVar5 = iVar6;
  } while (bVar1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1c0));
  if (bVar1) {
    pPVar10 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
    fVar13 = (float)PVZ_T();
    fVar14 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar10,fVar13,fVar14);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1b8));
  if (bVar1) {
    pPVar10 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
    fVar13 = (float)PVZ_T();
    fVar14 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar10,fVar13,fVar14);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArmrack::ArmZombie(Sexy::RtWeakPtr<ZombieType const>) const */

void GridItemArmrack::ArmZombie
               (undefined8 param_1,long param_2,RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  bool bVar1;
  long lVar2;
  string *psVar3;
  undefined1 *__n;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  __n = auStack_18;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"");
  nop();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  bVar1 = std::operator==("kongfu_basic",(string *)(lVar2 + 8));
  if (!bVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
    bVar1 = std::operator==("kongfu_basic_armor1",(string *)(lVar2 + 8));
    if (!bVar1) {
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
      bVar1 = std::operator==("kongfu_basic_armor2",(string *)(lVar2 + 8));
      if (!bVar1) {
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
        bVar1 = std::operator==("kongfu_basic3",(string *)(lVar2 + 8));
        if (!bVar1) {
          lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
          bVar1 = std::operator==("kongfu_monk_basic",(string *)(lVar2 + 8));
          if (!bVar1) {
            lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
            bVar1 = std::operator==("kongfu_monk_bucket",(string *)(lVar2 + 8));
            if (!bVar1) {
              lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
              bVar1 = std::operator==("kongfu_monk_cone",(string *)(lVar2 + 8));
              if (!bVar1) goto switchD_03dfbe60_default;
            }
          }
          switch(*(undefined4 *)(param_2 + 0x194)) {
          case 3:
            std::string::append(asStack_10,"kongfu_monk_flag",(size_t)__n);
            break;
          case 5:
            std::string::append(asStack_10,"kongfu_monk_torch",(size_t)__n);
            break;
          case 6:
            std::string::append(asStack_10,"kongfu_monk_blade",(size_t)__n);
            break;
          case 7:
            std::string::append(asStack_10,"kongfu_monk_nunchaku",(size_t)__n);
          }
          goto switchD_03dfbe60_default;
        }
      }
    }
  }
  switch(*(undefined4 *)(param_2 + 0x194)) {
  case 1:
    std::string::append(asStack_10,"kongfu_hammer",(size_t)__n);
    break;
  case 2:
    std::string::append(asStack_10,"kongfu_basic_armor3",(size_t)__n);
    break;
  case 3:
    std::string::append(asStack_10,"kongfu_flag",(size_t)__n);
    break;
  case 4:
    std::string::append(asStack_10,"kongfu_selfexplode",(size_t)__n);
    break;
  case 5:
    std::string::append(asStack_10,"kongfu_torch",(size_t)__n);
  }
switchD_03dfbe60_default:
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArmrack::StaticClassInit() */

void GridItemArmrack::StaticClassInit(void)

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
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"ArmrackHammer",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"ArmrackArmor",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 3;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"ArmrackFlag",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 4;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"ArmrackBomb",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 5;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"ArmrackTorch",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 7;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"ArmrackNunchaku",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 6;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"ArmrackBlade",(MagicianActionStatus *)local_38);
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
    std::string::string((string *)apStack_30,"ArmrackType");
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
    std::string::string((string *)avStack_20,"GridItemArmrack");
    (*pcVar3)(plVar2,avStack_20,FUN_03dfc2f4,0x1c8,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemArmrack::StaticGetClass() */

long * GridItemArmrack::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemArmrack",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemArmrack::GetClass() const */

long * GridItemArmrack::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemArmrack",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArmrack::onDestroy() */

void __thiscall GridItemArmrack::onDestroy(GridItemArmrack *this)

{
  bool bVar1;
  long *plVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1c0));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
    (**(code **)(*plVar2 + 0x48))();
    std::string::string(asStack_10,"Play_Zomb_Kongfu_Armrack_Death");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  GridItem::onDestroy((GridItem *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArmrack::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemArmrack::GatherPlantingRestrictions
          (GridItemArmrack *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  local_c = 4;
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

