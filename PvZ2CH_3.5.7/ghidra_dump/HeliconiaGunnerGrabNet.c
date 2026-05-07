// Class: HeliconiaGunnerGrabNet


/* HeliconiaGunnerGrabNet::~HeliconiaGunnerGrabNet() */

void __thiscall HeliconiaGunnerGrabNet::~HeliconiaGunnerGrabNet(HeliconiaGunnerGrabNet *this)

{
  *(undefined ***)this = &PTR_GetClass_069ad210;
  *(undefined ***)(this + 0x10) = &PTR__HeliconiaGunnerGrabNet_069ad400;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to HeliconiaGunnerGrabNet::~HeliconiaGunnerGrabNet() */

void __thiscall HeliconiaGunnerGrabNet::~HeliconiaGunnerGrabNet(HeliconiaGunnerGrabNet *this)

{
  ~HeliconiaGunnerGrabNet(this + -0x10);
  return;
}


/* HeliconiaGunnerGrabNet::~HeliconiaGunnerGrabNet() */

void __thiscall HeliconiaGunnerGrabNet::~HeliconiaGunnerGrabNet(HeliconiaGunnerGrabNet *this)

{
  ~HeliconiaGunnerGrabNet(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to HeliconiaGunnerGrabNet::~HeliconiaGunnerGrabNet() */

void __thiscall HeliconiaGunnerGrabNet::~HeliconiaGunnerGrabNet(HeliconiaGunnerGrabNet *this)

{
  ~HeliconiaGunnerGrabNet(this + -0x10);
  return;
}


/* HeliconiaGunnerGrabNet::onUpdate(float) */

void HeliconiaGunnerGrabNet::onUpdate(float param_1)

{
  Projectile *in_x0;
  float *pfVar1;
  
  pfVar1 = (float *)Projectile::GetVelocity(in_x0);
  atan2f(pfVar1[2],*pfVar1);
  FUN_04d31024(in_x0 + 0xc4);
  return;
}


/* HeliconiaGunnerGrabNet::HeliconiaGunnerGrabNet() */

void __thiscall HeliconiaGunnerGrabNet::HeliconiaGunnerGrabNet(HeliconiaGunnerGrabNet *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069ad210;
  *(undefined ***)(this + 0x10) = &PTR__HeliconiaGunnerGrabNet_069ad400;
  return;
}


/* HeliconiaGunnerGrabNet::StaticNew() */

HeliconiaGunnerGrabNet * HeliconiaGunnerGrabNet::StaticNew(void)

{
  HeliconiaGunnerGrabNet *this;
  
  this = ::operator_new(0x1a8);
  HeliconiaGunnerGrabNet(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeliconiaGunnerGrabNet::StaticClassInit() */

void HeliconiaGunnerGrabNet::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeliconiaGunnerGrabNet");
    (*pcVar2)(plVar1,asStack_10,FUN_04d324a0,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeliconiaGunnerGrabNet::StaticGetClass() */

long * HeliconiaGunnerGrabNet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HeliconiaGunnerGrabNet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeliconiaGunnerGrabNet::GetClass() const */

long * HeliconiaGunnerGrabNet::GetClass(void)

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
  (*pcVar3)(plVar1,"HeliconiaGunnerGrabNet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeliconiaGunnerGrabNet::OnCollideEntity(BoardEntity*) */

void __thiscall
HeliconiaGunnerGrabNet::OnCollideEntity(HeliconiaGunnerGrabNet *this,BoardEntity *param_1)

{
  nop();
  Zombie::SetZombieFlag();
  Projectile::OnCollideEntity((Projectile *)this,param_1);
  return;
}

