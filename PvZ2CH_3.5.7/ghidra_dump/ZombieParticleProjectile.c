// Class: ZombieParticleProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParticleProjectile::StaticClassInit() */

void ZombieParticleProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieParticleProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04350f50,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieParticleProjectile::StaticGetClass() */

long * ZombieParticleProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieParticleProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieParticleProjectile::GetClass() const */

long * ZombieParticleProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieParticleProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieParticleProjectile::ZombieParticleProjectile() */

void __thiscall ZombieParticleProjectile::ZombieParticleProjectile(ZombieParticleProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06833f90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieParticleProjectile_06834180;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  return;
}


/* ZombieParticleProjectile::StaticNew() */

ZombieParticleProjectile * ZombieParticleProjectile::StaticNew(void)

{
  ZombieParticleProjectile *this;
  
  this = ::operator_new(0x1b0);
  ZombieParticleProjectile(this);
  return this;
}


/* ZombieParticleProjectile::~ZombieParticleProjectile() */

void __thiscall ZombieParticleProjectile::~ZombieParticleProjectile(ZombieParticleProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06833f90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieParticleProjectile_06834180;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ZombieParticleProjectile::~ZombieParticleProjectile() */

void __thiscall ZombieParticleProjectile::~ZombieParticleProjectile(ZombieParticleProjectile *this)

{
  ~ZombieParticleProjectile(this + -0x10);
  return;
}


/* ZombieParticleProjectile::~ZombieParticleProjectile() */

void __thiscall ZombieParticleProjectile::~ZombieParticleProjectile(ZombieParticleProjectile *this)

{
  ~ZombieParticleProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieParticleProjectile::~ZombieParticleProjectile() */

void __thiscall ZombieParticleProjectile::~ZombieParticleProjectile(ZombieParticleProjectile *this)

{
  ~ZombieParticleProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParticleProjectile::SetControlledParticle(ZombieParticle*) */

void __thiscall
ZombieParticleProjectile::SetControlledParticle
          (ZombieParticleProjectile *this,ZombieParticle *param_1)

{
  bool bVar1;
  ZombieParticle *pZVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::SetShadow((Projectile *)this,false);
  if (param_1 == (ZombieParticle *)0x0) {
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x1a8));
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1a8),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1a8));
  if (bVar1) {
    pZVar2 = (ZombieParticle *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
    ZombieParticle::SetMotionType(pZVar2,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieParticleProjectile::onPostUpdate() */

void __thiscall ZombieParticleProjectile::onPostUpdate(ZombieParticleProjectile *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  ZombieParticle *this_01;
  float fVar4;
  
  this_00 = (RtWeakPtr *)(this + 0x1a8);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (!bVar1) {
    return;
  }
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  uVar3 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  (**(code **)(*plVar2 + 0x78))(plVar2,uVar3);
  this_01 = (ZombieParticle *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  fVar4 = (float)FUN_04350bbc(*(undefined4 *)(this + 0xc4));
  ZombieParticle::SetRotation(this_01,fVar4);
  return;
}


/* ZombieParticleProjectile::onDestroy() */

void __thiscall ZombieParticleProjectile::onDestroy(ZombieParticleProjectile *this)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1a8));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
    (**(code **)(*plVar2 + 0x48))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParticleProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
ZombieParticleProjectile::OnCollideEntity(ZombieParticleProjectile *this,BoardEntity *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x1a8);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    EATextSquish::Vec3::Vec3((Vec3 *)&local_38,-20.0,-10.0,150.0);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_28,20.0,10.0,300.0);
    uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    fVar3 = (float)Sexy::Rand(local_28 - local_38);
    fVar4 = (float)Sexy::Rand(local_24 - local_34);
    fVar5 = (float)Sexy::Rand(local_20 - local_30);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,fVar3 + local_38,fVar4 + local_34,fVar5 + local_30);
    ZombieParticle::SetBounceMotionWithVelocity(local_18,local_14,local_10,uVar2);
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  Projectile::OnCollideEntity((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

