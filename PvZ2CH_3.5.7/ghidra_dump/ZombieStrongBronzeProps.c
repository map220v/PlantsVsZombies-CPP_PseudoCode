// Class: ZombieStrongBronzeProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieStrongBronzeProps::StaticClassInit() */

void ZombieStrongBronzeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieStrongBronzeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046c1618,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieStrongBronzeProps::ZombieStrongBronzeProps() */

void __thiscall ZombieStrongBronzeProps::ZombieStrongBronzeProps(ZombieStrongBronzeProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x210) = 0x3f400000;
  *(undefined ***)this = &PTR_GetClass_068b1030;
  *(undefined4 *)(this + 0x214) = 0x3f400000;
  *(undefined4 *)(this + 0x218) = 0x43480000;
  return;
}


/* ZombieStrongBronzeProps::StaticNew() */

ZombieStrongBronzeProps * ZombieStrongBronzeProps::StaticNew(void)

{
  ZombieStrongBronzeProps *this;
  
  this = ::operator_new(0x220);
  ZombieStrongBronzeProps(this);
  return this;
}


/* ZombieStrongBronzeProps::~ZombieStrongBronzeProps() */

void __thiscall ZombieStrongBronzeProps::~ZombieStrongBronzeProps(ZombieStrongBronzeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b1030;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieStrongBronzeProps::~ZombieStrongBronzeProps() */

void __thiscall ZombieStrongBronzeProps::~ZombieStrongBronzeProps(ZombieStrongBronzeProps *this)

{
  ~ZombieStrongBronzeProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieStrongBronzeProps::StaticGetClass() */

long * ZombieStrongBronzeProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieStrongBronzeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieStrongBronzeProps::GetClass() const */

long * ZombieStrongBronzeProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieStrongBronzeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

