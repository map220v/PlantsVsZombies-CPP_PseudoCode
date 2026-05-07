// Class: NukeLauncherAvatarProjectile


/* NukeLauncherAvatarProjectile::~NukeLauncherAvatarProjectile() */

void __thiscall
NukeLauncherAvatarProjectile::~NukeLauncherAvatarProjectile(NukeLauncherAvatarProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_068166d0;
  *(undefined ***)(this + 0x10) = &PTR__NukeLauncherAvatarProjectile_068168c8;
  NukeLauncherPlantfoodProjectile::~NukeLauncherPlantfoodProjectile
            ((NukeLauncherPlantfoodProjectile *)this);
  return;
}


/* non-virtual thunk to NukeLauncherAvatarProjectile::~NukeLauncherAvatarProjectile() */

void __thiscall
NukeLauncherAvatarProjectile::~NukeLauncherAvatarProjectile(NukeLauncherAvatarProjectile *this)

{
  ~NukeLauncherAvatarProjectile(this + -0x10);
  return;
}


/* NukeLauncherAvatarProjectile::~NukeLauncherAvatarProjectile() */

void __thiscall
NukeLauncherAvatarProjectile::~NukeLauncherAvatarProjectile(NukeLauncherAvatarProjectile *this)

{
  ~NukeLauncherAvatarProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NukeLauncherAvatarProjectile::~NukeLauncherAvatarProjectile() */

void __thiscall
NukeLauncherAvatarProjectile::~NukeLauncherAvatarProjectile(NukeLauncherAvatarProjectile *this)

{
  ~NukeLauncherAvatarProjectile(this + -0x10);
  return;
}


/* NukeLauncherAvatarProjectile::NukeLauncherAvatarProjectile() */

void __thiscall
NukeLauncherAvatarProjectile::NukeLauncherAvatarProjectile(NukeLauncherAvatarProjectile *this)

{
  NukeLauncherPlantfoodProjectile::NukeLauncherPlantfoodProjectile
            ((NukeLauncherPlantfoodProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_068166d0;
  *(undefined ***)(this + 0x10) = &PTR__NukeLauncherAvatarProjectile_068168c8;
  return;
}


/* NukeLauncherAvatarProjectile::StaticNew() */

NukeLauncherAvatarProjectile * NukeLauncherAvatarProjectile::StaticNew(void)

{
  NukeLauncherAvatarProjectile *this;
  
  this = ::operator_new(0x1a8);
  NukeLauncherAvatarProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NukeLauncherAvatarProjectile::StaticClassInit() */

void NukeLauncherAvatarProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"NukeLauncherAvatarProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_042433a4,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NukeLauncherAvatarProjectile::StaticGetClass() */

long * NukeLauncherAvatarProjectile::StaticGetClass(void)

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
  uVar2 = NukeLauncherPlantfoodProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"NukeLauncherAvatarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NukeLauncherAvatarProjectile::GetClass() const */

long * NukeLauncherAvatarProjectile::GetClass(void)

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
  uVar2 = NukeLauncherPlantfoodProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"NukeLauncherAvatarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

