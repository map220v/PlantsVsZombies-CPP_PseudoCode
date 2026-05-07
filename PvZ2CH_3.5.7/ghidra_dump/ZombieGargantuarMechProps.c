// Class: ZombieGargantuarMechProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGargantuarMechProps::StaticClassInit() */

void ZombieGargantuarMechProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieGargantuarMechProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046bd0b4,0x298,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieGargantuarMechProps::ZombieGargantuarMechProps() */

void __thiscall
ZombieGargantuarMechProps::ZombieGargantuarMechProps(ZombieGargantuarMechProps *this)

{
  ZombieGargantuarProps::ZombieGargantuarProps((ZombieGargantuarProps *)this);
  *(undefined ***)this = &PTR_GetClass_068b0340;
  Set8BytesTo0(this + 0x288);
  Set8BytesTo0(this + 0x290);
  return;
}


/* ZombieGargantuarMechProps::StaticNew() */

ZombieGargantuarMechProps * ZombieGargantuarMechProps::StaticNew(void)

{
  ZombieGargantuarMechProps *this;
  
  this = ::operator_new(0x298);
  ZombieGargantuarMechProps(this);
  return this;
}


/* ZombieGargantuarMechProps::~ZombieGargantuarMechProps() */

void __thiscall
ZombieGargantuarMechProps::~ZombieGargantuarMechProps(ZombieGargantuarMechProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b0340;
  std::string::~string((string *)(this + 0x290));
  std::string::~string((string *)(this + 0x288));
  ZombieGargantuarProps::~ZombieGargantuarProps((ZombieGargantuarProps *)this);
  return;
}


/* ZombieGargantuarMechProps::~ZombieGargantuarMechProps() */

void __thiscall
ZombieGargantuarMechProps::~ZombieGargantuarMechProps(ZombieGargantuarMechProps *this)

{
  ~ZombieGargantuarMechProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieGargantuarMechProps::StaticGetClass() */

long * ZombieGargantuarMechProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieGargantuarMechProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieGargantuarMechProps::GetClass() const */

long * ZombieGargantuarMechProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieGargantuarMechProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

