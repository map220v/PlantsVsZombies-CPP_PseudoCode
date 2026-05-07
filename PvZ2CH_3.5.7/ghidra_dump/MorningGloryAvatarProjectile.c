// Class: MorningGloryAvatarProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MorningGloryAvatarProjectile::StaticClassInit() */

void MorningGloryAvatarProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"MorningGloryAvatarProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04176a00,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MorningGloryAvatarProjectile::StaticGetClass() */

long * MorningGloryAvatarProjectile::StaticGetClass(void)

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
  uVar2 = MorningGloryPFProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"MorningGloryAvatarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MorningGloryAvatarProjectile::GetClass() const */

long * MorningGloryAvatarProjectile::GetClass(void)

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
  uVar2 = MorningGloryPFProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"MorningGloryAvatarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MorningGloryAvatarProjectile::MorningGloryAvatarProjectile() */

void __thiscall
MorningGloryAvatarProjectile::MorningGloryAvatarProjectile(MorningGloryAvatarProjectile *this)

{
  MorningGloryPFProjectile::MorningGloryPFProjectile((MorningGloryPFProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_067f61d0;
  *(undefined ***)(this + 0x10) = &PTR__MorningGloryAvatarProjectile_067f63c0;
  return;
}


/* MorningGloryAvatarProjectile::StaticNew() */

MorningGloryAvatarProjectile * MorningGloryAvatarProjectile::StaticNew(void)

{
  MorningGloryAvatarProjectile *this;
  
  this = ::operator_new(0x1d0);
  MorningGloryAvatarProjectile(this);
  return this;
}


/* MorningGloryAvatarProjectile::~MorningGloryAvatarProjectile() */

void __thiscall
MorningGloryAvatarProjectile::~MorningGloryAvatarProjectile(MorningGloryAvatarProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067f61d0;
  *(undefined ***)(this + 0x10) = &PTR__MorningGloryAvatarProjectile_067f63c0;
  MorningGloryPFProjectile::~MorningGloryPFProjectile((MorningGloryPFProjectile *)this);
  return;
}


/* non-virtual thunk to MorningGloryAvatarProjectile::~MorningGloryAvatarProjectile() */

void __thiscall
MorningGloryAvatarProjectile::~MorningGloryAvatarProjectile(MorningGloryAvatarProjectile *this)

{
  ~MorningGloryAvatarProjectile(this + -0x10);
  return;
}


/* MorningGloryAvatarProjectile::~MorningGloryAvatarProjectile() */

void __thiscall
MorningGloryAvatarProjectile::~MorningGloryAvatarProjectile(MorningGloryAvatarProjectile *this)

{
  ~MorningGloryAvatarProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MorningGloryAvatarProjectile::~MorningGloryAvatarProjectile() */

void __thiscall
MorningGloryAvatarProjectile::~MorningGloryAvatarProjectile(MorningGloryAvatarProjectile *this)

{
  ~MorningGloryAvatarProjectile(this + -0x10);
  return;
}

