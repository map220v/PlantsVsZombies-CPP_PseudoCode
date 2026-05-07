// Class: PrimalRafflesiaProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalRafflesiaProjectileProps::StaticClassInit() */

void PrimalRafflesiaProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PrimalRafflesiaProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0418e1c4,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PrimalRafflesiaProjectileProps::StaticGetClass() */

long * PrimalRafflesiaProjectileProps::StaticGetClass(void)

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
  uVar2 = ProjectilePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"PrimalRafflesiaProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PrimalRafflesiaProjectileProps::GetClass() const */

long * PrimalRafflesiaProjectileProps::GetClass(void)

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
  uVar2 = ProjectilePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"PrimalRafflesiaProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PrimalRafflesiaProjectileProps::~PrimalRafflesiaProjectileProps() */

void __thiscall
PrimalRafflesiaProjectileProps::~PrimalRafflesiaProjectileProps
          (PrimalRafflesiaProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067fbac0;
  std::string::~string((string *)(this + 0x1e0));
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* PrimalRafflesiaProjectileProps::~PrimalRafflesiaProjectileProps() */

void __thiscall
PrimalRafflesiaProjectileProps::~PrimalRafflesiaProjectileProps
          (PrimalRafflesiaProjectileProps *this)

{
  ~PrimalRafflesiaProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* PrimalRafflesiaProjectileProps::PrimalRafflesiaProjectileProps() */

void __thiscall
PrimalRafflesiaProjectileProps::PrimalRafflesiaProjectileProps(PrimalRafflesiaProjectileProps *this)

{
  size_t in_x2;
  
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067fbac0;
  Set8BytesTo0((string *)(this + 0x1e0));
  std::string::append((string *)(this + 0x1e0),"slime",in_x2);
  return;
}


/* PrimalRafflesiaProjectileProps::StaticNew() */

PrimalRafflesiaProjectileProps * PrimalRafflesiaProjectileProps::StaticNew(void)

{
  PrimalRafflesiaProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  PrimalRafflesiaProjectileProps(this);
  return this;
}

