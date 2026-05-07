// Class: ImpatiensProjectile_1


/* ImpatiensProjectile_1::~ImpatiensProjectile_1() */

void __thiscall ImpatiensProjectile_1::~ImpatiensProjectile_1(ImpatiensProjectile_1 *this)

{
  *(undefined ***)this = &PTR_GetClass_067c02b0;
  *(undefined ***)(this + 0x10) = &PTR__ImpatiensProjectile_1_067c04a8;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ImpatiensProjectile_1::~ImpatiensProjectile_1() */

void __thiscall ImpatiensProjectile_1::~ImpatiensProjectile_1(ImpatiensProjectile_1 *this)

{
  ~ImpatiensProjectile_1(this + -0x10);
  return;
}


/* ImpatiensProjectile_1::~ImpatiensProjectile_1() */

void __thiscall ImpatiensProjectile_1::~ImpatiensProjectile_1(ImpatiensProjectile_1 *this)

{
  ~ImpatiensProjectile_1(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ImpatiensProjectile_1::~ImpatiensProjectile_1() */

void __thiscall ImpatiensProjectile_1::~ImpatiensProjectile_1(ImpatiensProjectile_1 *this)

{
  ~ImpatiensProjectile_1(this + -0x10);
  return;
}


/* ImpatiensProjectile_1::ImpatiensProjectile_1() */

void __thiscall ImpatiensProjectile_1::ImpatiensProjectile_1(ImpatiensProjectile_1 *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067c02b0;
  *(undefined ***)(this + 0x10) = &PTR__ImpatiensProjectile_1_067c04a8;
  return;
}


/* ImpatiensProjectile_1::StaticNew() */

ImpatiensProjectile_1 * ImpatiensProjectile_1::StaticNew(void)

{
  ImpatiensProjectile_1 *this;
  
  this = ::operator_new(0x1a8);
  ImpatiensProjectile_1(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ImpatiensProjectile_1::StaticClassInit() */

void ImpatiensProjectile_1::StaticClassInit(void)

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
    std::string::string(asStack_10,"ImpatiensProjectile_1");
    (*pcVar2)(plVar1,asStack_10,FUN_04051540,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ImpatiensProjectile_1::StaticGetClass() */

long * ImpatiensProjectile_1::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ImpatiensProjectile_1",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ImpatiensProjectile_1::GetClass() const */

long * ImpatiensProjectile_1::GetClass(void)

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
  (*pcVar3)(plVar1,"ImpatiensProjectile_1",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

