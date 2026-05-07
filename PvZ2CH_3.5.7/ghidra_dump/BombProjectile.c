// Class: BombProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BombProjectile::SetOwningRocket(ZombossCrosshair const*) */

void BombProjectile::SetOwningRocket(ZombossCrosshair *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x1a8),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BombProjectile::StaticClassInit() */

void BombProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BombProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0470987c,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BombProjectile::StaticGetClass() */

long * BombProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BombProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BombProjectile::GetClass() const */

long * BombProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"BombProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BombProjectile::BombProjectile() */

void __thiscall BombProjectile::BombProjectile(BombProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_068bc450;
  *(undefined ***)(this + 0x10) = &PTR__BombProjectile_068bc640;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  return;
}


/* BombProjectile::StaticNew() */

BombProjectile * BombProjectile::StaticNew(void)

{
  BombProjectile *this;
  
  this = ::operator_new(0x1b0);
  BombProjectile(this);
  return this;
}


/* BombProjectile::~BombProjectile() */

void __thiscall BombProjectile::~BombProjectile(BombProjectile *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x1a8);
  *(undefined ***)this = &PTR_GetClass_068bc450;
  *(undefined ***)(this + 0x10) = &PTR__BombProjectile_068bc640;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to BombProjectile::~BombProjectile() */

void __thiscall BombProjectile::~BombProjectile(BombProjectile *this)

{
  ~BombProjectile(this + -0x10);
  return;
}


/* BombProjectile::~BombProjectile() */

void __thiscall BombProjectile::~BombProjectile(BombProjectile *this)

{
  ~BombProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BombProjectile::~BombProjectile() */

void __thiscall BombProjectile::~BombProjectile(BombProjectile *this)

{
  ~BombProjectile(this + -0x10);
  return;
}


/* BombProjectile::OnCollideGround() */

void __thiscall BombProjectile::OnCollideGround(BombProjectile *this)

{
  char cVar1;
  long lVar2;
  string *psVar3;
  
  lVar2 = Projectile::getProps((Projectile *)this);
  cVar1 = FUN_0547419c((void *)(lVar2 + 0x130));
  if (cVar1 == '\0') {
    psVar3 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEventThrottled(psVar3,*(float *)(lVar2 + 0x138),(void *)(lVar2 + 0x130));
  }
  (**(code **)(*(long *)this + 0x168))(this,0);
  return;
}

