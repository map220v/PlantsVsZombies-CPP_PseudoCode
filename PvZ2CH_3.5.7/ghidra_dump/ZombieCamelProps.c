// Class: ZombieCamelProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamelProps::StaticClassInit() */

void ZombieCamelProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieCamelProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046bd608,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCamelProps::ZombieCamelProps() */

void __thiscall ZombieCamelProps::ZombieCamelProps(ZombieCamelProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  this[0x230] = (ZombieCamelProps)0x0;
  *(undefined ***)this = &PTR_GetClass_068b03d0;
  *(undefined4 *)(this + 0x210) = 0x3c;
  *(undefined4 *)(this + 0x214) = 2;
  *(undefined4 *)(this + 0x218) = 6;
  *(undefined4 *)(this + 0x21c) = 0xfffffff6;
  *(undefined4 *)(this + 0x220) = 0x30c;
  *(undefined4 *)(this + 0x22c) = 3;
  *(undefined4 *)(this + 0x234) = 0x19;
  this[0x231] = (ZombieCamelProps)0x0;
  this[0x238] = (ZombieCamelProps)0x0;
  this[0x240] = (ZombieCamelProps)0x1;
  this[0x241] = (ZombieCamelProps)0x1;
  *(undefined4 *)(this + 0x224) = 0x437a0000;
  *(undefined4 *)(this + 0x228) = 0x437a0000;
  *(undefined4 *)(this + 0x23c) = 0x43960000;
  return;
}


/* ZombieCamelProps::StaticNew() */

ZombieCamelProps * ZombieCamelProps::StaticNew(void)

{
  ZombieCamelProps *this;
  
  this = ::operator_new(0x248);
  ZombieCamelProps(this);
  return this;
}


/* ZombieCamelProps::~ZombieCamelProps() */

void __thiscall ZombieCamelProps::~ZombieCamelProps(ZombieCamelProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b03d0;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieCamelProps::~ZombieCamelProps() */

void __thiscall ZombieCamelProps::~ZombieCamelProps(ZombieCamelProps *this)

{
  ~ZombieCamelProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieCamelProps::StaticGetClass() */

long * ZombieCamelProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieCamelProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCamelProps::GetClass() const */

long * ZombieCamelProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieCamelProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

