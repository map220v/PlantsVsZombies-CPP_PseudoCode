// Class: ZombieCamelTouchProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelTouchProps::StaticClassInit() */

void ZombieCamelTouchProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieCamelTouchProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046bde04,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCamelTouchProps::ZombieCamelTouchProps() */

void __thiscall ZombieCamelTouchProps::ZombieCamelTouchProps(ZombieCamelTouchProps *this)

{
  ZombieCamelProps::ZombieCamelProps((ZombieCamelProps *)this);
  *(undefined4 *)(this + 0x248) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_068b0460;
  *(undefined4 *)(this + 0x244) = 0;
  return;
}


/* ZombieCamelTouchProps::StaticNew() */

ZombieCamelTouchProps * ZombieCamelTouchProps::StaticNew(void)

{
  ZombieCamelTouchProps *this;
  
  this = ::operator_new(0x250);
  ZombieCamelTouchProps(this);
  return this;
}


/* ZombieCamelTouchProps::~ZombieCamelTouchProps() */

void __thiscall ZombieCamelTouchProps::~ZombieCamelTouchProps(ZombieCamelTouchProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b0460;
  ZombieCamelProps::~ZombieCamelProps((ZombieCamelProps *)this);
  return;
}


/* ZombieCamelTouchProps::~ZombieCamelTouchProps() */

void __thiscall ZombieCamelTouchProps::~ZombieCamelTouchProps(ZombieCamelTouchProps *this)

{
  ~ZombieCamelTouchProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieCamelTouchProps::StaticGetClass() */

long * ZombieCamelTouchProps::StaticGetClass(void)

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
  uVar2 = ZombieCamelProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCamelTouchProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCamelTouchProps::GetClass() const */

long * ZombieCamelTouchProps::GetClass(void)

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
  uVar2 = ZombieCamelProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCamelTouchProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

