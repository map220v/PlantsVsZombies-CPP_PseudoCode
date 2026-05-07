// Class: ZombieInvisiblePlane


/* ZombieInvisiblePlane::onEnterState_Walk(ZombieState) */

void __thiscall
ZombieInvisiblePlane::onEnterState_Walk(ZombieInvisiblePlane *this,undefined4 param_2)

{
  char cVar1;
  ZombieAnimRig *this_00;
  float fVar2;
  
  cVar1 = LawnApp::IsInModule(gLawnApp,1);
  if (cVar1 == '\0') {
    Zombie::onEnterState_Walk(this,param_2);
    return;
  }
  this_00 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  if (*(code **)(*(long *)this + 0x1d8) == Zombie::GetWalkSpeed) {
    fVar2 = (float)Zombie::GetWalkSpeed((Zombie *)this);
  }
  else {
    fVar2 = (float)(**(code **)(*(long *)this + 0x1d8))();
  }
  ZombieAnimRig::SetDesiredWalkVelocity(this_00,fVar2 * 4.0);
  Zombie::onEnterState_Walk(this,param_2);
  return;
}


/* ZombieInvisiblePlane::CalcRenderOrder() const */

void ZombieInvisiblePlane::CalcRenderOrder(void)

{
  Board::MakeRenderOrder(0x635d8,0,0xffffffff);
  return;
}


/* non-virtual thunk to ZombieInvisiblePlane::CalcRenderOrder() const */

void __thiscall ZombieInvisiblePlane::CalcRenderOrder(ZombieInvisiblePlane *this)

{
  CalcRenderOrder();
  return;
}


/* ZombieInvisiblePlane::onApplyCondition(ZombieConditions) */

void __thiscall ZombieInvisiblePlane::onApplyCondition(undefined8 param_1,int param_2)

{
  if (1 < param_2 - 3U) {
    return;
  }
  Zombie::EndCondition();
  return;
}


/* ZombieInvisiblePlane::SetPooyanBossHP(float) */

void __thiscall ZombieInvisiblePlane::SetPooyanBossHP(ZombieInvisiblePlane *this,float param_1)

{
  char cVar1;
  
  cVar1 = LawnApp::IsInModule(gLawnApp,1);
  if (cVar1 == '\0') {
    return;
  }
  FUN_0479baf8(param_1,this + 0x284);
  Zombie::SetHitpoints((Zombie *)this,param_1);
  return;
}


/* ZombieInvisiblePlane::GetBarragePtr() */

ZombieInvisiblePlane * __thiscall ZombieInvisiblePlane::GetBarragePtr(ZombieInvisiblePlane *this)

{
  return this + 0x828;
}


/* ZombieInvisiblePlane::GetBarragePtr2() */

ZombieInvisiblePlane * __thiscall ZombieInvisiblePlane::GetBarragePtr2(ZombieInvisiblePlane *this)

{
  return this + 0x8a0;
}


/* ZombieInvisiblePlane::IsCloseToShip() */

bool __thiscall ZombieInvisiblePlane::IsCloseToShip(ZombieInvisiblePlane *this)

{
  float *pfVar1;
  
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  return *pfVar1 < 450.0;
}


/* ZombieInvisiblePlane::CalcInvisibleRect() */

void ZombieInvisiblePlane::CalcInvisibleRect(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BoardEntity *in_x0;
  Insets *in_x8;
  
  iVar1 = BoardEntity::CalcColumnPosition(in_x0);
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar3 = BoardConstants::NUMBER_OF_ROWS();
  Sexy::Insets::Insets(in_x8,iVar1,0,(iVar2 - iVar1) + 1,iVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieInvisiblePlane::CloseHalo(bool) */

void __thiscall ZombieInvisiblePlane::CloseHalo(ZombieInvisiblePlane *this,bool param_1)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  StandaloneEffect *this_01;
  Effect_PopAnim *pEVar2;
  long *plVar3;
  string asStack_10 [8];
  long local_8;
  
  this[0x800] = (ZombieInvisiblePlane)0x0;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x808));
    (**(code **)(*plVar3 + 0x48))();
  }
  else {
    this_00 = (RtMixedPtrBase *)(this + 0x808);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 != '\0') {
      this_01 = (StandaloneEffect *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      StandaloneEffect::SetKeepAlive(this_01,false);
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_10,"disappear");
      Effect_PopAnim::PlaySingleAnimation(pEVar2,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x808));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieInvisiblePlane::OnHaloOpen(StandaloneEffect*) */

void ZombieInvisiblePlane::OnHaloOpen(StandaloneEffect *param_1)

{
  char cVar1;
  Effect_PopAnim *pEVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x800] != (StandaloneEffect)0x0) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x808));
    if (cVar1 != '\0') {
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x808));
      std::string::string(asStack_10,"loop");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar2,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieInvisiblePlane::Explode() */

void __thiscall ZombieInvisiblePlane::Explode(ZombieInvisiblePlane *this)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  float fVar5;
  float fVar6;
  float local_28;
  float local_24;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,-110.0,-130.0);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar5 = *pfVar3;
  fVar6 = pfVar3[1];
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  iVar2 = Board::MakeRenderOrder(0x64960,uVar1,0);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_AIR_MISSILE_EFFECT");
  GetPAMByName(asStack_20);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_18,(float)(int)(local_28 + fVar5),(float)(int)(local_24 + fVar6),0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,iVar2)
  ;
  std::string::string((string *)aRStack_18,"idle");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  std::string::string((string *)aRStack_18,"Play_SkyCity_Missile_Explode");
  RealObject::PlayPositionalSound((RealObject *)this,(string *)aRStack_18,0.0);
  std::string::~string((string *)aRStack_18);
  nop();
  (**(code **)(*(long *)this + 0x48))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieInvisiblePlane::CrushTarget(BoardEntity*) */

void __thiscall ZombieInvisiblePlane::CrushTarget(ZombieInvisiblePlane *this,BoardEntity *param_1)

{
  Zombie *pZVar1;
  Plant *pPVar2;
  GridItem *pGVar3;
  code *pcVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) {
    pPVar2 = (Plant *)0x0;
  }
  else {
    pZVar1 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    pPVar2 = Sexy::RtObject::Cast<Plant>((RtObject *)param_1);
    pGVar3 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1);
    if (pZVar1 != (Zombie *)0x0) {
      (**(code **)(*(long *)this + 0x960))(this,pZVar1);
      goto LAB_0479c960;
    }
    if (pGVar3 != (GridItem *)0x0) {
      pcVar4 = *(code **)(*(long *)this + 0x970);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      (*pcVar4)(this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      goto LAB_0479c960;
    }
  }
  (**(code **)(*(long *)this + 0x968))(this,pPVar2);
LAB_0479c960:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieInvisiblePlane::ZombieInvisiblePlane() */

void __thiscall ZombieInvisiblePlane::ZombieInvisiblePlane(ZombieInvisiblePlane *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068dc390;
  *(undefined ***)(this + 0x10) = &PTR__ZombieInvisiblePlane_068dcdd8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x808));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x810));
  Effect_Barrage::Effect_Barrage((Effect_Barrage *)(this + 0x828));
  Effect_Barrage::Effect_Barrage((Effect_Barrage *)(this + 0x8a0));
  this[0x800] = (ZombieInvisiblePlane)0x0;
  return;
}


/* ZombieInvisiblePlane::StaticNew() */

ZombieInvisiblePlane * ZombieInvisiblePlane::StaticNew(void)

{
  ZombieInvisiblePlane *this;
  
  this = ::operator_new(0x918);
  ZombieInvisiblePlane(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieInvisiblePlane::OnAnimStopped(std::string const&) */

void __thiscall ZombieInvisiblePlane::OnAnimStopped(ZombieInvisiblePlane *this,string *param_1)

{
  char cVar1;
  ZombieHydraHeadAnimRig *this_00;
  DinosaurAnimRig *this_01;
  ZombieInvisiblePlaneProps *pZVar2;
  ZombieAnimRig_InvisiblePlane *this_02;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_InvisiblePlane::GetCrushPrepareName((ZombieAnimRig_InvisiblePlane *)this_00);
  cVar1 = std::operator==(param_1,asStack_40);
  std::string::~string(asStack_40);
  if (cVar1 == '\0') {
    DinosaurAnimRig::getActiveActionAnimationName(this_01);
    cVar1 = std::operator==(param_1,asStack_40);
    std::string::~string(asStack_40);
    if ((cVar1 != '\0') && (cVar1 = Zombie::isInState((Zombie *)this,0x1f), cVar1 != '\0')) {
      Explode(this);
      pZVar2 = Zombie::GetProps<ZombieInvisiblePlaneProps>((Zombie *)this);
      ZombieAirMissile::DamageAirShip(*(float *)(pZVar2 + 0x234));
    }
  }
  else {
    cVar1 = Zombie::isInState((Zombie *)this,0x20);
    if (cVar1 != '\0') {
      std::string::string(asStack_40,"Play_UI_Game_Shovel_Dig");
      RealObject::PlayPositionalSound((RealObject *)this,asStack_40,0.0);
      std::string::~string(asStack_40);
      nop();
      ZombieAnimRig_InvisiblePlane::GetCrushName(this_02);
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue((PopAnimRig *)this_00,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieInvisiblePlane::CalcDamageIndex() */

void __thiscall ZombieInvisiblePlane::CalcDamageIndex(ZombieInvisiblePlane *this)

{
  ZombieInvisiblePlaneProps *pZVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)FUN_0479baf4(*(undefined4 *)(this + 0x280));
  fVar3 = (float)FUN_0479bb00(*(undefined4 *)(this + 0x284));
  pZVar1 = Zombie::GetProps<ZombieInvisiblePlaneProps>((Zombie *)this);
  Zombie::calcDamageIndex((Zombie *)this,fVar2,fVar3,*(int *)(pZVar1 + 0x238));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieInvisiblePlane::onEnterState_Crush(ZombieState) */

void ZombieInvisiblePlane::onEnterState_Crush(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  code *pcVar2;
  RtMixedPtr aRStack_b0 [8];
  RtId aRStack_a8 [8];
  string asStack_a0 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_b0);
  std::string::string(asStack_a0,"OnAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_98,aRStack_a8,
             asStack_a0);
  std::string::~string(asStack_a0);
  nop();
  Sexy::RtId::~RtId(aRStack_a8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
  pcVar2 = *(code **)(*(ZombieAnimRig_InvisiblePlane **)pZVar1 + 0x170);
  ZombieAnimRig_InvisiblePlane::GetCrushPrepareName(*(ZombieAnimRig_InvisiblePlane **)pZVar1);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,(RtReflectionDelegate *)aRStack_98);
  (*pcVar2)(pZVar1,asStack_a0,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_a0);
  ZombieAnimRig_InvisiblePlane::SetState((ZombieAnimRig_InvisiblePlane *)pZVar1,8);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieInvisiblePlane::OpenHalo() */

void __thiscall ZombieInvisiblePlane::OpenHalo(ZombieInvisiblePlane *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar1;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtWeakPtr aRStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this[0x800] = (ZombieInvisiblePlane)0x1;
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar4 = *(float *)(lVar1 + 0xc4);
  fVar5 = *(float *)(lVar1 + 200);
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_68,"POPANIM_EFFECTS_INVISIBLE_PLANE_EFFECT");
  GetPAMByName(asStack_68);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_60);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  std::string::~string(asStack_68);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_60,-fVar4,-fVar5,0.0);
  StandaloneEffect::SetAttached
            ((StandaloneEffect *)this_01,(RealObject *)this,(SexyVector3 *)aRStack_60,-1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string((string *)aRStack_60,"OnHaloOpen");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_68,
             aRStack_60);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this_01,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_60);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  pcVar3 = *(code **)(*(long *)this_01 + 0x80);
  Zombie::GetZombieScale((Zombie *)this);
  (*pcVar3)(this_01);
  std::string::string((string *)aRStack_60,"appear");
  Effect_PopAnim::PlaySingleAnimation(this_01,aRStack_60,0);
  std::string::~string((string *)aRStack_60);
  nop();
  StandaloneEffect::SetKeepAlive((StandaloneEffect *)this_01,true);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x808),(RtWeakPtrBase *)aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  std::string::string((string *)aRStack_60,"Play_SkyCity_Light_Wave");
  RealObject::PlayPositionalSound((RealObject *)this,(string *)aRStack_60,0.0);
  std::string::~string((string *)aRStack_60);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieInvisiblePlane::onTakeBodyDamage(DamageInfo const&) */

void ZombieInvisiblePlane::onTakeBodyDamage(DamageInfo *param_1)

{
  int iVar1;
  ZombieHydraHeadAnimRig *this;
  
  iVar1 = CalcDamageIndex((ZombieInvisiblePlane *)param_1);
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ZombieAnimRig_InvisiblePlane::SetDamageIndex((ZombieAnimRig_InvisiblePlane *)this,iVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieInvisiblePlane::RevokeInvisible() */

void __thiscall ZombieInvisiblePlane::RevokeInvisible(ZombieInvisiblePlane *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  Zombie *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x810);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_10);
    if (cVar2 != '\0') {
      this_01 = (Zombie *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10)
      ;
      Zombie::InvokeInvisible(this_01,false,false,false);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    FUN_0479c898((__normal_iterator *)&local_18);
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieInvisiblePlane::onEnterState_Rush(ZombieState) */

void ZombieInvisiblePlane::onEnterState_Rush(ZombieInvisiblePlane *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  code *pcVar2;
  RtMixedPtr aRStack_b0 [8];
  RtId aRStack_a8 [8];
  string asStack_a0 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CloseHalo(param_1,false);
  RevokeInvisible(param_1);
  Zombie::SetIsControlled((Zombie *)param_1,true);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_b0);
  std::string::string(asStack_a0,"OnAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_98,aRStack_a8,
             asStack_a0);
  std::string::~string(asStack_a0);
  nop();
  Sexy::RtId::~RtId(aRStack_a8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
  pcVar2 = *(code **)(*(DinosaurAnimRig **)pZVar1 + 0x170);
  DinosaurAnimRig::getActiveActionAnimationName(*(DinosaurAnimRig **)pZVar1);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,(RtReflectionDelegate *)aRStack_98);
  (*pcVar2)(pZVar1,asStack_a0,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_a0);
  ZombieAnimRig_InvisiblePlane::SetState((ZombieAnimRig_InvisiblePlane *)pZVar1,8);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieInvisiblePlane::UpdateInvisiblePlane() */

void __thiscall ZombieInvisiblePlane::UpdateInvisiblePlane(ZombieInvisiblePlane *this)

{
  vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *this_00;
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Zombie *pZVar4;
  RtWeakPtrBase *pRVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  int local_40;
  vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CalcInvisibleRect();
  if (-1 < local_40) {
    this_00 = (vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
              (this + 0x810);
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::vector
              (avStack_38,(vector *)this_00);
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear(this_00);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    EntityFinder::GetEntitiesInGridSquares(avStack_20,2,auStack_48);
    local_68 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60), bVar1)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68)
      ;
      pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
      if ((((pZVar4 != (Zombie *)0x0) && (cVar2 = Zombie::CanInvokeInvisible(pZVar4), cVar2 != '\0')
           ) && (cVar2 = RealObject::IsOnOpposingTeam(pZVar4,1), cVar2 != '\0')) &&
         ((cVar2 = (**(code **)(*(long *)pZVar4 + 0x328))(pZVar4), cVar2 == '\0' &&
          (cVar2 = (**(code **)(*(long *)pZVar4 + 0x330))(pZVar4), cVar2 == '\0')))) {
        cVar2 = Zombie::IsControlled(pZVar4);
        if (cVar2 == '\0') {
          Zombie::InvokeInvisible(pZVar4,true,false,false);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_50,(RtWeakPtrBase *)&local_58);
          std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                    (this_00,(RtWeakPtr *)&local_50);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
    }
    local_68 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_38);
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60), bVar1)
    {
      pRVar5 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_70,pRVar5);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)this_00);
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)this_00);
      local_58 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<Zombie>>
                           (uVar6,uVar7,aRStack_70);
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
      bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
      if ((bVar1) &&
         (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_70), cVar2 != '\0')) {
        pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
        Zombie::InvokeInvisible(pZVar4,false,false,false);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
              (avStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieInvisiblePlane::FindTargets() */

void ZombieInvisiblePlane::FindTargets(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  SharkMinion *in_x0;
  Zombie *this;
  RtObject *this_00;
  Plant *extraout_x0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 auStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  (**(code **)(*(long *)in_x0 + 0x3a0))(auStack_30);
  iVar3 = SharkMinion::getRow(in_x0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (**(code **)(*(long *)in_x0 + 0xd0))(&local_38);
  EntityFinder::GetEntitiesTouchingRectangle
            (avStack_20,2,auStack_30,(iVar3 - local_38._4_4_) + -1,iVar3);
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
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    nop();
    cVar2 = RealObject::IsOnOpposingTeam((RealObject *)in_x0,(RealObject *)this);
    if ((((cVar2 != '\0') && (cVar2 = (**(code **)(*(long *)this + 0x328))(this), cVar2 == '\0')) &&
        ((cVar2 = Zombie::HasCondition(this,0x27), cVar2 == '\0' &&
         ((cVar2 = Zombie::HasCondition(this,0x25), cVar2 == '\0' &&
          (cVar2 = Zombie::HasCondition(this,0x65), cVar2 == '\0')))))) &&
       (cVar2 = Zombie::IsIgnoringAllDamage(this), cVar2 == '\0')) {
      local_38 = (RtObject *)this;
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)in_x8,
                 (BoardEntity **)&local_38);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  (**(code **)(*(long *)in_x0 + 0xd0))(&local_38);
  EntityFinder::GetEntitiesTouchingRectangle
            (avStack_20,4,auStack_30,(iVar3 - local_38._4_4_) + -1,iVar3);
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
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    nop();
    cVar2 = RealObject::IsOnOpposingTeam((RealObject *)in_x0,(RealObject *)this_00);
    if (((cVar2 != '\0') &&
        (cVar2 = (**(code **)(*(long *)this_00 + 0x218))(this_00), cVar2 != '\0')) &&
       (bVar1 = Sexy::RtObject::IsA<GridItemAirship>(this_00), !bVar1)) {
      local_38 = this_00;
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)in_x8,
                 (BoardEntity **)&local_38);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  (**(code **)(*(long *)in_x0 + 0xd0))(&local_38);
  EntityFinder::GetEntitiesTouchingRectangle
            (avStack_20,1,auStack_30,(iVar3 - local_38._4_4_) + -1,iVar3);
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
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    nop();
    cVar2 = Zombie::WillTargetPlant((Zombie *)in_x0,extraout_x0);
    if (cVar2 != '\0') {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)in_x8,
                 (BoardEntity **)&local_38);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieInvisiblePlane::updateState_Walk() */

void __thiscall ZombieInvisiblePlane::updateState_Walk(ZombieInvisiblePlane *this)

{
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  cVar2 = LawnApp::IsInModule(gLawnApp,1);
  if (cVar2 == '\0') {
    cVar2 = LawnApp::IsInModule(pLVar1,2);
    if ((cVar2 == '\0') && (cVar2 = Zombie::IsSuspended((Zombie *)this), cVar2 == '\0')) {
      cVar2 = IsCloseToShip(this);
      if (cVar2 == '\0') {
        FindTargets();
        lVar4 = FUN_0479bb10(local_20,local_18);
        if (lVar4 == 0) {
          iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
          if ((iVar3 < 9) && (this[0x800] == (ZombieInvisiblePlane)0x0)) {
            OpenHalo(this);
          }
        }
        else {
          Zombie::setZombieState((Zombie *)this,0x20,0);
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      }
      else {
        Zombie::setZombieState((Zombie *)this,0x1f,0);
      }
    }
  }
  else {
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar6 = *pfVar5;
    iVar3 = BoardTransforms::GridToBoardSpaceX(6);
    if (fVar6 < (float)iVar3) {
      Zombie::setZombieState((Zombie *)this,0x11,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieInvisiblePlane::updateState_Crush() */

void __thiscall ZombieInvisiblePlane::updateState_Crush(ZombieInvisiblePlane *this)

{
  char cVar1;
  bool bVar2;
  ZombieAnimRig_InvisiblePlane *this_00;
  undefined8 *puVar3;
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::IsSuspended((Zombie *)this);
  if (cVar1 == '\0') {
    this_00 = (ZombieAnimRig_InvisiblePlane *)Zombie::GetAnimRig((Zombie *)this);
    ZombieAnimRig_InvisiblePlane::GetCrushName(this_00);
    cVar1 = PopAnimRig::IsAnimStringActive((PopAnimRig *)this_00,asStack_20);
    std::string::~string(asStack_20);
    if (cVar1 != '\0') {
      FindTargets();
      cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                        ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)asStack_20);
      if (cVar1 == '\0') {
        local_30 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)asStack_20);
        local_28 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)asStack_20);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
              bVar2) {
          puVar3 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
          CrushTarget(this,(BoardEntity *)*puVar3);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
        }
      }
      else {
        Zombie::setZombieState((Zombie *)this,1,0);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)asStack_20);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieInvisiblePlane::StaticClassInit() */

void ZombieInvisiblePlane::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieInvisiblePlane");
      (*pcVar4)(plVar1,asStack_150,FUN_0479e198,0x918,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieInvisiblePlane,void(ZombieInvisiblePlane::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieInvisiblePlane,void(ZombieInvisiblePlane::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieInvisiblePlane,void(ZombieInvisiblePlane::*)(ZombieState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"ZS_InvisiblePlane_Rush");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0479d8cc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieInvisiblePlane,void(ZombieInvisiblePlane::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieInvisiblePlane,void(ZombieInvisiblePlane::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieInvisiblePlane,void(ZombieInvisiblePlane::*)(ZombieState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"ZS_InvisiblePlane_Crush");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0479d8cc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieInvisiblePlane::StaticGetClass() */

long * ZombieInvisiblePlane::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieInvisiblePlane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieInvisiblePlane::GetClass() const */

long * ZombieInvisiblePlane::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieInvisiblePlane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieInvisiblePlane::onZombieInitialize() */

void __thiscall ZombieInvisiblePlane::onZombieInitialize(ZombieInvisiblePlane *this)

{
  ZombieHydraHeadAnimRig *this_00;
  
  Zombie::onZombieInitialize((Zombie *)this);
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_InvisiblePlane::SetDamageIndex((ZombieAnimRig_InvisiblePlane *)this_00,0);
  Zombie::SetIsFlying((Zombie *)this,true);
  return;
}


/* ZombieInvisiblePlane::updateState_Besiege() */

void __thiscall ZombieInvisiblePlane::updateState_Besiege(ZombieInvisiblePlane *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = Zombie::IsSuspended((Zombie *)this);
  if (cVar1 != '\0') {
    return;
  }
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  if ((iVar3 < iVar2) && (this[0x800] == (ZombieInvisiblePlane)0x0)) {
    OpenHalo(this);
  }
  Zombie::updateState_Besiege((Zombie *)this);
  return;
}


/* ZombieInvisiblePlane::onEnterState_Glide(ZombieState) */

void __thiscall ZombieInvisiblePlane::onEnterState_Glide(ZombieInvisiblePlane *this)

{
  char cVar1;
  long lVar2;
  
  cVar1 = LawnApp::IsInModule(gLawnApp,1);
  if (cVar1 != '\0') {
    cVar1 = Effect_Barrage::IsInitlized((Effect_Barrage *)(this + 0x828));
    if (cVar1 != '\0') {
      Effect_Barrage::StartBasicBarrage((Effect_Barrage *)(this + 0x828));
    }
  }
  lVar2 = ProbabilitySet<int>::GetSize((ProbabilitySet<int> *)(this + 0xd8));
  if (lVar2 == 0) {
    Zombie::AddBarrageXItem((Zombie *)this,3,10);
    Zombie::AddBarrageXItem((Zombie *)this,4,0xc);
    Zombie::AddBarrageXItem((Zombie *)this,5,0xf);
    Zombie::AddBarrageXItem((Zombie *)this,6,0x14);
    Zombie::AddBarrageXItem((Zombie *)this,7,0x19);
    Zombie::AddBarrageXItem((Zombie *)this,8,0x12);
  }
  lVar2 = ProbabilitySet<int>::GetSize((ProbabilitySet<int> *)(this + 0x108));
  if (lVar2 == 0) {
    Zombie::AddBarrageYItem((Zombie *)this,1,0x21);
    Zombie::AddBarrageYItem((Zombie *)this,2,0x22);
    Zombie::AddBarrageYItem((Zombie *)this,3,0x21);
  }
  nop();
  return;
}


/* ZombieInvisiblePlane::updateState_Glide() */

void __thiscall ZombieInvisiblePlane::updateState_Glide(ZombieInvisiblePlane *this)

{
  Effect_Barrage::Update((Effect_Barrage *)(this + 0x828));
  Zombie::updateState_Glide((Zombie *)this);
  return;
}


/* ZombieInvisiblePlane::onEnterState_Die(ZombieState) */

void ZombieInvisiblePlane::onEnterState_Die(ZombieInvisiblePlane *param_1)

{
  Zombie::onEnterState_Die();
  if (param_1[0x800] == (ZombieInvisiblePlane)0x0) {
    return;
  }
  CloseHalo(param_1,true);
  RevokeInvisible(param_1);
  return;
}


/* ZombieInvisiblePlane::TakeDamage(DamageInfo const&) */

void __thiscall ZombieInvisiblePlane::TakeDamage(ZombieInvisiblePlane *this,DamageInfo *param_1)

{
  char cVar1;
  
  cVar1 = Zombie::isInState((Zombie *)this,0x1f);
  if (cVar1 != '\0') {
    return;
  }
  Zombie::TakeDamage((Zombie *)this,param_1);
  return;
}


/* ZombieInvisiblePlane::onDestroy() */

void __thiscall ZombieInvisiblePlane::onDestroy(ZombieInvisiblePlane *this)

{
  if (this[0x800] != (ZombieInvisiblePlane)0x0) {
    CloseHalo(this,true);
    RevokeInvisible(this);
  }
  Zombie::onDestroy((Zombie *)this);
  return;
}


/* ZombieInvisiblePlane::onUpdate() */

void __thiscall ZombieInvisiblePlane::onUpdate(ZombieInvisiblePlane *this)

{
  Zombie::onUpdate((Zombie *)this);
  if (this[0x800] == (ZombieInvisiblePlane)0x0) {
    return;
  }
  UpdateInvisiblePlane(this);
  return;
}


/* ZombieInvisiblePlane::~ZombieInvisiblePlane() */

void __thiscall ZombieInvisiblePlane::~ZombieInvisiblePlane(ZombieInvisiblePlane *this)

{
  *(undefined ***)this = &PTR_GetClass_068dc390;
  *(undefined ***)(this + 0x10) = &PTR__ZombieInvisiblePlane_068dcdd8;
  Effect_Barrage::~Effect_Barrage((Effect_Barrage *)(this + 0x8a0));
  Effect_Barrage::~Effect_Barrage((Effect_Barrage *)(this + 0x828));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x810));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x808));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieInvisiblePlane::~ZombieInvisiblePlane() */

void __thiscall ZombieInvisiblePlane::~ZombieInvisiblePlane(ZombieInvisiblePlane *this)

{
  ~ZombieInvisiblePlane(this + -0x10);
  return;
}


/* ZombieInvisiblePlane::~ZombieInvisiblePlane() */

void __thiscall ZombieInvisiblePlane::~ZombieInvisiblePlane(ZombieInvisiblePlane *this)

{
  ~ZombieInvisiblePlane(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieInvisiblePlane::~ZombieInvisiblePlane() */

void __thiscall ZombieInvisiblePlane::~ZombieInvisiblePlane(ZombieInvisiblePlane *this)

{
  ~ZombieInvisiblePlane(this + -0x10);
  return;
}

