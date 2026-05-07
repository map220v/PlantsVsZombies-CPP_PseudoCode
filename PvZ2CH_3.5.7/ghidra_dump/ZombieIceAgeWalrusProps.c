// Class: ZombieIceAgeWalrusProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeWalrusProps::StaticClassInit() */

void ZombieIceAgeWalrusProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieIceAgeWalrusProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04775780,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceAgeWalrusProps::StaticGetClass() */

long * ZombieIceAgeWalrusProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieIceAgeWalrusProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeWalrusProps::GetClass() const */

long * ZombieIceAgeWalrusProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieIceAgeWalrusProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeWalrusProps::ZombieIceAgeWalrusProps() */

void __thiscall ZombieIceAgeWalrusProps::ZombieIceAgeWalrusProps(ZombieIceAgeWalrusProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x210) = 1;
  *(undefined4 *)(this + 0x214) = 0x1e;
  *(undefined ***)this = &PTR_GetClass_068d6c10;
  return;
}


/* ZombieIceAgeWalrusProps::StaticNew() */

ZombieIceAgeWalrusProps * ZombieIceAgeWalrusProps::StaticNew(void)

{
  ZombieIceAgeWalrusProps *this;
  
  this = ::operator_new(0x218);
  ZombieIceAgeWalrusProps(this);
  return this;
}


/* ZombieIceAgeWalrusProps::~ZombieIceAgeWalrusProps() */

void __thiscall ZombieIceAgeWalrusProps::~ZombieIceAgeWalrusProps(ZombieIceAgeWalrusProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068d6c10;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieIceAgeWalrusProps::~ZombieIceAgeWalrusProps() */

void __thiscall ZombieIceAgeWalrusProps::~ZombieIceAgeWalrusProps(ZombieIceAgeWalrusProps *this)

{
  ~ZombieIceAgeWalrusProps(this);
  AK::FreeHook(this);
  return;
}

