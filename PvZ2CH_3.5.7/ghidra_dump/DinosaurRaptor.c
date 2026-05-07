// Class: DinosaurRaptor


/* DinosaurRaptor::onExitState_Active_Action(CreatureState) */

void DinosaurRaptor::onExitState_Active_Action(long param_1)

{
  DinosaurPropertySheet *pDVar1;
  float fVar2;
  float fVar3;
  
  pDVar1 = Creature::GetProps<DinosaurPropertySheet>();
  fVar3 = *(float *)(pDVar1 + 0xa4);
  fVar2 = (float)PVZ_T();
  *(float *)(param_1 + 0x210) = fVar2 + fVar3;
  return;
}


/* DinosaurRaptor::onPlayFlipStopped(std::string const&) */

void DinosaurRaptor::onPlayFlipStopped(string *param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(long *)param_1 + 0x1e8);
  iVar2 = Creature::GetFacing((Creature *)param_1);
  (*pcVar3)(param_1,iVar2 == 0);
  cVar1 = Dinosaur::isCharmed((Dinosaur *)param_1);
  if (cVar1 == '\0') {
    Creature::setState((Creature *)param_1,1);
    return;
  }
  Creature::setState((Creature *)param_1,0,0);
  return;
}


/* DinosaurRaptor::onWalkAnimationCycle(std::string const&, std::string const&, int) */

void DinosaurRaptor::onWalkAnimationCycle(string *param_1,string *param_2,int param_3)

{
  Creature::playWalkSound((Creature *)param_1);
  if (param_1[0x21c] == (string)0x0) {
    return;
  }
  Creature::setState((Creature *)param_1,8,0);
  return;
}


/* DinosaurRaptor::isValidZombieTarget(Zombie*) */

byte __thiscall DinosaurRaptor::isValidZombieTarget(DinosaurRaptor *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  cVar1 = Zombie::IsControlled(param_1);
  if ((((cVar1 == '\0') && (cVar1 = Zombie::HasCondition(param_1,0x19), cVar1 == '\0')) &&
      (cVar1 = Zombie::HasCondition(param_1,0x77), cVar1 == '\0')) &&
     (((cVar1 = Zombie::HasCondition(param_1,0x27), cVar1 == '\0' &&
       (cVar1 = Zombie::HasCondition(param_1,0x25), cVar1 == '\0')) &&
      ((cVar1 = Zombie::HasCondition(param_1,0x65), cVar1 == '\0' &&
       (cVar1 = Zombie::HasCondition(param_1,0x2c), cVar1 == '\0')))))) {
    pcVar4 = *(code **)(*(long *)param_1 + 0x20);
    uVar3 = ZombieZombossMech::StaticGetClass();
    bVar2 = (*pcVar4)(param_1,uVar3);
    bVar2 = bVar2 ^ 1;
  }
  else {
    bVar2 = 0;
  }
  return bVar2;
}


/* DinosaurRaptor::CanBeCharmed() */

char __thiscall DinosaurRaptor::CanBeCharmed(DinosaurRaptor *this)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = Creature::getState((Creature *)this);
  if ((iVar3 - 4U & 0xfffffffb) == 0 || iVar3 == 1) {
    cVar2 = Dinosaur::CanBeCharmed((Dinosaur *)this);
    cVar1 = cVar2;
  }
  else {
    cVar2 = Dinosaur::CanBeCharmed((Dinosaur *)this);
    cVar1 = '\0';
  }
  if (cVar2 != '\0') {
    return cVar1;
  }
  return '\0';
}


/* DinosaurRaptor::~DinosaurRaptor() */

void __thiscall DinosaurRaptor::~DinosaurRaptor(DinosaurRaptor *this)

{
  *(undefined ***)this = &PTR_GetClass_069046e0;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurRaptor_06904a60;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x220));
  Dinosaur::~Dinosaur((Dinosaur *)this);
  return;
}


/* non-virtual thunk to DinosaurRaptor::~DinosaurRaptor() */

void __thiscall DinosaurRaptor::~DinosaurRaptor(DinosaurRaptor *this)

{
  ~DinosaurRaptor(this + -0x10);
  return;
}


/* DinosaurRaptor::~DinosaurRaptor() */

void __thiscall DinosaurRaptor::~DinosaurRaptor(DinosaurRaptor *this)

{
  ~DinosaurRaptor(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DinosaurRaptor::~DinosaurRaptor() */

void __thiscall DinosaurRaptor::~DinosaurRaptor(DinosaurRaptor *this)

{
  ~DinosaurRaptor(this + -0x10);
  return;
}


/* DinosaurRaptor::DinosaurRaptor() */

void __thiscall DinosaurRaptor::DinosaurRaptor(DinosaurRaptor *this)

{
  Dinosaur::Dinosaur((Dinosaur *)this);
  *(undefined ***)this = &PTR_GetClass_069046e0;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurRaptor_06904a60;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x220));
  return;
}


/* DinosaurRaptor::StaticNew() */

DinosaurRaptor * DinosaurRaptor::StaticNew(void)

{
  DinosaurRaptor *this;
  
  this = ::operator_new(0x228);
  DinosaurRaptor(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRaptor::isBeyondPatrolRange() */

void __thiscall DinosaurRaptor::isBeyondPatrolRange(DinosaurRaptor *this)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  DinosaurPropertySheet *pDVar6;
  bool bVar7;
  int local_10;
  
  lVar2 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  pDVar6 = Creature::GetProps<DinosaurPropertySheet>();
  iVar5 = *(int *)(pDVar6 + 0xa0);
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar4 = Creature::GetFacing((Creature *)this);
  if ((iVar4 != 0) || (0 < local_10 - iVar5)) {
    iVar5 = Creature::GetFacing((Creature *)this);
    bVar1 = (iVar3 + -1) - local_10 < 1;
    bVar7 = iVar5 == 1 && bVar1;
    if (iVar5 != 1 || !bVar1) goto LAB_04823728;
  }
  bVar7 = true;
  this[0x21d] = (DinosaurRaptor)0x1;
LAB_04823728:
  if (lVar2 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar7);
}


/* DinosaurRaptor::onDoneKick(std::string const&) */

void DinosaurRaptor::onDoneKick(string *param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x218) < 1) ||
     (cVar1 = Creature::IsWaveToLeave((Creature *)param_1), cVar1 != '\0')) {
    Creature::setState((Creature *)param_1,5,0);
    return;
  }
  cVar1 = isBeyondPatrolRange((DinosaurRaptor *)param_1);
  if (cVar1 != '\0') {
    cVar1 = Dinosaur::isCharmed((Dinosaur *)param_1);
    if (cVar1 == '\0') {
      Creature::setState((Creature *)param_1,8);
      return;
    }
  }
  cVar1 = Dinosaur::isCharmed((Dinosaur *)param_1);
  if (cVar1 != '\0') {
    Creature::setState((Creature *)param_1,0,0);
    return;
  }
  Creature::setState((Creature *)param_1,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRaptor::isCloseEnough(Zombie*) */

void __thiscall DinosaurRaptor::isCloseEnough(DinosaurRaptor *this,Zombie *param_1)

{
  DinosaurRaptorPropertySheet *pDVar1;
  int local_28 [2];
  int local_20;
  TRect aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x1f8))((TRect<int> *)local_28);
  pDVar1 = Creature::GetProps<DinosaurRaptorPropertySheet>();
  local_28[0] = local_28[0] - *(int *)(pDVar1 + 0xcc);
  local_20 = local_20 + *(int *)(pDVar1 + 0xcc);
  (**(code **)(*(long *)param_1 + 0xb0))(aTStack_18,param_1);
  Sexy::TRect<int>::Intersects((TRect<int> *)local_28,aTStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRaptor::calculateKickDistance(Zombie*) */

void __thiscall DinosaurRaptor::calculateKickDistance(DinosaurRaptor *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  DinosaurRaptorPropertySheet *pDVar3;
  float *pfVar4;
  float fVar5;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar3 = Creature::GetProps<DinosaurRaptorPropertySheet>();
  cVar1 = Dinosaur::isCharmed((Dinosaur *)this);
  if (cVar1 == '\0') {
    iVar2 = BoardTransforms::GridToBoardSpaceXUnbounded(*(int *)(pDVar3 + 0xac));
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    local_c = (float)iVar2 - *pfVar4;
    pfVar4 = eastl::max_alt<float>(&local_c,(float *)(pDVar3 + 0xb8));
    fVar5 = *pfVar4;
  }
  else {
    fVar5 = -*(float *)(pDVar3 + 0xb8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRaptor::kickZombie(Zombie*) */

void __thiscall DinosaurRaptor::kickZombie(DinosaurRaptor *this,Zombie *param_1)

{
  char cVar1;
  float *pfVar2;
  ZombieGargantuar *pZVar3;
  DinosaurRaptorPropertySheet *pDVar4;
  ZombieTosserSubSystem *pZVar5;
  float fVar6;
  ZombieTosserSubSystem *pZVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float local_64;
  Vec3 aVStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_048227e8(*(long *)(gLawnApp + 0x9f0) + 0xcab);
  cVar1 = Dinosaur::isCharmed((Dinosaur *)this);
  if ((cVar1 == '\0') ||
     ((cVar1 = (**(code **)(*(long *)param_1 + 0x3f0))(param_1), cVar1 == '\0' &&
      (pZVar3 = Sexy::RtObject::Cast<ZombieGargantuar>((RtObject *)param_1),
      pZVar3 == (ZombieGargantuar *)0x0)))) {
    pDVar4 = Creature::GetProps<DinosaurRaptorPropertySheet>();
    pZVar7 = (ZombieTosserSubSystem *)calculateKickDistance(this,param_1);
    pZVar5 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    uVar9 = *(undefined4 *)(pDVar4 + 0xb4);
    uVar10 = *(undefined4 *)(pDVar4 + 0xb0);
    RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
    ZombieTosserSubSystem::LaunchZombieHorizontal(pZVar7,uVar9,uVar10,pZVar5,param_1,aRStack_50,1);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  else {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    fVar6 = *pfVar2;
    fVar8 = pfVar2[1];
    local_64 = 150.0;
    pfVar2 = eastl::max_alt<float>(&local_64,pfVar2 + 2);
    EATextSquish::Vec3::Vec3(aVStack_60,fVar6 + 850.0,fVar8,*pfVar2);
    Zombie::FlickOff((SexyVector3 *)param_1,400.0,-1120.0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurRaptor::calcFlipAttackRect() const */

void DinosaurRaptor::calcFlipAttackRect(void)

{
  int iVar1;
  int iVar2;
  Creature *in_x0;
  DinosaurRaptorPropertySheet *pDVar3;
  Insets *in_x8;
  float fVar4;
  float fVar5;
  float fVar6;
  
  pDVar3 = Creature::GetProps<DinosaurRaptorPropertySheet>();
  Sexy::Insets::Insets(in_x8,(Insets *)(pDVar3 + 0xbc));
  fVar6 = *(float *)(in_x0 + 0x1c);
  fVar4 = (float)FUN_0482282c(*(undefined4 *)(in_x0 + 0x18),fVar6,*(undefined4 *)(in_x0 + 0x20));
  iVar1 = *(int *)(in_x8 + 8);
  iVar2 = *(int *)in_x8;
  fVar5 = (float)Creature::GetFacingMultiplier(in_x0);
  *(int *)in_x8 = (int)((fVar4 - (float)(iVar1 / 2)) + (float)iVar2 * fVar5);
  *(int *)(in_x8 + 4) = (int)(((float)*(int *)(in_x8 + 4) + fVar6) - (float)*(int *)(in_x8 + 0xc));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRaptor::onEnterState_Flip(CreatureState) */

void DinosaurRaptor::onEnterState_Flip(Creature *param_1)

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
  std::string::string(asStack_58,"onPlayFlipStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  DinosaurAnimRig_Raptor::PlayFlip((DinosaurAnimRig_Raptor *)pDVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  param_1[0x21c] = (Creature)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRaptor::onEnterState_Active_Action(CreatureState) */

void DinosaurRaptor::onEnterState_Active_Action(Dinosaur *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  code *pcVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Dinosaur::disableTimeout(param_1);
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)param_1);
  pcVar2 = *(code **)(*(long *)pDVar1 + 0x120);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onDoneKick");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar2)(pDVar1,aRStack_50);
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
/* DinosaurRaptor::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void DinosaurRaptor::onPopAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  Zombie *pZVar4;
  long lVar5;
  RtWeakPtr *this;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtObject *this_01;
  code *pcVar6;
  undefined8 local_50;
  undefined8 local_48;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Creature::isInState((Creature *)param_1,4);
  if ((cVar1 != '\0') && (bVar2 = std::operator==(param_4,"use_action"), bVar2)) {
    pZVar4 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x220));
    if (((pZVar4 == (Zombie *)0x0) ||
        (((cVar1 = (**(code **)(*(long *)param_1 + 0x350))(param_1,pZVar4), cVar1 == '\0' ||
          (cVar1 = (**(code **)(*(long *)pZVar4 + 0x330))(pZVar4), cVar1 != '\0')) ||
         (cVar1 = (**(code **)(*(long *)pZVar4 + 0x328))(pZVar4), cVar1 != '\0')))) ||
       (cVar1 = isCloseEnough((DinosaurRaptor *)param_1,pZVar4), cVar1 == '\0')) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
      pcVar6 = *(code **)(*(long *)param_1 + 0x348);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
      (*pcVar6)(avStack_20,param_1,avStack_38);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      operator=((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )&local_50,(vector *)avStack_20);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector(avStack_20);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              avStack_38);
      lVar5 = FUN_04822808(local_50,local_48);
      if (lVar5 != 0) {
        iVar3 = RandRangeInt(0,(int)lVar5 + -1);
        this = (RtWeakPtr *)FUN_04822814(local_50,(long)iVar3);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
        pZVar4 = (Zombie *)0x0;
        if (bVar2) {
          this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04822814(local_50,(long)iVar3);
          this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          pZVar4 = Sexy::RtObject::Cast<Zombie>(this_01);
        }
        kickZombie((DinosaurRaptor *)param_1,pZVar4);
        *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + -1;
      }
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              &local_50);
    }
    else {
      kickZombie((DinosaurRaptor *)param_1,pZVar4);
      *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + -1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRaptor::findFlipAttackTargets(std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > >) */

void DinosaurRaptor::findFlipAttackTargets
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,long *param_2
               ,vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *param_3)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Zombie *pZVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_58;
  undefined8 local_50;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 auStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  calcFlipAttackRect();
  EntityFinder::GetEntitiesTouchingRectangle(avStack_20,2,auStack_30,0xffffffff,0xffffffff);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
    if ((((pZVar4 != (Zombie *)0x0) &&
         (cVar2 = (**(code **)(*(long *)pZVar4 + 0x330))(), cVar2 == '\0')) &&
        (cVar2 = (**(code **)(*(long *)pZVar4 + 0x328))(pZVar4), cVar2 == '\0')) &&
       (cVar2 = (**(code **)(*param_2 + 0x350))(param_2,pZVar4), cVar2 != '\0')) {
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(param_3);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(param_3);
      ToolPacketData::GetProps();
      local_40 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                           (uVar5,uVar6,aRStack_48);
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(param_3);
      bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
      if (bVar1) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_38,(RtWeakPtrBase *)&local_40);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)param_1,(RtWeakPtr *)&local_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRaptor::triggerKickIfNecessary() */

void __thiscall DinosaurRaptor::triggerKickIfNecessary(DinosaurRaptor *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  RtWeakPtr *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  RtObject *this_02;
  code *pcVar5;
  undefined8 local_50;
  undefined8 local_48;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  if (this[0x21d] != (DinosaurRaptor)0x0) {
    iVar3 = Creature::GetFacing((Creature *)this);
    cVar1 = Dinosaur::isCharmed((Dinosaur *)this);
    if ((iVar3 == 0) != (bool)cVar1) {
      pcVar5 = *(code **)(*(long *)this + 0x348);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
      (*pcVar5)(avStack_20,this,avStack_38);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      operator=((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )&local_50,(vector *)avStack_20);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector(avStack_20);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              avStack_38);
      lVar4 = FUN_04822808(local_50,local_48);
      if (lVar4 != 0) {
        iVar3 = RandRangeInt(0,(int)lVar4 + -1);
        this_00 = (RtWeakPtr *)FUN_04822814(local_50,(long)iVar3);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
        if (bVar2) {
          this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04822814(local_50,(long)iVar3);
          this_02 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
          Sexy::RtObject::Cast<Zombie>(this_02);
          ToolPacketData::GetProps();
        }
        else {
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)avStack_20);
        }
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x220),
                   (RtWeakPtrBase *)avStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20)
        ;
        Creature::setState((Creature *)this,4,0);
        goto LAB_04824368;
      }
    }
    iVar3 = Creature::GetFacing((Creature *)this);
    if ((iVar3 == 1) && (cVar1 = Dinosaur::isCharmed((Dinosaur *)this), cVar1 == '\0')) {
      cVar1 = isBeyondPatrolRange(this);
      if (cVar1 == '\0') {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
        findFlipAttackTargets(avStack_20,this,avStack_38);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        operator=((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)&local_50,(vector *)avStack_20);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        ~vector(avStack_20);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        ~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )avStack_38);
        lVar4 = FUN_04822808(local_50,local_48);
        if (lVar4 != 0) {
          Creature::setState((Creature *)this,8,0);
        }
      }
    }
  }
LAB_04824368:
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             &local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurRaptor::updateState_Walk() */

void __thiscall DinosaurRaptor::updateState_Walk(DinosaurRaptor *this)

{
  char cVar1;
  float *pfVar2;
  
  if ((this[0xa1] != (DinosaurRaptor)0x0) &&
     (pfVar2 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this), *pfVar2 <= (float)*(int *)(this + 0xa4))) {
    Creature::setState((Creature *)this,0,0);
    return;
  }
  cVar1 = Creature::IsOnBoard();
  if (cVar1 != '\0') {
    cVar1 = Creature::IsWaveToLeave((Creature *)this);
    if ((cVar1 != '\0') || (cVar1 = Dinosaur::isTimedOut((Dinosaur *)this), cVar1 != '\0')) {
      Creature::setState((Creature *)this,5,0);
      return;
    }
    triggerKickIfNecessary(this);
    cVar1 = isBeyondPatrolRange(this);
    if (cVar1 != '\0') {
      this[0x21c] = (DinosaurRaptor)0x1;
    }
  }
  return;
}


/* DinosaurRaptor::updateState_Idle() */

void __thiscall DinosaurRaptor::updateState_Idle(DinosaurRaptor *this)

{
  char cVar1;
  
  if (this[0xa1] == (DinosaurRaptor)0x0) {
    cVar1 = Creature::IsWaveToLeave((Creature *)this);
    if ((cVar1 != '\0') || (cVar1 = Dinosaur::isTimedOut((Dinosaur *)this), cVar1 != '\0')) {
      Creature::setState((Creature *)this,5,0);
      return;
    }
    cVar1 = Dinosaur::isCharmed((Dinosaur *)this);
    if (cVar1 != '\0') {
      triggerKickIfNecessary(this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRaptor::StaticClassInit() */

void DinosaurRaptor::StaticClassInit(void)

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
  Delegate1<CreatureState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<CreatureState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"DinosaurRaptor");
      (*pcVar4)(plVar1,asStack_150,FUN_04824830,0x228,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<CreatureState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x358);
  Sexy::Delegate1<CreatureState>::Delegate1<DinosaurRaptor,void(DinosaurRaptor::*)(CreatureState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x360);
  Sexy::Delegate0::Delegate0<DinosaurRaptor,void(DinosaurRaptor::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x368);
  Sexy::Delegate1<CreatureState>::Delegate1<DinosaurRaptor,void(DinosaurRaptor::*)(CreatureState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_RAPTOR_Flip");
  StateDefinition<CreatureState>::StateDefinition
            (aSStack_a8,8,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_048245d4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DinosaurRaptor::StaticGetClass() */

long * DinosaurRaptor::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurRaptor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurRaptor::GetClass() const */

long * DinosaurRaptor::GetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurRaptor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurRaptor::onPlaceOnBoard() */

void __thiscall DinosaurRaptor::onPlaceOnBoard(DinosaurRaptor *this)

{
  DinoYoungTyrannosaurus::wakeAnimDoneHandler((DinoYoungTyrannosaurus *)this);
  Dinosaur::resetTimeout((Dinosaur *)this);
  return;
}


/* DinosaurRaptor::Charm() */

void __thiscall DinosaurRaptor::Charm(DinosaurRaptor *this)

{
  int iVar1;
  DinosaurAnimRig_Runner *pDVar2;
  
  pDVar2 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)this);
  FUN_04822820(pDVar2 + 0x22c);
  Dinosaur::Charm((Dinosaur *)this);
  this[0x21d] = (DinosaurRaptor)0x1;
  iVar1 = Creature::GetFacing((Creature *)this);
  if (iVar1 != 0) {
    Creature::setState((Creature *)this,0,0);
    return;
  }
  Creature::setState((Creature *)this,8,0);
  return;
}


/* DinosaurRaptor::SetFacing(ZombieFacing) */

void __thiscall DinosaurRaptor::SetFacing(DinosaurRaptor *this,undefined4 param_2)

{
  DinosaurAnimRig_Runner *pDVar1;
  
  Creature::SetFacing();
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)this);
  FUN_048227f4(pDVar1 + 0x230,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRaptor::DrawCollisionInfo(Sexy::Graphics*) */

void __thiscall DinosaurRaptor::DrawCollisionInfo(DinosaurRaptor *this,Graphics *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Creature::DrawCollisionInfo((Creature *)this,param_1);
  calcFlipAttackRect();
  Sexy::Color::Color(aCStack_18,0xff,0xff,0);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  fVar2 = *(float *)(param_1 + 0x20);
  iVar1 = FUN_048229d0(local_28);
  fVar3 = *(float *)(param_1 + 0x18);
  fVar4 = *(float *)(param_1 + 0x24);
  local_28 = (int)((float)(int)(((float)iVar1 - fVar2) * fVar3) + fVar2);
  iVar1 = FUN_048229d0(local_24);
  fVar2 = *(float *)(param_1 + 0x1c);
  local_24 = (int)((float)(int)(((float)iVar1 - fVar4) * fVar2) + fVar4);
  iVar1 = FUN_048229d0(local_20);
  local_20 = (int)((float)iVar1 * fVar3);
  iVar1 = FUN_048229d0(local_1c);
  local_1c = (int)((float)iVar1 * fVar2);
  Sexy::Graphics::DrawRect(param_1,(TRect *)&local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurRaptor::onCreatureInitialize() */

void __thiscall DinosaurRaptor::onCreatureInitialize(DinosaurRaptor *this)

{
  DinosaurRaptorPropertySheet *pDVar1;
  
  Dinosaur::onCreatureInitialize((Dinosaur *)this);
  pDVar1 = Creature::GetProps<DinosaurRaptorPropertySheet>();
  *(undefined4 *)(this + 0x218) = *(undefined4 *)(pDVar1 + 0xa8);
  this[0x21c] = (DinosaurRaptor)0x0;
  this[0x21d] = (DinosaurRaptor)0x0;
  return;
}

