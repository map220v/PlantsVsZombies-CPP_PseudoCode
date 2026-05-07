// Class: ZombieBullProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBullProps::StaticClassInit() */

void ZombieBullProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieBullProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046bf6a8,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBullProps::ZombieBullProps() */

void __thiscall ZombieBullProps::ZombieBullProps(ZombieBullProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068b08e0;
  Sexy::Insets::Insets((Insets *)(this + 0x210));
  *(undefined4 *)(this + 0x220) = 0x3f000000;
  *(undefined4 *)(this + 0x224) = 0x44480000;
  *(undefined4 *)(this + 0x228) = 0x3e99999a;
  return;
}


/* ZombieBullProps::StaticNew() */

ZombieBullProps * ZombieBullProps::StaticNew(void)

{
  ZombieBullProps *this;
  
  this = ::operator_new(0x230);
  ZombieBullProps(this);
  return this;
}


/* ZombieBullProps::~ZombieBullProps() */

void __thiscall ZombieBullProps::~ZombieBullProps(ZombieBullProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b08e0;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieBullProps::~ZombieBullProps() */

void __thiscall ZombieBullProps::~ZombieBullProps(ZombieBullProps *this)

{
  ~ZombieBullProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieBullProps::StaticGetClass() */

long * ZombieBullProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBullProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBullProps::GetClass() const */

long * ZombieBullProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBullProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

