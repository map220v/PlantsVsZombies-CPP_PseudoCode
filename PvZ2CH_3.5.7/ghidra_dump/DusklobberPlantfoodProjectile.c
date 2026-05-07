// Class: DusklobberPlantfoodProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DusklobberPlantfoodProjectile::StaticClassInit() */

void DusklobberPlantfoodProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"DusklobberPlantfoodProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03bda52c,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DusklobberPlantfoodProjectile::StaticGetClass() */

long * DusklobberPlantfoodProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DusklobberPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DusklobberPlantfoodProjectile::GetClass() const */

long * DusklobberPlantfoodProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"DusklobberPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DusklobberPlantfoodProjectile::DusklobberPlantfoodProjectile() */

void __thiscall
DusklobberPlantfoodProjectile::DusklobberPlantfoodProjectile(DusklobberPlantfoodProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0673db60;
  *(undefined ***)(this + 0x10) = &PTR__DusklobberPlantfoodProjectile_0673dd50;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  return;
}


/* DusklobberPlantfoodProjectile::StaticNew() */

DusklobberPlantfoodProjectile * DusklobberPlantfoodProjectile::StaticNew(void)

{
  DusklobberPlantfoodProjectile *this;
  
  this = ::operator_new(0x1b0);
  DusklobberPlantfoodProjectile(this);
  return this;
}


/* DusklobberPlantfoodProjectile::~DusklobberPlantfoodProjectile() */

void __thiscall
DusklobberPlantfoodProjectile::~DusklobberPlantfoodProjectile(DusklobberPlantfoodProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0673db60;
  *(undefined ***)(this + 0x10) = &PTR__DusklobberPlantfoodProjectile_0673dd50;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to DusklobberPlantfoodProjectile::~DusklobberPlantfoodProjectile() */

void __thiscall
DusklobberPlantfoodProjectile::~DusklobberPlantfoodProjectile(DusklobberPlantfoodProjectile *this)

{
  ~DusklobberPlantfoodProjectile(this + -0x10);
  return;
}


/* DusklobberPlantfoodProjectile::~DusklobberPlantfoodProjectile() */

void __thiscall
DusklobberPlantfoodProjectile::~DusklobberPlantfoodProjectile(DusklobberPlantfoodProjectile *this)

{
  ~DusklobberPlantfoodProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DusklobberPlantfoodProjectile::~DusklobberPlantfoodProjectile() */

void __thiscall
DusklobberPlantfoodProjectile::~DusklobberPlantfoodProjectile(DusklobberPlantfoodProjectile *this)

{
  ~DusklobberPlantfoodProjectile(this + -0x10);
  return;
}


/* DusklobberPlantfoodProjectile::onUpdate(float) */

void DusklobberPlantfoodProjectile::onUpdate(float param_1)

{
  PlantCrackerPlantfoodProjectileAvatar *in_x0;
  GridItemDusklobberFlower *this;
  long extraout_x0;
  float fVar1;
  
  fVar1 = *(float *)(in_x0 + 0x1c);
  FUN_03bd4574(*(undefined4 *)(in_x0 + 0x18),fVar1,*(undefined4 *)(in_x0 + 0x20));
  if (-50.0 <= fVar1) {
    return;
  }
  this = (GridItemDusklobberFlower *)PlantCrackerPlantfoodProjectileAvatar::GetFlower(in_x0);
  if (this != (GridItemDusklobberFlower *)0x0) {
    Projectile::GetProps((Projectile *)in_x0);
    nop();
    GridItemDusklobberFlower::SetPauseBeforeStartFlower(this,*(float *)(extraout_x0 + 0x1f0));
  }
  (**(code **)(*(long *)in_x0 + 0x48))();
  return;
}

