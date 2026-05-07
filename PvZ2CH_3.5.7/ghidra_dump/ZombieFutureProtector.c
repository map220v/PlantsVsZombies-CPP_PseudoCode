// Class: ZombieFutureProtector


/* ZombieFutureProtector::onShieldActivateAnimationDone() */

void __thiscall ZombieFutureProtector::onShieldActivateAnimationDone(ZombieFutureProtector *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0x260))(this);
  }
  return;
}


/* ZombieFutureProtector::onShieldDeactivateAnimationDone() */

void __thiscall ZombieFutureProtector::onShieldDeactivateAnimationDone(ZombieFutureProtector *this)

{
  char cVar1;
  
  this[0x818] = (ZombieFutureProtector)0x0;
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0x260))(this);
  }
  return;
}


/* ZombieFutureProtector::ZombieFutureProtector() */

void __thiscall ZombieFutureProtector::ZombieFutureProtector(ZombieFutureProtector *this)

{
  ZombieMech::ZombieMech((ZombieMech *)this);
  *(undefined ***)this = &PTR_GetClass_068a46c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieFutureProtector_068a5130;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x828));
  return;
}


/* ZombieFutureProtector::StaticNew() */

ZombieFutureProtector * ZombieFutureProtector::StaticNew(void)

{
  ZombieFutureProtector *this;
  
  this = ::operator_new(0x838);
  ZombieFutureProtector(this);
  return this;
}


/* ZombieFutureProtector::~ZombieFutureProtector() */

void __thiscall ZombieFutureProtector::~ZombieFutureProtector(ZombieFutureProtector *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  GridItemProtectorShield *this_01;
  
  this_00 = (RtWeakPtr *)(this + 0x828);
  *(undefined ***)this = &PTR_GetClass_068a46c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieFutureProtector_068a5130;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    nop();
    GridItemProtectorShield::Deactivate(this_01);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  ZombieMech::~ZombieMech((ZombieMech *)this);
  return;
}


/* non-virtual thunk to ZombieFutureProtector::~ZombieFutureProtector() */

void __thiscall ZombieFutureProtector::~ZombieFutureProtector(ZombieFutureProtector *this)

{
  ~ZombieFutureProtector(this + -0x10);
  return;
}


/* ZombieFutureProtector::~ZombieFutureProtector() */

void __thiscall ZombieFutureProtector::~ZombieFutureProtector(ZombieFutureProtector *this)

{
  ~ZombieFutureProtector(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieFutureProtector::~ZombieFutureProtector() */

void __thiscall ZombieFutureProtector::~ZombieFutureProtector(ZombieFutureProtector *this)

{
  ~ZombieFutureProtector(this + -0x10);
  return;
}


/* ZombieFutureProtector::activateShield() */

void __thiscall ZombieFutureProtector::activateShield(ZombieFutureProtector *this)

{
  RtMixedPtr<Sexy::Image> *this_00;
  char cVar1;
  bool bVar2;
  GridItemProtectorShield *this_01;
  
  if (this[0x818] == (ZombieFutureProtector)0x0) {
    this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x828);
    this[0x818] = (ZombieFutureProtector)0x1;
    cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)this + 0xa58))(this);
    }
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
    if (bVar2) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      GridItemProtectorShield::Activate(this_01);
    }
    cVar1 = (**(code **)(*(long *)this + 0x328))(this);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)this,0x20);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFutureProtector::onUpdate() */

void __thiscall ZombieFutureProtector::onUpdate(ZombieFutureProtector *this)

{
  int iVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar2;
  int *piVar3;
  ZombieHydraHeadAnimRig *pZVar4;
  float fVar5;
  int local_14 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieMech::onUpdate((ZombieMech *)this);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar5 = (float)FUN_04695140(*(undefined4 *)(this + 0x280));
  local_14[1] = 0;
  iVar1 = (int)*(float *)(lVar2 + 0x18) / 7;
  local_14[0] = 0;
  if (iVar1 != 0) {
    local_14[0] = (int)fVar5 / iVar1;
  }
  local_14[0] = 6 - local_14[0];
  piVar3 = eastl::max_alt<int>(local_14,local_14 + 1);
  local_14[2] = 6;
  piVar3 = eastl::min_alt<int>(piVar3,local_14 + 2);
  if (*(int *)(this + 0x814) != *piVar3) {
    *(int *)(this + 0x814) = *piVar3;
    pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    (**(code **)(*(long *)pZVar4 + 0x268))(pZVar4,*(undefined4 *)(this + 0x814));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFutureProtector::onZombieInitialize() */

void __thiscall ZombieFutureProtector::onZombieInitialize(ZombieFutureProtector *this)

{
  bool bVar1;
  ZombieFutureProtectorProps *pZVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onZombieInitialize((Zombie *)this);
  this[0x818] = (ZombieFutureProtector)0x0;
  this[0x830] = (ZombieFutureProtector)0x0;
  this[0x831] = (ZombieFutureProtector)0x0;
  pZVar2 = Zombie::GetProps<ZombieFutureProtectorProps>((Zombie *)this);
  *(undefined4 *)(this + 0x81c) = *(undefined4 *)(pZVar2 + 0x234);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x828),(RtWeakPtrBase *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  *(undefined4 *)(this + 0x814) = 0;
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined4 *)(this + 0x820) = 0;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFutureProtector::spawnShield() */

void __thiscall ZombieFutureProtector::spawnShield(ZombieFutureProtector *this)

{
  long lVar1;
  ResourceInfo *this_00;
  ZombieFutureProtectorProps *pZVar2;
  Board *this_01;
  int local_20;
  int local_1c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"protectorshield");
  lVar1 = Board::AddGridItem(this_01,asStack_10,local_20,local_1c,1);
  std::string::~string(asStack_10);
  nop();
  if (lVar1 != 0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x828),(RtWeakPtrBase *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x828));
    pZVar2 = Zombie::GetProps<ZombieFutureProtectorProps>((Zombie *)this);
    GridItemProtectorShield::SetShieldSize
              ((GridItemProtectorShield *)this_00,*(float *)(pZVar2 + 0x228),
               *(float *)(pZVar2 + 0x22c));
    BoardHelpers::ApplyLevelBasedModifierValue(0.0,0xe,6,1);
    GridItemProtectorShield::SetShieldHP
              ((GridItemProtectorShield *)this_00,*(float *)(pZVar2 + 0x230));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
    GridItemProtectorShield::SetShieldParent((GridItemProtectorShield *)this_00,asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieFutureProtector::deactivateShield() */

void __thiscall ZombieFutureProtector::deactivateShield(ZombieFutureProtector *this)

{
  bool bVar1;
  char cVar2;
  ZombieFutureProtectorProps *pZVar3;
  GridItemProtectorShield *this_00;
  float fVar4;
  
  if (this[0x818] != (ZombieFutureProtector)0x0) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x828));
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x828));
      nop();
      GridItemProtectorShield::Deactivate(this_00);
      cVar2 = (**(code **)(*(long *)this + 0x328))(this);
    }
    else {
      cVar2 = (**(code **)(*(long *)this + 0x328))(this);
    }
    if (cVar2 == '\0') {
      Zombie::setZombieState((Zombie *)this,0x21);
    }
    pZVar3 = Zombie::GetProps<ZombieFutureProtectorProps>((Zombie *)this);
    fVar4 = (float)PVZ_T();
    *(float *)(this + 0x820) = fVar4 + *(float *)(pZVar3 + 0x238);
    return;
  }
  return;
}


/* ZombieFutureProtector::onChangeTeams(TeamFlags, TeamFlags) */

void ZombieFutureProtector::onChangeTeams(ZombieFutureProtector *param_1)

{
  char cVar1;
  
  cVar1 = RealObject::IsOnTeam(param_1,1);
  if (cVar1 == '\0') {
    return;
  }
  deactivateShield(param_1);
  return;
}


/* ZombieFutureProtector::onTakeFatalDamage(DamageInfo const&) */

void ZombieFutureProtector::onTakeFatalDamage(DamageInfo *param_1)

{
  Zombie::onTakeFatalDamage(param_1);
  deactivateShield((ZombieFutureProtector *)param_1);
  return;
}


/* ZombieFutureProtector::onLostHead() */

void ZombieFutureProtector::onLostHead(void)

{
  ZombieFutureProtector *in_x0;
  
  nop();
  deactivateShield(in_x0);
  return;
}


/* ZombieFutureProtector::onFlicked(Zombie*) */

void __thiscall ZombieFutureProtector::onFlicked(ZombieFutureProtector *this,Zombie *param_1)

{
  if (param_1 != (Zombie *)this) {
    return;
  }
  deactivateShield(this);
  return;
}


/* ZombieFutureProtector::onApplyCondition(ZombieConditions) */

void __thiscall ZombieFutureProtector::onApplyCondition(ZombieFutureProtector *this,int param_2)

{
  Zombie::onApplyCondition();
  if ((param_2 != 0xe && param_2 != 2) && (param_2 != 0x9a)) {
    return;
  }
  deactivateShield(this);
  return;
}


/* ZombieFutureProtector::EMPeachStun(float) */

void __thiscall ZombieFutureProtector::EMPeachStun(ZombieFutureProtector *this,float param_1)

{
  deactivateShield(this);
  ZombieMech::EMPeachStun((ZombieMech *)this,param_1);
  return;
}


/* ZombieFutureProtector::OnShieldDestroyed() */

void __thiscall ZombieFutureProtector::OnShieldDestroyed(ZombieFutureProtector *this)

{
  ZombieFutureProtectorProps *pZVar1;
  float fVar2;
  
  if (0 < *(int *)(this + 0x81c)) {
    *(int *)(this + 0x81c) = *(int *)(this + 0x81c) + -1;
  }
  this[0x818] = (ZombieFutureProtector)0x0;
  pZVar1 = Zombie::GetProps<ZombieFutureProtectorProps>((Zombie *)this);
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x820) = fVar2 + *(float *)(pZVar1 + 0x238);
  return;
}


/* ZombieFutureProtector::updateState_Walk() */

void __thiscall ZombieFutureProtector::updateState_Walk(ZombieFutureProtector *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long *extraout_x0;
  undefined8 uVar5;
  ZombieFutureProtectorProps *pZVar6;
  float *pfVar7;
  float fVar8;
  
  Zombie::updateState_Walk((Zombie *)this);
  if ((((this[0x818] == (ZombieFutureProtector)0x0) &&
       (fVar8 = (float)PVZ_T(), *(float *)(this + 0x820) < fVar8)) && (*(int *)(this + 0x81c) != 0))
     && (cVar2 = RealObject::IsOnTeam(this,2), cVar2 != '\0')) {
    pZVar6 = Zombie::GetProps<ZombieFutureProtectorProps>((Zombie *)this);
    cVar2 = NewPVPUtils::IsPlayingNewPVP();
    if (cVar2 == '\0') {
      iVar3 = (int)*(float *)(pZVar6 + 0x224);
      fVar8 = *(float *)(pZVar6 + 0x224) - (float)iVar3;
    }
    else {
      fVar8 = 0.0;
      iVar3 = 0xc;
    }
    iVar3 = BoardTransforms::GridToBoardSpaceX(iVar3);
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    pfVar7 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    if (*pfVar7 <= (float)(int)((float)iVar3 + fVar8 * (float)iVar4)) {
      activateShield(this);
    }
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x828));
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x828));
    nop();
    uVar5 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    (**(code **)(*extraout_x0 + 0x78))(extraout_x0,uVar5);
  }
  return;
}


/* ZombieFutureProtector::registerForEvents() */

void __thiscall ZombieFutureProtector::registerForEvents(ZombieFutureProtector *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Zombie::registerForEvents((Zombie *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xa50);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ZombieFutureProtector,void(ZombieFutureProtector::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieFlicked,&local_40);
  return;
}


/* ZombieFutureProtector::onEnterState_Walk(ZombieState) */

void ZombieFutureProtector::onEnterState_Walk(long param_1)

{
  char *pcVar1;
  
  Zombie::onEnterState_Walk();
  if (*(char *)(param_1 + 0x830) == '\0') {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_Zomb_Future_Protector_Walk_Start");
    *(undefined1 *)(param_1 + 0x830) = 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFutureProtector::onEnterState_Protector_ActivatingShield(ZombieState) */

void ZombieFutureProtector::onEnterState_Protector_ActivatingShield(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  string *psVar2;
  ZombieFutureProtectorProps *pZVar3;
  code *pcVar4;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  pcVar4 = *(code **)(*(long *)pZVar1 + 0x270);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onShieldActivateAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar4)(pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  psVar2 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  pZVar3 = Zombie::GetProps<ZombieFutureProtectorProps>(param_1);
  AudioMgr::SendEvent(psVar2,pZVar3 + 0x240);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFutureProtector::onEnterState_Protector_DeactivatingShield(ZombieState) */

void ZombieFutureProtector::onEnterState_Protector_DeactivatingShield(Zombie *param_1)

{
  char cVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  string *psVar3;
  ZombieFutureProtectorProps *pZVar4;
  code *pcVar5;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
    pcVar5 = *(code **)(*(long *)pZVar2 + 0x278);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onShieldDeactivateAnimationDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    (*pcVar5)(pZVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  psVar3 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  pZVar4 = Zombie::GetProps<ZombieFutureProtectorProps>(param_1);
  AudioMgr::SendEvent(psVar3,pZVar4 + 0x248);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFutureProtector::StaticClassInit() */

void ZombieFutureProtector::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieFutureProtector");
      (*pcVar4)(plVar1,asStack_150,FUN_04696340,0x838,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieFutureProtector,void(ZombieFutureProtector::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieFutureProtector,void(ZombieFutureProtector::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieFutureProtector,void(ZombieFutureProtector::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Protector_ActivatingShield");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0469603c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieFutureProtector,void(ZombieFutureProtector::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieFutureProtector,void(ZombieFutureProtector::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieFutureProtector,void(ZombieFutureProtector::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Protector_DeactivatingShield");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0469603c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieFutureProtector::StaticGetClass() */

long * ZombieFutureProtector::StaticGetClass(void)

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
  uVar2 = ZombieMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieFutureProtector",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieFutureProtector::GetClass() const */

long * ZombieFutureProtector::GetClass(void)

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
  uVar2 = ZombieMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieFutureProtector",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

