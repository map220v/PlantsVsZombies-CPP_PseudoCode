// Class: InfernoPFProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoPFProjectileProps::StaticClassInit() */

void InfernoPFProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"InfernoPFProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03b0d1d0,600,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InfernoPFProjectileProps::StaticGetClass() */

long * InfernoPFProjectileProps::StaticGetClass(void)

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
  uVar2 = InfernoProjectileProps::StaticGetClass();
  (*pcVar3)(plVar1,"InfernoPFProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InfernoPFProjectileProps::GetClass() const */

long * InfernoPFProjectileProps::GetClass(void)

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
  uVar2 = InfernoProjectileProps::StaticGetClass();
  (*pcVar3)(plVar1,"InfernoPFProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InfernoPFProjectileProps::InfernoPFProjectileProps() */

void __thiscall InfernoPFProjectileProps::InfernoPFProjectileProps(InfernoPFProjectileProps *this)

{
  InfernoProjectileProps::InfernoProjectileProps((InfernoProjectileProps *)this);
  *(undefined4 *)(this + 0x248) = 0x40a00000;
  *(undefined ***)this = &PTR_GetClass_0672bf00;
  *(undefined4 *)(this + 0x24c) = 0x3fc00000;
  *(undefined4 *)(this + 0x244) = 0x3f19999a;
  *(undefined4 *)(this + 0x250) = 0;
  return;
}


/* InfernoPFProjectileProps::StaticNew() */

InfernoPFProjectileProps * InfernoPFProjectileProps::StaticNew(void)

{
  InfernoPFProjectileProps *this;
  
  this = ::operator_new(600);
  InfernoPFProjectileProps(this);
  return this;
}


/* InfernoPFProjectileProps::~InfernoPFProjectileProps() */

void __thiscall InfernoPFProjectileProps::~InfernoPFProjectileProps(InfernoPFProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0672bf00;
  InfernoProjectileProps::~InfernoProjectileProps((InfernoProjectileProps *)this);
  return;
}


/* InfernoPFProjectileProps::~InfernoPFProjectileProps() */

void __thiscall InfernoPFProjectileProps::~InfernoPFProjectileProps(InfernoPFProjectileProps *this)

{
  ~InfernoPFProjectileProps(this);
  AK::FreeHook(this);
  return;
}

