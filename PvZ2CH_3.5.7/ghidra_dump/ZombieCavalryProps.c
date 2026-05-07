// Class: ZombieCavalryProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCavalryProps::StaticClassInit() */

void ZombieCavalryProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieCavalryProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046c3c98,0x260,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCavalryProps::ZombieCavalryProps() */

void __thiscall ZombieCavalryProps::ZombieCavalryProps(ZombieCavalryProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068b1780;
  Sexy::Insets::Insets((Insets *)(this + 0x210));
  Sexy::Insets::Insets((Insets *)(this + 0x220));
  Sexy::Insets::Insets((Insets *)(this + 0x230));
  Set8BytesTo0((string *)(this + 600));
  *(undefined4 *)(this + 0x244) = 0x44480000;
  *(undefined4 *)(this + 0x24c) = 0x43fa0000;
  *(undefined4 *)(this + 0x240) = 0x3f000000;
  *(undefined4 *)(this + 0x250) = 0x43fa0000;
  *(undefined4 *)(this + 0x248) = 0x3e99999a;
  std::string::append((string *)(this + 600),"dark_cavalry_rider",0x43fa0000);
  return;
}


/* ZombieCavalryProps::StaticNew() */

ZombieCavalryProps * ZombieCavalryProps::StaticNew(void)

{
  ZombieCavalryProps *this;
  
  this = ::operator_new(0x260);
  ZombieCavalryProps(this);
  return this;
}


/* ZombieCavalryProps::~ZombieCavalryProps() */

void __thiscall ZombieCavalryProps::~ZombieCavalryProps(ZombieCavalryProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b1780;
  std::string::~string((string *)(this + 600));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieCavalryProps::~ZombieCavalryProps() */

void __thiscall ZombieCavalryProps::~ZombieCavalryProps(ZombieCavalryProps *this)

{
  ~ZombieCavalryProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieCavalryProps::StaticGetClass() */

long * ZombieCavalryProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieCavalryProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCavalryProps::GetClass() const */

long * ZombieCavalryProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieCavalryProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

