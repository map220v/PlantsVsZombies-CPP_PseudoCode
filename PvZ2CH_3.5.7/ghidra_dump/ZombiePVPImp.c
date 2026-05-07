// Class: ZombiePVPImp


/* ZombiePVPImp::ClearPlaybackParams(int) */

void __thiscall ZombiePVPImp::ClearPlaybackParams(ZombiePVPImp *this,int param_1)

{
  uchar uVar1;
  
  if (param_1 != 1) {
    return;
  }
  uVar1 = (char)this + '@';
  PlaybackController::RemoveParam(uVar1);
  PlaybackController::RemoveParam(uVar1);
  return;
}


/* ZombiePVPImp::onUpdate() */

void __thiscall ZombiePVPImp::onUpdate(ZombiePVPImp *this)

{
  char cVar1;
  
  Zombie::onUpdate((Zombie *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x818));
  if (((cVar1 == '\0') &&
      (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x820)), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(*(long *)this + 0x4c0))(this), cVar1 != '\0')) {
    (**(code **)(*(long *)this + 0x4b8))(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPImp::StaticClassInit() */

void ZombiePVPImp::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePVPImp");
    (*pcVar2)(plVar1,asStack_10,FUN_04995e90,0x828,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPImp::StaticGetClass() */

long * ZombiePVPImp::StaticGetClass(void)

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
  uVar2 = ZombieImp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPImp::GetClass() const */

long * ZombiePVPImp::GetClass(void)

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
  uVar2 = ZombieImp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPImp::~ZombiePVPImp() */

void __thiscall ZombiePVPImp::~ZombiePVPImp(ZombiePVPImp *this)

{
  *(undefined ***)this = &PTR_GetClass_0691aab0;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPImp_0691b570;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x820));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x818));
  ZombieImp::~ZombieImp((ZombieImp *)this);
  return;
}


/* non-virtual thunk to ZombiePVPImp::~ZombiePVPImp() */

void __thiscall ZombiePVPImp::~ZombiePVPImp(ZombiePVPImp *this)

{
  ~ZombiePVPImp(this + -0x10);
  return;
}


/* ZombiePVPImp::~ZombiePVPImp() */

void __thiscall ZombiePVPImp::~ZombiePVPImp(ZombiePVPImp *this)

{
  ~ZombiePVPImp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePVPImp::~ZombiePVPImp() */

void __thiscall ZombiePVPImp::~ZombiePVPImp(ZombiePVPImp *this)

{
  ~ZombiePVPImp(this + -0x10);
  return;
}


/* ZombiePVPImp::ZombiePVPImp() */

void __thiscall ZombiePVPImp::ZombiePVPImp(ZombiePVPImp *this)

{
  ZombieImp::ZombieImp((ZombieImp *)this);
  *(undefined ***)this = &PTR_GetClass_0691aab0;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPImp_0691b570;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x818));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x820));
  return;
}


/* ZombiePVPImp::StaticNew() */

ZombiePVPImp * ZombiePVPImp::StaticNew(void)

{
  ZombiePVPImp *this;
  
  this = ::operator_new(0x828);
  ZombiePVPImp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPImp::CreateSmokeEffect(Sexy::RtWeakPtr<Zombie>) */

void __thiscall ZombiePVPImp::CreateSmokeEffect(undefined8 param_1,RtMixedPtrBase *param_2)

{
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  undefined8 *puVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  string asStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  undefined4 local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    puVar2 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this);
    fStack_14 = (float)((ulong)*puVar2 >> 0x20);
    local_10 = *(undefined4 *)(puVar2 + 1);
    _local_18 = CONCAT44(fStack_14 - 30.0,(int)*puVar2);
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_28,"POPANIM_EFFECTS_SMOKE_EFFECT");
    GetPAMByName(asStack_28);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    std::string::~string(asStack_28);
    nop();
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,-1);
    Effect_PopAnim::SetCentered(this_00,true);
    FUN_04994a98(this_00 + 0x1c);
    std::string::string((string *)aRStack_20,"idle");
    Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_20,0);
    std::string::~string((string *)aRStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPImp::CreateShadowImp() */

void ZombiePVPImp::CreateShadowImp(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  BoardEntity *in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  Board *pBVar4;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar4 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_18,"pvp_shadowimp");
  uVar1 = FUN_04994a84(*(undefined4 *)(in_x0 + 0x50));
  uVar2 = BoardEntity::CalcColumnPosition(in_x0);
  uVar3 = SharkMinion::getRow((SharkMinion *)in_x0);
  Board::AddZombie(pBVar4,asStack_18,uVar1,uVar2,uVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)in_x8);
  CreateSmokeEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPImp::ApplyZombieFood() */

void __thiscall ZombiePVPImp::ApplyZombieFood(ZombiePVPImp *this)

{
  PlaybackController *this_00;
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  SexyVector3 *this_01;
  code *pcVar6;
  undefined4 uVar7;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::ApplyZombieFood((Zombie *)this);
  CreateShadowImp();
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x818),(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  CreateShadowImp();
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x820),(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  pcVar6 = *(code **)(*(long *)this + 0x300);
  uVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar3 = (*pcVar6)(this,uVar2);
  pcVar6 = *(code **)(*(long *)this + 0x300);
  uVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar4 = (*pcVar6)(this,uVar2);
  this_00 = (PlaybackController *)(this + 0x140);
  cVar1 = FUN_04994a88(this[0x174]);
  if (cVar1 == '\0') {
    PlaybackController::SetParam(this_00,'\x01',iVar3);
    PlaybackController::SetParam(this_00,'\x02',iVar4);
  }
  else {
    iVar3 = PlaybackController::GetParamInt(this_00,'\x01');
    iVar4 = PlaybackController::GetParamInt(this_00,'\x02');
  }
  plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x818));
  pcVar6 = *(code **)(*plVar5 + 0x78);
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  uVar2 = 0;
  uVar7 = 0;
  EATextSquish::Vec3::Vec3(aVStack_28,(float)iVar3,0.0,0.0);
  local_18 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aVStack_28);
  local_14 = uVar2;
  local_10 = uVar7;
  (*pcVar6)(plVar5,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x820));
  uVar2 = 0;
  uVar7 = 0;
  pcVar6 = *(code **)(*plVar5 + 0x78);
  EATextSquish::Vec3::Vec3(aVStack_28,(float)iVar4,0.0,0.0);
  local_18 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aVStack_28);
  local_14 = uVar2;
  local_10 = uVar7;
  (*pcVar6)(plVar5,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

