// Class: WinterMelonLevel5Projectile


/* WinterMelonLevel5Projectile::~WinterMelonLevel5Projectile() */

void __thiscall
WinterMelonLevel5Projectile::~WinterMelonLevel5Projectile(WinterMelonLevel5Projectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067ca590;
  *(undefined ***)(this + 0x10) = &PTR__WinterMelonLevel5Projectile_067ca780;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to WinterMelonLevel5Projectile::~WinterMelonLevel5Projectile() */

void __thiscall
WinterMelonLevel5Projectile::~WinterMelonLevel5Projectile(WinterMelonLevel5Projectile *this)

{
  ~WinterMelonLevel5Projectile(this + -0x10);
  return;
}


/* WinterMelonLevel5Projectile::~WinterMelonLevel5Projectile() */

void __thiscall
WinterMelonLevel5Projectile::~WinterMelonLevel5Projectile(WinterMelonLevel5Projectile *this)

{
  ~WinterMelonLevel5Projectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WinterMelonLevel5Projectile::~WinterMelonLevel5Projectile() */

void __thiscall
WinterMelonLevel5Projectile::~WinterMelonLevel5Projectile(WinterMelonLevel5Projectile *this)

{
  ~WinterMelonLevel5Projectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WinterMelonLevel5Projectile::StaticClassInit() */

void WinterMelonLevel5Projectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"WinterMelonLevel5Projectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0407ee78,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WinterMelonLevel5Projectile::StaticGetClass() */

long * WinterMelonLevel5Projectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WinterMelonLevel5Projectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WinterMelonLevel5Projectile::GetClass() const */

long * WinterMelonLevel5Projectile::GetClass(void)

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
  (*pcVar3)(plVar1,"WinterMelonLevel5Projectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WinterMelonLevel5Projectile::WinterMelonLevel5Projectile() */

void __thiscall
WinterMelonLevel5Projectile::WinterMelonLevel5Projectile(WinterMelonLevel5Projectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined4 *)(this + 0x1a8) = 0x41200000;
  *(undefined ***)this = &PTR_GetClass_067ca590;
  *(undefined ***)(this + 0x10) = &PTR__WinterMelonLevel5Projectile_067ca780;
  return;
}


/* WinterMelonLevel5Projectile::StaticNew() */

WinterMelonLevel5Projectile * WinterMelonLevel5Projectile::StaticNew(void)

{
  WinterMelonLevel5Projectile *this;
  
  this = ::operator_new(0x1b0);
  WinterMelonLevel5Projectile(this);
  return this;
}

