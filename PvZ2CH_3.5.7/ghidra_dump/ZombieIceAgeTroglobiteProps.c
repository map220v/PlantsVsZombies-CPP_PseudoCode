// Class: ZombieIceAgeTroglobiteProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeTroglobiteProps::StaticClassInit() */

void ZombieIceAgeTroglobiteProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieIceAgeTroglobiteProps");
    (*pcVar2)(plVar1,asStack_10,FUN_047681ac,0x238,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceAgeTroglobiteProps::StaticGetClass() */

long * ZombieIceAgeTroglobiteProps::StaticGetClass(void)

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
  uVar2 = ZombieWithActionsProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieIceAgeTroglobiteProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeTroglobiteProps::GetClass() const */

long * ZombieIceAgeTroglobiteProps::GetClass(void)

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
  uVar2 = ZombieWithActionsProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieIceAgeTroglobiteProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeTroglobiteProps::ZombieIceAgeTroglobiteProps() */

void __thiscall
ZombieIceAgeTroglobiteProps::ZombieIceAgeTroglobiteProps(ZombieIceAgeTroglobiteProps *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  ZombieWithActionsProps::ZombieWithActionsProps((ZombieWithActionsProps *)this);
  *(undefined4 *)(this + 0x228) = 1;
  *(undefined ***)this = &PTR_GetClass_068d19b0;
  std::string::string((string *)(this + 0x230),"icecubed");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceAgeTroglobiteProps::StaticNew() */

ZombieIceAgeTroglobiteProps * ZombieIceAgeTroglobiteProps::StaticNew(void)

{
  ZombieIceAgeTroglobiteProps *this;
  
  this = ::operator_new(0x238);
  ZombieIceAgeTroglobiteProps(this);
  return this;
}


/* ZombieIceAgeTroglobiteProps::~ZombieIceAgeTroglobiteProps() */

void __thiscall
ZombieIceAgeTroglobiteProps::~ZombieIceAgeTroglobiteProps(ZombieIceAgeTroglobiteProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068d19b0;
  std::string::~string((string *)(this + 0x230));
  ZombieWithActionsProps::~ZombieWithActionsProps((ZombieWithActionsProps *)this);
  return;
}


/* ZombieIceAgeTroglobiteProps::~ZombieIceAgeTroglobiteProps() */

void __thiscall
ZombieIceAgeTroglobiteProps::~ZombieIceAgeTroglobiteProps(ZombieIceAgeTroglobiteProps *this)

{
  ~ZombieIceAgeTroglobiteProps(this);
  AK::FreeHook(this);
  return;
}

