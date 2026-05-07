// Class: ZombiePumpkinScarecrowBird


/* ZombiePumpkinScarecrowBird::SetTargetColAndRow(int, int) */

void __thiscall
ZombiePumpkinScarecrowBird::SetTargetColAndRow
          (ZombiePumpkinScarecrowBird *this,int param_1,int param_2)

{
  *(int *)(this + 0x828) = param_1;
  *(int *)(this + 0x82c) = param_2;
  return;
}


/* ZombiePumpkinScarecrowBird::SetCaptain(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
ZombiePumpkinScarecrowBird::SetCaptain(ZombiePumpkinScarecrowBird *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x818),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinScarecrowBird::OnCaptainDied() */

void __thiscall ZombiePumpkinScarecrowBird::OnCaptainDied(ZombiePumpkinScarecrowBird *this)

{
  char cVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x818),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  cVar1 = Zombie::isInState((Zombie *)this,0x23);
  if (cVar1 != '\0') {
    Zombie::setZombieState((Zombie *)this,0x24,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinScarecrowBird::pickTarget(Sexy::Point&) */

void ZombiePumpkinScarecrowBird::pickTarget(Point *param_1)

{
  long lVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Board::GetPlantGroupAt(*(Point **)(gLawnApp + 0x9f0));
  if (lVar1 == 0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8)
    ;
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    ZombiePirateCaptain::GetPlantToParrot((ZombiePirateCaptain *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinScarecrowBird::onEnterState_FlyToScarecrow(ZombieState) */

void ZombiePumpkinScarecrowBird::onEnterState_FlyToScarecrow(Zombie *param_1)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)Zombie::GetAnimRig(param_1);
  std::string::string(asStack_40,"fly");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"Play_Parrot_WingFlap");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_40,0.0);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinScarecrowBird::onEnterState_AttachedToPlant(ZombieState) */

void ZombiePumpkinScarecrowBird::onEnterState_AttachedToPlant(RealObject *param_1)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"Play_UI_Game_Plant_Stolen");
  RealObject::PlayPositionalSound(param_1,asStack_40,0.0);
  std::string::~string(asStack_40);
  nop();
  pPVar1 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)param_1);
  std::string::string(asStack_40,"carry");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinScarecrowBird::onEnterState_Returning(ZombieState) */

void ZombiePumpkinScarecrowBird::onEnterState_Returning
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *param_1)

{
  ResourceInfo *this;
  float *pfVar1;
  float *pfVar2;
  PopAnimRig *pPVar3;
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0x818));
  if (this != (ResourceInfo *)0x0) {
    pfVar1 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(param_1);
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    if (*pfVar2 <= *pfVar1) {
      pPVar3 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)param_1);
      __s = "fly";
    }
    else {
      pPVar3 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)param_1);
      __s = "fly back";
    }
    std::string::string(asStack_40,__s);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinScarecrowBird::updateState_PickingUpPlant() */

void __thiscall
ZombiePumpkinScarecrowBird::updateState_PickingUpPlant(ZombiePumpkinScarecrowBird *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  ZombiePirateCaptainParrotProps *pZVar2;
  undefined8 *puVar3;
  long *plVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var5;
  float *pfVar6;
  long lVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  undefined8 local_28;
  float local_20;
  Vec3 aVStack_18 [16];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x820);
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombiePirateCaptainParrotProps>((Zombie *)this);
  fVar10 = *(float *)(pZVar2 + 0x210);
  fVar9 = (float)PVZ_Dt();
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_28 = *puVar3;
  local_20 = *(float *)(puVar3 + 1) + fVar10 * fVar9;
  (**(code **)(*(long *)this + 0x78))(this,&local_28);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pcVar8 = *(code **)(*plVar4 + 0x78);
    p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var5);
    fVar9 = *pfVar6;
    fVar10 = local_28._4_4_ - local_20;
    p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    lVar7 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var5);
    EATextSquish::Vec3::Vec3(aVStack_18,fVar9,fVar10,*(float *)(lVar7 + 8));
    (*pcVar8)(plVar4,aVStack_18);
  }
  if (local_28._4_4_ - local_20 <= -300.0) {
    Zombie::setZombieState((Zombie *)this,0x22,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePumpkinScarecrowBird::CollidesWithType(CollisionTypeFlags) const */

undefined8 __thiscall
ZombiePumpkinScarecrowBird::CollidesWithType(ZombiePumpkinScarecrowBird *this,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = Zombie::getZombieStateSerialization((Zombie *)this);
  if (((iVar1 != 0x21) &&
      (iVar1 = Zombie::getZombieStateSerialization((Zombie *)this), iVar1 != 0x22)) &&
     (iVar1 = Zombie::getZombieStateSerialization((Zombie *)this), iVar1 != 0x23)) {
    uVar2 = Zombie::CollidesWithType((Zombie *)this,param_2);
    return uVar2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinScarecrowBird::onTakeFatalDamage(DamageInfo const&) */

void ZombiePumpkinScarecrowBird::onTakeFatalDamage(DamageInfo *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onTakeFatalDamage(param_1);
  std::string::string(asStack_10,"Play_Bird_Explo");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePumpkinScarecrowBird::flyAway() */

void __thiscall ZombiePumpkinScarecrowBird::flyAway(ZombiePumpkinScarecrowBird *this)

{
  Zombie::setZombieState((Zombie *)this,0x24,0);
  return;
}


/* ZombiePumpkinScarecrowBird::onZombieInitialize() */

void __thiscall ZombiePumpkinScarecrowBird::onZombieInitialize(ZombiePumpkinScarecrowBird *this)

{
  *(undefined4 *)(this + 0x82c) = 0xffffffff;
  *(undefined4 *)(this + 0x828) = 0xffffffff;
  Zombie::SetIsFlying((Zombie *)this,true);
  Zombie::SetZombieScale((Zombie *)this,0.8);
  return;
}


/* ZombiePumpkinScarecrowBird::CalcRenderOrder() const */

void ZombiePumpkinScarecrowBird::CalcRenderOrder(void)

{
  Board::MakeRenderOrder(0x64960,*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0xfc),500);
  return;
}


/* non-virtual thunk to ZombiePumpkinScarecrowBird::CalcRenderOrder() const */

void __thiscall ZombiePumpkinScarecrowBird::CalcRenderOrder(ZombiePumpkinScarecrowBird *this)

{
  CalcRenderOrder();
  return;
}


/* ZombiePumpkinScarecrowBird::onEnterState_PickingUpPlant(ZombieState) */

void ZombiePumpkinScarecrowBird::onEnterState_PickingUpPlant(ZombiePumpkinScarecrowBird *param_1)

{
  SetTargetColAndRow(param_1,-1,-1);
  return;
}


/* ZombiePumpkinScarecrowBird::flyToScarecrow(Sexy::SexyVector3) */

void ZombiePumpkinScarecrowBird::flyToScarecrow
               (float param_1,float param_2,undefined4 param_3,ZombiePumpkinScarecrowBird *param_4)

{
  int iVar1;
  int iVar2;
  float local_10;
  float local_c;
  undefined4 local_8;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  iVar1 = BoardTransforms::BoardSpaceToGridX(param_1);
  iVar2 = BoardTransforms::BoardSpaceToGridY(local_c);
  SetTargetColAndRow(param_4,iVar1,iVar2);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x830),(SexyVector3 *)&local_10);
  Zombie::setZombieState((Zombie *)param_4,0x25,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinScarecrowBird::GetShadowScaling() const */

void __thiscall ZombiePumpkinScarecrowBird::GetShadowScaling(ZombiePumpkinScarecrowBird *this)

{
  float fVar1;
  char cVar2;
  long lVar3;
  float *pfVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  ulong uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float local_14;
  float local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Zombie::isInState((Zombie *)this,0x22);
  if (cVar2 == '\0') {
    lVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    fVar1 = DAT_06a88eb0;
    fVar8 = DAT_06a88eb0 - *(float *)(lVar3 + 8);
    local_10 = 0.0;
    local_14 = fVar8;
    pfVar4 = eastl::max_alt<float>(&local_14,&local_10);
    pfVar4 = eastl::min_alt<float>(pfVar4,&DAT_06a88eb0);
    fVar6 = *pfVar4;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    uVar7 = Sexy::SexyVector2::operator*((SexyVector2 *)(lVar3 + 0xe4),fVar6 / fVar1);
    uVar5 = CONCAT44(fVar8,uVar7);
  }
  else {
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
    uVar5 = CONCAT44(uStack_c,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5 & 0xffffffff,(int)(uVar5 >> 0x20));
}


/* ZombiePumpkinScarecrowBird::~ZombiePumpkinScarecrowBird() */

void __thiscall
ZombiePumpkinScarecrowBird::~ZombiePumpkinScarecrowBird(ZombiePumpkinScarecrowBird *this)

{
  *(undefined ***)this = &PTR_GetClass_06995af0;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePumpkinScarecrowBird_069965b8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x820));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x818));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombiePumpkinScarecrowBird::~ZombiePumpkinScarecrowBird() */

void __thiscall
ZombiePumpkinScarecrowBird::~ZombiePumpkinScarecrowBird(ZombiePumpkinScarecrowBird *this)

{
  ~ZombiePumpkinScarecrowBird(this + -0x10);
  return;
}


/* ZombiePumpkinScarecrowBird::~ZombiePumpkinScarecrowBird() */

void __thiscall
ZombiePumpkinScarecrowBird::~ZombiePumpkinScarecrowBird(ZombiePumpkinScarecrowBird *this)

{
  ~ZombiePumpkinScarecrowBird(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePumpkinScarecrowBird::~ZombiePumpkinScarecrowBird() */

void __thiscall
ZombiePumpkinScarecrowBird::~ZombiePumpkinScarecrowBird(ZombiePumpkinScarecrowBird *this)

{
  ~ZombiePumpkinScarecrowBird(this + -0x10);
  return;
}


/* ZombiePumpkinScarecrowBird::ZombiePumpkinScarecrowBird() */

void __thiscall
ZombiePumpkinScarecrowBird::ZombiePumpkinScarecrowBird(ZombiePumpkinScarecrowBird *this)

{
  undefined4 uVar1;
  
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06995af0;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePumpkinScarecrowBird_069965b8;
  ZombieCarnieDoveArtifact::ZombieCache::ZombieCache((ZombieCache *)(this + 0x800));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x818));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x820));
  *(undefined4 *)(this + 0x828) = 0xffffffff;
  *(undefined4 *)(this + 0x82c) = 0xffffffff;
  DVec3::DVec3((DVec3 *)(this + 0x830));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x83c) = uVar1;
  return;
}


/* ZombiePumpkinScarecrowBird::StaticNew() */

ZombiePumpkinScarecrowBird * ZombiePumpkinScarecrowBird::StaticNew(void)

{
  ZombiePumpkinScarecrowBird *this;
  
  this = ::operator_new(0x840);
  ZombiePumpkinScarecrowBird(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinScarecrowBird::onEnterState_DestroyingPlant(ZombieState) */

void ZombiePumpkinScarecrowBird::onEnterState_DestroyingPlant(ZombiePumpkinScarecrowBird *param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  int iVar2;
  int iVar3;
  Plant *pPVar4;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SetTargetColAndRow(param_1,-1,-1);
  iVar2 = BoardTransforms::BoardSpaceToGridX(*(float *)(param_1 + 0x800));
  iVar3 = BoardTransforms::BoardSpaceToGridX(*(float *)(param_1 + 0x804));
  cVar1 = FUN_04c95830(iVar2,iVar3);
  if (cVar1 != '\0') {
    Board::SetGridSquareLocked(*(Board **)(gLawnApp + 0x9f0),iVar2,iVar3,false);
  }
  this = (RtMixedPtrBase *)(param_1 + 0x820);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this);
    Plant::KillPlant(pPVar4,0,0,1);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinScarecrowBird::onApplyCondition(ZombieConditions) */

void __thiscall
ZombiePumpkinScarecrowBird::onApplyCondition(ZombiePumpkinScarecrowBird *this,int param_2)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_2 == 3) || (param_2 == 4)) {
    Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)0x0);
    Zombie::EndCondition((Zombie *)this,param_2);
  }
  else if (param_2 == 0x65) {
    iVar2 = BoardTransforms::BoardSpaceToGridX(*(float *)(this + 0x800));
    iVar3 = BoardTransforms::BoardSpaceToGridX(*(float *)(this + 0x804));
    cVar1 = FUN_04c95830(iVar2,iVar3);
    if (cVar1 != '\0') {
      Board::SetGridSquareLocked(*(Board **)(gLawnApp + 0x9f0),iVar2,iVar3,false);
    }
    this_00 = (RtMixedPtrBase *)(this + 0x820);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar4 + 0x78))(plVar4,this + 0x800);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      *(undefined4 *)(lVar5 + 200) = *(undefined4 *)(this + 0x80c);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      *(undefined4 *)(lVar5 + 0x110) = *(undefined4 *)(this + 0x810);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      FUN_04c95a4c(lVar5 + 0x50c);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_10);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinScarecrowBird::onEnterState_FlyToTarget(ZombieState) */

void ZombiePumpkinScarecrowBird::onEnterState_FlyToTarget(BoardEntity *param_1)

{
  int iVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  iVar1 = *(int *)(param_1 + 0x828);
  local_8 = ___stack_chk_guard;
  iVar2 = BoardEntity::CalcColumnPosition(param_1);
  if (iVar2 < iVar1) {
    Zombie::SetFacing((Zombie *)param_1,1);
  }
  else {
    Zombie::SetFacing((Zombie *)param_1,0);
  }
  pPVar3 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)param_1);
  std::string::string(asStack_40,"fly");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"Play_Parrot_WingFlap");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_40,0.0);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinScarecrowBird::findPlantTarget() */

void __thiscall ZombiePumpkinScarecrowBird::findPlantTarget(ZombiePumpkinScarecrowBird *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  TRect *pTVar5;
  Board *this_00;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = Zombie::isInState((Zombie *)this,0x1f);
  if (cVar3 != '\0') {
    iVar1 = *(int *)(this + 0x82c);
    iVar2 = *(int *)(this + 0x828);
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_18,"");
    plVar4 = (long *)Board::GetPlantAt(this_00,iVar2,iVar1,asStack_18);
    std::string::~string(asStack_18);
    nop();
    if (plVar4 == (long *)0x0) {
      Zombie::setZombieState((Zombie *)this,0x24,0);
      goto LAB_04c961fc;
    }
    (**(code **)(*(long *)this + 0x3a0))(asStack_18,this);
    pTVar5 = (TRect *)(**(code **)(*plVar4 + 0x178))(plVar4);
    cVar3 = Sexy::TRect<int>::Intersects((TRect<int> *)asStack_18,pTVar5);
    if (cVar3 != '\0') goto LAB_04c961fc;
  }
  plVar4 = (long *)0x0;
LAB_04c961fc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinScarecrowBird::updateState_AttachedToPlant() */

void __thiscall
ZombiePumpkinScarecrowBird::updateState_AttachedToPlant(ZombiePumpkinScarecrowBird *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  Plant *pPVar4;
  ZombiePirateCaptainParrotProps *pZVar5;
  long lVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  SexyVector3 *pSVar7;
  float fVar8;
  Point aPStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_20,*(int *)(this + 0x828),*(int *)(this + 0x82c));
  pickTarget((Point *)this);
  pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (pPVar4 != (Plant *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
    cVar1 = ZombiePirateCaptain::CanParrotPlant(aRStack_10);
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
    else {
      cVar1 = Plant::IsIgnoreControlAndDmg(pPVar4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      if (cVar1 == '\0') {
        fVar8 = (float)Zombie::getTimeInState((Zombie *)this);
        pZVar5 = Zombie::GetProps<ZombiePirateCaptainParrotProps>((Zombie *)this);
        if (*(float *)(pZVar5 + 0x214) < fVar8) {
          if (*(code **)(*(long *)pPVar4 + 0x1f8) == Plant::IsInPlantFoodState) {
            cVar1 = Plant::IsInPlantFoodState(pPVar4);
          }
          else {
            cVar1 = (**(code **)(*(long *)pPVar4 + 0x1f8))();
          }
          if (cVar1 == '\0') {
            this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x820);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      (this_00,(RtWeakPtrBase *)aRStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            *(undefined4 *)(this + 0x80c) = *(undefined4 *)(lVar6 + 200);
            this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            pSVar7 = (SexyVector3 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost(this_01);
            Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x800),pSVar7);
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            *(undefined4 *)(this + 0x810) = *(undefined4 *)(lVar6 + 0x110);
            iVar2 = BoardTransforms::BoardSpaceToGridX(*(float *)(this + 0x800));
            iVar3 = BoardTransforms::BoardSpaceToGridX(*(float *)(this + 0x804));
            cVar1 = FUN_04c95830(iVar2,iVar3);
            if (cVar1 != '\0') {
              Board::SetGridSquareLocked(*(Board **)(gLawnApp + 0x9f0),iVar2,iVar3,true);
            }
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            *(undefined4 *)(lVar6 + 200) = 3;
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            *(undefined4 *)(lVar6 + 0x110) = 0xffffffff;
            pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            Plant::StartExternalRemoval(pPVar4);
            Zombie::setZombieState((Zombie *)this,0x21,0);
          }
        }
        goto LAB_04c967ac;
      }
    }
  }
  Zombie::setZombieState((Zombie *)this,0x24,0);
LAB_04c967ac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinScarecrowBird::updateState_DestroyingPlant() */

void __thiscall
ZombiePumpkinScarecrowBird::updateState_DestroyingPlant(ZombiePumpkinScarecrowBird *this)

{
  char cVar1;
  ZombiePirateCaptainParrotProps *pZVar2;
  ResourceInfo *this_00;
  undefined8 *puVar3;
  float fVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar4 = (float)Zombie::getTimeInState((Zombie *)this);
  pZVar2 = Zombie::GetProps<ZombiePirateCaptainParrotProps>((Zombie *)this);
  if (*(float *)(pZVar2 + 0x218) < fVar4) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x818));
    if (cVar1 == '\0') {
      (**(code **)(*(long *)this + 0x48))(this);
    }
    else {
      this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x818));
      puVar3 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this_00);
      local_10 = *(undefined4 *)(puVar3 + 1);
      _local_18 = CONCAT44((int)((ulong)*puVar3 >> 0x20),0x44898000);
      (**(code **)(*(long *)this + 0x78))(this,&local_18);
      Zombie::setZombieState((Zombie *)this,0x24,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinScarecrowBird::moveToDestination(float, float) */

void __thiscall
ZombiePumpkinScarecrowBird::moveToDestination
          (ZombiePumpkinScarecrowBird *this,float param_1,float param_2)

{
  int iVar1;
  SexyVector3 *pSVar2;
  ZombiePirateCaptainParrotProps *pZVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  Vec3 aVStack_38 [16];
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  uVar6 = 0;
  fVar8 = *(float *)pSVar2;
  fVar7 = *(float *)(pSVar2 + 4);
  fVar5 = param_2 - fVar7;
  EATextSquish::Vec3::Vec3(aVStack_38,param_1 - fVar8,fVar5,0.0);
  local_28 = Sexy::SexyVector3::Normalize((SexyVector3 *)aVStack_38);
  local_24 = fVar5;
  local_20 = uVar6;
  fVar5 = (float)PVZ_Dt();
  pZVar3 = Zombie::GetProps<ZombiePirateCaptainParrotProps>((Zombie *)this);
  fVar4 = *(float *)(pZVar3 + 0x10);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  EATextSquish::Vec3::operator*=((Vec3 *)&local_28,fVar5 * fVar4 * (float)iVar1);
  DVec3::DVec3((DVec3 *)&local_18);
  Sexy::SexyVector3::operator=((SexyVector3 *)&local_18,pSVar2);
  EATextSquish::Vec3::operator+=((Vec3 *)&local_18,(Vec3 *)&local_28);
  (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
  if (param_1 <= fVar8) {
    if (*(float *)pSVar2 <= param_1) {
      iVar1 = 1;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_18,pSVar2);
      local_18 = param_1;
      (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
      goto LAB_04c96bc8;
    }
    if (param_1 < fVar8) goto LAB_04c96c10;
LAB_04c96b18:
    iVar1 = 1;
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_18,pSVar2);
    local_18 = param_1;
    (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
    fVar5 = *(float *)(pSVar2 + 4);
    if (param_2 <= fVar7) goto LAB_04c96b4c;
LAB_04c96bd4:
    if (fVar5 < param_2) goto LAB_04c96b5c;
  }
  else {
    if (param_1 <= *(float *)pSVar2) goto LAB_04c96b18;
LAB_04c96c10:
    iVar1 = 0;
LAB_04c96bc8:
    fVar5 = *(float *)(pSVar2 + 4);
    if (fVar7 < param_2) goto LAB_04c96bd4;
LAB_04c96b4c:
    if ((param_2 < fVar5) && (param_2 < fVar7)) goto LAB_04c96b5c;
  }
  iVar1 = iVar1 + 1;
  Sexy::SexyVector3::operator=((SexyVector3 *)&local_18,pSVar2);
  local_14 = param_2;
  (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
LAB_04c96b5c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinScarecrowBird::moveToDestination(Sexy::SexyVector3) */

void ZombiePumpkinScarecrowBird::moveToDestination
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_4)

{
  int iVar1;
  SexyVector3 *pSVar2;
  ZombiePirateCaptainParrotProps *pZVar3;
  float fVar4;
  float fVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  DVec3 aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_50 = param_1;
  local_4c = param_2;
  local_48 = param_3;
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_4);
  local_38 = Sexy::SexyVector3::operator-((SexyVector3 *)&local_50,pSVar2);
  local_34 = param_2;
  local_30 = param_3;
  local_28 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_38);
  local_24 = param_2;
  local_20 = param_3;
  fVar4 = (float)PVZ_Dt();
  pZVar3 = Zombie::GetProps<ZombiePirateCaptainParrotProps>((Zombie *)param_4);
  fVar5 = *(float *)(pZVar3 + 0x10);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  EATextSquish::Vec3::operator*=((Vec3 *)&local_28,fVar4 * fVar5 * (float)iVar1);
  DVec3::DVec3(aDStack_18);
  Sexy::SexyVector3::operator=((SexyVector3 *)aDStack_18,pSVar2);
  EATextSquish::Vec3::operator+=((Vec3 *)aDStack_18,(Vec3 *)&local_28);
  (**(code **)(*(long *)param_4 + 0x78))(param_4,aDStack_18);
  fVar4 = (float)DVec3::getLength((DVec3 *)&local_38);
  if (fVar4 <= 5.0) {
    Zombie::setZombieState((Zombie *)param_4,0x20,0);
    fVar4 = (float)DVec3::getLength((DVec3 *)&local_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar4 <= 2.0);
}


/* ZombiePumpkinScarecrowBird::updateState_FlyToTarget() */

void __thiscall
ZombiePumpkinScarecrowBird::updateState_FlyToTarget(ZombiePumpkinScarecrowBird *this)

{
  moveToDestination(*(undefined4 *)(this + 0x830),*(undefined4 *)(this + 0x834),
                    *(undefined4 *)(this + 0x838));
  (**(code **)(*(long *)this + 0xa08))(this);
  return;
}


/* ZombiePumpkinScarecrowBird::updateState_Returning() */

void __thiscall ZombiePumpkinScarecrowBird::updateState_Returning(ZombiePumpkinScarecrowBird *this)

{
  char cVar1;
  bool bVar2;
  ResourceInfo *this_00;
  undefined4 *puVar3;
  ZombiePVPPirateCaptain *this_01;
  ZombiePirateCaptain *this_02;
  
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x818));
  if ((this_00 != (ResourceInfo *)0x0) &&
     (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(), cVar1 == '\0')) {
    puVar3 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this_00);
    cVar1 = moveToDestination(*puVar3,puVar3[1],puVar3[2],this);
    if (cVar1 == '\0') {
      return;
    }
    bVar2 = Sexy::RtObject::IsA<ZombiePirateCaptain>((RtObject *)this_00);
    if (bVar2) {
      this_02 = Sexy::RtObject::Cast<ZombiePirateCaptain>((RtObject *)this_00);
      ZombiePirateCaptain::OnParrotReturned(this_02);
    }
    bVar2 = Sexy::RtObject::IsA<ZombiePVPPirateCaptain>((RtObject *)this_00);
    if (bVar2) {
      this_01 = Sexy::RtObject::Cast<ZombiePVPPirateCaptain>((RtObject *)this_00);
      ZombiePVPPirateCaptain::OnParrotReturned(this_01);
    }
    (**(code **)(*(long *)this + 0x48))(this);
    return;
  }
  OnCaptainDied(this);
  return;
}


/* ZombiePumpkinScarecrowBird::updateState_FlyToScarecrow() */

void __thiscall
ZombiePumpkinScarecrowBird::updateState_FlyToScarecrow(ZombiePumpkinScarecrowBird *this)

{
  moveToDestination(*(undefined4 *)(this + 0x830),*(undefined4 *)(this + 0x834),
                    *(undefined4 *)(this + 0x838));
  return;
}


/* ZombiePumpkinScarecrowBird::onPlaceOnBoard() */

void __thiscall ZombiePumpkinScarecrowBird::onPlaceOnBoard(ZombiePumpkinScarecrowBird *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x83c) = fVar1 + 5.0;
  if (1 < *(int *)(this + 0x50)) {
    (**(code **)(*(long *)this + 0x430))(this,0);
  }
  MessageRouter::Post<Zombie*,ZombiePumpkinScarecrowBird*>
            ((MessageRouter *)gMessageRouter,Message::ZombieAddedToBoard,this);
  Zombie::setZombieState((Zombie *)this,0x24,0);
  return;
}


/* ZombiePumpkinScarecrowBird::onElectrocuted() */

void __thiscall ZombiePumpkinScarecrowBird::onElectrocuted(ZombiePumpkinScarecrowBird *this)

{
  MessageRouter::Broadcast<Zombie*,ZombiePumpkinScarecrowBird*>
            ((MessageRouter *)gMessageRouter,Message::ZombieElectrified,this);
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinScarecrowBird::findNewTargetAndFlyTo() */

void __thiscall ZombiePumpkinScarecrowBird::findNewTargetAndFlyTo(ZombiePumpkinScarecrowBird *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  Plant *this_00;
  SexyVector3 *pSVar8;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,1);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  FUN_04c97d90(uVar5,uVar6,this);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar1) {
LAB_04c97f20:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar7);
    if (this_00 != (Plant *)0x0) {
      if (((-1 < *(int *)(this_00 + 0x110)) &&
          (*(int *)(this_00 + 0x110) < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc))) &&
         (iVar3 = (**(code **)(*(long *)this_00 + 0x180))(), 1 < iVar3)) {
        cVar2 = Plant::IsInvincible(this_00,false);
        if (cVar2 == '\0') {
          iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
          iVar4 = SharkMinion::getRow((SharkMinion *)this_00);
          SetTargetColAndRow(this,iVar3,iVar4);
          pSVar8 = (SexyVector3 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)this_00);
          Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x830),pSVar8);
          Zombie::setZombieState((Zombie *)this,0x1f,0);
          goto LAB_04c97f20;
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinScarecrowBird::updateState_FlyingAway() */

void __thiscall ZombiePumpkinScarecrowBird::updateState_FlyingAway(ZombiePumpkinScarecrowBird *this)

{
  ZombiePirateCaptainParrotProps *pZVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetProps<ZombiePirateCaptainParrotProps>((Zombie *)this);
  fVar4 = *(float *)(pZVar1 + 0x210);
  fVar3 = (float)PVZ_Dt();
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_18 = *puVar2;
  local_10 = *(float *)(puVar2 + 1) + fVar4 * fVar3;
  (**(code **)(*(long *)this + 0x78))(this,&local_18);
  if (local_18._4_4_ - local_10 <= -300.0) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  findNewTargetAndFlyTo(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinScarecrowBird::StaticClassInit() */

void ZombiePumpkinScarecrowBird::StaticClassInit(void)

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
      std::string::string(asStack_150,"PlantCache");
      (*pcVar5)(plVar2,asStack_150,FUN_04c9624c,0x14,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar5 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_150,"ZombiePumpkinScarecrowBird");
    (*pcVar5)(plVar2,asStack_150,FUN_04c98704,0x840,0);
    std::string::~string(asStack_150);
    nop();
  }
  this = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance();
  pRVar3 = (RtClass *)StaticGetClass();
  pSVar4 = StateMachineTableBuilder::RegisterClass<ZombieState>(this,pRVar3);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinScarecrowBird,void(ZombiePumpkinScarecrowBird::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate0::Delegate0<ZombiePumpkinScarecrowBird,void(ZombiePumpkinScarecrowBird::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinScarecrowBird,void(ZombiePumpkinScarecrowBird::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PUMPKIN_SCARECROW_BIRD_FlyToTarget");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04c98024(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinScarecrowBird,void(ZombiePumpkinScarecrowBird::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate0::Delegate0<ZombiePumpkinScarecrowBird,void(ZombiePumpkinScarecrowBird::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinScarecrowBird,void(ZombiePumpkinScarecrowBird::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PUMPKIN_SCARECROW_BIRD_AttachedToPlant");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04c98024(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinScarecrowBird,void(ZombiePumpkinScarecrowBird::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate0::Delegate0<ZombiePumpkinScarecrowBird,void(ZombiePumpkinScarecrowBird::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinScarecrowBird,void(ZombiePumpkinScarecrowBird::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PUMPKIN_SCARECROW_BIRD_PickingUpPlant");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04c98024(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinScarecrowBird,void(ZombiePumpkinScarecrowBird::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate0::Delegate0<ZombiePumpkinScarecrowBird,void(ZombiePumpkinScarecrowBird::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinScarecrowBird,void(ZombiePumpkinScarecrowBird::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PUMPKIN_SCARECROW_BIRD_DestroyingPlant");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04c98024(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa70);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinScarecrowBird,void(ZombiePumpkinScarecrowBird::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa78);
  Sexy::Delegate0::Delegate0<ZombiePumpkinScarecrowBird,void(ZombiePumpkinScarecrowBird::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa80);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinScarecrowBird,void(ZombiePumpkinScarecrowBird::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PUMPKIN_SCARECROW_BIRD_Returning");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04c98024(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa88);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinScarecrowBird,void(ZombiePumpkinScarecrowBird::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa90);
  Sexy::Delegate0::Delegate0<ZombiePumpkinScarecrowBird,void(ZombiePumpkinScarecrowBird::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa98);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinScarecrowBird,void(ZombiePumpkinScarecrowBird::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PUMPKIN_SCARECROW_BIRD_FlyingAway");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x24,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04c98024(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xaa0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinScarecrowBird,void(ZombiePumpkinScarecrowBird::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xaa8);
  Sexy::Delegate0::Delegate0<ZombiePumpkinScarecrowBird,void(ZombiePumpkinScarecrowBird::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xab0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinScarecrowBird,void(ZombiePumpkinScarecrowBird::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PUMPKIN_SCARECROW_BIRD_FlyToScarecrow");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x25,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04c98024(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombiePumpkinScarecrowBird::StaticGetClass() */

long * ZombiePumpkinScarecrowBird::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePumpkinScarecrowBird",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePumpkinScarecrowBird::GetClass() const */

long * ZombiePumpkinScarecrowBird::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePumpkinScarecrowBird",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinScarecrowBird::onUpdate() */

void __thiscall ZombiePumpkinScarecrowBird::onUpdate(ZombiePumpkinScarecrowBird *this)

{
  int iVar1;
  string *psVar2;
  float fVar3;
  float fVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onUpdate((Zombie *)this);
  fVar4 = *(float *)(this + 0x83c);
  fVar3 = (float)PVZ_T();
  if (fVar4 < fVar3) {
    fVar3 = (float)PVZ_T();
    *(float *)(this + 0x83c) = fVar3 + 5.0;
    psVar2 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    iVar1 = (**(code **)(*(long *)this + 0x300))(this,3);
    Sexy::StrFormat("pumpkin_knight_bird_%d",asStack_10,(ulong)(iVar1 + 1));
    AudioMgr::SendEvent(psVar2,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinScarecrowBird::onDestroy() */

void __thiscall ZombiePumpkinScarecrowBird::onDestroy(ZombiePumpkinScarecrowBird *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  Plant *this_01;
  Board *this_02;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = BoardTransforms::BoardSpaceToGridX(*(float *)(this + 0x800));
  iVar3 = BoardTransforms::BoardSpaceToGridX(*(float *)(this + 0x804));
  cVar1 = FUN_04c95830(iVar2,iVar3);
  if (cVar1 != '\0') {
    this_02 = *(Board **)(gLawnApp + 0x9f0);
    iVar4 = BoardTransforms::BoardSpaceToGridX(*(float *)(this + 0x800));
    iVar5 = BoardTransforms::BoardSpaceToGridY(*(float *)(this + 0x804));
    Board::SetGridSquareLocked(this_02,iVar4,iVar5,false);
  }
  this_00 = (RtMixedPtrBase *)(this + 0x820);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar6 + 0x78))(plVar6,this + 0x800);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    *(undefined4 *)(lVar7 + 200) = *(undefined4 *)(this + 0x80c);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    *(undefined4 *)(lVar7 + 0x110) = *(undefined4 *)(this + 0x810);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    FUN_04c95a4c(lVar7 + 0x50c);
    this_01 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Plant::SetGridLoc(this_01,iVar2,iVar3);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    *(undefined1 *)(lVar7 + 0x118) = 1;
  }
  Zombie::onDestroy((Zombie *)this);
  std::string::string(asStack_10,"Stop_Parrot_WingFlap");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

