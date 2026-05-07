// Class: ZombieHeianNinja


/* ZombieHeianNinja::updateState_HangEat() */

void __thiscall ZombieHeianNinja::updateState_HangEat(ZombieHeianNinja *this)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0x228))();
  if (lVar1 != 0) {
    (**(code **)(*(long *)this + 0x958))(this,lVar1);
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x25);
  return;
}


/* ZombieHeianNinja::onHangCutCompleted(std::string const&) */

void ZombieHeianNinja::onHangCutCompleted(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)param_1,1);
  return;
}


/* ZombieHeianNinja::onThrowSushi(std::string const&) */

void ZombieHeianNinja::onThrowSushi(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)param_1,1);
  return;
}


/* ZombieHeianNinja::onZombieInitialize() */

void __thiscall ZombieHeianNinja::onZombieInitialize(ZombieHeianNinja *this)

{
  Zombie::onZombieInitialize((Zombie *)this);
  *(undefined4 *)(this + 0x81c) = 0;
  return;
}


/* ZombieHeianNinja::onHangStartCompleted(std::string const&) */

void ZombieHeianNinja::onHangStartCompleted(string *param_1)

{
  Zombie::SetIsControlled((Zombie *)param_1,false);
  Zombie::setZombieState((Zombie *)param_1,0x25,0);
  return;
}


/* ZombieHeianNinja::~ZombieHeianNinja() */

void __thiscall ZombieHeianNinja::~ZombieHeianNinja(ZombieHeianNinja *this)

{
  *(undefined ***)this = &PTR_GetClass_067683c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieHeianNinja_06768f18;
  ZombieImp::~ZombieImp((ZombieImp *)this);
  return;
}


/* non-virtual thunk to ZombieHeianNinja::~ZombieHeianNinja() */

void __thiscall ZombieHeianNinja::~ZombieHeianNinja(ZombieHeianNinja *this)

{
  ~ZombieHeianNinja(this + -0x10);
  return;
}


/* ZombieHeianNinja::~ZombieHeianNinja() */

void __thiscall ZombieHeianNinja::~ZombieHeianNinja(ZombieHeianNinja *this)

{
  ~ZombieHeianNinja(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieHeianNinja::~ZombieHeianNinja() */

void __thiscall ZombieHeianNinja::~ZombieHeianNinja(ZombieHeianNinja *this)

{
  ~ZombieHeianNinja(this + -0x10);
  return;
}


/* ZombieHeianNinja::ZombieHeianNinja() */

void __thiscall ZombieHeianNinja::ZombieHeianNinja(ZombieHeianNinja *this)

{
  undefined4 uVar1;
  
  ZombieImp::ZombieImp((ZombieImp *)this);
  *(undefined ***)this = &PTR_GetClass_067683c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieHeianNinja_06768f18;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x818) = uVar1;
  *(undefined4 *)(this + 0x81c) = uVar1;
  return;
}


/* ZombieHeianNinja::StaticNew() */

ZombieHeianNinja * ZombieHeianNinja::StaticNew(void)

{
  ZombieHeianNinja *this;
  
  this = ::operator_new(0x820);
  ZombieHeianNinja(this);
  return this;
}


/* ZombieHeianNinja::CollidesWithType(CollisionTypeFlags) const */

undefined8 __thiscall ZombieHeianNinja::CollidesWithType(ZombieHeianNinja *this,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = Zombie::getZombieStateSerialization((Zombie *)this);
  if ((iVar2 != 0x27) && (cVar1 = FUN_03d34694(*(undefined4 *)(this + 0x28)), cVar1 == '\0')) {
    uVar3 = Zombie::CollidesWithType((Zombie *)this,param_2);
    return uVar3;
  }
  return 0;
}


/* ZombieHeianNinja::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieHeianNinja::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"throw");
  if (bVar1) {
    (**(code **)(*(long *)param_1 + 0xb40))(param_1);
  }
  return;
}


/* ZombieHeianNinja::updateState_HangIdle() */

void __thiscall ZombieHeianNinja::updateState_HangIdle(ZombieHeianNinja *this)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  
  lVar1 = (**(code **)(*(long *)this + 0x228))();
  if (lVar1 != 0) {
    Zombie::setZombieState((Zombie *)this,0x26,0);
    return;
  }
  fVar2 = (float)PVZ_T();
  if (fVar2 < *(float *)(this + 0x818)) {
    return;
  }
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x818) = uVar3;
  Zombie::setZombieState((Zombie *)this,0x27,0);
  return;
}


/* ZombieHeianNinja::immediatelyCutDown() */

void __thiscall ZombieHeianNinja::immediatelyCutDown(ZombieHeianNinja *this)

{
  int iVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  
  iVar1 = Zombie::getZombieStateSerialization((Zombie *)this);
  if (1 < iVar1 - 0x25U) {
    return;
  }
  Zombie::SetIsFlying((Zombie *)this,false);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  FUN_03d33c20(pZVar2 + 0x240,0);
  Zombie::setZombieState((Zombie *)this,1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHeianNinja::OnBeforeBlown(BoardEntity*) */

void __thiscall ZombieHeianNinja::OnBeforeBlown(ZombieHeianNinja *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)param_1);
    if (bVar1) {
      Plant::GetType();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      bVar1 = std::operator==((string *)(lVar3 + 8),"blover");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if (bVar1) {
        cVar2 = Zombie::IsFlying((Zombie *)this);
        if (cVar2 != '\0') {
          Zombie::setZombieState((Zombie *)this,0x27,0);
        }
        goto LAB_03d34aec;
      }
    }
  }
  immediatelyCutDown(this);
LAB_03d34aec:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieHeianNinja::onMowedDown() */

void __thiscall ZombieHeianNinja::onMowedDown(ZombieHeianNinja *this)

{
  ZombieHydraHeadAnimRig *pZVar1;
  
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  FUN_03d33c20(pZVar1 + 0x240,0);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  (**(code **)(*(long *)pZVar1 + 0x148))();
  return;
}


/* ZombieHeianNinja::allowAshState() const */

byte __thiscall ZombieHeianNinja::allowAshState(ZombieHeianNinja *this)

{
  byte bVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  bVar1 = FUN_03d33c28(pZVar2[0x240]);
  return bVar1 ^ 1;
}


/* ZombieHeianNinja::onEnterState_HangEat(ZombieState) */

void ZombieHeianNinja::onEnterState_HangEat(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_LostCityLostPilot::PlayHangEat((ZombieAnimRig_LostCityLostPilot *)this);
  PVZ_T();
  FUN_03d33c18(param_1 + 200);
  return;
}


/* ZombieHeianNinja::onEnterState_HangIdle(ZombieState) */

void ZombieHeianNinja::onEnterState_HangIdle(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  ZombieHeianNinjaProps *pZVar1;
  float fVar2;
  
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_LostCityLostPilot::PlayHangIdle((ZombieAnimRig_LostCityLostPilot *)this);
  pZVar1 = Zombie::GetProps<ZombieHeianNinjaProps>(param_1);
  fVar2 = (float)PVZ_T();
  *(float *)(param_1 + 0x818) = fVar2 + *(float *)(pZVar1 + 0x214);
  return;
}


/* ZombieHeianNinja::calcRangedTargetGridRect() */

void ZombieHeianNinja::calcRangedTargetGridRect(void)

{
  Zombie *in_x0;
  ZombieHeianNinjaProps *pZVar1;
  Insets *in_x8;
  
  pZVar1 = Zombie::GetProps<ZombieHeianNinjaProps>(in_x0);
  Sexy::Insets::Insets
            (in_x8,*(int *)(pZVar1 + 0x230),0,*(int *)(pZVar1 + 0x234) - *(int *)(pZVar1 + 0x230),1)
  ;
  return;
}


/* ZombieHeianNinja::CalcZombieAttackRect() */

void ZombieHeianNinja::CalcZombieAttackRect(void)

{
  char cVar1;
  Zombie *in_x0;
  ZombieHeianNinjaProps *pZVar2;
  long in_x8;
  
  Zombie::CalcZombieAttackRect();
  cVar1 = Zombie::isInState(in_x0,0x25);
  if ((cVar1 == '\0') && (cVar1 = Zombie::isInState(in_x0,0x26), cVar1 == '\0')) {
    return;
  }
  pZVar2 = Zombie::GetProps<ZombieHeianNinjaProps>(in_x0);
  *(int *)(in_x8 + 4) = *(int *)(in_x8 + 4) + *(int *)(pZVar2 + 0x210);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHeianNinja::onEnterState_HangStart(ZombieState) */

void ZombieHeianNinja::onEnterState_HangStart(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsFlying(param_1,true);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  FUN_03d33c20(pZVar1 + 0x240,1);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onHangStartCompleted");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_LostCityLostPilot::PlayHangStart
            ((ZombieAnimRig_LostCityLostPilot *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Zombie::SetIsControlled(param_1,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHeianNinja::onEnterState_HangCut(ZombieState) */

void ZombieHeianNinja::onEnterState_HangCut(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  undefined1 auVar2 [16];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsFlying(param_1,false);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  FUN_03d33c20(pZVar1 + 0x240,0);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onHangCutCompleted");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ImpPorter::PlaySpawnTent((ZombieAnimRig_ImpPorter *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  auVar2 = PVZ_EOT();
  Zombie::ApplyCondition((Zombie *)auVar2,0,param_1,0x2b,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHeianNinja::onEnterState_ThrowSushi(ZombieState) */

void ZombieHeianNinja::onEnterState_ThrowSushi(Zombie *param_1)

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
  std::string::string(asStack_58,"onThrowSushi");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_HeianNinja::PlayThrowSushi((ZombieAnimRig_HeianNinja *)pZVar1,aRStack_50);
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
/* ZombieHeianNinja::throwSushi() */

void ZombieHeianNinja::throwSushi(void)

{
  int iVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  RtObject *this;
  PlantGroup *this_00;
  ResourceInfo *pRVar3;
  SexyVector3 *pSVar4;
  ZombieHeianNinjaProps *pZVar5;
  Projectile *this_01;
  long lVar6;
  float *pfVar7;
  code *pcVar8;
  undefined8 uVar9;
  float fVar10;
  Board *pBVar11;
  float local_30 [4];
  undefined4 local_20 [2];
  float local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar8 = *(code **)(*(long *)in_x0 + 0x1f8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  this = (RtObject *)(*pcVar8)();
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             local_20);
  if (this != (RtObject *)0x0) {
    this_00 = Sexy::RtObject::Cast<PlantGroup>(this);
    PlantGroup::GetTopPlant(this_00);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
    if (pRVar3 != (ResourceInfo *)0x0) {
      pSVar4 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(in_x0);
      pZVar5 = Zombie::GetProps<ZombieHeianNinjaProps>((Zombie *)in_x0);
      pBVar11 = (Board *)Sexy::SexyVector3::operator+(pSVar4,(SexyVector3 *)(pZVar5 + 0x218));
      uVar9 = *(undefined8 *)(gLawnApp + 0x9f0);
      pZVar5 = Zombie::GetProps<ZombieHeianNinjaProps>((Zombie *)in_x0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_20,(RtWeakPtrBase *)(pZVar5 + 0x228));
      this_01 = (Projectile *)
                Board::AddProjectile
                          (pBVar11,uVar9,
                           (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20
                          );
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
      if (this_01 != (Projectile *)0x0) {
        pSVar4 = (SexyVector3 *)Projectile::GetVelocity(this_01);
        fVar10 = (float)Zombie::GetFacingMultiplier((Zombie *)in_x0);
        local_30[0] = (float)Sexy::SexyVector3::operator*(pSVar4,fVar10);
        local_20[0] = Sexy::SexyVector3::operator*((SexyVector3 *)local_30,-1.0);
        Projectile::SetVelocity(this_01,(SexyVector3 *)local_20);
        iVar1 = Zombie::GetFacing((Zombie *)in_x0);
        FUN_03d33c10(this_01 + 0xd4,iVar1 == 0);
        iVar1 = BoardTransforms::GridToBoardSpaceX(*(int *)(pRVar3 + 0x114));
        iVar2 = BoardTransforms::GridToBoardSpaceY(*(int *)(pRVar3 + 0x110));
        EATextSquish::Vec3::Vec3((Vec3 *)local_20,(float)iVar1,(float)iVar2,0.0);
        lVar6 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)this_01);
        local_30[0] = *(float *)(lVar6 + 8) + 200.0;
        pfVar7 = eastl::max_alt<float>(local_30,local_18);
        Projectile::LaunchAt(this_01,(SexyVector3 *)local_20,*pfVar7,1.0);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHeianNinja::updateState_Walk() */

void __thiscall ZombieHeianNinja::updateState_Walk(ZombieHeianNinja *this)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  ZombieHeianNinjaProps *pZVar4;
  long lVar5;
  code *pcVar6;
  float fVar7;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03d34694(*(undefined4 *)(this + 0x28));
  if (cVar1 == '\0') {
    fVar7 = (float)PVZ_T();
    if (*(float *)(this + 0x81c) <= fVar7) {
      pcVar6 = *(code **)(*(long *)this + 0x1f8);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      plVar3 = (long *)(*pcVar6)(this,avStack_20);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              avStack_20);
      if ((plVar3 != (long *)0x0) && (iVar2 = (**(code **)(*plVar3 + 0x180))(plVar3), 1 < iVar2)) {
        Zombie::setZombieState((Zombie *)this,0x29,0);
        fVar7 = (float)PVZ_T();
        pZVar4 = Zombie::GetProps<ZombieHeianNinjaProps>((Zombie *)this);
        *(float *)(this + 0x81c) = fVar7 + *(float *)(pZVar4 + 0x238);
        goto LAB_03d35af4;
      }
    }
    lVar5 = (**(code **)(*(long *)this + 0x228))(this);
    if (lVar5 != 0) {
      Zombie::setZombieState((Zombie *)this,2,0);
    }
  }
LAB_03d35af4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHeianNinja::StaticClassInit() */

void ZombieHeianNinja::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieHeianNinja");
      (*pcVar4)(plVar1,asStack_150,FUN_03d369a8,0x820,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xab0);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieHeianNinja,void(ZombieHeianNinja::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xab8);
  Sexy::Delegate0::Delegate0<ZombieHeianNinja,void(ZombieHeianNinja::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xac0);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieHeianNinja,void(ZombieHeianNinja::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_HN_HangStart");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x24,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03d363d8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xac8);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieHeianNinja,void(ZombieHeianNinja::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xad0);
  Sexy::Delegate0::Delegate0<ZombieHeianNinja,void(ZombieHeianNinja::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xad8);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieHeianNinja,void(ZombieHeianNinja::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_HN_HangIdle");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x25,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03d363d8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xae0);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieHeianNinja,void(ZombieHeianNinja::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xae8);
  Sexy::Delegate0::Delegate0<ZombieHeianNinja,void(ZombieHeianNinja::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xaf0);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieHeianNinja,void(ZombieHeianNinja::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_HN_HangEat");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x26,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03d363d8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xaf8);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieHeianNinja,void(ZombieHeianNinja::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb00);
  Sexy::Delegate0::Delegate0<ZombieHeianNinja,void(ZombieHeianNinja::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb08);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieHeianNinja,void(ZombieHeianNinja::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_HN_HangCut");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x27,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03d363d8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb10);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieHeianNinja,void(ZombieHeianNinja::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb18);
  Sexy::Delegate0::Delegate0<ZombieHeianNinja,void(ZombieHeianNinja::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieHeianNinja,void(ZombieHeianNinja::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_HN_HangBleed");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x28,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03d363d8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb28);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieHeianNinja,void(ZombieHeianNinja::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb30);
  Sexy::Delegate0::Delegate0<ZombieHeianNinja,void(ZombieHeianNinja::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieHeianNinja,void(ZombieHeianNinja::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_HN_ThrowSushi");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x29,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03d363d8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieHeianNinja::StaticGetClass() */

long * ZombieHeianNinja::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieHeianNinja",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieHeianNinja::GetClass() const */

long * ZombieHeianNinja::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieHeianNinja",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

