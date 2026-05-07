// Class: ZombieZombossMech_Beach


/* ZombieZombossMech_Beach::onTangleKelpStunEndAnimDone(std::string const&) */

void ZombieZombossMech_Beach::onTangleKelpStunEndAnimDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0xa80))(param_1,0x24);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Beach::getDamageEffectsBoardSpaceOffset() const */

void ZombieZombossMech_Beach::getDamageEffectsBoardSpaceOffset(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,25.0,0.0,-15.0);
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


/* ZombieZombossMech_Beach::IsSubmerged() const */

ZombieZombossMech_Beach __thiscall
ZombieZombossMech_Beach::IsSubmerged(ZombieZombossMech_Beach *this)

{
  return this[0x960];
}


/* ZombieZombossMech_Beach::StartTangleKelpStun() */

void __thiscall ZombieZombossMech_Beach::StartTangleKelpStun(ZombieZombossMech_Beach *this)

{
  Zombie::setZombieState((Zombie *)this,0x29,0);
  return;
}


/* ZombieZombossMech_Beach::SetWindEffectEnabled(bool) */

void __thiscall
ZombieZombossMech_Beach::SetWindEffectEnabled(ZombieZombossMech_Beach *this,bool param_1)

{
  this[0x988] = (ZombieZombossMech_Beach)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Beach::CalcMouthFootprint() const */

void __thiscall ZombieZombossMech_Beach::CalcMouthFootprint(ZombieZombossMech_Beach *this)

{
  long lVar1;
  Insets *in_x8;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  Sexy::Insets::Insets(in_x8,local_10,local_c + -1,1,2);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Beach::CalcBellyFootprint() const */

void __thiscall ZombieZombossMech_Beach::CalcBellyFootprint(ZombieZombossMech_Beach *this)

{
  long lVar1;
  Insets *in_x8;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  Sexy::Insets::Insets(in_x8,local_10 + 1,local_c + -1,1,2);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Beach::onExitState_TangleKelpStun(ZombieState) */

void ZombieZombossMech_Beach::onExitState_TangleKelpStun(Zombie *param_1)

{
  PopAnimRig *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::EndCondition(param_1,0x20);
  this = (PopAnimRig *)Zombie::GetAnimRig(param_1);
  PopAnimRig::ClearShaderOverrideColor(this);
  Zombie::SetDamageScale(param_1,1.0);
  std::string::string(asStack_10,"Play_Zomb_Beach_Zomboss_Tangled_Off");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_Beach::TryHandleSummonZombie(Zombie*, Sexy::SexyVector3 const&) const */

undefined1 __thiscall
ZombieZombossMech_Beach::TryHandleSummonZombie
          (ZombieZombossMech_Beach *this,Zombie *param_1,SexyVector3 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 != (Zombie *)0x0) {
    bVar1 = Sexy::RtObject::IsA<ZombieBeachSurfer>((RtObject *)param_1);
    if (bVar1) {
      iVar2 = BoardTransforms::BoardSpaceToGridY(*(float *)(param_2 + 4));
      Board::PlaceZombieInRow(*(Board **)(gLawnApp + 0x9f0),param_1,iVar2,true,true);
      return 1;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Beach::SetSubmerged(bool) */

void __thiscall ZombieZombossMech_Beach::SetSubmerged(ZombieZombossMech_Beach *this,bool param_1)

{
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar2;
  SharkMinion *pSVar3;
  int local_c;
  
  this[0x960] = (ZombieZombossMech_Beach)param_1;
  lVar1 = ___stack_chk_guard;
  Zombie::SetIgnoresCollisions((Zombie *)this,param_1);
  ZombieZombossMech::setDamageEffectsAllowed
            ((ZombieZombossMech *)this,(bool)((byte)this[0x960] ^ 1));
  BoardEntity::CalcGridPosition();
  if (param_1) {
    pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)
             FUN_0483f264(*(undefined8 *)(this + 0x968),(long)local_c);
    pSVar3 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    SharkMinion::PatrolRow(pSVar3);
  }
  else {
    pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)
             FUN_0483f264(*(undefined8 *)(this + 0x968),(long)local_c);
    pSVar3 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    SharkMinion::SurrenderRow(pSVar3);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_Beach::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombieZombossMech_Beach::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==("submerged",param_4);
  if (bVar1) {
    SetSubmerged((ZombieZombossMech_Beach *)param_1,true);
    return;
  }
  bVar1 = std::operator==("emerged",param_4);
  if (!bVar1) {
    return;
  }
  SetSubmerged((ZombieZombossMech_Beach *)param_1,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Beach::updateWindEffect() */

void __thiscall ZombieZombossMech_Beach::updateWindEffect(ZombieZombossMech_Beach *this)

{
  UIWidget *this_00;
  PopAnimRig *this_01;
  int *piVar1;
  uint local_20;
  int local_1c;
  Color aCStack_18 [12];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIWidget *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x980));
  this_01 = (PopAnimRig *)UIWidget::GetAtlasImage(this_00);
  PopAnimRig::GetPAMColor();
  if ((byte)this[0x988] == 0) {
    if (0 < local_c) {
      local_1c = local_c + -0x14;
      local_20 = (uint)(byte)this[0x988];
      piVar1 = eastl::max_alt<int>((int *)&local_20,&local_1c);
      local_c = *piVar1;
    }
  }
  else if (local_c < 0xff) {
    local_1c = local_c + 0x1e;
    local_20 = 0xff;
    piVar1 = eastl::min_alt<int>((int *)&local_20,&local_1c);
    local_c = *piVar1;
  }
  PopAnimRig::SetPAMColor(this_01,aCStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_Beach::onTangleKelpStunAnimDone(std::string const&) */

void ZombieZombossMech_Beach::onTangleKelpStunAnimDone(string *param_1)

{
  ZombieHydraHeadAnimRig *this;
  
  param_1[0x961] = (string)0x0;
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ZombieAnimRig_ZombossMech_Beach::PlayTangleKelpStunLoop((ZombieAnimRig_ZombossMech_Beach *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Beach::createWindEffect() */

void __thiscall ZombieZombossMech_Beach::createWindEffect(ZombieZombossMech_Beach *this)

{
  int iVar1;
  int iVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  string asStack_30 [8];
  Vec3 aVStack_28 [16];
  RtWeakPtr aRStack_18 [12];
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  EATextSquish::Vec3::Vec3(aVStack_28,(float)(iVar1 * -7),(float)(iVar2 * -2),0.0);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_30,"POPANIM_EFFECTS_ZOMBOSS_TURBINE_WIND");
  GetPAMByName(asStack_30);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_30);
  nop();
  StandaloneEffect::SetAttached
            ((StandaloneEffect *)this_00,(RealObject *)this,(SexyVector3 *)aVStack_28,1);
  std::string::string((string *)aRStack_18,"animation");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  UIWidget::GetAtlasImage((UIWidget *)this_00);
  PopAnimRig::GetPAMColor();
  local_c = 0;
  (**(code **)(*(long *)this_00 + 0x78))(this_00,aRStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x980),(RtWeakPtrBase *)asStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Beach::CanAnyMinionAttack() */

void __thiscall ZombieZombossMech_Beach::CanAnyMinionAttack(ZombieZombossMech_Beach *this)

{
  char cVar1;
  bool bVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  SharkMinion *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x968));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x968));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_01 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    cVar1 = SharkMinion::CanAttack(this_01);
    if (cVar1 != '\0') break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_Beach::ZombieZombossMech_Beach() */

void __thiscall ZombieZombossMech_Beach::ZombieZombossMech_Beach(ZombieZombossMech_Beach *this)

{
  ZombieZombossMech::ZombieZombossMech((ZombieZombossMech *)this);
  this[0x960] = (ZombieZombossMech_Beach)0x0;
  this[0x961] = (ZombieZombossMech_Beach)0x0;
  *(undefined ***)this = &PTR_GetClass_06909680;
  this[0x962] = (ZombieZombossMech_Beach)0x0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_Beach_0690a258;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x968));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x980));
  this[0x988] = (ZombieZombossMech_Beach)0x0;
  return;
}


/* ZombieZombossMech_Beach::StaticNew() */

ZombieZombossMech_Beach * ZombieZombossMech_Beach::StaticNew(void)

{
  ZombieZombossMech_Beach *this;
  
  this = ::operator_new(0x990);
  ZombieZombossMech_Beach(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Beach::onEnterState_TangleKelpStun(ZombieState) */

void ZombieZombossMech_Beach::onEnterState_TangleKelpStun(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  long lVar2;
  ZombieZombossMechBeachProps *pZVar3;
  Zombie *pZVar4;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  param_1[0x961] = (Zombie)0x1;
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onTangleKelpStunAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_Beach::PlayTangleKelpStunStart
            ((ZombieAnimRig_ZombossMech_Beach *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  pZVar4._0_4_ = (Zombie *)PVZ_EOT();
  Zombie::ApplyCondition(pZVar4._0_4_,0,param_1,0x20,1);
  lVar2 = ZombieZombossMech::getActiveStage((ZombieZombossMech *)param_1);
  Zombie::SetDamageScale(param_1,*(float *)(lVar2 + 0x2c));
  pZVar3 = Zombie::GetProps<ZombieZombossMechBeachProps>(param_1);
  if (pZVar3[0x2a4] != (ZombieZombossMechBeachProps)0x0) {
    (**(code **)(*(long *)param_1 + 0xae8))(param_1);
  }
  if (pZVar3[0x2a5] != (ZombieZombossMechBeachProps)0x0) {
    ZombieZombossMech::buildStunColorCurve((ZombieZombossMech *)param_1);
  }
  param_1[0x962] = (Zombie)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_Beach::~ZombieZombossMech_Beach() */

void __thiscall ZombieZombossMech_Beach::~ZombieZombossMech_Beach(ZombieZombossMech_Beach *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x980);
  *(undefined ***)this = &PTR_GetClass_06909680;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_Beach_0690a258;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::vector<Sexy::RtWeakPtr<SharkMinion>,std::allocator<Sexy::RtWeakPtr<SharkMinion>>>::~vector
            ((vector<Sexy::RtWeakPtr<SharkMinion>,std::allocator<Sexy::RtWeakPtr<SharkMinion>>> *)
             (this + 0x968));
  ZombieZombossMech::~ZombieZombossMech((ZombieZombossMech *)this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_Beach::~ZombieZombossMech_Beach() */

void __thiscall ZombieZombossMech_Beach::~ZombieZombossMech_Beach(ZombieZombossMech_Beach *this)

{
  ~ZombieZombossMech_Beach(this + -0x10);
  return;
}


/* ZombieZombossMech_Beach::~ZombieZombossMech_Beach() */

void __thiscall ZombieZombossMech_Beach::~ZombieZombossMech_Beach(ZombieZombossMech_Beach *this)

{
  ~ZombieZombossMech_Beach(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_Beach::~ZombieZombossMech_Beach() */

void __thiscall ZombieZombossMech_Beach::~ZombieZombossMech_Beach(ZombieZombossMech_Beach *this)

{
  ~ZombieZombossMech_Beach(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Beach::createMinions() */

void __thiscall ZombieZombossMech_Beach::createMinions(ZombieZombossMech_Beach *this)

{
  int iVar1;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar2;
  SharkMinion *pSVar3;
  ZombieZombossMechBeachProps *pZVar4;
  long lVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardConstants::NUMBER_OF_ROWS();
  std::vector<Sexy::RtWeakPtr<SharkMinion>,std::allocator<Sexy::RtWeakPtr<SharkMinion>>>::resize
            ((vector<Sexy::RtWeakPtr<SharkMinion>,std::allocator<Sexy::RtWeakPtr<SharkMinion>>> *)
             (this + 0x968),(long)iVar1);
  for (lVar5 = 0; iVar1 = BoardConstants::NUMBER_OF_ROWS(), (int)lVar5 < iVar1; lVar5 = lVar5 + 1) {
    this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)
              FUN_0483f264(*(undefined8 *)(this + 0x968),lVar5);
    GameObject::Create<SharkMinion>();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0483f264(*(undefined8 *)(this + 0x968),lVar5);
    pSVar3 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    pZVar4 = Zombie::GetProps<ZombieZombossMechBeachProps>((Zombie *)this);
    SharkMinion::SetParameters(pSVar3,(SharkMinionParameters *)(pZVar4 + 0x2ac));
    pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0483f264(*(undefined8 *)(this + 0x968),lVar5);
    pSVar3 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    SharkMinion::SetRow(pSVar3,(int)lVar5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Beach::updateState_TangleKelpStun() */

void __thiscall ZombieZombossMech_Beach::updateState_TangleKelpStun(ZombieZombossMech_Beach *this)

{
  char cVar1;
  ZombieZombossMechBeachProps *pZVar2;
  PopAnimRig *pPVar3;
  ZombieHydraHeadAnimRig *pZVar4;
  CurveSequence<Sexy::Color> *pCVar5;
  CurveSequenceCollection *pCVar6;
  float fVar7;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x961] == (ZombieZombossMech_Beach)0x0) && (this[0x962] == (ZombieZombossMech_Beach)0x0)
     ) {
    pZVar2 = Zombie::GetProps<ZombieZombossMechBeachProps>((Zombie *)this);
    if (pZVar2[0x2a4] != (ZombieZombossMechBeachProps)0x0) {
      pCVar6 = (CurveSequenceCollection *)
               ZombieZombossMech::getMovementCurve((ZombieZombossMech *)this);
      ZombieZombossMech::UpdatePositionFromCurve((ZombieZombossMech *)this,pCVar6);
    }
    if (pZVar2[0x2a5] != (ZombieZombossMechBeachProps)0x0) {
      pCVar5 = (CurveSequence<Sexy::Color> *)
               ZombieZombossMech::getColorCurve((ZombieZombossMech *)this);
      fVar7 = (float)ZombieZombossMech::GetZomboss_T((ZombieZombossMech *)this);
      cVar1 = CurveSequence<Sexy::Color>::IsTimeInSequence(pCVar5,fVar7);
      if (cVar1 == '\0') {
        pPVar3 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
        PopAnimRig::ClearShaderOverrideColor(pPVar3);
      }
      else {
        pPVar3 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
        pCVar5 = (CurveSequence<Sexy::Color> *)
                 ZombieZombossMech::getColorCurve((ZombieZombossMech *)this);
        fVar7 = (float)ZombieZombossMech::GetZomboss_T((ZombieZombossMech *)this);
        CurveSequence<Sexy::Color>::operator[](pCVar5,fVar7);
        PopAnimRig::SetShaderOverrideColor(pPVar3,(Color *)asStack_60);
      }
    }
    fVar7 = (float)Zombie::getTimeInState((Zombie *)this);
    if (*(float *)(pZVar2 + 0x2a0) < fVar7) {
      this[0x962] = (ZombieZombossMech_Beach)0x1;
      Zombie::EndCondition((Zombie *)this,0x20);
      pPVar3 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
      PopAnimRig::ClearShaderOverrideColor(pPVar3);
      pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_60,"onTangleKelpStunEndAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
                 asStack_60);
      ZombieAnimRig_ZombossMech_Beach::PlayTangleKelpStunEnd
                ((ZombieAnimRig_ZombossMech_Beach *)pZVar4,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04846a28 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieZombossMech_Beach::Retreat(ZombieState) */

void __thiscall ZombieZombossMech_Beach::Retreat(ZombieZombossMech_Beach *this,int param_2)

{
  ZombieWithActions *pZVar1;
  ZombossBeachDiveActionHandler *this_00;
  ZombieZombossMechBeachProps *pZVar2;
  Point local_18 [8];
  RtWeakPtr<Sexy::SoundResource> local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = (ZombieWithActions *)ZombieZombossMech::getActiveStage((ZombieZombossMech *)this);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(local_10,(RtWeakPtrBase *)(pZVar1 + 0x20));
  this_00 = ZombieWithActions::QueueAction<ZombossBeachDiveActionHandler>(pZVar1,local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  Sexy::Point::Point(local_18);
  if (param_2 == 0x27) {
    FUN_04842eb8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    ZombossBattleModule::GetDeathLocation();
  }
  else {
    ZombieZombossMech::PickRetreatTarget((ZombieZombossMech *)this,local_18);
  }
  pZVar2 = Zombie::GetProps<ZombieZombossMechBeachProps>((Zombie *)this);
  ZombossBeachDiveActionHandler::SetEmergeTarget(this_00,local_18,*(float *)(pZVar2 + 0x2a8));
  ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,param_2);
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Beach::TellMinionsToAttack(int) */

void __thiscall
ZombieZombossMech_Beach::TellMinionsToAttack(ZombieZombossMech_Beach *this,int param_1)

{
  bool bVar1;
  char cVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  SharkMinion *pSVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x968));
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x968));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    pSVar3 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    cVar2 = SharkMinion::CanAttack(pSVar3);
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)this_00);
      ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::AddItem
                ((ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>> *)aPStack_38,aRStack_40,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  if (0 < param_1) {
    do {
      lVar4 = ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::GetSize
                        ((ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>> *)aPStack_38);
      if (lVar4 == 0) break;
      param_1 = param_1 + -1;
      ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::PickItem();
      pSVar3 = (SharkMinion *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
      SharkMinion::Attack(pSVar3);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)&local_48);
      ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::RemoveItem
                ((ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>> *)aPStack_38,aRStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    } while (param_1 != 0);
  }
  ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::~ProbabilitySet
            ((ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>> *)aPStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Beach::gatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
ZombieZombossMech_Beach::gatherPlantingRestrictions
          (ZombieZombossMech_Beach *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  char cVar1;
  bool bVar2;
  RtObject *this_00;
  ZombossFanPullActionHandler *this_01;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsSubmerged(this);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 400))((TRect<int> *)local_18,this);
    cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)local_18,(TPoint *)param_1);
    if (cVar1 != '\0') {
      CalcMouthFootprint(this);
      cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)local_18,(TPoint *)param_1);
      if ((((cVar1 != '\0') &&
           (bVar2 = std::operator==((string *)(param_2 + 8),"tanglekelp"), bVar2)) &&
          (this_00 = (RtObject *)ZombieWithActions::getCurrentAction((ZombieWithActions *)this),
          this_00 != (RtObject *)0x0)) &&
         (bVar2 = Sexy::RtObject::IsA<ZombossFanPullActionHandler>(this_00), bVar2)) {
        nop();
        cVar1 = ZombossFanPullActionHandler::IsPulling(this_01);
        if (cVar1 != '\0') goto LAB_0484765c;
      }
      local_18[0] = 0x4e;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                 (PlantingReason *)local_18);
    }
  }
LAB_0484765c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Beach::StaticClassInit() */

void ZombieZombossMech_Beach::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieZombossMech_Beach");
      (*pcVar4)(plVar1,asStack_150,FUN_0484798c,0x990,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbb0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossMech_Beach,void(ZombieZombossMech_Beach::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbb8);
  Sexy::Delegate0::Delegate0<ZombieZombossMech_Beach,void(ZombieZombossMech_Beach::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbc0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossMech_Beach,void(ZombieZombossMech_Beach::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossBeachTangleKelpStun");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x29,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04847614(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieZombossMech_Beach::StaticGetClass() */

long * ZombieZombossMech_Beach::StaticGetClass(void)

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
  uVar2 = ZombieZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMech_Beach",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMech_Beach::GetClass() const */

long * ZombieZombossMech_Beach::GetClass(void)

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
  uVar2 = ZombieZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMech_Beach",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMech_Beach::onPlaceOnBoard() */

void __thiscall ZombieZombossMech_Beach::onPlaceOnBoard(ZombieZombossMech_Beach *this)

{
  ZombieZombossMech::onPlaceOnBoard();
  createWindEffect(this);
  createMinions(this);
  return;
}


/* ZombieZombossMech_Beach::onUpdate() */

void __thiscall ZombieZombossMech_Beach::onUpdate(ZombieZombossMech_Beach *this)

{
  ZombieZombossMech::onUpdate((ZombieZombossMech *)this);
  updateWindEffect(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Beach::onEnterState_ZombossIntro(ZombieState) */

void ZombieZombossMech_Beach::onEnterState_ZombossIntro(long param_1)

{
  long lVar1;
  ulong uVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  SharkMinion *this_00;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = 0;
  ZombieZombossMech::onEnterState_ZombossIntro();
  BoardEntity::CalcGridPosition();
  uVar4 = *(undefined8 *)(param_1 + 0x968);
  uVar2 = FUN_0483f26c(uVar4,*(undefined8 *)(param_1 + 0x970));
  if (uVar2 != 0) {
    do {
      if (local_c != (int)uVar3) {
        this = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0483f264(uVar4,uVar3);
        this_00 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
        SharkMinion::PatrolRow(this_00);
        uVar4 = *(undefined8 *)(param_1 + 0x968);
        uVar2 = FUN_0483f26c(uVar4,*(undefined8 *)(param_1 + 0x970));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Beach::onExitState_ZombossStun(ZombieState) */

void ZombieZombossMech_Beach::onExitState_ZombossStun(RealObject *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieZombossMech_Hydra::onExitState_MagnetStun();
  std::string::string(asStack_10,"Play_Zomb_Beach_Zomboss_Stun_Stop");
  RealObject::PlayPositionalSound(param_1,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Beach::onExitState_ZombossStageChange(ZombieState) */

void __thiscall
ZombieZombossMech_Beach::onExitState_ZombossStageChange(ZombieZombossMech_Beach *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  std::string::string(asStack_10,"Play_Zomb_Beach_Zomboss_Stun_Stop");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

