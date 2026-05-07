// Class: ZombiePVPChickenFarmerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPChickenFarmerProps::StaticClassInit() */

void ZombiePVPChickenFarmerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePVPChickenFarmerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_049a255c,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPChickenFarmerProps::StaticGetClass() */

long * ZombiePVPChickenFarmerProps::StaticGetClass(void)

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
  uVar2 = ZombieChickenFarmerProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPChickenFarmerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPChickenFarmerProps::GetClass() const */

long * ZombiePVPChickenFarmerProps::GetClass(void)

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
  uVar2 = ZombieChickenFarmerProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPChickenFarmerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPChickenFarmerProps::ZombiePVPChickenFarmerProps() */

void __thiscall
ZombiePVPChickenFarmerProps::ZombiePVPChickenFarmerProps(ZombiePVPChickenFarmerProps *this)

{
  ZombieChickenFarmerProps::ZombieChickenFarmerProps((ZombieChickenFarmerProps *)this);
  *(undefined ***)this = &PTR_GetClass_06922270;
  Set8BytesTo0(this + 0x238);
  return;
}


/* ZombiePVPChickenFarmerProps::StaticNew() */

ZombiePVPChickenFarmerProps * ZombiePVPChickenFarmerProps::StaticNew(void)

{
  ZombiePVPChickenFarmerProps *this;
  
  this = ::operator_new(0x240);
  ZombiePVPChickenFarmerProps(this);
  return this;
}


/* ZombiePVPChickenFarmerProps::~ZombiePVPChickenFarmerProps() */

void __thiscall
ZombiePVPChickenFarmerProps::~ZombiePVPChickenFarmerProps(ZombiePVPChickenFarmerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06922270;
  std::string::~string((string *)(this + 0x238));
  ZombieChickenFarmerProps::~ZombieChickenFarmerProps((ZombieChickenFarmerProps *)this);
  return;
}


/* ZombiePVPChickenFarmerProps::~ZombiePVPChickenFarmerProps() */

void __thiscall
ZombiePVPChickenFarmerProps::~ZombiePVPChickenFarmerProps(ZombiePVPChickenFarmerProps *this)

{
  ~ZombiePVPChickenFarmerProps(this);
  AK::FreeHook(this);
  return;
}

