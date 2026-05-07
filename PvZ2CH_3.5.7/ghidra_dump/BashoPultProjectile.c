// Class: BashoPultProjectile


/* BashoPultProjectile::SetReturnPosition(Sexy::SexyVector3 const&) */

void __thiscall
BashoPultProjectile::SetReturnPosition(BashoPultProjectile *this,SexyVector3 *param_1)

{
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1a8),param_1);
  return;
}


/* BashoPultProjectile::onInitialized() */

void __thiscall BashoPultProjectile::onInitialized(BashoPultProjectile *this)

{
  this[0x1a5] = (BashoPultProjectile)0x0;
  this[0x1a6] = (BashoPultProjectile)0x0;
  this[0x1a7] = (BashoPultProjectile)0x0;
  return;
}


/* BashoPultProjectile::onUpdate(float) */

void __thiscall BashoPultProjectile::onUpdate(BashoPultProjectile *this,float param_1)

{
  ZombieRepulseSystem::Update((ZombieRepulseSystem *)(this + 0x1b8),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BashoPultProjectile::StaticClassInit() */

void BashoPultProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BashoPultProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_040ccc70,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BashoPultProjectile::StaticGetClass() */

long * BashoPultProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BashoPultProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BashoPultProjectile::GetClass() const */

long * BashoPultProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"BashoPultProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BashoPultProjectile::SetRepulseZombie(bool) */

void __thiscall BashoPultProjectile::SetRepulseZombie(BashoPultProjectile *this,bool param_1)

{
  this[0x1a7] = (BashoPultProjectile)param_1;
  return;
}


/* BashoPultProjectile::Return() */

void __thiscall BashoPultProjectile::Return(BashoPultProjectile *this)

{
  long extraout_x0;
  
  Projectile::GetProps((Projectile *)this);
  nop();
  Projectile::LaunchAt
            ((Projectile *)this,(SexyVector3 *)(this + 0x1a8),*(float *)(extraout_x0 + 0x1e4),
             *(float *)(extraout_x0 + 0x1e8));
  return;
}


/* BashoPultProjectile::BashoPultProjectile() */

void __thiscall BashoPultProjectile::BashoPultProjectile(BashoPultProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067d9ca0;
  *(undefined ***)(this + 0x10) = &PTR__BashoPultProjectile_067d9e90;
  DVec3::DVec3((DVec3 *)(this + 0x1a8));
  ZombieRepulseSystem::ZombieRepulseSystem((ZombieRepulseSystem *)(this + 0x1b8));
  return;
}


/* BashoPultProjectile::StaticNew() */

BashoPultProjectile * BashoPultProjectile::StaticNew(void)

{
  BashoPultProjectile *this;
  
  this = ::operator_new(0x1d8);
  BashoPultProjectile(this);
  return this;
}


/* BashoPultProjectile::~BashoPultProjectile() */

void __thiscall BashoPultProjectile::~BashoPultProjectile(BashoPultProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067d9ca0;
  *(undefined ***)(this + 0x10) = &PTR__BashoPultProjectile_067d9e90;
  ZombieRepulseSystem::~ZombieRepulseSystem((ZombieRepulseSystem *)(this + 0x1b8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to BashoPultProjectile::~BashoPultProjectile() */

void __thiscall BashoPultProjectile::~BashoPultProjectile(BashoPultProjectile *this)

{
  ~BashoPultProjectile(this + -0x10);
  return;
}


/* BashoPultProjectile::~BashoPultProjectile() */

void __thiscall BashoPultProjectile::~BashoPultProjectile(BashoPultProjectile *this)

{
  ~BashoPultProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BashoPultProjectile::~BashoPultProjectile() */

void __thiscall BashoPultProjectile::~BashoPultProjectile(BashoPultProjectile *this)

{
  ~BashoPultProjectile(this + -0x10);
  return;
}


/* BashoPultProjectile::OnCollideGround() */

undefined8 __thiscall BashoPultProjectile::OnCollideGround(BashoPultProjectile *this)

{
  char cVar1;
  
  cVar1 = Projectile::OnCollideGround((Projectile *)this);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BashoPultProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall BashoPultProjectile::OnCollideEntity(BashoPultProjectile *this,BoardEntity *param_1)

{
  BashoPultProjectile BVar1;
  BashoPultProjectile BVar2;
  char cVar3;
  int iVar4;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  BVar1 = this[0x1a5];
  local_8 = ___stack_chk_guard;
  if (BVar1 == (BashoPultProjectile)0x0) {
    BVar2 = BVar1;
    if (this[0x1a6] == (BashoPultProjectile)0x0) {
      this[0x1a6] = (BashoPultProjectile)0x1;
      BVar2 = (BashoPultProjectile)Projectile::OnCollideEntity((Projectile *)this,param_1);
      if ((((param_1 != (BoardEntity *)0x0) && (this[0x1a7] != (BashoPultProjectile)0x0)) &&
          (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 != (Zombie *)0x0))
         && (((cVar3 = (**(code **)(*(long *)this_00 + 0x328))(), cVar3 == '\0' &&
              (cVar3 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar3 == '\0')) &&
             ((iVar4 = Zombie::GetSizeType(this_00), iVar4 != 2 &&
              (cVar3 = Zombie::CanBeLaunchedByPlants(this_00), cVar3 != '\0')))))) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
        iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
        ZombieRepulseSystem::Add
                  ((ZombieRepulseSystem *)(this + 0x1b8),(RtWeakPtr *)aRStack_10,(float)(iVar4 << 1)
                   ,0.5);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      }
      Return(this);
    }
  }
  else {
    BVar2 = (BashoPultProjectile)Projectile::OnCollideEntity((Projectile *)this,param_1);
    if (BVar2 == (BashoPultProjectile)0x0) {
      (**(code **)(*(long *)this + 0x48))(this);
      BVar2 = BVar1;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(BVar2);
  }
  return;
}

