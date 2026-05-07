// Class: ZombieInvisiblePlaneProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieInvisiblePlaneProps::StaticClassInit() */

void ZombieInvisiblePlaneProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieInvisiblePlaneProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0479be6c,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieInvisiblePlaneProps::StaticGetClass() */

long * ZombieInvisiblePlaneProps::StaticGetClass(void)

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
  uVar2 = ZombieSkyCityProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieInvisiblePlaneProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieInvisiblePlaneProps::GetClass() const */

long * ZombieInvisiblePlaneProps::GetClass(void)

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
  uVar2 = ZombieSkyCityProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieInvisiblePlaneProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieInvisiblePlaneProps::ZombieInvisiblePlaneProps() */

void __thiscall
ZombieInvisiblePlaneProps::ZombieInvisiblePlaneProps(ZombieInvisiblePlaneProps *this)

{
  ZombieSkyCityProps::ZombieSkyCityProps((ZombieSkyCityProps *)this);
  *(undefined4 *)(this + 0x238) = 1;
  *(undefined ***)this = &PTR_GetClass_068dc300;
  return;
}


/* ZombieInvisiblePlaneProps::StaticNew() */

ZombieInvisiblePlaneProps * ZombieInvisiblePlaneProps::StaticNew(void)

{
  ZombieInvisiblePlaneProps *this;
  
  this = ::operator_new(0x240);
  ZombieInvisiblePlaneProps(this);
  return this;
}


/* ZombieInvisiblePlaneProps::~ZombieInvisiblePlaneProps() */

void __thiscall
ZombieInvisiblePlaneProps::~ZombieInvisiblePlaneProps(ZombieInvisiblePlaneProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068dc300;
  ZombieSkyCityProps::~ZombieSkyCityProps((ZombieSkyCityProps *)this);
  return;
}


/* ZombieInvisiblePlaneProps::~ZombieInvisiblePlaneProps() */

void __thiscall
ZombieInvisiblePlaneProps::~ZombieInvisiblePlaneProps(ZombieInvisiblePlaneProps *this)

{
  ~ZombieInvisiblePlaneProps(this);
  AK::FreeHook(this);
  return;
}

