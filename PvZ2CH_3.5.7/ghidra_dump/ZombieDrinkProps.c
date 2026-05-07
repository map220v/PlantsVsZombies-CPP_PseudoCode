// Class: ZombieDrinkProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDrinkProps::StaticClassInit() */

void ZombieDrinkProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieDrinkProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046c0f44,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDrinkProps::ZombieDrinkProps() */

void __thiscall ZombieDrinkProps::ZombieDrinkProps(ZombieDrinkProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x210) = 0x3f400000;
  *(undefined ***)this = &PTR_GetClass_068b0f10;
  *(undefined4 *)(this + 0x214) = 0x3f400000;
  *(undefined4 *)(this + 0x218) = 0x43480000;
  return;
}


/* ZombieDrinkProps::StaticNew() */

ZombieDrinkProps * ZombieDrinkProps::StaticNew(void)

{
  ZombieDrinkProps *this;
  
  this = ::operator_new(0x220);
  ZombieDrinkProps(this);
  return this;
}


/* ZombieDrinkProps::~ZombieDrinkProps() */

void __thiscall ZombieDrinkProps::~ZombieDrinkProps(ZombieDrinkProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b0f10;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieDrinkProps::~ZombieDrinkProps() */

void __thiscall ZombieDrinkProps::~ZombieDrinkProps(ZombieDrinkProps *this)

{
  ~ZombieDrinkProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieDrinkProps::StaticGetClass() */

long * ZombieDrinkProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieDrinkProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDrinkProps::GetClass() const */

long * ZombieDrinkProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieDrinkProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

