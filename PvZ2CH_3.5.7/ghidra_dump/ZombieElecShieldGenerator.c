// Class: ZombieElecShieldGenerator


/* ZombieElecShieldGenerator::onEnterState_Die(ZombieState) */

void __thiscall
ZombieElecShieldGenerator::onEnterState_Die(ZombieElecShieldGenerator *this,undefined4 param_2)

{
  char *pcVar1;
  
  if (this[0x831] == (ZombieElecShieldGenerator)0x0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_Zomb_Future_Protector_Walk_Stop");
    this[0x831] = (ZombieElecShieldGenerator)0x1;
  }
  Zombie::onEnterState_Die(this,param_2);
  return;
}


/* ZombieElecShieldGenerator::onDestroy() */

void __thiscall ZombieElecShieldGenerator::onDestroy(ZombieElecShieldGenerator *this)

{
  char *pcVar1;
  
  if (this[0x831] == (ZombieElecShieldGenerator)0x0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_Zomb_Future_Protector_Walk_Stop");
    this[0x831] = (ZombieElecShieldGenerator)0x1;
  }
  ZombieMech::onDestroy((ZombieMech *)this);
  return;
}


/* ZombieElecShieldGenerator::setInitValues(GeneratorValues) */

void __thiscall
ZombieElecShieldGenerator::setInitValues(ZombieElecShieldGenerator *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined4 *)(this + 0x844) = *(undefined4 *)(param_2 + 2);
  *(undefined8 *)(this + 0x834) = uVar1;
  *(undefined8 *)(this + 0x83c) = uVar2;
  this[0x848] = (ZombieElecShieldGenerator)0x1;
  return;
}


/* ZombieElecShieldGenerator::onPlaceOnBoard() */

void __thiscall ZombieElecShieldGenerator::onPlaceOnBoard(ZombieElecShieldGenerator *this)

{
  ZombieMech::onPlaceOnBoard((ZombieMech *)this);
  Zombie::setZombieState((Zombie *)this,0,0);
  return;
}


/* ZombieElecShieldGenerator::onShieldActivateAnimationDone() */

void __thiscall
ZombieElecShieldGenerator::onShieldActivateAnimationDone(ZombieElecShieldGenerator *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0,0);
  return;
}


/* ZombieElecShieldGenerator::onShieldDeactivateAnimationDone() */

void __thiscall
ZombieElecShieldGenerator::onShieldDeactivateAnimationDone(ZombieElecShieldGenerator *this)

{
  char cVar1;
  
  this[0x818] = (ZombieElecShieldGenerator)0x0;
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0,0);
  return;
}


/* ZombieElecShieldGenerator::ZombieElecShieldGenerator() */

void __thiscall
ZombieElecShieldGenerator::ZombieElecShieldGenerator(ZombieElecShieldGenerator *this)

{
  ZombieMech::ZombieMech((ZombieMech *)this);
  *(undefined ***)this = &PTR_GetClass_06992710;
  *(undefined ***)(this + 0x10) = &PTR__ZombieElecShieldGenerator_06993180;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x828));
  GeneratorValues::GeneratorValues((GeneratorValues *)(this + 0x834));
  return;
}


/* ZombieElecShieldGenerator::StaticNew() */

ZombieElecShieldGenerator * ZombieElecShieldGenerator::StaticNew(void)

{
  ZombieElecShieldGenerator *this;
  
  this = ::operator_new(0x850);
  ZombieElecShieldGenerator(this);
  return this;
}


/* ZombieElecShieldGenerator::~ZombieElecShieldGenerator() */

void __thiscall
ZombieElecShieldGenerator::~ZombieElecShieldGenerator(ZombieElecShieldGenerator *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  GridItemProtectorShield *this_01;
  
  this_00 = (RtWeakPtr *)(this + 0x828);
  *(undefined ***)this = &PTR_GetClass_06992710;
  *(undefined ***)(this + 0x10) = &PTR__ZombieElecShieldGenerator_06993180;
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


/* non-virtual thunk to ZombieElecShieldGenerator::~ZombieElecShieldGenerator() */

void __thiscall
ZombieElecShieldGenerator::~ZombieElecShieldGenerator(ZombieElecShieldGenerator *this)

{
  ~ZombieElecShieldGenerator(this + -0x10);
  return;
}


/* ZombieElecShieldGenerator::~ZombieElecShieldGenerator() */

void __thiscall
ZombieElecShieldGenerator::~ZombieElecShieldGenerator(ZombieElecShieldGenerator *this)

{
  ~ZombieElecShieldGenerator(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieElecShieldGenerator::~ZombieElecShieldGenerator() */

void __thiscall
ZombieElecShieldGenerator::~ZombieElecShieldGenerator(ZombieElecShieldGenerator *this)

{
  ~ZombieElecShieldGenerator(this + -0x10);
  return;
}


/* ZombieElecShieldGenerator::deactivateShield() */

void __thiscall ZombieElecShieldGenerator::deactivateShield(ZombieElecShieldGenerator *this)

{
  bool bVar1;
  char cVar2;
  GridItemProtectorShield *this_00;
  
  if (this[0x818] != (ZombieElecShieldGenerator)0x0) {
    this[0x818] = (ZombieElecShieldGenerator)0x0;
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x828));
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x828));
      nop();
      GridItemProtectorShield::Deactivate(this_00);
    }
    cVar2 = (**(code **)(*(long *)this + 0x328))(this);
    if (cVar2 == '\0') {
      Zombie::setZombieState((Zombie *)this,0x21);
      return;
    }
  }
  return;
}


/* ZombieElecShieldGenerator::onChangeTeams(TeamFlags, TeamFlags) */

void ZombieElecShieldGenerator::onChangeTeams(ZombieElecShieldGenerator *param_1)

{
  char cVar1;
  
  cVar1 = RealObject::IsOnTeam(param_1,1);
  if (cVar1 == '\0') {
    return;
  }
  deactivateShield(param_1);
  return;
}


/* ZombieElecShieldGenerator::onTakeFatalDamage(DamageInfo const&) */

void ZombieElecShieldGenerator::onTakeFatalDamage(DamageInfo *param_1)

{
  Zombie::onTakeFatalDamage(param_1);
  deactivateShield((ZombieElecShieldGenerator *)param_1);
  return;
}


/* ZombieElecShieldGenerator::onLostHead() */

void ZombieElecShieldGenerator::onLostHead(void)

{
  ZombieElecShieldGenerator *in_x0;
  
  nop();
  deactivateShield(in_x0);
  return;
}


/* ZombieElecShieldGenerator::onFlicked(Zombie*) */

void __thiscall
ZombieElecShieldGenerator::onFlicked(ZombieElecShieldGenerator *this,Zombie *param_1)

{
  if (param_1 != (Zombie *)this) {
    return;
  }
  deactivateShield(this);
  return;
}


/* ZombieElecShieldGenerator::onApplyCondition(ZombieConditions) */

void __thiscall
ZombieElecShieldGenerator::onApplyCondition(ZombieElecShieldGenerator *this,int param_2)

{
  Zombie::onApplyCondition();
  if ((param_2 != 0xe) && (param_2 != 2)) {
    return;
  }
  deactivateShield(this);
  return;
}


/* ZombieElecShieldGenerator::EMPeachStun(float) */

void __thiscall
ZombieElecShieldGenerator::EMPeachStun(ZombieElecShieldGenerator *this,float param_1)

{
  deactivateShield(this);
  ZombieMech::EMPeachStun((ZombieMech *)this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieElecShieldGenerator::onUpdate() */

void __thiscall ZombieElecShieldGenerator::onUpdate(ZombieElecShieldGenerator *this)

{
  int iVar1;
  bool bVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar3;
  int *piVar4;
  ZombieHydraHeadAnimRig *pZVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float *pfVar6;
  float fVar7;
  int local_14 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieMech::onUpdate((ZombieMech *)this);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x828));
  if (bVar2) {
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x828));
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_01);
    if (*pfVar6 < 200.0) {
      deactivateShield(this);
    }
  }
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar7 = (float)FUN_04c7d110(*(undefined4 *)(this + 0x280));
  local_14[1] = 0;
  iVar1 = (int)*(float *)(lVar3 + 0x18) / 7;
  local_14[0] = 0;
  if (iVar1 != 0) {
    local_14[0] = (int)fVar7 / iVar1;
  }
  local_14[0] = 6 - local_14[0];
  piVar4 = eastl::max_alt<int>(local_14,local_14 + 1);
  local_14[2] = 6;
  piVar4 = eastl::min_alt<int>(piVar4,local_14 + 2);
  if (*(int *)(this + 0x814) != *piVar4) {
    *(int *)(this + 0x814) = *piVar4;
    pZVar5 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    (**(code **)(*(long *)pZVar5 + 0x268))(pZVar5,*(undefined4 *)(this + 0x814));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieElecShieldGenerator::updateState_EMPeachStun() */

void __thiscall ZombieElecShieldGenerator::updateState_EMPeachStun(ZombieElecShieldGenerator *this)

{
  char cVar1;
  PopAnimRig *this_00;
  ZombieHydraHeadAnimRig *this_01;
  float fVar2;
  undefined4 uVar3;
  
  fVar2 = (float)Zombie::getTimeInState((Zombie *)this);
  if (*(float *)(this + 0x800) < fVar2) {
    this_01 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ZombieAnimRig_FutureImp::PlayEMPeachStunEnd((ZombieAnimRig_FutureImp *)this_01);
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x800) = uVar3;
  }
  this_00 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  cVar1 = PopAnimRig::IsPlayingAnything(this_00);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 600))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieElecShieldGenerator::onZombieInitialize() */

void __thiscall ZombieElecShieldGenerator::onZombieInitialize(ZombieElecShieldGenerator *this)

{
  bool bVar1;
  ZombieElecShieldGeneratorProps *pZVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onZombieInitialize((Zombie *)this);
  this[0x818] = (ZombieElecShieldGenerator)0x0;
  this[0x830] = (ZombieElecShieldGenerator)0x0;
  this[0x831] = (ZombieElecShieldGenerator)0x0;
  pZVar2 = Zombie::GetProps<ZombieElecShieldGeneratorProps>((Zombie *)this);
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
/* ZombieElecShieldGenerator::spawnShield() */

void __thiscall ZombieElecShieldGenerator::spawnShield(ZombieElecShieldGenerator *this)

{
  long lVar1;
  ResourceInfo *this_00;
  ZombieElecShieldGeneratorProps *pZVar2;
  Board *this_01;
  int local_20;
  int local_1c;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_18,"protectorshield");
  lVar1 = Board::AddGridItem(this_01,asStack_18,local_20,local_1c,1);
  std::string::~string(asStack_18);
  nop();
  if (lVar1 != 0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x828),(RtWeakPtrBase *)asStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x828));
    pZVar2 = Zombie::GetProps<ZombieElecShieldGeneratorProps>((Zombie *)this);
    GridItemProtectorShield::SetShieldSize
              ((GridItemProtectorShield *)this_00,*(float *)(pZVar2 + 0x228),
               *(float *)(pZVar2 + 0x22c));
    GridItemProtectorShield::SetShieldHP
              ((GridItemProtectorShield *)this_00,*(float *)(pZVar2 + 0x230));
    FUN_04c7d42c(this_00 + 0x24);
    std::string::string(asStack_18,"protectorshieldsegment_wavegenerator");
    GridItemProtectorShield::setShieldTypeStr(this_00,asStack_18);
    std::string::~string(asStack_18);
    nop();
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,-*(float *)(pZVar2 + 0x240),0.0,0.0);
    GridItemProtectorShield::SetReverseShield
              ((GridItemProtectorShield *)this_00,false,(SexyVector3 *)asStack_18);
    if (this[0x848] != (ZombieElecShieldGenerator)0x0) {
      GridItemProtectorShield::SetShieldSize
                ((GridItemProtectorShield *)this_00,*(float *)(this + 0x834),
                 *(float *)(this + 0x838));
      GridItemProtectorShield::SetShieldHP
                ((GridItemProtectorShield *)this_00,*(float *)(this + 0x83c));
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,-*(float *)(this + 0x844),0.0,0.0);
      GridItemProtectorShield::SetReverseShield
                ((GridItemProtectorShield *)this_00,false,(SexyVector3 *)asStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieElecShieldGenerator::activateShield() */

void __thiscall ZombieElecShieldGenerator::activateShield(ZombieElecShieldGenerator *this)

{
  RtMixedPtr<Sexy::Image> *this_00;
  char cVar1;
  bool bVar2;
  GridItemProtectorShield *this_01;
  
  if (this[0x818] != (ZombieElecShieldGenerator)0x0) {
    return;
  }
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x828);
  this[0x818] = (ZombieElecShieldGenerator)0x1;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if (cVar1 == '\0') {
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
    if (bVar2) {
LAB_04c7e630:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      GridItemProtectorShield::Activate(this_01);
      cVar1 = (**(code **)(*(long *)this + 0x328))(this);
      goto joined_r0x04c7e654;
    }
  }
  else {
    spawnShield(this);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
    if (bVar2) goto LAB_04c7e630;
  }
  cVar1 = (**(code **)(*(long *)this + 0x328))(this);
joined_r0x04c7e654:
  if (cVar1 != '\0') {
    Zombie::GetProps<ZombieElecShieldGeneratorProps>((Zombie *)this);
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x20);
  Zombie::GetProps<ZombieElecShieldGeneratorProps>((Zombie *)this);
  return;
}


/* ZombieElecShieldGenerator::OnShieldDestroyed() */

void __thiscall ZombieElecShieldGenerator::OnShieldDestroyed(ZombieElecShieldGenerator *this)

{
  ZombieElecShieldGeneratorProps *pZVar1;
  float fVar2;
  
  Sexy::OutputDebugStrF((wchar_t *)"OnShieldDestroyed");
  if (0 < *(int *)(this + 0x81c)) {
    *(int *)(this + 0x81c) = *(int *)(this + 0x81c) + -1;
  }
  this[0x818] = (ZombieElecShieldGenerator)0x0;
  pZVar1 = Zombie::GetProps<ZombieElecShieldGeneratorProps>((Zombie *)this);
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x820) = fVar2 + *(float *)(pZVar1 + 0x238);
  return;
}


/* ZombieElecShieldGenerator::updateState_Idle() */

void __thiscall ZombieElecShieldGenerator::updateState_Idle(ZombieElecShieldGenerator *this)

{
  char cVar1;
  ZombieElecShieldGeneratorProps *pZVar2;
  float fVar3;
  
  Zombie::updateState_Idle((Zombie *)this);
  if ((((this[0x818] == (ZombieElecShieldGenerator)0x0) &&
       (fVar3 = (float)PVZ_T(), *(float *)(this + 0x820) < fVar3)) && (*(int *)(this + 0x81c) != 0))
     && (cVar1 = RealObject::IsOnTeam(this,2), cVar1 != '\0')) {
    pZVar2 = Zombie::GetProps<ZombieElecShieldGeneratorProps>((Zombie *)this);
    BoardTransforms::GridToBoardSpaceX((int)*(float *)(pZVar2 + 0x224));
    BoardConstants::GRIDSQUARE_WIDTH();
    activateShield(this);
    return;
  }
  return;
}


/* ZombieElecShieldGenerator::registerForEvents() */

void __thiscall ZombieElecShieldGenerator::registerForEvents(ZombieElecShieldGenerator *this)

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
            ((ReceivedDataCallback *)this,(_func_void *)0xa58);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ZombieElecShieldGenerator,void(ZombieElecShieldGenerator::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieFlicked,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieElecShieldGenerator::onEnterState_ElecShieldGenerator_ActivatingShield(ZombieState) */

void ZombieElecShieldGenerator::onEnterState_ElecShieldGenerator_ActivatingShield(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  string *psVar2;
  ZombieElecShieldGeneratorProps *pZVar3;
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
  pZVar3 = Zombie::GetProps<ZombieElecShieldGeneratorProps>(param_1);
  AudioMgr::SendEvent(psVar2,pZVar3 + 0x248);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieElecShieldGenerator::onEnterState_ElecShieldGenerator_DeactivatingShield(ZombieState) */

void ZombieElecShieldGenerator::onEnterState_ElecShieldGenerator_DeactivatingShield(Zombie *param_1)

{
  char cVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  string *psVar3;
  ZombieElecShieldGeneratorProps *pZVar4;
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
  pZVar4 = Zombie::GetProps<ZombieElecShieldGeneratorProps>(param_1);
  AudioMgr::SendEvent(psVar3,pZVar4 + 0x250);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieElecShieldGenerator::StaticClassInit() */

void ZombieElecShieldGenerator::StaticClassInit(void)

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
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (pCVar1 != (CRefSymbolDb *)0x0) {
    plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1);
    if (plVar2 != (long *)0x0) {
      pcVar5 = *(code **)(*plVar2 + 0x18);
      std::string::string(asStack_150,"GeneratorValues");
      (*pcVar5)(plVar2,asStack_150,FUN_04c7d120,0x18,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar5 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_150,"ZombieElecShieldGenerator");
    (*pcVar5)(plVar2,asStack_150,FUN_04c7f328,0x850,0);
    std::string::~string(asStack_150);
    nop();
  }
  this = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance();
  pRVar3 = (RtClass *)StaticGetClass();
  pSVar4 = StateMachineTableBuilder::RegisterClass<ZombieState>(this,pRVar3);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieElecShieldGenerator,void(ZombieElecShieldGenerator::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate0::Delegate0<ZombieElecShieldGenerator,void(ZombieElecShieldGenerator::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieElecShieldGenerator,void(ZombieElecShieldGenerator::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_ElecShieldGenerator_ActivatingShield");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04c7efc8(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieElecShieldGenerator,void(ZombieElecShieldGenerator::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate0::Delegate0<ZombieElecShieldGenerator,void(ZombieElecShieldGenerator::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieElecShieldGenerator,void(ZombieElecShieldGenerator::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_ElecShieldGenerator_DeactivatingShield");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04c7efc8(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieElecShieldGenerator::StaticGetClass() */

long * ZombieElecShieldGenerator::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieElecShieldGenerator",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieElecShieldGenerator::GetClass() const */

long * ZombieElecShieldGenerator::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieElecShieldGenerator",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

