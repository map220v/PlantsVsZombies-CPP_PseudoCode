// Class: ZombieEndlessWealth


/* ZombieEndlessWealth::updateState_MoveUpDown() */

void __thiscall ZombieEndlessWealth::updateState_MoveUpDown(ZombieEndlessWealth *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)Zombie::getStateMachineTimeScale((Zombie *)this);
  fVar2 = (float)PVZ_Dt();
  *(float *)(this + 0x804) = *(float *)(this + 0x804) + fVar1 * fVar2;
  return;
}


/* ZombieEndlessWealth::updateState_Attack() */

void __thiscall ZombieEndlessWealth::updateState_Attack(ZombieEndlessWealth *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)Zombie::getStateMachineTimeScale((Zombie *)this);
  fVar2 = (float)PVZ_Dt();
  *(float *)(this + 0x800) = *(float *)(this + 0x800) + fVar1 * fVar2;
  return;
}


/* ZombieEndlessWealth::onEnterState_Attack(ZombieState) */

void ZombieEndlessWealth::onEnterState_Attack(long param_1)

{
  Zombie::onEnterState_Attack();
  *(undefined4 *)(param_1 + 0x804) = 0;
  return;
}


/* ZombieEndlessWealth::onApplyCondition(ZombieConditions) */

void __thiscall ZombieEndlessWealth::onApplyCondition(undefined8 param_1,uint param_2)

{
  if (((param_2 != 0x38) && ((param_2 & 0xfffffffd) != 0x25)) && (4 < param_2)) {
    return;
  }
  Zombie::EndCondition();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEndlessWealth::findTargetAndAttack() */

void __thiscall ZombieEndlessWealth::findTargetAndAttack(ZombieEndlessWealth *this)

{
  long lVar1;
  long lVar2;
  int in_w4;
  uint local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar1 = ___stack_chk_guard;
  lVar2 = (**(code **)(*(long *)this + 0x228))();
  if (lVar2 != 0) {
    BoardEntity::CalcGridPosition();
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(ulong)local_20,local_1c,1,1,in_w4);
    *(undefined8 *)(this + 0x818) = local_18;
    *(undefined8 *)(this + 0x820) = uStack_10;
    Zombie::setZombieState((Zombie *)this,3,0);
  }
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar2 != 0);
  }
  return;
}


/* ZombieEndlessWealth::CalcZombieAttackRect() */

Insets * ZombieEndlessWealth::CalcZombieAttackRect(void)

{
  long in_x0;
  Insets *in_x8;
  
  Sexy::Insets::Insets(in_x8,(Insets *)(in_x0 + 0x818));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEndlessWealth::FindTargetInRect(Sexy::TRect<int> const&, std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&) */

void __thiscall
ZombieEndlessWealth::FindTargetInRect(ZombieEndlessWealth *this,TRect *param_1,vector *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  Zombie *pZVar6;
  GridItem *pGVar7;
  Plant *this_00;
  undefined8 local_38;
  undefined8 local_30;
  Zombie *local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar4 = operator|(2,4);
  uVar3 = operator|(uVar4,1);
  EntityFinder::GetEntitiesInRectangle(avStack_20,uVar3,param_1);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)*puVar5);
    if (cVar2 != '\0') {
      pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
      if (pZVar6 == (Zombie *)0x0) {
        pGVar7 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar5);
        if (pGVar7 == (GridItem *)0x0) {
          this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar5);
          if (((this_00 != (Plant *)0x0) &&
              (cVar2 = Zombie::WillTargetPlant((Zombie *)this,this_00), cVar2 != '\0')) &&
             (cVar2 = Plant::IsProtect(this_00), cVar2 == '\0')) {
            local_28 = (Zombie *)this_00;
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_2,
                       (BoardEntity **)&local_28);
          }
        }
        else {
          cVar2 = (**(code **)(*(long *)pGVar7 + 0x218))(pGVar7,this);
          if (cVar2 != '\0') {
            local_28 = (Zombie *)pGVar7;
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_2,
                       (BoardEntity **)&local_28);
          }
        }
      }
      else {
        cVar2 = (**(code **)(*(long *)pZVar6 + 0x328))();
        if (cVar2 == '\0') {
          local_28 = pZVar6;
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_2,
                     (BoardEntity **)&local_28);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEndlessWealth::onEnterState_Idle(ZombieState) */

void ZombieEndlessWealth::onEnterState_Idle(long param_1)

{
  *(undefined4 *)(param_1 + 0x830) = 0;
  return;
}


/* ZombieEndlessWealth::onEndCondition(ZombieConditions) */

void __thiscall ZombieEndlessWealth::onEndCondition(ZombieEndlessWealth *this,int param_2)

{
  char cVar1;
  
  if ((param_2 == 0x3f) && (cVar1 = Zombie::isInState((Zombie *)this,0x20), cVar1 != '\0')) {
    (**(code **)(*(long *)this + 0x80))(this,1);
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return;
}


/* ZombieEndlessWealth::OnZombieMoveUpDownFinish(Zombie*) */

void __thiscall
ZombieEndlessWealth::OnZombieMoveUpDownFinish(ZombieEndlessWealth *this,Zombie *param_1)

{
  char cVar1;
  
  if ((this == (ZombieEndlessWealth *)param_1) &&
     (cVar1 = Zombie::isInState((Zombie *)this,0x1f), cVar1 != '\0')) {
    this[0x850] = (ZombieEndlessWealth)0x1;
    if (0 < *(int *)(this + 0x82c)) {
      Zombie::setZombieState((Zombie *)this,1,0);
      return;
    }
    Zombie::setZombieState((Zombie *)this,0,0);
    return;
  }
  return;
}


/* ZombieEndlessWealth::CheckMoveUpDown() */

undefined8 __thiscall ZombieEndlessWealth::CheckMoveUpDown(ZombieEndlessWealth *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(float *)(this + 0x800) < *(float *)(this + 0x808)) && (*(int *)(this + 0x82c) < 1)) {
    return 0;
  }
  iVar1 = (**(code **)(*(long *)this + 0x300))(this,4);
  if (iVar1 != 0) {
    iVar1 = SharkMinion::getRow((SharkMinion *)this);
    iVar2 = BoardConstants::NUMBER_OF_ROWS();
    if ((iVar1 == iVar2 + -1) ||
       ((iVar2 = 1, iVar1 != 0 && (iVar3 = (**(code **)(*(long *)this + 0x300))(this,2), iVar3 != 0)
        ))) {
      iVar2 = -1;
    }
    *(int *)(this + 0x828) = iVar1 + iVar2;
    Zombie::setZombieState((Zombie *)this,0x1f,0);
    return 1;
  }
  Zombie::setZombieState((Zombie *)this,0x21);
  return 1;
}


/* ZombieEndlessWealth::onAttackAnimStopped(std::string const&) */

void ZombieEndlessWealth::onAttackAnimStopped(string *param_1)

{
  char cVar1;
  
  cVar1 = Zombie::isInState((Zombie *)param_1,3);
  if (cVar1 != '\0') {
    cVar1 = CheckMoveUpDown((ZombieEndlessWealth *)param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,1);
      return;
    }
  }
  return;
}


/* ZombieEndlessWealth::ZombieEndlessWealth() */

void __thiscall ZombieEndlessWealth::ZombieEndlessWealth(ZombieEndlessWealth *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068829a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEndlessWealth_06883400;
  Sexy::Insets::Insets((Insets *)(this + 0x818));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x840));
  *(char **)(this + 0x848) = "coin_gold";
  return;
}


/* ZombieEndlessWealth::StaticNew() */

ZombieEndlessWealth * ZombieEndlessWealth::StaticNew(void)

{
  ZombieEndlessWealth *this;
  
  this = ::operator_new(0x858);
  ZombieEndlessWealth(this);
  return this;
}


/* ZombieEndlessWealth::~ZombieEndlessWealth() */

void __thiscall ZombieEndlessWealth::~ZombieEndlessWealth(ZombieEndlessWealth *this)

{
  *(undefined ***)this = &PTR_GetClass_068829a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEndlessWealth_06883400;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x840));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieEndlessWealth::~ZombieEndlessWealth() */

void __thiscall ZombieEndlessWealth::~ZombieEndlessWealth(ZombieEndlessWealth *this)

{
  ~ZombieEndlessWealth(this + -0x10);
  return;
}


/* ZombieEndlessWealth::~ZombieEndlessWealth() */

void __thiscall ZombieEndlessWealth::~ZombieEndlessWealth(ZombieEndlessWealth *this)

{
  ~ZombieEndlessWealth(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieEndlessWealth::~ZombieEndlessWealth() */

void __thiscall ZombieEndlessWealth::~ZombieEndlessWealth(ZombieEndlessWealth *this)

{
  ~ZombieEndlessWealth(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEndlessWealth::PlayEffect(std::string const&, std::string const&, Sexy::Point const&, int)
    */

void __thiscall
ZombieEndlessWealth::PlayEffect
          (ZombieEndlessWealth *this,string *param_1,string *param_2,Point *param_3,int param_4)

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
  FUN_0463fe3c(this_00 + 0x1c,param_4);
  Effect_PopAnim::PlaySingleAnimation(this_00,param_2,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEndlessWealth::onEnterState_Escape(ZombieState) */

void ZombieEndlessWealth::onEnterState_Escape(Zombie *param_1)

{
  int iVar1;
  ZombieHydraHeadAnimRig *this;
  Effect_PopAnim *this_00;
  PopAnim *pPVar2;
  float *pfVar3;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_EndlessWealth::PlayEscape((ZombieAnimRig_EndlessWealth *)this);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_THYMEWARP_ZOMBIE_WARP");
  GetPAMByName(asStack_20);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_20);
  nop();
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,*pfVar3,pfVar3[1] - 40.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  iVar1 = (**(code **)(*(long *)param_1 + 200))(param_1);
  FUN_0463fe3c(this_00 + 0x1c,iVar1 + -1);
  Effect_PopAnim::SetCentered(this_00,true);
  std::string::string((string *)aRStack_18,"warp_out");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  Zombie::StartWarpOut(param_1,2.5);
  Zombie::RemoveMarkedForDeath(param_1);
  Zombie::SetIsControlled(param_1,true);
  Zombie::SetIgnoresAllDamage(param_1,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEndlessWealth::updateState_Idle() */

void __thiscall ZombieEndlessWealth::updateState_Idle(ZombieEndlessWealth *this)

{
  ZombieEndlessWealthProps *pZVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)Zombie::getStateMachineTimeScale((Zombie *)this);
  fVar3 = (float)PVZ_Dt();
  fVar2 = *(float *)(this + 0x830) + fVar2 * fVar3;
  *(float *)(this + 0x830) = fVar2;
  pZVar1 = Zombie::GetProps<ZombieEndlessWealthProps>((Zombie *)this);
  if (fVar2 < *(float *)(pZVar1 + 0x238)) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,1,0);
  return;
}


/* ZombieEndlessWealth::onEnterState_MoveUpDown(ZombieState) */

void ZombieEndlessWealth::onEnterState_MoveUpDown(Zombie *param_1)

{
  ZombieLaneChangingSubsystem *this;
  ZombieEndlessWealthProps *pZVar1;
  
  param_1[0x850] = (Zombie)0x0;
  *(undefined4 *)(param_1 + 0x800) = 0;
  if (*(int *)(param_1 + 0x82c) < 1) {
    pZVar1 = Zombie::GetProps<ZombieEndlessWealthProps>(param_1);
    *(int *)(param_1 + 0x82c) = *(int *)(pZVar1 + 0x234) + -1;
  }
  else {
    *(int *)(param_1 + 0x82c) = *(int *)(param_1 + 0x82c) + -1;
  }
  this = Board::GetGameSubSystem<ZombieLaneChangingSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  ZombieLaneChangingSubsystem::RemoveZombie(this,param_1);
  pZVar1 = Zombie::GetProps<ZombieEndlessWealthProps>(param_1);
                    /* WARNING: Load size is inaccurate */
  ZombieLaneChangingSubsystem::ForceLaneChange
            (*(ZombieLaneChangingSubsystem **)(pZVar1 + 0x210),0,this,param_1,
             *(undefined4 *)(param_1 + 0x828),1);
  return;
}


/* ZombieEndlessWealth::onExitState_MoveUpDown(ZombieState) */

void ZombieEndlessWealth::onExitState_MoveUpDown(Zombie *param_1)

{
  ZombieEndlessWealthProps *pZVar1;
  ZombieLaneChangingSubsystem *this;
  undefined4 uVar2;
  
  pZVar1 = Zombie::GetProps<ZombieEndlessWealthProps>(param_1);
  uVar2 = ValueRange::GetRandomValue((ValueRange *)(pZVar1 + 0x214));
  *(undefined4 *)(param_1 + 0x808) = uVar2;
  if (param_1[0x850] != (Zombie)0x0) {
    return;
  }
  this = Board::GetGameSubSystem<ZombieLaneChangingSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  ZombieLaneChangingSubsystem::RemoveZombie(this,param_1);
  return;
}


/* ZombieEndlessWealth::onEnterState_Backward(ZombieState) */

void ZombieEndlessWealth::onEnterState_Backward(Zombie *param_1)

{
  ZombieEndlessWealthProps *pZVar1;
  
  if (0 < *(int *)(param_1 + 0x82c)) {
    *(int *)(param_1 + 0x82c) = *(int *)(param_1 + 0x82c) + -1;
    *(undefined4 *)(param_1 + 0x834) = 0;
    *(undefined4 *)(param_1 + 0x838) = 0;
    return;
  }
  pZVar1 = Zombie::GetProps<ZombieEndlessWealthProps>(param_1);
  *(int *)(param_1 + 0x82c) = *(int *)(pZVar1 + 0x234) + -1;
  *(undefined4 *)(param_1 + 0x834) = 0;
  *(undefined4 *)(param_1 + 0x838) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEndlessWealth::updateState_Backward() */

void __thiscall ZombieEndlessWealth::updateState_Backward(ZombieEndlessWealth *this)

{
  int iVar1;
  Insets *pIVar2;
  ZombieEndlessWealthProps *pZVar3;
  float *pfVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  Vec3 aVStack_28 [16];
  int local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar6 = (float)Zombie::getStateMachineTimeScale((Zombie *)this);
  fVar7 = (float)PVZ_Dt();
  pcVar5 = *(code **)(*(long *)this + 0x178);
  *(float *)(this + 0x834) = *(float *)(this + 0x834) + fVar6 * fVar7;
  pIVar2 = (Insets *)(*pcVar5)(this);
  Sexy::Insets::Insets((Insets *)local_18,pIVar2);
  fVar6 = *(float *)(this + 0x834);
  pZVar3 = Zombie::GetProps<ZombieEndlessWealthProps>((Zombie *)this);
  if (((*(float *)(pZVar3 + 0x23c) <= fVar6) ||
      (fVar6 = *(float *)(this + 0x838), iVar1 = BoardConstants::GRIDSQUARE_WIDTH(),
      (float)iVar1 * 1.5 <= fVar6)) ||
     (iVar1 = BoardConstants::GRIDSQUARE_WIDTH(), 800 - iVar1 <= local_18[0])) {
    if (*(int *)(this + 0x82c) < 1) {
      Zombie::setZombieState((Zombie *)this,0,0);
    }
    else {
      Zombie::setZombieState((Zombie *)this,1,0);
    }
  }
  else {
    pcVar5 = *(code **)(*(long *)this + 0x78);
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar6 = *pfVar4;
    pZVar3 = Zombie::GetProps<ZombieEndlessWealthProps>((Zombie *)this);
    EATextSquish::Vec3::Vec3(aVStack_28,fVar6 + *(float *)(pZVar3 + 0x240),pfVar4[1],pfVar4[2]);
    (*pcVar5)(this,aVStack_28);
    pZVar3 = Zombie::GetProps<ZombieEndlessWealthProps>((Zombie *)this);
    *(float *)(this + 0x838) = *(float *)(this + 0x838) + *(float *)(pZVar3 + 0x240);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEndlessWealth::onExitState_Attack(ZombieState) */

void ZombieEndlessWealth::onExitState_Attack(Zombie *param_1)

{
  ZombieEndlessWealthProps *pZVar1;
  undefined4 uVar2;
  
  pZVar1 = Zombie::GetProps<ZombieEndlessWealthProps>(param_1);
  uVar2 = ValueRange::GetRandomValue((ValueRange *)(pZVar1 + 0x21c));
  *(undefined4 *)(param_1 + 0x80c) = uVar2;
  return;
}


/* ZombieEndlessWealth::HasReachMaxColumn() */

bool __thiscall ZombieEndlessWealth::HasReachMaxColumn(ZombieEndlessWealth *this)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  ZombieEndlessWealthProps *pZVar4;
  float fVar5;
  
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar5 = *pfVar3;
  pZVar4 = Zombie::GetProps<ZombieEndlessWealthProps>((Zombie *)this);
  iVar1 = *(int *)(pZVar4 + 0x224);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  return fVar5 - 200.0 < (float)iVar2 * ((float)iVar1 + -0.5);
}


/* ZombieEndlessWealth::updateState_Walk() */

void __thiscall ZombieEndlessWealth::updateState_Walk(ZombieEndlessWealth *this)

{
  char cVar1;
  ZombieAnimRig *this_00;
  float fVar2;
  float fVar3;
  
  cVar1 = HasReachMaxColumn(this);
  if (cVar1 == '\0') {
    fVar2 = (float)Zombie::getStateMachineTimeScale((Zombie *)this);
    fVar3 = (float)PVZ_Dt();
    *(float *)(this + 0x800) = *(float *)(this + 0x800) + fVar2 * fVar3;
    CheckMoveUpDown(this);
    return;
  }
  this_00 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  ZombieAnimRig::SetDesiredWalkVelocity(this_00,0.0);
  Zombie::setZombieState((Zombie *)this,0x20,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEndlessWealth::DropCoin() */

void __thiscall ZombieEndlessWealth::DropCoin(ZombieEndlessWealth *this)

{
  int iVar1;
  undefined8 *puVar2;
  ZombieEndlessWealthProps *pZVar3;
  long lVar4;
  Collectable *this_00;
  string *psVar5;
  float fVar6;
  string asStack_40 [8];
  undefined8 local_38;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  DVec3 aDStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  fVar6 = (float)(**(code **)(*(long *)this + 0x308))(0x3f800000,this);
  pZVar3 = Zombie::GetProps<ZombieEndlessWealthProps>((Zombie *)this);
  psVar5 = *(string **)(gLawnApp + 0x9f0);
  if (*(float *)(pZVar3 + 0x250) < fVar6) {
    Zombie::GetProps<ZombieEndlessWealthProps>((Zombie *)this);
    lVar4 = Board::AddCollectable(psVar5);
  }
  else {
    Zombie::GetProps<ZombieEndlessWealthProps>((Zombie *)this);
    lVar4 = Board::AddCollectable(psVar5);
  }
  if (lVar4 != 0) {
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
    DVec3::DVec3(aDStack_18);
    local_10 = 0xc4160000;
    Collectable::SetMotionNewtonian(this_00,(SexyVector3 *)&local_28,(SexyVector3 *)aDStack_18,true)
    ;
    Collectable::SetKeepOnBoard(this_00,true);
    Collectable::StartExpirationTimerAfterMotion(this_00);
    Collectable::ForceUpdateEffect(this_00);
    MessageRouter::Post<CollectableCoin*,CollectableCoin*>
              ((MessageRouter *)gMessageRouter,Message::CoinSpawned,(CollectableCoin *)this_00);
    std::string::string(asStack_40,"Play_UI_Coin_Drop");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_40,0.0);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEndlessWealth::onTakeBodyDamage(DamageInfo const&) */

void ZombieEndlessWealth::onTakeBodyDamage(DamageInfo *param_1)

{
  ZombieEndlessWealthProps *pZVar1;
  float fVar2;
  
  fVar2 = (float)(**(code **)(*(long *)param_1 + 0x308))(0x3f800000);
  pZVar1 = Zombie::GetProps<ZombieEndlessWealthProps>((Zombie *)param_1);
  if (*(float *)(pZVar1 + 0x244) < fVar2) {
    return;
  }
  DropCoin((ZombieEndlessWealth *)param_1);
  return;
}


/* ZombieEndlessWealth::UpdateDropCoin() */

void __thiscall ZombieEndlessWealth::UpdateDropCoin(ZombieEndlessWealth *this)

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
/* ZombieEndlessWealth::DamageTarget(BoardEntity*) */

void __thiscall ZombieEndlessWealth::DamageTarget(ZombieEndlessWealth *this,BoardEntity *param_1)

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
  lVar1 = FUN_0463fe44(*(undefined8 *)(this + 0x550));
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
/* ZombieEndlessWealth::CalcCoinDropInterval() */

void __thiscall ZombieEndlessWealth::CalcCoinDropInterval(ZombieEndlessWealth *this)

{
  int iVar1;
  int iVar2;
  string *psVar3;
  long extraout_x0;
  ZombieEndlessWealthProps *pZVar4;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
  std::string::string(asStack_18,*(char **)(this + 0x848));
  ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  iVar1 = *(int *)(extraout_x0 + 0x94);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  pZVar4 = Zombie::GetProps<ZombieEndlessWealthProps>((Zombie *)this);
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


/* ZombieEndlessWealth::updateState_Die() */

void __thiscall ZombieEndlessWealth::updateState_Die(ZombieEndlessWealth *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  ZombieHydraHeadAnimRig *pZVar4;
  undefined4 *puVar5;
  long *plVar6;
  
  pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  puVar5 = (undefined4 *)Zombie::GetFlag((Zombie *)this);
  bVar1 = TestFlag<VaseFlags>(*puVar5,0x400);
  if (bVar1) {
    cVar2 = CreatureAnimRig::IsPlaying((CreatureAnimRig *)pZVar4,4);
    if (cVar2 != '\0') {
      cVar2 = PopAnimRig::IsAnimFinished(pZVar4,*(undefined4 *)(this + 0x83c));
      if (cVar2 != '\0') {
        (**(code **)(*(long *)this + 0x48))(this);
        return;
      }
      UpdateDropCoin(this);
      return;
    }
  }
  else {
    cVar2 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)pZVar4);
    if (cVar2 != '\0') {
      Zombie::ClearConditions((Zombie *)this);
      plVar6 = (long *)Zombie::GetAnimRig((Zombie *)this);
      uVar3 = (**(code **)(*plVar6 + 0x148))();
      *(undefined4 *)(this + 0x83c) = uVar3;
      SetFlag<DebugLogFlags>(puVar5,0x400,1);
      uVar3 = CalcCoinDropInterval(this);
      *(undefined4 *)(this + 0x810) = uVar3;
      *(undefined4 *)(this + 0x814) = 0;
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEndlessWealth::findTarget() */

void __thiscall ZombieEndlessWealth::findTarget(ZombieEndlessWealth *this)

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
    FindTargetInRect(this,(TRect *)(this + 0x818),(vector *)&local_20);
    cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    if (cVar1 == '\0') {
      uVar2 = FUN_0463fe58(local_20,local_18);
      iVar3 = (**(code **)(*(long *)this + 0x300))(this,uVar2);
      puVar4 = (undefined8 *)FUN_0463fe64(local_20,(long)iVar3);
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
/* ZombieEndlessWealth::FindTargetInRect(Sexy::TRect<int> const&) */

void ZombieEndlessWealth::FindTargetInRect(TRect *param_1)

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
  FindTargetInRect((ZombieEndlessWealth *)param_1,param_1 + 0x818,(vector *)&local_20);
  lVar1 = FUN_0463fe58(local_20,local_18);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_0463fe64(local_20,0);
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
/* ZombieEndlessWealth::StaticClassInit() */

void ZombieEndlessWealth::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieEndlessWealth");
      (*pcVar4)(plVar1,asStack_150,FUN_046423c8,0x858,0);
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
  Delegate1<ZombieEndlessWealth,void(ZombieEndlessWealth::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieEndlessWealth,void(ZombieEndlessWealth::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieEndlessWealth,void(ZombieEndlessWealth::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_EndlessWealth_MoveUpDown");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04641e74(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieEndlessWealth,void(ZombieEndlessWealth::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieEndlessWealth,void(ZombieEndlessWealth::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieEndlessWealth,void(ZombieEndlessWealth::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_EndlessWealth_Escape");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04641e74(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieEndlessWealth,void(ZombieEndlessWealth::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieEndlessWealth,void(ZombieEndlessWealth::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieEndlessWealth,void(ZombieEndlessWealth::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_EndlessWealth_Backward");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04641e74(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieEndlessWealth::StaticGetClass() */

long * ZombieEndlessWealth::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieEndlessWealth",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEndlessWealth::GetClass() const */

long * ZombieEndlessWealth::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieEndlessWealth",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEndlessWealth::onZombieInitialize() */

void __thiscall ZombieEndlessWealth::onZombieInitialize(ZombieEndlessWealth *this)

{
  ZombieEndlessWealthProps *pZVar1;
  undefined4 uVar2;
  
  Zombie::onZombieInitialize((Zombie *)this);
  Zombie::SetIsFlying((Zombie *)this,true);
  *(undefined4 *)(this + 0x82c) = 0;
  *(undefined4 *)(this + 0x800) = 0;
  *(undefined4 *)(this + 0x804) = 0;
  *(undefined4 *)(this + 0x830) = 0;
  pZVar1 = Zombie::GetProps<ZombieEndlessWealthProps>((Zombie *)this);
  uVar2 = ValueRange::GetRandomValue((ValueRange *)(pZVar1 + 0x214));
  *(undefined4 *)(this + 0x808) = uVar2;
  uVar2 = ValueRange::GetRandomValue((ValueRange *)(pZVar1 + 0x21c));
  this[0x850] = (ZombieEndlessWealth)0x0;
  *(undefined4 *)(this + 0x80c) = uVar2;
  return;
}


/* ZombieEndlessWealth::registerForEvents() */

void __thiscall ZombieEndlessWealth::registerForEvents(ZombieEndlessWealth *this)

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
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ZombieEndlessWealth,void(ZombieEndlessWealth::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieLaneChangeEnded,&local_40);
  return;
}


/* ZombieEndlessWealth::IsDying() const */

void __thiscall ZombieEndlessWealth::IsDying(ZombieEndlessWealth *this)

{
  char cVar1;
  
  cVar1 = Zombie::IsDying((Zombie *)this);
  if (cVar1 != '\0') {
    return;
  }
  Zombie::isInState((Zombie *)this,0x20);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEndlessWealth::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieEndlessWealth::onPopAnimCommand
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
        Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(param_1 + 0x840));
      }
      else {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x840),
                   (RtWeakPtrBase *)asStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18)
        ;
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x840));
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
      std::string::string((string *)&local_20,"POPANIM_EFFECTS_ZOMBIE_ENDLESSWEALTH_BULLET");
      std::string::string(asStack_18,"attack");
      PlayEffect((ZombieEndlessWealth *)param_1,(string *)&local_20,asStack_18,(Point *)&local_30,
                 iVar4);
      std::string::~string(asStack_18);
      nop();
      std::string::~string((string *)&local_20);
      nop();
      goto LAB_04642fb8;
    }
    bVar2 = std::operator==(param_4,"attack_hit");
    if (bVar2) {
      pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0x840));
      if (pRVar8 != (ResourceInfo *)0x0) {
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x840));
        (**(code **)(*plVar5 + 0xb0))(asStack_18);
        Sexy::TRect<int>::GetCenter();
        Sexy::Point::Point((Point *)&local_30,(TPoint *)&local_20);
        uVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(local_30._4_4_);
        iVar4 = Board::MakeRenderOrder(0x65130,uVar3,1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,-100.0,-100.0);
        local_30 = CONCAT44((int)((float)local_30._4_4_ + local_24),
                            (int)((float)(int)local_30 + local_28));
        std::string::string((string *)&local_20,"POPANIM_EFFECTS_ZOMBIE_ENDLESSWEALTH_BULLET_HIT");
        std::string::string(asStack_18,"idle");
        PlayEffect((ZombieEndlessWealth *)param_1,(string *)&local_20,asStack_18,(Point *)&local_30,
                   iVar4);
        std::string::~string(asStack_18);
        nop();
        std::string::~string((string *)&local_20);
        nop();
        DamageTarget((ZombieEndlessWealth *)param_1,(BoardEntity *)pRVar8);
      }
      goto LAB_04642fb8;
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
      std::string::string((string *)&local_20,"POPANIM_EFFECTS_ZOMBIE_ENDLESSWEALTH_BULLET");
      std::string::string(asStack_18,"rise");
      PlayEffect((ZombieEndlessWealth *)param_1,(string *)&local_20,asStack_18,(Point *)&local_30,
                 iVar4);
      std::string::~string(asStack_18);
      nop();
      std::string::~string((string *)&local_20);
      nop();
    }
  }
  Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
LAB_04642fb8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

