// Class: RiftSeedBankProperties


/* RiftSeedBankProperties::GetBankType() const */

undefined8 RiftSeedBankProperties::GetBankType(void)

{
  return 7;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftSeedBankProperties::StaticClassInit() */

void RiftSeedBankProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftSeedBankProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0441a3dc,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftSeedBankProperties::RiftSeedBankProperties() */

void __thiscall RiftSeedBankProperties::RiftSeedBankProperties(RiftSeedBankProperties *this)

{
  SeedBankProperties::SeedBankProperties((SeedBankProperties *)this);
  *(undefined4 *)(this + 0x40) = 1;
  *(undefined ***)this = &PTR_GetClass_06848590;
  return;
}


/* RiftSeedBankProperties::StaticNew() */

RiftSeedBankProperties * RiftSeedBankProperties::StaticNew(void)

{
  RiftSeedBankProperties *this;
  
  this = ::operator_new(0xd0);
  RiftSeedBankProperties(this);
  return this;
}


/* RiftSeedBankProperties::~RiftSeedBankProperties() */

void __thiscall RiftSeedBankProperties::~RiftSeedBankProperties(RiftSeedBankProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06848590;
  SeedBankProperties::~SeedBankProperties((SeedBankProperties *)this);
  return;
}


/* RiftSeedBankProperties::~RiftSeedBankProperties() */

void __thiscall RiftSeedBankProperties::~RiftSeedBankProperties(RiftSeedBankProperties *this)

{
  ~RiftSeedBankProperties(this);
  AK::FreeHook(this);
  return;
}


/* RiftSeedBankProperties::StaticGetClass() */

long * RiftSeedBankProperties::StaticGetClass(void)

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
  uVar2 = SeedBankProperties::StaticGetClass();
  (*pcVar3)(plVar1,"RiftSeedBankProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftSeedBankProperties::GetClass() const */

long * RiftSeedBankProperties::GetClass(void)

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
  uVar2 = SeedBankProperties::StaticGetClass();
  (*pcVar3)(plVar1,"RiftSeedBankProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

