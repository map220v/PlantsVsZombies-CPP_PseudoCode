// Class: ZombieWealthGod


/* ZombieWealthGod::OnWakeUpDone(std::string const&) */

void ZombieWealthGod::OnWakeUpDone(string *param_1)

{
  char cVar1;
  
  cVar1 = Zombie::isInState((Zombie *)param_1,0x1f);
  if (cVar1 != '\0') {
    cVar1 = ZombieEndlessWealth::findTargetAndAttack((ZombieEndlessWealth *)param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,0,0);
      return;
    }
  }
  return;
}


/* ZombieWealthGod::OnZombieMoveUpDownFinish(Zombie*) */

void __thiscall ZombieWealthGod::OnZombieMoveUpDownFinish(ZombieWealthGod *this,Zombie *param_1)

{
  char cVar1;
  
  if (((this == (ZombieWealthGod *)param_1) &&
      (cVar1 = Zombie::isInState((Zombie *)this,0x20), cVar1 != '\0')) &&
     ((this[0x840] = (ZombieWealthGod)0x1, *(float *)(this + 0x804) < *(float *)(this + 0x80c) ||
      (cVar1 = ZombieEndlessWealth::findTargetAndAttack((ZombieEndlessWealth *)this), cVar1 == '\0')
      ))) {
    Zombie::setZombieState((Zombie *)this,0,0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWealthGod::DropRedPacket() */

void __thiscall ZombieWealthGod::DropRedPacket(ZombieWealthGod *this)

{
  int iVar1;
  undefined8 *puVar2;
  Collectable *this_00;
  string *psVar3;
  undefined4 local_38;
  float fStack_34;
  float local_30;
  DVec3 aDStack_28 [8];
  float local_20;
  string asStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  psVar3 = *(string **)(gLawnApp + 0x9f0);
  std::string::string(asStack_18,"red_packet");
  this_00 = (Collectable *)Board::AddCollectable(psVar3);
  std::string::~string(asStack_18);
  nop();
  fStack_34 = (float)((ulong)*puVar2 >> 0x20);
  local_30 = *(float *)(puVar2 + 1);
  _local_38 = CONCAT44(fStack_34 - 20.0,(int)*puVar2);
  iVar1 = (**(code **)(*(long *)this + 0x300))(this,0x14);
  local_30 = (float)(iVar1 + 0x3c) + local_30;
  (**(code **)(*(long *)this_00 + 0x78))(this_00,&local_38);
  DVec3::DVec3(aDStack_28);
  local_20 = (float)(**(code **)(*(long *)this + 0x308))(0x43480000,this);
  local_20 = local_20 + 100.0;
  DVec3::DVec3((DVec3 *)asStack_18);
  local_10 = 0xc4160000;
  Collectable::SetMotionNewtonian(this_00,(SexyVector3 *)aDStack_28,(SexyVector3 *)asStack_18,true);
  Collectable::SetKeepOnBoard(this_00,true);
  Collectable::SetNeverExpire(this_00,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWealthGod::ZombieWealthGod() */

void __thiscall ZombieWealthGod::ZombieWealthGod(ZombieWealthGod *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06881bd0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieWealthGod_06882618;
  Sexy::Insets::Insets((Insets *)(this + 0x818));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x830));
  *(char **)(this + 0x838) = "super_coin_gold";
  return;
}


/* ZombieWealthGod::StaticNew() */

ZombieWealthGod * ZombieWealthGod::StaticNew(void)

{
  ZombieWealthGod *this;
  
  this = ::operator_new(0x848);
  ZombieWealthGod(this);
  return this;
}


/* ZombieWealthGod::~ZombieWealthGod() */

void __thiscall ZombieWealthGod::~ZombieWealthGod(ZombieWealthGod *this)

{
  *(undefined ***)this = &PTR_GetClass_06881bd0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieWealthGod_06882618;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x830));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieWealthGod::~ZombieWealthGod() */

void __thiscall ZombieWealthGod::~ZombieWealthGod(ZombieWealthGod *this)

{
  ~ZombieWealthGod(this + -0x10);
  return;
}


/* ZombieWealthGod::~ZombieWealthGod() */

void __thiscall ZombieWealthGod::~ZombieWealthGod(ZombieWealthGod *this)

{
  ~ZombieWealthGod(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieWealthGod::~ZombieWealthGod() */

void __thiscall ZombieWealthGod::~ZombieWealthGod(ZombieWealthGod *this)

{
  ~ZombieWealthGod(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWealthGod::PlayEffect(std::string const&, std::string const&, Sexy::Point const&, int) */

void __thiscall
ZombieWealthGod::PlayEffect
          (ZombieWealthGod *this,string *param_1,string *param_2,Point *param_3,int param_4)

{
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  GetPAMByName(param_1);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_18,(float)*(int *)param_3,(float)*(int *)(param_3 + 4),0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  FUN_0463c7fc(this_00 + 0x1c,param_4);
  Effect_PopAnim::PlaySingleAnimation(this_00,param_2,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWealthGod::IsAwake() */

void __thiscall ZombieWealthGod::IsAwake(ZombieWealthGod *this)

{
  ZombieHydraHeadAnimRig *pZVar1;
  
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  FUN_0463c808(pZVar1[0x240]);
  return;
}


/* ZombieWealthGod::onTakeBodyDamage(DamageInfo const&) */

void ZombieWealthGod::onTakeBodyDamage(DamageInfo *param_1)

{
  char cVar1;
  
  cVar1 = IsAwake((ZombieWealthGod *)param_1);
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)param_1,0x1f);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWealthGod::onEnterState_MoveUpDown(ZombieState) */

void ZombieWealthGod::onEnterState_MoveUpDown(Zombie *param_1)

{
  ZombieLaneChangingSubsystem *pZVar1;
  ZombieWealthGodProps *pZVar2;
  long *plVar3;
  code *pcVar4;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  *(undefined4 *)(param_1 + 0x800) = 0;
  param_1[0x840] = (Zombie)0x0;
  local_8 = ___stack_chk_guard;
  pZVar1 = Board::GetGameSubSystem<ZombieLaneChangingSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  pZVar2 = Zombie::GetProps<ZombieWealthGodProps>(param_1);
                    /* WARNING: Load size is inaccurate */
  ZombieLaneChangingSubsystem::ForceLaneChange
            (*(ZombieLaneChangingSubsystem **)(pZVar2 + 0x210),0x40a00000,pZVar1,param_1,
             *(undefined4 *)(param_1 + 0x828),1);
  plVar3 = (long *)Zombie::GetAnimRig(param_1);
  pcVar4 = *(code **)(*plVar3 + 0x118);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar4)(plVar3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWealthGod::onExitState_MoveUpDown(ZombieState) */

void ZombieWealthGod::onExitState_MoveUpDown(Zombie *param_1)

{
  ZombieWealthGodProps *pZVar1;
  ZombieLaneChangingSubsystem *this;
  undefined4 uVar2;
  
  pZVar1 = Zombie::GetProps<ZombieWealthGodProps>(param_1);
  uVar2 = ValueRange::GetRandomValue((ValueRange *)(pZVar1 + 0x214));
  *(undefined4 *)(param_1 + 0x808) = uVar2;
  if (param_1[0x840] != (Zombie)0x0) {
    return;
  }
  this = Board::GetGameSubSystem<ZombieLaneChangingSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  ZombieLaneChangingSubsystem::RemoveZombie(this,param_1);
  return;
}


/* ZombieWealthGod::onExitState_Attack(ZombieState) */

void ZombieWealthGod::onExitState_Attack(Zombie *param_1)

{
  ZombieWealthGodProps *pZVar1;
  undefined4 uVar2;
  
  pZVar1 = Zombie::GetProps<ZombieWealthGodProps>(param_1);
  uVar2 = ValueRange::GetRandomValue((ValueRange *)(pZVar1 + 0x21c));
  *(undefined4 *)(param_1 + 0x80c) = uVar2;
  return;
}


/* ZombieWealthGod::HasReachMaxColumn() */

bool __thiscall ZombieWealthGod::HasReachMaxColumn(ZombieWealthGod *this)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  ZombieWealthGodProps *pZVar4;
  float fVar5;
  
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar5 = *pfVar3;
  pZVar4 = Zombie::GetProps<ZombieWealthGodProps>((Zombie *)this);
  iVar1 = *(int *)(pZVar4 + 0x224);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  return fVar5 - 200.0 < (float)iVar2 * ((float)iVar1 + -0.5);
}


/* ZombieWealthGod::updateState_Walk() */

void __thiscall ZombieWealthGod::updateState_Walk(ZombieWealthGod *this)

{
  char cVar1;
  ZombieAnimRig *this_00;
  ZombieWealthGodProps *pZVar2;
  
  cVar1 = HasReachMaxColumn(this);
  if (cVar1 == '\0') {
    return;
  }
  this_00 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  pZVar2 = Zombie::GetProps<ZombieWealthGodProps>((Zombie *)this);
  ZombieAnimRig::SetDesiredWalkVelocity(this_00,*(float *)(pZVar2 + 0x228));
  Zombie::setZombieState((Zombie *)this,0,0);
  Zombie::SetIgnoresAllDamage((Zombie *)this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWealthGod::onEnterState_WakeUp(ZombieState) */

void ZombieWealthGod::onEnterState_WakeUp(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"OnWakeUpDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_WealthGod::PlayWakeUp((ZombieAnimRig_WealthGod *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWealthGod::FindZombieLionDance() */

void ZombieWealthGod::FindZombieLionDance(void)

{
  bool bVar1;
  undefined8 *puVar2;
  ZombieLionDance *pZVar3;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  Sexy::Insets::Insets(aIStack_30,200,0xa0,800,600);
  EntityFinder::GetEntitiesInRectangle(avStack_20,2,aIStack_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    pZVar3 = Sexy::RtObject::Cast<ZombieLionDance>((RtObject *)*puVar2);
    if (pZVar3 != (ZombieLionDance *)0x0) goto LAB_0463e0c8;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  pZVar3 = (ZombieLionDance *)0x0;
LAB_0463e0c8:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pZVar3);
}


/* ZombieWealthGod::CheckMoveUpDown() */

undefined8 __thiscall ZombieWealthGod::CheckMoveUpDown(ZombieWealthGod *this)

{
  int iVar1;
  int iVar2;
  SharkMinion *this_00;
  
  if (*(float *)(this + 0x800) < *(float *)(this + 0x808)) {
    return 0;
  }
  iVar1 = SharkMinion::getRow((SharkMinion *)this);
  this_00 = (SharkMinion *)FindZombieLionDance();
  if (this_00 == (SharkMinion *)0x0) {
    iVar2 = BoardConstants::NUMBER_OF_ROWS();
    if (iVar1 != iVar2 + -1) {
      iVar2 = 1;
      if (iVar1 == 0) goto LAB_0463e15c;
      iVar2 = (**(code **)(*(long *)this + 0x300))(this,2);
      if (iVar2 == 0) goto LAB_0463e1b4;
    }
  }
  else {
    iVar2 = SharkMinion::getRow(this_00);
    if (iVar2 == iVar1) {
      return 0;
    }
    if (iVar1 < iVar2) {
LAB_0463e1b4:
      iVar2 = 1;
      goto LAB_0463e15c;
    }
  }
  iVar2 = -1;
LAB_0463e15c:
  *(int *)(this + 0x828) = iVar1 + iVar2;
  Zombie::setZombieState((Zombie *)this,0x20,0);
  return 1;
}


/* ZombieWealthGod::updateState_Idle() */

void __thiscall ZombieWealthGod::updateState_Idle(ZombieWealthGod *this)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  cVar1 = IsAwake(this);
  if ((cVar1 != '\0') && (cVar1 = HasReachMaxColumn(this), cVar1 != '\0')) {
    fVar2 = (float)Zombie::getStateMachineTimeScale((Zombie *)this);
    fVar3 = (float)PVZ_Dt();
    fVar4 = *(float *)(this + 0x804) + fVar2 * fVar3;
    *(float *)(this + 0x800) = *(float *)(this + 0x800) + fVar2 * fVar3;
    *(float *)(this + 0x804) = fVar4;
    if ((fVar4 < *(float *)(this + 0x80c)) ||
       (cVar1 = ZombieEndlessWealth::findTargetAndAttack((ZombieEndlessWealth *)this), cVar1 == '\0'
       )) {
      CheckMoveUpDown(this);
      return;
    }
  }
  return;
}


/* ZombieWealthGod::onAttackAnimStopped(std::string const&) */

void ZombieWealthGod::onAttackAnimStopped(string *param_1)

{
  char cVar1;
  
  cVar1 = Zombie::isInState((Zombie *)param_1,3);
  if (cVar1 != '\0') {
    cVar1 = CheckMoveUpDown((ZombieWealthGod *)param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,0,0);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWealthGod::DropCoin() */

void __thiscall ZombieWealthGod::DropCoin(ZombieWealthGod *this)

{
  int iVar1;
  undefined8 *puVar2;
  Collectable *this_00;
  string *psVar3;
  undefined8 local_38;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  string asStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  psVar3 = *(string **)(gLawnApp + 0x9f0);
  std::string::string(asStack_18,*(char **)(this + 0x838));
  Board::AddCollectable(psVar3);
  std::string::~string(asStack_18);
  nop();
  nop();
  local_38 = *puVar2;
  local_30 = *(float *)(puVar2 + 1);
  iVar1 = (**(code **)(*(long *)this + 0x300))(this,0x14);
  local_30 = (float)(iVar1 + 0x3c) + local_30;
  (**(code **)(*(long *)this_00 + 0x78))(this_00,&local_38);
  DVec3::DVec3((DVec3 *)&local_28);
  local_28 = (float)(**(code **)(*(long *)this + 0x308))(0x428c0000,this);
  local_28 = local_28 - 70.0;
  local_24 = (float)(**(code **)(*(long *)this + 0x308))(0x41f00000,this);
  local_24 = local_24 - 30.0;
  local_20 = (float)(**(code **)(*(long *)this + 0x308))(0x43480000,this);
  local_20 = local_20 + 100.0;
  DVec3::DVec3((DVec3 *)asStack_18);
  local_10 = 0xc4160000;
  Collectable::SetMotionNewtonian(this_00,(SexyVector3 *)&local_28,(SexyVector3 *)asStack_18,true);
  Collectable::SetKeepOnBoard(this_00,true);
  Collectable::StartExpirationTimerAfterMotion(this_00);
  Collectable::ForceUpdateEffect(this_00);
  MessageRouter::Post<CollectableCoin*,CollectableCoin*>
            ((MessageRouter *)gMessageRouter,Message::CoinSpawned,(CollectableCoin *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWealthGod::UpdateDropCoin() */

void __thiscall ZombieWealthGod::UpdateDropCoin(ZombieWealthGod *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_Dt();
  fVar1 = fVar1 + *(float *)(this + 0x814);
  *(float *)(this + 0x814) = fVar1;
  if (fVar1 < *(float *)(this + 0x810)) {
    return;
  }
  *(float *)(this + 0x814) = fVar1 - *(float *)(this + 0x810);
  DropCoin(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWealthGod::DamageTarget(BoardEntity*) */

void __thiscall ZombieWealthGod::DamageTarget(ZombieWealthGod *this,BoardEntity *param_1)

{
  long lVar1;
  EntityConditionTracker<Zombie,ZombieConditions> *this_00;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0463c804(*(undefined8 *)(this + 0x550));
  fVar5 = *(float *)(lVar1 + 0x48);
  fVar3 = (float)Zombie::GetExtraDPSmodifier((Zombie *)this);
  this_00 = (EntityConditionTracker<Zombie,ZombieConditions> *)
            Zombie::GetConditionTracker((Zombie *)this);
  fVar4 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDPSModifier(this_00);
  pcVar2 = *(code **)(*(long *)param_1 + 0x110);
  Sexy::Point::Point(aPStack_78,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)(fVar3 * fVar4 * fVar5),local_70,local_6c,aDStack_68,this,aPStack_78,0);
  (*pcVar2)(param_1,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWealthGod::CalcCoinDropInterval() */

void __thiscall ZombieWealthGod::CalcCoinDropInterval(ZombieWealthGod *this)

{
  int iVar1;
  int iVar2;
  string *psVar3;
  long extraout_x0;
  ZombieWealthGodProps *pZVar4;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
  std::string::string(asStack_18,*(char **)(this + 0x838));
  ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  iVar1 = *(int *)(extraout_x0 + 0x94);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  pZVar4 = Zombie::GetProps<ZombieWealthGodProps>((Zombie *)this);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(pZVar4 + 0x230) / iVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1.3333334 / (float)iVar2);
}


/* ZombieWealthGod::updateState_Die() */

void __thiscall ZombieWealthGod::updateState_Die(ZombieWealthGod *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  ZombieHydraHeadAnimRig *this_00;
  undefined4 *puVar4;
  ZombieAnimRig *this_01;
  ZombieWealthGodProps *pZVar5;
  float *pfVar6;
  long *plVar7;
  
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  puVar4 = (undefined4 *)Zombie::GetFlag((Zombie *)this);
  bVar1 = TestFlag<VaseFlags>(*puVar4,0x400);
  if (bVar1) {
    cVar2 = CreatureAnimRig::IsPlaying((CreatureAnimRig *)this_00,4);
    if (cVar2 != '\0') {
      cVar2 = PopAnimRig::IsAnimFinished(this_00,*(undefined4 *)(this + 0x82c));
      if (cVar2 != '\0') {
        DropRedPacket(this);
        ZombieAnimRig_WealthGod::PlayEscape((ZombieAnimRig_WealthGod *)this_00);
        Zombie::SetFacing((Zombie *)this,1);
        Zombie::SetIsUsingAnimTranslation((Zombie *)this,true);
        this_01 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
        pZVar5 = Zombie::GetProps<ZombieWealthGodProps>((Zombie *)this);
        ZombieAnimRig::SetDesiredWalkVelocity(this_01,*(float *)(pZVar5 + 0x22c));
        return;
      }
      UpdateDropCoin(this);
      return;
    }
    cVar2 = CreatureAnimRig::IsPlaying((CreatureAnimRig *)this_00,9);
    if ((cVar2 != '\0') &&
       (pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this), 1000.0 < *pfVar6)) {
      (**(code **)(*(long *)this + 0x48))(this);
    }
  }
  else {
    cVar2 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)this_00);
    if (cVar2 != '\0') {
      Zombie::ClearConditions((Zombie *)this);
      plVar7 = (long *)Zombie::GetAnimRig((Zombie *)this);
      uVar3 = (**(code **)(*plVar7 + 0x148))();
      *(undefined4 *)(this + 0x82c) = uVar3;
      SetFlag<DebugLogFlags>(puVar4,0x400,1);
      uVar3 = CalcCoinDropInterval(this);
      *(undefined4 *)(this + 0x810) = uVar3;
      *(undefined4 *)(this + 0x814) = 0;
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWealthGod::findTarget() */

void __thiscall ZombieWealthGod::findTarget(ZombieWealthGod *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::IsSuspended((Zombie *)this);
  if ((cVar1 == '\0') && (cVar1 = Zombie::IsIgnoreFindTarget((Zombie *)this), cVar1 == '\0')) {
    *(undefined4 *)(this + 0x818) = 200;
    *(undefined4 *)(this + 0x81c) = 0xa0;
    *(undefined4 *)(this + 0x820) = 800;
    *(undefined4 *)(this + 0x824) = 600;
    uVar5 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    ZombieEndlessWealth::FindTargetInRect
              ((ZombieEndlessWealth *)this,(TRect *)(this + 0x818),(vector *)&local_20);
    cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    if (cVar1 == '\0') {
      uVar2 = FUN_0463c934(local_20,local_18);
      iVar3 = (**(code **)(*(long *)this + 0x300))(this,uVar2);
      puVar4 = (undefined8 *)FUN_0463c940(local_20,(long)iVar3);
      uVar5 = *puVar4;
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  else {
    uVar5 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWealthGod::FindTargetInRect(Sexy::TRect<int> const&) */

void ZombieWealthGod::FindTargetInRect(TRect *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  ZombieEndlessWealth::FindTargetInRect
            ((ZombieEndlessWealth *)param_1,param_1 + 0x818,(vector *)&local_20);
  lVar1 = FUN_0463c934(local_20,local_18);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_0463c940(local_20,0);
    uVar3 = *puVar2;
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWealthGod::StaticClassInit() */

void ZombieWealthGod::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieWealthGod");
      (*pcVar4)(plVar1,asStack_150,FUN_0463ef44,0x848,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieWealthGod,void(ZombieWealthGod::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieWealthGod,void(ZombieWealthGod::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieWealthGod,void(ZombieWealthGod::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_WealthGod_WakeUp");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0463e8dc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieWealthGod,void(ZombieWealthGod::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieWealthGod,void(ZombieWealthGod::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieWealthGod,void(ZombieWealthGod::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_WealthGod_MoveUpDown");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0463e8dc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieWealthGod::StaticGetClass() */

long * ZombieWealthGod::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieWealthGod",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWealthGod::GetClass() const */

long * ZombieWealthGod::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieWealthGod",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWealthGod::onZombieInitialize() */

void __thiscall ZombieWealthGod::onZombieInitialize(ZombieWealthGod *this)

{
  ZombieWealthGodProps *pZVar1;
  undefined4 uVar2;
  
  Zombie::onZombieInitialize((Zombie *)this);
  Zombie::SetIsFlying((Zombie *)this,true);
  this[0x840] = (ZombieWealthGod)0x0;
  *(undefined4 *)(this + 0x800) = 0;
  *(undefined4 *)(this + 0x804) = 0;
  pZVar1 = Zombie::GetProps<ZombieWealthGodProps>((Zombie *)this);
  uVar2 = ValueRange::GetRandomValue((ValueRange *)(pZVar1 + 0x214));
  *(undefined4 *)(this + 0x808) = uVar2;
  uVar2 = ValueRange::GetRandomValue((ValueRange *)(pZVar1 + 0x21c));
  *(undefined4 *)(this + 0x80c) = uVar2;
  return;
}


/* ZombieWealthGod::onPlaceOnBoard() */

void __thiscall ZombieWealthGod::onPlaceOnBoard(ZombieWealthGod *this)

{
  Zombie::onPlaceOnBoard((Zombie *)this);
  Zombie::SetIgnoresAllDamage((Zombie *)this,true);
  return;
}


/* ZombieWealthGod::registerForEvents() */

void __thiscall ZombieWealthGod::registerForEvents(ZombieWealthGod *this)

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
            ((ReceivedDataCallback *)this,OnZombieMoveUpDownFinish);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ZombieWealthGod,void(ZombieWealthGod::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieLaneChangeEnded,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWealthGod::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieWealthGod::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  float *pfVar7;
  ResourceInfo *pRVar8;
  undefined8 local_30;
  float local_28;
  float local_24;
  undefined8 local_20;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar5 = (long *)Zombie::GetAnimRig((Zombie *)param_1);
  (**(code **)(*plVar5 + 0x1e8))(asStack_18);
  cVar1 = std::operator==(param_3,asStack_18);
  std::string::~string(asStack_18);
  if (cVar1 != '\0') {
    bVar2 = std::operator==(param_4,"attack_drop");
    if (bVar2) {
      Sexy::TRect<int>::GetCenter();
      Sexy::Point::Point((Point *)&local_30,(TPoint *)asStack_18);
      lVar6 = FindTargetInRect((TRect *)param_1);
      if (lVar6 == 0) {
        Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(param_1 + 0x830));
      }
      else {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x830),
                   (RtWeakPtrBase *)asStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18)
        ;
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x830));
        (**(code **)(*plVar5 + 0xb0))(asStack_18);
        Sexy::TRect<int>::GetCenter();
        Sexy::Point::Point((Point *)&local_20,(TPoint *)&local_28);
        local_30 = local_20;
      }
      uVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(local_30._4_4_);
      iVar4 = Board::MakeRenderOrder(0x65130,uVar3,0);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,-100.0,-100.0);
      local_30 = CONCAT44((int)((float)local_30._4_4_ + local_24),
                          (int)((float)(int)local_30 + local_28));
      std::string::string((string *)&local_20,"POPANIM_EFFECTS_ZOMBIE_WEALTH_GOD_BULLET");
      std::string::string(asStack_18,"attack");
      PlayEffect((ZombieWealthGod *)param_1,(string *)&local_20,asStack_18,(Point *)&local_30,iVar4)
      ;
      std::string::~string(asStack_18);
      nop();
      std::string::~string((string *)&local_20);
      nop();
      goto LAB_0463fa64;
    }
    bVar2 = std::operator==(param_4,"attack_hit");
    if (bVar2) {
      pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0x830));
      if (pRVar8 != (ResourceInfo *)0x0) {
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x830));
        (**(code **)(*plVar5 + 0xb0))(asStack_18);
        Sexy::TRect<int>::GetCenter();
        Sexy::Point::Point((Point *)&local_30,(TPoint *)&local_20);
        uVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(local_30._4_4_);
        iVar4 = Board::MakeRenderOrder(0x65130,uVar3,1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,-100.0,-100.0);
        local_30 = CONCAT44((int)((float)local_30._4_4_ + local_24),
                            (int)((float)(int)local_30 + local_28));
        std::string::string((string *)&local_20,"POPANIM_EFFECTS_ZOMBIE_WEALTH_GOD_BULLET_HIT");
        std::string::string(asStack_18,"idle");
        PlayEffect((ZombieWealthGod *)param_1,(string *)&local_20,asStack_18,(Point *)&local_30,
                   iVar4);
        std::string::~string(asStack_18);
        nop();
        std::string::~string((string *)&local_20);
        nop();
        DamageTarget((ZombieWealthGod *)param_1,(BoardEntity *)pRVar8);
      }
      goto LAB_0463fa64;
    }
    bVar2 = std::operator==(param_4,"attack_rise");
    if (bVar2) {
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_1);
      Sexy::Point::Point((Point *)&local_30,(int)*pfVar7,(int)pfVar7[1]);
      uVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(local_30._4_4_);
      iVar4 = Board::MakeRenderOrder(0x65130,uVar3,0);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,-80.0,-200.0);
      local_30 = CONCAT44((int)((float)local_30._4_4_ + local_24),
                          (int)((float)(int)local_30 + local_28));
      std::string::string((string *)&local_20,"POPANIM_EFFECTS_ZOMBIE_WEALTH_GOD_BULLET");
      std::string::string(asStack_18,"rise");
      PlayEffect((ZombieWealthGod *)param_1,(string *)&local_20,asStack_18,(Point *)&local_30,iVar4)
      ;
      std::string::~string(asStack_18);
      nop();
      std::string::~string((string *)&local_20);
      nop();
    }
  }
  Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
LAB_0463fa64:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

