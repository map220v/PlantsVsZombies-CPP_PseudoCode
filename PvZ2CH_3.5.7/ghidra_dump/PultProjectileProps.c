// Class: PultProjectileProps


/* PultProjectileProps::PultProjectileProps(PultProjectileProps const&) */

void __thiscall
PultProjectileProps::PultProjectileProps(PultProjectileProps *this,PultProjectileProps *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this,(PropertySheetBase *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  this[0x20] = param_1[0x20];
  *(undefined ***)this = &PTR_GetClass_067a32b0;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  *(undefined4 *)(this + 0x18) = uVar3;
  *(undefined4 *)(this + 0x1c) = uVar4;
  return;
}


/* PultProjectileProps::PultProjectileProps() */

void __thiscall PultProjectileProps::PultProjectileProps(PultProjectileProps *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  this[0x20] = (PultProjectileProps)0x1;
  *(undefined ***)this = &PTR_GetClass_067a32b0;
  *(undefined4 *)(this + 0x14) = 0x3dcccccd;
  *(undefined4 *)(this + 0x1c) = 0x3dcccccd;
  *(undefined4 *)(this + 0x10) = 0x3f99999a;
  *(undefined4 *)(this + 0x18) = 0x43af0000;
  return;
}


/* PultProjectileProps::~PultProjectileProps() */

void __thiscall PultProjectileProps::~PultProjectileProps(PultProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a32b0;
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* PultProjectileProps::~PultProjectileProps() */

void __thiscall PultProjectileProps::~PultProjectileProps(PultProjectileProps *this)

{
  ~PultProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PultProjectileProps::StaticClassInit() */

void PultProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PultProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f82840,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PultProjectileProps::StaticGetClass() */

long * PultProjectileProps::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"PultProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PultProjectileProps::GetClass() const */

long * PultProjectileProps::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"PultProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PultProjectileProps::StaticNew() */

PultProjectileProps * PultProjectileProps::StaticNew(void)

{
  PultProjectileProps *this;
  
  this = ::operator_new(0x28);
  PultProjectileProps(this);
  return this;
}

