// Class: SnakeNode


/* SnakeNode::setCurrentStep(float) */

void __thiscall SnakeNode::setCurrentStep(SnakeNode *this,float param_1)

{
  *(float *)(this + 0x1bc) = param_1;
  return;
}


/* SnakeNode::onAnimStopped(std::string const&) */

void SnakeNode::onAnimStopped(string *param_1)

{
  return;
}


/* SnakeNode::onZombieDropHead(Zombie*) */

void __thiscall SnakeNode::onZombieDropHead(SnakeNode *this,Zombie *param_1)

{
  char cVar1;
  
  if ((*(long *)(this + 0xa8) == 0) && (cVar1 = Zombie::IsMowDownByMower(param_1), cVar1 == '\0')) {
    cVar1 = FUN_049d2218(param_1[0x572]);
    if (cVar1 != '\0') {
      *(int *)(this + 0x1c4) = *(int *)(this + 0x1c4) + 1;
    }
    cVar1 = Zombie::HasCondition(param_1,0x2a);
    if (cVar1 != '\0') {
      this[0x1ce] = (SnakeNode)0x1;
    }
  }
  return;
}


/* SnakeNode::CalcRenderOrder() const */

void __thiscall SnakeNode::CalcRenderOrder(SnakeNode *this)

{
  float *pfVar1;
  
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  Board::MakeRenderOrder(0x64d48,0,(int)*pfVar1);
  return;
}


/* non-virtual thunk to SnakeNode::CalcRenderOrder() const */

void __thiscall SnakeNode::CalcRenderOrder(SnakeNode *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* SnakeNode::getState() */

void __thiscall SnakeNode::getState(SnakeNode *this)

{
  FUN_049d22a4(*(undefined4 *)(this + 200));
  return;
}


/* SnakeNode::setIsBlink(bool) */

void __thiscall SnakeNode::setIsBlink(SnakeNode *this,bool param_1)

{
  this[0x1cd] = (SnakeNode)param_1;
  return;
}


/* SnakeNode::IsSlowDown() */

SnakeNode __thiscall SnakeNode::IsSlowDown(SnakeNode *this)

{
  return this[0x1cc];
}


/* SnakeNode::isInState(SnakeState) const */

bool __thiscall SnakeNode::isInState(SnakeNode *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_049d22a4(*(undefined4 *)(this + 200));
  return iVar1 == param_2;
}


/* SnakeNode::HandleTouch(Sexy::Point const&) */

void __thiscall SnakeNode::HandleTouch(SnakeNode *this,Point *param_1)

{
  char cVar1;
  long lVar2;
  float *pfVar3;
  
  cVar1 = isInState(this,1);
  if ((cVar1 == '\0') && (cVar1 = isInState(this,2), cVar1 == '\0')) {
    cVar1 = isInState(this,3);
    if ((cVar1 != '\0') || (cVar1 = isInState(this,4), cVar1 != '\0')) {
      pfVar3 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this);
      if (*pfVar3 <= (float)*(int *)param_1) {
        *(undefined4 *)(this + 0x1c0) = 1;
        return;
      }
      *(undefined4 *)(this + 0x1c0) = 2;
    }
  }
  else {
    lVar2 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    if ((float)*(int *)(param_1 + 4) < *(float *)(lVar2 + 4)) {
      *(undefined4 *)(this + 0x1c0) = 3;
      return;
    }
    *(undefined4 *)(this + 0x1c0) = 4;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeNode::keepState() */

void __thiscall SnakeNode::keepState(SnakeNode *this)

{
  char cVar1;
  float *pfVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  Vec3 aVStack_18 [16];
  long local_8;
  
  *(undefined4 *)(this + 0x1b8) = 0;
  local_8 = ___stack_chk_guard;
  if (*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        **)(this + 0xa8) !=
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0xa8));
    fVar5 = *pfVar2;
    fVar4 = pfVar2[1];
    cVar1 = isInState(this,1);
    if (((cVar1 == '\0') || (cVar1 = isInState(*(SnakeNode **)(this + 0xa8),1), cVar1 == '\0')) &&
       ((cVar1 = isInState(this,2), cVar1 == '\0' ||
        (cVar1 = isInState(*(SnakeNode **)(this + 0xa8),2), cVar1 == '\0')))) {
      cVar1 = isInState(this,3);
      if (((cVar1 == '\0') || (cVar1 = isInState(*(SnakeNode **)(this + 0xa8),3), cVar1 == '\0')) &&
         ((cVar1 = isInState(this,4), cVar1 == '\0' ||
          (cVar1 = isInState(*(SnakeNode **)(this + 0xa8),4), cVar1 == '\0')))) goto LAB_049d2998;
      pcVar3 = *(code **)(*(long *)this + 0x78);
      pfVar2 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this);
      fVar4 = pfVar2[1];
    }
    else {
      pcVar3 = *(code **)(*(long *)this + 0x78);
      pfVar2 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this);
      fVar5 = *pfVar2;
    }
    EATextSquish::Vec3::Vec3(aVStack_18,fVar5,fVar4,pfVar2[2]);
    (*pcVar3)(this,aVStack_18);
  }
LAB_049d2998:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* SnakeNode::setTouchState(SnakeState) */

void __thiscall SnakeNode::setTouchState(SnakeNode *this,undefined4 param_2)

{
  char cVar1;
  
  switch(param_2) {
  case 1:
  case 2:
    cVar1 = isInState(this,3);
    if (cVar1 != '\0') goto switchD_049d2abc_default;
    cVar1 = isInState(this,4);
    break;
  case 3:
  case 4:
    cVar1 = isInState(this,1);
    if (cVar1 != '\0') goto switchD_049d2abc_default;
    cVar1 = isInState(this,2);
    break;
  default:
    goto switchD_049d2abc_default;
  }
  if (cVar1 == '\0') {
    return;
  }
switchD_049d2abc_default:
  *(undefined4 *)(this + 0x1c0) = param_2;
  return;
}


/* SnakeNode::GetAttackRect() */

void SnakeNode::GetAttackRect(void)

{
  long in_x0;
  Insets *in_x8;
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(in_x0 + 0x1c);
  fVar1 = (float)FUN_049d2460(*(undefined4 *)(in_x0 + 0x18),fVar2,*(undefined4 *)(in_x0 + 0x20));
  Sexy::Insets::Insets(in_x8,(int)(fVar1 - 10.0),(int)(fVar2 - 28.0),0x14,0x14);
  return;
}


/* SnakeNode::onDestroy() */

void __thiscall SnakeNode::onDestroy(SnakeNode *this)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xc0));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
    (**(code **)(*plVar2 + 0x48))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeNode::initializePAM(Sexy::PopAnim*) */

void __thiscall SnakeNode::initializePAM(SnakeNode *this,PopAnim *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  RtClass *pRVar3;
  PopAnimRig *pPVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0xc0);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig(param_1,pRVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  pPVar4 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)aRStack_40,"right");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar4,aRStack_40,0,aDStack_38);
  std::string::~string((string *)aRStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeNode::onEnterState_RIGHT(SnakeState) */

void SnakeNode::onEnterState_RIGHT(long param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0xc0));
  if (bVar1) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xc0));
    std::string::string(asStack_40,"right");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeNode::onEnterState_LEFT(SnakeState) */

void SnakeNode::onEnterState_LEFT(long param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0xc0));
  if (bVar1) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xc0));
    std::string::string(asStack_40,"left");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeNode::onEnterState_UP(SnakeState) */

void SnakeNode::onEnterState_UP(long param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0xc0));
  if (bVar1) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xc0));
    std::string::string(asStack_40,"up");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeNode::onEnterState_DOWN(SnakeState) */

void SnakeNode::onEnterState_DOWN(long param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0xc0));
  if (bVar1) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xc0));
    std::string::string(asStack_40,"down");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeNode::onDraw(Sexy::Graphics*) */

void __thiscall SnakeNode::onDraw(SnakeNode *this,Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  float fVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  GraphicsAutoState aGStack_68 [8];
  Insets aIStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  uVar5 = (ulong)*(uint *)(this + 0x1c);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0);
  local_8 = ___stack_chk_guard;
  fVar4 = (float)FUN_049d2460(*(undefined4 *)(this + 0x18),uVar5,*(undefined4 *)(this + 0x20));
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_68,param_1);
  (**(code **)(*(long *)this + 0xf8))(this,param_1);
  fVar6 = *(float *)(param_1 + 0x20);
  fVar4 = (float)FUN_049d2688(fVar4 + 20.0);
  fVar7 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x10) + fVar6 +
       (float)(int)((fVar4 - fVar6) * *(float *)(param_1 + 0x18));
  fVar4 = (float)FUN_049d2688(uVar5 & 0xffffffff);
  *(float *)(param_1 + 0x14) =
       *(float *)(param_1 + 0x14) + fVar7 +
       (float)(int)((fVar4 - fVar7) * *(float *)(param_1 + 0x1c));
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
  pPVar3 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PopAnimRig::SetRenderTransform(pPVar3,aSStack_30);
  iVar1 = FUN_049d2674(0x76);
  iVar2 = FUN_049d2674(0x73);
  Sexy::Graphics::Translate(param_1,-iVar1,-iVar2);
  if (this[0x1cc] == (SnakeNode)0x0) {
    if (this[0x1cd] == (SnakeNode)0x0) {
      pPVar3 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      PopAnimRig::ClearMultiplicativeOverlayColor(pPVar3);
      goto LAB_049d3230;
    }
    fVar4 = (float)PVZ_T();
    iVar1 = (int)(fVar4 * 100.0) % 100;
    if (0x31 < iVar1) {
      iVar1 = 100 - iVar1;
    }
    iVar2 = (int)((float)iVar1 * 0.02 * 40.0 + 255.0);
    Sexy::Insets::Insets(aIStack_60,iVar2,(int)((float)iVar1 * 0.02 * 255.0 + 255.0),iVar2,0xff);
  }
  else {
    Sexy::Color::Color((Color *)aIStack_60,0,300,0x200);
  }
  Sexy::Color::Color((Color *)&local_50,1);
  Sexy::Color::operator*((Color *)&local_50,(Color *)aIStack_60);
  local_50 = local_40;
  uStack_48 = uStack_38;
  pPVar3 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PopAnimRig::SetMultiplicativeOverlayColor(pPVar3,(Color *)&local_50);
LAB_049d3230:
  pPVar3 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PopAnimRig::Draw(pPVar3,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SnakeNode::onUpdate() */

void __thiscall SnakeNode::onUpdate(SnakeNode *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0))
  ;
  fVar1 = (float)PVZ_T();
  fVar2 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
  StateMachine<SnakeState>::UpdateState((StateMachine<SnakeState> *)(this + 200));
  return;
}


/* SnakeNode::registerForEvents() */

void __thiscall SnakeNode::registerForEvents(SnakeNode *this)

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
            ((ReceivedDataCallback *)this,onZombieDropHead);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::Subscribe<Zombie*,Sexy::CBMemberTranslatorX<SnakeNode,void(SnakeNode::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDropHead,&local_40);
  return;
}


/* SnakeNode::~SnakeNode() */

void __thiscall SnakeNode::~SnakeNode(SnakeNode *this)

{
  *(undefined ***)this = &PTR_GetClass_06929080;
  *(undefined ***)(this + 0x10) = &PTR__SnakeNode_069292e0;
  std::queue<Sexy::SexyVector3,std::deque<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>>::
  ~queue((queue<Sexy::SexyVector3,std::deque<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>> *
         )(this + 0x168));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 200));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to SnakeNode::~SnakeNode() */

void __thiscall SnakeNode::~SnakeNode(SnakeNode *this)

{
  ~SnakeNode(this + -0x10);
  return;
}


/* SnakeNode::~SnakeNode() */

void __thiscall SnakeNode::~SnakeNode(SnakeNode *this)

{
  ~SnakeNode(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SnakeNode::~SnakeNode() */

void __thiscall SnakeNode::~SnakeNode(SnakeNode *this)

{
  ~SnakeNode(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeNode::SnakeNode() */

void __thiscall SnakeNode::SnakeNode(SnakeNode *this)

{
  long lVar1;
  deque<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> adStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_06929080;
  *(undefined ***)(this + 0x10) = &PTR__SnakeNode_069292e0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xc0));
  StateMachine<SnakeState>::StateMachine((StateMachine<SnakeState> *)(this + 200));
  std::deque<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::deque();
  std::queue<Sexy::SexyVector3,std::deque<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>>::
  queue((queue<Sexy::SexyVector3,std::deque<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>> *)
        (this + 0x168),(deque *)adStack_58);
  std::deque<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::~deque(adStack_58);
  *(undefined8 *)(this + 0xa8) = 0;
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1c0) = 0xffffffff;
  this[0x1cc] = (SnakeNode)0x0;
  this[0x1ce] = (SnakeNode)0x0;
  this[0x1cd] = (SnakeNode)0x0;
  *(undefined4 *)(this + 0x1c4) = 0;
  *(undefined4 *)(this + 0x1c8) = 0x14;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0x1bc) = 0x40000000;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SnakeNode::StaticNew() */

SnakeNode * SnakeNode::StaticNew(void)

{
  SnakeNode *this;
  
  this = ::operator_new(0x1d0);
  SnakeNode(this);
  return this;
}


/* SnakeNode::AddTrace(Sexy::SexyVector3 const&) */

void SnakeNode::AddTrace(SexyVector3 *param_1)

{
  std::queue<Sexy::SexyVector3,std::deque<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>>::
  push(param_1 + 0x168);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeNode::StaticClassInit() */

void SnakeNode::StaticClassInit(void)

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
  Delegate1<SnakeState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<SnakeState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"SnakeNode");
      (*pcVar4)(plVar1,asStack_150,FUN_049d49d0,0x1d0,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<SnakeState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1d8);
  Sexy::Delegate1<SnakeState>::Delegate1<SnakeNode,void(SnakeNode::*)(SnakeState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1e0);
  Sexy::Delegate0::Delegate0<SnakeNode,void(SnakeNode::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1e8);
  Sexy::Delegate1<SnakeState>::Delegate1<SnakeNode,void(SnakeNode::*)(SnakeState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SnakeState_INIT");
  StateDefinition<SnakeState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_049d4374(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1f0);
  Sexy::Delegate1<SnakeState>::Delegate1<SnakeNode,void(SnakeNode::*)(SnakeState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1f8);
  Sexy::Delegate0::Delegate0<SnakeNode,void(SnakeNode::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x200);
  Sexy::Delegate1<SnakeState>::Delegate1<SnakeNode,void(SnakeNode::*)(SnakeState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SnakeState_RIGHT");
  StateDefinition<SnakeState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_049d4374(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x208);
  Sexy::Delegate1<SnakeState>::Delegate1<SnakeNode,void(SnakeNode::*)(SnakeState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x210);
  Sexy::Delegate0::Delegate0<SnakeNode,void(SnakeNode::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x218);
  Sexy::Delegate1<SnakeState>::Delegate1<SnakeNode,void(SnakeNode::*)(SnakeState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SnakeState_LEFT");
  StateDefinition<SnakeState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_049d4374(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x220);
  Sexy::Delegate1<SnakeState>::Delegate1<SnakeNode,void(SnakeNode::*)(SnakeState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)&DAT_00000228);
  Sexy::Delegate0::Delegate0<SnakeNode,void(SnakeNode::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x230);
  Sexy::Delegate1<SnakeState>::Delegate1<SnakeNode,void(SnakeNode::*)(SnakeState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SnakeState_UP");
  StateDefinition<SnakeState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_049d4374(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x238);
  Sexy::Delegate1<SnakeState>::Delegate1<SnakeNode,void(SnakeNode::*)(SnakeState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x240);
  Sexy::Delegate0::Delegate0<SnakeNode,void(SnakeNode::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x248);
  Sexy::Delegate1<SnakeState>::Delegate1<SnakeNode,void(SnakeNode::*)(SnakeState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SnakeState_DOWN");
  StateDefinition<SnakeState>::StateDefinition
            (aSStack_a8,4,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_049d4374(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* SnakeNode::StaticGetClass() */

long * SnakeNode::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SnakeNode",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SnakeNode::GetClass() const */

long * SnakeNode::GetClass(void)

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
  (*pcVar3)(plVar1,"SnakeNode",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeNode::setSnakeStateSerialization(int) */

void __thiscall SnakeNode::setSnakeStateSerialization(SnakeNode *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<SnakeState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<SnakeState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<SnakeState>::GetStateDefinition
                     ((StateMachineTable<SnakeState> *)pSVar2,param_1);
  StateDefinition<SnakeState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<SnakeState>::SetContext(aSStack_a8,this);
  StateMachine<DPEState>::SetStateNoTransition
            ((StateMachine<DPEState> *)(this + 200),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeNode::setState(SnakeState) */

void __thiscall SnakeNode::setState(SnakeNode *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<SnakeState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<SnakeState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<SnakeState>::GetStateDefinition
                     ((StateMachineTable<SnakeState> *)pSVar2,param_2);
  StateDefinition<SnakeState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<SnakeState>::SetContext(aSStack_a8,this);
  StateMachine<SnakeState>::SetState
            ((StateMachine<SnakeState> *)(this + 200),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SnakeNode::SnakeNodeInitialize(Sexy::PopAnim*) */

void __thiscall SnakeNode::SnakeNodeInitialize(SnakeNode *this,PopAnim *param_1)

{
  initializePAM(this,param_1);
  setState(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeNode::checkState() */

void __thiscall SnakeNode::checkState(SnakeNode *this)

{
  char cVar1;
  bool bVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *extraout_x0;
  PVZDB *pPVar6;
  RtDbTable *pRVar7;
  long *extraout_x0_00;
  TRect *pTVar8;
  SexyVector3 *pSVar9;
  RtObject *this_00;
  SnakeNode *pSVar10;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int iVar11;
  int extraout_w1_02;
  int extraout_w1_03;
  int extraout_w1_04;
  int extraout_w1_05;
  undefined4 uVar12;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  code *pcVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  Point aPStack_a8 [8];
  undefined4 local_a0;
  undefined4 local_9c;
  TRect<int> aTStack_98 [16];
  Iterator aIStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
  if (cVar1 == '\0') {
LAB_049d561c:
    this_01 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0xa8);
    if (this_01 ==
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         *)0x0) {
      if ((*(int *)(this + 0x1c0) == -1) || (cVar1 = isInState(this), cVar1 != '\0')) {
        keepState(this);
      }
      else {
        setState(this,*(undefined4 *)(this + 0x1c0));
      }
      *(undefined4 *)(this + 0x1c0) = 0xffffffff;
      goto LAB_049d56f4;
    }
  }
  else {
    GetAttackRect();
    uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_88,uVar5,0x29);
    while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_88), bVar2) {
      pPVar6 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
      pRVar7 = (RtDbTable *)PVZDB::GetTable(pPVar6,0x29);
      Sexy::RtDbTable::Iterator::operator*(aIStack_88);
      Sexy::RtDbTable::GetObjectForId(pRVar7,(RtId *)&local_68);
      nop();
      Sexy::RtId::~RtId((RtId *)&local_68);
      iVar11 = extraout_w1;
      if (extraout_x0 != (long *)0x0) {
        pTVar8 = (TRect *)(**(code **)(*extraout_x0 + 0x178))(extraout_x0);
        cVar1 = Sexy::TRect<int>::Intersects(aTStack_98,pTVar8);
        iVar11 = extraout_w1_00;
        if (cVar1 != '\0') {
          iVar11 = *(int *)(this + 0x1c8);
          pcVar13 = *(code **)(*extraout_x0 + 0x110);
          Sexy::Point::Point(aPStack_a8,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_a0,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)(float)iVar11,local_a0,local_9c,(RtId *)&local_68,aPStack_a8,0);
          (*pcVar13)(extraout_x0,(RtId *)&local_68);
          DamageInfo::~DamageInfo((DamageInfo *)&local_68);
          iVar11 = extraout_w1_01;
        }
      }
      Sexy::RtDbTable::Iterator::operator++(aIStack_88,iVar11);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_88);
    if (*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          **)(this + 0xa8) ==
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         *)0x0) {
LAB_049d587c:
      if (0 < *(int *)(this + 0x1c4)) {
        MessageRouter::Post((_func_void *)gMessageRouter);
        Sexy::OutputDebugStrF((wchar_t *)"Message::SnakeAdd \n");
        *(int *)(this + 0x1c4) = *(int *)(this + 0x1c4) + -1;
      }
      if (this[0x1ce] != (SnakeNode)0x0) {
        MessageRouter::Post((_func_void *)gMessageRouter);
        this[0x1ce] = (SnakeNode)0x0;
      }
      uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable((RtId *)&local_68,uVar5,0x2f);
      while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_68), bVar2)
      {
        pPVar6 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
        pRVar7 = (RtDbTable *)PVZDB::GetTable(pPVar6,0x2f);
        Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_68);
        Sexy::RtDbTable::GetObjectForId(pRVar7,(RtId *)aIStack_88);
        nop();
        Sexy::RtId::~RtId((RtId *)aIStack_88);
        iVar11 = extraout_w1_02;
        if (extraout_x0_00 != (long *)0x0) {
          pTVar8 = (TRect *)(**(code **)(*extraout_x0_00 + 0x178))(extraout_x0_00);
          cVar1 = Sexy::TRect<int>::Intersects(aTStack_98,pTVar8);
          iVar11 = extraout_w1_03;
          if (cVar1 != '\0') {
            MessageRouter::Post((_func_void *)gMessageRouter);
            Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_68);
            goto LAB_049d56f4;
          }
        }
        Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_68,iVar11);
      }
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_68);
      uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable((RtId *)&local_68,uVar5,0x28);
      while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_68), bVar2)
      {
        Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_68);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aIStack_88,(RtWeakPtrBase *)&local_a0);
        this_00 = (RtObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_88);
        pSVar10 = Sexy::RtObject::Cast<SnakeNode>(this_00);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_88)
        ;
        Sexy::RtId::~RtId((RtId *)&local_a0);
        iVar11 = extraout_w1_04;
        if ((pSVar10 != (SnakeNode *)0x0) && (2 < *(int *)(pSVar10 + 0xb8) - 1U)) {
          GetAttackRect();
          cVar1 = Sexy::TRect<int>::Intersects(aTStack_98,(TRect *)aIStack_88);
          iVar11 = extraout_w1_05;
          if (cVar1 != '\0') {
            MessageRouter::Post((_func_void *)gMessageRouter);
            Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_68);
            goto LAB_049d56f4;
          }
        }
        Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_68,iVar11);
      }
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_68);
      pfVar3 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this);
      fVar15 = pfVar3[1];
      fVar16 = *pfVar3;
      if (fVar15 < 210.0) {
        MessageRouter::Post((_func_void *)gMessageRouter);
      }
      if ((fVar15 < 160.0 || (fVar16 < 200.0 || 785.0 < fVar16)) || (565.0 < fVar15)) {
        MessageRouter::Post((_func_void *)gMessageRouter);
        goto LAB_049d56f4;
      }
      goto LAB_049d561c;
    }
    std::
    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    **)(this + 0xa8));
    AddTrace((SexyVector3 *)this);
    this_01 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0xa8);
    if (this_01 ==
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         *)0x0) goto LAB_049d587c;
  }
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar15 = *pfVar3;
  fVar16 = pfVar3[1];
  puVar4 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_01);
  local_68 = *puVar4;
  local_60 = *(undefined4 *)(puVar4 + 1);
  cVar1 = std::
          queue<Sexy::SexyVector3,std::deque<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>>::
          empty((queue<Sexy::SexyVector3,std::deque<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>>
                 *)(this + 0x168));
  if (cVar1 == '\0') {
    pSVar9 = (SexyVector3 *)
             std::
             queue<Sexy::SexyVector3,std::deque<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>>
             ::front();
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_68,pSVar9);
    std::queue<Sexy::SexyVector3,std::deque<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>>::
    pop((queue<Sexy::SexyVector3,std::deque<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>> *)
        (this + 0x168));
  }
  if (fVar15 < (float)local_68) {
    fVar14 = (float)local_68 - fVar15;
    uVar12 = 1;
    if (fVar14 <= 0.0) goto LAB_049d5678;
  }
  else {
LAB_049d5678:
    fVar14 = 0.0;
    uVar12 = 2;
  }
  if (((float)local_68 < fVar15) && (fVar14 < fVar15 - (float)local_68)) {
    uVar12 = 2;
    fVar14 = fVar15 - (float)local_68;
  }
  if ((fVar16 < local_68._4_4_) && (fVar14 < local_68._4_4_ - fVar16)) {
    uVar12 = 4;
    fVar14 = local_68._4_4_ - fVar16;
  }
  if ((local_68._4_4_ < fVar16) && (fVar14 < fVar16 - local_68._4_4_)) {
    uVar12 = 3;
  }
  cVar1 = isInState(this,uVar12);
  if (cVar1 == '\0') {
    setState(this,uVar12);
  }
  else {
    keepState(this);
  }
LAB_049d56f4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeNode::updateState_RIGHT() */

void __thiscall SnakeNode::updateState_RIGHT(SnakeNode *this)

{
  float *pfVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  Vec3 aVStack_18 [16];
  long local_8;
  
  fVar6 = *(float *)(this + 0x1b8);
  fVar7 = *(float *)(this + 0x1bc);
  local_8 = ___stack_chk_guard;
  if (this[0x1cc] == (SnakeNode)0x0) {
    pcVar2 = *(code **)(*(long *)this + 0x78);
    pfVar1 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar3 = *pfVar1;
  }
  else {
    fVar7 = fVar7 * 0.5;
    pcVar2 = *(code **)(*(long *)this + 0x78);
    pfVar1 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar3 = *pfVar1;
  }
  fVar4 = pfVar1[1];
  fVar5 = pfVar1[2];
  *(float *)(this + 0x1b8) = fVar7 + fVar6;
  EATextSquish::Vec3::Vec3(aVStack_18,fVar3 + fVar7,fVar4,fVar5);
  (*pcVar2)(this,aVStack_18);
  if (12.0 <= *(float *)(this + 0x1b8)) {
    checkState(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeNode::updateState_LEFT() */

void __thiscall SnakeNode::updateState_LEFT(SnakeNode *this)

{
  float *pfVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  Vec3 aVStack_18 [16];
  long local_8;
  
  fVar6 = *(float *)(this + 0x1b8);
  fVar7 = *(float *)(this + 0x1bc);
  local_8 = ___stack_chk_guard;
  if (this[0x1cc] == (SnakeNode)0x0) {
    pcVar2 = *(code **)(*(long *)this + 0x78);
    pfVar1 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar3 = *pfVar1;
  }
  else {
    fVar7 = fVar7 * 0.5;
    pcVar2 = *(code **)(*(long *)this + 0x78);
    pfVar1 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar3 = *pfVar1;
  }
  fVar4 = pfVar1[1];
  fVar5 = pfVar1[2];
  *(float *)(this + 0x1b8) = fVar7 + fVar6;
  EATextSquish::Vec3::Vec3(aVStack_18,fVar3 - fVar7,fVar4,fVar5);
  (*pcVar2)(this,aVStack_18);
  if (12.0 <= *(float *)(this + 0x1b8)) {
    checkState(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeNode::updateState_UP() */

void __thiscall SnakeNode::updateState_UP(SnakeNode *this)

{
  float *pfVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  Vec3 aVStack_18 [16];
  long local_8;
  
  fVar6 = *(float *)(this + 0x1b8);
  fVar7 = *(float *)(this + 0x1bc);
  local_8 = ___stack_chk_guard;
  if (this[0x1cc] == (SnakeNode)0x0) {
    pcVar2 = *(code **)(*(long *)this + 0x78);
    pfVar1 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar3 = *pfVar1;
    fVar4 = pfVar1[1];
  }
  else {
    fVar7 = fVar7 * 0.5;
    pcVar2 = *(code **)(*(long *)this + 0x78);
    pfVar1 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar3 = *pfVar1;
    fVar4 = pfVar1[1];
  }
  fVar5 = pfVar1[2];
  *(float *)(this + 0x1b8) = fVar7 + fVar6;
  EATextSquish::Vec3::Vec3(aVStack_18,fVar3,fVar4 - fVar7,fVar5);
  (*pcVar2)(this,aVStack_18);
  if (12.0 <= *(float *)(this + 0x1b8)) {
    checkState(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnakeNode::updateState_DOWN() */

void __thiscall SnakeNode::updateState_DOWN(SnakeNode *this)

{
  float *pfVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  Vec3 aVStack_18 [16];
  long local_8;
  
  fVar6 = *(float *)(this + 0x1b8);
  fVar7 = *(float *)(this + 0x1bc);
  local_8 = ___stack_chk_guard;
  if (this[0x1cc] == (SnakeNode)0x0) {
    pcVar2 = *(code **)(*(long *)this + 0x78);
    pfVar1 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar3 = *pfVar1;
    fVar4 = pfVar1[1];
  }
  else {
    fVar7 = fVar7 * 0.5;
    pcVar2 = *(code **)(*(long *)this + 0x78);
    pfVar1 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar3 = *pfVar1;
    fVar4 = pfVar1[1];
  }
  fVar5 = pfVar1[2];
  *(float *)(this + 0x1b8) = fVar7 + fVar6;
  EATextSquish::Vec3::Vec3(aVStack_18,fVar3,fVar4 + fVar7,fVar5);
  (*pcVar2)(this,aVStack_18);
  if (12.0 <= *(float *)(this + 0x1b8)) {
    checkState(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

