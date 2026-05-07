// Class: ZombieSkyCityGargantuarProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityGargantuarProps::StaticClassInit() */

void ZombieSkyCityGargantuarProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSkyCityGargantuarProps");
    (*pcVar2)(plVar1,asStack_10,FUN_047a8674,0x270,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkyCityGargantuarProps::StaticGetClass() */

long * ZombieSkyCityGargantuarProps::StaticGetClass(void)

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
  uVar2 = ZombieGargantuarProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSkyCityGargantuarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSkyCityGargantuarProps::GetClass() const */

long * ZombieSkyCityGargantuarProps::GetClass(void)

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
  uVar2 = ZombieGargantuarProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSkyCityGargantuarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSkyCityGargantuarProps::ZombieSkyCityGargantuarProps() */

void __thiscall
ZombieSkyCityGargantuarProps::ZombieSkyCityGargantuarProps(ZombieSkyCityGargantuarProps *this)

{
  ZombieGargantuarProps::ZombieGargantuarProps((ZombieGargantuarProps *)this);
  *(undefined4 *)(this + 0x268) = 2;
  *(undefined ***)this = &PTR_GetClass_068e08a0;
  return;
}


/* ZombieSkyCityGargantuarProps::StaticNew() */

ZombieSkyCityGargantuarProps * ZombieSkyCityGargantuarProps::StaticNew(void)

{
  ZombieSkyCityGargantuarProps *this;
  
  this = ::operator_new(0x270);
  ZombieSkyCityGargantuarProps(this);
  return this;
}


/* ZombieSkyCityGargantuarProps::~ZombieSkyCityGargantuarProps() */

void __thiscall
ZombieSkyCityGargantuarProps::~ZombieSkyCityGargantuarProps(ZombieSkyCityGargantuarProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068e08a0;
  ZombieGargantuarProps::~ZombieGargantuarProps((ZombieGargantuarProps *)this);
  return;
}


/* ZombieSkyCityGargantuarProps::~ZombieSkyCityGargantuarProps() */

void __thiscall
ZombieSkyCityGargantuarProps::~ZombieSkyCityGargantuarProps(ZombieSkyCityGargantuarProps *this)

{
  ~ZombieSkyCityGargantuarProps(this);
  AK::FreeHook(this);
  return;
}

