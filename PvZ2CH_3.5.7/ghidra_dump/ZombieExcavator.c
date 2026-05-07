// Class: ZombieExcavator


/* ZombieExcavator::onSetHelm() */

void __thiscall ZombieExcavator::onSetHelm(ZombieExcavator *this)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x208))();
  *(undefined4 *)(this + 0x800) = uVar1;
  (**(code **)(*(long *)this + 0xa38))(this);
  return;
}


/* ZombieExcavator::onTakeHelmDamage(DamageInfo const&) */

void ZombieExcavator::onTakeHelmDamage(DamageInfo *param_1)

{
  (**(code **)(*(long *)param_1 + 0xa40))();
  return;
}


/* ZombieExcavator::refreshHelmDamageState() */

void __thiscall ZombieExcavator::refreshHelmDamageState(ZombieExcavator *this)

{
  *(undefined4 *)(this + 0x800) = 0;
  return;
}


/* ZombieExcavator::onShovelCompleted() */

void __thiscall ZombieExcavator::onShovelCompleted(ZombieExcavator *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)this,1,1);
  return;
}


/* ZombieExcavator::updateState_Shovel() */

void __thiscall ZombieExcavator::updateState_Shovel(ZombieExcavator *this)

{
  char cVar1;
  
  cVar1 = Zombie::IsControlled((Zombie *)this);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*(long *)this + 0x328))(this);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)this,1);
      return;
    }
  }
  return;
}


/* ZombieExcavator::overrideTakeCollision(Projectile*, bool) */

void __thiscall
ZombieExcavator::overrideTakeCollision(ZombieExcavator *this,Projectile *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Projectile *pPVar3;
  
  if (!param_2) {
    pPVar3 = param_1 + 0xe0;
    uVar1 = FUN_047ccd28(*(undefined8 *)pPVar3);
    uVar2 = operator|(uVar1,8);
    FUN_047ccd2c(pPVar3,uVar2);
    (**(code **)(*(long *)param_1 + 0x110))(param_1,this);
    FUN_047ccd2c(pPVar3,uVar1);
    return;
  }
  FUN_047ccd34(param_1 + 0x48,0);
  (**(code **)(*(long *)param_1 + 0x110))(param_1,this);
  FUN_047ccd34(param_1 + 0x48,1);
  return;
}


/* ZombieExcavator::ZombieExcavator() */

void __thiscall ZombieExcavator::ZombieExcavator(ZombieExcavator *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined4 *)(this + 0x800) = 0;
  *(undefined ***)this = &PTR_GetClass_068e5720;
  *(undefined ***)(this + 0x10) = &PTR__ZombieExcavator_068e6178;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x808));
  return;
}


/* ZombieExcavator::StaticNew() */

ZombieExcavator * ZombieExcavator::StaticNew(void)

{
  ZombieExcavator *this;
  
  this = ::operator_new(0x810);
  ZombieExcavator(this);
  return this;
}


/* ZombieExcavator::~ZombieExcavator() */

void __thiscall ZombieExcavator::~ZombieExcavator(ZombieExcavator *this)

{
  *(undefined ***)this = &PTR_GetClass_068e5720;
  *(undefined ***)(this + 0x10) = &PTR__ZombieExcavator_068e6178;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x808));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieExcavator::~ZombieExcavator() */

void __thiscall ZombieExcavator::~ZombieExcavator(ZombieExcavator *this)

{
  ~ZombieExcavator(this + -0x10);
  return;
}


/* ZombieExcavator::~ZombieExcavator() */

void __thiscall ZombieExcavator::~ZombieExcavator(ZombieExcavator *this)

{
  ~ZombieExcavator(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieExcavator::~ZombieExcavator() */

void __thiscall ZombieExcavator::~ZombieExcavator(ZombieExcavator *this)

{
  ~ZombieExcavator(this + -0x10);
  return;
}


/* ZombieExcavator::CalcShovelRect() const */

void ZombieExcavator::CalcShovelRect(void)

{
  int iVar1;
  int iVar2;
  Zombie *in_x0;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  long extraout_x0;
  Insets *in_x8;
  float fVar3;
  float fVar4;
  float fVar5;
  
  this = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(in_x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  nop();
  Sexy::Insets::Insets(in_x8,(Insets *)(extraout_x0 + 0x21c));
  fVar5 = *(float *)(in_x0 + 0x1c);
  fVar3 = (float)FUN_047ccd5c(*(undefined4 *)(in_x0 + 0x18),fVar5,*(undefined4 *)(in_x0 + 0x20));
  iVar1 = *(int *)(in_x8 + 8);
  iVar2 = *(int *)in_x8;
  fVar4 = (float)Zombie::GetFacingMultiplier(in_x0);
  *(int *)in_x8 = (int)((fVar3 - (float)(iVar1 / 2)) + (float)iVar2 * fVar4);
  *(int *)(in_x8 + 4) = (int)(((float)*(int *)(in_x8 + 4) + fVar5) - (float)*(int *)(in_x8 + 0xc));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExcavator::FindShovelTarget() */

void __thiscall ZombieExcavator::FindShovelTarget(ZombieExcavator *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::IsSuspended((Zombie *)this);
  if (cVar1 == '\0') {
    CalcShovelRect();
    uVar2 = SharkMinion::getRow((SharkMinion *)this);
    Sexy::Insets::Insets(aIStack_18,aIStack_28);
    uVar3 = Zombie::findEatTarget((Zombie *)this,uVar2,aIStack_18);
  }
  else {
    uVar3 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* ZombieExcavator::refreshAnimRigForHelm() */

void __thiscall ZombieExcavator::refreshAnimRigForHelm(ZombieExcavator *this)

{
  int iVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  (**(code **)(*(long *)pZVar2 + 0x268))(pZVar2,0);
  iVar1 = FUN_047ccd48(*(undefined4 *)(this + 0xb0));
  if (iVar1 == 0xf) {
    (**(code **)(*(long *)pZVar2 + 0x268))(pZVar2,0xf);
    (**(code **)(*(long *)pZVar2 + 0x270))(pZVar2,*(undefined4 *)(this + 0x800));
  }
  (**(code **)(*(long *)pZVar2 + 0x1f8))(pZVar2);
  return;
}


/* ZombieExcavator::onHelmDropped(HelmType, int) */

undefined8 ZombieExcavator::onHelmDropped(Zombie *param_1,int param_2)

{
  char cVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  undefined8 uVar3;
  
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  if (param_2 == 0xf) {
    (**(code **)(*(long *)pZVar2 + 0x268))(pZVar2,0);
    uVar3 = (**(code **)(*(long *)pZVar2 + 0x288))(pZVar2,0xf,param_1);
    cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState(param_1,0x20);
    }
  }
  else {
    uVar3 = 0;
  }
  (**(code **)(*(long *)pZVar2 + 0x1f8))(pZVar2);
  return uVar3;
}


/* ZombieExcavator::isProjectileArrivingAtBlockableAngle(Projectile*) */

bool ZombieExcavator::isProjectileArrivingAtBlockableAngle(Projectile *param_1)

{
  char cVar1;
  SexyVector3 *this;
  SexyVector3 *pSVar2;
  ZombieExcavatorProps *pZVar3;
  Projectile *in_x1;
  float fVar4;
  float fVar5;
  double dVar6;
  float in_s1;
  
  this = (SexyVector3 *)Projectile::GetVelocity(in_x1);
  pSVar2 = (SexyVector3 *)Projectile::GetVelocityScale(in_x1);
  fVar4 = (float)Sexy::SexyVector3::operator*(this,pSVar2);
  fVar5 = (float)Zombie::GetFacingMultiplier((Zombie *)param_1);
  if (fVar5 < 0.0 != 0.0 < fVar4) {
    cVar1 = Sexy::IsNearZero(fVar4,0.001);
    if (cVar1 == '\0') {
      fVar5 = (float)Sexy::SexyMath::Fabs(in_s1);
      dVar6 = atan((double)fVar5 / (double)ABS(fVar4));
      fVar4 = (float)dVar6;
    }
    else {
      fVar4 = 1.5707964;
    }
    pZVar3 = Zombie::GetProps<ZombieExcavatorProps>((Zombie *)param_1);
    return fVar4 < *(float *)(pZVar3 + 0x210) * 0.008726646;
  }
  return false;
}


/* ZombieExcavator::OverrideProjectileCollision(Projectile*) */

char __thiscall
ZombieExcavator::OverrideProjectileCollision(ZombieExcavator *this,Projectile *param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  if ((param_1 == (Projectile *)0x0) ||
     (((bVar1 = Sexy::RtObject::IsA<BowlingWallnutProjectile>((RtObject *)param_1), !bVar1 &&
       (bVar1 = Sexy::RtObject::IsA<BowlingBigWallnutProjectile>((RtObject *)param_1), !bVar1)) &&
      (bVar1 = Sexy::RtObject::IsA<BowlingWallnutBoomProjectile>((RtObject *)param_1), !bVar1)))) {
    uVar4 = FUN_047ccd24(*(undefined4 *)(param_1 + 0x24));
    cVar2 = RealObject::IsOnOpposingTeam(this,uVar4);
    if (cVar2 == '\0') {
      return '\x01';
    }
    uVar3 = Sexy::RtObject::IsA<GuacodileProjectile>((RtObject *)param_1);
    if (!(bool)uVar3) {
      iVar5 = FUN_047ccd48(*(undefined4 *)(this + 0xb0));
      if (iVar5 == 0xf) {
        uVar6 = FUN_047ccd28(*(undefined8 *)(param_1 + 0xe0));
        bVar1 = TestFlag<DamageTypeFlags>(uVar6,0x2000000000);
        if (bVar1) {
          uVar3 = isProjectileArrivingAtBlockableAngle((Projectile *)this);
        }
      }
      overrideTakeCollision(this,param_1,(bool)uVar3);
      return cVar2;
    }
  }
  return '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExcavator::canShovelPlantGroup(Sexy::RtWeakPtr<PlantGroup>) */

void __thiscall
ZombieExcavator::canShovelPlantGroup(ZombieExcavator *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  PlantGroup *this_00;
  undefined8 *puVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long extraout_x0;
  Plant *pPVar6;
  undefined8 local_28;
  undefined8 local_20;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlantGroup *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  bVar1 = PlantGroup::Empty(this_00);
  bVar1 = bVar1 ^ 1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  puVar4 = (undefined8 *)PlantGroup::Plants();
  local_28 = FUN_047cdcc8(*puVar4);
  local_20 = FUN_047cdd18(puVar4[1]);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
  if (bVar2) {
    do {
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      Plant::GetType();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      FUN_05475d88(asStack_18,lVar5 + 8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      bVar2 = std::operator==(asStack_18,"magicbeans");
      if (bVar2) {
        std::string::~string(asStack_18);
        bVar1 = 0;
        break;
      }
      this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
      nop();
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_01);
      if (bVar2) {
        pPVar6 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        if (*(code **)(*(long *)pPVar6 + 0x1f8) != Plant::IsInPlantFoodState) {
          cVar3 = (**(code **)(*(long *)pPVar6 + 0x1f8))();
          if (cVar3 == '\0') goto LAB_047ce2f4;
          goto LAB_047ce268;
        }
        cVar3 = Plant::IsInPlantFoodState(pPVar6);
        if (cVar3 != '\0') goto LAB_047ce268;
LAB_047ce2f4:
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        cVar3 = FUN_047ccd3c(*(undefined4 *)(lVar5 + 0x1d0));
        if (cVar3 != '\0') goto LAB_047ce268;
        pPVar6 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        cVar3 = Plant::IsInvincible(pPVar6,false);
        if (cVar3 != '\0') {
          Sexy::RtWeakPtr<Plant>::GetPtr((RtWeakPtr<Plant> *)this_01);
          cVar3 = PlantRestrictionSet::IsIncluded((Plant *)(extraout_x0 + 0x230));
          if (cVar3 == '\0') goto LAB_047ce268;
        }
        Sexy::RtWeakPtr<Plant>::GetPtr((RtWeakPtr<Plant> *)this_01);
        cVar3 = PlantRestrictionSet::IsIncluded((Plant *)(extraout_x0 + 600));
        if (cVar3 != '\0') goto LAB_047ce268;
      }
      else {
LAB_047ce268:
        bVar1 = 0;
      }
      std::string::~string(asStack_18);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
    } while (bVar2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExcavator::updateState_Walk() */

void __thiscall ZombieExcavator::updateState_Walk(ZombieExcavator *this)

{
  char cVar1;
  int iVar2;
  RtObject *this_00;
  PlantGroup *pPVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::IsControlled((Zombie *)this);
  if (cVar1 == '\0') {
    this_00 = (RtObject *)FindShovelTarget(this);
    if (((this_00 != (RtObject *)0x0) &&
        (pPVar3 = Sexy::RtObject::Cast<PlantGroup>(this_00), pPVar3 != (PlantGroup *)0x0)) &&
       (iVar2 = FUN_047ccd48(*(undefined4 *)(this + 0xb0)), iVar2 == 0xf)) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      cVar1 = canShovelPlantGroup(this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      if (cVar1 != '\0') {
        Zombie::setZombieState((Zombie *)this,0x1f,0);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x808),
                   (RtWeakPtrBase *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        goto LAB_047ce3c0;
      }
    }
    lVar4 = (**(code **)(*(long *)this + 0x228))(this);
    if (lVar4 != 0) {
      Zombie::setZombieState((Zombie *)this,2,0);
    }
  }
LAB_047ce3c0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExcavator::onEnterState_Shovel(ZombieState) */

void ZombieExcavator::onEnterState_Shovel(Zombie *param_1)

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
  std::string::string(asStack_58,"onShovelCompleted");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_LostCityExcavator::DoShovel((ZombieAnimRig_LostCityExcavator *)pZVar1,aRStack_50);
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
/* ZombieExcavator::onEnterState_DroppingShovel(ZombieState) */

void ZombieExcavator::onEnterState_DroppingShovel(Zombie *param_1)

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
  std::string::string(asStack_58,"onShovelCompleted");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_LostCityExcavator::DropShovel((ZombieAnimRig_LostCityExcavator *)pZVar1,aRStack_50);
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
/* ZombieExcavator::tossPlantGroup(Sexy::RtWeakPtr<PlantGroup>) */

void __thiscall
ZombieExcavator::tossPlantGroup(ZombieExcavator *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  Insets *pIVar3;
  ZombieExcavatorProps *pZVar4;
  undefined8 *puVar5;
  RtWeakPtrBase *pRVar6;
  long lVar7;
  PlantPotatomine *this_00;
  float fVar8;
  int local_84;
  int local_80;
  int local_7c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  RtWeakPtr<Sexy::SoundResource> aRStack_60 [8];
  int local_58 [2];
  int local_50;
  string asStack_48 [17];
  undefined1 local_37;
  BoardEntityPusher aBStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  pIVar3 = (Insets *)(**(code **)(*(long *)this + 0x178))();
  Sexy::Insets::Insets((Insets *)local_58,pIVar3);
  fVar8 = *(float *)(this + 0x1c);
  FUN_047ccd5c(*(undefined4 *)(this + 0x18),fVar8,*(undefined4 *)(this + 0x20));
  BoardTransforms::BoardSpaceToGrid(local_58[0],(int)fVar8,&local_84,&local_7c);
  BoardTransforms::BoardSpaceToGrid(local_58[0] + local_50,(int)fVar8,&local_80,&local_7c);
  std::string::string(asStack_48,"Play_Zomb_Future_Football_Mvmt_Fling");
  BoardEntityPusher::BoardEntityPusher(aBStack_30,(BoardEntity *)this,asStack_48);
  std::string::~string(asStack_48);
  nop();
  BoardEntityPusher::BlacklistBoardLocation(aBStack_30,local_84,local_7c);
  if (local_84 != local_80) {
    BoardEntityPusher::BlacklistBoardLocation(aBStack_30,local_80,local_7c);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_60,(RtWeakPtrBase *)param_2);
  uVar1 = BoardEntityPusher::PUSH_DIRECTION_RIGHT;
  pZVar4 = Zombie::GetProps<ZombieExcavatorProps>((Zombie *)this);
  PushPlantGroupProps::PushPlantGroupProps
            ((PushPlantGroupProps *)asStack_48,aRStack_60,uVar1,*(undefined4 *)(pZVar4 + 0x214));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  local_37 = 1;
  BoardEntityPusher::PushPlantGroup(aBStack_30,(PushPlantGroupProps *)asStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  puVar5 = (undefined8 *)PlantGroup::Plants();
  local_70 = FUN_047cdcc8(*puVar5);
  local_68 = FUN_047cdd18(puVar5[1]);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar2) {
    pRVar6 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_78,pRVar6);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    Plant::GetType();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    bVar2 = std::operator==((string *)(lVar7 + 8),"potatomine");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    if (bVar2) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      nop();
      PlantPotatomine::SetIsFlying(this_00);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_70);
  }
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)asStack_48);
  BoardEntityPusher::~BoardEntityPusher(aBStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExcavator::StaticClassInit() */

void ZombieExcavator::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieExcavator");
      (*pcVar4)(plVar1,asStack_150,FUN_047cf11c,0x810,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieExcavator,void(ZombieExcavator::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieExcavator,void(ZombieExcavator::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieExcavator,void(ZombieExcavator::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_EXCAVATOR_Shovel");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047cee18(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieExcavator,void(ZombieExcavator::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieExcavator,void(ZombieExcavator::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieExcavator,void(ZombieExcavator::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_EXCAVATOR_Dropping_Shovel");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047cee18(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieExcavator::StaticGetClass() */

long * ZombieExcavator::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieExcavator",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieExcavator::GetClass() const */

long * ZombieExcavator::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieExcavator",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieExcavator::onApplyCondition(ZombieConditions) */

void ZombieExcavator::onApplyCondition(Zombie *param_1)

{
  char cVar1;
  
  Zombie::onApplyCondition();
  cVar1 = Zombie::HasCondition(param_1,0xe);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState(param_1,1);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExcavator::TakeDamage(DamageInfo const&) */

void __thiscall ZombieExcavator::TakeDamage(ZombieExcavator *this,DamageInfo *param_1)

{
  bool bVar1;
  DamageInfo aDStack_68 [16];
  undefined8 local_58 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68,param_1);
  bVar1 = TestFlag<DamageTypeFlags>(local_58[0],0x2000000000);
  if (!bVar1) {
    operator|=(local_58,8);
  }
  Zombie::TakeDamage((Zombie *)this,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExcavator::updateState_Eat() */

void __thiscall ZombieExcavator::updateState_Eat(ZombieExcavator *this)

{
  char cVar1;
  int iVar2;
  RtObject *this_00;
  PlantGroup *pPVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)FindShovelTarget(this);
  if (((this_00 != (RtObject *)0x0) &&
      (pPVar3 = Sexy::RtObject::Cast<PlantGroup>(this_00), pPVar3 != (PlantGroup *)0x0)) &&
     (iVar2 = FUN_047ccd48(*(undefined4 *)(this + 0xb0)), iVar2 == 0xf)) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    cVar1 = canShovelPlantGroup(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    if (cVar1 != '\0') {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x808),(RtWeakPtrBase *)aRStack_10)
      ;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      goto LAB_047cf520;
    }
  }
  Zombie::updateState_Eat((Zombie *)this);
LAB_047cf520:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieExcavator::onZombieInitialize() */

void __thiscall ZombieExcavator::onZombieInitialize(ZombieExcavator *this)

{
  Zombie::onZombieInitialize((Zombie *)this);
  *(undefined4 *)(this + 0x800) = 0;
  (**(code **)(*(long *)this + 0xa38))(this);
  return;
}


/* ZombieExcavator::CalcZombieAttackRect() */

void ZombieExcavator::CalcZombieAttackRect(void)

{
  int iVar1;
  Zombie *in_x0;
  ZombieExcavatorProps *pZVar2;
  int *in_x8;
  
  Zombie::CalcZombieAttackRect();
  iVar1 = FUN_047ccd48(*(undefined4 *)(in_x0 + 0xb0));
  if (iVar1 != 0xf) {
    return;
  }
  pZVar2 = Zombie::GetProps<ZombieExcavatorProps>(in_x0);
  *in_x8 = *in_x8 + *(int *)(pZVar2 + 0x218);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExcavator::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieExcavator::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  RtMixedPtrBase *this;
  bool bVar1;
  char cVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"use_shovel");
  if ((bVar1) && (cVar2 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar2 == '\0')) {
    this = (RtMixedPtrBase *)(param_1 + 0x808);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this);
      cVar2 = canShovelPlantGroup((ZombieExcavator *)param_1,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this);
        tossPlantGroup((ZombieExcavator *)param_1,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this);
        goto LAB_047cf6c8;
      }
    }
  }
  Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
LAB_047cf6c8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

