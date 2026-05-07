// Class: PenetratingRayEntity


/* PenetratingRayEntity::CalcRenderOrder() const */

void __thiscall PenetratingRayEntity::CalcRenderOrder(PenetratingRayEntity *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x64960,uVar1,uVar2);
  return;
}


/* non-virtual thunk to PenetratingRayEntity::CalcRenderOrder() const */

void __thiscall PenetratingRayEntity::CalcRenderOrder(PenetratingRayEntity *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* PenetratingRayEntity::setStartPosition(Sexy::SexyVector3) */

void PenetratingRayEntity::setStartPosition
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x1f0),(SexyVector3 *)&local_10);
  return;
}


/* PenetratingRayEntity::setAttackRect(Sexy::TRect<int>) */

void __thiscall PenetratingRayEntity::setAttackRect(PenetratingRayEntity *this,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(this + 0x1fc) = *param_2;
  *(undefined8 *)(this + 0x204) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PenetratingRayEntity::StaticClassInit() */

void PenetratingRayEntity::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"PenetratingRayEntity");
    (*pcVar2)(plVar1,asStack_10,FUN_03b3eaa0,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PenetratingRayEntity::StaticGetClass() */

long * PenetratingRayEntity::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PenetratingRayEntity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PenetratingRayEntity::GetClass() const */

long * PenetratingRayEntity::GetClass(void)

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
  (*pcVar3)(plVar1,"PenetratingRayEntity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PenetratingRayEntity::setOwner(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall PenetratingRayEntity::setOwner(PenetratingRayEntity *this,RtWeakPtr *param_2)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  SexyVector3 *pSVar2;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x148);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,param_2);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
  if (cVar1 == '\0') {
    return;
  }
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_01);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x150),pSVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PenetratingRayEntity::refreshShooterEffect() */

void __thiscall PenetratingRayEntity::refreshShooterEffect(PenetratingRayEntity *this)

{
  char cVar1;
  int iVar2;
  StandaloneEffect *this_00;
  undefined8 local_28;
  undefined4 local_20;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1e8));
  if (cVar1 != '\0') {
    local_20 = *(undefined4 *)(this + 0x1f8);
    local_28 = *(undefined8 *)(this + 0x1f0);
    EATextSquish::Vec3::Vec3(aVStack_18,0.0,-15.0,0.0);
    EATextSquish::Vec3::operator+=((Vec3 *)&local_28,aVStack_18);
    this_00 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e8));
    iVar2 = (**(code **)(*(long *)this + 0x170))(this);
    StandaloneEffect::SetBoardSpaceOrigin(this_00,(SexyVector3 *)&local_28,iVar2 + 1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PenetratingRayEntity::onDestroy() */

void __thiscall PenetratingRayEntity::onDestroy(PenetratingRayEntity *this)

{
  char cVar1;
  ulong uVar2;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(this + 0x160);
    uVar2 = FUN_03b39ec8(uVar6,*(undefined8 *)(this + 0x168));
    if (uVar2 <= uVar5) break;
    pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03b39ef0(uVar6,uVar5);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
    (**(code **)(*plVar4 + 0x48))();
    uVar5 = uVar5 + 1;
  }
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(this + 0x178);
    uVar2 = FUN_03b39ec8(uVar6,*(undefined8 *)(this + 0x180));
    if (uVar2 <= uVar5) break;
    pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03b39ef0(uVar6,uVar5);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
    (**(code **)(*plVar4 + 0x48))();
    uVar5 = uVar5 + 1;
  }
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1e0));
  if (cVar1 != '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e0));
    (**(code **)(*plVar4 + 0x48))();
  }
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1e8));
  if (cVar1 != '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e8));
    (**(code **)(*plVar4 + 0x48))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PenetratingRayEntity::isOwnerMoved() */

void PenetratingRayEntity::isOwnerMoved(void)

{
  bool bVar1;
  bool bVar2;
  long in_x0;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  SexyVector3 *pSVar3;
  float fVar4;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x148));
  bVar1 = true;
  if (bVar2) {
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x148));
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this);
    local_18[0] = Sexy::SexyVector3::operator-((SexyVector3 *)(in_x0 + 0x150),pSVar3);
    fVar4 = (float)DVec3::getLength((DVec3 *)local_18);
    bVar1 = fVar4 != 0.0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PenetratingRayEntity::setChildEffectPopAnimStr(std::string, std::string) */

void PenetratingRayEntity::setChildEffectPopAnimStr
               (long *param_1,string *param_2,string *param_3,string *param_4)

{
  string *this;
  string *psVar1;
  RtMixedPtrBase *this_00;
  char cVar2;
  ulong uVar3;
  Effect_PopAnim *this_01;
  long *plVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this = (string *)(param_1 + 0x36);
  psVar1 = (string *)(param_1 + 0x39);
  local_8 = ___stack_chk_guard;
  cVar2 = std::operator==(this,param_2);
  if ((cVar2 == '\0') || (cVar2 = std::operator==(psVar1,param_3), cVar2 == '\0')) {
    this_00 = (RtMixedPtrBase *)(param_1 + 0x3c);
    thunk_FUN_05475e00(this,param_2);
    thunk_FUN_05475e00(psVar1,param_3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar2 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar4 + 0x48))();
    }
    uVar3 = (**(code **)(*param_1 + 0x170))(param_1);
    BoardHelpers::LoadPopanimEffect
              ((BoardHelpers *)this,(string *)(uVar3 & 0xffffffff),(int)psVar1,param_4);
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    this_01 = (Effect_PopAnim *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Effect_PopAnim::SetCentered(this_01,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PenetratingRayEntity::setShooterEffectPopAnimStr(std::string, std::string) */

void PenetratingRayEntity::setShooterEffectPopAnimStr
               (long *param_1,string *param_2,string *param_3,string *param_4)

{
  string *this;
  string *psVar1;
  RtMixedPtrBase *this_00;
  char cVar2;
  int iVar3;
  Effect_PopAnim *this_01;
  long *plVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this = (string *)(param_1 + 0x38);
  psVar1 = (string *)(param_1 + 0x3b);
  local_8 = ___stack_chk_guard;
  cVar2 = std::operator==(this,param_2);
  if ((cVar2 == '\0') || (cVar2 = std::operator==(psVar1,param_3), cVar2 == '\0')) {
    this_00 = (RtMixedPtrBase *)(param_1 + 0x3d);
    thunk_FUN_05475e00(this,param_2);
    thunk_FUN_05475e00(psVar1,param_3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar2 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar4 + 0x48))();
    }
    iVar3 = (**(code **)(*param_1 + 0x170))(param_1);
    BoardHelpers::LoadPopanimEffect
              ((BoardHelpers *)this,(string *)(ulong)(iVar3 + 1),(int)psVar1,param_4);
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    this_01 = (Effect_PopAnim *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Effect_PopAnim::SetCentered(this_01,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PenetratingRayEntity::getTargetHitPosition(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
PenetratingRayEntity::getTargetHitPosition(PenetratingRayEntity *this,RtWeakPtr *param_2)

{
  bool bVar1;
  char cVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var3;
  float *pfVar4;
  RtObject *pRVar5;
  Zombie *this_00;
  undefined4 uVar6;
  int local_20;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    pRVar5 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    this_00 = Sexy::RtObject::Cast<Zombie>(pRVar5);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
    if (bVar1) goto LAB_03b3c0c8;
  }
  else {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
    if (!bVar1) {
      p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2)
      ;
      pfVar4 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var3);
      uVar6 = *(undefined4 *)(this + 500);
      local_18 = *pfVar4;
      goto LAB_03b3c008;
    }
    this_00 = (Zombie *)0x0;
LAB_03b3c0c8:
    pRVar5 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Sexy::RtObject::Cast<GridItem>(pRVar5);
  }
  p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var3);
  uVar6 = *(undefined4 *)(this + 500);
  local_18 = *pfVar4;
  if (this_00 != (Zombie *)0x0) {
    cVar2 = Zombie::IsBoss(this_00);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)this_00 + 0xb0))(&local_18,this_00);
      Sexy::TRect<int>::GetCenter();
      local_18 = (float)local_20;
    }
  }
LAB_03b3c008:
  local_10 = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_14 = uVar6;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18,uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PenetratingRayEntity::AddToRenderQueue(RenderQueue*) */

void __thiscall
PenetratingRayEntity::AddToRenderQueue(PenetratingRayEntity *this,RenderQueue *param_1)

{
  undefined4 uVar1;
  int iVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RealObject::AddToRenderQueue((RealObject *)this,param_1);
  uVar1 = (**(code **)(*(long *)this + 0x170))(this);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,drawRayEntity);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<PenetratingRayEntity,void(PenetratingRayEntity::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,uVar1,aDStack_38);
  iVar2 = (**(code **)(*(long *)this + 0x170))(this);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,drawRayShooter);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<PenetratingRayEntity,void(PenetratingRayEntity::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,iVar2 + 1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PenetratingRayEntity::setIsValidTargetFunc(std::function<bool (Sexy::RtWeakPtr<BoardEntity>)>) */

void __thiscall
PenetratingRayEntity::setIsValidTargetFunc(PenetratingRayEntity *this,function *param_2)

{
  std::
  function<float(std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>)>
  ::operator=((function<float(std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>)>
               *)(this + 200),param_2);
  return;
}


/* PenetratingRayEntity::setIsPenetrableFunc(std::function<bool (Sexy::RtWeakPtr<BoardEntity>)>) */

void __thiscall
PenetratingRayEntity::setIsPenetrableFunc(PenetratingRayEntity *this,function *param_2)

{
  std::
  function<float(std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>)>
  ::operator=((function<float(std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>)>
               *)(this + 0xe8),param_2);
  return;
}


/* PenetratingRayEntity::setDamageTargetsFunc(std::function<void
   (std::vector<Sexy::RtWeakPtr<BoardEntity>, std::allocator<Sexy::RtWeakPtr<BoardEntity> > >)>) */

void __thiscall
PenetratingRayEntity::setDamageTargetsFunc(PenetratingRayEntity *this,function *param_2)

{
  std::
  function<float(std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>)>
  ::operator=((function<float(std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>)>
               *)(this + 0x108),param_2);
  return;
}


/* PenetratingRayEntity::setScaleYFunction(std::function<float
   (std::vector<Sexy::RtWeakPtr<BoardEntity>, std::allocator<Sexy::RtWeakPtr<BoardEntity> > >)>) */

void __thiscall
PenetratingRayEntity::setScaleYFunction(PenetratingRayEntity *this,function *param_2)

{
  std::
  function<float(std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>)>
  ::operator=((function<float(std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>)>
               *)(this + 0x128),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PenetratingRayEntity::PenetratingRayEntity() */

void __thiscall PenetratingRayEntity::PenetratingRayEntity(PenetratingRayEntity *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_067309c0;
  *(undefined ***)(this + 0x10) = &PTR__PenetratingRayEntity_06730ba8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb0));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 200));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0xe8));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x108));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x128));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x148));
  DVec3::DVec3((DVec3 *)(this + 0x150));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x178));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 400));
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  std::string::string((string *)(this + 0x1b0),"");
  nop();
  std::string::string((string *)(this + 0x1b8),"");
  nop();
  std::string::string((string *)(this + 0x1c0),"");
  nop();
  std::string::string((string *)(this + 0x1c8),"");
  nop();
  std::string::string((string *)(this + 0x1d0),"");
  nop();
  std::string::string((string *)(this + 0x1d8),"");
  nop();
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1e0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1e8));
  DVec3::DVec3((DVec3 *)(this + 0x1f0));
  Sexy::Insets::Insets((Insets *)(this + 0x1fc));
  FUN_03b39e50((function<void(Sexy::Graphics*)> *)(this + 200));
  FUN_03b39e50((function<void(Sexy::Graphics*)> *)(this + 0xe8));
  FUN_03b39e8c((function<void(Sexy::Graphics*)> *)(this + 0x108));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PenetratingRayEntity::StaticNew() */

PenetratingRayEntity * PenetratingRayEntity::StaticNew(void)

{
  PenetratingRayEntity *this;
  
  this = ::operator_new(0x210);
  PenetratingRayEntity(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PenetratingRayEntity::refreshHitEffectsPosition() */

void PenetratingRayEntity::refreshHitEffectsPosition(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long in_x0;
  ulong uVar4;
  RtWeakPtrBase *pRVar5;
  RtWeakPtr *this;
  StandaloneEffect *this_00;
  long lVar6;
  ulong uVar7;
  float in_s1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  float local_18;
  float local_14;
  long local_8;
  
  uVar7 = 0;
  local_8 = ___stack_chk_guard;
  cVar1 = std::
          vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
          empty((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>
                 *)(in_x0 + 0x178));
  if (cVar1 == '\0') {
    for (; uVar4 = FUN_03b39e20(*(undefined8 *)(in_x0 + 0xb0),*(undefined8 *)(in_x0 + 0xb8)),
        uVar7 < uVar4; uVar7 = uVar7 + 1) {
      pRVar5 = (RtWeakPtrBase *)FUN_03b39ef0(*(undefined8 *)(in_x0 + 0x178),uVar7);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,pRVar5);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_28);
      if (cVar1 != '\0') {
        this = (RtWeakPtr *)FUN_03b39ef8(*(undefined8 *)(in_x0 + 0xb0),uVar7);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
        if (bVar2) {
          pRVar5 = (RtWeakPtrBase *)FUN_03b39ef8(*(undefined8 *)(in_x0 + 0xb0),uVar7);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar5);
          local_18 = (float)getTargetHitPosition();
          local_14 = in_s1;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
          in_s1 = local_18 - 35.0;
          local_14 = local_14 - 45.0;
          local_18 = in_s1;
          this_00 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          iVar3 = FUN_03b39da0(*(undefined4 *)(lVar6 + 0x1c),lVar6 + 0x20);
          StandaloneEffect::SetBoardSpaceOrigin(this_00,(SexyVector3 *)&local_18,iVar3);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PenetratingRayEntity::setHitEffectPopAnimStr(std::string, std::string) */

void __thiscall
PenetratingRayEntity::setHitEffectPopAnimStr
          (PenetratingRayEntity *this,string *param_2,string *param_3)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *pRVar3;
  long *plVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::operator==((string *)(this + 0x1b8),param_2);
  if ((cVar1 == '\0') || (cVar1 = std::operator==((string *)(this + 0x1d0),param_3), cVar1 == '\0'))
  {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x178);
    thunk_FUN_05475e00((string *)(this + 0x1b8),param_2);
    thunk_FUN_05475e00((string *)(this + 0x1d0),param_3);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2)
    {
      pRVar3 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
      if (cVar1 != '\0') {
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        (**(code **)(*plVar4 + 0x48))();
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
    clear((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *
          )this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PenetratingRayEntity::~PenetratingRayEntity() */

void __thiscall PenetratingRayEntity::~PenetratingRayEntity(PenetratingRayEntity *this)

{
  *(undefined ***)this = &PTR_GetClass_067309c0;
  *(undefined ***)(this + 0x10) = &PTR__PenetratingRayEntity_06730ba8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e0));
  std::string::~string((string *)(this + 0x1d8));
  std::string::~string((string *)(this + 0x1d0));
  std::string::~string((string *)(this + 0x1c8));
  std::string::~string((string *)(this + 0x1c0));
  std::string::~string((string *)(this + 0x1b8));
  std::string::~string((string *)(this + 0x1b0));
  std::vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::~vector
            ((vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>> *)(this + 400));
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  ~vector((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *
          )(this + 0x178));
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  ~vector((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *
          )(this + 0x160));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x148));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x128));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x108));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0xe8));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 200));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0xb0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to PenetratingRayEntity::~PenetratingRayEntity() */

void __thiscall PenetratingRayEntity::~PenetratingRayEntity(PenetratingRayEntity *this)

{
  ~PenetratingRayEntity(this + -0x10);
  return;
}


/* PenetratingRayEntity::~PenetratingRayEntity() */

void __thiscall PenetratingRayEntity::~PenetratingRayEntity(PenetratingRayEntity *this)

{
  ~PenetratingRayEntity(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PenetratingRayEntity::~PenetratingRayEntity() */

void __thiscall PenetratingRayEntity::~PenetratingRayEntity(PenetratingRayEntity *this)

{
  ~PenetratingRayEntity(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PenetratingRayEntity::drawRayEntity(Sexy::Graphics*) */

void PenetratingRayEntity::drawRayEntity(Graphics *param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  bool bVar2;
  UIWidget *this_00;
  PopAnimRig *this_01;
  StandaloneEffect *pSVar3;
  Graphics *in_x1;
  undefined1 in_w4;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_s2;
  float fVar8;
  GraphicsAutoState aGStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  float local_64;
  FastCurve aFStack_60 [8];
  undefined4 local_58;
  float local_54;
  float local_50;
  undefined8 local_48 [3];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  this = (RtMixedPtrBase *)(param_1 + 0x1e0);
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_80,in_x1);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0xa8));
    if (cVar1 != '\0') {
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&local_78);
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&local_70);
      fVar4 = (float)FUN_03b3a390(*(undefined4 *)(param_1 + 0x1f0));
      fVar5 = (float)FUN_03b3a390(*(float *)(param_1 + 500) - *(float *)(param_1 + 0x1f8));
      Sexy::FastCurve::SetOutRange((FastCurve *)local_48,fVar4,fVar5);
      local_78 = local_48[0];
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_48,(RtWeakPtrBase *)(param_1 + 0xa8));
      local_58 = getTargetHitPosition((PenetratingRayEntity *)param_1,(FastCurve *)local_48);
      local_54 = fVar5;
      local_50 = in_s2;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_48);
      fVar4 = (float)FUN_03b3a390(local_58);
      fVar5 = (float)FUN_03b3a390(local_54 - local_50);
      Sexy::FastCurve::SetOutRange((FastCurve *)local_48,fVar4,fVar5);
      local_70 = local_48[0];
      local_68 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_70,(SexyVector2 *)&local_78);
      local_64 = fVar5;
      fVar4 = (float)DVec2::getLength((DVec2 *)&local_68);
      fVar5 = (float)FUN_03b3a390(0x42ee0000);
      bVar2 = std::function::operator_cast_to_bool((function *)(param_1 + 0x128));
      if (bVar2) {
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               local_48,(vector *)(param_1 + 0xb0));
        fVar7 = (float)std::
                       function<float(std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>)>
                       ::operator()((function<float(std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>)>
                                     *)(param_1 + 0x128),(FastCurve *)local_48);
        fVar7 = fVar7 + fVar7;
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        ~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )local_48);
        fVar8 = (1.0 - fVar7) * 10.0 + 114.0;
      }
      else {
        fVar8 = 104.0;
        fVar7 = 2.0;
      }
      fVar6 = (float)FUN_03b3a390(0x42180000);
      fVar8 = (float)FUN_03b3a390(fVar8);
      Sexy::FastCurve::SetOutRange(aFStack_60,fVar6,fVar8);
      Sexy::FastCurve::SetOutRange((FastCurve *)local_48,fVar4 / fVar5,fVar7);
      Sexy::SexyTransform2D::CreateTransformWithPivot
                ((SexyTransform2D *)&local_78,(SexyVector2 *)local_48,0.0,(SexyVector2 *)aFStack_60,
                 (SexyVector2 *)0x1,(bool)in_w4);
      this_00 = (UIWidget *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      this_01 = (PopAnimRig *)UIWidget::GetAtlasImage(this_00);
      PopAnimRig::SetRenderTransform(this_01,aSStack_30);
      pSVar3 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      StandaloneEffect::SetVisibility(pSVar3,true);
      pSVar3 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      StandaloneEffect::Draw(pSVar3,in_x1);
      pSVar3 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      StandaloneEffect::SetVisibility(pSVar3,false);
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_80);
      goto LAB_03b413a0;
    }
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_80);
LAB_03b413a0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PenetratingRayEntity::drawRayShooter(Sexy::Graphics*) */

void __thiscall PenetratingRayEntity::drawRayShooter(PenetratingRayEntity *this,Graphics *param_1)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  bool bVar2;
  long *plVar3;
  StandaloneEffect *pSVar4;
  float fVar5;
  GraphicsAutoState aGStack_28 [8];
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_20 [24];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x1e8);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    fVar5 = 2.0;
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_28,param_1);
    bVar2 = std::function::operator_cast_to_bool((function *)(this + 0x128));
    if (bVar2) {
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::vector
                (avStack_20,(vector *)(this + 0xb0));
      fVar5 = (float)std::
                     function<float(std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>)>
                     ::operator()((function<float(std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>)>
                                   *)(this + 0x128),avStack_20);
      fVar5 = fVar5 + fVar5;
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector(avStack_20);
    }
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar3 + 0x80))(fVar5);
    pSVar4 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    StandaloneEffect::SetVisibility(pSVar4,true);
    pSVar4 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    StandaloneEffect::Draw(pSVar4,param_1);
    pSVar4 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    StandaloneEffect::SetVisibility(pSVar4,false);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PenetratingRayEntity::getHitEffectScale() */

void __thiscall PenetratingRayEntity::getHitEffectScale(PenetratingRayEntity *this)

{
  bool bVar1;
  float fVar2;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_20 [24];
  long local_8;
  
  fVar2 = 2.0;
  local_8 = ___stack_chk_guard;
  bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x128));
  if (bVar1) {
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::vector
              (avStack_20,(vector *)(this + 0xb0));
    fVar2 = (float)std::
                   function<float(std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>)>
                   ::operator()((function<float(std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>)>
                                 *)(this + 0x128),avStack_20);
    fVar2 = fVar2 + fVar2;
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              (avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar2);
}


/* PenetratingRayEntity::refreshHitEffectsScale() */

void __thiscall PenetratingRayEntity::refreshHitEffectsScale(PenetratingRayEntity *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  uVar3 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0x178);
    uVar2 = FUN_03b39ec8(uVar5,*(undefined8 *)(this + 0x180));
    if (uVar2 <= uVar3) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03b39ef0(uVar5,uVar3);
    plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pcVar4 = *(code **)(*plVar1 + 0x80);
    getHitEffectScale(this);
    (*pcVar4)(plVar1);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PenetratingRayEntity::refreshChildEffectsScale() */

void __thiscall PenetratingRayEntity::refreshChildEffectsScale(PenetratingRayEntity *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_20 [24];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x1e0);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pcVar5 = *(code **)(*plVar3 + 0xb8);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    uVar6 = FUN_03b39db0(*(undefined4 *)(lVar4 + 0xd0));
    bVar2 = std::function::operator_cast_to_bool((function *)(this + 0x128));
    if (bVar2) {
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::vector
                (avStack_20,(vector *)(this + 0xb0));
      uVar7 = std::
              function<float(std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>)>
              ::operator()((function<float(std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>)>
                            *)(this + 0x128),avStack_20);
      (*pcVar5)(uVar6,uVar7,plVar3);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector(avStack_20);
    }
    else {
      (*pcVar5)(uVar6,0x3f800000,plVar3);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PenetratingRayEntity::refreshChildEffects() */

void __thiscall PenetratingRayEntity::refreshChildEffects(PenetratingRayEntity *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_20 [24];
  long lStack_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x1e0);
  lStack_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pcVar5 = *(code **)(*plVar3 + 0xb8);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    uVar6 = FUN_03b39db0(*(undefined4 *)(lVar4 + 0xd0));
    bVar2 = std::function::operator_cast_to_bool((function *)(this + 0x128));
    if (bVar2) {
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::vector
                (avStack_20,(vector *)(this + 0xb0));
      uVar7 = std::
              function<float(std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>)>
              ::operator()((function<float(std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>)>
                            *)(this + 0x128),avStack_20);
      (*pcVar5)(uVar6,uVar7,plVar3);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector(avStack_20);
    }
    else {
      (*pcVar5)(uVar6,0x3f800000,plVar3);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PenetratingRayEntity::refreshTargetVector() */

void __thiscall PenetratingRayEntity::refreshTargetVector(PenetratingRayEntity *this)

{
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *this_00;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::function::operator_cast_to_bool((function *)(this + 200));
  if (bVar1) {
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0xe8));
    if ((bVar1) && (bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x108)), bVar1)
       ) {
      this_00 = (vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )(this + 0xb0);
      uVar10 = 0;
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
                (this_00);
      Sexy::Insets::Insets(aIStack_30,(Insets *)(this + 0x1fc));
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      uVar3 = operator|(2,4);
      uVar4 = SharkMinion::getRow((SharkMinion *)this);
      uVar5 = SharkMinion::getRow((SharkMinion *)this);
      EntityFinder::GetEntitiesTouchingRectangle
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar3,
                 aIStack_30,uVar4,uVar5);
      while( true ) {
        uVar7 = local_20;
        uVar6 = FUN_03b39e0c(local_20,local_18);
        if (uVar6 <= uVar10) break;
        FUN_03b39e18(uVar7,uVar10);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_38,(RtWeakPtrBase *)&local_40);
        cVar2 = std::function<bool(Sexy::RtWeakPtr<BoardEntity>)>::operator()
                          ((function<bool(Sexy::RtWeakPtr<BoardEntity>)> *)(this + 200),
                           (RtWeakPtr<Sexy::SoundResource> *)&local_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        if (cVar2 != '\0') {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_38,(RtWeakPtrBase *)&local_40);
          std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          push_back(this_00,(RtWeakPtr *)&local_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_38,(RtWeakPtrBase *)&local_40);
          cVar2 = std::function<bool(Sexy::RtWeakPtr<BoardEntity>)>::operator()
                            ((function<bool(Sexy::RtWeakPtr<BoardEntity>)> *)(this + 0xe8),
                             (RtWeakPtr<Sexy::SoundResource> *)&local_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          if (cVar2 == '\0') break;
        }
        uVar10 = uVar10 + 1;
      }
      cVar2 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
              ::empty(this_00);
      if (cVar2 == '\0') {
        uVar7 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)this_00);
        uVar8 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)this_00);
        FUN_03b44f48(uVar7,uVar8);
        uVar7 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)this_00);
        uVar8 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)this_00);
        local_58 = std::
                   find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                             (uVar7,uVar8,this + 0xa8);
        local_38 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)this_00);
        lVar9 = __gnu_cxx::operator-((__normal_iterator *)&local_38,(__normal_iterator *)&local_58);
        if (1 < lVar9) {
          local_50 = __gnu_cxx::
                     __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                     ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                  *)&local_58,1);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_40,(__normal_iterator *)&local_50);
          local_48 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)this_00);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_38,(__normal_iterator *)&local_48);
          std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          erase(this_00,local_40,local_38);
        }
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PenetratingRayEntity::createExtraHitEffects() */

void __thiscall PenetratingRayEntity::createExtraHitEffects(PenetratingRayEntity *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  RtWeakPtrBase *pRVar9;
  long lVar10;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar11;
  PopAnim *pPVar12;
  SexyVector3 *pSVar13;
  Effect_PopAnim *this_01;
  int iVar14;
  Effect_PopAnim *pEVar15;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          empty((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )(this + 0xb0));
  if (cVar2 == '\0') {
    uVar7 = FUN_03b39e20(*(undefined8 *)(this + 0xb0),*(undefined8 *)(this + 0xb8));
    uVar8 = FUN_03b39ec8(*(undefined8 *)(this + 0x178),*(undefined8 *)(this + 0x180));
    if (uVar7 != uVar8) {
      if (uVar7 < uVar8) {
        pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)(this + 0x178);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(pvVar1);
        lVar10 = FUN_03b39e20(*(undefined8 *)(this + 0xb0),*(undefined8 *)(this + 0xb8));
        local_18 = __gnu_cxx::
                   __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                   ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                *)&local_10,lVar10);
        while( true ) {
          local_10 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end(pvVar1);
          bVar3 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
          if (!bVar3) break;
          this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          (**(code **)(*plVar11 + 0x48))();
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
        }
        local_30 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(pvVar1);
        lVar10 = FUN_03b39e20(*(undefined8 *)(this + 0xb0),*(undefined8 *)(this + 0xb8));
        local_28 = __gnu_cxx::
                   __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                   ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                *)&local_30,lVar10);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_18,(__normal_iterator *)&local_28);
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(pvVar1);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_20);
        std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>
        ::erase((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>
                 *)pvVar1,local_18,local_10);
        uVar7 = FUN_03b39ec8(*(undefined8 *)(this + 0x178),*(undefined8 *)(this + 0x180));
        uVar8 = FUN_03b39e20(*(undefined8 *)(this + 0xb0),*(undefined8 *)(this + 0xb8));
        if (uVar8 <= uVar7) goto LAB_03b454e0;
      }
      else if (uVar7 <= uVar8) goto LAB_03b454e0;
      cVar2 = FUN_0547419c((string *)(this + 0x1b8));
      if (cVar2 == '\0') {
        GetPAMByName((string *)(this + 0x1b8));
        pPVar12 = (PopAnim *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        iVar4 = FUN_03b39e20(*(undefined8 *)(this + 0xb0),*(undefined8 *)(this + 0xb8));
        iVar5 = FUN_03b39ec8(*(undefined8 *)(this + 0x178),*(undefined8 *)(this + 0x180));
        if (0 < iVar4 - iVar5) {
          pEVar15._0_4_ = (Effect_PopAnim *)PVZ_EOT();
          pSVar13 = (SexyVector3 *)
                    std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
          iVar14 = 0;
          do {
            iVar14 = iVar14 + 1;
            this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
            Effect_PopAnim::CreatePopAnimRig(this_01,pPVar12,(RtClass *)0x0);
            Effect_PopAnim::PlayLoopingAnimation(pEVar15._0_4_,this_01,this + 0x1d0,0);
            iVar6 = (**(code **)(*(long *)this + 0x170))(this);
            StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,pSVar13,iVar6 + 1);
            Effect_PopAnim::SetCentered(this_01,true);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
            std::
            vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>
            ::push_back((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>
                         *)(this + 0x178),(RtWeakPtr *)&local_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
          } while (iVar4 - iVar5 != iVar14);
        }
      }
    }
  }
  else {
    pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)(this + 0x178);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(pvVar1);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(pvVar1);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar3)
    {
      pRVar9 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_20,pRVar9);
      plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      (**(code **)(*plVar11 + 0x48))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
    clear((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *
          )pvVar1);
  }
LAB_03b454e0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PenetratingRayEntity::refreshHitEffects() */

void __thiscall PenetratingRayEntity::refreshHitEffects(PenetratingRayEntity *this)

{
  createExtraHitEffects(this);
  refreshHitEffectsPosition();
  refreshHitEffectsScale(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PenetratingRayEntity::onUpdate() */

void __thiscall PenetratingRayEntity::onUpdate(PenetratingRayEntity *this)

{
  char cVar1;
  bool bVar2;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x148));
  if (cVar1 != '\0') {
    refreshTargetVector(this);
    refreshChildEffects(this);
    refreshHitEffects(this);
    refreshShooterEffect(this);
    bVar2 = std::function::operator_cast_to_bool((function *)(this + 0x108));
    if (bVar2) {
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::vector
                (avStack_20,(vector *)(this + 0xb0));
      std::
      function<void(std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>)>
      ::operator()((function<void(std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>)>
                    *)(this + 0x108),avStack_20);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector(avStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

