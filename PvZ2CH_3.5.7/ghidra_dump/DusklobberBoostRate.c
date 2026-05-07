// Class: DusklobberBoostRate


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DusklobberBoostRate::StaticClassInit() */

void DusklobberBoostRate::StaticClassInit(void)

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
    std::string::string(asStack_10,"DusklobberBoostRate");
    (*pcVar2)(plVar1,asStack_10,FUN_043afcbc,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DusklobberBoostRate::StaticGetClass() */

long * DusklobberBoostRate::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DusklobberBoostRate",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DusklobberBoostRate::GetClass() const */

long * DusklobberBoostRate::GetClass(void)

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
  (*pcVar3)(plVar1,"DusklobberBoostRate",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DusklobberBoostRate::DusklobberBoostRate() */

void __thiscall DusklobberBoostRate::DusklobberBoostRate(DusklobberBoostRate *this)

{
  PlantNewAvatar::PlantNewAvatar((PlantNewAvatar *)this);
  *(undefined ***)this = &PTR_GetClass_068414c0;
  *(undefined4 *)(this + 100) = 0x3e4ccccd;
  return;
}


/* DusklobberBoostRate::StaticNew() */

DusklobberBoostRate * DusklobberBoostRate::StaticNew(void)

{
  DusklobberBoostRate *this;
  
  this = ::operator_new(0x68);
  DusklobberBoostRate(this);
  return this;
}


/* DusklobberBoostRate::~DusklobberBoostRate() */

void __thiscall DusklobberBoostRate::~DusklobberBoostRate(DusklobberBoostRate *this)

{
  *(undefined ***)this = &PTR_GetClass_068414c0;
  PlantNewAvatar::~PlantNewAvatar((PlantNewAvatar *)this);
  return;
}


/* DusklobberBoostRate::~DusklobberBoostRate() */

void __thiscall DusklobberBoostRate::~DusklobberBoostRate(DusklobberBoostRate *this)

{
  ~DusklobberBoostRate(this);
  AK::FreeHook(this);
  return;
}

