// Class: SharkMinion


/* SharkMinion::PatrolRow() */

void __thiscall SharkMinion::PatrolRow(SharkMinion *this)

{
  this[0x170] = (SharkMinion)0x1;
  return;
}


/* SharkMinion::getRow() const */

void __thiscall SharkMinion::getRow(SharkMinion *this)

{
  BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(this + 0x1c));
  return;
}


/* SharkMinion::GetGridExtents() const */

Point * __thiscall SharkMinion::GetGridExtents(SharkMinion *this)

{
  Point *in_x8;
  
  Sexy::Point::Point(in_x8,2,1);
  return in_x8;
}


/* SharkMinion::updateState_IntroPan() */

void __thiscall SharkMinion::updateState_IntroPan(SharkMinion *this)

{
  (**(code **)(*(long *)this + 0x1f8))();
  return;
}


/* SharkMinion::onExitState_Submerging(SharkMinionState) */

void SharkMinion::onExitState_Submerging(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(param_1 + 0x150) = uVar1;
  *(undefined4 *)(param_1 + 0x154) = uVar1;
  return;
}


/* SharkMinion::onExitState_Attacking(SharkMinionState) */

void SharkMinion::onExitState_Attacking(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(param_1 + 0x150) = uVar1;
  *(undefined4 *)(param_1 + 0x154) = uVar1;
  *(undefined8 *)(param_1 + 0x174) = DAT_06b2aca8;
  return;
}


/* SharkMinion::SetParameters(SharkMinionParameters const&) */

void __thiscall SharkMinion::SetParameters(SharkMinion *this,SharkMinionParameters *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x17c) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x184) = uVar1;
  *(undefined4 *)(this + 0x18c) = *(undefined4 *)(param_1 + 0x10);
  return;
}


/* SharkMinion::getStateSerialization() */

void __thiscall SharkMinion::getStateSerialization(SharkMinion *this)

{
  FUN_0483b610(*(undefined4 *)(this + 0xa8));
  return;
}


/* SharkMinion::isInState(SharkMinionState) const */

bool __thiscall SharkMinion::isInState(SharkMinion *this,int param_2)

{
  int iVar1;
  
  iVar1 = getStateSerialization(this);
  return iVar1 == param_2;
}


/* SharkMinion::~SharkMinion() */

void __thiscall SharkMinion::~SharkMinion(SharkMinion *this)

{
  *(undefined ***)this = &PTR_GetClass_06908ee0;
  *(undefined ***)(this + 0x10) = &PTR__SharkMinion_06909158;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x148));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to SharkMinion::~SharkMinion() */

void __thiscall SharkMinion::~SharkMinion(SharkMinion *this)

{
  ~SharkMinion(this + -0x10);
  return;
}


/* SharkMinion::~SharkMinion() */

void __thiscall SharkMinion::~SharkMinion(SharkMinion *this)

{
  ~SharkMinion(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SharkMinion::~SharkMinion() */

void __thiscall SharkMinion::~SharkMinion(SharkMinion *this)

{
  ~SharkMinion(this + -0x10);
  return;
}


/* SharkMinion::onUpdate() */

void __thiscall SharkMinion::onUpdate(SharkMinion *this)

{
  StateMachine<SharkMinionState>::UpdateState((StateMachine<SharkMinionState> *)(this + 0xa8));
  return;
}


/* SharkMinion::hasAttackTargetPosition() const */

void __thiscall SharkMinion::hasAttackTargetPosition(SharkMinion *this)

{
  Sexy::TPoint<int>::operator!=((TPoint<int> *)(this + 0x174),(TPoint *)&DAT_06b2aca8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SharkMinion::canAttackEntity(BoardEntity const*) const */

void __thiscall SharkMinion::canAttackEntity(SharkMinion *this,BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  SexyVector3 *pSVar4;
  long lVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar4 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  cVar1 = RealObject::IsOnWaterTile((RealObject *)this,pSVar4);
  bVar3 = false;
  if (cVar1 == '\0') goto LAB_0483bbbc;
  if (param_1 != (BoardEntity *)0x0) {
    bVar2 = Sexy::RtObject::IsA<PlantGroup>((RtObject *)param_1);
    bVar3 = true;
    if (bVar2) goto LAB_0483bbbc;
    bVar3 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
    if (bVar3) {
      Sexy::RtObject::Cast<GridItem>((RtObject *)param_1);
      GridItem::GetType();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      bVar3 = std::operator==((string *)(lVar5 + 8),"lilypad");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      goto LAB_0483bbbc;
    }
  }
  bVar3 = false;
LAB_0483bbbc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SharkMinion::getIdleEffectPosition() const */

void __thiscall SharkMinion::getIdleEffectPosition(SharkMinion *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int in_w4;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar5 = getRow(this);
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(ulong)(iVar4 - 1),iVar5,1,1,in_w4);
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_30,(TPoint *)&local_28);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,(float)local_30,(float)local_2c,0.0);
  local_18 = local_28;
  uVar2 = local_18;
  local_10 = local_20;
  local_18._0_4_ = (undefined4)local_28;
  uVar1 = (undefined4)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar3 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_18 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar3,local_20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SharkMinion::getIntroPanEffectPosition() const */

void SharkMinion::getIntroPanEffectPosition(void)

{
  int iVar1;
  int iVar2;
  SharkMinion *in_x0;
  float fVar3;
  undefined4 in_s1;
  undefined4 in_s2;
  float local_20 [6];
  long local_8;
  
  local_20[3] = 20.0;
  local_8 = ___stack_chk_guard;
  local_20[0] = 2.8;
  local_20[1] = 5.6;
  local_20[2] = 3.6;
  local_20[4] = 2.2;
  fVar3 = (float)getIdleEffectPosition(in_x0);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = getRow(in_x0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar3 + (float)iVar1 * local_20[iVar2],in_s1,in_s2);
}


/* SharkMinion::getSubmergeEffectPosition() const */

float __thiscall SharkMinion::getSubmergeEffectPosition(SharkMinion *this)

{
  int iVar1;
  float fVar2;
  
  fVar2 = (float)getIdleEffectPosition(this);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  return fVar2 - *(float *)(this + 0x188) * (float)iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SharkMinion::getOffscreenEffectPosition() const */

void __thiscall SharkMinion::getOffscreenEffectPosition(SharkMinion *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int in_w4;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar5 = getRow(this);
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(ulong)(iVar4 + 1),iVar5,1,1,in_w4);
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_30,(TPoint *)&local_28);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,(float)local_30,(float)local_2c,0.0);
  local_18 = local_28;
  uVar2 = local_18;
  local_10 = local_20;
  local_18._0_4_ = (undefined4)local_28;
  uVar1 = (undefined4)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar3 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_18 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar3,local_20);
}


/* SharkMinion::onEnterState_Hidden(SharkMinionState) */

void SharkMinion::onEnterState_Hidden(long param_1)

{
  StandaloneEffect *this;
  
  *(undefined1 *)(param_1 + 0x171) = 0;
  this = (StandaloneEffect *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x148));
  StandaloneEffect::SetVisibility(this,false);
  return;
}


/* SharkMinion::onExitState_Hidden(SharkMinionState) */

void SharkMinion::onExitState_Hidden(long param_1)

{
  StandaloneEffect *this;
  
  this = (StandaloneEffect *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x148));
  StandaloneEffect::SetVisibility(this,true);
  return;
}


/* SharkMinion::onEnterState_Attacking(SharkMinionState) */

void SharkMinion::onEnterState_Attacking(long param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(param_1 + 0x150) = fVar1;
  *(float *)(param_1 + 0x154) = fVar1 + *(float *)(param_1 + 0x18c);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SharkMinion::updateState_Submerging() */

void __thiscall SharkMinion::updateState_Submerging(SharkMinion *this)

{
  StandaloneEffect *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x148));
  uVar3 = *(undefined4 *)(this + 0x150);
  uVar2 = *(undefined4 *)(this + 0x154);
  uVar1 = PVZ_T();
  local_14 = uVar2;
  local_18 = CurveLerp(uVar3,this + 0x158,this + 0x164,1);
  local_10 = uVar1;
  StandaloneEffect::SetBoardSpaceOrigin(this_00,(SexyVector3 *)&local_18,-1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SharkMinion::onEnterState_IntroPan(SharkMinionState) */

void SharkMinion::onEnterState_IntroPan
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  StandaloneEffect *this_00;
  Effect_PopAnim *pEVar1;
  UIWidget *this_01;
  PopAnimRig *this_02;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  this = (RtWeakPtr<Sexy::ResourceInfo> *)(param_4 + 0x148);
  local_8 = ___stack_chk_guard;
  this_00 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  local_18 = getIntroPanEffectPosition();
  local_14 = param_2;
  local_10 = param_3;
  StandaloneEffect::SetBoardSpaceOrigin(this_00,(SexyVector3 *)&local_18,-1);
  pEVar1 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  std::string::string((string *)&local_18,"idle");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar1,(string *)&local_18,0);
  std::string::~string((string *)&local_18);
  nop();
  this_01 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  this_02 = (PopAnimRig *)UIWidget::GetAtlasImage(this_01);
  PopAnimRig::RandomizeCurrentAnimFrame(this_02);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SharkMinion::onEnterState_Appearing(SharkMinionState) */

void SharkMinion::onEnterState_Appearing
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               SharkMinion *param_4)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  StandaloneEffect *this_00;
  Effect_PopAnim *pEVar1;
  UIWidget *this_01;
  PopAnimRig *this_02;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  this = (RtWeakPtr<Sexy::ResourceInfo> *)(param_4 + 0x148);
  local_8 = ___stack_chk_guard;
  fVar2 = (float)Sexy::Rand(*(float *)(param_4 + 0x180));
  fVar3 = (float)PVZ_T();
  fVar4 = *(float *)(param_4 + 0x17c);
  *(float *)(param_4 + 0x150) = fVar3 + fVar2;
  *(float *)(param_4 + 0x154) = fVar2 + fVar4 + fVar3 + fVar2;
  local_18 = getOffscreenEffectPosition(param_4);
  local_14 = fVar4;
  local_10 = param_3;
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x158),(SexyVector3 *)&local_18);
  local_18 = getIdleEffectPosition(param_4);
  local_14 = fVar4;
  local_10 = param_3;
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x164),(SexyVector3 *)&local_18);
  this_00 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  StandaloneEffect::SetBoardSpaceOrigin(this_00,(SexyVector3 *)(param_4 + 0x158),-1);
  pEVar1 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  std::string::string((string *)&local_18,"walk");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar1,(string *)&local_18,0);
  std::string::~string((string *)&local_18);
  nop();
  this_01 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  this_02 = (PopAnimRig *)UIWidget::GetAtlasImage(this_01);
  PopAnimRig::RandomizeCurrentAnimFrame(this_02);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SharkMinion::createSharkEffect() */

void SharkMinion::createSharkEffect(void)

{
  SharkMinion *in_x0;
  Effect_PopAnim *this;
  ResourceInfo *pRVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  string asStack_20 [8];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_ZOMBOSS_SHARK_PROJECTILE");
  GetPAMByName(asStack_20);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_18);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  std::string::~string(asStack_20);
  nop();
  pPVar2 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
  std::string::string((string *)local_18,"ground_swatch");
  PopAnimRig::SetLayerVisibility(pPVar2,(string *)local_18,false);
  std::string::~string((string *)local_18);
  nop();
  pPVar2 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
  std::string::string((string *)local_18,"ground_swatch_plane");
  PopAnimRig::SetLayerVisibility(pPVar2,(string *)local_18,false);
  std::string::~string((string *)local_18);
  nop();
  Effect_PopAnim::SetCentered(this,true);
  local_18[0] = getIdleEffectPosition(in_x0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)local_18,-1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SharkMinion::SharkMinion() */

void __thiscall SharkMinion::SharkMinion(SharkMinion *this)

{
  undefined4 uVar1;
  
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_06908ee0;
  *(undefined ***)(this + 0x10) = &PTR__SharkMinion_06909158;
  StateMachine<SharkMinionState>::StateMachine((StateMachine<SharkMinionState> *)(this + 0xa8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x148));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x150) = uVar1;
  *(undefined4 *)(this + 0x154) = uVar1;
  DVec3::DVec3((DVec3 *)(this + 0x158));
  DVec3::DVec3((DVec3 *)(this + 0x164));
  this[0x170] = (SharkMinion)0x0;
  this[0x171] = (SharkMinion)0x0;
  Sexy::Point::Point((Point *)(this + 0x174));
  SharkMinionParameters::SharkMinionParameters((SharkMinionParameters *)(this + 0x17c));
  return;
}


/* SharkMinion::StaticNew() */

SharkMinion * SharkMinion::StaticNew(void)

{
  SharkMinion *this;
  
  this = ::operator_new(400);
  SharkMinion(this);
  return this;
}


/* SharkMinion::registerForEvents() */

void __thiscall SharkMinion::registerForEvents(SharkMinion *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGatherPlantingRestrictions);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<SharkMinion,void(SharkMinion::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SharkMinion::playIdleAnim() */

void __thiscall SharkMinion::playIdleAnim(SharkMinion *this)

{
  UIWidget *this_00;
  PopAnimRig *pPVar1;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIWidget *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x148));
  pPVar1 = (PopAnimRig *)UIWidget::GetAtlasImage(this_00);
  std::string::string(asStack_58,"idle");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onIdleAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SharkMinion::onEnterState_Idle(SharkMinionState) */

void SharkMinion::onEnterState_Idle
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,SharkMinion *param_4)

{
  StandaloneEffect *this;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (StandaloneEffect *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_4 + 0x148));
  local_18 = getIdleEffectPosition(param_4);
  local_14 = param_2;
  local_10 = param_3;
  StandaloneEffect::SetBoardSpaceOrigin(this,(SexyVector3 *)&local_18,-1);
  playIdleAnim(param_4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SharkMinion::onEnterState_Submerging(SharkMinionState) */

void SharkMinion::onEnterState_Submerging
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               SharkMinion *param_4)

{
  StandaloneEffect *this;
  UIWidget *this_00;
  PopAnimRig *pPVar1;
  float fVar2;
  float fVar3;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  string asStack_68 [8];
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  param_4[0x171] = (SharkMinion)0x0;
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  fVar3 = *(float *)(param_4 + 0x184);
  *(float *)(param_4 + 0x150) = fVar2;
  *(float *)(param_4 + 0x154) = fVar2 + fVar3;
  local_60 = getIdleEffectPosition(param_4);
  local_5c = fVar3;
  local_58 = param_3;
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x158),(SexyVector3 *)&local_60);
  local_60 = getSubmergeEffectPosition(param_4);
  local_5c = fVar3;
  local_58 = param_3;
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x164),(SexyVector3 *)&local_60);
  this = (StandaloneEffect *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_4 + 0x148));
  StandaloneEffect::SetBoardSpaceOrigin(this,(SexyVector3 *)(param_4 + 0x158),-1);
  this_00 = (UIWidget *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(param_4 + 0x148));
  pPVar1 = (PopAnimRig *)UIWidget::GetAtlasImage(this_00);
  std::string::string((string *)&local_60,"submerge");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string(asStack_68,"onSubmergeAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_70,
             asStack_68);
  PopAnimRig::PlayAndStop(pPVar1,(string *)&local_60,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtId::~RtId(aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  std::string::~string((string *)&local_60);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SharkMinion::getAttackableEntitiesAtGridSquare(Sexy::Point const&, std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&) const */

void __thiscall
SharkMinion::getAttackableEntitiesAtGridSquare(SharkMinion *this,Point *param_1,vector *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  BoardEntity **ppBVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = operator|(0x10,4);
  EntityFinder::GetEntitiesAtGridSquare
            (avStack_20,uVar3,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    ppBVar4 = (BoardEntity **)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    cVar2 = canAttackEntity(this,*ppBVar4);
    if (cVar2 != '\0') {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_2,ppBVar4);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SharkMinion::pickAttackTargetPosition() const */

void SharkMinion::pickAttackTargetPosition(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  SharkMinion *in_x0;
  undefined8 *puVar4;
  BoardTransforms *this;
  long lVar5;
  Point *in_x8;
  int iVar6;
  undefined8 local_68;
  undefined8 local_60;
  Point aPStack_58 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  iVar6 = 0;
  iVar2 = getRow(in_x0);
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  if (0 < iVar3) {
    do {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
      Sexy::Point::Point(aPStack_58,iVar6,iVar2);
      getAttackableEntitiesAtGridSquare(in_x0,aPStack_58,(vector *)avStack_50);
      local_68 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_50);
      local_60 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_50);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60),
            bVar1) {
        puVar4 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
        this = (BoardTransforms *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)*puVar4);
        BoardTransforms::BoardSpaceToGrid(this,*(float *)this,*(float *)(this + 4));
        ProbabilitySet<Sexy::Point>::AddItem((ProbabilitySet<Sexy::Point> *)aPStack_38,aPStack_58,1)
        ;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
      }
      iVar6 = iVar6 + 1;
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_50);
      iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    } while (iVar6 < iVar3);
  }
  lVar5 = ProbabilitySet<Sexy::Point>::GetSize((ProbabilitySet<Sexy::Point> *)aPStack_38);
  if (lVar5 == 0) {
    Sexy::Point::Point(in_x8,(TPoint *)&DAT_06b2aca8);
  }
  else {
    ProbabilitySet<Sexy::Point>::PickItem();
  }
  ProbabilitySet<Sexy::Point>::~ProbabilitySet((ProbabilitySet<Sexy::Point> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SharkMinion::Attack() */

void __thiscall SharkMinion::Attack(SharkMinion *this)

{
  long lVar1;
  char cVar2;
  undefined8 local_10;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = hasAttackTargetPosition(this);
  if (cVar2 == '\0') {
    pickAttackTargetPosition();
    *(undefined8 *)(this + 0x174) = local_10;
  }
  cVar2 = hasAttackTargetPosition(this);
  if (cVar2 != '\0') {
    this[0x171] = (SharkMinion)0x1;
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SharkMinion::CanAttack() */

void __thiscall SharkMinion::CanAttack(SharkMinion *this)

{
  long lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 local_10;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = isInState(this,3);
  uVar3 = 0;
  if (cVar2 != '\0') {
    pickAttackTargetPosition();
    *(undefined8 *)(this + 0x174) = local_10;
    uVar3 = hasAttackTargetPosition(this);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SharkMinion::doAttackOnTarget() */

void __thiscall SharkMinion::doAttackOnTarget(SharkMinion *this)

{
  BoardTransforms *this_00;
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  StandaloneEffect *this_01;
  UIWidget *this_02;
  PopAnimRig *pPVar4;
  Point *extraout_x1;
  long *plVar5;
  code *pcVar6;
  undefined8 local_e8;
  undefined8 local_e0;
  Point aPStack_d8 [8];
  undefined4 local_d0;
  undefined4 local_cc;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_c8 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_b0 [72];
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (BoardTransforms *)(this + 0x174);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_c8);
  getAttackableEntitiesAtGridSquare(this,(Point *)this_00,(vector *)avStack_c8);
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_c8);
  if (cVar1 != '\0') {
    pickAttackTargetPosition();
    cVar1 = Sexy::TPoint<int>::operator!=((TPoint<int> *)local_68,(TPoint *)&DAT_06b2aca8);
    if (cVar1 != '\0') {
      *(undefined8 *)this_00 = local_68[0];
      getAttackableEntitiesAtGridSquare(this,(Point *)this_00,(vector *)avStack_c8);
    }
  }
  local_e8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_c8);
  local_e0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_c8);
  while( true ) {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_e8,(__normal_iterator *)&local_e0);
    if (!bVar2) break;
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_e8);
    plVar5 = (long *)*puVar3;
    pcVar6 = *(code **)(*plVar5 + 0x120);
    Sexy::Point::Point(aPStack_d8,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_d0,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)0x0,local_d0,local_cc,(DamageInfo *)local_68,4,this,aPStack_d8,0);
    (*pcVar6)(plVar5,(DamageInfo *)local_68);
    DamageInfo::~DamageInfo((DamageInfo *)local_68);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_e8);
  }
  BoardTransforms::GridToBoardSpaceRect(this_00,extraout_x1);
  Sexy::TRect<int>::GetCenter();
  this_01 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x148));
  EATextSquish::Vec3::Vec3((Vec3 *)local_68,(float)(int)local_e8,(float)local_e8._4_4_,0.0);
  StandaloneEffect::SetBoardSpaceOrigin(this_01,(SexyVector3 *)local_68,-1);
  this_02 = (UIWidget *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x148));
  pPVar4 = (PopAnimRig *)UIWidget::GetAtlasImage(this_02);
  std::string::string((string *)local_68,"attack");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_e0);
  std::string::string((string *)&local_d0,"onAttackAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_b0,aPStack_d8,
             (FastCurve *)&local_d0);
  PopAnimRig::PlayAndStop(pPVar4,(DamageInfo *)local_68,0,aRStack_b0);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_b0);
  std::string::~string((string *)&local_d0);
  nop();
  Sexy::RtId::~RtId((RtId *)aPStack_d8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_e0);
  std::string::~string((string *)local_68);
  nop();
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SharkMinion::updateState_Attacking() */

void __thiscall SharkMinion::updateState_Attacking(SharkMinion *this)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)PVZ_T();
  if (fVar1 < *(float *)(this + 0x154)) {
    return;
  }
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x150) = uVar2;
  *(undefined4 *)(this + 0x154) = uVar2;
  doAttackOnTarget(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SharkMinion::onGatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
SharkMinion::onGatherPlantingRestrictions
          (SharkMinion *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  char cVar1;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 400))((TRect<int> *)local_18);
  cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)local_18,(TPoint *)param_1);
  if (cVar1 != '\0') {
    local_18[0] = 0x27;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
               (PlantingReason *)local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SharkMinion::StaticClassInit() */

void SharkMinion::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  StateMachineTableBuilder *this;
  RtClass *pRVar3;
  StateMachineTable *pSVar4;
  code *pcVar5;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<SharkMinionState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<SharkMinionState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (pCVar1 != (CRefSymbolDb *)0x0) {
    plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1);
    if (plVar2 != (long *)0x0) {
      pcVar5 = *(code **)(*plVar2 + 0x18);
      std::string::string(asStack_150,"SharkMinionParameters");
      (*pcVar5)(plVar2,asStack_150,FUN_0483b368,0x14,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar5 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_150,"SharkMinion");
    (*pcVar5)(plVar2,asStack_150,FUN_0483de40,400,0);
    std::string::~string(asStack_150);
    nop();
  }
  this = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance();
  pRVar3 = (RtClass *)StaticGetClass();
  pSVar4 = StateMachineTableBuilder::RegisterClass<SharkMinionState>(this,pRVar3);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1d8);
  Sexy::Delegate1<SharkMinionState>::Delegate1<SharkMinion,void(SharkMinion::*)(SharkMinionState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1e0);
  Sexy::Delegate0::Delegate0<SharkMinion,void(SharkMinion::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1e8);
  Sexy::Delegate1<SharkMinionState>::Delegate1<SharkMinion,void(SharkMinion::*)(SharkMinionState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SHARKMINION_IntroPan");
  StateDefinition<SharkMinionState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0483d64c(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1f0);
  Sexy::Delegate1<SharkMinionState>::Delegate1<SharkMinion,void(SharkMinion::*)(SharkMinionState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1f8);
  Sexy::Delegate0::Delegate0<SharkMinion,void(SharkMinion::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x200);
  Sexy::Delegate1<SharkMinionState>::Delegate1<SharkMinion,void(SharkMinion::*)(SharkMinionState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SHARKMINION_Hidden");
  StateDefinition<SharkMinionState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0483d64c(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x208);
  Sexy::Delegate1<SharkMinionState>::Delegate1<SharkMinion,void(SharkMinion::*)(SharkMinionState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x210);
  Sexy::Delegate0::Delegate0<SharkMinion,void(SharkMinion::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x218);
  Sexy::Delegate1<SharkMinionState>::Delegate1<SharkMinion,void(SharkMinion::*)(SharkMinionState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SHARKMINION_Appearing");
  StateDefinition<SharkMinionState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0483d64c(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x220);
  Sexy::Delegate1<SharkMinionState>::Delegate1<SharkMinion,void(SharkMinion::*)(SharkMinionState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)&DAT_00000228);
  Sexy::Delegate0::Delegate0<SharkMinion,void(SharkMinion::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x230);
  Sexy::Delegate1<SharkMinionState>::Delegate1<SharkMinion,void(SharkMinion::*)(SharkMinionState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SHARKMINION_Idle");
  StateDefinition<SharkMinionState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0483d64c(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x238);
  Sexy::Delegate1<SharkMinionState>::Delegate1<SharkMinion,void(SharkMinion::*)(SharkMinionState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x240);
  Sexy::Delegate0::Delegate0<SharkMinion,void(SharkMinion::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x248);
  Sexy::Delegate1<SharkMinionState>::Delegate1<SharkMinion,void(SharkMinion::*)(SharkMinionState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SHARKMINION_Submerging");
  StateDefinition<SharkMinionState>::StateDefinition
            (aSStack_a8,4,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0483d64c(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x250);
  Sexy::Delegate1<SharkMinionState>::Delegate1<SharkMinion,void(SharkMinion::*)(SharkMinionState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x258);
  Sexy::Delegate0::Delegate0<SharkMinion,void(SharkMinion::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x260);
  Sexy::Delegate1<SharkMinionState>::Delegate1<SharkMinion,void(SharkMinion::*)(SharkMinionState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SHARKMINION_Attacking");
  StateDefinition<SharkMinionState>::StateDefinition
            (aSStack_a8,5,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0483d64c(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* SharkMinion::StaticGetClass() */

long * SharkMinion::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"SharkMinion",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SharkMinion::GetClass() const */

long * SharkMinion::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"SharkMinion",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SharkMinion::setState(SharkMinionState) */

void __thiscall SharkMinion::setState(SharkMinion *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<SharkMinionState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<SharkMinionState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<SharkMinionState>::GetStateDefinition
                     ((StateMachineTable<SharkMinionState> *)pSVar2,param_2);
  StateDefinition<SharkMinionState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<SharkMinionState>::SetContext(aSStack_a8,this);
  StateMachine<SharkMinionState>::SetState
            ((StateMachine<SharkMinionState> *)(this + 0xa8),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SharkMinion::SetRow(int) */

void __thiscall SharkMinion::SetRow(SharkMinion *this,int param_1)

{
  int iVar1;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  (**(code **)(*(long *)this + 0xd0))((RtWeakPtr<Sexy::ResourceInfo> *)local_10,this);
  iVar1 = BoardTransforms::GridToBoardSpaceX(iVar1 - local_10[0]);
  *(float *)(this + 0x18) = (float)iVar1;
  iVar1 = BoardTransforms::GridToBoardSpaceY(param_1);
  *(undefined4 *)(this + 0x20) = 0;
  *(float *)(this + 0x1c) = (float)iVar1;
  createSharkEffect();
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x148),(RtWeakPtr *)local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  setState(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SharkMinion::SurrenderRow() */

void __thiscall SharkMinion::SurrenderRow(SharkMinion *this)

{
  char cVar1;
  
  this[0x170] = (SharkMinion)0x0;
  cVar1 = isInState(this,2);
  if (((cVar1 == '\0') && (cVar1 = isInState(this,3), cVar1 == '\0')) &&
     (cVar1 = isInState(this,4), cVar1 == '\0')) {
    return;
  }
  setState(this,1);
  return;
}


/* SharkMinion::updateState_Hidden() */

void __thiscall SharkMinion::updateState_Hidden(SharkMinion *this)

{
  if (this[0x170] == (SharkMinion)0x0) {
    return;
  }
  setState(this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SharkMinion::updateState_Appearing() */

void __thiscall SharkMinion::updateState_Appearing(SharkMinion *this)

{
  StandaloneEffect *this_00;
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x148));
  uVar4 = *(undefined4 *)(this + 0x150);
  uVar3 = *(undefined4 *)(this + 0x154);
  uVar1 = PVZ_T();
  local_14 = uVar3;
  local_18 = CurveLerp(uVar4,this + 0x158,this + 0x164,1);
  local_10 = uVar1;
  StandaloneEffect::SetBoardSpaceOrigin(this_00,(SexyVector3 *)&local_18,-1);
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x154) <= fVar2) {
    setState(this,3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SharkMinion::onIdleAnimStopped(std::string const&) */

void SharkMinion::onIdleAnimStopped(string *param_1)

{
  if (param_1[0x171] == (string)0x0) {
    playIdleAnim((SharkMinion *)param_1);
    return;
  }
  setState((SharkMinion *)param_1,4);
  return;
}


/* SharkMinion::onSubmergeAnimStopped(std::string const&) */

void SharkMinion::onSubmergeAnimStopped(string *param_1)

{
  setState((SharkMinion *)param_1,5);
  return;
}


/* SharkMinion::onAttackAnimStopped(std::string const&) */

void SharkMinion::onAttackAnimStopped(string *param_1)

{
  setState((SharkMinion *)param_1,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SharkMinion::setStateSerialization(int) */

void __thiscall SharkMinion::setStateSerialization(SharkMinion *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<SharkMinionState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<SharkMinionState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<SharkMinionState>::GetStateDefinition
                     ((StateMachineTable<SharkMinionState> *)pSVar2,param_1);
  StateDefinition<SharkMinionState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<SharkMinionState>::SetContext(aSStack_a8,this);
  StateMachine<DPEState>::SetStateNoTransition
            ((StateMachine<DPEState> *)(this + 0xa8),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

