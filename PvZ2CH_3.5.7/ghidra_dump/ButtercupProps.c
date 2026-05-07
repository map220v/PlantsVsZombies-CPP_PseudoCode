// Class: ButtercupProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ButtercupProps::StaticClassInit() */

void ButtercupProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ButtercupProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03b35198,0x380,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ButtercupProps::StaticGetClass() */

long * ButtercupProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ButtercupProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ButtercupProps::GetClass() const */

long * ButtercupProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ButtercupProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ButtercupProps::ButtercupProps() */

void __thiscall ButtercupProps::ButtercupProps(ButtercupProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0672f7b0;
  *(undefined4 *)(this + 0x2b8) = 0x3ea8f5c3;
  ClassRestrictionSet::ClassRestrictionSet((ClassRestrictionSet *)(this + 0x2c0));
  PultProjectileProps::PultProjectileProps((PultProjectileProps *)(this + 0x2e8));
  PultProjectileProps::PultProjectileProps((PultProjectileProps *)(this + 0x310));
  *(undefined4 *)(this + 0x360) = 2;
  *(undefined4 *)(this + 0x36c) = 2;
  *(undefined4 *)(this + 0x35c) = 1;
  *(undefined4 *)(this + 0x368) = 1;
  *(undefined4 *)(this + 0x364) = 3;
  *(undefined4 *)(this + 0x338) = 0x420c0000;
  *(undefined4 *)(this + 0x33c) = 0x43960000;
  *(undefined4 *)(this + 0x340) = 0x43af0000;
  *(undefined4 *)(this + 0x344) = 0x40a00000;
  *(undefined4 *)(this + 0x370) = 0x3e19999a;
  *(undefined4 *)(this + 0x348) = 0x40a00000;
  *(undefined4 *)(this + 0x34c) = 0x40a00000;
  *(undefined4 *)(this + 0x350) = 0x40a00000;
  *(undefined4 *)(this + 0x354) = 0x40a00000;
  *(undefined4 *)(this + 0x358) = 0x40a00000;
  *(undefined4 *)(this + 0x374) = 0x42c80000;
  *(undefined4 *)(this + 0x378) = 0x43960000;
  *(undefined4 *)(this + 0x37c) = 0x43af0000;
  return;
}


/* ButtercupProps::StaticNew() */

ButtercupProps * ButtercupProps::StaticNew(void)

{
  ButtercupProps *this;
  
  this = ::operator_new(0x380);
  ButtercupProps(this);
  return this;
}


/* ButtercupProps::~ButtercupProps() */

void __thiscall ButtercupProps::~ButtercupProps(ButtercupProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0672f7b0;
  PultProjectileProps::~PultProjectileProps((PultProjectileProps *)(this + 0x310));
  PultProjectileProps::~PultProjectileProps((PultProjectileProps *)(this + 0x2e8));
  ClassRestrictionSet::~ClassRestrictionSet((ClassRestrictionSet *)(this + 0x2c0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* ButtercupProps::~ButtercupProps() */

void __thiscall ButtercupProps::~ButtercupProps(ButtercupProps *this)

{
  ~ButtercupProps(this);
  AK::FreeHook(this);
  return;
}

