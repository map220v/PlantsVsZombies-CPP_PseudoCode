// Class: NarcissusBasicProjectile


/* NarcissusBasicProjectile::canCarryHelmType(HelmType) const */

void __thiscall NarcissusBasicProjectile::canCarryHelmType(undefined8 param_1,undefined4 param_2)

{
  Zombie::IsHelmTypeMetallic(param_2);
  return;
}


/* NarcissusBasicProjectile::tryCarryZombieParticle(ZombieParticle*) */

ZombieParticle * __thiscall
NarcissusBasicProjectile::tryCarryZombieParticle
          (NarcissusBasicProjectile *this,ZombieParticle *param_1)

{
  if (param_1 != (ZombieParticle *)0x0) {
    ZombieParticle::SetMotionType(param_1,0);
    ZombieParticle::CancelFadeOutAndDestroy(param_1);
  }
  return param_1;
}


/* NarcissusBasicProjectile::onInitialized() */

void __thiscall NarcissusBasicProjectile::onInitialized(NarcissusBasicProjectile *this)

{
  this[0x1b0] = (NarcissusBasicProjectile)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NarcissusBasicProjectile::StaticClassInit() */

void NarcissusBasicProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"NarcissusBasicProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0424fe7c,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NarcissusBasicProjectile::StaticGetClass() */

long * NarcissusBasicProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NarcissusBasicProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NarcissusBasicProjectile::GetClass() const */

long * NarcissusBasicProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"NarcissusBasicProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NarcissusBasicProjectile::NarcissusBasicProjectile() */

void __thiscall NarcissusBasicProjectile::NarcissusBasicProjectile(NarcissusBasicProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06818080;
  *(undefined ***)(this + 0x10) = &PTR__NarcissusBasicProjectile_06818270;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  return;
}


/* NarcissusBasicProjectile::StaticNew() */

NarcissusBasicProjectile * NarcissusBasicProjectile::StaticNew(void)

{
  NarcissusBasicProjectile *this;
  
  this = ::operator_new(0x1b8);
  NarcissusBasicProjectile(this);
  return this;
}


/* NarcissusBasicProjectile::~NarcissusBasicProjectile() */

void __thiscall NarcissusBasicProjectile::~NarcissusBasicProjectile(NarcissusBasicProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06818080;
  *(undefined ***)(this + 0x10) = &PTR__NarcissusBasicProjectile_06818270;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to NarcissusBasicProjectile::~NarcissusBasicProjectile() */

void __thiscall NarcissusBasicProjectile::~NarcissusBasicProjectile(NarcissusBasicProjectile *this)

{
  ~NarcissusBasicProjectile(this + -0x10);
  return;
}


/* NarcissusBasicProjectile::~NarcissusBasicProjectile() */

void __thiscall NarcissusBasicProjectile::~NarcissusBasicProjectile(NarcissusBasicProjectile *this)

{
  ~NarcissusBasicProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NarcissusBasicProjectile::~NarcissusBasicProjectile() */

void __thiscall NarcissusBasicProjectile::~NarcissusBasicProjectile(NarcissusBasicProjectile *this)

{
  ~NarcissusBasicProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NarcissusBasicProjectile::moveThroughTime(float) */

void __thiscall
NarcissusBasicProjectile::moveThroughTime(NarcissusBasicProjectile *this,float param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  float *pfVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  undefined8 *puVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x1a8);
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar7 = *pfVar3;
  ProjectileHelpers::Integrate((Projectile *)this,param_1);
  fVar6 = *pfVar3;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if ((bVar1) && (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar2 != '\0'))
  {
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    puVar4 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_01);
    local_18 = (float)*puVar4;
    local_10 = *(undefined4 *)(puVar4 + 1);
    _local_18 = CONCAT44((int)((ulong)*puVar4 >> 0x20),(fVar6 + local_18) - fVar7);
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar5 + 0x78))(plVar5,&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NarcissusBasicProjectile::onDestroy() */

void __thiscall NarcissusBasicProjectile::onDestroy(NarcissusBasicProjectile *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  long *plVar3;
  
  this_00 = (RtWeakPtr *)(this + 0x1a8);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if ((bVar1) && (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar2 != '\0'))
  {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar3 + 0x48))();
    return;
  }
  return;
}


/* NarcissusBasicProjectile::canCarryHelmFrom(Zombie*) const */

undefined1 __thiscall
NarcissusBasicProjectile::canCarryHelmFrom(NarcissusBasicProjectile *this,Zombie *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar5;
  
  if (param_1 != (Zombie *)0x0) {
    uVar3 = FUN_0424d244(*(undefined4 *)(param_1 + 0xb0));
    cVar1 = canCarryHelmType(this,uVar3);
    if ((((cVar1 != '\0') || (iVar4 = FUN_0424d244(*(undefined4 *)(param_1 + 0xb0)), iVar4 == 1)) &&
        (cVar1 = BoardEntity::IsOnScreen((BoardEntity *)param_1), cVar1 != '\0')) &&
       (cVar1 = RealObject::IsOnTeam(param_1,2), cVar1 != '\0')) {
      pEVar5 = (EntityConditionTracker<Zombie,ZombieConditions> *)
               Zombie::GetConditionTracker(param_1);
      cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(pEVar5,0x19);
      if (cVar1 == '\0') {
        pEVar5 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                 Zombie::GetConditionTracker(param_1);
        cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(pEVar5,0x77);
        if (cVar1 == '\0') {
          pEVar5 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                   Zombie::GetConditionTracker(param_1);
          cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(pEVar5,0x3f);
          if (cVar1 == '\0') {
            uVar2 = (**(code **)(*(long *)param_1 + 0x398))(param_1);
            return uVar2;
          }
        }
      }
    }
  }
  return 0;
}


/* NarcissusBasicProjectile::tryCarryHelmFrom(Zombie*) */

undefined8 __thiscall
NarcissusBasicProjectile::tryCarryHelmFrom(NarcissusBasicProjectile *this,Zombie *param_1)

{
  char cVar1;
  ZombieParticle *pZVar2;
  undefined8 uVar3;
  
  cVar1 = canCarryHelmFrom(this,param_1);
  if (cVar1 != '\0') {
    pZVar2 = (ZombieParticle *)(**(code **)(*(long *)param_1 + 0x248))(param_1);
    uVar3 = tryCarryZombieParticle(this,pZVar2);
    return uVar3;
  }
  return 0;
}


/* NarcissusBasicProjectile::tryCarryEntity(BoardEntity*) */

BoardEntity * __thiscall
NarcissusBasicProjectile::tryCarryEntity(NarcissusBasicProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  Zombie *pZVar2;
  BoardEntity *pBVar3;
  
  if ((param_1 == (BoardEntity *)0x0) ||
     (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), !bVar1)) {
    return (BoardEntity *)0x0;
  }
  if ((this[0x1b0] != (NarcissusBasicProjectile)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<ZombieImp>((RtObject *)param_1), bVar1)) {
    return param_1;
  }
  pZVar2 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
  pBVar3 = (BoardEntity *)tryCarryHelmFrom(this,pZVar2);
  return pBVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NarcissusBasicProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
NarcissusBasicProjectile::OnCollideEntity(NarcissusBasicProjectile *this,BoardEntity *param_1)

{
  RtWeakPtr *this_00;
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  RtObject *this_01;
  RtObject *this_02;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsInModule(gLawnApp,4);
  if (cVar1 == '\0') {
    this_00 = (RtWeakPtr *)(this + 0x1a8);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (((!bVar2) ||
        (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar1 == '\0')) &&
       (this_01 = (RtObject *)tryCarryEntity(this,param_1), this_01 != (RtObject *)0x0)) {
      bVar2 = Sexy::RtObject::IsA<Zombie>(this_01);
      if (((bVar2) && (nop(), this_02 != (RtObject *)0x0)) &&
         (bVar2 = Sexy::RtObject::IsA<ZombieImp>(this_02), bVar2)) {
        Zombie::SetIsControlled((Zombie *)this_02,true);
        Zombie::ApplyCondition((Zombie *)0x41200000,0,this_02,0x18,1);
      }
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      uVar3 = 1;
      goto LAB_0424e878;
    }
  }
  uVar3 = 0;
LAB_0424e878:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

