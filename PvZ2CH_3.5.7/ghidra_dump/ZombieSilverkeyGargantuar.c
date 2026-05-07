// Class: ZombieSilverkeyGargantuar


/* ZombieSilverkeyGargantuar::onInitialized() */

void __thiscall ZombieSilverkeyGargantuar::onInitialized(ZombieSilverkeyGargantuar *this)

{
  size_t in_x2;
  
  ZombieGargantuar::onInitialized((ZombieGargantuar *)this);
  std::string::append((string *)(this + 0xb8),"spawn",in_x2);
  return;
}


/* ZombieSilverkeyGargantuar::~ZombieSilverkeyGargantuar() */

void __thiscall
ZombieSilverkeyGargantuar::~ZombieSilverkeyGargantuar(ZombieSilverkeyGargantuar *this)

{
  *(undefined ***)this = &PTR_GetClass_06692990;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSilverkeyGargantuar_066933e8;
  ZombieGargantuar::~ZombieGargantuar((ZombieGargantuar *)this);
  return;
}


/* non-virtual thunk to ZombieSilverkeyGargantuar::~ZombieSilverkeyGargantuar() */

void __thiscall
ZombieSilverkeyGargantuar::~ZombieSilverkeyGargantuar(ZombieSilverkeyGargantuar *this)

{
  ~ZombieSilverkeyGargantuar(this + -0x10);
  return;
}


/* ZombieSilverkeyGargantuar::~ZombieSilverkeyGargantuar() */

void __thiscall
ZombieSilverkeyGargantuar::~ZombieSilverkeyGargantuar(ZombieSilverkeyGargantuar *this)

{
  ~ZombieSilverkeyGargantuar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieSilverkeyGargantuar::~ZombieSilverkeyGargantuar() */

void __thiscall
ZombieSilverkeyGargantuar::~ZombieSilverkeyGargantuar(ZombieSilverkeyGargantuar *this)

{
  ~ZombieSilverkeyGargantuar(this + -0x10);
  return;
}


/* ZombieSilverkeyGargantuar::ZombieSilverkeyGargantuar() */

void __thiscall
ZombieSilverkeyGargantuar::ZombieSilverkeyGargantuar(ZombieSilverkeyGargantuar *this)

{
  ZombieGargantuar::ZombieGargantuar((ZombieGargantuar *)this);
  *(undefined ***)this = &PTR_GetClass_06692990;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSilverkeyGargantuar_066933e8;
  return;
}


/* ZombieSilverkeyGargantuar::StaticNew() */

ZombieSilverkeyGargantuar * ZombieSilverkeyGargantuar::StaticNew(void)

{
  ZombieSilverkeyGargantuar *this;
  
  this = ::operator_new(0x808);
  ZombieSilverkeyGargantuar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSilverkeyGargantuar::StaticClassInit() */

void ZombieSilverkeyGargantuar::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSilverkeyGargantuar");
    (*pcVar2)(plVar1,asStack_10,FUN_03736cd4,0x808,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSilverkeyGargantuar::StaticGetClass() */

long * ZombieSilverkeyGargantuar::StaticGetClass(void)

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
  uVar2 = ZombieGargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSilverkeyGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSilverkeyGargantuar::GetClass() const */

long * ZombieSilverkeyGargantuar::GetClass(void)

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
  uVar2 = ZombieGargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSilverkeyGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

