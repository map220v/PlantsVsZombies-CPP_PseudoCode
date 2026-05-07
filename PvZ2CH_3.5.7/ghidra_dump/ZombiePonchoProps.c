// Class: ZombiePonchoProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePonchoProps::StaticClassInit() */

void ZombiePonchoProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePonchoProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046bfca4,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePonchoProps::ZombiePonchoProps() */

void __thiscall ZombiePonchoProps::ZombiePonchoProps(ZombiePonchoProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x210) = 0x41a00000;
  *(undefined ***)this = &PTR_GetClass_068b0a00;
  *(undefined4 *)(this + 0x218) = 0x44898000;
  *(undefined4 *)(this + 0x214) = 0x3f000000;
  return;
}


/* ZombiePonchoProps::StaticNew() */

ZombiePonchoProps * ZombiePonchoProps::StaticNew(void)

{
  ZombiePonchoProps *this;
  
  this = ::operator_new(0x220);
  ZombiePonchoProps(this);
  return this;
}


/* ZombiePonchoProps::~ZombiePonchoProps() */

void __thiscall ZombiePonchoProps::~ZombiePonchoProps(ZombiePonchoProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b0a00;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombiePonchoProps::~ZombiePonchoProps() */

void __thiscall ZombiePonchoProps::~ZombiePonchoProps(ZombiePonchoProps *this)

{
  ~ZombiePonchoProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombiePonchoProps::StaticGetClass() */

long * ZombiePonchoProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePonchoProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePonchoProps::GetClass() const */

long * ZombiePonchoProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePonchoProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

