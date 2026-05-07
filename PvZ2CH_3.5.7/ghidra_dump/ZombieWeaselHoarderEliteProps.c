// Class: ZombieWeaselHoarderEliteProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWeaselHoarderEliteProps::StaticClassInit() */

void ZombieWeaselHoarderEliteProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieWeaselHoarderEliteProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0468c148,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWeaselHoarderEliteProps::StaticGetClass() */

long * ZombieWeaselHoarderEliteProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieWeaselHoarderEliteProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWeaselHoarderEliteProps::GetClass() const */

long * ZombieWeaselHoarderEliteProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieWeaselHoarderEliteProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWeaselHoarderEliteProps::ZombieWeaselHoarderEliteProps() */

void __thiscall
ZombieWeaselHoarderEliteProps::ZombieWeaselHoarderEliteProps(ZombieWeaselHoarderEliteProps *this)

{
  ZombieChickenFarmerProps::ZombieChickenFarmerProps((ZombieChickenFarmerProps *)this);
  *(undefined4 *)(this + 0x23c) = 2;
  *(undefined4 *)(this + 0x240) = 4;
  *(undefined ***)this = &PTR_GetClass_0689fe40;
  *(undefined4 *)(this + 0x238) = 0x41200000;
  return;
}


/* ZombieWeaselHoarderEliteProps::StaticNew() */

ZombieWeaselHoarderEliteProps * ZombieWeaselHoarderEliteProps::StaticNew(void)

{
  ZombieWeaselHoarderEliteProps *this;
  
  this = ::operator_new(0x248);
  ZombieWeaselHoarderEliteProps(this);
  return this;
}


/* ZombieWeaselHoarderEliteProps::~ZombieWeaselHoarderEliteProps() */

void __thiscall
ZombieWeaselHoarderEliteProps::~ZombieWeaselHoarderEliteProps(ZombieWeaselHoarderEliteProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0689fe40;
  ZombieChickenFarmerProps::~ZombieChickenFarmerProps((ZombieChickenFarmerProps *)this);
  return;
}


/* ZombieWeaselHoarderEliteProps::~ZombieWeaselHoarderEliteProps() */

void __thiscall
ZombieWeaselHoarderEliteProps::~ZombieWeaselHoarderEliteProps(ZombieWeaselHoarderEliteProps *this)

{
  ~ZombieWeaselHoarderEliteProps(this);
  AK::FreeHook(this);
  return;
}

