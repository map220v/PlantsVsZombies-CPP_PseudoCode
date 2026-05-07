// Class: ZombieModernSolarTruckProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernSolarTruckProps::StaticClassInit() */

void ZombieModernSolarTruckProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieModernSolarTruckProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04801234,0x238,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieModernSolarTruckProps::StaticGetClass() */

long * ZombieModernSolarTruckProps::StaticGetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieModernSolarTruckProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieModernSolarTruckProps::GetClass() const */

long * ZombieModernSolarTruckProps::GetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieModernSolarTruckProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieModernSolarTruckProps::ZombieModernSolarTruckProps() */

void __thiscall
ZombieModernSolarTruckProps::ZombieModernSolarTruckProps(ZombieModernSolarTruckProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x218) = 8;
  *(undefined ***)this = &PTR_GetClass_068fc5b0;
  *(undefined4 *)(this + 0x220) = 0xfa;
  *(undefined4 *)(this + 0x210) = 0x41200000;
  *(undefined4 *)(this + 0x230) = 0;
  *(undefined4 *)(this + 0x21c) = 0x3f000000;
  *(undefined4 *)(this + 0x214) = 0x40400000;
  *(undefined4 *)(this + 0x224) = 0x3f000000;
  *(undefined4 *)(this + 0x228) = 0x457a0000;
  *(undefined4 *)(this + 0x22c) = 0x3f000000;
  return;
}


/* ZombieModernSolarTruckProps::StaticNew() */

ZombieModernSolarTruckProps * ZombieModernSolarTruckProps::StaticNew(void)

{
  ZombieModernSolarTruckProps *this;
  
  this = ::operator_new(0x238);
  ZombieModernSolarTruckProps(this);
  return this;
}


/* ZombieModernSolarTruckProps::~ZombieModernSolarTruckProps() */

void __thiscall
ZombieModernSolarTruckProps::~ZombieModernSolarTruckProps(ZombieModernSolarTruckProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068fc5b0;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieModernSolarTruckProps::~ZombieModernSolarTruckProps() */

void __thiscall
ZombieModernSolarTruckProps::~ZombieModernSolarTruckProps(ZombieModernSolarTruckProps *this)

{
  ~ZombieModernSolarTruckProps(this);
  AK::FreeHook(this);
  return;
}

