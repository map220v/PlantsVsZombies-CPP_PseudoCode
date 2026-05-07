// Class: ThrowZombieProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThrowZombieProjectile::StaticClassInit() */

void ThrowZombieProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ThrowZombieProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_043519b0,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ThrowZombieProjectile::StaticGetClass() */

long * ThrowZombieProjectile::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"ThrowZombieProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ThrowZombieProjectile::GetClass() const */

long * ThrowZombieProjectile::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"ThrowZombieProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ThrowZombieProjectile::ThrowZombieProjectile() */

void __thiscall ThrowZombieProjectile::ThrowZombieProjectile(ThrowZombieProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_068341b0;
  *(undefined ***)(this + 0x10) = &PTR__ThrowZombieProjectile_068343a0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  return;
}


/* ThrowZombieProjectile::StaticNew() */

ThrowZombieProjectile * ThrowZombieProjectile::StaticNew(void)

{
  ThrowZombieProjectile *this;
  
  this = ::operator_new(0x1b0);
  ThrowZombieProjectile(this);
  return this;
}


/* ThrowZombieProjectile::DestroyHaloEffect() */

void __thiscall ThrowZombieProjectile::DestroyHaloEffect(ThrowZombieProjectile *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x1a8);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 == '\0') {
    return;
  }
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  (**(code **)(*plVar2 + 0x48))();
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* ThrowZombieProjectile::~ThrowZombieProjectile() */

void __thiscall ThrowZombieProjectile::~ThrowZombieProjectile(ThrowZombieProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_068341b0;
  *(undefined ***)(this + 0x10) = &PTR__ThrowZombieProjectile_068343a0;
  DestroyHaloEffect(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ThrowZombieProjectile::~ThrowZombieProjectile() */

void __thiscall ThrowZombieProjectile::~ThrowZombieProjectile(ThrowZombieProjectile *this)

{
  ~ThrowZombieProjectile(this + -0x10);
  return;
}


/* ThrowZombieProjectile::~ThrowZombieProjectile() */

void __thiscall ThrowZombieProjectile::~ThrowZombieProjectile(ThrowZombieProjectile *this)

{
  ~ThrowZombieProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ThrowZombieProjectile::~ThrowZombieProjectile() */

void __thiscall ThrowZombieProjectile::~ThrowZombieProjectile(ThrowZombieProjectile *this)

{
  ~ThrowZombieProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThrowZombieProjectile::UpdateHaloEffect() */

void __thiscall ThrowZombieProjectile::UpdateHaloEffect(ThrowZombieProjectile *this)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  StandaloneEffect *this_00;
  float fVar4;
  float fVar5;
  FastCurve aFStack_38 [8];
  FastCurve aFStack_30 [8];
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1a8));
  if (cVar1 != '\0') {
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    Sexy::FastCurve::SetOutRange(aFStack_38,*pfVar3,pfVar3[1] + 5.0);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,30.0,-30.0,0.0);
    fVar4 = (float)FUN_043511f4(local_18);
    fVar5 = (float)FUN_043511f4(local_14 - local_10);
    Sexy::FastCurve::SetOutRange(aFStack_30,fVar4,fVar5);
    fVar4 = (float)FUN_043511f4(0x3f800000);
    local_28 = Sexy::SexyVector2::operator*((SexyVector2 *)aFStack_38,fVar4);
    local_24 = fVar5;
    this_00 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
    local_20 = Sexy::SexyVector2::operator+((SexyVector2 *)&local_28,(SexyVector2 *)aFStack_30);
    local_1c = fVar5;
    iVar2 = (**(code **)(*(long *)this + 200))(this);
    StandaloneEffect::SetScreenSpaceOrigin(this_00,(SexyVector2 *)&local_20,iVar2 + 1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThrowZombieProjectile::onUpdate(float) */

void ThrowZombieProjectile::onUpdate(float param_1)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  StandaloneEffect *this;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float fVar4;
  float fVar5;
  FastCurve aFStack_38 [8];
  FastCurve aFStack_30 [8];
  undefined4 uStack_28;
  float fStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  float fStack_14;
  float fStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0x1a8));
  if (cVar1 != '\0') {
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(in_x0);
    Sexy::FastCurve::SetOutRange(aFStack_38,*pfVar3,pfVar3[1] + 5.0);
    EATextSquish::Vec3::Vec3((Vec3 *)&uStack_18,30.0,-30.0,0.0);
    fVar4 = (float)FUN_043511f4(uStack_18);
    fVar5 = (float)FUN_043511f4(fStack_14 - fStack_10);
    Sexy::FastCurve::SetOutRange(aFStack_30,fVar4,fVar5);
    fVar4 = (float)FUN_043511f4(0x3f800000);
    uStack_28 = Sexy::SexyVector2::operator*((SexyVector2 *)aFStack_38,fVar4);
    fStack_24 = fVar5;
    this = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x1a8));
    uStack_20 = Sexy::SexyVector2::operator+((SexyVector2 *)&uStack_28,(SexyVector2 *)aFStack_30);
    fStack_1c = fVar5;
    iVar2 = (**(code **)(*(long *)in_x0 + 200))();
    StandaloneEffect::SetScreenSpaceOrigin(this,(SexyVector2 *)&uStack_20,iVar2 + 1);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThrowZombieProjectile::CreateHaloEffect() */

void __thiscall ThrowZombieProjectile::CreateHaloEffect(ThrowZombieProjectile *this)

{
  char cVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1a8));
  if (cVar1 != '\0') {
    DestroyHaloEffect(this);
  }
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  Effect_PopAnim::SetCentered(this_00,true);
  std::string::string(asStack_18,"POPANIM_EFFECTS_BROCCOLI_BULLET");
  GetPAMByName(asStack_18);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string((string *)aRStack_10,"idle");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this_00,aRStack_10,0);
  std::string::~string((string *)aRStack_10);
  nop();
  if (this_00 != (Effect_PopAnim *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1a8),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThrowZombieProjectile::SetAttachedZombiePAM(Sexy::RtWeakPtr<Zombie>, Sexy::SexyVector2) */

void ThrowZombieProjectile::SetAttachedZombiePAM
               (undefined4 param_1,undefined4 param_2,ThrowZombieProjectile *param_3,
               RtWeakPtr<Sexy::ResourceInfo> *param_4)

{
  RtMixedPtrBase *this;
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  Zombie *pZVar4;
  long lVar5;
  PopAnim *pPVar6;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RechargeRewardConfig *this_01;
  undefined8 uVar7;
  char *pcVar8;
  RtClass *pRVar9;
  RtObject *this_02;
  ZombieAnimRig *this_03;
  ZombieAnimRig_Basic *pZVar10;
  long *plVar11;
  code *pcVar12;
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_4);
  this = (RtMixedPtrBase *)(param_3 + 0x38);
  lVar5 = Zombie::GetAnimRig(pZVar4);
  pPVar6 = (PopAnim *)FUN_043511ec(*(undefined8 *)(lVar5 + 0x20));
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this);
    (**(code **)(*plVar11 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this);
  if (pPVar6 != (PopAnim *)0x0) {
    pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_4);
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar4);
    this_01 = (RechargeRewardConfig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    uVar7 = RechargeRewardConfig::getDefaultBanner(this_01);
    FUN_05475d88(asStack_48,uVar7);
    pcVar8 = (char *)FUN_0547429c(asStack_48);
    pRVar9 = (RtClass *)Sexy::RtClass::StaticGetClassNamed(pcVar8);
    this_02 = (RtObject *)PopAnimRig::CreateRig(pPVar6,pRVar9);
    if (this_02 != (RtObject *)0x0) {
      bVar2 = Sexy::RtObject::IsA<ZombieAnimRig>(this_02);
      if (bVar2) {
        this_03 = Sexy::RtObject::Cast<ZombieAnimRig>(this_02);
        (**(code **)(*(long *)this_03 + 0x1e0))(asStack_40);
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
        PopAnimRig::PlayAndContinue((PopAnimRig *)this_03,asStack_40,3,aDStack_38);
        std::string::~string(asStack_40);
        uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_4);
        cVar1 = Zombie::HasCondition(uVar7,3);
        if (cVar1 != '\0') {
          ZombieAnimRig::SetButterVisibility(this_03,true);
        }
        pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_4);
        cVar1 = Zombie::HasArm(pZVar4);
        if (cVar1 == '\0') {
          (**(code **)(*(long *)this_03 + 0x1b0))(this_03);
        }
      }
      bVar2 = Sexy::RtObject::IsA<ZombieAnimRig_Basic>(this_02);
      if ((bVar2) &&
         (pZVar10 = Sexy::RtObject::Cast<ZombieAnimRig_Basic>(this_02),
         pZVar10 != (ZombieAnimRig_Basic *)0x0)) {
        pcVar12 = *(code **)(*(long *)pZVar10 + 0x268);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_4);
        uVar3 = FUN_043511f0(*(undefined4 *)(lVar5 + 0xb0));
        (*pcVar12)(pZVar10,uVar3);
        (**(code **)(*(long *)pZVar10 + 0x1f8))(pZVar10);
      }
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)asStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
    *(ulong *)(param_3 + 0x40) = CONCAT44(param_2,param_1);
    CreateHaloEffect(param_3);
    std::string::~string(asStack_48);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

