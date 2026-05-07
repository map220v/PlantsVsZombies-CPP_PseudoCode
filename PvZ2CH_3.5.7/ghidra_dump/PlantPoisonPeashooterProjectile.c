// Class: PlantPoisonPeashooterProjectile


/* PlantPoisonPeashooterProjectile::~PlantPoisonPeashooterProjectile() */

void __thiscall
PlantPoisonPeashooterProjectile::~PlantPoisonPeashooterProjectile
          (PlantPoisonPeashooterProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0699c040;
  *(undefined ***)(this + 0x10) = &PTR__PlantPoisonPeashooterProjectile_0699c238;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PlantPoisonPeashooterProjectile::~PlantPoisonPeashooterProjectile() */

void __thiscall
PlantPoisonPeashooterProjectile::~PlantPoisonPeashooterProjectile
          (PlantPoisonPeashooterProjectile *this)

{
  ~PlantPoisonPeashooterProjectile(this + -0x10);
  return;
}


/* PlantPoisonPeashooterProjectile::~PlantPoisonPeashooterProjectile() */

void __thiscall
PlantPoisonPeashooterProjectile::~PlantPoisonPeashooterProjectile
          (PlantPoisonPeashooterProjectile *this)

{
  ~PlantPoisonPeashooterProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantPoisonPeashooterProjectile::~PlantPoisonPeashooterProjectile() */

void __thiscall
PlantPoisonPeashooterProjectile::~PlantPoisonPeashooterProjectile
          (PlantPoisonPeashooterProjectile *this)

{
  ~PlantPoisonPeashooterProjectile(this + -0x10);
  return;
}


/* PlantPoisonPeashooterProjectile::PlantPoisonPeashooterProjectile() */

void __thiscall
PlantPoisonPeashooterProjectile::PlantPoisonPeashooterProjectile
          (PlantPoisonPeashooterProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0699c040;
  *(undefined ***)(this + 0x10) = &PTR__PlantPoisonPeashooterProjectile_0699c238;
  return;
}


/* PlantPoisonPeashooterProjectile::StaticNew() */

PlantPoisonPeashooterProjectile * PlantPoisonPeashooterProjectile::StaticNew(void)

{
  PlantPoisonPeashooterProjectile *this;
  
  this = ::operator_new(0x1c0);
  PlantPoisonPeashooterProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPoisonPeashooterProjectile::StaticClassInit() */

void PlantPoisonPeashooterProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPoisonPeashooterProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04cc7784,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPoisonPeashooterProjectile::StaticGetClass() */

long * PlantPoisonPeashooterProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPoisonPeashooterProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPoisonPeashooterProjectile::GetClass() const */

long * PlantPoisonPeashooterProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPoisonPeashooterProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPoisonPeashooterProjectile::InitializeValues(float, float, float, float) */

void __thiscall
PlantPoisonPeashooterProjectile::InitializeValues
          (PlantPoisonPeashooterProjectile *this,float param_1,float param_2,float param_3,
          float param_4)

{
  undefined4 uVar1;
  long extraout_x0;
  
  *(undefined4 *)(this + 0x1b8) = 1;
  *(float *)(this + 0x1a8) = param_1;
  *(float *)(this + 0x1ac) = param_2;
  *(float *)(this + 0x1b0) = param_3;
  *(float *)(this + 0x1b4) = param_4;
  Projectile::GetInstigator((Projectile *)this);
  nop();
  if (extraout_x0 != 0) {
    uVar1 = FUN_04cc6f84(*(undefined4 *)(extraout_x0 + 0x50));
    *(undefined4 *)(this + 0x1b8) = uVar1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPoisonPeashooterProjectile::PoisonExplode(Zombie*) */

void __thiscall
PlantPoisonPeashooterProjectile::PoisonExplode
          (PlantPoisonPeashooterProjectile *this,Zombie *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float *pfVar6;
  long extraout_x0;
  Effect_PopAnim *this_00;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  string asStack_88 [8];
  string asStack_80 [8];
  RtWeakPtr aRStack_78 [8];
  string asStack_70 [8];
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_88,"POPANIM_EFFECTS_POISONPEASHOOTER_PROJECTILES");
  nop();
  std::string::string(asStack_80,"HIT_T4");
  nop();
  uVar4 = SharkMinion::getRow((SharkMinion *)param_1);
  uVar5 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
  uVar4 = Board::MakeRenderOrder(0x64960,uVar4,uVar5);
  pfVar6 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  fVar10 = *pfVar6;
  fVar9 = pfVar6[1];
  FUN_05475d88(asStack_70,asStack_88);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_68,fVar10,fVar9,0.0);
  PopAnimEffectFactory::CreateEffect(aRStack_78,local_68,local_64,local_60,asStack_70,uVar4,0,1);
  std::string::~string(asStack_70);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_78);
  if ((bVar2) &&
     (cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_78), cVar3 != '\0')) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    nop();
    Effect_PopAnim::SetCentered(this_00,true);
    Effect_PopAnim::PlaySingleAnimation(this_00,asStack_80,0);
    uVar7 = FUN_0547429c(asStack_88);
    uVar8 = FUN_0547429c(asStack_80);
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "PlantPoisonPeashooterProjectile::PoisonExplode pam = %s, anim = %s gridX=%d gridY=%d"
               ,(double)fVar10,(double)fVar9,uVar7,uVar8);
  }
  else {
    Sexy::OutputDebugStrF((wchar_t *)"PlantPoisonPeashooterProjectile::PoisonExplode");
  }
  iVar1 = *(int *)(this + 0x1b8);
  DamageInfo::DamageInfo((DamageInfo *)&local_68);
  Projectile::GetProps((Projectile *)this);
  nop();
  local_60 = ((float)(iVar1 + -2) * 0.5 + 1.0) * *(float *)(extraout_x0 + 0x1e0);
  (**(code **)(*(long *)param_1 + 0x110))(param_1,(Vec3 *)&local_68);
  DamageInfo::~DamageInfo((DamageInfo *)&local_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  std::string::~string(asStack_80);
  std::string::~string(asStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPoisonPeashooterProjectile::ExecuteLevelAction(Zombie*, float) */

void __thiscall
PlantPoisonPeashooterProjectile::ExecuteLevelAction
          (PlantPoisonPeashooterProjectile *this,Zombie *param_1,float param_2)

{
  if (*(int *)(this + 0x1b8) < 3) {
    if (*(int *)(this + 0x1b8) != 2) {
      return;
    }
    if (4 < (int)(param_2 + 1.0)) {
LAB_04ccc1dc:
      PoisonExplode(this,param_1);
      Zombie::SetExtraConditionTracker(0,param_1,0x30);
      return;
    }
  }
  else if (2 < (int)(param_2 + 1.0)) goto LAB_04ccc1dc;
  Zombie::SetExtraConditionTracker(param_1,0x30);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPoisonPeashooterProjectile::applyConditions(BoardEntity*) */

void __thiscall
PlantPoisonPeashooterProjectile::applyConditions
          (PlantPoisonPeashooterProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  Zombie *this_00;
  string *psVar3;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)) {
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_10,"poisonpeashooter");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    std::string::~string(asStack_10);
    nop();
    cVar2 = Zombie::HasCondition(this_00,0x33);
    if (cVar2 != '\0') {
      Zombie::GetConditionTracker(this_00);
      Zombie::EndCondition(this_00,0x33);
    }
    cVar2 = Zombie::HasCondition(this_00,0x30);
    if (cVar2 == '\0') {
      fVar8 = 0.0;
      fVar7 = fVar8;
    }
    else {
      pEVar4 = (EntityConditionTracker<Zombie,ZombieConditions> *)
               Zombie::GetConditionTracker(this_00);
      lVar5 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition(pEVar4,0x30);
      fVar7 = *(float *)(lVar5 + 0xc);
      pEVar4 = (EntityConditionTracker<Zombie,ZombieConditions> *)
               Zombie::GetConditionTracker(this_00);
      lVar5 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition(pEVar4,0x30);
      fVar8 = *(float *)(lVar5 + 0x10);
      Zombie::EndCondition(this_00,0x30);
    }
                    /* WARNING: Load size is inaccurate */
    if (fVar7 < *(float *)(this + 0x1ac) * *(float *)(this + 0x1a8)) {
      Zombie::ApplyCondition(*(Zombie **)(this + 0x1b4),0,this_00,0x30,1);
      fVar6 = (float)FUN_04cc6f80(*(undefined4 *)(this + 0x180));
      Zombie::SetConditionTracker
                ((fVar7 + *(float *)(this + 0x1ac)) *
                 ((float)(*(int *)(this + 0x1b8) + -1) * 0.5 + 1.0) * fVar6,this_00,0x30);
    }
    else {
      Zombie::ApplyCondition(*(Zombie **)(this + 0x1b4),0,this_00,0x30,1);
    }
    ExecuteLevelAction(this,this_00,fVar8);
                    /* WARNING: Load size is inaccurate */
    Zombie::ApplyCondition(*(Zombie **)(this + 0x1b4),0,this_00,0x33,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

