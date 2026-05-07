// Class: PineconeProjectile


/* PineconeProjectile::SetOwnerPlant(PlantPinecone*) */

void __thiscall PineconeProjectile::SetOwnerPlant(PineconeProjectile *this,PlantPinecone *param_1)

{
  *(PlantPinecone **)(this + 0x1a8) = param_1;
  return;
}


/* PineconeProjectile::onProjectileInitialized() */

void __thiscall PineconeProjectile::onProjectileInitialized(PineconeProjectile *this)

{
  *(undefined8 *)(this + 0x1a8) = 0;
  return;
}


/* PineconeProjectile::~PineconeProjectile() */

void __thiscall PineconeProjectile::~PineconeProjectile(PineconeProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06824a90;
  *(undefined ***)(this + 0x10) = &PTR__PineconeProjectile_06824c80;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PineconeProjectile::~PineconeProjectile() */

void __thiscall PineconeProjectile::~PineconeProjectile(PineconeProjectile *this)

{
  ~PineconeProjectile(this + -0x10);
  return;
}


/* PineconeProjectile::~PineconeProjectile() */

void __thiscall PineconeProjectile::~PineconeProjectile(PineconeProjectile *this)

{
  ~PineconeProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PineconeProjectile::~PineconeProjectile() */

void __thiscall PineconeProjectile::~PineconeProjectile(PineconeProjectile *this)

{
  ~PineconeProjectile(this + -0x10);
  return;
}


/* PineconeProjectile::PineconeProjectile() */

void __thiscall PineconeProjectile::PineconeProjectile(PineconeProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06824a90;
  *(undefined ***)(this + 0x10) = &PTR__PineconeProjectile_06824c80;
  return;
}


/* PineconeProjectile::StaticNew() */

PineconeProjectile * PineconeProjectile::StaticNew(void)

{
  PineconeProjectile *this;
  
  this = ::operator_new(0x1b0);
  PineconeProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PineconeProjectile::StaticClassInit() */

void PineconeProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PineconeProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04280770,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PineconeProjectile::StaticGetClass() */

long * PineconeProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PineconeProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PineconeProjectile::GetClass() const */

long * PineconeProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PineconeProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PineconeProjectile::OnCollideEntity(BoardEntity*) */

undefined4 __thiscall
PineconeProjectile::OnCollideEntity(PineconeProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  Zombie *this_00;
  CurvedVal *this_01;
  
  uVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  if ((((*(long *)(this + 0x1a8) != 0) && (param_1 != (BoardEntity *)0x0)) &&
      (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)) &&
     (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 != (Zombie *)0x0)) {
    cVar2 = Zombie::HasHead(this_00);
    if (cVar2 == '\0') {
      this_01 = *(CurvedVal **)(this + 0x1a8);
      cVar2 = FUN_0427fdbc(this_01[0x71]);
      if (cVar2 == '\0') {
        Sexy::CurvedVal::SetMode(this_01,1);
      }
    }
    else {
      Sexy::CurvedVal::SetMode(*(CurvedVal **)(this + 0x1a8),0);
    }
  }
  return uVar3;
}

