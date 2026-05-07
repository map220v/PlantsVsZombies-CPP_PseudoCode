// Class: ZombossCrosshair


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossCrosshair::StaticClassInit() */

void ZombossCrosshair::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossCrosshair");
    (*pcVar2)(plVar1,asStack_10,FUN_04740574,0xc0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossCrosshair::StaticGetClass() */

long * ZombossCrosshair::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossCrosshair",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossCrosshair::GetClass() const */

long * ZombossCrosshair::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossCrosshair",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossCrosshair::isInvulnerablePlantInTargetSquare() const */

void __thiscall ZombossCrosshair::isInvulnerablePlantInTargetSquare(ZombossCrosshair *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  Plant *this_00;
  Board *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)(this + 0xb4);
  iVar2 = *(int *)(this + 0xb0);
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  this_00 = (Plant *)Board::GetPlantAt(this_01,iVar2,iVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (Plant *)0x0) {
    if (*(code **)(*(long *)this_00 + 0x1f8) == Plant::IsInPlantFoodState) {
      cVar3 = Plant::IsInPlantFoodState(this_00);
    }
    else {
      cVar3 = (**(code **)(*(long *)this_00 + 0x1f8))();
    }
    if (cVar3 != '\0') goto LAB_04740060;
  }
  cVar3 = '\0';
LAB_04740060:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3);
}


/* ZombossCrosshair::CounterRocket() */

void ZombossCrosshair::CounterRocket(void)

{
  long *in_x0;
  
  nop();
  nop();
  (**(code **)(*in_x0 + 0x48))();
  return;
}


/* ZombossCrosshair::OnRocketHitGround() */

void __thiscall ZombossCrosshair::OnRocketHitGround(ZombossCrosshair *this)

{
  char cVar1;
  
  cVar1 = isInvulnerablePlantInTargetSquare(this);
  if (cVar1 == '\0') {
    nop();
    (**(code **)(*(long *)this + 0x48))(this);
    return;
  }
  CounterRocket();
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* ZombossCrosshair::ZombossCrosshair() */

void __thiscall ZombossCrosshair::ZombossCrosshair(ZombossCrosshair *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_068c66f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombossCrosshair_068c68d8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  Sexy::Point::Point((Point *)(this + 0xb0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb8));
  return;
}


/* ZombossCrosshair::StaticNew() */

ZombossCrosshair * ZombossCrosshair::StaticNew(void)

{
  ZombossCrosshair *this;
  
  this = ::operator_new(0xc0);
  ZombossCrosshair(this);
  return this;
}


/* ZombossCrosshair::~ZombossCrosshair() */

void __thiscall ZombossCrosshair::~ZombossCrosshair(ZombossCrosshair *this)

{
  *(undefined ***)this = &PTR_GetClass_068c66f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombossCrosshair_068c68d8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to ZombossCrosshair::~ZombossCrosshair() */

void __thiscall ZombossCrosshair::~ZombossCrosshair(ZombossCrosshair *this)

{
  ~ZombossCrosshair(this + -0x10);
  return;
}


/* ZombossCrosshair::~ZombossCrosshair() */

void __thiscall ZombossCrosshair::~ZombossCrosshair(ZombossCrosshair *this)

{
  ~ZombossCrosshair(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombossCrosshair::~ZombossCrosshair() */

void __thiscall ZombossCrosshair::~ZombossCrosshair(ZombossCrosshair *this)

{
  ~ZombossCrosshair(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossCrosshair::InitializeRocketController(ZombieZombossExplosive const*, Sexy::Point const&)
    */

void __thiscall
ZombossCrosshair::InitializeRocketController
          (ZombossCrosshair *this,ZombieZombossExplosive *param_1,Point *param_2)

{
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xa8),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xb0) = *(undefined8 *)param_2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossCrosshair::onDestroy() */

void __thiscall ZombossCrosshair::onDestroy(ZombossCrosshair *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  bool bVar2;
  ZombieZombossExplosive *this_01;
  long *plVar3;
  
  this_00 = (RtMixedPtrBase *)(this + 0xb8);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar3 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xa8));
  if (!bVar2) {
    return;
  }
  this_01 = (ZombieZombossExplosive *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8))
  ;
  ZombieZombossExplosive::OnRocketDestroyed(this_01,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossCrosshair::StartCrosshairEffect(std::string const&, std::string const&) */

void __thiscall
ZombossCrosshair::StartCrosshairEffect(ZombossCrosshair *this,string *param_1,string *param_2)

{
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  Effect_PopAnim::SetCentered(this_00,true);
  GetPAMByName(param_1);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this_00,param_2,0);
  Effect_PopAnim::SetCentered(this_00,true);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_18,(float)*(int *)(this + 0xb0),(float)*(int *)(this + 0xb4),0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  FUN_0473fe6c(this_00 + 0x1c);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xb8),(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossCrosshair::CreateExplosionEffect(std::string const&, std::string const&) */

void __thiscall
ZombossCrosshair::CreateExplosionEffect(ZombossCrosshair *this,string *param_1,string *param_2)

{
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  Point *extraout_x1;
  int local_28;
  int local_24;
  TPoint aTStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  Effect_PopAnim::SetCentered(this_00,true);
  GetPAMByName(param_1);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Effect_PopAnim::PlaySingleAnimation(this_00,param_2,0);
  Effect_PopAnim::SetCentered(this_00,true);
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(this + 0xb0),extraout_x1);
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_28,aTStack_20);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_28,(float)local_24,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

