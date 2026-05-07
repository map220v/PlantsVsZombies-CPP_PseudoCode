// Class: DinosaurAnkylosaurus


/* DinosaurAnkylosaurus::onExitComplete(std::string const&) */

void DinosaurAnkylosaurus::onExitComplete(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* DinosaurAnkylosaurus::CalcBaseCreatureRenderLayer() const */

undefined8 DinosaurAnkylosaurus::CalcBaseCreatureRenderLayer(void)

{
  return 0x639c0;
}


/* DinosaurAnkylosaurus::~DinosaurAnkylosaurus() */

void __thiscall DinosaurAnkylosaurus::~DinosaurAnkylosaurus(DinosaurAnkylosaurus *this)

{
  *(undefined ***)this = &PTR_GetClass_069040a0;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurAnkylosaurus_06904450;
  Dinosaur::~Dinosaur((Dinosaur *)this);
  return;
}


/* non-virtual thunk to DinosaurAnkylosaurus::~DinosaurAnkylosaurus() */

void __thiscall DinosaurAnkylosaurus::~DinosaurAnkylosaurus(DinosaurAnkylosaurus *this)

{
  ~DinosaurAnkylosaurus(this + -0x10);
  return;
}


/* DinosaurAnkylosaurus::~DinosaurAnkylosaurus() */

void __thiscall DinosaurAnkylosaurus::~DinosaurAnkylosaurus(DinosaurAnkylosaurus *this)

{
  ~DinosaurAnkylosaurus(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DinosaurAnkylosaurus::~DinosaurAnkylosaurus() */

void __thiscall DinosaurAnkylosaurus::~DinosaurAnkylosaurus(DinosaurAnkylosaurus *this)

{
  ~DinosaurAnkylosaurus(this + -0x10);
  return;
}


/* DinosaurAnkylosaurus::onEnterComplete(std::string const&) */

void DinosaurAnkylosaurus::onEnterComplete(string *param_1)

{
  Creature::setState((Creature *)param_1,0,0);
  return;
}


/* DinosaurAnkylosaurus::isValidZombieTarget(Zombie*) */

byte __thiscall
DinosaurAnkylosaurus::isValidZombieTarget(DinosaurAnkylosaurus *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  if (((((param_1 == (Zombie *)0x0) || (cVar1 = Zombie::IsFriendZombie(param_1), cVar1 != '\0')) ||
       (cVar1 = Zombie::IsFlying(param_1), cVar1 != '\0')) ||
      ((cVar1 = Zombie::IsFlickedOff(param_1), cVar1 != '\0' ||
       (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 != '\0')))) ||
     ((cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 != '\0' ||
      ((cVar1 = Zombie::IsControlled(param_1), cVar1 != '\0' ||
       (cVar1 = Zombie::IsTargetable(param_1), cVar1 == '\0')))))) {
    bVar2 = 0;
  }
  else {
    pcVar4 = *(code **)(*(long *)param_1 + 0x20);
    uVar3 = ZombieZombossMech::StaticGetClass();
    bVar2 = (*pcVar4)(param_1,uVar3);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnkylosaurus::onEnterState_Walk(CreatureState) */

void DinosaurAnkylosaurus::onEnterState_Walk
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_1);
  local_10 = *(undefined4 *)(puVar2 + 1);
  _local_18 = CONCAT44((int)((ulong)*puVar2 >> 0x20),(float)(*(int *)(param_1 + 0xa4) + -0x3c));
  (**(code **)(*(long *)param_1 + 0x78))(param_1,&local_18);
  lVar1 = ___stack_chk_guard;
  param_1[0x220] =
       (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        )0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurAnkylosaurus::CanBeCharmed() */

bool __thiscall DinosaurAnkylosaurus::CanBeCharmed(DinosaurAnkylosaurus *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = Dinosaur::CanBeCharmed((Dinosaur *)this);
  bVar1 = false;
  if (cVar2 != '\0') {
    iVar3 = Creature::getState((Creature *)this);
    bVar1 = iVar3 == 0;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnkylosaurus::flickOffZombie(Zombie*) */

void __thiscall DinosaurAnkylosaurus::flickOffZombie(DinosaurAnkylosaurus *this,Zombie *param_1)

{
  float *pfVar1;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  EATextSquish::Vec3::Vec3(aVStack_18,*pfVar1 + 500.0,pfVar1[1],pfVar1[2] + 100.0);
  Zombie::FlickOff((SexyVector3 *)param_1,400.0,0.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurAnkylosaurus::DinosaurAnkylosaurus() */

void __thiscall DinosaurAnkylosaurus::DinosaurAnkylosaurus(DinosaurAnkylosaurus *this)

{
  undefined4 uVar1;
  
  Dinosaur::Dinosaur((Dinosaur *)this);
  *(undefined4 *)(this + 0x21c) = 0;
  *(undefined ***)this = &PTR_GetClass_069040a0;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurAnkylosaurus_06904450;
  uVar1 = PVZ_T();
  this[0x220] = (DinosaurAnkylosaurus)0x0;
  *(undefined4 *)(this + 0x218) = uVar1;
  return;
}


/* DinosaurAnkylosaurus::StaticNew() */

DinosaurAnkylosaurus * DinosaurAnkylosaurus::StaticNew(void)

{
  DinosaurAnkylosaurus *this;
  
  this = ::operator_new(0x228);
  DinosaurAnkylosaurus(this);
  return this;
}


/* DinosaurAnkylosaurus::isTimeToFling() */

bool __thiscall DinosaurAnkylosaurus::isTimeToFling(DinosaurAnkylosaurus *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  return *(float *)(this + 0x218) <= fVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnkylosaurus::calculateTargetingRect() const */

void __thiscall DinosaurAnkylosaurus::calculateTargetingRect(DinosaurAnkylosaurus *this)

{
  long lVar1;
  DinosaurAnkylosaurusPropertySheet *pDVar2;
  Insets *in_x8;
  int local_c;
  
  lVar1 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  pDVar2 = Creature::GetProps<DinosaurAnkylosaurusPropertySheet>();
  Sexy::Insets::Insets(in_x8,*(int *)(pDVar2 + 0xa0),local_c,2,1);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnkylosaurus::calcTossDestination(Zombie*) */

void __thiscall
DinosaurAnkylosaurus::calcTossDestination(DinosaurAnkylosaurus *this,Zombie *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  DinosaurAnkylosaurusPropertySheet *pDVar5;
  int *piVar6;
  long *plVar7;
  float *pfVar8;
  float fVar9;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar5 = Creature::GetProps<DinosaurAnkylosaurusPropertySheet>();
  BoardEntity::CalcGridPosition();
  local_28 = *(int *)(pDVar5 + 0xac) + -1;
  local_18 = CONCAT44(local_18._4_4_,local_30 - *(int *)(pDVar5 + 0xb4));
  piVar6 = eastl::max_alt<int>(&local_28,(int *)&local_18);
  iVar1 = *piVar6;
  fVar9 = 0.0;
  for (; iVar1 <= local_30; local_30 = local_30 + -1) {
    plVar7 = (long *)Board::GetPlantGroupAt(*(Board **)(gLawnApp + 0x9f0),local_30,local_2c);
    if (plVar7 != (long *)0x0) {
      uVar4 = operator|(0x40,0x80);
      cVar2 = (**(code **)(*plVar7 + 0xb8))(plVar7,uVar4);
      if (cVar2 != '\0') break;
    }
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar9 = fVar9 - (float)iVar3;
  }
  pfVar8 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,fVar9 + *pfVar8,pfVar8[1],0.0);
  local_18 = CONCAT44(uStack_24,local_28);
  local_10 = local_20;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_28,uStack_24,local_20);
}


/* DinosaurAnkylosaurus::setupTimeToFling() */

void __thiscall DinosaurAnkylosaurus::setupTimeToFling(DinosaurAnkylosaurus *this)

{
  DinosaurAnkylosaurusPropertySheet *pDVar1;
  float fVar2;
  
  pDVar1 = Creature::GetProps<DinosaurAnkylosaurusPropertySheet>();
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x218) = fVar2 + *(float *)(pDVar1 + 0xa8);
  return;
}


/* DinosaurAnkylosaurus::onAttackAnimComplete(std::string const&) */

void DinosaurAnkylosaurus::onAttackAnimComplete(string *param_1)

{
  DinosaurAnkylosaurusPropertySheet *pDVar1;
  
  pDVar1 = Creature::GetProps<DinosaurAnkylosaurusPropertySheet>();
  if (*(int *)(param_1 + 0x21c) < *(int *)(pDVar1 + 0xb0)) {
    setupTimeToFling((DinosaurAnkylosaurus *)param_1);
    Creature::setState((Creature *)param_1,0,0);
    return;
  }
  Creature::setState((Creature *)param_1,9,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnkylosaurus::onEnterState_Enter(AnkyloState) */

void DinosaurAnkylosaurus::onEnterState_Enter(Dinosaur *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  DinosaurAnimRig_Runner *pDVar3;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  undefined8 local_60;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Dinosaur::disableTimeout(param_1);
  if (param_1[0xa1] == (Dinosaur)0x0) {
    puVar2 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    local_60 = *puVar2;
    local_58 = *(undefined4 *)(puVar2 + 1);
    iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar1 = BoardTransforms::GridToBoardSpaceX(iVar1 + -1);
    local_60 = CONCAT44(local_60._4_4_,(float)iVar1);
    (**(code **)(*(long *)param_1 + 0x78))(param_1,&local_60);
  }
  pDVar3 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string((string *)&local_60,"onEnterComplete");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             (string *)&local_60);
  DinosaurAnimRig_Ankylosaurus::PlayEnterAnimation
            ((DinosaurAnimRig_Ankylosaurus *)pDVar3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)&local_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnkylosaurus::onEnterState_Withdraw(AnkyloState) */

void DinosaurAnkylosaurus::onEnterState_Withdraw(Creature *param_1)

{
  char cVar1;
  DinosaurAnimRig_Runner *pDVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar2 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onExitComplete");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  DinosaurAnimRig_Ankylosaurus::PlayExitAnimation((DinosaurAnimRig_Ankylosaurus *)pDVar2,aRStack_50)
  ;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  cVar1 = Creature::IsWaveToLeave(param_1);
  if ((cVar1 != '\0') || (cVar1 = Dinosaur::isTimedOut((Dinosaur *)param_1), cVar1 != '\0')) {
    Creature::ApplyExitSpeedup(param_1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnkylosaurus::onEnterState_Tail_Fling_Zombies(AnkyloState) */

void DinosaurAnkylosaurus::onEnterState_Tail_Fling_Zombies(Creature *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAttackAnimComplete");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  DinosaurAnimRig_Ankylosaurus::PlayAttackAnimation
            ((DinosaurAnimRig_Ankylosaurus *)pDVar1,aRStack_50);
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
/* DinosaurAnkylosaurus::onEnterState_Idle(CreatureState) */

void DinosaurAnkylosaurus::onEnterState_Idle
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  undefined8 *puVar2;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  float local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1[0xa1] ==
       (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        )0x0) ||
     (param_1[0x220] !=
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       )0x0)) {
    Dinosaur::resetTimeout((Dinosaur *)param_1);
  }
  else {
    puVar2 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(param_1);
    local_58 = *(undefined4 *)(puVar2 + 1);
    local_60 = (float)*puVar2;
    _local_60 = CONCAT44((int)((ulong)*puVar2 >> 0x20),local_60 - 60.0);
    (**(code **)(*(long *)param_1 + 0x78))(param_1,&local_60);
  }
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string((string *)&local_60,"onIdleContinued");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             aRStack_50,aRStack_68,(string *)&local_60);
  DinosaurAnimRig_Ankylosaurus::PlayIdleAnimation((DinosaurAnimRig_Ankylosaurus *)pDVar1,aRStack_50)
  ;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)&local_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnkylosaurus::onIdleContinued(std::string const&, std::string const&, int) */

void DinosaurAnkylosaurus::onIdleContinued(string *param_1,string *param_2,int param_3)

{
  char cVar1;
  DinosaurAnimRig_Runner *pDVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0xa1] == (string)0x0) {
    cVar1 = Creature::IsWaveToLeave((Creature *)param_1);
    if ((cVar1 == '\0') && (cVar1 = Dinosaur::isTimedOut((Dinosaur *)param_1), cVar1 == '\0')) {
      cVar1 = (**(code **)(*(long *)param_1 + 0x338))(param_1);
      if (cVar1 == '\0') {
        pDVar2 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)param_1);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string(asStack_58,"onIdleContinued");
        RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
        RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>
                    *)aRStack_50,aRStack_60,asStack_58);
        DinosaurAnimRig_Ankylosaurus::PlayIdleAnimation
                  ((DinosaurAnimRig_Ankylosaurus *)pDVar2,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
      }
      else {
        (**(code **)(*(long *)param_1 + 0x340))(param_1);
      }
    }
    else {
      Creature::setState((Creature *)param_1,9,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnkylosaurus::onStartCharmedComplete(std::string const&) */

void DinosaurAnkylosaurus::onStartCharmedComplete(string *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onIdleContinued");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             aRStack_50,aRStack_60,asStack_58);
  DinosaurAnimRig_Ankylosaurus::PlayIdleAnimation((DinosaurAnimRig_Ankylosaurus *)pDVar1,aRStack_50)
  ;
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
/* DinosaurAnkylosaurus::onZombieLanding(Zombie*) */

void __thiscall DinosaurAnkylosaurus::onZombieLanding(DinosaurAnkylosaurus *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  RtObject *this_00;
  PlantGroup *this_01;
  GridItem *pGVar4;
  string asStack_38 [8];
  BoardEntityPusher aBStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::IsFlickedOff(param_1);
  if (cVar1 == '\0') {
    Zombie::SetIgnoresAllDamage(param_1,false);
    Zombie::SetIsTargetable(param_1,true);
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
    this_00 = (RtObject *)(**(code **)(*(long *)param_1 + 0x228))(param_1);
    if (this_00 != (RtObject *)0x0) {
      std::string::string(asStack_38,"Play_Zomb_Future_Football_Mvmt_Fling");
      BoardEntityPusher::BoardEntityPusher(aBStack_30,(BoardEntity *)this,asStack_38);
      std::string::~string(asStack_38);
      nop();
      this_01 = Sexy::RtObject::Cast<PlantGroup>(this_00);
      if ((this_01 != (PlantGroup *)0x0) &&
         (cVar1 = PlantGroup::CanAttackRelocateGroup(this_01,(BoardEntity *)this), cVar1 != '\0')) {
        iVar2 = FUN_0481eadc(*(undefined4 *)(this_01 + 0xa4));
        iVar3 = FUN_0481eae0(*(undefined4 *)(this_01 + 0xa8));
        BoardEntityPusher::PushRowLeft(aBStack_30,iVar2,iVar3);
      }
      pGVar4 = Sexy::RtObject::Cast<GridItem>(this_00);
      if (pGVar4 != (GridItem *)0x0) {
        iVar2 = FUN_0481eac4(*(undefined4 *)(pGVar4 + 0x130));
        iVar3 = FUN_0481eac8(*(undefined4 *)(pGVar4 + 0x134));
        BoardEntityPusher::PushRowLeft(aBStack_30,iVar2,iVar3);
      }
      BoardEntityPusher::~BoardEntityPusher(aBStack_30);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnkylosaurus::launchZombie(Zombie*) */

void DinosaurAnkylosaurus::launchZombie(Zombie *param_1)

{
  float *pfVar1;
  ZombieTosserSubSystem *pZVar2;
  Zombie *in_x1;
  float fVar3;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  string asStack_68 [8];
  float local_60;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)calcTossDestination((DinosaurAnkylosaurus *)param_1,in_x1);
  local_60 = fVar3;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)in_x1);
  if (fVar3 == *pfVar1) {
    onZombieLanding((DinosaurAnkylosaurus *)param_1,in_x1);
  }
  else {
    Zombie::SetIgnoresAllDamage(in_x1,true);
    Zombie::SetIsTargetable(in_x1,false);
    (**(code **)(*(long *)in_x1 + 600))();
    pZVar2 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
    std::string::string(asStack_68,"onZombieLanding");
    RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_50,aRStack_70,asStack_68);
    ZombieTosserSubSystem::LaunchZombie((ZombieTosserSubSystem *)0x41a00000,0x3f000000,pZVar2);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtId::~RtId(aRStack_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnkylosaurus::findZombiesInRect(Sexy::TRect<int> const&) */

void DinosaurAnkylosaurus::findZombiesInRect(TRect *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Zombie *pZVar4;
  undefined8 in_x1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,in_x1);
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
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
    cVar2 = (**(code **)(*(long *)param_1 + 0x350))(param_1,pZVar4);
    if (cVar2 != '\0') {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)in_x8,
                 (RtWeakPtr *)aRStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
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
/* DinosaurAnkylosaurus::isActivateReady() */

void __thiscall DinosaurAnkylosaurus::isActivateReady(DinosaurAnkylosaurus *this)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar1 = 0;
  local_8 = ___stack_chk_guard;
  calculateTargetingRect(this);
  findZombiesInRect((TRect *)this);
  lVar2 = FUN_0481eaf4(local_20,local_18);
  if (lVar2 != 0) {
    uVar1 = isTimeToFling(this);
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnkylosaurus::flingZombie() */

void __thiscall DinosaurAnkylosaurus::flingZombie(DinosaurAnkylosaurus *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  RtWeakPtrBase *pRVar4;
  Zombie *pZVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  undefined8 local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  calculateTargetingRect(this);
  findZombiesInRect((TRect *)this);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
  local_38[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_20);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)local_38)
        , bVar1) {
    pRVar4 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_48,pRVar4);
    pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    FUN_0481eacc(*(long *)(gLawnApp + 0x9f0) + 0xcab);
    cVar2 = Creature::HasCondition(this,1);
    if (cVar2 == '\0') {
      launchZombie((Zombie *)this);
    }
    else {
      flickOffZombie(this,pZVar5);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  iVar3 = FUN_0481eaf4(local_20,local_18);
  *(int *)(this + 0x21c) = iVar3 + *(int *)(this + 0x21c);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurAnkylosaurus::onPopAnimCommand_Tail_Fling_Zombies(std::string const&, float, std::string
   const&, std::string const&) */

void DinosaurAnkylosaurus::onPopAnimCommand_Tail_Fling_Zombies
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"use_action");
  if (!bVar1) {
    return;
  }
  flingZombie((DinosaurAnkylosaurus *)param_1);
  return;
}


/* DinosaurAnkylosaurus::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void DinosaurAnkylosaurus::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  int iVar1;
  
  iVar1 = Creature::getState((Creature *)param_1);
  if (iVar1 != 10) {
    return;
  }
  onPopAnimCommand_Tail_Fling_Zombies(param_1,param_2,param_3,param_4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnkylosaurus::StaticClassInit() */

void DinosaurAnkylosaurus::StaticClassInit(void)

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
  Delegate1<AnkyloState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<AnkyloState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"DinosaurAnkylosaurus");
      (*pcVar4)(plVar1,asStack_150,FUN_04821750,0x228,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<AnkyloState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x358);
  Sexy::Delegate1<AnkyloState>::
  Delegate1<DinosaurAnkylosaurus,void(DinosaurAnkylosaurus::*)(AnkyloState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x360);
  Sexy::Delegate0::Delegate0<DinosaurAnkylosaurus,void(DinosaurAnkylosaurus::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x368);
  Sexy::Delegate1<AnkyloState>::
  Delegate1<DinosaurAnkylosaurus,void(DinosaurAnkylosaurus::*)(AnkyloState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"CS_ANKYLO_Enter");
  StateDefinition<AnkyloState>::StateDefinition
            (aSStack_a8,8,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04821264(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x370);
  Sexy::Delegate1<AnkyloState>::
  Delegate1<DinosaurAnkylosaurus,void(DinosaurAnkylosaurus::*)(AnkyloState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x378);
  Sexy::Delegate0::Delegate0<DinosaurAnkylosaurus,void(DinosaurAnkylosaurus::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x380);
  Sexy::Delegate1<AnkyloState>::
  Delegate1<DinosaurAnkylosaurus,void(DinosaurAnkylosaurus::*)(AnkyloState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"CS_ANKYLO_Withdraw");
  StateDefinition<AnkyloState>::StateDefinition
            (aSStack_a8,9,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04821264(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x388);
  Sexy::Delegate1<AnkyloState>::
  Delegate1<DinosaurAnkylosaurus,void(DinosaurAnkylosaurus::*)(AnkyloState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x390);
  Sexy::Delegate0::Delegate0<DinosaurAnkylosaurus,void(DinosaurAnkylosaurus::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x398);
  Sexy::Delegate1<AnkyloState>::
  Delegate1<DinosaurAnkylosaurus,void(DinosaurAnkylosaurus::*)(AnkyloState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"CS_ANKYLO_Tail_Fling_Zombies");
  StateDefinition<AnkyloState>::StateDefinition
            (aSStack_a8,10,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04821264(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DinosaurAnkylosaurus::StaticGetClass() */

long * DinosaurAnkylosaurus::StaticGetClass(void)

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
  uVar2 = Dinosaur::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurAnkylosaurus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurAnkylosaurus::GetClass() const */

long * DinosaurAnkylosaurus::GetClass(void)

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
  uVar2 = Dinosaur::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurAnkylosaurus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnkylosaurus::Charm() */

void __thiscall DinosaurAnkylosaurus::Charm(DinosaurAnkylosaurus *this)

{
  DinosaurAnimRig_Runner *pDVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Dinosaur::Charm((Dinosaur *)this);
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)this);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onStartCharmedComplete");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  DinosaurAnimRig_Ankylosaurus::DoCharmAnimation((DinosaurAnimRig_Ankylosaurus *)pDVar1,aRStack_50);
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

