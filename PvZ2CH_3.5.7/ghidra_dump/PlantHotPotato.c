// Class: PlantHotPotato


/* PlantHotPotato::CalcRenderOrder() */

void __thiscall PlantHotPotato::CalcRenderOrder(PlantHotPotato *this)

{
  float *pfVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  
  this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_00);
  Board::MakeRenderOrder(0x639c0,*(undefined4 *)(this_00 + 0x110),(int)(800.0 - *pfVar1));
  return;
}


/* PlantHotPotato::PlantHotPotato() */

void __thiscall PlantHotPotato::PlantHotPotato(PlantHotPotato *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067d36d0;
  DVec3::DVec3((DVec3 *)(this + 0x34));
  DVec3::DVec3((DVec3 *)(this + 0x40));
  return;
}


/* PlantHotPotato::StaticNew() */

PlantHotPotato * PlantHotPotato::StaticNew(void)

{
  PlantHotPotato *this;
  
  this = ::operator_new(0x50);
  PlantHotPotato(this);
  return this;
}


/* PlantHotPotato::endCurrentState(HotPotatoState const&) */

void PlantHotPotato::endCurrentState(HotPotatoState *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x28) == 1) {
    uVar2 = PVZ_EOT();
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    lVar1 = **(long **)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    (**(code **)(lVar1 + 0x78))(*(long **)(param_1 + 0x10),param_1 + 0x40);
  }
  return;
}


/* PlantHotPotato::~PlantHotPotato() */

void __thiscall PlantHotPotato::~PlantHotPotato(PlantHotPotato *this)

{
  *(undefined ***)this = &PTR_GetClass_067d36d0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantHotPotato::~PlantHotPotato() */

void __thiscall PlantHotPotato::~PlantHotPotato(PlantHotPotato *this)

{
  ~PlantHotPotato(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHotPotato::updatePlantMeltingPosition() */

void __thiscall PlantHotPotato::updatePlantMeltingPosition(PlantHotPotato *this)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  fVar3 = *(float *)(this + 0x30);
  fVar1 = *(float *)(this + 0x2c);
  local_8 = ___stack_chk_guard;
  uVar2 = PVZ_T();
  local_14 = fVar3;
  local_18 = CurveLerp(fVar3 - fVar1,this + 0x34,this + 0x40,1);
  local_10 = uVar2;
  (**(code **)(**(long **)(this + 0x10) + 0x78))(*(long **)(this + 0x10),&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHotPotato::spawnSteamCloud() */

void __thiscall PlantHotPotato::spawnSteamCloud(PlantHotPotato *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar5;
  string asStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardTransforms::GridToBoardSpaceX(*(int *)(*(long *)(this + 0x10) + 0x114));
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar3 = BoardTransforms::GridToBoardSpaceY(*(int *)(*(long *)(this + 0x10) + 0x110));
  iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
  EATextSquish::Vec3::Vec3
            (aVStack_18,(float)iVar1 - (float)iVar2 * 1.5,(float)iVar3 - (float)iVar4 * 1.5,0.0);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_HOTPOTATO_ICEBLOCK_STEAMFX");
  GetPAMByName(asStack_28);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar5,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::~string(asStack_28);
  nop();
  iVar1 = (**(code **)(*(long *)this + 0x88))(this);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_18,iVar1 + 0x65130);
  std::string::string((string *)aRStack_20,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_20,0);
  std::string::~string((string *)aRStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHotPotato::getTarget() const */

void __thiscall PlantHotPotato::getTarget(PlantHotPotato *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 extraout_x0;
  long extraout_x0_00;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar1 = *(undefined4 *)(*(long *)(this + 0x10) + 0x114);
  uVar2 = *(undefined4 *)(*(long *)(this + 0x10) + 0x110);
  uVar5 = GridItemBreakableTarget::StaticGetClass();
  EntityFinder::GetEntitiesAtGridSquareMatchingClass(avStack_20,4,uVar1,uVar2,uVar5);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar4 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar4) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    nop();
    Plant::GetType();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    cVar3 = GridItemRestrictionSet::IsIncluded((GridItem *)(extraout_x0_00 + 0x138));
    uVar5 = extraout_x0;
    if (cVar3 != '\0') goto LAB_040b03dc;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  uVar5 = 0;
LAB_040b03dc:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* PlantHotPotato::acquireTarget() */

void __thiscall PlantHotPotato::acquireTarget(PlantHotPotato *this)

{
  RtObject *this_00;
  GridItemBreakableTarget *pGVar1;
  
  this_00 = (RtObject *)getTarget(this);
  if (this_00 != (RtObject *)0x0) {
    pGVar1 = Sexy::RtObject::Cast<GridItemBreakableTarget>(this_00);
    (**(code **)(*(long *)pGVar1 + 0x2b8))(pGVar1,1);
  }
  return;
}


/* PlantHotPotato::getIceBlockHeight() const */

undefined4 __thiscall PlantHotPotato::getIceBlockHeight(PlantHotPotato *this)

{
  bool bVar1;
  RtObject *this_00;
  
  this_00 = (RtObject *)getTarget(this);
  if ((this_00 != (RtObject *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<GridItemPlantConditionTarget>(this_00), bVar1)) {
    return 0x42580000;
  }
  return 0x42a00000;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHotPotato::beginCurrentState(HotPotatoState const&) */

void PlantHotPotato::beginCurrentState(HotPotatoState *param_1)

{
  long lVar1;
  SexyVector3 *pSVar2;
  PlantAnimRig_HotPotato *pPVar3;
  float fVar4;
  undefined4 uVar5;
  RtMixedPtr aRStack_78 [8];
  Vec3 aVStack_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x28) == 0) {
    acquireTarget((PlantHotPotato *)param_1);
    pSVar2 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(param_1 + 0x10));
    Sexy::SexyVector3::operator=((SexyVector3 *)(param_1 + 0x40),pSVar2);
    fVar4 = (float)getIceBlockHeight((PlantHotPotato *)param_1);
    uVar5 = 0;
    EATextSquish::Vec3::Vec3(aVStack_70,0.0,0.0,fVar4);
    local_60 = Sexy::SexyVector3::operator+
                         ((SexyVector3 *)(param_1 + 0x40),(SexyVector3 *)aVStack_70);
    local_5c = uVar5;
    local_58 = fVar4;
    Sexy::SexyVector3::operator=((SexyVector3 *)(param_1 + 0x34),(SexyVector3 *)&local_60);
    (**(code **)(**(long **)(param_1 + 0x10) + 0x78))
              (*(long **)(param_1 + 0x10),(SexyVector3 *)(param_1 + 0x34));
    pPVar3 = (PlantAnimRig_HotPotato *)FUN_040b0190(*(undefined8 *)(param_1 + 0x10));
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
    std::string::string((string *)&local_60,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aVStack_70,
               (string *)&local_60);
    PlantAnimRig_HotPotato::PlayPlantAnim(pPVar3,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)&local_60);
    nop();
    Sexy::RtId::~RtId((RtId *)aVStack_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  }
  else if (*(int *)(param_1 + 0x28) == 1) {
    lVar1 = FUN_040b0218(*(undefined8 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar1 + 0x2b8);
    fVar4 = (float)PVZ_T();
    *(float *)(param_1 + 0x30) = fVar4 + *(float *)(param_1 + 0x2c);
    spawnSteamCloud((PlantHotPotato *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHotPotato::setState(HotPotatoState const&) */

void __thiscall PlantHotPotato::setState(PlantHotPotato *this,HotPotatoState *param_1)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)param_1 != *(int *)(this + 0x28)) {
    endCurrentState((HotPotatoState *)this);
    *(undefined4 *)(this + 0x28) = *(undefined4 *)param_1;
    beginCurrentState((HotPotatoState *)this);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHotPotato::Initialize() */

void __thiscall PlantHotPotato::Initialize(PlantHotPotato *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  uVar2 = PVZ_EOT();
  this[0x4c] = (PlantHotPotato)0x0;
  *(undefined4 *)(this + 0x2c) = uVar2;
  *(undefined4 *)(this + 0x30) = uVar2;
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    local_c = 0;
    setState(this,(HotPotatoState *)&local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHotPotato::OnAnimCommand(std::string const&, std::string const&) */

void __thiscall PlantHotPotato::OnAnimCommand(PlantHotPotato *this,string *param_1,string *param_2)

{
  bool bVar1;
  string *psVar2;
  string *psVar3;
  undefined4 local_c;
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==("use_action",param_1);
  if (bVar1) {
    local_c = 1;
    setState(this,(HotPotatoState *)&local_c);
    psVar2 = (string *)0x1;
    psVar3 = ___stack_chk_guard;
    param_2 = local_8;
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    psVar2 = ___stack_chk_guard;
    psVar3 = local_8;
    if (local_8 == ___stack_chk_guard) {
      PlantFramework::OnAnimCommand((string *)this,param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(psVar2,psVar3,param_2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHotPotato::destroyIceBlock() const */

void __thiscall PlantHotPotato::destroyIceBlock(PlantHotPotato *this)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)getTarget(this);
  if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x110);
    uVar3 = *(undefined8 *)(this + 0x10);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,aDStack_68,2,uVar3,aPStack_78,0);
    (*pcVar2)(plVar1,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
    destroyIceBlock(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHotPotato::spawnPuddle() */

void __thiscall PlantHotPotato::spawnPuddle(PlantHotPotato *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar5;
  string asStack_40 [8];
  string asStack_38 [8];
  Vec3 aVStack_30 [16];
  PIInterpolator aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardTransforms::GridToBoardSpaceX(*(int *)(*(long *)(this + 0x10) + 0x114));
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar3 = BoardTransforms::GridToBoardSpaceY(*(int *)(*(long *)(this + 0x10) + 0x110));
  iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
  EATextSquish::Vec3::Vec3
            (aVStack_30,(float)iVar1 - (float)iVar2 * 1.5,((float)iVar3 - (float)iVar4 * 1.5) - 12.0
             ,0.0);
  Sexy::PIInterpolator::PIInterpolator(aPStack_20);
  std::string::string(asStack_38,"animation");
  AnimationSequence::AddSingleAnimation(aPStack_20,asStack_38,1);
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"animation2");
  AnimationSequence::AddSingleAnimation(aPStack_20,asStack_38,1);
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"animation3");
  AnimationSequence::AddSingleAnimation(aPStack_20,asStack_38,1);
  std::string::~string(asStack_38);
  nop();
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_40,"POPANIM_EFFECTS_HOTPOTATO_ICEBLOCK_PUDDLE");
  GetPAMByName(asStack_40);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_38);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar5,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
  std::string::~string(asStack_40);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_30,0x61a85);
  Effect_PopAnim::PlayAnimationSequence(this_00,(AnimationSequence *)aPStack_20);
  this[0x4c] = (PlantHotPotato)0x1;
  AnimationSequence::~AnimationSequence((AnimationSequence *)aPStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHotPotato::updateMeltedIce() */

void __thiscall PlantHotPotato::updateMeltedIce(PlantHotPotato *this)

{
  GridItemAnimation *this_00;
  AttachedEffect *this_01;
  long *plVar1;
  float fVar2;
  float fVar3;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (GridItemAnimation *)getTarget(this);
  fVar3 = *(float *)(this + 0x30);
  fVar2 = (float)PVZ_T();
  fVar2 = (fVar3 - fVar2) / *(float *)(this + 0x2c);
  if (this_00 != (GridItemAnimation *)0x0) {
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,1.0,fVar2);
    FUN_040af638(local_10,local_c,this_00 + 0x1b0);
    this_01 = (AttachedEffect *)GridItemAnimation::GetLinkedEffect(this_00);
    if (this_01 != (AttachedEffect *)0x0) {
      plVar1 = (long *)AttachedEffect::GetEffect(this_01);
      (**(code **)(*plVar1 + 0xb8))(0x3f800000,fVar2);
    }
  }
  if ((fVar2 <= 0.3) && (this[0x4c] == (PlantHotPotato)0x0)) {
    spawnPuddle(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHotPotato::updateMeltingBlockState() */

void __thiscall PlantHotPotato::updateMeltingBlockState(PlantHotPotato *this)

{
  float fVar1;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x30) <= fVar1) {
    destroyIceBlock(this);
    local_c = 2;
    setState(this,(HotPotatoState *)&local_c);
  }
  else {
    updatePlantMeltingPosition(this);
    updateMeltedIce(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHotPotato::updateCurrentState() */

void __thiscall PlantHotPotato::updateCurrentState(PlantHotPotato *this)

{
  if (*(int *)(this + 0x28) == 1) {
    updateMeltingBlockState(this);
    return;
  }
  return;
}


/* PlantHotPotato::UpdateActions() */

void __thiscall PlantHotPotato::UpdateActions(PlantHotPotato *this)

{
  if (*(int *)(this + 0x28) == 1) {
    updateMeltingBlockState(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHotPotato::StaticClassInit() */

void PlantHotPotato::StaticClassInit(void)

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
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"HOTPOTATOSTATE_LANDING",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"HOTPOTATOSTATE_MELTINGBLOCK",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"HOTPOTATOSTATE_FADINGOUT",(MagicianActionStatus *)local_38);
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
    std::string::string((string *)apStack_30,"HotPotatoState");
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
    std::string::string((string *)avStack_20,"PlantHotPotato");
    (*pcVar3)(plVar2,avStack_20,FUN_040b0f7c,0x50,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHotPotato::StaticGetClass() */

long * PlantHotPotato::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantHotPotato",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHotPotato::GetClass() const */

long * PlantHotPotato::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantHotPotato",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

