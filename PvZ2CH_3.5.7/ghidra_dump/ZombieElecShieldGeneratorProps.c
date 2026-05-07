// Class: ZombieElecShieldGeneratorProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieElecShieldGeneratorProps::StaticClassInit() */

void ZombieElecShieldGeneratorProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieElecShieldGeneratorProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04c7d6c0,600,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieElecShieldGeneratorProps::StaticGetClass() */

long * ZombieElecShieldGeneratorProps::StaticGetClass(void)

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
  uVar2 = ZombieMechProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieElecShieldGeneratorProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieElecShieldGeneratorProps::GetClass() const */

long * ZombieElecShieldGeneratorProps::GetClass(void)

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
  uVar2 = ZombieMechProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieElecShieldGeneratorProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieElecShieldGeneratorProps::ZombieElecShieldGeneratorProps() */

void __thiscall
ZombieElecShieldGeneratorProps::ZombieElecShieldGeneratorProps(ZombieElecShieldGeneratorProps *this)

{
  ZombieMechProps::ZombieMechProps((ZombieMechProps *)this);
  *(undefined ***)this = &PTR_GetClass_06992680;
  Set8BytesTo0(this + 0x248);
  Set8BytesTo0(this + 0x250);
  *(undefined4 *)(this + 0x234) = 1;
  this[0x23c] = (ZombieElecShieldGeneratorProps)0x1;
  *(undefined4 *)(this + 0x228) = 0x40400000;
  *(undefined4 *)(this + 0x230) = 0x44960000;
  *(undefined4 *)(this + 0x22c) = 0x40400000;
  *(undefined4 *)(this + 0x224) = 0x41700000;
  *(undefined4 *)(this + 0x238) = 0xbf800000;
  *(undefined4 *)(this + 0x240) = 0x42200000;
  return;
}


/* ZombieElecShieldGeneratorProps::StaticNew() */

ZombieElecShieldGeneratorProps * ZombieElecShieldGeneratorProps::StaticNew(void)

{
  ZombieElecShieldGeneratorProps *this;
  
  this = ::operator_new(600);
  ZombieElecShieldGeneratorProps(this);
  return this;
}


/* ZombieElecShieldGeneratorProps::~ZombieElecShieldGeneratorProps() */

void __thiscall
ZombieElecShieldGeneratorProps::~ZombieElecShieldGeneratorProps
          (ZombieElecShieldGeneratorProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06992680;
  std::string::~string((string *)(this + 0x250));
  std::string::~string((string *)(this + 0x248));
  ZombieMechProps::~ZombieMechProps((ZombieMechProps *)this);
  return;
}


/* ZombieElecShieldGeneratorProps::~ZombieElecShieldGeneratorProps() */

void __thiscall
ZombieElecShieldGeneratorProps::~ZombieElecShieldGeneratorProps
          (ZombieElecShieldGeneratorProps *this)

{
  ~ZombieElecShieldGeneratorProps(this);
  AK::FreeHook(this);
  return;
}

