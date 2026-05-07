// Class: ZombieFutureProtectorProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFutureProtectorProps::StaticClassInit() */

void ZombieFutureProtectorProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieFutureProtectorProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046bc58c,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFutureProtectorProps::ZombieFutureProtectorProps() */

void __thiscall
ZombieFutureProtectorProps::ZombieFutureProtectorProps(ZombieFutureProtectorProps *this)

{
  undefined4 uVar1;
  
  ZombieMechProps::ZombieMechProps((ZombieMechProps *)this);
  *(undefined ***)this = &PTR_GetClass_068b0cd0;
  Set8BytesTo0(this + 0x240);
  Set8BytesTo0(this + 0x248);
  *(undefined4 *)(this + 0x234) = 1;
  this[0x23c] = (ZombieFutureProtectorProps)0x1;
  uVar1 = _FUN_046b5d00;
  *(undefined4 *)(this + 0x228) = 0x40400000;
  *(undefined4 *)(this + 0x22c) = 0x40400000;
  *(undefined4 *)(this + 0x224) = 0x41700000;
  *(undefined4 *)(this + 0x230) = uVar1;
  *(undefined4 *)(this + 0x238) = 0xbf800000;
  return;
}


/* ZombieFutureProtectorProps::StaticNew() */

ZombieFutureProtectorProps * ZombieFutureProtectorProps::StaticNew(void)

{
  ZombieFutureProtectorProps *this;
  
  this = ::operator_new(0x250);
  ZombieFutureProtectorProps(this);
  return this;
}


/* ZombieFutureProtectorProps::~ZombieFutureProtectorProps() */

void __thiscall
ZombieFutureProtectorProps::~ZombieFutureProtectorProps(ZombieFutureProtectorProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b0cd0;
  std::string::~string((string *)(this + 0x248));
  std::string::~string((string *)(this + 0x240));
  ZombieMechProps::~ZombieMechProps((ZombieMechProps *)this);
  return;
}


/* ZombieFutureProtectorProps::~ZombieFutureProtectorProps() */

void __thiscall
ZombieFutureProtectorProps::~ZombieFutureProtectorProps(ZombieFutureProtectorProps *this)

{
  ~ZombieFutureProtectorProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieFutureProtectorProps::StaticGetClass() */

long * ZombieFutureProtectorProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieFutureProtectorProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieFutureProtectorProps::GetClass() const */

long * ZombieFutureProtectorProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieFutureProtectorProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

