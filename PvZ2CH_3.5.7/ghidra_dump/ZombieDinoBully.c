// Class: ZombieDinoBully


/* ZombieDinoBully::~ZombieDinoBully() */

void __thiscall ZombieDinoBully::~ZombieDinoBully(ZombieDinoBully *this)

{
  *(undefined ***)this = &PTR_GetClass_068f8d80;
  *(undefined ***)(this + 0x10) = &PTR__ZombieDinoBully_068f97d8;
  ZombieDinoBasic::~ZombieDinoBasic((ZombieDinoBasic *)this);
  return;
}


/* non-virtual thunk to ZombieDinoBully::~ZombieDinoBully() */

void __thiscall ZombieDinoBully::~ZombieDinoBully(ZombieDinoBully *this)

{
  ~ZombieDinoBully(this + -0x10);
  return;
}


/* ZombieDinoBully::~ZombieDinoBully() */

void __thiscall ZombieDinoBully::~ZombieDinoBully(ZombieDinoBully *this)

{
  ~ZombieDinoBully(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieDinoBully::~ZombieDinoBully() */

void __thiscall ZombieDinoBully::~ZombieDinoBully(ZombieDinoBully *this)

{
  ~ZombieDinoBully(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDinoBully::StaticClassInit() */

void ZombieDinoBully::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieDinoBully");
    (*pcVar2)(plVar1,asStack_10,FUN_047faed4,0x8a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDinoBully::StaticGetClass() */

long * ZombieDinoBully::StaticGetClass(void)

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
  uVar2 = ZombieDinoBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieDinoBully",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDinoBully::GetClass() const */

long * ZombieDinoBully::GetClass(void)

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
  uVar2 = ZombieDinoBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieDinoBully",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDinoBully::ZombieDinoBully() */

void __thiscall ZombieDinoBully::ZombieDinoBully(ZombieDinoBully *this)

{
  ZombieDinoBasic::ZombieDinoBasic((ZombieDinoBasic *)this);
  *(undefined ***)this = &PTR_GetClass_068f8d80;
  *(undefined ***)(this + 0x10) = &PTR__ZombieDinoBully_068f97d8;
  return;
}


/* ZombieDinoBully::StaticNew() */

ZombieDinoBully * ZombieDinoBully::StaticNew(void)

{
  ZombieDinoBully *this;
  
  this = ::operator_new(0x8a0);
  ZombieDinoBully(this);
  return this;
}

