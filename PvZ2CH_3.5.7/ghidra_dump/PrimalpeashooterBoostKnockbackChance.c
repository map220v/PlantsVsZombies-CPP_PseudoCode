// Class: PrimalpeashooterBoostKnockbackChance


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalpeashooterBoostKnockbackChance::StaticClassInit() */

void PrimalpeashooterBoostKnockbackChance::StaticClassInit(void)

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
    std::string::string(asStack_10,"PrimalpeashooterBoostKnockbackChance");
    (*pcVar2)(plVar1,asStack_10,FUN_043b01e4,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PrimalpeashooterBoostKnockbackChance::StaticGetClass() */

long * PrimalpeashooterBoostKnockbackChance::StaticGetClass(void)

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
  uVar2 = PlantNewAvatar::StaticGetClass();
  (*pcVar3)(plVar1,"PrimalpeashooterBoostKnockbackChance",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PrimalpeashooterBoostKnockbackChance::GetClass() const */

long * PrimalpeashooterBoostKnockbackChance::GetClass(void)

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
  uVar2 = PlantNewAvatar::StaticGetClass();
  (*pcVar3)(plVar1,"PrimalpeashooterBoostKnockbackChance",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalpeashooterBoostKnockbackChance::PrimalpeashooterBoostKnockbackChance() */

void __thiscall
PrimalpeashooterBoostKnockbackChance::PrimalpeashooterBoostKnockbackChance
          (PrimalpeashooterBoostKnockbackChance *this)

{
  undefined4 uVar1;
  
  PlantNewAvatar::PlantNewAvatar((PlantNewAvatar *)this);
  uVar1 = _FUN_043b0aa4;
  *(undefined ***)this = &PTR_GetClass_068415e0;
  *(undefined4 *)(this + 100) = uVar1;
  return;
}


/* PrimalpeashooterBoostKnockbackChance::StaticNew() */

PrimalpeashooterBoostKnockbackChance * PrimalpeashooterBoostKnockbackChance::StaticNew(void)

{
  PrimalpeashooterBoostKnockbackChance *this;
  
  this = ::operator_new(0x68);
  PrimalpeashooterBoostKnockbackChance(this);
  return this;
}


/* PrimalpeashooterBoostKnockbackChance::~PrimalpeashooterBoostKnockbackChance() */

void __thiscall
PrimalpeashooterBoostKnockbackChance::~PrimalpeashooterBoostKnockbackChance
          (PrimalpeashooterBoostKnockbackChance *this)

{
  *(undefined ***)this = &PTR_GetClass_068415e0;
  PlantNewAvatar::~PlantNewAvatar((PlantNewAvatar *)this);
  return;
}


/* PrimalpeashooterBoostKnockbackChance::~PrimalpeashooterBoostKnockbackChance() */

void __thiscall
PrimalpeashooterBoostKnockbackChance::~PrimalpeashooterBoostKnockbackChance
          (PrimalpeashooterBoostKnockbackChance *this)

{
  ~PrimalpeashooterBoostKnockbackChance(this);
  AK::FreeHook(this);
  return;
}

